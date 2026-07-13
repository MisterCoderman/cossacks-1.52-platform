#include "recomp.h"

/* thunk_FUN_10001680 @ 0x12aa1005 (5 bytes, 1 insns) */
void f_12aa1005(void) {
  FTRACE(0x12aa1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1005 jmp 0x12aa1680 */
  f_12aa1680(); return;
}

/* OnInit @ 0x12aa100a (5 bytes, 1 insns) */
void f_12aa100a(void) {
  FTRACE(0x12aa100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa100a jmp 0x12aa11b0 */
  f_12aa11b0(); return;
}

/* thunk_FUN_10001130 @ 0x12aa100f (5 bytes, 1 insns) */
void f_12aa100f(void) {
  FTRACE(0x12aa100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa100f jmp 0x12aa1130 */
  f_12aa1130(); return;
}

/* thunk_FUN_10001050 @ 0x12aa1014 (5 bytes, 1 insns) */
void f_12aa1014(void) {
  FTRACE(0x12aa1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1014 jmp 0x12aa1050 */
  f_12aa1050(); return;
}

/* thunk_FUN_100010b0 @ 0x12aa1019 (5 bytes, 1 insns) */
void f_12aa1019(void) {
  FTRACE(0x12aa1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1019 jmp 0x12aa10b0 */
  f_12aa10b0(); return;
}

/* ProcessScenary @ 0x12aa101e (5 bytes, 1 insns) */
void f_12aa101e(void) {
  FTRACE(0x12aa101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa101e jmp 0x12aa1390 */
  f_12aa1390(); return;
}

/* FUN_10001050 @ 0x12aa1050 (67 bytes, 26 insns) */
void f_12aa1050(void) {
  FTRACE(0x12aa1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1050 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1051 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa1056 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa1057 push esi */
  push32((uint32_t)(ESI));
  /* 12aa1058 push edi */
  push32((uint32_t)(EDI));
  /* 12aa1059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12aa105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12aa1061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa1066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1072 je 0x12aa1076 */
  if (C.zf) goto L_12aa1076;
  /* 12aa1074 jmp 0x12aa107b */
  goto L_12aa107b;
L_12aa1076:;
  /* 12aa1076 call 0x12aa100a */
  push32(0x12aa107bu); f_12aa100a();
L_12aa107b:;
  /* 12aa107b mov eax, 1 */
  EAX = (0x1u);
  /* 12aa1080 pop edi */
  EDI = (pop32());
  /* 12aa1081 pop esi */
  ESI = (pop32());
  /* 12aa1082 pop ebx */
  EBX = (pop32());
  /* 12aa1083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1088 call 0x12aa1720 */
  push32(0x12aa108du); f_12aa1720();
  /* 12aa108d mov esp, ebp */
  ESP = (EBP);
  /* 12aa108f pop ebp */
  EBP = (pop32());
  /* 12aa1090 ret 0xc */
  ESPCHK(0x12aa1050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x12aa10b0 (92 bytes, 34 insns) */
void f_12aa10b0(void) {
  FTRACE(0x12aa10b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa10b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa10b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa10b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa10b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa10b7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa10b8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa10b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12aa10bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12aa10c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa10c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa10c8 mov esi, esp */
  ESI = (ESP);
  /* 12aa10ca call dword ptr [0x12ad03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03cc))), 0x12aa10d0u);
  /* 12aa10d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa10d2 call 0x12aa1720 */
  push32(0x12aa10d7u); f_12aa1720();
  /* 12aa10d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa10d9 jne 0x12aa10ec */
  if (!C.zf) goto L_12aa10ec;
  /* 12aa10db mov esi, esp */
  ESI = (ESP);
  /* 12aa10dd call dword ptr [0x12ad03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03d0))), 0x12aa10e3u);
  /* 12aa10e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa10e5 call 0x12aa1720 */
  push32(0x12aa10eau); f_12aa1720();
  /* 12aa10ea jmp 0x12aa10fb */
  goto L_12aa10fb;
L_12aa10ec:;
  /* 12aa10ec mov esi, esp */
  ESI = (ESP);
  /* 12aa10ee call dword ptr [0x12ad03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03d4))), 0x12aa10f4u);
  /* 12aa10f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa10f6 call 0x12aa1720 */
  push32(0x12aa10fbu); f_12aa1720();
L_12aa10fb:;
  /* 12aa10fb pop edi */
  EDI = (pop32());
  /* 12aa10fc pop esi */
  ESI = (pop32());
  /* 12aa10fd pop ebx */
  EBX = (pop32());
  /* 12aa10fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1103 call 0x12aa1720 */
  push32(0x12aa1108u); f_12aa1720();
  /* 12aa1108 mov esp, ebp */
  ESP = (EBP);
  /* 12aa110a pop ebp */
  EBP = (pop32());
  /* 12aa110b ret  */
  ESPCHK(0x12aa10b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12aa1130 (93 bytes, 34 insns) */
void f_12aa1130(void) {
  FTRACE(0x12aa1130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1130 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1131 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa1136 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa1137 push esi */
  push32((uint32_t)(ESI));
  /* 12aa1138 push edi */
  push32((uint32_t)(EDI));
  /* 12aa1139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12aa113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12aa1141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa1146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1148 mov esi, esp */
  ESI = (ESP);
  /* 12aa114a call dword ptr [0x12ad03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03cc))), 0x12aa1150u);
  /* 12aa1150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1152 call 0x12aa1720 */
  push32(0x12aa1157u); f_12aa1720();
  /* 12aa1157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa115a jne 0x12aa116d */
  if (!C.zf) goto L_12aa116d;
  /* 12aa115c mov esi, esp */
  ESI = (ESP);
  /* 12aa115e call dword ptr [0x12ad03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03d0))), 0x12aa1164u);
  /* 12aa1164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1166 call 0x12aa1720 */
  push32(0x12aa116bu); f_12aa1720();
  /* 12aa116b jmp 0x12aa117c */
  goto L_12aa117c;
L_12aa116d:;
  /* 12aa116d mov esi, esp */
  ESI = (ESP);
  /* 12aa116f call dword ptr [0x12ad03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03d4))), 0x12aa1175u);
  /* 12aa1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1177 call 0x12aa1720 */
  push32(0x12aa117cu); f_12aa1720();
L_12aa117c:;
  /* 12aa117c pop edi */
  EDI = (pop32());
  /* 12aa117d pop esi */
  ESI = (pop32());
  /* 12aa117e pop ebx */
  EBX = (pop32());
  /* 12aa117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1184 call 0x12aa1720 */
  push32(0x12aa1189u); f_12aa1720();
  /* 12aa1189 mov esp, ebp */
  ESP = (EBP);
  /* 12aa118b pop ebp */
  EBP = (pop32());
  /* 12aa118c ret  */
  ESPCHK(0x12aa1130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x12aa11b0 (376 bytes, 101 insns) */
void f_12aa11b0(void) {
  FTRACE(0x12aa11b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa11b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa11b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa11b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa11b7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa11b8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa11b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12aa11bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12aa11c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa11c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa11c8 mov esi, esp */
  ESI = (ESP);
  /* 12aa11ca push 0x12ac904c */
  push32((uint32_t)(0x12ac904cu));
  /* 12aa11cf push 0x12ace420 */
  push32((uint32_t)(0x12ace420u));
  /* 12aa11d4 call dword ptr [0x12ad03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c0))), 0x12aa11dau);
  /* 12aa11da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa11dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa11df call 0x12aa1720 */
  push32(0x12aa11e4u); f_12aa1720();
  /* 12aa11e4 mov esi, esp */
  ESI = (ESP);
  /* 12aa11e6 push 0x12ac9044 */
  push32((uint32_t)(0x12ac9044u));
  /* 12aa11eb push 0x12ace428 */
  push32((uint32_t)(0x12ace428u));
  /* 12aa11f0 call dword ptr [0x12ad03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c0))), 0x12aa11f6u);
  /* 12aa11f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa11f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa11fb call 0x12aa1720 */
  push32(0x12aa1200u); f_12aa1720();
  /* 12aa1200 mov esi, esp */
  ESI = (ESP);
  /* 12aa1202 push 0x12ac903c */
  push32((uint32_t)(0x12ac903cu));
  /* 12aa1207 push 0x12ace430 */
  push32((uint32_t)(0x12ace430u));
  /* 12aa120c call dword ptr [0x12ad03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c0))), 0x12aa1212u);
  /* 12aa1212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1217 call 0x12aa1720 */
  push32(0x12aa121cu); f_12aa1720();
  /* 12aa121c mov esi, esp */
  ESI = (ESP);
  /* 12aa121e push 0x12ac9034 */
  push32((uint32_t)(0x12ac9034u));
  /* 12aa1223 push 0x12ace438 */
  push32((uint32_t)(0x12ace438u));
  /* 12aa1228 call dword ptr [0x12ad03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c0))), 0x12aa122eu);
  /* 12aa122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1233 call 0x12aa1720 */
  push32(0x12aa1238u); f_12aa1720();
  /* 12aa1238 mov esi, esp */
  ESI = (ESP);
  /* 12aa123a push 0x12ac902c */
  push32((uint32_t)(0x12ac902cu));
  /* 12aa123f push 0x12ace440 */
  push32((uint32_t)(0x12ace440u));
  /* 12aa1244 call dword ptr [0x12ad03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c0))), 0x12aa124au);
  /* 12aa124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa124f call 0x12aa1720 */
  push32(0x12aa1254u); f_12aa1720();
  /* 12aa1254 mov esi, esp */
  ESI = (ESP);
  /* 12aa1256 push 0x12ac9024 */
  push32((uint32_t)(0x12ac9024u));
  /* 12aa125b push 0x12ace410 */
  push32((uint32_t)(0x12ace410u));
  /* 12aa1260 call dword ptr [0x12ad03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c4))), 0x12aa1266u);
  /* 12aa1266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa126b call 0x12aa1720 */
  push32(0x12aa1270u); f_12aa1720();
  /* 12aa1270 mov esi, esp */
  ESI = (ESP);
  /* 12aa1272 push 0x12ac901c */
  push32((uint32_t)(0x12ac901cu));
  /* 12aa1277 push 0x12ace418 */
  push32((uint32_t)(0x12ace418u));
  /* 12aa127c call dword ptr [0x12ad03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c4))), 0x12aa1282u);
  /* 12aa1282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1287 call 0x12aa1720 */
  push32(0x12aa128cu); f_12aa1720();
  /* 12aa128c mov esi, esp */
  ESI = (ESP);
  /* 12aa128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa1290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1292 call dword ptr [0x12ad03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c8))), 0x12aa1298u);
  /* 12aa1298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa129d call 0x12aa1720 */
  push32(0x12aa12a2u); f_12aa1720();
  /* 12aa12a2 mov esi, esp */
  ESI = (ESP);
  /* 12aa12a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa12a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa12a8 call dword ptr [0x12ad03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c8))), 0x12aa12aeu);
  /* 12aa12ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa12b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa12b3 call 0x12aa1720 */
  push32(0x12aa12b8u); f_12aa1720();
  /* 12aa12b8 mov esi, esp */
  ESI = (ESP);
  /* 12aa12ba push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12aa12bf push 7 */
  push32((uint32_t)(0x7u));
  /* 12aa12c1 call dword ptr [0x12ad03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03c8))), 0x12aa12c7u);
  /* 12aa12c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa12ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa12cc call 0x12aa1720 */
  push32(0x12aa12d1u); f_12aa1720();
  /* 12aa12d1 mov dword ptr [0x12ace3e0], 0 */
  w32((uint32_t)(0x12ace3e0), (0x0u));
  /* 12aa12db jmp 0x12aa12ea */
  goto L_12aa12ea;
L_12aa12dd:;
  /* 12aa12dd mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa12e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa12e5 mov dword ptr [0x12ace3e0], eax */
  w32((uint32_t)(0x12ace3e0), (EAX));
L_12aa12ea:;
  /* 12aa12ea cmp dword ptr [0x12ace3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12ace3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa12f1 jge 0x12aa1317 */
  if ((C.sf==C.of)) goto L_12aa1317;
  /* 12aa12f3 mov ecx, dword ptr [0x12ace3e0] */
  ECX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa12f9 mov dword ptr [ecx*4 + 0x12ace3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12ace3e4), (0x0u));
  /* 12aa1304 mov edx, dword ptr [0x12ace3e0] */
  EDX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa130a mov dword ptr [edx*4 + 0x12ace3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12ace3f8), (0x0u));
  /* 12aa1315 jmp 0x12aa12dd */
  goto L_12aa12dd;
L_12aa1317:;
  /* 12aa1317 pop edi */
  EDI = (pop32());
  /* 12aa1318 pop esi */
  ESI = (pop32());
  /* 12aa1319 pop ebx */
  EBX = (pop32());
  /* 12aa131a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa131d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa131f call 0x12aa1720 */
  push32(0x12aa1324u); f_12aa1720();
  /* 12aa1324 mov esp, ebp */
  ESP = (EBP);
  /* 12aa1326 pop ebp */
  EBP = (pop32());
  /* 12aa1327 ret  */
  ESPCHK(0x12aa11b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12aa1390 (592 bytes, 148 insns) */
void f_12aa1390(void) {
  FTRACE(0x12aa1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1390 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1391 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa1396 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa1397 push esi */
  push32((uint32_t)(ESI));
  /* 12aa1398 push edi */
  push32((uint32_t)(EDI));
  /* 12aa1399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12aa139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12aa13a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa13a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa13a8 mov dword ptr [0x12ace3e0], 0 */
  w32((uint32_t)(0x12ace3e0), (0x0u));
  /* 12aa13b2 jmp 0x12aa13c1 */
  goto L_12aa13c1;
L_12aa13b4:;
  /* 12aa13b4 mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa13b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa13bc mov dword ptr [0x12ace3e0], eax */
  w32((uint32_t)(0x12ace3e0), (EAX));
L_12aa13c1:;
  /* 12aa13c1 cmp dword ptr [0x12ace3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12ace3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa13c8 jge 0x12aa14ab */
  if ((C.sf==C.of)) goto L_12aa14ab;
  /* 12aa13ce mov esi, esp */
  ESI = (ESP);
  /* 12aa13d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa13d2 mov ecx, dword ptr [0x12ace3e0] */
  ECX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa13d8 lea edx, [ecx*8 + 0x12ace420] */
  EDX = ((uint32_t)(ECX*8 + 0x12ace420));
  /* 12aa13df push edx */
  push32((uint32_t)(EDX));
  /* 12aa13e0 call dword ptr [0x12ad03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03ac))), 0x12aa13e6u);
  /* 12aa13e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa13e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa13eb call 0x12aa1720 */
  push32(0x12aa13f0u); f_12aa1720();
  /* 12aa13f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa13f2 jle 0x12aa143a */
  if ((C.zf||C.sf!=C.of)) goto L_12aa143a;
  /* 12aa13f4 mov esi, esp */
  ESI = (ESP);
  /* 12aa13f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa13f8 mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa13fd lea ecx, [eax*8 + 0x12ace420] */
  ECX = ((uint32_t)(EAX*8 + 0x12ace420));
  /* 12aa1404 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1405 call dword ptr [0x12ad03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03ac))), 0x12aa140bu);
  /* 12aa140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa140e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1410 call 0x12aa1720 */
  push32(0x12aa1415u); f_12aa1720();
  /* 12aa1415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1417 jne 0x12aa143a */
  if (!C.zf) goto L_12aa143a;
  /* 12aa1419 mov edx, dword ptr [0x12ace3e0] */
  EDX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa141f mov dword ptr [edx*4 + 0x12ace3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x12ace3e4), (0x1u));
  /* 12aa142a mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa142f mov dword ptr [eax*4 + 0x12ace3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x12ace3f8), (0x0u));
L_12aa143a:;
  /* 12aa143a mov esi, esp */
  ESI = (ESP);
  /* 12aa143c push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa143e mov ecx, dword ptr [0x12ace3e0] */
  ECX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa1444 lea edx, [ecx*8 + 0x12ace420] */
  EDX = ((uint32_t)(ECX*8 + 0x12ace420));
  /* 12aa144b push edx */
  push32((uint32_t)(EDX));
  /* 12aa144c call dword ptr [0x12ad03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03ac))), 0x12aa1452u);
  /* 12aa1452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1457 call 0x12aa1720 */
  push32(0x12aa145cu); f_12aa1720();
  /* 12aa145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa145e jle 0x12aa14a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa14a6;
  /* 12aa1460 mov esi, esp */
  ESI = (ESP);
  /* 12aa1462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1464 mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa1469 lea ecx, [eax*8 + 0x12ace420] */
  ECX = ((uint32_t)(EAX*8 + 0x12ace420));
  /* 12aa1470 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1471 call dword ptr [0x12ad03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03ac))), 0x12aa1477u);
  /* 12aa1477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa147c call 0x12aa1720 */
  push32(0x12aa1481u); f_12aa1720();
  /* 12aa1481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1483 jne 0x12aa14a6 */
  if (!C.zf) goto L_12aa14a6;
  /* 12aa1485 mov edx, dword ptr [0x12ace3e0] */
  EDX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa148b mov dword ptr [edx*4 + 0x12ace3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x12ace3e4), (0x0u));
  /* 12aa1496 mov eax, dword ptr [0x12ace3e0] */
  EAX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa149b mov dword ptr [eax*4 + 0x12ace3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x12ace3f8), (0x1u));
L_12aa14a6:;
  /* 12aa14a6 jmp 0x12aa13b4 */
  goto L_12aa13b4;
L_12aa14ab:;
  /* 12aa14ab mov dword ptr [0x12ace448], 0 */
  w32((uint32_t)(0x12ace448), (0x0u));
  /* 12aa14b5 mov dword ptr [0x12ace44c], 0 */
  w32((uint32_t)(0x12ace44c), (0x0u));
  /* 12aa14bf mov dword ptr [0x12ace3e0], 0 */
  w32((uint32_t)(0x12ace3e0), (0x0u));
  /* 12aa14c9 jmp 0x12aa14da */
  goto L_12aa14da;
L_12aa14cb:;
  /* 12aa14cb mov ecx, dword ptr [0x12ace3e0] */
  ECX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa14d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa14d4 mov dword ptr [0x12ace3e0], ecx */
  w32((uint32_t)(0x12ace3e0), (ECX));
L_12aa14da:;
  /* 12aa14da cmp dword ptr [0x12ace3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12ace3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa14e1 jge 0x12aa1515 */
  if ((C.sf==C.of)) goto L_12aa1515;
  /* 12aa14e3 mov edx, dword ptr [0x12ace3e0] */
  EDX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa14e9 mov eax, dword ptr [0x12ace448] */
  EAX = (r32((uint32_t)(0x12ace448)));
  /* 12aa14ee add eax, dword ptr [edx*4 + 0x12ace3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12ace3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa14f5 mov dword ptr [0x12ace448], eax */
  w32((uint32_t)(0x12ace448), (EAX));
  /* 12aa14fa mov ecx, dword ptr [0x12ace3e0] */
  ECX = (r32((uint32_t)(0x12ace3e0)));
  /* 12aa1500 mov edx, dword ptr [0x12ace44c] */
  EDX = (r32((uint32_t)(0x12ace44c)));
  /* 12aa1506 add edx, dword ptr [ecx*4 + 0x12ace3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x12ace3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa150d mov dword ptr [0x12ace44c], edx */
  w32((uint32_t)(0x12ace44c), (EDX));
  /* 12aa1513 jmp 0x12aa14cb */
  goto L_12aa14cb;
L_12aa1515:;
  /* 12aa1515 cmp dword ptr [0x12ace448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12ace448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa151c jl 0x12aa1523 */
  if ((C.sf!=C.of)) goto L_12aa1523;
  /* 12aa151e call 0x12aa1019 */
  push32(0x12aa1523u); f_12aa1019();
L_12aa1523:;
  /* 12aa1523 mov esi, esp */
  ESI = (ESP);
  /* 12aa1525 push 0xa */
  push32((uint32_t)(0xau));
  /* 12aa1527 call dword ptr [0x12ad03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03b0))), 0x12aa152du);
  /* 12aa152d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1532 call 0x12aa1720 */
  push32(0x12aa1537u); f_12aa1720();
  /* 12aa1537 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa153e je 0x12aa1588 */
  if (C.zf) goto L_12aa1588;
  /* 12aa1540 mov esi, esp */
  ESI = (ESP);
  /* 12aa1542 call dword ptr [0x12ad03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03b4))), 0x12aa1548u);
  /* 12aa1548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa154a call 0x12aa1720 */
  push32(0x12aa154fu); f_12aa1720();
  /* 12aa154f cmp eax, 0x109a0 */
  { uint32_t _a=(EAX),_b=(0x109a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1554 jle 0x12aa1588 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa1588;
  /* 12aa1556 mov esi, esp */
  ESI = (ESP);
  /* 12aa1558 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa155a push 0xa */
  push32((uint32_t)(0xau));
  /* 12aa155c call dword ptr [0x12ad03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03b8))), 0x12aa1562u);
  /* 12aa1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1567 call 0x12aa1720 */
  push32(0x12aa156cu); f_12aa1720();
  /* 12aa156c mov esi, esp */
  ESI = (ESP);
  /* 12aa156e push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12aa1573 push 0x12ac9054 */
  push32((uint32_t)(0x12ac9054u));
  /* 12aa1578 call dword ptr [0x12ad03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03bc))), 0x12aa157eu);
  /* 12aa157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1583 call 0x12aa1720 */
  push32(0x12aa1588u); f_12aa1720();
L_12aa1588:;
  /* 12aa1588 mov esi, esp */
  ESI = (ESP);
  /* 12aa158a call dword ptr [0x12ad03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03b4))), 0x12aa1590u);
  /* 12aa1590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1592 call 0x12aa1720 */
  push32(0x12aa1597u); f_12aa1720();
  /* 12aa1597 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa159c jle 0x12aa15a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa15a3;
  /* 12aa159e call 0x12aa100f */
  push32(0x12aa15a3u); f_12aa100f();
L_12aa15a3:;
  /* 12aa15a3 push 0x12ace410 */
  push32((uint32_t)(0x12ace410u));
  /* 12aa15a8 call 0x12aa1005 */
  push32(0x12aa15adu); f_12aa1005();
  /* 12aa15ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa15b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa15b2 jne 0x12aa15b9 */
  if (!C.zf) goto L_12aa15b9;
  /* 12aa15b4 call 0x12aa100f */
  push32(0x12aa15b9u); f_12aa100f();
L_12aa15b9:;
  /* 12aa15b9 push 0x12ace418 */
  push32((uint32_t)(0x12ace418u));
  /* 12aa15be call 0x12aa1005 */
  push32(0x12aa15c3u); f_12aa1005();
  /* 12aa15c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa15c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa15c8 jne 0x12aa15cf */
  if (!C.zf) goto L_12aa15cf;
  /* 12aa15ca call 0x12aa1019 */
  push32(0x12aa15cfu); f_12aa1019();
L_12aa15cf:;
  /* 12aa15cf pop edi */
  EDI = (pop32());
  /* 12aa15d0 pop esi */
  ESI = (pop32());
  /* 12aa15d1 pop ebx */
  EBX = (pop32());
  /* 12aa15d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa15d5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa15d7 call 0x12aa1720 */
  push32(0x12aa15dcu); f_12aa1720();
  /* 12aa15dc mov esp, ebp */
  ESP = (EBP);
  /* 12aa15de pop ebp */
  EBP = (pop32());
  /* 12aa15df ret  */
  ESPCHK(0x12aa1390u, _esp0);
  ESP += 4; return;
}

/* FUN_10001680 @ 0x12aa1680 (63 bytes, 26 insns) */
void f_12aa1680(void) {
  FTRACE(0x12aa1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1680 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1681 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1683 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa1686 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa1687 push esi */
  push32((uint32_t)(ESI));
  /* 12aa1688 push edi */
  push32((uint32_t)(EDI));
  /* 12aa1689 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12aa168c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12aa1691 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12aa1696 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1698 mov esi, esp */
  ESI = (ESP);
  /* 12aa169a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa169d push eax */
  push32((uint32_t)(EAX));
  /* 12aa169e call dword ptr [0x12ad03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad03a8))), 0x12aa16a4u);
  /* 12aa16a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa16a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa16a9 call 0x12aa1720 */
  push32(0x12aa16aeu); f_12aa1720();
  /* 12aa16ae pop edi */
  EDI = (pop32());
  /* 12aa16af pop esi */
  ESI = (pop32());
  /* 12aa16b0 pop ebx */
  EBX = (pop32());
  /* 12aa16b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa16b4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa16b6 call 0x12aa1720 */
  push32(0x12aa16bbu); f_12aa1720();
  /* 12aa16bb mov esp, ebp */
  ESP = (EBP);
  /* 12aa16bd pop ebp */
  EBP = (pop32());
  /* 12aa16be ret  */
  ESPCHK(0x12aa1680u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12aa1720 (56 bytes, 28 insns) */
void f_12aa1720(void) {
  FTRACE(0x12aa1720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1720 jne 0x12aa1723 */
  if (!C.zf) goto L_12aa1723;
  /* 12aa1722 ret  */
  ESPCHK(0x12aa1720u, _esp0);
  ESP += 4; return;
L_12aa1723:;
  /* 12aa1723 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1724 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1726 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa1729 push eax */
  push32((uint32_t)(EAX));
  /* 12aa172a push edx */
  push32((uint32_t)(EDX));
  /* 12aa172b push ebx */
  push32((uint32_t)(EBX));
  /* 12aa172c push esi */
  push32((uint32_t)(ESI));
  /* 12aa172d push edi */
  push32((uint32_t)(EDI));
  /* 12aa172e push 0x12ac9070 */
  push32((uint32_t)(0x12ac9070u));
  /* 12aa1733 push 0x12ac906c */
  push32((uint32_t)(0x12ac906cu));
  /* 12aa1738 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12aa173a push 0x12ac905c */
  push32((uint32_t)(0x12ac905cu));
  /* 12aa173f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa1741 call 0x12aa1af0 */
  push32(0x12aa1746u); f_12aa1af0();
  /* 12aa1746 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1749 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa174c jne 0x12aa174f */
  if (!C.zf) goto L_12aa174f;
  /* 12aa174e int3  */
  x86_unimpl("int3 @ 0x12aa174e");
L_12aa174f:;
  /* 12aa174f pop edi */
  EDI = (pop32());
  /* 12aa1750 pop esi */
  ESI = (pop32());
  /* 12aa1751 pop ebx */
  EBX = (pop32());
  /* 12aa1752 pop edx */
  EDX = (pop32());
  /* 12aa1753 pop eax */
  EAX = (pop32());
  /* 12aa1754 mov esp, ebp */
  ESP = (EBP);
  /* 12aa1756 pop ebp */
  EBP = (pop32());
  /* 12aa1757 ret  */
  ESPCHK(0x12aa1720u, _esp0);
  ESP += 4; return;
}

/* FUN_10001760 @ 0x12aa1760 (313 bytes, 78 insns) */
void f_12aa1760(void) {
  FTRACE(0x12aa1760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1760 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1761 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1763 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1767 jne 0x12aa1827 */
  if (!C.zf) goto L_12aa1827;
  /* 12aa176d call dword ptr [0x12ad0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0258))), 0x12aa1773u);
  /* 12aa1773 mov dword ptr [0x12ace488], eax */
  w32((uint32_t)(0x12ace488), (EAX));
  /* 12aa1778 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa177a call 0x12aa5220 */
  push32(0x12aa177fu); f_12aa5220();
  /* 12aa177f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1784 jne 0x12aa178d */
  if (!C.zf) goto L_12aa178d;
  /* 12aa1786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1788 jmp 0x12aa1895 */
  goto L_12aa1895;
L_12aa178d:;
  /* 12aa178d mov eax, dword ptr [0x12ace488] */
  EAX = (r32((uint32_t)(0x12ace488)));
  /* 12aa1792 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12aa1795 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa179a mov dword ptr [0x12ace494], eax */
  w32((uint32_t)(0x12ace494), (EAX));
  /* 12aa179f mov ecx, dword ptr [0x12ace488] */
  ECX = (r32((uint32_t)(0x12ace488)));
  /* 12aa17a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa17ab mov dword ptr [0x12ace490], ecx */
  w32((uint32_t)(0x12ace490), (ECX));
  /* 12aa17b1 mov edx, dword ptr [0x12ace490] */
  EDX = (r32((uint32_t)(0x12ace490)));
  /* 12aa17b7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12aa17ba add edx, dword ptr [0x12ace494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ace494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa17c0 mov dword ptr [0x12ace48c], edx */
  w32((uint32_t)(0x12ace48c), (EDX));
  /* 12aa17c6 mov eax, dword ptr [0x12ace488] */
  EAX = (r32((uint32_t)(0x12ace488)));
  /* 12aa17cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12aa17ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa17d3 mov dword ptr [0x12ace488], eax */
  w32((uint32_t)(0x12ace488), (EAX));
  /* 12aa17d8 call 0x12aa2390 */
  push32(0x12aa17ddu); f_12aa2390();
  /* 12aa17dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa17df jne 0x12aa17ed */
  if (!C.zf) goto L_12aa17ed;
  /* 12aa17e1 call 0x12aa5270 */
  push32(0x12aa17e6u); f_12aa5270();
  /* 12aa17e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa17e8 jmp 0x12aa1895 */
  goto L_12aa1895;
L_12aa17ed:;
  /* 12aa17ed call dword ptr [0x12ad0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0254))), 0x12aa17f3u);
  /* 12aa17f3 mov dword ptr [0x12acffcc], eax */
  w32((uint32_t)(0x12acffcc), (EAX));
  /* 12aa17f8 call 0x12aa5000 */
  push32(0x12aa17fdu); f_12aa5000();
  /* 12aa17fd mov dword ptr [0x12ace470], eax */
  w32((uint32_t)(0x12ace470), (EAX));
  /* 12aa1802 call 0x12aa2640 */
  push32(0x12aa1807u); f_12aa2640();
  /* 12aa1807 call 0x12aa4af0 */
  push32(0x12aa180cu); f_12aa4af0();
  /* 12aa180c call 0x12aa49a0 */
  push32(0x12aa1811u); f_12aa49a0();
  /* 12aa1811 call 0x12aa2190 */
  push32(0x12aa1816u); f_12aa2190();
  /* 12aa1816 mov ecx, dword ptr [0x12ace46c] */
  ECX = (r32((uint32_t)(0x12ace46c)));
  /* 12aa181c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa181f mov dword ptr [0x12ace46c], ecx */
  w32((uint32_t)(0x12ace46c), (ECX));
  /* 12aa1825 jmp 0x12aa1890 */
  goto L_12aa1890;
L_12aa1827:;
  /* 12aa1827 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa182b jne 0x12aa1880 */
  if (!C.zf) goto L_12aa1880;
  /* 12aa182d cmp dword ptr [0x12ace46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1834 jle 0x12aa187a */
  if ((C.zf||C.sf!=C.of)) goto L_12aa187a;
  /* 12aa1836 mov edx, dword ptr [0x12ace46c] */
  EDX = (r32((uint32_t)(0x12ace46c)));
  /* 12aa183c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa183f mov dword ptr [0x12ace46c], edx */
  w32((uint32_t)(0x12ace46c), (EDX));
  /* 12aa1845 cmp dword ptr [0x12ace4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa184c jne 0x12aa1853 */
  if (!C.zf) goto L_12aa1853;
  /* 12aa184e call 0x12aa2210 */
  push32(0x12aa1853u); f_12aa2210();
L_12aa1853:;
  /* 12aa1853 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12aa1855 call 0x12aa3f40 */
  push32(0x12aa185au); f_12aa3f40();
  /* 12aa185a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa185d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1862 je 0x12aa1869 */
  if (C.zf) goto L_12aa1869;
  /* 12aa1864 call 0x12aa4850 */
  push32(0x12aa1869u); f_12aa4850();
L_12aa1869:;
  /* 12aa1869 call 0x12aa2970 */
  push32(0x12aa186eu); f_12aa2970();
  /* 12aa186e call 0x12aa2420 */
  push32(0x12aa1873u); f_12aa2420();
  /* 12aa1873 call 0x12aa5270 */
  push32(0x12aa1878u); f_12aa5270();
  /* 12aa1878 jmp 0x12aa187e */
  goto L_12aa187e;
L_12aa187a:;
  /* 12aa187a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa187c jmp 0x12aa1895 */
  goto L_12aa1895;
L_12aa187e:;
  /* 12aa187e jmp 0x12aa1890 */
  goto L_12aa1890;
L_12aa1880:;
  /* 12aa1880 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1884 jne 0x12aa1890 */
  if (!C.zf) goto L_12aa1890;
  /* 12aa1886 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1888 call 0x12aa2510 */
  push32(0x12aa188du); f_12aa2510();
  /* 12aa188d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1890:;
  /* 12aa1890 mov eax, 1 */
  EAX = (0x1u);
L_12aa1895:;
  /* 12aa1895 pop ebp */
  EBP = (pop32());
  /* 12aa1896 ret 0xc */
  ESPCHK(0x12aa1760u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12aa18a0 (243 bytes, 86 insns) */
void f_12aa18a0(void) {
  FTRACE(0x12aa18a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa18a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa18a1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa18a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa18a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa18ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18af jne 0x12aa18c1 */
  if (!C.zf) goto L_12aa18c1;
  /* 12aa18b1 cmp dword ptr [0x12ace46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18b8 jne 0x12aa18c1 */
  if (!C.zf) goto L_12aa18c1;
  /* 12aa18ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa18bc jmp 0x12aa198d */
  goto L_12aa198d;
L_12aa18c1:;
  /* 12aa18c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18c5 je 0x12aa18cd */
  if (C.zf) goto L_12aa18cd;
  /* 12aa18c7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18cb jne 0x12aa190f */
  if (!C.zf) goto L_12aa190f;
L_12aa18cd:;
  /* 12aa18cd cmp dword ptr [0x12acffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18d4 je 0x12aa18eb */
  if (C.zf) goto L_12aa18eb;
  /* 12aa18d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa18d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa18da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa18dd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa18de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa18e1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa18e2 call dword ptr [0x12acffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acffdc))), 0x12aa18e8u);
  /* 12aa18e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa18eb:;
  /* 12aa18eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa18ef je 0x12aa1905 */
  if (C.zf) goto L_12aa1905;
  /* 12aa18f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa18f4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa18f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa18f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa18f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa18fc push edx */
  push32((uint32_t)(EDX));
  /* 12aa18fd call 0x12aa1760 */
  push32(0x12aa1902u); f_12aa1760();
  /* 12aa1902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa1905:;
  /* 12aa1905 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1909 jne 0x12aa190f */
  if (!C.zf) goto L_12aa190f;
  /* 12aa190b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa190d jmp 0x12aa198d */
  goto L_12aa198d;
L_12aa190f:;
  /* 12aa190f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1912 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1916 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa191a push edx */
  push32((uint32_t)(EDX));
  /* 12aa191b call 0x12aa1014 */
  push32(0x12aa1920u); f_12aa1014();
  /* 12aa1920 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa1923 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1927 jne 0x12aa193e */
  if (!C.zf) goto L_12aa193e;
  /* 12aa1929 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa192d jne 0x12aa193e */
  if (!C.zf) goto L_12aa193e;
  /* 12aa192f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1932 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1933 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1938 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1939 call 0x12aa1760 */
  push32(0x12aa193eu); f_12aa1760();
L_12aa193e:;
  /* 12aa193e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1942 je 0x12aa194a */
  if (C.zf) goto L_12aa194a;
  /* 12aa1944 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1948 jne 0x12aa198a */
  if (!C.zf) goto L_12aa198a;
L_12aa194a:;
  /* 12aa194a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa194d push edx */
  push32((uint32_t)(EDX));
  /* 12aa194e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1951 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1952 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1955 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1956 call 0x12aa1760 */
  push32(0x12aa195bu); f_12aa1760();
  /* 12aa195b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa195d jne 0x12aa1966 */
  if (!C.zf) goto L_12aa1966;
  /* 12aa195f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa1966:;
  /* 12aa1966 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa196a je 0x12aa198a */
  if (C.zf) goto L_12aa198a;
  /* 12aa196c cmp dword ptr [0x12acffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1973 je 0x12aa198a */
  if (C.zf) goto L_12aa198a;
  /* 12aa1975 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1978 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1979 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa197c push eax */
  push32((uint32_t)(EAX));
  /* 12aa197d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1980 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1981 call dword ptr [0x12acffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acffdc))), 0x12aa1987u);
  /* 12aa1987 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa198a:;
  /* 12aa198a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa198d:;
  /* 12aa198d mov esp, ebp */
  ESP = (EBP);
  /* 12aa198f pop ebp */
  EBP = (pop32());
  /* 12aa1990 ret 0xc */
  ESPCHK(0x12aa18a0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12aa19a0 (58 bytes, 18 insns) */
void f_12aa19a0(void) {
  FTRACE(0x12aa19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa19a1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa19a3 cmp dword ptr [0x12ace478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa19aa je 0x12aa19be */
  if (C.zf) goto L_12aa19be;
  /* 12aa19ac cmp dword ptr [0x12ace478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa19b3 jne 0x12aa19c3 */
  if (!C.zf) goto L_12aa19c3;
  /* 12aa19b5 cmp dword ptr [0x12ace47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa19bc jne 0x12aa19c3 */
  if (!C.zf) goto L_12aa19c3;
L_12aa19be:;
  /* 12aa19be call 0x12aa5310 */
  push32(0x12aa19c3u); f_12aa5310();
L_12aa19c3:;
  /* 12aa19c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa19c6 push eax */
  push32((uint32_t)(EAX));
  /* 12aa19c7 call 0x12aa5360 */
  push32(0x12aa19ccu); f_12aa5360();
  /* 12aa19cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa19cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12aa19d4 call dword ptr [0x12acca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acca30))), 0x12aa19dau);
  /* 12aa19da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa19dd pop ebp */
  EBP = (pop32());
  /* 12aa19de ret  */
  ESPCHK(0x12aa19a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100019e0 @ 0x12aa19e0 (11 bytes, 5 insns) */
void f_12aa19e0(void) {
  FTRACE(0x12aa19e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa19e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa19e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa19e3 call dword ptr [0x12ad025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad025c))), 0x12aa19e9u);
  /* 12aa19e9 pop ebp */
  EBP = (pop32());
  /* 12aa19ea ret  */
  ESPCHK(0x12aa19e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100019f0 @ 0x12aa19f0 (87 bytes, 30 insns) */
void f_12aa19f0(void) {
  FTRACE(0x12aa19f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa19f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa19f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa19f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa19f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa19f8 jl 0x12aa1a00 */
  if ((C.sf!=C.of)) goto L_12aa1a00;
  /* 12aa19fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa19fe jl 0x12aa1a05 */
  if ((C.sf!=C.of)) goto L_12aa1a05;
L_12aa1a00:;
  /* 12aa1a00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1a03 jmp 0x12aa1a43 */
  goto L_12aa1a43;
L_12aa1a05:;
  /* 12aa1a05 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1a09 jne 0x12aa1a17 */
  if (!C.zf) goto L_12aa1a17;
  /* 12aa1a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a0e mov eax, dword ptr [eax*4 + 0x12acca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12acca38)));
  /* 12aa1a15 jmp 0x12aa1a43 */
  goto L_12aa1a43;
L_12aa1a17:;
  /* 12aa1a17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1a1a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa1a1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa1a1f je 0x12aa1a26 */
  if (C.zf) goto L_12aa1a26;
  /* 12aa1a21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1a24 jmp 0x12aa1a43 */
  goto L_12aa1a43;
L_12aa1a26:;
  /* 12aa1a26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a29 mov eax, dword ptr [edx*4 + 0x12acca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acca38)));
  /* 12aa1a30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa1a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1a39 mov dword ptr [ecx*4 + 0x12acca38], edx */
  w32((uint32_t)(ECX*4 + 0x12acca38), (EDX));
  /* 12aa1a40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa1a43:;
  /* 12aa1a43 mov esp, ebp */
  ESP = (EBP);
  /* 12aa1a45 pop ebp */
  EBP = (pop32());
  /* 12aa1a46 ret  */
  ESPCHK(0x12aa19f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12aa1a50 (126 bytes, 38 insns) */
void f_12aa1a50(void) {
  FTRACE(0x12aa1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1a51 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1a58 jl 0x12aa1a60 */
  if ((C.sf!=C.of)) goto L_12aa1a60;
  /* 12aa1a5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1a5e jl 0x12aa1a67 */
  if ((C.sf!=C.of)) goto L_12aa1a67;
L_12aa1a60:;
  /* 12aa1a60 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12aa1a65 jmp 0x12aa1aca */
  goto L_12aa1aca;
L_12aa1a67:;
  /* 12aa1a67 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1a6b jne 0x12aa1a79 */
  if (!C.zf) goto L_12aa1a79;
  /* 12aa1a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a70 mov eax, dword ptr [eax*4 + 0x12acca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12acca44)));
  /* 12aa1a77 jmp 0x12aa1aca */
  goto L_12aa1aca;
L_12aa1a79:;
  /* 12aa1a79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a7c mov edx, dword ptr [ecx*4 + 0x12acca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca44)));
  /* 12aa1a83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa1a86 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1a8a jne 0x12aa1aa0 */
  if (!C.zf) goto L_12aa1aa0;
  /* 12aa1a8c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12aa1a8e call dword ptr [0x12ad0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0260))), 0x12aa1a94u);
  /* 12aa1a94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1a97 mov dword ptr [ecx*4 + 0x12acca44], eax */
  w32((uint32_t)(ECX*4 + 0x12acca44), (EAX));
  /* 12aa1a9e jmp 0x12aa1ac7 */
  goto L_12aa1ac7;
L_12aa1aa0:;
  /* 12aa1aa0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1aa4 jne 0x12aa1aba */
  if (!C.zf) goto L_12aa1aba;
  /* 12aa1aa6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12aa1aa8 call dword ptr [0x12ad0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0260))), 0x12aa1aaeu);
  /* 12aa1aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1ab1 mov dword ptr [edx*4 + 0x12acca44], eax */
  w32((uint32_t)(EDX*4 + 0x12acca44), (EAX));
  /* 12aa1ab8 jmp 0x12aa1ac7 */
  goto L_12aa1ac7;
L_12aa1aba:;
  /* 12aa1aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1abd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1ac0 mov dword ptr [eax*4 + 0x12acca44], ecx */
  w32((uint32_t)(EAX*4 + 0x12acca44), (ECX));
L_12aa1ac7:;
  /* 12aa1ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa1aca:;
  /* 12aa1aca mov esp, ebp */
  ESP = (EBP);
  /* 12aa1acc pop ebp */
  EBP = (pop32());
  /* 12aa1acd ret  */
  ESPCHK(0x12aa1a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ad0 @ 0x12aa1ad0 (28 bytes, 11 insns) */
void f_12aa1ad0(void) {
  FTRACE(0x12aa1ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1ad4 mov eax, dword ptr [0x12acffc0] */
  EAX = (r32((uint32_t)(0x12acffc0)));
  /* 12aa1ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa1adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1adf mov dword ptr [0x12acffc0], ecx */
  w32((uint32_t)(0x12acffc0), (ECX));
  /* 12aa1ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa1ae8 mov esp, ebp */
  ESP = (EBP);
  /* 12aa1aea pop ebp */
  EBP = (pop32());
  /* 12aa1aeb ret  */
  ESPCHK(0x12aa1ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x12aa1af0 (912 bytes, 248 insns) */
void f_12aa1af0(void) {
  FTRACE(0x12aa1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1af1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1af3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12aa1af8 call 0x12aa5bd0 */
  push32(0x12aa1afdu); f_12aa5bd0();
  /* 12aa1afd push edi */
  push32((uint32_t)(EDI));
  /* 12aa1afe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12aa1b05 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12aa1b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1b0c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12aa1b12 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1b14 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12aa1b16 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa1b17 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12aa1b1e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12aa1b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1b25 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12aa1b2b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1b2d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12aa1b2f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa1b30 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12aa1b37 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12aa1b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1b3e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12aa1b44 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa1b46 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12aa1b48 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12aa1b49 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12aa1b4c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12aa1b52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1b56 jl 0x12aa1b5e */
  if ((C.sf!=C.of)) goto L_12aa1b5e;
  /* 12aa1b58 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1b5c jl 0x12aa1b66 */
  if ((C.sf!=C.of)) goto L_12aa1b66;
L_12aa1b5e:;
  /* 12aa1b5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1b61 jmp 0x12aa1e7b */
  goto L_12aa1e7b;
L_12aa1b66:;
  /* 12aa1b66 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1b6a jne 0x12aa1c10 */
  if (!C.zf) goto L_12aa1c10;
  /* 12aa1b70 push 0x12acca34 */
  push32((uint32_t)(0x12acca34u));
  /* 12aa1b75 call dword ptr [0x12ad0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0278))), 0x12aa1b7bu);
  /* 12aa1b7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1b7d jle 0x12aa1c10 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa1c10;
  /* 12aa1b83 cmp dword ptr [0x12ace480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1b8a jne 0x12aa1bce */
  if (!C.zf) goto L_12aa1bce;
  /* 12aa1b8c push 0x12ac9218 */
  push32((uint32_t)(0x12ac9218u));
  /* 12aa1b91 call dword ptr [0x12ad0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0274))), 0x12aa1b97u);
  /* 12aa1b97 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12aa1b9d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1ba4 je 0x12aa1bc6 */
  if (C.zf) goto L_12aa1bc6;
  /* 12aa1ba6 push 0x12ac920c */
  push32((uint32_t)(0x12ac920cu));
  /* 12aa1bab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12aa1bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1bb2 call dword ptr [0x12ad0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0270))), 0x12aa1bb8u);
  /* 12aa1bb8 mov dword ptr [0x12ace480], eax */
  w32((uint32_t)(0x12ace480), (EAX));
  /* 12aa1bbd cmp dword ptr [0x12ace480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1bc4 jne 0x12aa1bce */
  if (!C.zf) goto L_12aa1bce;
L_12aa1bc6:;
  /* 12aa1bc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1bc9 jmp 0x12aa1e7b */
  goto L_12aa1e7b;
L_12aa1bce:;
  /* 12aa1bce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1bd1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1bd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1bd6 push 0x12ac91d8 */
  push32((uint32_t)(0x12ac91d8u));
  /* 12aa1bdb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1be1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1be2 call dword ptr [0x12ace480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace480))), 0x12aa1be8u);
  /* 12aa1be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1beb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1bf2 call dword ptr [0x12ad026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad026c))), 0x12aa1bf8u);
  /* 12aa1bf8 push 0x12acca34 */
  push32((uint32_t)(0x12acca34u));
  /* 12aa1bfd call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aa1c03u);
  /* 12aa1c03 call 0x12aa19e0 */
  push32(0x12aa1c08u); f_12aa19e0();
  /* 12aa1c08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1c0b jmp 0x12aa1e7b */
  goto L_12aa1e7b;
L_12aa1c10:;
  /* 12aa1c10 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1c14 je 0x12aa1c4d */
  if (C.zf) goto L_12aa1c4d;
  /* 12aa1c16 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12aa1c1c push eax */
  push32((uint32_t)(EAX));
  /* 12aa1c1d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa1c20 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1c21 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12aa1c26 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12aa1c2c push edx */
  push32((uint32_t)(EDX));
  /* 12aa1c2d call 0x12aa5ad0 */
  push32(0x12aa1c32u); f_12aa5ad0();
  /* 12aa1c32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1c37 jge 0x12aa1c4d */
  if ((C.sf==C.of)) goto L_12aa1c4d;
  /* 12aa1c39 push 0x12ac91ac */
  push32((uint32_t)(0x12ac91acu));
  /* 12aa1c3e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12aa1c44 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1c45 call 0x12aa59e0 */
  push32(0x12aa1c4au); f_12aa59e0();
  /* 12aa1c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1c4d:;
  /* 12aa1c4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1c51 jne 0x12aa1c85 */
  if (!C.zf) goto L_12aa1c85;
  /* 12aa1c53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1c57 je 0x12aa1c65 */
  if (C.zf) goto L_12aa1c65;
  /* 12aa1c59 mov dword ptr [ebp - 0x3028], 0x12ac9198 */
  w32((uint32_t)(EBP + -0x3028), (0x12ac9198u));
  /* 12aa1c63 jmp 0x12aa1c6f */
  goto L_12aa1c6f;
L_12aa1c65:;
  /* 12aa1c65 mov dword ptr [ebp - 0x3028], 0x12ac9184 */
  w32((uint32_t)(EBP + -0x3028), (0x12ac9184u));
L_12aa1c6f:;
  /* 12aa1c6f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12aa1c75 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1c76 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1c7c push edx */
  push32((uint32_t)(EDX));
  /* 12aa1c7d call 0x12aa59e0 */
  push32(0x12aa1c82u); f_12aa59e0();
  /* 12aa1c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1c85:;
  /* 12aa1c85 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12aa1c8b push eax */
  push32((uint32_t)(EAX));
  /* 12aa1c8c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1c92 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1c93 call 0x12aa59f0 */
  push32(0x12aa1c98u); f_12aa59f0();
  /* 12aa1c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1c9b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1c9f jne 0x12aa1cda */
  if (!C.zf) goto L_12aa1cda;
  /* 12aa1ca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1ca4 mov eax, dword ptr [edx*4 + 0x12acca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acca38)));
  /* 12aa1cab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1cb0 je 0x12aa1cc6 */
  if (C.zf) goto L_12aa1cc6;
  /* 12aa1cb2 push 0x12ac9180 */
  push32((uint32_t)(0x12ac9180u));
  /* 12aa1cb7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1cbd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1cbe call 0x12aa59f0 */
  push32(0x12aa1cc3u); f_12aa59f0();
  /* 12aa1cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1cc6:;
  /* 12aa1cc6 push 0x12ac917c */
  push32((uint32_t)(0x12ac917cu));
  /* 12aa1ccb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1cd2 call 0x12aa59f0 */
  push32(0x12aa1cd7u); f_12aa59f0();
  /* 12aa1cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1cda:;
  /* 12aa1cda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1cde je 0x12aa1d22 */
  if (C.zf) goto L_12aa1d22;
  /* 12aa1ce0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1ce6 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1ce7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1cea push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1ceb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1cee push edx */
  push32((uint32_t)(EDX));
  /* 12aa1cef push 0x12ac9170 */
  push32((uint32_t)(0x12ac9170u));
  /* 12aa1cf4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12aa1cf9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1cff push eax */
  push32((uint32_t)(EAX));
  /* 12aa1d00 call 0x12aa58e0 */
  push32(0x12aa1d05u); f_12aa58e0();
  /* 12aa1d05 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1d0a jge 0x12aa1d20 */
  if ((C.sf==C.of)) goto L_12aa1d20;
  /* 12aa1d0c push 0x12ac91ac */
  push32((uint32_t)(0x12ac91acu));
  /* 12aa1d11 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1d17 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1d18 call 0x12aa59e0 */
  push32(0x12aa1d1du); f_12aa59e0();
  /* 12aa1d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1d20:;
  /* 12aa1d20 jmp 0x12aa1d38 */
  goto L_12aa1d38;
L_12aa1d22:;
  /* 12aa1d22 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12aa1d28 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1d29 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1d2f push eax */
  push32((uint32_t)(EAX));
  /* 12aa1d30 call 0x12aa59e0 */
  push32(0x12aa1d35u); f_12aa59e0();
  /* 12aa1d35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1d38:;
  /* 12aa1d38 cmp dword ptr [0x12acffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1d3f je 0x12aa1d7c */
  if (C.zf) goto L_12aa1d7c;
  /* 12aa1d41 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12aa1d47 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1d48 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1d4e push edx */
  push32((uint32_t)(EDX));
  /* 12aa1d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1d52 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1d53 call dword ptr [0x12acffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acffc0))), 0x12aa1d59u);
  /* 12aa1d59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1d5e je 0x12aa1d7c */
  if (C.zf) goto L_12aa1d7c;
  /* 12aa1d60 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1d64 jne 0x12aa1d71 */
  if (!C.zf) goto L_12aa1d71;
  /* 12aa1d66 push 0x12acca34 */
  push32((uint32_t)(0x12acca34u));
  /* 12aa1d6b call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aa1d71u);
L_12aa1d71:;
  /* 12aa1d71 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12aa1d77 jmp 0x12aa1e7b */
  goto L_12aa1e7b;
L_12aa1d7c:;
  /* 12aa1d7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1d7f mov edx, dword ptr [ecx*4 + 0x12acca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca38)));
  /* 12aa1d86 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa1d89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa1d8b je 0x12aa1dcb */
  if (C.zf) goto L_12aa1dcb;
  /* 12aa1d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1d90 cmp dword ptr [eax*4 + 0x12acca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12acca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1d98 je 0x12aa1dcb */
  if (C.zf) goto L_12aa1dcb;
  /* 12aa1d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1d9c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12aa1da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1da3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1da9 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1daa call 0x12aa5860 */
  push32(0x12aa1dafu); f_12aa5860();
  /* 12aa1daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1db2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1db3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1db9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1dba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1dbd mov edx, dword ptr [ecx*4 + 0x12acca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca44)));
  /* 12aa1dc4 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1dc5 call dword ptr [0x12ad0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0264))), 0x12aa1dcbu);
L_12aa1dcb:;
  /* 12aa1dcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1dce mov ecx, dword ptr [eax*4 + 0x12acca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acca38)));
  /* 12aa1dd5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa1dd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa1dda je 0x12aa1de9 */
  if (C.zf) goto L_12aa1de9;
  /* 12aa1ddc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12aa1de2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1de3 call dword ptr [0x12ad026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad026c))), 0x12aa1de9u);
L_12aa1de9:;
  /* 12aa1de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1dec mov ecx, dword ptr [eax*4 + 0x12acca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acca38)));
  /* 12aa1df3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa1df6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa1df8 je 0x12aa1e68 */
  if (C.zf) goto L_12aa1e68;
  /* 12aa1dfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1dfe je 0x12aa1e1d */
  if (C.zf) goto L_12aa1e1d;
  /* 12aa1e00 push 0xa */
  push32((uint32_t)(0xau));
  /* 12aa1e02 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12aa1e08 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1e09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa1e0c push eax */
  push32((uint32_t)(EAX));
  /* 12aa1e0d call 0x12aa5570 */
  push32(0x12aa1e12u); f_12aa5570();
  /* 12aa1e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1e15 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12aa1e1b jmp 0x12aa1e27 */
  goto L_12aa1e27;
L_12aa1e1d:;
  /* 12aa1e1d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12aa1e27:;
  /* 12aa1e27 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12aa1e2d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1e2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa1e31 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1e32 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12aa1e38 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1e39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa1e3c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1e3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa1e40 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1e41 call 0x12aa1e80 */
  push32(0x12aa1e46u); f_12aa1e80();
  /* 12aa1e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1e49 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12aa1e4f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1e53 jne 0x12aa1e60 */
  if (!C.zf) goto L_12aa1e60;
  /* 12aa1e55 push 0x12acca34 */
  push32((uint32_t)(0x12acca34u));
  /* 12aa1e5a call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aa1e60u);
L_12aa1e60:;
  /* 12aa1e60 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12aa1e66 jmp 0x12aa1e7b */
  goto L_12aa1e7b;
L_12aa1e68:;
  /* 12aa1e68 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1e6c jne 0x12aa1e79 */
  if (!C.zf) goto L_12aa1e79;
  /* 12aa1e6e push 0x12acca34 */
  push32((uint32_t)(0x12acca34u));
  /* 12aa1e73 call dword ptr [0x12ad0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0268))), 0x12aa1e79u);
L_12aa1e79:;
  /* 12aa1e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa1e7b:;
  /* 12aa1e7b pop edi */
  EDI = (pop32());
  /* 12aa1e7c mov esp, ebp */
  ESP = (EBP);
  /* 12aa1e7e pop ebp */
  EBP = (pop32());
  /* 12aa1e7f ret  */
  ESPCHK(0x12aa1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e80 @ 0x12aa1e80 (780 bytes, 197 insns) */
void f_12aa1e80(void) {
  FTRACE(0x12aa1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa1e81 mov ebp, esp */
  EBP = (ESP);
  /* 12aa1e83 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12aa1e88 call 0x12aa5bd0 */
  push32(0x12aa1e8du); f_12aa5bd0();
L_12aa1e8d:;
  /* 12aa1e8d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1e91 jne 0x12aa1eb8 */
  if (!C.zf) goto L_12aa1eb8;
  /* 12aa1e93 push 0x12ac9368 */
  push32((uint32_t)(0x12ac9368u));
  /* 12aa1e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1e9a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12aa1e9f push 0x12ac935c */
  push32((uint32_t)(0x12ac935cu));
  /* 12aa1ea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa1ea6 call 0x12aa1af0 */
  push32(0x12aa1eabu); f_12aa1af0();
  /* 12aa1eab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1eae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1eb1 jne 0x12aa1eb8 */
  if (!C.zf) goto L_12aa1eb8;
  /* 12aa1eb3 call 0x12aa19e0 */
  push32(0x12aa1eb8u); f_12aa19e0();
L_12aa1eb8:;
  /* 12aa1eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa1eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1ebc jne 0x12aa1e8d */
  if (!C.zf) goto L_12aa1e8d;
  /* 12aa1ebe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12aa1ec3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12aa1ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1eca push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa1ecc call dword ptr [0x12ad027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad027c))), 0x12aa1ed2u);
  /* 12aa1ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa1ed4 jne 0x12aa1eea */
  if (!C.zf) goto L_12aa1eea;
  /* 12aa1ed6 push 0x12ac9344 */
  push32((uint32_t)(0x12ac9344u));
  /* 12aa1edb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12aa1ee1 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1ee2 call 0x12aa59e0 */
  push32(0x12aa1ee7u); f_12aa59e0();
  /* 12aa1ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1eea:;
  /* 12aa1eea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12aa1ef0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa1ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa1ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa1ef7 call 0x12aa5860 */
  push32(0x12aa1efcu); f_12aa5860();
  /* 12aa1efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1eff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1f02 jbe 0x12aa1f2d */
  if ((C.cf||C.zf)) goto L_12aa1f2d;
  /* 12aa1f04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa1f07 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1f08 call 0x12aa5860 */
  push32(0x12aa1f0du); f_12aa5860();
  /* 12aa1f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1f10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa1f13 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12aa1f17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa1f1a push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa1f1c push 0x12ac9340 */
  push32((uint32_t)(0x12ac9340u));
  /* 12aa1f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa1f24 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1f25 call 0x12aa6250 */
  push32(0x12aa1f2au); f_12aa6250();
  /* 12aa1f2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1f2d:;
  /* 12aa1f2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa1f30 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12aa1f36 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1f3d je 0x12aa1f88 */
  if (C.zf) goto L_12aa1f88;
  /* 12aa1f3f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12aa1f45 push edx */
  push32((uint32_t)(EDX));
  /* 12aa1f46 call 0x12aa5860 */
  push32(0x12aa1f4bu); f_12aa5860();
  /* 12aa1f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1f4e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1f51 jbe 0x12aa1f88 */
  if ((C.cf||C.zf)) goto L_12aa1f88;
  /* 12aa1f53 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12aa1f59 push eax */
  push32((uint32_t)(EAX));
  /* 12aa1f5a call 0x12aa5860 */
  push32(0x12aa1f5fu); f_12aa5860();
  /* 12aa1f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa1f62 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12aa1f68 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12aa1f6c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12aa1f72 push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa1f74 push 0x12ac9340 */
  push32((uint32_t)(0x12ac9340u));
  /* 12aa1f79 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12aa1f7f push eax */
  push32((uint32_t)(EAX));
  /* 12aa1f80 call 0x12aa6250 */
  push32(0x12aa1f85u); f_12aa6250();
  /* 12aa1f85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa1f88:;
  /* 12aa1f88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1f8c jne 0x12aa1f9a */
  if (!C.zf) goto L_12aa1f9a;
  /* 12aa1f8e mov dword ptr [ebp - 0x1114], 0x12ac92cc */
  w32((uint32_t)(EBP + -0x1114), (0x12ac92ccu));
  /* 12aa1f98 jmp 0x12aa1fa4 */
  goto L_12aa1fa4;
L_12aa1f9a:;
  /* 12aa1f9a mov dword ptr [ebp - 0x1114], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1114), (0x12ac906cu));
L_12aa1fa4:;
  /* 12aa1fa4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa1fa7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa1faa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa1fac je 0x12aa1fb9 */
  if (C.zf) goto L_12aa1fb9;
  /* 12aa1fae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa1fb1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12aa1fb7 jmp 0x12aa1fc3 */
  goto L_12aa1fc3;
L_12aa1fb9:;
  /* 12aa1fb9 mov dword ptr [ebp - 0x1118], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1118), (0x12ac906cu));
L_12aa1fc3:;
  /* 12aa1fc3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa1fc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa1fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa1fcb je 0x12aa1fdf */
  if (C.zf) goto L_12aa1fdf;
  /* 12aa1fcd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa1fd1 jne 0x12aa1fdf */
  if (!C.zf) goto L_12aa1fdf;
  /* 12aa1fd3 mov dword ptr [ebp - 0x111c], 0x12ac92bc */
  w32((uint32_t)(EBP + -0x111c), (0x12ac92bcu));
  /* 12aa1fdd jmp 0x12aa1fe9 */
  goto L_12aa1fe9;
L_12aa1fdf:;
  /* 12aa1fdf mov dword ptr [ebp - 0x111c], 0x12ac906c */
  w32((uint32_t)(EBP + -0x111c), (0x12ac906cu));
L_12aa1fe9:;
  /* 12aa1fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa1fec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa1fef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa1ff1 je 0x12aa1fff */
  if (C.zf) goto L_12aa1fff;
  /* 12aa1ff3 mov dword ptr [ebp - 0x1120], 0x12ac92b8 */
  w32((uint32_t)(EBP + -0x1120), (0x12ac92b8u));
  /* 12aa1ffd jmp 0x12aa2009 */
  goto L_12aa2009;
L_12aa1fff:;
  /* 12aa1fff mov dword ptr [ebp - 0x1120], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1120), (0x12ac906cu));
L_12aa2009:;
  /* 12aa2009 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa200d je 0x12aa201a */
  if (C.zf) goto L_12aa201a;
  /* 12aa200f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2012 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12aa2018 jmp 0x12aa2024 */
  goto L_12aa2024;
L_12aa201a:;
  /* 12aa201a mov dword ptr [ebp - 0x1124], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1124), (0x12ac906cu));
L_12aa2024:;
  /* 12aa2024 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2028 je 0x12aa2036 */
  if (C.zf) goto L_12aa2036;
  /* 12aa202a mov dword ptr [ebp - 0x1128], 0x12ac92b0 */
  w32((uint32_t)(EBP + -0x1128), (0x12ac92b0u));
  /* 12aa2034 jmp 0x12aa2040 */
  goto L_12aa2040;
L_12aa2036:;
  /* 12aa2036 mov dword ptr [ebp - 0x1128], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1128), (0x12ac906cu));
L_12aa2040:;
  /* 12aa2040 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2044 je 0x12aa2051 */
  if (C.zf) goto L_12aa2051;
  /* 12aa2046 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2049 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12aa204f jmp 0x12aa205b */
  goto L_12aa205b;
L_12aa2051:;
  /* 12aa2051 mov dword ptr [ebp - 0x112c], 0x12ac906c */
  w32((uint32_t)(EBP + -0x112c), (0x12ac906cu));
L_12aa205b:;
  /* 12aa205b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa205f je 0x12aa206d */
  if (C.zf) goto L_12aa206d;
  /* 12aa2061 mov dword ptr [ebp - 0x1130], 0x12ac92a8 */
  w32((uint32_t)(EBP + -0x1130), (0x12ac92a8u));
  /* 12aa206b jmp 0x12aa2077 */
  goto L_12aa2077;
L_12aa206d:;
  /* 12aa206d mov dword ptr [ebp - 0x1130], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1130), (0x12ac906cu));
L_12aa2077:;
  /* 12aa2077 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa207e je 0x12aa208e */
  if (C.zf) goto L_12aa208e;
  /* 12aa2080 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12aa2086 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12aa208c jmp 0x12aa2098 */
  goto L_12aa2098;
L_12aa208e:;
  /* 12aa208e mov dword ptr [ebp - 0x1134], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1134), (0x12ac906cu));
L_12aa2098:;
  /* 12aa2098 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa209f je 0x12aa20ad */
  if (C.zf) goto L_12aa20ad;
  /* 12aa20a1 mov dword ptr [ebp - 0x1138], 0x12ac929c */
  w32((uint32_t)(EBP + -0x1138), (0x12ac929cu));
  /* 12aa20ab jmp 0x12aa20b7 */
  goto L_12aa20b7;
L_12aa20ad:;
  /* 12aa20ad mov dword ptr [ebp - 0x1138], 0x12ac906c */
  w32((uint32_t)(EBP + -0x1138), (0x12ac906cu));
L_12aa20b7:;
  /* 12aa20b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12aa20bd push edx */
  push32((uint32_t)(EDX));
  /* 12aa20be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12aa20c4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa20c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12aa20cb push ecx */
  push32((uint32_t)(ECX));
  /* 12aa20cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12aa20d2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa20d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12aa20d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa20da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12aa20e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa20e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12aa20e7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa20e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12aa20ee push eax */
  push32((uint32_t)(EAX));
  /* 12aa20ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12aa20f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa20f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12aa20fc push edx */
  push32((uint32_t)(EDX));
  /* 12aa20fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2100 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2104 mov edx, dword ptr [ecx*4 + 0x12acca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca50)));
  /* 12aa210b push edx */
  push32((uint32_t)(EDX));
  /* 12aa210c push 0x12ac9248 */
  push32((uint32_t)(0x12ac9248u));
  /* 12aa2111 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12aa2116 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12aa211c push eax */
  push32((uint32_t)(EAX));
  /* 12aa211d call 0x12aa58e0 */
  push32(0x12aa2122u); f_12aa58e0();
  /* 12aa2122 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2127 jge 0x12aa213d */
  if ((C.sf==C.of)) goto L_12aa213d;
  /* 12aa2129 push 0x12ac91ac */
  push32((uint32_t)(0x12ac91acu));
  /* 12aa212e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12aa2134 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2135 call 0x12aa59e0 */
  push32(0x12aa213au); f_12aa59e0();
  /* 12aa213a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa213d:;
  /* 12aa213d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12aa2142 push 0x12ac9224 */
  push32((uint32_t)(0x12ac9224u));
  /* 12aa2147 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12aa214d push edx */
  push32((uint32_t)(EDX));
  /* 12aa214e call 0x12aa6190 */
  push32(0x12aa2153u); f_12aa6190();
  /* 12aa2153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2156 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12aa215c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2163 jne 0x12aa2176 */
  if (!C.zf) goto L_12aa2176;
  /* 12aa2165 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12aa2167 call 0x12aa5ed0 */
  push32(0x12aa216cu); f_12aa5ed0();
  /* 12aa216c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa216f push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa2171 call 0x12aa21f0 */
  push32(0x12aa2176u); f_12aa21f0();
L_12aa2176:;
  /* 12aa2176 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa217d jne 0x12aa2186 */
  if (!C.zf) goto L_12aa2186;
  /* 12aa217f mov eax, 1 */
  EAX = (0x1u);
  /* 12aa2184 jmp 0x12aa2188 */
  goto L_12aa2188;
L_12aa2186:;
  /* 12aa2186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa2188:;
  /* 12aa2188 mov esp, ebp */
  ESP = (EBP);
  /* 12aa218a pop ebp */
  EBP = (pop32());
  /* 12aa218b ret  */
  ESPCHK(0x12aa1e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002190 @ 0x12aa2190 (56 bytes, 15 insns) */
void f_12aa2190(void) {
  FTRACE(0x12aa2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2190 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2191 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2193 cmp dword ptr [0x12acffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa219a je 0x12aa21a2 */
  if (C.zf) goto L_12aa21a2;
  /* 12aa219c call dword ptr [0x12acffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acffbc))), 0x12aa21a2u);
L_12aa21a2:;
  /* 12aa21a2 push 0x12acc418 */
  push32((uint32_t)(0x12acc418u));
  /* 12aa21a7 push 0x12acc208 */
  push32((uint32_t)(0x12acc208u));
  /* 12aa21ac call 0x12aa2360 */
  push32(0x12aa21b1u); f_12aa2360();
  /* 12aa21b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa21b4 push 0x12acc104 */
  push32((uint32_t)(0x12acc104u));
  /* 12aa21b9 push 0x12acc000 */
  push32((uint32_t)(0x12acc000u));
  /* 12aa21be call 0x12aa2360 */
  push32(0x12aa21c3u); f_12aa2360();
  /* 12aa21c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa21c6 pop ebp */
  EBP = (pop32());
  /* 12aa21c7 ret  */
  ESPCHK(0x12aa2190u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x12aa21d0 (21 bytes, 10 insns) */
void f_12aa21d0(void) {
  FTRACE(0x12aa21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa21d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa21d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa21d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa21d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa21da push eax */
  push32((uint32_t)(EAX));
  /* 12aa21db call 0x12aa2250 */
  push32(0x12aa21e0u); f_12aa2250();
  /* 12aa21e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa21e3 pop ebp */
  EBP = (pop32());
  /* 12aa21e4 ret  */
  ESPCHK(0x12aa21d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12aa21f0 (21 bytes, 10 insns) */
void f_12aa21f0(void) {
  FTRACE(0x12aa21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa21f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa21f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa21f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa21f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa21fa push eax */
  push32((uint32_t)(EAX));
  /* 12aa21fb call 0x12aa2250 */
  push32(0x12aa2200u); f_12aa2250();
  /* 12aa2200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2203 pop ebp */
  EBP = (pop32());
  /* 12aa2204 ret  */
  ESPCHK(0x12aa21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002210 @ 0x12aa2210 (19 bytes, 9 insns) */
void f_12aa2210(void) {
  FTRACE(0x12aa2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2210 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2211 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2213 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2217 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2219 call 0x12aa2250 */
  push32(0x12aa221eu); f_12aa2250();
  /* 12aa221e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2221 pop ebp */
  EBP = (pop32());
  /* 12aa2222 ret  */
  ESPCHK(0x12aa2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10002230 @ 0x12aa2230 (19 bytes, 9 insns) */
void f_12aa2230(void) {
  FTRACE(0x12aa2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2230 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2231 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2233 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2235 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2237 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2239 call 0x12aa2250 */
  push32(0x12aa223eu); f_12aa2250();
  /* 12aa223e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2241 pop ebp */
  EBP = (pop32());
  /* 12aa2242 ret  */
  ESPCHK(0x12aa2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10002250 @ 0x12aa2250 (227 bytes, 61 insns) */
void f_12aa2250(void) {
  FTRACE(0x12aa2250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2250 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2251 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2253 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2254 call 0x12aa2340 */
  push32(0x12aa2259u); f_12aa2340();
  /* 12aa2259 cmp dword ptr [0x12ace4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2260 jne 0x12aa2273 */
  if (!C.zf) goto L_12aa2273;
  /* 12aa2262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2265 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2266 call dword ptr [0x12ad0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0288))), 0x12aa226cu);
  /* 12aa226c push eax */
  push32((uint32_t)(EAX));
  /* 12aa226d call dword ptr [0x12ad0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0284))), 0x12aa2273u);
L_12aa2273:;
  /* 12aa2273 mov dword ptr [0x12ace4c0], 1 */
  w32((uint32_t)(0x12ace4c0), (0x1u));
  /* 12aa227d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12aa2280 mov byte ptr [0x12ace4bc], cl */
  w8((uint32_t)(0x12ace4bc), (CL));
  /* 12aa2286 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa228a jne 0x12aa22d3 */
  if (!C.zf) goto L_12aa22d3;
  /* 12aa228c cmp dword ptr [0x12acffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2293 je 0x12aa22c1 */
  if (C.zf) goto L_12aa22c1;
  /* 12aa2295 mov edx, dword ptr [0x12acffb4] */
  EDX = (r32((uint32_t)(0x12acffb4)));
  /* 12aa229b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa229e:;
  /* 12aa229e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa22a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa22a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa22a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa22aa cmp ecx, dword ptr [0x12acffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa22b0 jb 0x12aa22c1 */
  if (C.cf) goto L_12aa22c1;
  /* 12aa22b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa22b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa22b8 je 0x12aa22bf */
  if (C.zf) goto L_12aa22bf;
  /* 12aa22ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa22bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12aa22bfu);
L_12aa22bf:;
  /* 12aa22bf jmp 0x12aa229e */
  goto L_12aa229e;
L_12aa22c1:;
  /* 12aa22c1 push 0x12acc724 */
  push32((uint32_t)(0x12acc724u));
  /* 12aa22c6 push 0x12acc51c */
  push32((uint32_t)(0x12acc51cu));
  /* 12aa22cb call 0x12aa2360 */
  push32(0x12aa22d0u); f_12aa2360();
  /* 12aa22d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa22d3:;
  /* 12aa22d3 push 0x12acc92c */
  push32((uint32_t)(0x12acc92cu));
  /* 12aa22d8 push 0x12acc828 */
  push32((uint32_t)(0x12acc828u));
  /* 12aa22dd call 0x12aa2360 */
  push32(0x12aa22e2u); f_12aa2360();
  /* 12aa22e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa22e5 cmp dword ptr [0x12ace4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa22ec jne 0x12aa230e */
  if (!C.zf) goto L_12aa230e;
  /* 12aa22ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12aa22f0 call 0x12aa3f40 */
  push32(0x12aa22f5u); f_12aa3f40();
  /* 12aa22f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa22f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa22fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa22fd je 0x12aa230e */
  if (C.zf) goto L_12aa230e;
  /* 12aa22ff mov dword ptr [0x12ace4c8], 1 */
  w32((uint32_t)(0x12ace4c8), (0x1u));
  /* 12aa2309 call 0x12aa4850 */
  push32(0x12aa230eu); f_12aa4850();
L_12aa230e:;
  /* 12aa230e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2312 je 0x12aa231b */
  if (C.zf) goto L_12aa231b;
  /* 12aa2314 call 0x12aa2350 */
  push32(0x12aa2319u); f_12aa2350();
  /* 12aa2319 jmp 0x12aa232f */
  goto L_12aa232f;
L_12aa231b:;
  /* 12aa231b mov dword ptr [0x12ace4c4], 1 */
  w32((uint32_t)(0x12ace4c4), (0x1u));
  /* 12aa2325 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2328 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2329 call dword ptr [0x12ad0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0280))), 0x12aa232fu);
L_12aa232f:;
  /* 12aa232f mov esp, ebp */
  ESP = (EBP);
  /* 12aa2331 pop ebp */
  EBP = (pop32());
  /* 12aa2332 ret  */
  ESPCHK(0x12aa2250u, _esp0);
  ESP += 4; return;
}

/* FUN_10002340 @ 0x12aa2340 (15 bytes, 7 insns) */
void f_12aa2340(void) {
  FTRACE(0x12aa2340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2340 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2341 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2343 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12aa2345 call 0x12aa6430 */
  push32(0x12aa234au); f_12aa6430();
  /* 12aa234a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa234d pop ebp */
  EBP = (pop32());
  /* 12aa234e ret  */
  ESPCHK(0x12aa2340u, _esp0);
  ESP += 4; return;
}

/* FUN_10002350 @ 0x12aa2350 (15 bytes, 7 insns) */
void f_12aa2350(void) {
  FTRACE(0x12aa2350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2350 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2351 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2353 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12aa2355 call 0x12aa64d0 */
  push32(0x12aa235au); f_12aa64d0();
  /* 12aa235a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa235d pop ebp */
  EBP = (pop32());
  /* 12aa235e ret  */
  ESPCHK(0x12aa2350u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12aa2360 (37 bytes, 16 insns) */
void f_12aa2360(void) {
  FTRACE(0x12aa2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2360 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2361 mov ebp, esp */
  EBP = (ESP);
L_12aa2363:;
  /* 12aa2363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2366 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2369 jae 0x12aa2383 */
  if (!C.cf) goto L_12aa2383;
  /* 12aa236b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa236e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2371 je 0x12aa2378 */
  if (C.zf) goto L_12aa2378;
  /* 12aa2373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2376 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12aa2378u);
L_12aa2378:;
  /* 12aa2378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa237b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa237e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aa2381 jmp 0x12aa2363 */
  goto L_12aa2363;
L_12aa2383:;
  /* 12aa2383 pop ebp */
  EBP = (pop32());
  /* 12aa2384 ret  */
  ESPCHK(0x12aa2360u, _esp0);
  ESP += 4; return;
}

/* FUN_10002390 @ 0x12aa2390 (130 bytes, 42 insns) */
void f_12aa2390(void) {
  FTRACE(0x12aa2390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2390 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2391 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2393 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2394 call 0x12aa6350 */
  push32(0x12aa2399u); f_12aa6350();
  /* 12aa2399 call dword ptr [0x12ad0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0294))), 0x12aa239fu);
  /* 12aa239f mov dword ptr [0x12acca5c], eax */
  w32((uint32_t)(0x12acca5c), (EAX));
  /* 12aa23a4 cmp dword ptr [0x12acca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12acca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa23ab jne 0x12aa23b1 */
  if (!C.zf) goto L_12aa23b1;
  /* 12aa23ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa23af jmp 0x12aa240e */
  goto L_12aa240e;
L_12aa23b1:;
  /* 12aa23b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12aa23b3 push 0x12ac9380 */
  push32((uint32_t)(0x12ac9380u));
  /* 12aa23b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa23ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12aa23bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa23be call 0x12aa2e40 */
  push32(0x12aa23c3u); f_12aa2e40();
  /* 12aa23c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa23c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa23c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa23cd je 0x12aa23e4 */
  if (C.zf) goto L_12aa23e4;
  /* 12aa23cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa23d2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa23d3 mov ecx, dword ptr [0x12acca5c] */
  ECX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa23d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa23da call dword ptr [0x12ad0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0290))), 0x12aa23e0u);
  /* 12aa23e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa23e2 jne 0x12aa23e8 */
  if (!C.zf) goto L_12aa23e8;
L_12aa23e4:;
  /* 12aa23e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa23e6 jmp 0x12aa240e */
  goto L_12aa240e;
L_12aa23e8:;
  /* 12aa23e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa23eb push edx */
  push32((uint32_t)(EDX));
  /* 12aa23ec call 0x12aa2450 */
  push32(0x12aa23f1u); f_12aa2450();
  /* 12aa23f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa23f4 call dword ptr [0x12ad028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad028c))), 0x12aa23fau);
  /* 12aa23fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa23fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa23ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2402 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12aa2409 mov eax, 1 */
  EAX = (0x1u);
L_12aa240e:;
  /* 12aa240e mov esp, ebp */
  ESP = (EBP);
  /* 12aa2410 pop ebp */
  EBP = (pop32());
  /* 12aa2411 ret  */
  ESPCHK(0x12aa2390u, _esp0);
  ESP += 4; return;
}

/* FUN_10002420 @ 0x12aa2420 (41 bytes, 11 insns) */
void f_12aa2420(void) {
  FTRACE(0x12aa2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2420 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2421 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2423 call 0x12aa6390 */
  push32(0x12aa2428u); f_12aa6390();
  /* 12aa2428 cmp dword ptr [0x12acca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12acca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa242f je 0x12aa2447 */
  if (C.zf) goto L_12aa2447;
  /* 12aa2431 mov eax, dword ptr [0x12acca5c] */
  EAX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa2436 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2437 call dword ptr [0x12ad0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0298))), 0x12aa243du);
  /* 12aa243d mov dword ptr [0x12acca5c], 0xffffffff */
  w32((uint32_t)(0x12acca5c), (0xffffffffu));
L_12aa2447:;
  /* 12aa2447 pop ebp */
  EBP = (pop32());
  /* 12aa2448 ret  */
  ESPCHK(0x12aa2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x12aa2450 (25 bytes, 8 insns) */
void f_12aa2450(void) {
  FTRACE(0x12aa2450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2450 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2451 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2456 mov dword ptr [eax + 0x50], 0x12accc00 */
  w32((uint32_t)(EAX + 0x50), (0x12accc00u));
  /* 12aa245d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2460 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12aa2467 pop ebp */
  EBP = (pop32());
  /* 12aa2468 ret  */
  ESPCHK(0x12aa2450u, _esp0);
  ESP += 4; return;
}

/* FUN_10002470 @ 0x12aa2470 (152 bytes, 48 insns) */
void f_12aa2470(void) {
  FTRACE(0x12aa2470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2470 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2471 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2476 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aa247cu);
  /* 12aa247c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa247f mov eax, dword ptr [0x12acca5c] */
  EAX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa2484 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2485 call dword ptr [0x12ad02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a0))), 0x12aa248bu);
  /* 12aa248b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa248e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2492 jne 0x12aa24f7 */
  if (!C.zf) goto L_12aa24f7;
  /* 12aa2494 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12aa2499 push 0x12ac9380 */
  push32((uint32_t)(0x12ac9380u));
  /* 12aa249e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa24a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12aa24a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa24a4 call 0x12aa2e40 */
  push32(0x12aa24a9u); f_12aa2e40();
  /* 12aa24a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa24ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa24af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa24b3 je 0x12aa24ed */
  if (C.zf) goto L_12aa24ed;
  /* 12aa24b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa24b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa24b9 mov edx, dword ptr [0x12acca5c] */
  EDX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa24bf push edx */
  push32((uint32_t)(EDX));
  /* 12aa24c0 call dword ptr [0x12ad0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0290))), 0x12aa24c6u);
  /* 12aa24c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa24c8 je 0x12aa24ed */
  if (C.zf) goto L_12aa24ed;
  /* 12aa24ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa24cd push eax */
  push32((uint32_t)(EAX));
  /* 12aa24ce call 0x12aa2450 */
  push32(0x12aa24d3u); f_12aa2450();
  /* 12aa24d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa24d6 call dword ptr [0x12ad028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad028c))), 0x12aa24dcu);
  /* 12aa24dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa24df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa24e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa24e4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12aa24eb jmp 0x12aa24f7 */
  goto L_12aa24f7;
L_12aa24ed:;
  /* 12aa24ed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12aa24ef call 0x12aa19a0 */
  push32(0x12aa24f4u); f_12aa19a0();
  /* 12aa24f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa24f7:;
  /* 12aa24f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa24fa push eax */
  push32((uint32_t)(EAX));
  /* 12aa24fb call dword ptr [0x12ad029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad029c))), 0x12aa2501u);
  /* 12aa2501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2504 mov esp, ebp */
  ESP = (EBP);
  /* 12aa2506 pop ebp */
  EBP = (pop32());
  /* 12aa2507 ret  */
  ESPCHK(0x12aa2470u, _esp0);
  ESP += 4; return;
}

/* FUN_10002510 @ 0x12aa2510 (263 bytes, 86 insns) */
void f_12aa2510(void) {
  FTRACE(0x12aa2510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2510 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2511 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2513 cmp dword ptr [0x12acca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12acca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa251a je 0x12aa2615 */
  if (C.zf) goto L_12aa2615;
  /* 12aa2520 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2524 jne 0x12aa2535 */
  if (!C.zf) goto L_12aa2535;
  /* 12aa2526 mov eax, dword ptr [0x12acca5c] */
  EAX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa252b push eax */
  push32((uint32_t)(EAX));
  /* 12aa252c call dword ptr [0x12ad02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a0))), 0x12aa2532u);
  /* 12aa2532 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12aa2535:;
  /* 12aa2535 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2539 je 0x12aa2606 */
  if (C.zf) goto L_12aa2606;
  /* 12aa253f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2542 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2546 je 0x12aa2559 */
  if (C.zf) goto L_12aa2559;
  /* 12aa2548 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa254a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa254d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12aa2550 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2551 call 0x12aa34c0 */
  push32(0x12aa2556u); f_12aa34c0();
  /* 12aa2556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa2559:;
  /* 12aa2559 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa255c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2560 je 0x12aa2573 */
  if (C.zf) goto L_12aa2573;
  /* 12aa2562 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2567 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12aa256a push eax */
  push32((uint32_t)(EAX));
  /* 12aa256b call 0x12aa34c0 */
  push32(0x12aa2570u); f_12aa34c0();
  /* 12aa2570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa2573:;
  /* 12aa2573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2576 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa257a je 0x12aa258d */
  if (C.zf) goto L_12aa258d;
  /* 12aa257c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa257e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2581 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12aa2584 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2585 call 0x12aa34c0 */
  push32(0x12aa258au); f_12aa34c0();
  /* 12aa258a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa258d:;
  /* 12aa258d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2590 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2594 je 0x12aa25a7 */
  if (C.zf) goto L_12aa25a7;
  /* 12aa2596 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa259b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12aa259e push eax */
  push32((uint32_t)(EAX));
  /* 12aa259f call 0x12aa34c0 */
  push32(0x12aa25a4u); f_12aa34c0();
  /* 12aa25a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa25a7:;
  /* 12aa25a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25aa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa25ae je 0x12aa25c1 */
  if (C.zf) goto L_12aa25c1;
  /* 12aa25b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa25b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25b5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12aa25b8 push eax */
  push32((uint32_t)(EAX));
  /* 12aa25b9 call 0x12aa34c0 */
  push32(0x12aa25beu); f_12aa34c0();
  /* 12aa25be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa25c1:;
  /* 12aa25c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25c4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa25c8 je 0x12aa25db */
  if (C.zf) goto L_12aa25db;
  /* 12aa25ca push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa25cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25cf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12aa25d2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa25d3 call 0x12aa34c0 */
  push32(0x12aa25d8u); f_12aa34c0();
  /* 12aa25d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa25db:;
  /* 12aa25db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25de cmp dword ptr [ecx + 0x50], 0x12accc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12accc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa25e5 je 0x12aa25f8 */
  if (C.zf) goto L_12aa25f8;
  /* 12aa25e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa25e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25ec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12aa25ef push eax */
  push32((uint32_t)(EAX));
  /* 12aa25f0 call 0x12aa34c0 */
  push32(0x12aa25f5u); f_12aa34c0();
  /* 12aa25f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa25f8:;
  /* 12aa25f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa25fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa25fd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa25fe call 0x12aa34c0 */
  push32(0x12aa2603u); f_12aa34c0();
  /* 12aa2603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa2606:;
  /* 12aa2606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2608 mov edx, dword ptr [0x12acca5c] */
  EDX = (r32((uint32_t)(0x12acca5c)));
  /* 12aa260e push edx */
  push32((uint32_t)(EDX));
  /* 12aa260f call dword ptr [0x12ad0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0290))), 0x12aa2615u);
L_12aa2615:;
  /* 12aa2615 pop ebp */
  EBP = (pop32());
  /* 12aa2616 ret  */
  ESPCHK(0x12aa2510u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12aa2620 (11 bytes, 5 insns) */
void f_12aa2620(void) {
  FTRACE(0x12aa2620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2620 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2621 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2623 call dword ptr [0x12ad028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad028c))), 0x12aa2629u);
  /* 12aa2629 pop ebp */
  EBP = (pop32());
  /* 12aa262a ret  */
  ESPCHK(0x12aa2620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x12aa2630 (11 bytes, 5 insns) */
void f_12aa2630(void) {
  FTRACE(0x12aa2630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2630 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2631 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2633 call dword ptr [0x12ad02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a8))), 0x12aa2639u);
  /* 12aa2639 pop ebp */
  EBP = (pop32());
  /* 12aa263a ret  */
  ESPCHK(0x12aa2630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x12aa2640 (804 bytes, 236 insns) */
void f_12aa2640(void) {
  FTRACE(0x12aa2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2640 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2641 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2643 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2646 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12aa264b push 0x12ac938c */
  push32((uint32_t)(0x12ac938cu));
  /* 12aa2650 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2652 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12aa2657 call 0x12aa2a30 */
  push32(0x12aa265cu); f_12aa2a30();
  /* 12aa265c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa265f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12aa2662 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2666 jne 0x12aa2672 */
  if (!C.zf) goto L_12aa2672;
  /* 12aa2668 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12aa266a call 0x12aa19a0 */
  push32(0x12aa266fu); f_12aa19a0();
  /* 12aa266f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa2672:;
  /* 12aa2672 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2675 mov dword ptr [0x12acfe60], eax */
  w32((uint32_t)(0x12acfe60), (EAX));
  /* 12aa267a mov dword ptr [0x12acff9c], 0x20 */
  w32((uint32_t)(0x12acff9c), (0x20u));
  /* 12aa2684 jmp 0x12aa268f */
  goto L_12aa268f;
L_12aa2686:;
  /* 12aa2686 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2689 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa268c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12aa268f:;
  /* 12aa268f mov edx, dword ptr [0x12acfe60] */
  EDX = (r32((uint32_t)(0x12acfe60)));
  /* 12aa2695 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa269b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa269e jae 0x12aa26c3 */
  if (!C.cf) goto L_12aa26c3;
  /* 12aa26a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa26a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12aa26a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa26aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12aa26b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa26b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12aa26b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa26ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12aa26c1 jmp 0x12aa2686 */
  goto L_12aa2686;
L_12aa26c3:;
  /* 12aa26c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12aa26c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa26c7 call dword ptr [0x12ad02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b4))), 0x12aa26cdu);
  /* 12aa26cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12aa26d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa26d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa26d8 je 0x12aa2865 */
  if (C.zf) goto L_12aa2865;
  /* 12aa26de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa26e2 je 0x12aa2865 */
  if (C.zf) goto L_12aa2865;
  /* 12aa26e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa26eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa26ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12aa26f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa26f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa26f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa26f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa26fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa26ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12aa2702 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2709 jge 0x12aa2713 */
  if ((C.sf==C.of)) goto L_12aa2713;
  /* 12aa270b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12aa270e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12aa2711 jmp 0x12aa271a */
  goto L_12aa271a;
L_12aa2713:;
  /* 12aa2713 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12aa271a:;
  /* 12aa271a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12aa271d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12aa2720 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12aa2727 jmp 0x12aa2732 */
  goto L_12aa2732;
L_12aa2729:;
  /* 12aa2729 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12aa272c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa272f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12aa2732:;
  /* 12aa2732 mov ecx, dword ptr [0x12acff9c] */
  ECX = (r32((uint32_t)(0x12acff9c)));
  /* 12aa2738 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa273b jge 0x12aa27d2 */
  if ((C.sf==C.of)) goto L_12aa27d2;
  /* 12aa2741 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12aa2746 push 0x12ac938c */
  push32((uint32_t)(0x12ac938cu));
  /* 12aa274b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa274d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12aa2752 call 0x12aa2a30 */
  push32(0x12aa2757u); f_12aa2a30();
  /* 12aa2757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa275a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12aa275d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2761 jne 0x12aa276e */
  if (!C.zf) goto L_12aa276e;
  /* 12aa2763 mov edx, dword ptr [0x12acff9c] */
  EDX = (r32((uint32_t)(0x12acff9c)));
  /* 12aa2769 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12aa276c jmp 0x12aa27d2 */
  goto L_12aa27d2;
L_12aa276e:;
  /* 12aa276e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12aa2771 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2774 mov dword ptr [eax*4 + 0x12acfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12acfe60), (ECX));
  /* 12aa277b mov edx, dword ptr [0x12acff9c] */
  EDX = (r32((uint32_t)(0x12acff9c)));
  /* 12aa2781 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2784 mov dword ptr [0x12acff9c], edx */
  w32((uint32_t)(0x12acff9c), (EDX));
  /* 12aa278a jmp 0x12aa2795 */
  goto L_12aa2795;
L_12aa278c:;
  /* 12aa278c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa278f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2792 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12aa2795:;
  /* 12aa2795 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12aa2798 mov edx, dword ptr [ecx*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acfe60)));
  /* 12aa279f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa27a5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa27a8 jae 0x12aa27cd */
  if (!C.cf) goto L_12aa27cd;
  /* 12aa27aa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa27ad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12aa27b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa27b4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12aa27ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa27bd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12aa27c1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa27c4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12aa27cb jmp 0x12aa278c */
  goto L_12aa278c;
L_12aa27cd:;
  /* 12aa27cd jmp 0x12aa2729 */
  goto L_12aa2729;
L_12aa27d2:;
  /* 12aa27d2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12aa27d9 jmp 0x12aa27f6 */
  goto L_12aa27f6;
L_12aa27db:;
  /* 12aa27db mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa27de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa27e1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12aa27e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa27e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa27ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa27ed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12aa27f0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa27f3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12aa27f6:;
  /* 12aa27f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa27f9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa27fc jge 0x12aa2865 */
  if ((C.sf==C.of)) goto L_12aa2865;
  /* 12aa27fe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12aa2801 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2804 je 0x12aa2860 */
  if (C.zf) goto L_12aa2860;
  /* 12aa2806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2809 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa280c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa280f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa2811 je 0x12aa2860 */
  if (C.zf) goto L_12aa2860;
  /* 12aa2813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2816 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa2819 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa281c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa281e jne 0x12aa2830 */
  if (!C.zf) goto L_12aa2830;
  /* 12aa2820 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12aa2823 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa2825 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2826 call dword ptr [0x12ad02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b0))), 0x12aa282cu);
  /* 12aa282c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa282e je 0x12aa2860 */
  if (C.zf) goto L_12aa2860;
L_12aa2830:;
  /* 12aa2830 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa2833 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12aa2836 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa2839 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa283c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa283f mov edx, dword ptr [eax*4 + 0x12acfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aa2846 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2848 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12aa284b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa284e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12aa2851 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa2853 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa2855 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa285b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa285d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12aa2860:;
  /* 12aa2860 jmp 0x12aa27db */
  goto L_12aa27db;
L_12aa2865:;
  /* 12aa2865 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12aa286c jmp 0x12aa2877 */
  goto L_12aa2877;
L_12aa286e:;
  /* 12aa286e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa2871 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2874 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12aa2877:;
  /* 12aa2877 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa287b jge 0x12aa2954 */
  if ((C.sf==C.of)) goto L_12aa2954;
  /* 12aa2881 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa2884 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa2887 mov edx, dword ptr [0x12acfe60] */
  EDX = (r32((uint32_t)(0x12acfe60)));
  /* 12aa288d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa288f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12aa2892 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2895 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2898 jne 0x12aa2940 */
  if (!C.zf) goto L_12aa2940;
  /* 12aa289e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa28a1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12aa28a5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa28a9 jne 0x12aa28b4 */
  if (!C.zf) goto L_12aa28b4;
  /* 12aa28ab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12aa28b2 jmp 0x12aa28c4 */
  goto L_12aa28c4;
L_12aa28b4:;
  /* 12aa28b4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12aa28b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa28ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa28bc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa28be add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa28c1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12aa28c4:;
  /* 12aa28c4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12aa28c7 push eax */
  push32((uint32_t)(EAX));
  /* 12aa28c8 call dword ptr [0x12ad0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0260))), 0x12aa28ceu);
  /* 12aa28ce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12aa28d1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa28d5 je 0x12aa292f */
  if (C.zf) goto L_12aa292f;
  /* 12aa28d7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa28da push ecx */
  push32((uint32_t)(ECX));
  /* 12aa28db call dword ptr [0x12ad02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b0))), 0x12aa28e1u);
  /* 12aa28e1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12aa28e4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa28e8 je 0x12aa292f */
  if (C.zf) goto L_12aa292f;
  /* 12aa28ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa28ed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa28f0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa28f2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12aa28f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa28fb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa28fe jne 0x12aa2910 */
  if (!C.zf) goto L_12aa2910;
  /* 12aa2900 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2903 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12aa2906 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12aa2908 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa290b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12aa290e jmp 0x12aa292d */
  goto L_12aa292d;
L_12aa2910:;
  /* 12aa2910 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12aa2913 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2919 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa291c jne 0x12aa292d */
  if (!C.zf) goto L_12aa292d;
  /* 12aa291e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2921 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa2924 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12aa2927 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa292a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12aa292d:;
  /* 12aa292d jmp 0x12aa293e */
  goto L_12aa293e;
L_12aa292f:;
  /* 12aa292f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2932 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa2935 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12aa2938 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa293b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12aa293e:;
  /* 12aa293e jmp 0x12aa294f */
  goto L_12aa294f;
L_12aa2940:;
  /* 12aa2940 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa2943 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12aa2946 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12aa2949 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa294c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12aa294f:;
  /* 12aa294f jmp 0x12aa286e */
  goto L_12aa286e;
L_12aa2954:;
  /* 12aa2954 mov eax, dword ptr [0x12acff9c] */
  EAX = (r32((uint32_t)(0x12acff9c)));
  /* 12aa2959 push eax */
  push32((uint32_t)(EAX));
  /* 12aa295a call dword ptr [0x12ad02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02ac))), 0x12aa2960u);
  /* 12aa2960 mov esp, ebp */
  ESP = (EBP);
  /* 12aa2962 pop ebp */
  EBP = (pop32());
  /* 12aa2963 ret  */
  ESPCHK(0x12aa2640u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12aa2970 (155 bytes, 45 insns) */
void f_12aa2970(void) {
  FTRACE(0x12aa2970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2970 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2971 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2976 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa297d jmp 0x12aa2988 */
  goto L_12aa2988;
L_12aa297f:;
  /* 12aa297f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2982 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2985 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aa2988:;
  /* 12aa2988 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa298c jge 0x12aa2a07 */
  if ((C.sf==C.of)) goto L_12aa2a07;
  /* 12aa298e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2991 cmp dword ptr [ecx*4 + 0x12acfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12acfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2999 je 0x12aa2a02 */
  if (C.zf) goto L_12aa2a02;
  /* 12aa299b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa299e mov eax, dword ptr [edx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aa29a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa29a8 jmp 0x12aa29b3 */
  goto L_12aa29b3;
L_12aa29aa:;
  /* 12aa29aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa29ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa29b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa29b3:;
  /* 12aa29b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa29b6 mov eax, dword ptr [edx*4 + 0x12acfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12acfe60)));
  /* 12aa29bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa29c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa29c5 jae 0x12aa29df */
  if (!C.cf) goto L_12aa29df;
  /* 12aa29c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa29ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa29ce je 0x12aa29dd */
  if (C.zf) goto L_12aa29dd;
  /* 12aa29d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa29d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa29d6 push edx */
  push32((uint32_t)(EDX));
  /* 12aa29d7 call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa29ddu);
L_12aa29dd:;
  /* 12aa29dd jmp 0x12aa29aa */
  goto L_12aa29aa;
L_12aa29df:;
  /* 12aa29df push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa29e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa29e4 mov ecx, dword ptr [eax*4 + 0x12acfe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12acfe60)));
  /* 12aa29eb push ecx */
  push32((uint32_t)(ECX));
  /* 12aa29ec call 0x12aa34c0 */
  push32(0x12aa29f1u); f_12aa34c0();
  /* 12aa29f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa29f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa29f7 mov dword ptr [edx*4 + 0x12acfe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12acfe60), (0x0u));
L_12aa2a02:;
  /* 12aa2a02 jmp 0x12aa297f */
  goto L_12aa297f;
L_12aa2a07:;
  /* 12aa2a07 mov esp, ebp */
  ESP = (EBP);
  /* 12aa2a09 pop ebp */
  EBP = (pop32());
  /* 12aa2a0a ret  */
  ESPCHK(0x12aa2970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x12aa2a10 (29 bytes, 13 insns) */
void f_12aa2a10(void) {
  FTRACE(0x12aa2a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2a11 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2a19 mov eax, dword ptr [0x12ace670] */
  EAX = (r32((uint32_t)(0x12ace670)));
  /* 12aa2a1e push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2a22 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2a23 call 0x12aa2a80 */
  push32(0x12aa2a28u); f_12aa2a80();
  /* 12aa2a28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2a2b pop ebp */
  EBP = (pop32());
  /* 12aa2a2c ret  */
  ESPCHK(0x12aa2a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x12aa2a30 (35 bytes, 16 insns) */
void f_12aa2a30(void) {
  FTRACE(0x12aa2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2a31 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2a33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2a36 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2a3a push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2a3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2a3e push edx */
  push32((uint32_t)(EDX));
  /* 12aa2a3f mov eax, dword ptr [0x12ace670] */
  EAX = (r32((uint32_t)(0x12ace670)));
  /* 12aa2a44 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2a48 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2a49 call 0x12aa2a80 */
  push32(0x12aa2a4eu); f_12aa2a80();
  /* 12aa2a4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2a51 pop ebp */
  EBP = (pop32());
  /* 12aa2a52 ret  */
  ESPCHK(0x12aa2a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x12aa2a60 (27 bytes, 13 insns) */
void f_12aa2a60(void) {
  FTRACE(0x12aa2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2a61 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2a69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2a6c push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2a70 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2a71 call 0x12aa2a80 */
  push32(0x12aa2a76u); f_12aa2a80();
  /* 12aa2a76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2a79 pop ebp */
  EBP = (pop32());
  /* 12aa2a7a ret  */
  ESPCHK(0x12aa2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a80 @ 0x12aa2a80 (94 bytes, 38 insns) */
void f_12aa2a80(void) {
  FTRACE(0x12aa2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2a81 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2a83 push ecx */
  push32((uint32_t)(ECX));
L_12aa2a84:;
  /* 12aa2a84 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa2a86 call 0x12aa6430 */
  push32(0x12aa2a8bu); f_12aa6430();
  /* 12aa2a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2a8e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2a91 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2a95 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2a96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2a99 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2a9d push eax */
  push32((uint32_t)(EAX));
  /* 12aa2a9e call 0x12aa2b00 */
  push32(0x12aa2aa3u); f_12aa2b00();
  /* 12aa2aa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2aa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa2aa9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa2aab call 0x12aa64d0 */
  push32(0x12aa2ab0u); f_12aa64d0();
  /* 12aa2ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ab3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2ab7 jne 0x12aa2abf */
  if (!C.zf) goto L_12aa2abf;
  /* 12aa2ab9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2abd jne 0x12aa2ac4 */
  if (!C.zf) goto L_12aa2ac4;
L_12aa2abf:;
  /* 12aa2abf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2ac2 jmp 0x12aa2ada */
  goto L_12aa2ada;
L_12aa2ac4:;
  /* 12aa2ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2ac8 call 0x12aa6770 */
  push32(0x12aa2acdu); f_12aa6770();
  /* 12aa2acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2ad2 jne 0x12aa2ad8 */
  if (!C.zf) goto L_12aa2ad8;
  /* 12aa2ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2ad6 jmp 0x12aa2ada */
  goto L_12aa2ada;
L_12aa2ad8:;
  /* 12aa2ad8 jmp 0x12aa2a84 */
  goto L_12aa2a84;
L_12aa2ada:;
  /* 12aa2ada mov esp, ebp */
  ESP = (EBP);
  /* 12aa2adc pop ebp */
  EBP = (pop32());
  /* 12aa2add ret  */
  ESPCHK(0x12aa2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae0 @ 0x12aa2ae0 (23 bytes, 11 insns) */
void f_12aa2ae0(void) {
  FTRACE(0x12aa2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2aec push eax */
  push32((uint32_t)(EAX));
  /* 12aa2aed call 0x12aa2b00 */
  push32(0x12aa2af2u); f_12aa2b00();
  /* 12aa2af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2af5 pop ebp */
  EBP = (pop32());
  /* 12aa2af6 ret  */
  ESPCHK(0x12aa2ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x12aa2b00 (787 bytes, 254 insns) */
void f_12aa2b00(void) {
  FTRACE(0x12aa2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2b01 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2b03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2b06 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa2b07 push esi */
  push32((uint32_t)(ESI));
  /* 12aa2b08 push edi */
  push32((uint32_t)(EDI));
  /* 12aa2b09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa2b10 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa2b15 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2b1a je 0x12aa2b4c */
  if (C.zf) goto L_12aa2b4c;
L_12aa2b1c:;
  /* 12aa2b1c call 0x12aa3bd0 */
  push32(0x12aa2b21u); f_12aa3bd0();
  /* 12aa2b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2b23 jne 0x12aa2b46 */
  if (!C.zf) goto L_12aa2b46;
  /* 12aa2b25 push 0x12ac9480 */
  push32((uint32_t)(0x12ac9480u));
  /* 12aa2b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2b2c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12aa2b31 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa2b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2b38 call 0x12aa1af0 */
  push32(0x12aa2b3du); f_12aa1af0();
  /* 12aa2b3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2b40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2b43 jne 0x12aa2b46 */
  if (!C.zf) goto L_12aa2b46;
  /* 12aa2b45 int3  */
  x86_unimpl("int3 @ 0x12aa2b45");
L_12aa2b46:;
  /* 12aa2b46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa2b48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa2b4a jne 0x12aa2b1c */
  if (!C.zf) goto L_12aa2b1c;
L_12aa2b4c:;
  /* 12aa2b4c mov edx, dword ptr [0x12acca88] */
  EDX = (r32((uint32_t)(0x12acca88)));
  /* 12aa2b52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aa2b55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2b58 cmp eax, dword ptr [0x12acca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2b5e jne 0x12aa2b61 */
  if (!C.zf) goto L_12aa2b61;
  /* 12aa2b60 int3  */
  x86_unimpl("int3 @ 0x12aa2b60");
L_12aa2b61:;
  /* 12aa2b61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2b64 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2b65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2b68 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2b69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2b6c push eax */
  push32((uint32_t)(EAX));
  /* 12aa2b6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2b70 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2b71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2b74 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2b79 call dword ptr [0x12accc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12accc90))), 0x12aa2b7fu);
  /* 12aa2b7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2b84 jne 0x12aa2be4 */
  if (!C.zf) goto L_12aa2be4;
  /* 12aa2b86 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2b8a je 0x12aa2bb7 */
  if (C.zf) goto L_12aa2bb7;
L_12aa2b8c:;
  /* 12aa2b8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2b8f push eax */
  push32((uint32_t)(EAX));
  /* 12aa2b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2b94 push 0x12ac943c */
  push32((uint32_t)(0x12ac943cu));
  /* 12aa2b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2ba1 call 0x12aa1af0 */
  push32(0x12aa2ba6u); f_12aa1af0();
  /* 12aa2ba6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ba9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2bac jne 0x12aa2baf */
  if (!C.zf) goto L_12aa2baf;
  /* 12aa2bae int3  */
  x86_unimpl("int3 @ 0x12aa2bae");
L_12aa2baf:;
  /* 12aa2baf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2bb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa2bb3 jne 0x12aa2b8c */
  if (!C.zf) goto L_12aa2b8c;
  /* 12aa2bb5 jmp 0x12aa2bdd */
  goto L_12aa2bdd;
L_12aa2bb7:;
  /* 12aa2bb7 push 0x12ac9418 */
  push32((uint32_t)(0x12ac9418u));
  /* 12aa2bbc push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa2bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2bc9 call 0x12aa1af0 */
  push32(0x12aa2bceu); f_12aa1af0();
  /* 12aa2bce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2bd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2bd4 jne 0x12aa2bd7 */
  if (!C.zf) goto L_12aa2bd7;
  /* 12aa2bd6 int3  */
  x86_unimpl("int3 @ 0x12aa2bd6");
L_12aa2bd7:;
  /* 12aa2bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2bdb jne 0x12aa2bb7 */
  if (!C.zf) goto L_12aa2bb7;
L_12aa2bdd:;
  /* 12aa2bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2bdf jmp 0x12aa2e0c */
  goto L_12aa2e0c;
L_12aa2be4:;
  /* 12aa2be4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2be7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa2bed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2bf0 je 0x12aa2c06 */
  if (C.zf) goto L_12aa2c06;
  /* 12aa2bf2 mov edx, dword ptr [0x12acca84] */
  EDX = (r32((uint32_t)(0x12acca84)));
  /* 12aa2bf8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2bfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa2bfd jne 0x12aa2c06 */
  if (!C.zf) goto L_12aa2c06;
  /* 12aa2bff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12aa2c06:;
  /* 12aa2c06 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c0a ja 0x12aa2c17 */
  if ((!C.cf&&!C.zf)) goto L_12aa2c17;
  /* 12aa2c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2c0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2c12 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c15 jbe 0x12aa2c43 */
  if ((C.cf||C.zf)) goto L_12aa2c43;
L_12aa2c17:;
  /* 12aa2c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2c1b push 0x12ac93f0 */
  push32((uint32_t)(0x12ac93f0u));
  /* 12aa2c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2c28 call 0x12aa1af0 */
  push32(0x12aa2c2du); f_12aa1af0();
  /* 12aa2c2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2c30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c33 jne 0x12aa2c36 */
  if (!C.zf) goto L_12aa2c36;
  /* 12aa2c35 int3  */
  x86_unimpl("int3 @ 0x12aa2c35");
L_12aa2c36:;
  /* 12aa2c36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2c38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa2c3a jne 0x12aa2c17 */
  if (!C.zf) goto L_12aa2c17;
  /* 12aa2c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2c3e jmp 0x12aa2e0c */
  goto L_12aa2e0c;
L_12aa2c43:;
  /* 12aa2c43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2c46 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2c4b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c4e je 0x12aa2c90 */
  if (C.zf) goto L_12aa2c90;
  /* 12aa2c50 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c54 je 0x12aa2c90 */
  if (C.zf) goto L_12aa2c90;
  /* 12aa2c56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2c59 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa2c5f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c62 je 0x12aa2c90 */
  if (C.zf) goto L_12aa2c90;
  /* 12aa2c64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c68 je 0x12aa2c90 */
  if (C.zf) goto L_12aa2c90;
L_12aa2c6a:;
  /* 12aa2c6a push 0x12ac93bc */
  push32((uint32_t)(0x12ac93bcu));
  /* 12aa2c6f push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa2c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2c7c call 0x12aa1af0 */
  push32(0x12aa2c81u); f_12aa1af0();
  /* 12aa2c81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2c87 jne 0x12aa2c8a */
  if (!C.zf) goto L_12aa2c8a;
  /* 12aa2c89 int3  */
  x86_unimpl("int3 @ 0x12aa2c89");
L_12aa2c8a:;
  /* 12aa2c8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2c8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa2c8e jne 0x12aa2c6a */
  if (!C.zf) goto L_12aa2c6a;
L_12aa2c90:;
  /* 12aa2c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2c93 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2c96 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa2c99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa2c9c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2c9d call 0x12aa6880 */
  push32(0x12aa2ca2u); f_12aa6880();
  /* 12aa2ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa2ca8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2cac jne 0x12aa2cb5 */
  if (!C.zf) goto L_12aa2cb5;
  /* 12aa2cae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2cb0 jmp 0x12aa2e0c */
  goto L_12aa2e0c;
L_12aa2cb5:;
  /* 12aa2cb5 mov edx, dword ptr [0x12acca88] */
  EDX = (r32((uint32_t)(0x12acca88)));
  /* 12aa2cbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2cbe mov dword ptr [0x12acca88], edx */
  w32((uint32_t)(0x12acca88), (EDX));
  /* 12aa2cc4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2cc8 je 0x12aa2d13 */
  if (C.zf) goto L_12aa2d13;
  /* 12aa2cca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2ccd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa2cd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2cd6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12aa2cdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2ce0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12aa2ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2cea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12aa2cf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2cf7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12aa2cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2cfd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12aa2d04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d07 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12aa2d0e jmp 0x12aa2db3 */
  goto L_12aa2db3;
L_12aa2d13:;
  /* 12aa2d13 mov edx, dword ptr [0x12ace4d0] */
  EDX = (r32((uint32_t)(0x12ace4d0)));
  /* 12aa2d19 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2d1c mov dword ptr [0x12ace4d0], edx */
  w32((uint32_t)(0x12ace4d0), (EDX));
  /* 12aa2d22 mov eax, dword ptr [0x12ace4d8] */
  EAX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa2d27 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2d2a mov dword ptr [0x12ace4d8], eax */
  w32((uint32_t)(0x12ace4d8), (EAX));
  /* 12aa2d2f mov ecx, dword ptr [0x12ace4d8] */
  ECX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa2d35 cmp ecx, dword ptr [0x12ace4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ace4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2d3b jbe 0x12aa2d49 */
  if ((C.cf||C.zf)) goto L_12aa2d49;
  /* 12aa2d3d mov edx, dword ptr [0x12ace4d8] */
  EDX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa2d43 mov dword ptr [0x12ace4dc], edx */
  w32((uint32_t)(0x12ace4dc), (EDX));
L_12aa2d49:;
  /* 12aa2d49 cmp dword ptr [0x12ace4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2d50 je 0x12aa2d5f */
  if (C.zf) goto L_12aa2d5f;
  /* 12aa2d52 mov eax, dword ptr [0x12ace4d4] */
  EAX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa2d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12aa2d5d jmp 0x12aa2d68 */
  goto L_12aa2d68;
L_12aa2d5f:;
  /* 12aa2d5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d62 mov dword ptr [0x12ace4cc], edx */
  w32((uint32_t)(0x12ace4cc), (EDX));
L_12aa2d68:;
  /* 12aa2d68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d6b mov ecx, dword ptr [0x12ace4d4] */
  ECX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa2d71 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aa2d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d76 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12aa2d7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2d83 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12aa2d86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2d8c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12aa2d8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2d95 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12aa2d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2d9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2d9e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12aa2da1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2da4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2da7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12aa2daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2dad mov dword ptr [0x12ace4d4], ecx */
  w32((uint32_t)(0x12ace4d4), (ECX));
L_12aa2db3:;
  /* 12aa2db3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa2db5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa2db7 mov dl, byte ptr [0x12acca90] */
  DL = (r8((uint32_t)(0x12acca90)));
  /* 12aa2dbd push edx */
  push32((uint32_t)(EDX));
  /* 12aa2dbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2dc1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2dc4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2dc5 call 0x12aa67a0 */
  push32(0x12aa2dcau); f_12aa67a0();
  /* 12aa2dca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2dcd push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa2dcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa2dd1 mov cl, byte ptr [0x12acca90] */
  CL = (r8((uint32_t)(0x12acca90)));
  /* 12aa2dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2dd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2dde lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12aa2de2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2de3 call 0x12aa67a0 */
  push32(0x12aa2de8u); f_12aa67a0();
  /* 12aa2de8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2dee push edx */
  push32((uint32_t)(EDX));
  /* 12aa2def xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2df1 mov al, byte ptr [0x12acca92] */
  AL = (r8((uint32_t)(0x12acca92)));
  /* 12aa2df6 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2dfa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2dfd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2dfe call 0x12aa67a0 */
  push32(0x12aa2e03u); f_12aa67a0();
  /* 12aa2e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2e09 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12aa2e0c:;
  /* 12aa2e0c pop edi */
  EDI = (pop32());
  /* 12aa2e0d pop esi */
  ESI = (pop32());
  /* 12aa2e0e pop ebx */
  EBX = (pop32());
  /* 12aa2e0f mov esp, ebp */
  ESP = (EBP);
  /* 12aa2e11 pop ebp */
  EBP = (pop32());
  /* 12aa2e12 ret  */
  ESPCHK(0x12aa2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x12aa2e20 (27 bytes, 13 insns) */
void f_12aa2e20(void) {
  FTRACE(0x12aa2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2e21 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2e29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2e2c push eax */
  push32((uint32_t)(EAX));
  /* 12aa2e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2e31 call 0x12aa2e40 */
  push32(0x12aa2e36u); f_12aa2e40();
  /* 12aa2e36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2e39 pop ebp */
  EBP = (pop32());
  /* 12aa2e3a ret  */
  ESPCHK(0x12aa2e20u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12aa2e40 (96 bytes, 37 insns) */
void f_12aa2e40(void) {
  FTRACE(0x12aa2e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2e41 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2e43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2e49 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa2e4d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12aa2e50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2e54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2e57 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2e58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2e5b push eax */
  push32((uint32_t)(EAX));
  /* 12aa2e5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2e5f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2e60 call 0x12aa2a30 */
  push32(0x12aa2e65u); f_12aa2a30();
  /* 12aa2e65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2e68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa2e6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2e6f je 0x12aa2e99 */
  if (C.zf) goto L_12aa2e99;
  /* 12aa2e71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2e74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa2e77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa2e7a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2e7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa2e80:;
  /* 12aa2e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa2e83 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2e86 jae 0x12aa2e99 */
  if (!C.cf) goto L_12aa2e99;
  /* 12aa2e88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa2e8b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12aa2e8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa2e91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2e94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa2e97 jmp 0x12aa2e80 */
  goto L_12aa2e80;
L_12aa2e99:;
  /* 12aa2e99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa2e9c mov esp, ebp */
  ESP = (EBP);
  /* 12aa2e9e pop ebp */
  EBP = (pop32());
  /* 12aa2e9f ret  */
  ESPCHK(0x12aa2e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x12aa2ea0 (27 bytes, 13 insns) */
void f_12aa2ea0(void) {
  FTRACE(0x12aa2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2ea9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2eac push eax */
  push32((uint32_t)(EAX));
  /* 12aa2ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2eb1 call 0x12aa2ec0 */
  push32(0x12aa2eb6u); f_12aa2ec0();
  /* 12aa2eb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2eb9 pop ebp */
  EBP = (pop32());
  /* 12aa2eba ret  */
  ESPCHK(0x12aa2ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec0 @ 0x12aa2ec0 (64 bytes, 27 insns) */
void f_12aa2ec0(void) {
  FTRACE(0x12aa2ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2ec4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa2ec6 call 0x12aa6430 */
  push32(0x12aa2ecbu); f_12aa6430();
  /* 12aa2ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ece push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa2ed0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2ed4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2ed8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2edb push edx */
  push32((uint32_t)(EDX));
  /* 12aa2edc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2edf push eax */
  push32((uint32_t)(EAX));
  /* 12aa2ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2ee4 call 0x12aa2f00 */
  push32(0x12aa2ee9u); f_12aa2f00();
  /* 12aa2ee9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2eec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa2eef push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa2ef1 call 0x12aa64d0 */
  push32(0x12aa2ef6u); f_12aa64d0();
  /* 12aa2ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa2efc mov esp, ebp */
  ESP = (EBP);
  /* 12aa2efe pop ebp */
  EBP = (pop32());
  /* 12aa2eff ret  */
  ESPCHK(0x12aa2ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x12aa2f00 (1297 bytes, 431 insns) */
void f_12aa2f00(void) {
  FTRACE(0x12aa2f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa2f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa2f01 mov ebp, esp */
  EBP = (ESP);
  /* 12aa2f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa2f06 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa2f07 push esi */
  push32((uint32_t)(ESI));
  /* 12aa2f08 push edi */
  push32((uint32_t)(EDI));
  /* 12aa2f09 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12aa2f10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2f14 jne 0x12aa2f33 */
  if (!C.zf) goto L_12aa2f33;
  /* 12aa2f16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2f19 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2f1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2f1d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2f1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2f21 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2f25 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2f26 call 0x12aa2a30 */
  push32(0x12aa2f2bu); f_12aa2a30();
  /* 12aa2f2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2f2e jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa2f33:;
  /* 12aa2f33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2f37 je 0x12aa2f56 */
  if (C.zf) goto L_12aa2f56;
  /* 12aa2f39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2f3d jne 0x12aa2f56 */
  if (!C.zf) goto L_12aa2f56;
  /* 12aa2f3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2f42 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2f43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2f46 push edx */
  push32((uint32_t)(EDX));
  /* 12aa2f47 call 0x12aa34c0 */
  push32(0x12aa2f4cu); f_12aa34c0();
  /* 12aa2f4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2f51 jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa2f56:;
  /* 12aa2f56 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa2f5b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2f60 je 0x12aa2f92 */
  if (C.zf) goto L_12aa2f92;
L_12aa2f62:;
  /* 12aa2f62 call 0x12aa3bd0 */
  push32(0x12aa2f67u); f_12aa3bd0();
  /* 12aa2f67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2f69 jne 0x12aa2f8c */
  if (!C.zf) goto L_12aa2f8c;
  /* 12aa2f6b push 0x12ac9480 */
  push32((uint32_t)(0x12ac9480u));
  /* 12aa2f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2f72 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12aa2f77 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa2f7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2f7e call 0x12aa1af0 */
  push32(0x12aa2f83u); f_12aa1af0();
  /* 12aa2f83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2f86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2f89 jne 0x12aa2f8c */
  if (!C.zf) goto L_12aa2f8c;
  /* 12aa2f8b int3  */
  x86_unimpl("int3 @ 0x12aa2f8b");
L_12aa2f8c:;
  /* 12aa2f8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa2f8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa2f90 jne 0x12aa2f62 */
  if (!C.zf) goto L_12aa2f62;
L_12aa2f92:;
  /* 12aa2f92 mov edx, dword ptr [0x12acca88] */
  EDX = (r32((uint32_t)(0x12acca88)));
  /* 12aa2f98 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa2f9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa2f9e cmp eax, dword ptr [0x12acca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12acca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2fa4 jne 0x12aa2fa7 */
  if (!C.zf) goto L_12aa2fa7;
  /* 12aa2fa6 int3  */
  x86_unimpl("int3 @ 0x12aa2fa6");
L_12aa2fa7:;
  /* 12aa2fa7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2faa push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2fab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2fae push edx */
  push32((uint32_t)(EDX));
  /* 12aa2faf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa2fb2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa2fb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa2fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2fb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa2fba push edx */
  push32((uint32_t)(EDX));
  /* 12aa2fbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa2fbe push eax */
  push32((uint32_t)(EAX));
  /* 12aa2fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa2fc1 call dword ptr [0x12accc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12accc90))), 0x12aa2fc7u);
  /* 12aa2fc7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2fcc jne 0x12aa302c */
  if (!C.zf) goto L_12aa302c;
  /* 12aa2fce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2fd2 je 0x12aa2fff */
  if (C.zf) goto L_12aa2fff;
L_12aa2fd4:;
  /* 12aa2fd4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa2fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa2fd8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa2fdb push edx */
  push32((uint32_t)(EDX));
  /* 12aa2fdc push 0x12ac95fc */
  push32((uint32_t)(0x12ac95fcu));
  /* 12aa2fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa2fe9 call 0x12aa1af0 */
  push32(0x12aa2feeu); f_12aa1af0();
  /* 12aa2fee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa2ff1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa2ff4 jne 0x12aa2ff7 */
  if (!C.zf) goto L_12aa2ff7;
  /* 12aa2ff6 int3  */
  x86_unimpl("int3 @ 0x12aa2ff6");
L_12aa2ff7:;
  /* 12aa2ff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa2ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa2ffb jne 0x12aa2fd4 */
  if (!C.zf) goto L_12aa2fd4;
  /* 12aa2ffd jmp 0x12aa3025 */
  goto L_12aa3025;
L_12aa2fff:;
  /* 12aa2fff push 0x12ac95d8 */
  push32((uint32_t)(0x12ac95d8u));
  /* 12aa3004 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3009 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa300b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa300d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa300f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3011 call 0x12aa1af0 */
  push32(0x12aa3016u); f_12aa1af0();
  /* 12aa3016 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3019 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa301c jne 0x12aa301f */
  if (!C.zf) goto L_12aa301f;
  /* 12aa301e int3  */
  x86_unimpl("int3 @ 0x12aa301e");
L_12aa301f:;
  /* 12aa301f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3023 jne 0x12aa2fff */
  if (!C.zf) goto L_12aa2fff;
L_12aa3025:;
  /* 12aa3025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3027 jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa302c:;
  /* 12aa302c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3030 jbe 0x12aa305e */
  if ((C.cf||C.zf)) goto L_12aa305e;
L_12aa3032:;
  /* 12aa3032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3035 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3036 push 0x12ac95a8 */
  push32((uint32_t)(0x12ac95a8u));
  /* 12aa303b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa303d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa303f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3041 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa3043 call 0x12aa1af0 */
  push32(0x12aa3048u); f_12aa1af0();
  /* 12aa3048 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa304b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa304e jne 0x12aa3051 */
  if (!C.zf) goto L_12aa3051;
  /* 12aa3050 int3  */
  x86_unimpl("int3 @ 0x12aa3050");
L_12aa3051:;
  /* 12aa3051 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3055 jne 0x12aa3032 */
  if (!C.zf) goto L_12aa3032;
  /* 12aa3057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3059 jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa305e:;
  /* 12aa305e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3062 je 0x12aa30a6 */
  if (C.zf) goto L_12aa30a6;
  /* 12aa3064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa3067 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa306d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3070 je 0x12aa30a6 */
  if (C.zf) goto L_12aa30a6;
  /* 12aa3072 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa3075 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa307b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa307e je 0x12aa30a6 */
  if (C.zf) goto L_12aa30a6;
L_12aa3080:;
  /* 12aa3080 push 0x12ac93bc */
  push32((uint32_t)(0x12ac93bcu));
  /* 12aa3085 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa308a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa308c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa308e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3090 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa3092 call 0x12aa1af0 */
  push32(0x12aa3097u); f_12aa1af0();
  /* 12aa3097 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa309a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa309d jne 0x12aa30a0 */
  if (!C.zf) goto L_12aa30a0;
  /* 12aa309f int3  */
  x86_unimpl("int3 @ 0x12aa309f");
L_12aa30a0:;
  /* 12aa30a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa30a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa30a4 jne 0x12aa3080 */
  if (!C.zf) goto L_12aa3080;
L_12aa30a6:;
  /* 12aa30a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa30a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa30aa call 0x12aa4030 */
  push32(0x12aa30afu); f_12aa4030();
  /* 12aa30af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa30b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa30b4 jne 0x12aa30d7 */
  if (!C.zf) goto L_12aa30d7;
  /* 12aa30b6 push 0x12ac9584 */
  push32((uint32_t)(0x12ac9584u));
  /* 12aa30bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa30bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12aa30c2 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa30c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa30c9 call 0x12aa1af0 */
  push32(0x12aa30ceu); f_12aa1af0();
  /* 12aa30ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa30d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa30d4 jne 0x12aa30d7 */
  if (!C.zf) goto L_12aa30d7;
  /* 12aa30d6 int3  */
  x86_unimpl("int3 @ 0x12aa30d6");
L_12aa30d7:;
  /* 12aa30d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa30d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa30db jne 0x12aa30a6 */
  if (!C.zf) goto L_12aa30a6;
  /* 12aa30dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa30e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa30e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa30e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa30e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa30ed jne 0x12aa30f6 */
  if (!C.zf) goto L_12aa30f6;
  /* 12aa30ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12aa30f6:;
  /* 12aa30f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa30fa je 0x12aa313a */
  if (C.zf) goto L_12aa313a;
L_12aa30fc:;
  /* 12aa30fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa30ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3106 jne 0x12aa3111 */
  if (!C.zf) goto L_12aa3111;
  /* 12aa3108 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa310b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa310f je 0x12aa3132 */
  if (C.zf) goto L_12aa3132;
L_12aa3111:;
  /* 12aa3111 push 0x12ac953c */
  push32((uint32_t)(0x12ac953cu));
  /* 12aa3116 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3118 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12aa311d push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3122 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3124 call 0x12aa1af0 */
  push32(0x12aa3129u); f_12aa1af0();
  /* 12aa3129 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa312c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa312f jne 0x12aa3132 */
  if (!C.zf) goto L_12aa3132;
  /* 12aa3131 int3  */
  x86_unimpl("int3 @ 0x12aa3131");
L_12aa3132:;
  /* 12aa3132 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3134 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3136 jne 0x12aa30fc */
  if (!C.zf) goto L_12aa30fc;
  /* 12aa3138 jmp 0x12aa319e */
  goto L_12aa319e;
L_12aa313a:;
  /* 12aa313a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa313d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3140 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3145 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3148 jne 0x12aa315f */
  if (!C.zf) goto L_12aa315f;
  /* 12aa314a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa314d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3153 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3156 jne 0x12aa315f */
  if (!C.zf) goto L_12aa315f;
  /* 12aa3158 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12aa315f:;
  /* 12aa315f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3162 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3165 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa316a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa316d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3173 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3175 je 0x12aa3198 */
  if (C.zf) goto L_12aa3198;
  /* 12aa3177 push 0x12ac9500 */
  push32((uint32_t)(0x12ac9500u));
  /* 12aa317c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa317e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12aa3183 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3188 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa318a call 0x12aa1af0 */
  push32(0x12aa318fu); f_12aa1af0();
  /* 12aa318f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3192 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3195 jne 0x12aa3198 */
  if (!C.zf) goto L_12aa3198;
  /* 12aa3197 int3  */
  x86_unimpl("int3 @ 0x12aa3197");
L_12aa3198:;
  /* 12aa3198 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa319a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa319c jne 0x12aa315f */
  if (!C.zf) goto L_12aa315f;
L_12aa319e:;
  /* 12aa319e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa31a2 je 0x12aa31c9 */
  if (C.zf) goto L_12aa31c9;
  /* 12aa31a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa31a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa31aa push eax */
  push32((uint32_t)(EAX));
  /* 12aa31ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa31ae push ecx */
  push32((uint32_t)(ECX));
  /* 12aa31af call 0x12aa69b0 */
  push32(0x12aa31b4u); f_12aa69b0();
  /* 12aa31b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa31b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa31ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa31be jne 0x12aa31c7 */
  if (!C.zf) goto L_12aa31c7;
  /* 12aa31c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa31c2 jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa31c7:;
  /* 12aa31c7 jmp 0x12aa31ec */
  goto L_12aa31ec;
L_12aa31c9:;
  /* 12aa31c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa31cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa31cf push edx */
  push32((uint32_t)(EDX));
  /* 12aa31d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa31d3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa31d4 call 0x12aa6900 */
  push32(0x12aa31d9u); f_12aa6900();
  /* 12aa31d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa31dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa31df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa31e3 jne 0x12aa31ec */
  if (!C.zf) goto L_12aa31ec;
  /* 12aa31e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa31e7 jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa31ec:;
  /* 12aa31ec mov ecx, dword ptr [0x12acca88] */
  ECX = (r32((uint32_t)(0x12acca88)));
  /* 12aa31f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa31f5 mov dword ptr [0x12acca88], ecx */
  w32((uint32_t)(0x12acca88), (ECX));
  /* 12aa31fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa31ff jne 0x12aa3257 */
  if (!C.zf) goto L_12aa3257;
  /* 12aa3201 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3204 mov eax, dword ptr [0x12ace4d0] */
  EAX = (r32((uint32_t)(0x12ace4d0)));
  /* 12aa3209 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa320c mov dword ptr [0x12ace4d0], eax */
  w32((uint32_t)(0x12ace4d0), (EAX));
  /* 12aa3211 mov ecx, dword ptr [0x12ace4d0] */
  ECX = (r32((uint32_t)(0x12ace4d0)));
  /* 12aa3217 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa321a mov dword ptr [0x12ace4d0], ecx */
  w32((uint32_t)(0x12ace4d0), (ECX));
  /* 12aa3220 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3223 mov eax, dword ptr [0x12ace4d8] */
  EAX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa3228 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa322b mov dword ptr [0x12ace4d8], eax */
  w32((uint32_t)(0x12ace4d8), (EAX));
  /* 12aa3230 mov ecx, dword ptr [0x12ace4d8] */
  ECX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa3236 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3239 mov dword ptr [0x12ace4d8], ecx */
  w32((uint32_t)(0x12ace4d8), (ECX));
  /* 12aa323f mov edx, dword ptr [0x12ace4d8] */
  EDX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa3245 cmp edx, dword ptr [0x12ace4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ace4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa324b jbe 0x12aa3257 */
  if ((C.cf||C.zf)) goto L_12aa3257;
  /* 12aa324d mov eax, dword ptr [0x12ace4d8] */
  EAX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa3252 mov dword ptr [0x12ace4dc], eax */
  w32((uint32_t)(0x12ace4dc), (EAX));
L_12aa3257:;
  /* 12aa3257 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa325a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa325d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa3260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3266 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3269 jbe 0x12aa328f */
  if ((C.cf||C.zf)) goto L_12aa328f;
  /* 12aa326b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa326e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3271 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3274 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3277 mov al, byte ptr [0x12acca92] */
  AL = (r8((uint32_t)(0x12acca92)));
  /* 12aa327c push eax */
  push32((uint32_t)(EAX));
  /* 12aa327d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3280 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3283 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3286 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3287 call 0x12aa67a0 */
  push32(0x12aa328cu); f_12aa67a0();
  /* 12aa328c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa328f:;
  /* 12aa328f push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa3291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3293 mov al, byte ptr [0x12acca90] */
  AL = (r8((uint32_t)(0x12acca90)));
  /* 12aa3298 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa329c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa329f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa32a0 call 0x12aa67a0 */
  push32(0x12aa32a5u); f_12aa67a0();
  /* 12aa32a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa32a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa32ac jne 0x12aa32c9 */
  if (!C.zf) goto L_12aa32c9;
  /* 12aa32ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa32b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa32b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa32b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa32ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa32bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12aa32c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa32c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa32c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12aa32c9:;
  /* 12aa32c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa32cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa32cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12aa32d2:;
  /* 12aa32d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa32d6 jne 0x12aa3307 */
  if (!C.zf) goto L_12aa3307;
  /* 12aa32d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa32dc jne 0x12aa32e6 */
  if (!C.zf) goto L_12aa32e6;
  /* 12aa32de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa32e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa32e4 je 0x12aa3307 */
  if (C.zf) goto L_12aa3307;
L_12aa32e6:;
  /* 12aa32e6 push 0x12ac94cc */
  push32((uint32_t)(0x12ac94ccu));
  /* 12aa32eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa32ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12aa32f2 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa32f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa32f9 call 0x12aa1af0 */
  push32(0x12aa32feu); f_12aa1af0();
  /* 12aa32fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3301 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3304 jne 0x12aa3307 */
  if (!C.zf) goto L_12aa3307;
  /* 12aa3306 int3  */
  x86_unimpl("int3 @ 0x12aa3306");
L_12aa3307:;
  /* 12aa3307 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3309 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa330b jne 0x12aa32d2 */
  if (!C.zf) goto L_12aa32d2;
  /* 12aa330d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3310 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3313 je 0x12aa331b */
  if (C.zf) goto L_12aa331b;
  /* 12aa3315 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3319 je 0x12aa3323 */
  if (C.zf) goto L_12aa3323;
L_12aa331b:;
  /* 12aa331b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa331e jmp 0x12aa340a */
  goto L_12aa340a;
L_12aa3323:;
  /* 12aa3323 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3326 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3329 je 0x12aa333b */
  if (C.zf) goto L_12aa333b;
  /* 12aa332b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa332e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa3330 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3333 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa3336 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa3339 jmp 0x12aa3377 */
  goto L_12aa3377;
L_12aa333b:;
  /* 12aa333b mov eax, dword ptr [0x12ace4cc] */
  EAX = (r32((uint32_t)(0x12ace4cc)));
  /* 12aa3340 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3343 je 0x12aa3366 */
  if (C.zf) goto L_12aa3366;
  /* 12aa3345 push 0x12ac94b0 */
  push32((uint32_t)(0x12ac94b0u));
  /* 12aa334a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa334c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12aa3351 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3356 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3358 call 0x12aa1af0 */
  push32(0x12aa335du); f_12aa1af0();
  /* 12aa335d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3363 jne 0x12aa3366 */
  if (!C.zf) goto L_12aa3366;
  /* 12aa3365 int3  */
  x86_unimpl("int3 @ 0x12aa3365");
L_12aa3366:;
  /* 12aa3366 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3368 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa336a jne 0x12aa333b */
  if (!C.zf) goto L_12aa333b;
  /* 12aa336c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa336f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa3372 mov dword ptr [0x12ace4cc], eax */
  w32((uint32_t)(0x12ace4cc), (EAX));
L_12aa3377:;
  /* 12aa3377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa337a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa337e je 0x12aa338f */
  if (C.zf) goto L_12aa338f;
  /* 12aa3380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3383 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa3386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3389 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa338b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa338d jmp 0x12aa33ca */
  goto L_12aa33ca;
L_12aa338f:;
  /* 12aa338f mov eax, dword ptr [0x12ace4d4] */
  EAX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa3394 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3397 je 0x12aa33ba */
  if (C.zf) goto L_12aa33ba;
  /* 12aa3399 push 0x12ac9494 */
  push32((uint32_t)(0x12ac9494u));
  /* 12aa339e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa33a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12aa33a5 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa33aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa33ac call 0x12aa1af0 */
  push32(0x12aa33b1u); f_12aa1af0();
  /* 12aa33b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa33b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa33b7 jne 0x12aa33ba */
  if (!C.zf) goto L_12aa33ba;
  /* 12aa33b9 int3  */
  x86_unimpl("int3 @ 0x12aa33b9");
L_12aa33ba:;
  /* 12aa33ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa33bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa33be jne 0x12aa338f */
  if (!C.zf) goto L_12aa338f;
  /* 12aa33c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa33c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa33c5 mov dword ptr [0x12ace4d4], eax */
  w32((uint32_t)(0x12ace4d4), (EAX));
L_12aa33ca:;
  /* 12aa33ca cmp dword ptr [0x12ace4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa33d1 je 0x12aa33e1 */
  if (C.zf) goto L_12aa33e1;
  /* 12aa33d3 mov ecx, dword ptr [0x12ace4d4] */
  ECX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa33d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa33dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12aa33df jmp 0x12aa33e9 */
  goto L_12aa33e9;
L_12aa33e1:;
  /* 12aa33e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa33e4 mov dword ptr [0x12ace4cc], eax */
  w32((uint32_t)(0x12ace4cc), (EAX));
L_12aa33e9:;
  /* 12aa33e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa33ec mov edx, dword ptr [0x12ace4d4] */
  EDX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa33f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa33f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa33f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12aa33fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3401 mov dword ptr [0x12ace4d4], ecx */
  w32((uint32_t)(0x12ace4d4), (ECX));
  /* 12aa3407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa340a:;
  /* 12aa340a pop edi */
  EDI = (pop32());
  /* 12aa340b pop esi */
  ESI = (pop32());
  /* 12aa340c pop ebx */
  EBX = (pop32());
  /* 12aa340d mov esp, ebp */
  ESP = (EBP);
  /* 12aa340f pop ebp */
  EBP = (pop32());
  /* 12aa3410 ret  */
  ESPCHK(0x12aa2f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x12aa3420 (27 bytes, 13 insns) */
void f_12aa3420(void) {
  FTRACE(0x12aa3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3420 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3421 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3423 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3427 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa3429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa342c push eax */
  push32((uint32_t)(EAX));
  /* 12aa342d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3430 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3431 call 0x12aa3440 */
  push32(0x12aa3436u); f_12aa3440();
  /* 12aa3436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3439 pop ebp */
  EBP = (pop32());
  /* 12aa343a ret  */
  ESPCHK(0x12aa3420u, _esp0);
  ESP += 4; return;
}

/* FUN_10003440 @ 0x12aa3440 (64 bytes, 27 insns) */
void f_12aa3440(void) {
  FTRACE(0x12aa3440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3440 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3441 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3443 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3444 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3446 call 0x12aa6430 */
  push32(0x12aa344bu); f_12aa6430();
  /* 12aa344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa344e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3450 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa3453 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3454 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa3457 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3458 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa345b push edx */
  push32((uint32_t)(EDX));
  /* 12aa345c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa345f push eax */
  push32((uint32_t)(EAX));
  /* 12aa3460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3463 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3464 call 0x12aa2f00 */
  push32(0x12aa3469u); f_12aa2f00();
  /* 12aa3469 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa346c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa346f push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3471 call 0x12aa64d0 */
  push32(0x12aa3476u); f_12aa64d0();
  /* 12aa3476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa347c mov esp, ebp */
  ESP = (EBP);
  /* 12aa347e pop ebp */
  EBP = (pop32());
  /* 12aa347f ret  */
  ESPCHK(0x12aa3440u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x12aa3480 (19 bytes, 9 insns) */
void f_12aa3480(void) {
  FTRACE(0x12aa3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3480 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3481 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3483 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa3485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3488 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3489 call 0x12aa34c0 */
  push32(0x12aa348eu); f_12aa34c0();
  /* 12aa348e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3491 pop ebp */
  EBP = (pop32());
  /* 12aa3492 ret  */
  ESPCHK(0x12aa3480u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a0 @ 0x12aa34a0 (19 bytes, 9 insns) */
void f_12aa34a0(void) {
  FTRACE(0x12aa34a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa34a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa34a1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa34a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa34a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa34a8 push eax */
  push32((uint32_t)(EAX));
  /* 12aa34a9 call 0x12aa34f0 */
  push32(0x12aa34aeu); f_12aa34f0();
  /* 12aa34ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa34b1 pop ebp */
  EBP = (pop32());
  /* 12aa34b2 ret  */
  ESPCHK(0x12aa34a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034c0 @ 0x12aa34c0 (41 bytes, 16 insns) */
void f_12aa34c0(void) {
  FTRACE(0x12aa34c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa34c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa34c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa34c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa34c5 call 0x12aa6430 */
  push32(0x12aa34cau); f_12aa6430();
  /* 12aa34ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa34cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa34d0 push eax */
  push32((uint32_t)(EAX));
  /* 12aa34d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa34d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa34d5 call 0x12aa34f0 */
  push32(0x12aa34dau); f_12aa34f0();
  /* 12aa34da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa34dd push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa34df call 0x12aa64d0 */
  push32(0x12aa34e4u); f_12aa64d0();
  /* 12aa34e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa34e7 pop ebp */
  EBP = (pop32());
  /* 12aa34e8 ret  */
  ESPCHK(0x12aa34c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x12aa34f0 (1004 bytes, 342 insns) */
void f_12aa34f0(void) {
  FTRACE(0x12aa34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa34f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa34f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa34f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa34f5 push esi */
  push32((uint32_t)(ESI));
  /* 12aa34f6 push edi */
  push32((uint32_t)(EDI));
  /* 12aa34f7 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa34fc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa34ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3501 je 0x12aa3533 */
  if (C.zf) goto L_12aa3533;
L_12aa3503:;
  /* 12aa3503 call 0x12aa3bd0 */
  push32(0x12aa3508u); f_12aa3bd0();
  /* 12aa3508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa350a jne 0x12aa352d */
  if (!C.zf) goto L_12aa352d;
  /* 12aa350c push 0x12ac9480 */
  push32((uint32_t)(0x12ac9480u));
  /* 12aa3511 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3513 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12aa3518 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa351d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa351f call 0x12aa1af0 */
  push32(0x12aa3524u); f_12aa1af0();
  /* 12aa3524 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3527 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa352a jne 0x12aa352d */
  if (!C.zf) goto L_12aa352d;
  /* 12aa352c int3  */
  x86_unimpl("int3 @ 0x12aa352c");
L_12aa352d:;
  /* 12aa352d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa352f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3531 jne 0x12aa3503 */
  if (!C.zf) goto L_12aa3503;
L_12aa3533:;
  /* 12aa3533 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3537 jne 0x12aa353e */
  if (!C.zf) goto L_12aa353e;
  /* 12aa3539 jmp 0x12aa38d5 */
  goto L_12aa38d5;
L_12aa353e:;
  /* 12aa353e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3542 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3547 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3548 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa354a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa354d push eax */
  push32((uint32_t)(EAX));
  /* 12aa354e push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa3550 call dword ptr [0x12accc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12accc90))), 0x12aa3556u);
  /* 12aa3556 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa355b jne 0x12aa3588 */
  if (!C.zf) goto L_12aa3588;
L_12aa355d:;
  /* 12aa355d push 0x12ac9744 */
  push32((uint32_t)(0x12ac9744u));
  /* 12aa3562 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3567 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3569 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa356b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa356d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa356f call 0x12aa1af0 */
  push32(0x12aa3574u); f_12aa1af0();
  /* 12aa3574 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3577 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa357a jne 0x12aa357d */
  if (!C.zf) goto L_12aa357d;
  /* 12aa357c int3  */
  x86_unimpl("int3 @ 0x12aa357c");
L_12aa357d:;
  /* 12aa357d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa357f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3581 jne 0x12aa355d */
  if (!C.zf) goto L_12aa355d;
  /* 12aa3583 jmp 0x12aa38d5 */
  goto L_12aa38d5;
L_12aa3588:;
  /* 12aa3588 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa358b push edx */
  push32((uint32_t)(EDX));
  /* 12aa358c call 0x12aa4030 */
  push32(0x12aa3591u); f_12aa4030();
  /* 12aa3591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3596 jne 0x12aa35b9 */
  if (!C.zf) goto L_12aa35b9;
  /* 12aa3598 push 0x12ac9584 */
  push32((uint32_t)(0x12ac9584u));
  /* 12aa359d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa359f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12aa35a4 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa35a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa35ab call 0x12aa1af0 */
  push32(0x12aa35b0u); f_12aa1af0();
  /* 12aa35b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa35b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa35b6 jne 0x12aa35b9 */
  if (!C.zf) goto L_12aa35b9;
  /* 12aa35b8 int3  */
  x86_unimpl("int3 @ 0x12aa35b8");
L_12aa35b9:;
  /* 12aa35b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa35bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa35bd jne 0x12aa3588 */
  if (!C.zf) goto L_12aa3588;
  /* 12aa35bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa35c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa35c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa35c8:;
  /* 12aa35c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa35cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa35ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa35d3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa35d6 je 0x12aa361b */
  if (C.zf) goto L_12aa361b;
  /* 12aa35d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa35db cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa35df je 0x12aa361b */
  if (C.zf) goto L_12aa361b;
  /* 12aa35e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa35e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa35e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa35ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa35ef je 0x12aa361b */
  if (C.zf) goto L_12aa361b;
  /* 12aa35f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa35f4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa35f8 je 0x12aa361b */
  if (C.zf) goto L_12aa361b;
  /* 12aa35fa push 0x12ac971c */
  push32((uint32_t)(0x12ac971cu));
  /* 12aa35ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3601 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12aa3606 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa360b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa360d call 0x12aa1af0 */
  push32(0x12aa3612u); f_12aa1af0();
  /* 12aa3612 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3615 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3618 jne 0x12aa361b */
  if (!C.zf) goto L_12aa361b;
  /* 12aa361a int3  */
  x86_unimpl("int3 @ 0x12aa361a");
L_12aa361b:;
  /* 12aa361b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa361d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa361f jne 0x12aa35c8 */
  if (!C.zf) goto L_12aa35c8;
  /* 12aa3621 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa3626 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa362b jne 0x12aa36f6 */
  if (!C.zf) goto L_12aa36f6;
  /* 12aa3631 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa3633 mov cl, byte ptr [0x12acca90] */
  CL = (r8((uint32_t)(0x12acca90)));
  /* 12aa3639 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa363a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa363d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3640 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3641 call 0x12aa3b40 */
  push32(0x12aa3646u); f_12aa3b40();
  /* 12aa3646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa364b jne 0x12aa3690 */
  if (!C.zf) goto L_12aa3690;
L_12aa364d:;
  /* 12aa364d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3650 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3653 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3657 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aa365a push edx */
  push32((uint32_t)(EDX));
  /* 12aa365b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa365e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa3661 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3667 mov edx, dword ptr [ecx*4 + 0x12acca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca94)));
  /* 12aa366e push edx */
  push32((uint32_t)(EDX));
  /* 12aa366f push 0x12ac96f0 */
  push32((uint32_t)(0x12ac96f0u));
  /* 12aa3674 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3678 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa367a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa367c call 0x12aa1af0 */
  push32(0x12aa3681u); f_12aa1af0();
  /* 12aa3681 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3687 jne 0x12aa368a */
  if (!C.zf) goto L_12aa368a;
  /* 12aa3689 int3  */
  x86_unimpl("int3 @ 0x12aa3689");
L_12aa368a:;
  /* 12aa368a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa368c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa368e jne 0x12aa364d */
  if (!C.zf) goto L_12aa364d;
L_12aa3690:;
  /* 12aa3690 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa3692 mov cl, byte ptr [0x12acca90] */
  CL = (r8((uint32_t)(0x12acca90)));
  /* 12aa3698 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa369c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa369f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa36a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12aa36a6 push edx */
  push32((uint32_t)(EDX));
  /* 12aa36a7 call 0x12aa3b40 */
  push32(0x12aa36acu); f_12aa3b40();
  /* 12aa36ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa36af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa36b1 jne 0x12aa36f6 */
  if (!C.zf) goto L_12aa36f6;
L_12aa36b3:;
  /* 12aa36b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa36b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa36b9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa36ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa36bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aa36c0 push edx */
  push32((uint32_t)(EDX));
  /* 12aa36c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa36c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa36c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa36cd mov edx, dword ptr [ecx*4 + 0x12acca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca94)));
  /* 12aa36d4 push edx */
  push32((uint32_t)(EDX));
  /* 12aa36d5 push 0x12ac96c4 */
  push32((uint32_t)(0x12ac96c4u));
  /* 12aa36da push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa36dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa36de push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa36e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa36e2 call 0x12aa1af0 */
  push32(0x12aa36e7u); f_12aa1af0();
  /* 12aa36e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa36ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa36ed jne 0x12aa36f0 */
  if (!C.zf) goto L_12aa36f0;
  /* 12aa36ef int3  */
  x86_unimpl("int3 @ 0x12aa36ef");
L_12aa36f0:;
  /* 12aa36f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa36f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa36f4 jne 0x12aa36b3 */
  if (!C.zf) goto L_12aa36b3;
L_12aa36f6:;
  /* 12aa36f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa36f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa36fd jne 0x12aa376b */
  if (!C.zf) goto L_12aa376b;
L_12aa36ff:;
  /* 12aa36ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3702 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3709 jne 0x12aa3714 */
  if (!C.zf) goto L_12aa3714;
  /* 12aa370b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa370e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3712 je 0x12aa3735 */
  if (C.zf) goto L_12aa3735;
L_12aa3714:;
  /* 12aa3714 push 0x12ac9684 */
  push32((uint32_t)(0x12ac9684u));
  /* 12aa3719 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa371b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12aa3720 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3725 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3727 call 0x12aa1af0 */
  push32(0x12aa372cu); f_12aa1af0();
  /* 12aa372c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa372f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3732 jne 0x12aa3735 */
  if (!C.zf) goto L_12aa3735;
  /* 12aa3734 int3  */
  x86_unimpl("int3 @ 0x12aa3734");
L_12aa3735:;
  /* 12aa3735 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3737 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3739 jne 0x12aa36ff */
  if (!C.zf) goto L_12aa36ff;
  /* 12aa373b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa373e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa3741 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3744 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3747 mov cl, byte ptr [0x12acca91] */
  CL = (r8((uint32_t)(0x12acca91)));
  /* 12aa374d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa374e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3751 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3752 call 0x12aa67a0 */
  push32(0x12aa3757u); f_12aa67a0();
  /* 12aa3757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa375a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa375d push eax */
  push32((uint32_t)(EAX));
  /* 12aa375e call 0x12aa6ba0 */
  push32(0x12aa3763u); f_12aa6ba0();
  /* 12aa3763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3766 jmp 0x12aa38d5 */
  goto L_12aa38d5;
L_12aa376b:;
  /* 12aa376b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa376e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3772 jne 0x12aa3781 */
  if (!C.zf) goto L_12aa3781;
  /* 12aa3774 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3778 jne 0x12aa3781 */
  if (!C.zf) goto L_12aa3781;
  /* 12aa377a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12aa3781:;
  /* 12aa3781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3784 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3787 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa378a je 0x12aa37ad */
  if (C.zf) goto L_12aa37ad;
  /* 12aa378c push 0x12ac9664 */
  push32((uint32_t)(0x12ac9664u));
  /* 12aa3791 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3793 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12aa3798 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa379d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa379f call 0x12aa1af0 */
  push32(0x12aa37a4u); f_12aa1af0();
  /* 12aa37a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa37a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa37aa jne 0x12aa37ad */
  if (!C.zf) goto L_12aa37ad;
  /* 12aa37ac int3  */
  x86_unimpl("int3 @ 0x12aa37ac");
L_12aa37ad:;
  /* 12aa37ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa37af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa37b1 jne 0x12aa3781 */
  if (!C.zf) goto L_12aa3781;
  /* 12aa37b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa37b6 mov eax, dword ptr [0x12ace4d8] */
  EAX = (r32((uint32_t)(0x12ace4d8)));
  /* 12aa37bb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa37be mov dword ptr [0x12ace4d8], eax */
  w32((uint32_t)(0x12ace4d8), (EAX));
  /* 12aa37c3 mov ecx, dword ptr [0x12acca84] */
  ECX = (r32((uint32_t)(0x12acca84)));
  /* 12aa37c9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa37cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa37ce jne 0x12aa38ac */
  if (!C.zf) goto L_12aa38ac;
  /* 12aa37d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa37d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa37da je 0x12aa37ec */
  if (C.zf) goto L_12aa37ec;
  /* 12aa37dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa37df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa37e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa37e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa37e7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12aa37ea jmp 0x12aa382a */
  goto L_12aa382a;
L_12aa37ec:;
  /* 12aa37ec mov ecx, dword ptr [0x12ace4cc] */
  ECX = (r32((uint32_t)(0x12ace4cc)));
  /* 12aa37f2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa37f5 je 0x12aa3818 */
  if (C.zf) goto L_12aa3818;
  /* 12aa37f7 push 0x12ac964c */
  push32((uint32_t)(0x12ac964cu));
  /* 12aa37fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa37fe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12aa3803 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3808 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa380a call 0x12aa1af0 */
  push32(0x12aa380fu); f_12aa1af0();
  /* 12aa380f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3812 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3815 jne 0x12aa3818 */
  if (!C.zf) goto L_12aa3818;
  /* 12aa3817 int3  */
  x86_unimpl("int3 @ 0x12aa3817");
L_12aa3818:;
  /* 12aa3818 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa381a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa381c jne 0x12aa37ec */
  if (!C.zf) goto L_12aa37ec;
  /* 12aa381e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3821 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa3824 mov dword ptr [0x12ace4cc], ecx */
  w32((uint32_t)(0x12ace4cc), (ECX));
L_12aa382a:;
  /* 12aa382a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa382d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3831 je 0x12aa3842 */
  if (C.zf) goto L_12aa3842;
  /* 12aa3833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3836 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa3839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa383c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa383e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa3840 jmp 0x12aa387f */
  goto L_12aa387f;
L_12aa3842:;
  /* 12aa3842 mov ecx, dword ptr [0x12ace4d4] */
  ECX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa3848 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa384b je 0x12aa386e */
  if (C.zf) goto L_12aa386e;
  /* 12aa384d push 0x12ac9634 */
  push32((uint32_t)(0x12ac9634u));
  /* 12aa3852 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3854 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12aa3859 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa385e push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3860 call 0x12aa1af0 */
  push32(0x12aa3865u); f_12aa1af0();
  /* 12aa3865 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3868 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa386b jne 0x12aa386e */
  if (!C.zf) goto L_12aa386e;
  /* 12aa386d int3  */
  x86_unimpl("int3 @ 0x12aa386d");
L_12aa386e:;
  /* 12aa386e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3870 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3872 jne 0x12aa3842 */
  if (!C.zf) goto L_12aa3842;
  /* 12aa3874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3877 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa3879 mov dword ptr [0x12ace4d4], ecx */
  w32((uint32_t)(0x12ace4d4), (ECX));
L_12aa387f:;
  /* 12aa387f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3882 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa3885 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3888 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3889 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa388b mov cl, byte ptr [0x12acca91] */
  CL = (r8((uint32_t)(0x12acca91)));
  /* 12aa3891 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3895 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3896 call 0x12aa67a0 */
  push32(0x12aa389bu); f_12aa67a0();
  /* 12aa389b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa389e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa38a1 push eax */
  push32((uint32_t)(EAX));
  /* 12aa38a2 call 0x12aa6ba0 */
  push32(0x12aa38a7u); f_12aa6ba0();
  /* 12aa38a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa38aa jmp 0x12aa38d5 */
  goto L_12aa38d5;
L_12aa38ac:;
  /* 12aa38ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa38af mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12aa38b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa38b9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa38bc push eax */
  push32((uint32_t)(EAX));
  /* 12aa38bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa38bf mov cl, byte ptr [0x12acca91] */
  CL = (r8((uint32_t)(0x12acca91)));
  /* 12aa38c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa38c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa38c9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa38cc push edx */
  push32((uint32_t)(EDX));
  /* 12aa38cd call 0x12aa67a0 */
  push32(0x12aa38d2u); f_12aa67a0();
  /* 12aa38d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa38d5:;
  /* 12aa38d5 pop edi */
  EDI = (pop32());
  /* 12aa38d6 pop esi */
  ESI = (pop32());
  /* 12aa38d7 pop ebx */
  EBX = (pop32());
  /* 12aa38d8 mov esp, ebp */
  ESP = (EBP);
  /* 12aa38da pop ebp */
  EBP = (pop32());
  /* 12aa38db ret  */
  ESPCHK(0x12aa34f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12aa38e0 (19 bytes, 9 insns) */
void f_12aa38e0(void) {
  FTRACE(0x12aa38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa38e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa38e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa38e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa38e8 push eax */
  push32((uint32_t)(EAX));
  /* 12aa38e9 call 0x12aa3900 */
  push32(0x12aa38eeu); f_12aa3900();
  /* 12aa38ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa38f1 pop ebp */
  EBP = (pop32());
  /* 12aa38f2 ret  */
  ESPCHK(0x12aa38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x12aa3900 (342 bytes, 119 insns) */
void f_12aa3900(void) {
  FTRACE(0x12aa3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3900 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3901 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3906 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa3907 push esi */
  push32((uint32_t)(ESI));
  /* 12aa3908 push edi */
  push32((uint32_t)(EDI));
  /* 12aa3909 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa390e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3913 je 0x12aa3945 */
  if (C.zf) goto L_12aa3945;
L_12aa3915:;
  /* 12aa3915 call 0x12aa3bd0 */
  push32(0x12aa391au); f_12aa3bd0();
  /* 12aa391a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa391c jne 0x12aa393f */
  if (!C.zf) goto L_12aa393f;
  /* 12aa391e push 0x12ac9480 */
  push32((uint32_t)(0x12ac9480u));
  /* 12aa3923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3925 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12aa392a push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa392f push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3931 call 0x12aa1af0 */
  push32(0x12aa3936u); f_12aa1af0();
  /* 12aa3936 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3939 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa393c jne 0x12aa393f */
  if (!C.zf) goto L_12aa393f;
  /* 12aa393e int3  */
  x86_unimpl("int3 @ 0x12aa393e");
L_12aa393f:;
  /* 12aa393f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3941 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3943 jne 0x12aa3915 */
  if (!C.zf) goto L_12aa3915;
L_12aa3945:;
  /* 12aa3945 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3947 call 0x12aa6430 */
  push32(0x12aa394cu); f_12aa6430();
  /* 12aa394c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa394f:;
  /* 12aa394f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3952 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3953 call 0x12aa4030 */
  push32(0x12aa3958u); f_12aa4030();
  /* 12aa3958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa395b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa395d jne 0x12aa3980 */
  if (!C.zf) goto L_12aa3980;
  /* 12aa395f push 0x12ac9584 */
  push32((uint32_t)(0x12ac9584u));
  /* 12aa3964 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3966 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12aa396b push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3970 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3972 call 0x12aa1af0 */
  push32(0x12aa3977u); f_12aa1af0();
  /* 12aa3977 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa397a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa397d jne 0x12aa3980 */
  if (!C.zf) goto L_12aa3980;
  /* 12aa397f int3  */
  x86_unimpl("int3 @ 0x12aa397f");
L_12aa3980:;
  /* 12aa3980 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3984 jne 0x12aa394f */
  if (!C.zf) goto L_12aa394f;
  /* 12aa3986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3989 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa398c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aa398f:;
  /* 12aa398f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3992 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3995 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa399a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa399d je 0x12aa39e2 */
  if (C.zf) goto L_12aa39e2;
  /* 12aa399f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa39a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39a6 je 0x12aa39e2 */
  if (C.zf) goto L_12aa39e2;
  /* 12aa39a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa39ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa39ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa39b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39b6 je 0x12aa39e2 */
  if (C.zf) goto L_12aa39e2;
  /* 12aa39b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa39bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39bf je 0x12aa39e2 */
  if (C.zf) goto L_12aa39e2;
  /* 12aa39c1 push 0x12ac971c */
  push32((uint32_t)(0x12ac971cu));
  /* 12aa39c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa39c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12aa39cd push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa39d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa39d4 call 0x12aa1af0 */
  push32(0x12aa39d9u); f_12aa1af0();
  /* 12aa39d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa39dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39df jne 0x12aa39e2 */
  if (!C.zf) goto L_12aa39e2;
  /* 12aa39e1 int3  */
  x86_unimpl("int3 @ 0x12aa39e1");
L_12aa39e2:;
  /* 12aa39e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa39e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa39e6 jne 0x12aa398f */
  if (!C.zf) goto L_12aa398f;
  /* 12aa39e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa39eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39ef jne 0x12aa39fe */
  if (!C.zf) goto L_12aa39fe;
  /* 12aa39f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa39f5 jne 0x12aa39fe */
  if (!C.zf) goto L_12aa39fe;
  /* 12aa39f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12aa39fe:;
  /* 12aa39fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3a01 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3a05 je 0x12aa3a39 */
  if (C.zf) goto L_12aa3a39;
L_12aa3a07:;
  /* 12aa3a07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3a0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3a0d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3a10 je 0x12aa3a33 */
  if (C.zf) goto L_12aa3a33;
  /* 12aa3a12 push 0x12ac9664 */
  push32((uint32_t)(0x12ac9664u));
  /* 12aa3a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3a19 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12aa3a1e push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3a23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3a25 call 0x12aa1af0 */
  push32(0x12aa3a2au); f_12aa1af0();
  /* 12aa3a2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3a2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3a30 jne 0x12aa3a33 */
  if (!C.zf) goto L_12aa3a33;
  /* 12aa3a32 int3  */
  x86_unimpl("int3 @ 0x12aa3a32");
L_12aa3a33:;
  /* 12aa3a33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3a37 jne 0x12aa3a07 */
  if (!C.zf) goto L_12aa3a07;
L_12aa3a39:;
  /* 12aa3a39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3a3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa3a3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa3a42 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3a44 call 0x12aa64d0 */
  push32(0x12aa3a49u); f_12aa64d0();
  /* 12aa3a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3a4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3a4f pop edi */
  EDI = (pop32());
  /* 12aa3a50 pop esi */
  ESI = (pop32());
  /* 12aa3a51 pop ebx */
  EBX = (pop32());
  /* 12aa3a52 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3a54 pop ebp */
  EBP = (pop32());
  /* 12aa3a55 ret  */
  ESPCHK(0x12aa3900u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a60 @ 0x12aa3a60 (28 bytes, 11 insns) */
void f_12aa3a60(void) {
  FTRACE(0x12aa3a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3a61 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3a64 mov eax, dword ptr [0x12acca8c] */
  EAX = (r32((uint32_t)(0x12acca8c)));
  /* 12aa3a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa3a6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3a6f mov dword ptr [0x12acca8c], ecx */
  w32((uint32_t)(0x12acca8c), (ECX));
  /* 12aa3a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3a78 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3a7a pop ebp */
  EBP = (pop32());
  /* 12aa3a7b ret  */
  ESPCHK(0x12aa3a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a80 @ 0x12aa3a80 (157 bytes, 59 insns) */
void f_12aa3a80(void) {
  FTRACE(0x12aa3a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3a81 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3a84 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa3a85 push esi */
  push32((uint32_t)(ESI));
  /* 12aa3a86 push edi */
  push32((uint32_t)(EDI));
  /* 12aa3a87 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3a89 call 0x12aa6430 */
  push32(0x12aa3a8eu); f_12aa6430();
  /* 12aa3a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3a94 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3a95 call 0x12aa4030 */
  push32(0x12aa3a9au); f_12aa4030();
  /* 12aa3a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3a9f je 0x12aa3b0c */
  if (C.zf) goto L_12aa3b0c;
  /* 12aa3aa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3aa4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3aa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa3aaa:;
  /* 12aa3aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3aad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3ab0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3ab5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ab8 je 0x12aa3afd */
  if (C.zf) goto L_12aa3afd;
  /* 12aa3aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3abd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ac1 je 0x12aa3afd */
  if (C.zf) goto L_12aa3afd;
  /* 12aa3ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3ac6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa3ac9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3ace cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ad1 je 0x12aa3afd */
  if (C.zf) goto L_12aa3afd;
  /* 12aa3ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3ad6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ada je 0x12aa3afd */
  if (C.zf) goto L_12aa3afd;
  /* 12aa3adc push 0x12ac971c */
  push32((uint32_t)(0x12ac971cu));
  /* 12aa3ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ae3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12aa3ae8 push 0x12ac9474 */
  push32((uint32_t)(0x12ac9474u));
  /* 12aa3aed push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa3aef call 0x12aa1af0 */
  push32(0x12aa3af4u); f_12aa1af0();
  /* 12aa3af4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3af7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3afa jne 0x12aa3afd */
  if (!C.zf) goto L_12aa3afd;
  /* 12aa3afc int3  */
  x86_unimpl("int3 @ 0x12aa3afc");
L_12aa3afd:;
  /* 12aa3afd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3aff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3b01 jne 0x12aa3aaa */
  if (!C.zf) goto L_12aa3aaa;
  /* 12aa3b03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3b06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3b09 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12aa3b0c:;
  /* 12aa3b0c push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3b0e call 0x12aa64d0 */
  push32(0x12aa3b13u); f_12aa64d0();
  /* 12aa3b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3b16 pop edi */
  EDI = (pop32());
  /* 12aa3b17 pop esi */
  ESI = (pop32());
  /* 12aa3b18 pop ebx */
  EBX = (pop32());
  /* 12aa3b19 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3b1b pop ebp */
  EBP = (pop32());
  /* 12aa3b1c ret  */
  ESPCHK(0x12aa3a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x12aa3b20 (28 bytes, 11 insns) */
void f_12aa3b20(void) {
  FTRACE(0x12aa3b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3b21 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3b24 mov eax, dword ptr [0x12accc90] */
  EAX = (r32((uint32_t)(0x12accc90)));
  /* 12aa3b29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa3b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3b2f mov dword ptr [0x12accc90], ecx */
  w32((uint32_t)(0x12accc90), (ECX));
  /* 12aa3b35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3b38 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3b3a pop ebp */
  EBP = (pop32());
  /* 12aa3b3b ret  */
  ESPCHK(0x12aa3b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b40 @ 0x12aa3b40 (136 bytes, 55 insns) */
void f_12aa3b40(void) {
  FTRACE(0x12aa3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3b41 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3b44 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa3b45 push esi */
  push32((uint32_t)(ESI));
  /* 12aa3b46 push edi */
  push32((uint32_t)(EDI));
  /* 12aa3b47 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12aa3b4e:;
  /* 12aa3b4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa3b51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa3b54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3b57 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aa3b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3b5c je 0x12aa3bbe */
  if (C.zf) goto L_12aa3bbe;
  /* 12aa3b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3b63 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa3b65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3b68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3b71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3b74 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12aa3b77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3b79 je 0x12aa3bbc */
  if (C.zf) goto L_12aa3bbc;
L_12aa3b7b:;
  /* 12aa3b7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3b7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3b83 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3b84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3b87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3b89 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12aa3b8c push edx */
  push32((uint32_t)(EDX));
  /* 12aa3b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3b90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3b93 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3b94 push 0x12ac9760 */
  push32((uint32_t)(0x12ac9760u));
  /* 12aa3b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ba1 call 0x12aa1af0 */
  push32(0x12aa3ba6u); f_12aa1af0();
  /* 12aa3ba6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3ba9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3bac jne 0x12aa3baf */
  if (!C.zf) goto L_12aa3baf;
  /* 12aa3bae int3  */
  x86_unimpl("int3 @ 0x12aa3bae");
L_12aa3baf:;
  /* 12aa3baf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3bb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3bb3 jne 0x12aa3b7b */
  if (!C.zf) goto L_12aa3b7b;
  /* 12aa3bb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa3bbc:;
  /* 12aa3bbc jmp 0x12aa3b4e */
  goto L_12aa3b4e;
L_12aa3bbe:;
  /* 12aa3bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3bc1 pop edi */
  EDI = (pop32());
  /* 12aa3bc2 pop esi */
  ESI = (pop32());
  /* 12aa3bc3 pop ebx */
  EBX = (pop32());
  /* 12aa3bc4 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3bc6 pop ebp */
  EBP = (pop32());
  /* 12aa3bc7 ret  */
  ESPCHK(0x12aa3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x12aa3bd0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12aa3bd0(void) {
  FTRACE(0x12aa3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3bd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa3bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa3bd7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa3bd8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa3bd9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa3be0 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa3be5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3bea jne 0x12aa3bf6 */
  if (!C.zf) goto L_12aa3bf6;
  /* 12aa3bec mov eax, 1 */
  EAX = (0x1u);
  /* 12aa3bf1 jmp 0x12aa3f28 */
  goto L_12aa3f28;
L_12aa3bf6:;
  /* 12aa3bf6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3bf8 call 0x12aa6430 */
  push32(0x12aa3bfdu); f_12aa6430();
  /* 12aa3bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3c00 call 0x12aa6c10 */
  push32(0x12aa3c05u); f_12aa6c10();
  /* 12aa3c05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa3c08 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3c0c je 0x12aa3d19 */
  if (C.zf) goto L_12aa3d19;
  /* 12aa3c12 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3c16 je 0x12aa3d19 */
  if (C.zf) goto L_12aa3d19;
  /* 12aa3c1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa3c1f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12aa3c22 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa3c25 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3c28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aa3c2b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3c2f ja 0x12aa3ce2 */
  if ((!C.cf&&!C.zf)) goto L_12aa3ce2;
  /* 12aa3c35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa3c38 jmp dword ptr [eax*4 + 0x12aa3f2f] */
  switch (EAX) {
    case 0: goto L_12aa3cba;
    case 1: goto L_12aa3c92;
    case 2: goto L_12aa3c6a;
    case 3: goto L_12aa3c3f;
    default: x86_unimpl("switch@0x12aa3c38 out of table"); return;
  }
L_12aa3c3f:;
  /* 12aa3c3f push 0x12ac98b4 */
  push32((uint32_t)(0x12ac98b4u));
  /* 12aa3c44 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c51 call 0x12aa1af0 */
  push32(0x12aa3c56u); f_12aa1af0();
  /* 12aa3c56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3c59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3c5c jne 0x12aa3c5f */
  if (!C.zf) goto L_12aa3c5f;
  /* 12aa3c5e int3  */
  x86_unimpl("int3 @ 0x12aa3c5e");
L_12aa3c5f:;
  /* 12aa3c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3c61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3c63 jne 0x12aa3c3f */
  if (!C.zf) goto L_12aa3c3f;
  /* 12aa3c65 jmp 0x12aa3d08 */
  goto L_12aa3d08;
L_12aa3c6a:;
  /* 12aa3c6a push 0x12ac9890 */
  push32((uint32_t)(0x12ac9890u));
  /* 12aa3c6f push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c7c call 0x12aa1af0 */
  push32(0x12aa3c81u); f_12aa1af0();
  /* 12aa3c81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3c87 jne 0x12aa3c8a */
  if (!C.zf) goto L_12aa3c8a;
  /* 12aa3c89 int3  */
  x86_unimpl("int3 @ 0x12aa3c89");
L_12aa3c8a:;
  /* 12aa3c8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3c8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3c8e jne 0x12aa3c6a */
  if (!C.zf) goto L_12aa3c6a;
  /* 12aa3c90 jmp 0x12aa3d08 */
  goto L_12aa3d08;
L_12aa3c92:;
  /* 12aa3c92 push 0x12ac986c */
  push32((uint32_t)(0x12ac986cu));
  /* 12aa3c97 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ca4 call 0x12aa1af0 */
  push32(0x12aa3ca9u); f_12aa1af0();
  /* 12aa3ca9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3caf jne 0x12aa3cb2 */
  if (!C.zf) goto L_12aa3cb2;
  /* 12aa3cb1 int3  */
  x86_unimpl("int3 @ 0x12aa3cb1");
L_12aa3cb2:;
  /* 12aa3cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3cb6 jne 0x12aa3c92 */
  if (!C.zf) goto L_12aa3c92;
  /* 12aa3cb8 jmp 0x12aa3d08 */
  goto L_12aa3d08;
L_12aa3cba:;
  /* 12aa3cba push 0x12ac9848 */
  push32((uint32_t)(0x12ac9848u));
  /* 12aa3cbf push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ccc call 0x12aa1af0 */
  push32(0x12aa3cd1u); f_12aa1af0();
  /* 12aa3cd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3cd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3cd7 jne 0x12aa3cda */
  if (!C.zf) goto L_12aa3cda;
  /* 12aa3cd9 int3  */
  x86_unimpl("int3 @ 0x12aa3cd9");
L_12aa3cda:;
  /* 12aa3cda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3cde jne 0x12aa3cba */
  if (!C.zf) goto L_12aa3cba;
  /* 12aa3ce0 jmp 0x12aa3d08 */
  goto L_12aa3d08;
L_12aa3ce2:;
  /* 12aa3ce2 push 0x12ac981c */
  push32((uint32_t)(0x12ac981cu));
  /* 12aa3ce7 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa3cec push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cee push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3cf4 call 0x12aa1af0 */
  push32(0x12aa3cf9u); f_12aa1af0();
  /* 12aa3cf9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3cfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3cff jne 0x12aa3d02 */
  if (!C.zf) goto L_12aa3d02;
  /* 12aa3d01 int3  */
  x86_unimpl("int3 @ 0x12aa3d01");
L_12aa3d02:;
  /* 12aa3d02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3d04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3d06 jne 0x12aa3ce2 */
  if (!C.zf) goto L_12aa3ce2;
L_12aa3d08:;
  /* 12aa3d08 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3d0a call 0x12aa64d0 */
  push32(0x12aa3d0fu); f_12aa64d0();
  /* 12aa3d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3d14 jmp 0x12aa3f28 */
  goto L_12aa3f28;
L_12aa3d19:;
  /* 12aa3d19 mov eax, dword ptr [0x12ace4d4] */
  EAX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa3d1e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa3d21 jmp 0x12aa3d2b */
  goto L_12aa3d2b;
L_12aa3d23:;
  /* 12aa3d23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa3d28 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa3d2b:;
  /* 12aa3d2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3d2f je 0x12aa3f1b */
  if (C.zf) goto L_12aa3f1b;
  /* 12aa3d35 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12aa3d3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d3f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa3d42 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3d48 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3d4b je 0x12aa3d70 */
  if (C.zf) goto L_12aa3d70;
  /* 12aa3d4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d50 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3d54 je 0x12aa3d70 */
  if (C.zf) goto L_12aa3d70;
  /* 12aa3d56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d59 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa3d5c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3d62 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3d65 je 0x12aa3d70 */
  if (C.zf) goto L_12aa3d70;
  /* 12aa3d67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d6a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3d6e jne 0x12aa3d88 */
  if (!C.zf) goto L_12aa3d88;
L_12aa3d70:;
  /* 12aa3d70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d73 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa3d76 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3d7c mov edx, dword ptr [ecx*4 + 0x12acca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca94)));
  /* 12aa3d83 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aa3d86 jmp 0x12aa3d8f */
  goto L_12aa3d8f;
L_12aa3d88:;
  /* 12aa3d88 mov dword ptr [ebp - 0x14], 0x12ac9814 */
  w32((uint32_t)(EBP + -0x14), (0x12ac9814u));
L_12aa3d8f:;
  /* 12aa3d8f push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa3d91 mov al, byte ptr [0x12acca90] */
  AL = (r8((uint32_t)(0x12acca90)));
  /* 12aa3d96 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3d9a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3d9d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3d9e call 0x12aa3b40 */
  push32(0x12aa3da3u); f_12aa3b40();
  /* 12aa3da3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3da8 jne 0x12aa3de4 */
  if (!C.zf) goto L_12aa3de4;
L_12aa3daa:;
  /* 12aa3daa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3dad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3db0 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3db1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3db4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12aa3db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3db8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa3dbb push edx */
  push32((uint32_t)(EDX));
  /* 12aa3dbc push 0x12ac96f0 */
  push32((uint32_t)(0x12ac96f0u));
  /* 12aa3dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3dc9 call 0x12aa1af0 */
  push32(0x12aa3dceu); f_12aa1af0();
  /* 12aa3dce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3dd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3dd4 jne 0x12aa3dd7 */
  if (!C.zf) goto L_12aa3dd7;
  /* 12aa3dd6 int3  */
  x86_unimpl("int3 @ 0x12aa3dd6");
L_12aa3dd7:;
  /* 12aa3dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3ddb jne 0x12aa3daa */
  if (!C.zf) goto L_12aa3daa;
  /* 12aa3ddd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12aa3de4:;
  /* 12aa3de4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12aa3de6 mov cl, byte ptr [0x12acca90] */
  CL = (r8((uint32_t)(0x12acca90)));
  /* 12aa3dec push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3ded mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3df0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa3df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3df6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12aa3dfa push edx */
  push32((uint32_t)(EDX));
  /* 12aa3dfb call 0x12aa3b40 */
  push32(0x12aa3e00u); f_12aa3b40();
  /* 12aa3e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3e05 jne 0x12aa3e41 */
  if (!C.zf) goto L_12aa3e41;
L_12aa3e07:;
  /* 12aa3e07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e0a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e0d push eax */
  push32((uint32_t)(EAX));
  /* 12aa3e0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e11 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aa3e14 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3e15 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa3e18 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3e19 push 0x12ac96c4 */
  push32((uint32_t)(0x12ac96c4u));
  /* 12aa3e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e26 call 0x12aa1af0 */
  push32(0x12aa3e2bu); f_12aa1af0();
  /* 12aa3e2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3e31 jne 0x12aa3e34 */
  if (!C.zf) goto L_12aa3e34;
  /* 12aa3e33 int3  */
  x86_unimpl("int3 @ 0x12aa3e33");
L_12aa3e34:;
  /* 12aa3e34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa3e36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa3e38 jne 0x12aa3e07 */
  if (!C.zf) goto L_12aa3e07;
  /* 12aa3e3a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12aa3e41:;
  /* 12aa3e41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e44 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3e48 jne 0x12aa3e9a */
  if (!C.zf) goto L_12aa3e9a;
  /* 12aa3e4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa3e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3e51 mov dl, byte ptr [0x12acca91] */
  DL = (r8((uint32_t)(0x12acca91)));
  /* 12aa3e57 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3e58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e5b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e5e push eax */
  push32((uint32_t)(EAX));
  /* 12aa3e5f call 0x12aa3b40 */
  push32(0x12aa3e64u); f_12aa3b40();
  /* 12aa3e64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3e69 jne 0x12aa3e9a */
  if (!C.zf) goto L_12aa3e9a;
L_12aa3e6b:;
  /* 12aa3e6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3e6e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e71 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3e72 push 0x12ac97e8 */
  push32((uint32_t)(0x12ac97e8u));
  /* 12aa3e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3e7f call 0x12aa1af0 */
  push32(0x12aa3e84u); f_12aa1af0();
  /* 12aa3e84 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3e87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3e8a jne 0x12aa3e8d */
  if (!C.zf) goto L_12aa3e8d;
  /* 12aa3e8c int3  */
  x86_unimpl("int3 @ 0x12aa3e8c");
L_12aa3e8d:;
  /* 12aa3e8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3e8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3e91 jne 0x12aa3e6b */
  if (!C.zf) goto L_12aa3e6b;
  /* 12aa3e93 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12aa3e9a:;
  /* 12aa3e9a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3e9e jne 0x12aa3f16 */
  if (!C.zf) goto L_12aa3f16;
  /* 12aa3ea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3ea3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ea7 je 0x12aa3edc */
  if (C.zf) goto L_12aa3edc;
L_12aa3ea9:;
  /* 12aa3ea9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3eac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12aa3eaf push edx */
  push32((uint32_t)(EDX));
  /* 12aa3eb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3eb3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa3eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3eb7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa3eba push edx */
  push32((uint32_t)(EDX));
  /* 12aa3ebb push 0x12ac97c8 */
  push32((uint32_t)(0x12ac97c8u));
  /* 12aa3ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ec8 call 0x12aa1af0 */
  push32(0x12aa3ecdu); f_12aa1af0();
  /* 12aa3ecd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3ed0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3ed3 jne 0x12aa3ed6 */
  if (!C.zf) goto L_12aa3ed6;
  /* 12aa3ed5 int3  */
  x86_unimpl("int3 @ 0x12aa3ed5");
L_12aa3ed6:;
  /* 12aa3ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3eda jne 0x12aa3ea9 */
  if (!C.zf) goto L_12aa3ea9;
L_12aa3edc:;
  /* 12aa3edc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3edf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa3ee2 push edx */
  push32((uint32_t)(EDX));
  /* 12aa3ee3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa3ee6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3ee9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3eea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa3eed push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3eee push 0x12ac979c */
  push32((uint32_t)(0x12ac979cu));
  /* 12aa3ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa3efb call 0x12aa1af0 */
  push32(0x12aa3f00u); f_12aa1af0();
  /* 12aa3f00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3f03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3f06 jne 0x12aa3f09 */
  if (!C.zf) goto L_12aa3f09;
  /* 12aa3f08 int3  */
  x86_unimpl("int3 @ 0x12aa3f08");
L_12aa3f09:;
  /* 12aa3f09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3f0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa3f0d jne 0x12aa3edc */
  if (!C.zf) goto L_12aa3edc;
  /* 12aa3f0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa3f16:;
  /* 12aa3f16 jmp 0x12aa3d23 */
  goto L_12aa3d23;
L_12aa3f1b:;
  /* 12aa3f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3f1d call 0x12aa64d0 */
  push32(0x12aa3f22u); f_12aa64d0();
  /* 12aa3f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa3f28:;
  /* 12aa3f28 pop edi */
  EDI = (pop32());
  /* 12aa3f29 pop esi */
  ESI = (pop32());
  /* 12aa3f2a pop ebx */
  EBX = (pop32());
  /* 12aa3f2b mov esp, ebp */
  ESP = (EBP);
  /* 12aa3f2d pop ebp */
  EBP = (pop32());
  /* 12aa3f2e ret  */
  ESPCHK(0x12aa3bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x12aa3f40 (34 bytes, 13 insns) */
void f_12aa3f40(void) {
  FTRACE(0x12aa3f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3f41 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3f44 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa3f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa3f4c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3f50 je 0x12aa3f5b */
  if (C.zf) goto L_12aa3f5b;
  /* 12aa3f52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3f55 mov dword ptr [0x12acca84], ecx */
  w32((uint32_t)(0x12acca84), (ECX));
L_12aa3f5b:;
  /* 12aa3f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3f5e mov esp, ebp */
  ESP = (EBP);
  /* 12aa3f60 pop ebp */
  EBP = (pop32());
  /* 12aa3f61 ret  */
  ESPCHK(0x12aa3f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x12aa3f70 (103 bytes, 38 insns) */
void f_12aa3f70(void) {
  FTRACE(0x12aa3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3f71 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3f74 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa3f79 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa3f7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3f7e jne 0x12aa3f82 */
  if (!C.zf) goto L_12aa3f82;
  /* 12aa3f80 jmp 0x12aa3fd3 */
  goto L_12aa3fd3;
L_12aa3f82:;
  /* 12aa3f82 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3f84 call 0x12aa6430 */
  push32(0x12aa3f89u); f_12aa6430();
  /* 12aa3f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3f8c mov ecx, dword ptr [0x12ace4d4] */
  ECX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa3f92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa3f95 jmp 0x12aa3f9f */
  goto L_12aa3f9f;
L_12aa3f97:;
  /* 12aa3f97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3f9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa3f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa3f9f:;
  /* 12aa3f9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3fa3 je 0x12aa3fc9 */
  if (C.zf) goto L_12aa3fc9;
  /* 12aa3fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3fa8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa3fab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa3fb1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3fb4 jne 0x12aa3fc7 */
  if (!C.zf) goto L_12aa3fc7;
  /* 12aa3fb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa3fba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa3fbd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa3fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3fc1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12aa3fc4u);
  /* 12aa3fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa3fc7:;
  /* 12aa3fc7 jmp 0x12aa3f97 */
  goto L_12aa3f97;
L_12aa3fc9:;
  /* 12aa3fc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa3fcb call 0x12aa64d0 */
  push32(0x12aa3fd0u); f_12aa64d0();
  /* 12aa3fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa3fd3:;
  /* 12aa3fd3 mov esp, ebp */
  ESP = (EBP);
  /* 12aa3fd5 pop ebp */
  EBP = (pop32());
  /* 12aa3fd6 ret  */
  ESPCHK(0x12aa3f70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12aa3fe0 (75 bytes, 28 insns) */
void f_12aa3fe0(void) {
  FTRACE(0x12aa3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa3fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa3fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa3fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3fe4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa3fe8 je 0x12aa401d */
  if (C.zf) goto L_12aa401d;
  /* 12aa3fea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa3fed push eax */
  push32((uint32_t)(EAX));
  /* 12aa3fee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa3ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa3ff2 call dword ptr [0x12ad02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02c0))), 0x12aa3ff8u);
  /* 12aa3ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa3ffa jne 0x12aa401d */
  if (!C.zf) goto L_12aa401d;
  /* 12aa3ffc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4000 je 0x12aa4014 */
  if (C.zf) goto L_12aa4014;
  /* 12aa4002 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4005 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4009 push eax */
  push32((uint32_t)(EAX));
  /* 12aa400a call dword ptr [0x12ad02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02bc))), 0x12aa4010u);
  /* 12aa4010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4012 jne 0x12aa401d */
  if (!C.zf) goto L_12aa401d;
L_12aa4014:;
  /* 12aa4014 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa401b jmp 0x12aa4024 */
  goto L_12aa4024;
L_12aa401d:;
  /* 12aa401d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa4024:;
  /* 12aa4024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4027 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4029 pop ebp */
  EBP = (pop32());
  /* 12aa402a ret  */
  ESPCHK(0x12aa3fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x12aa4030 (134 bytes, 50 insns) */
void f_12aa4030(void) {
  FTRACE(0x12aa4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4030 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4031 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4033 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4034 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4038 jne 0x12aa403e */
  if (!C.zf) goto L_12aa403e;
  /* 12aa403a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa403c jmp 0x12aa40b2 */
  goto L_12aa40b2;
L_12aa403e:;
  /* 12aa403e push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa4040 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12aa4042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4045 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4048 push eax */
  push32((uint32_t)(EAX));
  /* 12aa4049 call 0x12aa3fe0 */
  push32(0x12aa404eu); f_12aa3fe0();
  /* 12aa404e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4053 jne 0x12aa4059 */
  if (!C.zf) goto L_12aa4059;
  /* 12aa4055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4057 jmp 0x12aa40b2 */
  goto L_12aa40b2;
L_12aa4059:;
  /* 12aa4059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa405c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa405f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4060 call 0x12aa6d30 */
  push32(0x12aa4065u); f_12aa6d30();
  /* 12aa4065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4068 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa406b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa406f je 0x12aa4086 */
  if (C.zf) goto L_12aa4086;
  /* 12aa4071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4074 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4077 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa407b push eax */
  push32((uint32_t)(EAX));
  /* 12aa407c call 0x12aa6d90 */
  push32(0x12aa4081u); f_12aa6d90();
  /* 12aa4081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4084 jmp 0x12aa40b2 */
  goto L_12aa40b2;
L_12aa4086:;
  /* 12aa4086 mov ecx, dword ptr [0x12ace488] */
  ECX = (r32((uint32_t)(0x12ace488)));
  /* 12aa408c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4092 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4094 je 0x12aa409d */
  if (C.zf) goto L_12aa409d;
  /* 12aa4096 mov eax, 1 */
  EAX = (0x1u);
  /* 12aa409b jmp 0x12aa40b2 */
  goto L_12aa40b2;
L_12aa409d:;
  /* 12aa409d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa40a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa40a3 push edx */
  push32((uint32_t)(EDX));
  /* 12aa40a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa40a6 mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa40ab push eax */
  push32((uint32_t)(EAX));
  /* 12aa40ac call dword ptr [0x12ad02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02c4))), 0x12aa40b2u);
L_12aa40b2:;
  /* 12aa40b2 mov esp, ebp */
  ESP = (EBP);
  /* 12aa40b4 pop ebp */
  EBP = (pop32());
  /* 12aa40b5 ret  */
  ESPCHK(0x12aa4030u, _esp0);
  ESP += 4; return;
}

/* FUN_100040c0 @ 0x12aa40c0 (227 bytes, 80 insns) */
void f_12aa40c0(void) {
  FTRACE(0x12aa40c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa40c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa40c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa40c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa40c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa40c7 push eax */
  push32((uint32_t)(EAX));
  /* 12aa40c8 call 0x12aa4030 */
  push32(0x12aa40cdu); f_12aa4030();
  /* 12aa40cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa40d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa40d2 jne 0x12aa40db */
  if (!C.zf) goto L_12aa40db;
  /* 12aa40d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa40d6 jmp 0x12aa419f */
  goto L_12aa419f;
L_12aa40db:;
  /* 12aa40db push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa40dd call 0x12aa6430 */
  push32(0x12aa40e2u); f_12aa6430();
  /* 12aa40e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa40e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa40e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa40eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa40ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa40f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa40f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa40f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa40fc je 0x12aa4120 */
  if (C.zf) goto L_12aa4120;
  /* 12aa40fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4101 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4105 je 0x12aa4120 */
  if (C.zf) goto L_12aa4120;
  /* 12aa4107 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa410a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa410d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4112 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4115 je 0x12aa4120 */
  if (C.zf) goto L_12aa4120;
  /* 12aa4117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa411a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa411e jne 0x12aa4193 */
  if (!C.zf) goto L_12aa4193;
L_12aa4120:;
  /* 12aa4120 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa4122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4125 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4129 push eax */
  push32((uint32_t)(EAX));
  /* 12aa412a call 0x12aa3fe0 */
  push32(0x12aa412fu); f_12aa3fe0();
  /* 12aa412f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4134 je 0x12aa4193 */
  if (C.zf) goto L_12aa4193;
  /* 12aa4136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4139 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa413c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa413f jne 0x12aa4193 */
  if (!C.zf) goto L_12aa4193;
  /* 12aa4141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4144 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12aa4147 cmp ecx, dword ptr [0x12acca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12acca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa414d jg 0x12aa4193 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aa4193;
  /* 12aa414f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4153 je 0x12aa4160 */
  if (C.zf) goto L_12aa4160;
  /* 12aa4155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa415b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12aa415e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa4160:;
  /* 12aa4160 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4164 je 0x12aa4171 */
  if (C.zf) goto L_12aa4171;
  /* 12aa4166 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa416c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa416f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa4171:;
  /* 12aa4171 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4175 je 0x12aa4182 */
  if (C.zf) goto L_12aa4182;
  /* 12aa4177 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa417a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa417d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa4180 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa4182:;
  /* 12aa4182 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa4184 call 0x12aa64d0 */
  push32(0x12aa4189u); f_12aa64d0();
  /* 12aa4189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa418c mov eax, 1 */
  EAX = (0x1u);
  /* 12aa4191 jmp 0x12aa419f */
  goto L_12aa419f;
L_12aa4193:;
  /* 12aa4193 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa4195 call 0x12aa64d0 */
  push32(0x12aa419au); f_12aa64d0();
  /* 12aa419a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa419d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa419f:;
  /* 12aa419f mov esp, ebp */
  ESP = (EBP);
  /* 12aa41a1 pop ebp */
  EBP = (pop32());
  /* 12aa41a2 ret  */
  ESPCHK(0x12aa40c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x12aa41b0 (28 bytes, 11 insns) */
void f_12aa41b0(void) {
  FTRACE(0x12aa41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa41b1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa41b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa41b4 mov eax, dword ptr [0x12acfe38] */
  EAX = (r32((uint32_t)(0x12acfe38)));
  /* 12aa41b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa41bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa41bf mov dword ptr [0x12acfe38], ecx */
  w32((uint32_t)(0x12acfe38), (ECX));
  /* 12aa41c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa41c8 mov esp, ebp */
  ESP = (EBP);
  /* 12aa41ca pop ebp */
  EBP = (pop32());
  /* 12aa41cb ret  */
  ESPCHK(0x12aa41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x12aa41d0 (362 bytes, 116 insns) */
void f_12aa41d0(void) {
  FTRACE(0x12aa41d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa41d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa41d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa41d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa41d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa41d7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa41d8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa41d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa41dd jne 0x12aa420a */
  if (!C.zf) goto L_12aa420a;
L_12aa41df:;
  /* 12aa41df push 0x12ac98fc */
  push32((uint32_t)(0x12ac98fcu));
  /* 12aa41e4 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa41e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa41eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa41ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa41ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa41f1 call 0x12aa1af0 */
  push32(0x12aa41f6u); f_12aa1af0();
  /* 12aa41f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa41f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa41fc jne 0x12aa41ff */
  if (!C.zf) goto L_12aa41ff;
  /* 12aa41fe int3  */
  x86_unimpl("int3 @ 0x12aa41fe");
L_12aa41ff:;
  /* 12aa41ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4203 jne 0x12aa41df */
  if (!C.zf) goto L_12aa41df;
  /* 12aa4205 jmp 0x12aa4333 */
  goto L_12aa4333;
L_12aa420a:;
  /* 12aa420a push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa420c call 0x12aa6430 */
  push32(0x12aa4211u); f_12aa6430();
  /* 12aa4211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4214 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4217 mov edx, dword ptr [0x12ace4d4] */
  EDX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa421d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa421f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa4226 jmp 0x12aa4231 */
  goto L_12aa4231;
L_12aa4228:;
  /* 12aa4228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa422b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa422e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa4231:;
  /* 12aa4231 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4235 jge 0x12aa4255 */
  if ((C.sf==C.of)) goto L_12aa4255;
  /* 12aa4237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa423a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa423d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12aa4245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4248 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa424b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12aa4253 jmp 0x12aa4228 */
  goto L_12aa4228;
L_12aa4255:;
  /* 12aa4255 mov edx, dword ptr [0x12ace4d4] */
  EDX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa425b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12aa425e jmp 0x12aa4268 */
  goto L_12aa4268;
L_12aa4260:;
  /* 12aa4260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4263 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4265 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aa4268:;
  /* 12aa4268 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa426c je 0x12aa4311 */
  if (C.zf) goto L_12aa4311;
  /* 12aa4272 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4275 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa4278 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa427d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa427f jl 0x12aa42e7 */
  if ((C.sf!=C.of)) goto L_12aa42e7;
  /* 12aa4281 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4284 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa4287 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa428d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4290 jge 0x12aa42e7 */
  if ((C.sf==C.of)) goto L_12aa42e7;
  /* 12aa4292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4295 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa4298 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa429e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa42a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12aa42a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa42a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa42ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa42ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa42b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa42b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12aa42bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa42be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa42c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa42c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa42c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12aa42cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa42d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa42d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa42d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa42d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa42de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa42e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12aa42e5 jmp 0x12aa430c */
  goto L_12aa430c;
L_12aa42e7:;
  /* 12aa42e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa42ea push edx */
  push32((uint32_t)(EDX));
  /* 12aa42eb push 0x12ac98d8 */
  push32((uint32_t)(0x12ac98d8u));
  /* 12aa42f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa42f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa42f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa42f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa42f8 call 0x12aa1af0 */
  push32(0x12aa42fdu); f_12aa1af0();
  /* 12aa42fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4300 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4303 jne 0x12aa4306 */
  if (!C.zf) goto L_12aa4306;
  /* 12aa4305 int3  */
  x86_unimpl("int3 @ 0x12aa4305");
L_12aa4306:;
  /* 12aa4306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa430a jne 0x12aa42e7 */
  if (!C.zf) goto L_12aa42e7;
L_12aa430c:;
  /* 12aa430c jmp 0x12aa4260 */
  goto L_12aa4260;
L_12aa4311:;
  /* 12aa4311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4314 mov edx, dword ptr [0x12ace4dc] */
  EDX = (r32((uint32_t)(0x12ace4dc)));
  /* 12aa431a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12aa431d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4320 mov ecx, dword ptr [0x12ace4d0] */
  ECX = (r32((uint32_t)(0x12ace4d0)));
  /* 12aa4326 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12aa4329 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa432b call 0x12aa64d0 */
  push32(0x12aa4330u); f_12aa64d0();
  /* 12aa4330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa4333:;
  /* 12aa4333 pop edi */
  EDI = (pop32());
  /* 12aa4334 pop esi */
  ESI = (pop32());
  /* 12aa4335 pop ebx */
  EBX = (pop32());
  /* 12aa4336 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4338 pop ebp */
  EBP = (pop32());
  /* 12aa4339 ret  */
  ESPCHK(0x12aa41d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x12aa4340 (291 bytes, 95 insns) */
void f_12aa4340(void) {
  FTRACE(0x12aa4340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4340 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4341 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4346 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa4347 push esi */
  push32((uint32_t)(ESI));
  /* 12aa4348 push edi */
  push32((uint32_t)(EDI));
  /* 12aa4349 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa4350 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4354 je 0x12aa4362 */
  if (C.zf) goto L_12aa4362;
  /* 12aa4356 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa435a je 0x12aa4362 */
  if (C.zf) goto L_12aa4362;
  /* 12aa435c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4360 jne 0x12aa4390 */
  if (!C.zf) goto L_12aa4390;
L_12aa4362:;
  /* 12aa4362 push 0x12ac9924 */
  push32((uint32_t)(0x12ac9924u));
  /* 12aa4367 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa436c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa436e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4370 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4372 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4374 call 0x12aa1af0 */
  push32(0x12aa4379u); f_12aa1af0();
  /* 12aa4379 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa437c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa437f jne 0x12aa4382 */
  if (!C.zf) goto L_12aa4382;
  /* 12aa4381 int3  */
  x86_unimpl("int3 @ 0x12aa4381");
L_12aa4382:;
  /* 12aa4382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4386 jne 0x12aa4362 */
  if (!C.zf) goto L_12aa4362;
  /* 12aa4388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa438b jmp 0x12aa445c */
  goto L_12aa445c;
L_12aa4390:;
  /* 12aa4390 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa4397 jmp 0x12aa43a2 */
  goto L_12aa43a2;
L_12aa4399:;
  /* 12aa4399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa439c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa439f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa43a2:;
  /* 12aa43a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa43a6 jge 0x12aa442c */
  if ((C.sf==C.of)) goto L_12aa442c;
  /* 12aa43ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa43b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa43b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12aa43bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa43c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa43c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12aa43ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa43d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa43d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12aa43da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa43de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa43e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12aa43e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa43ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa43f3 jne 0x12aa4402 */
  if (!C.zf) goto L_12aa4402;
  /* 12aa43f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa43f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa43fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4400 je 0x12aa4427 */
  if (C.zf) goto L_12aa4427;
L_12aa4402:;
  /* 12aa4402 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4406 je 0x12aa4427 */
  if (C.zf) goto L_12aa4427;
  /* 12aa4408 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa440c jne 0x12aa4420 */
  if (!C.zf) goto L_12aa4420;
  /* 12aa440e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4412 jne 0x12aa4427 */
  if (!C.zf) goto L_12aa4427;
  /* 12aa4414 mov eax, dword ptr [0x12acca84] */
  EAX = (r32((uint32_t)(0x12acca84)));
  /* 12aa4419 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa441c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa441e je 0x12aa4427 */
  if (C.zf) goto L_12aa4427;
L_12aa4420:;
  /* 12aa4420 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12aa4427:;
  /* 12aa4427 jmp 0x12aa4399 */
  goto L_12aa4399;
L_12aa442c:;
  /* 12aa442c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa442f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4432 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12aa4435 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa443b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12aa443e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4441 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4444 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12aa4447 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa444a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa444d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12aa4450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4453 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa4459 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12aa445c:;
  /* 12aa445c pop edi */
  EDI = (pop32());
  /* 12aa445d pop esi */
  ESI = (pop32());
  /* 12aa445e pop ebx */
  EBX = (pop32());
  /* 12aa445f mov esp, ebp */
  ESP = (EBP);
  /* 12aa4461 pop ebp */
  EBP = (pop32());
  /* 12aa4462 ret  */
  ESPCHK(0x12aa4340u, _esp0);
  ESP += 4; return;
}

/* FUN_10004470 @ 0x12aa4470 (697 bytes, 253 insns) */
void f_12aa4470(void) {
  FTRACE(0x12aa4470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4470 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4471 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4476 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa4477 push esi */
  push32((uint32_t)(ESI));
  /* 12aa4478 push edi */
  push32((uint32_t)(EDI));
  /* 12aa4479 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa4480 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa4482 call 0x12aa6430 */
  push32(0x12aa4487u); f_12aa6430();
  /* 12aa4487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa448a:;
  /* 12aa448a push 0x12ac9a1c */
  push32((uint32_t)(0x12ac9a1cu));
  /* 12aa448f push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa4494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4496 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4498 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa449a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa449c call 0x12aa1af0 */
  push32(0x12aa44a1u); f_12aa1af0();
  /* 12aa44a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa44a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa44a7 jne 0x12aa44aa */
  if (!C.zf) goto L_12aa44aa;
  /* 12aa44a9 int3  */
  x86_unimpl("int3 @ 0x12aa44a9");
L_12aa44aa:;
  /* 12aa44aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa44ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa44ae jne 0x12aa448a */
  if (!C.zf) goto L_12aa448a;
  /* 12aa44b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa44b4 je 0x12aa44be */
  if (C.zf) goto L_12aa44be;
  /* 12aa44b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa44b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa44bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa44be:;
  /* 12aa44be mov eax, dword ptr [0x12ace4d4] */
  EAX = (r32((uint32_t)(0x12ace4d4)));
  /* 12aa44c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa44c6 jmp 0x12aa44d0 */
  goto L_12aa44d0;
L_12aa44c8:;
  /* 12aa44c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa44cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa44cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa44d0:;
  /* 12aa44d0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa44d4 je 0x12aa46f2 */
  if (C.zf) goto L_12aa46f2;
  /* 12aa44da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa44dd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa44e0 je 0x12aa46f2 */
  if (C.zf) goto L_12aa46f2;
  /* 12aa44e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa44e9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa44ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa44f2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa44f5 je 0x12aa4524 */
  if (C.zf) goto L_12aa4524;
  /* 12aa44f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa44fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12aa44fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4503 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4505 je 0x12aa4524 */
  if (C.zf) goto L_12aa4524;
  /* 12aa4507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa450a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa450d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4512 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4515 jne 0x12aa4529 */
  if (!C.zf) goto L_12aa4529;
  /* 12aa4517 mov ecx, dword ptr [0x12acca84] */
  ECX = (r32((uint32_t)(0x12acca84)));
  /* 12aa451d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4520 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4522 jne 0x12aa4529 */
  if (!C.zf) goto L_12aa4529;
L_12aa4524:;
  /* 12aa4524 jmp 0x12aa46ed */
  goto L_12aa46ed;
L_12aa4529:;
  /* 12aa4529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa452c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4530 je 0x12aa45a2 */
  if (C.zf) goto L_12aa45a2;
  /* 12aa4532 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4534 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa4536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4539 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12aa453c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa453d call 0x12aa3fe0 */
  push32(0x12aa4542u); f_12aa3fe0();
  /* 12aa4542 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4547 jne 0x12aa4573 */
  if (!C.zf) goto L_12aa4573;
L_12aa4549:;
  /* 12aa4549 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa454c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa454f push eax */
  push32((uint32_t)(EAX));
  /* 12aa4550 push 0x12ac9a08 */
  push32((uint32_t)(0x12ac9a08u));
  /* 12aa4555 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4559 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa455b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa455d call 0x12aa1af0 */
  push32(0x12aa4562u); f_12aa1af0();
  /* 12aa4562 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4565 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4568 jne 0x12aa456b */
  if (!C.zf) goto L_12aa456b;
  /* 12aa456a int3  */
  x86_unimpl("int3 @ 0x12aa456a");
L_12aa456b:;
  /* 12aa456b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa456d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa456f jne 0x12aa4549 */
  if (!C.zf) goto L_12aa4549;
  /* 12aa4571 jmp 0x12aa45a2 */
  goto L_12aa45a2;
L_12aa4573:;
  /* 12aa4573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4576 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa4579 push eax */
  push32((uint32_t)(EAX));
  /* 12aa457a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa457d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa4580 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4581 push 0x12ac99fc */
  push32((uint32_t)(0x12ac99fcu));
  /* 12aa4586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4588 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa458a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa458c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa458e call 0x12aa1af0 */
  push32(0x12aa4593u); f_12aa1af0();
  /* 12aa4593 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4596 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4599 jne 0x12aa459c */
  if (!C.zf) goto L_12aa459c;
  /* 12aa459b int3  */
  x86_unimpl("int3 @ 0x12aa459b");
L_12aa459c:;
  /* 12aa459c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa459e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa45a0 jne 0x12aa4573 */
  if (!C.zf) goto L_12aa4573;
L_12aa45a2:;
  /* 12aa45a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa45a5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12aa45a8 push edx */
  push32((uint32_t)(EDX));
  /* 12aa45a9 push 0x12ac99f4 */
  push32((uint32_t)(0x12ac99f4u));
  /* 12aa45ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa45b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa45b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa45b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa45b6 call 0x12aa1af0 */
  push32(0x12aa45bbu); f_12aa1af0();
  /* 12aa45bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa45be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa45c1 jne 0x12aa45c4 */
  if (!C.zf) goto L_12aa45c4;
  /* 12aa45c3 int3  */
  x86_unimpl("int3 @ 0x12aa45c3");
L_12aa45c4:;
  /* 12aa45c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa45c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa45c8 jne 0x12aa45a2 */
  if (!C.zf) goto L_12aa45a2;
  /* 12aa45ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa45cd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa45d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa45d6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa45d9 jne 0x12aa464c */
  if (!C.zf) goto L_12aa464c;
L_12aa45db:;
  /* 12aa45db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa45de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa45e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa45e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa45e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa45e8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12aa45eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa45f0 push eax */
  push32((uint32_t)(EAX));
  /* 12aa45f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa45f4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa45f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa45f8 push 0x12ac99c0 */
  push32((uint32_t)(0x12ac99c0u));
  /* 12aa45fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa45ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4601 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4605 call 0x12aa1af0 */
  push32(0x12aa460au); f_12aa1af0();
  /* 12aa460a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa460d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4610 jne 0x12aa4613 */
  if (!C.zf) goto L_12aa4613;
  /* 12aa4612 int3  */
  x86_unimpl("int3 @ 0x12aa4612");
L_12aa4613:;
  /* 12aa4613 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4615 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa4617 jne 0x12aa45db */
  if (!C.zf) goto L_12aa45db;
  /* 12aa4619 cmp dword ptr [0x12acfe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4620 je 0x12aa463b */
  if (C.zf) goto L_12aa463b;
  /* 12aa4622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4625 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa4628 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa462c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa462f push edx */
  push32((uint32_t)(EDX));
  /* 12aa4630 call dword ptr [0x12acfe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12acfe38))), 0x12aa4636u);
  /* 12aa4636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4639 jmp 0x12aa4647 */
  goto L_12aa4647;
L_12aa463b:;
  /* 12aa463b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa463e push eax */
  push32((uint32_t)(EAX));
  /* 12aa463f call 0x12aa4730 */
  push32(0x12aa4644u); f_12aa4730();
  /* 12aa4644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa4647:;
  /* 12aa4647 jmp 0x12aa46ed */
  goto L_12aa46ed;
L_12aa464c:;
  /* 12aa464c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa464f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4653 jne 0x12aa4692 */
  if (!C.zf) goto L_12aa4692;
L_12aa4655:;
  /* 12aa4655 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4658 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa465b push eax */
  push32((uint32_t)(EAX));
  /* 12aa465c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa465f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4662 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4663 push 0x12ac9998 */
  push32((uint32_t)(0x12ac9998u));
  /* 12aa4668 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa466a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa466c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa466e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4670 call 0x12aa1af0 */
  push32(0x12aa4675u); f_12aa1af0();
  /* 12aa4675 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4678 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa467b jne 0x12aa467e */
  if (!C.zf) goto L_12aa467e;
  /* 12aa467d int3  */
  x86_unimpl("int3 @ 0x12aa467d");
L_12aa467e:;
  /* 12aa467e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa4682 jne 0x12aa4655 */
  if (!C.zf) goto L_12aa4655;
  /* 12aa4684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4687 push eax */
  push32((uint32_t)(EAX));
  /* 12aa4688 call 0x12aa4730 */
  push32(0x12aa468du); f_12aa4730();
  /* 12aa468d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4690 jmp 0x12aa46ed */
  goto L_12aa46ed;
L_12aa4692:;
  /* 12aa4692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4695 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12aa4698 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa469e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa46a1 jne 0x12aa46ed */
  if (!C.zf) goto L_12aa46ed;
L_12aa46a3:;
  /* 12aa46a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa46a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12aa46a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa46aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa46ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12aa46b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12aa46b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa46b8 push eax */
  push32((uint32_t)(EAX));
  /* 12aa46b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa46bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa46bf push ecx */
  push32((uint32_t)(ECX));
  /* 12aa46c0 push 0x12ac9964 */
  push32((uint32_t)(0x12ac9964u));
  /* 12aa46c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa46c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa46c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa46cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa46cd call 0x12aa1af0 */
  push32(0x12aa46d2u); f_12aa1af0();
  /* 12aa46d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa46d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa46d8 jne 0x12aa46db */
  if (!C.zf) goto L_12aa46db;
  /* 12aa46da int3  */
  x86_unimpl("int3 @ 0x12aa46da");
L_12aa46db:;
  /* 12aa46db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa46dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa46df jne 0x12aa46a3 */
  if (!C.zf) goto L_12aa46a3;
  /* 12aa46e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa46e4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa46e5 call 0x12aa4730 */
  push32(0x12aa46eau); f_12aa4730();
  /* 12aa46ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa46ed:;
  /* 12aa46ed jmp 0x12aa44c8 */
  goto L_12aa44c8;
L_12aa46f2:;
  /* 12aa46f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa46f4 call 0x12aa64d0 */
  push32(0x12aa46f9u); f_12aa64d0();
  /* 12aa46f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa46fc:;
  /* 12aa46fc push 0x12ac994c */
  push32((uint32_t)(0x12ac994cu));
  /* 12aa4701 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa4706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4708 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa470a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa470c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa470e call 0x12aa1af0 */
  push32(0x12aa4713u); f_12aa1af0();
  /* 12aa4713 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4716 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4719 jne 0x12aa471c */
  if (!C.zf) goto L_12aa471c;
  /* 12aa471b int3  */
  x86_unimpl("int3 @ 0x12aa471b");
L_12aa471c:;
  /* 12aa471c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa471e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4720 jne 0x12aa46fc */
  if (!C.zf) goto L_12aa46fc;
  /* 12aa4722 pop edi */
  EDI = (pop32());
  /* 12aa4723 pop esi */
  ESI = (pop32());
  /* 12aa4724 pop ebx */
  EBX = (pop32());
  /* 12aa4725 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4727 pop ebp */
  EBP = (pop32());
  /* 12aa4728 ret  */
  ESPCHK(0x12aa4470u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x12aa4730 (276 bytes, 89 insns) */
void f_12aa4730(void) {
  FTRACE(0x12aa4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4730 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4731 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4733 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4736 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa4737 push esi */
  push32((uint32_t)(ESI));
  /* 12aa4738 push edi */
  push32((uint32_t)(EDI));
  /* 12aa4739 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12aa4740 jmp 0x12aa474b */
  goto L_12aa474b;
L_12aa4742:;
  /* 12aa4742 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa4745 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4748 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12aa474b:;
  /* 12aa474b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa474e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4752 jge 0x12aa475f */
  if ((C.sf==C.of)) goto L_12aa475f;
  /* 12aa4754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4757 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12aa475a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12aa475d jmp 0x12aa4766 */
  goto L_12aa4766;
L_12aa475f:;
  /* 12aa475f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12aa4766:;
  /* 12aa4766 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa4769 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa476c jge 0x12aa480c */
  if ((C.sf==C.of)) goto L_12aa480c;
  /* 12aa4772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4775 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4778 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12aa477b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12aa477e cmp dword ptr [0x12accea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12accea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4785 jle 0x12aa47a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12aa47a3;
  /* 12aa4787 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12aa478c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa478f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4795 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4796 call 0x12aa8a40 */
  push32(0x12aa479bu); f_12aa8a40();
  /* 12aa479b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa479e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12aa47a1 jmp 0x12aa47c0 */
  goto L_12aa47c0;
L_12aa47a3:;
  /* 12aa47a3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa47a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa47ac mov eax, dword ptr [0x12accc98] */
  EAX = (r32((uint32_t)(0x12accc98)));
  /* 12aa47b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa47b3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12aa47b7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa47bd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12aa47c0:;
  /* 12aa47c0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa47c4 je 0x12aa47d4 */
  if (C.zf) goto L_12aa47d4;
  /* 12aa47c6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa47c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa47cf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12aa47d2 jmp 0x12aa47db */
  goto L_12aa47db;
L_12aa47d4:;
  /* 12aa47d4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12aa47db:;
  /* 12aa47db mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa47de mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12aa47e1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12aa47e5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12aa47e8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa47ee push edx */
  push32((uint32_t)(EDX));
  /* 12aa47ef push 0x12ac9a40 */
  push32((uint32_t)(0x12ac9a40u));
  /* 12aa47f4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa47f7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa47fa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12aa47fe push ecx */
  push32((uint32_t)(ECX));
  /* 12aa47ff call 0x12aa8940 */
  push32(0x12aa4804u); f_12aa8940();
  /* 12aa4804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4807 jmp 0x12aa4742 */
  goto L_12aa4742;
L_12aa480c:;
  /* 12aa480c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12aa480f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12aa4814:;
  /* 12aa4814 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12aa4817 push eax */
  push32((uint32_t)(EAX));
  /* 12aa4818 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12aa481b push ecx */
  push32((uint32_t)(ECX));
  /* 12aa481c push 0x12ac9a30 */
  push32((uint32_t)(0x12ac9a30u));
  /* 12aa4821 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4823 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4825 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4827 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4829 call 0x12aa1af0 */
  push32(0x12aa482eu); f_12aa1af0();
  /* 12aa482e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4831 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4834 jne 0x12aa4837 */
  if (!C.zf) goto L_12aa4837;
  /* 12aa4836 int3  */
  x86_unimpl("int3 @ 0x12aa4836");
L_12aa4837:;
  /* 12aa4837 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4839 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa483b jne 0x12aa4814 */
  if (!C.zf) goto L_12aa4814;
  /* 12aa483d pop edi */
  EDI = (pop32());
  /* 12aa483e pop esi */
  ESI = (pop32());
  /* 12aa483f pop ebx */
  EBX = (pop32());
  /* 12aa4840 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4842 pop ebp */
  EBP = (pop32());
  /* 12aa4843 ret  */
  ESPCHK(0x12aa4730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x12aa4850 (116 bytes, 46 insns) */
void f_12aa4850(void) {
  FTRACE(0x12aa4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4850 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4851 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4853 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4856 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa4857 push esi */
  push32((uint32_t)(ESI));
  /* 12aa4858 push edi */
  push32((uint32_t)(EDI));
  /* 12aa4859 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12aa485c push eax */
  push32((uint32_t)(EAX));
  /* 12aa485d call 0x12aa41d0 */
  push32(0x12aa4862u); f_12aa41d0();
  /* 12aa4862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4865 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4869 jne 0x12aa4884 */
  if (!C.zf) goto L_12aa4884;
  /* 12aa486b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa486f jne 0x12aa4884 */
  if (!C.zf) goto L_12aa4884;
  /* 12aa4871 mov ecx, dword ptr [0x12acca84] */
  ECX = (r32((uint32_t)(0x12acca84)));
  /* 12aa4877 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa487a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa487c je 0x12aa48bb */
  if (C.zf) goto L_12aa48bb;
  /* 12aa487e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4882 je 0x12aa48bb */
  if (C.zf) goto L_12aa48bb;
L_12aa4884:;
  /* 12aa4884 push 0x12ac9a48 */
  push32((uint32_t)(0x12ac9a48u));
  /* 12aa4889 push 0x12ac9414 */
  push32((uint32_t)(0x12ac9414u));
  /* 12aa488e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4890 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4892 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4896 call 0x12aa1af0 */
  push32(0x12aa489bu); f_12aa1af0();
  /* 12aa489b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa489e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa48a1 jne 0x12aa48a4 */
  if (!C.zf) goto L_12aa48a4;
  /* 12aa48a3 int3  */
  x86_unimpl("int3 @ 0x12aa48a3");
L_12aa48a4:;
  /* 12aa48a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa48a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa48a8 jne 0x12aa4884 */
  if (!C.zf) goto L_12aa4884;
  /* 12aa48aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa48ac call 0x12aa4470 */
  push32(0x12aa48b1u); f_12aa4470();
  /* 12aa48b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa48b4 mov eax, 1 */
  EAX = (0x1u);
  /* 12aa48b9 jmp 0x12aa48bd */
  goto L_12aa48bd;
L_12aa48bb:;
  /* 12aa48bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa48bd:;
  /* 12aa48bd pop edi */
  EDI = (pop32());
  /* 12aa48be pop esi */
  ESI = (pop32());
  /* 12aa48bf pop ebx */
  EBX = (pop32());
  /* 12aa48c0 mov esp, ebp */
  ESP = (EBP);
  /* 12aa48c2 pop ebp */
  EBP = (pop32());
  /* 12aa48c3 ret  */
  ESPCHK(0x12aa4850u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x12aa48d0 (197 bytes, 79 insns) */
void f_12aa48d0(void) {
  FTRACE(0x12aa48d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa48d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa48d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa48d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa48d4 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa48d5 push esi */
  push32((uint32_t)(ESI));
  /* 12aa48d6 push edi */
  push32((uint32_t)(EDI));
  /* 12aa48d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa48db jne 0x12aa48e2 */
  if (!C.zf) goto L_12aa48e2;
  /* 12aa48dd jmp 0x12aa498e */
  goto L_12aa498e;
L_12aa48e2:;
  /* 12aa48e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa48e9 jmp 0x12aa48f4 */
  goto L_12aa48f4;
L_12aa48eb:;
  /* 12aa48eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa48ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa48f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa48f4:;
  /* 12aa48f4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa48f8 jge 0x12aa493e */
  if ((C.sf==C.of)) goto L_12aa493e;
L_12aa48fa:;
  /* 12aa48fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa48fd mov edx, dword ptr [ecx*4 + 0x12acca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12acca94)));
  /* 12aa4904 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa490b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12aa490f push edx */
  push32((uint32_t)(EDX));
  /* 12aa4910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4913 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4916 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12aa491a push edx */
  push32((uint32_t)(EDX));
  /* 12aa491b push 0x12ac9aa4 */
  push32((uint32_t)(0x12ac9aa4u));
  /* 12aa4920 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4922 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4924 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4926 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4928 call 0x12aa1af0 */
  push32(0x12aa492du); f_12aa1af0();
  /* 12aa492d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4930 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4933 jne 0x12aa4936 */
  if (!C.zf) goto L_12aa4936;
  /* 12aa4935 int3  */
  x86_unimpl("int3 @ 0x12aa4935");
L_12aa4936:;
  /* 12aa4936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa493a jne 0x12aa48fa */
  if (!C.zf) goto L_12aa48fa;
  /* 12aa493c jmp 0x12aa48eb */
  goto L_12aa48eb;
L_12aa493e:;
  /* 12aa493e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4941 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12aa4944 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4945 push 0x12ac9a80 */
  push32((uint32_t)(0x12ac9a80u));
  /* 12aa494a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa494c push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa494e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4950 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4952 call 0x12aa1af0 */
  push32(0x12aa4957u); f_12aa1af0();
  /* 12aa4957 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa495a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa495d jne 0x12aa4960 */
  if (!C.zf) goto L_12aa4960;
  /* 12aa495f int3  */
  x86_unimpl("int3 @ 0x12aa495f");
L_12aa4960:;
  /* 12aa4960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4964 jne 0x12aa493e */
  if (!C.zf) goto L_12aa493e;
L_12aa4966:;
  /* 12aa4966 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4969 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12aa496c push edx */
  push32((uint32_t)(EDX));
  /* 12aa496d push 0x12ac9a60 */
  push32((uint32_t)(0x12ac9a60u));
  /* 12aa4972 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4976 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4978 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa497a call 0x12aa1af0 */
  push32(0x12aa497fu); f_12aa1af0();
  /* 12aa497f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4982 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4985 jne 0x12aa4988 */
  if (!C.zf) goto L_12aa4988;
  /* 12aa4987 int3  */
  x86_unimpl("int3 @ 0x12aa4987");
L_12aa4988:;
  /* 12aa4988 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa498a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa498c jne 0x12aa4966 */
  if (!C.zf) goto L_12aa4966;
L_12aa498e:;
  /* 12aa498e pop edi */
  EDI = (pop32());
  /* 12aa498f pop esi */
  ESI = (pop32());
  /* 12aa4990 pop ebx */
  EBX = (pop32());
  /* 12aa4991 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4993 pop ebp */
  EBP = (pop32());
  /* 12aa4994 ret  */
  ESPCHK(0x12aa48d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x12aa49a0 (329 bytes, 102 insns) */
void f_12aa49a0(void) {
  FTRACE(0x12aa49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa49a1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa49a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa49a6 cmp dword ptr [0x12acffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa49ad jne 0x12aa49b4 */
  if (!C.zf) goto L_12aa49b4;
  /* 12aa49af call 0x12aa92e0 */
  push32(0x12aa49b4u); f_12aa92e0();
L_12aa49b4:;
  /* 12aa49b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa49bb mov eax, dword ptr [0x12ace470] */
  EAX = (r32((uint32_t)(0x12ace470)));
  /* 12aa49c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa49c3:;
  /* 12aa49c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa49c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa49c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa49cb je 0x12aa49f9 */
  if (C.zf) goto L_12aa49f9;
  /* 12aa49cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa49d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa49d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa49d6 je 0x12aa49e1 */
  if (C.zf) goto L_12aa49e1;
  /* 12aa49d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa49db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa49de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa49e1:;
  /* 12aa49e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa49e4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa49e5 call 0x12aa5860 */
  push32(0x12aa49eau); f_12aa5860();
  /* 12aa49ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa49ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa49f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12aa49f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa49f7 jmp 0x12aa49c3 */
  goto L_12aa49c3;
L_12aa49f9:;
  /* 12aa49f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12aa49fb push 0x12ac9ac4 */
  push32((uint32_t)(0x12ac9ac4u));
  /* 12aa4a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa4a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4a05 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12aa4a0c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4a0d call 0x12aa2a30 */
  push32(0x12aa4a12u); f_12aa2a30();
  /* 12aa4a12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4a15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa4a18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4a1b mov dword ptr [0x12ace4a4], edx */
  w32((uint32_t)(0x12ace4a4), (EDX));
  /* 12aa4a21 cmp dword ptr [0x12ace4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4a28 jne 0x12aa4a34 */
  if (!C.zf) goto L_12aa4a34;
  /* 12aa4a2a push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa4a2c call 0x12aa19a0 */
  push32(0x12aa4a31u); f_12aa19a0();
  /* 12aa4a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa4a34:;
  /* 12aa4a34 mov eax, dword ptr [0x12ace470] */
  EAX = (r32((uint32_t)(0x12ace470)));
  /* 12aa4a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa4a3c jmp 0x12aa4a47 */
  goto L_12aa4a47;
L_12aa4a3e:;
  /* 12aa4a3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4a41 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4a44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa4a47:;
  /* 12aa4a47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4a4a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4a4f je 0x12aa4ab7 */
  if (C.zf) goto L_12aa4ab7;
  /* 12aa4a51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4a54 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4a55 call 0x12aa5860 */
  push32(0x12aa4a5au); f_12aa5860();
  /* 12aa4a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4a5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4a60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa4a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4a66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4a69 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4a6c je 0x12aa4ab5 */
  if (C.zf) goto L_12aa4ab5;
  /* 12aa4a6e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12aa4a70 push 0x12ac9ac4 */
  push32((uint32_t)(0x12ac9ac4u));
  /* 12aa4a75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa4a77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4a7a push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4a7b call 0x12aa2a30 */
  push32(0x12aa4a80u); f_12aa2a30();
  /* 12aa4a80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4a83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4a86 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa4a88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4a8b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4a8e jne 0x12aa4a9a */
  if (!C.zf) goto L_12aa4a9a;
  /* 12aa4a90 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa4a92 call 0x12aa19a0 */
  push32(0x12aa4a97u); f_12aa19a0();
  /* 12aa4a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa4a9a:;
  /* 12aa4a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4a9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4aa1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa4aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa4aa4 call 0x12aa59e0 */
  push32(0x12aa4aa9u); f_12aa59e0();
  /* 12aa4aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4aac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4aaf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4ab2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12aa4ab5:;
  /* 12aa4ab5 jmp 0x12aa4a3e */
  goto L_12aa4a3e;
L_12aa4ab7:;
  /* 12aa4ab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa4ab9 mov edx, dword ptr [0x12ace470] */
  EDX = (r32((uint32_t)(0x12ace470)));
  /* 12aa4abf push edx */
  push32((uint32_t)(EDX));
  /* 12aa4ac0 call 0x12aa34c0 */
  push32(0x12aa4ac5u); f_12aa34c0();
  /* 12aa4ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4ac8 mov dword ptr [0x12ace470], 0 */
  w32((uint32_t)(0x12ace470), (0x0u));
  /* 12aa4ad2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4ad5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa4adb mov dword ptr [0x12acffa0], 1 */
  w32((uint32_t)(0x12acffa0), (0x1u));
  /* 12aa4ae5 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4ae7 pop ebp */
  EBP = (pop32());
  /* 12aa4ae8 ret  */
  ESPCHK(0x12aa49a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x12aa4af0 (216 bytes, 69 insns) */
void f_12aa4af0(void) {
  FTRACE(0x12aa4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4af1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4af3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4af6 cmp dword ptr [0x12acffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4afd jne 0x12aa4b04 */
  if (!C.zf) goto L_12aa4b04;
  /* 12aa4aff call 0x12aa92e0 */
  push32(0x12aa4b04u); f_12aa92e0();
L_12aa4b04:;
  /* 12aa4b04 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12aa4b09 push 0x12ace4e0 */
  push32((uint32_t)(0x12ace4e0u));
  /* 12aa4b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4b10 call dword ptr [0x12ad027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad027c))), 0x12aa4b16u);
  /* 12aa4b16 mov dword ptr [0x12ace4b4], 0x12ace4e0 */
  w32((uint32_t)(0x12ace4b4), (0x12ace4e0u));
  /* 12aa4b20 mov eax, dword ptr [0x12acffcc] */
  EAX = (r32((uint32_t)(0x12acffcc)));
  /* 12aa4b25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4b28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4b2a jne 0x12aa4b37 */
  if (!C.zf) goto L_12aa4b37;
  /* 12aa4b2c mov edx, dword ptr [0x12ace4b4] */
  EDX = (r32((uint32_t)(0x12ace4b4)));
  /* 12aa4b32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12aa4b35 jmp 0x12aa4b3f */
  goto L_12aa4b3f;
L_12aa4b37:;
  /* 12aa4b37 mov eax, dword ptr [0x12acffcc] */
  EAX = (r32((uint32_t)(0x12acffcc)));
  /* 12aa4b3c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12aa4b3f:;
  /* 12aa4b3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa4b42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa4b45 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12aa4b48 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4b49 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12aa4b4c push eax */
  push32((uint32_t)(EAX));
  /* 12aa4b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa4b51 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4b54 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4b55 call 0x12aa4bd0 */
  push32(0x12aa4b5au); f_12aa4bd0();
  /* 12aa4b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4b5d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12aa4b62 push 0x12ac9ad0 */
  push32((uint32_t)(0x12ac9ad0u));
  /* 12aa4b67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa4b69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4b6f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12aa4b72 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4b73 call 0x12aa2a30 */
  push32(0x12aa4b78u); f_12aa2a30();
  /* 12aa4b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4b7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa4b7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4b82 jne 0x12aa4b8e */
  if (!C.zf) goto L_12aa4b8e;
  /* 12aa4b84 push 8 */
  push32((uint32_t)(0x8u));
  /* 12aa4b86 call 0x12aa19a0 */
  push32(0x12aa4b8bu); f_12aa19a0();
  /* 12aa4b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa4b8e:;
  /* 12aa4b8e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12aa4b91 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4b92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12aa4b95 push eax */
  push32((uint32_t)(EAX));
  /* 12aa4b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4b99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4b9c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12aa4b9f push eax */
  push32((uint32_t)(EAX));
  /* 12aa4ba0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa4ba4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4ba7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa4ba8 call 0x12aa4bd0 */
  push32(0x12aa4badu); f_12aa4bd0();
  /* 12aa4bad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4bb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4bb3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4bb6 mov dword ptr [0x12ace498], eax */
  w32((uint32_t)(0x12ace498), (EAX));
  /* 12aa4bbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa4bbe mov dword ptr [0x12ace49c], ecx */
  w32((uint32_t)(0x12ace49c), (ECX));
  /* 12aa4bc4 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4bc6 pop ebp */
  EBP = (pop32());
  /* 12aa4bc7 ret  */
  ESPCHK(0x12aa4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x12aa4bd0 (1060 bytes, 360 insns) */
void f_12aa4bd0(void) {
  FTRACE(0x12aa4bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa4bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa4bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa4bd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4bd6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4bd9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa4bdf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4be2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12aa4be8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa4beb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa4bee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4bf2 je 0x12aa4c05 */
  if (C.zf) goto L_12aa4c05;
  /* 12aa4bf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4bf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4bfa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aa4bfc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4bff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c02 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12aa4c05:;
  /* 12aa4c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c08 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4c0b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4c0e jne 0x12aa4cdd */
  if (!C.zf) goto L_12aa4cdd;
L_12aa4c14:;
  /* 12aa4c14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa4c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4c23 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4c26 je 0x12aa4ca2 */
  if (C.zf) goto L_12aa4ca2;
  /* 12aa4c28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c2b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4c30 je 0x12aa4ca2 */
  if (C.zf) goto L_12aa4ca2;
  /* 12aa4c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4c37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa4c39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4c3b mov al, byte ptr [edx + 0x12acfd01] */
  AL = (r8((uint32_t)(EDX + 0x12acfd01)));
  /* 12aa4c41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4c46 je 0x12aa4c77 */
  if (C.zf) goto L_12aa4c77;
  /* 12aa4c48 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa4c4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4c53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa4c55 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4c59 je 0x12aa4c77 */
  if (C.zf) goto L_12aa4c77;
  /* 12aa4c5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4c5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa4c63 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12aa4c65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4c68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aa4c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa4c77:;
  /* 12aa4c77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4c7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4c7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4c82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa4c84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4c88 je 0x12aa4c9d */
  if (C.zf) goto L_12aa4c9d;
  /* 12aa4c8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4c90 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa4c92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa4c94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4c97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4c9a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12aa4c9d:;
  /* 12aa4c9d jmp 0x12aa4c14 */
  goto L_12aa4c14;
L_12aa4ca2:;
  /* 12aa4ca2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4ca5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa4ca7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4caa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4cad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12aa4caf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4cb3 je 0x12aa4cc4 */
  if (C.zf) goto L_12aa4cc4;
  /* 12aa4cb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4cb8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12aa4cbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4cbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4cc1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12aa4cc4:;
  /* 12aa4cc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4cc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4cca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4ccd jne 0x12aa4cd8 */
  if (!C.zf) goto L_12aa4cd8;
  /* 12aa4ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4cd2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4cd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12aa4cd8:;
  /* 12aa4cd8 jmp 0x12aa4dac */
  goto L_12aa4dac;
L_12aa4cdd:;
  /* 12aa4cdd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4ce0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4ce5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4ce8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa4cea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4cee je 0x12aa4d03 */
  if (C.zf) goto L_12aa4d03;
  /* 12aa4cf0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4cf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4cf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa4cf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa4cfa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4cfd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4d00 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12aa4d03:;
  /* 12aa4d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4d06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa4d08 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12aa4d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4d0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4d11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa4d14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4d17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4d1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4d1f mov dl, byte ptr [ecx + 0x12acfd01] */
  DL = (r8((uint32_t)(ECX + 0x12acfd01)));
  /* 12aa4d25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4d28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa4d2a je 0x12aa4d5b */
  if (C.zf) goto L_12aa4d5b;
  /* 12aa4d2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4d2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4d31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4d34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4d37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa4d39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4d3d je 0x12aa4d52 */
  if (C.zf) goto L_12aa4d52;
  /* 12aa4d3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4d45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa4d47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa4d49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4d4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4d4f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12aa4d52:;
  /* 12aa4d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4d58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa4d5b:;
  /* 12aa4d5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4d5e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4d64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4d67 je 0x12aa4d87 */
  if (C.zf) goto L_12aa4d87;
  /* 12aa4d69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4d6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4d73 je 0x12aa4d87 */
  if (C.zf) goto L_12aa4d87;
  /* 12aa4d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4d78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4d7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4d81 jne 0x12aa4cdd */
  if (!C.zf) goto L_12aa4cdd;
L_12aa4d87:;
  /* 12aa4d87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa4d8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4d90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa4d92 jne 0x12aa4d9f */
  if (!C.zf) goto L_12aa4d9f;
  /* 12aa4d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4d97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4d9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa4d9d jmp 0x12aa4dac */
  goto L_12aa4dac;
L_12aa4d9f:;
  /* 12aa4d9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4da3 je 0x12aa4dac */
  if (C.zf) goto L_12aa4dac;
  /* 12aa4da5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4da8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12aa4dac:;
  /* 12aa4dac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12aa4db3:;
  /* 12aa4db3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4db6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4dbb je 0x12aa4dde */
  if (C.zf) goto L_12aa4dde;
L_12aa4dbd:;
  /* 12aa4dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4dc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa4dc3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4dc6 je 0x12aa4dd3 */
  if (C.zf) goto L_12aa4dd3;
  /* 12aa4dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4dcb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4dce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4dd1 jne 0x12aa4dde */
  if (!C.zf) goto L_12aa4dde;
L_12aa4dd3:;
  /* 12aa4dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4dd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4dd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa4ddc jmp 0x12aa4dbd */
  goto L_12aa4dbd;
L_12aa4dde:;
  /* 12aa4dde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4de1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4de6 jne 0x12aa4ded */
  if (!C.zf) goto L_12aa4ded;
  /* 12aa4de8 jmp 0x12aa4fcb */
  goto L_12aa4fcb;
L_12aa4ded:;
  /* 12aa4ded cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4df1 je 0x12aa4e04 */
  if (C.zf) goto L_12aa4e04;
  /* 12aa4df3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4df6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4df9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12aa4dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4dfe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4e01 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12aa4e04:;
  /* 12aa4e04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4e07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa4e09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4e0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4e0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12aa4e11:;
  /* 12aa4e11 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12aa4e18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12aa4e1f:;
  /* 12aa4e1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4e22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4e25 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4e28 jne 0x12aa4e3e */
  if (!C.zf) goto L_12aa4e3e;
  /* 12aa4e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4e2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4e30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa4e33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4e39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa4e3c jmp 0x12aa4e1f */
  goto L_12aa4e1f;
L_12aa4e3e:;
  /* 12aa4e3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4e41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4e44 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4e47 jne 0x12aa4e9a */
  if (!C.zf) goto L_12aa4e9a;
  /* 12aa4e49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4e4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4e4e mov ecx, 2 */
  ECX = (0x2u);
  /* 12aa4e53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa4e55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa4e57 jne 0x12aa4e92 */
  if (!C.zf) goto L_12aa4e92;
  /* 12aa4e59 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4e5d je 0x12aa4e7f */
  if (C.zf) goto L_12aa4e7f;
  /* 12aa4e5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4e62 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12aa4e66 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4e69 jne 0x12aa4e76 */
  if (!C.zf) goto L_12aa4e76;
  /* 12aa4e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4e71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa4e74 jmp 0x12aa4e7d */
  goto L_12aa4e7d;
L_12aa4e76:;
  /* 12aa4e76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12aa4e7d:;
  /* 12aa4e7d jmp 0x12aa4e86 */
  goto L_12aa4e86;
L_12aa4e7f:;
  /* 12aa4e7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12aa4e86:;
  /* 12aa4e86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa4e88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4e8c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12aa4e8f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12aa4e92:;
  /* 12aa4e92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4e95 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12aa4e97 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12aa4e9a:;
  /* 12aa4e9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4e9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa4ea0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa4ea3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12aa4ea6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4ea8 je 0x12aa4ece */
  if (C.zf) goto L_12aa4ece;
  /* 12aa4eaa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4eae je 0x12aa4ebf */
  if (C.zf) goto L_12aa4ebf;
  /* 12aa4eb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4eb3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12aa4eb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4eb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4ebc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12aa4ebf:;
  /* 12aa4ebf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4ec2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa4ec4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4ec7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4eca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa4ecc jmp 0x12aa4e9a */
  goto L_12aa4e9a;
L_12aa4ece:;
  /* 12aa4ece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4ed1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12aa4ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa4ed6 je 0x12aa4ef4 */
  if (C.zf) goto L_12aa4ef4;
  /* 12aa4ed8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4edc jne 0x12aa4ef9 */
  if (!C.zf) goto L_12aa4ef9;
  /* 12aa4ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4ee1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa4ee4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4ee7 je 0x12aa4ef4 */
  if (C.zf) goto L_12aa4ef4;
  /* 12aa4ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4eec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12aa4eef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4ef2 jne 0x12aa4ef9 */
  if (!C.zf) goto L_12aa4ef9;
L_12aa4ef4:;
  /* 12aa4ef4 jmp 0x12aa4fa4 */
  goto L_12aa4fa4;
L_12aa4ef9:;
  /* 12aa4ef9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4efd je 0x12aa4f96 */
  if (C.zf) goto L_12aa4f96;
  /* 12aa4f03 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4f07 je 0x12aa4f5d */
  if (C.zf) goto L_12aa4f5d;
  /* 12aa4f09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4f0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa4f10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4f12 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa4f18 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4f1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4f1d je 0x12aa4f48 */
  if (C.zf) goto L_12aa4f48;
  /* 12aa4f1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4f22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f25 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12aa4f27 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12aa4f29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4f2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f2f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12aa4f32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa4f3b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa4f40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12aa4f48:;
  /* 12aa4f48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa4f50 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12aa4f52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f58 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12aa4f5b jmp 0x12aa4f89 */
  goto L_12aa4f89;
L_12aa4f5d:;
  /* 12aa4f5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa4f62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12aa4f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4f66 mov cl, byte ptr [eax + 0x12acfd01] */
  CL = (r8((uint32_t)(EAX + 0x12acfd01)));
  /* 12aa4f6c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa4f6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa4f71 je 0x12aa4f89 */
  if (C.zf) goto L_12aa4f89;
  /* 12aa4f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa4f7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa4f89:;
  /* 12aa4f89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4f94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12aa4f96:;
  /* 12aa4f96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa4f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa4f9f jmp 0x12aa4e11 */
  goto L_12aa4e11;
L_12aa4fa4:;
  /* 12aa4fa4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4fa8 je 0x12aa4fb9 */
  if (C.zf) goto L_12aa4fb9;
  /* 12aa4faa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4fad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12aa4fb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa4fb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4fb6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12aa4fb9:;
  /* 12aa4fb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4fbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa4fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4fc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12aa4fc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa4fc6 jmp 0x12aa4db3 */
  goto L_12aa4db3;
L_12aa4fcb:;
  /* 12aa4fcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa4fcf je 0x12aa4fe3 */
  if (C.zf) goto L_12aa4fe3;
  /* 12aa4fd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4fd4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12aa4fda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa4fdd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4fe0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12aa4fe3:;
  /* 12aa4fe3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4fe6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa4fe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa4feb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa4fee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa4ff0 mov esp, ebp */
  ESP = (EBP);
  /* 12aa4ff2 pop ebp */
  EBP = (pop32());
  /* 12aa4ff3 ret  */
  ESPCHK(0x12aa4bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005000 @ 0x12aa5000 (537 bytes, 173 insns) */
void f_12aa5000(void) {
  FTRACE(0x12aa5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5000 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5001 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5003 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5006 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12aa500d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12aa5014 cmp dword ptr [0x12ace5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa501b jne 0x12aa505a */
  if (!C.zf) goto L_12aa505a;
  /* 12aa501d call dword ptr [0x12ad02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d8))), 0x12aa5023u);
  /* 12aa5023 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aa5026 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa502a je 0x12aa5038 */
  if (C.zf) goto L_12aa5038;
  /* 12aa502c mov dword ptr [0x12ace5e4], 1 */
  w32((uint32_t)(0x12ace5e4), (0x1u));
  /* 12aa5036 jmp 0x12aa505a */
  goto L_12aa505a;
L_12aa5038:;
  /* 12aa5038 call dword ptr [0x12ad02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d4))), 0x12aa503eu);
  /* 12aa503e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa5041 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5045 je 0x12aa5053 */
  if (C.zf) goto L_12aa5053;
  /* 12aa5047 mov dword ptr [0x12ace5e4], 2 */
  w32((uint32_t)(0x12ace5e4), (0x2u));
  /* 12aa5051 jmp 0x12aa505a */
  goto L_12aa505a;
L_12aa5053:;
  /* 12aa5053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5055 jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa505a:;
  /* 12aa505a cmp dword ptr [0x12ace5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5061 jne 0x12aa515e */
  if (!C.zf) goto L_12aa515e;
  /* 12aa5067 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa506b jne 0x12aa5083 */
  if (!C.zf) goto L_12aa5083;
  /* 12aa506d call dword ptr [0x12ad02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d8))), 0x12aa5073u);
  /* 12aa5073 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aa5076 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa507a jne 0x12aa5083 */
  if (!C.zf) goto L_12aa5083;
  /* 12aa507c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa507e jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa5083:;
  /* 12aa5083 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa5086 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aa5089:;
  /* 12aa5089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa508c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa508e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12aa5091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa5093 je 0x12aa50b5 */
  if (C.zf) goto L_12aa50b5;
  /* 12aa5095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5098 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa509b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa509e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa50a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa50a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12aa50a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa50a8 jne 0x12aa50b3 */
  if (!C.zf) goto L_12aa50b3;
  /* 12aa50aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa50ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa50b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aa50b3:;
  /* 12aa50b3 jmp 0x12aa5089 */
  goto L_12aa5089;
L_12aa50b5:;
  /* 12aa50b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa50b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa50bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12aa50bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa50c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa50c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa50ce push edx */
  push32((uint32_t)(EDX));
  /* 12aa50cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa50d2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa50d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa50d7 call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12aa50ddu);
  /* 12aa50dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa50e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa50e4 je 0x12aa5104 */
  if (C.zf) goto L_12aa5104;
  /* 12aa50e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12aa50e8 push 0x12ac9adc */
  push32((uint32_t)(0x12ac9adcu));
  /* 12aa50ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa50ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa50f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa50f3 call 0x12aa2a30 */
  push32(0x12aa50f8u); f_12aa2a30();
  /* 12aa50f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa50fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa50fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5102 jne 0x12aa5115 */
  if (!C.zf) goto L_12aa5115;
L_12aa5104:;
  /* 12aa5104 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa5107 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5108 call dword ptr [0x12ad0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0224))), 0x12aa510eu);
  /* 12aa510e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5110 jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa5115:;
  /* 12aa5115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5119 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa511c push eax */
  push32((uint32_t)(EAX));
  /* 12aa511d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5120 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5124 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5125 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa5128 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5129 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa512b push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa512d call dword ptr [0x12ad02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d0))), 0x12aa5133u);
  /* 12aa5133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa5135 jne 0x12aa514c */
  if (!C.zf) goto L_12aa514c;
  /* 12aa5137 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa5139 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa513c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa513d call 0x12aa34c0 */
  push32(0x12aa5142u); f_12aa34c0();
  /* 12aa5142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5145 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12aa514c:;
  /* 12aa514c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa514f push edx */
  push32((uint32_t)(EDX));
  /* 12aa5150 call dword ptr [0x12ad0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0224))), 0x12aa5156u);
  /* 12aa5156 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5159 jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa515e:;
  /* 12aa515e cmp dword ptr [0x12ace5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ace5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5165 jne 0x12aa5213 */
  if (!C.zf) goto L_12aa5213;
  /* 12aa516b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa516f jne 0x12aa5187 */
  if (!C.zf) goto L_12aa5187;
  /* 12aa5171 call dword ptr [0x12ad02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02d4))), 0x12aa5177u);
  /* 12aa5177 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa517a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa517e jne 0x12aa5187 */
  if (!C.zf) goto L_12aa5187;
  /* 12aa5180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5182 jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa5187:;
  /* 12aa5187 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa518a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aa518d:;
  /* 12aa518d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5190 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa5193 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa5195 je 0x12aa51b5 */
  if (C.zf) goto L_12aa51b5;
  /* 12aa5197 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa519a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa519d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa51a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa51a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12aa51a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa51a8 jne 0x12aa51b3 */
  if (!C.zf) goto L_12aa51b3;
  /* 12aa51aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa51ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa51b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12aa51b3:;
  /* 12aa51b3 jmp 0x12aa518d */
  goto L_12aa518d;
L_12aa51b5:;
  /* 12aa51b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa51b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa51bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa51be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa51c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12aa51c6 push 0x12ac9adc */
  push32((uint32_t)(0x12ac9adcu));
  /* 12aa51cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa51cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa51d0 push edx */
  push32((uint32_t)(EDX));
  /* 12aa51d1 call 0x12aa2a30 */
  push32(0x12aa51d6u); f_12aa2a30();
  /* 12aa51d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa51d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa51dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa51e0 jne 0x12aa51f0 */
  if (!C.zf) goto L_12aa51f0;
  /* 12aa51e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa51e5 push eax */
  push32((uint32_t)(EAX));
  /* 12aa51e6 call dword ptr [0x12ad0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0228))), 0x12aa51ecu);
  /* 12aa51ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa51ee jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa51f0:;
  /* 12aa51f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa51f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa51f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa51f7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa51f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa51fb push eax */
  push32((uint32_t)(EAX));
  /* 12aa51fc call 0x12aa9310 */
  push32(0x12aa5201u); f_12aa9310();
  /* 12aa5201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5204 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5207 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5208 call dword ptr [0x12ad0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0228))), 0x12aa520eu);
  /* 12aa520e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5211 jmp 0x12aa5215 */
  goto L_12aa5215;
L_12aa5213:;
  /* 12aa5213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa5215:;
  /* 12aa5215 mov esp, ebp */
  ESP = (EBP);
  /* 12aa5217 pop ebp */
  EBP = (pop32());
  /* 12aa5218 ret  */
  ESPCHK(0x12aa5000u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x12aa5220 (77 bytes, 25 insns) */
void f_12aa5220(void) {
  FTRACE(0x12aa5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5220 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5221 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5223 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5225 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12aa522a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa522c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5230 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12aa5233 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5234 call dword ptr [0x12ad02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e0))), 0x12aa523au);
  /* 12aa523a mov dword ptr [0x12acfe2c], eax */
  w32((uint32_t)(0x12acfe2c), (EAX));
  /* 12aa523f cmp dword ptr [0x12acfe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12acfe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5246 jne 0x12aa524c */
  if (!C.zf) goto L_12aa524c;
  /* 12aa5248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa524a jmp 0x12aa526b */
  goto L_12aa526b;
L_12aa524c:;
  /* 12aa524c call 0x12aa6cd0 */
  push32(0x12aa5251u); f_12aa6cd0();
  /* 12aa5251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa5253 jne 0x12aa5266 */
  if (!C.zf) goto L_12aa5266;
  /* 12aa5255 mov ecx, dword ptr [0x12acfe2c] */
  ECX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa525b push ecx */
  push32((uint32_t)(ECX));
  /* 12aa525c call dword ptr [0x12ad02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02dc))), 0x12aa5262u);
  /* 12aa5262 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5264 jmp 0x12aa526b */
  goto L_12aa526b;
L_12aa5266:;
  /* 12aa5266 mov eax, 1 */
  EAX = (0x1u);
L_12aa526b:;
  /* 12aa526b pop ebp */
  EBP = (pop32());
  /* 12aa526c ret  */
  ESPCHK(0x12aa5220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x12aa5270 (156 bytes, 48 insns) */
void f_12aa5270(void) {
  FTRACE(0x12aa5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5270 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5271 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5276 mov eax, dword ptr [0x12acfe28] */
  EAX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa527b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa527e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa5285 jmp 0x12aa5290 */
  goto L_12aa5290;
L_12aa5287:;
  /* 12aa5287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa528a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa528d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa5290:;
  /* 12aa5290 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5293 cmp edx, dword ptr [0x12acfe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12acfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5299 jge 0x12aa52e6 */
  if ((C.sf==C.of)) goto L_12aa52e6;
  /* 12aa529b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12aa52a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12aa52a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa52a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12aa52ab push ecx */
  push32((uint32_t)(ECX));
  /* 12aa52ac call dword ptr [0x12ad02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e8))), 0x12aa52b2u);
  /* 12aa52b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12aa52b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa52b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa52bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12aa52bf push eax */
  push32((uint32_t)(EAX));
  /* 12aa52c0 call dword ptr [0x12ad02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e8))), 0x12aa52c6u);
  /* 12aa52c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa52c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12aa52cc push edx */
  push32((uint32_t)(EDX));
  /* 12aa52cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa52cf mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa52d4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa52d5 call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa52dbu);
  /* 12aa52db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa52de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa52e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa52e4 jmp 0x12aa5287 */
  goto L_12aa5287;
L_12aa52e6:;
  /* 12aa52e6 mov edx, dword ptr [0x12acfe28] */
  EDX = (r32((uint32_t)(0x12acfe28)));
  /* 12aa52ec push edx */
  push32((uint32_t)(EDX));
  /* 12aa52ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa52ef mov eax, dword ptr [0x12acfe2c] */
  EAX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa52f4 push eax */
  push32((uint32_t)(EAX));
  /* 12aa52f5 call dword ptr [0x12ad02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02e4))), 0x12aa52fbu);
  /* 12aa52fb mov ecx, dword ptr [0x12acfe2c] */
  ECX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa5301 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5302 call dword ptr [0x12ad02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02dc))), 0x12aa5308u);
  /* 12aa5308 mov esp, ebp */
  ESP = (EBP);
  /* 12aa530a pop ebp */
  EBP = (pop32());
  /* 12aa530b ret  */
  ESPCHK(0x12aa5270u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12aa5310 (73 bytes, 19 insns) */
void f_12aa5310(void) {
  FTRACE(0x12aa5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5310 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5311 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5313 cmp dword ptr [0x12ace478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa531a je 0x12aa532e */
  if (C.zf) goto L_12aa532e;
  /* 12aa531c cmp dword ptr [0x12ace478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5323 jne 0x12aa5357 */
  if (!C.zf) goto L_12aa5357;
  /* 12aa5325 cmp dword ptr [0x12ace47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa532c jne 0x12aa5357 */
  if (!C.zf) goto L_12aa5357;
L_12aa532e:;
  /* 12aa532e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12aa5333 call 0x12aa5360 */
  push32(0x12aa5338u); f_12aa5360();
  /* 12aa5338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa533b cmp dword ptr [0x12ace5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5342 je 0x12aa534a */
  if (C.zf) goto L_12aa534a;
  /* 12aa5344 call dword ptr [0x12ace5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace5e8))), 0x12aa534au);
L_12aa534a:;
  /* 12aa534a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12aa534f call 0x12aa5360 */
  push32(0x12aa5354u); f_12aa5360();
  /* 12aa5354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5357:;
  /* 12aa5357 pop ebp */
  EBP = (pop32());
  /* 12aa5358 ret  */
  ESPCHK(0x12aa5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005360 @ 0x12aa5360 (447 bytes, 131 insns) */
void f_12aa5360(void) {
  FTRACE(0x12aa5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5360 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5361 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5363 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5369 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa536a push esi */
  push32((uint32_t)(ESI));
  /* 12aa536b push edi */
  push32((uint32_t)(EDI));
  /* 12aa536c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12aa5373 jmp 0x12aa537e */
  goto L_12aa537e;
L_12aa5375:;
  /* 12aa5375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5378 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa537b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12aa537e:;
  /* 12aa537e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5382 jae 0x12aa5397 */
  if (!C.cf) goto L_12aa5397;
  /* 12aa5384 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa538a cmp edx, dword ptr [ecx*8 + 0x12accab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12accab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5391 jne 0x12aa5395 */
  if (!C.zf) goto L_12aa5395;
  /* 12aa5393 jmp 0x12aa5397 */
  goto L_12aa5397;
L_12aa5395:;
  /* 12aa5395 jmp 0x12aa5375 */
  goto L_12aa5375;
L_12aa5397:;
  /* 12aa5397 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa539a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa539d cmp ecx, dword ptr [eax*8 + 0x12accab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12accab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53a4 jne 0x12aa5518 */
  if (!C.zf) goto L_12aa5518;
  /* 12aa53aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53b1 je 0x12aa53d4 */
  if (C.zf) goto L_12aa53d4;
  /* 12aa53b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa53b6 mov eax, dword ptr [edx*8 + 0x12accab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12accab4)));
  /* 12aa53bd push eax */
  push32((uint32_t)(EAX));
  /* 12aa53be push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa53c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa53c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa53c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa53c6 call 0x12aa1af0 */
  push32(0x12aa53cbu); f_12aa1af0();
  /* 12aa53cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa53ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53d1 jne 0x12aa53d4 */
  if (!C.zf) goto L_12aa53d4;
  /* 12aa53d3 int3  */
  x86_unimpl("int3 @ 0x12aa53d3");
L_12aa53d4:;
  /* 12aa53d4 cmp dword ptr [0x12ace478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53db je 0x12aa53ef */
  if (C.zf) goto L_12aa53ef;
  /* 12aa53dd cmp dword ptr [0x12ace478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53e4 jne 0x12aa5428 */
  if (!C.zf) goto L_12aa5428;
  /* 12aa53e6 cmp dword ptr [0x12ace47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ace47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa53ed jne 0x12aa5428 */
  if (!C.zf) goto L_12aa5428;
L_12aa53ef:;
  /* 12aa53ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa53f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12aa53f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa53f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa53f8 mov eax, dword ptr [edx*8 + 0x12accab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12accab4)));
  /* 12aa53ff push eax */
  push32((uint32_t)(EAX));
  /* 12aa5400 call 0x12aa5860 */
  push32(0x12aa5405u); f_12aa5860();
  /* 12aa5405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5408 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa540c mov edx, dword ptr [ecx*8 + 0x12accab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12accab4)));
  /* 12aa5413 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5414 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12aa5416 call dword ptr [0x12ad0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0260))), 0x12aa541cu);
  /* 12aa541c push eax */
  push32((uint32_t)(EAX));
  /* 12aa541d call dword ptr [0x12ad0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0264))), 0x12aa5423u);
  /* 12aa5423 jmp 0x12aa5518 */
  goto L_12aa5518;
L_12aa5428:;
  /* 12aa5428 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa542f je 0x12aa5518 */
  if (C.zf) goto L_12aa5518;
  /* 12aa5435 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12aa543a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12aa5440 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5441 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5443 call dword ptr [0x12ad027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad027c))), 0x12aa5449u);
  /* 12aa5449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa544b jne 0x12aa5461 */
  if (!C.zf) goto L_12aa5461;
  /* 12aa544d push 0x12ac9344 */
  push32((uint32_t)(0x12ac9344u));
  /* 12aa5452 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12aa5458 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5459 call 0x12aa59e0 */
  push32(0x12aa545eu); f_12aa59e0();
  /* 12aa545e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5461:;
  /* 12aa5461 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12aa5467 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa546a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa546d push eax */
  push32((uint32_t)(EAX));
  /* 12aa546e call 0x12aa5860 */
  push32(0x12aa5473u); f_12aa5860();
  /* 12aa5473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5476 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5479 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa547c jbe 0x12aa54aa */
  if ((C.cf||C.zf)) goto L_12aa54aa;
  /* 12aa547e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12aa5484 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5485 call 0x12aa5860 */
  push32(0x12aa548au); f_12aa5860();
  /* 12aa548a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa548d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5490 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12aa5494 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5497 push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa5499 push 0x12ac9340 */
  push32((uint32_t)(0x12ac9340u));
  /* 12aa549e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa54a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa54a2 call 0x12aa6250 */
  push32(0x12aa54a7u); f_12aa6250();
  /* 12aa54a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa54aa:;
  /* 12aa54aa push 0x12ac9d98 */
  push32((uint32_t)(0x12ac9d98u));
  /* 12aa54af lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12aa54b5 push edx */
  push32((uint32_t)(EDX));
  /* 12aa54b6 call 0x12aa59e0 */
  push32(0x12aa54bbu); f_12aa59e0();
  /* 12aa54bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa54be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa54c1 push eax */
  push32((uint32_t)(EAX));
  /* 12aa54c2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12aa54c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa54c9 call 0x12aa59f0 */
  push32(0x12aa54ceu); f_12aa59f0();
  /* 12aa54ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa54d1 push 0x12ac92b8 */
  push32((uint32_t)(0x12ac92b8u));
  /* 12aa54d6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12aa54dc push edx */
  push32((uint32_t)(EDX));
  /* 12aa54dd call 0x12aa59f0 */
  push32(0x12aa54e2u); f_12aa59f0();
  /* 12aa54e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa54e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa54e8 mov ecx, dword ptr [eax*8 + 0x12accab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12accab4)));
  /* 12aa54ef push ecx */
  push32((uint32_t)(ECX));
  /* 12aa54f0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12aa54f6 push edx */
  push32((uint32_t)(EDX));
  /* 12aa54f7 call 0x12aa59f0 */
  push32(0x12aa54fcu); f_12aa59f0();
  /* 12aa54fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa54ff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12aa5504 push 0x12ac9d70 */
  push32((uint32_t)(0x12ac9d70u));
  /* 12aa5509 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12aa550f push eax */
  push32((uint32_t)(EAX));
  /* 12aa5510 call 0x12aa6190 */
  push32(0x12aa5515u); f_12aa6190();
  /* 12aa5515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5518:;
  /* 12aa5518 pop edi */
  EDI = (pop32());
  /* 12aa5519 pop esi */
  ESI = (pop32());
  /* 12aa551a pop ebx */
  EBX = (pop32());
  /* 12aa551b mov esp, ebp */
  ESP = (EBP);
  /* 12aa551d pop ebp */
  EBP = (pop32());
  /* 12aa551e ret  */
  ESPCHK(0x12aa5360u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12aa5520 (80 bytes, 27 insns) */
void f_12aa5520(void) {
  FTRACE(0x12aa5520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5520 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5521 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5523 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa552b jmp 0x12aa5536 */
  goto L_12aa5536;
L_12aa552d:;
  /* 12aa552d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5530 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5533 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa5536:;
  /* 12aa5536 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa553a jae 0x12aa554f */
  if (!C.cf) goto L_12aa554f;
  /* 12aa553c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa553f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5542 cmp edx, dword ptr [ecx*8 + 0x12accab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12accab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5549 jne 0x12aa554d */
  if (!C.zf) goto L_12aa554d;
  /* 12aa554b jmp 0x12aa554f */
  goto L_12aa554f;
L_12aa554d:;
  /* 12aa554d jmp 0x12aa552d */
  goto L_12aa552d;
L_12aa554f:;
  /* 12aa554f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5555 cmp ecx, dword ptr [eax*8 + 0x12accab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12accab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa555c jne 0x12aa556a */
  if (!C.zf) goto L_12aa556a;
  /* 12aa555e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5561 mov eax, dword ptr [edx*8 + 0x12accab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12accab4)));
  /* 12aa5568 jmp 0x12aa556c */
  goto L_12aa556c;
L_12aa556a:;
  /* 12aa556a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa556c:;
  /* 12aa556c mov esp, ebp */
  ESP = (EBP);
  /* 12aa556e pop ebp */
  EBP = (pop32());
  /* 12aa556f ret  */
  ESPCHK(0x12aa5520u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12aa5570 (66 bytes, 28 insns) */
void f_12aa5570(void) {
  FTRACE(0x12aa5570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5570 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5571 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5573 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5577 jne 0x12aa5597 */
  if (!C.zf) goto L_12aa5597;
  /* 12aa5579 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa557d jge 0x12aa5597 */
  if ((C.sf==C.of)) goto L_12aa5597;
  /* 12aa557f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5581 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5584 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5585 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5588 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa558c push edx */
  push32((uint32_t)(EDX));
  /* 12aa558d call 0x12aa55c0 */
  push32(0x12aa5592u); f_12aa55c0();
  /* 12aa5592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5595 jmp 0x12aa55ad */
  goto L_12aa55ad;
L_12aa5597:;
  /* 12aa5597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5599 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa559c push eax */
  push32((uint32_t)(EAX));
  /* 12aa559d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa55a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa55a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa55a4 push edx */
  push32((uint32_t)(EDX));
  /* 12aa55a5 call 0x12aa55c0 */
  push32(0x12aa55aau); f_12aa55c0();
  /* 12aa55aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa55ad:;
  /* 12aa55ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa55b0 pop ebp */
  EBP = (pop32());
  /* 12aa55b1 ret  */
  ESPCHK(0x12aa5570u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12aa55c0 (194 bytes, 71 insns) */
void f_12aa55c0(void) {
  FTRACE(0x12aa55c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa55c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa55c1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa55c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa55c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa55c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa55cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa55d0 je 0x12aa55e9 */
  if (C.zf) goto L_12aa55e9;
  /* 12aa55d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa55d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12aa55d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa55db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa55de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa55e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa55e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa55e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12aa55e9:;
  /* 12aa55e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa55ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12aa55ef:;
  /* 12aa55ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa55f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa55f4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa55f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa55fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa55fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa55ff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12aa5602 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aa5605 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5609 jbe 0x12aa5621 */
  if ((C.cf||C.zf)) goto L_12aa5621;
  /* 12aa560b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa560e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5614 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa5616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5619 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa561c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa561f jmp 0x12aa5635 */
  goto L_12aa5635;
L_12aa5621:;
  /* 12aa5621 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5624 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa562a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa562c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa562f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5632 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa5635:;
  /* 12aa5635 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5639 ja 0x12aa55ef */
  if ((!C.cf&&!C.zf)) goto L_12aa55ef;
  /* 12aa563b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa563e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12aa5641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5644 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5647 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa564a:;
  /* 12aa564a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa564d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa564f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12aa5652 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5655 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5658 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa565a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa565c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa565f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12aa5662 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12aa5664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5667 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa566a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa566d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5670 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5673 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa5676 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5679 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa567c jb 0x12aa564a */
  if (C.cf) goto L_12aa564a;
  /* 12aa567e mov esp, ebp */
  ESP = (EBP);
  /* 12aa5680 pop ebp */
  EBP = (pop32());
  /* 12aa5681 ret  */
  ESPCHK(0x12aa55c0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12aa5690 (63 bytes, 24 insns) */
void f_12aa5690(void) {
  FTRACE(0x12aa5690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5690 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5691 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5693 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5694 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5698 jne 0x12aa56a9 */
  if (!C.zf) goto L_12aa56a9;
  /* 12aa569a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa569e jge 0x12aa56a9 */
  if ((C.sf==C.of)) goto L_12aa56a9;
  /* 12aa56a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa56a7 jmp 0x12aa56b0 */
  goto L_12aa56b0;
L_12aa56a9:;
  /* 12aa56a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa56b0:;
  /* 12aa56b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa56b3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa56b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa56b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa56b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa56bb push edx */
  push32((uint32_t)(EDX));
  /* 12aa56bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa56bf push eax */
  push32((uint32_t)(EAX));
  /* 12aa56c0 call 0x12aa55c0 */
  push32(0x12aa56c5u); f_12aa55c0();
  /* 12aa56c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa56c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa56cb mov esp, ebp */
  ESP = (EBP);
  /* 12aa56cd pop ebp */
  EBP = (pop32());
  /* 12aa56ce ret  */
  ESPCHK(0x12aa5690u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12aa56d0 (30 bytes, 14 insns) */
void f_12aa56d0(void) {
  FTRACE(0x12aa56d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa56d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa56d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa56d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa56d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa56d8 push eax */
  push32((uint32_t)(EAX));
  /* 12aa56d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa56dc push ecx */
  push32((uint32_t)(ECX));
  /* 12aa56dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa56e0 push edx */
  push32((uint32_t)(EDX));
  /* 12aa56e1 call 0x12aa55c0 */
  push32(0x12aa56e6u); f_12aa55c0();
  /* 12aa56e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa56e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa56ec pop ebp */
  EBP = (pop32());
  /* 12aa56ed ret  */
  ESPCHK(0x12aa56d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12aa56f0 (72 bytes, 28 insns) */
void f_12aa56f0(void) {
  FTRACE(0x12aa56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa56f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa56f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa56f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa56f8 jne 0x12aa5711 */
  if (!C.zf) goto L_12aa5711;
  /* 12aa56fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa56fe jg 0x12aa5711 */
  if ((!C.zf&&C.sf==C.of)) goto L_12aa5711;
  /* 12aa5700 jl 0x12aa5708 */
  if ((C.sf!=C.of)) goto L_12aa5708;
  /* 12aa5702 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5706 jae 0x12aa5711 */
  if (!C.cf) goto L_12aa5711;
L_12aa5708:;
  /* 12aa5708 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12aa570f jmp 0x12aa5718 */
  goto L_12aa5718;
L_12aa5711:;
  /* 12aa5711 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa5718:;
  /* 12aa5718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa571b push eax */
  push32((uint32_t)(EAX));
  /* 12aa571c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa571f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5720 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5723 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5727 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5728 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa572b push ecx */
  push32((uint32_t)(ECX));
  /* 12aa572c call 0x12aa5740 */
  push32(0x12aa5731u); f_12aa5740();
  /* 12aa5731 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5734 mov esp, ebp */
  ESP = (EBP);
  /* 12aa5736 pop ebp */
  EBP = (pop32());
  /* 12aa5737 ret  */
  ESPCHK(0x12aa56f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12aa5740 (242 bytes, 91 insns) */
void f_12aa5740(void) {
  FTRACE(0x12aa5740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5740 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5741 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa574c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5750 je 0x12aa5774 */
  if (C.zf) goto L_12aa5774;
  /* 12aa5752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5755 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12aa5758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa575b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa575e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa5761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5764 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa5766 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5769 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa576c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa576e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aa5771 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12aa5774:;
  /* 12aa5774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5777 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12aa577a:;
  /* 12aa577a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa577d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa577f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5780 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5781 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5784 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5788 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5789 call 0x12aa96c0 */
  push32(0x12aa578eu); f_12aa96c0();
  /* 12aa578e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5791 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa5794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa5796 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5797 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa579b push eax */
  push32((uint32_t)(EAX));
  /* 12aa579c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa579f push ecx */
  push32((uint32_t)(ECX));
  /* 12aa57a0 call 0x12aa9650 */
  push32(0x12aa57a5u); f_12aa9650();
  /* 12aa57a5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12aa57a8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12aa57ab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa57af jbe 0x12aa57c7 */
  if ((C.cf||C.zf)) goto L_12aa57c7;
  /* 12aa57b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa57b4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa57b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa57bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa57c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12aa57c5 jmp 0x12aa57db */
  goto L_12aa57db;
L_12aa57c7:;
  /* 12aa57c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa57ca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa57cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa57d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa57d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12aa57db:;
  /* 12aa57db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa57df ja 0x12aa577a */
  if ((!C.cf&&!C.zf)) goto L_12aa577a;
  /* 12aa57e1 jb 0x12aa57e9 */
  if (C.cf) goto L_12aa57e9;
  /* 12aa57e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa57e7 ja 0x12aa577a */
  if ((!C.cf&&!C.zf)) goto L_12aa577a;
L_12aa57e9:;
  /* 12aa57e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57ec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12aa57ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa57f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa57f8:;
  /* 12aa57f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa57fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa57fd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12aa5800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5803 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5806 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa5808 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12aa580a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa580d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12aa5810 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12aa5812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5815 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5818 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12aa581b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa581e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5821 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa5824 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5827 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa582a jb 0x12aa57f8 */
  if (C.cf) goto L_12aa57f8;
  /* 12aa582c mov esp, ebp */
  ESP = (EBP);
  /* 12aa582e pop ebp */
  EBP = (pop32());
  /* 12aa582f ret 0x14 */
  ESPCHK(0x12aa5740u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12aa5840 (31 bytes, 15 insns) */
void f_12aa5840(void) {
  FTRACE(0x12aa5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5840 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5841 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5845 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa5848 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5849 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa584c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa584d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5850 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5854 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5855 call 0x12aa5740 */
  push32(0x12aa585au); f_12aa5740();
  /* 12aa585a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa585d pop ebp */
  EBP = (pop32());
  /* 12aa585e ret  */
  ESPCHK(0x12aa5840u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12aa5860 (123 bytes, 44 insns) */
void f_12aa5860(void) {
  FTRACE(0x12aa5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa5864 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa586a je 0x12aa5880 */
  if (C.zf) goto L_12aa5880;
L_12aa586c:;
  /* 12aa586c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12aa586e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12aa586f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa5871 je 0x12aa58b3 */
  if (C.zf) goto L_12aa58b3;
  /* 12aa5873 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa5879 jne 0x12aa586c */
  if (!C.zf) goto L_12aa586c;
  /* 12aa587b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12aa5880:;
  /* 12aa5880 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12aa5882 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12aa5887 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5889 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa588c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa588e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5891 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12aa5896 je 0x12aa5880 */
  if (C.zf) goto L_12aa5880;
  /* 12aa5898 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aa589b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa589d je 0x12aa58d1 */
  if (C.zf) goto L_12aa58d1;
  /* 12aa589f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12aa58a1 je 0x12aa58c7 */
  if (C.zf) goto L_12aa58c7;
  /* 12aa58a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12aa58a8 je 0x12aa58bd */
  if (C.zf) goto L_12aa58bd;
  /* 12aa58aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12aa58af je 0x12aa58b3 */
  if (C.zf) goto L_12aa58b3;
  /* 12aa58b1 jmp 0x12aa5880 */
  goto L_12aa5880;
L_12aa58b3:;
  /* 12aa58b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12aa58b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa58ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa58bc ret  */
  ESPCHK(0x12aa5860u, _esp0);
  ESP += 4; return;
L_12aa58bd:;
  /* 12aa58bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12aa58c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa58c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa58c6 ret  */
  ESPCHK(0x12aa5860u, _esp0);
  ESP += 4; return;
L_12aa58c7:;
  /* 12aa58c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12aa58ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa58ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa58d0 ret  */
  ESPCHK(0x12aa5860u, _esp0);
  ESP += 4; return;
L_12aa58d1:;
  /* 12aa58d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12aa58d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa58d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa58da ret  */
  ESPCHK(0x12aa5860u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x12aa58e0 (249 bytes, 93 insns) */
void f_12aa58e0(void) {
  FTRACE(0x12aa58e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa58e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa58e1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa58e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa58e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa58e7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa58e8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa58e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12aa58ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12aa58ef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12aa58f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12aa58f5:;
  /* 12aa58f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa58f9 jne 0x12aa5919 */
  if (!C.zf) goto L_12aa5919;
  /* 12aa58fb push 0x12ac9dd0 */
  push32((uint32_t)(0x12ac9dd0u));
  /* 12aa5900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5902 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12aa5904 push 0x12ac9dc4 */
  push32((uint32_t)(0x12ac9dc4u));
  /* 12aa5909 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa590b call 0x12aa1af0 */
  push32(0x12aa5910u); f_12aa1af0();
  /* 12aa5910 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5913 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5916 jne 0x12aa5919 */
  if (!C.zf) goto L_12aa5919;
  /* 12aa5918 int3  */
  x86_unimpl("int3 @ 0x12aa5918");
L_12aa5919:;
  /* 12aa5919 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa591b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa591d jne 0x12aa58f5 */
  if (!C.zf) goto L_12aa58f5;
L_12aa591f:;
  /* 12aa591f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5923 jne 0x12aa5943 */
  if (!C.zf) goto L_12aa5943;
  /* 12aa5925 push 0x12ac9db4 */
  push32((uint32_t)(0x12ac9db4u));
  /* 12aa592a push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa592c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12aa592e push 0x12ac9dc4 */
  push32((uint32_t)(0x12ac9dc4u));
  /* 12aa5933 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa5935 call 0x12aa1af0 */
  push32(0x12aa593au); f_12aa1af0();
  /* 12aa593a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa593d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5940 jne 0x12aa5943 */
  if (!C.zf) goto L_12aa5943;
  /* 12aa5942 int3  */
  x86_unimpl("int3 @ 0x12aa5942");
L_12aa5943:;
  /* 12aa5943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa5947 jne 0x12aa591f */
  if (!C.zf) goto L_12aa591f;
  /* 12aa5949 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa594c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12aa5953 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5959 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa595c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa595f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5962 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12aa5964 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5967 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa596a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12aa596d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12aa5970 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5974 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5975 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5978 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5979 call 0x12aa99c0 */
  push32(0x12aa597eu); f_12aa99c0();
  /* 12aa597e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5981 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa5984 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5987 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa598a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa598d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5990 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12aa5993 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5996 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa599a jl 0x12aa59be */
  if ((C.sf!=C.of)) goto L_12aa59be;
  /* 12aa599c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa599f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa59a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12aa59a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa59a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa59ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12aa59af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa59b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa59b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa59b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa59ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12aa59bc jmp 0x12aa59cf */
  goto L_12aa59cf;
L_12aa59be:;
  /* 12aa59be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa59c1 push eax */
  push32((uint32_t)(EAX));
  /* 12aa59c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa59c4 call 0x12aa9740 */
  push32(0x12aa59c9u); f_12aa9740();
  /* 12aa59c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa59cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12aa59cf:;
  /* 12aa59cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa59d2 pop edi */
  EDI = (pop32());
  /* 12aa59d3 pop esi */
  ESI = (pop32());
  /* 12aa59d4 pop ebx */
  EBX = (pop32());
  /* 12aa59d5 mov esp, ebp */
  ESP = (EBP);
  /* 12aa59d7 pop ebp */
  EBP = (pop32());
  /* 12aa59d8 ret  */
  ESPCHK(0x12aa58e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059e0 @ 0x12aa59e0 (7 bytes, 3 insns) */
void f_12aa59e0(void) {
  FTRACE(0x12aa59e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa59e0 push edi */
  push32((uint32_t)(EDI));
  /* 12aa59e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa59e5 jmp 0x12aa5a51 */
  jmp_ind(0x12aa5a51u); return;
}

/* FUN_100059f0 @ 0x12aa59f0 (224 bytes, 84 insns) */
void f_12aa59f0(void) {
  FTRACE(0x12aa59f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa59f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa59f4 push edi */
  push32((uint32_t)(EDI));
  /* 12aa59f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa59fb je 0x12aa5a0c */
  if (C.zf) goto L_12aa5a0c;
L_12aa59fd:;
  /* 12aa59fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12aa59ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12aa5a00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa5a02 je 0x12aa5a3f */
  if (C.zf) goto L_12aa5a3f;
  /* 12aa5a04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa5a0a jne 0x12aa59fd */
  if (!C.zf) goto L_12aa59fd;
L_12aa5a0c:;
  /* 12aa5a0c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12aa5a0e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12aa5a13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5a15 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5a18 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5a1a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5a1d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12aa5a22 je 0x12aa5a0c */
  if (C.zf) goto L_12aa5a0c;
  /* 12aa5a24 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12aa5a27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa5a29 je 0x12aa5a4e */
  if (C.zf) goto L_12aa5a4e;
  /* 12aa5a2b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12aa5a2d je 0x12aa5a49 */
  if (C.zf) goto L_12aa5a49;
  /* 12aa5a2f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12aa5a34 je 0x12aa5a44 */
  if (C.zf) goto L_12aa5a44;
  /* 12aa5a36 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12aa5a3b je 0x12aa5a3f */
  if (C.zf) goto L_12aa5a3f;
  /* 12aa5a3d jmp 0x12aa5a0c */
  goto L_12aa5a0c;
L_12aa5a3f:;
  /* 12aa5a3f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12aa5a42 jmp 0x12aa5a51 */
  goto L_12aa5a51;
L_12aa5a44:;
  /* 12aa5a44 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12aa5a47 jmp 0x12aa5a51 */
  goto L_12aa5a51;
L_12aa5a49:;
  /* 12aa5a49 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12aa5a4c jmp 0x12aa5a51 */
  goto L_12aa5a51;
L_12aa5a4e:;
  /* 12aa5a4e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12aa5a51:;
  /* 12aa5a51 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa5a55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa5a5b je 0x12aa5a76 */
  if (C.zf) goto L_12aa5a76;
L_12aa5a5d:;
  /* 12aa5a5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12aa5a5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12aa5a60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12aa5a62 je 0x12aa5ac8 */
  if (C.zf) goto L_12aa5ac8;
  /* 12aa5a64 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12aa5a66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa5a67 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12aa5a6d jne 0x12aa5a5d */
  if (!C.zf) goto L_12aa5a5d;
  /* 12aa5a6f jmp 0x12aa5a76 */
  goto L_12aa5a76;
L_12aa5a71:;
  /* 12aa5a71 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa5a73 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12aa5a76:;
  /* 12aa5a76 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12aa5a7b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12aa5a7d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5a7f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5a82 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5a84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5a86 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5a89 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12aa5a8e je 0x12aa5a71 */
  if (C.zf) goto L_12aa5a71;
  /* 12aa5a90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12aa5a92 je 0x12aa5ac8 */
  if (C.zf) goto L_12aa5ac8;
  /* 12aa5a94 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12aa5a96 je 0x12aa5abf */
  if (C.zf) goto L_12aa5abf;
  /* 12aa5a98 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12aa5a9e je 0x12aa5ab2 */
  if (C.zf) goto L_12aa5ab2;
  /* 12aa5aa0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12aa5aa6 je 0x12aa5aaa */
  if (C.zf) goto L_12aa5aaa;
  /* 12aa5aa8 jmp 0x12aa5a71 */
  goto L_12aa5a71;
L_12aa5aaa:;
  /* 12aa5aaa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa5aac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa5ab0 pop edi */
  EDI = (pop32());
  /* 12aa5ab1 ret  */
  ESPCHK(0x12aa59f0u, _esp0);
  ESP += 4; return;
L_12aa5ab2:;
  /* 12aa5ab2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12aa5ab5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa5ab9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12aa5abd pop edi */
  EDI = (pop32());
  /* 12aa5abe ret  */
  ESPCHK(0x12aa59f0u, _esp0);
  ESP += 4; return;
L_12aa5abf:;
  /* 12aa5abf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12aa5ac2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa5ac6 pop edi */
  EDI = (pop32());
  /* 12aa5ac7 ret  */
  ESPCHK(0x12aa59f0u, _esp0);
  ESP += 4; return;
L_12aa5ac8:;
  /* 12aa5ac8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12aa5aca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa5ace pop edi */
  EDI = (pop32());
  /* 12aa5acf ret  */
  ESPCHK(0x12aa59f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x12aa5ad0 (243 bytes, 91 insns) */
void f_12aa5ad0(void) {
  FTRACE(0x12aa5ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5ad3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 12aa5ad7 push esi */
  push32((uint32_t)(ESI));
  /* 12aa5ad8 push edi */
  push32((uint32_t)(EDI));
  /* 12aa5ad9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12aa5adc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12aa5adf:;
  /* 12aa5adf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ae3 jne 0x12aa5b03 */
  if (!C.zf) goto L_12aa5b03;
  /* 12aa5ae5 push 0x12ac9dd0 */
  push32((uint32_t)(0x12ac9dd0u));
  /* 12aa5aea push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5aec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12aa5aee push 0x12ac9de0 */
  push32((uint32_t)(0x12ac9de0u));
  /* 12aa5af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa5af5 call 0x12aa1af0 */
  push32(0x12aa5afau); f_12aa1af0();
  /* 12aa5afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5b00 jne 0x12aa5b03 */
  if (!C.zf) goto L_12aa5b03;
  /* 12aa5b02 int3  */
  x86_unimpl("int3 @ 0x12aa5b02");
L_12aa5b03:;
  /* 12aa5b03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa5b05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa5b07 jne 0x12aa5adf */
  if (!C.zf) goto L_12aa5adf;
L_12aa5b09:;
  /* 12aa5b09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5b0d jne 0x12aa5b2d */
  if (!C.zf) goto L_12aa5b2d;
  /* 12aa5b0f push 0x12ac9db4 */
  push32((uint32_t)(0x12ac9db4u));
  /* 12aa5b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5b16 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12aa5b18 push 0x12ac9de0 */
  push32((uint32_t)(0x12ac9de0u));
  /* 12aa5b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa5b1f call 0x12aa1af0 */
  push32(0x12aa5b24u); f_12aa1af0();
  /* 12aa5b24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5b27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5b2a jne 0x12aa5b2d */
  if (!C.zf) goto L_12aa5b2d;
  /* 12aa5b2c int3  */
  x86_unimpl("int3 @ 0x12aa5b2c");
L_12aa5b2d:;
  /* 12aa5b2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa5b2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa5b31 jne 0x12aa5b09 */
  if (!C.zf) goto L_12aa5b09;
  /* 12aa5b33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b36 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12aa5b3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5b43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12aa5b46 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5b4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12aa5b4e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5b54 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12aa5b57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12aa5b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5b5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa5b5e push edx */
  push32((uint32_t)(EDX));
  /* 12aa5b5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b62 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5b63 call 0x12aa99c0 */
  push32(0x12aa5b68u); f_12aa99c0();
  /* 12aa5b68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5b6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12aa5b6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa5b74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5b77 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12aa5b7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b80 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5b84 jl 0x12aa5ba8 */
  if ((C.sf!=C.of)) goto L_12aa5ba8;
  /* 12aa5b86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa5b8b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12aa5b8e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12aa5b90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12aa5b96 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12aa5b99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5b9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa5b9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5ba1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5ba4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12aa5ba6 jmp 0x12aa5bb9 */
  goto L_12aa5bb9;
L_12aa5ba8:;
  /* 12aa5ba8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12aa5bab push edx */
  push32((uint32_t)(EDX));
  /* 12aa5bac push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa5bae call 0x12aa9740 */
  push32(0x12aa5bb3u); f_12aa9740();
  /* 12aa5bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5bb6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12aa5bb9:;
  /* 12aa5bb9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12aa5bbc pop edi */
  EDI = (pop32());
  /* 12aa5bbd pop esi */
  ESI = (pop32());
  /* 12aa5bbe pop ebx */
  EBX = (pop32());
  /* 12aa5bbf mov esp, ebp */
  ESP = (EBP);
  /* 12aa5bc1 pop ebp */
  EBP = (pop32());
  /* 12aa5bc2 ret  */
  ESPCHK(0x12aa5ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x12aa5bd0 (47 bytes, 17 insns) */
void f_12aa5bd0(void) {
  FTRACE(0x12aa5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5bd1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5bd6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12aa5bda jb 0x12aa5bf0 */
  if (C.cf) goto L_12aa5bf0;
L_12aa5bdc:;
  /* 12aa5bdc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5be2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5be7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12aa5be9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5bee jae 0x12aa5bdc */
  if (!C.cf) goto L_12aa5bdc;
L_12aa5bf0:;
  /* 12aa5bf0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5bf2 mov eax, esp */
  EAX = (ESP);
  /* 12aa5bf4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12aa5bf6 mov esp, ecx */
  ESP = (ECX);
  /* 12aa5bf8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa5bfa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa5bfd push eax */
  push32((uint32_t)(EAX));
  /* 12aa5bfe ret  */
  ESPCHK(0x12aa5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c00 @ 0x12aa5c00 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12aa5c00(void) {
  FTRACE(0x12aa5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5c01 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5c03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5c06 push esi */
  push32((uint32_t)(ESI));
  /* 12aa5c07 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c0b je 0x12aa5c13 */
  if (C.zf) goto L_12aa5c13;
  /* 12aa5c0d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c11 jne 0x12aa5c18 */
  if (!C.zf) goto L_12aa5c18;
L_12aa5c13:;
  /* 12aa5c13 jmp 0x12aa5de8 */
  goto L_12aa5de8;
L_12aa5c18:;
  /* 12aa5c18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c1c je 0x12aa5c34 */
  if (C.zf) goto L_12aa5c34;
  /* 12aa5c1e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c22 je 0x12aa5c34 */
  if (C.zf) goto L_12aa5c34;
  /* 12aa5c24 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c28 je 0x12aa5c34 */
  if (C.zf) goto L_12aa5c34;
  /* 12aa5c2a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c2e jne 0x12aa5d11 */
  if (!C.zf) goto L_12aa5d11;
L_12aa5c34:;
  /* 12aa5c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5c36 call 0x12aa6430 */
  push32(0x12aa5c3bu); f_12aa6430();
  /* 12aa5c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5c3e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c42 je 0x12aa5c4a */
  if (C.zf) goto L_12aa5c4a;
  /* 12aa5c44 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c48 jne 0x12aa5c8f */
  if (!C.zf) goto L_12aa5c8f;
L_12aa5c4a:;
  /* 12aa5c4a cmp dword ptr [0x12ace5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c51 jne 0x12aa5c8f */
  if (!C.zf) goto L_12aa5c8f;
  /* 12aa5c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5c55 push 0x12aa5e30 */
  push32((uint32_t)(0x12aa5e30u));
  /* 12aa5c5a call dword ptr [0x12ad02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02ec))), 0x12aa5c60u);
  /* 12aa5c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5c63 jne 0x12aa5c71 */
  if (!C.zf) goto L_12aa5c71;
  /* 12aa5c65 mov dword ptr [0x12ace5fc], 1 */
  w32((uint32_t)(0x12ace5fc), (0x1u));
  /* 12aa5c6f jmp 0x12aa5c8f */
  goto L_12aa5c8f;
L_12aa5c71:;
  /* 12aa5c71 call dword ptr [0x12ad02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02a4))), 0x12aa5c77u);
  /* 12aa5c77 mov esi, eax */
  ESI = (EAX);
  /* 12aa5c79 call 0x12aaa910 */
  push32(0x12aa5c7eu); f_12aaa910();
  /* 12aa5c7e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12aa5c80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5c82 call 0x12aa64d0 */
  push32(0x12aa5c87u); f_12aa64d0();
  /* 12aa5c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5c8a jmp 0x12aa5de8 */
  goto L_12aa5de8;
L_12aa5c8f:;
  /* 12aa5c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5c92 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa5c95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa5c98 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5c9b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12aa5c9e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ca2 ja 0x12aa5d02 */
  if ((!C.cf&&!C.zf)) goto L_12aa5d02;
  /* 12aa5ca4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa5ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa5ca9 mov dl, byte ptr [eax + 0x12aa5e0f] */
  DL = (r8((uint32_t)(EAX + 0x12aa5e0f)));
  /* 12aa5caf jmp dword ptr [edx*4 + 0x12aa5dfb] */
  switch (EDX) {
    case 0: goto L_12aa5cb6;
    case 1: goto L_12aa5cf0;
    case 2: goto L_12aa5cca;
    case 3: goto L_12aa5cdd;
    case 4: goto L_12aa5d02;
    default: x86_unimpl("switch@0x12aa5caf out of table"); return;
  }
L_12aa5cb6:;
  /* 12aa5cb6 mov ecx, dword ptr [0x12ace5ec] */
  ECX = (r32((uint32_t)(0x12ace5ec)));
  /* 12aa5cbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa5cbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5cc2 mov dword ptr [0x12ace5ec], edx */
  w32((uint32_t)(0x12ace5ec), (EDX));
  /* 12aa5cc8 jmp 0x12aa5d02 */
  goto L_12aa5d02;
L_12aa5cca:;
  /* 12aa5cca mov eax, dword ptr [0x12ace5f0] */
  EAX = (r32((uint32_t)(0x12ace5f0)));
  /* 12aa5ccf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5cd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5cd5 mov dword ptr [0x12ace5f0], ecx */
  w32((uint32_t)(0x12ace5f0), (ECX));
  /* 12aa5cdb jmp 0x12aa5d02 */
  goto L_12aa5d02;
L_12aa5cdd:;
  /* 12aa5cdd mov edx, dword ptr [0x12ace5f4] */
  EDX = (r32((uint32_t)(0x12ace5f4)));
  /* 12aa5ce3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12aa5ce6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5ce9 mov dword ptr [0x12ace5f4], eax */
  w32((uint32_t)(0x12ace5f4), (EAX));
  /* 12aa5cee jmp 0x12aa5d02 */
  goto L_12aa5d02;
L_12aa5cf0:;
  /* 12aa5cf0 mov ecx, dword ptr [0x12ace5f8] */
  ECX = (r32((uint32_t)(0x12ace5f8)));
  /* 12aa5cf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa5cf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5cfc mov dword ptr [0x12ace5f8], edx */
  w32((uint32_t)(0x12ace5f8), (EDX));
L_12aa5d02:;
  /* 12aa5d02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5d04 call 0x12aa64d0 */
  push32(0x12aa5d09u); f_12aa64d0();
  /* 12aa5d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5d0c jmp 0x12aa5de3 */
  goto L_12aa5de3;
L_12aa5d11:;
  /* 12aa5d11 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d15 je 0x12aa5d28 */
  if (C.zf) goto L_12aa5d28;
  /* 12aa5d17 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d1b je 0x12aa5d28 */
  if (C.zf) goto L_12aa5d28;
  /* 12aa5d1d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d21 je 0x12aa5d28 */
  if (C.zf) goto L_12aa5d28;
  /* 12aa5d23 jmp 0x12aa5de8 */
  goto L_12aa5de8;
L_12aa5d28:;
  /* 12aa5d28 call 0x12aa2470 */
  push32(0x12aa5d2du); f_12aa2470();
  /* 12aa5d2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa5d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5d33 cmp dword ptr [eax + 0x50], 0x12accc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12accc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d3a jne 0x12aa5d85 */
  if (!C.zf) goto L_12aa5d85;
  /* 12aa5d3c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12aa5d41 push 0x12ac9dec */
  push32((uint32_t)(0x12ac9decu));
  /* 12aa5d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa5d48 mov ecx, dword ptr [0x12accc80] */
  ECX = (r32((uint32_t)(0x12accc80)));
  /* 12aa5d4e push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5d4f call 0x12aa2a30 */
  push32(0x12aa5d54u); f_12aa2a30();
  /* 12aa5d54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5d57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5d5a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12aa5d5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5d60 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d64 je 0x12aa5d83 */
  if (C.zf) goto L_12aa5d83;
  /* 12aa5d66 mov ecx, dword ptr [0x12accc80] */
  ECX = (r32((uint32_t)(0x12accc80)));
  /* 12aa5d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa5d6d push 0x12accc00 */
  push32((uint32_t)(0x12accc00u));
  /* 12aa5d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5d75 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12aa5d78 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5d79 call 0x12aa9310 */
  push32(0x12aa5d7eu); f_12aa9310();
  /* 12aa5d7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5d81 jmp 0x12aa5d85 */
  goto L_12aa5d85;
L_12aa5d83:;
  /* 12aa5d83 jmp 0x12aa5de8 */
  goto L_12aa5de8;
L_12aa5d85:;
  /* 12aa5d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5d88 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12aa5d8b push edx */
  push32((uint32_t)(EDX));
  /* 12aa5d8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5d8f push eax */
  push32((uint32_t)(EAX));
  /* 12aa5d90 call 0x12aa6110 */
  push32(0x12aa5d95u); f_12aa6110();
  /* 12aa5d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5d98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa5d9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5d9f jne 0x12aa5da3 */
  if (!C.zf) goto L_12aa5da3;
  /* 12aa5da1 jmp 0x12aa5de8 */
  goto L_12aa5de8;
L_12aa5da3:;
  /* 12aa5da3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5da6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12aa5da9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12aa5dac:;
  /* 12aa5dac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5daf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa5db2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5db5 jne 0x12aa5de3 */
  if (!C.zf) goto L_12aa5de3;
  /* 12aa5db7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5dba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa5dbd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12aa5dc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5dc3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5dc6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa5dc9 mov edx, dword ptr [0x12accc84] */
  EDX = (r32((uint32_t)(0x12accc84)));
  /* 12aa5dcf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa5dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5dd5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12aa5dd8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5dda cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ddd jb 0x12aa5de1 */
  if (C.cf) goto L_12aa5de1;
  /* 12aa5ddf jmp 0x12aa5de3 */
  goto L_12aa5de3;
L_12aa5de1:;
  /* 12aa5de1 jmp 0x12aa5dac */
  goto L_12aa5dac;
L_12aa5de3:;
  /* 12aa5de3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5de6 jmp 0x12aa5df6 */
  goto L_12aa5df6;
L_12aa5de8:;
  /* 12aa5de8 call 0x12aaa900 */
  push32(0x12aa5dedu); f_12aaa900();
  /* 12aa5ded mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12aa5df3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aa5df6:;
  /* 12aa5df6 pop esi */
  ESI = (pop32());
  /* 12aa5df7 mov esp, ebp */
  ESP = (EBP);
  /* 12aa5df9 pop ebp */
  EBP = (pop32());
  /* 12aa5dfa ret  */
  ESPCHK(0x12aa5c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x12aa5e30 (146 bytes, 45 insns) */
void f_12aa5e30(void) {
  FTRACE(0x12aa5e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5e31 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5e36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5e38 call 0x12aa6430 */
  push32(0x12aa5e3du); f_12aa6430();
  /* 12aa5e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5e40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5e44 jne 0x12aa5e5e */
  if (!C.zf) goto L_12aa5e5e;
  /* 12aa5e46 mov dword ptr [ebp - 8], 0x12ace5ec */
  w32((uint32_t)(EBP + -0x8), (0x12ace5ecu));
  /* 12aa5e4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5e50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12aa5e52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa5e55 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12aa5e5c jmp 0x12aa5e74 */
  goto L_12aa5e74;
L_12aa5e5e:;
  /* 12aa5e5e mov dword ptr [ebp - 8], 0x12ace5f0 */
  w32((uint32_t)(EBP + -0x8), (0x12ace5f0u));
  /* 12aa5e65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5e68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa5e6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5e6d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12aa5e74:;
  /* 12aa5e74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5e78 jne 0x12aa5e88 */
  if (!C.zf) goto L_12aa5e88;
  /* 12aa5e7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5e7c call 0x12aa64d0 */
  push32(0x12aa5e81u); f_12aa64d0();
  /* 12aa5e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5e86 jmp 0x12aa5ebc */
  goto L_12aa5ebc;
L_12aa5e88:;
  /* 12aa5e88 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5e8c je 0x12aa5ead */
  if (C.zf) goto L_12aa5ead;
  /* 12aa5e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa5e91 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12aa5e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5e99 call 0x12aa64d0 */
  push32(0x12aa5e9eu); f_12aa64d0();
  /* 12aa5e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5ea1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5ea4 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5ea5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12aa5ea8u);
  /* 12aa5ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5eab jmp 0x12aa5eb7 */
  goto L_12aa5eb7;
L_12aa5ead:;
  /* 12aa5ead push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5eaf call 0x12aa64d0 */
  push32(0x12aa5eb4u); f_12aa64d0();
  /* 12aa5eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5eb7:;
  /* 12aa5eb7 mov eax, 1 */
  EAX = (0x1u);
L_12aa5ebc:;
  /* 12aa5ebc mov esp, ebp */
  ESP = (EBP);
  /* 12aa5ebe pop ebp */
  EBP = (pop32());
  /* 12aa5ebf ret 4 */
  ESPCHK(0x12aa5e30u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ed0 @ 0x12aa5ed0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12aa5ed0(void) {
  FTRACE(0x12aa5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa5ed3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5ed6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12aa5edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5ee0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12aa5ee3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa5ee6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa5ee9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12aa5eec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ef0 ja 0x12aa5f9e */
  if ((!C.cf&&!C.zf)) goto L_12aa5f9e;
  /* 12aa5ef6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12aa5ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa5efb mov dl, byte ptr [eax + 0x12aa60f2] */
  DL = (r8((uint32_t)(EAX + 0x12aa60f2)));
  /* 12aa5f01 jmp dword ptr [edx*4 + 0x12aa60da] */
  switch (EDX) {
    case 0: goto L_12aa5f08;
    case 1: goto L_12aa5f73;
    case 2: goto L_12aa5f59;
    case 3: goto L_12aa5f25;
    case 4: goto L_12aa5f3f;
    case 5: goto L_12aa5f9e;
    default: x86_unimpl("switch@0x12aa5f01 out of table"); return;
  }
L_12aa5f08:;
  /* 12aa5f08 mov dword ptr [ebp - 0x18], 0x12ace5ec */
  w32((uint32_t)(EBP + -0x18), (0x12ace5ecu));
  /* 12aa5f0f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5f12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5f14 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa5f17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5f1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5f20 jmp 0x12aa5fa6 */
  goto L_12aa5fa6;
L_12aa5f25:;
  /* 12aa5f25 mov dword ptr [ebp - 0x18], 0x12ace5f0 */
  w32((uint32_t)(EBP + -0x18), (0x12ace5f0u));
  /* 12aa5f2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5f2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5f31 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa5f34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5f37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5f3d jmp 0x12aa5fa6 */
  goto L_12aa5fa6;
L_12aa5f3f:;
  /* 12aa5f3f mov dword ptr [ebp - 0x18], 0x12ace5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12ace5f4u));
  /* 12aa5f46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5f49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5f4b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa5f4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5f51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5f57 jmp 0x12aa5fa6 */
  goto L_12aa5fa6;
L_12aa5f59:;
  /* 12aa5f59 mov dword ptr [ebp - 0x18], 0x12ace5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12ace5f8u));
  /* 12aa5f60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5f63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5f65 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa5f68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa5f6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12aa5f71 jmp 0x12aa5fa6 */
  goto L_12aa5fa6;
L_12aa5f73:;
  /* 12aa5f73 call 0x12aa2470 */
  push32(0x12aa5f78u); f_12aa2470();
  /* 12aa5f78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa5f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa5f7e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12aa5f81 push edx */
  push32((uint32_t)(EDX));
  /* 12aa5f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa5f85 push eax */
  push32((uint32_t)(EAX));
  /* 12aa5f86 call 0x12aa6110 */
  push32(0x12aa5f8bu); f_12aa6110();
  /* 12aa5f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f8e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa5f91 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12aa5f94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa5f97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa5f99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12aa5f9c jmp 0x12aa5fa6 */
  goto L_12aa5fa6;
L_12aa5f9e:;
  /* 12aa5f9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5fa1 jmp 0x12aa60d6 */
  goto L_12aa60d6;
L_12aa5fa6:;
  /* 12aa5fa6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5faa je 0x12aa5fb6 */
  if (C.zf) goto L_12aa5fb6;
  /* 12aa5fac push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5fae call 0x12aa6430 */
  push32(0x12aa5fb3u); f_12aa6430();
  /* 12aa5fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5fb6:;
  /* 12aa5fb6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5fba jne 0x12aa5fd3 */
  if (!C.zf) goto L_12aa5fd3;
  /* 12aa5fbc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5fc0 je 0x12aa5fcc */
  if (C.zf) goto L_12aa5fcc;
  /* 12aa5fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5fc4 call 0x12aa64d0 */
  push32(0x12aa5fc9u); f_12aa64d0();
  /* 12aa5fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5fcc:;
  /* 12aa5fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa5fce jmp 0x12aa60d6 */
  goto L_12aa60d6;
L_12aa5fd3:;
  /* 12aa5fd3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5fd7 jne 0x12aa5ff0 */
  if (!C.zf) goto L_12aa5ff0;
  /* 12aa5fd9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5fdd je 0x12aa5fe9 */
  if (C.zf) goto L_12aa5fe9;
  /* 12aa5fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa5fe1 call 0x12aa64d0 */
  push32(0x12aa5fe6u); f_12aa64d0();
  /* 12aa5fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa5fe9:;
  /* 12aa5fe9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12aa5feb call 0x12aa21f0 */
  push32(0x12aa5ff0u); f_12aa21f0();
L_12aa5ff0:;
  /* 12aa5ff0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ff4 je 0x12aa6002 */
  if (C.zf) goto L_12aa6002;
  /* 12aa5ff6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa5ffa je 0x12aa6002 */
  if (C.zf) goto L_12aa6002;
  /* 12aa5ffc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6000 jne 0x12aa602e */
  if (!C.zf) goto L_12aa602e;
L_12aa6002:;
  /* 12aa6002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6005 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12aa6008 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12aa600b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa600e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12aa6015 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6019 jne 0x12aa602e */
  if (!C.zf) goto L_12aa602e;
  /* 12aa601b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa601e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12aa6021 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12aa6024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6027 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12aa602e:;
  /* 12aa602e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6032 jne 0x12aa6070 */
  if (!C.zf) goto L_12aa6070;
  /* 12aa6034 mov eax, dword ptr [0x12accc78] */
  EAX = (r32((uint32_t)(0x12accc78)));
  /* 12aa6039 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa603c jmp 0x12aa6047 */
  goto L_12aa6047;
L_12aa603e:;
  /* 12aa603e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6041 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6044 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12aa6047:;
  /* 12aa6047 mov edx, dword ptr [0x12accc78] */
  EDX = (r32((uint32_t)(0x12accc78)));
  /* 12aa604d add edx, dword ptr [0x12accc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12accc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6053 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6056 jge 0x12aa606e */
  if ((C.sf==C.of)) goto L_12aa606e;
  /* 12aa6058 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa605b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa605e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6061 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12aa6064 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12aa606c jmp 0x12aa603e */
  goto L_12aa603e;
L_12aa606e:;
  /* 12aa606e jmp 0x12aa6079 */
  goto L_12aa6079;
L_12aa6070:;
  /* 12aa6070 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa6073 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12aa6079:;
  /* 12aa6079 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa607d je 0x12aa6089 */
  if (C.zf) goto L_12aa6089;
  /* 12aa607f push 1 */
  push32((uint32_t)(0x1u));
  /* 12aa6081 call 0x12aa64d0 */
  push32(0x12aa6086u); f_12aa64d0();
  /* 12aa6086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa6089:;
  /* 12aa6089 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa608d jne 0x12aa60a0 */
  if (!C.zf) goto L_12aa60a0;
  /* 12aa608f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6092 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12aa6095 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6096 push 8 */
  push32((uint32_t)(0x8u));
  /* 12aa6098 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12aa609bu);
  /* 12aa609b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa609e jmp 0x12aa60aa */
  goto L_12aa60aa;
L_12aa60a0:;
  /* 12aa60a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa60a3 push eax */
  push32((uint32_t)(EAX));
  /* 12aa60a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12aa60a7u);
  /* 12aa60a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa60aa:;
  /* 12aa60aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa60ae je 0x12aa60bc */
  if (C.zf) goto L_12aa60bc;
  /* 12aa60b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa60b4 je 0x12aa60bc */
  if (C.zf) goto L_12aa60bc;
  /* 12aa60b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa60ba jne 0x12aa60d4 */
  if (!C.zf) goto L_12aa60d4;
L_12aa60bc:;
  /* 12aa60bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa60bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa60c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12aa60c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa60c9 jne 0x12aa60d4 */
  if (!C.zf) goto L_12aa60d4;
  /* 12aa60cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa60ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa60d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12aa60d4:;
  /* 12aa60d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa60d6:;
  /* 12aa60d6 mov esp, ebp */
  ESP = (EBP);
  /* 12aa60d8 pop ebp */
  EBP = (pop32());
  /* 12aa60d9 ret  */
  ESPCHK(0x12aa5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x12aa6110 (91 bytes, 35 insns) */
void f_12aa6110(void) {
  FTRACE(0x12aa6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6110 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6111 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6113 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6114 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6117 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa611a:;
  /* 12aa611a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa611d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12aa6120 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6123 je 0x12aa6143 */
  if (C.zf) goto L_12aa6143;
  /* 12aa6125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6128 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa612b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa612e mov ecx, dword ptr [0x12accc84] */
  ECX = (r32((uint32_t)(0x12accc84)));
  /* 12aa6134 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa6137 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa613a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa613c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa613f jae 0x12aa6143 */
  if (!C.cf) goto L_12aa6143;
  /* 12aa6141 jmp 0x12aa611a */
  goto L_12aa611a;
L_12aa6143:;
  /* 12aa6143 mov eax, dword ptr [0x12accc84] */
  EAX = (r32((uint32_t)(0x12accc84)));
  /* 12aa6148 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa614b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa614e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6150 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6153 jae 0x12aa6165 */
  if (!C.cf) goto L_12aa6165;
  /* 12aa6155 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6158 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12aa615b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa615e jne 0x12aa6165 */
  if (!C.zf) goto L_12aa6165;
  /* 12aa6160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6163 jmp 0x12aa6167 */
  goto L_12aa6167;
L_12aa6165:;
  /* 12aa6165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa6167:;
  /* 12aa6167 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6169 pop ebp */
  EBP = (pop32());
  /* 12aa616a ret  */
  ESPCHK(0x12aa6110u, _esp0);
  ESP += 4; return;
}

/* FUN_10006170 @ 0x12aa6170 (13 bytes, 6 insns) */
void f_12aa6170(void) {
  FTRACE(0x12aa6170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6170 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6171 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6173 call 0x12aa2470 */
  push32(0x12aa6178u); f_12aa2470();
  /* 12aa6178 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa617b pop ebp */
  EBP = (pop32());
  /* 12aa617c ret  */
  ESPCHK(0x12aa6170u, _esp0);
  ESP += 4; return;
}

/* FUN_10006180 @ 0x12aa6180 (13 bytes, 6 insns) */
void f_12aa6180(void) {
  FTRACE(0x12aa6180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6180 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6181 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6183 call 0x12aa2470 */
  push32(0x12aa6188u); f_12aa2470();
  /* 12aa6188 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa618b pop ebp */
  EBP = (pop32());
  /* 12aa618c ret  */
  ESPCHK(0x12aa6180u, _esp0);
  ESP += 4; return;
}

/* FUN_10006190 @ 0x12aa6190 (187 bytes, 54 insns) */
void f_12aa6190(void) {
  FTRACE(0x12aa6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6190 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6191 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6196 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa619d cmp dword ptr [0x12ace600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa61a4 jne 0x12aa6203 */
  if (!C.zf) goto L_12aa6203;
  /* 12aa61a6 push 0x12ac9218 */
  push32((uint32_t)(0x12ac9218u));
  /* 12aa61ab call dword ptr [0x12ad0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0274))), 0x12aa61b1u);
  /* 12aa61b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa61b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa61b8 je 0x12aa61d7 */
  if (C.zf) goto L_12aa61d7;
  /* 12aa61ba push 0x12ac9e1c */
  push32((uint32_t)(0x12ac9e1cu));
  /* 12aa61bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa61c2 push eax */
  push32((uint32_t)(EAX));
  /* 12aa61c3 call dword ptr [0x12ad0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0270))), 0x12aa61c9u);
  /* 12aa61c9 mov dword ptr [0x12ace600], eax */
  w32((uint32_t)(0x12ace600), (EAX));
  /* 12aa61ce cmp dword ptr [0x12ace600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa61d5 jne 0x12aa61db */
  if (!C.zf) goto L_12aa61db;
L_12aa61d7:;
  /* 12aa61d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa61d9 jmp 0x12aa6247 */
  goto L_12aa6247;
L_12aa61db:;
  /* 12aa61db push 0x12ac9e0c */
  push32((uint32_t)(0x12ac9e0cu));
  /* 12aa61e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa61e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa61e4 call dword ptr [0x12ad0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0270))), 0x12aa61eau);
  /* 12aa61ea mov dword ptr [0x12ace604], eax */
  w32((uint32_t)(0x12ace604), (EAX));
  /* 12aa61ef push 0x12ac9df8 */
  push32((uint32_t)(0x12ac9df8u));
  /* 12aa61f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa61f7 push edx */
  push32((uint32_t)(EDX));
  /* 12aa61f8 call dword ptr [0x12ad0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0270))), 0x12aa61feu);
  /* 12aa61fe mov dword ptr [0x12ace608], eax */
  w32((uint32_t)(0x12ace608), (EAX));
L_12aa6203:;
  /* 12aa6203 cmp dword ptr [0x12ace604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa620a je 0x12aa6215 */
  if (C.zf) goto L_12aa6215;
  /* 12aa620c call dword ptr [0x12ace604] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace604))), 0x12aa6212u);
  /* 12aa6212 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa6215:;
  /* 12aa6215 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6219 je 0x12aa6231 */
  if (C.zf) goto L_12aa6231;
  /* 12aa621b cmp dword ptr [0x12ace608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ace608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6222 je 0x12aa6231 */
  if (C.zf) goto L_12aa6231;
  /* 12aa6224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6227 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6228 call dword ptr [0x12ace608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace608))), 0x12aa622eu);
  /* 12aa622e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa6231:;
  /* 12aa6231 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12aa6234 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6235 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6238 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6239 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa623c push eax */
  push32((uint32_t)(EAX));
  /* 12aa623d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6240 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6241 call dword ptr [0x12ace600] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ace600))), 0x12aa6247u);
L_12aa6247:;
  /* 12aa6247 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6249 pop ebp */
  EBP = (pop32());
  /* 12aa624a ret  */
  ESPCHK(0x12aa6190u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12aa6250 (254 bytes, 109 insns) */
void f_12aa6250(void) {
  FTRACE(0x12aa6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6250 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa6254 push edi */
  push32((uint32_t)(EDI));
  /* 12aa6255 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12aa6257 je 0x12aa62d3 */
  if (C.zf) goto L_12aa62d3;
  /* 12aa6259 push esi */
  push32((uint32_t)(ESI));
  /* 12aa625a push ebx */
  push32((uint32_t)(EBX));
  /* 12aa625b mov ebx, ecx */
  EBX = (ECX);
  /* 12aa625d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12aa6261 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12aa6267 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa626b jne 0x12aa6274 */
  if (!C.zf) goto L_12aa6274;
  /* 12aa626d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa6270 jne 0x12aa62e1 */
  if (!C.zf) goto L_12aa62e1;
  /* 12aa6272 jmp 0x12aa6295 */
  goto L_12aa6295;
L_12aa6274:;
  /* 12aa6274 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa6276 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aa6277 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa6279 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa627a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa627b je 0x12aa62a2 */
  if (C.zf) goto L_12aa62a2;
  /* 12aa627d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa627f je 0x12aa62aa */
  if (C.zf) goto L_12aa62aa;
  /* 12aa6281 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12aa6287 jne 0x12aa6274 */
  if (!C.zf) goto L_12aa6274;
  /* 12aa6289 mov ebx, ecx */
  EBX = (ECX);
  /* 12aa628b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa628e jne 0x12aa62e1 */
  if (!C.zf) goto L_12aa62e1;
L_12aa6290:;
  /* 12aa6290 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12aa6293 je 0x12aa62a2 */
  if (C.zf) goto L_12aa62a2;
L_12aa6295:;
  /* 12aa6295 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12aa6297 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12aa6298 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa629a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa629b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12aa629d je 0x12aa62ce */
  if (C.zf) goto L_12aa62ce;
  /* 12aa629f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12aa62a0 jne 0x12aa6295 */
  if (!C.zf) goto L_12aa6295;
L_12aa62a2:;
  /* 12aa62a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa62a6 pop ebx */
  EBX = (pop32());
  /* 12aa62a7 pop esi */
  ESI = (pop32());
  /* 12aa62a8 pop edi */
  EDI = (pop32());
  /* 12aa62a9 ret  */
  ESPCHK(0x12aa6250u, _esp0);
  ESP += 4; return;
L_12aa62aa:;
  /* 12aa62aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aa62b0 je 0x12aa62c4 */
  if (C.zf) goto L_12aa62c4;
L_12aa62b2:;
  /* 12aa62b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa62b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa62b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa62b6 je 0x12aa6346 */
  if (C.zf) goto L_12aa6346;
  /* 12aa62bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12aa62c2 jne 0x12aa62b2 */
  if (!C.zf) goto L_12aa62b2;
L_12aa62c4:;
  /* 12aa62c4 mov ebx, ecx */
  EBX = (ECX);
  /* 12aa62c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa62c9 jne 0x12aa6337 */
  if (!C.zf) goto L_12aa6337;
L_12aa62cb:;
  /* 12aa62cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa62cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12aa62ce:;
  /* 12aa62ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12aa62cf jne 0x12aa62cb */
  if (!C.zf) goto L_12aa62cb;
  /* 12aa62d1 pop ebx */
  EBX = (pop32());
  /* 12aa62d2 pop esi */
  ESI = (pop32());
L_12aa62d3:;
  /* 12aa62d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa62d7 pop edi */
  EDI = (pop32());
  /* 12aa62d8 ret  */
  ESPCHK(0x12aa6250u, _esp0);
  ESP += 4; return;
L_12aa62d9:;
  /* 12aa62d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa62db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa62de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa62df je 0x12aa6290 */
  if (C.zf) goto L_12aa6290;
L_12aa62e1:;
  /* 12aa62e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12aa62e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12aa62e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa62ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa62ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa62ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12aa62f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa62f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12aa62f9 je 0x12aa62d9 */
  if (C.zf) goto L_12aa62d9;
  /* 12aa62fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12aa62fd je 0x12aa632b */
  if (C.zf) goto L_12aa632b;
  /* 12aa62ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12aa6301 je 0x12aa6321 */
  if (C.zf) goto L_12aa6321;
  /* 12aa6303 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12aa6309 je 0x12aa6317 */
  if (C.zf) goto L_12aa6317;
  /* 12aa630b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12aa6311 jne 0x12aa62d9 */
  if (!C.zf) goto L_12aa62d9;
  /* 12aa6313 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa6315 jmp 0x12aa632f */
  goto L_12aa632f;
L_12aa6317:;
  /* 12aa6317 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa631d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa631f jmp 0x12aa632f */
  goto L_12aa632f;
L_12aa6321:;
  /* 12aa6321 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12aa6327 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12aa6329 jmp 0x12aa632f */
  goto L_12aa632f;
L_12aa632b:;
  /* 12aa632b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12aa632d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12aa632f:;
  /* 12aa632f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6334 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa6335 je 0x12aa6341 */
  if (C.zf) goto L_12aa6341;
L_12aa6337:;
  /* 12aa6337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12aa6339:;
  /* 12aa6339 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12aa633b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa633e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa633f jne 0x12aa6339 */
  if (!C.zf) goto L_12aa6339;
L_12aa6341:;
  /* 12aa6341 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12aa6344 jne 0x12aa62cb */
  if (!C.zf) goto L_12aa62cb;
L_12aa6346:;
  /* 12aa6346 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12aa634a pop ebx */
  EBX = (pop32());
  /* 12aa634b pop esi */
  ESI = (pop32());
  /* 12aa634c pop edi */
  EDI = (pop32());
  /* 12aa634d ret  */
  ESPCHK(0x12aa6250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x12aa6350 (55 bytes, 16 insns) */
void f_12aa6350(void) {
  FTRACE(0x12aa6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6350 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6351 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6353 mov eax, dword ptr [0x12accb84] */
  EAX = (r32((uint32_t)(0x12accb84)));
  /* 12aa6358 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6359 call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aa635fu);
  /* 12aa635f mov ecx, dword ptr [0x12accb74] */
  ECX = (r32((uint32_t)(0x12accb74)));
  /* 12aa6365 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6366 call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aa636cu);
  /* 12aa636c mov edx, dword ptr [0x12accb64] */
  EDX = (r32((uint32_t)(0x12accb64)));
  /* 12aa6372 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6373 call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aa6379u);
  /* 12aa6379 mov eax, dword ptr [0x12accb44] */
  EAX = (r32((uint32_t)(0x12accb44)));
  /* 12aa637e push eax */
  push32((uint32_t)(EAX));
  /* 12aa637f call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aa6385u);
  /* 12aa6385 pop ebp */
  EBP = (pop32());
  /* 12aa6386 ret  */
  ESPCHK(0x12aa6350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x12aa6390 (159 bytes, 47 insns) */
void f_12aa6390(void) {
  FTRACE(0x12aa6390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6390 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6391 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6393 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6394 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12aa639b jmp 0x12aa63a6 */
  goto L_12aa63a6;
L_12aa639d:;
  /* 12aa639d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa63a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa63a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa63a6:;
  /* 12aa63a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63aa jge 0x12aa63f9 */
  if ((C.sf==C.of)) goto L_12aa63f9;
  /* 12aa63ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa63af cmp dword ptr [ecx*4 + 0x12accb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12accb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63b7 je 0x12aa63f7 */
  if (C.zf) goto L_12aa63f7;
  /* 12aa63b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63bd je 0x12aa63f7 */
  if (C.zf) goto L_12aa63f7;
  /* 12aa63bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63c3 je 0x12aa63f7 */
  if (C.zf) goto L_12aa63f7;
  /* 12aa63c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63c9 je 0x12aa63f7 */
  if (C.zf) goto L_12aa63f7;
  /* 12aa63cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa63cf je 0x12aa63f7 */
  if (C.zf) goto L_12aa63f7;
  /* 12aa63d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa63d4 mov eax, dword ptr [edx*4 + 0x12accb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12accb40)));
  /* 12aa63db push eax */
  push32((uint32_t)(EAX));
  /* 12aa63dc call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa63e2u);
  /* 12aa63e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa63e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa63e7 mov edx, dword ptr [ecx*4 + 0x12accb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12accb40)));
  /* 12aa63ee push edx */
  push32((uint32_t)(EDX));
  /* 12aa63ef call 0x12aa34c0 */
  push32(0x12aa63f4u); f_12aa34c0();
  /* 12aa63f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa63f7:;
  /* 12aa63f7 jmp 0x12aa639d */
  goto L_12aa639d;
L_12aa63f9:;
  /* 12aa63f9 mov eax, dword ptr [0x12accb64] */
  EAX = (r32((uint32_t)(0x12accb64)));
  /* 12aa63fe push eax */
  push32((uint32_t)(EAX));
  /* 12aa63ff call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa6405u);
  /* 12aa6405 mov ecx, dword ptr [0x12accb74] */
  ECX = (r32((uint32_t)(0x12accb74)));
  /* 12aa640b push ecx */
  push32((uint32_t)(ECX));
  /* 12aa640c call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa6412u);
  /* 12aa6412 mov edx, dword ptr [0x12accb84] */
  EDX = (r32((uint32_t)(0x12accb84)));
  /* 12aa6418 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6419 call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa641fu);
  /* 12aa641f mov eax, dword ptr [0x12accb44] */
  EAX = (r32((uint32_t)(0x12accb44)));
  /* 12aa6424 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6425 call dword ptr [0x12ad02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02b8))), 0x12aa642bu);
  /* 12aa642b mov esp, ebp */
  ESP = (EBP);
  /* 12aa642d pop ebp */
  EBP = (pop32());
  /* 12aa642e ret  */
  ESPCHK(0x12aa6390u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x12aa6430 (151 bytes, 46 insns) */
void f_12aa6430(void) {
  FTRACE(0x12aa6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6430 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6431 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6433 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6437 cmp dword ptr [eax*4 + 0x12accb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12accb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa643f jne 0x12aa64b2 */
  if (!C.zf) goto L_12aa64b2;
  /* 12aa6441 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12aa6446 push 0x12ac9e28 */
  push32((uint32_t)(0x12ac9e28u));
  /* 12aa644b push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa644d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12aa644f call 0x12aa2a30 */
  push32(0x12aa6454u); f_12aa2a30();
  /* 12aa6454 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6457 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa645a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa645e jne 0x12aa646a */
  if (!C.zf) goto L_12aa646a;
  /* 12aa6460 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aa6462 call 0x12aa19a0 */
  push32(0x12aa6467u); f_12aa19a0();
  /* 12aa6467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa646a:;
  /* 12aa646a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aa646c call 0x12aa6430 */
  push32(0x12aa6471u); f_12aa6430();
  /* 12aa6471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6474 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6477 cmp dword ptr [ecx*4 + 0x12accb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12accb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa647f jne 0x12aa649a */
  if (!C.zf) goto L_12aa649a;
  /* 12aa6481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6484 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6485 call dword ptr [0x12ad02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f0))), 0x12aa648bu);
  /* 12aa648b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa648e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6491 mov dword ptr [eax*4 + 0x12accb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12accb40), (ECX));
  /* 12aa6498 jmp 0x12aa64a8 */
  goto L_12aa64a8;
L_12aa649a:;
  /* 12aa649a push 2 */
  push32((uint32_t)(0x2u));
  /* 12aa649c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa649f push edx */
  push32((uint32_t)(EDX));
  /* 12aa64a0 call 0x12aa34c0 */
  push32(0x12aa64a5u); f_12aa34c0();
  /* 12aa64a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa64a8:;
  /* 12aa64a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12aa64aa call 0x12aa64d0 */
  push32(0x12aa64afu); f_12aa64d0();
  /* 12aa64af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa64b2:;
  /* 12aa64b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa64b5 mov ecx, dword ptr [eax*4 + 0x12accb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12accb40)));
  /* 12aa64bc push ecx */
  push32((uint32_t)(ECX));
  /* 12aa64bd call dword ptr [0x12ad02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f4))), 0x12aa64c3u);
  /* 12aa64c3 mov esp, ebp */
  ESP = (EBP);
  /* 12aa64c5 pop ebp */
  EBP = (pop32());
  /* 12aa64c6 ret  */
  ESPCHK(0x12aa6430u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x12aa64d0 (22 bytes, 8 insns) */
void f_12aa64d0(void) {
  FTRACE(0x12aa64d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa64d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa64d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa64d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa64d6 mov ecx, dword ptr [eax*4 + 0x12accb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12accb40)));
  /* 12aa64dd push ecx */
  push32((uint32_t)(ECX));
  /* 12aa64de call dword ptr [0x12ad02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02f8))), 0x12aa64e4u);
  /* 12aa64e4 pop ebp */
  EBP = (pop32());
  /* 12aa64e5 ret  */
  ESPCHK(0x12aa64d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x12aa64f0 (26 bytes, 10 insns) */
void f_12aa64f0(void) {
  FTRACE(0x12aa64f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa64f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa64f1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa64f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa64f6 push eax */
  push32((uint32_t)(EAX));
  /* 12aa64f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa64f9 call dword ptr [0x12ad02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad02fc))), 0x12aa64ffu);
  /* 12aa64ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 12aa6504 call dword ptr [0x12ad0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0280))), 0x12aa650au);
  /* 12aa650a pop ebp */
  EBP = (pop32());
  /* 12aa650b ret  */
  ESPCHK(0x12aa64f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12aa6510 (446 bytes, 130 insns) */
void f_12aa6510(void) {
  FTRACE(0x12aa6510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6510 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6511 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12aa6516 call 0x12aa2470 */
  push32(0x12aa651bu); f_12aa2470();
  /* 12aa651b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12aa651e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6521 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12aa6524 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6528 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6529 call 0x12aa66d0 */
  push32(0x12aa652eu); f_12aa66d0();
  /* 12aa652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6531 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12aa6534 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6538 je 0x12aa6543 */
  if (C.zf) goto L_12aa6543;
  /* 12aa653a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa653d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6541 jne 0x12aa6552 */
  if (!C.zf) goto L_12aa6552;
L_12aa6543:;
  /* 12aa6543 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6546 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6547 call dword ptr [0x12ad0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0300))), 0x12aa654du);
  /* 12aa654d jmp 0x12aa66ca */
  goto L_12aa66ca;
L_12aa6552:;
  /* 12aa6552 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6555 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6559 jne 0x12aa656f */
  if (!C.zf) goto L_12aa656f;
  /* 12aa655b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa655e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12aa6565 mov eax, 1 */
  EAX = (0x1u);
  /* 12aa656a jmp 0x12aa66ca */
  goto L_12aa66ca;
L_12aa656f:;
  /* 12aa656f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6572 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6576 jne 0x12aa6580 */
  if (!C.zf) goto L_12aa6580;
  /* 12aa6578 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12aa657b jmp 0x12aa66ca */
  goto L_12aa66ca;
L_12aa6580:;
  /* 12aa6580 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6583 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12aa6586 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa6589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa658c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12aa658f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12aa6592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6595 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa6598 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12aa659b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa659e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa65a2 jne 0x12aa66a7 */
  if (!C.zf) goto L_12aa66a7;
  /* 12aa65a8 mov eax, dword ptr [0x12accc78] */
  EAX = (r32((uint32_t)(0x12accc78)));
  /* 12aa65ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12aa65b0 jmp 0x12aa65bb */
  goto L_12aa65bb;
L_12aa65b2:;
  /* 12aa65b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa65b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa65b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12aa65bb:;
  /* 12aa65bb mov edx, dword ptr [0x12accc78] */
  EDX = (r32((uint32_t)(0x12accc78)));
  /* 12aa65c1 add edx, dword ptr [0x12accc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12accc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa65c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa65ca jge 0x12aa65e2 */
  if ((C.sf==C.of)) goto L_12aa65e2;
  /* 12aa65cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12aa65cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa65d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa65d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12aa65d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12aa65e0 jmp 0x12aa65b2 */
  goto L_12aa65b2;
L_12aa65e2:;
  /* 12aa65e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa65e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12aa65e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12aa65eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa65ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa65f4 jne 0x12aa6605 */
  if (!C.zf) goto L_12aa6605;
  /* 12aa65f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa65f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12aa6600 jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa6605:;
  /* 12aa6605 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6608 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa660e jne 0x12aa661c */
  if (!C.zf) goto L_12aa661c;
  /* 12aa6610 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6613 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12aa661a jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa661c:;
  /* 12aa661c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa661f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6625 jne 0x12aa6633 */
  if (!C.zf) goto L_12aa6633;
  /* 12aa6627 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa662a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12aa6631 jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa6633:;
  /* 12aa6633 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6636 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa663c jne 0x12aa664a */
  if (!C.zf) goto L_12aa664a;
  /* 12aa663e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6641 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12aa6648 jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa664a:;
  /* 12aa664a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa664d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6653 jne 0x12aa6661 */
  if (!C.zf) goto L_12aa6661;
  /* 12aa6655 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6658 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12aa665f jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa6661:;
  /* 12aa6661 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa6664 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa666a jne 0x12aa6678 */
  if (!C.zf) goto L_12aa6678;
  /* 12aa666c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa666f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12aa6676 jmp 0x12aa668d */
  goto L_12aa668d;
L_12aa6678:;
  /* 12aa6678 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa667b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6681 jne 0x12aa668d */
  if (!C.zf) goto L_12aa668d;
  /* 12aa6683 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6686 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12aa668d:;
  /* 12aa668d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa6690 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12aa6693 push edx */
  push32((uint32_t)(EDX));
  /* 12aa6694 push 8 */
  push32((uint32_t)(0x8u));
  /* 12aa6696 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12aa6699u);
  /* 12aa6699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa669c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa669f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12aa66a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12aa66a5 jmp 0x12aa66be */
  goto L_12aa66be;
L_12aa66a7:;
  /* 12aa66a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa66aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12aa66b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12aa66b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12aa66b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa66b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12aa66bbu);
  /* 12aa66bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12aa66be:;
  /* 12aa66be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12aa66c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12aa66c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12aa66c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12aa66ca:;
  /* 12aa66ca mov esp, ebp */
  ESP = (EBP);
  /* 12aa66cc pop ebp */
  EBP = (pop32());
  /* 12aa66cd ret  */
  ESPCHK(0x12aa6510u, _esp0);
  ESP += 4; return;
}

/* FUN_100066d0 @ 0x12aa66d0 (89 bytes, 35 insns) */
void f_12aa66d0(void) {
  FTRACE(0x12aa66d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa66d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa66d1 mov ebp, esp */
  EBP = (ESP);
  /* 12aa66d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa66d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa66d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12aa66da:;
  /* 12aa66da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa66dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12aa66df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa66e2 je 0x12aa6702 */
  if (C.zf) goto L_12aa6702;
  /* 12aa66e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa66e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa66ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa66ed mov ecx, dword ptr [0x12accc84] */
  ECX = (r32((uint32_t)(0x12accc84)));
  /* 12aa66f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa66f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa66f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa66fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa66fe jae 0x12aa6702 */
  if (!C.cf) goto L_12aa6702;
  /* 12aa6700 jmp 0x12aa66da */
  goto L_12aa66da;
L_12aa6702:;
  /* 12aa6702 mov eax, dword ptr [0x12accc84] */
  EAX = (r32((uint32_t)(0x12accc84)));
  /* 12aa6707 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12aa670a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12aa670d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa670f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6712 jae 0x12aa671e */
  if (!C.cf) goto L_12aa671e;
  /* 12aa6714 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa6717 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12aa6719 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa671c je 0x12aa6722 */
  if (C.zf) goto L_12aa6722;
L_12aa671e:;
  /* 12aa671e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6720 jmp 0x12aa6725 */
  goto L_12aa6725;
L_12aa6722:;
  /* 12aa6722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12aa6725:;
  /* 12aa6725 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6727 pop ebp */
  EBP = (pop32());
  /* 12aa6728 ret  */
  ESPCHK(0x12aa66d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12aa6730 (48 bytes, 17 insns) */
void f_12aa6730(void) {
  FTRACE(0x12aa6730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6730 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6731 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6733 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6734 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6736 call 0x12aa6430 */
  push32(0x12aa673bu); f_12aa6430();
  /* 12aa673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa673e mov eax, dword ptr [0x12ace674] */
  EAX = (r32((uint32_t)(0x12ace674)));
  /* 12aa6743 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa6746 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6749 mov dword ptr [0x12ace674], ecx */
  w32((uint32_t)(0x12ace674), (ECX));
  /* 12aa674f push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6751 call 0x12aa64d0 */
  push32(0x12aa6756u); f_12aa64d0();
  /* 12aa6756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa675c mov esp, ebp */
  ESP = (EBP);
  /* 12aa675e pop ebp */
  EBP = (pop32());
  /* 12aa675f ret  */
  ESPCHK(0x12aa6730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x12aa6760 (10 bytes, 5 insns) */
void f_12aa6760(void) {
  FTRACE(0x12aa6760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6760 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6761 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6763 mov eax, dword ptr [0x12ace674] */
  EAX = (r32((uint32_t)(0x12ace674)));
  /* 12aa6768 pop ebp */
  EBP = (pop32());
  /* 12aa6769 ret  */
  ESPCHK(0x12aa6760u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12aa6770 (45 bytes, 19 insns) */
void f_12aa6770(void) {
  FTRACE(0x12aa6770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6770 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6771 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6773 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6774 mov eax, dword ptr [0x12ace674] */
  EAX = (r32((uint32_t)(0x12ace674)));
  /* 12aa6779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa677c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6780 je 0x12aa6790 */
  if (C.zf) goto L_12aa6790;
  /* 12aa6782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6785 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6786 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12aa6789u);
  /* 12aa6789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa678c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa678e jne 0x12aa6794 */
  if (!C.zf) goto L_12aa6794;
L_12aa6790:;
  /* 12aa6790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa6792 jmp 0x12aa6799 */
  goto L_12aa6799;
L_12aa6794:;
  /* 12aa6794 mov eax, 1 */
  EAX = (0x1u);
L_12aa6799:;
  /* 12aa6799 mov esp, ebp */
  ESP = (EBP);
  /* 12aa679b pop ebp */
  EBP = (pop32());
  /* 12aa679c ret  */
  ESPCHK(0x12aa6770u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12aa67a0 (88 bytes, 40 insns) */
void f_12aa67a0(void) {
  FTRACE(0x12aa67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa67a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12aa67a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa67a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa67aa je 0x12aa67f3 */
  if (C.zf) goto L_12aa67f3;
  /* 12aa67ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa67ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12aa67b2 push edi */
  push32((uint32_t)(EDI));
  /* 12aa67b3 mov edi, ecx */
  EDI = (ECX);
  /* 12aa67b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa67b8 jb 0x12aa67e7 */
  if (C.cf) goto L_12aa67e7;
  /* 12aa67ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12aa67bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12aa67bf je 0x12aa67c9 */
  if (C.zf) goto L_12aa67c9;
  /* 12aa67c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12aa67c3:;
  /* 12aa67c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa67c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa67c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12aa67c7 jne 0x12aa67c3 */
  if (!C.zf) goto L_12aa67c3;
L_12aa67c9:;
  /* 12aa67c9 mov ecx, eax */
  ECX = (EAX);
  /* 12aa67cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12aa67ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa67d0 mov ecx, eax */
  ECX = (EAX);
  /* 12aa67d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12aa67d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa67d7 mov ecx, edx */
  ECX = (EDX);
  /* 12aa67d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa67dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12aa67df je 0x12aa67e7 */
  if (C.zf) goto L_12aa67e7;
  /* 12aa67e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12aa67e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12aa67e5 je 0x12aa67ed */
  if (C.zf) goto L_12aa67ed;
L_12aa67e7:;
  /* 12aa67e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12aa67e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12aa67ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12aa67eb jne 0x12aa67e7 */
  if (!C.zf) goto L_12aa67e7;
L_12aa67ed:;
  /* 12aa67ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12aa67f1 pop edi */
  EDI = (pop32());
  /* 12aa67f2 ret  */
  ESPCHK(0x12aa67a0u, _esp0);
  ESP += 4; return;
L_12aa67f3:;
  /* 12aa67f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12aa67f7 ret  */
  ESPCHK(0x12aa67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x12aa6800 (23 bytes, 10 insns) */
void f_12aa6800(void) {
  FTRACE(0x12aa6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6800 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6801 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6803 mov eax, dword ptr [0x12ace670] */
  EAX = (r32((uint32_t)(0x12ace670)));
  /* 12aa6808 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa680c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa680d call 0x12aa6820 */
  push32(0x12aa6812u); f_12aa6820();
  /* 12aa6812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6815 pop ebp */
  EBP = (pop32());
  /* 12aa6816 ret  */
  ESPCHK(0x12aa6800u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12aa6820 (87 bytes, 34 insns) */
void f_12aa6820(void) {
  FTRACE(0x12aa6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6820 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6821 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6823 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6824 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6828 jbe 0x12aa682e */
  if ((C.cf||C.zf)) goto L_12aa682e;
  /* 12aa682a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa682c jmp 0x12aa6873 */
  goto L_12aa6873;
L_12aa682e:;
  /* 12aa682e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6832 ja 0x12aa6845 */
  if ((!C.cf&&!C.zf)) goto L_12aa6845;
  /* 12aa6834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6837 push eax */
  push32((uint32_t)(EAX));
  /* 12aa6838 call 0x12aa6880 */
  push32(0x12aa683du); f_12aa6880();
  /* 12aa683d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa6843 jmp 0x12aa684c */
  goto L_12aa684c;
L_12aa6845:;
  /* 12aa6845 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12aa684c:;
  /* 12aa684c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6850 jne 0x12aa6858 */
  if (!C.zf) goto L_12aa6858;
  /* 12aa6852 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa6856 jne 0x12aa685d */
  if (!C.zf) goto L_12aa685d;
L_12aa6858:;
  /* 12aa6858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa685b jmp 0x12aa6873 */
  goto L_12aa6873;
L_12aa685d:;
  /* 12aa685d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6860 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6861 call 0x12aa6770 */
  push32(0x12aa6866u); f_12aa6770();
  /* 12aa6866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12aa686b jne 0x12aa6871 */
  if (!C.zf) goto L_12aa6871;
  /* 12aa686d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12aa686f jmp 0x12aa6873 */
  goto L_12aa6873;
L_12aa6871:;
  /* 12aa6871 jmp 0x12aa682e */
  goto L_12aa682e;
L_12aa6873:;
  /* 12aa6873 mov esp, ebp */
  ESP = (EBP);
  /* 12aa6875 pop ebp */
  EBP = (pop32());
  /* 12aa6876 ret  */
  ESPCHK(0x12aa6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12aa6880 (109 bytes, 37 insns) */
void f_12aa6880(void) {
  FTRACE(0x12aa6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12aa6880 push ebp */
  push32((uint32_t)(EBP));
  /* 12aa6881 mov ebp, esp */
  EBP = (ESP);
  /* 12aa6883 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa6884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa6887 cmp eax, dword ptr [0x12accc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12accc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa688d ja 0x12aa68bd */
  if ((!C.cf&&!C.zf)) goto L_12aa68bd;
  /* 12aa688f push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa6891 call 0x12aa6430 */
  push32(0x12aa6896u); f_12aa6430();
  /* 12aa6896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa6899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa689c push ecx */
  push32((uint32_t)(ECX));
  /* 12aa689d call 0x12aa73c0 */
  push32(0x12aa68a2u); f_12aa73c0();
  /* 12aa68a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa68a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12aa68a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12aa68aa call 0x12aa64d0 */
  push32(0x12aa68afu); f_12aa64d0();
  /* 12aa68af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa68b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa68b6 je 0x12aa68bd */
  if (C.zf) goto L_12aa68bd;
  /* 12aa68b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12aa68bb jmp 0x12aa68e9 */
  goto L_12aa68e9;
L_12aa68bd:;
  /* 12aa68bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12aa68c1 jne 0x12aa68ca */
  if (!C.zf) goto L_12aa68ca;
  /* 12aa68c3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12aa68ca:;
  /* 12aa68ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa68cd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12aa68d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12aa68d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12aa68d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12aa68d9 push eax */
  push32((uint32_t)(EAX));
  /* 12aa68da push 0 */
  push32((uint32_t)(0x0u));
  /* 12aa68dc mov ecx, dword ptr [0x12acfe2c] */
  ECX = (r32((uint32_t)(0x12acfe2c)));
  /* 12aa68e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12aa68e3 call dword ptr [0x12ad0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ad0304))), 0x12aa68e9u);
L_12aa68e9:;
  /* 12aa68e9 mov esp, ebp */
  ESP = (EBP);
  /* 12aa68eb pop ebp */
  EBP = (pop32());
  /* 12aa68ec ret  */
  ESPCHK(0x12aa6880u, _esp0);
  ESP += 4; return;
}

