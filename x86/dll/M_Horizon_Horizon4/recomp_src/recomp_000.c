#include "recomp.h"

/* OnInit @ 0x127a1005 (5 bytes, 1 insns) */
void f_127a1005(void) {
  FTRACE(0x127a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a1005 jmp 0x127a1090 */
  f_127a1090(); return;
}

/* thunk_FUN_10001030 @ 0x127a100a (5 bytes, 1 insns) */
void f_127a100a(void) {
  FTRACE(0x127a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a100a jmp 0x127a1030 */
  f_127a1030(); return;
}

/* ProcessScenary @ 0x127a100f (5 bytes, 1 insns) */
void f_127a100f(void) {
  FTRACE(0x127a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a100f jmp 0x127a14b0 */
  f_127a14b0(); return;
}

/* FUN_10001030 @ 0x127a1030 (67 bytes, 26 insns) */
void f_127a1030(void) {
  FTRACE(0x127a1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a1030 push ebp */
  push32((uint32_t)(EBP));
  /* 127a1031 mov ebp, esp */
  EBP = (ESP);
  /* 127a1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a1036 push ebx */
  push32((uint32_t)(EBX));
  /* 127a1037 push esi */
  push32((uint32_t)(ESI));
  /* 127a1038 push edi */
  push32((uint32_t)(EDI));
  /* 127a1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 127a103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 127a1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127a1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1052 je 0x127a1056 */
  if (C.zf) goto L_127a1056;
  /* 127a1054 jmp 0x127a105b */
  goto L_127a105b;
L_127a1056:;
  /* 127a1056 call 0x127a1005 */
  push32(0x127a105bu); f_127a1005();
L_127a105b:;
  /* 127a105b mov eax, 1 */
  EAX = (0x1u);
  /* 127a1060 pop edi */
  EDI = (pop32());
  /* 127a1061 pop esi */
  ESI = (pop32());
  /* 127a1062 pop ebx */
  EBX = (pop32());
  /* 127a1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1068 call 0x127a3470 */
  push32(0x127a106du); f_127a3470();
  /* 127a106d mov esp, ebp */
  ESP = (EBP);
  /* 127a106f pop ebp */
  EBP = (pop32());
  /* 127a1070 ret 0xc */
  ESPCHK(0x127a1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x127a1090 (845 bytes, 221 insns) */
void f_127a1090(void) {
  FTRACE(0x127a1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a1090 push ebp */
  push32((uint32_t)(EBP));
  /* 127a1091 mov ebp, esp */
  EBP = (ESP);
  /* 127a1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a1096 push ebx */
  push32((uint32_t)(EBX));
  /* 127a1097 push esi */
  push32((uint32_t)(ESI));
  /* 127a1098 push edi */
  push32((uint32_t)(EDI));
  /* 127a1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 127a109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 127a10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127a10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a10a8 mov esi, esp */
  ESI = (ESP);
  /* 127a10aa push 0x127d03e8 */
  push32((uint32_t)(0x127d03e8u));
  /* 127a10af call dword ptr [0x127d33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33fc))), 0x127a10b5u);
  /* 127a10b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a10b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a10ba call 0x127a3470 */
  push32(0x127a10bfu); f_127a3470();
  /* 127a10bf mov esi, esp */
  ESI = (ESP);
  /* 127a10c1 push 0x127cb0fc */
  push32((uint32_t)(0x127cb0fcu));
  /* 127a10c6 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a10cb call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a10d1u);
  /* 127a10d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a10d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a10d6 call 0x127a3470 */
  push32(0x127a10dbu); f_127a3470();
  /* 127a10db mov esi, esp */
  ESI = (ESP);
  /* 127a10dd push 0x127cb0f4 */
  push32((uint32_t)(0x127cb0f4u));
  /* 127a10e2 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a10e7 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a10edu);
  /* 127a10ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a10f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a10f2 call 0x127a3470 */
  push32(0x127a10f7u); f_127a3470();
  /* 127a10f7 mov esi, esp */
  ESI = (ESP);
  /* 127a10f9 push 0x127cb0ec */
  push32((uint32_t)(0x127cb0ecu));
  /* 127a10fe push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1103 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1109u);
  /* 127a1109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a110c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a110e call 0x127a3470 */
  push32(0x127a1113u); f_127a3470();
  /* 127a1113 mov esi, esp */
  ESI = (ESP);
  /* 127a1115 push 0x127cb0e4 */
  push32((uint32_t)(0x127cb0e4u));
  /* 127a111a push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a111f call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1125u);
  /* 127a1125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1128 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a112a call 0x127a3470 */
  push32(0x127a112fu); f_127a3470();
  /* 127a112f mov esi, esp */
  ESI = (ESP);
  /* 127a1131 push 0x127cb0dc */
  push32((uint32_t)(0x127cb0dcu));
  /* 127a1136 push 0x127d0400 */
  push32((uint32_t)(0x127d0400u));
  /* 127a113b call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1141u);
  /* 127a1141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1146 call 0x127a3470 */
  push32(0x127a114bu); f_127a3470();
  /* 127a114b mov esi, esp */
  ESI = (ESP);
  /* 127a114d push 0x127cb0d4 */
  push32((uint32_t)(0x127cb0d4u));
  /* 127a1152 push 0x127d0410 */
  push32((uint32_t)(0x127d0410u));
  /* 127a1157 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a115du);
  /* 127a115d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1162 call 0x127a3470 */
  push32(0x127a1167u); f_127a3470();
  /* 127a1167 mov esi, esp */
  ESI = (ESP);
  /* 127a1169 push 0x127cb0cc */
  push32((uint32_t)(0x127cb0ccu));
  /* 127a116e push 0x127d0428 */
  push32((uint32_t)(0x127d0428u));
  /* 127a1173 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1179u);
  /* 127a1179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a117c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a117e call 0x127a3470 */
  push32(0x127a1183u); f_127a3470();
  /* 127a1183 mov esi, esp */
  ESI = (ESP);
  /* 127a1185 push 0x127cb0c4 */
  push32((uint32_t)(0x127cb0c4u));
  /* 127a118a push 0x127d0420 */
  push32((uint32_t)(0x127d0420u));
  /* 127a118f call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1195u);
  /* 127a1195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1198 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a119a call 0x127a3470 */
  push32(0x127a119fu); f_127a3470();
  /* 127a119f mov esi, esp */
  ESI = (ESP);
  /* 127a11a1 push 0x127cb0bc */
  push32((uint32_t)(0x127cb0bcu));
  /* 127a11a6 push 0x127d04a0 */
  push32((uint32_t)(0x127d04a0u));
  /* 127a11ab call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a11b1u);
  /* 127a11b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a11b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a11b6 call 0x127a3470 */
  push32(0x127a11bbu); f_127a3470();
  /* 127a11bb mov esi, esp */
  ESI = (ESP);
  /* 127a11bd push 0x127cb0b4 */
  push32((uint32_t)(0x127cb0b4u));
  /* 127a11c2 push 0x127d04b8 */
  push32((uint32_t)(0x127d04b8u));
  /* 127a11c7 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a11cdu);
  /* 127a11cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a11d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a11d2 call 0x127a3470 */
  push32(0x127a11d7u); f_127a3470();
  /* 127a11d7 mov esi, esp */
  ESI = (ESP);
  /* 127a11d9 push 0x127cb0ac */
  push32((uint32_t)(0x127cb0acu));
  /* 127a11de push 0x127d04c0 */
  push32((uint32_t)(0x127d04c0u));
  /* 127a11e3 call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a11e9u);
  /* 127a11e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a11ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a11ee call 0x127a3470 */
  push32(0x127a11f3u); f_127a3470();
  /* 127a11f3 mov esi, esp */
  ESI = (ESP);
  /* 127a11f5 push 0x127cb0a4 */
  push32((uint32_t)(0x127cb0a4u));
  /* 127a11fa push 0x127d04a8 */
  push32((uint32_t)(0x127d04a8u));
  /* 127a11ff call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1205u);
  /* 127a1205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a120a call 0x127a3470 */
  push32(0x127a120fu); f_127a3470();
  /* 127a120f mov esi, esp */
  ESI = (ESP);
  /* 127a1211 push 0x127cb098 */
  push32((uint32_t)(0x127cb098u));
  /* 127a1216 push 0x127d04b0 */
  push32((uint32_t)(0x127d04b0u));
  /* 127a121b call dword ptr [0x127d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3400))), 0x127a1221u);
  /* 127a1221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1226 call 0x127a3470 */
  push32(0x127a122bu); f_127a3470();
  /* 127a122b mov esi, esp */
  ESI = (ESP);
  /* 127a122d push 0x127cb090 */
  push32((uint32_t)(0x127cb090u));
  /* 127a1232 push 0x127d0458 */
  push32((uint32_t)(0x127d0458u));
  /* 127a1237 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a123du);
  /* 127a123d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1242 call 0x127a3470 */
  push32(0x127a1247u); f_127a3470();
  /* 127a1247 mov esi, esp */
  ESI = (ESP);
  /* 127a1249 push 0x127cb088 */
  push32((uint32_t)(0x127cb088u));
  /* 127a124e push 0x127d0460 */
  push32((uint32_t)(0x127d0460u));
  /* 127a1253 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1259u);
  /* 127a1259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a125c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a125e call 0x127a3470 */
  push32(0x127a1263u); f_127a3470();
  /* 127a1263 mov esi, esp */
  ESI = (ESP);
  /* 127a1265 push 0x127cb080 */
  push32((uint32_t)(0x127cb080u));
  /* 127a126a push 0x127d0468 */
  push32((uint32_t)(0x127d0468u));
  /* 127a126f call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1275u);
  /* 127a1275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a127a call 0x127a3470 */
  push32(0x127a127fu); f_127a3470();
  /* 127a127f mov esi, esp */
  ESI = (ESP);
  /* 127a1281 push 0x127cb078 */
  push32((uint32_t)(0x127cb078u));
  /* 127a1286 push 0x127d0470 */
  push32((uint32_t)(0x127d0470u));
  /* 127a128b call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1291u);
  /* 127a1291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1294 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1296 call 0x127a3470 */
  push32(0x127a129bu); f_127a3470();
  /* 127a129b mov esi, esp */
  ESI = (ESP);
  /* 127a129d push 0x127cb070 */
  push32((uint32_t)(0x127cb070u));
  /* 127a12a2 push 0x127d0478 */
  push32((uint32_t)(0x127d0478u));
  /* 127a12a7 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a12adu);
  /* 127a12ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a12b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a12b2 call 0x127a3470 */
  push32(0x127a12b7u); f_127a3470();
  /* 127a12b7 mov esi, esp */
  ESI = (ESP);
  /* 127a12b9 push 0x127cb068 */
  push32((uint32_t)(0x127cb068u));
  /* 127a12be push 0x127d0480 */
  push32((uint32_t)(0x127d0480u));
  /* 127a12c3 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a12c9u);
  /* 127a12c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a12cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a12ce call 0x127a3470 */
  push32(0x127a12d3u); f_127a3470();
  /* 127a12d3 mov esi, esp */
  ESI = (ESP);
  /* 127a12d5 push 0x127cb060 */
  push32((uint32_t)(0x127cb060u));
  /* 127a12da push 0x127d0488 */
  push32((uint32_t)(0x127d0488u));
  /* 127a12df call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a12e5u);
  /* 127a12e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a12e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a12ea call 0x127a3470 */
  push32(0x127a12efu); f_127a3470();
  /* 127a12ef mov esi, esp */
  ESI = (ESP);
  /* 127a12f1 push 0x127cb058 */
  push32((uint32_t)(0x127cb058u));
  /* 127a12f6 push 0x127d0490 */
  push32((uint32_t)(0x127d0490u));
  /* 127a12fb call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1301u);
  /* 127a1301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1304 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1306 call 0x127a3470 */
  push32(0x127a130bu); f_127a3470();
  /* 127a130b mov esi, esp */
  ESI = (ESP);
  /* 127a130d push 0x127cb050 */
  push32((uint32_t)(0x127cb050u));
  /* 127a1312 push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a1317 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a131du);
  /* 127a131d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1322 call 0x127a3470 */
  push32(0x127a1327u); f_127a3470();
  /* 127a1327 mov esi, esp */
  ESI = (ESP);
  /* 127a1329 push 0x127cb048 */
  push32((uint32_t)(0x127cb048u));
  /* 127a132e push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a1333 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1339u);
  /* 127a1339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a133c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a133e call 0x127a3470 */
  push32(0x127a1343u); f_127a3470();
  /* 127a1343 mov esi, esp */
  ESI = (ESP);
  /* 127a1345 push 0x127cb040 */
  push32((uint32_t)(0x127cb040u));
  /* 127a134a push 0x127d0430 */
  push32((uint32_t)(0x127d0430u));
  /* 127a134f call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1355u);
  /* 127a1355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a135a call 0x127a3470 */
  push32(0x127a135fu); f_127a3470();
  /* 127a135f mov esi, esp */
  ESI = (ESP);
  /* 127a1361 push 0x127cb038 */
  push32((uint32_t)(0x127cb038u));
  /* 127a1366 push 0x127d0448 */
  push32((uint32_t)(0x127d0448u));
  /* 127a136b call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a1371u);
  /* 127a1371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1374 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1376 call 0x127a3470 */
  push32(0x127a137bu); f_127a3470();
  /* 127a137b mov esi, esp */
  ESI = (ESP);
  /* 127a137d push 0x127cb030 */
  push32((uint32_t)(0x127cb030u));
  /* 127a1382 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1387 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a138du);
  /* 127a138d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1392 call 0x127a3470 */
  push32(0x127a1397u); f_127a3470();
  /* 127a1397 mov esi, esp */
  ESI = (ESP);
  /* 127a1399 push 0x127cb028 */
  push32((uint32_t)(0x127cb028u));
  /* 127a139e push 0x127d0450 */
  push32((uint32_t)(0x127d0450u));
  /* 127a13a3 call dword ptr [0x127d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3404))), 0x127a13a9u);
  /* 127a13a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a13ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a13ae call 0x127a3470 */
  push32(0x127a13b3u); f_127a3470();
  /* 127a13b3 mov esi, esp */
  ESI = (ESP);
  /* 127a13b5 push 0x127cb01c */
  push32((uint32_t)(0x127cb01cu));
  /* 127a13ba push 1 */
  push32((uint32_t)(0x1u));
  /* 127a13bc call dword ptr [0x127d3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3408))), 0x127a13c2u);
  /* 127a13c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a13c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a13c7 call 0x127a3470 */
  push32(0x127a13ccu); f_127a3470();
  /* 127a13cc pop edi */
  EDI = (pop32());
  /* 127a13cd pop esi */
  ESI = (pop32());
  /* 127a13ce pop ebx */
  EBX = (pop32());
  /* 127a13cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a13d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a13d4 call 0x127a3470 */
  push32(0x127a13d9u); f_127a3470();
  /* 127a13d9 mov esp, ebp */
  ESP = (EBP);
  /* 127a13db pop ebp */
  EBP = (pop32());
  /* 127a13dc ret  */
  ESPCHK(0x127a1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100014b0 @ 0x127a14b0 (6412 bytes, 1856 insns) */
void f_127a14b0(void) {
  FTRACE(0x127a14b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a14b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a14b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a14b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a14b6 push ebx */
  push32((uint32_t)(EBX));
  /* 127a14b7 push esi */
  push32((uint32_t)(ESI));
  /* 127a14b8 push edi */
  push32((uint32_t)(EDI));
  /* 127a14b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 127a14bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 127a14c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127a14c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a14c8 mov esi, esp */
  ESI = (ESP);
  /* 127a14ca push 1 */
  push32((uint32_t)(0x1u));
  /* 127a14cc call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a14d2u);
  /* 127a14d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a14d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a14d7 call 0x127a3470 */
  push32(0x127a14dcu); f_127a3470();
  /* 127a14dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a14e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a14e3 je 0x127a1699 */
  if (C.zf) goto L_127a1699;
  /* 127a14e9 mov esi, esp */
  ESI = (ESP);
  /* 127a14eb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a14ed push 1 */
  push32((uint32_t)(0x1u));
  /* 127a14ef call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a14f5u);
  /* 127a14f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a14f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a14fa call 0x127a3470 */
  push32(0x127a14ffu); f_127a3470();
  /* 127a14ff mov esi, esp */
  ESI = (ESP);
  /* 127a1501 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a1506 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a1508 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a150a call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a1510u);
  /* 127a1510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1515 call 0x127a3470 */
  push32(0x127a151au); f_127a3470();
  /* 127a151a mov esi, esp */
  ESI = (ESP);
  /* 127a151c push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a1521 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1523 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1525 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a152bu);
  /* 127a152b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a152e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1530 call 0x127a3470 */
  push32(0x127a1535u); f_127a3470();
  /* 127a1535 mov esi, esp */
  ESI = (ESP);
  /* 127a1537 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1539 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a153b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a153d call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a1543u);
  /* 127a1543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1548 call 0x127a3470 */
  push32(0x127a154du); f_127a3470();
  /* 127a154d mov esi, esp */
  ESI = (ESP);
  /* 127a154f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1551 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a1553 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1555 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a155bu);
  /* 127a155b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a155e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1560 call 0x127a3470 */
  push32(0x127a1565u); f_127a3470();
  /* 127a1565 mov esi, esp */
  ESI = (ESP);
  /* 127a1567 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a156c push 5 */
  push32((uint32_t)(0x5u));
  /* 127a156e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1570 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a1576u);
  /* 127a1576 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1579 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a157b call 0x127a3470 */
  push32(0x127a1580u); f_127a3470();
  /* 127a1580 mov esi, esp */
  ESI = (ESP);
  /* 127a1582 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a1587 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a1589 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a158b call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a1591u);
  /* 127a1591 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1596 call 0x127a3470 */
  push32(0x127a159bu); f_127a3470();
  /* 127a159b mov esi, esp */
  ESI = (ESP);
  /* 127a159d push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a15a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a15a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a15a6 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a15acu);
  /* 127a15ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a15af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a15b1 call 0x127a3470 */
  push32(0x127a15b6u); f_127a3470();
  /* 127a15b6 mov esi, esp */
  ESI = (ESP);
  /* 127a15b8 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a15bd push 5 */
  push32((uint32_t)(0x5u));
  /* 127a15bf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a15c1 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a15c7u);
  /* 127a15c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a15ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a15cc call 0x127a3470 */
  push32(0x127a15d1u); f_127a3470();
  /* 127a15d1 mov esi, esp */
  ESI = (ESP);
  /* 127a15d3 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a15d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a15da push 1 */
  push32((uint32_t)(0x1u));
  /* 127a15dc call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a15e2u);
  /* 127a15e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a15e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a15e7 call 0x127a3470 */
  push32(0x127a15ecu); f_127a3470();
  /* 127a15ec mov esi, esp */
  ESI = (ESP);
  /* 127a15ee push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 127a15f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a15f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a15f7 call dword ptr [0x127d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33cc))), 0x127a15fdu);
  /* 127a15fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1602 call 0x127a3470 */
  push32(0x127a1607u); f_127a3470();
  /* 127a1607 mov esi, esp */
  ESI = (ESP);
  /* 127a1609 push 0x127cb11c */
  push32((uint32_t)(0x127cb11cu));
  /* 127a160e call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a1614u);
  /* 127a1614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1617 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1619 call 0x127a3470 */
  push32(0x127a161eu); f_127a3470();
  /* 127a161e mov esi, esp */
  ESI = (ESP);
  /* 127a1620 push 0x127cb118 */
  push32((uint32_t)(0x127cb118u));
  /* 127a1625 call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a162bu);
  /* 127a162b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a162e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1630 call 0x127a3470 */
  push32(0x127a1635u); f_127a3470();
  /* 127a1635 mov esi, esp */
  ESI = (ESP);
  /* 127a1637 push 0x3a0 */
  push32((uint32_t)(0x3a0u));
  /* 127a163c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a163e call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a1644u);
  /* 127a1644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1649 call 0x127a3470 */
  push32(0x127a164eu); f_127a3470();
  /* 127a164e mov esi, esp */
  ESI = (ESP);
  /* 127a1650 push 0xf00 */
  push32((uint32_t)(0xf00u));
  /* 127a1655 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1657 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a165du);
  /* 127a165d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1662 call 0x127a3470 */
  push32(0x127a1667u); f_127a3470();
  /* 127a1667 mov esi, esp */
  ESI = (ESP);
  /* 127a1669 push 0x3c0 */
  push32((uint32_t)(0x3c0u));
  /* 127a166e push 2 */
  push32((uint32_t)(0x2u));
  /* 127a1670 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a1676u);
  /* 127a1676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a167b call 0x127a3470 */
  push32(0x127a1680u); f_127a3470();
  /* 127a1680 mov esi, esp */
  ESI = (ESP);
  /* 127a1682 push 0x385 */
  push32((uint32_t)(0x385u));
  /* 127a1687 push 5 */
  push32((uint32_t)(0x5u));
  /* 127a1689 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a168fu);
  /* 127a168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1694 call 0x127a3470 */
  push32(0x127a1699u); f_127a3470();
L_127a1699:;
  /* 127a1699 mov esi, esp */
  ESI = (ESP);
  /* 127a169b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a169d call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a16a3u);
  /* 127a16a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a16a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a16a8 call 0x127a3470 */
  push32(0x127a16adu); f_127a3470();
  /* 127a16ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a16b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a16b4 je 0x127a16e8 */
  if (C.zf) goto L_127a16e8;
  /* 127a16b6 mov esi, esp */
  ESI = (ESP);
  /* 127a16b8 push 0x3c0 */
  push32((uint32_t)(0x3c0u));
  /* 127a16bd push 2 */
  push32((uint32_t)(0x2u));
  /* 127a16bf call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a16c5u);
  /* 127a16c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a16c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a16ca call 0x127a3470 */
  push32(0x127a16cfu); f_127a3470();
  /* 127a16cf mov esi, esp */
  ESI = (ESP);
  /* 127a16d1 push 0x3a0 */
  push32((uint32_t)(0x3a0u));
  /* 127a16d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a16d8 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a16deu);
  /* 127a16de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a16e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a16e3 call 0x127a3470 */
  push32(0x127a16e8u); f_127a3470();
L_127a16e8:;
  /* 127a16e8 mov esi, esp */
  ESI = (ESP);
  /* 127a16ea push 2 */
  push32((uint32_t)(0x2u));
  /* 127a16ec call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a16f2u);
  /* 127a16f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a16f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a16f7 call 0x127a3470 */
  push32(0x127a16fcu); f_127a3470();
  /* 127a16fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1703 je 0x127a1842 */
  if (C.zf) goto L_127a1842;
  /* 127a1709 mov esi, esp */
  ESI = (ESP);
  /* 127a170b push 1 */
  push32((uint32_t)(0x1u));
  /* 127a170d call dword ptr [0x127d33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33dc))), 0x127a1713u);
  /* 127a1713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1716 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1718 call 0x127a3470 */
  push32(0x127a171du); f_127a3470();
  /* 127a171d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1724 je 0x127a1842 */
  if (C.zf) goto L_127a1842;
  /* 127a172a mov esi, esp */
  ESI = (ESP);
  /* 127a172c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a172e push 2 */
  push32((uint32_t)(0x2u));
  /* 127a1730 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1736u);
  /* 127a1736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a173b call 0x127a3470 */
  push32(0x127a1740u); f_127a3470();
  /* 127a1740 mov esi, esp */
  ESI = (ESP);
  /* 127a1742 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1744 push 7 */
  push32((uint32_t)(0x7u));
  /* 127a1746 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a174cu);
  /* 127a174c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a174f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1751 call 0x127a3470 */
  push32(0x127a1756u); f_127a3470();
  /* 127a1756 mov esi, esp */
  ESI = (ESP);
  /* 127a1758 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a175a push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a175f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1761 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1767u);
  /* 127a1767 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a176a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a176c call 0x127a3470 */
  push32(0x127a1771u); f_127a3470();
  /* 127a1771 mov esi, esp */
  ESI = (ESP);
  /* 127a1773 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1775 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a177a push 0x127d0458 */
  push32((uint32_t)(0x127d0458u));
  /* 127a177f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1781 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1787u);
  /* 127a1787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a178a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a178c call 0x127a3470 */
  push32(0x127a1791u); f_127a3470();
  /* 127a1791 mov esi, esp */
  ESI = (ESP);
  /* 127a1793 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1795 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a179a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a179c call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a17a2u);
  /* 127a17a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a17a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a17a7 call 0x127a3470 */
  push32(0x127a17acu); f_127a3470();
  /* 127a17ac mov esi, esp */
  ESI = (ESP);
  /* 127a17ae push 0 */
  push32((uint32_t)(0x0u));
  /* 127a17b0 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a17b5 push 0x127d0460 */
  push32((uint32_t)(0x127d0460u));
  /* 127a17ba push 1 */
  push32((uint32_t)(0x1u));
  /* 127a17bc call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a17c2u);
  /* 127a17c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a17c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a17c7 call 0x127a3470 */
  push32(0x127a17ccu); f_127a3470();
  /* 127a17cc mov esi, esp */
  ESI = (ESP);
  /* 127a17ce push 0 */
  push32((uint32_t)(0x0u));
  /* 127a17d0 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a17d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a17d7 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a17ddu);
  /* 127a17dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a17e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a17e2 call 0x127a3470 */
  push32(0x127a17e7u); f_127a3470();
  /* 127a17e7 mov esi, esp */
  ESI = (ESP);
  /* 127a17e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a17eb push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a17f0 push 0x127d0468 */
  push32((uint32_t)(0x127d0468u));
  /* 127a17f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a17f7 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a17fdu);
  /* 127a17fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1802 call 0x127a3470 */
  push32(0x127a1807u); f_127a3470();
  /* 127a1807 mov esi, esp */
  ESI = (ESP);
  /* 127a1809 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a180b push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1810 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1812 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1818u);
  /* 127a1818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a181b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a181d call 0x127a3470 */
  push32(0x127a1822u); f_127a3470();
  /* 127a1822 mov esi, esp */
  ESI = (ESP);
  /* 127a1824 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1826 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a182b push 0x127d0470 */
  push32((uint32_t)(0x127d0470u));
  /* 127a1830 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1832 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1838u);
  /* 127a1838 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a183b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a183d call 0x127a3470 */
  push32(0x127a1842u); f_127a3470();
L_127a1842:;
  /* 127a1842 mov esi, esp */
  ESI = (ESP);
  /* 127a1844 push 7 */
  push32((uint32_t)(0x7u));
  /* 127a1846 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a184cu);
  /* 127a184c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a184f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1851 call 0x127a3470 */
  push32(0x127a1856u); f_127a3470();
  /* 127a1856 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a185b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a185d jne 0x127a1970 */
  if (!C.zf) goto L_127a1970;
  /* 127a1863 mov esi, esp */
  ESI = (ESP);
  /* 127a1865 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1867 call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a186du);
  /* 127a186d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1872 call 0x127a3470 */
  push32(0x127a1877u); f_127a3470();
  /* 127a1877 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a187c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a187e je 0x127a1970 */
  if (C.zf) goto L_127a1970;
  /* 127a1884 mov esi, esp */
  ESI = (ESP);
  /* 127a1886 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1888 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a188d push 1 */
  push32((uint32_t)(0x1u));
  /* 127a188f call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1895u);
  /* 127a1895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a189a call 0x127a3470 */
  push32(0x127a189fu); f_127a3470();
  /* 127a189f mov esi, esp */
  ESI = (ESP);
  /* 127a18a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a18a3 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a18a8 push 0x127d0458 */
  push32((uint32_t)(0x127d0458u));
  /* 127a18ad push 1 */
  push32((uint32_t)(0x1u));
  /* 127a18af call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a18b5u);
  /* 127a18b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a18b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a18ba call 0x127a3470 */
  push32(0x127a18bfu); f_127a3470();
  /* 127a18bf mov esi, esp */
  ESI = (ESP);
  /* 127a18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a18c3 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a18c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a18ca call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a18d0u);
  /* 127a18d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a18d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a18d5 call 0x127a3470 */
  push32(0x127a18dau); f_127a3470();
  /* 127a18da mov esi, esp */
  ESI = (ESP);
  /* 127a18dc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a18de push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a18e3 push 0x127d0460 */
  push32((uint32_t)(0x127d0460u));
  /* 127a18e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a18ea call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a18f0u);
  /* 127a18f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a18f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a18f5 call 0x127a3470 */
  push32(0x127a18fau); f_127a3470();
  /* 127a18fa mov esi, esp */
  ESI = (ESP);
  /* 127a18fc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a18fe push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1903 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1905 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a190bu);
  /* 127a190b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a190e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1910 call 0x127a3470 */
  push32(0x127a1915u); f_127a3470();
  /* 127a1915 mov esi, esp */
  ESI = (ESP);
  /* 127a1917 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1919 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a191e push 0x127d0468 */
  push32((uint32_t)(0x127d0468u));
  /* 127a1923 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1925 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a192bu);
  /* 127a192b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1930 call 0x127a3470 */
  push32(0x127a1935u); f_127a3470();
  /* 127a1935 mov esi, esp */
  ESI = (ESP);
  /* 127a1937 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1939 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a193e push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1940 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1946u);
  /* 127a1946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a194b call 0x127a3470 */
  push32(0x127a1950u); f_127a3470();
  /* 127a1950 mov esi, esp */
  ESI = (ESP);
  /* 127a1952 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1954 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1959 push 0x127d0470 */
  push32((uint32_t)(0x127d0470u));
  /* 127a195e push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1960 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1966u);
  /* 127a1966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a196b call 0x127a3470 */
  push32(0x127a1970u); f_127a3470();
L_127a1970:;
  /* 127a1970 mov esi, esp */
  ESI = (ESP);
  /* 127a1972 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a1974 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a197au);
  /* 127a197a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a197f call 0x127a3470 */
  push32(0x127a1984u); f_127a3470();
  /* 127a1984 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a198b je 0x127a1b29 */
  if (C.zf) goto L_127a1b29;
  /* 127a1991 mov esi, esp */
  ESI = (ESP);
  /* 127a1993 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1998 push 0x127d0460 */
  push32((uint32_t)(0x127d0460u));
  /* 127a199d call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a19a3u);
  /* 127a19a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a19a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a19a8 call 0x127a3470 */
  push32(0x127a19adu); f_127a3470();
  /* 127a19ad mov esi, eax */
  ESI = (EAX);
  /* 127a19af mov edi, esp */
  EDI = (ESP);
  /* 127a19b1 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a19b6 call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a19bcu);
  /* 127a19bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a19bf cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a19c1 call 0x127a3470 */
  push32(0x127a19c6u); f_127a3470();
  /* 127a19c6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a19c8 jne 0x127a1b29 */
  if (!C.zf) goto L_127a1b29;
  /* 127a19ce mov esi, esp */
  ESI = (ESP);
  /* 127a19d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a19d2 push 7 */
  push32((uint32_t)(0x7u));
  /* 127a19d4 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a19dau);
  /* 127a19da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a19dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a19df call 0x127a3470 */
  push32(0x127a19e4u); f_127a3470();
  /* 127a19e4 mov esi, esp */
  ESI = (ESP);
  /* 127a19e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a19e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a19ea call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a19f0u);
  /* 127a19f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a19f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a19f5 call 0x127a3470 */
  push32(0x127a19fau); f_127a3470();
  /* 127a19fa mov esi, esp */
  ESI = (ESP);
  /* 127a19fc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a19fe push 4 */
  push32((uint32_t)(0x4u));
  /* 127a1a00 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1a06u);
  /* 127a1a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a0b call 0x127a3470 */
  push32(0x127a1a10u); f_127a3470();
  /* 127a1a10 mov esi, esp */
  ESI = (ESP);
  /* 127a1a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1a14 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127a1a16 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1a1cu);
  /* 127a1a1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a21 call 0x127a3470 */
  push32(0x127a1a26u); f_127a3470();
  /* 127a1a26 mov esi, esp */
  ESI = (ESP);
  /* 127a1a28 push 0x127cb114 */
  push32((uint32_t)(0x127cb114u));
  /* 127a1a2d call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a1a33u);
  /* 127a1a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a38 call 0x127a3470 */
  push32(0x127a1a3du); f_127a3470();
  /* 127a1a3d mov esi, esp */
  ESI = (ESP);
  /* 127a1a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1a41 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a1a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1a48 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1a4eu);
  /* 127a1a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a53 call 0x127a3470 */
  push32(0x127a1a58u); f_127a3470();
  /* 127a1a58 mov esi, esp */
  ESI = (ESP);
  /* 127a1a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1a5c push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1a61 push 0x127d0478 */
  push32((uint32_t)(0x127d0478u));
  /* 127a1a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1a68 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1a6eu);
  /* 127a1a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a73 call 0x127a3470 */
  push32(0x127a1a78u); f_127a3470();
  /* 127a1a78 mov esi, esp */
  ESI = (ESP);
  /* 127a1a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1a7c push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1a83 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1a89u);
  /* 127a1a89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1a8e call 0x127a3470 */
  push32(0x127a1a93u); f_127a3470();
  /* 127a1a93 mov esi, esp */
  ESI = (ESP);
  /* 127a1a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1a97 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1a9c push 0x127d0480 */
  push32((uint32_t)(0x127d0480u));
  /* 127a1aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1aa3 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1aa9u);
  /* 127a1aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1aac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1aae call 0x127a3470 */
  push32(0x127a1ab3u); f_127a3470();
  /* 127a1ab3 mov esi, esp */
  ESI = (ESP);
  /* 127a1ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1ab7 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1abc push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1abe call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1ac4u);
  /* 127a1ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ac7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ac9 call 0x127a3470 */
  push32(0x127a1aceu); f_127a3470();
  /* 127a1ace mov esi, esp */
  ESI = (ESP);
  /* 127a1ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1ad2 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1ad7 push 0x127d0488 */
  push32((uint32_t)(0x127d0488u));
  /* 127a1adc push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1ade call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1ae4u);
  /* 127a1ae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ae9 call 0x127a3470 */
  push32(0x127a1aeeu); f_127a3470();
  /* 127a1aee mov esi, esp */
  ESI = (ESP);
  /* 127a1af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1af2 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1af9 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1affu);
  /* 127a1aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1b04 call 0x127a3470 */
  push32(0x127a1b09u); f_127a3470();
  /* 127a1b09 mov esi, esp */
  ESI = (ESP);
  /* 127a1b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1b0d push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1b12 push 0x127d0490 */
  push32((uint32_t)(0x127d0490u));
  /* 127a1b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1b19 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1b1fu);
  /* 127a1b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1b24 call 0x127a3470 */
  push32(0x127a1b29u); f_127a3470();
L_127a1b29:;
  /* 127a1b29 mov esi, esp */
  ESI = (ESP);
  /* 127a1b2b push 4 */
  push32((uint32_t)(0x4u));
  /* 127a1b2d call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a1b33u);
  /* 127a1b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1b38 call 0x127a3470 */
  push32(0x127a1b3du); f_127a3470();
  /* 127a1b3d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1b44 jne 0x127a1c57 */
  if (!C.zf) goto L_127a1c57;
  /* 127a1b4a mov esi, esp */
  ESI = (ESP);
  /* 127a1b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1b4e call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a1b54u);
  /* 127a1b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1b59 call 0x127a3470 */
  push32(0x127a1b5eu); f_127a3470();
  /* 127a1b5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1b65 je 0x127a1c57 */
  if (C.zf) goto L_127a1c57;
  /* 127a1b6b mov esi, esp */
  ESI = (ESP);
  /* 127a1b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1b6f push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a1b74 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1b76 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1b7cu);
  /* 127a1b7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1b81 call 0x127a3470 */
  push32(0x127a1b86u); f_127a3470();
  /* 127a1b86 mov esi, esp */
  ESI = (ESP);
  /* 127a1b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1b8a push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1b8f push 0x127d0478 */
  push32((uint32_t)(0x127d0478u));
  /* 127a1b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1b96 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1b9cu);
  /* 127a1b9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1b9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ba1 call 0x127a3470 */
  push32(0x127a1ba6u); f_127a3470();
  /* 127a1ba6 mov esi, esp */
  ESI = (ESP);
  /* 127a1ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1baa push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1baf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1bb1 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1bb7u);
  /* 127a1bb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1bbc call 0x127a3470 */
  push32(0x127a1bc1u); f_127a3470();
  /* 127a1bc1 mov esi, esp */
  ESI = (ESP);
  /* 127a1bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1bc5 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1bca push 0x127d0480 */
  push32((uint32_t)(0x127d0480u));
  /* 127a1bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1bd1 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1bd7u);
  /* 127a1bd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1bdc call 0x127a3470 */
  push32(0x127a1be1u); f_127a3470();
  /* 127a1be1 mov esi, esp */
  ESI = (ESP);
  /* 127a1be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1be5 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1bea push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1bec call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1bf2u);
  /* 127a1bf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1bf7 call 0x127a3470 */
  push32(0x127a1bfcu); f_127a3470();
  /* 127a1bfc mov esi, esp */
  ESI = (ESP);
  /* 127a1bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1c00 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1c05 push 0x127d0488 */
  push32((uint32_t)(0x127d0488u));
  /* 127a1c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1c0c call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1c12u);
  /* 127a1c12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1c17 call 0x127a3470 */
  push32(0x127a1c1cu); f_127a3470();
  /* 127a1c1c mov esi, esp */
  ESI = (ESP);
  /* 127a1c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1c20 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1c27 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1c2du);
  /* 127a1c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1c32 call 0x127a3470 */
  push32(0x127a1c37u); f_127a3470();
  /* 127a1c37 mov esi, esp */
  ESI = (ESP);
  /* 127a1c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1c3b push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1c40 push 0x127d0490 */
  push32((uint32_t)(0x127d0490u));
  /* 127a1c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1c47 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1c4du);
  /* 127a1c4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1c50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1c52 call 0x127a3470 */
  push32(0x127a1c57u); f_127a3470();
L_127a1c57:;
  /* 127a1c57 mov esi, esp */
  ESI = (ESP);
  /* 127a1c59 push 5 */
  push32((uint32_t)(0x5u));
  /* 127a1c5b call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a1c61u);
  /* 127a1c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1c66 call 0x127a3470 */
  push32(0x127a1c6bu); f_127a3470();
  /* 127a1c6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1c72 je 0x127a1e2a */
  if (C.zf) goto L_127a1e2a;
  /* 127a1c78 mov esi, esp */
  ESI = (ESP);
  /* 127a1c7a push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a1c7f push 0x127d0478 */
  push32((uint32_t)(0x127d0478u));
  /* 127a1c84 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a1c8au);
  /* 127a1c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1c8f call 0x127a3470 */
  push32(0x127a1c94u); f_127a3470();
  /* 127a1c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1c96 jg 0x127a1cfc */
  if ((!C.zf&&C.sf==C.of)) goto L_127a1cfc;
  /* 127a1c98 mov esi, esp */
  ESI = (ESP);
  /* 127a1c9a push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1c9f push 0x127d0480 */
  push32((uint32_t)(0x127d0480u));
  /* 127a1ca4 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a1caau);
  /* 127a1caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1caf call 0x127a3470 */
  push32(0x127a1cb4u); f_127a3470();
  /* 127a1cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1cb6 jg 0x127a1cfc */
  if ((!C.zf&&C.sf==C.of)) goto L_127a1cfc;
  /* 127a1cb8 mov esi, esp */
  ESI = (ESP);
  /* 127a1cba push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1cbf push 0x127d0488 */
  push32((uint32_t)(0x127d0488u));
  /* 127a1cc4 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a1ccau);
  /* 127a1cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ccf call 0x127a3470 */
  push32(0x127a1cd4u); f_127a3470();
  /* 127a1cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1cd6 jg 0x127a1cfc */
  if ((!C.zf&&C.sf==C.of)) goto L_127a1cfc;
  /* 127a1cd8 mov esi, esp */
  ESI = (ESP);
  /* 127a1cda push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1cdf push 0x127d0490 */
  push32((uint32_t)(0x127d0490u));
  /* 127a1ce4 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a1ceau);
  /* 127a1cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ced cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1cef call 0x127a3470 */
  push32(0x127a1cf4u); f_127a3470();
  /* 127a1cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1cf6 jle 0x127a1e2a */
  if ((C.zf||C.sf!=C.of)) goto L_127a1e2a;
L_127a1cfc:;
  /* 127a1cfc mov esi, esp */
  ESI = (ESP);
  /* 127a1cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1d00 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a1d02 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1d08u);
  /* 127a1d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d0d call 0x127a3470 */
  push32(0x127a1d12u); f_127a3470();
  /* 127a1d12 mov esi, esp */
  ESI = (ESP);
  /* 127a1d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d16 push 5 */
  push32((uint32_t)(0x5u));
  /* 127a1d18 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1d1eu);
  /* 127a1d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d23 call 0x127a3470 */
  push32(0x127a1d28u); f_127a3470();
  /* 127a1d28 mov esi, esp */
  ESI = (ESP);
  /* 127a1d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d2c push 6 */
  push32((uint32_t)(0x6u));
  /* 127a1d2e call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1d34u);
  /* 127a1d34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d39 call 0x127a3470 */
  push32(0x127a1d3eu); f_127a3470();
  /* 127a1d3e mov esi, esp */
  ESI = (ESP);
  /* 127a1d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d42 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a1d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1d49 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1d4fu);
  /* 127a1d4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d54 call 0x127a3470 */
  push32(0x127a1d59u); f_127a3470();
  /* 127a1d59 mov esi, esp */
  ESI = (ESP);
  /* 127a1d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d5d push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1d62 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1d69 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1d6fu);
  /* 127a1d6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d74 call 0x127a3470 */
  push32(0x127a1d79u); f_127a3470();
  /* 127a1d79 mov esi, esp */
  ESI = (ESP);
  /* 127a1d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d7d push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1d84 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1d8au);
  /* 127a1d8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1d8f call 0x127a3470 */
  push32(0x127a1d94u); f_127a3470();
  /* 127a1d94 mov esi, esp */
  ESI = (ESP);
  /* 127a1d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1d98 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1d9d push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1da4 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1daau);
  /* 127a1daa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1daf call 0x127a3470 */
  push32(0x127a1db4u); f_127a3470();
  /* 127a1db4 mov esi, esp */
  ESI = (ESP);
  /* 127a1db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1db8 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1dbf call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1dc5u);
  /* 127a1dc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1dca call 0x127a3470 */
  push32(0x127a1dcfu); f_127a3470();
  /* 127a1dcf mov esi, esp */
  ESI = (ESP);
  /* 127a1dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1dd3 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1dd8 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1ddd push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1ddf call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1de5u);
  /* 127a1de5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1dea call 0x127a3470 */
  push32(0x127a1defu); f_127a3470();
  /* 127a1def mov esi, esp */
  ESI = (ESP);
  /* 127a1df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1df3 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1dfa call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1e00u);
  /* 127a1e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1e03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1e05 call 0x127a3470 */
  push32(0x127a1e0au); f_127a3470();
  /* 127a1e0a mov esi, esp */
  ESI = (ESP);
  /* 127a1e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1e0e push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1e13 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1e1a call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1e20u);
  /* 127a1e20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1e25 call 0x127a3470 */
  push32(0x127a1e2au); f_127a3470();
L_127a1e2a:;
  /* 127a1e2a mov esi, esp */
  ESI = (ESP);
  /* 127a1e2c push 6 */
  push32((uint32_t)(0x6u));
  /* 127a1e2e call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a1e34u);
  /* 127a1e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1e39 call 0x127a3470 */
  push32(0x127a1e3eu); f_127a3470();
  /* 127a1e3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1e45 jne 0x127a1f58 */
  if (!C.zf) goto L_127a1f58;
  /* 127a1e4b mov esi, esp */
  ESI = (ESP);
  /* 127a1e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1e4f call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a1e55u);
  /* 127a1e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1e5a call 0x127a3470 */
  push32(0x127a1e5fu); f_127a3470();
  /* 127a1e5f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1e66 je 0x127a1f58 */
  if (C.zf) goto L_127a1f58;
  /* 127a1e6c mov esi, esp */
  ESI = (ESP);
  /* 127a1e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1e70 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a1e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1e77 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1e7du);
  /* 127a1e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1e80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1e82 call 0x127a3470 */
  push32(0x127a1e87u); f_127a3470();
  /* 127a1e87 mov esi, esp */
  ESI = (ESP);
  /* 127a1e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1e8b push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1e90 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1e97 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1e9du);
  /* 127a1e9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ea2 call 0x127a3470 */
  push32(0x127a1ea7u); f_127a3470();
  /* 127a1ea7 mov esi, esp */
  ESI = (ESP);
  /* 127a1ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1eab push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a1eb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1eb2 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1eb8u);
  /* 127a1eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ebb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ebd call 0x127a3470 */
  push32(0x127a1ec2u); f_127a3470();
  /* 127a1ec2 mov esi, esp */
  ESI = (ESP);
  /* 127a1ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1ec6 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1ecb push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1ed2 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1ed8u);
  /* 127a1ed8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1edb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1edd call 0x127a3470 */
  push32(0x127a1ee2u); f_127a3470();
  /* 127a1ee2 mov esi, esp */
  ESI = (ESP);
  /* 127a1ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1ee6 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a1eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1eed call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1ef3u);
  /* 127a1ef3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ef8 call 0x127a3470 */
  push32(0x127a1efdu); f_127a3470();
  /* 127a1efd mov esi, esp */
  ESI = (ESP);
  /* 127a1eff push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1f01 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1f06 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1f0b push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1f0d call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1f13u);
  /* 127a1f13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f18 call 0x127a3470 */
  push32(0x127a1f1du); f_127a3470();
  /* 127a1f1d mov esi, esp */
  ESI = (ESP);
  /* 127a1f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1f21 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a1f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1f28 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a1f2eu);
  /* 127a1f2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f33 call 0x127a3470 */
  push32(0x127a1f38u); f_127a3470();
  /* 127a1f38 mov esi, esp */
  ESI = (ESP);
  /* 127a1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1f3c push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a1f41 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a1f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1f48 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a1f4eu);
  /* 127a1f4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f53 call 0x127a3470 */
  push32(0x127a1f58u); f_127a3470();
L_127a1f58:;
  /* 127a1f58 mov esi, esp */
  ESI = (ESP);
  /* 127a1f5a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127a1f5c call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a1f62u);
  /* 127a1f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1f65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f67 call 0x127a3470 */
  push32(0x127a1f6cu); f_127a3470();
  /* 127a1f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a1f71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a1f73 je 0x127a202f */
  if (C.zf) goto L_127a202f;
  /* 127a1f79 mov esi, esp */
  ESI = (ESP);
  /* 127a1f7b push 0x127d04a8 */
  push32((uint32_t)(0x127d04a8u));
  /* 127a1f80 call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a1f86u);
  /* 127a1f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1f89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f8b call 0x127a3470 */
  push32(0x127a1f90u); f_127a3470();
  /* 127a1f90 cmp eax, 0x38a */
  { uint32_t _a=(EAX),_b=(0x38au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1f95 jl 0x127a1fec */
  if ((C.sf!=C.of)) goto L_127a1fec;
  /* 127a1f97 mov esi, esp */
  ESI = (ESP);
  /* 127a1f99 push 5 */
  push32((uint32_t)(0x5u));
  /* 127a1f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 127a1f9d call dword ptr [0x127d33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33f0))), 0x127a1fa3u);
  /* 127a1fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fa8 call 0x127a3470 */
  push32(0x127a1fadu); f_127a3470();
  /* 127a1fad cmp eax, 0x4876e740 */
  { uint32_t _a=(EAX),_b=(0x4876e740u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fb2 jne 0x127a1fec */
  if (!C.zf) goto L_127a1fec;
  /* 127a1fb4 mov esi, esp */
  ESI = (ESP);
  /* 127a1fb6 push 0x127d0400 */
  push32((uint32_t)(0x127d0400u));
  /* 127a1fbb call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a1fc1u);
  /* 127a1fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fc6 call 0x127a3470 */
  push32(0x127a1fcbu); f_127a3470();
  /* 127a1fcb cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fce jl 0x127a1fec */
  if ((C.sf!=C.of)) goto L_127a1fec;
  /* 127a1fd0 mov esi, esp */
  ESI = (ESP);
  /* 127a1fd2 push 0x127d0410 */
  push32((uint32_t)(0x127d0410u));
  /* 127a1fd7 call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a1fddu);
  /* 127a1fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fe2 call 0x127a3470 */
  push32(0x127a1fe7u); f_127a3470();
  /* 127a1fe7 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1fea jge 0x127a202f */
  if ((C.sf==C.of)) goto L_127a202f;
L_127a1fec:;
  /* 127a1fec mov esi, esp */
  ESI = (ESP);
  /* 127a1fee push 0 */
  push32((uint32_t)(0x0u));
  /* 127a1ff0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127a1ff2 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a1ff8u);
  /* 127a1ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a1ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a1ffd call 0x127a3470 */
  push32(0x127a2002u); f_127a3470();
  /* 127a2002 mov esi, esp */
  ESI = (ESP);
  /* 127a2004 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2006 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a2008 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a200eu);
  /* 127a200e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2013 call 0x127a3470 */
  push32(0x127a2018u); f_127a3470();
  /* 127a2018 mov esi, esp */
  ESI = (ESP);
  /* 127a201a push 0x127cb110 */
  push32((uint32_t)(0x127cb110u));
  /* 127a201f call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a2025u);
  /* 127a2025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2028 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a202a call 0x127a3470 */
  push32(0x127a202fu); f_127a3470();
L_127a202f:;
  /* 127a202f mov esi, esp */
  ESI = (ESP);
  /* 127a2031 push 0xa */
  push32((uint32_t)(0xau));
  /* 127a2033 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2039u);
  /* 127a2039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a203c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a203e call 0x127a3470 */
  push32(0x127a2043u); f_127a3470();
  /* 127a2043 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a204a je 0x127a210b */
  if (C.zf) goto L_127a210b;
  /* 127a2050 mov esi, esp */
  ESI = (ESP);
  /* 127a2052 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a2054 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a205au);
  /* 127a205a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a205f call 0x127a3470 */
  push32(0x127a2064u); f_127a3470();
  /* 127a2064 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a206b jne 0x127a210b */
  if (!C.zf) goto L_127a210b;
  /* 127a2071 mov esi, esp */
  ESI = (ESP);
  /* 127a2073 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2075 push 0xa */
  push32((uint32_t)(0xau));
  /* 127a2077 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a207du);
  /* 127a207d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2080 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2082 call 0x127a3470 */
  push32(0x127a2087u); f_127a3470();
  /* 127a2087 mov esi, esp */
  ESI = (ESP);
  /* 127a2089 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a208b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a208d call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2093u);
  /* 127a2093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2098 call 0x127a3470 */
  push32(0x127a209du); f_127a3470();
  /* 127a209d mov esi, esp */
  ESI = (ESP);
  /* 127a209f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a20a1 push 7 */
  push32((uint32_t)(0x7u));
  /* 127a20a3 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a20a9u);
  /* 127a20a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a20ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a20ae call 0x127a3470 */
  push32(0x127a20b3u); f_127a3470();
  /* 127a20b3 mov esi, esp */
  ESI = (ESP);
  /* 127a20b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a20b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a20b9 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a20bfu);
  /* 127a20bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a20c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a20c4 call 0x127a3470 */
  push32(0x127a20c9u); f_127a3470();
  /* 127a20c9 mov esi, esp */
  ESI = (ESP);
  /* 127a20cb push 1 */
  push32((uint32_t)(0x1u));
  /* 127a20cd push 4 */
  push32((uint32_t)(0x4u));
  /* 127a20cf call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a20d5u);
  /* 127a20d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a20d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a20da call 0x127a3470 */
  push32(0x127a20dfu); f_127a3470();
  /* 127a20df mov esi, esp */
  ESI = (ESP);
  /* 127a20e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a20e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 127a20e5 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a20ebu);
  /* 127a20eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a20ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a20f0 call 0x127a3470 */
  push32(0x127a20f5u); f_127a3470();
  /* 127a20f5 mov esi, esp */
  ESI = (ESP);
  /* 127a20f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a20f9 push 6 */
  push32((uint32_t)(0x6u));
  /* 127a20fb call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2101u);
  /* 127a2101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2104 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2106 call 0x127a3470 */
  push32(0x127a210bu); f_127a3470();
L_127a210b:;
  /* 127a210b mov esi, esp */
  ESI = (ESP);
  /* 127a210d push 0xb */
  push32((uint32_t)(0xbu));
  /* 127a210f call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2115u);
  /* 127a2115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2118 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a211a call 0x127a3470 */
  push32(0x127a211fu); f_127a3470();
  /* 127a211f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2126 je 0x127a2281 */
  if (C.zf) goto L_127a2281;
  /* 127a212c mov esi, esp */
  ESI = (ESP);
  /* 127a212e push 0xa */
  push32((uint32_t)(0xau));
  /* 127a2130 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2136u);
  /* 127a2136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a213b call 0x127a3470 */
  push32(0x127a2140u); f_127a3470();
  /* 127a2140 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2147 jne 0x127a2281 */
  if (!C.zf) goto L_127a2281;
  /* 127a214d mov esi, esp */
  ESI = (ESP);
  /* 127a214f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2151 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127a2153 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2159u);
  /* 127a2159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a215c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a215e call 0x127a3470 */
  push32(0x127a2163u); f_127a3470();
  /* 127a2163 mov esi, esp */
  ESI = (ESP);
  /* 127a2165 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2167 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a216c push 1 */
  push32((uint32_t)(0x1u));
  /* 127a216e call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2174u);
  /* 127a2174 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2179 call 0x127a3470 */
  push32(0x127a217eu); f_127a3470();
  /* 127a217e mov esi, esp */
  ESI = (ESP);
  /* 127a2180 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2182 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2187 push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a218c push 1 */
  push32((uint32_t)(0x1u));
  /* 127a218e call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2194u);
  /* 127a2194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2199 call 0x127a3470 */
  push32(0x127a219eu); f_127a3470();
  /* 127a219e mov esi, esp */
  ESI = (ESP);
  /* 127a21a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a21a2 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a21a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a21a9 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a21afu);
  /* 127a21af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a21b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a21b4 call 0x127a3470 */
  push32(0x127a21b9u); f_127a3470();
  /* 127a21b9 mov esi, esp */
  ESI = (ESP);
  /* 127a21bb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a21bd push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a21c2 push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a21c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a21c9 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a21cfu);
  /* 127a21cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a21d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a21d4 call 0x127a3470 */
  push32(0x127a21d9u); f_127a3470();
  /* 127a21d9 mov esi, esp */
  ESI = (ESP);
  /* 127a21db push 0 */
  push32((uint32_t)(0x0u));
  /* 127a21dd push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a21e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a21e4 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a21eau);
  /* 127a21ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a21ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a21ef call 0x127a3470 */
  push32(0x127a21f4u); f_127a3470();
  /* 127a21f4 mov esi, esp */
  ESI = (ESP);
  /* 127a21f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a21f8 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a21fd push 0x127d0430 */
  push32((uint32_t)(0x127d0430u));
  /* 127a2202 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2204 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a220au);
  /* 127a220a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a220d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a220f call 0x127a3470 */
  push32(0x127a2214u); f_127a3470();
  /* 127a2214 mov esi, esp */
  ESI = (ESP);
  /* 127a2216 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2218 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a221d push 1 */
  push32((uint32_t)(0x1u));
  /* 127a221f call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2225u);
  /* 127a2225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2228 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a222a call 0x127a3470 */
  push32(0x127a222fu); f_127a3470();
  /* 127a222f mov esi, esp */
  ESI = (ESP);
  /* 127a2231 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2233 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2238 push 0x127d0450 */
  push32((uint32_t)(0x127d0450u));
  /* 127a223d push 1 */
  push32((uint32_t)(0x1u));
  /* 127a223f call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2245u);
  /* 127a2245 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2248 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a224a call 0x127a3470 */
  push32(0x127a224fu); f_127a3470();
  /* 127a224f mov esi, esp */
  ESI = (ESP);
  /* 127a2251 push 0x3a0 */
  push32((uint32_t)(0x3a0u));
  /* 127a2256 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a2258 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a225eu);
  /* 127a225e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2263 call 0x127a3470 */
  push32(0x127a2268u); f_127a3470();
  /* 127a2268 mov esi, esp */
  ESI = (ESP);
  /* 127a226a push 0x3c0 */
  push32((uint32_t)(0x3c0u));
  /* 127a226f push 4 */
  push32((uint32_t)(0x4u));
  /* 127a2271 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a2277u);
  /* 127a2277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a227a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a227c call 0x127a3470 */
  push32(0x127a2281u); f_127a3470();
L_127a2281:;
  /* 127a2281 mov esi, esp */
  ESI = (ESP);
  /* 127a2283 push 0xe */
  push32((uint32_t)(0xeu));
  /* 127a2285 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a228bu);
  /* 127a228b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a228e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2290 call 0x127a3470 */
  push32(0x127a2295u); f_127a3470();
  /* 127a2295 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a229a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a229c je 0x127a22ed */
  if (C.zf) goto L_127a22ed;
  /* 127a229e mov esi, esp */
  ESI = (ESP);
  /* 127a22a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a22a2 call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a22a8u);
  /* 127a22a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a22ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a22ad call 0x127a3470 */
  push32(0x127a22b2u); f_127a3470();
  /* 127a22b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a22b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a22b9 je 0x127a22ed */
  if (C.zf) goto L_127a22ed;
  /* 127a22bb mov esi, esp */
  ESI = (ESP);
  /* 127a22bd push 0x3a0 */
  push32((uint32_t)(0x3a0u));
  /* 127a22c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a22c4 call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a22cau);
  /* 127a22ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a22cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a22cf call 0x127a3470 */
  push32(0x127a22d4u); f_127a3470();
  /* 127a22d4 mov esi, esp */
  ESI = (ESP);
  /* 127a22d6 push 0x3c0 */
  push32((uint32_t)(0x3c0u));
  /* 127a22db push 4 */
  push32((uint32_t)(0x4u));
  /* 127a22dd call dword ptr [0x127d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d4))), 0x127a22e3u);
  /* 127a22e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a22e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a22e8 call 0x127a3470 */
  push32(0x127a22edu); f_127a3470();
L_127a22ed:;
  /* 127a22ed mov esi, esp */
  ESI = (ESP);
  /* 127a22ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 127a22f1 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a22f7u);
  /* 127a22f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a22fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a22fc call 0x127a3470 */
  push32(0x127a2301u); f_127a3470();
  /* 127a2301 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2308 je 0x127a23c2 */
  if (C.zf) goto L_127a23c2;
  /* 127a230e mov esi, esp */
  ESI = (ESP);
  /* 127a2310 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127a2312 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2318u);
  /* 127a2318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a231b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a231d call 0x127a3470 */
  push32(0x127a2322u); f_127a3470();
  /* 127a2322 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2329 jne 0x127a23c2 */
  if (!C.zf) goto L_127a23c2;
  /* 127a232f mov esi, esp */
  ESI = (ESP);
  /* 127a2331 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2333 call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a2339u);
  /* 127a2339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a233c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a233e call 0x127a3470 */
  push32(0x127a2343u); f_127a3470();
  /* 127a2343 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a234a je 0x127a23c2 */
  if (C.zf) goto L_127a23c2;
  /* 127a234c mov esi, esp */
  ESI = (ESP);
  /* 127a234e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2350 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a2355 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2357 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a235du);
  /* 127a235d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2360 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2362 call 0x127a3470 */
  push32(0x127a2367u); f_127a3470();
  /* 127a2367 mov esi, esp */
  ESI = (ESP);
  /* 127a2369 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a236b push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2370 push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a2375 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2377 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a237du);
  /* 127a237d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2380 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2382 call 0x127a3470 */
  push32(0x127a2387u); f_127a3470();
  /* 127a2387 mov esi, esp */
  ESI = (ESP);
  /* 127a2389 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a238b push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a2390 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2392 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2398u);
  /* 127a2398 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a239b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a239d call 0x127a3470 */
  push32(0x127a23a2u); f_127a3470();
  /* 127a23a2 mov esi, esp */
  ESI = (ESP);
  /* 127a23a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a23a6 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a23ab push 0x127d0430 */
  push32((uint32_t)(0x127d0430u));
  /* 127a23b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a23b2 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a23b8u);
  /* 127a23b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a23bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a23bd call 0x127a3470 */
  push32(0x127a23c2u); f_127a3470();
L_127a23c2:;
  /* 127a23c2 mov esi, esp */
  ESI = (ESP);
  /* 127a23c4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 127a23c6 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a23ccu);
  /* 127a23cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a23cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a23d1 call 0x127a3470 */
  push32(0x127a23d6u); f_127a3470();
  /* 127a23d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a23db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a23dd je 0x127a2497 */
  if (C.zf) goto L_127a2497;
  /* 127a23e3 mov esi, esp */
  ESI = (ESP);
  /* 127a23e5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127a23e7 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a23edu);
  /* 127a23ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a23f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a23f2 call 0x127a3470 */
  push32(0x127a23f7u); f_127a3470();
  /* 127a23f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a23fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a23fe jne 0x127a2497 */
  if (!C.zf) goto L_127a2497;
  /* 127a2404 mov esi, esp */
  ESI = (ESP);
  /* 127a2406 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a2408 call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a240eu);
  /* 127a240e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2411 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2413 call 0x127a3470 */
  push32(0x127a2418u); f_127a3470();
  /* 127a2418 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a241d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a241f je 0x127a2497 */
  if (C.zf) goto L_127a2497;
  /* 127a2421 mov esi, esp */
  ESI = (ESP);
  /* 127a2423 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2425 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a242a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a242c call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2432u);
  /* 127a2432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2437 call 0x127a3470 */
  push32(0x127a243cu); f_127a3470();
  /* 127a243c mov esi, esp */
  ESI = (ESP);
  /* 127a243e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2440 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2445 push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a244a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a244c call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2452u);
  /* 127a2452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2457 call 0x127a3470 */
  push32(0x127a245cu); f_127a3470();
  /* 127a245c mov esi, esp */
  ESI = (ESP);
  /* 127a245e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2460 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a2465 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2467 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a246du);
  /* 127a246d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2472 call 0x127a3470 */
  push32(0x127a2477u); f_127a3470();
  /* 127a2477 mov esi, esp */
  ESI = (ESP);
  /* 127a2479 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a247b push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2480 push 0x127d0450 */
  push32((uint32_t)(0x127d0450u));
  /* 127a2485 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2487 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a248du);
  /* 127a248d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2492 call 0x127a3470 */
  push32(0x127a2497u); f_127a3470();
L_127a2497:;
  /* 127a2497 mov esi, esp */
  ESI = (ESP);
  /* 127a2499 push 0xf */
  push32((uint32_t)(0xfu));
  /* 127a249b call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a24a1u);
  /* 127a24a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a24a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a24a6 call 0x127a3470 */
  push32(0x127a24abu); f_127a3470();
  /* 127a24ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a24b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a24b2 je 0x127a25b4 */
  if (C.zf) goto L_127a25b4;
  /* 127a24b8 mov esi, esp */
  ESI = (ESP);
  /* 127a24ba push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a24bf push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a24c4 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a24cau);
  /* 127a24ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a24cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a24cf call 0x127a3470 */
  push32(0x127a24d4u); f_127a3470();
  /* 127a24d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a24d6 jg 0x127a24fc */
  if ((!C.zf&&C.sf==C.of)) goto L_127a24fc;
  /* 127a24d8 mov esi, esp */
  ESI = (ESP);
  /* 127a24da push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a24df push 0x127d0430 */
  push32((uint32_t)(0x127d0430u));
  /* 127a24e4 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a24eau);
  /* 127a24ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a24ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a24ef call 0x127a3470 */
  push32(0x127a24f4u); f_127a3470();
  /* 127a24f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a24f6 jle 0x127a25b4 */
  if ((C.zf||C.sf!=C.of)) goto L_127a25b4;
L_127a24fc:;
  /* 127a24fc mov esi, esp */
  ESI = (ESP);
  /* 127a24fe push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2500 push 0xf */
  push32((uint32_t)(0xfu));
  /* 127a2502 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2508u);
  /* 127a2508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a250b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a250d call 0x127a3470 */
  push32(0x127a2512u); f_127a3470();
  /* 127a2512 mov esi, esp */
  ESI = (ESP);
  /* 127a2514 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2516 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127a2518 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a251eu);
  /* 127a251e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2523 call 0x127a3470 */
  push32(0x127a2528u); f_127a3470();
  /* 127a2528 mov esi, esp */
  ESI = (ESP);
  /* 127a252a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a252c push 0xc */
  push32((uint32_t)(0xcu));
  /* 127a252e call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2534u);
  /* 127a2534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2539 call 0x127a3470 */
  push32(0x127a253eu); f_127a3470();
  /* 127a253e mov esi, esp */
  ESI = (ESP);
  /* 127a2540 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2542 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a2547 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2549 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a254fu);
  /* 127a254f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2554 call 0x127a3470 */
  push32(0x127a2559u); f_127a3470();
  /* 127a2559 mov esi, esp */
  ESI = (ESP);
  /* 127a255b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a255d push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2562 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2567 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2569 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a256fu);
  /* 127a256f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2574 call 0x127a3470 */
  push32(0x127a2579u); f_127a3470();
  /* 127a2579 mov esi, esp */
  ESI = (ESP);
  /* 127a257b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a257d push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a2582 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2584 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a258au);
  /* 127a258a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a258f call 0x127a3470 */
  push32(0x127a2594u); f_127a3470();
  /* 127a2594 mov esi, esp */
  ESI = (ESP);
  /* 127a2596 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2598 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a259d push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a25a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a25a4 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a25aau);
  /* 127a25aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a25ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a25af call 0x127a3470 */
  push32(0x127a25b4u); f_127a3470();
L_127a25b4:;
  /* 127a25b4 mov esi, esp */
  ESI = (ESP);
  /* 127a25b6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127a25b8 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a25beu);
  /* 127a25be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a25c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a25c3 call 0x127a3470 */
  push32(0x127a25c8u); f_127a3470();
  /* 127a25c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a25cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a25cf jne 0x127a2668 */
  if (!C.zf) goto L_127a2668;
  /* 127a25d5 mov esi, esp */
  ESI = (ESP);
  /* 127a25d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a25d9 call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a25dfu);
  /* 127a25df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a25e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a25e4 call 0x127a3470 */
  push32(0x127a25e9u); f_127a3470();
  /* 127a25e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a25ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a25f0 je 0x127a2668 */
  if (C.zf) goto L_127a2668;
  /* 127a25f2 mov esi, esp */
  ESI = (ESP);
  /* 127a25f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a25f6 push 0x127d03e0 */
  push32((uint32_t)(0x127d03e0u));
  /* 127a25fb push 1 */
  push32((uint32_t)(0x1u));
  /* 127a25fd call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2603u);
  /* 127a2603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2608 call 0x127a3470 */
  push32(0x127a260du); f_127a3470();
  /* 127a260d mov esi, esp */
  ESI = (ESP);
  /* 127a260f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2611 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2616 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a261b push 1 */
  push32((uint32_t)(0x1u));
  /* 127a261d call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2623u);
  /* 127a2623 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2628 call 0x127a3470 */
  push32(0x127a262du); f_127a3470();
  /* 127a262d mov esi, esp */
  ESI = (ESP);
  /* 127a262f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2631 push 0x127d03f0 */
  push32((uint32_t)(0x127d03f0u));
  /* 127a2636 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2638 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a263eu);
  /* 127a263e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2643 call 0x127a3470 */
  push32(0x127a2648u); f_127a3470();
  /* 127a2648 mov esi, esp */
  ESI = (ESP);
  /* 127a264a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a264c push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2651 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2656 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2658 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a265eu);
  /* 127a265e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2663 call 0x127a3470 */
  push32(0x127a2668u); f_127a3470();
L_127a2668:;
  /* 127a2668 mov esi, esp */
  ESI = (ESP);
  /* 127a266a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127a266c call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2672u);
  /* 127a2672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2677 call 0x127a3470 */
  push32(0x127a267cu); f_127a3470();
  /* 127a267c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2683 je 0x127a2785 */
  if (C.zf) goto L_127a2785;
  /* 127a2689 mov esi, esp */
  ESI = (ESP);
  /* 127a268b push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a2690 push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a2695 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a269bu);
  /* 127a269b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a269e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a26a0 call 0x127a3470 */
  push32(0x127a26a5u); f_127a3470();
  /* 127a26a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a26a7 jg 0x127a26cd */
  if ((!C.zf&&C.sf==C.of)) goto L_127a26cd;
  /* 127a26a9 mov esi, esp */
  ESI = (ESP);
  /* 127a26ab push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a26b0 push 0x127d0450 */
  push32((uint32_t)(0x127d0450u));
  /* 127a26b5 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a26bbu);
  /* 127a26bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a26be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a26c0 call 0x127a3470 */
  push32(0x127a26c5u); f_127a3470();
  /* 127a26c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a26c7 jle 0x127a2785 */
  if ((C.zf||C.sf!=C.of)) goto L_127a2785;
L_127a26cd:;
  /* 127a26cd mov esi, esp */
  ESI = (ESP);
  /* 127a26cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127a26d1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127a26d3 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a26d9u);
  /* 127a26d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a26dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a26de call 0x127a3470 */
  push32(0x127a26e3u); f_127a3470();
  /* 127a26e3 mov esi, esp */
  ESI = (ESP);
  /* 127a26e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a26e7 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127a26e9 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a26efu);
  /* 127a26ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a26f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a26f4 call 0x127a3470 */
  push32(0x127a26f9u); f_127a3470();
  /* 127a26f9 mov esi, esp */
  ESI = (ESP);
  /* 127a26fb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a26fd push 0xd */
  push32((uint32_t)(0xdu));
  /* 127a26ff call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2705u);
  /* 127a2705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a270a call 0x127a3470 */
  push32(0x127a270fu); f_127a3470();
  /* 127a270f mov esi, esp */
  ESI = (ESP);
  /* 127a2711 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2713 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a2718 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a271a call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2720u);
  /* 127a2720 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2725 call 0x127a3470 */
  push32(0x127a272au); f_127a3470();
  /* 127a272a mov esi, esp */
  ESI = (ESP);
  /* 127a272c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a272e push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2733 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2738 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a273a call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2740u);
  /* 127a2740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2745 call 0x127a3470 */
  push32(0x127a274au); f_127a3470();
  /* 127a274a mov esi, esp */
  ESI = (ESP);
  /* 127a274c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a274e push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a2753 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2755 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a275bu);
  /* 127a275b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a275e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2760 call 0x127a3470 */
  push32(0x127a2765u); f_127a3470();
  /* 127a2765 mov esi, esp */
  ESI = (ESP);
  /* 127a2767 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2769 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a276e push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2773 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2775 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a277bu);
  /* 127a277b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a277e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2780 call 0x127a3470 */
  push32(0x127a2785u); f_127a3470();
L_127a2785:;
  /* 127a2785 mov esi, esp */
  ESI = (ESP);
  /* 127a2787 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127a2789 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a278fu);
  /* 127a278f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2794 call 0x127a3470 */
  push32(0x127a2799u); f_127a3470();
  /* 127a2799 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a279e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a27a0 jne 0x127a2839 */
  if (!C.zf) goto L_127a2839;
  /* 127a27a6 mov esi, esp */
  ESI = (ESP);
  /* 127a27a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a27aa call dword ptr [0x127d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d8))), 0x127a27b0u);
  /* 127a27b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a27b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a27b5 call 0x127a3470 */
  push32(0x127a27bau); f_127a3470();
  /* 127a27ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a27bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a27c1 je 0x127a2839 */
  if (C.zf) goto L_127a2839;
  /* 127a27c3 mov esi, esp */
  ESI = (ESP);
  /* 127a27c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a27c7 push 0x127d03f8 */
  push32((uint32_t)(0x127d03f8u));
  /* 127a27cc push 1 */
  push32((uint32_t)(0x1u));
  /* 127a27ce call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a27d4u);
  /* 127a27d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a27d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a27d9 call 0x127a3470 */
  push32(0x127a27deu); f_127a3470();
  /* 127a27de mov esi, esp */
  ESI = (ESP);
  /* 127a27e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a27e2 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a27e7 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a27ec push 1 */
  push32((uint32_t)(0x1u));
  /* 127a27ee call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a27f4u);
  /* 127a27f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a27f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a27f9 call 0x127a3470 */
  push32(0x127a27feu); f_127a3470();
  /* 127a27fe mov esi, esp */
  ESI = (ESP);
  /* 127a2800 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2802 push 0x127d0408 */
  push32((uint32_t)(0x127d0408u));
  /* 127a2807 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2809 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a280fu);
  /* 127a280f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2814 call 0x127a3470 */
  push32(0x127a2819u); f_127a3470();
  /* 127a2819 mov esi, esp */
  ESI = (ESP);
  /* 127a281b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a281d push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 127a2822 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2827 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2829 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a282fu);
  /* 127a282f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2834 call 0x127a3470 */
  push32(0x127a2839u); f_127a3470();
L_127a2839:;
  /* 127a2839 mov esi, esp */
  ESI = (ESP);
  /* 127a283b push 9 */
  push32((uint32_t)(0x9u));
  /* 127a283d call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2843u);
  /* 127a2843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2848 call 0x127a3470 */
  push32(0x127a284du); f_127a3470();
  /* 127a284d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2854 je 0x127a2897 */
  if (C.zf) goto L_127a2897;
  /* 127a2856 mov esi, esp */
  ESI = (ESP);
  /* 127a2858 push 0x127d04b0 */
  push32((uint32_t)(0x127d04b0u));
  /* 127a285d call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a2863u);
  /* 127a2863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2868 call 0x127a3470 */
  push32(0x127a286du); f_127a3470();
  /* 127a286d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a286f jne 0x127a2897 */
  if (!C.zf) goto L_127a2897;
  /* 127a2871 mov esi, esp */
  ESI = (ESP);
  /* 127a2873 push 0x127cb10c */
  push32((uint32_t)(0x127cb10cu));
  /* 127a2878 call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a287eu);
  /* 127a287e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2883 call 0x127a3470 */
  push32(0x127a2888u); f_127a3470();
  /* 127a2888 mov esi, esp */
  ESI = (ESP);
  /* 127a288a call dword ptr [0x127d33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33f4))), 0x127a2890u);
  /* 127a2890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2892 call 0x127a3470 */
  push32(0x127a2897u); f_127a3470();
L_127a2897:;
  /* 127a2897 mov esi, esp */
  ESI = (ESP);
  /* 127a2899 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127a289b call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a28a1u);
  /* 127a28a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a28a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a28a6 call 0x127a3470 */
  push32(0x127a28abu); f_127a3470();
  /* 127a28ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a28b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a28b2 je 0x127a2962 */
  if (C.zf) goto L_127a2962;
  /* 127a28b8 mov esi, esp */
  ESI = (ESP);
  /* 127a28ba push 5 */
  push32((uint32_t)(0x5u));
  /* 127a28bc call dword ptr [0x127d33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33dc))), 0x127a28c2u);
  /* 127a28c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a28c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a28c7 call 0x127a3470 */
  push32(0x127a28ccu); f_127a3470();
  /* 127a28cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a28d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a28d3 je 0x127a2962 */
  if (C.zf) goto L_127a2962;
  /* 127a28d9 mov esi, esp */
  ESI = (ESP);
  /* 127a28db push 0 */
  push32((uint32_t)(0x0u));
  /* 127a28dd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127a28df call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a28e5u);
  /* 127a28e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a28e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a28ea call 0x127a3470 */
  push32(0x127a28efu); f_127a3470();
  /* 127a28ef mov esi, esp */
  ESI = (ESP);
  /* 127a28f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a28f3 push 0x127d0400 */
  push32((uint32_t)(0x127d0400u));
  /* 127a28f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a28fa call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2900u);
  /* 127a2900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2905 call 0x127a3470 */
  push32(0x127a290au); f_127a3470();
  /* 127a290a mov esi, esp */
  ESI = (ESP);
  /* 127a290c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a290e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2910 push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a2915 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2917 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a291du);
  /* 127a291d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2922 call 0x127a3470 */
  push32(0x127a2927u); f_127a3470();
  /* 127a2927 mov esi, esp */
  ESI = (ESP);
  /* 127a2929 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a292b push 0x127d0410 */
  push32((uint32_t)(0x127d0410u));
  /* 127a2930 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2932 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2938u);
  /* 127a2938 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a293b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a293d call 0x127a3470 */
  push32(0x127a2942u); f_127a3470();
  /* 127a2942 mov esi, esp */
  ESI = (ESP);
  /* 127a2944 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2946 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 127a294b push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a2950 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2952 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2958u);
  /* 127a2958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a295b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a295d call 0x127a3470 */
  push32(0x127a2962u); f_127a3470();
L_127a2962:;
  /* 127a2962 mov esi, esp */
  ESI = (ESP);
  /* 127a2964 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 127a2966 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a296cu);
  /* 127a296c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a296f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2971 call 0x127a3470 */
  push32(0x127a2976u); f_127a3470();
  /* 127a2976 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a297b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a297d je 0x127a2a66 */
  if (C.zf) goto L_127a2a66;
  /* 127a2983 mov esi, esp */
  ESI = (ESP);
  /* 127a2985 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127a2987 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a298du);
  /* 127a298d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2992 call 0x127a3470 */
  push32(0x127a2997u); f_127a3470();
  /* 127a2997 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a299c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a299e jne 0x127a2a66 */
  if (!C.zf) goto L_127a2a66;
  /* 127a29a4 mov esi, esp */
  ESI = (ESP);
  /* 127a29a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a29a8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 127a29aa call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a29b0u);
  /* 127a29b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a29b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a29b5 call 0x127a3470 */
  push32(0x127a29bau); f_127a3470();
  /* 127a29ba mov esi, esp */
  ESI = (ESP);
  /* 127a29bc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a29be push 0x127d04a0 */
  push32((uint32_t)(0x127d04a0u));
  /* 127a29c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a29c5 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a29cbu);
  /* 127a29cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a29ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a29d0 call 0x127a3470 */
  push32(0x127a29d5u); f_127a3470();
  /* 127a29d5 mov esi, esp */
  ESI = (ESP);
  /* 127a29d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a29d9 push 0x127d0428 */
  push32((uint32_t)(0x127d0428u));
  /* 127a29de push 1 */
  push32((uint32_t)(0x1u));
  /* 127a29e0 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a29e6u);
  /* 127a29e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a29e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a29eb call 0x127a3470 */
  push32(0x127a29f0u); f_127a3470();
  /* 127a29f0 mov esi, esp */
  ESI = (ESP);
  /* 127a29f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a29f4 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 127a29f9 push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a29fe push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2a00 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2a06u);
  /* 127a2a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a0b call 0x127a3470 */
  push32(0x127a2a10u); f_127a3470();
  /* 127a2a10 mov esi, esp */
  ESI = (ESP);
  /* 127a2a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2a14 push 0x127d04b8 */
  push32((uint32_t)(0x127d04b8u));
  /* 127a2a19 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2a1b call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2a21u);
  /* 127a2a21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a26 call 0x127a3470 */
  push32(0x127a2a2bu); f_127a3470();
  /* 127a2a2b mov esi, esp */
  ESI = (ESP);
  /* 127a2a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2a2f push 0x127d0420 */
  push32((uint32_t)(0x127d0420u));
  /* 127a2a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2a36 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2a3cu);
  /* 127a2a3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a41 call 0x127a3470 */
  push32(0x127a2a46u); f_127a3470();
  /* 127a2a46 mov esi, esp */
  ESI = (ESP);
  /* 127a2a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2a4a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 127a2a4f push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a2a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2a56 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2a5cu);
  /* 127a2a5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a61 call 0x127a3470 */
  push32(0x127a2a66u); f_127a3470();
L_127a2a66:;
  /* 127a2a66 mov esi, esp */
  ESI = (ESP);
  /* 127a2a68 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127a2a6a call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2a70u);
  /* 127a2a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a75 call 0x127a3470 */
  push32(0x127a2a7au); f_127a3470();
  /* 127a2a7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2a81 je 0x127a2b2c */
  if (C.zf) goto L_127a2b2c;
  /* 127a2a87 mov esi, esp */
  ESI = (ESP);
  /* 127a2a89 push 0x127d04a0 */
  push32((uint32_t)(0x127d04a0u));
  /* 127a2a8e push 0x127d0498 */
  push32((uint32_t)(0x127d0498u));
  /* 127a2a93 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a2a99u);
  /* 127a2a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2a9e call 0x127a3470 */
  push32(0x127a2aa3u); f_127a3470();
  /* 127a2aa3 mov esi, eax */
  ESI = (EAX);
  /* 127a2aa5 mov edi, esp */
  EDI = (ESP);
  /* 127a2aa7 push 0x127d04a0 */
  push32((uint32_t)(0x127d04a0u));
  /* 127a2aac call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a2ab2u);
  /* 127a2ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2ab5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2ab7 call 0x127a3470 */
  push32(0x127a2abcu); f_127a3470();
  /* 127a2abc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2abe jne 0x127a2b2c */
  if (!C.zf) goto L_127a2b2c;
  /* 127a2ac0 mov esi, esp */
  ESI = (ESP);
  /* 127a2ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2ac4 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127a2ac6 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2accu);
  /* 127a2acc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2acf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2ad1 call 0x127a3470 */
  push32(0x127a2ad6u); f_127a3470();
  /* 127a2ad6 mov esi, esp */
  ESI = (ESP);
  /* 127a2ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2ada push 0x127d04a0 */
  push32((uint32_t)(0x127d04a0u));
  /* 127a2adf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2ae1 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2ae7u);
  /* 127a2ae7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2aec call 0x127a3470 */
  push32(0x127a2af1u); f_127a3470();
  /* 127a2af1 mov esi, esp */
  ESI = (ESP);
  /* 127a2af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2af5 push 0x127d0428 */
  push32((uint32_t)(0x127d0428u));
  /* 127a2afa push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2afc call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2b02u);
  /* 127a2b02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b07 call 0x127a3470 */
  push32(0x127a2b0cu); f_127a3470();
  /* 127a2b0c mov esi, esp */
  ESI = (ESP);
  /* 127a2b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2b10 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 127a2b15 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2b1c call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2b22u);
  /* 127a2b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b27 call 0x127a3470 */
  push32(0x127a2b2cu); f_127a3470();
L_127a2b2c:;
  /* 127a2b2c mov esi, esp */
  ESI = (ESP);
  /* 127a2b2e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 127a2b30 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2b36u);
  /* 127a2b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b3b call 0x127a3470 */
  push32(0x127a2b40u); f_127a3470();
  /* 127a2b40 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2b47 je 0x127a2bf2 */
  if (C.zf) goto L_127a2bf2;
  /* 127a2b4d mov esi, esp */
  ESI = (ESP);
  /* 127a2b4f push 0x127d04b8 */
  push32((uint32_t)(0x127d04b8u));
  /* 127a2b54 push 0x127d0438 */
  push32((uint32_t)(0x127d0438u));
  /* 127a2b59 call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a2b5fu);
  /* 127a2b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b64 call 0x127a3470 */
  push32(0x127a2b69u); f_127a3470();
  /* 127a2b69 mov esi, eax */
  ESI = (EAX);
  /* 127a2b6b mov edi, esp */
  EDI = (ESP);
  /* 127a2b6d push 0x127d04b8 */
  push32((uint32_t)(0x127d04b8u));
  /* 127a2b72 call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a2b78u);
  /* 127a2b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b7b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b7d call 0x127a3470 */
  push32(0x127a2b82u); f_127a3470();
  /* 127a2b82 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b84 jne 0x127a2bf2 */
  if (!C.zf) goto L_127a2bf2;
  /* 127a2b86 mov esi, esp */
  ESI = (ESP);
  /* 127a2b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2b8a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 127a2b8c call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2b92u);
  /* 127a2b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2b97 call 0x127a3470 */
  push32(0x127a2b9cu); f_127a3470();
  /* 127a2b9c mov esi, esp */
  ESI = (ESP);
  /* 127a2b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2ba0 push 0x127d04b8 */
  push32((uint32_t)(0x127d04b8u));
  /* 127a2ba5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2ba7 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2badu);
  /* 127a2bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2bb2 call 0x127a3470 */
  push32(0x127a2bb7u); f_127a3470();
  /* 127a2bb7 mov esi, esp */
  ESI = (ESP);
  /* 127a2bb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2bbb push 0x127d0420 */
  push32((uint32_t)(0x127d0420u));
  /* 127a2bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2bc2 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2bc8u);
  /* 127a2bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2bcd call 0x127a3470 */
  push32(0x127a2bd2u); f_127a3470();
  /* 127a2bd2 mov esi, esp */
  ESI = (ESP);
  /* 127a2bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2bd6 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 127a2bdb push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2be0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2be2 call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2be8u);
  /* 127a2be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2bed call 0x127a3470 */
  push32(0x127a2bf2u); f_127a3470();
L_127a2bf2:;
  /* 127a2bf2 mov esi, esp */
  ESI = (ESP);
  /* 127a2bf4 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127a2bf6 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2bfcu);
  /* 127a2bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2bff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c01 call 0x127a3470 */
  push32(0x127a2c06u); f_127a3470();
  /* 127a2c06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2c0d je 0x127a2cbc */
  if (C.zf) goto L_127a2cbc;
  /* 127a2c13 mov esi, esp */
  ESI = (ESP);
  /* 127a2c15 push 0x127d04a8 */
  push32((uint32_t)(0x127d04a8u));
  /* 127a2c1a call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a2c20u);
  /* 127a2c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c25 call 0x127a3470 */
  push32(0x127a2c2au); f_127a3470();
  /* 127a2c2a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c2f jge 0x127a2cbc */
  if ((C.sf==C.of)) goto L_127a2cbc;
  /* 127a2c35 mov esi, esp */
  ESI = (ESP);
  /* 127a2c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2c39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127a2c3b call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2c41u);
  /* 127a2c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c46 call 0x127a3470 */
  push32(0x127a2c4bu); f_127a3470();
  /* 127a2c4b mov esi, esp */
  ESI = (ESP);
  /* 127a2c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2c4f push 0x127d04c0 */
  push32((uint32_t)(0x127d04c0u));
  /* 127a2c54 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2c56 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2c5cu);
  /* 127a2c5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c61 call 0x127a3470 */
  push32(0x127a2c66u); f_127a3470();
  /* 127a2c66 mov esi, esp */
  ESI = (ESP);
  /* 127a2c68 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2c6a push 0x127d0400 */
  push32((uint32_t)(0x127d0400u));
  /* 127a2c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2c71 call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2c77u);
  /* 127a2c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c7c call 0x127a3470 */
  push32(0x127a2c81u); f_127a3470();
  /* 127a2c81 mov esi, esp */
  ESI = (ESP);
  /* 127a2c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2c85 push 0x127d0410 */
  push32((uint32_t)(0x127d0410u));
  /* 127a2c8a push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2c8c call dword ptr [0x127d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e0))), 0x127a2c92u);
  /* 127a2c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2c97 call 0x127a3470 */
  push32(0x127a2c9cu); f_127a3470();
  /* 127a2c9c mov esi, esp */
  ESI = (ESP);
  /* 127a2c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2ca0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 127a2ca5 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2caa push 1 */
  push32((uint32_t)(0x1u));
  /* 127a2cac call dword ptr [0x127d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e4))), 0x127a2cb2u);
  /* 127a2cb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2cb7 call 0x127a3470 */
  push32(0x127a2cbcu); f_127a3470();
L_127a2cbc:;
  /* 127a2cbc mov esi, esp */
  ESI = (ESP);
  /* 127a2cbe push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127a2cc0 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2cc6u);
  /* 127a2cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2ccb call 0x127a3470 */
  push32(0x127a2cd0u); f_127a3470();
  /* 127a2cd0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2cd7 je 0x127a2d31 */
  if (C.zf) goto L_127a2d31;
  /* 127a2cd9 mov esi, esp */
  ESI = (ESP);
  /* 127a2cdb push 0x127d04a8 */
  push32((uint32_t)(0x127d04a8u));
  /* 127a2ce0 call dword ptr [0x127d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33ec))), 0x127a2ce6u);
  /* 127a2ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2ce9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2ceb call 0x127a3470 */
  push32(0x127a2cf0u); f_127a3470();
  /* 127a2cf0 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2cf3 jge 0x127a2d31 */
  if ((C.sf==C.of)) goto L_127a2d31;
  /* 127a2cf5 mov esi, esp */
  ESI = (ESP);
  /* 127a2cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2cf9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127a2cfb call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2d01u);
  /* 127a2d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d06 call 0x127a3470 */
  push32(0x127a2d0bu); f_127a3470();
  /* 127a2d0b mov esi, esp */
  ESI = (ESP);
  /* 127a2d0d push 0x127cb108 */
  push32((uint32_t)(0x127cb108u));
  /* 127a2d12 call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a2d18u);
  /* 127a2d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d1d call 0x127a3470 */
  push32(0x127a2d22u); f_127a3470();
  /* 127a2d22 mov esi, esp */
  ESI = (ESP);
  /* 127a2d24 call dword ptr [0x127d33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33f8))), 0x127a2d2au);
  /* 127a2d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d2c call 0x127a3470 */
  push32(0x127a2d31u); f_127a3470();
L_127a2d31:;
  /* 127a2d31 mov esi, esp */
  ESI = (ESP);
  /* 127a2d33 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127a2d35 call dword ptr [0x127d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c4))), 0x127a2d3bu);
  /* 127a2d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d40 call 0x127a3470 */
  push32(0x127a2d45u); f_127a3470();
  /* 127a2d45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a2d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a2d4c je 0x127a2dab */
  if (C.zf) goto L_127a2dab;
  /* 127a2d4e mov esi, esp */
  ESI = (ESP);
  /* 127a2d50 push 0x127d04a8 */
  push32((uint32_t)(0x127d04a8u));
  /* 127a2d55 push 0x127d0440 */
  push32((uint32_t)(0x127d0440u));
  /* 127a2d5a call dword ptr [0x127d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33e8))), 0x127a2d60u);
  /* 127a2d60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d65 call 0x127a3470 */
  push32(0x127a2d6au); f_127a3470();
  /* 127a2d6a cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d6d jl 0x127a2dab */
  if ((C.sf!=C.of)) goto L_127a2dab;
  /* 127a2d6f mov esi, esp */
  ESI = (ESP);
  /* 127a2d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a2d73 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127a2d75 call dword ptr [0x127d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33c8))), 0x127a2d7bu);
  /* 127a2d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d80 call 0x127a3470 */
  push32(0x127a2d85u); f_127a3470();
  /* 127a2d85 mov esi, esp */
  ESI = (ESP);
  /* 127a2d87 push 0x127cb104 */
  push32((uint32_t)(0x127cb104u));
  /* 127a2d8c call dword ptr [0x127d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33d0))), 0x127a2d92u);
  /* 127a2d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2d97 call 0x127a3470 */
  push32(0x127a2d9cu); f_127a3470();
  /* 127a2d9c mov esi, esp */
  ESI = (ESP);
  /* 127a2d9e call dword ptr [0x127d33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d33f4))), 0x127a2da4u);
  /* 127a2da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2da6 call 0x127a3470 */
  push32(0x127a2dabu); f_127a3470();
L_127a2dab:;
  /* 127a2dab pop edi */
  EDI = (pop32());
  /* 127a2dac pop esi */
  ESI = (pop32());
  /* 127a2dad pop ebx */
  EBX = (pop32());
  /* 127a2dae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a2db1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a2db3 call 0x127a3470 */
  push32(0x127a2db8u); f_127a3470();
  /* 127a2db8 mov esp, ebp */
  ESP = (EBP);
  /* 127a2dba pop ebp */
  EBP = (pop32());
  /* 127a2dbb ret  */
  ESPCHK(0x127a14b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x127a3470 (56 bytes, 28 insns) */
void f_127a3470(void) {
  FTRACE(0x127a3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3470 jne 0x127a3473 */
  if (!C.zf) goto L_127a3473;
  /* 127a3472 ret  */
  ESPCHK(0x127a3470u, _esp0);
  ESP += 4; return;
L_127a3473:;
  /* 127a3473 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3474 mov ebp, esp */
  EBP = (ESP);
  /* 127a3476 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a3479 push eax */
  push32((uint32_t)(EAX));
  /* 127a347a push edx */
  push32((uint32_t)(EDX));
  /* 127a347b push ebx */
  push32((uint32_t)(EBX));
  /* 127a347c push esi */
  push32((uint32_t)(ESI));
  /* 127a347d push edi */
  push32((uint32_t)(EDI));
  /* 127a347e push 0x127cb134 */
  push32((uint32_t)(0x127cb134u));
  /* 127a3483 push 0x127cb130 */
  push32((uint32_t)(0x127cb130u));
  /* 127a3488 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 127a348a push 0x127cb120 */
  push32((uint32_t)(0x127cb120u));
  /* 127a348f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a3491 call 0x127a3840 */
  push32(0x127a3496u); f_127a3840();
  /* 127a3496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3499 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a349c jne 0x127a349f */
  if (!C.zf) goto L_127a349f;
  /* 127a349e int3  */
  x86_unimpl("int3 @ 0x127a349e");
L_127a349f:;
  /* 127a349f pop edi */
  EDI = (pop32());
  /* 127a34a0 pop esi */
  ESI = (pop32());
  /* 127a34a1 pop ebx */
  EBX = (pop32());
  /* 127a34a2 pop edx */
  EDX = (pop32());
  /* 127a34a3 pop eax */
  EAX = (pop32());
  /* 127a34a4 mov esp, ebp */
  ESP = (EBP);
  /* 127a34a6 pop ebp */
  EBP = (pop32());
  /* 127a34a7 ret  */
  ESPCHK(0x127a3470u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x127a34b0 (313 bytes, 78 insns) */
void f_127a34b0(void) {
  FTRACE(0x127a34b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a34b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a34b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a34b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a34b7 jne 0x127a3577 */
  if (!C.zf) goto L_127a3577;
  /* 127a34bd call dword ptr [0x127d3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3290))), 0x127a34c3u);
  /* 127a34c3 mov dword ptr [0x127d0518], eax */
  w32((uint32_t)(0x127d0518), (EAX));
  /* 127a34c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a34ca call 0x127a6f70 */
  push32(0x127a34cfu); f_127a6f70();
  /* 127a34cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a34d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a34d4 jne 0x127a34dd */
  if (!C.zf) goto L_127a34dd;
  /* 127a34d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a34d8 jmp 0x127a35e5 */
  goto L_127a35e5;
L_127a34dd:;
  /* 127a34dd mov eax, dword ptr [0x127d0518] */
  EAX = (r32((uint32_t)(0x127d0518)));
  /* 127a34e2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 127a34e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a34ea mov dword ptr [0x127d0524], eax */
  w32((uint32_t)(0x127d0524), (EAX));
  /* 127a34ef mov ecx, dword ptr [0x127d0518] */
  ECX = (r32((uint32_t)(0x127d0518)));
  /* 127a34f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a34fb mov dword ptr [0x127d0520], ecx */
  w32((uint32_t)(0x127d0520), (ECX));
  /* 127a3501 mov edx, dword ptr [0x127d0520] */
  EDX = (r32((uint32_t)(0x127d0520)));
  /* 127a3507 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127a350a add edx, dword ptr [0x127d0524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127d0524))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3510 mov dword ptr [0x127d051c], edx */
  w32((uint32_t)(0x127d051c), (EDX));
  /* 127a3516 mov eax, dword ptr [0x127d0518] */
  EAX = (r32((uint32_t)(0x127d0518)));
  /* 127a351b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127a351e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a3523 mov dword ptr [0x127d0518], eax */
  w32((uint32_t)(0x127d0518), (EAX));
  /* 127a3528 call 0x127a40e0 */
  push32(0x127a352du); f_127a40e0();
  /* 127a352d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a352f jne 0x127a353d */
  if (!C.zf) goto L_127a353d;
  /* 127a3531 call 0x127a6fc0 */
  push32(0x127a3536u); f_127a6fc0();
  /* 127a3536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a3538 jmp 0x127a35e5 */
  goto L_127a35e5;
L_127a353d:;
  /* 127a353d call dword ptr [0x127d328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d328c))), 0x127a3543u);
  /* 127a3543 mov dword ptr [0x127d206c], eax */
  w32((uint32_t)(0x127d206c), (EAX));
  /* 127a3548 call 0x127a6d50 */
  push32(0x127a354du); f_127a6d50();
  /* 127a354d mov dword ptr [0x127d0500], eax */
  w32((uint32_t)(0x127d0500), (EAX));
  /* 127a3552 call 0x127a4390 */
  push32(0x127a3557u); f_127a4390();
  /* 127a3557 call 0x127a6840 */
  push32(0x127a355cu); f_127a6840();
  /* 127a355c call 0x127a66f0 */
  push32(0x127a3561u); f_127a66f0();
  /* 127a3561 call 0x127a3ee0 */
  push32(0x127a3566u); f_127a3ee0();
  /* 127a3566 mov ecx, dword ptr [0x127d04fc] */
  ECX = (r32((uint32_t)(0x127d04fc)));
  /* 127a356c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a356f mov dword ptr [0x127d04fc], ecx */
  w32((uint32_t)(0x127d04fc), (ECX));
  /* 127a3575 jmp 0x127a35e0 */
  goto L_127a35e0;
L_127a3577:;
  /* 127a3577 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a357b jne 0x127a35d0 */
  if (!C.zf) goto L_127a35d0;
  /* 127a357d cmp dword ptr [0x127d04fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d04fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3584 jle 0x127a35ca */
  if ((C.zf||C.sf!=C.of)) goto L_127a35ca;
  /* 127a3586 mov edx, dword ptr [0x127d04fc] */
  EDX = (r32((uint32_t)(0x127d04fc)));
  /* 127a358c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a358f mov dword ptr [0x127d04fc], edx */
  w32((uint32_t)(0x127d04fc), (EDX));
  /* 127a3595 cmp dword ptr [0x127d0550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a359c jne 0x127a35a3 */
  if (!C.zf) goto L_127a35a3;
  /* 127a359e call 0x127a3f60 */
  push32(0x127a35a3u); f_127a3f60();
L_127a35a3:;
  /* 127a35a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127a35a5 call 0x127a5c90 */
  push32(0x127a35aau); f_127a5c90();
  /* 127a35aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a35ad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127a35b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a35b2 je 0x127a35b9 */
  if (C.zf) goto L_127a35b9;
  /* 127a35b4 call 0x127a65a0 */
  push32(0x127a35b9u); f_127a65a0();
L_127a35b9:;
  /* 127a35b9 call 0x127a46c0 */
  push32(0x127a35beu); f_127a46c0();
  /* 127a35be call 0x127a4170 */
  push32(0x127a35c3u); f_127a4170();
  /* 127a35c3 call 0x127a6fc0 */
  push32(0x127a35c8u); f_127a6fc0();
  /* 127a35c8 jmp 0x127a35ce */
  goto L_127a35ce;
L_127a35ca:;
  /* 127a35ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a35cc jmp 0x127a35e5 */
  goto L_127a35e5;
L_127a35ce:;
  /* 127a35ce jmp 0x127a35e0 */
  goto L_127a35e0;
L_127a35d0:;
  /* 127a35d0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a35d4 jne 0x127a35e0 */
  if (!C.zf) goto L_127a35e0;
  /* 127a35d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a35d8 call 0x127a4260 */
  push32(0x127a35ddu); f_127a4260();
  /* 127a35dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a35e0:;
  /* 127a35e0 mov eax, 1 */
  EAX = (0x1u);
L_127a35e5:;
  /* 127a35e5 pop ebp */
  EBP = (pop32());
  /* 127a35e6 ret 0xc */
  ESPCHK(0x127a34b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x127a35f0 (243 bytes, 86 insns) */
void f_127a35f0(void) {
  FTRACE(0x127a35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a35f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a35f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a35f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127a35fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a35ff jne 0x127a3611 */
  if (!C.zf) goto L_127a3611;
  /* 127a3601 cmp dword ptr [0x127d04fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d04fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3608 jne 0x127a3611 */
  if (!C.zf) goto L_127a3611;
  /* 127a360a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a360c jmp 0x127a36dd */
  goto L_127a36dd;
L_127a3611:;
  /* 127a3611 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3615 je 0x127a361d */
  if (C.zf) goto L_127a361d;
  /* 127a3617 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a361b jne 0x127a365f */
  if (!C.zf) goto L_127a365f;
L_127a361d:;
  /* 127a361d cmp dword ptr [0x127d207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3624 je 0x127a363b */
  if (C.zf) goto L_127a363b;
  /* 127a3626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3629 push eax */
  push32((uint32_t)(EAX));
  /* 127a362a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a362d push ecx */
  push32((uint32_t)(ECX));
  /* 127a362e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3631 push edx */
  push32((uint32_t)(EDX));
  /* 127a3632 call dword ptr [0x127d207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d207c))), 0x127a3638u);
  /* 127a3638 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a363b:;
  /* 127a363b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a363f je 0x127a3655 */
  if (C.zf) goto L_127a3655;
  /* 127a3641 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3644 push eax */
  push32((uint32_t)(EAX));
  /* 127a3645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3648 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a364c push edx */
  push32((uint32_t)(EDX));
  /* 127a364d call 0x127a34b0 */
  push32(0x127a3652u); f_127a34b0();
  /* 127a3652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a3655:;
  /* 127a3655 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3659 jne 0x127a365f */
  if (!C.zf) goto L_127a365f;
  /* 127a365b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a365d jmp 0x127a36dd */
  goto L_127a36dd;
L_127a365f:;
  /* 127a365f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3662 push eax */
  push32((uint32_t)(EAX));
  /* 127a3663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3666 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a366a push edx */
  push32((uint32_t)(EDX));
  /* 127a366b call 0x127a100a */
  push32(0x127a3670u); f_127a100a();
  /* 127a3670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a3673 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3677 jne 0x127a368e */
  if (!C.zf) goto L_127a368e;
  /* 127a3679 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a367d jne 0x127a368e */
  if (!C.zf) goto L_127a368e;
  /* 127a367f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3682 push eax */
  push32((uint32_t)(EAX));
  /* 127a3683 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3688 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3689 call 0x127a34b0 */
  push32(0x127a368eu); f_127a34b0();
L_127a368e:;
  /* 127a368e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3692 je 0x127a369a */
  if (C.zf) goto L_127a369a;
  /* 127a3694 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3698 jne 0x127a36da */
  if (!C.zf) goto L_127a36da;
L_127a369a:;
  /* 127a369a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a369d push edx */
  push32((uint32_t)(EDX));
  /* 127a369e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a36a1 push eax */
  push32((uint32_t)(EAX));
  /* 127a36a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a36a5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a36a6 call 0x127a34b0 */
  push32(0x127a36abu); f_127a34b0();
  /* 127a36ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a36ad jne 0x127a36b6 */
  if (!C.zf) goto L_127a36b6;
  /* 127a36af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a36b6:;
  /* 127a36b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a36ba je 0x127a36da */
  if (C.zf) goto L_127a36da;
  /* 127a36bc cmp dword ptr [0x127d207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a36c3 je 0x127a36da */
  if (C.zf) goto L_127a36da;
  /* 127a36c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a36c8 push edx */
  push32((uint32_t)(EDX));
  /* 127a36c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a36cc push eax */
  push32((uint32_t)(EAX));
  /* 127a36cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a36d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a36d1 call dword ptr [0x127d207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d207c))), 0x127a36d7u);
  /* 127a36d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a36da:;
  /* 127a36da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a36dd:;
  /* 127a36dd mov esp, ebp */
  ESP = (EBP);
  /* 127a36df pop ebp */
  EBP = (pop32());
  /* 127a36e0 ret 0xc */
  ESPCHK(0x127a35f0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x127a36f0 (58 bytes, 18 insns) */
void f_127a36f0(void) {
  FTRACE(0x127a36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a36f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a36f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a36f3 cmp dword ptr [0x127d0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a36fa je 0x127a370e */
  if (C.zf) goto L_127a370e;
  /* 127a36fc cmp dword ptr [0x127d0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3703 jne 0x127a3713 */
  if (!C.zf) goto L_127a3713;
  /* 127a3705 cmp dword ptr [0x127d050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a370c jne 0x127a3713 */
  if (!C.zf) goto L_127a3713;
L_127a370e:;
  /* 127a370e call 0x127a7060 */
  push32(0x127a3713u); f_127a7060();
L_127a3713:;
  /* 127a3713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3716 push eax */
  push32((uint32_t)(EAX));
  /* 127a3717 call 0x127a70b0 */
  push32(0x127a371cu); f_127a70b0();
  /* 127a371c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a371f push 0xff */
  push32((uint32_t)(0xffu));
  /* 127a3724 call dword ptr [0x127cea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cea30))), 0x127a372au);
  /* 127a372a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a372d pop ebp */
  EBP = (pop32());
  /* 127a372e ret  */
  ESPCHK(0x127a36f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x127a3730 (11 bytes, 5 insns) */
void f_127a3730(void) {
  FTRACE(0x127a3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3730 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3731 mov ebp, esp */
  EBP = (ESP);
  /* 127a3733 call dword ptr [0x127d3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3294))), 0x127a3739u);
  /* 127a3739 pop ebp */
  EBP = (pop32());
  /* 127a373a ret  */
  ESPCHK(0x127a3730u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x127a3740 (87 bytes, 30 insns) */
void f_127a3740(void) {
  FTRACE(0x127a3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3740 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3741 mov ebp, esp */
  EBP = (ESP);
  /* 127a3743 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3744 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3748 jl 0x127a3750 */
  if ((C.sf!=C.of)) goto L_127a3750;
  /* 127a374a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a374e jl 0x127a3755 */
  if ((C.sf!=C.of)) goto L_127a3755;
L_127a3750:;
  /* 127a3750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a3753 jmp 0x127a3793 */
  goto L_127a3793;
L_127a3755:;
  /* 127a3755 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3759 jne 0x127a3767 */
  if (!C.zf) goto L_127a3767;
  /* 127a375b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a375e mov eax, dword ptr [eax*4 + 0x127cea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x127cea38)));
  /* 127a3765 jmp 0x127a3793 */
  goto L_127a3793;
L_127a3767:;
  /* 127a3767 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a376a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 127a376d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a376f je 0x127a3776 */
  if (C.zf) goto L_127a3776;
  /* 127a3771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a3774 jmp 0x127a3793 */
  goto L_127a3793;
L_127a3776:;
  /* 127a3776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3779 mov eax, dword ptr [edx*4 + 0x127cea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127cea38)));
  /* 127a3780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a3783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3789 mov dword ptr [ecx*4 + 0x127cea38], edx */
  w32((uint32_t)(ECX*4 + 0x127cea38), (EDX));
  /* 127a3790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a3793:;
  /* 127a3793 mov esp, ebp */
  ESP = (EBP);
  /* 127a3795 pop ebp */
  EBP = (pop32());
  /* 127a3796 ret  */
  ESPCHK(0x127a3740u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x127a37a0 (126 bytes, 38 insns) */
void f_127a37a0(void) {
  FTRACE(0x127a37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a37a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a37a1 mov ebp, esp */
  EBP = (ESP);
  /* 127a37a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a37a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a37a8 jl 0x127a37b0 */
  if ((C.sf!=C.of)) goto L_127a37b0;
  /* 127a37aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a37ae jl 0x127a37b7 */
  if ((C.sf!=C.of)) goto L_127a37b7;
L_127a37b0:;
  /* 127a37b0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 127a37b5 jmp 0x127a381a */
  goto L_127a381a;
L_127a37b7:;
  /* 127a37b7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a37bb jne 0x127a37c9 */
  if (!C.zf) goto L_127a37c9;
  /* 127a37bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a37c0 mov eax, dword ptr [eax*4 + 0x127cea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x127cea44)));
  /* 127a37c7 jmp 0x127a381a */
  goto L_127a381a;
L_127a37c9:;
  /* 127a37c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a37cc mov edx, dword ptr [ecx*4 + 0x127cea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea44)));
  /* 127a37d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a37d6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a37da jne 0x127a37f0 */
  if (!C.zf) goto L_127a37f0;
  /* 127a37dc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 127a37de call dword ptr [0x127d3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3298))), 0x127a37e4u);
  /* 127a37e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a37e7 mov dword ptr [ecx*4 + 0x127cea44], eax */
  w32((uint32_t)(ECX*4 + 0x127cea44), (EAX));
  /* 127a37ee jmp 0x127a3817 */
  goto L_127a3817;
L_127a37f0:;
  /* 127a37f0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a37f4 jne 0x127a380a */
  if (!C.zf) goto L_127a380a;
  /* 127a37f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127a37f8 call dword ptr [0x127d3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3298))), 0x127a37feu);
  /* 127a37fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3801 mov dword ptr [edx*4 + 0x127cea44], eax */
  w32((uint32_t)(EDX*4 + 0x127cea44), (EAX));
  /* 127a3808 jmp 0x127a3817 */
  goto L_127a3817;
L_127a380a:;
  /* 127a380a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a380d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3810 mov dword ptr [eax*4 + 0x127cea44], ecx */
  w32((uint32_t)(EAX*4 + 0x127cea44), (ECX));
L_127a3817:;
  /* 127a3817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a381a:;
  /* 127a381a mov esp, ebp */
  ESP = (EBP);
  /* 127a381c pop ebp */
  EBP = (pop32());
  /* 127a381d ret  */
  ESPCHK(0x127a37a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003820 @ 0x127a3820 (28 bytes, 11 insns) */
void f_127a3820(void) {
  FTRACE(0x127a3820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3820 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3821 mov ebp, esp */
  EBP = (ESP);
  /* 127a3823 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3824 mov eax, dword ptr [0x127d2060] */
  EAX = (r32((uint32_t)(0x127d2060)));
  /* 127a3829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a382c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a382f mov dword ptr [0x127d2060], ecx */
  w32((uint32_t)(0x127d2060), (ECX));
  /* 127a3835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3838 mov esp, ebp */
  ESP = (EBP);
  /* 127a383a pop ebp */
  EBP = (pop32());
  /* 127a383b ret  */
  ESPCHK(0x127a3820u, _esp0);
  ESP += 4; return;
}

/* FUN_10003840 @ 0x127a3840 (912 bytes, 248 insns) */
void f_127a3840(void) {
  FTRACE(0x127a3840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3840 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3841 mov ebp, esp */
  EBP = (ESP);
  /* 127a3843 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 127a3848 call 0x127a7920 */
  push32(0x127a384du); f_127a7920();
  /* 127a384d push edi */
  push32((uint32_t)(EDI));
  /* 127a384e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 127a3855 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 127a385a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a385c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 127a3862 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a3864 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 127a3866 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 127a3867 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 127a386e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 127a3873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a3875 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 127a387b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a387d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 127a387f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 127a3880 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 127a3887 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 127a388c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a388e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 127a3894 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a3896 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 127a3898 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 127a3899 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 127a389c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 127a38a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a38a6 jl 0x127a38ae */
  if ((C.sf!=C.of)) goto L_127a38ae;
  /* 127a38a8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a38ac jl 0x127a38b6 */
  if ((C.sf!=C.of)) goto L_127a38b6;
L_127a38ae:;
  /* 127a38ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a38b1 jmp 0x127a3bcb */
  goto L_127a3bcb;
L_127a38b6:;
  /* 127a38b6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a38ba jne 0x127a3960 */
  if (!C.zf) goto L_127a3960;
  /* 127a38c0 push 0x127cea34 */
  push32((uint32_t)(0x127cea34u));
  /* 127a38c5 call dword ptr [0x127d32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b0))), 0x127a38cbu);
  /* 127a38cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a38cd jle 0x127a3960 */
  if ((C.zf||C.sf!=C.of)) goto L_127a3960;
  /* 127a38d3 cmp dword ptr [0x127d0510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a38da jne 0x127a391e */
  if (!C.zf) goto L_127a391e;
  /* 127a38dc push 0x127cb2dc */
  push32((uint32_t)(0x127cb2dcu));
  /* 127a38e1 call dword ptr [0x127d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32ac))), 0x127a38e7u);
  /* 127a38e7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 127a38ed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a38f4 je 0x127a3916 */
  if (C.zf) goto L_127a3916;
  /* 127a38f6 push 0x127cb2d0 */
  push32((uint32_t)(0x127cb2d0u));
  /* 127a38fb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 127a3901 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3902 call dword ptr [0x127d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a8))), 0x127a3908u);
  /* 127a3908 mov dword ptr [0x127d0510], eax */
  w32((uint32_t)(0x127d0510), (EAX));
  /* 127a390d cmp dword ptr [0x127d0510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3914 jne 0x127a391e */
  if (!C.zf) goto L_127a391e;
L_127a3916:;
  /* 127a3916 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a3919 jmp 0x127a3bcb */
  goto L_127a3bcb;
L_127a391e:;
  /* 127a391e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3921 push edx */
  push32((uint32_t)(EDX));
  /* 127a3922 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3925 push eax */
  push32((uint32_t)(EAX));
  /* 127a3926 push 0x127cb29c */
  push32((uint32_t)(0x127cb29cu));
  /* 127a392b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 127a3931 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3932 call dword ptr [0x127d0510] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d0510))), 0x127a3938u);
  /* 127a3938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a393b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127a3941 push edx */
  push32((uint32_t)(EDX));
  /* 127a3942 call dword ptr [0x127d32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a4))), 0x127a3948u);
  /* 127a3948 push 0x127cea34 */
  push32((uint32_t)(0x127cea34u));
  /* 127a394d call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127a3953u);
  /* 127a3953 call 0x127a3730 */
  push32(0x127a3958u); f_127a3730();
  /* 127a3958 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a395b jmp 0x127a3bcb */
  goto L_127a3bcb;
L_127a3960:;
  /* 127a3960 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3964 je 0x127a399d */
  if (C.zf) goto L_127a399d;
  /* 127a3966 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 127a396c push eax */
  push32((uint32_t)(EAX));
  /* 127a396d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a3970 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3971 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 127a3976 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 127a397c push edx */
  push32((uint32_t)(EDX));
  /* 127a397d call 0x127a7820 */
  push32(0x127a3982u); f_127a7820();
  /* 127a3982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3987 jge 0x127a399d */
  if ((C.sf==C.of)) goto L_127a399d;
  /* 127a3989 push 0x127cb270 */
  push32((uint32_t)(0x127cb270u));
  /* 127a398e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 127a3994 push eax */
  push32((uint32_t)(EAX));
  /* 127a3995 call 0x127a7730 */
  push32(0x127a399au); f_127a7730();
  /* 127a399a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a399d:;
  /* 127a399d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a39a1 jne 0x127a39d5 */
  if (!C.zf) goto L_127a39d5;
  /* 127a39a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a39a7 je 0x127a39b5 */
  if (C.zf) goto L_127a39b5;
  /* 127a39a9 mov dword ptr [ebp - 0x3028], 0x127cb25c */
  w32((uint32_t)(EBP + -0x3028), (0x127cb25cu));
  /* 127a39b3 jmp 0x127a39bf */
  goto L_127a39bf;
L_127a39b5:;
  /* 127a39b5 mov dword ptr [ebp - 0x3028], 0x127cb248 */
  w32((uint32_t)(EBP + -0x3028), (0x127cb248u));
L_127a39bf:;
  /* 127a39bf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 127a39c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a39c6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 127a39cc push edx */
  push32((uint32_t)(EDX));
  /* 127a39cd call 0x127a7730 */
  push32(0x127a39d2u); f_127a7730();
  /* 127a39d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a39d5:;
  /* 127a39d5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 127a39db push eax */
  push32((uint32_t)(EAX));
  /* 127a39dc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 127a39e2 push ecx */
  push32((uint32_t)(ECX));
  /* 127a39e3 call 0x127a7740 */
  push32(0x127a39e8u); f_127a7740();
  /* 127a39e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a39eb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a39ef jne 0x127a3a2a */
  if (!C.zf) goto L_127a3a2a;
  /* 127a39f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a39f4 mov eax, dword ptr [edx*4 + 0x127cea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127cea38)));
  /* 127a39fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127a39fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3a00 je 0x127a3a16 */
  if (C.zf) goto L_127a3a16;
  /* 127a3a02 push 0x127cb244 */
  push32((uint32_t)(0x127cb244u));
  /* 127a3a07 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 127a3a0d push ecx */
  push32((uint32_t)(ECX));
  /* 127a3a0e call 0x127a7740 */
  push32(0x127a3a13u); f_127a7740();
  /* 127a3a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3a16:;
  /* 127a3a16 push 0x127cb240 */
  push32((uint32_t)(0x127cb240u));
  /* 127a3a1b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 127a3a21 push edx */
  push32((uint32_t)(EDX));
  /* 127a3a22 call 0x127a7740 */
  push32(0x127a3a27u); f_127a7740();
  /* 127a3a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3a2a:;
  /* 127a3a2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3a2e je 0x127a3a72 */
  if (C.zf) goto L_127a3a72;
  /* 127a3a30 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 127a3a36 push eax */
  push32((uint32_t)(EAX));
  /* 127a3a37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3a3a push ecx */
  push32((uint32_t)(ECX));
  /* 127a3a3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3a3e push edx */
  push32((uint32_t)(EDX));
  /* 127a3a3f push 0x127cb234 */
  push32((uint32_t)(0x127cb234u));
  /* 127a3a44 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127a3a49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 127a3a4f push eax */
  push32((uint32_t)(EAX));
  /* 127a3a50 call 0x127a7630 */
  push32(0x127a3a55u); f_127a7630();
  /* 127a3a55 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3a5a jge 0x127a3a70 */
  if ((C.sf==C.of)) goto L_127a3a70;
  /* 127a3a5c push 0x127cb270 */
  push32((uint32_t)(0x127cb270u));
  /* 127a3a61 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 127a3a67 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3a68 call 0x127a7730 */
  push32(0x127a3a6du); f_127a7730();
  /* 127a3a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3a70:;
  /* 127a3a70 jmp 0x127a3a88 */
  goto L_127a3a88;
L_127a3a72:;
  /* 127a3a72 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 127a3a78 push edx */
  push32((uint32_t)(EDX));
  /* 127a3a79 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 127a3a7f push eax */
  push32((uint32_t)(EAX));
  /* 127a3a80 call 0x127a7730 */
  push32(0x127a3a85u); f_127a7730();
  /* 127a3a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3a88:;
  /* 127a3a88 cmp dword ptr [0x127d2060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3a8f je 0x127a3acc */
  if (C.zf) goto L_127a3acc;
  /* 127a3a91 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 127a3a97 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3a98 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127a3a9e push edx */
  push32((uint32_t)(EDX));
  /* 127a3a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3aa2 push eax */
  push32((uint32_t)(EAX));
  /* 127a3aa3 call dword ptr [0x127d2060] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d2060))), 0x127a3aa9u);
  /* 127a3aa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3aae je 0x127a3acc */
  if (C.zf) goto L_127a3acc;
  /* 127a3ab0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3ab4 jne 0x127a3ac1 */
  if (!C.zf) goto L_127a3ac1;
  /* 127a3ab6 push 0x127cea34 */
  push32((uint32_t)(0x127cea34u));
  /* 127a3abb call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127a3ac1u);
L_127a3ac1:;
  /* 127a3ac1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 127a3ac7 jmp 0x127a3bcb */
  goto L_127a3bcb;
L_127a3acc:;
  /* 127a3acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3acf mov edx, dword ptr [ecx*4 + 0x127cea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea38)));
  /* 127a3ad6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127a3ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a3adb je 0x127a3b1b */
  if (C.zf) goto L_127a3b1b;
  /* 127a3add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3ae0 cmp dword ptr [eax*4 + 0x127cea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x127cea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3ae8 je 0x127a3b1b */
  if (C.zf) goto L_127a3b1b;
  /* 127a3aea push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3aec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 127a3af2 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3af3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127a3af9 push edx */
  push32((uint32_t)(EDX));
  /* 127a3afa call 0x127a75b0 */
  push32(0x127a3affu); f_127a75b0();
  /* 127a3aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3b02 push eax */
  push32((uint32_t)(EAX));
  /* 127a3b03 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 127a3b09 push eax */
  push32((uint32_t)(EAX));
  /* 127a3b0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3b0d mov edx, dword ptr [ecx*4 + 0x127cea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea44)));
  /* 127a3b14 push edx */
  push32((uint32_t)(EDX));
  /* 127a3b15 call dword ptr [0x127d329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d329c))), 0x127a3b1bu);
L_127a3b1b:;
  /* 127a3b1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3b1e mov ecx, dword ptr [eax*4 + 0x127cea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127cea38)));
  /* 127a3b25 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127a3b28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a3b2a je 0x127a3b39 */
  if (C.zf) goto L_127a3b39;
  /* 127a3b2c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127a3b32 push edx */
  push32((uint32_t)(EDX));
  /* 127a3b33 call dword ptr [0x127d32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a4))), 0x127a3b39u);
L_127a3b39:;
  /* 127a3b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3b3c mov ecx, dword ptr [eax*4 + 0x127cea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127cea38)));
  /* 127a3b43 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127a3b46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a3b48 je 0x127a3bb8 */
  if (C.zf) goto L_127a3bb8;
  /* 127a3b4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3b4e je 0x127a3b6d */
  if (C.zf) goto L_127a3b6d;
  /* 127a3b50 push 0xa */
  push32((uint32_t)(0xau));
  /* 127a3b52 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 127a3b58 push edx */
  push32((uint32_t)(EDX));
  /* 127a3b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3b5c push eax */
  push32((uint32_t)(EAX));
  /* 127a3b5d call 0x127a72c0 */
  push32(0x127a3b62u); f_127a72c0();
  /* 127a3b62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3b65 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 127a3b6b jmp 0x127a3b77 */
  goto L_127a3b77;
L_127a3b6d:;
  /* 127a3b6d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_127a3b77:;
  /* 127a3b77 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 127a3b7d push ecx */
  push32((uint32_t)(ECX));
  /* 127a3b7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a3b81 push edx */
  push32((uint32_t)(EDX));
  /* 127a3b82 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 127a3b88 push eax */
  push32((uint32_t)(EAX));
  /* 127a3b89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3b8c push ecx */
  push32((uint32_t)(ECX));
  /* 127a3b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3b90 push edx */
  push32((uint32_t)(EDX));
  /* 127a3b91 call 0x127a3bd0 */
  push32(0x127a3b96u); f_127a3bd0();
  /* 127a3b96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3b99 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 127a3b9f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3ba3 jne 0x127a3bb0 */
  if (!C.zf) goto L_127a3bb0;
  /* 127a3ba5 push 0x127cea34 */
  push32((uint32_t)(0x127cea34u));
  /* 127a3baa call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127a3bb0u);
L_127a3bb0:;
  /* 127a3bb0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 127a3bb6 jmp 0x127a3bcb */
  goto L_127a3bcb;
L_127a3bb8:;
  /* 127a3bb8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3bbc jne 0x127a3bc9 */
  if (!C.zf) goto L_127a3bc9;
  /* 127a3bbe push 0x127cea34 */
  push32((uint32_t)(0x127cea34u));
  /* 127a3bc3 call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127a3bc9u);
L_127a3bc9:;
  /* 127a3bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a3bcb:;
  /* 127a3bcb pop edi */
  EDI = (pop32());
  /* 127a3bcc mov esp, ebp */
  ESP = (EBP);
  /* 127a3bce pop ebp */
  EBP = (pop32());
  /* 127a3bcf ret  */
  ESPCHK(0x127a3840u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x127a3bd0 (780 bytes, 197 insns) */
void f_127a3bd0(void) {
  FTRACE(0x127a3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 127a3bd3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 127a3bd8 call 0x127a7920 */
  push32(0x127a3bddu); f_127a7920();
L_127a3bdd:;
  /* 127a3bdd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3be1 jne 0x127a3c08 */
  if (!C.zf) goto L_127a3c08;
  /* 127a3be3 push 0x127cb42c */
  push32((uint32_t)(0x127cb42cu));
  /* 127a3be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3bea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 127a3bef push 0x127cb420 */
  push32((uint32_t)(0x127cb420u));
  /* 127a3bf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a3bf6 call 0x127a3840 */
  push32(0x127a3bfbu); f_127a3840();
  /* 127a3bfb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3bfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3c01 jne 0x127a3c08 */
  if (!C.zf) goto L_127a3c08;
  /* 127a3c03 call 0x127a3730 */
  push32(0x127a3c08u); f_127a3730();
L_127a3c08:;
  /* 127a3c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a3c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3c0c jne 0x127a3bdd */
  if (!C.zf) goto L_127a3bdd;
  /* 127a3c0e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 127a3c13 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 127a3c19 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3c1c call dword ptr [0x127d32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b4))), 0x127a3c22u);
  /* 127a3c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3c24 jne 0x127a3c3a */
  if (!C.zf) goto L_127a3c3a;
  /* 127a3c26 push 0x127cb408 */
  push32((uint32_t)(0x127cb408u));
  /* 127a3c2b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 127a3c31 push edx */
  push32((uint32_t)(EDX));
  /* 127a3c32 call 0x127a7730 */
  push32(0x127a3c37u); f_127a7730();
  /* 127a3c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3c3a:;
  /* 127a3c3a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 127a3c40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a3c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3c46 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3c47 call 0x127a75b0 */
  push32(0x127a3c4cu); f_127a75b0();
  /* 127a3c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3c4f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3c52 jbe 0x127a3c7d */
  if ((C.cf||C.zf)) goto L_127a3c7d;
  /* 127a3c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3c57 push edx */
  push32((uint32_t)(EDX));
  /* 127a3c58 call 0x127a75b0 */
  push32(0x127a3c5du); f_127a75b0();
  /* 127a3c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3c60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3c63 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 127a3c67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a3c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 127a3c6c push 0x127cb404 */
  push32((uint32_t)(0x127cb404u));
  /* 127a3c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3c74 push eax */
  push32((uint32_t)(EAX));
  /* 127a3c75 call 0x127a7fa0 */
  push32(0x127a3c7au); f_127a7fa0();
  /* 127a3c7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3c7d:;
  /* 127a3c7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a3c80 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 127a3c86 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3c8d je 0x127a3cd8 */
  if (C.zf) goto L_127a3cd8;
  /* 127a3c8f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127a3c95 push edx */
  push32((uint32_t)(EDX));
  /* 127a3c96 call 0x127a75b0 */
  push32(0x127a3c9bu); f_127a75b0();
  /* 127a3c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3c9e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3ca1 jbe 0x127a3cd8 */
  if ((C.cf||C.zf)) goto L_127a3cd8;
  /* 127a3ca3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127a3ca9 push eax */
  push32((uint32_t)(EAX));
  /* 127a3caa call 0x127a75b0 */
  push32(0x127a3cafu); f_127a75b0();
  /* 127a3caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3cb2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127a3cb8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 127a3cbc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 127a3cc2 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a3cc4 push 0x127cb404 */
  push32((uint32_t)(0x127cb404u));
  /* 127a3cc9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127a3ccf push eax */
  push32((uint32_t)(EAX));
  /* 127a3cd0 call 0x127a7fa0 */
  push32(0x127a3cd5u); f_127a7fa0();
  /* 127a3cd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3cd8:;
  /* 127a3cd8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3cdc jne 0x127a3cea */
  if (!C.zf) goto L_127a3cea;
  /* 127a3cde mov dword ptr [ebp - 0x1114], 0x127cb390 */
  w32((uint32_t)(EBP + -0x1114), (0x127cb390u));
  /* 127a3ce8 jmp 0x127a3cf4 */
  goto L_127a3cf4;
L_127a3cea:;
  /* 127a3cea mov dword ptr [ebp - 0x1114], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1114), (0x127cb130u));
L_127a3cf4:;
  /* 127a3cf4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a3cf7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a3cfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a3cfc je 0x127a3d09 */
  if (C.zf) goto L_127a3d09;
  /* 127a3cfe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a3d01 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 127a3d07 jmp 0x127a3d13 */
  goto L_127a3d13;
L_127a3d09:;
  /* 127a3d09 mov dword ptr [ebp - 0x1118], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1118), (0x127cb130u));
L_127a3d13:;
  /* 127a3d13 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a3d16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a3d19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a3d1b je 0x127a3d2f */
  if (C.zf) goto L_127a3d2f;
  /* 127a3d1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3d21 jne 0x127a3d2f */
  if (!C.zf) goto L_127a3d2f;
  /* 127a3d23 mov dword ptr [ebp - 0x111c], 0x127cb380 */
  w32((uint32_t)(EBP + -0x111c), (0x127cb380u));
  /* 127a3d2d jmp 0x127a3d39 */
  goto L_127a3d39;
L_127a3d2f:;
  /* 127a3d2f mov dword ptr [ebp - 0x111c], 0x127cb130 */
  w32((uint32_t)(EBP + -0x111c), (0x127cb130u));
L_127a3d39:;
  /* 127a3d39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a3d3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a3d3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a3d41 je 0x127a3d4f */
  if (C.zf) goto L_127a3d4f;
  /* 127a3d43 mov dword ptr [ebp - 0x1120], 0x127cb37c */
  w32((uint32_t)(EBP + -0x1120), (0x127cb37cu));
  /* 127a3d4d jmp 0x127a3d59 */
  goto L_127a3d59;
L_127a3d4f:;
  /* 127a3d4f mov dword ptr [ebp - 0x1120], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1120), (0x127cb130u));
L_127a3d59:;
  /* 127a3d59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3d5d je 0x127a3d6a */
  if (C.zf) goto L_127a3d6a;
  /* 127a3d5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a3d62 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 127a3d68 jmp 0x127a3d74 */
  goto L_127a3d74;
L_127a3d6a:;
  /* 127a3d6a mov dword ptr [ebp - 0x1124], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1124), (0x127cb130u));
L_127a3d74:;
  /* 127a3d74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3d78 je 0x127a3d86 */
  if (C.zf) goto L_127a3d86;
  /* 127a3d7a mov dword ptr [ebp - 0x1128], 0x127cb374 */
  w32((uint32_t)(EBP + -0x1128), (0x127cb374u));
  /* 127a3d84 jmp 0x127a3d90 */
  goto L_127a3d90;
L_127a3d86:;
  /* 127a3d86 mov dword ptr [ebp - 0x1128], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1128), (0x127cb130u));
L_127a3d90:;
  /* 127a3d90 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3d94 je 0x127a3da1 */
  if (C.zf) goto L_127a3da1;
  /* 127a3d96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a3d99 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 127a3d9f jmp 0x127a3dab */
  goto L_127a3dab;
L_127a3da1:;
  /* 127a3da1 mov dword ptr [ebp - 0x112c], 0x127cb130 */
  w32((uint32_t)(EBP + -0x112c), (0x127cb130u));
L_127a3dab:;
  /* 127a3dab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3daf je 0x127a3dbd */
  if (C.zf) goto L_127a3dbd;
  /* 127a3db1 mov dword ptr [ebp - 0x1130], 0x127cb36c */
  w32((uint32_t)(EBP + -0x1130), (0x127cb36cu));
  /* 127a3dbb jmp 0x127a3dc7 */
  goto L_127a3dc7;
L_127a3dbd:;
  /* 127a3dbd mov dword ptr [ebp - 0x1130], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1130), (0x127cb130u));
L_127a3dc7:;
  /* 127a3dc7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3dce je 0x127a3dde */
  if (C.zf) goto L_127a3dde;
  /* 127a3dd0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127a3dd6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 127a3ddc jmp 0x127a3de8 */
  goto L_127a3de8;
L_127a3dde:;
  /* 127a3dde mov dword ptr [ebp - 0x1134], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1134), (0x127cb130u));
L_127a3de8:;
  /* 127a3de8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3def je 0x127a3dfd */
  if (C.zf) goto L_127a3dfd;
  /* 127a3df1 mov dword ptr [ebp - 0x1138], 0x127cb360 */
  w32((uint32_t)(EBP + -0x1138), (0x127cb360u));
  /* 127a3dfb jmp 0x127a3e07 */
  goto L_127a3e07;
L_127a3dfd:;
  /* 127a3dfd mov dword ptr [ebp - 0x1138], 0x127cb130 */
  w32((uint32_t)(EBP + -0x1138), (0x127cb130u));
L_127a3e07:;
  /* 127a3e07 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 127a3e0d push edx */
  push32((uint32_t)(EDX));
  /* 127a3e0e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 127a3e14 push eax */
  push32((uint32_t)(EAX));
  /* 127a3e15 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 127a3e1b push ecx */
  push32((uint32_t)(ECX));
  /* 127a3e1c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 127a3e22 push edx */
  push32((uint32_t)(EDX));
  /* 127a3e23 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 127a3e29 push eax */
  push32((uint32_t)(EAX));
  /* 127a3e2a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 127a3e30 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3e31 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 127a3e37 push edx */
  push32((uint32_t)(EDX));
  /* 127a3e38 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 127a3e3e push eax */
  push32((uint32_t)(EAX));
  /* 127a3e3f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 127a3e45 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3e46 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 127a3e4c push edx */
  push32((uint32_t)(EDX));
  /* 127a3e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3e50 push eax */
  push32((uint32_t)(EAX));
  /* 127a3e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3e54 mov edx, dword ptr [ecx*4 + 0x127cea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea50)));
  /* 127a3e5b push edx */
  push32((uint32_t)(EDX));
  /* 127a3e5c push 0x127cb30c */
  push32((uint32_t)(0x127cb30cu));
  /* 127a3e61 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127a3e66 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 127a3e6c push eax */
  push32((uint32_t)(EAX));
  /* 127a3e6d call 0x127a7630 */
  push32(0x127a3e72u); f_127a7630();
  /* 127a3e72 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a3e77 jge 0x127a3e8d */
  if ((C.sf==C.of)) goto L_127a3e8d;
  /* 127a3e79 push 0x127cb270 */
  push32((uint32_t)(0x127cb270u));
  /* 127a3e7e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 127a3e84 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3e85 call 0x127a7730 */
  push32(0x127a3e8au); f_127a7730();
  /* 127a3e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a3e8d:;
  /* 127a3e8d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 127a3e92 push 0x127cb2e8 */
  push32((uint32_t)(0x127cb2e8u));
  /* 127a3e97 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 127a3e9d push edx */
  push32((uint32_t)(EDX));
  /* 127a3e9e call 0x127a7ee0 */
  push32(0x127a3ea3u); f_127a7ee0();
  /* 127a3ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3ea6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 127a3eac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3eb3 jne 0x127a3ec6 */
  if (!C.zf) goto L_127a3ec6;
  /* 127a3eb5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127a3eb7 call 0x127a7c20 */
  push32(0x127a3ebcu); f_127a7c20();
  /* 127a3ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3ebf push 3 */
  push32((uint32_t)(0x3u));
  /* 127a3ec1 call 0x127a3f40 */
  push32(0x127a3ec6u); f_127a3f40();
L_127a3ec6:;
  /* 127a3ec6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3ecd jne 0x127a3ed6 */
  if (!C.zf) goto L_127a3ed6;
  /* 127a3ecf mov eax, 1 */
  EAX = (0x1u);
  /* 127a3ed4 jmp 0x127a3ed8 */
  goto L_127a3ed8;
L_127a3ed6:;
  /* 127a3ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a3ed8:;
  /* 127a3ed8 mov esp, ebp */
  ESP = (EBP);
  /* 127a3eda pop ebp */
  EBP = (pop32());
  /* 127a3edb ret  */
  ESPCHK(0x127a3bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee0 @ 0x127a3ee0 (56 bytes, 15 insns) */
void f_127a3ee0(void) {
  FTRACE(0x127a3ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3ee1 mov ebp, esp */
  EBP = (ESP);
  /* 127a3ee3 cmp dword ptr [0x127d205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3eea je 0x127a3ef2 */
  if (C.zf) goto L_127a3ef2;
  /* 127a3eec call dword ptr [0x127d205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d205c))), 0x127a3ef2u);
L_127a3ef2:;
  /* 127a3ef2 push 0x127ce418 */
  push32((uint32_t)(0x127ce418u));
  /* 127a3ef7 push 0x127ce208 */
  push32((uint32_t)(0x127ce208u));
  /* 127a3efc call 0x127a40b0 */
  push32(0x127a3f01u); f_127a40b0();
  /* 127a3f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f04 push 0x127ce104 */
  push32((uint32_t)(0x127ce104u));
  /* 127a3f09 push 0x127ce000 */
  push32((uint32_t)(0x127ce000u));
  /* 127a3f0e call 0x127a40b0 */
  push32(0x127a3f13u); f_127a40b0();
  /* 127a3f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f16 pop ebp */
  EBP = (pop32());
  /* 127a3f17 ret  */
  ESPCHK(0x127a3ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x127a3f20 (21 bytes, 10 insns) */
void f_127a3f20(void) {
  FTRACE(0x127a3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3f21 mov ebp, esp */
  EBP = (ESP);
  /* 127a3f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3f2a push eax */
  push32((uint32_t)(EAX));
  /* 127a3f2b call 0x127a3fa0 */
  push32(0x127a3f30u); f_127a3fa0();
  /* 127a3f30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f33 pop ebp */
  EBP = (pop32());
  /* 127a3f34 ret  */
  ESPCHK(0x127a3f20u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x127a3f40 (21 bytes, 10 insns) */
void f_127a3f40(void) {
  FTRACE(0x127a3f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3f40 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3f41 mov ebp, esp */
  EBP = (ESP);
  /* 127a3f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f45 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a3f47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3f4a push eax */
  push32((uint32_t)(EAX));
  /* 127a3f4b call 0x127a3fa0 */
  push32(0x127a3f50u); f_127a3fa0();
  /* 127a3f50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f53 pop ebp */
  EBP = (pop32());
  /* 127a3f54 ret  */
  ESPCHK(0x127a3f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x127a3f60 (19 bytes, 9 insns) */
void f_127a3f60(void) {
  FTRACE(0x127a3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3f61 mov ebp, esp */
  EBP = (ESP);
  /* 127a3f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a3f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f69 call 0x127a3fa0 */
  push32(0x127a3f6eu); f_127a3fa0();
  /* 127a3f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f71 pop ebp */
  EBP = (pop32());
  /* 127a3f72 ret  */
  ESPCHK(0x127a3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x127a3f80 (19 bytes, 9 insns) */
void f_127a3f80(void) {
  FTRACE(0x127a3f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3f80 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3f81 mov ebp, esp */
  EBP = (ESP);
  /* 127a3f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a3f85 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a3f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a3f89 call 0x127a3fa0 */
  push32(0x127a3f8eu); f_127a3fa0();
  /* 127a3f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a3f91 pop ebp */
  EBP = (pop32());
  /* 127a3f92 ret  */
  ESPCHK(0x127a3f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x127a3fa0 (227 bytes, 61 insns) */
void f_127a3fa0(void) {
  FTRACE(0x127a3fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a3fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a3fa1 mov ebp, esp */
  EBP = (ESP);
  /* 127a3fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a3fa4 call 0x127a4090 */
  push32(0x127a3fa9u); f_127a4090();
  /* 127a3fa9 cmp dword ptr [0x127d0554], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0554))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3fb0 jne 0x127a3fc3 */
  if (!C.zf) goto L_127a3fc3;
  /* 127a3fb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a3fb5 push eax */
  push32((uint32_t)(EAX));
  /* 127a3fb6 call dword ptr [0x127d32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c0))), 0x127a3fbcu);
  /* 127a3fbc push eax */
  push32((uint32_t)(EAX));
  /* 127a3fbd call dword ptr [0x127d32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32bc))), 0x127a3fc3u);
L_127a3fc3:;
  /* 127a3fc3 mov dword ptr [0x127d0550], 1 */
  w32((uint32_t)(0x127d0550), (0x1u));
  /* 127a3fcd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 127a3fd0 mov byte ptr [0x127d054c], cl */
  w8((uint32_t)(0x127d054c), (CL));
  /* 127a3fd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3fda jne 0x127a4023 */
  if (!C.zf) goto L_127a4023;
  /* 127a3fdc cmp dword ptr [0x127d2058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a3fe3 je 0x127a4011 */
  if (C.zf) goto L_127a4011;
  /* 127a3fe5 mov edx, dword ptr [0x127d2054] */
  EDX = (r32((uint32_t)(0x127d2054)));
  /* 127a3feb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a3fee:;
  /* 127a3fee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3ff1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a3ff4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a3ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a3ffa cmp ecx, dword ptr [0x127d2058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d2058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4000 jb 0x127a4011 */
  if (C.cf) goto L_127a4011;
  /* 127a4002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4005 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4008 je 0x127a400f */
  if (C.zf) goto L_127a400f;
  /* 127a400a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a400d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x127a400fu);
L_127a400f:;
  /* 127a400f jmp 0x127a3fee */
  goto L_127a3fee;
L_127a4011:;
  /* 127a4011 push 0x127ce724 */
  push32((uint32_t)(0x127ce724u));
  /* 127a4016 push 0x127ce51c */
  push32((uint32_t)(0x127ce51cu));
  /* 127a401b call 0x127a40b0 */
  push32(0x127a4020u); f_127a40b0();
  /* 127a4020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4023:;
  /* 127a4023 push 0x127ce92c */
  push32((uint32_t)(0x127ce92cu));
  /* 127a4028 push 0x127ce828 */
  push32((uint32_t)(0x127ce828u));
  /* 127a402d call 0x127a40b0 */
  push32(0x127a4032u); f_127a40b0();
  /* 127a4032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4035 cmp dword ptr [0x127d0558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a403c jne 0x127a405e */
  if (!C.zf) goto L_127a405e;
  /* 127a403e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127a4040 call 0x127a5c90 */
  push32(0x127a4045u); f_127a5c90();
  /* 127a4045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4048 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127a404b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a404d je 0x127a405e */
  if (C.zf) goto L_127a405e;
  /* 127a404f mov dword ptr [0x127d0558], 1 */
  w32((uint32_t)(0x127d0558), (0x1u));
  /* 127a4059 call 0x127a65a0 */
  push32(0x127a405eu); f_127a65a0();
L_127a405e:;
  /* 127a405e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4062 je 0x127a406b */
  if (C.zf) goto L_127a406b;
  /* 127a4064 call 0x127a40a0 */
  push32(0x127a4069u); f_127a40a0();
  /* 127a4069 jmp 0x127a407f */
  goto L_127a407f;
L_127a406b:;
  /* 127a406b mov dword ptr [0x127d0554], 1 */
  w32((uint32_t)(0x127d0554), (0x1u));
  /* 127a4075 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4078 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4079 call dword ptr [0x127d32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b8))), 0x127a407fu);
L_127a407f:;
  /* 127a407f mov esp, ebp */
  ESP = (EBP);
  /* 127a4081 pop ebp */
  EBP = (pop32());
  /* 127a4082 ret  */
  ESPCHK(0x127a3fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x127a4090 (15 bytes, 7 insns) */
void f_127a4090(void) {
  FTRACE(0x127a4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4090 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4091 mov ebp, esp */
  EBP = (ESP);
  /* 127a4093 push 0xd */
  push32((uint32_t)(0xdu));
  /* 127a4095 call 0x127a8180 */
  push32(0x127a409au); f_127a8180();
  /* 127a409a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a409d pop ebp */
  EBP = (pop32());
  /* 127a409e ret  */
  ESPCHK(0x127a4090u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x127a40a0 (15 bytes, 7 insns) */
void f_127a40a0(void) {
  FTRACE(0x127a40a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a40a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a40a1 mov ebp, esp */
  EBP = (ESP);
  /* 127a40a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 127a40a5 call 0x127a8220 */
  push32(0x127a40aau); f_127a8220();
  /* 127a40aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a40ad pop ebp */
  EBP = (pop32());
  /* 127a40ae ret  */
  ESPCHK(0x127a40a0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x127a40b0 (37 bytes, 16 insns) */
void f_127a40b0(void) {
  FTRACE(0x127a40b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a40b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a40b1 mov ebp, esp */
  EBP = (ESP);
L_127a40b3:;
  /* 127a40b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a40b6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a40b9 jae 0x127a40d3 */
  if (!C.cf) goto L_127a40d3;
  /* 127a40bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a40be cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a40c1 je 0x127a40c8 */
  if (C.zf) goto L_127a40c8;
  /* 127a40c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a40c6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x127a40c8u);
L_127a40c8:;
  /* 127a40c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a40cb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a40ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127a40d1 jmp 0x127a40b3 */
  goto L_127a40b3;
L_127a40d3:;
  /* 127a40d3 pop ebp */
  EBP = (pop32());
  /* 127a40d4 ret  */
  ESPCHK(0x127a40b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x127a40e0 (130 bytes, 42 insns) */
void f_127a40e0(void) {
  FTRACE(0x127a40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a40e1 mov ebp, esp */
  EBP = (ESP);
  /* 127a40e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a40e4 call 0x127a80a0 */
  push32(0x127a40e9u); f_127a80a0();
  /* 127a40e9 call dword ptr [0x127d32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32cc))), 0x127a40efu);
  /* 127a40ef mov dword ptr [0x127cea5c], eax */
  w32((uint32_t)(0x127cea5c), (EAX));
  /* 127a40f4 cmp dword ptr [0x127cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x127cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a40fb jne 0x127a4101 */
  if (!C.zf) goto L_127a4101;
  /* 127a40fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a40ff jmp 0x127a415e */
  goto L_127a415e;
L_127a4101:;
  /* 127a4101 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 127a4103 push 0x127cb444 */
  push32((uint32_t)(0x127cb444u));
  /* 127a4108 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a410a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 127a410c push 1 */
  push32((uint32_t)(0x1u));
  /* 127a410e call 0x127a4b90 */
  push32(0x127a4113u); f_127a4b90();
  /* 127a4113 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4116 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a4119 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a411d je 0x127a4134 */
  if (C.zf) goto L_127a4134;
  /* 127a411f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4122 push eax */
  push32((uint32_t)(EAX));
  /* 127a4123 mov ecx, dword ptr [0x127cea5c] */
  ECX = (r32((uint32_t)(0x127cea5c)));
  /* 127a4129 push ecx */
  push32((uint32_t)(ECX));
  /* 127a412a call dword ptr [0x127d32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c8))), 0x127a4130u);
  /* 127a4130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4132 jne 0x127a4138 */
  if (!C.zf) goto L_127a4138;
L_127a4134:;
  /* 127a4134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4136 jmp 0x127a415e */
  goto L_127a415e;
L_127a4138:;
  /* 127a4138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a413b push edx */
  push32((uint32_t)(EDX));
  /* 127a413c call 0x127a41a0 */
  push32(0x127a4141u); f_127a41a0();
  /* 127a4141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4144 call dword ptr [0x127d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c4))), 0x127a414au);
  /* 127a414a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a414d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a414f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4152 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 127a4159 mov eax, 1 */
  EAX = (0x1u);
L_127a415e:;
  /* 127a415e mov esp, ebp */
  ESP = (EBP);
  /* 127a4160 pop ebp */
  EBP = (pop32());
  /* 127a4161 ret  */
  ESPCHK(0x127a40e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004170 @ 0x127a4170 (41 bytes, 11 insns) */
void f_127a4170(void) {
  FTRACE(0x127a4170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4170 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4171 mov ebp, esp */
  EBP = (ESP);
  /* 127a4173 call 0x127a80e0 */
  push32(0x127a4178u); f_127a80e0();
  /* 127a4178 cmp dword ptr [0x127cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x127cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a417f je 0x127a4197 */
  if (C.zf) goto L_127a4197;
  /* 127a4181 mov eax, dword ptr [0x127cea5c] */
  EAX = (r32((uint32_t)(0x127cea5c)));
  /* 127a4186 push eax */
  push32((uint32_t)(EAX));
  /* 127a4187 call dword ptr [0x127d32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32d0))), 0x127a418du);
  /* 127a418d mov dword ptr [0x127cea5c], 0xffffffff */
  w32((uint32_t)(0x127cea5c), (0xffffffffu));
L_127a4197:;
  /* 127a4197 pop ebp */
  EBP = (pop32());
  /* 127a4198 ret  */
  ESPCHK(0x127a4170u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x127a41a0 (25 bytes, 8 insns) */
void f_127a41a0(void) {
  FTRACE(0x127a41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a41a1 mov ebp, esp */
  EBP = (ESP);
  /* 127a41a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a41a6 mov dword ptr [eax + 0x50], 0x127cec00 */
  w32((uint32_t)(EAX + 0x50), (0x127cec00u));
  /* 127a41ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a41b0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 127a41b7 pop ebp */
  EBP = (pop32());
  /* 127a41b8 ret  */
  ESPCHK(0x127a41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x127a41c0 (152 bytes, 48 insns) */
void f_127a41c0(void) {
  FTRACE(0x127a41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a41c1 mov ebp, esp */
  EBP = (ESP);
  /* 127a41c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a41c6 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127a41ccu);
  /* 127a41cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a41cf mov eax, dword ptr [0x127cea5c] */
  EAX = (r32((uint32_t)(0x127cea5c)));
  /* 127a41d4 push eax */
  push32((uint32_t)(EAX));
  /* 127a41d5 call dword ptr [0x127d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32d8))), 0x127a41dbu);
  /* 127a41db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a41de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a41e2 jne 0x127a4247 */
  if (!C.zf) goto L_127a4247;
  /* 127a41e4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 127a41e9 push 0x127cb444 */
  push32((uint32_t)(0x127cb444u));
  /* 127a41ee push 2 */
  push32((uint32_t)(0x2u));
  /* 127a41f0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 127a41f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a41f4 call 0x127a4b90 */
  push32(0x127a41f9u); f_127a4b90();
  /* 127a41f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a41fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a41ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4203 je 0x127a423d */
  if (C.zf) goto L_127a423d;
  /* 127a4205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4208 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4209 mov edx, dword ptr [0x127cea5c] */
  EDX = (r32((uint32_t)(0x127cea5c)));
  /* 127a420f push edx */
  push32((uint32_t)(EDX));
  /* 127a4210 call dword ptr [0x127d32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c8))), 0x127a4216u);
  /* 127a4216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4218 je 0x127a423d */
  if (C.zf) goto L_127a423d;
  /* 127a421a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a421d push eax */
  push32((uint32_t)(EAX));
  /* 127a421e call 0x127a41a0 */
  push32(0x127a4223u); f_127a41a0();
  /* 127a4223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4226 call dword ptr [0x127d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c4))), 0x127a422cu);
  /* 127a422c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a422f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a4231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4234 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 127a423b jmp 0x127a4247 */
  goto L_127a4247;
L_127a423d:;
  /* 127a423d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127a423f call 0x127a36f0 */
  push32(0x127a4244u); f_127a36f0();
  /* 127a4244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4247:;
  /* 127a4247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a424a push eax */
  push32((uint32_t)(EAX));
  /* 127a424b call dword ptr [0x127d32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32d4))), 0x127a4251u);
  /* 127a4251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4254 mov esp, ebp */
  ESP = (EBP);
  /* 127a4256 pop ebp */
  EBP = (pop32());
  /* 127a4257 ret  */
  ESPCHK(0x127a41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x127a4260 (263 bytes, 86 insns) */
void f_127a4260(void) {
  FTRACE(0x127a4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4260 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4261 mov ebp, esp */
  EBP = (ESP);
  /* 127a4263 cmp dword ptr [0x127cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x127cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a426a je 0x127a4365 */
  if (C.zf) goto L_127a4365;
  /* 127a4270 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4274 jne 0x127a4285 */
  if (!C.zf) goto L_127a4285;
  /* 127a4276 mov eax, dword ptr [0x127cea5c] */
  EAX = (r32((uint32_t)(0x127cea5c)));
  /* 127a427b push eax */
  push32((uint32_t)(EAX));
  /* 127a427c call dword ptr [0x127d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32d8))), 0x127a4282u);
  /* 127a4282 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127a4285:;
  /* 127a4285 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4289 je 0x127a4356 */
  if (C.zf) goto L_127a4356;
  /* 127a428f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4292 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4296 je 0x127a42a9 */
  if (C.zf) goto L_127a42a9;
  /* 127a4298 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a429a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a429d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 127a42a0 push eax */
  push32((uint32_t)(EAX));
  /* 127a42a1 call 0x127a5210 */
  push32(0x127a42a6u); f_127a5210();
  /* 127a42a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a42a9:;
  /* 127a42a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42ac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a42b0 je 0x127a42c3 */
  if (C.zf) goto L_127a42c3;
  /* 127a42b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a42b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42b7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 127a42ba push eax */
  push32((uint32_t)(EAX));
  /* 127a42bb call 0x127a5210 */
  push32(0x127a42c0u); f_127a5210();
  /* 127a42c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a42c3:;
  /* 127a42c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42c6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a42ca je 0x127a42dd */
  if (C.zf) goto L_127a42dd;
  /* 127a42cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127a42ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42d1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 127a42d4 push eax */
  push32((uint32_t)(EAX));
  /* 127a42d5 call 0x127a5210 */
  push32(0x127a42dau); f_127a5210();
  /* 127a42da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a42dd:;
  /* 127a42dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42e0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a42e4 je 0x127a42f7 */
  if (C.zf) goto L_127a42f7;
  /* 127a42e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a42e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42eb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 127a42ee push eax */
  push32((uint32_t)(EAX));
  /* 127a42ef call 0x127a5210 */
  push32(0x127a42f4u); f_127a5210();
  /* 127a42f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a42f7:;
  /* 127a42f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a42fa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a42fe je 0x127a4311 */
  if (C.zf) goto L_127a4311;
  /* 127a4300 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4305 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 127a4308 push eax */
  push32((uint32_t)(EAX));
  /* 127a4309 call 0x127a5210 */
  push32(0x127a430eu); f_127a5210();
  /* 127a430e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4311:;
  /* 127a4311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4314 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4318 je 0x127a432b */
  if (C.zf) goto L_127a432b;
  /* 127a431a push 2 */
  push32((uint32_t)(0x2u));
  /* 127a431c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a431f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 127a4322 push eax */
  push32((uint32_t)(EAX));
  /* 127a4323 call 0x127a5210 */
  push32(0x127a4328u); f_127a5210();
  /* 127a4328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a432b:;
  /* 127a432b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a432e cmp dword ptr [ecx + 0x50], 0x127cec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x127cec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4335 je 0x127a4348 */
  if (C.zf) goto L_127a4348;
  /* 127a4337 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a433c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 127a433f push eax */
  push32((uint32_t)(EAX));
  /* 127a4340 call 0x127a5210 */
  push32(0x127a4345u); f_127a5210();
  /* 127a4345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4348:;
  /* 127a4348 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a434a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a434d push ecx */
  push32((uint32_t)(ECX));
  /* 127a434e call 0x127a5210 */
  push32(0x127a4353u); f_127a5210();
  /* 127a4353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4356:;
  /* 127a4356 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4358 mov edx, dword ptr [0x127cea5c] */
  EDX = (r32((uint32_t)(0x127cea5c)));
  /* 127a435e push edx */
  push32((uint32_t)(EDX));
  /* 127a435f call dword ptr [0x127d32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c8))), 0x127a4365u);
L_127a4365:;
  /* 127a4365 pop ebp */
  EBP = (pop32());
  /* 127a4366 ret  */
  ESPCHK(0x127a4260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x127a4370 (11 bytes, 5 insns) */
void f_127a4370(void) {
  FTRACE(0x127a4370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4370 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4371 mov ebp, esp */
  EBP = (ESP);
  /* 127a4373 call dword ptr [0x127d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32c4))), 0x127a4379u);
  /* 127a4379 pop ebp */
  EBP = (pop32());
  /* 127a437a ret  */
  ESPCHK(0x127a4370u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x127a4380 (11 bytes, 5 insns) */
void f_127a4380(void) {
  FTRACE(0x127a4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4380 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4381 mov ebp, esp */
  EBP = (ESP);
  /* 127a4383 call dword ptr [0x127d32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32e0))), 0x127a4389u);
  /* 127a4389 pop ebp */
  EBP = (pop32());
  /* 127a438a ret  */
  ESPCHK(0x127a4380u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x127a4390 (804 bytes, 236 insns) */
void f_127a4390(void) {
  FTRACE(0x127a4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4390 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4391 mov ebp, esp */
  EBP = (ESP);
  /* 127a4393 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4396 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 127a439b push 0x127cb450 */
  push32((uint32_t)(0x127cb450u));
  /* 127a43a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a43a2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127a43a7 call 0x127a4780 */
  push32(0x127a43acu); f_127a4780();
  /* 127a43ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a43af mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 127a43b2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a43b6 jne 0x127a43c2 */
  if (!C.zf) goto L_127a43c2;
  /* 127a43b8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 127a43ba call 0x127a36f0 */
  push32(0x127a43bfu); f_127a36f0();
  /* 127a43bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a43c2:;
  /* 127a43c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a43c5 mov dword ptr [0x127d1f00], eax */
  w32((uint32_t)(0x127d1f00), (EAX));
  /* 127a43ca mov dword ptr [0x127d203c], 0x20 */
  w32((uint32_t)(0x127d203c), (0x20u));
  /* 127a43d4 jmp 0x127a43df */
  goto L_127a43df;
L_127a43d6:;
  /* 127a43d6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a43d9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a43dc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_127a43df:;
  /* 127a43df mov edx, dword ptr [0x127d1f00] */
  EDX = (r32((uint32_t)(0x127d1f00)));
  /* 127a43e5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a43eb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a43ee jae 0x127a4413 */
  if (!C.cf) goto L_127a4413;
  /* 127a43f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a43f3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 127a43f7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a43fa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127a4400 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4403 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 127a4407 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a440a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 127a4411 jmp 0x127a43d6 */
  goto L_127a43d6;
L_127a4413:;
  /* 127a4413 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 127a4416 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4417 call dword ptr [0x127d32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32ec))), 0x127a441du);
  /* 127a441d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 127a4420 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a4426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a4428 je 0x127a45b5 */
  if (C.zf) goto L_127a45b5;
  /* 127a442e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4432 je 0x127a45b5 */
  if (C.zf) goto L_127a45b5;
  /* 127a4438 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a443b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a443d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 127a4440 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a4443 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4446 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a4449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a444c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a444f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 127a4452 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4459 jge 0x127a4463 */
  if ((C.sf==C.of)) goto L_127a4463;
  /* 127a445b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 127a445e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 127a4461 jmp 0x127a446a */
  goto L_127a446a;
L_127a4463:;
  /* 127a4463 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_127a446a:;
  /* 127a446a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 127a446d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 127a4470 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 127a4477 jmp 0x127a4482 */
  goto L_127a4482;
L_127a4479:;
  /* 127a4479 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127a447c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a447f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_127a4482:;
  /* 127a4482 mov ecx, dword ptr [0x127d203c] */
  ECX = (r32((uint32_t)(0x127d203c)));
  /* 127a4488 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a448b jge 0x127a4522 */
  if ((C.sf==C.of)) goto L_127a4522;
  /* 127a4491 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 127a4496 push 0x127cb450 */
  push32((uint32_t)(0x127cb450u));
  /* 127a449b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a449d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127a44a2 call 0x127a4780 */
  push32(0x127a44a7u); f_127a4780();
  /* 127a44a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a44aa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 127a44ad cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a44b1 jne 0x127a44be */
  if (!C.zf) goto L_127a44be;
  /* 127a44b3 mov edx, dword ptr [0x127d203c] */
  EDX = (r32((uint32_t)(0x127d203c)));
  /* 127a44b9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 127a44bc jmp 0x127a4522 */
  goto L_127a4522;
L_127a44be:;
  /* 127a44be mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127a44c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a44c4 mov dword ptr [eax*4 + 0x127d1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x127d1f00), (ECX));
  /* 127a44cb mov edx, dword ptr [0x127d203c] */
  EDX = (r32((uint32_t)(0x127d203c)));
  /* 127a44d1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a44d4 mov dword ptr [0x127d203c], edx */
  w32((uint32_t)(0x127d203c), (EDX));
  /* 127a44da jmp 0x127a44e5 */
  goto L_127a44e5;
L_127a44dc:;
  /* 127a44dc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a44df add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a44e2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_127a44e5:;
  /* 127a44e5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127a44e8 mov edx, dword ptr [ecx*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127a44ef add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a44f5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a44f8 jae 0x127a451d */
  if (!C.cf) goto L_127a451d;
  /* 127a44fa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a44fd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 127a4501 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4504 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127a450a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a450d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 127a4511 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4514 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 127a451b jmp 0x127a44dc */
  goto L_127a44dc;
L_127a451d:;
  /* 127a451d jmp 0x127a4479 */
  goto L_127a4479;
L_127a4522:;
  /* 127a4522 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 127a4529 jmp 0x127a4546 */
  goto L_127a4546;
L_127a452b:;
  /* 127a452b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a452e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4531 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 127a4534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4537 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a453a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a453d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 127a4540 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4543 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_127a4546:;
  /* 127a4546 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a4549 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a454c jge 0x127a45b5 */
  if ((C.sf==C.of)) goto L_127a45b5;
  /* 127a454e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 127a4551 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4554 je 0x127a45b0 */
  if (C.zf) goto L_127a45b0;
  /* 127a4556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4559 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a455c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127a455f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a4561 je 0x127a45b0 */
  if (C.zf) goto L_127a45b0;
  /* 127a4563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4566 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a4569 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 127a456c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a456e jne 0x127a4580 */
  if (!C.zf) goto L_127a4580;
  /* 127a4570 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 127a4573 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a4575 push edx */
  push32((uint32_t)(EDX));
  /* 127a4576 call dword ptr [0x127d32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32e8))), 0x127a457cu);
  /* 127a457c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a457e je 0x127a45b0 */
  if (C.zf) goto L_127a45b0;
L_127a4580:;
  /* 127a4580 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a4583 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127a4586 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a4589 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127a458c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a458f mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127a4596 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4598 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 127a459b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a459e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 127a45a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a45a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a45a5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a45a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a45ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a45ad mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_127a45b0:;
  /* 127a45b0 jmp 0x127a452b */
  goto L_127a452b;
L_127a45b5:;
  /* 127a45b5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 127a45bc jmp 0x127a45c7 */
  goto L_127a45c7;
L_127a45be:;
  /* 127a45be mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a45c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a45c4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_127a45c7:;
  /* 127a45c7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a45cb jge 0x127a46a4 */
  if ((C.sf==C.of)) goto L_127a46a4;
  /* 127a45d1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a45d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a45d7 mov edx, dword ptr [0x127d1f00] */
  EDX = (r32((uint32_t)(0x127d1f00)));
  /* 127a45dd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a45df mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 127a45e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a45e5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a45e8 jne 0x127a4690 */
  if (!C.zf) goto L_127a4690;
  /* 127a45ee mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a45f1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 127a45f5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a45f9 jne 0x127a4604 */
  if (!C.zf) goto L_127a4604;
  /* 127a45fb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 127a4602 jmp 0x127a4614 */
  goto L_127a4614;
L_127a4604:;
  /* 127a4604 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 127a4607 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a460a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127a460c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a460e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4611 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_127a4614:;
  /* 127a4614 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 127a4617 push eax */
  push32((uint32_t)(EAX));
  /* 127a4618 call dword ptr [0x127d3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3298))), 0x127a461eu);
  /* 127a461e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 127a4621 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4625 je 0x127a467f */
  if (C.zf) goto L_127a467f;
  /* 127a4627 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a462a push ecx */
  push32((uint32_t)(ECX));
  /* 127a462b call dword ptr [0x127d32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32e8))), 0x127a4631u);
  /* 127a4631 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 127a4634 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4638 je 0x127a467f */
  if (C.zf) goto L_127a467f;
  /* 127a463a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a463d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a4640 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a4642 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 127a4645 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a464b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a464e jne 0x127a4660 */
  if (!C.zf) goto L_127a4660;
  /* 127a4650 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4653 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127a4656 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 127a4658 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a465b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 127a465e jmp 0x127a467d */
  goto L_127a467d;
L_127a4660:;
  /* 127a4660 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 127a4663 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a4669 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a466c jne 0x127a467d */
  if (!C.zf) goto L_127a467d;
  /* 127a466e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4671 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a4674 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 127a4677 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a467a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127a467d:;
  /* 127a467d jmp 0x127a468e */
  goto L_127a468e;
L_127a467f:;
  /* 127a467f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4682 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a4685 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 127a4688 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a468b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127a468e:;
  /* 127a468e jmp 0x127a469f */
  goto L_127a469f;
L_127a4690:;
  /* 127a4690 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a4693 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a4696 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 127a4699 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a469c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127a469f:;
  /* 127a469f jmp 0x127a45be */
  goto L_127a45be;
L_127a46a4:;
  /* 127a46a4 mov eax, dword ptr [0x127d203c] */
  EAX = (r32((uint32_t)(0x127d203c)));
  /* 127a46a9 push eax */
  push32((uint32_t)(EAX));
  /* 127a46aa call dword ptr [0x127d32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32e4))), 0x127a46b0u);
  /* 127a46b0 mov esp, ebp */
  ESP = (EBP);
  /* 127a46b2 pop ebp */
  EBP = (pop32());
  /* 127a46b3 ret  */
  ESPCHK(0x127a4390u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x127a46c0 (155 bytes, 45 insns) */
void f_127a46c0(void) {
  FTRACE(0x127a46c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a46c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a46c1 mov ebp, esp */
  EBP = (ESP);
  /* 127a46c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a46c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a46cd jmp 0x127a46d8 */
  goto L_127a46d8;
L_127a46cf:;
  /* 127a46cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a46d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a46d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127a46d8:;
  /* 127a46d8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a46dc jge 0x127a4757 */
  if ((C.sf==C.of)) goto L_127a4757;
  /* 127a46de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a46e1 cmp dword ptr [ecx*4 + 0x127d1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x127d1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a46e9 je 0x127a4752 */
  if (C.zf) goto L_127a4752;
  /* 127a46eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a46ee mov eax, dword ptr [edx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127a46f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a46f8 jmp 0x127a4703 */
  goto L_127a4703;
L_127a46fa:;
  /* 127a46fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a46fd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a4703:;
  /* 127a4703 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4706 mov eax, dword ptr [edx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127a470d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4712 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4715 jae 0x127a472f */
  if (!C.cf) goto L_127a472f;
  /* 127a4717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a471a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a471e je 0x127a472d */
  if (C.zf) goto L_127a472d;
  /* 127a4720 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4723 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4726 push edx */
  push32((uint32_t)(EDX));
  /* 127a4727 call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a472du);
L_127a472d:;
  /* 127a472d jmp 0x127a46fa */
  goto L_127a46fa;
L_127a472f:;
  /* 127a472f push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4734 mov ecx, dword ptr [eax*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127a473b push ecx */
  push32((uint32_t)(ECX));
  /* 127a473c call 0x127a5210 */
  push32(0x127a4741u); f_127a5210();
  /* 127a4741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4744 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4747 mov dword ptr [edx*4 + 0x127d1f00], 0 */
  w32((uint32_t)(EDX*4 + 0x127d1f00), (0x0u));
L_127a4752:;
  /* 127a4752 jmp 0x127a46cf */
  goto L_127a46cf;
L_127a4757:;
  /* 127a4757 mov esp, ebp */
  ESP = (EBP);
  /* 127a4759 pop ebp */
  EBP = (pop32());
  /* 127a475a ret  */
  ESPCHK(0x127a46c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x127a4760 (29 bytes, 13 insns) */
void f_127a4760(void) {
  FTRACE(0x127a4760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4760 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4761 mov ebp, esp */
  EBP = (ESP);
  /* 127a4763 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4765 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4767 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4769 mov eax, dword ptr [0x127d0700] */
  EAX = (r32((uint32_t)(0x127d0700)));
  /* 127a476e push eax */
  push32((uint32_t)(EAX));
  /* 127a476f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4772 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4773 call 0x127a47d0 */
  push32(0x127a4778u); f_127a47d0();
  /* 127a4778 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a477b pop ebp */
  EBP = (pop32());
  /* 127a477c ret  */
  ESPCHK(0x127a4760u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x127a4780 (35 bytes, 16 insns) */
void f_127a4780(void) {
  FTRACE(0x127a4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4780 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4781 mov ebp, esp */
  EBP = (ESP);
  /* 127a4783 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4786 push eax */
  push32((uint32_t)(EAX));
  /* 127a4787 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a478a push ecx */
  push32((uint32_t)(ECX));
  /* 127a478b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a478e push edx */
  push32((uint32_t)(EDX));
  /* 127a478f mov eax, dword ptr [0x127d0700] */
  EAX = (r32((uint32_t)(0x127d0700)));
  /* 127a4794 push eax */
  push32((uint32_t)(EAX));
  /* 127a4795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4798 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4799 call 0x127a47d0 */
  push32(0x127a479eu); f_127a47d0();
  /* 127a479e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a47a1 pop ebp */
  EBP = (pop32());
  /* 127a47a2 ret  */
  ESPCHK(0x127a4780u, _esp0);
  ESP += 4; return;
}

/* FUN_100047b0 @ 0x127a47b0 (27 bytes, 13 insns) */
void f_127a47b0(void) {
  FTRACE(0x127a47b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a47b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a47b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a47b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a47b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a47b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a47b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a47bc push eax */
  push32((uint32_t)(EAX));
  /* 127a47bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a47c0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a47c1 call 0x127a47d0 */
  push32(0x127a47c6u); f_127a47d0();
  /* 127a47c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a47c9 pop ebp */
  EBP = (pop32());
  /* 127a47ca ret  */
  ESPCHK(0x127a47b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d0 @ 0x127a47d0 (94 bytes, 38 insns) */
void f_127a47d0(void) {
  FTRACE(0x127a47d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a47d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a47d1 mov ebp, esp */
  EBP = (ESP);
  /* 127a47d3 push ecx */
  push32((uint32_t)(ECX));
L_127a47d4:;
  /* 127a47d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a47d6 call 0x127a8180 */
  push32(0x127a47dbu); f_127a8180();
  /* 127a47db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a47de mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a47e1 push eax */
  push32((uint32_t)(EAX));
  /* 127a47e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a47e5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a47e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a47e9 push edx */
  push32((uint32_t)(EDX));
  /* 127a47ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a47ed push eax */
  push32((uint32_t)(EAX));
  /* 127a47ee call 0x127a4850 */
  push32(0x127a47f3u); f_127a4850();
  /* 127a47f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a47f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a47f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a47fb call 0x127a8220 */
  push32(0x127a4800u); f_127a8220();
  /* 127a4800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4803 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4807 jne 0x127a480f */
  if (!C.zf) goto L_127a480f;
  /* 127a4809 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a480d jne 0x127a4814 */
  if (!C.zf) goto L_127a4814;
L_127a480f:;
  /* 127a480f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4812 jmp 0x127a482a */
  goto L_127a482a;
L_127a4814:;
  /* 127a4814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4817 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4818 call 0x127a84c0 */
  push32(0x127a481du); f_127a84c0();
  /* 127a481d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4822 jne 0x127a4828 */
  if (!C.zf) goto L_127a4828;
  /* 127a4824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4826 jmp 0x127a482a */
  goto L_127a482a;
L_127a4828:;
  /* 127a4828 jmp 0x127a47d4 */
  goto L_127a47d4;
L_127a482a:;
  /* 127a482a mov esp, ebp */
  ESP = (EBP);
  /* 127a482c pop ebp */
  EBP = (pop32());
  /* 127a482d ret  */
  ESPCHK(0x127a47d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004830 @ 0x127a4830 (23 bytes, 11 insns) */
void f_127a4830(void) {
  FTRACE(0x127a4830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4830 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4831 mov ebp, esp */
  EBP = (ESP);
  /* 127a4833 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4835 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4837 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a483c push eax */
  push32((uint32_t)(EAX));
  /* 127a483d call 0x127a4850 */
  push32(0x127a4842u); f_127a4850();
  /* 127a4842 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4845 pop ebp */
  EBP = (pop32());
  /* 127a4846 ret  */
  ESPCHK(0x127a4830u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x127a4850 (787 bytes, 254 insns) */
void f_127a4850(void) {
  FTRACE(0x127a4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4850 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4851 mov ebp, esp */
  EBP = (ESP);
  /* 127a4853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4856 push ebx */
  push32((uint32_t)(EBX));
  /* 127a4857 push esi */
  push32((uint32_t)(ESI));
  /* 127a4858 push edi */
  push32((uint32_t)(EDI));
  /* 127a4859 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127a4860 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a4865 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a4868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a486a je 0x127a489c */
  if (C.zf) goto L_127a489c;
L_127a486c:;
  /* 127a486c call 0x127a5920 */
  push32(0x127a4871u); f_127a5920();
  /* 127a4871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4873 jne 0x127a4896 */
  if (!C.zf) goto L_127a4896;
  /* 127a4875 push 0x127cb544 */
  push32((uint32_t)(0x127cb544u));
  /* 127a487a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a487c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 127a4881 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a4886 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4888 call 0x127a3840 */
  push32(0x127a488du); f_127a3840();
  /* 127a488d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4890 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4893 jne 0x127a4896 */
  if (!C.zf) goto L_127a4896;
  /* 127a4895 int3  */
  x86_unimpl("int3 @ 0x127a4895");
L_127a4896:;
  /* 127a4896 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a4898 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a489a jne 0x127a486c */
  if (!C.zf) goto L_127a486c;
L_127a489c:;
  /* 127a489c mov edx, dword ptr [0x127cea88] */
  EDX = (r32((uint32_t)(0x127cea88)));
  /* 127a48a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127a48a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a48a8 cmp eax, dword ptr [0x127cea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a48ae jne 0x127a48b1 */
  if (!C.zf) goto L_127a48b1;
  /* 127a48b0 int3  */
  x86_unimpl("int3 @ 0x127a48b0");
L_127a48b1:;
  /* 127a48b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a48b4 push ecx */
  push32((uint32_t)(ECX));
  /* 127a48b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a48b8 push edx */
  push32((uint32_t)(EDX));
  /* 127a48b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a48bc push eax */
  push32((uint32_t)(EAX));
  /* 127a48bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a48c0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a48c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a48c4 push edx */
  push32((uint32_t)(EDX));
  /* 127a48c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a48c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a48c9 call dword ptr [0x127cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cec90))), 0x127a48cfu);
  /* 127a48cf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a48d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a48d4 jne 0x127a4934 */
  if (!C.zf) goto L_127a4934;
  /* 127a48d6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a48da je 0x127a4907 */
  if (C.zf) goto L_127a4907;
L_127a48dc:;
  /* 127a48dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a48df push eax */
  push32((uint32_t)(EAX));
  /* 127a48e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a48e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a48e4 push 0x127cb500 */
  push32((uint32_t)(0x127cb500u));
  /* 127a48e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a48eb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a48ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127a48ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127a48f1 call 0x127a3840 */
  push32(0x127a48f6u); f_127a3840();
  /* 127a48f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a48f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a48fc jne 0x127a48ff */
  if (!C.zf) goto L_127a48ff;
  /* 127a48fe int3  */
  x86_unimpl("int3 @ 0x127a48fe");
L_127a48ff:;
  /* 127a48ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a4901 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a4903 jne 0x127a48dc */
  if (!C.zf) goto L_127a48dc;
  /* 127a4905 jmp 0x127a492d */
  goto L_127a492d;
L_127a4907:;
  /* 127a4907 push 0x127cb4dc */
  push32((uint32_t)(0x127cb4dcu));
  /* 127a490c push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a4911 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4913 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4915 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4917 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4919 call 0x127a3840 */
  push32(0x127a491eu); f_127a3840();
  /* 127a491e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4921 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4924 jne 0x127a4927 */
  if (!C.zf) goto L_127a4927;
  /* 127a4926 int3  */
  x86_unimpl("int3 @ 0x127a4926");
L_127a4927:;
  /* 127a4927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a492b jne 0x127a4907 */
  if (!C.zf) goto L_127a4907;
L_127a492d:;
  /* 127a492d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a492f jmp 0x127a4b5c */
  goto L_127a4b5c;
L_127a4934:;
  /* 127a4934 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4937 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a493d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4940 je 0x127a4956 */
  if (C.zf) goto L_127a4956;
  /* 127a4942 mov edx, dword ptr [0x127cea84] */
  EDX = (r32((uint32_t)(0x127cea84)));
  /* 127a4948 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127a494b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a494d jne 0x127a4956 */
  if (!C.zf) goto L_127a4956;
  /* 127a494f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_127a4956:;
  /* 127a4956 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a495a ja 0x127a4967 */
  if ((!C.cf&&!C.zf)) goto L_127a4967;
  /* 127a495c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a495f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4962 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4965 jbe 0x127a4993 */
  if ((C.cf||C.zf)) goto L_127a4993;
L_127a4967:;
  /* 127a4967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a496a push ecx */
  push32((uint32_t)(ECX));
  /* 127a496b push 0x127cb4b4 */
  push32((uint32_t)(0x127cb4b4u));
  /* 127a4970 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4972 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4976 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4978 call 0x127a3840 */
  push32(0x127a497du); f_127a3840();
  /* 127a497d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4980 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4983 jne 0x127a4986 */
  if (!C.zf) goto L_127a4986;
  /* 127a4985 int3  */
  x86_unimpl("int3 @ 0x127a4985");
L_127a4986:;
  /* 127a4986 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a4988 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a498a jne 0x127a4967 */
  if (!C.zf) goto L_127a4967;
  /* 127a498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a498e jmp 0x127a4b5c */
  goto L_127a4b5c;
L_127a4993:;
  /* 127a4993 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4996 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a499b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a499e je 0x127a49e0 */
  if (C.zf) goto L_127a49e0;
  /* 127a49a0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a49a4 je 0x127a49e0 */
  if (C.zf) goto L_127a49e0;
  /* 127a49a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a49a9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a49af cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a49b2 je 0x127a49e0 */
  if (C.zf) goto L_127a49e0;
  /* 127a49b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a49b8 je 0x127a49e0 */
  if (C.zf) goto L_127a49e0;
L_127a49ba:;
  /* 127a49ba push 0x127cb480 */
  push32((uint32_t)(0x127cb480u));
  /* 127a49bf push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a49c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a49c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a49c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a49ca push 1 */
  push32((uint32_t)(0x1u));
  /* 127a49cc call 0x127a3840 */
  push32(0x127a49d1u); f_127a3840();
  /* 127a49d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a49d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a49d7 jne 0x127a49da */
  if (!C.zf) goto L_127a49da;
  /* 127a49d9 int3  */
  x86_unimpl("int3 @ 0x127a49d9");
L_127a49da:;
  /* 127a49da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a49dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a49de jne 0x127a49ba */
  if (!C.zf) goto L_127a49ba;
L_127a49e0:;
  /* 127a49e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a49e3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a49e6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a49e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a49ec push ecx */
  push32((uint32_t)(ECX));
  /* 127a49ed call 0x127a85d0 */
  push32(0x127a49f2u); f_127a85d0();
  /* 127a49f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a49f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a49f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a49fc jne 0x127a4a05 */
  if (!C.zf) goto L_127a4a05;
  /* 127a49fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4a00 jmp 0x127a4b5c */
  goto L_127a4b5c;
L_127a4a05:;
  /* 127a4a05 mov edx, dword ptr [0x127cea88] */
  EDX = (r32((uint32_t)(0x127cea88)));
  /* 127a4a0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4a0e mov dword ptr [0x127cea88], edx */
  w32((uint32_t)(0x127cea88), (EDX));
  /* 127a4a14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4a18 je 0x127a4a63 */
  if (C.zf) goto L_127a4a63;
  /* 127a4a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a1d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a4a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a26 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127a4a2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a30 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 127a4a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a3a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 127a4a41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4a47 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 127a4a4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a4d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 127a4a54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4a57 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 127a4a5e jmp 0x127a4b03 */
  goto L_127a4b03;
L_127a4a63:;
  /* 127a4a63 mov edx, dword ptr [0x127d0560] */
  EDX = (r32((uint32_t)(0x127d0560)));
  /* 127a4a69 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4a6c mov dword ptr [0x127d0560], edx */
  w32((uint32_t)(0x127d0560), (EDX));
  /* 127a4a72 mov eax, dword ptr [0x127d0568] */
  EAX = (r32((uint32_t)(0x127d0568)));
  /* 127a4a77 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4a7a mov dword ptr [0x127d0568], eax */
  w32((uint32_t)(0x127d0568), (EAX));
  /* 127a4a7f mov ecx, dword ptr [0x127d0568] */
  ECX = (r32((uint32_t)(0x127d0568)));
  /* 127a4a85 cmp ecx, dword ptr [0x127d056c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4a8b jbe 0x127a4a99 */
  if ((C.cf||C.zf)) goto L_127a4a99;
  /* 127a4a8d mov edx, dword ptr [0x127d0568] */
  EDX = (r32((uint32_t)(0x127d0568)));
  /* 127a4a93 mov dword ptr [0x127d056c], edx */
  w32((uint32_t)(0x127d056c), (EDX));
L_127a4a99:;
  /* 127a4a99 cmp dword ptr [0x127d0564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4aa0 je 0x127a4aaf */
  if (C.zf) goto L_127a4aaf;
  /* 127a4aa2 mov eax, dword ptr [0x127d0564] */
  EAX = (r32((uint32_t)(0x127d0564)));
  /* 127a4aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4aaa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127a4aad jmp 0x127a4ab8 */
  goto L_127a4ab8;
L_127a4aaf:;
  /* 127a4aaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4ab2 mov dword ptr [0x127d055c], edx */
  w32((uint32_t)(0x127d055c), (EDX));
L_127a4ab8:;
  /* 127a4ab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4abb mov ecx, dword ptr [0x127d0564] */
  ECX = (r32((uint32_t)(0x127d0564)));
  /* 127a4ac1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127a4ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4ac6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 127a4acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4ad0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4ad3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 127a4ad6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4ad9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4adc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 127a4adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4ae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4ae5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 127a4ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4aeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4aee mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 127a4af1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4af4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4af7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 127a4afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4afd mov dword ptr [0x127d0564], ecx */
  w32((uint32_t)(0x127d0564), (ECX));
L_127a4b03:;
  /* 127a4b03 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a4b05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a4b07 mov dl, byte ptr [0x127cea90] */
  DL = (r8((uint32_t)(0x127cea90)));
  /* 127a4b0d push edx */
  push32((uint32_t)(EDX));
  /* 127a4b0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4b11 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b14 push eax */
  push32((uint32_t)(EAX));
  /* 127a4b15 call 0x127a84f0 */
  push32(0x127a4b1au); f_127a84f0();
  /* 127a4b1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b1d push 4 */
  push32((uint32_t)(0x4u));
  /* 127a4b1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a4b21 mov cl, byte ptr [0x127cea90] */
  CL = (r8((uint32_t)(0x127cea90)));
  /* 127a4b27 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4b28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4b2e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 127a4b32 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4b33 call 0x127a84f0 */
  push32(0x127a4b38u); f_127a84f0();
  /* 127a4b38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4b3e push edx */
  push32((uint32_t)(EDX));
  /* 127a4b3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4b41 mov al, byte ptr [0x127cea92] */
  AL = (r8((uint32_t)(0x127cea92)));
  /* 127a4b46 push eax */
  push32((uint32_t)(EAX));
  /* 127a4b47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4b4a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b4d push ecx */
  push32((uint32_t)(ECX));
  /* 127a4b4e call 0x127a84f0 */
  push32(0x127a4b53u); f_127a84f0();
  /* 127a4b53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4b59 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_127a4b5c:;
  /* 127a4b5c pop edi */
  EDI = (pop32());
  /* 127a4b5d pop esi */
  ESI = (pop32());
  /* 127a4b5e pop ebx */
  EBX = (pop32());
  /* 127a4b5f mov esp, ebp */
  ESP = (EBP);
  /* 127a4b61 pop ebp */
  EBP = (pop32());
  /* 127a4b62 ret  */
  ESPCHK(0x127a4850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b70 @ 0x127a4b70 (27 bytes, 13 insns) */
void f_127a4b70(void) {
  FTRACE(0x127a4b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4b70 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4b71 mov ebp, esp */
  EBP = (ESP);
  /* 127a4b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4b79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4b7c push eax */
  push32((uint32_t)(EAX));
  /* 127a4b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4b80 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4b81 call 0x127a4b90 */
  push32(0x127a4b86u); f_127a4b90();
  /* 127a4b86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4b89 pop ebp */
  EBP = (pop32());
  /* 127a4b8a ret  */
  ESPCHK(0x127a4b70u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x127a4b90 (96 bytes, 37 insns) */
void f_127a4b90(void) {
  FTRACE(0x127a4b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4b90 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4b91 mov ebp, esp */
  EBP = (ESP);
  /* 127a4b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4b99 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a4b9d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127a4ba0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4ba4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4ba7 push edx */
  push32((uint32_t)(EDX));
  /* 127a4ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4bab push eax */
  push32((uint32_t)(EAX));
  /* 127a4bac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4baf push ecx */
  push32((uint32_t)(ECX));
  /* 127a4bb0 call 0x127a4780 */
  push32(0x127a4bb5u); f_127a4780();
  /* 127a4bb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4bb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a4bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4bbf je 0x127a4be9 */
  if (C.zf) goto L_127a4be9;
  /* 127a4bc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4bc4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127a4bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4bca add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4bcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a4bd0:;
  /* 127a4bd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4bd3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4bd6 jae 0x127a4be9 */
  if (!C.cf) goto L_127a4be9;
  /* 127a4bd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4bdb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127a4bde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4be1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4be4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a4be7 jmp 0x127a4bd0 */
  goto L_127a4bd0;
L_127a4be9:;
  /* 127a4be9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4bec mov esp, ebp */
  ESP = (EBP);
  /* 127a4bee pop ebp */
  EBP = (pop32());
  /* 127a4bef ret  */
  ESPCHK(0x127a4b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf0 @ 0x127a4bf0 (27 bytes, 13 insns) */
void f_127a4bf0(void) {
  FTRACE(0x127a4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 127a4bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4bf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4bfc push eax */
  push32((uint32_t)(EAX));
  /* 127a4bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4c00 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c01 call 0x127a4c10 */
  push32(0x127a4c06u); f_127a4c10();
  /* 127a4c06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c09 pop ebp */
  EBP = (pop32());
  /* 127a4c0a ret  */
  ESPCHK(0x127a4bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x127a4c10 (64 bytes, 27 insns) */
void f_127a4c10(void) {
  FTRACE(0x127a4c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4c10 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4c11 mov ebp, esp */
  EBP = (ESP);
  /* 127a4c13 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c14 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a4c16 call 0x127a8180 */
  push32(0x127a4c1bu); f_127a8180();
  /* 127a4c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4c20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a4c23 push eax */
  push32((uint32_t)(EAX));
  /* 127a4c24 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4c27 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4c2b push edx */
  push32((uint32_t)(EDX));
  /* 127a4c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4c2f push eax */
  push32((uint32_t)(EAX));
  /* 127a4c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4c33 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c34 call 0x127a4c50 */
  push32(0x127a4c39u); f_127a4c50();
  /* 127a4c39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a4c3f push 9 */
  push32((uint32_t)(0x9u));
  /* 127a4c41 call 0x127a8220 */
  push32(0x127a4c46u); f_127a8220();
  /* 127a4c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4c4c mov esp, ebp */
  ESP = (EBP);
  /* 127a4c4e pop ebp */
  EBP = (pop32());
  /* 127a4c4f ret  */
  ESPCHK(0x127a4c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c50 @ 0x127a4c50 (1297 bytes, 431 insns) */
void f_127a4c50(void) {
  FTRACE(0x127a4c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a4c50 push ebp */
  push32((uint32_t)(EBP));
  /* 127a4c51 mov ebp, esp */
  EBP = (ESP);
  /* 127a4c53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4c56 push ebx */
  push32((uint32_t)(EBX));
  /* 127a4c57 push esi */
  push32((uint32_t)(ESI));
  /* 127a4c58 push edi */
  push32((uint32_t)(EDI));
  /* 127a4c59 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127a4c60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4c64 jne 0x127a4c83 */
  if (!C.zf) goto L_127a4c83;
  /* 127a4c66 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a4c69 push eax */
  push32((uint32_t)(EAX));
  /* 127a4c6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4c6d push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4c71 push edx */
  push32((uint32_t)(EDX));
  /* 127a4c72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4c75 push eax */
  push32((uint32_t)(EAX));
  /* 127a4c76 call 0x127a4780 */
  push32(0x127a4c7bu); f_127a4780();
  /* 127a4c7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c7e jmp 0x127a515a */
  goto L_127a515a;
L_127a4c83:;
  /* 127a4c83 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4c87 je 0x127a4ca6 */
  if (C.zf) goto L_127a4ca6;
  /* 127a4c89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4c8d jne 0x127a4ca6 */
  if (!C.zf) goto L_127a4ca6;
  /* 127a4c8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4c92 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4c96 push edx */
  push32((uint32_t)(EDX));
  /* 127a4c97 call 0x127a5210 */
  push32(0x127a4c9cu); f_127a5210();
  /* 127a4c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4ca1 jmp 0x127a515a */
  goto L_127a515a;
L_127a4ca6:;
  /* 127a4ca6 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a4cab and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a4cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4cb0 je 0x127a4ce2 */
  if (C.zf) goto L_127a4ce2;
L_127a4cb2:;
  /* 127a4cb2 call 0x127a5920 */
  push32(0x127a4cb7u); f_127a5920();
  /* 127a4cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4cb9 jne 0x127a4cdc */
  if (!C.zf) goto L_127a4cdc;
  /* 127a4cbb push 0x127cb544 */
  push32((uint32_t)(0x127cb544u));
  /* 127a4cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4cc2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 127a4cc7 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a4ccc push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4cce call 0x127a3840 */
  push32(0x127a4cd3u); f_127a3840();
  /* 127a4cd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4cd6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4cd9 jne 0x127a4cdc */
  if (!C.zf) goto L_127a4cdc;
  /* 127a4cdb int3  */
  x86_unimpl("int3 @ 0x127a4cdb");
L_127a4cdc:;
  /* 127a4cdc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a4cde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a4ce0 jne 0x127a4cb2 */
  if (!C.zf) goto L_127a4cb2;
L_127a4ce2:;
  /* 127a4ce2 mov edx, dword ptr [0x127cea88] */
  EDX = (r32((uint32_t)(0x127cea88)));
  /* 127a4ce8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127a4ceb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a4cee cmp eax, dword ptr [0x127cea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4cf4 jne 0x127a4cf7 */
  if (!C.zf) goto L_127a4cf7;
  /* 127a4cf6 int3  */
  x86_unimpl("int3 @ 0x127a4cf6");
L_127a4cf7:;
  /* 127a4cf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a4cfa push ecx */
  push32((uint32_t)(ECX));
  /* 127a4cfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4cfe push edx */
  push32((uint32_t)(EDX));
  /* 127a4cff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a4d02 push eax */
  push32((uint32_t)(EAX));
  /* 127a4d03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4d06 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4d0a push edx */
  push32((uint32_t)(EDX));
  /* 127a4d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4d0e push eax */
  push32((uint32_t)(EAX));
  /* 127a4d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4d11 call dword ptr [0x127cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cec90))), 0x127a4d17u);
  /* 127a4d17 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4d1c jne 0x127a4d7c */
  if (!C.zf) goto L_127a4d7c;
  /* 127a4d1e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4d22 je 0x127a4d4f */
  if (C.zf) goto L_127a4d4f;
L_127a4d24:;
  /* 127a4d24 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a4d27 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4d28 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a4d2b push edx */
  push32((uint32_t)(EDX));
  /* 127a4d2c push 0x127cb6c0 */
  push32((uint32_t)(0x127cb6c0u));
  /* 127a4d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d39 call 0x127a3840 */
  push32(0x127a4d3eu); f_127a3840();
  /* 127a4d3e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4d41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4d44 jne 0x127a4d47 */
  if (!C.zf) goto L_127a4d47;
  /* 127a4d46 int3  */
  x86_unimpl("int3 @ 0x127a4d46");
L_127a4d47:;
  /* 127a4d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4d4b jne 0x127a4d24 */
  if (!C.zf) goto L_127a4d24;
  /* 127a4d4d jmp 0x127a4d75 */
  goto L_127a4d75;
L_127a4d4f:;
  /* 127a4d4f push 0x127cb69c */
  push32((uint32_t)(0x127cb69cu));
  /* 127a4d54 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a4d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d61 call 0x127a3840 */
  push32(0x127a4d66u); f_127a3840();
  /* 127a4d66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4d6c jne 0x127a4d6f */
  if (!C.zf) goto L_127a4d6f;
  /* 127a4d6e int3  */
  x86_unimpl("int3 @ 0x127a4d6e");
L_127a4d6f:;
  /* 127a4d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a4d71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a4d73 jne 0x127a4d4f */
  if (!C.zf) goto L_127a4d4f;
L_127a4d75:;
  /* 127a4d75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4d77 jmp 0x127a515a */
  goto L_127a515a;
L_127a4d7c:;
  /* 127a4d7c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4d80 jbe 0x127a4dae */
  if ((C.cf||C.zf)) goto L_127a4dae;
L_127a4d82:;
  /* 127a4d82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4d85 push edx */
  push32((uint32_t)(EDX));
  /* 127a4d86 push 0x127cb66c */
  push32((uint32_t)(0x127cb66cu));
  /* 127a4d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4d93 call 0x127a3840 */
  push32(0x127a4d98u); f_127a3840();
  /* 127a4d98 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4d9b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4d9e jne 0x127a4da1 */
  if (!C.zf) goto L_127a4da1;
  /* 127a4da0 int3  */
  x86_unimpl("int3 @ 0x127a4da0");
L_127a4da1:;
  /* 127a4da1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4da5 jne 0x127a4d82 */
  if (!C.zf) goto L_127a4d82;
  /* 127a4da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4da9 jmp 0x127a515a */
  goto L_127a515a;
L_127a4dae:;
  /* 127a4dae cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4db2 je 0x127a4df6 */
  if (C.zf) goto L_127a4df6;
  /* 127a4db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4db7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a4dbd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4dc0 je 0x127a4df6 */
  if (C.zf) goto L_127a4df6;
  /* 127a4dc2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4dc5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a4dcb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4dce je 0x127a4df6 */
  if (C.zf) goto L_127a4df6;
L_127a4dd0:;
  /* 127a4dd0 push 0x127cb480 */
  push32((uint32_t)(0x127cb480u));
  /* 127a4dd5 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a4dda push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4dde push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4de0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a4de2 call 0x127a3840 */
  push32(0x127a4de7u); f_127a3840();
  /* 127a4de7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4dea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ded jne 0x127a4df0 */
  if (!C.zf) goto L_127a4df0;
  /* 127a4def int3  */
  x86_unimpl("int3 @ 0x127a4def");
L_127a4df0:;
  /* 127a4df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4df4 jne 0x127a4dd0 */
  if (!C.zf) goto L_127a4dd0;
L_127a4df6:;
  /* 127a4df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4df9 push ecx */
  push32((uint32_t)(ECX));
  /* 127a4dfa call 0x127a5d80 */
  push32(0x127a4dffu); f_127a5d80();
  /* 127a4dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4e02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a4e04 jne 0x127a4e27 */
  if (!C.zf) goto L_127a4e27;
  /* 127a4e06 push 0x127cb648 */
  push32((uint32_t)(0x127cb648u));
  /* 127a4e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4e0d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 127a4e12 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a4e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4e19 call 0x127a3840 */
  push32(0x127a4e1eu); f_127a3840();
  /* 127a4e1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4e21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e24 jne 0x127a4e27 */
  if (!C.zf) goto L_127a4e27;
  /* 127a4e26 int3  */
  x86_unimpl("int3 @ 0x127a4e26");
L_127a4e27:;
  /* 127a4e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a4e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a4e2b jne 0x127a4df6 */
  if (!C.zf) goto L_127a4df6;
  /* 127a4e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a4e30 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4e33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a4e36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4e39 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e3d jne 0x127a4e46 */
  if (!C.zf) goto L_127a4e46;
  /* 127a4e3f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_127a4e46:;
  /* 127a4e46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e4a je 0x127a4e8a */
  if (C.zf) goto L_127a4e8a;
L_127a4e4c:;
  /* 127a4e4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4e4f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e56 jne 0x127a4e61 */
  if (!C.zf) goto L_127a4e61;
  /* 127a4e58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4e5b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e5f je 0x127a4e82 */
  if (C.zf) goto L_127a4e82;
L_127a4e61:;
  /* 127a4e61 push 0x127cb600 */
  push32((uint32_t)(0x127cb600u));
  /* 127a4e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4e68 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 127a4e6d push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a4e72 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4e74 call 0x127a3840 */
  push32(0x127a4e79u); f_127a3840();
  /* 127a4e79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4e7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e7f jne 0x127a4e82 */
  if (!C.zf) goto L_127a4e82;
  /* 127a4e81 int3  */
  x86_unimpl("int3 @ 0x127a4e81");
L_127a4e82:;
  /* 127a4e82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a4e84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a4e86 jne 0x127a4e4c */
  if (!C.zf) goto L_127a4e4c;
  /* 127a4e88 jmp 0x127a4eee */
  goto L_127a4eee;
L_127a4e8a:;
  /* 127a4e8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4e8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a4e90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a4e95 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4e98 jne 0x127a4eaf */
  if (!C.zf) goto L_127a4eaf;
  /* 127a4e9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4e9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a4ea3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ea6 jne 0x127a4eaf */
  if (!C.zf) goto L_127a4eaf;
  /* 127a4ea8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_127a4eaf:;
  /* 127a4eaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4eb2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a4eb5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a4eba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a4ebd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a4ec3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ec5 je 0x127a4ee8 */
  if (C.zf) goto L_127a4ee8;
  /* 127a4ec7 push 0x127cb5c4 */
  push32((uint32_t)(0x127cb5c4u));
  /* 127a4ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a4ece push 0x272 */
  push32((uint32_t)(0x272u));
  /* 127a4ed3 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a4ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a4eda call 0x127a3840 */
  push32(0x127a4edfu); f_127a3840();
  /* 127a4edf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4ee2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ee5 jne 0x127a4ee8 */
  if (!C.zf) goto L_127a4ee8;
  /* 127a4ee7 int3  */
  x86_unimpl("int3 @ 0x127a4ee7");
L_127a4ee8:;
  /* 127a4ee8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a4eea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a4eec jne 0x127a4eaf */
  if (!C.zf) goto L_127a4eaf;
L_127a4eee:;
  /* 127a4eee cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ef2 je 0x127a4f19 */
  if (C.zf) goto L_127a4f19;
  /* 127a4ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4ef7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4efa push eax */
  push32((uint32_t)(EAX));
  /* 127a4efb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4efe push ecx */
  push32((uint32_t)(ECX));
  /* 127a4eff call 0x127a8700 */
  push32(0x127a4f04u); f_127a8700();
  /* 127a4f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a4f0a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4f0e jne 0x127a4f17 */
  if (!C.zf) goto L_127a4f17;
  /* 127a4f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4f12 jmp 0x127a515a */
  goto L_127a515a;
L_127a4f17:;
  /* 127a4f17 jmp 0x127a4f3c */
  goto L_127a4f3c;
L_127a4f19:;
  /* 127a4f19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4f1c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f1f push edx */
  push32((uint32_t)(EDX));
  /* 127a4f20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a4f23 push eax */
  push32((uint32_t)(EAX));
  /* 127a4f24 call 0x127a8650 */
  push32(0x127a4f29u); f_127a8650();
  /* 127a4f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a4f2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4f33 jne 0x127a4f3c */
  if (!C.zf) goto L_127a4f3c;
  /* 127a4f35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4f37 jmp 0x127a515a */
  goto L_127a515a;
L_127a4f3c:;
  /* 127a4f3c mov ecx, dword ptr [0x127cea88] */
  ECX = (r32((uint32_t)(0x127cea88)));
  /* 127a4f42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f45 mov dword ptr [0x127cea88], ecx */
  w32((uint32_t)(0x127cea88), (ECX));
  /* 127a4f4b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4f4f jne 0x127a4fa7 */
  if (!C.zf) goto L_127a4fa7;
  /* 127a4f51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4f54 mov eax, dword ptr [0x127d0560] */
  EAX = (r32((uint32_t)(0x127d0560)));
  /* 127a4f59 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4f5c mov dword ptr [0x127d0560], eax */
  w32((uint32_t)(0x127d0560), (EAX));
  /* 127a4f61 mov ecx, dword ptr [0x127d0560] */
  ECX = (r32((uint32_t)(0x127d0560)));
  /* 127a4f67 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f6a mov dword ptr [0x127d0560], ecx */
  w32((uint32_t)(0x127d0560), (ECX));
  /* 127a4f70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4f73 mov eax, dword ptr [0x127d0568] */
  EAX = (r32((uint32_t)(0x127d0568)));
  /* 127a4f78 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4f7b mov dword ptr [0x127d0568], eax */
  w32((uint32_t)(0x127d0568), (EAX));
  /* 127a4f80 mov ecx, dword ptr [0x127d0568] */
  ECX = (r32((uint32_t)(0x127d0568)));
  /* 127a4f86 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4f89 mov dword ptr [0x127d0568], ecx */
  w32((uint32_t)(0x127d0568), (ECX));
  /* 127a4f8f mov edx, dword ptr [0x127d0568] */
  EDX = (r32((uint32_t)(0x127d0568)));
  /* 127a4f95 cmp edx, dword ptr [0x127d056c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127d056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4f9b jbe 0x127a4fa7 */
  if ((C.cf||C.zf)) goto L_127a4fa7;
  /* 127a4f9d mov eax, dword ptr [0x127d0568] */
  EAX = (r32((uint32_t)(0x127d0568)));
  /* 127a4fa2 mov dword ptr [0x127d056c], eax */
  w32((uint32_t)(0x127d056c), (EAX));
L_127a4fa7:;
  /* 127a4fa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4faa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4fad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a4fb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4fb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4fb6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4fb9 jbe 0x127a4fdf */
  if ((C.cf||C.zf)) goto L_127a4fdf;
  /* 127a4fbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4fbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a4fc1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a4fc4 push edx */
  push32((uint32_t)(EDX));
  /* 127a4fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4fc7 mov al, byte ptr [0x127cea92] */
  AL = (r8((uint32_t)(0x127cea92)));
  /* 127a4fcc push eax */
  push32((uint32_t)(EAX));
  /* 127a4fcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a4fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4fd3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4fd6 push edx */
  push32((uint32_t)(EDX));
  /* 127a4fd7 call 0x127a84f0 */
  push32(0x127a4fdcu); f_127a84f0();
  /* 127a4fdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a4fdf:;
  /* 127a4fdf push 4 */
  push32((uint32_t)(0x4u));
  /* 127a4fe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a4fe3 mov al, byte ptr [0x127cea90] */
  AL = (r8((uint32_t)(0x127cea90)));
  /* 127a4fe8 push eax */
  push32((uint32_t)(EAX));
  /* 127a4fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a4fec add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4fef push ecx */
  push32((uint32_t)(ECX));
  /* 127a4ff0 call 0x127a84f0 */
  push32(0x127a4ff5u); f_127a84f0();
  /* 127a4ff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a4ff8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a4ffc jne 0x127a5019 */
  if (!C.zf) goto L_127a5019;
  /* 127a4ffe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5001 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a5004 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a5007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a500a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a500d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 127a5010 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5013 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a5016 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_127a5019:;
  /* 127a5019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a501c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a501f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_127a5022:;
  /* 127a5022 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5026 jne 0x127a5057 */
  if (!C.zf) goto L_127a5057;
  /* 127a5028 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a502c jne 0x127a5036 */
  if (!C.zf) goto L_127a5036;
  /* 127a502e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5031 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5034 je 0x127a5057 */
  if (C.zf) goto L_127a5057;
L_127a5036:;
  /* 127a5036 push 0x127cb590 */
  push32((uint32_t)(0x127cb590u));
  /* 127a503b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a503d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 127a5042 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a5047 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a5049 call 0x127a3840 */
  push32(0x127a504eu); f_127a3840();
  /* 127a504e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5051 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5054 jne 0x127a5057 */
  if (!C.zf) goto L_127a5057;
  /* 127a5056 int3  */
  x86_unimpl("int3 @ 0x127a5056");
L_127a5057:;
  /* 127a5057 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a5059 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a505b jne 0x127a5022 */
  if (!C.zf) goto L_127a5022;
  /* 127a505d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5060 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5063 je 0x127a506b */
  if (C.zf) goto L_127a506b;
  /* 127a5065 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5069 je 0x127a5073 */
  if (C.zf) goto L_127a5073;
L_127a506b:;
  /* 127a506b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a506e jmp 0x127a515a */
  goto L_127a515a;
L_127a5073:;
  /* 127a5073 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5076 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5079 je 0x127a508b */
  if (C.zf) goto L_127a508b;
  /* 127a507b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a507e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a5080 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5083 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a5086 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127a5089 jmp 0x127a50c7 */
  goto L_127a50c7;
L_127a508b:;
  /* 127a508b mov eax, dword ptr [0x127d055c] */
  EAX = (r32((uint32_t)(0x127d055c)));
  /* 127a5090 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5093 je 0x127a50b6 */
  if (C.zf) goto L_127a50b6;
  /* 127a5095 push 0x127cb574 */
  push32((uint32_t)(0x127cb574u));
  /* 127a509a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a509c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 127a50a1 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a50a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a50a8 call 0x127a3840 */
  push32(0x127a50adu); f_127a3840();
  /* 127a50ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a50b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a50b3 jne 0x127a50b6 */
  if (!C.zf) goto L_127a50b6;
  /* 127a50b5 int3  */
  x86_unimpl("int3 @ 0x127a50b5");
L_127a50b6:;
  /* 127a50b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a50b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a50ba jne 0x127a508b */
  if (!C.zf) goto L_127a508b;
  /* 127a50bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a50bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a50c2 mov dword ptr [0x127d055c], eax */
  w32((uint32_t)(0x127d055c), (EAX));
L_127a50c7:;
  /* 127a50c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a50ca cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a50ce je 0x127a50df */
  if (C.zf) goto L_127a50df;
  /* 127a50d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a50d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a50d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a50d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a50db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a50dd jmp 0x127a511a */
  goto L_127a511a;
L_127a50df:;
  /* 127a50df mov eax, dword ptr [0x127d0564] */
  EAX = (r32((uint32_t)(0x127d0564)));
  /* 127a50e4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a50e7 je 0x127a510a */
  if (C.zf) goto L_127a510a;
  /* 127a50e9 push 0x127cb558 */
  push32((uint32_t)(0x127cb558u));
  /* 127a50ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127a50f0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 127a50f5 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a50fa push 2 */
  push32((uint32_t)(0x2u));
  /* 127a50fc call 0x127a3840 */
  push32(0x127a5101u); f_127a3840();
  /* 127a5101 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5107 jne 0x127a510a */
  if (!C.zf) goto L_127a510a;
  /* 127a5109 int3  */
  x86_unimpl("int3 @ 0x127a5109");
L_127a510a:;
  /* 127a510a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a510c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a510e jne 0x127a50df */
  if (!C.zf) goto L_127a50df;
  /* 127a5110 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5113 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a5115 mov dword ptr [0x127d0564], eax */
  w32((uint32_t)(0x127d0564), (EAX));
L_127a511a:;
  /* 127a511a cmp dword ptr [0x127d0564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5121 je 0x127a5131 */
  if (C.zf) goto L_127a5131;
  /* 127a5123 mov ecx, dword ptr [0x127d0564] */
  ECX = (r32((uint32_t)(0x127d0564)));
  /* 127a5129 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a512c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127a512f jmp 0x127a5139 */
  goto L_127a5139;
L_127a5131:;
  /* 127a5131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5134 mov dword ptr [0x127d055c], eax */
  w32((uint32_t)(0x127d055c), (EAX));
L_127a5139:;
  /* 127a5139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a513c mov edx, dword ptr [0x127d0564] */
  EDX = (r32((uint32_t)(0x127d0564)));
  /* 127a5142 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127a5144 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5147 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 127a514e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a5151 mov dword ptr [0x127d0564], ecx */
  w32((uint32_t)(0x127d0564), (ECX));
  /* 127a5157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a515a:;
  /* 127a515a pop edi */
  EDI = (pop32());
  /* 127a515b pop esi */
  ESI = (pop32());
  /* 127a515c pop ebx */
  EBX = (pop32());
  /* 127a515d mov esp, ebp */
  ESP = (EBP);
  /* 127a515f pop ebp */
  EBP = (pop32());
  /* 127a5160 ret  */
  ESPCHK(0x127a4c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x127a5170 (27 bytes, 13 insns) */
void f_127a5170(void) {
  FTRACE(0x127a5170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5170 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5171 mov ebp, esp */
  EBP = (ESP);
  /* 127a5173 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5175 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5177 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a5179 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a517c push eax */
  push32((uint32_t)(EAX));
  /* 127a517d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5180 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5181 call 0x127a5190 */
  push32(0x127a5186u); f_127a5190();
  /* 127a5186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5189 pop ebp */
  EBP = (pop32());
  /* 127a518a ret  */
  ESPCHK(0x127a5170u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x127a5190 (64 bytes, 27 insns) */
void f_127a5190(void) {
  FTRACE(0x127a5190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5190 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5191 mov ebp, esp */
  EBP = (ESP);
  /* 127a5193 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5194 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5196 call 0x127a8180 */
  push32(0x127a519bu); f_127a8180();
  /* 127a519b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a519e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a51a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a51a3 push eax */
  push32((uint32_t)(EAX));
  /* 127a51a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a51a7 push ecx */
  push32((uint32_t)(ECX));
  /* 127a51a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a51ab push edx */
  push32((uint32_t)(EDX));
  /* 127a51ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a51af push eax */
  push32((uint32_t)(EAX));
  /* 127a51b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a51b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a51b4 call 0x127a4c50 */
  push32(0x127a51b9u); f_127a4c50();
  /* 127a51b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a51bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a51bf push 9 */
  push32((uint32_t)(0x9u));
  /* 127a51c1 call 0x127a8220 */
  push32(0x127a51c6u); f_127a8220();
  /* 127a51c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a51c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a51cc mov esp, ebp */
  ESP = (EBP);
  /* 127a51ce pop ebp */
  EBP = (pop32());
  /* 127a51cf ret  */
  ESPCHK(0x127a5190u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x127a51d0 (19 bytes, 9 insns) */
void f_127a51d0(void) {
  FTRACE(0x127a51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a51d1 mov ebp, esp */
  EBP = (ESP);
  /* 127a51d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a51d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a51d8 push eax */
  push32((uint32_t)(EAX));
  /* 127a51d9 call 0x127a5210 */
  push32(0x127a51deu); f_127a5210();
  /* 127a51de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a51e1 pop ebp */
  EBP = (pop32());
  /* 127a51e2 ret  */
  ESPCHK(0x127a51d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051f0 @ 0x127a51f0 (19 bytes, 9 insns) */
void f_127a51f0(void) {
  FTRACE(0x127a51f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a51f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a51f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a51f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a51f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a51f8 push eax */
  push32((uint32_t)(EAX));
  /* 127a51f9 call 0x127a5240 */
  push32(0x127a51feu); f_127a5240();
  /* 127a51fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5201 pop ebp */
  EBP = (pop32());
  /* 127a5202 ret  */
  ESPCHK(0x127a51f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x127a5210 (41 bytes, 16 insns) */
void f_127a5210(void) {
  FTRACE(0x127a5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5210 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5211 mov ebp, esp */
  EBP = (ESP);
  /* 127a5213 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5215 call 0x127a8180 */
  push32(0x127a521au); f_127a8180();
  /* 127a521a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a521d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5220 push eax */
  push32((uint32_t)(EAX));
  /* 127a5221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5224 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5225 call 0x127a5240 */
  push32(0x127a522au); f_127a5240();
  /* 127a522a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a522d push 9 */
  push32((uint32_t)(0x9u));
  /* 127a522f call 0x127a8220 */
  push32(0x127a5234u); f_127a8220();
  /* 127a5234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5237 pop ebp */
  EBP = (pop32());
  /* 127a5238 ret  */
  ESPCHK(0x127a5210u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x127a5240 (1004 bytes, 342 insns) */
void f_127a5240(void) {
  FTRACE(0x127a5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5240 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5241 mov ebp, esp */
  EBP = (ESP);
  /* 127a5243 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5244 push ebx */
  push32((uint32_t)(EBX));
  /* 127a5245 push esi */
  push32((uint32_t)(ESI));
  /* 127a5246 push edi */
  push32((uint32_t)(EDI));
  /* 127a5247 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a524c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a524f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5251 je 0x127a5283 */
  if (C.zf) goto L_127a5283;
L_127a5253:;
  /* 127a5253 call 0x127a5920 */
  push32(0x127a5258u); f_127a5920();
  /* 127a5258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a525a jne 0x127a527d */
  if (!C.zf) goto L_127a527d;
  /* 127a525c push 0x127cb544 */
  push32((uint32_t)(0x127cb544u));
  /* 127a5261 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5263 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 127a5268 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a526d push 2 */
  push32((uint32_t)(0x2u));
  /* 127a526f call 0x127a3840 */
  push32(0x127a5274u); f_127a3840();
  /* 127a5274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a527a jne 0x127a527d */
  if (!C.zf) goto L_127a527d;
  /* 127a527c int3  */
  x86_unimpl("int3 @ 0x127a527c");
L_127a527d:;
  /* 127a527d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a527f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5281 jne 0x127a5253 */
  if (!C.zf) goto L_127a5253;
L_127a5283:;
  /* 127a5283 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5287 jne 0x127a528e */
  if (!C.zf) goto L_127a528e;
  /* 127a5289 jmp 0x127a5625 */
  goto L_127a5625;
L_127a528e:;
  /* 127a528e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5290 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5292 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5294 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5297 push edx */
  push32((uint32_t)(EDX));
  /* 127a5298 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a529a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a529d push eax */
  push32((uint32_t)(EAX));
  /* 127a529e push 3 */
  push32((uint32_t)(0x3u));
  /* 127a52a0 call dword ptr [0x127cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cec90))), 0x127a52a6u);
  /* 127a52a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a52a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a52ab jne 0x127a52d8 */
  if (!C.zf) goto L_127a52d8;
L_127a52ad:;
  /* 127a52ad push 0x127cb808 */
  push32((uint32_t)(0x127cb808u));
  /* 127a52b2 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a52b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a52b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a52bb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a52bd push 0 */
  push32((uint32_t)(0x0u));
  /* 127a52bf call 0x127a3840 */
  push32(0x127a52c4u); f_127a3840();
  /* 127a52c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a52c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a52ca jne 0x127a52cd */
  if (!C.zf) goto L_127a52cd;
  /* 127a52cc int3  */
  x86_unimpl("int3 @ 0x127a52cc");
L_127a52cd:;
  /* 127a52cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a52cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a52d1 jne 0x127a52ad */
  if (!C.zf) goto L_127a52ad;
  /* 127a52d3 jmp 0x127a5625 */
  goto L_127a5625;
L_127a52d8:;
  /* 127a52d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a52db push edx */
  push32((uint32_t)(EDX));
  /* 127a52dc call 0x127a5d80 */
  push32(0x127a52e1u); f_127a5d80();
  /* 127a52e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a52e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a52e6 jne 0x127a5309 */
  if (!C.zf) goto L_127a5309;
  /* 127a52e8 push 0x127cb648 */
  push32((uint32_t)(0x127cb648u));
  /* 127a52ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127a52ef push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 127a52f4 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a52f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a52fb call 0x127a3840 */
  push32(0x127a5300u); f_127a3840();
  /* 127a5300 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5303 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5306 jne 0x127a5309 */
  if (!C.zf) goto L_127a5309;
  /* 127a5308 int3  */
  x86_unimpl("int3 @ 0x127a5308");
L_127a5309:;
  /* 127a5309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a530b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a530d jne 0x127a52d8 */
  if (!C.zf) goto L_127a52d8;
  /* 127a530f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5312 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5315 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a5318:;
  /* 127a5318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a531b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a531e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5323 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5326 je 0x127a536b */
  if (C.zf) goto L_127a536b;
  /* 127a5328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a532b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a532f je 0x127a536b */
  if (C.zf) goto L_127a536b;
  /* 127a5331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5334 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5337 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a533c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a533f je 0x127a536b */
  if (C.zf) goto L_127a536b;
  /* 127a5341 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5344 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5348 je 0x127a536b */
  if (C.zf) goto L_127a536b;
  /* 127a534a push 0x127cb7e0 */
  push32((uint32_t)(0x127cb7e0u));
  /* 127a534f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5351 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 127a5356 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a535b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a535d call 0x127a3840 */
  push32(0x127a5362u); f_127a3840();
  /* 127a5362 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5365 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5368 jne 0x127a536b */
  if (!C.zf) goto L_127a536b;
  /* 127a536a int3  */
  x86_unimpl("int3 @ 0x127a536a");
L_127a536b:;
  /* 127a536b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a536d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a536f jne 0x127a5318 */
  if (!C.zf) goto L_127a5318;
  /* 127a5371 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a5376 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a5379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a537b jne 0x127a5446 */
  if (!C.zf) goto L_127a5446;
  /* 127a5381 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a5383 mov cl, byte ptr [0x127cea90] */
  CL = (r8((uint32_t)(0x127cea90)));
  /* 127a5389 push ecx */
  push32((uint32_t)(ECX));
  /* 127a538a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a538d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5390 push edx */
  push32((uint32_t)(EDX));
  /* 127a5391 call 0x127a5890 */
  push32(0x127a5396u); f_127a5890();
  /* 127a5396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a539b jne 0x127a53e0 */
  if (!C.zf) goto L_127a53e0;
L_127a539d:;
  /* 127a539d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a53a0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a53a3 push eax */
  push32((uint32_t)(EAX));
  /* 127a53a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a53a7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127a53aa push edx */
  push32((uint32_t)(EDX));
  /* 127a53ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a53ae mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a53b1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a53b7 mov edx, dword ptr [ecx*4 + 0x127cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea94)));
  /* 127a53be push edx */
  push32((uint32_t)(EDX));
  /* 127a53bf push 0x127cb7b4 */
  push32((uint32_t)(0x127cb7b4u));
  /* 127a53c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a53c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a53c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a53ca push 1 */
  push32((uint32_t)(0x1u));
  /* 127a53cc call 0x127a3840 */
  push32(0x127a53d1u); f_127a3840();
  /* 127a53d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a53d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a53d7 jne 0x127a53da */
  if (!C.zf) goto L_127a53da;
  /* 127a53d9 int3  */
  x86_unimpl("int3 @ 0x127a53d9");
L_127a53da:;
  /* 127a53da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a53dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a53de jne 0x127a539d */
  if (!C.zf) goto L_127a539d;
L_127a53e0:;
  /* 127a53e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a53e2 mov cl, byte ptr [0x127cea90] */
  CL = (r8((uint32_t)(0x127cea90)));
  /* 127a53e8 push ecx */
  push32((uint32_t)(ECX));
  /* 127a53e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a53ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a53ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a53f2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 127a53f6 push edx */
  push32((uint32_t)(EDX));
  /* 127a53f7 call 0x127a5890 */
  push32(0x127a53fcu); f_127a5890();
  /* 127a53fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a53ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5401 jne 0x127a5446 */
  if (!C.zf) goto L_127a5446;
L_127a5403:;
  /* 127a5403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5406 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5409 push eax */
  push32((uint32_t)(EAX));
  /* 127a540a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a540d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127a5410 push edx */
  push32((uint32_t)(EDX));
  /* 127a5411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5414 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a5417 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a541d mov edx, dword ptr [ecx*4 + 0x127cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea94)));
  /* 127a5424 push edx */
  push32((uint32_t)(EDX));
  /* 127a5425 push 0x127cb788 */
  push32((uint32_t)(0x127cb788u));
  /* 127a542a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a542c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a542e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5430 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a5432 call 0x127a3840 */
  push32(0x127a5437u); f_127a3840();
  /* 127a5437 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a543a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a543d jne 0x127a5440 */
  if (!C.zf) goto L_127a5440;
  /* 127a543f int3  */
  x86_unimpl("int3 @ 0x127a543f");
L_127a5440:;
  /* 127a5440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5442 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5444 jne 0x127a5403 */
  if (!C.zf) goto L_127a5403;
L_127a5446:;
  /* 127a5446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5449 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a544d jne 0x127a54bb */
  if (!C.zf) goto L_127a54bb;
L_127a544f:;
  /* 127a544f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5452 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5459 jne 0x127a5464 */
  if (!C.zf) goto L_127a5464;
  /* 127a545b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a545e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5462 je 0x127a5485 */
  if (C.zf) goto L_127a5485;
L_127a5464:;
  /* 127a5464 push 0x127cb748 */
  push32((uint32_t)(0x127cb748u));
  /* 127a5469 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a546b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 127a5470 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a5475 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a5477 call 0x127a3840 */
  push32(0x127a547cu); f_127a3840();
  /* 127a547c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a547f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5482 jne 0x127a5485 */
  if (!C.zf) goto L_127a5485;
  /* 127a5484 int3  */
  x86_unimpl("int3 @ 0x127a5484");
L_127a5485:;
  /* 127a5485 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5487 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5489 jne 0x127a544f */
  if (!C.zf) goto L_127a544f;
  /* 127a548b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a548e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a5491 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5494 push eax */
  push32((uint32_t)(EAX));
  /* 127a5495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5497 mov cl, byte ptr [0x127cea91] */
  CL = (r8((uint32_t)(0x127cea91)));
  /* 127a549d push ecx */
  push32((uint32_t)(ECX));
  /* 127a549e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a54a1 push edx */
  push32((uint32_t)(EDX));
  /* 127a54a2 call 0x127a84f0 */
  push32(0x127a54a7u); f_127a84f0();
  /* 127a54a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a54aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a54ad push eax */
  push32((uint32_t)(EAX));
  /* 127a54ae call 0x127a88f0 */
  push32(0x127a54b3u); f_127a88f0();
  /* 127a54b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a54b6 jmp 0x127a5625 */
  goto L_127a5625;
L_127a54bb:;
  /* 127a54bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a54be cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a54c2 jne 0x127a54d1 */
  if (!C.zf) goto L_127a54d1;
  /* 127a54c4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a54c8 jne 0x127a54d1 */
  if (!C.zf) goto L_127a54d1;
  /* 127a54ca mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_127a54d1:;
  /* 127a54d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a54d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a54d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a54da je 0x127a54fd */
  if (C.zf) goto L_127a54fd;
  /* 127a54dc push 0x127cb728 */
  push32((uint32_t)(0x127cb728u));
  /* 127a54e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a54e3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 127a54e8 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a54ed push 2 */
  push32((uint32_t)(0x2u));
  /* 127a54ef call 0x127a3840 */
  push32(0x127a54f4u); f_127a3840();
  /* 127a54f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a54f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a54fa jne 0x127a54fd */
  if (!C.zf) goto L_127a54fd;
  /* 127a54fc int3  */
  x86_unimpl("int3 @ 0x127a54fc");
L_127a54fd:;
  /* 127a54fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a54ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5501 jne 0x127a54d1 */
  if (!C.zf) goto L_127a54d1;
  /* 127a5503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5506 mov eax, dword ptr [0x127d0568] */
  EAX = (r32((uint32_t)(0x127d0568)));
  /* 127a550b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a550e mov dword ptr [0x127d0568], eax */
  w32((uint32_t)(0x127d0568), (EAX));
  /* 127a5513 mov ecx, dword ptr [0x127cea84] */
  ECX = (r32((uint32_t)(0x127cea84)));
  /* 127a5519 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127a551c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a551e jne 0x127a55fc */
  if (!C.zf) goto L_127a55fc;
  /* 127a5524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5527 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a552a je 0x127a553c */
  if (C.zf) goto L_127a553c;
  /* 127a552c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a552f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a5531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5534 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a5537 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127a553a jmp 0x127a557a */
  goto L_127a557a;
L_127a553c:;
  /* 127a553c mov ecx, dword ptr [0x127d055c] */
  ECX = (r32((uint32_t)(0x127d055c)));
  /* 127a5542 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5545 je 0x127a5568 */
  if (C.zf) goto L_127a5568;
  /* 127a5547 push 0x127cb710 */
  push32((uint32_t)(0x127cb710u));
  /* 127a554c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a554e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 127a5553 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a5558 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a555a call 0x127a3840 */
  push32(0x127a555fu); f_127a3840();
  /* 127a555f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5562 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5565 jne 0x127a5568 */
  if (!C.zf) goto L_127a5568;
  /* 127a5567 int3  */
  x86_unimpl("int3 @ 0x127a5567");
L_127a5568:;
  /* 127a5568 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a556a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a556c jne 0x127a553c */
  if (!C.zf) goto L_127a553c;
  /* 127a556e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5571 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a5574 mov dword ptr [0x127d055c], ecx */
  w32((uint32_t)(0x127d055c), (ECX));
L_127a557a:;
  /* 127a557a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a557d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5581 je 0x127a5592 */
  if (C.zf) goto L_127a5592;
  /* 127a5583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5586 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a5589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a558c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a558e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a5590 jmp 0x127a55cf */
  goto L_127a55cf;
L_127a5592:;
  /* 127a5592 mov ecx, dword ptr [0x127d0564] */
  ECX = (r32((uint32_t)(0x127d0564)));
  /* 127a5598 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a559b je 0x127a55be */
  if (C.zf) goto L_127a55be;
  /* 127a559d push 0x127cb6f8 */
  push32((uint32_t)(0x127cb6f8u));
  /* 127a55a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a55a4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 127a55a9 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a55ae push 2 */
  push32((uint32_t)(0x2u));
  /* 127a55b0 call 0x127a3840 */
  push32(0x127a55b5u); f_127a3840();
  /* 127a55b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a55b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a55bb jne 0x127a55be */
  if (!C.zf) goto L_127a55be;
  /* 127a55bd int3  */
  x86_unimpl("int3 @ 0x127a55bd");
L_127a55be:;
  /* 127a55be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a55c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a55c2 jne 0x127a5592 */
  if (!C.zf) goto L_127a5592;
  /* 127a55c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a55c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a55c9 mov dword ptr [0x127d0564], ecx */
  w32((uint32_t)(0x127d0564), (ECX));
L_127a55cf:;
  /* 127a55cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a55d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a55d5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a55d8 push eax */
  push32((uint32_t)(EAX));
  /* 127a55d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a55db mov cl, byte ptr [0x127cea91] */
  CL = (r8((uint32_t)(0x127cea91)));
  /* 127a55e1 push ecx */
  push32((uint32_t)(ECX));
  /* 127a55e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a55e5 push edx */
  push32((uint32_t)(EDX));
  /* 127a55e6 call 0x127a84f0 */
  push32(0x127a55ebu); f_127a84f0();
  /* 127a55eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a55ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a55f1 push eax */
  push32((uint32_t)(EAX));
  /* 127a55f2 call 0x127a88f0 */
  push32(0x127a55f7u); f_127a88f0();
  /* 127a55f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a55fa jmp 0x127a5625 */
  goto L_127a5625;
L_127a55fc:;
  /* 127a55fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a55ff mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 127a5606 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5609 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a560c push eax */
  push32((uint32_t)(EAX));
  /* 127a560d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a560f mov cl, byte ptr [0x127cea91] */
  CL = (r8((uint32_t)(0x127cea91)));
  /* 127a5615 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5619 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a561c push edx */
  push32((uint32_t)(EDX));
  /* 127a561d call 0x127a84f0 */
  push32(0x127a5622u); f_127a84f0();
  /* 127a5622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a5625:;
  /* 127a5625 pop edi */
  EDI = (pop32());
  /* 127a5626 pop esi */
  ESI = (pop32());
  /* 127a5627 pop ebx */
  EBX = (pop32());
  /* 127a5628 mov esp, ebp */
  ESP = (EBP);
  /* 127a562a pop ebp */
  EBP = (pop32());
  /* 127a562b ret  */
  ESPCHK(0x127a5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x127a5630 (19 bytes, 9 insns) */
void f_127a5630(void) {
  FTRACE(0x127a5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5630 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5631 mov ebp, esp */
  EBP = (ESP);
  /* 127a5633 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a5635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5638 push eax */
  push32((uint32_t)(EAX));
  /* 127a5639 call 0x127a5650 */
  push32(0x127a563eu); f_127a5650();
  /* 127a563e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5641 pop ebp */
  EBP = (pop32());
  /* 127a5642 ret  */
  ESPCHK(0x127a5630u, _esp0);
  ESP += 4; return;
}

/* FUN_10005650 @ 0x127a5650 (342 bytes, 119 insns) */
void f_127a5650(void) {
  FTRACE(0x127a5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5650 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5651 mov ebp, esp */
  EBP = (ESP);
  /* 127a5653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5656 push ebx */
  push32((uint32_t)(EBX));
  /* 127a5657 push esi */
  push32((uint32_t)(ESI));
  /* 127a5658 push edi */
  push32((uint32_t)(EDI));
  /* 127a5659 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a565e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a5661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5663 je 0x127a5695 */
  if (C.zf) goto L_127a5695;
L_127a5665:;
  /* 127a5665 call 0x127a5920 */
  push32(0x127a566au); f_127a5920();
  /* 127a566a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a566c jne 0x127a568f */
  if (!C.zf) goto L_127a568f;
  /* 127a566e push 0x127cb544 */
  push32((uint32_t)(0x127cb544u));
  /* 127a5673 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5675 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 127a567a push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a567f push 2 */
  push32((uint32_t)(0x2u));
  /* 127a5681 call 0x127a3840 */
  push32(0x127a5686u); f_127a3840();
  /* 127a5686 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5689 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a568c jne 0x127a568f */
  if (!C.zf) goto L_127a568f;
  /* 127a568e int3  */
  x86_unimpl("int3 @ 0x127a568e");
L_127a568f:;
  /* 127a568f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5691 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5693 jne 0x127a5665 */
  if (!C.zf) goto L_127a5665;
L_127a5695:;
  /* 127a5695 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5697 call 0x127a8180 */
  push32(0x127a569cu); f_127a8180();
  /* 127a569c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a569f:;
  /* 127a569f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a56a2 push edx */
  push32((uint32_t)(EDX));
  /* 127a56a3 call 0x127a5d80 */
  push32(0x127a56a8u); f_127a5d80();
  /* 127a56a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a56ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a56ad jne 0x127a56d0 */
  if (!C.zf) goto L_127a56d0;
  /* 127a56af push 0x127cb648 */
  push32((uint32_t)(0x127cb648u));
  /* 127a56b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a56b6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 127a56bb push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a56c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a56c2 call 0x127a3840 */
  push32(0x127a56c7u); f_127a3840();
  /* 127a56c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a56ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a56cd jne 0x127a56d0 */
  if (!C.zf) goto L_127a56d0;
  /* 127a56cf int3  */
  x86_unimpl("int3 @ 0x127a56cf");
L_127a56d0:;
  /* 127a56d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a56d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a56d4 jne 0x127a569f */
  if (!C.zf) goto L_127a569f;
  /* 127a56d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a56d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a56dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127a56df:;
  /* 127a56df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a56e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a56e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a56ea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a56ed je 0x127a5732 */
  if (C.zf) goto L_127a5732;
  /* 127a56ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a56f2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a56f6 je 0x127a5732 */
  if (C.zf) goto L_127a5732;
  /* 127a56f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a56fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a56fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5703 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5706 je 0x127a5732 */
  if (C.zf) goto L_127a5732;
  /* 127a5708 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a570b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a570f je 0x127a5732 */
  if (C.zf) goto L_127a5732;
  /* 127a5711 push 0x127cb7e0 */
  push32((uint32_t)(0x127cb7e0u));
  /* 127a5716 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5718 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 127a571d push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a5722 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a5724 call 0x127a3840 */
  push32(0x127a5729u); f_127a3840();
  /* 127a5729 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a572c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a572f jne 0x127a5732 */
  if (!C.zf) goto L_127a5732;
  /* 127a5731 int3  */
  x86_unimpl("int3 @ 0x127a5731");
L_127a5732:;
  /* 127a5732 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a5734 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a5736 jne 0x127a56df */
  if (!C.zf) goto L_127a56df;
  /* 127a5738 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a573b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a573f jne 0x127a574e */
  if (!C.zf) goto L_127a574e;
  /* 127a5741 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5745 jne 0x127a574e */
  if (!C.zf) goto L_127a574e;
  /* 127a5747 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_127a574e:;
  /* 127a574e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5751 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5755 je 0x127a5789 */
  if (C.zf) goto L_127a5789;
L_127a5757:;
  /* 127a5757 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a575a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a575d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5760 je 0x127a5783 */
  if (C.zf) goto L_127a5783;
  /* 127a5762 push 0x127cb728 */
  push32((uint32_t)(0x127cb728u));
  /* 127a5767 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5769 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 127a576e push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a5773 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a5775 call 0x127a3840 */
  push32(0x127a577au); f_127a3840();
  /* 127a577a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a577d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5780 jne 0x127a5783 */
  if (!C.zf) goto L_127a5783;
  /* 127a5782 int3  */
  x86_unimpl("int3 @ 0x127a5782");
L_127a5783:;
  /* 127a5783 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5787 jne 0x127a5757 */
  if (!C.zf) goto L_127a5757;
L_127a5789:;
  /* 127a5789 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a578c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a578f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a5792 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5794 call 0x127a8220 */
  push32(0x127a5799u); f_127a8220();
  /* 127a5799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a579c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a579f pop edi */
  EDI = (pop32());
  /* 127a57a0 pop esi */
  ESI = (pop32());
  /* 127a57a1 pop ebx */
  EBX = (pop32());
  /* 127a57a2 mov esp, ebp */
  ESP = (EBP);
  /* 127a57a4 pop ebp */
  EBP = (pop32());
  /* 127a57a5 ret  */
  ESPCHK(0x127a5650u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x127a57b0 (28 bytes, 11 insns) */
void f_127a57b0(void) {
  FTRACE(0x127a57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a57b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a57b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a57b4 mov eax, dword ptr [0x127cea8c] */
  EAX = (r32((uint32_t)(0x127cea8c)));
  /* 127a57b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a57bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a57bf mov dword ptr [0x127cea8c], ecx */
  w32((uint32_t)(0x127cea8c), (ECX));
  /* 127a57c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a57c8 mov esp, ebp */
  ESP = (EBP);
  /* 127a57ca pop ebp */
  EBP = (pop32());
  /* 127a57cb ret  */
  ESPCHK(0x127a57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x127a57d0 (157 bytes, 59 insns) */
void f_127a57d0(void) {
  FTRACE(0x127a57d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a57d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a57d1 mov ebp, esp */
  EBP = (ESP);
  /* 127a57d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a57d4 push ebx */
  push32((uint32_t)(EBX));
  /* 127a57d5 push esi */
  push32((uint32_t)(ESI));
  /* 127a57d6 push edi */
  push32((uint32_t)(EDI));
  /* 127a57d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a57d9 call 0x127a8180 */
  push32(0x127a57deu); f_127a8180();
  /* 127a57de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a57e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a57e4 push eax */
  push32((uint32_t)(EAX));
  /* 127a57e5 call 0x127a5d80 */
  push32(0x127a57eau); f_127a5d80();
  /* 127a57ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a57ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a57ef je 0x127a585c */
  if (C.zf) goto L_127a585c;
  /* 127a57f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a57f4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a57f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a57fa:;
  /* 127a57fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a57fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5800 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5805 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5808 je 0x127a584d */
  if (C.zf) goto L_127a584d;
  /* 127a580a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a580d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5811 je 0x127a584d */
  if (C.zf) goto L_127a584d;
  /* 127a5813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5816 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5819 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a581e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5821 je 0x127a584d */
  if (C.zf) goto L_127a584d;
  /* 127a5823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5826 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a582a je 0x127a584d */
  if (C.zf) goto L_127a584d;
  /* 127a582c push 0x127cb7e0 */
  push32((uint32_t)(0x127cb7e0u));
  /* 127a5831 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5833 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 127a5838 push 0x127cb538 */
  push32((uint32_t)(0x127cb538u));
  /* 127a583d push 2 */
  push32((uint32_t)(0x2u));
  /* 127a583f call 0x127a3840 */
  push32(0x127a5844u); f_127a3840();
  /* 127a5844 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a584a jne 0x127a584d */
  if (!C.zf) goto L_127a584d;
  /* 127a584c int3  */
  x86_unimpl("int3 @ 0x127a584c");
L_127a584d:;
  /* 127a584d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a584f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a5851 jne 0x127a57fa */
  if (!C.zf) goto L_127a57fa;
  /* 127a5853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5856 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5859 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_127a585c:;
  /* 127a585c push 9 */
  push32((uint32_t)(0x9u));
  /* 127a585e call 0x127a8220 */
  push32(0x127a5863u); f_127a8220();
  /* 127a5863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5866 pop edi */
  EDI = (pop32());
  /* 127a5867 pop esi */
  ESI = (pop32());
  /* 127a5868 pop ebx */
  EBX = (pop32());
  /* 127a5869 mov esp, ebp */
  ESP = (EBP);
  /* 127a586b pop ebp */
  EBP = (pop32());
  /* 127a586c ret  */
  ESPCHK(0x127a57d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x127a5870 (28 bytes, 11 insns) */
void f_127a5870(void) {
  FTRACE(0x127a5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5870 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5871 mov ebp, esp */
  EBP = (ESP);
  /* 127a5873 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5874 mov eax, dword ptr [0x127cec90] */
  EAX = (r32((uint32_t)(0x127cec90)));
  /* 127a5879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a587c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a587f mov dword ptr [0x127cec90], ecx */
  w32((uint32_t)(0x127cec90), (ECX));
  /* 127a5885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5888 mov esp, ebp */
  ESP = (EBP);
  /* 127a588a pop ebp */
  EBP = (pop32());
  /* 127a588b ret  */
  ESPCHK(0x127a5870u, _esp0);
  ESP += 4; return;
}

/* FUN_10005890 @ 0x127a5890 (136 bytes, 55 insns) */
void f_127a5890(void) {
  FTRACE(0x127a5890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5890 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5891 mov ebp, esp */
  EBP = (ESP);
  /* 127a5893 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5894 push ebx */
  push32((uint32_t)(EBX));
  /* 127a5895 push esi */
  push32((uint32_t)(ESI));
  /* 127a5896 push edi */
  push32((uint32_t)(EDI));
  /* 127a5897 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_127a589e:;
  /* 127a589e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a58a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a58a4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a58a7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127a58aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a58ac je 0x127a590e */
  if (C.zf) goto L_127a590e;
  /* 127a58ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a58b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a58b3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127a58b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a58b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a58be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a58c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a58c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127a58c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a58c9 je 0x127a590c */
  if (C.zf) goto L_127a590c;
L_127a58cb:;
  /* 127a58cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a58ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a58d3 push eax */
  push32((uint32_t)(EAX));
  /* 127a58d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a58d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a58d9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 127a58dc push edx */
  push32((uint32_t)(EDX));
  /* 127a58dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a58e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a58e3 push eax */
  push32((uint32_t)(EAX));
  /* 127a58e4 push 0x127cb824 */
  push32((uint32_t)(0x127cb824u));
  /* 127a58e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a58eb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a58ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127a58ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127a58f1 call 0x127a3840 */
  push32(0x127a58f6u); f_127a3840();
  /* 127a58f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a58f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a58fc jne 0x127a58ff */
  if (!C.zf) goto L_127a58ff;
  /* 127a58fe int3  */
  x86_unimpl("int3 @ 0x127a58fe");
L_127a58ff:;
  /* 127a58ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5903 jne 0x127a58cb */
  if (!C.zf) goto L_127a58cb;
  /* 127a5905 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a590c:;
  /* 127a590c jmp 0x127a589e */
  goto L_127a589e;
L_127a590e:;
  /* 127a590e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5911 pop edi */
  EDI = (pop32());
  /* 127a5912 pop esi */
  ESI = (pop32());
  /* 127a5913 pop ebx */
  EBX = (pop32());
  /* 127a5914 mov esp, ebp */
  ESP = (EBP);
  /* 127a5916 pop ebp */
  EBP = (pop32());
  /* 127a5917 ret  */
  ESPCHK(0x127a5890u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x127a5920 (863 bytes, 299 insns) [1 switch table(s)] */
void f_127a5920(void) {
  FTRACE(0x127a5920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5920 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5921 mov ebp, esp */
  EBP = (ESP);
  /* 127a5923 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5926 push ebx */
  push32((uint32_t)(EBX));
  /* 127a5927 push esi */
  push32((uint32_t)(ESI));
  /* 127a5928 push edi */
  push32((uint32_t)(EDI));
  /* 127a5929 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127a5930 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a5935 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127a5938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a593a jne 0x127a5946 */
  if (!C.zf) goto L_127a5946;
  /* 127a593c mov eax, 1 */
  EAX = (0x1u);
  /* 127a5941 jmp 0x127a5c78 */
  goto L_127a5c78;
L_127a5946:;
  /* 127a5946 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5948 call 0x127a8180 */
  push32(0x127a594du); f_127a8180();
  /* 127a594d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5950 call 0x127a8960 */
  push32(0x127a5955u); f_127a8960();
  /* 127a5955 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a5958 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a595c je 0x127a5a69 */
  if (C.zf) goto L_127a5a69;
  /* 127a5962 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5966 je 0x127a5a69 */
  if (C.zf) goto L_127a5a69;
  /* 127a596c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a596f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127a5972 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a5975 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5978 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127a597b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a597f ja 0x127a5a32 */
  if ((!C.cf&&!C.zf)) goto L_127a5a32;
  /* 127a5985 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a5988 jmp dword ptr [eax*4 + 0x127a5c7f] */
  switch (EAX) {
    case 0: goto L_127a5a0a;
    case 1: goto L_127a59e2;
    case 2: goto L_127a59ba;
    case 3: goto L_127a598f;
    default: x86_unimpl("switch@0x127a5988 out of table"); return;
  }
L_127a598f:;
  /* 127a598f push 0x127cb978 */
  push32((uint32_t)(0x127cb978u));
  /* 127a5994 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a5999 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a599b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a599d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a599f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59a1 call 0x127a3840 */
  push32(0x127a59a6u); f_127a3840();
  /* 127a59a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a59a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a59ac jne 0x127a59af */
  if (!C.zf) goto L_127a59af;
  /* 127a59ae int3  */
  x86_unimpl("int3 @ 0x127a59ae");
L_127a59af:;
  /* 127a59af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a59b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a59b3 jne 0x127a598f */
  if (!C.zf) goto L_127a598f;
  /* 127a59b5 jmp 0x127a5a58 */
  goto L_127a5a58;
L_127a59ba:;
  /* 127a59ba push 0x127cb954 */
  push32((uint32_t)(0x127cb954u));
  /* 127a59bf push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a59c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59cc call 0x127a3840 */
  push32(0x127a59d1u); f_127a3840();
  /* 127a59d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a59d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a59d7 jne 0x127a59da */
  if (!C.zf) goto L_127a59da;
  /* 127a59d9 int3  */
  x86_unimpl("int3 @ 0x127a59d9");
L_127a59da:;
  /* 127a59da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a59dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a59de jne 0x127a59ba */
  if (!C.zf) goto L_127a59ba;
  /* 127a59e0 jmp 0x127a5a58 */
  goto L_127a5a58;
L_127a59e2:;
  /* 127a59e2 push 0x127cb930 */
  push32((uint32_t)(0x127cb930u));
  /* 127a59e7 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a59ec push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a59f4 call 0x127a3840 */
  push32(0x127a59f9u); f_127a3840();
  /* 127a59f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a59fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a59ff jne 0x127a5a02 */
  if (!C.zf) goto L_127a5a02;
  /* 127a5a01 int3  */
  x86_unimpl("int3 @ 0x127a5a01");
L_127a5a02:;
  /* 127a5a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5a06 jne 0x127a59e2 */
  if (!C.zf) goto L_127a59e2;
  /* 127a5a08 jmp 0x127a5a58 */
  goto L_127a5a58;
L_127a5a0a:;
  /* 127a5a0a push 0x127cb90c */
  push32((uint32_t)(0x127cb90cu));
  /* 127a5a0f push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a5a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a1c call 0x127a3840 */
  push32(0x127a5a21u); f_127a3840();
  /* 127a5a21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5a24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5a27 jne 0x127a5a2a */
  if (!C.zf) goto L_127a5a2a;
  /* 127a5a29 int3  */
  x86_unimpl("int3 @ 0x127a5a29");
L_127a5a2a:;
  /* 127a5a2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5a2e jne 0x127a5a0a */
  if (!C.zf) goto L_127a5a0a;
  /* 127a5a30 jmp 0x127a5a58 */
  goto L_127a5a58;
L_127a5a32:;
  /* 127a5a32 push 0x127cb8e0 */
  push32((uint32_t)(0x127cb8e0u));
  /* 127a5a37 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a5a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5a44 call 0x127a3840 */
  push32(0x127a5a49u); f_127a3840();
  /* 127a5a49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5a4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5a4f jne 0x127a5a52 */
  if (!C.zf) goto L_127a5a52;
  /* 127a5a51 int3  */
  x86_unimpl("int3 @ 0x127a5a51");
L_127a5a52:;
  /* 127a5a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a5a54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a5a56 jne 0x127a5a32 */
  if (!C.zf) goto L_127a5a32;
L_127a5a58:;
  /* 127a5a58 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5a5a call 0x127a8220 */
  push32(0x127a5a5fu); f_127a8220();
  /* 127a5a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5a62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5a64 jmp 0x127a5c78 */
  goto L_127a5c78;
L_127a5a69:;
  /* 127a5a69 mov eax, dword ptr [0x127d0564] */
  EAX = (r32((uint32_t)(0x127d0564)));
  /* 127a5a6e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a5a71 jmp 0x127a5a7b */
  goto L_127a5a7b;
L_127a5a73:;
  /* 127a5a73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5a76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a5a78 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127a5a7b:;
  /* 127a5a7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5a7f je 0x127a5c6b */
  if (C.zf) goto L_127a5c6b;
  /* 127a5a85 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127a5a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5a8f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a5a92 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a5a98 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5a9b je 0x127a5ac0 */
  if (C.zf) goto L_127a5ac0;
  /* 127a5a9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5aa0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5aa4 je 0x127a5ac0 */
  if (C.zf) goto L_127a5ac0;
  /* 127a5aa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5aa9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a5aac and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a5ab2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5ab5 je 0x127a5ac0 */
  if (C.zf) goto L_127a5ac0;
  /* 127a5ab7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5aba cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5abe jne 0x127a5ad8 */
  if (!C.zf) goto L_127a5ad8;
L_127a5ac0:;
  /* 127a5ac0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5ac3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a5ac6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a5acc mov edx, dword ptr [ecx*4 + 0x127cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea94)));
  /* 127a5ad3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127a5ad6 jmp 0x127a5adf */
  goto L_127a5adf;
L_127a5ad8:;
  /* 127a5ad8 mov dword ptr [ebp - 0x14], 0x127cb8d8 */
  w32((uint32_t)(EBP + -0x14), (0x127cb8d8u));
L_127a5adf:;
  /* 127a5adf push 4 */
  push32((uint32_t)(0x4u));
  /* 127a5ae1 mov al, byte ptr [0x127cea90] */
  AL = (r8((uint32_t)(0x127cea90)));
  /* 127a5ae6 push eax */
  push32((uint32_t)(EAX));
  /* 127a5ae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5aea add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5aed push ecx */
  push32((uint32_t)(ECX));
  /* 127a5aee call 0x127a5890 */
  push32(0x127a5af3u); f_127a5890();
  /* 127a5af3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5af8 jne 0x127a5b34 */
  if (!C.zf) goto L_127a5b34;
L_127a5afa:;
  /* 127a5afa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5afd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5b00 push edx */
  push32((uint32_t)(EDX));
  /* 127a5b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b04 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127a5b07 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5b08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a5b0b push edx */
  push32((uint32_t)(EDX));
  /* 127a5b0c push 0x127cb7b4 */
  push32((uint32_t)(0x127cb7b4u));
  /* 127a5b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b19 call 0x127a3840 */
  push32(0x127a5b1eu); f_127a3840();
  /* 127a5b1e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5b21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5b24 jne 0x127a5b27 */
  if (!C.zf) goto L_127a5b27;
  /* 127a5b26 int3  */
  x86_unimpl("int3 @ 0x127a5b26");
L_127a5b27:;
  /* 127a5b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5b2b jne 0x127a5afa */
  if (!C.zf) goto L_127a5afa;
  /* 127a5b2d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127a5b34:;
  /* 127a5b34 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a5b36 mov cl, byte ptr [0x127cea90] */
  CL = (r8((uint32_t)(0x127cea90)));
  /* 127a5b3c push ecx */
  push32((uint32_t)(ECX));
  /* 127a5b3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b40 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a5b43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b46 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 127a5b4a push edx */
  push32((uint32_t)(EDX));
  /* 127a5b4b call 0x127a5890 */
  push32(0x127a5b50u); f_127a5890();
  /* 127a5b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5b53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5b55 jne 0x127a5b91 */
  if (!C.zf) goto L_127a5b91;
L_127a5b57:;
  /* 127a5b57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b5a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5b5d push eax */
  push32((uint32_t)(EAX));
  /* 127a5b5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b61 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127a5b64 push edx */
  push32((uint32_t)(EDX));
  /* 127a5b65 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a5b68 push eax */
  push32((uint32_t)(EAX));
  /* 127a5b69 push 0x127cb788 */
  push32((uint32_t)(0x127cb788u));
  /* 127a5b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5b76 call 0x127a3840 */
  push32(0x127a5b7bu); f_127a3840();
  /* 127a5b7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5b7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5b81 jne 0x127a5b84 */
  if (!C.zf) goto L_127a5b84;
  /* 127a5b83 int3  */
  x86_unimpl("int3 @ 0x127a5b83");
L_127a5b84:;
  /* 127a5b84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a5b86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5b88 jne 0x127a5b57 */
  if (!C.zf) goto L_127a5b57;
  /* 127a5b8a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127a5b91:;
  /* 127a5b91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b94 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5b98 jne 0x127a5bea */
  if (!C.zf) goto L_127a5bea;
  /* 127a5b9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5b9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a5ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5ba1 mov dl, byte ptr [0x127cea91] */
  DL = (r8((uint32_t)(0x127cea91)));
  /* 127a5ba7 push edx */
  push32((uint32_t)(EDX));
  /* 127a5ba8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5bab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5bae push eax */
  push32((uint32_t)(EAX));
  /* 127a5baf call 0x127a5890 */
  push32(0x127a5bb4u); f_127a5890();
  /* 127a5bb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5bb9 jne 0x127a5bea */
  if (!C.zf) goto L_127a5bea;
L_127a5bbb:;
  /* 127a5bbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5bbe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5bc2 push 0x127cb8ac */
  push32((uint32_t)(0x127cb8acu));
  /* 127a5bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5bcf call 0x127a3840 */
  push32(0x127a5bd4u); f_127a3840();
  /* 127a5bd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5bd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5bda jne 0x127a5bdd */
  if (!C.zf) goto L_127a5bdd;
  /* 127a5bdc int3  */
  x86_unimpl("int3 @ 0x127a5bdc");
L_127a5bdd:;
  /* 127a5bdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a5bdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a5be1 jne 0x127a5bbb */
  if (!C.zf) goto L_127a5bbb;
  /* 127a5be3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127a5bea:;
  /* 127a5bea cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5bee jne 0x127a5c66 */
  if (!C.zf) goto L_127a5c66;
  /* 127a5bf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5bf3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5bf7 je 0x127a5c2c */
  if (C.zf) goto L_127a5c2c;
L_127a5bf9:;
  /* 127a5bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5bfc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127a5bff push edx */
  push32((uint32_t)(EDX));
  /* 127a5c00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5c03 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a5c06 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5c07 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a5c0a push edx */
  push32((uint32_t)(EDX));
  /* 127a5c0b push 0x127cb88c */
  push32((uint32_t)(0x127cb88cu));
  /* 127a5c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c18 call 0x127a3840 */
  push32(0x127a5c1du); f_127a3840();
  /* 127a5c1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5c20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5c23 jne 0x127a5c26 */
  if (!C.zf) goto L_127a5c26;
  /* 127a5c25 int3  */
  x86_unimpl("int3 @ 0x127a5c25");
L_127a5c26:;
  /* 127a5c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5c2a jne 0x127a5bf9 */
  if (!C.zf) goto L_127a5bf9;
L_127a5c2c:;
  /* 127a5c2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5c2f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a5c32 push edx */
  push32((uint32_t)(EDX));
  /* 127a5c33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5c36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5c39 push eax */
  push32((uint32_t)(EAX));
  /* 127a5c3a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a5c3d push ecx */
  push32((uint32_t)(ECX));
  /* 127a5c3e push 0x127cb860 */
  push32((uint32_t)(0x127cb860u));
  /* 127a5c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5c4b call 0x127a3840 */
  push32(0x127a5c50u); f_127a3840();
  /* 127a5c50 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5c53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5c56 jne 0x127a5c59 */
  if (!C.zf) goto L_127a5c59;
  /* 127a5c58 int3  */
  x86_unimpl("int3 @ 0x127a5c58");
L_127a5c59:;
  /* 127a5c59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a5c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a5c5d jne 0x127a5c2c */
  if (!C.zf) goto L_127a5c2c;
  /* 127a5c5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a5c66:;
  /* 127a5c66 jmp 0x127a5a73 */
  goto L_127a5a73;
L_127a5c6b:;
  /* 127a5c6b push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5c6d call 0x127a8220 */
  push32(0x127a5c72u); f_127a8220();
  /* 127a5c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5c75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a5c78:;
  /* 127a5c78 pop edi */
  EDI = (pop32());
  /* 127a5c79 pop esi */
  ESI = (pop32());
  /* 127a5c7a pop ebx */
  EBX = (pop32());
  /* 127a5c7b mov esp, ebp */
  ESP = (EBP);
  /* 127a5c7d pop ebp */
  EBP = (pop32());
  /* 127a5c7e ret  */
  ESPCHK(0x127a5920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x127a5c90 (34 bytes, 13 insns) */
void f_127a5c90(void) {
  FTRACE(0x127a5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5c91 mov ebp, esp */
  EBP = (ESP);
  /* 127a5c93 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5c94 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a5c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a5c9c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5ca0 je 0x127a5cab */
  if (C.zf) goto L_127a5cab;
  /* 127a5ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5ca5 mov dword ptr [0x127cea84], ecx */
  w32((uint32_t)(0x127cea84), (ECX));
L_127a5cab:;
  /* 127a5cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5cae mov esp, ebp */
  ESP = (EBP);
  /* 127a5cb0 pop ebp */
  EBP = (pop32());
  /* 127a5cb1 ret  */
  ESPCHK(0x127a5c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x127a5cc0 (103 bytes, 38 insns) */
void f_127a5cc0(void) {
  FTRACE(0x127a5cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5cc1 mov ebp, esp */
  EBP = (ESP);
  /* 127a5cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5cc4 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a5cc9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127a5ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5cce jne 0x127a5cd2 */
  if (!C.zf) goto L_127a5cd2;
  /* 127a5cd0 jmp 0x127a5d23 */
  goto L_127a5d23;
L_127a5cd2:;
  /* 127a5cd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5cd4 call 0x127a8180 */
  push32(0x127a5cd9u); f_127a8180();
  /* 127a5cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5cdc mov ecx, dword ptr [0x127d0564] */
  ECX = (r32((uint32_t)(0x127d0564)));
  /* 127a5ce2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a5ce5 jmp 0x127a5cef */
  goto L_127a5cef;
L_127a5ce7:;
  /* 127a5ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5cea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a5cec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a5cef:;
  /* 127a5cef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5cf3 je 0x127a5d19 */
  if (C.zf) goto L_127a5d19;
  /* 127a5cf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5cf8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a5cfb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a5d01 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5d04 jne 0x127a5d17 */
  if (!C.zf) goto L_127a5d17;
  /* 127a5d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5d09 push eax */
  push32((uint32_t)(EAX));
  /* 127a5d0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5d0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5d10 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5d11 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x127a5d14u);
  /* 127a5d14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a5d17:;
  /* 127a5d17 jmp 0x127a5ce7 */
  goto L_127a5ce7;
L_127a5d19:;
  /* 127a5d19 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5d1b call 0x127a8220 */
  push32(0x127a5d20u); f_127a8220();
  /* 127a5d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a5d23:;
  /* 127a5d23 mov esp, ebp */
  ESP = (EBP);
  /* 127a5d25 pop ebp */
  EBP = (pop32());
  /* 127a5d26 ret  */
  ESPCHK(0x127a5cc0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x127a5d30 (75 bytes, 28 insns) */
void f_127a5d30(void) {
  FTRACE(0x127a5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5d31 mov ebp, esp */
  EBP = (ESP);
  /* 127a5d33 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5d34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5d38 je 0x127a5d6d */
  if (C.zf) goto L_127a5d6d;
  /* 127a5d3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5d3d push eax */
  push32((uint32_t)(EAX));
  /* 127a5d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5d41 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5d42 call dword ptr [0x127d3240] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3240))), 0x127a5d48u);
  /* 127a5d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5d4a jne 0x127a5d6d */
  if (!C.zf) goto L_127a5d6d;
  /* 127a5d4c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5d50 je 0x127a5d64 */
  if (C.zf) goto L_127a5d64;
  /* 127a5d52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5d55 push edx */
  push32((uint32_t)(EDX));
  /* 127a5d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5d59 push eax */
  push32((uint32_t)(EAX));
  /* 127a5d5a call dword ptr [0x127d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f4))), 0x127a5d60u);
  /* 127a5d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5d62 jne 0x127a5d6d */
  if (!C.zf) goto L_127a5d6d;
L_127a5d64:;
  /* 127a5d64 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127a5d6b jmp 0x127a5d74 */
  goto L_127a5d74;
L_127a5d6d:;
  /* 127a5d6d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a5d74:;
  /* 127a5d74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5d77 mov esp, ebp */
  ESP = (EBP);
  /* 127a5d79 pop ebp */
  EBP = (pop32());
  /* 127a5d7a ret  */
  ESPCHK(0x127a5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d80 @ 0x127a5d80 (134 bytes, 50 insns) */
void f_127a5d80(void) {
  FTRACE(0x127a5d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5d80 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5d81 mov ebp, esp */
  EBP = (ESP);
  /* 127a5d83 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5d84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5d88 jne 0x127a5d8e */
  if (!C.zf) goto L_127a5d8e;
  /* 127a5d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5d8c jmp 0x127a5e02 */
  goto L_127a5e02;
L_127a5d8e:;
  /* 127a5d8e push 1 */
  push32((uint32_t)(0x1u));
  /* 127a5d90 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127a5d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5d95 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5d98 push eax */
  push32((uint32_t)(EAX));
  /* 127a5d99 call 0x127a5d30 */
  push32(0x127a5d9eu); f_127a5d30();
  /* 127a5d9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5da3 jne 0x127a5da9 */
  if (!C.zf) goto L_127a5da9;
  /* 127a5da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5da7 jmp 0x127a5e02 */
  goto L_127a5e02;
L_127a5da9:;
  /* 127a5da9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5dac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5daf push ecx */
  push32((uint32_t)(ECX));
  /* 127a5db0 call 0x127a8a80 */
  push32(0x127a5db5u); f_127a8a80();
  /* 127a5db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5db8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a5dbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5dbf je 0x127a5dd6 */
  if (C.zf) goto L_127a5dd6;
  /* 127a5dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5dc4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5dc7 push edx */
  push32((uint32_t)(EDX));
  /* 127a5dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5dcb push eax */
  push32((uint32_t)(EAX));
  /* 127a5dcc call 0x127a8ae0 */
  push32(0x127a5dd1u); f_127a8ae0();
  /* 127a5dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5dd4 jmp 0x127a5e02 */
  goto L_127a5e02;
L_127a5dd6:;
  /* 127a5dd6 mov ecx, dword ptr [0x127d0518] */
  ECX = (r32((uint32_t)(0x127d0518)));
  /* 127a5ddc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127a5de2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a5de4 je 0x127a5ded */
  if (C.zf) goto L_127a5ded;
  /* 127a5de6 mov eax, 1 */
  EAX = (0x1u);
  /* 127a5deb jmp 0x127a5e02 */
  goto L_127a5e02;
L_127a5ded:;
  /* 127a5ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5df0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5df3 push edx */
  push32((uint32_t)(EDX));
  /* 127a5df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5df6 mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a5dfb push eax */
  push32((uint32_t)(EAX));
  /* 127a5dfc call dword ptr [0x127d32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f8))), 0x127a5e02u);
L_127a5e02:;
  /* 127a5e02 mov esp, ebp */
  ESP = (EBP);
  /* 127a5e04 pop ebp */
  EBP = (pop32());
  /* 127a5e05 ret  */
  ESPCHK(0x127a5d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x127a5e10 (227 bytes, 80 insns) */
void f_127a5e10(void) {
  FTRACE(0x127a5e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5e10 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5e11 mov ebp, esp */
  EBP = (ESP);
  /* 127a5e13 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5e17 push eax */
  push32((uint32_t)(EAX));
  /* 127a5e18 call 0x127a5d80 */
  push32(0x127a5e1du); f_127a5d80();
  /* 127a5e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5e20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5e22 jne 0x127a5e2b */
  if (!C.zf) goto L_127a5e2b;
  /* 127a5e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5e26 jmp 0x127a5eef */
  goto L_127a5eef;
L_127a5e2b:;
  /* 127a5e2b push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5e2d call 0x127a8180 */
  push32(0x127a5e32u); f_127a8180();
  /* 127a5e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5e38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a5e3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5e44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5e49 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e4c je 0x127a5e70 */
  if (C.zf) goto L_127a5e70;
  /* 127a5e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e51 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e55 je 0x127a5e70 */
  if (C.zf) goto L_127a5e70;
  /* 127a5e57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5e5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5e62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e65 je 0x127a5e70 */
  if (C.zf) goto L_127a5e70;
  /* 127a5e67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e6a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e6e jne 0x127a5ee3 */
  if (!C.zf) goto L_127a5ee3;
L_127a5e70:;
  /* 127a5e70 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a5e72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a5e75 push edx */
  push32((uint32_t)(EDX));
  /* 127a5e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5e79 push eax */
  push32((uint32_t)(EAX));
  /* 127a5e7a call 0x127a5d30 */
  push32(0x127a5e7fu); f_127a5d30();
  /* 127a5e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5e84 je 0x127a5ee3 */
  if (C.zf) goto L_127a5ee3;
  /* 127a5e86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e89 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a5e8c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e8f jne 0x127a5ee3 */
  if (!C.zf) goto L_127a5ee3;
  /* 127a5e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5e94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127a5e97 cmp ecx, dword ptr [0x127cea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5e9d jg 0x127a5ee3 */
  if ((!C.zf&&C.sf==C.of)) goto L_127a5ee3;
  /* 127a5e9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5ea3 je 0x127a5eb0 */
  if (C.zf) goto L_127a5eb0;
  /* 127a5ea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a5ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5eab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127a5eae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a5eb0:;
  /* 127a5eb0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5eb4 je 0x127a5ec1 */
  if (C.zf) goto L_127a5ec1;
  /* 127a5eb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a5eb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5ebc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a5ebf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a5ec1:;
  /* 127a5ec1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5ec5 je 0x127a5ed2 */
  if (C.zf) goto L_127a5ed2;
  /* 127a5ec7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a5eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5ecd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127a5ed0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a5ed2:;
  /* 127a5ed2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5ed4 call 0x127a8220 */
  push32(0x127a5ed9u); f_127a8220();
  /* 127a5ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5edc mov eax, 1 */
  EAX = (0x1u);
  /* 127a5ee1 jmp 0x127a5eef */
  goto L_127a5eef;
L_127a5ee3:;
  /* 127a5ee3 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5ee5 call 0x127a8220 */
  push32(0x127a5eeau); f_127a8220();
  /* 127a5eea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5eed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a5eef:;
  /* 127a5eef mov esp, ebp */
  ESP = (EBP);
  /* 127a5ef1 pop ebp */
  EBP = (pop32());
  /* 127a5ef2 ret  */
  ESPCHK(0x127a5e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x127a5f00 (28 bytes, 11 insns) */
void f_127a5f00(void) {
  FTRACE(0x127a5f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5f00 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5f01 mov ebp, esp */
  EBP = (ESP);
  /* 127a5f03 push ecx */
  push32((uint32_t)(ECX));
  /* 127a5f04 mov eax, dword ptr [0x127d1ed8] */
  EAX = (r32((uint32_t)(0x127d1ed8)));
  /* 127a5f09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a5f0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5f0f mov dword ptr [0x127d1ed8], ecx */
  w32((uint32_t)(0x127d1ed8), (ECX));
  /* 127a5f15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5f18 mov esp, ebp */
  ESP = (EBP);
  /* 127a5f1a pop ebp */
  EBP = (pop32());
  /* 127a5f1b ret  */
  ESPCHK(0x127a5f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x127a5f20 (362 bytes, 116 insns) */
void f_127a5f20(void) {
  FTRACE(0x127a5f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a5f20 push ebp */
  push32((uint32_t)(EBP));
  /* 127a5f21 mov ebp, esp */
  EBP = (ESP);
  /* 127a5f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a5f26 push ebx */
  push32((uint32_t)(EBX));
  /* 127a5f27 push esi */
  push32((uint32_t)(ESI));
  /* 127a5f28 push edi */
  push32((uint32_t)(EDI));
  /* 127a5f29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5f2d jne 0x127a5f5a */
  if (!C.zf) goto L_127a5f5a;
L_127a5f2f:;
  /* 127a5f2f push 0x127cb9c0 */
  push32((uint32_t)(0x127cb9c0u));
  /* 127a5f34 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a5f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a5f41 call 0x127a3840 */
  push32(0x127a5f46u); f_127a3840();
  /* 127a5f46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5f49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5f4c jne 0x127a5f4f */
  if (!C.zf) goto L_127a5f4f;
  /* 127a5f4e int3  */
  x86_unimpl("int3 @ 0x127a5f4e");
L_127a5f4f:;
  /* 127a5f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a5f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5f53 jne 0x127a5f2f */
  if (!C.zf) goto L_127a5f2f;
  /* 127a5f55 jmp 0x127a6083 */
  goto L_127a6083;
L_127a5f5a:;
  /* 127a5f5a push 9 */
  push32((uint32_t)(0x9u));
  /* 127a5f5c call 0x127a8180 */
  push32(0x127a5f61u); f_127a8180();
  /* 127a5f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5f67 mov edx, dword ptr [0x127d0564] */
  EDX = (r32((uint32_t)(0x127d0564)));
  /* 127a5f6d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127a5f6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a5f76 jmp 0x127a5f81 */
  goto L_127a5f81;
L_127a5f78:;
  /* 127a5f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5f7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5f7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a5f81:;
  /* 127a5f81 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5f85 jge 0x127a5fa5 */
  if ((C.sf==C.of)) goto L_127a5fa5;
  /* 127a5f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5f8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5f8d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 127a5f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a5f98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5f9b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 127a5fa3 jmp 0x127a5f78 */
  goto L_127a5f78;
L_127a5fa5:;
  /* 127a5fa5 mov edx, dword ptr [0x127d0564] */
  EDX = (r32((uint32_t)(0x127d0564)));
  /* 127a5fab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127a5fae jmp 0x127a5fb8 */
  goto L_127a5fb8;
L_127a5fb0:;
  /* 127a5fb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5fb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a5fb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127a5fb8:;
  /* 127a5fb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5fbc je 0x127a6061 */
  if (C.zf) goto L_127a6061;
  /* 127a5fc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5fc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a5fc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a5fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a5fcf jl 0x127a6037 */
  if ((C.sf!=C.of)) goto L_127a6037;
  /* 127a5fd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5fd4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a5fd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a5fdd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a5fe0 jge 0x127a6037 */
  if ((C.sf==C.of)) goto L_127a6037;
  /* 127a5fe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5fe5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a5fe8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a5fee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a5ff1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 127a5ff5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a5ff8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a5ffb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a5ffe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a6004 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6007 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 127a600b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a600e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a6011 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a6016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6019 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 127a601d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6020 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6026 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a6029 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a602e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6031 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 127a6035 jmp 0x127a605c */
  goto L_127a605c;
L_127a6037:;
  /* 127a6037 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a603a push edx */
  push32((uint32_t)(EDX));
  /* 127a603b push 0x127cb99c */
  push32((uint32_t)(0x127cb99cu));
  /* 127a6040 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6042 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6044 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6046 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6048 call 0x127a3840 */
  push32(0x127a604du); f_127a3840();
  /* 127a604d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6053 jne 0x127a6056 */
  if (!C.zf) goto L_127a6056;
  /* 127a6055 int3  */
  x86_unimpl("int3 @ 0x127a6055");
L_127a6056:;
  /* 127a6056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a605a jne 0x127a6037 */
  if (!C.zf) goto L_127a6037;
L_127a605c:;
  /* 127a605c jmp 0x127a5fb0 */
  goto L_127a5fb0;
L_127a6061:;
  /* 127a6061 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6064 mov edx, dword ptr [0x127d056c] */
  EDX = (r32((uint32_t)(0x127d056c)));
  /* 127a606a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 127a606d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6070 mov ecx, dword ptr [0x127d0560] */
  ECX = (r32((uint32_t)(0x127d0560)));
  /* 127a6076 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 127a6079 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a607b call 0x127a8220 */
  push32(0x127a6080u); f_127a8220();
  /* 127a6080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a6083:;
  /* 127a6083 pop edi */
  EDI = (pop32());
  /* 127a6084 pop esi */
  ESI = (pop32());
  /* 127a6085 pop ebx */
  EBX = (pop32());
  /* 127a6086 mov esp, ebp */
  ESP = (EBP);
  /* 127a6088 pop ebp */
  EBP = (pop32());
  /* 127a6089 ret  */
  ESPCHK(0x127a5f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x127a6090 (291 bytes, 95 insns) */
void f_127a6090(void) {
  FTRACE(0x127a6090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6090 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6091 mov ebp, esp */
  EBP = (ESP);
  /* 127a6093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6096 push ebx */
  push32((uint32_t)(EBX));
  /* 127a6097 push esi */
  push32((uint32_t)(ESI));
  /* 127a6098 push edi */
  push32((uint32_t)(EDI));
  /* 127a6099 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a60a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a60a4 je 0x127a60b2 */
  if (C.zf) goto L_127a60b2;
  /* 127a60a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a60aa je 0x127a60b2 */
  if (C.zf) goto L_127a60b2;
  /* 127a60ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a60b0 jne 0x127a60e0 */
  if (!C.zf) goto L_127a60e0;
L_127a60b2:;
  /* 127a60b2 push 0x127cb9e8 */
  push32((uint32_t)(0x127cb9e8u));
  /* 127a60b7 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a60bc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a60be push 0 */
  push32((uint32_t)(0x0u));
  /* 127a60c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a60c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a60c4 call 0x127a3840 */
  push32(0x127a60c9u); f_127a3840();
  /* 127a60c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a60cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a60cf jne 0x127a60d2 */
  if (!C.zf) goto L_127a60d2;
  /* 127a60d1 int3  */
  x86_unimpl("int3 @ 0x127a60d1");
L_127a60d2:;
  /* 127a60d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a60d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a60d6 jne 0x127a60b2 */
  if (!C.zf) goto L_127a60b2;
  /* 127a60d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a60db jmp 0x127a61ac */
  goto L_127a61ac;
L_127a60e0:;
  /* 127a60e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a60e7 jmp 0x127a60f2 */
  goto L_127a60f2;
L_127a60e9:;
  /* 127a60e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a60ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a60ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a60f2:;
  /* 127a60f2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a60f6 jge 0x127a617c */
  if ((C.sf==C.of)) goto L_127a617c;
  /* 127a60fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a60ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6105 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6108 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 127a610c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6116 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 127a611a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a611d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6120 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6123 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6126 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 127a612a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a612e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6134 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 127a6138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a613b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a613e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6143 jne 0x127a6152 */
  if (!C.zf) goto L_127a6152;
  /* 127a6145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a614b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6150 je 0x127a6177 */
  if (C.zf) goto L_127a6177;
L_127a6152:;
  /* 127a6152 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6156 je 0x127a6177 */
  if (C.zf) goto L_127a6177;
  /* 127a6158 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a615c jne 0x127a6170 */
  if (!C.zf) goto L_127a6170;
  /* 127a615e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6162 jne 0x127a6177 */
  if (!C.zf) goto L_127a6177;
  /* 127a6164 mov eax, dword ptr [0x127cea84] */
  EAX = (r32((uint32_t)(0x127cea84)));
  /* 127a6169 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 127a616c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a616e je 0x127a6177 */
  if (C.zf) goto L_127a6177;
L_127a6170:;
  /* 127a6170 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_127a6177:;
  /* 127a6177 jmp 0x127a60e9 */
  goto L_127a60e9;
L_127a617c:;
  /* 127a617c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a617f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6182 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 127a6185 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6188 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a618b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 127a618e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6191 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6194 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 127a6197 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a619a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a619d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 127a61a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a61a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a61a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127a61ac:;
  /* 127a61ac pop edi */
  EDI = (pop32());
  /* 127a61ad pop esi */
  ESI = (pop32());
  /* 127a61ae pop ebx */
  EBX = (pop32());
  /* 127a61af mov esp, ebp */
  ESP = (EBP);
  /* 127a61b1 pop ebp */
  EBP = (pop32());
  /* 127a61b2 ret  */
  ESPCHK(0x127a6090u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x127a61c0 (697 bytes, 253 insns) */
void f_127a61c0(void) {
  FTRACE(0x127a61c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a61c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a61c1 mov ebp, esp */
  EBP = (ESP);
  /* 127a61c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a61c6 push ebx */
  push32((uint32_t)(EBX));
  /* 127a61c7 push esi */
  push32((uint32_t)(ESI));
  /* 127a61c8 push edi */
  push32((uint32_t)(EDI));
  /* 127a61c9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a61d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a61d2 call 0x127a8180 */
  push32(0x127a61d7u); f_127a8180();
  /* 127a61d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a61da:;
  /* 127a61da push 0x127cbae0 */
  push32((uint32_t)(0x127cbae0u));
  /* 127a61df push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a61e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a61e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a61e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a61ea push 0 */
  push32((uint32_t)(0x0u));
  /* 127a61ec call 0x127a3840 */
  push32(0x127a61f1u); f_127a3840();
  /* 127a61f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a61f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a61f7 jne 0x127a61fa */
  if (!C.zf) goto L_127a61fa;
  /* 127a61f9 int3  */
  x86_unimpl("int3 @ 0x127a61f9");
L_127a61fa:;
  /* 127a61fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a61fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a61fe jne 0x127a61da */
  if (!C.zf) goto L_127a61da;
  /* 127a6200 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6204 je 0x127a620e */
  if (C.zf) goto L_127a620e;
  /* 127a6206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6209 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a620b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127a620e:;
  /* 127a620e mov eax, dword ptr [0x127d0564] */
  EAX = (r32((uint32_t)(0x127d0564)));
  /* 127a6213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a6216 jmp 0x127a6220 */
  goto L_127a6220;
L_127a6218:;
  /* 127a6218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a621b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a621d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a6220:;
  /* 127a6220 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6224 je 0x127a6442 */
  if (C.zf) goto L_127a6442;
  /* 127a622a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a622d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6230 je 0x127a6442 */
  if (C.zf) goto L_127a6442;
  /* 127a6236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6239 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a623c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a6242 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6245 je 0x127a6274 */
  if (C.zf) goto L_127a6274;
  /* 127a6247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a624a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127a624d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a6253 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6255 je 0x127a6274 */
  if (C.zf) goto L_127a6274;
  /* 127a6257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a625a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a625d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a6262 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6265 jne 0x127a6279 */
  if (!C.zf) goto L_127a6279;
  /* 127a6267 mov ecx, dword ptr [0x127cea84] */
  ECX = (r32((uint32_t)(0x127cea84)));
  /* 127a626d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 127a6270 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6272 jne 0x127a6279 */
  if (!C.zf) goto L_127a6279;
L_127a6274:;
  /* 127a6274 jmp 0x127a643d */
  goto L_127a643d;
L_127a6279:;
  /* 127a6279 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a627c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6280 je 0x127a62f2 */
  if (C.zf) goto L_127a62f2;
  /* 127a6282 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6284 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a6286 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6289 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a628c push ecx */
  push32((uint32_t)(ECX));
  /* 127a628d call 0x127a5d30 */
  push32(0x127a6292u); f_127a5d30();
  /* 127a6292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6297 jne 0x127a62c3 */
  if (!C.zf) goto L_127a62c3;
L_127a6299:;
  /* 127a6299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a629c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127a629f push eax */
  push32((uint32_t)(EAX));
  /* 127a62a0 push 0x127cbacc */
  push32((uint32_t)(0x127cbaccu));
  /* 127a62a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62ab push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62ad call 0x127a3840 */
  push32(0x127a62b2u); f_127a3840();
  /* 127a62b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a62b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a62b8 jne 0x127a62bb */
  if (!C.zf) goto L_127a62bb;
  /* 127a62ba int3  */
  x86_unimpl("int3 @ 0x127a62ba");
L_127a62bb:;
  /* 127a62bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a62bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a62bf jne 0x127a6299 */
  if (!C.zf) goto L_127a6299;
  /* 127a62c1 jmp 0x127a62f2 */
  goto L_127a62f2;
L_127a62c3:;
  /* 127a62c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a62c6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127a62c9 push eax */
  push32((uint32_t)(EAX));
  /* 127a62ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a62cd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a62d0 push edx */
  push32((uint32_t)(EDX));
  /* 127a62d1 push 0x127cbac0 */
  push32((uint32_t)(0x127cbac0u));
  /* 127a62d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62da push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62dc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a62de call 0x127a3840 */
  push32(0x127a62e3u); f_127a3840();
  /* 127a62e3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a62e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a62e9 jne 0x127a62ec */
  if (!C.zf) goto L_127a62ec;
  /* 127a62eb int3  */
  x86_unimpl("int3 @ 0x127a62eb");
L_127a62ec:;
  /* 127a62ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a62ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a62f0 jne 0x127a62c3 */
  if (!C.zf) goto L_127a62c3;
L_127a62f2:;
  /* 127a62f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a62f5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127a62f8 push edx */
  push32((uint32_t)(EDX));
  /* 127a62f9 push 0x127cbab8 */
  push32((uint32_t)(0x127cbab8u));
  /* 127a62fe push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6300 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6302 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6304 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6306 call 0x127a3840 */
  push32(0x127a630bu); f_127a3840();
  /* 127a630b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a630e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6311 jne 0x127a6314 */
  if (!C.zf) goto L_127a6314;
  /* 127a6313 int3  */
  x86_unimpl("int3 @ 0x127a6313");
L_127a6314:;
  /* 127a6314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6318 jne 0x127a62f2 */
  if (!C.zf) goto L_127a62f2;
  /* 127a631a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a631d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a6320 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a6326 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6329 jne 0x127a639c */
  if (!C.zf) goto L_127a639c;
L_127a632b:;
  /* 127a632b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a632e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a6331 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6335 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a6338 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127a633b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a6340 push eax */
  push32((uint32_t)(EAX));
  /* 127a6341 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6344 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6347 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6348 push 0x127cba84 */
  push32((uint32_t)(0x127cba84u));
  /* 127a634d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a634f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6351 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6353 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6355 call 0x127a3840 */
  push32(0x127a635au); f_127a3840();
  /* 127a635a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a635d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6360 jne 0x127a6363 */
  if (!C.zf) goto L_127a6363;
  /* 127a6362 int3  */
  x86_unimpl("int3 @ 0x127a6362");
L_127a6363:;
  /* 127a6363 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6367 jne 0x127a632b */
  if (!C.zf) goto L_127a632b;
  /* 127a6369 cmp dword ptr [0x127d1ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6370 je 0x127a638b */
  if (C.zf) goto L_127a638b;
  /* 127a6372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6375 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a6378 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6379 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a637c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a637f push edx */
  push32((uint32_t)(EDX));
  /* 127a6380 call dword ptr [0x127d1ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d1ed8))), 0x127a6386u);
  /* 127a6386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6389 jmp 0x127a6397 */
  goto L_127a6397;
L_127a638b:;
  /* 127a638b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a638e push eax */
  push32((uint32_t)(EAX));
  /* 127a638f call 0x127a6480 */
  push32(0x127a6394u); f_127a6480();
  /* 127a6394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a6397:;
  /* 127a6397 jmp 0x127a643d */
  goto L_127a643d;
L_127a639c:;
  /* 127a639c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a639f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a63a3 jne 0x127a63e2 */
  if (!C.zf) goto L_127a63e2;
L_127a63a5:;
  /* 127a63a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63a8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a63ab push eax */
  push32((uint32_t)(EAX));
  /* 127a63ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63af add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a63b2 push ecx */
  push32((uint32_t)(ECX));
  /* 127a63b3 push 0x127cba5c */
  push32((uint32_t)(0x127cba5cu));
  /* 127a63b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a63ba push 0 */
  push32((uint32_t)(0x0u));
  /* 127a63bc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a63be push 0 */
  push32((uint32_t)(0x0u));
  /* 127a63c0 call 0x127a3840 */
  push32(0x127a63c5u); f_127a3840();
  /* 127a63c5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a63c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a63cb jne 0x127a63ce */
  if (!C.zf) goto L_127a63ce;
  /* 127a63cd int3  */
  x86_unimpl("int3 @ 0x127a63cd");
L_127a63ce:;
  /* 127a63ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a63d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a63d2 jne 0x127a63a5 */
  if (!C.zf) goto L_127a63a5;
  /* 127a63d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63d7 push eax */
  push32((uint32_t)(EAX));
  /* 127a63d8 call 0x127a6480 */
  push32(0x127a63ddu); f_127a6480();
  /* 127a63dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a63e0 jmp 0x127a643d */
  goto L_127a643d;
L_127a63e2:;
  /* 127a63e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63e5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127a63e8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a63ee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a63f1 jne 0x127a643d */
  if (!C.zf) goto L_127a643d;
L_127a63f3:;
  /* 127a63f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a63f9 push ecx */
  push32((uint32_t)(ECX));
  /* 127a63fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a63fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127a6400 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127a6403 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a6408 push eax */
  push32((uint32_t)(EAX));
  /* 127a6409 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a640c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a640f push ecx */
  push32((uint32_t)(ECX));
  /* 127a6410 push 0x127cba28 */
  push32((uint32_t)(0x127cba28u));
  /* 127a6415 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6417 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6419 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a641b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a641d call 0x127a3840 */
  push32(0x127a6422u); f_127a3840();
  /* 127a6422 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6425 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6428 jne 0x127a642b */
  if (!C.zf) goto L_127a642b;
  /* 127a642a int3  */
  x86_unimpl("int3 @ 0x127a642a");
L_127a642b:;
  /* 127a642b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a642d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a642f jne 0x127a63f3 */
  if (!C.zf) goto L_127a63f3;
  /* 127a6431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6434 push eax */
  push32((uint32_t)(EAX));
  /* 127a6435 call 0x127a6480 */
  push32(0x127a643au); f_127a6480();
  /* 127a643a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a643d:;
  /* 127a643d jmp 0x127a6218 */
  goto L_127a6218;
L_127a6442:;
  /* 127a6442 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a6444 call 0x127a8220 */
  push32(0x127a6449u); f_127a8220();
  /* 127a6449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a644c:;
  /* 127a644c push 0x127cba10 */
  push32((uint32_t)(0x127cba10u));
  /* 127a6451 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a6456 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6458 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a645a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a645c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a645e call 0x127a3840 */
  push32(0x127a6463u); f_127a3840();
  /* 127a6463 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6466 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6469 jne 0x127a646c */
  if (!C.zf) goto L_127a646c;
  /* 127a646b int3  */
  x86_unimpl("int3 @ 0x127a646b");
L_127a646c:;
  /* 127a646c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a646e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6470 jne 0x127a644c */
  if (!C.zf) goto L_127a644c;
  /* 127a6472 pop edi */
  EDI = (pop32());
  /* 127a6473 pop esi */
  ESI = (pop32());
  /* 127a6474 pop ebx */
  EBX = (pop32());
  /* 127a6475 mov esp, ebp */
  ESP = (EBP);
  /* 127a6477 pop ebp */
  EBP = (pop32());
  /* 127a6478 ret  */
  ESPCHK(0x127a61c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x127a6480 (276 bytes, 89 insns) */
void f_127a6480(void) {
  FTRACE(0x127a6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6480 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6481 mov ebp, esp */
  EBP = (ESP);
  /* 127a6483 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6486 push ebx */
  push32((uint32_t)(EBX));
  /* 127a6487 push esi */
  push32((uint32_t)(ESI));
  /* 127a6488 push edi */
  push32((uint32_t)(EDI));
  /* 127a6489 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 127a6490 jmp 0x127a649b */
  goto L_127a649b;
L_127a6492:;
  /* 127a6492 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a6495 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6498 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_127a649b:;
  /* 127a649b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a649e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a64a2 jge 0x127a64af */
  if ((C.sf==C.of)) goto L_127a64af;
  /* 127a64a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a64a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a64aa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 127a64ad jmp 0x127a64b6 */
  goto L_127a64b6;
L_127a64af:;
  /* 127a64af mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_127a64b6:;
  /* 127a64b6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a64b9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a64bc jge 0x127a655c */
  if ((C.sf==C.of)) goto L_127a655c;
  /* 127a64c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a64c5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a64c8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 127a64cb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 127a64ce cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a64d5 jle 0x127a64f3 */
  if ((C.zf||C.sf!=C.of)) goto L_127a64f3;
  /* 127a64d7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 127a64dc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a64df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a64e5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a64e6 call 0x127aa790 */
  push32(0x127a64ebu); f_127aa790();
  /* 127a64eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a64ee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 127a64f1 jmp 0x127a6510 */
  goto L_127a6510;
L_127a64f3:;
  /* 127a64f3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a64f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a64fc mov eax, dword ptr [0x127cec98] */
  EAX = (r32((uint32_t)(0x127cec98)));
  /* 127a6501 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a6503 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127a6507 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 127a650d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_127a6510:;
  /* 127a6510 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6514 je 0x127a6524 */
  if (C.zf) goto L_127a6524;
  /* 127a6516 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a6519 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a651f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 127a6522 jmp 0x127a652b */
  goto L_127a652b;
L_127a6524:;
  /* 127a6524 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_127a652b:;
  /* 127a652b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a652e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 127a6531 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 127a6535 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127a6538 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a653e push edx */
  push32((uint32_t)(EDX));
  /* 127a653f push 0x127cbb04 */
  push32((uint32_t)(0x127cbb04u));
  /* 127a6544 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a6547 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a654a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 127a654e push ecx */
  push32((uint32_t)(ECX));
  /* 127a654f call 0x127aa690 */
  push32(0x127a6554u); f_127aa690();
  /* 127a6554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6557 jmp 0x127a6492 */
  goto L_127a6492;
L_127a655c:;
  /* 127a655c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127a655f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_127a6564:;
  /* 127a6564 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 127a6567 push eax */
  push32((uint32_t)(EAX));
  /* 127a6568 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 127a656b push ecx */
  push32((uint32_t)(ECX));
  /* 127a656c push 0x127cbaf4 */
  push32((uint32_t)(0x127cbaf4u));
  /* 127a6571 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6573 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6575 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6577 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6579 call 0x127a3840 */
  push32(0x127a657eu); f_127a3840();
  /* 127a657e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6581 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6584 jne 0x127a6587 */
  if (!C.zf) goto L_127a6587;
  /* 127a6586 int3  */
  x86_unimpl("int3 @ 0x127a6586");
L_127a6587:;
  /* 127a6587 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6589 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a658b jne 0x127a6564 */
  if (!C.zf) goto L_127a6564;
  /* 127a658d pop edi */
  EDI = (pop32());
  /* 127a658e pop esi */
  ESI = (pop32());
  /* 127a658f pop ebx */
  EBX = (pop32());
  /* 127a6590 mov esp, ebp */
  ESP = (EBP);
  /* 127a6592 pop ebp */
  EBP = (pop32());
  /* 127a6593 ret  */
  ESPCHK(0x127a6480u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x127a65a0 (116 bytes, 46 insns) */
void f_127a65a0(void) {
  FTRACE(0x127a65a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a65a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a65a1 mov ebp, esp */
  EBP = (ESP);
  /* 127a65a3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a65a6 push ebx */
  push32((uint32_t)(EBX));
  /* 127a65a7 push esi */
  push32((uint32_t)(ESI));
  /* 127a65a8 push edi */
  push32((uint32_t)(EDI));
  /* 127a65a9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 127a65ac push eax */
  push32((uint32_t)(EAX));
  /* 127a65ad call 0x127a5f20 */
  push32(0x127a65b2u); f_127a5f20();
  /* 127a65b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a65b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a65b9 jne 0x127a65d4 */
  if (!C.zf) goto L_127a65d4;
  /* 127a65bb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a65bf jne 0x127a65d4 */
  if (!C.zf) goto L_127a65d4;
  /* 127a65c1 mov ecx, dword ptr [0x127cea84] */
  ECX = (r32((uint32_t)(0x127cea84)));
  /* 127a65c7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 127a65ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a65cc je 0x127a660b */
  if (C.zf) goto L_127a660b;
  /* 127a65ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a65d2 je 0x127a660b */
  if (C.zf) goto L_127a660b;
L_127a65d4:;
  /* 127a65d4 push 0x127cbb0c */
  push32((uint32_t)(0x127cbb0cu));
  /* 127a65d9 push 0x127cb4d8 */
  push32((uint32_t)(0x127cb4d8u));
  /* 127a65de push 0 */
  push32((uint32_t)(0x0u));
  /* 127a65e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a65e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a65e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a65e6 call 0x127a3840 */
  push32(0x127a65ebu); f_127a3840();
  /* 127a65eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a65ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a65f1 jne 0x127a65f4 */
  if (!C.zf) goto L_127a65f4;
  /* 127a65f3 int3  */
  x86_unimpl("int3 @ 0x127a65f3");
L_127a65f4:;
  /* 127a65f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a65f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a65f8 jne 0x127a65d4 */
  if (!C.zf) goto L_127a65d4;
  /* 127a65fa push 0 */
  push32((uint32_t)(0x0u));
  /* 127a65fc call 0x127a61c0 */
  push32(0x127a6601u); f_127a61c0();
  /* 127a6601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6604 mov eax, 1 */
  EAX = (0x1u);
  /* 127a6609 jmp 0x127a660d */
  goto L_127a660d;
L_127a660b:;
  /* 127a660b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a660d:;
  /* 127a660d pop edi */
  EDI = (pop32());
  /* 127a660e pop esi */
  ESI = (pop32());
  /* 127a660f pop ebx */
  EBX = (pop32());
  /* 127a6610 mov esp, ebp */
  ESP = (EBP);
  /* 127a6612 pop ebp */
  EBP = (pop32());
  /* 127a6613 ret  */
  ESPCHK(0x127a65a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x127a6620 (197 bytes, 79 insns) */
void f_127a6620(void) {
  FTRACE(0x127a6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6620 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6621 mov ebp, esp */
  EBP = (ESP);
  /* 127a6623 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6624 push ebx */
  push32((uint32_t)(EBX));
  /* 127a6625 push esi */
  push32((uint32_t)(ESI));
  /* 127a6626 push edi */
  push32((uint32_t)(EDI));
  /* 127a6627 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a662b jne 0x127a6632 */
  if (!C.zf) goto L_127a6632;
  /* 127a662d jmp 0x127a66de */
  goto L_127a66de;
L_127a6632:;
  /* 127a6632 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a6639 jmp 0x127a6644 */
  goto L_127a6644;
L_127a663b:;
  /* 127a663b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a663e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6641 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a6644:;
  /* 127a6644 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6648 jge 0x127a668e */
  if ((C.sf==C.of)) goto L_127a668e;
L_127a664a:;
  /* 127a664a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a664d mov edx, dword ptr [ecx*4 + 0x127cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cea94)));
  /* 127a6654 push edx */
  push32((uint32_t)(EDX));
  /* 127a6655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6658 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a665b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 127a665f push edx */
  push32((uint32_t)(EDX));
  /* 127a6660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6666 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 127a666a push edx */
  push32((uint32_t)(EDX));
  /* 127a666b push 0x127cbb68 */
  push32((uint32_t)(0x127cbb68u));
  /* 127a6670 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6672 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6674 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6676 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6678 call 0x127a3840 */
  push32(0x127a667du); f_127a3840();
  /* 127a667d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6680 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6683 jne 0x127a6686 */
  if (!C.zf) goto L_127a6686;
  /* 127a6685 int3  */
  x86_unimpl("int3 @ 0x127a6685");
L_127a6686:;
  /* 127a6686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a668a jne 0x127a664a */
  if (!C.zf) goto L_127a664a;
  /* 127a668c jmp 0x127a663b */
  goto L_127a663b;
L_127a668e:;
  /* 127a668e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a6691 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 127a6694 push edx */
  push32((uint32_t)(EDX));
  /* 127a6695 push 0x127cbb44 */
  push32((uint32_t)(0x127cbb44u));
  /* 127a669a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a669c push 0 */
  push32((uint32_t)(0x0u));
  /* 127a669e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66a2 call 0x127a3840 */
  push32(0x127a66a7u); f_127a3840();
  /* 127a66a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a66aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a66ad jne 0x127a66b0 */
  if (!C.zf) goto L_127a66b0;
  /* 127a66af int3  */
  x86_unimpl("int3 @ 0x127a66af");
L_127a66b0:;
  /* 127a66b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a66b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a66b4 jne 0x127a668e */
  if (!C.zf) goto L_127a668e;
L_127a66b6:;
  /* 127a66b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a66b9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 127a66bc push edx */
  push32((uint32_t)(EDX));
  /* 127a66bd push 0x127cbb24 */
  push32((uint32_t)(0x127cbb24u));
  /* 127a66c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a66ca call 0x127a3840 */
  push32(0x127a66cfu); f_127a3840();
  /* 127a66cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a66d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a66d5 jne 0x127a66d8 */
  if (!C.zf) goto L_127a66d8;
  /* 127a66d7 int3  */
  x86_unimpl("int3 @ 0x127a66d7");
L_127a66d8:;
  /* 127a66d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a66da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a66dc jne 0x127a66b6 */
  if (!C.zf) goto L_127a66b6;
L_127a66de:;
  /* 127a66de pop edi */
  EDI = (pop32());
  /* 127a66df pop esi */
  ESI = (pop32());
  /* 127a66e0 pop ebx */
  EBX = (pop32());
  /* 127a66e1 mov esp, ebp */
  ESP = (EBP);
  /* 127a66e3 pop ebp */
  EBP = (pop32());
  /* 127a66e4 ret  */
  ESPCHK(0x127a6620u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x127a66f0 (329 bytes, 102 insns) */
void f_127a66f0(void) {
  FTRACE(0x127a66f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a66f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a66f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a66f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a66f6 cmp dword ptr [0x127d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a66fd jne 0x127a6704 */
  if (!C.zf) goto L_127a6704;
  /* 127a66ff call 0x127ab030 */
  push32(0x127a6704u); f_127ab030();
L_127a6704:;
  /* 127a6704 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a670b mov eax, dword ptr [0x127d0500] */
  EAX = (r32((uint32_t)(0x127d0500)));
  /* 127a6710 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a6713:;
  /* 127a6713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6716 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a6719 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a671b je 0x127a6749 */
  if (C.zf) goto L_127a6749;
  /* 127a671d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6720 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6723 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6726 je 0x127a6731 */
  if (C.zf) goto L_127a6731;
  /* 127a6728 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a672b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a672e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127a6731:;
  /* 127a6731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6734 push eax */
  push32((uint32_t)(EAX));
  /* 127a6735 call 0x127a75b0 */
  push32(0x127a673au); f_127a75b0();
  /* 127a673a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a673d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6740 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127a6744 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a6747 jmp 0x127a6713 */
  goto L_127a6713;
L_127a6749:;
  /* 127a6749 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 127a674b push 0x127cbb88 */
  push32((uint32_t)(0x127cbb88u));
  /* 127a6750 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a6752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6755 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 127a675c push ecx */
  push32((uint32_t)(ECX));
  /* 127a675d call 0x127a4780 */
  push32(0x127a6762u); f_127a4780();
  /* 127a6762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6765 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a6768 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a676b mov dword ptr [0x127d0534], edx */
  w32((uint32_t)(0x127d0534), (EDX));
  /* 127a6771 cmp dword ptr [0x127d0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6778 jne 0x127a6784 */
  if (!C.zf) goto L_127a6784;
  /* 127a677a push 9 */
  push32((uint32_t)(0x9u));
  /* 127a677c call 0x127a36f0 */
  push32(0x127a6781u); f_127a36f0();
  /* 127a6781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a6784:;
  /* 127a6784 mov eax, dword ptr [0x127d0500] */
  EAX = (r32((uint32_t)(0x127d0500)));
  /* 127a6789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a678c jmp 0x127a6797 */
  goto L_127a6797;
L_127a678e:;
  /* 127a678e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6791 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6794 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a6797:;
  /* 127a6797 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a679a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a679d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a679f je 0x127a6807 */
  if (C.zf) goto L_127a6807;
  /* 127a67a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a67a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127a67a5 call 0x127a75b0 */
  push32(0x127a67aau); f_127a75b0();
  /* 127a67aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a67ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a67b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a67b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a67b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a67b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a67bc je 0x127a6805 */
  if (C.zf) goto L_127a6805;
  /* 127a67be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 127a67c0 push 0x127cbb88 */
  push32((uint32_t)(0x127cbb88u));
  /* 127a67c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a67c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a67ca push ecx */
  push32((uint32_t)(ECX));
  /* 127a67cb call 0x127a4780 */
  push32(0x127a67d0u); f_127a4780();
  /* 127a67d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a67d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a67d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a67d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a67db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a67de jne 0x127a67ea */
  if (!C.zf) goto L_127a67ea;
  /* 127a67e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a67e2 call 0x127a36f0 */
  push32(0x127a67e7u); f_127a36f0();
  /* 127a67e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a67ea:;
  /* 127a67ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a67ed push ecx */
  push32((uint32_t)(ECX));
  /* 127a67ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a67f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a67f3 push eax */
  push32((uint32_t)(EAX));
  /* 127a67f4 call 0x127a7730 */
  push32(0x127a67f9u); f_127a7730();
  /* 127a67f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a67fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a67ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6802 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127a6805:;
  /* 127a6805 jmp 0x127a678e */
  goto L_127a678e;
L_127a6807:;
  /* 127a6807 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a6809 mov edx, dword ptr [0x127d0500] */
  EDX = (r32((uint32_t)(0x127d0500)));
  /* 127a680f push edx */
  push32((uint32_t)(EDX));
  /* 127a6810 call 0x127a5210 */
  push32(0x127a6815u); f_127a5210();
  /* 127a6815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6818 mov dword ptr [0x127d0500], 0 */
  w32((uint32_t)(0x127d0500), (0x0u));
  /* 127a6822 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6825 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a682b mov dword ptr [0x127d2040], 1 */
  w32((uint32_t)(0x127d2040), (0x1u));
  /* 127a6835 mov esp, ebp */
  ESP = (EBP);
  /* 127a6837 pop ebp */
  EBP = (pop32());
  /* 127a6838 ret  */
  ESPCHK(0x127a66f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x127a6840 (216 bytes, 69 insns) */
void f_127a6840(void) {
  FTRACE(0x127a6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6840 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6841 mov ebp, esp */
  EBP = (ESP);
  /* 127a6843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6846 cmp dword ptr [0x127d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a684d jne 0x127a6854 */
  if (!C.zf) goto L_127a6854;
  /* 127a684f call 0x127ab030 */
  push32(0x127a6854u); f_127ab030();
L_127a6854:;
  /* 127a6854 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 127a6859 push 0x127d0570 */
  push32((uint32_t)(0x127d0570u));
  /* 127a685e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6860 call dword ptr [0x127d32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b4))), 0x127a6866u);
  /* 127a6866 mov dword ptr [0x127d0544], 0x127d0570 */
  w32((uint32_t)(0x127d0544), (0x127d0570u));
  /* 127a6870 mov eax, dword ptr [0x127d206c] */
  EAX = (r32((uint32_t)(0x127d206c)));
  /* 127a6875 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6878 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a687a jne 0x127a6887 */
  if (!C.zf) goto L_127a6887;
  /* 127a687c mov edx, dword ptr [0x127d0544] */
  EDX = (r32((uint32_t)(0x127d0544)));
  /* 127a6882 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127a6885 jmp 0x127a688f */
  goto L_127a688f;
L_127a6887:;
  /* 127a6887 mov eax, dword ptr [0x127d206c] */
  EAX = (r32((uint32_t)(0x127d206c)));
  /* 127a688c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_127a688f:;
  /* 127a688f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6892 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a6895 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 127a6898 push edx */
  push32((uint32_t)(EDX));
  /* 127a6899 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 127a689c push eax */
  push32((uint32_t)(EAX));
  /* 127a689d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a689f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a68a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a68a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127a68a5 call 0x127a6920 */
  push32(0x127a68aau); f_127a6920();
  /* 127a68aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a68ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 127a68b2 push 0x127cbb94 */
  push32((uint32_t)(0x127cbb94u));
  /* 127a68b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a68b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a68bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a68bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 127a68c2 push ecx */
  push32((uint32_t)(ECX));
  /* 127a68c3 call 0x127a4780 */
  push32(0x127a68c8u); f_127a4780();
  /* 127a68c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a68cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a68ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a68d2 jne 0x127a68de */
  if (!C.zf) goto L_127a68de;
  /* 127a68d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a68d6 call 0x127a36f0 */
  push32(0x127a68dbu); f_127a36f0();
  /* 127a68db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a68de:;
  /* 127a68de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 127a68e1 push edx */
  push32((uint32_t)(EDX));
  /* 127a68e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 127a68e5 push eax */
  push32((uint32_t)(EAX));
  /* 127a68e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a68e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a68ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 127a68ef push eax */
  push32((uint32_t)(EAX));
  /* 127a68f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a68f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a68f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a68f7 push edx */
  push32((uint32_t)(EDX));
  /* 127a68f8 call 0x127a6920 */
  push32(0x127a68fdu); f_127a6920();
  /* 127a68fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6900 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6903 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6906 mov dword ptr [0x127d0528], eax */
  w32((uint32_t)(0x127d0528), (EAX));
  /* 127a690b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a690e mov dword ptr [0x127d052c], ecx */
  w32((uint32_t)(0x127d052c), (ECX));
  /* 127a6914 mov esp, ebp */
  ESP = (EBP);
  /* 127a6916 pop ebp */
  EBP = (pop32());
  /* 127a6917 ret  */
  ESPCHK(0x127a6840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x127a6920 (1060 bytes, 360 insns) */
void f_127a6920(void) {
  FTRACE(0x127a6920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6920 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6921 mov ebp, esp */
  EBP = (ESP);
  /* 127a6923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6926 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6929 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a692f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a6932 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 127a6938 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a693b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a693e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6942 je 0x127a6955 */
  if (C.zf) goto L_127a6955;
  /* 127a6944 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6947 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a694a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127a694c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a694f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6952 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_127a6955:;
  /* 127a6955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6958 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a695b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a695e jne 0x127a6a2d */
  if (!C.zf) goto L_127a6a2d;
L_127a6964:;
  /* 127a6964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6967 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a696a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a696d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6970 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6973 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6976 je 0x127a69f2 */
  if (C.zf) goto L_127a69f2;
  /* 127a6978 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a697b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a697e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6980 je 0x127a69f2 */
  if (C.zf) goto L_127a69f2;
  /* 127a6982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6985 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6987 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a6989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a698b mov al, byte ptr [edx + 0x127d1da1] */
  AL = (r8((uint32_t)(EDX + 0x127d1da1)));
  /* 127a6991 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127a6994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6996 je 0x127a69c7 */
  if (C.zf) goto L_127a69c7;
  /* 127a6998 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a699b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a699d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a69a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a69a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a69a9 je 0x127a69c7 */
  if (C.zf) goto L_127a69c7;
  /* 127a69ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a69ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a69b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127a69b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127a69b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a69b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127a69be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a69c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a69c7:;
  /* 127a69c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a69ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a69cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a69d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a69d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a69d8 je 0x127a69ed */
  if (C.zf) goto L_127a69ed;
  /* 127a69da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a69dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a69e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a69e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a69e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a69e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127a69ed:;
  /* 127a69ed jmp 0x127a6964 */
  goto L_127a6964;
L_127a69f2:;
  /* 127a69f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a69f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a69f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a69fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a69fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a69ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6a03 je 0x127a6a14 */
  if (C.zf) goto L_127a6a14;
  /* 127a6a05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a08 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127a6a0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a11 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_127a6a14:;
  /* 127a6a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6a1a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6a1d jne 0x127a6a28 */
  if (!C.zf) goto L_127a6a28;
  /* 127a6a1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a25 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a6a28:;
  /* 127a6a28 jmp 0x127a6afc */
  goto L_127a6afc;
L_127a6a2d:;
  /* 127a6a2d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6a30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a6a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a35 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6a38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a6a3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6a3e je 0x127a6a53 */
  if (C.zf) goto L_127a6a53;
  /* 127a6a40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a6a48 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a6a4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a50 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127a6a53:;
  /* 127a6a53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a6a58 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 127a6a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a6a64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6a67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a6a6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6a6f mov dl, byte ptr [ecx + 0x127d1da1] */
  DL = (r8((uint32_t)(ECX + 0x127d1da1)));
  /* 127a6a75 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127a6a78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6a7a je 0x127a6aab */
  if (C.zf) goto L_127a6aab;
  /* 127a6a7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6a7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a6a81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6a87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a6a89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6a8d je 0x127a6aa2 */
  if (C.zf) goto L_127a6aa2;
  /* 127a6a8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6a95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a6a97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a6a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6a9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6a9f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127a6aa2:;
  /* 127a6aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6aa8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a6aab:;
  /* 127a6aab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6aae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a6ab4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6ab7 je 0x127a6ad7 */
  if (C.zf) goto L_127a6ad7;
  /* 127a6ab9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6abc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a6ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6ac3 je 0x127a6ad7 */
  if (C.zf) goto L_127a6ad7;
  /* 127a6ac5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6ac8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a6ace cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6ad1 jne 0x127a6a2d */
  if (!C.zf) goto L_127a6a2d;
L_127a6ad7:;
  /* 127a6ad7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6ada and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a6ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6ae2 jne 0x127a6aef */
  if (!C.zf) goto L_127a6aef;
  /* 127a6ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6ae7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6aea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a6aed jmp 0x127a6afc */
  goto L_127a6afc;
L_127a6aef:;
  /* 127a6aef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6af3 je 0x127a6afc */
  if (C.zf) goto L_127a6afc;
  /* 127a6af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6af8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_127a6afc:;
  /* 127a6afc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_127a6b03:;
  /* 127a6b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a6b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6b0b je 0x127a6b2e */
  if (C.zf) goto L_127a6b2e;
L_127a6b0d:;
  /* 127a6b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a6b13 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6b16 je 0x127a6b23 */
  if (C.zf) goto L_127a6b23;
  /* 127a6b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6b1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6b21 jne 0x127a6b2e */
  if (!C.zf) goto L_127a6b2e;
L_127a6b23:;
  /* 127a6b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6b29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a6b2c jmp 0x127a6b0d */
  goto L_127a6b0d;
L_127a6b2e:;
  /* 127a6b2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6b34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6b36 jne 0x127a6b3d */
  if (!C.zf) goto L_127a6b3d;
  /* 127a6b38 jmp 0x127a6d1b */
  goto L_127a6d1b;
L_127a6b3d:;
  /* 127a6b3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6b41 je 0x127a6b54 */
  if (C.zf) goto L_127a6b54;
  /* 127a6b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6b46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6b49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a6b4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6b4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6b51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127a6b54:;
  /* 127a6b54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a6b57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a6b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6b5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a6b5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127a6b61:;
  /* 127a6b61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127a6b68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127a6b6f:;
  /* 127a6b6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a6b75 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6b78 jne 0x127a6b8e */
  if (!C.zf) goto L_127a6b8e;
  /* 127a6b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6b80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a6b83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6b86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6b89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127a6b8c jmp 0x127a6b6f */
  goto L_127a6b6f;
L_127a6b8e:;
  /* 127a6b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6b91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6b94 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6b97 jne 0x127a6bea */
  if (!C.zf) goto L_127a6bea;
  /* 127a6b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6b9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6b9e mov ecx, 2 */
  ECX = (0x2u);
  /* 127a6ba3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127a6ba5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6ba7 jne 0x127a6be2 */
  if (!C.zf) goto L_127a6be2;
  /* 127a6ba9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6bad je 0x127a6bcf */
  if (C.zf) goto L_127a6bcf;
  /* 127a6baf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6bb2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127a6bb6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6bb9 jne 0x127a6bc6 */
  if (!C.zf) goto L_127a6bc6;
  /* 127a6bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6bbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6bc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a6bc4 jmp 0x127a6bcd */
  goto L_127a6bcd;
L_127a6bc6:;
  /* 127a6bc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127a6bcd:;
  /* 127a6bcd jmp 0x127a6bd6 */
  goto L_127a6bd6;
L_127a6bcf:;
  /* 127a6bcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127a6bd6:;
  /* 127a6bd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6bd8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6bdc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 127a6bdf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127a6be2:;
  /* 127a6be2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6be5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127a6be7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127a6bea:;
  /* 127a6bea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6bed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6bf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6bf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127a6bf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6bf8 je 0x127a6c1e */
  if (C.zf) goto L_127a6c1e;
  /* 127a6bfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6bfe je 0x127a6c0f */
  if (C.zf) goto L_127a6c0f;
  /* 127a6c00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6c03 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 127a6c06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6c09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6c0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_127a6c0f:;
  /* 127a6c0f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6c12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a6c14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6c17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6c1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a6c1c jmp 0x127a6bea */
  goto L_127a6bea;
L_127a6c1e:;
  /* 127a6c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127a6c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6c26 je 0x127a6c44 */
  if (C.zf) goto L_127a6c44;
  /* 127a6c28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6c2c jne 0x127a6c49 */
  if (!C.zf) goto L_127a6c49;
  /* 127a6c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c31 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a6c34 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6c37 je 0x127a6c44 */
  if (C.zf) goto L_127a6c44;
  /* 127a6c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127a6c3f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6c42 jne 0x127a6c49 */
  if (!C.zf) goto L_127a6c49;
L_127a6c44:;
  /* 127a6c44 jmp 0x127a6cf4 */
  goto L_127a6cf4;
L_127a6c49:;
  /* 127a6c49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6c4d je 0x127a6ce6 */
  if (C.zf) goto L_127a6ce6;
  /* 127a6c53 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6c57 je 0x127a6cad */
  if (C.zf) goto L_127a6cad;
  /* 127a6c59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6c5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127a6c60 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a6c62 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127a6c68 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127a6c6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6c6d je 0x127a6c98 */
  if (C.zf) goto L_127a6c98;
  /* 127a6c6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6c72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c75 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127a6c77 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127a6c79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6c7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6c7f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 127a6c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6c88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a6c8b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6c8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a6c90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6c93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6c96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127a6c98:;
  /* 127a6c98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6c9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6c9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127a6ca0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127a6ca2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6ca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6ca8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127a6cab jmp 0x127a6cd9 */
  goto L_127a6cd9;
L_127a6cad:;
  /* 127a6cad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6cb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127a6cb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a6cb6 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127a6cbc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127a6cbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a6cc1 je 0x127a6cd9 */
  if (C.zf) goto L_127a6cd9;
  /* 127a6cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6cc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a6ccc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6ccf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a6cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6cd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6cd7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a6cd9:;
  /* 127a6cd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6cdc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a6cde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6ce1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6ce4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a6ce6:;
  /* 127a6ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6ce9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6cec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a6cef jmp 0x127a6b61 */
  goto L_127a6b61;
L_127a6cf4:;
  /* 127a6cf4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6cf8 je 0x127a6d09 */
  if (C.zf) goto L_127a6d09;
  /* 127a6cfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6cfd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127a6d00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a6d03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6d06 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_127a6d09:;
  /* 127a6d09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6d0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a6d0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6d11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127a6d14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a6d16 jmp 0x127a6b03 */
  goto L_127a6b03;
L_127a6d1b:;
  /* 127a6d1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6d1f je 0x127a6d33 */
  if (C.zf) goto L_127a6d33;
  /* 127a6d21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6d24 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a6d2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a6d2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6d30 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127a6d33:;
  /* 127a6d33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a6d36 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a6d38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6d3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a6d3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a6d40 mov esp, ebp */
  ESP = (EBP);
  /* 127a6d42 pop ebp */
  EBP = (pop32());
  /* 127a6d43 ret  */
  ESPCHK(0x127a6920u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x127a6d50 (537 bytes, 173 insns) */
void f_127a6d50(void) {
  FTRACE(0x127a6d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6d50 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6d51 mov ebp, esp */
  EBP = (ESP);
  /* 127a6d53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6d56 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127a6d5d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 127a6d64 cmp dword ptr [0x127d0674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6d6b jne 0x127a6daa */
  if (!C.zf) goto L_127a6daa;
  /* 127a6d6d call dword ptr [0x127d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d330c))), 0x127a6d73u);
  /* 127a6d73 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127a6d76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6d7a je 0x127a6d88 */
  if (C.zf) goto L_127a6d88;
  /* 127a6d7c mov dword ptr [0x127d0674], 1 */
  w32((uint32_t)(0x127d0674), (0x1u));
  /* 127a6d86 jmp 0x127a6daa */
  goto L_127a6daa;
L_127a6d88:;
  /* 127a6d88 call dword ptr [0x127d3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3308))), 0x127a6d8eu);
  /* 127a6d8e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a6d91 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6d95 je 0x127a6da3 */
  if (C.zf) goto L_127a6da3;
  /* 127a6d97 mov dword ptr [0x127d0674], 2 */
  w32((uint32_t)(0x127d0674), (0x2u));
  /* 127a6da1 jmp 0x127a6daa */
  goto L_127a6daa;
L_127a6da3:;
  /* 127a6da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6da5 jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6daa:;
  /* 127a6daa cmp dword ptr [0x127d0674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6db1 jne 0x127a6eae */
  if (!C.zf) goto L_127a6eae;
  /* 127a6db7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6dbb jne 0x127a6dd3 */
  if (!C.zf) goto L_127a6dd3;
  /* 127a6dbd call dword ptr [0x127d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d330c))), 0x127a6dc3u);
  /* 127a6dc3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127a6dc6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6dca jne 0x127a6dd3 */
  if (!C.zf) goto L_127a6dd3;
  /* 127a6dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6dce jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6dd3:;
  /* 127a6dd3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6dd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127a6dd9:;
  /* 127a6dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6ddc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6dde mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 127a6de1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6de3 je 0x127a6e05 */
  if (C.zf) goto L_127a6e05;
  /* 127a6de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6de8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a6dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6df1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a6df3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 127a6df6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6df8 jne 0x127a6e03 */
  if (!C.zf) goto L_127a6e03;
  /* 127a6dfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6dfd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6e00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127a6e03:;
  /* 127a6e03 jmp 0x127a6dd9 */
  goto L_127a6dd9;
L_127a6e05:;
  /* 127a6e05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6e08 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6e0b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127a6e0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6e10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a6e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6e1e push edx */
  push32((uint32_t)(EDX));
  /* 127a6e1f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6e22 push eax */
  push32((uint32_t)(EAX));
  /* 127a6e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e27 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127a6e2du);
  /* 127a6e2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a6e30 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6e34 je 0x127a6e54 */
  if (C.zf) goto L_127a6e54;
  /* 127a6e36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 127a6e38 push 0x127cbba0 */
  push32((uint32_t)(0x127cbba0u));
  /* 127a6e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 127a6e3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6e42 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6e43 call 0x127a4780 */
  push32(0x127a6e48u); f_127a4780();
  /* 127a6e48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6e4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a6e4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6e52 jne 0x127a6e65 */
  if (!C.zf) goto L_127a6e65;
L_127a6e54:;
  /* 127a6e54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6e57 push edx */
  push32((uint32_t)(EDX));
  /* 127a6e58 call dword ptr [0x127d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3300))), 0x127a6e5eu);
  /* 127a6e5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6e60 jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6e65:;
  /* 127a6e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6e6c push eax */
  push32((uint32_t)(EAX));
  /* 127a6e6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6e70 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6e74 push edx */
  push32((uint32_t)(EDX));
  /* 127a6e75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6e78 push eax */
  push32((uint32_t)(EAX));
  /* 127a6e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6e7d call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127a6e83u);
  /* 127a6e83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6e85 jne 0x127a6e9c */
  if (!C.zf) goto L_127a6e9c;
  /* 127a6e87 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a6e89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6e8c push ecx */
  push32((uint32_t)(ECX));
  /* 127a6e8d call 0x127a5210 */
  push32(0x127a6e92u); f_127a5210();
  /* 127a6e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6e95 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_127a6e9c:;
  /* 127a6e9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a6e9f push edx */
  push32((uint32_t)(EDX));
  /* 127a6ea0 call dword ptr [0x127d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3300))), 0x127a6ea6u);
  /* 127a6ea6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6ea9 jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6eae:;
  /* 127a6eae cmp dword ptr [0x127d0674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d0674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6eb5 jne 0x127a6f63 */
  if (!C.zf) goto L_127a6f63;
  /* 127a6ebb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6ebf jne 0x127a6ed7 */
  if (!C.zf) goto L_127a6ed7;
  /* 127a6ec1 call dword ptr [0x127d3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3308))), 0x127a6ec7u);
  /* 127a6ec7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a6eca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6ece jne 0x127a6ed7 */
  if (!C.zf) goto L_127a6ed7;
  /* 127a6ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6ed2 jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6ed7:;
  /* 127a6ed7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6eda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127a6edd:;
  /* 127a6edd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a6ee3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6ee5 je 0x127a6f05 */
  if (C.zf) goto L_127a6f05;
  /* 127a6ee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6eea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6eed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a6ef0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6ef3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127a6ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a6ef8 jne 0x127a6f03 */
  if (!C.zf) goto L_127a6f03;
  /* 127a6efa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6efd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6f00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127a6f03:;
  /* 127a6f03 jmp 0x127a6edd */
  goto L_127a6edd;
L_127a6f05:;
  /* 127a6f05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6f08 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6f0e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a6f11 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 127a6f16 push 0x127cbba0 */
  push32((uint32_t)(0x127cbba0u));
  /* 127a6f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a6f1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6f20 push edx */
  push32((uint32_t)(EDX));
  /* 127a6f21 call 0x127a4780 */
  push32(0x127a6f26u); f_127a4780();
  /* 127a6f26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6f29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a6f2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6f30 jne 0x127a6f40 */
  if (!C.zf) goto L_127a6f40;
  /* 127a6f32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6f35 push eax */
  push32((uint32_t)(EAX));
  /* 127a6f36 call dword ptr [0x127d32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32fc))), 0x127a6f3cu);
  /* 127a6f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6f3e jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6f40:;
  /* 127a6f40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a6f43 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6f44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6f47 push edx */
  push32((uint32_t)(EDX));
  /* 127a6f48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6f4b push eax */
  push32((uint32_t)(EAX));
  /* 127a6f4c call 0x127ab060 */
  push32(0x127a6f51u); f_127ab060();
  /* 127a6f51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6f54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a6f57 push ecx */
  push32((uint32_t)(ECX));
  /* 127a6f58 call dword ptr [0x127d32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32fc))), 0x127a6f5eu);
  /* 127a6f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a6f61 jmp 0x127a6f65 */
  goto L_127a6f65;
L_127a6f63:;
  /* 127a6f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a6f65:;
  /* 127a6f65 mov esp, ebp */
  ESP = (EBP);
  /* 127a6f67 pop ebp */
  EBP = (pop32());
  /* 127a6f68 ret  */
  ESPCHK(0x127a6d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f70 @ 0x127a6f70 (77 bytes, 25 insns) */
void f_127a6f70(void) {
  FTRACE(0x127a6f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6f70 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6f71 mov ebp, esp */
  EBP = (ESP);
  /* 127a6f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a6f75 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127a6f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6f7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6f80 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 127a6f83 push eax */
  push32((uint32_t)(EAX));
  /* 127a6f84 call dword ptr [0x127d3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3314))), 0x127a6f8au);
  /* 127a6f8a mov dword ptr [0x127d1ecc], eax */
  w32((uint32_t)(0x127d1ecc), (EAX));
  /* 127a6f8f cmp dword ptr [0x127d1ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6f96 jne 0x127a6f9c */
  if (!C.zf) goto L_127a6f9c;
  /* 127a6f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6f9a jmp 0x127a6fbb */
  goto L_127a6fbb;
L_127a6f9c:;
  /* 127a6f9c call 0x127a8a20 */
  push32(0x127a6fa1u); f_127a8a20();
  /* 127a6fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a6fa3 jne 0x127a6fb6 */
  if (!C.zf) goto L_127a6fb6;
  /* 127a6fa5 mov ecx, dword ptr [0x127d1ecc] */
  ECX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a6fab push ecx */
  push32((uint32_t)(ECX));
  /* 127a6fac call dword ptr [0x127d3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3310))), 0x127a6fb2u);
  /* 127a6fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a6fb4 jmp 0x127a6fbb */
  goto L_127a6fbb;
L_127a6fb6:;
  /* 127a6fb6 mov eax, 1 */
  EAX = (0x1u);
L_127a6fbb:;
  /* 127a6fbb pop ebp */
  EBP = (pop32());
  /* 127a6fbc ret  */
  ESPCHK(0x127a6f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x127a6fc0 (156 bytes, 48 insns) */
void f_127a6fc0(void) {
  FTRACE(0x127a6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 127a6fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a6fc6 mov eax, dword ptr [0x127d1ec8] */
  EAX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a6fcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a6fce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a6fd5 jmp 0x127a6fe0 */
  goto L_127a6fe0;
L_127a6fd7:;
  /* 127a6fd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6fda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a6fdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a6fe0:;
  /* 127a6fe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a6fe3 cmp edx, dword ptr [0x127d1ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127d1ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a6fe9 jge 0x127a7036 */
  if ((C.sf==C.of)) goto L_127a7036;
  /* 127a6feb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 127a6ff0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 127a6ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a6ff8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127a6ffb push ecx */
  push32((uint32_t)(ECX));
  /* 127a6ffc call dword ptr [0x127d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d331c))), 0x127a7002u);
  /* 127a7002 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127a7007 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7009 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a700c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127a700f push eax */
  push32((uint32_t)(EAX));
  /* 127a7010 call dword ptr [0x127d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d331c))), 0x127a7016u);
  /* 127a7016 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7019 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a701c push edx */
  push32((uint32_t)(EDX));
  /* 127a701d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a701f mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a7024 push eax */
  push32((uint32_t)(EAX));
  /* 127a7025 call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127a702bu);
  /* 127a702b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a702e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7031 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a7034 jmp 0x127a6fd7 */
  goto L_127a6fd7;
L_127a7036:;
  /* 127a7036 mov edx, dword ptr [0x127d1ec8] */
  EDX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a703c push edx */
  push32((uint32_t)(EDX));
  /* 127a703d push 0 */
  push32((uint32_t)(0x0u));
  /* 127a703f mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a7044 push eax */
  push32((uint32_t)(EAX));
  /* 127a7045 call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127a704bu);
  /* 127a704b mov ecx, dword ptr [0x127d1ecc] */
  ECX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a7051 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7052 call dword ptr [0x127d3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3310))), 0x127a7058u);
  /* 127a7058 mov esp, ebp */
  ESP = (EBP);
  /* 127a705a pop ebp */
  EBP = (pop32());
  /* 127a705b ret  */
  ESPCHK(0x127a6fc0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x127a7060 (73 bytes, 19 insns) */
void f_127a7060(void) {
  FTRACE(0x127a7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7060 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7061 mov ebp, esp */
  EBP = (ESP);
  /* 127a7063 cmp dword ptr [0x127d0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a706a je 0x127a707e */
  if (C.zf) goto L_127a707e;
  /* 127a706c cmp dword ptr [0x127d0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7073 jne 0x127a70a7 */
  if (!C.zf) goto L_127a70a7;
  /* 127a7075 cmp dword ptr [0x127d050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a707c jne 0x127a70a7 */
  if (!C.zf) goto L_127a70a7;
L_127a707e:;
  /* 127a707e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 127a7083 call 0x127a70b0 */
  push32(0x127a7088u); f_127a70b0();
  /* 127a7088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a708b cmp dword ptr [0x127d0678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7092 je 0x127a709a */
  if (C.zf) goto L_127a709a;
  /* 127a7094 call dword ptr [0x127d0678] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d0678))), 0x127a709au);
L_127a709a:;
  /* 127a709a push 0xff */
  push32((uint32_t)(0xffu));
  /* 127a709f call 0x127a70b0 */
  push32(0x127a70a4u); f_127a70b0();
  /* 127a70a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a70a7:;
  /* 127a70a7 pop ebp */
  EBP = (pop32());
  /* 127a70a8 ret  */
  ESPCHK(0x127a7060u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x127a70b0 (447 bytes, 131 insns) */
void f_127a70b0(void) {
  FTRACE(0x127a70b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a70b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a70b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a70b3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a70b9 push ebx */
  push32((uint32_t)(EBX));
  /* 127a70ba push esi */
  push32((uint32_t)(ESI));
  /* 127a70bb push edi */
  push32((uint32_t)(EDI));
  /* 127a70bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a70c3 jmp 0x127a70ce */
  goto L_127a70ce;
L_127a70c5:;
  /* 127a70c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a70c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a70cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127a70ce:;
  /* 127a70ce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a70d2 jae 0x127a70e7 */
  if (!C.cf) goto L_127a70e7;
  /* 127a70d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a70d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a70da cmp edx, dword ptr [ecx*8 + 0x127ceab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x127ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a70e1 jne 0x127a70e5 */
  if (!C.zf) goto L_127a70e5;
  /* 127a70e3 jmp 0x127a70e7 */
  goto L_127a70e7;
L_127a70e5:;
  /* 127a70e5 jmp 0x127a70c5 */
  goto L_127a70c5;
L_127a70e7:;
  /* 127a70e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a70ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a70ed cmp ecx, dword ptr [eax*8 + 0x127ceab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x127ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a70f4 jne 0x127a7268 */
  if (!C.zf) goto L_127a7268;
  /* 127a70fa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7101 je 0x127a7124 */
  if (C.zf) goto L_127a7124;
  /* 127a7103 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7106 mov eax, dword ptr [edx*8 + 0x127ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x127ceab4)));
  /* 127a710d push eax */
  push32((uint32_t)(EAX));
  /* 127a710e push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7110 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7112 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7114 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7116 call 0x127a3840 */
  push32(0x127a711bu); f_127a3840();
  /* 127a711b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a711e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7121 jne 0x127a7124 */
  if (!C.zf) goto L_127a7124;
  /* 127a7123 int3  */
  x86_unimpl("int3 @ 0x127a7123");
L_127a7124:;
  /* 127a7124 cmp dword ptr [0x127d0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a712b je 0x127a713f */
  if (C.zf) goto L_127a713f;
  /* 127a712d cmp dword ptr [0x127d0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7134 jne 0x127a7178 */
  if (!C.zf) goto L_127a7178;
  /* 127a7136 cmp dword ptr [0x127d050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a713d jne 0x127a7178 */
  if (!C.zf) goto L_127a7178;
L_127a713f:;
  /* 127a713f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7141 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 127a7144 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7145 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7148 mov eax, dword ptr [edx*8 + 0x127ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x127ceab4)));
  /* 127a714f push eax */
  push32((uint32_t)(EAX));
  /* 127a7150 call 0x127a75b0 */
  push32(0x127a7155u); f_127a75b0();
  /* 127a7155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7158 push eax */
  push32((uint32_t)(EAX));
  /* 127a7159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a715c mov edx, dword ptr [ecx*8 + 0x127ceab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x127ceab4)));
  /* 127a7163 push edx */
  push32((uint32_t)(EDX));
  /* 127a7164 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127a7166 call dword ptr [0x127d3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3298))), 0x127a716cu);
  /* 127a716c push eax */
  push32((uint32_t)(EAX));
  /* 127a716d call dword ptr [0x127d329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d329c))), 0x127a7173u);
  /* 127a7173 jmp 0x127a7268 */
  goto L_127a7268;
L_127a7178:;
  /* 127a7178 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a717f je 0x127a7268 */
  if (C.zf) goto L_127a7268;
  /* 127a7185 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 127a718a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 127a7190 push eax */
  push32((uint32_t)(EAX));
  /* 127a7191 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7193 call dword ptr [0x127d32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b4))), 0x127a7199u);
  /* 127a7199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a719b jne 0x127a71b1 */
  if (!C.zf) goto L_127a71b1;
  /* 127a719d push 0x127cb408 */
  push32((uint32_t)(0x127cb408u));
  /* 127a71a2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 127a71a8 push ecx */
  push32((uint32_t)(ECX));
  /* 127a71a9 call 0x127a7730 */
  push32(0x127a71aeu); f_127a7730();
  /* 127a71ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a71b1:;
  /* 127a71b1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 127a71b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127a71ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a71bd push eax */
  push32((uint32_t)(EAX));
  /* 127a71be call 0x127a75b0 */
  push32(0x127a71c3u); f_127a75b0();
  /* 127a71c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a71c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a71c9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a71cc jbe 0x127a71fa */
  if ((C.cf||C.zf)) goto L_127a71fa;
  /* 127a71ce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 127a71d4 push ecx */
  push32((uint32_t)(ECX));
  /* 127a71d5 call 0x127a75b0 */
  push32(0x127a71dau); f_127a75b0();
  /* 127a71da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a71dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a71e0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 127a71e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a71e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a71e9 push 0x127cb404 */
  push32((uint32_t)(0x127cb404u));
  /* 127a71ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a71f1 push ecx */
  push32((uint32_t)(ECX));
  /* 127a71f2 call 0x127a7fa0 */
  push32(0x127a71f7u); f_127a7fa0();
  /* 127a71f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a71fa:;
  /* 127a71fa push 0x127cbe5c */
  push32((uint32_t)(0x127cbe5cu));
  /* 127a71ff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 127a7205 push edx */
  push32((uint32_t)(EDX));
  /* 127a7206 call 0x127a7730 */
  push32(0x127a720bu); f_127a7730();
  /* 127a720b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a720e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7211 push eax */
  push32((uint32_t)(EAX));
  /* 127a7212 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 127a7218 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7219 call 0x127a7740 */
  push32(0x127a721eu); f_127a7740();
  /* 127a721e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7221 push 0x127cb37c */
  push32((uint32_t)(0x127cb37cu));
  /* 127a7226 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 127a722c push edx */
  push32((uint32_t)(EDX));
  /* 127a722d call 0x127a7740 */
  push32(0x127a7232u); f_127a7740();
  /* 127a7232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7238 mov ecx, dword ptr [eax*8 + 0x127ceab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x127ceab4)));
  /* 127a723f push ecx */
  push32((uint32_t)(ECX));
  /* 127a7240 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 127a7246 push edx */
  push32((uint32_t)(EDX));
  /* 127a7247 call 0x127a7740 */
  push32(0x127a724cu); f_127a7740();
  /* 127a724c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a724f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 127a7254 push 0x127cbe34 */
  push32((uint32_t)(0x127cbe34u));
  /* 127a7259 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 127a725f push eax */
  push32((uint32_t)(EAX));
  /* 127a7260 call 0x127a7ee0 */
  push32(0x127a7265u); f_127a7ee0();
  /* 127a7265 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7268:;
  /* 127a7268 pop edi */
  EDI = (pop32());
  /* 127a7269 pop esi */
  ESI = (pop32());
  /* 127a726a pop ebx */
  EBX = (pop32());
  /* 127a726b mov esp, ebp */
  ESP = (EBP);
  /* 127a726d pop ebp */
  EBP = (pop32());
  /* 127a726e ret  */
  ESPCHK(0x127a70b0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x127a7270 (80 bytes, 27 insns) */
void f_127a7270(void) {
  FTRACE(0x127a7270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7270 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7271 mov ebp, esp */
  EBP = (ESP);
  /* 127a7273 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7274 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a727b jmp 0x127a7286 */
  goto L_127a7286;
L_127a727d:;
  /* 127a727d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7283 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a7286:;
  /* 127a7286 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a728a jae 0x127a729f */
  if (!C.cf) goto L_127a729f;
  /* 127a728c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a728f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7292 cmp edx, dword ptr [ecx*8 + 0x127ceab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x127ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7299 jne 0x127a729d */
  if (!C.zf) goto L_127a729d;
  /* 127a729b jmp 0x127a729f */
  goto L_127a729f;
L_127a729d:;
  /* 127a729d jmp 0x127a727d */
  goto L_127a727d;
L_127a729f:;
  /* 127a729f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a72a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a72a5 cmp ecx, dword ptr [eax*8 + 0x127ceab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x127ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a72ac jne 0x127a72ba */
  if (!C.zf) goto L_127a72ba;
  /* 127a72ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a72b1 mov eax, dword ptr [edx*8 + 0x127ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x127ceab4)));
  /* 127a72b8 jmp 0x127a72bc */
  goto L_127a72bc;
L_127a72ba:;
  /* 127a72ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a72bc:;
  /* 127a72bc mov esp, ebp */
  ESP = (EBP);
  /* 127a72be pop ebp */
  EBP = (pop32());
  /* 127a72bf ret  */
  ESPCHK(0x127a7270u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x127a72c0 (66 bytes, 28 insns) */
void f_127a72c0(void) {
  FTRACE(0x127a72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a72c1 mov ebp, esp */
  EBP = (ESP);
  /* 127a72c3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a72c7 jne 0x127a72e7 */
  if (!C.zf) goto L_127a72e7;
  /* 127a72c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a72cd jge 0x127a72e7 */
  if ((C.sf==C.of)) goto L_127a72e7;
  /* 127a72cf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a72d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a72d4 push eax */
  push32((uint32_t)(EAX));
  /* 127a72d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a72d8 push ecx */
  push32((uint32_t)(ECX));
  /* 127a72d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a72dc push edx */
  push32((uint32_t)(EDX));
  /* 127a72dd call 0x127a7310 */
  push32(0x127a72e2u); f_127a7310();
  /* 127a72e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a72e5 jmp 0x127a72fd */
  goto L_127a72fd;
L_127a72e7:;
  /* 127a72e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a72e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a72ec push eax */
  push32((uint32_t)(EAX));
  /* 127a72ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a72f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a72f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a72f4 push edx */
  push32((uint32_t)(EDX));
  /* 127a72f5 call 0x127a7310 */
  push32(0x127a72fau); f_127a7310();
  /* 127a72fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a72fd:;
  /* 127a72fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7300 pop ebp */
  EBP = (pop32());
  /* 127a7301 ret  */
  ESPCHK(0x127a72c0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x127a7310 (194 bytes, 71 insns) */
void f_127a7310(void) {
  FTRACE(0x127a7310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7310 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7311 mov ebp, esp */
  EBP = (ESP);
  /* 127a7313 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7316 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a731c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7320 je 0x127a7339 */
  if (C.zf) goto L_127a7339;
  /* 127a7322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7325 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 127a7328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a732b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a732e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a7331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7334 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127a7336 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127a7339:;
  /* 127a7339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a733c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127a733f:;
  /* 127a733f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7342 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a7344 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127a7347 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127a734a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a734d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a734f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127a7352 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127a7355 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7359 jbe 0x127a7371 */
  if ((C.cf||C.zf)) goto L_127a7371;
  /* 127a735b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a735e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7364 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a7366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7369 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a736c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a736f jmp 0x127a7385 */
  goto L_127a7385;
L_127a7371:;
  /* 127a7371 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7374 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a737a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a737c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a737f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a7385:;
  /* 127a7385 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7389 ja 0x127a733f */
  if ((!C.cf&&!C.zf)) goto L_127a733f;
  /* 127a738b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a738e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127a7391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7394 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7397 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a739a:;
  /* 127a739a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a739d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a739f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 127a73a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a73a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a73a8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a73aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a73ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a73af mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 127a73b2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127a73b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a73b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a73ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a73bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a73c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a73c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a73c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a73c9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a73cc jb 0x127a739a */
  if (C.cf) goto L_127a739a;
  /* 127a73ce mov esp, ebp */
  ESP = (EBP);
  /* 127a73d0 pop ebp */
  EBP = (pop32());
  /* 127a73d1 ret  */
  ESPCHK(0x127a7310u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x127a73e0 (63 bytes, 24 insns) */
void f_127a73e0(void) {
  FTRACE(0x127a73e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a73e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a73e1 mov ebp, esp */
  EBP = (ESP);
  /* 127a73e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a73e4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a73e8 jne 0x127a73f9 */
  if (!C.zf) goto L_127a73f9;
  /* 127a73ea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a73ee jge 0x127a73f9 */
  if ((C.sf==C.of)) goto L_127a73f9;
  /* 127a73f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127a73f7 jmp 0x127a7400 */
  goto L_127a7400;
L_127a73f9:;
  /* 127a73f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a7400:;
  /* 127a7400 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7403 push eax */
  push32((uint32_t)(EAX));
  /* 127a7404 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7407 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7408 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a740b push edx */
  push32((uint32_t)(EDX));
  /* 127a740c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a740f push eax */
  push32((uint32_t)(EAX));
  /* 127a7410 call 0x127a7310 */
  push32(0x127a7415u); f_127a7310();
  /* 127a7415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7418 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a741b mov esp, ebp */
  ESP = (EBP);
  /* 127a741d pop ebp */
  EBP = (pop32());
  /* 127a741e ret  */
  ESPCHK(0x127a73e0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x127a7420 (30 bytes, 14 insns) */
void f_127a7420(void) {
  FTRACE(0x127a7420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7420 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7421 mov ebp, esp */
  EBP = (ESP);
  /* 127a7423 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7425 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7428 push eax */
  push32((uint32_t)(EAX));
  /* 127a7429 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a742c push ecx */
  push32((uint32_t)(ECX));
  /* 127a742d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7430 push edx */
  push32((uint32_t)(EDX));
  /* 127a7431 call 0x127a7310 */
  push32(0x127a7436u); f_127a7310();
  /* 127a7436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7439 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a743c pop ebp */
  EBP = (pop32());
  /* 127a743d ret  */
  ESPCHK(0x127a7420u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x127a7440 (72 bytes, 28 insns) */
void f_127a7440(void) {
  FTRACE(0x127a7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7440 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7441 mov ebp, esp */
  EBP = (ESP);
  /* 127a7443 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7444 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7448 jne 0x127a7461 */
  if (!C.zf) goto L_127a7461;
  /* 127a744a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a744e jg 0x127a7461 */
  if ((!C.zf&&C.sf==C.of)) goto L_127a7461;
  /* 127a7450 jl 0x127a7458 */
  if ((C.sf!=C.of)) goto L_127a7458;
  /* 127a7452 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7456 jae 0x127a7461 */
  if (!C.cf) goto L_127a7461;
L_127a7458:;
  /* 127a7458 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127a745f jmp 0x127a7468 */
  goto L_127a7468;
L_127a7461:;
  /* 127a7461 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a7468:;
  /* 127a7468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a746b push eax */
  push32((uint32_t)(EAX));
  /* 127a746c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a746f push ecx */
  push32((uint32_t)(ECX));
  /* 127a7470 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7473 push edx */
  push32((uint32_t)(EDX));
  /* 127a7474 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7477 push eax */
  push32((uint32_t)(EAX));
  /* 127a7478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a747b push ecx */
  push32((uint32_t)(ECX));
  /* 127a747c call 0x127a7490 */
  push32(0x127a7481u); f_127a7490();
  /* 127a7481 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7484 mov esp, ebp */
  ESP = (EBP);
  /* 127a7486 pop ebp */
  EBP = (pop32());
  /* 127a7487 ret  */
  ESPCHK(0x127a7440u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x127a7490 (242 bytes, 91 insns) */
void f_127a7490(void) {
  FTRACE(0x127a7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7490 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7491 mov ebp, esp */
  EBP = (ESP);
  /* 127a7493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7496 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a749c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a74a0 je 0x127a74c4 */
  if (C.zf) goto L_127a74c4;
  /* 127a74a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a74a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 127a74a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a74ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a74ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a74b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a74b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127a74b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a74b9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a74bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127a74be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127a74c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127a74c4:;
  /* 127a74c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a74c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127a74ca:;
  /* 127a74ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a74cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a74cf push ecx */
  push32((uint32_t)(ECX));
  /* 127a74d0 push eax */
  push32((uint32_t)(EAX));
  /* 127a74d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a74d4 push edx */
  push32((uint32_t)(EDX));
  /* 127a74d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a74d8 push eax */
  push32((uint32_t)(EAX));
  /* 127a74d9 call 0x127ab410 */
  push32(0x127a74deu); f_127ab410();
  /* 127a74de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a74e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a74e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a74e6 push edx */
  push32((uint32_t)(EDX));
  /* 127a74e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127a74e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a74eb push eax */
  push32((uint32_t)(EAX));
  /* 127a74ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a74ef push ecx */
  push32((uint32_t)(ECX));
  /* 127a74f0 call 0x127ab3a0 */
  push32(0x127a74f5u); f_127ab3a0();
  /* 127a74f5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127a74f8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 127a74fb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a74ff jbe 0x127a7517 */
  if ((C.cf||C.zf)) goto L_127a7517;
  /* 127a7501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7504 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a750a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a750c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a750f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7512 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a7515 jmp 0x127a752b */
  goto L_127a752b;
L_127a7517:;
  /* 127a7517 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a751a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a751d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7520 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a7522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7528 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127a752b:;
  /* 127a752b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a752f ja 0x127a74ca */
  if ((!C.cf&&!C.zf)) goto L_127a74ca;
  /* 127a7531 jb 0x127a7539 */
  if (C.cf) goto L_127a7539;
  /* 127a7533 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7537 ja 0x127a74ca */
  if ((!C.cf&&!C.zf)) goto L_127a74ca;
L_127a7539:;
  /* 127a7539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a753c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127a753f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7542 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7545 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a7548:;
  /* 127a7548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a754b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a754d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 127a7550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7553 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7556 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a7558 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127a755a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a755d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 127a7560 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127a7562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7565 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7568 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a756b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a756e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7571 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a7574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7577 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a757a jb 0x127a7548 */
  if (C.cf) goto L_127a7548;
  /* 127a757c mov esp, ebp */
  ESP = (EBP);
  /* 127a757e pop ebp */
  EBP = (pop32());
  /* 127a757f ret 0x14 */
  ESPCHK(0x127a7490u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x127a7590 (31 bytes, 15 insns) */
void f_127a7590(void) {
  FTRACE(0x127a7590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7590 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7591 mov ebp, esp */
  EBP = (ESP);
  /* 127a7593 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7595 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a7598 push eax */
  push32((uint32_t)(EAX));
  /* 127a7599 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a759c push ecx */
  push32((uint32_t)(ECX));
  /* 127a759d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a75a0 push edx */
  push32((uint32_t)(EDX));
  /* 127a75a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a75a4 push eax */
  push32((uint32_t)(EAX));
  /* 127a75a5 call 0x127a7490 */
  push32(0x127a75aau); f_127a7490();
  /* 127a75aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a75ad pop ebp */
  EBP = (pop32());
  /* 127a75ae ret  */
  ESPCHK(0x127a7590u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x127a75b0 (123 bytes, 44 insns) */
void f_127a75b0(void) {
  FTRACE(0x127a75b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a75b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a75b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a75ba je 0x127a75d0 */
  if (C.zf) goto L_127a75d0;
L_127a75bc:;
  /* 127a75bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 127a75be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127a75bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a75c1 je 0x127a7603 */
  if (C.zf) goto L_127a7603;
  /* 127a75c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a75c9 jne 0x127a75bc */
  if (!C.zf) goto L_127a75bc;
  /* 127a75cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_127a75d0:;
  /* 127a75d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127a75d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127a75d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a75d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a75dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a75de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a75e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127a75e6 je 0x127a75d0 */
  if (C.zf) goto L_127a75d0;
  /* 127a75e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 127a75eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a75ed je 0x127a7621 */
  if (C.zf) goto L_127a7621;
  /* 127a75ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127a75f1 je 0x127a7617 */
  if (C.zf) goto L_127a7617;
  /* 127a75f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 127a75f8 je 0x127a760d */
  if (C.zf) goto L_127a760d;
  /* 127a75fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 127a75ff je 0x127a7603 */
  if (C.zf) goto L_127a7603;
  /* 127a7601 jmp 0x127a75d0 */
  goto L_127a75d0;
L_127a7603:;
  /* 127a7603 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 127a7606 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a760a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a760c ret  */
  ESPCHK(0x127a75b0u, _esp0);
  ESP += 4; return;
L_127a760d:;
  /* 127a760d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 127a7610 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a7614 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7616 ret  */
  ESPCHK(0x127a75b0u, _esp0);
  ESP += 4; return;
L_127a7617:;
  /* 127a7617 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 127a761a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a761e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7620 ret  */
  ESPCHK(0x127a75b0u, _esp0);
  ESP += 4; return;
L_127a7621:;
  /* 127a7621 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 127a7624 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a7628 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a762a ret  */
  ESPCHK(0x127a75b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x127a7630 (249 bytes, 93 insns) */
void f_127a7630(void) {
  FTRACE(0x127a7630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7630 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7631 mov ebp, esp */
  EBP = (ESP);
  /* 127a7633 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7636 push ebx */
  push32((uint32_t)(EBX));
  /* 127a7637 push esi */
  push32((uint32_t)(ESI));
  /* 127a7638 push edi */
  push32((uint32_t)(EDI));
  /* 127a7639 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 127a763c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127a763f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 127a7642 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_127a7645:;
  /* 127a7645 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7649 jne 0x127a7669 */
  if (!C.zf) goto L_127a7669;
  /* 127a764b push 0x127cbe94 */
  push32((uint32_t)(0x127cbe94u));
  /* 127a7650 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7652 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 127a7654 push 0x127cbe88 */
  push32((uint32_t)(0x127cbe88u));
  /* 127a7659 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a765b call 0x127a3840 */
  push32(0x127a7660u); f_127a3840();
  /* 127a7660 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7663 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7666 jne 0x127a7669 */
  if (!C.zf) goto L_127a7669;
  /* 127a7668 int3  */
  x86_unimpl("int3 @ 0x127a7668");
L_127a7669:;
  /* 127a7669 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a766b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a766d jne 0x127a7645 */
  if (!C.zf) goto L_127a7645;
L_127a766f:;
  /* 127a766f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7673 jne 0x127a7693 */
  if (!C.zf) goto L_127a7693;
  /* 127a7675 push 0x127cbe78 */
  push32((uint32_t)(0x127cbe78u));
  /* 127a767a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a767c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127a767e push 0x127cbe88 */
  push32((uint32_t)(0x127cbe88u));
  /* 127a7683 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a7685 call 0x127a3840 */
  push32(0x127a768au); f_127a3840();
  /* 127a768a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a768d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7690 jne 0x127a7693 */
  if (!C.zf) goto L_127a7693;
  /* 127a7692 int3  */
  x86_unimpl("int3 @ 0x127a7692");
L_127a7693:;
  /* 127a7693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a7695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a7697 jne 0x127a766f */
  if (!C.zf) goto L_127a766f;
  /* 127a7699 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a769c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 127a76a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a76a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a76ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a76b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127a76b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a76ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127a76bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a76c0 push edx */
  push32((uint32_t)(EDX));
  /* 127a76c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a76c4 push eax */
  push32((uint32_t)(EAX));
  /* 127a76c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76c8 push ecx */
  push32((uint32_t)(ECX));
  /* 127a76c9 call 0x127ab710 */
  push32(0x127a76ceu); f_127ab710();
  /* 127a76ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a76d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127a76d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a76da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a76dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127a76e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a76ea jl 0x127a770e */
  if ((C.sf!=C.of)) goto L_127a770e;
  /* 127a76ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a76ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a76f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127a76f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a76f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a76fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 127a76ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a7702 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a7704 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7707 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a770a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a770c jmp 0x127a771f */
  goto L_127a771f;
L_127a770e:;
  /* 127a770e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a7711 push eax */
  push32((uint32_t)(EAX));
  /* 127a7712 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7714 call 0x127ab490 */
  push32(0x127a7719u); f_127ab490();
  /* 127a7719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a771c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_127a771f:;
  /* 127a771f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a7722 pop edi */
  EDI = (pop32());
  /* 127a7723 pop esi */
  ESI = (pop32());
  /* 127a7724 pop ebx */
  EBX = (pop32());
  /* 127a7725 mov esp, ebp */
  ESP = (EBP);
  /* 127a7727 pop ebp */
  EBP = (pop32());
  /* 127a7728 ret  */
  ESPCHK(0x127a7630u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x127a7730 (7 bytes, 3 insns) */
void f_127a7730(void) {
  FTRACE(0x127a7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7730 push edi */
  push32((uint32_t)(EDI));
  /* 127a7731 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 127a7735 jmp 0x127a77a1 */
  jmp_ind(0x127a77a1u); return;
}

/* FUN_10007740 @ 0x127a7740 (224 bytes, 84 insns) */
void f_127a7740(void) {
  FTRACE(0x127a7740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7740 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a7744 push edi */
  push32((uint32_t)(EDI));
  /* 127a7745 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a774b je 0x127a775c */
  if (C.zf) goto L_127a775c;
L_127a774d:;
  /* 127a774d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 127a774f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127a7750 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a7752 je 0x127a778f */
  if (C.zf) goto L_127a778f;
  /* 127a7754 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a775a jne 0x127a774d */
  if (!C.zf) goto L_127a774d;
L_127a775c:;
  /* 127a775c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127a775e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127a7763 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7765 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a7768 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a776a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a776d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127a7772 je 0x127a775c */
  if (C.zf) goto L_127a775c;
  /* 127a7774 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 127a7777 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a7779 je 0x127a779e */
  if (C.zf) goto L_127a779e;
  /* 127a777b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127a777d je 0x127a7799 */
  if (C.zf) goto L_127a7799;
  /* 127a777f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 127a7784 je 0x127a7794 */
  if (C.zf) goto L_127a7794;
  /* 127a7786 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 127a778b je 0x127a778f */
  if (C.zf) goto L_127a778f;
  /* 127a778d jmp 0x127a775c */
  goto L_127a775c;
L_127a778f:;
  /* 127a778f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 127a7792 jmp 0x127a77a1 */
  goto L_127a77a1;
L_127a7794:;
  /* 127a7794 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 127a7797 jmp 0x127a77a1 */
  goto L_127a77a1;
L_127a7799:;
  /* 127a7799 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 127a779c jmp 0x127a77a1 */
  goto L_127a77a1;
L_127a779e:;
  /* 127a779e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_127a77a1:;
  /* 127a77a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 127a77a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a77ab je 0x127a77c6 */
  if (C.zf) goto L_127a77c6;
L_127a77ad:;
  /* 127a77ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127a77af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127a77b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 127a77b2 je 0x127a7818 */
  if (C.zf) goto L_127a7818;
  /* 127a77b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 127a77b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a77b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127a77bd jne 0x127a77ad */
  if (!C.zf) goto L_127a77ad;
  /* 127a77bf jmp 0x127a77c6 */
  goto L_127a77c6;
L_127a77c1:;
  /* 127a77c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a77c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127a77c6:;
  /* 127a77c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127a77cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127a77cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a77cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a77d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a77d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a77d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a77d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127a77de je 0x127a77c1 */
  if (C.zf) goto L_127a77c1;
  /* 127a77e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 127a77e2 je 0x127a7818 */
  if (C.zf) goto L_127a7818;
  /* 127a77e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 127a77e6 je 0x127a780f */
  if (C.zf) goto L_127a780f;
  /* 127a77e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 127a77ee je 0x127a7802 */
  if (C.zf) goto L_127a7802;
  /* 127a77f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 127a77f6 je 0x127a77fa */
  if (C.zf) goto L_127a77fa;
  /* 127a77f8 jmp 0x127a77c1 */
  goto L_127a77c1;
L_127a77fa:;
  /* 127a77fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a77fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a7800 pop edi */
  EDI = (pop32());
  /* 127a7801 ret  */
  ESPCHK(0x127a7740u, _esp0);
  ESP += 4; return;
L_127a7802:;
  /* 127a7802 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 127a7805 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a7809 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 127a780d pop edi */
  EDI = (pop32());
  /* 127a780e ret  */
  ESPCHK(0x127a7740u, _esp0);
  ESP += 4; return;
L_127a780f:;
  /* 127a780f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 127a7812 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a7816 pop edi */
  EDI = (pop32());
  /* 127a7817 ret  */
  ESPCHK(0x127a7740u, _esp0);
  ESP += 4; return;
L_127a7818:;
  /* 127a7818 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 127a781a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a781e pop edi */
  EDI = (pop32());
  /* 127a781f ret  */
  ESPCHK(0x127a7740u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x127a7820 (243 bytes, 91 insns) */
void f_127a7820(void) {
  FTRACE(0x127a7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7820 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7821 mov ebp, esp */
  EBP = (ESP);
  /* 127a7823 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7826 push ebx */
  push32((uint32_t)(EBX));
  /* 127a7827 push esi */
  push32((uint32_t)(ESI));
  /* 127a7828 push edi */
  push32((uint32_t)(EDI));
  /* 127a7829 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 127a782c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127a782f:;
  /* 127a782f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7833 jne 0x127a7853 */
  if (!C.zf) goto L_127a7853;
  /* 127a7835 push 0x127cbe94 */
  push32((uint32_t)(0x127cbe94u));
  /* 127a783a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a783c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 127a783e push 0x127cbea4 */
  push32((uint32_t)(0x127cbea4u));
  /* 127a7843 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a7845 call 0x127a3840 */
  push32(0x127a784au); f_127a3840();
  /* 127a784a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a784d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7850 jne 0x127a7853 */
  if (!C.zf) goto L_127a7853;
  /* 127a7852 int3  */
  x86_unimpl("int3 @ 0x127a7852");
L_127a7853:;
  /* 127a7853 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a7855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a7857 jne 0x127a782f */
  if (!C.zf) goto L_127a782f;
L_127a7859:;
  /* 127a7859 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a785d jne 0x127a787d */
  if (!C.zf) goto L_127a787d;
  /* 127a785f push 0x127cbe78 */
  push32((uint32_t)(0x127cbe78u));
  /* 127a7864 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a7866 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 127a7868 push 0x127cbea4 */
  push32((uint32_t)(0x127cbea4u));
  /* 127a786d push 2 */
  push32((uint32_t)(0x2u));
  /* 127a786f call 0x127a3840 */
  push32(0x127a7874u); f_127a3840();
  /* 127a7874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a787a jne 0x127a787d */
  if (!C.zf) goto L_127a787d;
  /* 127a787c int3  */
  x86_unimpl("int3 @ 0x127a787c");
L_127a787d:;
  /* 127a787d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a787f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a7881 jne 0x127a7859 */
  if (!C.zf) goto L_127a7859;
  /* 127a7883 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a7886 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 127a788d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a7890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7893 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127a7896 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a7899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a789c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127a789e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a78a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127a78a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127a78aa push ecx */
  push32((uint32_t)(ECX));
  /* 127a78ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a78ae push edx */
  push32((uint32_t)(EDX));
  /* 127a78af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78b2 push eax */
  push32((uint32_t)(EAX));
  /* 127a78b3 call 0x127ab710 */
  push32(0x127a78b8u); f_127ab710();
  /* 127a78b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a78bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127a78be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a78c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a78c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127a78cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a78d4 jl 0x127a78f8 */
  if ((C.sf!=C.of)) goto L_127a78f8;
  /* 127a78d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a78db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127a78de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127a78e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a78e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127a78e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a78ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a78f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a78f6 jmp 0x127a7909 */
  goto L_127a7909;
L_127a78f8:;
  /* 127a78f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a78fb push edx */
  push32((uint32_t)(EDX));
  /* 127a78fc push 0 */
  push32((uint32_t)(0x0u));
  /* 127a78fe call 0x127ab490 */
  push32(0x127a7903u); f_127ab490();
  /* 127a7903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7906 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_127a7909:;
  /* 127a7909 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a790c pop edi */
  EDI = (pop32());
  /* 127a790d pop esi */
  ESI = (pop32());
  /* 127a790e pop ebx */
  EBX = (pop32());
  /* 127a790f mov esp, ebp */
  ESP = (EBP);
  /* 127a7911 pop ebp */
  EBP = (pop32());
  /* 127a7912 ret  */
  ESPCHK(0x127a7820u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x127a7920 (47 bytes, 17 insns) */
void f_127a7920(void) {
  FTRACE(0x127a7920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7920 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7921 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7926 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 127a792a jb 0x127a7940 */
  if (C.cf) goto L_127a7940;
L_127a792c:;
  /* 127a792c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7932 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7937 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 127a7939 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a793e jae 0x127a792c */
  if (!C.cf) goto L_127a792c;
L_127a7940:;
  /* 127a7940 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7942 mov eax, esp */
  EAX = (ESP);
  /* 127a7944 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 127a7946 mov esp, ecx */
  ESP = (ECX);
  /* 127a7948 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a794a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a794d push eax */
  push32((uint32_t)(EAX));
  /* 127a794e ret  */
  ESPCHK(0x127a7920u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x127a7950 (507 bytes, 151 insns) [1 switch table(s)] */
void f_127a7950(void) {
  FTRACE(0x127a7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7950 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7951 mov ebp, esp */
  EBP = (ESP);
  /* 127a7953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7956 push esi */
  push32((uint32_t)(ESI));
  /* 127a7957 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a795b je 0x127a7963 */
  if (C.zf) goto L_127a7963;
  /* 127a795d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7961 jne 0x127a7968 */
  if (!C.zf) goto L_127a7968;
L_127a7963:;
  /* 127a7963 jmp 0x127a7b38 */
  goto L_127a7b38;
L_127a7968:;
  /* 127a7968 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a796c je 0x127a7984 */
  if (C.zf) goto L_127a7984;
  /* 127a796e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7972 je 0x127a7984 */
  if (C.zf) goto L_127a7984;
  /* 127a7974 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7978 je 0x127a7984 */
  if (C.zf) goto L_127a7984;
  /* 127a797a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a797e jne 0x127a7a61 */
  if (!C.zf) goto L_127a7a61;
L_127a7984:;
  /* 127a7984 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7986 call 0x127a8180 */
  push32(0x127a798bu); f_127a8180();
  /* 127a798b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a798e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7992 je 0x127a799a */
  if (C.zf) goto L_127a799a;
  /* 127a7994 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7998 jne 0x127a79df */
  if (!C.zf) goto L_127a79df;
L_127a799a:;
  /* 127a799a cmp dword ptr [0x127d068c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d068c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a79a1 jne 0x127a79df */
  if (!C.zf) goto L_127a79df;
  /* 127a79a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a79a5 push 0x127a7b80 */
  push32((uint32_t)(0x127a7b80u));
  /* 127a79aa call dword ptr [0x127d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3320))), 0x127a79b0u);
  /* 127a79b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a79b3 jne 0x127a79c1 */
  if (!C.zf) goto L_127a79c1;
  /* 127a79b5 mov dword ptr [0x127d068c], 1 */
  w32((uint32_t)(0x127d068c), (0x1u));
  /* 127a79bf jmp 0x127a79df */
  goto L_127a79df;
L_127a79c1:;
  /* 127a79c1 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127a79c7u);
  /* 127a79c7 mov esi, eax */
  ESI = (EAX);
  /* 127a79c9 call 0x127ac660 */
  push32(0x127a79ceu); f_127ac660();
  /* 127a79ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 127a79d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a79d2 call 0x127a8220 */
  push32(0x127a79d7u); f_127a8220();
  /* 127a79d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a79da jmp 0x127a7b38 */
  goto L_127a7b38;
L_127a79df:;
  /* 127a79df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a79e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a79e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a79e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a79eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a79ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a79f2 ja 0x127a7a52 */
  if ((!C.cf&&!C.zf)) goto L_127a7a52;
  /* 127a79f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a79f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a79f9 mov dl, byte ptr [eax + 0x127a7b5f] */
  DL = (r8((uint32_t)(EAX + 0x127a7b5f)));
  /* 127a79ff jmp dword ptr [edx*4 + 0x127a7b4b] */
  switch (EDX) {
    case 0: goto L_127a7a06;
    case 1: goto L_127a7a40;
    case 2: goto L_127a7a1a;
    case 3: goto L_127a7a2d;
    case 4: goto L_127a7a52;
    default: x86_unimpl("switch@0x127a79ff out of table"); return;
  }
L_127a7a06:;
  /* 127a7a06 mov ecx, dword ptr [0x127d067c] */
  ECX = (r32((uint32_t)(0x127d067c)));
  /* 127a7a0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a7a0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7a12 mov dword ptr [0x127d067c], edx */
  w32((uint32_t)(0x127d067c), (EDX));
  /* 127a7a18 jmp 0x127a7a52 */
  goto L_127a7a52;
L_127a7a1a:;
  /* 127a7a1a mov eax, dword ptr [0x127d0680] */
  EAX = (r32((uint32_t)(0x127d0680)));
  /* 127a7a1f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7a22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7a25 mov dword ptr [0x127d0680], ecx */
  w32((uint32_t)(0x127d0680), (ECX));
  /* 127a7a2b jmp 0x127a7a52 */
  goto L_127a7a52;
L_127a7a2d:;
  /* 127a7a2d mov edx, dword ptr [0x127d0684] */
  EDX = (r32((uint32_t)(0x127d0684)));
  /* 127a7a33 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127a7a36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7a39 mov dword ptr [0x127d0684], eax */
  w32((uint32_t)(0x127d0684), (EAX));
  /* 127a7a3e jmp 0x127a7a52 */
  goto L_127a7a52;
L_127a7a40:;
  /* 127a7a40 mov ecx, dword ptr [0x127d0688] */
  ECX = (r32((uint32_t)(0x127d0688)));
  /* 127a7a46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a7a49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7a4c mov dword ptr [0x127d0688], edx */
  w32((uint32_t)(0x127d0688), (EDX));
L_127a7a52:;
  /* 127a7a52 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7a54 call 0x127a8220 */
  push32(0x127a7a59u); f_127a8220();
  /* 127a7a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7a5c jmp 0x127a7b33 */
  goto L_127a7b33;
L_127a7a61:;
  /* 127a7a61 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7a65 je 0x127a7a78 */
  if (C.zf) goto L_127a7a78;
  /* 127a7a67 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7a6b je 0x127a7a78 */
  if (C.zf) goto L_127a7a78;
  /* 127a7a6d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7a71 je 0x127a7a78 */
  if (C.zf) goto L_127a7a78;
  /* 127a7a73 jmp 0x127a7b38 */
  goto L_127a7b38;
L_127a7a78:;
  /* 127a7a78 call 0x127a41c0 */
  push32(0x127a7a7du); f_127a41c0();
  /* 127a7a7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a7a80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7a83 cmp dword ptr [eax + 0x50], 0x127cec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x127cec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7a8a jne 0x127a7ad5 */
  if (!C.zf) goto L_127a7ad5;
  /* 127a7a8c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 127a7a91 push 0x127cbeb0 */
  push32((uint32_t)(0x127cbeb0u));
  /* 127a7a96 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a7a98 mov ecx, dword ptr [0x127cec80] */
  ECX = (r32((uint32_t)(0x127cec80)));
  /* 127a7a9e push ecx */
  push32((uint32_t)(ECX));
  /* 127a7a9f call 0x127a4780 */
  push32(0x127a7aa4u); f_127a4780();
  /* 127a7aa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7aa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7aaa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 127a7aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7ab0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7ab4 je 0x127a7ad3 */
  if (C.zf) goto L_127a7ad3;
  /* 127a7ab6 mov ecx, dword ptr [0x127cec80] */
  ECX = (r32((uint32_t)(0x127cec80)));
  /* 127a7abc push ecx */
  push32((uint32_t)(ECX));
  /* 127a7abd push 0x127cec00 */
  push32((uint32_t)(0x127cec00u));
  /* 127a7ac2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7ac5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 127a7ac8 push eax */
  push32((uint32_t)(EAX));
  /* 127a7ac9 call 0x127ab060 */
  push32(0x127a7aceu); f_127ab060();
  /* 127a7ace add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ad1 jmp 0x127a7ad5 */
  goto L_127a7ad5;
L_127a7ad3:;
  /* 127a7ad3 jmp 0x127a7b38 */
  goto L_127a7b38;
L_127a7ad5:;
  /* 127a7ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7ad8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127a7adb push edx */
  push32((uint32_t)(EDX));
  /* 127a7adc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7adf push eax */
  push32((uint32_t)(EAX));
  /* 127a7ae0 call 0x127a7e60 */
  push32(0x127a7ae5u); f_127a7e60();
  /* 127a7ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ae8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a7aeb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7aef jne 0x127a7af3 */
  if (!C.zf) goto L_127a7af3;
  /* 127a7af1 jmp 0x127a7b38 */
  goto L_127a7b38;
L_127a7af3:;
  /* 127a7af3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7af6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a7af9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127a7afc:;
  /* 127a7afc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7aff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a7b02 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7b05 jne 0x127a7b33 */
  if (!C.zf) goto L_127a7b33;
  /* 127a7b07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7b0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7b0d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a7b10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7b13 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7b16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a7b19 mov edx, dword ptr [0x127cec84] */
  EDX = (r32((uint32_t)(0x127cec84)));
  /* 127a7b1f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a7b22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7b25 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 127a7b28 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7b2a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7b2d jb 0x127a7b31 */
  if (C.cf) goto L_127a7b31;
  /* 127a7b2f jmp 0x127a7b33 */
  goto L_127a7b33;
L_127a7b31:;
  /* 127a7b31 jmp 0x127a7afc */
  goto L_127a7afc;
L_127a7b33:;
  /* 127a7b33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7b36 jmp 0x127a7b46 */
  goto L_127a7b46;
L_127a7b38:;
  /* 127a7b38 call 0x127ac650 */
  push32(0x127a7b3du); f_127ac650();
  /* 127a7b3d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 127a7b43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127a7b46:;
  /* 127a7b46 pop esi */
  ESI = (pop32());
  /* 127a7b47 mov esp, ebp */
  ESP = (EBP);
  /* 127a7b49 pop ebp */
  EBP = (pop32());
  /* 127a7b4a ret  */
  ESPCHK(0x127a7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b80 @ 0x127a7b80 (146 bytes, 45 insns) */
void f_127a7b80(void) {
  FTRACE(0x127a7b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7b80 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7b81 mov ebp, esp */
  EBP = (ESP);
  /* 127a7b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7b86 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7b88 call 0x127a8180 */
  push32(0x127a7b8du); f_127a8180();
  /* 127a7b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7b90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7b94 jne 0x127a7bae */
  if (!C.zf) goto L_127a7bae;
  /* 127a7b96 mov dword ptr [ebp - 8], 0x127d067c */
  w32((uint32_t)(EBP + -0x8), (0x127d067cu));
  /* 127a7b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7ba0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a7ba2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a7ba5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127a7bac jmp 0x127a7bc4 */
  goto L_127a7bc4;
L_127a7bae:;
  /* 127a7bae mov dword ptr [ebp - 8], 0x127d0680 */
  w32((uint32_t)(EBP + -0x8), (0x127d0680u));
  /* 127a7bb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7bb8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a7bba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7bbd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_127a7bc4:;
  /* 127a7bc4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7bc8 jne 0x127a7bd8 */
  if (!C.zf) goto L_127a7bd8;
  /* 127a7bca push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7bcc call 0x127a8220 */
  push32(0x127a7bd1u); f_127a8220();
  /* 127a7bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7bd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a7bd6 jmp 0x127a7c0c */
  goto L_127a7c0c;
L_127a7bd8:;
  /* 127a7bd8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7bdc je 0x127a7bfd */
  if (C.zf) goto L_127a7bfd;
  /* 127a7bde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7be1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 127a7be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7be9 call 0x127a8220 */
  push32(0x127a7beeu); f_127a8220();
  /* 127a7bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7bf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7bf4 push edx */
  push32((uint32_t)(EDX));
  /* 127a7bf5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x127a7bf8u);
  /* 127a7bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7bfb jmp 0x127a7c07 */
  goto L_127a7c07;
L_127a7bfd:;
  /* 127a7bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7bff call 0x127a8220 */
  push32(0x127a7c04u); f_127a8220();
  /* 127a7c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7c07:;
  /* 127a7c07 mov eax, 1 */
  EAX = (0x1u);
L_127a7c0c:;
  /* 127a7c0c mov esp, ebp */
  ESP = (EBP);
  /* 127a7c0e pop ebp */
  EBP = (pop32());
  /* 127a7c0f ret 4 */
  ESPCHK(0x127a7b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10007c20 @ 0x127a7c20 (522 bytes, 162 insns) [1 switch table(s)] */
void f_127a7c20(void) {
  FTRACE(0x127a7c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7c20 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7c21 mov ebp, esp */
  EBP = (ESP);
  /* 127a7c23 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7c26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127a7c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7c30 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127a7c33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a7c36 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7c39 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127a7c3c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7c40 ja 0x127a7cee */
  if ((!C.cf&&!C.zf)) goto L_127a7cee;
  /* 127a7c46 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a7c49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a7c4b mov dl, byte ptr [eax + 0x127a7e42] */
  DL = (r8((uint32_t)(EAX + 0x127a7e42)));
  /* 127a7c51 jmp dword ptr [edx*4 + 0x127a7e2a] */
  switch (EDX) {
    case 0: goto L_127a7c58;
    case 1: goto L_127a7cc3;
    case 2: goto L_127a7ca9;
    case 3: goto L_127a7c75;
    case 4: goto L_127a7c8f;
    case 5: goto L_127a7cee;
    default: x86_unimpl("switch@0x127a7c51 out of table"); return;
  }
L_127a7c58:;
  /* 127a7c58 mov dword ptr [ebp - 0x18], 0x127d067c */
  w32((uint32_t)(EBP + -0x18), (0x127d067cu));
  /* 127a7c5f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7c62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a7c64 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a7c67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7c6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7c6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7c70 jmp 0x127a7cf6 */
  goto L_127a7cf6;
L_127a7c75:;
  /* 127a7c75 mov dword ptr [ebp - 0x18], 0x127d0680 */
  w32((uint32_t)(EBP + -0x18), (0x127d0680u));
  /* 127a7c7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7c7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a7c81 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a7c84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7c87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7c8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7c8d jmp 0x127a7cf6 */
  goto L_127a7cf6;
L_127a7c8f:;
  /* 127a7c8f mov dword ptr [ebp - 0x18], 0x127d0684 */
  w32((uint32_t)(EBP + -0x18), (0x127d0684u));
  /* 127a7c96 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7c99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a7c9b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a7c9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7ca1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ca4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7ca7 jmp 0x127a7cf6 */
  goto L_127a7cf6;
L_127a7ca9:;
  /* 127a7ca9 mov dword ptr [ebp - 0x18], 0x127d0688 */
  w32((uint32_t)(EBP + -0x18), (0x127d0688u));
  /* 127a7cb0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7cb3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a7cb5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a7cb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a7cbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7cbe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a7cc1 jmp 0x127a7cf6 */
  goto L_127a7cf6;
L_127a7cc3:;
  /* 127a7cc3 call 0x127a41c0 */
  push32(0x127a7cc8u); f_127a41c0();
  /* 127a7cc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a7ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7cce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127a7cd1 push edx */
  push32((uint32_t)(EDX));
  /* 127a7cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7cd5 push eax */
  push32((uint32_t)(EAX));
  /* 127a7cd6 call 0x127a7e60 */
  push32(0x127a7cdbu); f_127a7e60();
  /* 127a7cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7cde add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ce1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a7ce4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7ce7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a7ce9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a7cec jmp 0x127a7cf6 */
  goto L_127a7cf6;
L_127a7cee:;
  /* 127a7cee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a7cf1 jmp 0x127a7e26 */
  goto L_127a7e26;
L_127a7cf6:;
  /* 127a7cf6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7cfa je 0x127a7d06 */
  if (C.zf) goto L_127a7d06;
  /* 127a7cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7cfe call 0x127a8180 */
  push32(0x127a7d03u); f_127a8180();
  /* 127a7d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7d06:;
  /* 127a7d06 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d0a jne 0x127a7d23 */
  if (!C.zf) goto L_127a7d23;
  /* 127a7d0c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d10 je 0x127a7d1c */
  if (C.zf) goto L_127a7d1c;
  /* 127a7d12 push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7d14 call 0x127a8220 */
  push32(0x127a7d19u); f_127a8220();
  /* 127a7d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7d1c:;
  /* 127a7d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a7d1e jmp 0x127a7e26 */
  goto L_127a7e26;
L_127a7d23:;
  /* 127a7d23 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d27 jne 0x127a7d40 */
  if (!C.zf) goto L_127a7d40;
  /* 127a7d29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d2d je 0x127a7d39 */
  if (C.zf) goto L_127a7d39;
  /* 127a7d2f push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7d31 call 0x127a8220 */
  push32(0x127a7d36u); f_127a8220();
  /* 127a7d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7d39:;
  /* 127a7d39 push 3 */
  push32((uint32_t)(0x3u));
  /* 127a7d3b call 0x127a3f40 */
  push32(0x127a7d40u); f_127a3f40();
L_127a7d40:;
  /* 127a7d40 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d44 je 0x127a7d52 */
  if (C.zf) goto L_127a7d52;
  /* 127a7d46 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d4a je 0x127a7d52 */
  if (C.zf) goto L_127a7d52;
  /* 127a7d4c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d50 jne 0x127a7d7e */
  if (!C.zf) goto L_127a7d7e;
L_127a7d52:;
  /* 127a7d52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7d55 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 127a7d58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127a7d5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7d5e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 127a7d65 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d69 jne 0x127a7d7e */
  if (!C.zf) goto L_127a7d7e;
  /* 127a7d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7d6e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 127a7d71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a7d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7d77 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_127a7d7e:;
  /* 127a7d7e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7d82 jne 0x127a7dc0 */
  if (!C.zf) goto L_127a7dc0;
  /* 127a7d84 mov eax, dword ptr [0x127cec78] */
  EAX = (r32((uint32_t)(0x127cec78)));
  /* 127a7d89 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a7d8c jmp 0x127a7d97 */
  goto L_127a7d97;
L_127a7d8e:;
  /* 127a7d8e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a7d91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7d94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127a7d97:;
  /* 127a7d97 mov edx, dword ptr [0x127cec78] */
  EDX = (r32((uint32_t)(0x127cec78)));
  /* 127a7d9d add edx, dword ptr [0x127cec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7da3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7da6 jge 0x127a7dbe */
  if ((C.sf==C.of)) goto L_127a7dbe;
  /* 127a7da8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a7dab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a7dae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7db1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127a7db4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 127a7dbc jmp 0x127a7d8e */
  goto L_127a7d8e;
L_127a7dbe:;
  /* 127a7dbe jmp 0x127a7dc9 */
  goto L_127a7dc9;
L_127a7dc0:;
  /* 127a7dc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a7dc3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127a7dc9:;
  /* 127a7dc9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7dcd je 0x127a7dd9 */
  if (C.zf) goto L_127a7dd9;
  /* 127a7dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 127a7dd1 call 0x127a8220 */
  push32(0x127a7dd6u); f_127a8220();
  /* 127a7dd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7dd9:;
  /* 127a7dd9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7ddd jne 0x127a7df0 */
  if (!C.zf) goto L_127a7df0;
  /* 127a7ddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7de2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 127a7de5 push edx */
  push32((uint32_t)(EDX));
  /* 127a7de6 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a7de8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x127a7debu);
  /* 127a7deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7dee jmp 0x127a7dfa */
  goto L_127a7dfa;
L_127a7df0:;
  /* 127a7df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7df3 push eax */
  push32((uint32_t)(EAX));
  /* 127a7df4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x127a7df7u);
  /* 127a7df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a7dfa:;
  /* 127a7dfa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7dfe je 0x127a7e0c */
  if (C.zf) goto L_127a7e0c;
  /* 127a7e00 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7e04 je 0x127a7e0c */
  if (C.zf) goto L_127a7e0c;
  /* 127a7e06 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7e0a jne 0x127a7e24 */
  if (!C.zf) goto L_127a7e24;
L_127a7e0c:;
  /* 127a7e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7e0f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a7e12 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 127a7e15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7e19 jne 0x127a7e24 */
  if (!C.zf) goto L_127a7e24;
  /* 127a7e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7e1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7e21 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_127a7e24:;
  /* 127a7e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a7e26:;
  /* 127a7e26 mov esp, ebp */
  ESP = (EBP);
  /* 127a7e28 pop ebp */
  EBP = (pop32());
  /* 127a7e29 ret  */
  ESPCHK(0x127a7c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x127a7e60 (91 bytes, 35 insns) */
void f_127a7e60(void) {
  FTRACE(0x127a7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7e61 mov ebp, esp */
  EBP = (ESP);
  /* 127a7e63 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7e64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7e67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a7e6a:;
  /* 127a7e6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7e6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a7e70 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7e73 je 0x127a7e93 */
  if (C.zf) goto L_127a7e93;
  /* 127a7e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7e78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7e7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a7e7e mov ecx, dword ptr [0x127cec84] */
  ECX = (r32((uint32_t)(0x127cec84)));
  /* 127a7e84 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a7e87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7e8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7e8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7e8f jae 0x127a7e93 */
  if (!C.cf) goto L_127a7e93;
  /* 127a7e91 jmp 0x127a7e6a */
  goto L_127a7e6a;
L_127a7e93:;
  /* 127a7e93 mov eax, dword ptr [0x127cec84] */
  EAX = (r32((uint32_t)(0x127cec84)));
  /* 127a7e98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a7e9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7e9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ea0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7ea3 jae 0x127a7eb5 */
  if (!C.cf) goto L_127a7eb5;
  /* 127a7ea5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7ea8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a7eab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7eae jne 0x127a7eb5 */
  if (!C.zf) goto L_127a7eb5;
  /* 127a7eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7eb3 jmp 0x127a7eb7 */
  goto L_127a7eb7;
L_127a7eb5:;
  /* 127a7eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a7eb7:;
  /* 127a7eb7 mov esp, ebp */
  ESP = (EBP);
  /* 127a7eb9 pop ebp */
  EBP = (pop32());
  /* 127a7eba ret  */
  ESPCHK(0x127a7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x127a7ec0 (13 bytes, 6 insns) */
void f_127a7ec0(void) {
  FTRACE(0x127a7ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7ec1 mov ebp, esp */
  EBP = (ESP);
  /* 127a7ec3 call 0x127a41c0 */
  push32(0x127a7ec8u); f_127a41c0();
  /* 127a7ec8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7ecb pop ebp */
  EBP = (pop32());
  /* 127a7ecc ret  */
  ESPCHK(0x127a7ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x127a7ed0 (13 bytes, 6 insns) */
void f_127a7ed0(void) {
  FTRACE(0x127a7ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7ed1 mov ebp, esp */
  EBP = (ESP);
  /* 127a7ed3 call 0x127a41c0 */
  push32(0x127a7ed8u); f_127a41c0();
  /* 127a7ed8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a7edb pop ebp */
  EBP = (pop32());
  /* 127a7edc ret  */
  ESPCHK(0x127a7ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee0 @ 0x127a7ee0 (187 bytes, 54 insns) */
void f_127a7ee0(void) {
  FTRACE(0x127a7ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a7ee1 mov ebp, esp */
  EBP = (ESP);
  /* 127a7ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a7ee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a7eed cmp dword ptr [0x127d0690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7ef4 jne 0x127a7f53 */
  if (!C.zf) goto L_127a7f53;
  /* 127a7ef6 push 0x127cb2dc */
  push32((uint32_t)(0x127cb2dcu));
  /* 127a7efb call dword ptr [0x127d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32ac))), 0x127a7f01u);
  /* 127a7f01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a7f04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7f08 je 0x127a7f27 */
  if (C.zf) goto L_127a7f27;
  /* 127a7f0a push 0x127cbee0 */
  push32((uint32_t)(0x127cbee0u));
  /* 127a7f0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7f12 push eax */
  push32((uint32_t)(EAX));
  /* 127a7f13 call dword ptr [0x127d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a8))), 0x127a7f19u);
  /* 127a7f19 mov dword ptr [0x127d0690], eax */
  w32((uint32_t)(0x127d0690), (EAX));
  /* 127a7f1e cmp dword ptr [0x127d0690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7f25 jne 0x127a7f2b */
  if (!C.zf) goto L_127a7f2b;
L_127a7f27:;
  /* 127a7f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a7f29 jmp 0x127a7f97 */
  goto L_127a7f97;
L_127a7f2b:;
  /* 127a7f2b push 0x127cbed0 */
  push32((uint32_t)(0x127cbed0u));
  /* 127a7f30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7f33 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7f34 call dword ptr [0x127d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a8))), 0x127a7f3au);
  /* 127a7f3a mov dword ptr [0x127d0694], eax */
  w32((uint32_t)(0x127d0694), (EAX));
  /* 127a7f3f push 0x127cbebc */
  push32((uint32_t)(0x127cbebcu));
  /* 127a7f44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a7f47 push edx */
  push32((uint32_t)(EDX));
  /* 127a7f48 call dword ptr [0x127d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a8))), 0x127a7f4eu);
  /* 127a7f4e mov dword ptr [0x127d0698], eax */
  w32((uint32_t)(0x127d0698), (EAX));
L_127a7f53:;
  /* 127a7f53 cmp dword ptr [0x127d0694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7f5a je 0x127a7f65 */
  if (C.zf) goto L_127a7f65;
  /* 127a7f5c call dword ptr [0x127d0694] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d0694))), 0x127a7f62u);
  /* 127a7f62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a7f65:;
  /* 127a7f65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7f69 je 0x127a7f81 */
  if (C.zf) goto L_127a7f81;
  /* 127a7f6b cmp dword ptr [0x127d0698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a7f72 je 0x127a7f81 */
  if (C.zf) goto L_127a7f81;
  /* 127a7f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7f77 push eax */
  push32((uint32_t)(EAX));
  /* 127a7f78 call dword ptr [0x127d0698] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d0698))), 0x127a7f7eu);
  /* 127a7f7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a7f81:;
  /* 127a7f81 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a7f84 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7f85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a7f88 push edx */
  push32((uint32_t)(EDX));
  /* 127a7f89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a7f8c push eax */
  push32((uint32_t)(EAX));
  /* 127a7f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a7f90 push ecx */
  push32((uint32_t)(ECX));
  /* 127a7f91 call dword ptr [0x127d0690] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d0690))), 0x127a7f97u);
L_127a7f97:;
  /* 127a7f97 mov esp, ebp */
  ESP = (EBP);
  /* 127a7f99 pop ebp */
  EBP = (pop32());
  /* 127a7f9a ret  */
  ESPCHK(0x127a7ee0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x127a7fa0 (254 bytes, 109 insns) */
void f_127a7fa0(void) {
  FTRACE(0x127a7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a7fa0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 127a7fa4 push edi */
  push32((uint32_t)(EDI));
  /* 127a7fa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a7fa7 je 0x127a8023 */
  if (C.zf) goto L_127a8023;
  /* 127a7fa9 push esi */
  push32((uint32_t)(ESI));
  /* 127a7faa push ebx */
  push32((uint32_t)(EBX));
  /* 127a7fab mov ebx, ecx */
  EBX = (ECX);
  /* 127a7fad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 127a7fb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 127a7fb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 127a7fbb jne 0x127a7fc4 */
  if (!C.zf) goto L_127a7fc4;
  /* 127a7fbd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127a7fc0 jne 0x127a8031 */
  if (!C.zf) goto L_127a8031;
  /* 127a7fc2 jmp 0x127a7fe5 */
  goto L_127a7fe5;
L_127a7fc4:;
  /* 127a7fc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127a7fc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127a7fc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a7fc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a7fca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a7fcb je 0x127a7ff2 */
  if (C.zf) goto L_127a7ff2;
  /* 127a7fcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a7fcf je 0x127a7ffa */
  if (C.zf) goto L_127a7ffa;
  /* 127a7fd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 127a7fd7 jne 0x127a7fc4 */
  if (!C.zf) goto L_127a7fc4;
  /* 127a7fd9 mov ebx, ecx */
  EBX = (ECX);
  /* 127a7fdb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127a7fde jne 0x127a8031 */
  if (!C.zf) goto L_127a8031;
L_127a7fe0:;
  /* 127a7fe0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 127a7fe3 je 0x127a7ff2 */
  if (C.zf) goto L_127a7ff2;
L_127a7fe5:;
  /* 127a7fe5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127a7fe7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127a7fe8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a7fea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a7feb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127a7fed je 0x127a801e */
  if (C.zf) goto L_127a801e;
  /* 127a7fef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 127a7ff0 jne 0x127a7fe5 */
  if (!C.zf) goto L_127a7fe5;
L_127a7ff2:;
  /* 127a7ff2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127a7ff6 pop ebx */
  EBX = (pop32());
  /* 127a7ff7 pop esi */
  ESI = (pop32());
  /* 127a7ff8 pop edi */
  EDI = (pop32());
  /* 127a7ff9 ret  */
  ESPCHK(0x127a7fa0u, _esp0);
  ESP += 4; return;
L_127a7ffa:;
  /* 127a7ffa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127a8000 je 0x127a8014 */
  if (C.zf) goto L_127a8014;
L_127a8002:;
  /* 127a8002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a8004 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a8005 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a8006 je 0x127a8096 */
  if (C.zf) goto L_127a8096;
  /* 127a800c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127a8012 jne 0x127a8002 */
  if (!C.zf) goto L_127a8002;
L_127a8014:;
  /* 127a8014 mov ebx, ecx */
  EBX = (ECX);
  /* 127a8016 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127a8019 jne 0x127a8087 */
  if (!C.zf) goto L_127a8087;
L_127a801b:;
  /* 127a801b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a801d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_127a801e:;
  /* 127a801e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 127a801f jne 0x127a801b */
  if (!C.zf) goto L_127a801b;
  /* 127a8021 pop ebx */
  EBX = (pop32());
  /* 127a8022 pop esi */
  ESI = (pop32());
L_127a8023:;
  /* 127a8023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a8027 pop edi */
  EDI = (pop32());
  /* 127a8028 ret  */
  ESPCHK(0x127a7fa0u, _esp0);
  ESP += 4; return;
L_127a8029:;
  /* 127a8029 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a802b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127a802e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a802f je 0x127a7fe0 */
  if (C.zf) goto L_127a7fe0;
L_127a8031:;
  /* 127a8031 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127a8036 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 127a8038 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a803a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a803d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a803f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 127a8041 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8044 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127a8049 je 0x127a8029 */
  if (C.zf) goto L_127a8029;
  /* 127a804b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 127a804d je 0x127a807b */
  if (C.zf) goto L_127a807b;
  /* 127a804f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 127a8051 je 0x127a8071 */
  if (C.zf) goto L_127a8071;
  /* 127a8053 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 127a8059 je 0x127a8067 */
  if (C.zf) goto L_127a8067;
  /* 127a805b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 127a8061 jne 0x127a8029 */
  if (!C.zf) goto L_127a8029;
  /* 127a8063 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a8065 jmp 0x127a807f */
  goto L_127a807f;
L_127a8067:;
  /* 127a8067 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a806d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a806f jmp 0x127a807f */
  goto L_127a807f;
L_127a8071:;
  /* 127a8071 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a8077 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127a8079 jmp 0x127a807f */
  goto L_127a807f;
L_127a807b:;
  /* 127a807b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127a807d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_127a807f:;
  /* 127a807f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8084 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a8085 je 0x127a8091 */
  if (C.zf) goto L_127a8091;
L_127a8087:;
  /* 127a8087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a8089:;
  /* 127a8089 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 127a808b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127a808e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a808f jne 0x127a8089 */
  if (!C.zf) goto L_127a8089;
L_127a8091:;
  /* 127a8091 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 127a8094 jne 0x127a801b */
  if (!C.zf) goto L_127a801b;
L_127a8096:;
  /* 127a8096 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127a809a pop ebx */
  EBX = (pop32());
  /* 127a809b pop esi */
  ESI = (pop32());
  /* 127a809c pop edi */
  EDI = (pop32());
  /* 127a809d ret  */
  ESPCHK(0x127a7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080a0 @ 0x127a80a0 (55 bytes, 16 insns) */
void f_127a80a0(void) {
  FTRACE(0x127a80a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a80a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a80a1 mov ebp, esp */
  EBP = (ESP);
  /* 127a80a3 mov eax, dword ptr [0x127ceb84] */
  EAX = (r32((uint32_t)(0x127ceb84)));
  /* 127a80a8 push eax */
  push32((uint32_t)(EAX));
  /* 127a80a9 call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127a80afu);
  /* 127a80af mov ecx, dword ptr [0x127ceb74] */
  ECX = (r32((uint32_t)(0x127ceb74)));
  /* 127a80b5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a80b6 call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127a80bcu);
  /* 127a80bc mov edx, dword ptr [0x127ceb64] */
  EDX = (r32((uint32_t)(0x127ceb64)));
  /* 127a80c2 push edx */
  push32((uint32_t)(EDX));
  /* 127a80c3 call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127a80c9u);
  /* 127a80c9 mov eax, dword ptr [0x127ceb44] */
  EAX = (r32((uint32_t)(0x127ceb44)));
  /* 127a80ce push eax */
  push32((uint32_t)(EAX));
  /* 127a80cf call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127a80d5u);
  /* 127a80d5 pop ebp */
  EBP = (pop32());
  /* 127a80d6 ret  */
  ESPCHK(0x127a80a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x127a80e0 (159 bytes, 47 insns) */
void f_127a80e0(void) {
  FTRACE(0x127a80e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a80e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a80e1 mov ebp, esp */
  EBP = (ESP);
  /* 127a80e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a80e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a80eb jmp 0x127a80f6 */
  goto L_127a80f6;
L_127a80ed:;
  /* 127a80ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a80f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a80f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a80f6:;
  /* 127a80f6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a80fa jge 0x127a8149 */
  if ((C.sf==C.of)) goto L_127a8149;
  /* 127a80fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a80ff cmp dword ptr [ecx*4 + 0x127ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x127ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8107 je 0x127a8147 */
  if (C.zf) goto L_127a8147;
  /* 127a8109 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a810d je 0x127a8147 */
  if (C.zf) goto L_127a8147;
  /* 127a810f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8113 je 0x127a8147 */
  if (C.zf) goto L_127a8147;
  /* 127a8115 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8119 je 0x127a8147 */
  if (C.zf) goto L_127a8147;
  /* 127a811b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a811f je 0x127a8147 */
  if (C.zf) goto L_127a8147;
  /* 127a8121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8124 mov eax, dword ptr [edx*4 + 0x127ceb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127ceb40)));
  /* 127a812b push eax */
  push32((uint32_t)(EAX));
  /* 127a812c call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a8132u);
  /* 127a8132 push 2 */
  push32((uint32_t)(0x2u));
  /* 127a8134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8137 mov edx, dword ptr [ecx*4 + 0x127ceb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127ceb40)));
  /* 127a813e push edx */
  push32((uint32_t)(EDX));
  /* 127a813f call 0x127a5210 */
  push32(0x127a8144u); f_127a5210();
  /* 127a8144 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a8147:;
  /* 127a8147 jmp 0x127a80ed */
  goto L_127a80ed;
L_127a8149:;
  /* 127a8149 mov eax, dword ptr [0x127ceb64] */
  EAX = (r32((uint32_t)(0x127ceb64)));
  /* 127a814e push eax */
  push32((uint32_t)(EAX));
  /* 127a814f call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a8155u);
  /* 127a8155 mov ecx, dword ptr [0x127ceb74] */
  ECX = (r32((uint32_t)(0x127ceb74)));
  /* 127a815b push ecx */
  push32((uint32_t)(ECX));
  /* 127a815c call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a8162u);
  /* 127a8162 mov edx, dword ptr [0x127ceb84] */
  EDX = (r32((uint32_t)(0x127ceb84)));
  /* 127a8168 push edx */
  push32((uint32_t)(EDX));
  /* 127a8169 call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a816fu);
  /* 127a816f mov eax, dword ptr [0x127ceb44] */
  EAX = (r32((uint32_t)(0x127ceb44)));
  /* 127a8174 push eax */
  push32((uint32_t)(EAX));
  /* 127a8175 call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127a817bu);
  /* 127a817b mov esp, ebp */
  ESP = (EBP);
  /* 127a817d pop ebp */
  EBP = (pop32());
  /* 127a817e ret  */
  ESPCHK(0x127a80e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x127a8180 (151 bytes, 46 insns) */
void f_127a8180(void) {
  FTRACE(0x127a8180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8180 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8181 mov ebp, esp */
  EBP = (ESP);
  /* 127a8183 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8187 cmp dword ptr [eax*4 + 0x127ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x127ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a818f jne 0x127a8202 */
  if (!C.zf) goto L_127a8202;
  /* 127a8191 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 127a8196 push 0x127cbeec */
  push32((uint32_t)(0x127cbeecu));
  /* 127a819b push 2 */
  push32((uint32_t)(0x2u));
  /* 127a819d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127a819f call 0x127a4780 */
  push32(0x127a81a4u); f_127a4780();
  /* 127a81a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a81a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a81aa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a81ae jne 0x127a81ba */
  if (!C.zf) goto L_127a81ba;
  /* 127a81b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127a81b2 call 0x127a36f0 */
  push32(0x127a81b7u); f_127a36f0();
  /* 127a81b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a81ba:;
  /* 127a81ba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127a81bc call 0x127a8180 */
  push32(0x127a81c1u); f_127a8180();
  /* 127a81c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a81c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a81c7 cmp dword ptr [ecx*4 + 0x127ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x127ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a81cf jne 0x127a81ea */
  if (!C.zf) goto L_127a81ea;
  /* 127a81d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a81d4 push edx */
  push32((uint32_t)(EDX));
  /* 127a81d5 call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127a81dbu);
  /* 127a81db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a81de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a81e1 mov dword ptr [eax*4 + 0x127ceb40], ecx */
  w32((uint32_t)(EAX*4 + 0x127ceb40), (ECX));
  /* 127a81e8 jmp 0x127a81f8 */
  goto L_127a81f8;
L_127a81ea:;
  /* 127a81ea push 2 */
  push32((uint32_t)(0x2u));
  /* 127a81ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a81ef push edx */
  push32((uint32_t)(EDX));
  /* 127a81f0 call 0x127a5210 */
  push32(0x127a81f5u); f_127a5210();
  /* 127a81f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a81f8:;
  /* 127a81f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127a81fa call 0x127a8220 */
  push32(0x127a81ffu); f_127a8220();
  /* 127a81ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a8202:;
  /* 127a8202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8205 mov ecx, dword ptr [eax*4 + 0x127ceb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127ceb40)));
  /* 127a820c push ecx */
  push32((uint32_t)(ECX));
  /* 127a820d call dword ptr [0x127d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3328))), 0x127a8213u);
  /* 127a8213 mov esp, ebp */
  ESP = (EBP);
  /* 127a8215 pop ebp */
  EBP = (pop32());
  /* 127a8216 ret  */
  ESPCHK(0x127a8180u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x127a8220 (22 bytes, 8 insns) */
void f_127a8220(void) {
  FTRACE(0x127a8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8220 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8221 mov ebp, esp */
  EBP = (ESP);
  /* 127a8223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8226 mov ecx, dword ptr [eax*4 + 0x127ceb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127ceb40)));
  /* 127a822d push ecx */
  push32((uint32_t)(ECX));
  /* 127a822e call dword ptr [0x127d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d332c))), 0x127a8234u);
  /* 127a8234 pop ebp */
  EBP = (pop32());
  /* 127a8235 ret  */
  ESPCHK(0x127a8220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x127a8240 (26 bytes, 10 insns) */
void f_127a8240(void) {
  FTRACE(0x127a8240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8240 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8241 mov ebp, esp */
  EBP = (ESP);
  /* 127a8243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8246 push eax */
  push32((uint32_t)(EAX));
  /* 127a8247 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8249 call dword ptr [0x127d3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3330))), 0x127a824fu);
  /* 127a824f push 0xff */
  push32((uint32_t)(0xffu));
  /* 127a8254 call dword ptr [0x127d32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b8))), 0x127a825au);
  /* 127a825a pop ebp */
  EBP = (pop32());
  /* 127a825b ret  */
  ESPCHK(0x127a8240u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x127a8260 (446 bytes, 130 insns) */
void f_127a8260(void) {
  FTRACE(0x127a8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8260 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8261 mov ebp, esp */
  EBP = (ESP);
  /* 127a8263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8266 call 0x127a41c0 */
  push32(0x127a826bu); f_127a41c0();
  /* 127a826b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a826e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8271 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 127a8274 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8278 push edx */
  push32((uint32_t)(EDX));
  /* 127a8279 call 0x127a8420 */
  push32(0x127a827eu); f_127a8420();
  /* 127a827e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8281 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a8284 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8288 je 0x127a8293 */
  if (C.zf) goto L_127a8293;
  /* 127a828a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a828d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8291 jne 0x127a82a2 */
  if (!C.zf) goto L_127a82a2;
L_127a8293:;
  /* 127a8293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8296 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8297 call dword ptr [0x127d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3334))), 0x127a829du);
  /* 127a829d jmp 0x127a841a */
  goto L_127a841a;
L_127a82a2:;
  /* 127a82a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a82a5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a82a9 jne 0x127a82bf */
  if (!C.zf) goto L_127a82bf;
  /* 127a82ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a82ae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 127a82b5 mov eax, 1 */
  EAX = (0x1u);
  /* 127a82ba jmp 0x127a841a */
  goto L_127a841a;
L_127a82bf:;
  /* 127a82bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a82c2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a82c6 jne 0x127a82d0 */
  if (!C.zf) goto L_127a82d0;
  /* 127a82c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a82cb jmp 0x127a841a */
  goto L_127a841a;
L_127a82d0:;
  /* 127a82d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a82d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127a82d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a82d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a82dc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 127a82df mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127a82e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a82e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a82e8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 127a82eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a82ee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a82f2 jne 0x127a83f7 */
  if (!C.zf) goto L_127a83f7;
  /* 127a82f8 mov eax, dword ptr [0x127cec78] */
  EAX = (r32((uint32_t)(0x127cec78)));
  /* 127a82fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127a8300 jmp 0x127a830b */
  goto L_127a830b;
L_127a8302:;
  /* 127a8302 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a8305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8308 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127a830b:;
  /* 127a830b mov edx, dword ptr [0x127cec78] */
  EDX = (r32((uint32_t)(0x127cec78)));
  /* 127a8311 add edx, dword ptr [0x127cec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8317 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a831a jge 0x127a8332 */
  if ((C.sf==C.of)) goto L_127a8332;
  /* 127a831c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a831f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a8322 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8325 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127a8328 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 127a8330 jmp 0x127a8302 */
  goto L_127a8302;
L_127a8332:;
  /* 127a8332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8335 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 127a8338 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a833b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a833e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8344 jne 0x127a8355 */
  if (!C.zf) goto L_127a8355;
  /* 127a8346 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8349 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 127a8350 jmp 0x127a83dd */
  goto L_127a83dd;
L_127a8355:;
  /* 127a8355 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a8358 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a835e jne 0x127a836c */
  if (!C.zf) goto L_127a836c;
  /* 127a8360 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8363 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 127a836a jmp 0x127a83dd */
  goto L_127a83dd;
L_127a836c:;
  /* 127a836c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a836f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8375 jne 0x127a8383 */
  if (!C.zf) goto L_127a8383;
  /* 127a8377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a837a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 127a8381 jmp 0x127a83dd */
  goto L_127a83dd;
L_127a8383:;
  /* 127a8383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a8386 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a838c jne 0x127a839a */
  if (!C.zf) goto L_127a839a;
  /* 127a838e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8391 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 127a8398 jmp 0x127a83dd */
  goto L_127a83dd;
L_127a839a:;
  /* 127a839a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a839d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a83a3 jne 0x127a83b1 */
  if (!C.zf) goto L_127a83b1;
  /* 127a83a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a83a8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 127a83af jmp 0x127a83dd */
  goto L_127a83dd;
L_127a83b1:;
  /* 127a83b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a83b4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a83ba jne 0x127a83c8 */
  if (!C.zf) goto L_127a83c8;
  /* 127a83bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a83bf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 127a83c6 jmp 0x127a83dd */
  goto L_127a83dd;
L_127a83c8:;
  /* 127a83c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a83cb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a83d1 jne 0x127a83dd */
  if (!C.zf) goto L_127a83dd;
  /* 127a83d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a83d6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_127a83dd:;
  /* 127a83dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a83e0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 127a83e3 push edx */
  push32((uint32_t)(EDX));
  /* 127a83e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a83e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x127a83e9u);
  /* 127a83e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a83ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a83ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a83f2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 127a83f5 jmp 0x127a840e */
  goto L_127a840e;
L_127a83f7:;
  /* 127a83f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a83fa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 127a8401 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a8404 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a8407 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8408 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x127a840bu);
  /* 127a840b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a840e:;
  /* 127a840e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8411 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a8414 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 127a8417 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127a841a:;
  /* 127a841a mov esp, ebp */
  ESP = (EBP);
  /* 127a841c pop ebp */
  EBP = (pop32());
  /* 127a841d ret  */
  ESPCHK(0x127a8260u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x127a8420 (89 bytes, 35 insns) */
void f_127a8420(void) {
  FTRACE(0x127a8420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8420 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8421 mov ebp, esp */
  EBP = (ESP);
  /* 127a8423 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8424 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8427 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127a842a:;
  /* 127a842a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a842d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a842f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8432 je 0x127a8452 */
  if (C.zf) goto L_127a8452;
  /* 127a8434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8437 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a843a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a843d mov ecx, dword ptr [0x127cec84] */
  ECX = (r32((uint32_t)(0x127cec84)));
  /* 127a8443 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a8446 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8449 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a844b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a844e jae 0x127a8452 */
  if (!C.cf) goto L_127a8452;
  /* 127a8450 jmp 0x127a842a */
  goto L_127a842a;
L_127a8452:;
  /* 127a8452 mov eax, dword ptr [0x127cec84] */
  EAX = (r32((uint32_t)(0x127cec84)));
  /* 127a8457 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a845a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a845d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a845f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8462 jae 0x127a846e */
  if (!C.cf) goto L_127a846e;
  /* 127a8464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8467 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a8469 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a846c je 0x127a8472 */
  if (C.zf) goto L_127a8472;
L_127a846e:;
  /* 127a846e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8470 jmp 0x127a8475 */
  goto L_127a8475;
L_127a8472:;
  /* 127a8472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a8475:;
  /* 127a8475 mov esp, ebp */
  ESP = (EBP);
  /* 127a8477 pop ebp */
  EBP = (pop32());
  /* 127a8478 ret  */
  ESPCHK(0x127a8420u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x127a8480 (48 bytes, 17 insns) */
void f_127a8480(void) {
  FTRACE(0x127a8480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8480 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8481 mov ebp, esp */
  EBP = (ESP);
  /* 127a8483 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8484 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8486 call 0x127a8180 */
  push32(0x127a848bu); f_127a8180();
  /* 127a848b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a848e mov eax, dword ptr [0x127d0704] */
  EAX = (r32((uint32_t)(0x127d0704)));
  /* 127a8493 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a8496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8499 mov dword ptr [0x127d0704], ecx */
  w32((uint32_t)(0x127d0704), (ECX));
  /* 127a849f push 9 */
  push32((uint32_t)(0x9u));
  /* 127a84a1 call 0x127a8220 */
  push32(0x127a84a6u); f_127a8220();
  /* 127a84a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a84a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a84ac mov esp, ebp */
  ESP = (EBP);
  /* 127a84ae pop ebp */
  EBP = (pop32());
  /* 127a84af ret  */
  ESPCHK(0x127a8480u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x127a84b0 (10 bytes, 5 insns) */
void f_127a84b0(void) {
  FTRACE(0x127a84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a84b1 mov ebp, esp */
  EBP = (ESP);
  /* 127a84b3 mov eax, dword ptr [0x127d0704] */
  EAX = (r32((uint32_t)(0x127d0704)));
  /* 127a84b8 pop ebp */
  EBP = (pop32());
  /* 127a84b9 ret  */
  ESPCHK(0x127a84b0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x127a84c0 (45 bytes, 19 insns) */
void f_127a84c0(void) {
  FTRACE(0x127a84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a84c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a84c1 mov ebp, esp */
  EBP = (ESP);
  /* 127a84c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a84c4 mov eax, dword ptr [0x127d0704] */
  EAX = (r32((uint32_t)(0x127d0704)));
  /* 127a84c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a84cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a84d0 je 0x127a84e0 */
  if (C.zf) goto L_127a84e0;
  /* 127a84d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a84d5 push ecx */
  push32((uint32_t)(ECX));
  /* 127a84d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x127a84d9u);
  /* 127a84d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a84dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a84de jne 0x127a84e4 */
  if (!C.zf) goto L_127a84e4;
L_127a84e0:;
  /* 127a84e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a84e2 jmp 0x127a84e9 */
  goto L_127a84e9;
L_127a84e4:;
  /* 127a84e4 mov eax, 1 */
  EAX = (0x1u);
L_127a84e9:;
  /* 127a84e9 mov esp, ebp */
  ESP = (EBP);
  /* 127a84eb pop ebp */
  EBP = (pop32());
  /* 127a84ec ret  */
  ESPCHK(0x127a84c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x127a84f0 (88 bytes, 40 insns) */
void f_127a84f0(void) {
  FTRACE(0x127a84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a84f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 127a84f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a84f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a84fa je 0x127a8543 */
  if (C.zf) goto L_127a8543;
  /* 127a84fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a84fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 127a8502 push edi */
  push32((uint32_t)(EDI));
  /* 127a8503 mov edi, ecx */
  EDI = (ECX);
  /* 127a8505 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8508 jb 0x127a8537 */
  if (C.cf) goto L_127a8537;
  /* 127a850a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127a850c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 127a850f je 0x127a8519 */
  if (C.zf) goto L_127a8519;
  /* 127a8511 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_127a8513:;
  /* 127a8513 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a8515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a8516 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127a8517 jne 0x127a8513 */
  if (!C.zf) goto L_127a8513;
L_127a8519:;
  /* 127a8519 mov ecx, eax */
  ECX = (EAX);
  /* 127a851b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 127a851e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8520 mov ecx, eax */
  ECX = (EAX);
  /* 127a8522 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127a8525 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8527 mov ecx, edx */
  ECX = (EDX);
  /* 127a8529 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127a852c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127a852f je 0x127a8537 */
  if (C.zf) goto L_127a8537;
  /* 127a8531 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127a8533 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8535 je 0x127a853d */
  if (C.zf) goto L_127a853d;
L_127a8537:;
  /* 127a8537 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127a8539 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127a853a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 127a853b jne 0x127a8537 */
  if (!C.zf) goto L_127a8537;
L_127a853d:;
  /* 127a853d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127a8541 pop edi */
  EDI = (pop32());
  /* 127a8542 ret  */
  ESPCHK(0x127a84f0u, _esp0);
  ESP += 4; return;
L_127a8543:;
  /* 127a8543 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 127a8547 ret  */
  ESPCHK(0x127a84f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x127a8550 (23 bytes, 10 insns) */
void f_127a8550(void) {
  FTRACE(0x127a8550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8550 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8551 mov ebp, esp */
  EBP = (ESP);
  /* 127a8553 mov eax, dword ptr [0x127d0700] */
  EAX = (r32((uint32_t)(0x127d0700)));
  /* 127a8558 push eax */
  push32((uint32_t)(EAX));
  /* 127a8559 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a855c push ecx */
  push32((uint32_t)(ECX));
  /* 127a855d call 0x127a8570 */
  push32(0x127a8562u); f_127a8570();
  /* 127a8562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8565 pop ebp */
  EBP = (pop32());
  /* 127a8566 ret  */
  ESPCHK(0x127a8550u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x127a8570 (87 bytes, 34 insns) */
void f_127a8570(void) {
  FTRACE(0x127a8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8570 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8571 mov ebp, esp */
  EBP = (ESP);
  /* 127a8573 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8574 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8578 jbe 0x127a857e */
  if ((C.cf||C.zf)) goto L_127a857e;
  /* 127a857a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a857c jmp 0x127a85c3 */
  goto L_127a85c3;
L_127a857e:;
  /* 127a857e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8582 ja 0x127a8595 */
  if ((!C.cf&&!C.zf)) goto L_127a8595;
  /* 127a8584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8587 push eax */
  push32((uint32_t)(EAX));
  /* 127a8588 call 0x127a85d0 */
  push32(0x127a858du); f_127a85d0();
  /* 127a858d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a8593 jmp 0x127a859c */
  goto L_127a859c;
L_127a8595:;
  /* 127a8595 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127a859c:;
  /* 127a859c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a85a0 jne 0x127a85a8 */
  if (!C.zf) goto L_127a85a8;
  /* 127a85a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a85a6 jne 0x127a85ad */
  if (!C.zf) goto L_127a85ad;
L_127a85a8:;
  /* 127a85a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a85ab jmp 0x127a85c3 */
  goto L_127a85c3;
L_127a85ad:;
  /* 127a85ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a85b0 push ecx */
  push32((uint32_t)(ECX));
  /* 127a85b1 call 0x127a84c0 */
  push32(0x127a85b6u); f_127a84c0();
  /* 127a85b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a85b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a85bb jne 0x127a85c1 */
  if (!C.zf) goto L_127a85c1;
  /* 127a85bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a85bf jmp 0x127a85c3 */
  goto L_127a85c3;
L_127a85c1:;
  /* 127a85c1 jmp 0x127a857e */
  goto L_127a857e;
L_127a85c3:;
  /* 127a85c3 mov esp, ebp */
  ESP = (EBP);
  /* 127a85c5 pop ebp */
  EBP = (pop32());
  /* 127a85c6 ret  */
  ESPCHK(0x127a8570u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x127a85d0 (109 bytes, 37 insns) */
void f_127a85d0(void) {
  FTRACE(0x127a85d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a85d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a85d1 mov ebp, esp */
  EBP = (ESP);
  /* 127a85d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a85d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a85d7 cmp eax, dword ptr [0x127cec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a85dd ja 0x127a860d */
  if ((!C.cf&&!C.zf)) goto L_127a860d;
  /* 127a85df push 9 */
  push32((uint32_t)(0x9u));
  /* 127a85e1 call 0x127a8180 */
  push32(0x127a85e6u); f_127a8180();
  /* 127a85e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a85e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a85ec push ecx */
  push32((uint32_t)(ECX));
  /* 127a85ed call 0x127a9110 */
  push32(0x127a85f2u); f_127a9110();
  /* 127a85f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a85f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a85f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a85fa call 0x127a8220 */
  push32(0x127a85ffu); f_127a8220();
  /* 127a85ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8602 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8606 je 0x127a860d */
  if (C.zf) goto L_127a860d;
  /* 127a8608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a860b jmp 0x127a8639 */
  goto L_127a8639;
L_127a860d:;
  /* 127a860d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8611 jne 0x127a861a */
  if (!C.zf) goto L_127a861a;
  /* 127a8613 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_127a861a:;
  /* 127a861a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a861d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8620 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127a8623 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127a8626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8629 push eax */
  push32((uint32_t)(EAX));
  /* 127a862a push 0 */
  push32((uint32_t)(0x0u));
  /* 127a862c mov ecx, dword ptr [0x127d1ecc] */
  ECX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a8632 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8633 call dword ptr [0x127d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3338))), 0x127a8639u);
L_127a8639:;
  /* 127a8639 mov esp, ebp */
  ESP = (EBP);
  /* 127a863b pop ebp */
  EBP = (pop32());
  /* 127a863c ret  */
  ESPCHK(0x127a85d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008640 @ 0x127a8640 (10 bytes, 5 insns) */
void f_127a8640(void) {
  FTRACE(0x127a8640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8640 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8641 mov ebp, esp */
  EBP = (ESP);
  /* 127a8643 mov eax, 1 */
  EAX = (0x1u);
  /* 127a8648 pop ebp */
  EBP = (pop32());
  /* 127a8649 ret  */
  ESPCHK(0x127a8640u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x127a8650 (173 bytes, 59 insns) */
void f_127a8650(void) {
  FTRACE(0x127a8650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8650 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8651 mov ebp, esp */
  EBP = (ESP);
  /* 127a8653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8656 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a865a jbe 0x127a8663 */
  if ((C.cf||C.zf)) goto L_127a8663;
  /* 127a865c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a865e jmp 0x127a86f9 */
  goto L_127a86f9;
L_127a8663:;
  /* 127a8663 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8665 call 0x127a8180 */
  push32(0x127a866au); f_127a8180();
  /* 127a866a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a866d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8670 push eax */
  push32((uint32_t)(EAX));
  /* 127a8671 call 0x127a8a80 */
  push32(0x127a8676u); f_127a8a80();
  /* 127a8676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8679 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a867c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8680 je 0x127a86c1 */
  if (C.zf) goto L_127a86c1;
  /* 127a8682 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127a8689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a868c cmp ecx, dword ptr [0x127cec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8692 ja 0x127a86b2 */
  if ((!C.cf&&!C.zf)) goto L_127a86b2;
  /* 127a8694 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8697 push edx */
  push32((uint32_t)(EDX));
  /* 127a8698 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a869b push eax */
  push32((uint32_t)(EAX));
  /* 127a869c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a869f push ecx */
  push32((uint32_t)(ECX));
  /* 127a86a0 call 0x127a9950 */
  push32(0x127a86a5u); f_127a9950();
  /* 127a86a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a86a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a86aa je 0x127a86b2 */
  if (C.zf) goto L_127a86b2;
  /* 127a86ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a86af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a86b2:;
  /* 127a86b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a86b4 call 0x127a8220 */
  push32(0x127a86b9u); f_127a8220();
  /* 127a86b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a86bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a86bf jmp 0x127a86f9 */
  goto L_127a86f9;
L_127a86c1:;
  /* 127a86c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a86c3 call 0x127a8220 */
  push32(0x127a86c8u); f_127a8220();
  /* 127a86c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a86cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a86cf jne 0x127a86d8 */
  if (!C.zf) goto L_127a86d8;
  /* 127a86d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_127a86d8:;
  /* 127a86d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a86db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a86de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 127a86e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127a86e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a86e6 push ecx */
  push32((uint32_t)(ECX));
  /* 127a86e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a86ea push edx */
  push32((uint32_t)(EDX));
  /* 127a86eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127a86ed mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a86f2 push eax */
  push32((uint32_t)(EAX));
  /* 127a86f3 call dword ptr [0x127d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d333c))), 0x127a86f9u);
L_127a86f9:;
  /* 127a86f9 mov esp, ebp */
  ESP = (EBP);
  /* 127a86fb pop ebp */
  EBP = (pop32());
  /* 127a86fc ret  */
  ESPCHK(0x127a8650u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x127a8700 (490 bytes, 165 insns) */
void f_127a8700(void) {
  FTRACE(0x127a8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8700 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8701 mov ebp, esp */
  EBP = (ESP);
  /* 127a8703 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8706 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a870a jne 0x127a871d */
  if (!C.zf) goto L_127a871d;
  /* 127a870c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a870f push eax */
  push32((uint32_t)(EAX));
  /* 127a8710 call 0x127a8550 */
  push32(0x127a8715u); f_127a8550();
  /* 127a8715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8718 jmp 0x127a88e6 */
  goto L_127a88e6;
L_127a871d:;
  /* 127a871d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8721 jne 0x127a8736 */
  if (!C.zf) goto L_127a8736;
  /* 127a8723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8726 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8727 call 0x127a88f0 */
  push32(0x127a872cu); f_127a88f0();
  /* 127a872c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a872f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8731 jmp 0x127a88e6 */
  goto L_127a88e6;
L_127a8736:;
  /* 127a8736 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127a873d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8741 ja 0x127a88b9 */
  if ((!C.cf&&!C.zf)) goto L_127a88b9;
  /* 127a8747 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8749 call 0x127a8180 */
  push32(0x127a874eu); f_127a8180();
  /* 127a874e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8754 push edx */
  push32((uint32_t)(EDX));
  /* 127a8755 call 0x127a8a80 */
  push32(0x127a875au); f_127a8a80();
  /* 127a875a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a875d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a8760 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8764 je 0x127a887c */
  if (C.zf) goto L_127a887c;
  /* 127a876a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a876d cmp eax, dword ptr [0x127cec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8773 ja 0x127a87f0 */
  if ((!C.cf&&!C.zf)) goto L_127a87f0;
  /* 127a8775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8778 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a877c push edx */
  push32((uint32_t)(EDX));
  /* 127a877d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8780 push eax */
  push32((uint32_t)(EAX));
  /* 127a8781 call 0x127a9950 */
  push32(0x127a8786u); f_127a9950();
  /* 127a8786 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a878b je 0x127a8795 */
  if (C.zf) goto L_127a8795;
  /* 127a878d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8790 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a8793 jmp 0x127a87f0 */
  goto L_127a87f0;
L_127a8795:;
  /* 127a8795 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8798 push edx */
  push32((uint32_t)(EDX));
  /* 127a8799 call 0x127a9110 */
  push32(0x127a879eu); f_127a9110();
  /* 127a879e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a87a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a87a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a87a8 je 0x127a87f0 */
  if (C.zf) goto L_127a87f0;
  /* 127a87aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a87ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 127a87b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a87b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a87b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a87b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a87bc jae 0x127a87c6 */
  if (!C.cf) goto L_127a87c6;
  /* 127a87be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a87c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a87c4 jmp 0x127a87cc */
  goto L_127a87cc;
L_127a87c6:;
  /* 127a87c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a87c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127a87cc:;
  /* 127a87cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a87cf push edx */
  push32((uint32_t)(EDX));
  /* 127a87d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a87d3 push eax */
  push32((uint32_t)(EAX));
  /* 127a87d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a87d7 push ecx */
  push32((uint32_t)(ECX));
  /* 127a87d8 call 0x127ab060 */
  push32(0x127a87ddu); f_127ab060();
  /* 127a87dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a87e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a87e3 push edx */
  push32((uint32_t)(EDX));
  /* 127a87e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a87e7 push eax */
  push32((uint32_t)(EAX));
  /* 127a87e8 call 0x127a8b40 */
  push32(0x127a87edu); f_127a8b40();
  /* 127a87ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a87f0:;
  /* 127a87f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a87f4 jne 0x127a8870 */
  if (!C.zf) goto L_127a8870;
  /* 127a87f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a87fa jne 0x127a8803 */
  if (!C.zf) goto L_127a8803;
  /* 127a87fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_127a8803:;
  /* 127a8803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8806 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8809 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 127a880c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127a880f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8812 push edx */
  push32((uint32_t)(EDX));
  /* 127a8813 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8815 mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a881a push eax */
  push32((uint32_t)(EAX));
  /* 127a881b call dword ptr [0x127d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3338))), 0x127a8821u);
  /* 127a8821 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a8824 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8828 je 0x127a8870 */
  if (C.zf) goto L_127a8870;
  /* 127a882a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a882d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 127a8830 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8833 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a8836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8839 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a883c jae 0x127a8846 */
  if (!C.cf) goto L_127a8846;
  /* 127a883e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8841 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127a8844 jmp 0x127a884c */
  goto L_127a884c;
L_127a8846:;
  /* 127a8846 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8849 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127a884c:;
  /* 127a884c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a884f push eax */
  push32((uint32_t)(EAX));
  /* 127a8850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8853 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8854 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8857 push edx */
  push32((uint32_t)(EDX));
  /* 127a8858 call 0x127ab060 */
  push32(0x127a885du); f_127ab060();
  /* 127a885d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8863 push eax */
  push32((uint32_t)(EAX));
  /* 127a8864 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8867 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8868 call 0x127a8b40 */
  push32(0x127a886du); f_127a8b40();
  /* 127a886d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127a8870:;
  /* 127a8870 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8872 call 0x127a8220 */
  push32(0x127a8877u); f_127a8220();
  /* 127a8877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a887a jmp 0x127a88b9 */
  goto L_127a88b9;
L_127a887c:;
  /* 127a887c push 9 */
  push32((uint32_t)(0x9u));
  /* 127a887e call 0x127a8220 */
  push32(0x127a8883u); f_127a8220();
  /* 127a8883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a888a jne 0x127a8893 */
  if (!C.zf) goto L_127a8893;
  /* 127a888c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_127a8893:;
  /* 127a8893 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8896 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8899 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127a889c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 127a889f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a88a2 push eax */
  push32((uint32_t)(EAX));
  /* 127a88a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a88a6 push ecx */
  push32((uint32_t)(ECX));
  /* 127a88a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a88a9 mov edx, dword ptr [0x127d1ecc] */
  EDX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a88af push edx */
  push32((uint32_t)(EDX));
  /* 127a88b0 call dword ptr [0x127d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d333c))), 0x127a88b6u);
  /* 127a88b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127a88b9:;
  /* 127a88b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a88bd jne 0x127a88c8 */
  if (!C.zf) goto L_127a88c8;
  /* 127a88bf cmp dword ptr [0x127d0700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a88c6 jne 0x127a88cd */
  if (!C.zf) goto L_127a88cd;
L_127a88c8:;
  /* 127a88c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a88cb jmp 0x127a88e6 */
  goto L_127a88e6;
L_127a88cd:;
  /* 127a88cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a88d0 push eax */
  push32((uint32_t)(EAX));
  /* 127a88d1 call 0x127a84c0 */
  push32(0x127a88d6u); f_127a84c0();
  /* 127a88d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a88d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a88db jne 0x127a88e1 */
  if (!C.zf) goto L_127a88e1;
  /* 127a88dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a88df jmp 0x127a88e6 */
  goto L_127a88e6;
L_127a88e1:;
  /* 127a88e1 jmp 0x127a8736 */
  goto L_127a8736;
L_127a88e6:;
  /* 127a88e6 mov esp, ebp */
  ESP = (EBP);
  /* 127a88e8 pop ebp */
  EBP = (pop32());
  /* 127a88e9 ret  */
  ESPCHK(0x127a8700u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x127a88f0 (104 bytes, 38 insns) */
void f_127a88f0(void) {
  FTRACE(0x127a88f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a88f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a88f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a88f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127a88f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a88f8 jne 0x127a88fc */
  if (!C.zf) goto L_127a88fc;
  /* 127a88fa jmp 0x127a8954 */
  goto L_127a8954;
L_127a88fc:;
  /* 127a88fc push 9 */
  push32((uint32_t)(0x9u));
  /* 127a88fe call 0x127a8180 */
  push32(0x127a8903u); f_127a8180();
  /* 127a8903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8909 push eax */
  push32((uint32_t)(EAX));
  /* 127a890a call 0x127a8a80 */
  push32(0x127a890fu); f_127a8a80();
  /* 127a890f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8912 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a8915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8919 je 0x127a8937 */
  if (C.zf) goto L_127a8937;
  /* 127a891b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a891e push ecx */
  push32((uint32_t)(ECX));
  /* 127a891f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8922 push edx */
  push32((uint32_t)(EDX));
  /* 127a8923 call 0x127a8b40 */
  push32(0x127a8928u); f_127a8b40();
  /* 127a8928 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a892b push 9 */
  push32((uint32_t)(0x9u));
  /* 127a892d call 0x127a8220 */
  push32(0x127a8932u); f_127a8220();
  /* 127a8932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8935 jmp 0x127a8954 */
  goto L_127a8954;
L_127a8937:;
  /* 127a8937 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8939 call 0x127a8220 */
  push32(0x127a893eu); f_127a8220();
  /* 127a893e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8944 push eax */
  push32((uint32_t)(EAX));
  /* 127a8945 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8947 mov ecx, dword ptr [0x127d1ecc] */
  ECX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a894d push ecx */
  push32((uint32_t)(ECX));
  /* 127a894e call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127a8954u);
L_127a8954:;
  /* 127a8954 mov esp, ebp */
  ESP = (EBP);
  /* 127a8956 pop ebp */
  EBP = (pop32());
  /* 127a8957 ret  */
  ESPCHK(0x127a88f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x127a8960 (116 bytes, 34 insns) */
void f_127a8960(void) {
  FTRACE(0x127a8960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8960 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8961 mov ebp, esp */
  EBP = (ESP);
  /* 127a8963 push ecx */
  push32((uint32_t)(ECX));
  /* 127a8964 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 127a896b push 9 */
  push32((uint32_t)(0x9u));
  /* 127a896d call 0x127a8180 */
  push32(0x127a8972u); f_127a8180();
  /* 127a8972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8975 call 0x127aa070 */
  push32(0x127a897au); f_127aa070();
  /* 127a897a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a897c jge 0x127a8985 */
  if ((C.sf==C.of)) goto L_127a8985;
  /* 127a897e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_127a8985:;
  /* 127a8985 push 9 */
  push32((uint32_t)(0x9u));
  /* 127a8987 call 0x127a8220 */
  push32(0x127a898cu); f_127a8220();
  /* 127a898c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a898f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8991 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8993 mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a8998 push eax */
  push32((uint32_t)(EAX));
  /* 127a8999 call dword ptr [0x127d32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f8))), 0x127a899fu);
  /* 127a899f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a89a1 jne 0x127a89cd */
  if (!C.zf) goto L_127a89cd;
  /* 127a89a3 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127a89a9u);
  /* 127a89a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a89ac jne 0x127a89c6 */
  if (!C.zf) goto L_127a89c6;
  /* 127a89ae call 0x127ac660 */
  push32(0x127a89b3u); f_127ac660();
  /* 127a89b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 127a89b9 call 0x127ac650 */
  push32(0x127a89beu); f_127ac650();
  /* 127a89be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 127a89c4 jmp 0x127a89cd */
  goto L_127a89cd;
L_127a89c6:;
  /* 127a89c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_127a89cd:;
  /* 127a89cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a89d0 mov esp, ebp */
  ESP = (EBP);
  /* 127a89d2 pop ebp */
  EBP = (pop32());
  /* 127a89d3 ret  */
  ESPCHK(0x127a8960u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x127a89e0 (10 bytes, 5 insns) */
void f_127a89e0(void) {
  FTRACE(0x127a89e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a89e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a89e1 mov ebp, esp */
  EBP = (ESP);
  /* 127a89e3 call 0x127a8960 */
  push32(0x127a89e8u); f_127a8960();
  /* 127a89e8 pop ebp */
  EBP = (pop32());
  /* 127a89e9 ret  */
  ESPCHK(0x127a89e0u, _esp0);
  ESP += 4; return;
}

