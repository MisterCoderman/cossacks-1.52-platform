#include "recomp.h"

/* OnInit @ 0x11be1005 (5 bytes, 1 insns) */
void f_11be1005(void) {
  FTRACE(0x11be1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be1005 jmp 0x11be1030 */
  f_11be1030(); return;
}

/* thunk_FUN_10001ca0 @ 0x11be100a (5 bytes, 1 insns) */
void f_11be100a(void) {
  FTRACE(0x11be100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be100a jmp 0x11be1ca0 */
  f_11be1ca0(); return;
}

/* ProcessScenary @ 0x11be100f (5 bytes, 1 insns) */
void f_11be100f(void) {
  FTRACE(0x11be100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be100f jmp 0x11be1d00 */
  f_11be1d00(); return;
}

/* FUN_10001030 @ 0x11be1030 (2537 bytes, 686 insns) */
void f_11be1030(void) {
  FTRACE(0x11be1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be1030 push ebp */
  push32((uint32_t)(EBP));
  /* 11be1031 mov ebp, esp */
  EBP = (ESP);
  /* 11be1033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be1036 push ebx */
  push32((uint32_t)(EBX));
  /* 11be1037 push esi */
  push32((uint32_t)(ESI));
  /* 11be1038 push edi */
  push32((uint32_t)(EDI));
  /* 11be1039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11be103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11be1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11be1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be1048 mov esi, esp */
  ESI = (ESP);
  /* 11be104a push 0x11c0b1c0 */
  push32((uint32_t)(0x11c0b1c0u));
  /* 11be104f push 0x11c10450 */
  push32((uint32_t)(0x11c10450u));
  /* 11be1054 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be105au);
  /* 11be105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be105f call 0x11be37c0 */
  push32(0x11be1064u); f_11be37c0();
  /* 11be1064 mov esi, esp */
  ESI = (ESP);
  /* 11be1066 push 0x11c0b1b4 */
  push32((uint32_t)(0x11c0b1b4u));
  /* 11be106b push 0x11c105c8 */
  push32((uint32_t)(0x11c105c8u));
  /* 11be1070 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be1076u);
  /* 11be1076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be107b call 0x11be37c0 */
  push32(0x11be1080u); f_11be37c0();
  /* 11be1080 mov esi, esp */
  ESI = (ESP);
  /* 11be1082 push 0x11c0b1a8 */
  push32((uint32_t)(0x11c0b1a8u));
  /* 11be1087 push 0x11c105c0 */
  push32((uint32_t)(0x11c105c0u));
  /* 11be108c call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be1092u);
  /* 11be1092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1097 call 0x11be37c0 */
  push32(0x11be109cu); f_11be37c0();
  /* 11be109c mov esi, esp */
  ESI = (ESP);
  /* 11be109e push 0x11c0b1a0 */
  push32((uint32_t)(0x11c0b1a0u));
  /* 11be10a3 push 0x11c10530 */
  push32((uint32_t)(0x11c10530u));
  /* 11be10a8 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be10aeu);
  /* 11be10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be10b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be10b3 call 0x11be37c0 */
  push32(0x11be10b8u); f_11be37c0();
  /* 11be10b8 mov esi, esp */
  ESI = (ESP);
  /* 11be10ba push 0x11c0b198 */
  push32((uint32_t)(0x11c0b198u));
  /* 11be10bf push 0x11c10528 */
  push32((uint32_t)(0x11c10528u));
  /* 11be10c4 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be10cau);
  /* 11be10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be10cf call 0x11be37c0 */
  push32(0x11be10d4u); f_11be37c0();
  /* 11be10d4 mov esi, esp */
  ESI = (ESP);
  /* 11be10d6 push 0x11c0b190 */
  push32((uint32_t)(0x11c0b190u));
  /* 11be10db push 0x11c10540 */
  push32((uint32_t)(0x11c10540u));
  /* 11be10e0 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be10e6u);
  /* 11be10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be10eb call 0x11be37c0 */
  push32(0x11be10f0u); f_11be37c0();
  /* 11be10f0 mov esi, esp */
  ESI = (ESP);
  /* 11be10f2 push 0x11c0b188 */
  push32((uint32_t)(0x11c0b188u));
  /* 11be10f7 push 0x11c10538 */
  push32((uint32_t)(0x11c10538u));
  /* 11be10fc call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be1102u);
  /* 11be1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1107 call 0x11be37c0 */
  push32(0x11be110cu); f_11be37c0();
  /* 11be110c mov esi, esp */
  ESI = (ESP);
  /* 11be110e push 0x11c0b180 */
  push32((uint32_t)(0x11c0b180u));
  /* 11be1113 push 0x11c104f0 */
  push32((uint32_t)(0x11c104f0u));
  /* 11be1118 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be111eu);
  /* 11be111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1123 call 0x11be37c0 */
  push32(0x11be1128u); f_11be37c0();
  /* 11be1128 mov esi, esp */
  ESI = (ESP);
  /* 11be112a push 0x11c0b178 */
  push32((uint32_t)(0x11c0b178u));
  /* 11be112f push 0x11c104e0 */
  push32((uint32_t)(0x11c104e0u));
  /* 11be1134 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be113au);
  /* 11be113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be113f call 0x11be37c0 */
  push32(0x11be1144u); f_11be37c0();
  /* 11be1144 mov esi, esp */
  ESI = (ESP);
  /* 11be1146 push 0x11c0b170 */
  push32((uint32_t)(0x11c0b170u));
  /* 11be114b push 0x11c10500 */
  push32((uint32_t)(0x11c10500u));
  /* 11be1150 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be1156u);
  /* 11be1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be115b call 0x11be37c0 */
  push32(0x11be1160u); f_11be37c0();
  /* 11be1160 mov esi, esp */
  ESI = (ESP);
  /* 11be1162 push 0x11c0b168 */
  push32((uint32_t)(0x11c0b168u));
  /* 11be1167 push 0x11c104f8 */
  push32((uint32_t)(0x11c104f8u));
  /* 11be116c call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be1172u);
  /* 11be1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1177 call 0x11be37c0 */
  push32(0x11be117cu); f_11be37c0();
  /* 11be117c mov esi, esp */
  ESI = (ESP);
  /* 11be117e push 0x11c0b160 */
  push32((uint32_t)(0x11c0b160u));
  /* 11be1183 push 0x11c10498 */
  push32((uint32_t)(0x11c10498u));
  /* 11be1188 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be118eu);
  /* 11be118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1193 call 0x11be37c0 */
  push32(0x11be1198u); f_11be37c0();
  /* 11be1198 mov esi, esp */
  ESI = (ESP);
  /* 11be119a push 0x11c0b158 */
  push32((uint32_t)(0x11c0b158u));
  /* 11be119f push 0x11c104c0 */
  push32((uint32_t)(0x11c104c0u));
  /* 11be11a4 call dword ptr [0x11c13494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13494))), 0x11be11aau);
  /* 11be11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be11af call 0x11be37c0 */
  push32(0x11be11b4u); f_11be37c0();
  /* 11be11b4 mov esi, esp */
  ESI = (ESP);
  /* 11be11b6 push 0x11c0b14c */
  push32((uint32_t)(0x11c0b14cu));
  /* 11be11bb push 0x11c10570 */
  push32((uint32_t)(0x11c10570u));
  /* 11be11c0 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be11c6u);
  /* 11be11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be11cb call 0x11be37c0 */
  push32(0x11be11d0u); f_11be37c0();
  /* 11be11d0 mov esi, esp */
  ESI = (ESP);
  /* 11be11d2 push 0x11c0b140 */
  push32((uint32_t)(0x11c0b140u));
  /* 11be11d7 push 0x11c10578 */
  push32((uint32_t)(0x11c10578u));
  /* 11be11dc call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be11e2u);
  /* 11be11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be11e7 call 0x11be37c0 */
  push32(0x11be11ecu); f_11be37c0();
  /* 11be11ec mov esi, esp */
  ESI = (ESP);
  /* 11be11ee push 0x11c0b134 */
  push32((uint32_t)(0x11c0b134u));
  /* 11be11f3 push 0x11c10560 */
  push32((uint32_t)(0x11c10560u));
  /* 11be11f8 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be11feu);
  /* 11be11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1203 call 0x11be37c0 */
  push32(0x11be1208u); f_11be37c0();
  /* 11be1208 mov esi, esp */
  ESI = (ESP);
  /* 11be120a push 0x11c0b128 */
  push32((uint32_t)(0x11c0b128u));
  /* 11be120f push 0x11c10568 */
  push32((uint32_t)(0x11c10568u));
  /* 11be1214 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be121au);
  /* 11be121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be121f call 0x11be37c0 */
  push32(0x11be1224u); f_11be37c0();
  /* 11be1224 mov esi, esp */
  ESI = (ESP);
  /* 11be1226 push 0x11c0b11c */
  push32((uint32_t)(0x11c0b11cu));
  /* 11be122b push 0x11c10590 */
  push32((uint32_t)(0x11c10590u));
  /* 11be1230 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be1236u);
  /* 11be1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be123b call 0x11be37c0 */
  push32(0x11be1240u); f_11be37c0();
  /* 11be1240 mov esi, esp */
  ESI = (ESP);
  /* 11be1242 push 0x11c0b110 */
  push32((uint32_t)(0x11c0b110u));
  /* 11be1247 push 0x11c10598 */
  push32((uint32_t)(0x11c10598u));
  /* 11be124c call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be1252u);
  /* 11be1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1257 call 0x11be37c0 */
  push32(0x11be125cu); f_11be37c0();
  /* 11be125c mov esi, esp */
  ESI = (ESP);
  /* 11be125e push 0x11c0b104 */
  push32((uint32_t)(0x11c0b104u));
  /* 11be1263 push 0x11c10580 */
  push32((uint32_t)(0x11c10580u));
  /* 11be1268 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be126eu);
  /* 11be126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1273 call 0x11be37c0 */
  push32(0x11be1278u); f_11be37c0();
  /* 11be1278 mov esi, esp */
  ESI = (ESP);
  /* 11be127a push 0x11c0b0f8 */
  push32((uint32_t)(0x11c0b0f8u));
  /* 11be127f push 0x11c10588 */
  push32((uint32_t)(0x11c10588u));
  /* 11be1284 call dword ptr [0x11c13498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13498))), 0x11be128au);
  /* 11be128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be128f call 0x11be37c0 */
  push32(0x11be1294u); f_11be37c0();
  /* 11be1294 mov esi, esp */
  ESI = (ESP);
  /* 11be1296 push 0x11c0b0e8 */
  push32((uint32_t)(0x11c0b0e8u));
  /* 11be129b push 0x11c10448 */
  push32((uint32_t)(0x11c10448u));
  /* 11be12a0 call dword ptr [0x11c1349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1349c))), 0x11be12a6u);
  /* 11be12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be12ab call 0x11be37c0 */
  push32(0x11be12b0u); f_11be37c0();
  /* 11be12b0 mov esi, esp */
  ESI = (ESP);
  /* 11be12b2 push 0x11c0b0d8 */
  push32((uint32_t)(0x11c0b0d8u));
  /* 11be12b7 push 0x11c10520 */
  push32((uint32_t)(0x11c10520u));
  /* 11be12bc call dword ptr [0x11c1349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1349c))), 0x11be12c2u);
  /* 11be12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be12c7 call 0x11be37c0 */
  push32(0x11be12ccu); f_11be37c0();
  /* 11be12cc mov esi, esp */
  ESI = (ESP);
  /* 11be12ce push 0x11c0b0d0 */
  push32((uint32_t)(0x11c0b0d0u));
  /* 11be12d3 push 0x11c10558 */
  push32((uint32_t)(0x11c10558u));
  /* 11be12d8 call dword ptr [0x11c134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a0))), 0x11be12deu);
  /* 11be12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be12e3 call 0x11be37c0 */
  push32(0x11be12e8u); f_11be37c0();
  /* 11be12e8 mov esi, esp */
  ESI = (ESP);
  /* 11be12ea push 8 */
  push32((uint32_t)(0x8u));
  /* 11be12ec push 0x11c10428 */
  push32((uint32_t)(0x11c10428u));
  /* 11be12f1 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be12f7u);
  /* 11be12f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be12fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be12fc call 0x11be37c0 */
  push32(0x11be1301u); f_11be37c0();
  /* 11be1301 mov esi, esp */
  ESI = (ESP);
  /* 11be1303 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1305 push 0x11c10420 */
  push32((uint32_t)(0x11c10420u));
  /* 11be130a call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1310u);
  /* 11be1310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1315 call 0x11be37c0 */
  push32(0x11be131au); f_11be37c0();
  /* 11be131a mov esi, esp */
  ESI = (ESP);
  /* 11be131c push 8 */
  push32((uint32_t)(0x8u));
  /* 11be131e push 0x11c10438 */
  push32((uint32_t)(0x11c10438u));
  /* 11be1323 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1329u);
  /* 11be1329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be132c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be132e call 0x11be37c0 */
  push32(0x11be1333u); f_11be37c0();
  /* 11be1333 mov esi, esp */
  ESI = (ESP);
  /* 11be1335 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1337 push 0x11c10430 */
  push32((uint32_t)(0x11c10430u));
  /* 11be133c call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1342u);
  /* 11be1342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1347 call 0x11be37c0 */
  push32(0x11be134cu); f_11be37c0();
  /* 11be134c mov esi, esp */
  ESI = (ESP);
  /* 11be134e push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1350 push 0x11c103f8 */
  push32((uint32_t)(0x11c103f8u));
  /* 11be1355 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be135bu);
  /* 11be135b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be135e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1360 call 0x11be37c0 */
  push32(0x11be1365u); f_11be37c0();
  /* 11be1365 mov esi, esp */
  ESI = (ESP);
  /* 11be1367 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1369 push 0x11c103f0 */
  push32((uint32_t)(0x11c103f0u));
  /* 11be136e call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1374u);
  /* 11be1374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1379 call 0x11be37c0 */
  push32(0x11be137eu); f_11be37c0();
  /* 11be137e mov esi, esp */
  ESI = (ESP);
  /* 11be1380 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1382 push 0x11c10408 */
  push32((uint32_t)(0x11c10408u));
  /* 11be1387 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be138du);
  /* 11be138d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1392 call 0x11be37c0 */
  push32(0x11be1397u); f_11be37c0();
  /* 11be1397 mov esi, esp */
  ESI = (ESP);
  /* 11be1399 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be139b push 0x11c10400 */
  push32((uint32_t)(0x11c10400u));
  /* 11be13a0 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be13a6u);
  /* 11be13a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be13a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be13ab call 0x11be37c0 */
  push32(0x11be13b0u); f_11be37c0();
  /* 11be13b0 mov esi, esp */
  ESI = (ESP);
  /* 11be13b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be13b4 push 0x11c10410 */
  push32((uint32_t)(0x11c10410u));
  /* 11be13b9 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be13bfu);
  /* 11be13bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be13c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be13c4 call 0x11be37c0 */
  push32(0x11be13c9u); f_11be37c0();
  /* 11be13c9 mov esi, esp */
  ESI = (ESP);
  /* 11be13cb push 8 */
  push32((uint32_t)(0x8u));
  /* 11be13cd push 0x11c10460 */
  push32((uint32_t)(0x11c10460u));
  /* 11be13d2 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be13d8u);
  /* 11be13d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be13db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be13dd call 0x11be37c0 */
  push32(0x11be13e2u); f_11be37c0();
  /* 11be13e2 mov esi, esp */
  ESI = (ESP);
  /* 11be13e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be13e6 push 0x11c10458 */
  push32((uint32_t)(0x11c10458u));
  /* 11be13eb call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be13f1u);
  /* 11be13f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be13f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be13f6 call 0x11be37c0 */
  push32(0x11be13fbu); f_11be37c0();
  /* 11be13fb mov esi, esp */
  ESI = (ESP);
  /* 11be13fd push 8 */
  push32((uint32_t)(0x8u));
  /* 11be13ff push 0x11c104a0 */
  push32((uint32_t)(0x11c104a0u));
  /* 11be1404 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be140au);
  /* 11be140a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be140d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be140f call 0x11be37c0 */
  push32(0x11be1414u); f_11be37c0();
  /* 11be1414 mov esi, esp */
  ESI = (ESP);
  /* 11be1416 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1418 push 0x11c10490 */
  push32((uint32_t)(0x11c10490u));
  /* 11be141d call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1423u);
  /* 11be1423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1428 call 0x11be37c0 */
  push32(0x11be142du); f_11be37c0();
  /* 11be142d mov esi, esp */
  ESI = (ESP);
  /* 11be142f push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1431 push 0x11c104b8 */
  push32((uint32_t)(0x11c104b8u));
  /* 11be1436 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be143cu);
  /* 11be143c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be143f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1441 call 0x11be37c0 */
  push32(0x11be1446u); f_11be37c0();
  /* 11be1446 mov esi, esp */
  ESI = (ESP);
  /* 11be1448 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be144a push 0x11c104a8 */
  push32((uint32_t)(0x11c104a8u));
  /* 11be144f call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1455u);
  /* 11be1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be145a call 0x11be37c0 */
  push32(0x11be145fu); f_11be37c0();
  /* 11be145f mov esi, esp */
  ESI = (ESP);
  /* 11be1461 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1463 push 0x11c10478 */
  push32((uint32_t)(0x11c10478u));
  /* 11be1468 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be146eu);
  /* 11be146e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1471 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1473 call 0x11be37c0 */
  push32(0x11be1478u); f_11be37c0();
  /* 11be1478 mov esi, esp */
  ESI = (ESP);
  /* 11be147a push 8 */
  push32((uint32_t)(0x8u));
  /* 11be147c push 0x11c10470 */
  push32((uint32_t)(0x11c10470u));
  /* 11be1481 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1487u);
  /* 11be1487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be148a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be148c call 0x11be37c0 */
  push32(0x11be1491u); f_11be37c0();
  /* 11be1491 mov esi, esp */
  ESI = (ESP);
  /* 11be1493 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be1495 push 0x11c10488 */
  push32((uint32_t)(0x11c10488u));
  /* 11be149a call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be14a0u);
  /* 11be14a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be14a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be14a5 call 0x11be37c0 */
  push32(0x11be14aau); f_11be37c0();
  /* 11be14aa mov esi, esp */
  ESI = (ESP);
  /* 11be14ac push 8 */
  push32((uint32_t)(0x8u));
  /* 11be14ae push 0x11c10480 */
  push32((uint32_t)(0x11c10480u));
  /* 11be14b3 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be14b9u);
  /* 11be14b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be14bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be14be call 0x11be37c0 */
  push32(0x11be14c3u); f_11be37c0();
  /* 11be14c3 mov esi, esp */
  ESI = (ESP);
  /* 11be14c5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be14c7 push 0x11c104b0 */
  push32((uint32_t)(0x11c104b0u));
  /* 11be14cc call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be14d2u);
  /* 11be14d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be14d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be14d7 call 0x11be37c0 */
  push32(0x11be14dcu); f_11be37c0();
  /* 11be14dc mov esi, esp */
  ESI = (ESP);
  /* 11be14de push 4 */
  push32((uint32_t)(0x4u));
  /* 11be14e0 push 0x11c10468 */
  push32((uint32_t)(0x11c10468u));
  /* 11be14e5 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be14ebu);
  /* 11be14eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be14ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be14f0 call 0x11be37c0 */
  push32(0x11be14f5u); f_11be37c0();
  /* 11be14f5 mov esi, esp */
  ESI = (ESP);
  /* 11be14f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be14f9 push 0x11c104c8 */
  push32((uint32_t)(0x11c104c8u));
  /* 11be14fe call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1504u);
  /* 11be1504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1507 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1509 call 0x11be37c0 */
  push32(0x11be150eu); f_11be37c0();
  /* 11be150e mov esi, esp */
  ESI = (ESP);
  /* 11be1510 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1512 push 0x11c10518 */
  push32((uint32_t)(0x11c10518u));
  /* 11be1517 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be151du);
  /* 11be151d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1520 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1522 call 0x11be37c0 */
  push32(0x11be1527u); f_11be37c0();
  /* 11be1527 mov esi, esp */
  ESI = (ESP);
  /* 11be1529 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be152b push 0x11c10548 */
  push32((uint32_t)(0x11c10548u));
  /* 11be1530 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1536u);
  /* 11be1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be153b call 0x11be37c0 */
  push32(0x11be1540u); f_11be37c0();
  /* 11be1540 mov esi, esp */
  ESI = (ESP);
  /* 11be1542 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1544 push 0x11c1054c */
  push32((uint32_t)(0x11c1054cu));
  /* 11be1549 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be154fu);
  /* 11be154f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1554 call 0x11be37c0 */
  push32(0x11be1559u); f_11be37c0();
  /* 11be1559 mov esi, esp */
  ESI = (ESP);
  /* 11be155b push 4 */
  push32((uint32_t)(0x4u));
  /* 11be155d push 0x11c10550 */
  push32((uint32_t)(0x11c10550u));
  /* 11be1562 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1568u);
  /* 11be1568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be156b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be156d call 0x11be37c0 */
  push32(0x11be1572u); f_11be37c0();
  /* 11be1572 mov esi, esp */
  ESI = (ESP);
  /* 11be1574 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1576 push 0x11c105b8 */
  push32((uint32_t)(0x11c105b8u));
  /* 11be157b call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be1581u);
  /* 11be1581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1584 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1586 call 0x11be37c0 */
  push32(0x11be158bu); f_11be37c0();
  /* 11be158b mov esi, esp */
  ESI = (ESP);
  /* 11be158d push 4 */
  push32((uint32_t)(0x4u));
  /* 11be158f push 0x11c105d0 */
  push32((uint32_t)(0x11c105d0u));
  /* 11be1594 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be159au);
  /* 11be159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be159f call 0x11be37c0 */
  push32(0x11be15a4u); f_11be37c0();
  /* 11be15a4 mov esi, esp */
  ESI = (ESP);
  /* 11be15a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be15a8 push 0x11c1046c */
  push32((uint32_t)(0x11c1046cu));
  /* 11be15ad call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be15b3u);
  /* 11be15b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be15b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be15b8 call 0x11be37c0 */
  push32(0x11be15bdu); f_11be37c0();
  /* 11be15bd mov esi, esp */
  ESI = (ESP);
  /* 11be15bf push 4 */
  push32((uint32_t)(0x4u));
  /* 11be15c1 push 0x11c10418 */
  push32((uint32_t)(0x11c10418u));
  /* 11be15c6 call dword ptr [0x11c134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a4))), 0x11be15ccu);
  /* 11be15cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be15cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be15d1 call 0x11be37c0 */
  push32(0x11be15d6u); f_11be37c0();
  /* 11be15d6 mov esi, esp */
  ESI = (ESP);
  /* 11be15d8 push 0x11c0b0c8 */
  push32((uint32_t)(0x11c0b0c8u));
  /* 11be15dd push 0x11c105b0 */
  push32((uint32_t)(0x11c105b0u));
  /* 11be15e2 call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be15e8u);
  /* 11be15e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be15eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be15ed call 0x11be37c0 */
  push32(0x11be15f2u); f_11be37c0();
  /* 11be15f2 mov esi, esp */
  ESI = (ESP);
  /* 11be15f4 push 0x11c0b0b8 */
  push32((uint32_t)(0x11c0b0b8u));
  /* 11be15f9 push 0x11c104d8 */
  push32((uint32_t)(0x11c104d8u));
  /* 11be15fe call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be1604u);
  /* 11be1604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1609 call 0x11be37c0 */
  push32(0x11be160eu); f_11be37c0();
  /* 11be160e mov esi, esp */
  ESI = (ESP);
  /* 11be1610 push 0x11c0b0a8 */
  push32((uint32_t)(0x11c0b0a8u));
  /* 11be1615 push 0x11c10508 */
  push32((uint32_t)(0x11c10508u));
  /* 11be161a call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be1620u);
  /* 11be1620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1623 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1625 call 0x11be37c0 */
  push32(0x11be162au); f_11be37c0();
  /* 11be162a mov esi, esp */
  ESI = (ESP);
  /* 11be162c push 0x11c0b098 */
  push32((uint32_t)(0x11c0b098u));
  /* 11be1631 push 0x11c10510 */
  push32((uint32_t)(0x11c10510u));
  /* 11be1636 call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be163cu);
  /* 11be163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be163f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1641 call 0x11be37c0 */
  push32(0x11be1646u); f_11be37c0();
  /* 11be1646 mov esi, esp */
  ESI = (ESP);
  /* 11be1648 push 0x11c0b088 */
  push32((uint32_t)(0x11c0b088u));
  /* 11be164d push 0x11c104e8 */
  push32((uint32_t)(0x11c104e8u));
  /* 11be1652 call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be1658u);
  /* 11be1658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be165b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be165d call 0x11be37c0 */
  push32(0x11be1662u); f_11be37c0();
  /* 11be1662 mov esi, esp */
  ESI = (ESP);
  /* 11be1664 push 0x11c0b078 */
  push32((uint32_t)(0x11c0b078u));
  /* 11be1669 push 0x11c104d0 */
  push32((uint32_t)(0x11c104d0u));
  /* 11be166e call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be1674u);
  /* 11be1674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1679 call 0x11be37c0 */
  push32(0x11be167eu); f_11be37c0();
  /* 11be167e mov esi, esp */
  ESI = (ESP);
  /* 11be1680 push 0x11c0b070 */
  push32((uint32_t)(0x11c0b070u));
  /* 11be1685 push 0x11c105a8 */
  push32((uint32_t)(0x11c105a8u));
  /* 11be168a call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be1690u);
  /* 11be1690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1695 call 0x11be37c0 */
  push32(0x11be169au); f_11be37c0();
  /* 11be169a mov esi, esp */
  ESI = (ESP);
  /* 11be169c push 0x11c0b064 */
  push32((uint32_t)(0x11c0b064u));
  /* 11be16a1 push 0x11c103e0 */
  push32((uint32_t)(0x11c103e0u));
  /* 11be16a6 call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be16acu);
  /* 11be16ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be16af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be16b1 call 0x11be37c0 */
  push32(0x11be16b6u); f_11be37c0();
  /* 11be16b6 mov esi, esp */
  ESI = (ESP);
  /* 11be16b8 push 0x11c0b058 */
  push32((uint32_t)(0x11c0b058u));
  /* 11be16bd push 0x11c103e8 */
  push32((uint32_t)(0x11c103e8u));
  /* 11be16c2 call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be16c8u);
  /* 11be16c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be16cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be16cd call 0x11be37c0 */
  push32(0x11be16d2u); f_11be37c0();
  /* 11be16d2 mov esi, esp */
  ESI = (ESP);
  /* 11be16d4 push 0x11c0b050 */
  push32((uint32_t)(0x11c0b050u));
  /* 11be16d9 push 0x11c10440 */
  push32((uint32_t)(0x11c10440u));
  /* 11be16de call dword ptr [0x11c134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134a8))), 0x11be16e4u);
  /* 11be16e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be16e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be16e9 call 0x11be37c0 */
  push32(0x11be16eeu); f_11be37c0();
  /* 11be16ee mov esi, esp */
  ESI = (ESP);
  /* 11be16f0 push 0x11c10428 */
  push32((uint32_t)(0x11c10428u));
  /* 11be16f5 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be16fbu);
  /* 11be16fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be16fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1700 call 0x11be37c0 */
  push32(0x11be1705u); f_11be37c0();
  /* 11be1705 mov esi, esp */
  ESI = (ESP);
  /* 11be1707 push 0x11c10420 */
  push32((uint32_t)(0x11c10420u));
  /* 11be170c call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1712u);
  /* 11be1712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1717 call 0x11be37c0 */
  push32(0x11be171cu); f_11be37c0();
  /* 11be171c mov esi, esp */
  ESI = (ESP);
  /* 11be171e push 0x11c10438 */
  push32((uint32_t)(0x11c10438u));
  /* 11be1723 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1729u);
  /* 11be1729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be172c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be172e call 0x11be37c0 */
  push32(0x11be1733u); f_11be37c0();
  /* 11be1733 mov esi, esp */
  ESI = (ESP);
  /* 11be1735 push 0x11c10430 */
  push32((uint32_t)(0x11c10430u));
  /* 11be173a call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1740u);
  /* 11be1740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1745 call 0x11be37c0 */
  push32(0x11be174au); f_11be37c0();
  /* 11be174a mov esi, esp */
  ESI = (ESP);
  /* 11be174c push 0x11c103f8 */
  push32((uint32_t)(0x11c103f8u));
  /* 11be1751 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1757u);
  /* 11be1757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be175c call 0x11be37c0 */
  push32(0x11be1761u); f_11be37c0();
  /* 11be1761 mov esi, esp */
  ESI = (ESP);
  /* 11be1763 push 0x11c103f0 */
  push32((uint32_t)(0x11c103f0u));
  /* 11be1768 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be176eu);
  /* 11be176e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1773 call 0x11be37c0 */
  push32(0x11be1778u); f_11be37c0();
  /* 11be1778 mov esi, esp */
  ESI = (ESP);
  /* 11be177a push 0x11c10408 */
  push32((uint32_t)(0x11c10408u));
  /* 11be177f call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1785u);
  /* 11be1785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be178a call 0x11be37c0 */
  push32(0x11be178fu); f_11be37c0();
  /* 11be178f mov esi, esp */
  ESI = (ESP);
  /* 11be1791 push 0x11c10400 */
  push32((uint32_t)(0x11c10400u));
  /* 11be1796 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be179cu);
  /* 11be179c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be179f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be17a1 call 0x11be37c0 */
  push32(0x11be17a6u); f_11be37c0();
  /* 11be17a6 mov esi, esp */
  ESI = (ESP);
  /* 11be17a8 push 0x11c10410 */
  push32((uint32_t)(0x11c10410u));
  /* 11be17ad call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be17b3u);
  /* 11be17b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be17b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be17b8 call 0x11be37c0 */
  push32(0x11be17bdu); f_11be37c0();
  /* 11be17bd mov esi, esp */
  ESI = (ESP);
  /* 11be17bf push 0x11c10460 */
  push32((uint32_t)(0x11c10460u));
  /* 11be17c4 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be17cau);
  /* 11be17ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be17cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be17cf call 0x11be37c0 */
  push32(0x11be17d4u); f_11be37c0();
  /* 11be17d4 mov esi, esp */
  ESI = (ESP);
  /* 11be17d6 push 0x11c10458 */
  push32((uint32_t)(0x11c10458u));
  /* 11be17db call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be17e1u);
  /* 11be17e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be17e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be17e6 call 0x11be37c0 */
  push32(0x11be17ebu); f_11be37c0();
  /* 11be17eb mov esi, esp */
  ESI = (ESP);
  /* 11be17ed push 0x11c104a0 */
  push32((uint32_t)(0x11c104a0u));
  /* 11be17f2 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be17f8u);
  /* 11be17f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be17fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be17fd call 0x11be37c0 */
  push32(0x11be1802u); f_11be37c0();
  /* 11be1802 mov esi, esp */
  ESI = (ESP);
  /* 11be1804 push 0x11c10490 */
  push32((uint32_t)(0x11c10490u));
  /* 11be1809 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be180fu);
  /* 11be180f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1814 call 0x11be37c0 */
  push32(0x11be1819u); f_11be37c0();
  /* 11be1819 mov esi, esp */
  ESI = (ESP);
  /* 11be181b push 0x11c104b8 */
  push32((uint32_t)(0x11c104b8u));
  /* 11be1820 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1826u);
  /* 11be1826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1829 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be182b call 0x11be37c0 */
  push32(0x11be1830u); f_11be37c0();
  /* 11be1830 mov esi, esp */
  ESI = (ESP);
  /* 11be1832 push 0x11c104a8 */
  push32((uint32_t)(0x11c104a8u));
  /* 11be1837 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be183du);
  /* 11be183d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1842 call 0x11be37c0 */
  push32(0x11be1847u); f_11be37c0();
  /* 11be1847 mov esi, esp */
  ESI = (ESP);
  /* 11be1849 push 0x11c10478 */
  push32((uint32_t)(0x11c10478u));
  /* 11be184e call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1854u);
  /* 11be1854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1859 call 0x11be37c0 */
  push32(0x11be185eu); f_11be37c0();
  /* 11be185e mov esi, esp */
  ESI = (ESP);
  /* 11be1860 push 0x11c10470 */
  push32((uint32_t)(0x11c10470u));
  /* 11be1865 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be186bu);
  /* 11be186b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be186e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1870 call 0x11be37c0 */
  push32(0x11be1875u); f_11be37c0();
  /* 11be1875 mov esi, esp */
  ESI = (ESP);
  /* 11be1877 push 0x11c10488 */
  push32((uint32_t)(0x11c10488u));
  /* 11be187c call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1882u);
  /* 11be1882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1887 call 0x11be37c0 */
  push32(0x11be188cu); f_11be37c0();
  /* 11be188c mov esi, esp */
  ESI = (ESP);
  /* 11be188e push 0x11c10480 */
  push32((uint32_t)(0x11c10480u));
  /* 11be1893 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be1899u);
  /* 11be1899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be189c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be189e call 0x11be37c0 */
  push32(0x11be18a3u); f_11be37c0();
  /* 11be18a3 mov esi, esp */
  ESI = (ESP);
  /* 11be18a5 push 0x11c104b0 */
  push32((uint32_t)(0x11c104b0u));
  /* 11be18aa call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be18b0u);
  /* 11be18b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be18b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be18b5 call 0x11be37c0 */
  push32(0x11be18bau); f_11be37c0();
  /* 11be18ba mov esi, esp */
  ESI = (ESP);
  /* 11be18bc push 0x11c105a0 */
  push32((uint32_t)(0x11c105a0u));
  /* 11be18c1 call dword ptr [0x11c134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134ac))), 0x11be18c7u);
  /* 11be18c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be18ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be18cc call 0x11be37c0 */
  push32(0x11be18d1u); f_11be37c0();
  /* 11be18d1 mov esi, esp */
  ESI = (ESP);
  /* 11be18d3 push 0x11c0b044 */
  push32((uint32_t)(0x11c0b044u));
  /* 11be18d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be18da call dword ptr [0x11c134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b0))), 0x11be18e0u);
  /* 11be18e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be18e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be18e5 call 0x11be37c0 */
  push32(0x11be18eau); f_11be37c0();
  /* 11be18ea mov esi, esp */
  ESI = (ESP);
  /* 11be18ec push 0x11c0b038 */
  push32((uint32_t)(0x11c0b038u));
  /* 11be18f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be18f3 call dword ptr [0x11c134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b0))), 0x11be18f9u);
  /* 11be18f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be18fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be18fe call 0x11be37c0 */
  push32(0x11be1903u); f_11be37c0();
  /* 11be1903 mov esi, esp */
  ESI = (ESP);
  /* 11be1905 push 0x11c0b030 */
  push32((uint32_t)(0x11c0b030u));
  /* 11be190a push 3 */
  push32((uint32_t)(0x3u));
  /* 11be190c call dword ptr [0x11c134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b0))), 0x11be1912u);
  /* 11be1912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1917 call 0x11be37c0 */
  push32(0x11be191cu); f_11be37c0();
  /* 11be191c mov esi, esp */
  ESI = (ESP);
  /* 11be191e push 0x11c0b024 */
  push32((uint32_t)(0x11c0b024u));
  /* 11be1923 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1925 call dword ptr [0x11c134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b0))), 0x11be192bu);
  /* 11be192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1930 call 0x11be37c0 */
  push32(0x11be1935u); f_11be37c0();
  /* 11be1935 mov esi, esp */
  ESI = (ESP);
  /* 11be1937 push 0x11c0b01c */
  push32((uint32_t)(0x11c0b01cu));
  /* 11be193c push 5 */
  push32((uint32_t)(0x5u));
  /* 11be193e call dword ptr [0x11c134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b0))), 0x11be1944u);
  /* 11be1944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1949 call 0x11be37c0 */
  push32(0x11be194eu); f_11be37c0();
  /* 11be194e mov esi, esp */
  ESI = (ESP);
  /* 11be1950 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be1952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1954 call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be195au);
  /* 11be195a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be195d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be195f call 0x11be37c0 */
  push32(0x11be1964u); f_11be37c0();
  /* 11be1964 mov esi, esp */
  ESI = (ESP);
  /* 11be1966 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11be1968 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be196a call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be1970u);
  /* 11be1970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1975 call 0x11be37c0 */
  push32(0x11be197au); f_11be37c0();
  /* 11be197a mov esi, esp */
  ESI = (ESP);
  /* 11be197c push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11be197e push 2 */
  push32((uint32_t)(0x2u));
  /* 11be1980 call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be1986u);
  /* 11be1986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1989 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be198b call 0x11be37c0 */
  push32(0x11be1990u); f_11be37c0();
  /* 11be1990 mov esi, esp */
  ESI = (ESP);
  /* 11be1992 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11be1994 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be1996 call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be199cu);
  /* 11be199c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be199f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be19a1 call 0x11be37c0 */
  push32(0x11be19a6u); f_11be37c0();
  /* 11be19a6 mov esi, esp */
  ESI = (ESP);
  /* 11be19a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11be19aa push 4 */
  push32((uint32_t)(0x4u));
  /* 11be19ac call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be19b2u);
  /* 11be19b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be19b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be19b7 call 0x11be37c0 */
  push32(0x11be19bcu); f_11be37c0();
  /* 11be19bc mov esi, esp */
  ESI = (ESP);
  /* 11be19be push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11be19c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be19c2 call dword ptr [0x11c134b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b4))), 0x11be19c8u);
  /* 11be19c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be19cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be19cd call 0x11be37c0 */
  push32(0x11be19d2u); f_11be37c0();
  /* 11be19d2 mov esi, esp */
  ESI = (ESP);
  /* 11be19d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be19d6 push 0x11c10448 */
  push32((uint32_t)(0x11c10448u));
  /* 11be19db push 0 */
  push32((uint32_t)(0x0u));
  /* 11be19dd call dword ptr [0x11c134b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b8))), 0x11be19e3u);
  /* 11be19e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be19e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be19e8 call 0x11be37c0 */
  push32(0x11be19edu); f_11be37c0();
  /* 11be19ed mov esi, esp */
  ESI = (ESP);
  /* 11be19ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11be19f1 push 0x11c10520 */
  push32((uint32_t)(0x11c10520u));
  /* 11be19f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be19f8 call dword ptr [0x11c134b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c134b8))), 0x11be19feu);
  /* 11be19fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1a03 call 0x11be37c0 */
  push32(0x11be1a08u); f_11be37c0();
  /* 11be1a08 pop edi */
  EDI = (pop32());
  /* 11be1a09 pop esi */
  ESI = (pop32());
  /* 11be1a0a pop ebx */
  EBX = (pop32());
  /* 11be1a0b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1a0e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1a10 call 0x11be37c0 */
  push32(0x11be1a15u); f_11be37c0();
  /* 11be1a15 mov esp, ebp */
  ESP = (EBP);
  /* 11be1a17 pop ebp */
  EBP = (pop32());
  /* 11be1a18 ret  */
  ESPCHK(0x11be1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ca0 @ 0x11be1ca0 (67 bytes, 26 insns) */
void f_11be1ca0(void) {
  FTRACE(0x11be1ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be1ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be1ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11be1ca3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be1ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be1ca7 push esi */
  push32((uint32_t)(ESI));
  /* 11be1ca8 push edi */
  push32((uint32_t)(EDI));
  /* 11be1ca9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11be1cac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11be1cb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11be1cb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be1cb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be1cbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be1cbe cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1cc2 je 0x11be1cc6 */
  if (C.zf) goto L_11be1cc6;
  /* 11be1cc4 jmp 0x11be1ccb */
  goto L_11be1ccb;
L_11be1cc6:;
  /* 11be1cc6 call 0x11be1005 */
  push32(0x11be1ccbu); f_11be1005();
L_11be1ccb:;
  /* 11be1ccb mov eax, 1 */
  EAX = (0x1u);
  /* 11be1cd0 pop edi */
  EDI = (pop32());
  /* 11be1cd1 pop esi */
  ESI = (pop32());
  /* 11be1cd2 pop ebx */
  EBX = (pop32());
  /* 11be1cd3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1cd6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1cd8 call 0x11be37c0 */
  push32(0x11be1cddu); f_11be37c0();
  /* 11be1cdd mov esp, ebp */
  ESP = (EBP);
  /* 11be1cdf pop ebp */
  EBP = (pop32());
  /* 11be1ce0 ret 0xc */
  ESPCHK(0x11be1ca0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001d00 @ 0x11be1d00 (5274 bytes, 1545 insns) [1 switch table(s)] */
void f_11be1d00(void) {
  FTRACE(0x11be1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11be1d01 mov ebp, esp */
  EBP = (ESP);
  /* 11be1d03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be1d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11be1d07 push esi */
  push32((uint32_t)(ESI));
  /* 11be1d08 push edi */
  push32((uint32_t)(EDI));
  /* 11be1d09 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11be1d0c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11be1d11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11be1d16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be1d18 mov esi, esp */
  ESI = (ESP);
  /* 11be1d1a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11be1d1c call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be1d22u);
  /* 11be1d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d27 call 0x11be37c0 */
  push32(0x11be1d2cu); f_11be37c0();
  /* 11be1d2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be1d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be1d33 je 0x11be25ab */
  if (C.zf) goto L_11be25ab;
  /* 11be1d39 mov esi, esp */
  ESI = (ESP);
  /* 11be1d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1d3d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11be1d3f call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be1d45u);
  /* 11be1d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d4a call 0x11be37c0 */
  push32(0x11be1d4fu); f_11be37c0();
  /* 11be1d4f mov esi, esp */
  ESI = (ESP);
  /* 11be1d51 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11be1d53 call dword ptr [0x11c1342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1342c))), 0x11be1d59u);
  /* 11be1d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d5e call 0x11be37c0 */
  push32(0x11be1d63u); f_11be37c0();
  /* 11be1d63 mov esi, esp */
  ESI = (ESP);
  /* 11be1d65 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11be1d67 call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be1d6du);
  /* 11be1d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d72 call 0x11be37c0 */
  push32(0x11be1d77u); f_11be37c0();
  /* 11be1d77 mov esi, esp */
  ESI = (ESP);
  /* 11be1d79 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11be1d7b call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be1d81u);
  /* 11be1d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d86 call 0x11be37c0 */
  push32(0x11be1d8bu); f_11be37c0();
  /* 11be1d8b mov esi, esp */
  ESI = (ESP);
  /* 11be1d8d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11be1d8f call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be1d95u);
  /* 11be1d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1d9a call 0x11be37c0 */
  push32(0x11be1d9fu); f_11be37c0();
  /* 11be1d9f mov esi, esp */
  ESI = (ESP);
  /* 11be1da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1da3 call dword ptr [0x11c13434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13434))), 0x11be1da9u);
  /* 11be1da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1dae call 0x11be37c0 */
  push32(0x11be1db3u); f_11be37c0();
  /* 11be1db3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be1db6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1dba ja 0x11be2226 */
  if ((!C.cf&&!C.zf)) goto L_11be2226;
  /* 11be1dc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be1dc3 jmp dword ptr [eax*4 + 0x11be319a] */
  switch (EAX) {
    case 0: goto L_11be1dca;
    case 1: goto L_11be1f19;
    case 2: goto L_11be1fed;
    case 3: goto L_11be20da;
    default: x86_unimpl("switch@0x11be1dc3 out of table"); return;
  }
L_11be1dca:;
  /* 11be1dca mov esi, esp */
  ESI = (ESP);
  /* 11be1dcc push 0xfde8 */
  push32((uint32_t)(0xfde8u));
  /* 11be1dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be1dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1dd5 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1ddbu);
  /* 11be1ddb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1dde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1de0 call 0x11be37c0 */
  push32(0x11be1de5u); f_11be37c0();
  /* 11be1de5 mov esi, esp */
  ESI = (ESP);
  /* 11be1de7 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1dec push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1dee push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1df0 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1df6u);
  /* 11be1df6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1df9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1dfb call 0x11be37c0 */
  push32(0x11be1e00u); f_11be37c0();
  /* 11be1e00 mov esi, esp */
  ESI = (ESP);
  /* 11be1e02 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be1e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1e0b call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1e11u);
  /* 11be1e11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e16 call 0x11be37c0 */
  push32(0x11be1e1bu); f_11be37c0();
  /* 11be1e1b mov esi, esp */
  ESI = (ESP);
  /* 11be1e1d push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be1e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1e26 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1e2cu);
  /* 11be1e2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e31 call 0x11be37c0 */
  push32(0x11be1e36u); f_11be37c0();
  /* 11be1e36 mov esi, esp */
  ESI = (ESP);
  /* 11be1e38 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1e3d push 5 */
  push32((uint32_t)(0x5u));
  /* 11be1e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1e41 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1e47u);
  /* 11be1e47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e4c call 0x11be37c0 */
  push32(0x11be1e51u); f_11be37c0();
  /* 11be1e51 mov esi, esp */
  ESI = (ESP);
  /* 11be1e53 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1e58 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1e5c call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1e62u);
  /* 11be1e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e67 call 0x11be37c0 */
  push32(0x11be1e6cu); f_11be37c0();
  /* 11be1e6c mov esi, esp */
  ESI = (ESP);
  /* 11be1e6e push 0x11c0b2a0 */
  push32((uint32_t)(0x11c0b2a0u));
  /* 11be1e73 push 0x11c0b1b4 */
  push32((uint32_t)(0x11c0b1b4u));
  /* 11be1e78 call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1e7eu);
  /* 11be1e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e83 call 0x11be37c0 */
  push32(0x11be1e88u); f_11be37c0();
  /* 11be1e88 mov esi, esp */
  ESI = (ESP);
  /* 11be1e8a push 0x11c0b294 */
  push32((uint32_t)(0x11c0b294u));
  /* 11be1e8f push 0x11c0b1b4 */
  push32((uint32_t)(0x11c0b1b4u));
  /* 11be1e94 call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1e9au);
  /* 11be1e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1e9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1e9f call 0x11be37c0 */
  push32(0x11be1ea4u); f_11be37c0();
  /* 11be1ea4 mov esi, esp */
  ESI = (ESP);
  /* 11be1ea6 push 0x11c0b288 */
  push32((uint32_t)(0x11c0b288u));
  /* 11be1eab push 0x11c0b1b4 */
  push32((uint32_t)(0x11c0b1b4u));
  /* 11be1eb0 call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1eb6u);
  /* 11be1eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1ebb call 0x11be37c0 */
  push32(0x11be1ec0u); f_11be37c0();
  /* 11be1ec0 mov esi, esp */
  ESI = (ESP);
  /* 11be1ec2 push 0x11c0b2a0 */
  push32((uint32_t)(0x11c0b2a0u));
  /* 11be1ec7 push 0x11c0b1c0 */
  push32((uint32_t)(0x11c0b1c0u));
  /* 11be1ecc call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1ed2u);
  /* 11be1ed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1ed7 call 0x11be37c0 */
  push32(0x11be1edcu); f_11be37c0();
  /* 11be1edc mov esi, esp */
  ESI = (ESP);
  /* 11be1ede push 0x11c0b294 */
  push32((uint32_t)(0x11c0b294u));
  /* 11be1ee3 push 0x11c0b1c0 */
  push32((uint32_t)(0x11c0b1c0u));
  /* 11be1ee8 call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1eeeu);
  /* 11be1eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1ef1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1ef3 call 0x11be37c0 */
  push32(0x11be1ef8u); f_11be37c0();
  /* 11be1ef8 mov esi, esp */
  ESI = (ESP);
  /* 11be1efa push 0x11c0b288 */
  push32((uint32_t)(0x11c0b288u));
  /* 11be1eff push 0x11c0b1c0 */
  push32((uint32_t)(0x11c0b1c0u));
  /* 11be1f04 call dword ptr [0x11c1343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1343c))), 0x11be1f0au);
  /* 11be1f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f0f call 0x11be37c0 */
  push32(0x11be1f14u); f_11be37c0();
  /* 11be1f14 jmp 0x11be2226 */
  goto L_11be2226;
L_11be1f19:;
  /* 11be1f19 mov esi, esp */
  ESI = (ESP);
  /* 11be1f1b push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11be1f20 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be1f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f24 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1f2au);
  /* 11be1f2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f2f call 0x11be37c0 */
  push32(0x11be1f34u); f_11be37c0();
  /* 11be1f34 mov esi, esp */
  ESI = (ESP);
  /* 11be1f36 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11be1f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f3f call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1f45u);
  /* 11be1f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f4a call 0x11be37c0 */
  push32(0x11be1f4fu); f_11be37c0();
  /* 11be1f4f mov esi, esp */
  ESI = (ESP);
  /* 11be1f51 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11be1f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be1f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f5a call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1f60u);
  /* 11be1f60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f65 call 0x11be37c0 */
  push32(0x11be1f6au); f_11be37c0();
  /* 11be1f6a mov esi, esp */
  ESI = (ESP);
  /* 11be1f6c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11be1f71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be1f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f75 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1f7bu);
  /* 11be1f7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f80 call 0x11be37c0 */
  push32(0x11be1f85u); f_11be37c0();
  /* 11be1f85 mov esi, esp */
  ESI = (ESP);
  /* 11be1f87 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11be1f8c push 5 */
  push32((uint32_t)(0x5u));
  /* 11be1f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1f90 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1f96u);
  /* 11be1f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1f99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1f9b call 0x11be37c0 */
  push32(0x11be1fa0u); f_11be37c0();
  /* 11be1fa0 mov esi, esp */
  ESI = (ESP);
  /* 11be1fa2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11be1fa7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be1fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1fab call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1fb1u);
  /* 11be1fb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1fb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1fb6 call 0x11be37c0 */
  push32(0x11be1fbbu); f_11be37c0();
  /* 11be1fbb mov esi, esp */
  ESI = (ESP);
  /* 11be1fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1fbf push 0x11c10498 */
  push32((uint32_t)(0x11c10498u));
  /* 11be1fc4 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be1fcau);
  /* 11be1fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1fcf call 0x11be37c0 */
  push32(0x11be1fd4u); f_11be37c0();
  /* 11be1fd4 mov esi, esp */
  ESI = (ESP);
  /* 11be1fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be1fd8 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be1fdeu);
  /* 11be1fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be1fe1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be1fe3 call 0x11be37c0 */
  push32(0x11be1fe8u); f_11be37c0();
  /* 11be1fe8 jmp 0x11be2226 */
  goto L_11be2226;
L_11be1fed:;
  /* 11be1fed mov esi, esp */
  ESI = (ESP);
  /* 11be1fef push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11be1ff4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be1ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be1ff8 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be1ffeu);
  /* 11be1ffe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2003 call 0x11be37c0 */
  push32(0x11be2008u); f_11be37c0();
  /* 11be2008 mov esi, esp */
  ESI = (ESP);
  /* 11be200a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11be200f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2011 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2013 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2019u);
  /* 11be2019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be201c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be201e call 0x11be37c0 */
  push32(0x11be2023u); f_11be37c0();
  /* 11be2023 mov esi, esp */
  ESI = (ESP);
  /* 11be2025 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11be202a push 2 */
  push32((uint32_t)(0x2u));
  /* 11be202c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be202e call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2034u);
  /* 11be2034 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2037 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2039 call 0x11be37c0 */
  push32(0x11be203eu); f_11be37c0();
  /* 11be203e mov esi, esp */
  ESI = (ESP);
  /* 11be2040 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11be2045 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2049 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be204fu);
  /* 11be204f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2054 call 0x11be37c0 */
  push32(0x11be2059u); f_11be37c0();
  /* 11be2059 mov esi, esp */
  ESI = (ESP);
  /* 11be205b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11be2060 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be2062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2064 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be206au);
  /* 11be206a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be206d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be206f call 0x11be37c0 */
  push32(0x11be2074u); f_11be37c0();
  /* 11be2074 mov esi, esp */
  ESI = (ESP);
  /* 11be2076 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11be207b push 4 */
  push32((uint32_t)(0x4u));
  /* 11be207d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be207f call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2085u);
  /* 11be2085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2088 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be208a call 0x11be37c0 */
  push32(0x11be208fu); f_11be37c0();
  /* 11be208f mov esi, esp */
  ESI = (ESP);
  /* 11be2091 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2093 push 0x11c10498 */
  push32((uint32_t)(0x11c10498u));
  /* 11be2098 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be209eu);
  /* 11be209e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be20a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be20a3 call 0x11be37c0 */
  push32(0x11be20a8u); f_11be37c0();
  /* 11be20a8 mov esi, esp */
  ESI = (ESP);
  /* 11be20aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11be20ac push 0x11c104c0 */
  push32((uint32_t)(0x11c104c0u));
  /* 11be20b1 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be20b7u);
  /* 11be20b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be20ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be20bc call 0x11be37c0 */
  push32(0x11be20c1u); f_11be37c0();
  /* 11be20c1 mov esi, esp */
  ESI = (ESP);
  /* 11be20c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be20c5 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be20cbu);
  /* 11be20cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be20ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be20d0 call 0x11be37c0 */
  push32(0x11be20d5u); f_11be37c0();
  /* 11be20d5 jmp 0x11be2226 */
  goto L_11be2226;
L_11be20da:;
  /* 11be20da mov esi, esp */
  ESI = (ESP);
  /* 11be20dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be20e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be20e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be20e5 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be20ebu);
  /* 11be20eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be20ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be20f0 call 0x11be37c0 */
  push32(0x11be20f5u); f_11be37c0();
  /* 11be20f5 mov esi, esp */
  ESI = (ESP);
  /* 11be20f7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be20fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11be20fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2100 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2106u);
  /* 11be2106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be210b call 0x11be37c0 */
  push32(0x11be2110u); f_11be37c0();
  /* 11be2110 mov esi, esp */
  ESI = (ESP);
  /* 11be2112 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2117 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2119 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be211b call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2121u);
  /* 11be2121 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2126 call 0x11be37c0 */
  push32(0x11be212bu); f_11be37c0();
  /* 11be212b mov esi, esp */
  ESI = (ESP);
  /* 11be212d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2132 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2136 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be213cu);
  /* 11be213c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2141 call 0x11be37c0 */
  push32(0x11be2146u); f_11be37c0();
  /* 11be2146 mov esi, esp */
  ESI = (ESP);
  /* 11be2148 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be214d push 5 */
  push32((uint32_t)(0x5u));
  /* 11be214f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2151 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2157u);
  /* 11be2157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be215a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be215c call 0x11be37c0 */
  push32(0x11be2161u); f_11be37c0();
  /* 11be2161 mov esi, esp */
  ESI = (ESP);
  /* 11be2163 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2168 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be216a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be216c call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2172u);
  /* 11be2172 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2177 call 0x11be37c0 */
  push32(0x11be217cu); f_11be37c0();
  /* 11be217c mov esi, esp */
  ESI = (ESP);
  /* 11be217e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2180 push 0x11c10498 */
  push32((uint32_t)(0x11c10498u));
  /* 11be2185 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be218bu);
  /* 11be218b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be218e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2190 call 0x11be37c0 */
  push32(0x11be2195u); f_11be37c0();
  /* 11be2195 mov esi, esp */
  ESI = (ESP);
  /* 11be2197 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2199 push 0x11c104c0 */
  push32((uint32_t)(0x11c104c0u));
  /* 11be219e call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be21a4u);
  /* 11be21a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be21a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be21a9 call 0x11be37c0 */
  push32(0x11be21aeu); f_11be37c0();
  /* 11be21ae mov esi, esp */
  ESI = (ESP);
  /* 11be21b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be21b2 push 0x11c10530 */
  push32((uint32_t)(0x11c10530u));
  /* 11be21b7 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be21bdu);
  /* 11be21bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be21c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be21c2 call 0x11be37c0 */
  push32(0x11be21c7u); f_11be37c0();
  /* 11be21c7 mov esi, esp */
  ESI = (ESP);
  /* 11be21c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be21cb push 0x11c10528 */
  push32((uint32_t)(0x11c10528u));
  /* 11be21d0 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be21d6u);
  /* 11be21d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be21d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be21db call 0x11be37c0 */
  push32(0x11be21e0u); f_11be37c0();
  /* 11be21e0 mov esi, esp */
  ESI = (ESP);
  /* 11be21e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be21e4 push 0x11c10540 */
  push32((uint32_t)(0x11c10540u));
  /* 11be21e9 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be21efu);
  /* 11be21ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be21f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be21f4 call 0x11be37c0 */
  push32(0x11be21f9u); f_11be37c0();
  /* 11be21f9 mov esi, esp */
  ESI = (ESP);
  /* 11be21fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11be21fd push 0x11c10538 */
  push32((uint32_t)(0x11c10538u));
  /* 11be2202 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2208u);
  /* 11be2208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be220d call 0x11be37c0 */
  push32(0x11be2212u); f_11be37c0();
  /* 11be2212 mov esi, esp */
  ESI = (ESP);
  /* 11be2214 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2216 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be221cu);
  /* 11be221c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be221f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2221 call 0x11be37c0 */
  push32(0x11be2226u); f_11be37c0();
L_11be2226:;
  /* 11be2226 mov esi, esp */
  ESI = (ESP);
  /* 11be2228 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be222a call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be2230u);
  /* 11be2230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2233 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2235 call 0x11be37c0 */
  push32(0x11be223au); f_11be37c0();
  /* 11be223a mov esi, esp */
  ESI = (ESP);
  /* 11be223c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11be2241 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2243 call dword ptr [0x11c1344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1344c))), 0x11be2249u);
  /* 11be2249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be224c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be224e call 0x11be37c0 */
  push32(0x11be2253u); f_11be37c0();
  /* 11be2253 mov esi, esp */
  ESI = (ESP);
  /* 11be2255 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be225a push 3 */
  push32((uint32_t)(0x3u));
  /* 11be225c push 2 */
  push32((uint32_t)(0x2u));
  /* 11be225e call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2264u);
  /* 11be2264 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2269 call 0x11be37c0 */
  push32(0x11be226eu); f_11be37c0();
  /* 11be226e mov esi, esp */
  ESI = (ESP);
  /* 11be2270 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2277 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2279 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be227fu);
  /* 11be227f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2284 call 0x11be37c0 */
  push32(0x11be2289u); f_11be37c0();
  /* 11be2289 mov esi, esp */
  ESI = (ESP);
  /* 11be228b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2290 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2292 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2294 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be229au);
  /* 11be229a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be229d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be229f call 0x11be37c0 */
  push32(0x11be22a4u); f_11be37c0();
  /* 11be22a4 mov esi, esp */
  ESI = (ESP);
  /* 11be22a6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be22ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11be22ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11be22af call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be22b5u);
  /* 11be22b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be22b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be22ba call 0x11be37c0 */
  push32(0x11be22bfu); f_11be37c0();
  /* 11be22bf mov esi, esp */
  ESI = (ESP);
  /* 11be22c1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be22c6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be22c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be22ca call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be22d0u);
  /* 11be22d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be22d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be22d5 call 0x11be37c0 */
  push32(0x11be22dau); f_11be37c0();
  /* 11be22da mov esi, esp */
  ESI = (ESP);
  /* 11be22dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be22e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be22e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be22e5 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be22ebu);
  /* 11be22eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be22ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be22f0 call 0x11be37c0 */
  push32(0x11be22f5u); f_11be37c0();
  /* 11be22f5 mov esi, esp */
  ESI = (ESP);
  /* 11be22f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be22f9 call dword ptr [0x11c13434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13434))), 0x11be22ffu);
  /* 11be22ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2302 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2304 call 0x11be37c0 */
  push32(0x11be2309u); f_11be37c0();
  /* 11be2309 mov esi, esp */
  ESI = (ESP);
  /* 11be230b push eax */
  push32((uint32_t)(EAX));
  /* 11be230c push 2 */
  push32((uint32_t)(0x2u));
  /* 11be230e push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2310 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2312 push 0x11c0b27c */
  push32((uint32_t)(0x11c0b27cu));
  /* 11be2317 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2319 call dword ptr [0x11c13450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13450))), 0x11be231fu);
  /* 11be231f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2324 call 0x11be37c0 */
  push32(0x11be2329u); f_11be37c0();
  /* 11be2329 mov esi, esp */
  ESI = (ESP);
  /* 11be232b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2330 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2332 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2334 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be233au);
  /* 11be233a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be233d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be233f call 0x11be37c0 */
  push32(0x11be2344u); f_11be37c0();
  /* 11be2344 mov esi, esp */
  ESI = (ESP);
  /* 11be2346 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be234b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be234d push 3 */
  push32((uint32_t)(0x3u));
  /* 11be234f call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2355u);
  /* 11be2355 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be235a call 0x11be37c0 */
  push32(0x11be235fu); f_11be37c0();
  /* 11be235f mov esi, esp */
  ESI = (ESP);
  /* 11be2361 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2366 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2368 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be236a call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2370u);
  /* 11be2370 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2375 call 0x11be37c0 */
  push32(0x11be237au); f_11be37c0();
  /* 11be237a mov esi, esp */
  ESI = (ESP);
  /* 11be237c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2381 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2383 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2385 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be238bu);
  /* 11be238b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be238e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2390 call 0x11be37c0 */
  push32(0x11be2395u); f_11be37c0();
  /* 11be2395 mov esi, esp */
  ESI = (ESP);
  /* 11be2397 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be239c push 5 */
  push32((uint32_t)(0x5u));
  /* 11be239e push 3 */
  push32((uint32_t)(0x3u));
  /* 11be23a0 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be23a6u);
  /* 11be23a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be23a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be23ab call 0x11be37c0 */
  push32(0x11be23b0u); f_11be37c0();
  /* 11be23b0 mov esi, esp */
  ESI = (ESP);
  /* 11be23b2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be23b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be23b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be23bb call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be23c1u);
  /* 11be23c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be23c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be23c6 call 0x11be37c0 */
  push32(0x11be23cbu); f_11be37c0();
  /* 11be23cb mov esi, esp */
  ESI = (ESP);
  /* 11be23cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11be23cf call dword ptr [0x11c13434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13434))), 0x11be23d5u);
  /* 11be23d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be23d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be23da call 0x11be37c0 */
  push32(0x11be23dfu); f_11be37c0();
  /* 11be23df mov esi, esp */
  ESI = (ESP);
  /* 11be23e1 push eax */
  push32((uint32_t)(EAX));
  /* 11be23e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be23e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be23e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be23e8 push 0x11c0b270 */
  push32((uint32_t)(0x11c0b270u));
  /* 11be23ed push 3 */
  push32((uint32_t)(0x3u));
  /* 11be23ef call dword ptr [0x11c13450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13450))), 0x11be23f5u);
  /* 11be23f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be23f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be23fa call 0x11be37c0 */
  push32(0x11be23ffu); f_11be37c0();
  /* 11be23ff mov esi, esp */
  ESI = (ESP);
  /* 11be2401 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2406 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2408 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be240a call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2410u);
  /* 11be2410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2415 call 0x11be37c0 */
  push32(0x11be241au); f_11be37c0();
  /* 11be241a mov esi, esp */
  ESI = (ESP);
  /* 11be241c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2423 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2425 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be242bu);
  /* 11be242b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2430 call 0x11be37c0 */
  push32(0x11be2435u); f_11be37c0();
  /* 11be2435 mov esi, esp */
  ESI = (ESP);
  /* 11be2437 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be243c push 2 */
  push32((uint32_t)(0x2u));
  /* 11be243e push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2440 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2446u);
  /* 11be2446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be244b call 0x11be37c0 */
  push32(0x11be2450u); f_11be37c0();
  /* 11be2450 mov esi, esp */
  ESI = (ESP);
  /* 11be2452 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2457 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2459 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be245b call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2461u);
  /* 11be2461 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2466 call 0x11be37c0 */
  push32(0x11be246bu); f_11be37c0();
  /* 11be246b mov esi, esp */
  ESI = (ESP);
  /* 11be246d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2472 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be2474 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2476 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be247cu);
  /* 11be247c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be247f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2481 call 0x11be37c0 */
  push32(0x11be2486u); f_11be37c0();
  /* 11be2486 mov esi, esp */
  ESI = (ESP);
  /* 11be2488 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be248d push 4 */
  push32((uint32_t)(0x4u));
  /* 11be248f push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2491 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2497u);
  /* 11be2497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be249a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be249c call 0x11be37c0 */
  push32(0x11be24a1u); f_11be37c0();
  /* 11be24a1 mov esi, esp */
  ESI = (ESP);
  /* 11be24a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be24a5 call dword ptr [0x11c13434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13434))), 0x11be24abu);
  /* 11be24ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be24ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be24b0 call 0x11be37c0 */
  push32(0x11be24b5u); f_11be37c0();
  /* 11be24b5 mov esi, esp */
  ESI = (ESP);
  /* 11be24b7 push eax */
  push32((uint32_t)(EAX));
  /* 11be24b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be24ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11be24bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11be24be push 0x11c0b264 */
  push32((uint32_t)(0x11c0b264u));
  /* 11be24c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be24c5 call dword ptr [0x11c13450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13450))), 0x11be24cbu);
  /* 11be24cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be24ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be24d0 call 0x11be37c0 */
  push32(0x11be24d5u); f_11be37c0();
  /* 11be24d5 mov esi, esp */
  ESI = (ESP);
  /* 11be24d7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be24dc push 3 */
  push32((uint32_t)(0x3u));
  /* 11be24de push 5 */
  push32((uint32_t)(0x5u));
  /* 11be24e0 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be24e6u);
  /* 11be24e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be24e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be24eb call 0x11be37c0 */
  push32(0x11be24f0u); f_11be37c0();
  /* 11be24f0 mov esi, esp */
  ESI = (ESP);
  /* 11be24f2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be24f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be24f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be24fb call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2501u);
  /* 11be2501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2506 call 0x11be37c0 */
  push32(0x11be250bu); f_11be37c0();
  /* 11be250b mov esi, esp */
  ESI = (ESP);
  /* 11be250d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2512 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2514 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be2516 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be251cu);
  /* 11be251c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be251f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2521 call 0x11be37c0 */
  push32(0x11be2526u); f_11be37c0();
  /* 11be2526 mov esi, esp */
  ESI = (ESP);
  /* 11be2528 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be252d push 1 */
  push32((uint32_t)(0x1u));
  /* 11be252f push 5 */
  push32((uint32_t)(0x5u));
  /* 11be2531 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2537u);
  /* 11be2537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be253a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be253c call 0x11be37c0 */
  push32(0x11be2541u); f_11be37c0();
  /* 11be2541 mov esi, esp */
  ESI = (ESP);
  /* 11be2543 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2548 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be254a push 5 */
  push32((uint32_t)(0x5u));
  /* 11be254c call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be2552u);
  /* 11be2552 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2557 call 0x11be37c0 */
  push32(0x11be255cu); f_11be37c0();
  /* 11be255c mov esi, esp */
  ESI = (ESP);
  /* 11be255e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11be2563 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2565 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be2567 call dword ptr [0x11c13438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13438))), 0x11be256du);
  /* 11be256d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2572 call 0x11be37c0 */
  push32(0x11be2577u); f_11be37c0();
  /* 11be2577 mov esi, esp */
  ESI = (ESP);
  /* 11be2579 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be257b call dword ptr [0x11c13434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13434))), 0x11be2581u);
  /* 11be2581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2584 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2586 call 0x11be37c0 */
  push32(0x11be258bu); f_11be37c0();
  /* 11be258b mov esi, esp */
  ESI = (ESP);
  /* 11be258d push eax */
  push32((uint32_t)(EAX));
  /* 11be258e push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2590 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2592 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2594 push 0x11c0b258 */
  push32((uint32_t)(0x11c0b258u));
  /* 11be2599 push 5 */
  push32((uint32_t)(0x5u));
  /* 11be259b call dword ptr [0x11c13450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13450))), 0x11be25a1u);
  /* 11be25a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be25a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be25a6 call 0x11be37c0 */
  push32(0x11be25abu); f_11be37c0();
L_11be25ab:;
  /* 11be25ab mov esi, esp */
  ESI = (ESP);
  /* 11be25ad push 1 */
  push32((uint32_t)(0x1u));
  /* 11be25af call dword ptr [0x11c13454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13454))), 0x11be25b5u);
  /* 11be25b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be25b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be25ba call 0x11be37c0 */
  push32(0x11be25bfu); f_11be37c0();
  /* 11be25bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be25c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be25c6 je 0x11be267e */
  if (C.zf) goto L_11be267e;
  /* 11be25cc mov esi, esp */
  ESI = (ESP);
  /* 11be25ce push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11be25d0 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be25d6u);
  /* 11be25d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be25d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be25db call 0x11be37c0 */
  push32(0x11be25e0u); f_11be37c0();
  /* 11be25e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be25e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be25e7 je 0x11be267e */
  if (C.zf) goto L_11be267e;
  /* 11be25ed mov esi, esp */
  ESI = (ESP);
  /* 11be25ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11be25f1 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11be25f3 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be25f9u);
  /* 11be25f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be25fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be25fe call 0x11be37c0 */
  push32(0x11be2603u); f_11be37c0();
  /* 11be2603 mov esi, esp */
  ESI = (ESP);
  /* 11be2605 push 0x11c0b24c */
  push32((uint32_t)(0x11c0b24cu));
  /* 11be260a call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2610u);
  /* 11be2610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2615 call 0x11be37c0 */
  push32(0x11be261au); f_11be37c0();
  /* 11be261a mov esi, esp */
  ESI = (ESP);
  /* 11be261c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11be261e call dword ptr [0x11c1342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1342c))), 0x11be2624u);
  /* 11be2624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2629 call 0x11be37c0 */
  push32(0x11be262eu); f_11be37c0();
  /* 11be262e mov esi, esp */
  ESI = (ESP);
  /* 11be2630 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 11be2635 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2637 call dword ptr [0x11c1344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1344c))), 0x11be263du);
  /* 11be263d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2640 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2642 call 0x11be37c0 */
  push32(0x11be2647u); f_11be37c0();
  /* 11be2647 mov esi, esp */
  ESI = (ESP);
  /* 11be2649 call dword ptr [0x11c1345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1345c))), 0x11be264fu);
  /* 11be264f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2651 call 0x11be37c0 */
  push32(0x11be2656u); f_11be37c0();
  /* 11be2656 mov dword ptr [0x11c105d0], eax */
  w32((uint32_t)(0x11c105d0), (EAX));
  /* 11be265b mov esi, esp */
  ESI = (ESP);
  /* 11be265d push 0x30d4 */
  push32((uint32_t)(0x30d4u));
  /* 11be2662 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2664 call dword ptr [0x11c1344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1344c))), 0x11be266au);
  /* 11be266a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be266d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be266f call 0x11be37c0 */
  push32(0x11be2674u); f_11be37c0();
  /* 11be2674 mov dword ptr [0x11c105b8], 4 */
  w32((uint32_t)(0x11c105b8), (0x4u));
L_11be267e:;
  /* 11be267e mov esi, esp */
  ESI = (ESP);
  /* 11be2680 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2682 call dword ptr [0x11c13454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13454))), 0x11be2688u);
  /* 11be2688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be268b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be268d call 0x11be37c0 */
  push32(0x11be2692u); f_11be37c0();
  /* 11be2692 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2699 je 0x11be286f */
  if (C.zf) goto L_11be286f;
  /* 11be269f mov esi, esp */
  ESI = (ESP);
  /* 11be26a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be26a3 push 0x11c104f0 */
  push32((uint32_t)(0x11c104f0u));
  /* 11be26a8 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be26aeu);
  /* 11be26ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be26b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be26b3 call 0x11be37c0 */
  push32(0x11be26b8u); f_11be37c0();
  /* 11be26b8 mov esi, esp */
  ESI = (ESP);
  /* 11be26ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11be26bc push 0x11c10530 */
  push32((uint32_t)(0x11c10530u));
  /* 11be26c1 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be26c7u);
  /* 11be26c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be26ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be26cc call 0x11be37c0 */
  push32(0x11be26d1u); f_11be37c0();
  /* 11be26d1 mov esi, esp */
  ESI = (ESP);
  /* 11be26d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be26d5 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11be26da push 0x11c10570 */
  push32((uint32_t)(0x11c10570u));
  /* 11be26df push 1 */
  push32((uint32_t)(0x1u));
  /* 11be26e1 call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be26e7u);
  /* 11be26e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be26ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be26ec call 0x11be37c0 */
  push32(0x11be26f1u); f_11be37c0();
  /* 11be26f1 mov esi, esp */
  ESI = (ESP);
  /* 11be26f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be26f5 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11be26fa push 0x11c10578 */
  push32((uint32_t)(0x11c10578u));
  /* 11be26ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2701 call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be2707u);
  /* 11be2707 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be270a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be270c call 0x11be37c0 */
  push32(0x11be2711u); f_11be37c0();
  /* 11be2711 mov esi, esp */
  ESI = (ESP);
  /* 11be2713 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2715 push 0x11c104e0 */
  push32((uint32_t)(0x11c104e0u));
  /* 11be271a call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2720u);
  /* 11be2720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2725 call 0x11be37c0 */
  push32(0x11be272au); f_11be37c0();
  /* 11be272a mov esi, esp */
  ESI = (ESP);
  /* 11be272c push 1 */
  push32((uint32_t)(0x1u));
  /* 11be272e push 0x11c10528 */
  push32((uint32_t)(0x11c10528u));
  /* 11be2733 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2739u);
  /* 11be2739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be273c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be273e call 0x11be37c0 */
  push32(0x11be2743u); f_11be37c0();
  /* 11be2743 mov esi, esp */
  ESI = (ESP);
  /* 11be2745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2747 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11be274c push 0x11c10560 */
  push32((uint32_t)(0x11c10560u));
  /* 11be2751 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2753 call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be2759u);
  /* 11be2759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be275c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be275e call 0x11be37c0 */
  push32(0x11be2763u); f_11be37c0();
  /* 11be2763 mov esi, esp */
  ESI = (ESP);
  /* 11be2765 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2767 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11be276c push 0x11c10568 */
  push32((uint32_t)(0x11c10568u));
  /* 11be2771 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2773 call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be2779u);
  /* 11be2779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be277c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be277e call 0x11be37c0 */
  push32(0x11be2783u); f_11be37c0();
  /* 11be2783 mov esi, esp */
  ESI = (ESP);
  /* 11be2785 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2787 push 0x11c10500 */
  push32((uint32_t)(0x11c10500u));
  /* 11be278c call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2792u);
  /* 11be2792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2797 call 0x11be37c0 */
  push32(0x11be279cu); f_11be37c0();
  /* 11be279c mov esi, esp */
  ESI = (ESP);
  /* 11be279e push 1 */
  push32((uint32_t)(0x1u));
  /* 11be27a0 push 0x11c10540 */
  push32((uint32_t)(0x11c10540u));
  /* 11be27a5 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be27abu);
  /* 11be27ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be27ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be27b0 call 0x11be37c0 */
  push32(0x11be27b5u); f_11be37c0();
  /* 11be27b5 mov esi, esp */
  ESI = (ESP);
  /* 11be27b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be27b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11be27bb push 0x11c10590 */
  push32((uint32_t)(0x11c10590u));
  /* 11be27c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be27c2 call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be27c8u);
  /* 11be27c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be27cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be27cd call 0x11be37c0 */
  push32(0x11be27d2u); f_11be37c0();
  /* 11be27d2 mov esi, esp */
  ESI = (ESP);
  /* 11be27d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be27d6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11be27d8 push 0x11c10598 */
  push32((uint32_t)(0x11c10598u));
  /* 11be27dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11be27df call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be27e5u);
  /* 11be27e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be27e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be27ea call 0x11be37c0 */
  push32(0x11be27efu); f_11be37c0();
  /* 11be27ef mov esi, esp */
  ESI = (ESP);
  /* 11be27f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be27f3 push 0x11c104f8 */
  push32((uint32_t)(0x11c104f8u));
  /* 11be27f8 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be27feu);
  /* 11be27fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2803 call 0x11be37c0 */
  push32(0x11be2808u); f_11be37c0();
  /* 11be2808 mov esi, esp */
  ESI = (ESP);
  /* 11be280a push 1 */
  push32((uint32_t)(0x1u));
  /* 11be280c push 0x11c10538 */
  push32((uint32_t)(0x11c10538u));
  /* 11be2811 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2817u);
  /* 11be2817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be281a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be281c call 0x11be37c0 */
  push32(0x11be2821u); f_11be37c0();
  /* 11be2821 mov esi, esp */
  ESI = (ESP);
  /* 11be2823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2825 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11be2827 push 0x11c10580 */
  push32((uint32_t)(0x11c10580u));
  /* 11be282c push 1 */
  push32((uint32_t)(0x1u));
  /* 11be282e call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be2834u);
  /* 11be2834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2839 call 0x11be37c0 */
  push32(0x11be283eu); f_11be37c0();
  /* 11be283e mov esi, esp */
  ESI = (ESP);
  /* 11be2840 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2842 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11be2844 push 0x11c10588 */
  push32((uint32_t)(0x11c10588u));
  /* 11be2849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be284b call dword ptr [0x11c13460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13460))), 0x11be2851u);
  /* 11be2851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2854 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2856 call 0x11be37c0 */
  push32(0x11be285bu); f_11be37c0();
  /* 11be285b mov esi, esp */
  ESI = (ESP);
  /* 11be285d push 1 */
  push32((uint32_t)(0x1u));
  /* 11be285f call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be2865u);
  /* 11be2865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be286a call 0x11be37c0 */
  push32(0x11be286fu); f_11be37c0();
L_11be286f:;
  /* 11be286f mov esi, esp */
  ESI = (ESP);
  /* 11be2871 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2873 call dword ptr [0x11c13464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13464))), 0x11be2879u);
  /* 11be2879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be287c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be287e call 0x11be37c0 */
  push32(0x11be2883u); f_11be37c0();
  /* 11be2883 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be288a je 0x11be2967 */
  if (C.zf) goto L_11be2967;
  /* 11be2890 mov esi, esp */
  ESI = (ESP);
  /* 11be2892 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11be2894 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be289au);
  /* 11be289a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be289d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be289f call 0x11be37c0 */
  push32(0x11be28a4u); f_11be37c0();
  /* 11be28a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be28a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be28ab je 0x11be2967 */
  if (C.zf) goto L_11be2967;
  /* 11be28b1 mov esi, esp */
  ESI = (ESP);
  /* 11be28b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be28b5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11be28b7 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be28bdu);
  /* 11be28bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be28c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be28c2 call 0x11be37c0 */
  push32(0x11be28c7u); f_11be37c0();
  /* 11be28c7 mov esi, esp */
  ESI = (ESP);
  /* 11be28c9 push 0x11c0b240 */
  push32((uint32_t)(0x11c0b240u));
  /* 11be28ce call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be28d4u);
  /* 11be28d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be28d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be28d9 call 0x11be37c0 */
  push32(0x11be28deu); f_11be37c0();
  /* 11be28de mov esi, esp */
  ESI = (ESP);
  /* 11be28e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be28e2 push 0x11c105c8 */
  push32((uint32_t)(0x11c105c8u));
  /* 11be28e7 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be28edu);
  /* 11be28ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be28f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be28f2 call 0x11be37c0 */
  push32(0x11be28f7u); f_11be37c0();
  /* 11be28f7 mov esi, esp */
  ESI = (ESP);
  /* 11be28f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be28fb push 0x11c10498 */
  push32((uint32_t)(0x11c10498u));
  /* 11be2900 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2906u);
  /* 11be2906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2909 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be290b call 0x11be37c0 */
  push32(0x11be2910u); f_11be37c0();
  /* 11be2910 mov esi, esp */
  ESI = (ESP);
  /* 11be2912 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2914 push 0x11c104c0 */
  push32((uint32_t)(0x11c104c0u));
  /* 11be2919 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be291fu);
  /* 11be291f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2922 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2924 call 0x11be37c0 */
  push32(0x11be2929u); f_11be37c0();
  /* 11be2929 mov esi, esp */
  ESI = (ESP);
  /* 11be292b push 1 */
  push32((uint32_t)(0x1u));
  /* 11be292d call dword ptr [0x11c13468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13468))), 0x11be2933u);
  /* 11be2933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2938 call 0x11be37c0 */
  push32(0x11be293du); f_11be37c0();
  /* 11be293d mov esi, esp */
  ESI = (ESP);
  /* 11be293f push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2941 call dword ptr [0x11c13468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13468))), 0x11be2947u);
  /* 11be2947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be294a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be294c call 0x11be37c0 */
  push32(0x11be2951u); f_11be37c0();
  /* 11be2951 mov esi, esp */
  ESI = (ESP);
  /* 11be2953 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11be2955 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2957 call dword ptr [0x11c1344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1344c))), 0x11be295du);
  /* 11be295d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2960 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2962 call 0x11be37c0 */
  push32(0x11be2967u); f_11be37c0();
L_11be2967:;
  /* 11be2967 mov esi, esp */
  ESI = (ESP);
  /* 11be2969 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be296b push 0x11c10578 */
  push32((uint32_t)(0x11c10578u));
  /* 11be2970 call dword ptr [0x11c1346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1346c))), 0x11be2976u);
  /* 11be2976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2979 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be297b call 0x11be37c0 */
  push32(0x11be2980u); f_11be37c0();
  /* 11be2980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2982 jle 0x11be29c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11be29c7;
  /* 11be2984 mov esi, esp */
  ESI = (ESP);
  /* 11be2986 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2988 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be298a push 0x11c10578 */
  push32((uint32_t)(0x11c10578u));
  /* 11be298f call dword ptr [0x11c13470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13470))), 0x11be2995u);
  /* 11be2995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be299a call 0x11be37c0 */
  push32(0x11be299fu); f_11be37c0();
  /* 11be299f mov esi, esp */
  ESI = (ESP);
  /* 11be29a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be29a3 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be29a9u);
  /* 11be29a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be29ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be29ae call 0x11be37c0 */
  push32(0x11be29b3u); f_11be37c0();
  /* 11be29b3 mov esi, esp */
  ESI = (ESP);
  /* 11be29b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be29b7 call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be29bdu);
  /* 11be29bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be29c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be29c2 call 0x11be37c0 */
  push32(0x11be29c7u); f_11be37c0();
L_11be29c7:;
  /* 11be29c7 mov esi, esp */
  ESI = (ESP);
  /* 11be29c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be29cb push 0x11c10568 */
  push32((uint32_t)(0x11c10568u));
  /* 11be29d0 call dword ptr [0x11c1346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1346c))), 0x11be29d6u);
  /* 11be29d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be29d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be29db call 0x11be37c0 */
  push32(0x11be29e0u); f_11be37c0();
  /* 11be29e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be29e2 jle 0x11be2a27 */
  if ((C.zf||C.sf!=C.of)) goto L_11be2a27;
  /* 11be29e4 mov esi, esp */
  ESI = (ESP);
  /* 11be29e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be29e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be29ea push 0x11c10568 */
  push32((uint32_t)(0x11c10568u));
  /* 11be29ef call dword ptr [0x11c13470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13470))), 0x11be29f5u);
  /* 11be29f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be29f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be29fa call 0x11be37c0 */
  push32(0x11be29ffu); f_11be37c0();
  /* 11be29ff mov esi, esp */
  ESI = (ESP);
  /* 11be2a01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a03 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be2a09u);
  /* 11be2a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a0e call 0x11be37c0 */
  push32(0x11be2a13u); f_11be37c0();
  /* 11be2a13 mov esi, esp */
  ESI = (ESP);
  /* 11be2a15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a17 call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be2a1du);
  /* 11be2a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a22 call 0x11be37c0 */
  push32(0x11be2a27u); f_11be37c0();
L_11be2a27:;
  /* 11be2a27 mov esi, esp */
  ESI = (ESP);
  /* 11be2a29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a2b push 0x11c10598 */
  push32((uint32_t)(0x11c10598u));
  /* 11be2a30 call dword ptr [0x11c1346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1346c))), 0x11be2a36u);
  /* 11be2a36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a3b call 0x11be37c0 */
  push32(0x11be2a40u); f_11be37c0();
  /* 11be2a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2a42 jle 0x11be2a87 */
  if ((C.zf||C.sf!=C.of)) goto L_11be2a87;
  /* 11be2a44 mov esi, esp */
  ESI = (ESP);
  /* 11be2a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2a48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a4a push 0x11c10598 */
  push32((uint32_t)(0x11c10598u));
  /* 11be2a4f call dword ptr [0x11c13470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13470))), 0x11be2a55u);
  /* 11be2a55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a5a call 0x11be37c0 */
  push32(0x11be2a5fu); f_11be37c0();
  /* 11be2a5f mov esi, esp */
  ESI = (ESP);
  /* 11be2a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a63 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be2a69u);
  /* 11be2a69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a6e call 0x11be37c0 */
  push32(0x11be2a73u); f_11be37c0();
  /* 11be2a73 mov esi, esp */
  ESI = (ESP);
  /* 11be2a75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a77 call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be2a7du);
  /* 11be2a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a82 call 0x11be37c0 */
  push32(0x11be2a87u); f_11be37c0();
L_11be2a87:;
  /* 11be2a87 mov esi, esp */
  ESI = (ESP);
  /* 11be2a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2a8b push 0x11c10588 */
  push32((uint32_t)(0x11c10588u));
  /* 11be2a90 call dword ptr [0x11c1346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1346c))), 0x11be2a96u);
  /* 11be2a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2a99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2a9b call 0x11be37c0 */
  push32(0x11be2aa0u); f_11be37c0();
  /* 11be2aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2aa2 jle 0x11be2ae7 */
  if ((C.zf||C.sf!=C.of)) goto L_11be2ae7;
  /* 11be2aa4 mov esi, esp */
  ESI = (ESP);
  /* 11be2aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2aa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2aaa push 0x11c10588 */
  push32((uint32_t)(0x11c10588u));
  /* 11be2aaf call dword ptr [0x11c13470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13470))), 0x11be2ab5u);
  /* 11be2ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ab8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2aba call 0x11be37c0 */
  push32(0x11be2abfu); f_11be37c0();
  /* 11be2abf mov esi, esp */
  ESI = (ESP);
  /* 11be2ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2ac3 call dword ptr [0x11c13444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13444))), 0x11be2ac9u);
  /* 11be2ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2acc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ace call 0x11be37c0 */
  push32(0x11be2ad3u); f_11be37c0();
  /* 11be2ad3 mov esi, esp */
  ESI = (ESP);
  /* 11be2ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2ad7 call dword ptr [0x11c13448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13448))), 0x11be2addu);
  /* 11be2add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ae2 call 0x11be37c0 */
  push32(0x11be2ae7u); f_11be37c0();
L_11be2ae7:;
  /* 11be2ae7 mov esi, esp */
  ESI = (ESP);
  /* 11be2ae9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2aeb call dword ptr [0x11c13454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13454))), 0x11be2af1u);
  /* 11be2af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2af6 call 0x11be37c0 */
  push32(0x11be2afbu); f_11be37c0();
  /* 11be2afb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2b02 je 0x11be2b88 */
  if (C.zf) goto L_11be2b88;
  /* 11be2b08 mov esi, esp */
  ESI = (ESP);
  /* 11be2b0a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11be2b0c call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2b12u);
  /* 11be2b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2b17 call 0x11be37c0 */
  push32(0x11be2b1cu); f_11be37c0();
  /* 11be2b1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2b23 je 0x11be2b88 */
  if (C.zf) goto L_11be2b88;
  /* 11be2b25 mov esi, esp */
  ESI = (ESP);
  /* 11be2b27 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2b29 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2b2fu);
  /* 11be2b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2b34 call 0x11be37c0 */
  push32(0x11be2b39u); f_11be37c0();
  /* 11be2b39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2b40 je 0x11be2b88 */
  if (C.zf) goto L_11be2b88;
  /* 11be2b42 mov ecx, dword ptr [0x11c105b8] */
  ECX = (r32((uint32_t)(0x11c105b8)));
  /* 11be2b48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b4b mov dword ptr [0x11c105b8], ecx */
  w32((uint32_t)(0x11c105b8), (ECX));
  /* 11be2b51 mov esi, esp */
  ESI = (ESP);
  /* 11be2b53 mov edx, dword ptr [0x11c105b8] */
  EDX = (r32((uint32_t)(0x11c105b8)));
  /* 11be2b59 push edx */
  push32((uint32_t)(EDX));
  /* 11be2b5a push 0x11c0b234 */
  push32((uint32_t)(0x11c0b234u));
  /* 11be2b5f call dword ptr [0x11c13474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13474))), 0x11be2b65u);
  /* 11be2b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2b6a call 0x11be37c0 */
  push32(0x11be2b6fu); f_11be37c0();
  /* 11be2b6f mov esi, esp */
  ESI = (ESP);
  /* 11be2b71 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11be2b76 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2b78 call dword ptr [0x11c1344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1344c))), 0x11be2b7eu);
  /* 11be2b7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2b83 call 0x11be37c0 */
  push32(0x11be2b88u); f_11be37c0();
L_11be2b88:;
  /* 11be2b88 mov esi, esp */
  ESI = (ESP);
  /* 11be2b8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11be2b8c call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2b92u);
  /* 11be2b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2b97 call 0x11be37c0 */
  push32(0x11be2b9cu); f_11be37c0();
  /* 11be2b9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2ba3 jne 0x11be2c3d */
  if (!C.zf) goto L_11be2c3d;
  /* 11be2ba9 mov esi, esp */
  ESI = (ESP);
  /* 11be2bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2bad push 0x11c10558 */
  push32((uint32_t)(0x11c10558u));
  /* 11be2bb2 call dword ptr [0x11c13478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13478))), 0x11be2bb8u);
  /* 11be2bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2bbd call 0x11be37c0 */
  push32(0x11be2bc2u); f_11be37c0();
  /* 11be2bc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2bc9 je 0x11be2c3d */
  if (C.zf) goto L_11be2c3d;
  /* 11be2bcb mov esi, esp */
  ESI = (ESP);
  /* 11be2bcd push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2bcf call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2bd5u);
  /* 11be2bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2bda call 0x11be37c0 */
  push32(0x11be2bdfu); f_11be37c0();
  /* 11be2bdf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2be6 je 0x11be2c3d */
  if (C.zf) goto L_11be2c3d;
  /* 11be2be8 mov esi, esp */
  ESI = (ESP);
  /* 11be2bea push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2bec push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2bee call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2bf4u);
  /* 11be2bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2bf9 call 0x11be37c0 */
  push32(0x11be2bfeu); f_11be37c0();
  /* 11be2bfe mov esi, esp */
  ESI = (ESP);
  /* 11be2c00 push 0x11c0b22c */
  push32((uint32_t)(0x11c0b22cu));
  /* 11be2c05 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2c0bu);
  /* 11be2c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c10 call 0x11be37c0 */
  push32(0x11be2c15u); f_11be37c0();
  /* 11be2c15 mov esi, esp */
  ESI = (ESP);
  /* 11be2c17 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11be2c19 call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be2c1fu);
  /* 11be2c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c24 call 0x11be37c0 */
  push32(0x11be2c29u); f_11be37c0();
  /* 11be2c29 mov esi, esp */
  ESI = (ESP);
  /* 11be2c2b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11be2c2d call dword ptr [0x11c1342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1342c))), 0x11be2c33u);
  /* 11be2c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c38 call 0x11be37c0 */
  push32(0x11be2c3du); f_11be37c0();
L_11be2c3d:;
  /* 11be2c3d mov esi, esp */
  ESI = (ESP);
  /* 11be2c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2c41 push 0x11c10558 */
  push32((uint32_t)(0x11c10558u));
  /* 11be2c46 call dword ptr [0x11c13478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13478))), 0x11be2c4cu);
  /* 11be2c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c51 call 0x11be37c0 */
  push32(0x11be2c56u); f_11be37c0();
  /* 11be2c56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2c5d je 0x11be2dbb */
  if (C.zf) goto L_11be2dbb;
  /* 11be2c63 mov esi, esp */
  ESI = (ESP);
  /* 11be2c65 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2c67 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2c6du);
  /* 11be2c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c72 call 0x11be37c0 */
  push32(0x11be2c77u); f_11be37c0();
  /* 11be2c77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2c7e je 0x11be2dbb */
  if (C.zf) goto L_11be2dbb;
  /* 11be2c84 mov esi, esp */
  ESI = (ESP);
  /* 11be2c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2c88 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2c8a call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2c90u);
  /* 11be2c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2c95 call 0x11be37c0 */
  push32(0x11be2c9au); f_11be37c0();
  /* 11be2c9a mov esi, esp */
  ESI = (ESP);
  /* 11be2c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2c9e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11be2ca0 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2ca6u);
  /* 11be2ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ca9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2cab call 0x11be37c0 */
  push32(0x11be2cb0u); f_11be37c0();
  /* 11be2cb0 mov esi, esp */
  ESI = (ESP);
  /* 11be2cb2 call dword ptr [0x11c1345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1345c))), 0x11be2cb8u);
  /* 11be2cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2cba call 0x11be37c0 */
  push32(0x11be2cbfu); f_11be37c0();
  /* 11be2cbf sub eax, dword ptr [0x11c105d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c105d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be2cc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11be2cc6 mov ecx, 0x9c4 */
  ECX = (0x9c4u);
  /* 11be2ccb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11be2ccd mov eax, edx */
  EAX = (EDX);
  /* 11be2ccf imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be2cd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11be2cd3 mov ecx, 0x9c4 */
  ECX = (0x9c4u);
  /* 11be2cd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11be2cda mov dword ptr [0x11c1046c], eax */
  w32((uint32_t)(0x11c1046c), (EAX));
  /* 11be2cdf mov esi, esp */
  ESI = (ESP);
  /* 11be2ce1 call dword ptr [0x11c1345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1345c))), 0x11be2ce7u);
  /* 11be2ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ce9 call 0x11be37c0 */
  push32(0x11be2ceeu); f_11be37c0();
  /* 11be2cee sub eax, dword ptr [0x11c105d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c105d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be2cf4 mov edx, 0x61a8 */
  EDX = (0x61a8u);
  /* 11be2cf9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be2cfb imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be2cfe mov dword ptr [0x11c10418], edx */
  w32((uint32_t)(0x11c10418), (EDX));
  /* 11be2d04 mov esi, esp */
  ESI = (ESP);
  /* 11be2d06 mov eax, dword ptr [0x11c10418] */
  EAX = (r32((uint32_t)(0x11c10418)));
  /* 11be2d0b push eax */
  push32((uint32_t)(EAX));
  /* 11be2d0c mov ecx, dword ptr [0x11c1046c] */
  ECX = (r32((uint32_t)(0x11c1046c)));
  /* 11be2d12 push ecx */
  push32((uint32_t)(ECX));
  /* 11be2d13 mov edx, dword ptr [0x11c105b8] */
  EDX = (r32((uint32_t)(0x11c105b8)));
  /* 11be2d19 push edx */
  push32((uint32_t)(EDX));
  /* 11be2d1a push 0x11c0b220 */
  push32((uint32_t)(0x11c0b220u));
  /* 11be2d1f call dword ptr [0x11c13474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13474))), 0x11be2d25u);
  /* 11be2d25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2d2a call 0x11be37c0 */
  push32(0x11be2d2fu); f_11be37c0();
  /* 11be2d2f mov esi, esp */
  ESI = (ESP);
  /* 11be2d31 mov eax, dword ptr [0x11c10418] */
  EAX = (r32((uint32_t)(0x11c10418)));
  /* 11be2d36 push eax */
  push32((uint32_t)(EAX));
  /* 11be2d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2d3b call dword ptr [0x11c1347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1347c))), 0x11be2d41u);
  /* 11be2d41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2d46 call 0x11be37c0 */
  push32(0x11be2d4bu); f_11be37c0();
  /* 11be2d4b mov esi, esp */
  ESI = (ESP);
  /* 11be2d4d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11be2d4f call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be2d55u);
  /* 11be2d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2d5a call 0x11be37c0 */
  push32(0x11be2d5fu); f_11be37c0();
  /* 11be2d5f mov esi, esp */
  ESI = (ESP);
  /* 11be2d61 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11be2d63 call dword ptr [0x11c1342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1342c))), 0x11be2d69u);
  /* 11be2d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2d6e call 0x11be37c0 */
  push32(0x11be2d73u); f_11be37c0();
  /* 11be2d73 mov esi, esp */
  ESI = (ESP);
  /* 11be2d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2d77 push 0x11c105c8 */
  push32((uint32_t)(0x11c105c8u));
  /* 11be2d7c call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2d82u);
  /* 11be2d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2d87 call 0x11be37c0 */
  push32(0x11be2d8cu); f_11be37c0();
  /* 11be2d8c mov esi, esp */
  ESI = (ESP);
  /* 11be2d8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2d90 push 0x11c105c0 */
  push32((uint32_t)(0x11c105c0u));
  /* 11be2d95 call dword ptr [0x11c13440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13440))), 0x11be2d9bu);
  /* 11be2d9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2d9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2da0 call 0x11be37c0 */
  push32(0x11be2da5u); f_11be37c0();
  /* 11be2da5 mov esi, esp */
  ESI = (ESP);
  /* 11be2da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2da9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be2dab call dword ptr [0x11c13480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13480))), 0x11be2db1u);
  /* 11be2db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2db4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2db6 call 0x11be37c0 */
  push32(0x11be2dbbu); f_11be37c0();
L_11be2dbb:;
  /* 11be2dbb mov esi, esp */
  ESI = (ESP);
  /* 11be2dbd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11be2dbf call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2dc5u);
  /* 11be2dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2dca call 0x11be37c0 */
  push32(0x11be2dcfu); f_11be37c0();
  /* 11be2dcf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2dd6 je 0x11be2e68 */
  if (C.zf) goto L_11be2e68;
  /* 11be2ddc mov esi, esp */
  ESI = (ESP);
  /* 11be2dde push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2de0 call dword ptr [0x11c13484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13484))), 0x11be2de6u);
  /* 11be2de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2de9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2deb call 0x11be37c0 */
  push32(0x11be2df0u); f_11be37c0();
  /* 11be2df0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2df7 je 0x11be2e68 */
  if (C.zf) goto L_11be2e68;
  /* 11be2df9 mov esi, esp */
  ESI = (ESP);
  /* 11be2dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2dfd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11be2dff call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2e05u);
  /* 11be2e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e0a call 0x11be37c0 */
  push32(0x11be2e0fu); f_11be37c0();
  /* 11be2e0f mov esi, esp */
  ESI = (ESP);
  /* 11be2e11 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2e15 call dword ptr [0x11c13488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13488))), 0x11be2e1bu);
  /* 11be2e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e20 call 0x11be37c0 */
  push32(0x11be2e25u); f_11be37c0();
  /* 11be2e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2e27 jle 0x11be2e42 */
  if ((C.zf||C.sf!=C.of)) goto L_11be2e42;
  /* 11be2e29 mov esi, esp */
  ESI = (ESP);
  /* 11be2e2b push 0x11c0b218 */
  push32((uint32_t)(0x11c0b218u));
  /* 11be2e30 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2e36u);
  /* 11be2e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e3b call 0x11be37c0 */
  push32(0x11be2e40u); f_11be37c0();
  /* 11be2e40 jmp 0x11be2e59 */
  goto L_11be2e59;
L_11be2e42:;
  /* 11be2e42 mov esi, esp */
  ESI = (ESP);
  /* 11be2e44 push 0x11c0b20c */
  push32((uint32_t)(0x11c0b20cu));
  /* 11be2e49 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2e4fu);
  /* 11be2e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e54 call 0x11be37c0 */
  push32(0x11be2e59u); f_11be37c0();
L_11be2e59:;
  /* 11be2e59 mov esi, esp */
  ESI = (ESP);
  /* 11be2e5b call dword ptr [0x11c1348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1348c))), 0x11be2e61u);
  /* 11be2e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e63 call 0x11be37c0 */
  push32(0x11be2e68u); f_11be37c0();
L_11be2e68:;
  /* 11be2e68 mov esi, esp */
  ESI = (ESP);
  /* 11be2e6a push 0xf */
  push32((uint32_t)(0xfu));
  /* 11be2e6c call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2e72u);
  /* 11be2e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e77 call 0x11be37c0 */
  push32(0x11be2e7cu); f_11be37c0();
  /* 11be2e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2e83 jne 0x11be2efb */
  if (!C.zf) goto L_11be2efb;
  /* 11be2e85 mov esi, esp */
  ESI = (ESP);
  /* 11be2e87 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11be2e89 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2e8fu);
  /* 11be2e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2e94 call 0x11be37c0 */
  push32(0x11be2e99u); f_11be37c0();
  /* 11be2e99 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2ea0 jne 0x11be2efb */
  if (!C.zf) goto L_11be2efb;
  /* 11be2ea2 mov esi, esp */
  ESI = (ESP);
  /* 11be2ea4 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11be2ea6 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2eacu);
  /* 11be2eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2eb1 call 0x11be37c0 */
  push32(0x11be2eb6u); f_11be37c0();
  /* 11be2eb6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2ebd je 0x11be2efb */
  if (C.zf) goto L_11be2efb;
  /* 11be2ebf mov esi, esp */
  ESI = (ESP);
  /* 11be2ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2ec3 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11be2ec5 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2ecbu);
  /* 11be2ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ece cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ed0 call 0x11be37c0 */
  push32(0x11be2ed5u); f_11be37c0();
  /* 11be2ed5 mov esi, esp */
  ESI = (ESP);
  /* 11be2ed7 push 0x11c0b204 */
  push32((uint32_t)(0x11c0b204u));
  /* 11be2edc call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2ee2u);
  /* 11be2ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ee7 call 0x11be37c0 */
  push32(0x11be2eecu); f_11be37c0();
  /* 11be2eec mov esi, esp */
  ESI = (ESP);
  /* 11be2eee call dword ptr [0x11c13490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13490))), 0x11be2ef4u);
  /* 11be2ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ef6 call 0x11be37c0 */
  push32(0x11be2efbu); f_11be37c0();
L_11be2efb:;
  /* 11be2efb mov esi, esp */
  ESI = (ESP);
  /* 11be2efd push 0xb */
  push32((uint32_t)(0xbu));
  /* 11be2eff call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2f05u);
  /* 11be2f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f0a call 0x11be37c0 */
  push32(0x11be2f0fu); f_11be37c0();
  /* 11be2f0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2f16 je 0x11be2f62 */
  if (C.zf) goto L_11be2f62;
  /* 11be2f18 mov esi, esp */
  ESI = (ESP);
  /* 11be2f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11be2f1c call dword ptr [0x11c13484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13484))), 0x11be2f22u);
  /* 11be2f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f27 call 0x11be37c0 */
  push32(0x11be2f2cu); f_11be37c0();
  /* 11be2f2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2f33 je 0x11be2f62 */
  if (C.zf) goto L_11be2f62;
  /* 11be2f35 mov esi, esp */
  ESI = (ESP);
  /* 11be2f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2f39 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11be2f3b call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2f41u);
  /* 11be2f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f46 call 0x11be37c0 */
  push32(0x11be2f4bu); f_11be37c0();
  /* 11be2f4b mov esi, esp */
  ESI = (ESP);
  /* 11be2f4d push 0x11c0b1f8 */
  push32((uint32_t)(0x11c0b1f8u));
  /* 11be2f52 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2f58u);
  /* 11be2f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f5d call 0x11be37c0 */
  push32(0x11be2f62u); f_11be37c0();
L_11be2f62:;
  /* 11be2f62 mov esi, esp */
  ESI = (ESP);
  /* 11be2f64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11be2f66 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2f6cu);
  /* 11be2f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f71 call 0x11be37c0 */
  push32(0x11be2f76u); f_11be37c0();
  /* 11be2f76 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2f7d je 0x11be2fc9 */
  if (C.zf) goto L_11be2fc9;
  /* 11be2f7f mov esi, esp */
  ESI = (ESP);
  /* 11be2f81 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be2f83 call dword ptr [0x11c13484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13484))), 0x11be2f89u);
  /* 11be2f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2f8e call 0x11be37c0 */
  push32(0x11be2f93u); f_11be37c0();
  /* 11be2f93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2f9a je 0x11be2fc9 */
  if (C.zf) goto L_11be2fc9;
  /* 11be2f9c mov esi, esp */
  ESI = (ESP);
  /* 11be2f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be2fa0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11be2fa2 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be2fa8u);
  /* 11be2fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2fab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2fad call 0x11be37c0 */
  push32(0x11be2fb2u); f_11be37c0();
  /* 11be2fb2 mov esi, esp */
  ESI = (ESP);
  /* 11be2fb4 push 0x11c0b1ec */
  push32((uint32_t)(0x11c0b1ecu));
  /* 11be2fb9 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be2fbfu);
  /* 11be2fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2fc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2fc4 call 0x11be37c0 */
  push32(0x11be2fc9u); f_11be37c0();
L_11be2fc9:;
  /* 11be2fc9 mov esi, esp */
  ESI = (ESP);
  /* 11be2fcb push 0xd */
  push32((uint32_t)(0xdu));
  /* 11be2fcd call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be2fd3u);
  /* 11be2fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2fd8 call 0x11be37c0 */
  push32(0x11be2fddu); f_11be37c0();
  /* 11be2fdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be2fe4 je 0x11be3030 */
  if (C.zf) goto L_11be3030;
  /* 11be2fe6 mov esi, esp */
  ESI = (ESP);
  /* 11be2fe8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be2fea call dword ptr [0x11c13484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13484))), 0x11be2ff0u);
  /* 11be2ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be2ff3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be2ff5 call 0x11be37c0 */
  push32(0x11be2ffau); f_11be37c0();
  /* 11be2ffa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be2fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3001 je 0x11be3030 */
  if (C.zf) goto L_11be3030;
  /* 11be3003 mov esi, esp */
  ESI = (ESP);
  /* 11be3005 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3007 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11be3009 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be300fu);
  /* 11be300f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3014 call 0x11be37c0 */
  push32(0x11be3019u); f_11be37c0();
  /* 11be3019 mov esi, esp */
  ESI = (ESP);
  /* 11be301b push 0x11c0b1e0 */
  push32((uint32_t)(0x11c0b1e0u));
  /* 11be3020 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be3026u);
  /* 11be3026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be302b call 0x11be37c0 */
  push32(0x11be3030u); f_11be37c0();
L_11be3030:;
  /* 11be3030 mov esi, esp */
  ESI = (ESP);
  /* 11be3032 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11be3034 call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be303au);
  /* 11be303a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be303d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be303f call 0x11be37c0 */
  push32(0x11be3044u); f_11be37c0();
  /* 11be3044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be304b je 0x11be3097 */
  if (C.zf) goto L_11be3097;
  /* 11be304d mov esi, esp */
  ESI = (ESP);
  /* 11be304f push 5 */
  push32((uint32_t)(0x5u));
  /* 11be3051 call dword ptr [0x11c13484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13484))), 0x11be3057u);
  /* 11be3057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be305a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be305c call 0x11be37c0 */
  push32(0x11be3061u); f_11be37c0();
  /* 11be3061 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3068 je 0x11be3097 */
  if (C.zf) goto L_11be3097;
  /* 11be306a mov esi, esp */
  ESI = (ESP);
  /* 11be306c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be306e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11be3070 call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be3076u);
  /* 11be3076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be307b call 0x11be37c0 */
  push32(0x11be3080u); f_11be37c0();
  /* 11be3080 mov esi, esp */
  ESI = (ESP);
  /* 11be3082 push 0x11c0b1d4 */
  push32((uint32_t)(0x11c0b1d4u));
  /* 11be3087 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be308du);
  /* 11be308d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3092 call 0x11be37c0 */
  push32(0x11be3097u); f_11be37c0();
L_11be3097:;
  /* 11be3097 mov esi, esp */
  ESI = (ESP);
  /* 11be3099 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11be309b call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be30a1u);
  /* 11be30a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be30a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be30a6 call 0x11be37c0 */
  push32(0x11be30abu); f_11be37c0();
  /* 11be30ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be30b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be30b2 je 0x11be3189 */
  if (C.zf) goto L_11be3189;
  /* 11be30b8 mov esi, esp */
  ESI = (ESP);
  /* 11be30ba push 0xb */
  push32((uint32_t)(0xbu));
  /* 11be30bc call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be30c2u);
  /* 11be30c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be30c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be30c7 call 0x11be37c0 */
  push32(0x11be30ccu); f_11be37c0();
  /* 11be30cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be30d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be30d3 jne 0x11be3189 */
  if (!C.zf) goto L_11be3189;
  /* 11be30d9 mov esi, esp */
  ESI = (ESP);
  /* 11be30db push 0xc */
  push32((uint32_t)(0xcu));
  /* 11be30dd call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be30e3u);
  /* 11be30e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be30e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be30e8 call 0x11be37c0 */
  push32(0x11be30edu); f_11be37c0();
  /* 11be30ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be30f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be30f4 jne 0x11be3189 */
  if (!C.zf) goto L_11be3189;
  /* 11be30fa mov esi, esp */
  ESI = (ESP);
  /* 11be30fc push 0xd */
  push32((uint32_t)(0xdu));
  /* 11be30fe call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be3104u);
  /* 11be3104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3107 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3109 call 0x11be37c0 */
  push32(0x11be310eu); f_11be37c0();
  /* 11be310e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3115 jne 0x11be3189 */
  if (!C.zf) goto L_11be3189;
  /* 11be3117 mov esi, esp */
  ESI = (ESP);
  /* 11be3119 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11be311b call dword ptr [0x11c13424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13424))), 0x11be3121u);
  /* 11be3121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3126 call 0x11be37c0 */
  push32(0x11be312bu); f_11be37c0();
  /* 11be312b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3132 jne 0x11be3189 */
  if (!C.zf) goto L_11be3189;
  /* 11be3134 mov esi, esp */
  ESI = (ESP);
  /* 11be3136 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3138 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11be313a call dword ptr [0x11c13428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13428))), 0x11be3140u);
  /* 11be3140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3145 call 0x11be37c0 */
  push32(0x11be314au); f_11be37c0();
  /* 11be314a mov esi, esp */
  ESI = (ESP);
  /* 11be314c push 0x11c0b1cc */
  push32((uint32_t)(0x11c0b1ccu));
  /* 11be3151 call dword ptr [0x11c13458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13458))), 0x11be3157u);
  /* 11be3157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be315a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be315c call 0x11be37c0 */
  push32(0x11be3161u); f_11be37c0();
  /* 11be3161 mov esi, esp */
  ESI = (ESP);
  /* 11be3163 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11be3165 call dword ptr [0x11c13430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13430))), 0x11be316bu);
  /* 11be316b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be316e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3170 call 0x11be37c0 */
  push32(0x11be3175u); f_11be37c0();
  /* 11be3175 mov esi, esp */
  ESI = (ESP);
  /* 11be3177 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11be3179 call dword ptr [0x11c1342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1342c))), 0x11be317fu);
  /* 11be317f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3182 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3184 call 0x11be37c0 */
  push32(0x11be3189u); f_11be37c0();
L_11be3189:;
  /* 11be3189 pop edi */
  EDI = (pop32());
  /* 11be318a pop esi */
  ESI = (pop32());
  /* 11be318b pop ebx */
  EBX = (pop32());
  /* 11be318c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be318f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3191 call 0x11be37c0 */
  push32(0x11be3196u); f_11be37c0();
  /* 11be3196 mov esp, ebp */
  ESP = (EBP);
  /* 11be3198 pop ebp */
  EBP = (pop32());
  /* 11be3199 ret  */
  ESPCHK(0x11be1d00u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11be37c0 (56 bytes, 28 insns) */
void f_11be37c0(void) {
  FTRACE(0x11be37c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be37c0 jne 0x11be37c3 */
  if (!C.zf) goto L_11be37c3;
  /* 11be37c2 ret  */
  ESPCHK(0x11be37c0u, _esp0);
  ESP += 4; return;
L_11be37c3:;
  /* 11be37c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11be37c4 mov ebp, esp */
  EBP = (ESP);
  /* 11be37c6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be37c9 push eax */
  push32((uint32_t)(EAX));
  /* 11be37ca push edx */
  push32((uint32_t)(EDX));
  /* 11be37cb push ebx */
  push32((uint32_t)(EBX));
  /* 11be37cc push esi */
  push32((uint32_t)(ESI));
  /* 11be37cd push edi */
  push32((uint32_t)(EDI));
  /* 11be37ce push 0x11c0b2c0 */
  push32((uint32_t)(0x11c0b2c0u));
  /* 11be37d3 push 0x11c0b2bc */
  push32((uint32_t)(0x11c0b2bcu));
  /* 11be37d8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11be37da push 0x11c0b2ac */
  push32((uint32_t)(0x11c0b2acu));
  /* 11be37df push 1 */
  push32((uint32_t)(0x1u));
  /* 11be37e1 call 0x11be3b90 */
  push32(0x11be37e6u); f_11be3b90();
  /* 11be37e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be37e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be37ec jne 0x11be37ef */
  if (!C.zf) goto L_11be37ef;
  /* 11be37ee int3  */
  x86_unimpl("int3 @ 0x11be37ee");
L_11be37ef:;
  /* 11be37ef pop edi */
  EDI = (pop32());
  /* 11be37f0 pop esi */
  ESI = (pop32());
  /* 11be37f1 pop ebx */
  EBX = (pop32());
  /* 11be37f2 pop edx */
  EDX = (pop32());
  /* 11be37f3 pop eax */
  EAX = (pop32());
  /* 11be37f4 mov esp, ebp */
  ESP = (EBP);
  /* 11be37f6 pop ebp */
  EBP = (pop32());
  /* 11be37f7 ret  */
  ESPCHK(0x11be37c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x11be3800 (313 bytes, 78 insns) */
void f_11be3800(void) {
  FTRACE(0x11be3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3800 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3801 mov ebp, esp */
  EBP = (ESP);
  /* 11be3803 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3807 jne 0x11be38c7 */
  if (!C.zf) goto L_11be38c7;
  /* 11be380d call dword ptr [0x11c1333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1333c))), 0x11be3813u);
  /* 11be3813 mov dword ptr [0x11c10658], eax */
  w32((uint32_t)(0x11c10658), (EAX));
  /* 11be3818 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be381a call 0x11be72c0 */
  push32(0x11be381fu); f_11be72c0();
  /* 11be381f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3824 jne 0x11be382d */
  if (!C.zf) goto L_11be382d;
  /* 11be3826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3828 jmp 0x11be3935 */
  goto L_11be3935;
L_11be382d:;
  /* 11be382d mov eax, dword ptr [0x11c10658] */
  EAX = (r32((uint32_t)(0x11c10658)));
  /* 11be3832 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11be3835 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be383a mov dword ptr [0x11c10664], eax */
  w32((uint32_t)(0x11c10664), (EAX));
  /* 11be383f mov ecx, dword ptr [0x11c10658] */
  ECX = (r32((uint32_t)(0x11c10658)));
  /* 11be3845 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be384b mov dword ptr [0x11c10660], ecx */
  w32((uint32_t)(0x11c10660), (ECX));
  /* 11be3851 mov edx, dword ptr [0x11c10660] */
  EDX = (r32((uint32_t)(0x11c10660)));
  /* 11be3857 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11be385a add edx, dword ptr [0x11c10664] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c10664))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3860 mov dword ptr [0x11c1065c], edx */
  w32((uint32_t)(0x11c1065c), (EDX));
  /* 11be3866 mov eax, dword ptr [0x11c10658] */
  EAX = (r32((uint32_t)(0x11c10658)));
  /* 11be386b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11be386e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3873 mov dword ptr [0x11c10658], eax */
  w32((uint32_t)(0x11c10658), (EAX));
  /* 11be3878 call 0x11be4430 */
  push32(0x11be387du); f_11be4430();
  /* 11be387d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be387f jne 0x11be388d */
  if (!C.zf) goto L_11be388d;
  /* 11be3881 call 0x11be7310 */
  push32(0x11be3886u); f_11be7310();
  /* 11be3886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3888 jmp 0x11be3935 */
  goto L_11be3935;
L_11be388d:;
  /* 11be388d call dword ptr [0x11c13338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13338))), 0x11be3893u);
  /* 11be3893 mov dword ptr [0x11c121ac], eax */
  w32((uint32_t)(0x11c121ac), (EAX));
  /* 11be3898 call 0x11be70a0 */
  push32(0x11be389du); f_11be70a0();
  /* 11be389d mov dword ptr [0x11c10640], eax */
  w32((uint32_t)(0x11c10640), (EAX));
  /* 11be38a2 call 0x11be46e0 */
  push32(0x11be38a7u); f_11be46e0();
  /* 11be38a7 call 0x11be6b90 */
  push32(0x11be38acu); f_11be6b90();
  /* 11be38ac call 0x11be6a40 */
  push32(0x11be38b1u); f_11be6a40();
  /* 11be38b1 call 0x11be4230 */
  push32(0x11be38b6u); f_11be4230();
  /* 11be38b6 mov ecx, dword ptr [0x11c1063c] */
  ECX = (r32((uint32_t)(0x11c1063c)));
  /* 11be38bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be38bf mov dword ptr [0x11c1063c], ecx */
  w32((uint32_t)(0x11c1063c), (ECX));
  /* 11be38c5 jmp 0x11be3930 */
  goto L_11be3930;
L_11be38c7:;
  /* 11be38c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be38cb jne 0x11be3920 */
  if (!C.zf) goto L_11be3920;
  /* 11be38cd cmp dword ptr [0x11c1063c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1063c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be38d4 jle 0x11be391a */
  if ((C.zf||C.sf!=C.of)) goto L_11be391a;
  /* 11be38d6 mov edx, dword ptr [0x11c1063c] */
  EDX = (r32((uint32_t)(0x11c1063c)));
  /* 11be38dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be38df mov dword ptr [0x11c1063c], edx */
  w32((uint32_t)(0x11c1063c), (EDX));
  /* 11be38e5 cmp dword ptr [0x11c10690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be38ec jne 0x11be38f3 */
  if (!C.zf) goto L_11be38f3;
  /* 11be38ee call 0x11be42b0 */
  push32(0x11be38f3u); f_11be42b0();
L_11be38f3:;
  /* 11be38f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11be38f5 call 0x11be5fe0 */
  push32(0x11be38fau); f_11be5fe0();
  /* 11be38fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be38fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11be3900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3902 je 0x11be3909 */
  if (C.zf) goto L_11be3909;
  /* 11be3904 call 0x11be68f0 */
  push32(0x11be3909u); f_11be68f0();
L_11be3909:;
  /* 11be3909 call 0x11be4a10 */
  push32(0x11be390eu); f_11be4a10();
  /* 11be390e call 0x11be44c0 */
  push32(0x11be3913u); f_11be44c0();
  /* 11be3913 call 0x11be7310 */
  push32(0x11be3918u); f_11be7310();
  /* 11be3918 jmp 0x11be391e */
  goto L_11be391e;
L_11be391a:;
  /* 11be391a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be391c jmp 0x11be3935 */
  goto L_11be3935;
L_11be391e:;
  /* 11be391e jmp 0x11be3930 */
  goto L_11be3930;
L_11be3920:;
  /* 11be3920 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3924 jne 0x11be3930 */
  if (!C.zf) goto L_11be3930;
  /* 11be3926 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3928 call 0x11be45b0 */
  push32(0x11be392du); f_11be45b0();
  /* 11be392d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3930:;
  /* 11be3930 mov eax, 1 */
  EAX = (0x1u);
L_11be3935:;
  /* 11be3935 pop ebp */
  EBP = (pop32());
  /* 11be3936 ret 0xc */
  ESPCHK(0x11be3800u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11be3940 (243 bytes, 86 insns) */
void f_11be3940(void) {
  FTRACE(0x11be3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3940 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3941 mov ebp, esp */
  EBP = (ESP);
  /* 11be3943 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3944 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11be394b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be394f jne 0x11be3961 */
  if (!C.zf) goto L_11be3961;
  /* 11be3951 cmp dword ptr [0x11c1063c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1063c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3958 jne 0x11be3961 */
  if (!C.zf) goto L_11be3961;
  /* 11be395a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be395c jmp 0x11be3a2d */
  goto L_11be3a2d;
L_11be3961:;
  /* 11be3961 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3965 je 0x11be396d */
  if (C.zf) goto L_11be396d;
  /* 11be3967 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be396b jne 0x11be39af */
  if (!C.zf) goto L_11be39af;
L_11be396d:;
  /* 11be396d cmp dword ptr [0x11c121bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c121bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3974 je 0x11be398b */
  if (C.zf) goto L_11be398b;
  /* 11be3976 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3979 push eax */
  push32((uint32_t)(EAX));
  /* 11be397a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be397d push ecx */
  push32((uint32_t)(ECX));
  /* 11be397e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3981 push edx */
  push32((uint32_t)(EDX));
  /* 11be3982 call dword ptr [0x11c121bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c121bc))), 0x11be3988u);
  /* 11be3988 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be398b:;
  /* 11be398b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be398f je 0x11be39a5 */
  if (C.zf) goto L_11be39a5;
  /* 11be3991 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3994 push eax */
  push32((uint32_t)(EAX));
  /* 11be3995 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3998 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be399c push edx */
  push32((uint32_t)(EDX));
  /* 11be399d call 0x11be3800 */
  push32(0x11be39a2u); f_11be3800();
  /* 11be39a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be39a5:;
  /* 11be39a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be39a9 jne 0x11be39af */
  if (!C.zf) goto L_11be39af;
  /* 11be39ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be39ad jmp 0x11be3a2d */
  goto L_11be3a2d;
L_11be39af:;
  /* 11be39af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be39b2 push eax */
  push32((uint32_t)(EAX));
  /* 11be39b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be39b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11be39b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be39ba push edx */
  push32((uint32_t)(EDX));
  /* 11be39bb call 0x11be100a */
  push32(0x11be39c0u); f_11be100a();
  /* 11be39c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be39c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be39c7 jne 0x11be39de */
  if (!C.zf) goto L_11be39de;
  /* 11be39c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be39cd jne 0x11be39de */
  if (!C.zf) goto L_11be39de;
  /* 11be39cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be39d2 push eax */
  push32((uint32_t)(EAX));
  /* 11be39d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be39d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be39d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be39d9 call 0x11be3800 */
  push32(0x11be39deu); f_11be3800();
L_11be39de:;
  /* 11be39de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be39e2 je 0x11be39ea */
  if (C.zf) goto L_11be39ea;
  /* 11be39e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be39e8 jne 0x11be3a2a */
  if (!C.zf) goto L_11be3a2a;
L_11be39ea:;
  /* 11be39ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be39ed push edx */
  push32((uint32_t)(EDX));
  /* 11be39ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be39f1 push eax */
  push32((uint32_t)(EAX));
  /* 11be39f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be39f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11be39f6 call 0x11be3800 */
  push32(0x11be39fbu); f_11be3800();
  /* 11be39fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be39fd jne 0x11be3a06 */
  if (!C.zf) goto L_11be3a06;
  /* 11be39ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be3a06:;
  /* 11be3a06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a0a je 0x11be3a2a */
  if (C.zf) goto L_11be3a2a;
  /* 11be3a0c cmp dword ptr [0x11c121bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c121bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a13 je 0x11be3a2a */
  if (C.zf) goto L_11be3a2a;
  /* 11be3a15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3a18 push edx */
  push32((uint32_t)(EDX));
  /* 11be3a19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3a1c push eax */
  push32((uint32_t)(EAX));
  /* 11be3a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3a20 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3a21 call dword ptr [0x11c121bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c121bc))), 0x11be3a27u);
  /* 11be3a27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be3a2a:;
  /* 11be3a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be3a2d:;
  /* 11be3a2d mov esp, ebp */
  ESP = (EBP);
  /* 11be3a2f pop ebp */
  EBP = (pop32());
  /* 11be3a30 ret 0xc */
  ESPCHK(0x11be3940u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11be3a40 (58 bytes, 18 insns) */
void f_11be3a40(void) {
  FTRACE(0x11be3a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3a41 mov ebp, esp */
  EBP = (ESP);
  /* 11be3a43 cmp dword ptr [0x11c10648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a4a je 0x11be3a5e */
  if (C.zf) goto L_11be3a5e;
  /* 11be3a4c cmp dword ptr [0x11c10648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a53 jne 0x11be3a63 */
  if (!C.zf) goto L_11be3a63;
  /* 11be3a55 cmp dword ptr [0x11c1064c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1064c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a5c jne 0x11be3a63 */
  if (!C.zf) goto L_11be3a63;
L_11be3a5e:;
  /* 11be3a5e call 0x11be73b0 */
  push32(0x11be3a63u); f_11be73b0();
L_11be3a63:;
  /* 11be3a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3a66 push eax */
  push32((uint32_t)(EAX));
  /* 11be3a67 call 0x11be7400 */
  push32(0x11be3a6cu); f_11be7400();
  /* 11be3a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3a6f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11be3a74 call dword ptr [0x11c0ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0ea30))), 0x11be3a7au);
  /* 11be3a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3a7d pop ebp */
  EBP = (pop32());
  /* 11be3a7e ret  */
  ESPCHK(0x11be3a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a80 @ 0x11be3a80 (11 bytes, 5 insns) */
void f_11be3a80(void) {
  FTRACE(0x11be3a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3a81 mov ebp, esp */
  EBP = (ESP);
  /* 11be3a83 call dword ptr [0x11c13340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13340))), 0x11be3a89u);
  /* 11be3a89 pop ebp */
  EBP = (pop32());
  /* 11be3a8a ret  */
  ESPCHK(0x11be3a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a90 @ 0x11be3a90 (87 bytes, 30 insns) */
void f_11be3a90(void) {
  FTRACE(0x11be3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3a91 mov ebp, esp */
  EBP = (ESP);
  /* 11be3a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3a94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a98 jl 0x11be3aa0 */
  if ((C.sf!=C.of)) goto L_11be3aa0;
  /* 11be3a9a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3a9e jl 0x11be3aa5 */
  if ((C.sf!=C.of)) goto L_11be3aa5;
L_11be3aa0:;
  /* 11be3aa0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3aa3 jmp 0x11be3ae3 */
  goto L_11be3ae3;
L_11be3aa5:;
  /* 11be3aa5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3aa9 jne 0x11be3ab7 */
  if (!C.zf) goto L_11be3ab7;
  /* 11be3aab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3aae mov eax, dword ptr [eax*4 + 0x11c0ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11c0ea38)));
  /* 11be3ab5 jmp 0x11be3ae3 */
  goto L_11be3ae3;
L_11be3ab7:;
  /* 11be3ab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3aba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11be3abd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be3abf je 0x11be3ac6 */
  if (C.zf) goto L_11be3ac6;
  /* 11be3ac1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3ac4 jmp 0x11be3ae3 */
  goto L_11be3ae3;
L_11be3ac6:;
  /* 11be3ac6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3ac9 mov eax, dword ptr [edx*4 + 0x11c0ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c0ea38)));
  /* 11be3ad0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be3ad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3ad6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3ad9 mov dword ptr [ecx*4 + 0x11c0ea38], edx */
  w32((uint32_t)(ECX*4 + 0x11c0ea38), (EDX));
  /* 11be3ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be3ae3:;
  /* 11be3ae3 mov esp, ebp */
  ESP = (EBP);
  /* 11be3ae5 pop ebp */
  EBP = (pop32());
  /* 11be3ae6 ret  */
  ESPCHK(0x11be3a90u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11be3af0 (126 bytes, 38 insns) */
void f_11be3af0(void) {
  FTRACE(0x11be3af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3af1 mov ebp, esp */
  EBP = (ESP);
  /* 11be3af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3af4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3af8 jl 0x11be3b00 */
  if ((C.sf!=C.of)) goto L_11be3b00;
  /* 11be3afa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3afe jl 0x11be3b07 */
  if ((C.sf!=C.of)) goto L_11be3b07;
L_11be3b00:;
  /* 11be3b00 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11be3b05 jmp 0x11be3b6a */
  goto L_11be3b6a;
L_11be3b07:;
  /* 11be3b07 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3b0b jne 0x11be3b19 */
  if (!C.zf) goto L_11be3b19;
  /* 11be3b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b10 mov eax, dword ptr [eax*4 + 0x11c0ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11c0ea44)));
  /* 11be3b17 jmp 0x11be3b6a */
  goto L_11be3b6a;
L_11be3b19:;
  /* 11be3b19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b1c mov edx, dword ptr [ecx*4 + 0x11c0ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea44)));
  /* 11be3b23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be3b26 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3b2a jne 0x11be3b40 */
  if (!C.zf) goto L_11be3b40;
  /* 11be3b2c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11be3b2e call dword ptr [0x11c13344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13344))), 0x11be3b34u);
  /* 11be3b34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b37 mov dword ptr [ecx*4 + 0x11c0ea44], eax */
  w32((uint32_t)(ECX*4 + 0x11c0ea44), (EAX));
  /* 11be3b3e jmp 0x11be3b67 */
  goto L_11be3b67;
L_11be3b40:;
  /* 11be3b40 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3b44 jne 0x11be3b5a */
  if (!C.zf) goto L_11be3b5a;
  /* 11be3b46 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11be3b48 call dword ptr [0x11c13344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13344))), 0x11be3b4eu);
  /* 11be3b4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b51 mov dword ptr [edx*4 + 0x11c0ea44], eax */
  w32((uint32_t)(EDX*4 + 0x11c0ea44), (EAX));
  /* 11be3b58 jmp 0x11be3b67 */
  goto L_11be3b67;
L_11be3b5a:;
  /* 11be3b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3b60 mov dword ptr [eax*4 + 0x11c0ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x11c0ea44), (ECX));
L_11be3b67:;
  /* 11be3b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be3b6a:;
  /* 11be3b6a mov esp, ebp */
  ESP = (EBP);
  /* 11be3b6c pop ebp */
  EBP = (pop32());
  /* 11be3b6d ret  */
  ESPCHK(0x11be3af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x11be3b70 (28 bytes, 11 insns) */
void f_11be3b70(void) {
  FTRACE(0x11be3b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3b71 mov ebp, esp */
  EBP = (ESP);
  /* 11be3b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3b74 mov eax, dword ptr [0x11c121a0] */
  EAX = (r32((uint32_t)(0x11c121a0)));
  /* 11be3b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be3b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3b7f mov dword ptr [0x11c121a0], ecx */
  w32((uint32_t)(0x11c121a0), (ECX));
  /* 11be3b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be3b88 mov esp, ebp */
  ESP = (EBP);
  /* 11be3b8a pop ebp */
  EBP = (pop32());
  /* 11be3b8b ret  */
  ESPCHK(0x11be3b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x11be3b90 (912 bytes, 248 insns) */
void f_11be3b90(void) {
  FTRACE(0x11be3b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3b91 mov ebp, esp */
  EBP = (ESP);
  /* 11be3b93 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11be3b98 call 0x11be7c70 */
  push32(0x11be3b9du); f_11be7c70();
  /* 11be3b9d push edi */
  push32((uint32_t)(EDI));
  /* 11be3b9e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11be3ba5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11be3baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3bac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11be3bb2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be3bb4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11be3bb6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11be3bb7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11be3bbe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11be3bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3bc5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11be3bcb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be3bcd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11be3bcf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11be3bd0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11be3bd7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11be3bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3bde lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11be3be4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be3be6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11be3be8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11be3be9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11be3bec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11be3bf2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3bf6 jl 0x11be3bfe */
  if ((C.sf!=C.of)) goto L_11be3bfe;
  /* 11be3bf8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3bfc jl 0x11be3c06 */
  if ((C.sf!=C.of)) goto L_11be3c06;
L_11be3bfe:;
  /* 11be3bfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3c01 jmp 0x11be3f1b */
  goto L_11be3f1b;
L_11be3c06:;
  /* 11be3c06 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3c0a jne 0x11be3cb0 */
  if (!C.zf) goto L_11be3cb0;
  /* 11be3c10 push 0x11c0ea34 */
  push32((uint32_t)(0x11c0ea34u));
  /* 11be3c15 call dword ptr [0x11c1335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1335c))), 0x11be3c1bu);
  /* 11be3c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3c1d jle 0x11be3cb0 */
  if ((C.zf||C.sf!=C.of)) goto L_11be3cb0;
  /* 11be3c23 cmp dword ptr [0x11c10650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3c2a jne 0x11be3c6e */
  if (!C.zf) goto L_11be3c6e;
  /* 11be3c2c push 0x11c0b468 */
  push32((uint32_t)(0x11c0b468u));
  /* 11be3c31 call dword ptr [0x11c13358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13358))), 0x11be3c37u);
  /* 11be3c37 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11be3c3d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3c44 je 0x11be3c66 */
  if (C.zf) goto L_11be3c66;
  /* 11be3c46 push 0x11c0b45c */
  push32((uint32_t)(0x11c0b45cu));
  /* 11be3c4b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11be3c51 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3c52 call dword ptr [0x11c13354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13354))), 0x11be3c58u);
  /* 11be3c58 mov dword ptr [0x11c10650], eax */
  w32((uint32_t)(0x11c10650), (EAX));
  /* 11be3c5d cmp dword ptr [0x11c10650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3c64 jne 0x11be3c6e */
  if (!C.zf) goto L_11be3c6e;
L_11be3c66:;
  /* 11be3c66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3c69 jmp 0x11be3f1b */
  goto L_11be3f1b;
L_11be3c6e:;
  /* 11be3c6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3c71 push edx */
  push32((uint32_t)(EDX));
  /* 11be3c72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3c75 push eax */
  push32((uint32_t)(EAX));
  /* 11be3c76 push 0x11c0b428 */
  push32((uint32_t)(0x11c0b428u));
  /* 11be3c7b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11be3c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3c82 call dword ptr [0x11c10650] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c10650))), 0x11be3c88u);
  /* 11be3c88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3c8b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11be3c91 push edx */
  push32((uint32_t)(EDX));
  /* 11be3c92 call dword ptr [0x11c13350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13350))), 0x11be3c98u);
  /* 11be3c98 push 0x11c0ea34 */
  push32((uint32_t)(0x11c0ea34u));
  /* 11be3c9d call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11be3ca3u);
  /* 11be3ca3 call 0x11be3a80 */
  push32(0x11be3ca8u); f_11be3a80();
  /* 11be3ca8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be3cab jmp 0x11be3f1b */
  goto L_11be3f1b;
L_11be3cb0:;
  /* 11be3cb0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3cb4 je 0x11be3ced */
  if (C.zf) goto L_11be3ced;
  /* 11be3cb6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11be3cbc push eax */
  push32((uint32_t)(EAX));
  /* 11be3cbd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be3cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3cc1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11be3cc6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11be3ccc push edx */
  push32((uint32_t)(EDX));
  /* 11be3ccd call 0x11be7b70 */
  push32(0x11be3cd2u); f_11be7b70();
  /* 11be3cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3cd7 jge 0x11be3ced */
  if ((C.sf==C.of)) goto L_11be3ced;
  /* 11be3cd9 push 0x11c0b3fc */
  push32((uint32_t)(0x11c0b3fcu));
  /* 11be3cde lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11be3ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11be3ce5 call 0x11be7a80 */
  push32(0x11be3ceau); f_11be7a80();
  /* 11be3cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3ced:;
  /* 11be3ced cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3cf1 jne 0x11be3d25 */
  if (!C.zf) goto L_11be3d25;
  /* 11be3cf3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3cf7 je 0x11be3d05 */
  if (C.zf) goto L_11be3d05;
  /* 11be3cf9 mov dword ptr [ebp - 0x3028], 0x11c0b3e8 */
  w32((uint32_t)(EBP + -0x3028), (0x11c0b3e8u));
  /* 11be3d03 jmp 0x11be3d0f */
  goto L_11be3d0f;
L_11be3d05:;
  /* 11be3d05 mov dword ptr [ebp - 0x3028], 0x11c0b3d4 */
  w32((uint32_t)(EBP + -0x3028), (0x11c0b3d4u));
L_11be3d0f:;
  /* 11be3d0f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11be3d15 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3d16 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11be3d1c push edx */
  push32((uint32_t)(EDX));
  /* 11be3d1d call 0x11be7a80 */
  push32(0x11be3d22u); f_11be7a80();
  /* 11be3d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3d25:;
  /* 11be3d25 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11be3d2b push eax */
  push32((uint32_t)(EAX));
  /* 11be3d2c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11be3d32 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3d33 call 0x11be7a90 */
  push32(0x11be3d38u); f_11be7a90();
  /* 11be3d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3d3b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3d3f jne 0x11be3d7a */
  if (!C.zf) goto L_11be3d7a;
  /* 11be3d41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3d44 mov eax, dword ptr [edx*4 + 0x11c0ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c0ea38)));
  /* 11be3d4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11be3d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3d50 je 0x11be3d66 */
  if (C.zf) goto L_11be3d66;
  /* 11be3d52 push 0x11c0b3d0 */
  push32((uint32_t)(0x11c0b3d0u));
  /* 11be3d57 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11be3d5d push ecx */
  push32((uint32_t)(ECX));
  /* 11be3d5e call 0x11be7a90 */
  push32(0x11be3d63u); f_11be7a90();
  /* 11be3d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3d66:;
  /* 11be3d66 push 0x11c0b3cc */
  push32((uint32_t)(0x11c0b3ccu));
  /* 11be3d6b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11be3d71 push edx */
  push32((uint32_t)(EDX));
  /* 11be3d72 call 0x11be7a90 */
  push32(0x11be3d77u); f_11be7a90();
  /* 11be3d77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3d7a:;
  /* 11be3d7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3d7e je 0x11be3dc2 */
  if (C.zf) goto L_11be3dc2;
  /* 11be3d80 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11be3d86 push eax */
  push32((uint32_t)(EAX));
  /* 11be3d87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3d8a push ecx */
  push32((uint32_t)(ECX));
  /* 11be3d8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3d8e push edx */
  push32((uint32_t)(EDX));
  /* 11be3d8f push 0x11c0b3c0 */
  push32((uint32_t)(0x11c0b3c0u));
  /* 11be3d94 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11be3d99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11be3d9f push eax */
  push32((uint32_t)(EAX));
  /* 11be3da0 call 0x11be7980 */
  push32(0x11be3da5u); f_11be7980();
  /* 11be3da5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3daa jge 0x11be3dc0 */
  if ((C.sf==C.of)) goto L_11be3dc0;
  /* 11be3dac push 0x11c0b3fc */
  push32((uint32_t)(0x11c0b3fcu));
  /* 11be3db1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11be3db7 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3db8 call 0x11be7a80 */
  push32(0x11be3dbdu); f_11be7a80();
  /* 11be3dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3dc0:;
  /* 11be3dc0 jmp 0x11be3dd8 */
  goto L_11be3dd8;
L_11be3dc2:;
  /* 11be3dc2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11be3dc8 push edx */
  push32((uint32_t)(EDX));
  /* 11be3dc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11be3dcf push eax */
  push32((uint32_t)(EAX));
  /* 11be3dd0 call 0x11be7a80 */
  push32(0x11be3dd5u); f_11be7a80();
  /* 11be3dd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3dd8:;
  /* 11be3dd8 cmp dword ptr [0x11c121a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c121a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3ddf je 0x11be3e1c */
  if (C.zf) goto L_11be3e1c;
  /* 11be3de1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11be3de7 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3de8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11be3dee push edx */
  push32((uint32_t)(EDX));
  /* 11be3def mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3df2 push eax */
  push32((uint32_t)(EAX));
  /* 11be3df3 call dword ptr [0x11c121a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c121a0))), 0x11be3df9u);
  /* 11be3df9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3dfe je 0x11be3e1c */
  if (C.zf) goto L_11be3e1c;
  /* 11be3e00 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3e04 jne 0x11be3e11 */
  if (!C.zf) goto L_11be3e11;
  /* 11be3e06 push 0x11c0ea34 */
  push32((uint32_t)(0x11c0ea34u));
  /* 11be3e0b call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11be3e11u);
L_11be3e11:;
  /* 11be3e11 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11be3e17 jmp 0x11be3f1b */
  goto L_11be3f1b;
L_11be3e1c:;
  /* 11be3e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3e1f mov edx, dword ptr [ecx*4 + 0x11c0ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea38)));
  /* 11be3e26 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11be3e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be3e2b je 0x11be3e6b */
  if (C.zf) goto L_11be3e6b;
  /* 11be3e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3e30 cmp dword ptr [eax*4 + 0x11c0ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c0ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3e38 je 0x11be3e6b */
  if (C.zf) goto L_11be3e6b;
  /* 11be3e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3e3c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11be3e42 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3e43 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11be3e49 push edx */
  push32((uint32_t)(EDX));
  /* 11be3e4a call 0x11be7900 */
  push32(0x11be3e4fu); f_11be7900();
  /* 11be3e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3e52 push eax */
  push32((uint32_t)(EAX));
  /* 11be3e53 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11be3e59 push eax */
  push32((uint32_t)(EAX));
  /* 11be3e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3e5d mov edx, dword ptr [ecx*4 + 0x11c0ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea44)));
  /* 11be3e64 push edx */
  push32((uint32_t)(EDX));
  /* 11be3e65 call dword ptr [0x11c13348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13348))), 0x11be3e6bu);
L_11be3e6b:;
  /* 11be3e6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3e6e mov ecx, dword ptr [eax*4 + 0x11c0ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0ea38)));
  /* 11be3e75 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11be3e78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be3e7a je 0x11be3e89 */
  if (C.zf) goto L_11be3e89;
  /* 11be3e7c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11be3e82 push edx */
  push32((uint32_t)(EDX));
  /* 11be3e83 call dword ptr [0x11c13350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13350))), 0x11be3e89u);
L_11be3e89:;
  /* 11be3e89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3e8c mov ecx, dword ptr [eax*4 + 0x11c0ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0ea38)));
  /* 11be3e93 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11be3e96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be3e98 je 0x11be3f08 */
  if (C.zf) goto L_11be3f08;
  /* 11be3e9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3e9e je 0x11be3ebd */
  if (C.zf) goto L_11be3ebd;
  /* 11be3ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11be3ea2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11be3ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11be3ea9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be3eac push eax */
  push32((uint32_t)(EAX));
  /* 11be3ead call 0x11be7610 */
  push32(0x11be3eb2u); f_11be7610();
  /* 11be3eb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3eb5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11be3ebb jmp 0x11be3ec7 */
  goto L_11be3ec7;
L_11be3ebd:;
  /* 11be3ebd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11be3ec7:;
  /* 11be3ec7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11be3ecd push ecx */
  push32((uint32_t)(ECX));
  /* 11be3ece mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be3ed1 push edx */
  push32((uint32_t)(EDX));
  /* 11be3ed2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11be3ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11be3ed9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be3edc push ecx */
  push32((uint32_t)(ECX));
  /* 11be3edd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be3ee0 push edx */
  push32((uint32_t)(EDX));
  /* 11be3ee1 call 0x11be3f20 */
  push32(0x11be3ee6u); f_11be3f20();
  /* 11be3ee6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3ee9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11be3eef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3ef3 jne 0x11be3f00 */
  if (!C.zf) goto L_11be3f00;
  /* 11be3ef5 push 0x11c0ea34 */
  push32((uint32_t)(0x11c0ea34u));
  /* 11be3efa call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11be3f00u);
L_11be3f00:;
  /* 11be3f00 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11be3f06 jmp 0x11be3f1b */
  goto L_11be3f1b;
L_11be3f08:;
  /* 11be3f08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3f0c jne 0x11be3f19 */
  if (!C.zf) goto L_11be3f19;
  /* 11be3f0e push 0x11c0ea34 */
  push32((uint32_t)(0x11c0ea34u));
  /* 11be3f13 call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11be3f19u);
L_11be3f19:;
  /* 11be3f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be3f1b:;
  /* 11be3f1b pop edi */
  EDI = (pop32());
  /* 11be3f1c mov esp, ebp */
  ESP = (EBP);
  /* 11be3f1e pop ebp */
  EBP = (pop32());
  /* 11be3f1f ret  */
  ESPCHK(0x11be3b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x11be3f20 (780 bytes, 197 insns) */
void f_11be3f20(void) {
  FTRACE(0x11be3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11be3f21 mov ebp, esp */
  EBP = (ESP);
  /* 11be3f23 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11be3f28 call 0x11be7c70 */
  push32(0x11be3f2du); f_11be7c70();
L_11be3f2d:;
  /* 11be3f2d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3f31 jne 0x11be3f58 */
  if (!C.zf) goto L_11be3f58;
  /* 11be3f33 push 0x11c0b5b8 */
  push32((uint32_t)(0x11c0b5b8u));
  /* 11be3f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3f3a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11be3f3f push 0x11c0b5ac */
  push32((uint32_t)(0x11c0b5acu));
  /* 11be3f44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be3f46 call 0x11be3b90 */
  push32(0x11be3f4bu); f_11be3b90();
  /* 11be3f4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3f51 jne 0x11be3f58 */
  if (!C.zf) goto L_11be3f58;
  /* 11be3f53 call 0x11be3a80 */
  push32(0x11be3f58u); f_11be3a80();
L_11be3f58:;
  /* 11be3f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be3f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3f5c jne 0x11be3f2d */
  if (!C.zf) goto L_11be3f2d;
  /* 11be3f5e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11be3f63 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11be3f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be3f6c call dword ptr [0x11c13360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13360))), 0x11be3f72u);
  /* 11be3f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be3f74 jne 0x11be3f8a */
  if (!C.zf) goto L_11be3f8a;
  /* 11be3f76 push 0x11c0b594 */
  push32((uint32_t)(0x11c0b594u));
  /* 11be3f7b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11be3f81 push edx */
  push32((uint32_t)(EDX));
  /* 11be3f82 call 0x11be7a80 */
  push32(0x11be3f87u); f_11be7a80();
  /* 11be3f87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3f8a:;
  /* 11be3f8a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11be3f90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be3f93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be3f96 push ecx */
  push32((uint32_t)(ECX));
  /* 11be3f97 call 0x11be7900 */
  push32(0x11be3f9cu); f_11be7900();
  /* 11be3f9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3f9f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3fa2 jbe 0x11be3fcd */
  if ((C.cf||C.zf)) goto L_11be3fcd;
  /* 11be3fa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be3fa7 push edx */
  push32((uint32_t)(EDX));
  /* 11be3fa8 call 0x11be7900 */
  push32(0x11be3fadu); f_11be7900();
  /* 11be3fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3fb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be3fb3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11be3fb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be3fba push 3 */
  push32((uint32_t)(0x3u));
  /* 11be3fbc push 0x11c0b590 */
  push32((uint32_t)(0x11c0b590u));
  /* 11be3fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be3fc4 push eax */
  push32((uint32_t)(EAX));
  /* 11be3fc5 call 0x11be82f0 */
  push32(0x11be3fcau); f_11be82f0();
  /* 11be3fca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be3fcd:;
  /* 11be3fcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be3fd0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11be3fd6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3fdd je 0x11be4028 */
  if (C.zf) goto L_11be4028;
  /* 11be3fdf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11be3fe5 push edx */
  push32((uint32_t)(EDX));
  /* 11be3fe6 call 0x11be7900 */
  push32(0x11be3febu); f_11be7900();
  /* 11be3feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be3fee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be3ff1 jbe 0x11be4028 */
  if ((C.cf||C.zf)) goto L_11be4028;
  /* 11be3ff3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11be3ff9 push eax */
  push32((uint32_t)(EAX));
  /* 11be3ffa call 0x11be7900 */
  push32(0x11be3fffu); f_11be7900();
  /* 11be3fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4002 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11be4008 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11be400c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11be4012 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be4014 push 0x11c0b590 */
  push32((uint32_t)(0x11c0b590u));
  /* 11be4019 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11be401f push eax */
  push32((uint32_t)(EAX));
  /* 11be4020 call 0x11be82f0 */
  push32(0x11be4025u); f_11be82f0();
  /* 11be4025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4028:;
  /* 11be4028 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be402c jne 0x11be403a */
  if (!C.zf) goto L_11be403a;
  /* 11be402e mov dword ptr [ebp - 0x1114], 0x11c0b51c */
  w32((uint32_t)(EBP + -0x1114), (0x11c0b51cu));
  /* 11be4038 jmp 0x11be4044 */
  goto L_11be4044;
L_11be403a:;
  /* 11be403a mov dword ptr [ebp - 0x1114], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1114), (0x11c0b2bcu));
L_11be4044:;
  /* 11be4044 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4047 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be404a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be404c je 0x11be4059 */
  if (C.zf) goto L_11be4059;
  /* 11be404e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4051 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11be4057 jmp 0x11be4063 */
  goto L_11be4063;
L_11be4059:;
  /* 11be4059 mov dword ptr [ebp - 0x1118], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1118), (0x11c0b2bcu));
L_11be4063:;
  /* 11be4063 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4066 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be4069 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be406b je 0x11be407f */
  if (C.zf) goto L_11be407f;
  /* 11be406d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4071 jne 0x11be407f */
  if (!C.zf) goto L_11be407f;
  /* 11be4073 mov dword ptr [ebp - 0x111c], 0x11c0b50c */
  w32((uint32_t)(EBP + -0x111c), (0x11c0b50cu));
  /* 11be407d jmp 0x11be4089 */
  goto L_11be4089;
L_11be407f:;
  /* 11be407f mov dword ptr [ebp - 0x111c], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x111c), (0x11c0b2bcu));
L_11be4089:;
  /* 11be4089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be408c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be408f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be4091 je 0x11be409f */
  if (C.zf) goto L_11be409f;
  /* 11be4093 mov dword ptr [ebp - 0x1120], 0x11c0b508 */
  w32((uint32_t)(EBP + -0x1120), (0x11c0b508u));
  /* 11be409d jmp 0x11be40a9 */
  goto L_11be40a9;
L_11be409f:;
  /* 11be409f mov dword ptr [ebp - 0x1120], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1120), (0x11c0b2bcu));
L_11be40a9:;
  /* 11be40a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be40ad je 0x11be40ba */
  if (C.zf) goto L_11be40ba;
  /* 11be40af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be40b2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11be40b8 jmp 0x11be40c4 */
  goto L_11be40c4;
L_11be40ba:;
  /* 11be40ba mov dword ptr [ebp - 0x1124], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1124), (0x11c0b2bcu));
L_11be40c4:;
  /* 11be40c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be40c8 je 0x11be40d6 */
  if (C.zf) goto L_11be40d6;
  /* 11be40ca mov dword ptr [ebp - 0x1128], 0x11c0b500 */
  w32((uint32_t)(EBP + -0x1128), (0x11c0b500u));
  /* 11be40d4 jmp 0x11be40e0 */
  goto L_11be40e0;
L_11be40d6:;
  /* 11be40d6 mov dword ptr [ebp - 0x1128], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1128), (0x11c0b2bcu));
L_11be40e0:;
  /* 11be40e0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be40e4 je 0x11be40f1 */
  if (C.zf) goto L_11be40f1;
  /* 11be40e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be40e9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11be40ef jmp 0x11be40fb */
  goto L_11be40fb;
L_11be40f1:;
  /* 11be40f1 mov dword ptr [ebp - 0x112c], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x112c), (0x11c0b2bcu));
L_11be40fb:;
  /* 11be40fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be40ff je 0x11be410d */
  if (C.zf) goto L_11be410d;
  /* 11be4101 mov dword ptr [ebp - 0x1130], 0x11c0b4f8 */
  w32((uint32_t)(EBP + -0x1130), (0x11c0b4f8u));
  /* 11be410b jmp 0x11be4117 */
  goto L_11be4117;
L_11be410d:;
  /* 11be410d mov dword ptr [ebp - 0x1130], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1130), (0x11c0b2bcu));
L_11be4117:;
  /* 11be4117 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be411e je 0x11be412e */
  if (C.zf) goto L_11be412e;
  /* 11be4120 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11be4126 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11be412c jmp 0x11be4138 */
  goto L_11be4138;
L_11be412e:;
  /* 11be412e mov dword ptr [ebp - 0x1134], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1134), (0x11c0b2bcu));
L_11be4138:;
  /* 11be4138 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be413f je 0x11be414d */
  if (C.zf) goto L_11be414d;
  /* 11be4141 mov dword ptr [ebp - 0x1138], 0x11c0b4ec */
  w32((uint32_t)(EBP + -0x1138), (0x11c0b4ecu));
  /* 11be414b jmp 0x11be4157 */
  goto L_11be4157;
L_11be414d:;
  /* 11be414d mov dword ptr [ebp - 0x1138], 0x11c0b2bc */
  w32((uint32_t)(EBP + -0x1138), (0x11c0b2bcu));
L_11be4157:;
  /* 11be4157 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11be415d push edx */
  push32((uint32_t)(EDX));
  /* 11be415e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11be4164 push eax */
  push32((uint32_t)(EAX));
  /* 11be4165 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11be416b push ecx */
  push32((uint32_t)(ECX));
  /* 11be416c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11be4172 push edx */
  push32((uint32_t)(EDX));
  /* 11be4173 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11be4179 push eax */
  push32((uint32_t)(EAX));
  /* 11be417a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11be4180 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4181 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11be4187 push edx */
  push32((uint32_t)(EDX));
  /* 11be4188 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11be418e push eax */
  push32((uint32_t)(EAX));
  /* 11be418f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11be4195 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4196 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11be419c push edx */
  push32((uint32_t)(EDX));
  /* 11be419d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be41a0 push eax */
  push32((uint32_t)(EAX));
  /* 11be41a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be41a4 mov edx, dword ptr [ecx*4 + 0x11c0ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea50)));
  /* 11be41ab push edx */
  push32((uint32_t)(EDX));
  /* 11be41ac push 0x11c0b498 */
  push32((uint32_t)(0x11c0b498u));
  /* 11be41b1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11be41b6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11be41bc push eax */
  push32((uint32_t)(EAX));
  /* 11be41bd call 0x11be7980 */
  push32(0x11be41c2u); f_11be7980();
  /* 11be41c2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be41c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be41c7 jge 0x11be41dd */
  if ((C.sf==C.of)) goto L_11be41dd;
  /* 11be41c9 push 0x11c0b3fc */
  push32((uint32_t)(0x11c0b3fcu));
  /* 11be41ce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11be41d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11be41d5 call 0x11be7a80 */
  push32(0x11be41dau); f_11be7a80();
  /* 11be41da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be41dd:;
  /* 11be41dd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11be41e2 push 0x11c0b474 */
  push32((uint32_t)(0x11c0b474u));
  /* 11be41e7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11be41ed push edx */
  push32((uint32_t)(EDX));
  /* 11be41ee call 0x11be8230 */
  push32(0x11be41f3u); f_11be8230();
  /* 11be41f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be41f6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11be41fc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4203 jne 0x11be4216 */
  if (!C.zf) goto L_11be4216;
  /* 11be4205 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11be4207 call 0x11be7f70 */
  push32(0x11be420cu); f_11be7f70();
  /* 11be420c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be420f push 3 */
  push32((uint32_t)(0x3u));
  /* 11be4211 call 0x11be4290 */
  push32(0x11be4216u); f_11be4290();
L_11be4216:;
  /* 11be4216 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be421d jne 0x11be4226 */
  if (!C.zf) goto L_11be4226;
  /* 11be421f mov eax, 1 */
  EAX = (0x1u);
  /* 11be4224 jmp 0x11be4228 */
  goto L_11be4228;
L_11be4226:;
  /* 11be4226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be4228:;
  /* 11be4228 mov esp, ebp */
  ESP = (EBP);
  /* 11be422a pop ebp */
  EBP = (pop32());
  /* 11be422b ret  */
  ESPCHK(0x11be3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x11be4230 (56 bytes, 15 insns) */
void f_11be4230(void) {
  FTRACE(0x11be4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4230 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4231 mov ebp, esp */
  EBP = (ESP);
  /* 11be4233 cmp dword ptr [0x11c1219c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1219c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be423a je 0x11be4242 */
  if (C.zf) goto L_11be4242;
  /* 11be423c call dword ptr [0x11c1219c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1219c))), 0x11be4242u);
L_11be4242:;
  /* 11be4242 push 0x11c0e418 */
  push32((uint32_t)(0x11c0e418u));
  /* 11be4247 push 0x11c0e208 */
  push32((uint32_t)(0x11c0e208u));
  /* 11be424c call 0x11be4400 */
  push32(0x11be4251u); f_11be4400();
  /* 11be4251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4254 push 0x11c0e104 */
  push32((uint32_t)(0x11c0e104u));
  /* 11be4259 push 0x11c0e000 */
  push32((uint32_t)(0x11c0e000u));
  /* 11be425e call 0x11be4400 */
  push32(0x11be4263u); f_11be4400();
  /* 11be4263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4266 pop ebp */
  EBP = (pop32());
  /* 11be4267 ret  */
  ESPCHK(0x11be4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x11be4270 (21 bytes, 10 insns) */
void f_11be4270(void) {
  FTRACE(0x11be4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4270 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4271 mov ebp, esp */
  EBP = (ESP);
  /* 11be4273 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be427a push eax */
  push32((uint32_t)(EAX));
  /* 11be427b call 0x11be42f0 */
  push32(0x11be4280u); f_11be42f0();
  /* 11be4280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4283 pop ebp */
  EBP = (pop32());
  /* 11be4284 ret  */
  ESPCHK(0x11be4270u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11be4290 (21 bytes, 10 insns) */
void f_11be4290(void) {
  FTRACE(0x11be4290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4290 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4291 mov ebp, esp */
  EBP = (ESP);
  /* 11be4293 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be429a push eax */
  push32((uint32_t)(EAX));
  /* 11be429b call 0x11be42f0 */
  push32(0x11be42a0u); f_11be42f0();
  /* 11be42a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be42a3 pop ebp */
  EBP = (pop32());
  /* 11be42a4 ret  */
  ESPCHK(0x11be4290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x11be42b0 (19 bytes, 9 insns) */
void f_11be42b0(void) {
  FTRACE(0x11be42b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be42b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be42b1 mov ebp, esp */
  EBP = (ESP);
  /* 11be42b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be42b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be42b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be42b9 call 0x11be42f0 */
  push32(0x11be42beu); f_11be42f0();
  /* 11be42be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be42c1 pop ebp */
  EBP = (pop32());
  /* 11be42c2 ret  */
  ESPCHK(0x11be42b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x11be42d0 (19 bytes, 9 insns) */
void f_11be42d0(void) {
  FTRACE(0x11be42d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be42d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be42d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be42d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be42d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be42d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be42d9 call 0x11be42f0 */
  push32(0x11be42deu); f_11be42f0();
  /* 11be42de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be42e1 pop ebp */
  EBP = (pop32());
  /* 11be42e2 ret  */
  ESPCHK(0x11be42d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x11be42f0 (227 bytes, 61 insns) */
void f_11be42f0(void) {
  FTRACE(0x11be42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be42f1 mov ebp, esp */
  EBP = (ESP);
  /* 11be42f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be42f4 call 0x11be43e0 */
  push32(0x11be42f9u); f_11be43e0();
  /* 11be42f9 cmp dword ptr [0x11c10694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c10694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4300 jne 0x11be4313 */
  if (!C.zf) goto L_11be4313;
  /* 11be4302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4305 push eax */
  push32((uint32_t)(EAX));
  /* 11be4306 call dword ptr [0x11c1336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1336c))), 0x11be430cu);
  /* 11be430c push eax */
  push32((uint32_t)(EAX));
  /* 11be430d call dword ptr [0x11c13368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13368))), 0x11be4313u);
L_11be4313:;
  /* 11be4313 mov dword ptr [0x11c10690], 1 */
  w32((uint32_t)(0x11c10690), (0x1u));
  /* 11be431d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11be4320 mov byte ptr [0x11c1068c], cl */
  w8((uint32_t)(0x11c1068c), (CL));
  /* 11be4326 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be432a jne 0x11be4373 */
  if (!C.zf) goto L_11be4373;
  /* 11be432c cmp dword ptr [0x11c12198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4333 je 0x11be4361 */
  if (C.zf) goto L_11be4361;
  /* 11be4335 mov edx, dword ptr [0x11c12194] */
  EDX = (r32((uint32_t)(0x11c12194)));
  /* 11be433b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be433e:;
  /* 11be433e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4341 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4344 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be434a cmp ecx, dword ptr [0x11c12198] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c12198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4350 jb 0x11be4361 */
  if (C.cf) goto L_11be4361;
  /* 11be4352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4355 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4358 je 0x11be435f */
  if (C.zf) goto L_11be435f;
  /* 11be435a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be435d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11be435fu);
L_11be435f:;
  /* 11be435f jmp 0x11be433e */
  goto L_11be433e;
L_11be4361:;
  /* 11be4361 push 0x11c0e724 */
  push32((uint32_t)(0x11c0e724u));
  /* 11be4366 push 0x11c0e51c */
  push32((uint32_t)(0x11c0e51cu));
  /* 11be436b call 0x11be4400 */
  push32(0x11be4370u); f_11be4400();
  /* 11be4370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4373:;
  /* 11be4373 push 0x11c0e92c */
  push32((uint32_t)(0x11c0e92cu));
  /* 11be4378 push 0x11c0e828 */
  push32((uint32_t)(0x11c0e828u));
  /* 11be437d call 0x11be4400 */
  push32(0x11be4382u); f_11be4400();
  /* 11be4382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4385 cmp dword ptr [0x11c10698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be438c jne 0x11be43ae */
  if (!C.zf) goto L_11be43ae;
  /* 11be438e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11be4390 call 0x11be5fe0 */
  push32(0x11be4395u); f_11be5fe0();
  /* 11be4395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4398 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11be439b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be439d je 0x11be43ae */
  if (C.zf) goto L_11be43ae;
  /* 11be439f mov dword ptr [0x11c10698], 1 */
  w32((uint32_t)(0x11c10698), (0x1u));
  /* 11be43a9 call 0x11be68f0 */
  push32(0x11be43aeu); f_11be68f0();
L_11be43ae:;
  /* 11be43ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be43b2 je 0x11be43bb */
  if (C.zf) goto L_11be43bb;
  /* 11be43b4 call 0x11be43f0 */
  push32(0x11be43b9u); f_11be43f0();
  /* 11be43b9 jmp 0x11be43cf */
  goto L_11be43cf;
L_11be43bb:;
  /* 11be43bb mov dword ptr [0x11c10694], 1 */
  w32((uint32_t)(0x11c10694), (0x1u));
  /* 11be43c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be43c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be43c9 call dword ptr [0x11c13364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13364))), 0x11be43cfu);
L_11be43cf:;
  /* 11be43cf mov esp, ebp */
  ESP = (EBP);
  /* 11be43d1 pop ebp */
  EBP = (pop32());
  /* 11be43d2 ret  */
  ESPCHK(0x11be42f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x11be43e0 (15 bytes, 7 insns) */
void f_11be43e0(void) {
  FTRACE(0x11be43e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be43e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be43e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be43e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11be43e5 call 0x11be84d0 */
  push32(0x11be43eau); f_11be84d0();
  /* 11be43ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be43ed pop ebp */
  EBP = (pop32());
  /* 11be43ee ret  */
  ESPCHK(0x11be43e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x11be43f0 (15 bytes, 7 insns) */
void f_11be43f0(void) {
  FTRACE(0x11be43f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be43f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be43f1 mov ebp, esp */
  EBP = (ESP);
  /* 11be43f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11be43f5 call 0x11be8570 */
  push32(0x11be43fau); f_11be8570();
  /* 11be43fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be43fd pop ebp */
  EBP = (pop32());
  /* 11be43fe ret  */
  ESPCHK(0x11be43f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11be4400 (37 bytes, 16 insns) */
void f_11be4400(void) {
  FTRACE(0x11be4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4400 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4401 mov ebp, esp */
  EBP = (ESP);
L_11be4403:;
  /* 11be4403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4406 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4409 jae 0x11be4423 */
  if (!C.cf) goto L_11be4423;
  /* 11be440b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be440e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4411 je 0x11be4418 */
  if (C.zf) goto L_11be4418;
  /* 11be4413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4416 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11be4418u);
L_11be4418:;
  /* 11be4418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be441b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be441e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11be4421 jmp 0x11be4403 */
  goto L_11be4403;
L_11be4423:;
  /* 11be4423 pop ebp */
  EBP = (pop32());
  /* 11be4424 ret  */
  ESPCHK(0x11be4400u, _esp0);
  ESP += 4; return;
}

/* FUN_10004430 @ 0x11be4430 (130 bytes, 42 insns) */
void f_11be4430(void) {
  FTRACE(0x11be4430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4430 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4431 mov ebp, esp */
  EBP = (ESP);
  /* 11be4433 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4434 call 0x11be83f0 */
  push32(0x11be4439u); f_11be83f0();
  /* 11be4439 call dword ptr [0x11c132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132a4))), 0x11be443fu);
  /* 11be443f mov dword ptr [0x11c0ea5c], eax */
  w32((uint32_t)(0x11c0ea5c), (EAX));
  /* 11be4444 cmp dword ptr [0x11c0ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be444b jne 0x11be4451 */
  if (!C.zf) goto L_11be4451;
  /* 11be444d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be444f jmp 0x11be44ae */
  goto L_11be44ae;
L_11be4451:;
  /* 11be4451 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11be4453 push 0x11c0b5d0 */
  push32((uint32_t)(0x11c0b5d0u));
  /* 11be4458 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be445a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11be445c push 1 */
  push32((uint32_t)(0x1u));
  /* 11be445e call 0x11be4ee0 */
  push32(0x11be4463u); f_11be4ee0();
  /* 11be4463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4466 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4469 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be446d je 0x11be4484 */
  if (C.zf) goto L_11be4484;
  /* 11be446f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4472 push eax */
  push32((uint32_t)(EAX));
  /* 11be4473 mov ecx, dword ptr [0x11c0ea5c] */
  ECX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be4479 push ecx */
  push32((uint32_t)(ECX));
  /* 11be447a call dword ptr [0x11c13374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13374))), 0x11be4480u);
  /* 11be4480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4482 jne 0x11be4488 */
  if (!C.zf) goto L_11be4488;
L_11be4484:;
  /* 11be4484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4486 jmp 0x11be44ae */
  goto L_11be44ae;
L_11be4488:;
  /* 11be4488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be448b push edx */
  push32((uint32_t)(EDX));
  /* 11be448c call 0x11be44f0 */
  push32(0x11be4491u); f_11be44f0();
  /* 11be4491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4494 call dword ptr [0x11c13370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13370))), 0x11be449au);
  /* 11be449a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be449d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be449f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be44a2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11be44a9 mov eax, 1 */
  EAX = (0x1u);
L_11be44ae:;
  /* 11be44ae mov esp, ebp */
  ESP = (EBP);
  /* 11be44b0 pop ebp */
  EBP = (pop32());
  /* 11be44b1 ret  */
  ESPCHK(0x11be4430u, _esp0);
  ESP += 4; return;
}

/* FUN_100044c0 @ 0x11be44c0 (41 bytes, 11 insns) */
void f_11be44c0(void) {
  FTRACE(0x11be44c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be44c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be44c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be44c3 call 0x11be8430 */
  push32(0x11be44c8u); f_11be8430();
  /* 11be44c8 cmp dword ptr [0x11c0ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be44cf je 0x11be44e7 */
  if (C.zf) goto L_11be44e7;
  /* 11be44d1 mov eax, dword ptr [0x11c0ea5c] */
  EAX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be44d6 push eax */
  push32((uint32_t)(EAX));
  /* 11be44d7 call dword ptr [0x11c132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132a0))), 0x11be44ddu);
  /* 11be44dd mov dword ptr [0x11c0ea5c], 0xffffffff */
  w32((uint32_t)(0x11c0ea5c), (0xffffffffu));
L_11be44e7:;
  /* 11be44e7 pop ebp */
  EBP = (pop32());
  /* 11be44e8 ret  */
  ESPCHK(0x11be44c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x11be44f0 (25 bytes, 8 insns) */
void f_11be44f0(void) {
  FTRACE(0x11be44f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be44f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be44f1 mov ebp, esp */
  EBP = (ESP);
  /* 11be44f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be44f6 mov dword ptr [eax + 0x50], 0x11c0ec00 */
  w32((uint32_t)(EAX + 0x50), (0x11c0ec00u));
  /* 11be44fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4500 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11be4507 pop ebp */
  EBP = (pop32());
  /* 11be4508 ret  */
  ESPCHK(0x11be44f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x11be4510 (152 bytes, 48 insns) */
void f_11be4510(void) {
  FTRACE(0x11be4510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4510 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4511 mov ebp, esp */
  EBP = (ESP);
  /* 11be4513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4516 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11be451cu);
  /* 11be451c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be451f mov eax, dword ptr [0x11c0ea5c] */
  EAX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be4524 push eax */
  push32((uint32_t)(EAX));
  /* 11be4525 call dword ptr [0x11c13384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13384))), 0x11be452bu);
  /* 11be452b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be452e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4532 jne 0x11be4597 */
  if (!C.zf) goto L_11be4597;
  /* 11be4534 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11be4539 push 0x11c0b5d0 */
  push32((uint32_t)(0x11c0b5d0u));
  /* 11be453e push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4540 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11be4542 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4544 call 0x11be4ee0 */
  push32(0x11be4549u); f_11be4ee0();
  /* 11be4549 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be454c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be454f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4553 je 0x11be458d */
  if (C.zf) goto L_11be458d;
  /* 11be4555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4558 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4559 mov edx, dword ptr [0x11c0ea5c] */
  EDX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be455f push edx */
  push32((uint32_t)(EDX));
  /* 11be4560 call dword ptr [0x11c13374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13374))), 0x11be4566u);
  /* 11be4566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4568 je 0x11be458d */
  if (C.zf) goto L_11be458d;
  /* 11be456a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be456d push eax */
  push32((uint32_t)(EAX));
  /* 11be456e call 0x11be44f0 */
  push32(0x11be4573u); f_11be44f0();
  /* 11be4573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4576 call dword ptr [0x11c13370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13370))), 0x11be457cu);
  /* 11be457c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be457f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be4581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4584 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11be458b jmp 0x11be4597 */
  goto L_11be4597;
L_11be458d:;
  /* 11be458d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11be458f call 0x11be3a40 */
  push32(0x11be4594u); f_11be3a40();
  /* 11be4594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4597:;
  /* 11be4597 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be459a push eax */
  push32((uint32_t)(EAX));
  /* 11be459b call dword ptr [0x11c13380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13380))), 0x11be45a1u);
  /* 11be45a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be45a4 mov esp, ebp */
  ESP = (EBP);
  /* 11be45a6 pop ebp */
  EBP = (pop32());
  /* 11be45a7 ret  */
  ESPCHK(0x11be4510u, _esp0);
  ESP += 4; return;
}

/* FUN_100045b0 @ 0x11be45b0 (263 bytes, 86 insns) */
void f_11be45b0(void) {
  FTRACE(0x11be45b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be45b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be45b1 mov ebp, esp */
  EBP = (ESP);
  /* 11be45b3 cmp dword ptr [0x11c0ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be45ba je 0x11be46b5 */
  if (C.zf) goto L_11be46b5;
  /* 11be45c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be45c4 jne 0x11be45d5 */
  if (!C.zf) goto L_11be45d5;
  /* 11be45c6 mov eax, dword ptr [0x11c0ea5c] */
  EAX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be45cb push eax */
  push32((uint32_t)(EAX));
  /* 11be45cc call dword ptr [0x11c13384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13384))), 0x11be45d2u);
  /* 11be45d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11be45d5:;
  /* 11be45d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be45d9 je 0x11be46a6 */
  if (C.zf) goto L_11be46a6;
  /* 11be45df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be45e2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be45e6 je 0x11be45f9 */
  if (C.zf) goto L_11be45f9;
  /* 11be45e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be45ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be45ed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11be45f0 push eax */
  push32((uint32_t)(EAX));
  /* 11be45f1 call 0x11be5560 */
  push32(0x11be45f6u); f_11be5560();
  /* 11be45f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be45f9:;
  /* 11be45f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be45fc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4600 je 0x11be4613 */
  if (C.zf) goto L_11be4613;
  /* 11be4602 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4607 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11be460a push eax */
  push32((uint32_t)(EAX));
  /* 11be460b call 0x11be5560 */
  push32(0x11be4610u); f_11be5560();
  /* 11be4610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4613:;
  /* 11be4613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4616 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be461a je 0x11be462d */
  if (C.zf) goto L_11be462d;
  /* 11be461c push 2 */
  push32((uint32_t)(0x2u));
  /* 11be461e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4621 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11be4624 push eax */
  push32((uint32_t)(EAX));
  /* 11be4625 call 0x11be5560 */
  push32(0x11be462au); f_11be5560();
  /* 11be462a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be462d:;
  /* 11be462d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4630 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4634 je 0x11be4647 */
  if (C.zf) goto L_11be4647;
  /* 11be4636 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be463b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11be463e push eax */
  push32((uint32_t)(EAX));
  /* 11be463f call 0x11be5560 */
  push32(0x11be4644u); f_11be5560();
  /* 11be4644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4647:;
  /* 11be4647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be464a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be464e je 0x11be4661 */
  if (C.zf) goto L_11be4661;
  /* 11be4650 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4652 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4655 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11be4658 push eax */
  push32((uint32_t)(EAX));
  /* 11be4659 call 0x11be5560 */
  push32(0x11be465eu); f_11be5560();
  /* 11be465e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4661:;
  /* 11be4661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4664 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4668 je 0x11be467b */
  if (C.zf) goto L_11be467b;
  /* 11be466a push 2 */
  push32((uint32_t)(0x2u));
  /* 11be466c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be466f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11be4672 push eax */
  push32((uint32_t)(EAX));
  /* 11be4673 call 0x11be5560 */
  push32(0x11be4678u); f_11be5560();
  /* 11be4678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be467b:;
  /* 11be467b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be467e cmp dword ptr [ecx + 0x50], 0x11c0ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11c0ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4685 je 0x11be4698 */
  if (C.zf) goto L_11be4698;
  /* 11be4687 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be468c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11be468f push eax */
  push32((uint32_t)(EAX));
  /* 11be4690 call 0x11be5560 */
  push32(0x11be4695u); f_11be5560();
  /* 11be4695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4698:;
  /* 11be4698 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be469a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be469d push ecx */
  push32((uint32_t)(ECX));
  /* 11be469e call 0x11be5560 */
  push32(0x11be46a3u); f_11be5560();
  /* 11be46a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be46a6:;
  /* 11be46a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be46a8 mov edx, dword ptr [0x11c0ea5c] */
  EDX = (r32((uint32_t)(0x11c0ea5c)));
  /* 11be46ae push edx */
  push32((uint32_t)(EDX));
  /* 11be46af call dword ptr [0x11c13374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13374))), 0x11be46b5u);
L_11be46b5:;
  /* 11be46b5 pop ebp */
  EBP = (pop32());
  /* 11be46b6 ret  */
  ESPCHK(0x11be45b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x11be46c0 (11 bytes, 5 insns) */
void f_11be46c0(void) {
  FTRACE(0x11be46c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be46c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be46c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be46c3 call dword ptr [0x11c13370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13370))), 0x11be46c9u);
  /* 11be46c9 pop ebp */
  EBP = (pop32());
  /* 11be46ca ret  */
  ESPCHK(0x11be46c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x11be46d0 (11 bytes, 5 insns) */
void f_11be46d0(void) {
  FTRACE(0x11be46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be46d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be46d3 call dword ptr [0x11c1338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1338c))), 0x11be46d9u);
  /* 11be46d9 pop ebp */
  EBP = (pop32());
  /* 11be46da ret  */
  ESPCHK(0x11be46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046e0 @ 0x11be46e0 (804 bytes, 236 insns) */
void f_11be46e0(void) {
  FTRACE(0x11be46e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be46e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be46e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be46e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be46e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11be46eb push 0x11c0b5dc */
  push32((uint32_t)(0x11c0b5dcu));
  /* 11be46f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be46f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11be46f7 call 0x11be4ad0 */
  push32(0x11be46fcu); f_11be4ad0();
  /* 11be46fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be46ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11be4702 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4706 jne 0x11be4712 */
  if (!C.zf) goto L_11be4712;
  /* 11be4708 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11be470a call 0x11be3a40 */
  push32(0x11be470fu); f_11be3a40();
  /* 11be470f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be4712:;
  /* 11be4712 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4715 mov dword ptr [0x11c12040], eax */
  w32((uint32_t)(0x11c12040), (EAX));
  /* 11be471a mov dword ptr [0x11c1217c], 0x20 */
  w32((uint32_t)(0x11c1217c), (0x20u));
  /* 11be4724 jmp 0x11be472f */
  goto L_11be472f;
L_11be4726:;
  /* 11be4726 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4729 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be472c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11be472f:;
  /* 11be472f mov edx, dword ptr [0x11c12040] */
  EDX = (r32((uint32_t)(0x11c12040)));
  /* 11be4735 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be473b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be473e jae 0x11be4763 */
  if (!C.cf) goto L_11be4763;
  /* 11be4740 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4743 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11be4747 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be474a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11be4750 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4753 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11be4757 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be475a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11be4761 jmp 0x11be4726 */
  goto L_11be4726;
L_11be4763:;
  /* 11be4763 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11be4766 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4767 call dword ptr [0x11c13398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13398))), 0x11be476du);
  /* 11be476d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11be4770 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be4776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be4778 je 0x11be4905 */
  if (C.zf) goto L_11be4905;
  /* 11be477e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4782 je 0x11be4905 */
  if (C.zf) goto L_11be4905;
  /* 11be4788 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be478b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be478d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11be4790 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be4793 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4796 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be4799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be479c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be479f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11be47a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be47a9 jge 0x11be47b3 */
  if ((C.sf==C.of)) goto L_11be47b3;
  /* 11be47ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11be47ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11be47b1 jmp 0x11be47ba */
  goto L_11be47ba;
L_11be47b3:;
  /* 11be47b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11be47ba:;
  /* 11be47ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11be47bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11be47c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11be47c7 jmp 0x11be47d2 */
  goto L_11be47d2;
L_11be47c9:;
  /* 11be47c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11be47cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be47cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11be47d2:;
  /* 11be47d2 mov ecx, dword ptr [0x11c1217c] */
  ECX = (r32((uint32_t)(0x11c1217c)));
  /* 11be47d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be47db jge 0x11be4872 */
  if ((C.sf==C.of)) goto L_11be4872;
  /* 11be47e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11be47e6 push 0x11c0b5dc */
  push32((uint32_t)(0x11c0b5dcu));
  /* 11be47eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11be47ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11be47f2 call 0x11be4ad0 */
  push32(0x11be47f7u); f_11be4ad0();
  /* 11be47f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be47fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11be47fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4801 jne 0x11be480e */
  if (!C.zf) goto L_11be480e;
  /* 11be4803 mov edx, dword ptr [0x11c1217c] */
  EDX = (r32((uint32_t)(0x11c1217c)));
  /* 11be4809 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11be480c jmp 0x11be4872 */
  goto L_11be4872;
L_11be480e:;
  /* 11be480e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11be4811 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4814 mov dword ptr [eax*4 + 0x11c12040], ecx */
  w32((uint32_t)(EAX*4 + 0x11c12040), (ECX));
  /* 11be481b mov edx, dword ptr [0x11c1217c] */
  EDX = (r32((uint32_t)(0x11c1217c)));
  /* 11be4821 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4824 mov dword ptr [0x11c1217c], edx */
  w32((uint32_t)(0x11c1217c), (EDX));
  /* 11be482a jmp 0x11be4835 */
  goto L_11be4835;
L_11be482c:;
  /* 11be482c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be482f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4832 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11be4835:;
  /* 11be4835 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11be4838 mov edx, dword ptr [ecx*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11be483f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4845 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4848 jae 0x11be486d */
  if (!C.cf) goto L_11be486d;
  /* 11be484a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be484d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11be4851 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4854 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11be485a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be485d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11be4861 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4864 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11be486b jmp 0x11be482c */
  goto L_11be482c;
L_11be486d:;
  /* 11be486d jmp 0x11be47c9 */
  goto L_11be47c9;
L_11be4872:;
  /* 11be4872 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11be4879 jmp 0x11be4896 */
  goto L_11be4896;
L_11be487b:;
  /* 11be487b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be487e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4881 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11be4884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4887 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be488a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be488d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11be4890 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4893 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11be4896:;
  /* 11be4896 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be4899 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be489c jge 0x11be4905 */
  if ((C.sf==C.of)) goto L_11be4905;
  /* 11be489e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11be48a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be48a4 je 0x11be4900 */
  if (C.zf) goto L_11be4900;
  /* 11be48a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be48a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be48ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11be48af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be48b1 je 0x11be4900 */
  if (C.zf) goto L_11be4900;
  /* 11be48b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be48b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be48b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11be48bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be48be jne 0x11be48d0 */
  if (!C.zf) goto L_11be48d0;
  /* 11be48c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11be48c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be48c5 push edx */
  push32((uint32_t)(EDX));
  /* 11be48c6 call dword ptr [0x11c13394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13394))), 0x11be48ccu);
  /* 11be48cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be48ce je 0x11be4900 */
  if (C.zf) goto L_11be4900;
L_11be48d0:;
  /* 11be48d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be48d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11be48d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be48d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11be48dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be48df mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11be48e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be48e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11be48eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be48ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11be48f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be48f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be48f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be48f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be48fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be48fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11be4900:;
  /* 11be4900 jmp 0x11be487b */
  goto L_11be487b;
L_11be4905:;
  /* 11be4905 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11be490c jmp 0x11be4917 */
  goto L_11be4917;
L_11be490e:;
  /* 11be490e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be4911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4914 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11be4917:;
  /* 11be4917 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be491b jge 0x11be49f4 */
  if ((C.sf==C.of)) goto L_11be49f4;
  /* 11be4921 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be4924 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be4927 mov edx, dword ptr [0x11c12040] */
  EDX = (r32((uint32_t)(0x11c12040)));
  /* 11be492d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be492f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11be4932 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4935 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4938 jne 0x11be49e0 */
  if (!C.zf) goto L_11be49e0;
  /* 11be493e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be4941 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11be4945 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4949 jne 0x11be4954 */
  if (!C.zf) goto L_11be4954;
  /* 11be494b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11be4952 jmp 0x11be4964 */
  goto L_11be4964;
L_11be4954:;
  /* 11be4954 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11be4957 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be495a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11be495c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be495e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4961 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11be4964:;
  /* 11be4964 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11be4967 push eax */
  push32((uint32_t)(EAX));
  /* 11be4968 call dword ptr [0x11c13344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13344))), 0x11be496eu);
  /* 11be496e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11be4971 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4975 je 0x11be49cf */
  if (C.zf) goto L_11be49cf;
  /* 11be4977 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be497a push ecx */
  push32((uint32_t)(ECX));
  /* 11be497b call dword ptr [0x11c13394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13394))), 0x11be4981u);
  /* 11be4981 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11be4984 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4988 je 0x11be49cf */
  if (C.zf) goto L_11be49cf;
  /* 11be498a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be498d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be4990 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be4992 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11be4995 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be499b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be499e jne 0x11be49b0 */
  if (!C.zf) goto L_11be49b0;
  /* 11be49a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49a3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11be49a6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11be49a8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49ab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11be49ae jmp 0x11be49cd */
  goto L_11be49cd;
L_11be49b0:;
  /* 11be49b0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11be49b3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be49b9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be49bc jne 0x11be49cd */
  if (!C.zf) goto L_11be49cd;
  /* 11be49be mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be49c4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11be49c7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11be49cd:;
  /* 11be49cd jmp 0x11be49de */
  goto L_11be49de;
L_11be49cf:;
  /* 11be49cf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49d2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be49d5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11be49d8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11be49de:;
  /* 11be49de jmp 0x11be49ef */
  goto L_11be49ef;
L_11be49e0:;
  /* 11be49e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49e3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be49e6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11be49e9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be49ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11be49ef:;
  /* 11be49ef jmp 0x11be490e */
  goto L_11be490e;
L_11be49f4:;
  /* 11be49f4 mov eax, dword ptr [0x11c1217c] */
  EAX = (r32((uint32_t)(0x11c1217c)));
  /* 11be49f9 push eax */
  push32((uint32_t)(EAX));
  /* 11be49fa call dword ptr [0x11c13390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13390))), 0x11be4a00u);
  /* 11be4a00 mov esp, ebp */
  ESP = (EBP);
  /* 11be4a02 pop ebp */
  EBP = (pop32());
  /* 11be4a03 ret  */
  ESPCHK(0x11be46e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11be4a10 (155 bytes, 45 insns) */
void f_11be4a10(void) {
  FTRACE(0x11be4a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4a11 mov ebp, esp */
  EBP = (ESP);
  /* 11be4a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4a16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be4a1d jmp 0x11be4a28 */
  goto L_11be4a28;
L_11be4a1f:;
  /* 11be4a1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4a25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11be4a28:;
  /* 11be4a28 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4a2c jge 0x11be4aa7 */
  if ((C.sf==C.of)) goto L_11be4aa7;
  /* 11be4a2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a31 cmp dword ptr [ecx*4 + 0x11c12040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11c12040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4a39 je 0x11be4aa2 */
  if (C.zf) goto L_11be4aa2;
  /* 11be4a3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a3e mov eax, dword ptr [edx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11be4a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4a48 jmp 0x11be4a53 */
  goto L_11be4a53;
L_11be4a4a:;
  /* 11be4a4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4a4d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4a50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be4a53:;
  /* 11be4a53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a56 mov eax, dword ptr [edx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11be4a5d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4a62 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4a65 jae 0x11be4a7f */
  if (!C.cf) goto L_11be4a7f;
  /* 11be4a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4a6a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4a6e je 0x11be4a7d */
  if (C.zf) goto L_11be4a7d;
  /* 11be4a70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4a73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4a76 push edx */
  push32((uint32_t)(EDX));
  /* 11be4a77 call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be4a7du);
L_11be4a7d:;
  /* 11be4a7d jmp 0x11be4a4a */
  goto L_11be4a4a;
L_11be4a7f:;
  /* 11be4a7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4a81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a84 mov ecx, dword ptr [eax*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11be4a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11be4a8c call 0x11be5560 */
  push32(0x11be4a91u); f_11be5560();
  /* 11be4a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4a94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4a97 mov dword ptr [edx*4 + 0x11c12040], 0 */
  w32((uint32_t)(EDX*4 + 0x11c12040), (0x0u));
L_11be4aa2:;
  /* 11be4aa2 jmp 0x11be4a1f */
  goto L_11be4a1f;
L_11be4aa7:;
  /* 11be4aa7 mov esp, ebp */
  ESP = (EBP);
  /* 11be4aa9 pop ebp */
  EBP = (pop32());
  /* 11be4aaa ret  */
  ESPCHK(0x11be4a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab0 @ 0x11be4ab0 (29 bytes, 13 insns) */
void f_11be4ab0(void) {
  FTRACE(0x11be4ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4ab9 mov eax, dword ptr [0x11c10840] */
  EAX = (r32((uint32_t)(0x11c10840)));
  /* 11be4abe push eax */
  push32((uint32_t)(EAX));
  /* 11be4abf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4ac3 call 0x11be4b20 */
  push32(0x11be4ac8u); f_11be4b20();
  /* 11be4ac8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4acb pop ebp */
  EBP = (pop32());
  /* 11be4acc ret  */
  ESPCHK(0x11be4ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ad0 @ 0x11be4ad0 (35 bytes, 16 insns) */
void f_11be4ad0(void) {
  FTRACE(0x11be4ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4ad3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4ad6 push eax */
  push32((uint32_t)(EAX));
  /* 11be4ad7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4ada push ecx */
  push32((uint32_t)(ECX));
  /* 11be4adb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4ade push edx */
  push32((uint32_t)(EDX));
  /* 11be4adf mov eax, dword ptr [0x11c10840] */
  EAX = (r32((uint32_t)(0x11c10840)));
  /* 11be4ae4 push eax */
  push32((uint32_t)(EAX));
  /* 11be4ae5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4ae9 call 0x11be4b20 */
  push32(0x11be4aeeu); f_11be4b20();
  /* 11be4aee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4af1 pop ebp */
  EBP = (pop32());
  /* 11be4af2 ret  */
  ESPCHK(0x11be4ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b00 @ 0x11be4b00 (27 bytes, 13 insns) */
void f_11be4b00(void) {
  FTRACE(0x11be4b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4b01 mov ebp, esp */
  EBP = (ESP);
  /* 11be4b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4b07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4b0c push eax */
  push32((uint32_t)(EAX));
  /* 11be4b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4b11 call 0x11be4b20 */
  push32(0x11be4b16u); f_11be4b20();
  /* 11be4b16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b19 pop ebp */
  EBP = (pop32());
  /* 11be4b1a ret  */
  ESPCHK(0x11be4b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x11be4b20 (94 bytes, 38 insns) */
void f_11be4b20(void) {
  FTRACE(0x11be4b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4b21 mov ebp, esp */
  EBP = (ESP);
  /* 11be4b23 push ecx */
  push32((uint32_t)(ECX));
L_11be4b24:;
  /* 11be4b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be4b26 call 0x11be84d0 */
  push32(0x11be4b2bu); f_11be84d0();
  /* 11be4b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4b31 push eax */
  push32((uint32_t)(EAX));
  /* 11be4b32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4b36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4b39 push edx */
  push32((uint32_t)(EDX));
  /* 11be4b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4b3d push eax */
  push32((uint32_t)(EAX));
  /* 11be4b3e call 0x11be4ba0 */
  push32(0x11be4b43u); f_11be4ba0();
  /* 11be4b43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4b49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be4b4b call 0x11be8570 */
  push32(0x11be4b50u); f_11be8570();
  /* 11be4b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4b57 jne 0x11be4b5f */
  if (!C.zf) goto L_11be4b5f;
  /* 11be4b59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4b5d jne 0x11be4b64 */
  if (!C.zf) goto L_11be4b64;
L_11be4b5f:;
  /* 11be4b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4b62 jmp 0x11be4b7a */
  goto L_11be4b7a;
L_11be4b64:;
  /* 11be4b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4b67 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4b68 call 0x11be8810 */
  push32(0x11be4b6du); f_11be8810();
  /* 11be4b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4b72 jne 0x11be4b78 */
  if (!C.zf) goto L_11be4b78;
  /* 11be4b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4b76 jmp 0x11be4b7a */
  goto L_11be4b7a;
L_11be4b78:;
  /* 11be4b78 jmp 0x11be4b24 */
  goto L_11be4b24;
L_11be4b7a:;
  /* 11be4b7a mov esp, ebp */
  ESP = (EBP);
  /* 11be4b7c pop ebp */
  EBP = (pop32());
  /* 11be4b7d ret  */
  ESPCHK(0x11be4b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b80 @ 0x11be4b80 (23 bytes, 11 insns) */
void f_11be4b80(void) {
  FTRACE(0x11be4b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4b81 mov ebp, esp */
  EBP = (ESP);
  /* 11be4b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4b8c push eax */
  push32((uint32_t)(EAX));
  /* 11be4b8d call 0x11be4ba0 */
  push32(0x11be4b92u); f_11be4ba0();
  /* 11be4b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4b95 pop ebp */
  EBP = (pop32());
  /* 11be4b96 ret  */
  ESPCHK(0x11be4b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x11be4ba0 (787 bytes, 254 insns) */
void f_11be4ba0(void) {
  FTRACE(0x11be4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be4ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11be4ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11be4ba9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11be4bb0 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be4bb5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be4bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4bba je 0x11be4bec */
  if (C.zf) goto L_11be4bec;
L_11be4bbc:;
  /* 11be4bbc call 0x11be5c70 */
  push32(0x11be4bc1u); f_11be5c70();
  /* 11be4bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4bc3 jne 0x11be4be6 */
  if (!C.zf) goto L_11be4be6;
  /* 11be4bc5 push 0x11c0b6d0 */
  push32((uint32_t)(0x11c0b6d0u));
  /* 11be4bca push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4bcc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11be4bd1 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be4bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be4bd8 call 0x11be3b90 */
  push32(0x11be4bddu); f_11be3b90();
  /* 11be4bdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4be0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4be3 jne 0x11be4be6 */
  if (!C.zf) goto L_11be4be6;
  /* 11be4be5 int3  */
  x86_unimpl("int3 @ 0x11be4be5");
L_11be4be6:;
  /* 11be4be6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be4be8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be4bea jne 0x11be4bbc */
  if (!C.zf) goto L_11be4bbc;
L_11be4bec:;
  /* 11be4bec mov edx, dword ptr [0x11c0ea88] */
  EDX = (r32((uint32_t)(0x11c0ea88)));
  /* 11be4bf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11be4bf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4bf8 cmp eax, dword ptr [0x11c0ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4bfe jne 0x11be4c01 */
  if (!C.zf) goto L_11be4c01;
  /* 11be4c00 int3  */
  x86_unimpl("int3 @ 0x11be4c00");
L_11be4c01:;
  /* 11be4c01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4c04 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4c05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4c08 push edx */
  push32((uint32_t)(EDX));
  /* 11be4c09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4c0c push eax */
  push32((uint32_t)(EAX));
  /* 11be4c0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4c14 push edx */
  push32((uint32_t)(EDX));
  /* 11be4c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4c19 call dword ptr [0x11c0ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0ec90))), 0x11be4c1fu);
  /* 11be4c1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4c24 jne 0x11be4c84 */
  if (!C.zf) goto L_11be4c84;
  /* 11be4c26 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4c2a je 0x11be4c57 */
  if (C.zf) goto L_11be4c57;
L_11be4c2c:;
  /* 11be4c2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4c2f push eax */
  push32((uint32_t)(EAX));
  /* 11be4c30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4c34 push 0x11c0b68c */
  push32((uint32_t)(0x11c0b68cu));
  /* 11be4c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c41 call 0x11be3b90 */
  push32(0x11be4c46u); f_11be3b90();
  /* 11be4c46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4c49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4c4c jne 0x11be4c4f */
  if (!C.zf) goto L_11be4c4f;
  /* 11be4c4e int3  */
  x86_unimpl("int3 @ 0x11be4c4e");
L_11be4c4f:;
  /* 11be4c4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be4c51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be4c53 jne 0x11be4c2c */
  if (!C.zf) goto L_11be4c2c;
  /* 11be4c55 jmp 0x11be4c7d */
  goto L_11be4c7d;
L_11be4c57:;
  /* 11be4c57 push 0x11c0b668 */
  push32((uint32_t)(0x11c0b668u));
  /* 11be4c5c push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be4c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4c69 call 0x11be3b90 */
  push32(0x11be4c6eu); f_11be3b90();
  /* 11be4c6e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4c71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4c74 jne 0x11be4c77 */
  if (!C.zf) goto L_11be4c77;
  /* 11be4c76 int3  */
  x86_unimpl("int3 @ 0x11be4c76");
L_11be4c77:;
  /* 11be4c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be4c7b jne 0x11be4c57 */
  if (!C.zf) goto L_11be4c57;
L_11be4c7d:;
  /* 11be4c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4c7f jmp 0x11be4eac */
  goto L_11be4eac;
L_11be4c84:;
  /* 11be4c84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4c87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be4c8d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4c90 je 0x11be4ca6 */
  if (C.zf) goto L_11be4ca6;
  /* 11be4c92 mov edx, dword ptr [0x11c0ea84] */
  EDX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be4c98 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11be4c9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be4c9d jne 0x11be4ca6 */
  if (!C.zf) goto L_11be4ca6;
  /* 11be4c9f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11be4ca6:;
  /* 11be4ca6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4caa ja 0x11be4cb7 */
  if ((!C.cf&&!C.zf)) goto L_11be4cb7;
  /* 11be4cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4caf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4cb2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4cb5 jbe 0x11be4ce3 */
  if ((C.cf||C.zf)) goto L_11be4ce3;
L_11be4cb7:;
  /* 11be4cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4cba push ecx */
  push32((uint32_t)(ECX));
  /* 11be4cbb push 0x11c0b640 */
  push32((uint32_t)(0x11c0b640u));
  /* 11be4cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4cc8 call 0x11be3b90 */
  push32(0x11be4ccdu); f_11be3b90();
  /* 11be4ccd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4cd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4cd3 jne 0x11be4cd6 */
  if (!C.zf) goto L_11be4cd6;
  /* 11be4cd5 int3  */
  x86_unimpl("int3 @ 0x11be4cd5");
L_11be4cd6:;
  /* 11be4cd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be4cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be4cda jne 0x11be4cb7 */
  if (!C.zf) goto L_11be4cb7;
  /* 11be4cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4cde jmp 0x11be4eac */
  goto L_11be4eac;
L_11be4ce3:;
  /* 11be4ce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4ce6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be4ceb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4cee je 0x11be4d30 */
  if (C.zf) goto L_11be4d30;
  /* 11be4cf0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4cf4 je 0x11be4d30 */
  if (C.zf) goto L_11be4d30;
  /* 11be4cf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4cf9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be4cff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4d02 je 0x11be4d30 */
  if (C.zf) goto L_11be4d30;
  /* 11be4d04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4d08 je 0x11be4d30 */
  if (C.zf) goto L_11be4d30;
L_11be4d0a:;
  /* 11be4d0a push 0x11c0b60c */
  push32((uint32_t)(0x11c0b60cu));
  /* 11be4d0f push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be4d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4d1c call 0x11be3b90 */
  push32(0x11be4d21u); f_11be3b90();
  /* 11be4d21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4d24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4d27 jne 0x11be4d2a */
  if (!C.zf) goto L_11be4d2a;
  /* 11be4d29 int3  */
  x86_unimpl("int3 @ 0x11be4d29");
L_11be4d2a:;
  /* 11be4d2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be4d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be4d2e jne 0x11be4d0a */
  if (!C.zf) goto L_11be4d0a;
L_11be4d30:;
  /* 11be4d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4d33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4d36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be4d39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be4d3c push ecx */
  push32((uint32_t)(ECX));
  /* 11be4d3d call 0x11be8920 */
  push32(0x11be4d42u); f_11be8920();
  /* 11be4d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4d45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4d48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4d4c jne 0x11be4d55 */
  if (!C.zf) goto L_11be4d55;
  /* 11be4d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4d50 jmp 0x11be4eac */
  goto L_11be4eac;
L_11be4d55:;
  /* 11be4d55 mov edx, dword ptr [0x11c0ea88] */
  EDX = (r32((uint32_t)(0x11c0ea88)));
  /* 11be4d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4d5e mov dword ptr [0x11c0ea88], edx */
  w32((uint32_t)(0x11c0ea88), (EDX));
  /* 11be4d64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4d68 je 0x11be4db3 */
  if (C.zf) goto L_11be4db3;
  /* 11be4d6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be4d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11be4d7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11be4d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11be4d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4d97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11be4d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4d9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11be4da4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4da7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11be4dae jmp 0x11be4e53 */
  goto L_11be4e53;
L_11be4db3:;
  /* 11be4db3 mov edx, dword ptr [0x11c106a0] */
  EDX = (r32((uint32_t)(0x11c106a0)));
  /* 11be4db9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4dbc mov dword ptr [0x11c106a0], edx */
  w32((uint32_t)(0x11c106a0), (EDX));
  /* 11be4dc2 mov eax, dword ptr [0x11c106a8] */
  EAX = (r32((uint32_t)(0x11c106a8)));
  /* 11be4dc7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4dca mov dword ptr [0x11c106a8], eax */
  w32((uint32_t)(0x11c106a8), (EAX));
  /* 11be4dcf mov ecx, dword ptr [0x11c106a8] */
  ECX = (r32((uint32_t)(0x11c106a8)));
  /* 11be4dd5 cmp ecx, dword ptr [0x11c106ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c106ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4ddb jbe 0x11be4de9 */
  if ((C.cf||C.zf)) goto L_11be4de9;
  /* 11be4ddd mov edx, dword ptr [0x11c106a8] */
  EDX = (r32((uint32_t)(0x11c106a8)));
  /* 11be4de3 mov dword ptr [0x11c106ac], edx */
  w32((uint32_t)(0x11c106ac), (EDX));
L_11be4de9:;
  /* 11be4de9 cmp dword ptr [0x11c106a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c106a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4df0 je 0x11be4dff */
  if (C.zf) goto L_11be4dff;
  /* 11be4df2 mov eax, dword ptr [0x11c106a4] */
  EAX = (r32((uint32_t)(0x11c106a4)));
  /* 11be4df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4dfa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11be4dfd jmp 0x11be4e08 */
  goto L_11be4e08;
L_11be4dff:;
  /* 11be4dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e02 mov dword ptr [0x11c1069c], edx */
  w32((uint32_t)(0x11c1069c), (EDX));
L_11be4e08:;
  /* 11be4e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e0b mov ecx, dword ptr [0x11c106a4] */
  ECX = (r32((uint32_t)(0x11c106a4)));
  /* 11be4e11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11be4e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11be4e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4e23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11be4e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4e2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11be4e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4e35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11be4e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4e3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11be4e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4e47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11be4e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e4d mov dword ptr [0x11c106a4], ecx */
  w32((uint32_t)(0x11c106a4), (ECX));
L_11be4e53:;
  /* 11be4e53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be4e55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be4e57 mov dl, byte ptr [0x11c0ea90] */
  DL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be4e5d push edx */
  push32((uint32_t)(EDX));
  /* 11be4e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4e64 push eax */
  push32((uint32_t)(EAX));
  /* 11be4e65 call 0x11be8840 */
  push32(0x11be4e6au); f_11be8840();
  /* 11be4e6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4e6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11be4e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be4e71 mov cl, byte ptr [0x11c0ea90] */
  CL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be4e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11be4e82 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4e83 call 0x11be8840 */
  push32(0x11be4e88u); f_11be8840();
  /* 11be4e88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4e8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4e8e push edx */
  push32((uint32_t)(EDX));
  /* 11be4e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4e91 mov al, byte ptr [0x11c0ea92] */
  AL = (r8((uint32_t)(0x11c0ea92)));
  /* 11be4e96 push eax */
  push32((uint32_t)(EAX));
  /* 11be4e97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4e9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4e9d push ecx */
  push32((uint32_t)(ECX));
  /* 11be4e9e call 0x11be8840 */
  push32(0x11be4ea3u); f_11be8840();
  /* 11be4ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4ea9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11be4eac:;
  /* 11be4eac pop edi */
  EDI = (pop32());
  /* 11be4ead pop esi */
  ESI = (pop32());
  /* 11be4eae pop ebx */
  EBX = (pop32());
  /* 11be4eaf mov esp, ebp */
  ESP = (EBP);
  /* 11be4eb1 pop ebp */
  EBP = (pop32());
  /* 11be4eb2 ret  */
  ESPCHK(0x11be4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ec0 @ 0x11be4ec0 (27 bytes, 13 insns) */
void f_11be4ec0(void) {
  FTRACE(0x11be4ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4ec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4ecc push eax */
  push32((uint32_t)(EAX));
  /* 11be4ecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4ed1 call 0x11be4ee0 */
  push32(0x11be4ed6u); f_11be4ee0();
  /* 11be4ed6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4ed9 pop ebp */
  EBP = (pop32());
  /* 11be4eda ret  */
  ESPCHK(0x11be4ec0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11be4ee0 (96 bytes, 37 insns) */
void f_11be4ee0(void) {
  FTRACE(0x11be4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4ee6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4ee9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be4eed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11be4ef0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4ef4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11be4ef8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4efb push eax */
  push32((uint32_t)(EAX));
  /* 11be4efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4eff push ecx */
  push32((uint32_t)(ECX));
  /* 11be4f00 call 0x11be4ad0 */
  push32(0x11be4f05u); f_11be4ad0();
  /* 11be4f05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be4f0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4f0f je 0x11be4f39 */
  if (C.zf) goto L_11be4f39;
  /* 11be4f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4f14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11be4f17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be4f1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be4f20:;
  /* 11be4f20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be4f23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4f26 jae 0x11be4f39 */
  if (!C.cf) goto L_11be4f39;
  /* 11be4f28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be4f2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11be4f2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be4f31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be4f37 jmp 0x11be4f20 */
  goto L_11be4f20;
L_11be4f39:;
  /* 11be4f39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be4f3c mov esp, ebp */
  ESP = (EBP);
  /* 11be4f3e pop ebp */
  EBP = (pop32());
  /* 11be4f3f ret  */
  ESPCHK(0x11be4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f40 @ 0x11be4f40 (27 bytes, 13 insns) */
void f_11be4f40(void) {
  FTRACE(0x11be4f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4f41 mov ebp, esp */
  EBP = (ESP);
  /* 11be4f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be4f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4f4c push eax */
  push32((uint32_t)(EAX));
  /* 11be4f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4f51 call 0x11be4f60 */
  push32(0x11be4f56u); f_11be4f60();
  /* 11be4f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f59 pop ebp */
  EBP = (pop32());
  /* 11be4f5a ret  */
  ESPCHK(0x11be4f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f60 @ 0x11be4f60 (64 bytes, 27 insns) */
void f_11be4f60(void) {
  FTRACE(0x11be4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4f61 mov ebp, esp */
  EBP = (ESP);
  /* 11be4f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4f64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be4f66 call 0x11be84d0 */
  push32(0x11be4f6bu); f_11be84d0();
  /* 11be4f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11be4f70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4f73 push eax */
  push32((uint32_t)(EAX));
  /* 11be4f74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4f78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4f7b push edx */
  push32((uint32_t)(EDX));
  /* 11be4f7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4f7f push eax */
  push32((uint32_t)(EAX));
  /* 11be4f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4f84 call 0x11be4fa0 */
  push32(0x11be4f89u); f_11be4fa0();
  /* 11be4f89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be4f8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11be4f91 call 0x11be8570 */
  push32(0x11be4f96u); f_11be8570();
  /* 11be4f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be4f9c mov esp, ebp */
  ESP = (EBP);
  /* 11be4f9e pop ebp */
  EBP = (pop32());
  /* 11be4f9f ret  */
  ESPCHK(0x11be4f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x11be4fa0 (1297 bytes, 431 insns) */
void f_11be4fa0(void) {
  FTRACE(0x11be4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11be4fa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be4fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be4fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11be4fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11be4fa9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11be4fb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4fb4 jne 0x11be4fd3 */
  if (!C.zf) goto L_11be4fd3;
  /* 11be4fb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be4fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11be4fba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be4fbd push ecx */
  push32((uint32_t)(ECX));
  /* 11be4fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4fc1 push edx */
  push32((uint32_t)(EDX));
  /* 11be4fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be4fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11be4fc6 call 0x11be4ad0 */
  push32(0x11be4fcbu); f_11be4ad0();
  /* 11be4fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4fce jmp 0x11be54aa */
  goto L_11be54aa;
L_11be4fd3:;
  /* 11be4fd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4fd7 je 0x11be4ff6 */
  if (C.zf) goto L_11be4ff6;
  /* 11be4fd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be4fdd jne 0x11be4ff6 */
  if (!C.zf) goto L_11be4ff6;
  /* 11be4fdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be4fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11be4fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be4fe6 push edx */
  push32((uint32_t)(EDX));
  /* 11be4fe7 call 0x11be5560 */
  push32(0x11be4fecu); f_11be5560();
  /* 11be4fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be4fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be4ff1 jmp 0x11be54aa */
  goto L_11be54aa;
L_11be4ff6:;
  /* 11be4ff6 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be4ffb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be4ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5000 je 0x11be5032 */
  if (C.zf) goto L_11be5032;
L_11be5002:;
  /* 11be5002 call 0x11be5c70 */
  push32(0x11be5007u); f_11be5c70();
  /* 11be5007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5009 jne 0x11be502c */
  if (!C.zf) goto L_11be502c;
  /* 11be500b push 0x11c0b6d0 */
  push32((uint32_t)(0x11c0b6d0u));
  /* 11be5010 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5012 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11be5017 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be501c push 2 */
  push32((uint32_t)(0x2u));
  /* 11be501e call 0x11be3b90 */
  push32(0x11be5023u); f_11be3b90();
  /* 11be5023 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5026 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5029 jne 0x11be502c */
  if (!C.zf) goto L_11be502c;
  /* 11be502b int3  */
  x86_unimpl("int3 @ 0x11be502b");
L_11be502c:;
  /* 11be502c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be502e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5030 jne 0x11be5002 */
  if (!C.zf) goto L_11be5002;
L_11be5032:;
  /* 11be5032 mov edx, dword ptr [0x11c0ea88] */
  EDX = (r32((uint32_t)(0x11c0ea88)));
  /* 11be5038 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11be503b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be503e cmp eax, dword ptr [0x11c0ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5044 jne 0x11be5047 */
  if (!C.zf) goto L_11be5047;
  /* 11be5046 int3  */
  x86_unimpl("int3 @ 0x11be5046");
L_11be5047:;
  /* 11be5047 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be504a push ecx */
  push32((uint32_t)(ECX));
  /* 11be504b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be504e push edx */
  push32((uint32_t)(EDX));
  /* 11be504f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be5052 push eax */
  push32((uint32_t)(EAX));
  /* 11be5053 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be5056 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5057 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be505a push edx */
  push32((uint32_t)(EDX));
  /* 11be505b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be505e push eax */
  push32((uint32_t)(EAX));
  /* 11be505f push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5061 call dword ptr [0x11c0ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0ec90))), 0x11be5067u);
  /* 11be5067 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be506a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be506c jne 0x11be50cc */
  if (!C.zf) goto L_11be50cc;
  /* 11be506e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5072 je 0x11be509f */
  if (C.zf) goto L_11be509f;
L_11be5074:;
  /* 11be5074 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be5077 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5078 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be507b push edx */
  push32((uint32_t)(EDX));
  /* 11be507c push 0x11c0b84c */
  push32((uint32_t)(0x11c0b84cu));
  /* 11be5081 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5089 call 0x11be3b90 */
  push32(0x11be508eu); f_11be3b90();
  /* 11be508e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5094 jne 0x11be5097 */
  if (!C.zf) goto L_11be5097;
  /* 11be5096 int3  */
  x86_unimpl("int3 @ 0x11be5096");
L_11be5097:;
  /* 11be5097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be509b jne 0x11be5074 */
  if (!C.zf) goto L_11be5074;
  /* 11be509d jmp 0x11be50c5 */
  goto L_11be50c5;
L_11be509f:;
  /* 11be509f push 0x11c0b828 */
  push32((uint32_t)(0x11c0b828u));
  /* 11be50a4 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be50a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50af push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50b1 call 0x11be3b90 */
  push32(0x11be50b6u); f_11be3b90();
  /* 11be50b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be50b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be50bc jne 0x11be50bf */
  if (!C.zf) goto L_11be50bf;
  /* 11be50be int3  */
  x86_unimpl("int3 @ 0x11be50be");
L_11be50bf:;
  /* 11be50bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be50c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be50c3 jne 0x11be509f */
  if (!C.zf) goto L_11be509f;
L_11be50c5:;
  /* 11be50c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be50c7 jmp 0x11be54aa */
  goto L_11be54aa;
L_11be50cc:;
  /* 11be50cc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be50d0 jbe 0x11be50fe */
  if ((C.cf||C.zf)) goto L_11be50fe;
L_11be50d2:;
  /* 11be50d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be50d5 push edx */
  push32((uint32_t)(EDX));
  /* 11be50d6 push 0x11c0b7f8 */
  push32((uint32_t)(0x11c0b7f8u));
  /* 11be50db push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50df push 0 */
  push32((uint32_t)(0x0u));
  /* 11be50e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be50e3 call 0x11be3b90 */
  push32(0x11be50e8u); f_11be3b90();
  /* 11be50e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be50eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be50ee jne 0x11be50f1 */
  if (!C.zf) goto L_11be50f1;
  /* 11be50f0 int3  */
  x86_unimpl("int3 @ 0x11be50f0");
L_11be50f1:;
  /* 11be50f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be50f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be50f5 jne 0x11be50d2 */
  if (!C.zf) goto L_11be50d2;
  /* 11be50f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be50f9 jmp 0x11be54aa */
  goto L_11be54aa;
L_11be50fe:;
  /* 11be50fe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5102 je 0x11be5146 */
  if (C.zf) goto L_11be5146;
  /* 11be5104 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be5107 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be510d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5110 je 0x11be5146 */
  if (C.zf) goto L_11be5146;
  /* 11be5112 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be5115 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be511b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be511e je 0x11be5146 */
  if (C.zf) goto L_11be5146;
L_11be5120:;
  /* 11be5120 push 0x11c0b60c */
  push32((uint32_t)(0x11c0b60cu));
  /* 11be5125 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be512a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be512c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be512e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5130 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be5132 call 0x11be3b90 */
  push32(0x11be5137u); f_11be3b90();
  /* 11be5137 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be513a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be513d jne 0x11be5140 */
  if (!C.zf) goto L_11be5140;
  /* 11be513f int3  */
  x86_unimpl("int3 @ 0x11be513f");
L_11be5140:;
  /* 11be5140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5144 jne 0x11be5120 */
  if (!C.zf) goto L_11be5120;
L_11be5146:;
  /* 11be5146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5149 push ecx */
  push32((uint32_t)(ECX));
  /* 11be514a call 0x11be60d0 */
  push32(0x11be514fu); f_11be60d0();
  /* 11be514f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5154 jne 0x11be5177 */
  if (!C.zf) goto L_11be5177;
  /* 11be5156 push 0x11c0b7d4 */
  push32((uint32_t)(0x11c0b7d4u));
  /* 11be515b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be515d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11be5162 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5167 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5169 call 0x11be3b90 */
  push32(0x11be516eu); f_11be3b90();
  /* 11be516e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5171 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5174 jne 0x11be5177 */
  if (!C.zf) goto L_11be5177;
  /* 11be5176 int3  */
  x86_unimpl("int3 @ 0x11be5176");
L_11be5177:;
  /* 11be5177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be517b jne 0x11be5146 */
  if (!C.zf) goto L_11be5146;
  /* 11be517d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5180 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5183 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be5186 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5189 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be518d jne 0x11be5196 */
  if (!C.zf) goto L_11be5196;
  /* 11be518f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11be5196:;
  /* 11be5196 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be519a je 0x11be51da */
  if (C.zf) goto L_11be51da;
L_11be519c:;
  /* 11be519c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be519f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be51a6 jne 0x11be51b1 */
  if (!C.zf) goto L_11be51b1;
  /* 11be51a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be51ab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be51af je 0x11be51d2 */
  if (C.zf) goto L_11be51d2;
L_11be51b1:;
  /* 11be51b1 push 0x11c0b78c */
  push32((uint32_t)(0x11c0b78cu));
  /* 11be51b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be51b8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11be51bd push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be51c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be51c4 call 0x11be3b90 */
  push32(0x11be51c9u); f_11be3b90();
  /* 11be51c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be51cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be51cf jne 0x11be51d2 */
  if (!C.zf) goto L_11be51d2;
  /* 11be51d1 int3  */
  x86_unimpl("int3 @ 0x11be51d1");
L_11be51d2:;
  /* 11be51d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be51d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be51d6 jne 0x11be519c */
  if (!C.zf) goto L_11be519c;
  /* 11be51d8 jmp 0x11be523e */
  goto L_11be523e;
L_11be51da:;
  /* 11be51da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be51dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be51e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be51e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be51e8 jne 0x11be51ff */
  if (!C.zf) goto L_11be51ff;
  /* 11be51ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be51ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be51f3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be51f6 jne 0x11be51ff */
  if (!C.zf) goto L_11be51ff;
  /* 11be51f8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11be51ff:;
  /* 11be51ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5202 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5205 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be520a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be520d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5213 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5215 je 0x11be5238 */
  if (C.zf) goto L_11be5238;
  /* 11be5217 push 0x11c0b750 */
  push32((uint32_t)(0x11c0b750u));
  /* 11be521c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be521e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11be5223 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5228 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be522a call 0x11be3b90 */
  push32(0x11be522fu); f_11be3b90();
  /* 11be522f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5232 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5235 jne 0x11be5238 */
  if (!C.zf) goto L_11be5238;
  /* 11be5237 int3  */
  x86_unimpl("int3 @ 0x11be5237");
L_11be5238:;
  /* 11be5238 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be523a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be523c jne 0x11be51ff */
  if (!C.zf) goto L_11be51ff;
L_11be523e:;
  /* 11be523e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5242 je 0x11be5269 */
  if (C.zf) goto L_11be5269;
  /* 11be5244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5247 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be524a push eax */
  push32((uint32_t)(EAX));
  /* 11be524b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be524e push ecx */
  push32((uint32_t)(ECX));
  /* 11be524f call 0x11be8a50 */
  push32(0x11be5254u); f_11be8a50();
  /* 11be5254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5257 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be525a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be525e jne 0x11be5267 */
  if (!C.zf) goto L_11be5267;
  /* 11be5260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5262 jmp 0x11be54aa */
  goto L_11be54aa;
L_11be5267:;
  /* 11be5267 jmp 0x11be528c */
  goto L_11be528c;
L_11be5269:;
  /* 11be5269 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be526c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be526f push edx */
  push32((uint32_t)(EDX));
  /* 11be5270 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5273 push eax */
  push32((uint32_t)(EAX));
  /* 11be5274 call 0x11be89a0 */
  push32(0x11be5279u); f_11be89a0();
  /* 11be5279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be527c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be527f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5283 jne 0x11be528c */
  if (!C.zf) goto L_11be528c;
  /* 11be5285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5287 jmp 0x11be54aa */
  goto L_11be54aa;
L_11be528c:;
  /* 11be528c mov ecx, dword ptr [0x11c0ea88] */
  ECX = (r32((uint32_t)(0x11c0ea88)));
  /* 11be5292 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5295 mov dword ptr [0x11c0ea88], ecx */
  w32((uint32_t)(0x11c0ea88), (ECX));
  /* 11be529b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be529f jne 0x11be52f7 */
  if (!C.zf) goto L_11be52f7;
  /* 11be52a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be52a4 mov eax, dword ptr [0x11c106a0] */
  EAX = (r32((uint32_t)(0x11c106a0)));
  /* 11be52a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be52ac mov dword ptr [0x11c106a0], eax */
  w32((uint32_t)(0x11c106a0), (EAX));
  /* 11be52b1 mov ecx, dword ptr [0x11c106a0] */
  ECX = (r32((uint32_t)(0x11c106a0)));
  /* 11be52b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be52ba mov dword ptr [0x11c106a0], ecx */
  w32((uint32_t)(0x11c106a0), (ECX));
  /* 11be52c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be52c3 mov eax, dword ptr [0x11c106a8] */
  EAX = (r32((uint32_t)(0x11c106a8)));
  /* 11be52c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be52cb mov dword ptr [0x11c106a8], eax */
  w32((uint32_t)(0x11c106a8), (EAX));
  /* 11be52d0 mov ecx, dword ptr [0x11c106a8] */
  ECX = (r32((uint32_t)(0x11c106a8)));
  /* 11be52d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be52d9 mov dword ptr [0x11c106a8], ecx */
  w32((uint32_t)(0x11c106a8), (ECX));
  /* 11be52df mov edx, dword ptr [0x11c106a8] */
  EDX = (r32((uint32_t)(0x11c106a8)));
  /* 11be52e5 cmp edx, dword ptr [0x11c106ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c106ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be52eb jbe 0x11be52f7 */
  if ((C.cf||C.zf)) goto L_11be52f7;
  /* 11be52ed mov eax, dword ptr [0x11c106a8] */
  EAX = (r32((uint32_t)(0x11c106a8)));
  /* 11be52f2 mov dword ptr [0x11c106ac], eax */
  w32((uint32_t)(0x11c106ac), (EAX));
L_11be52f7:;
  /* 11be52f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be52fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be52fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be5300 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5306 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5309 jbe 0x11be532f */
  if ((C.cf||C.zf)) goto L_11be532f;
  /* 11be530b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be530e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5311 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5314 push edx */
  push32((uint32_t)(EDX));
  /* 11be5315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5317 mov al, byte ptr [0x11c0ea92] */
  AL = (r8((uint32_t)(0x11c0ea92)));
  /* 11be531c push eax */
  push32((uint32_t)(EAX));
  /* 11be531d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5323 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5326 push edx */
  push32((uint32_t)(EDX));
  /* 11be5327 call 0x11be8840 */
  push32(0x11be532cu); f_11be8840();
  /* 11be532c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be532f:;
  /* 11be532f push 4 */
  push32((uint32_t)(0x4u));
  /* 11be5331 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5333 mov al, byte ptr [0x11c0ea90] */
  AL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be5338 push eax */
  push32((uint32_t)(EAX));
  /* 11be5339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be533c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be533f push ecx */
  push32((uint32_t)(ECX));
  /* 11be5340 call 0x11be8840 */
  push32(0x11be5345u); f_11be8840();
  /* 11be5345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5348 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be534c jne 0x11be5369 */
  if (!C.zf) goto L_11be5369;
  /* 11be534e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5351 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be5354 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be5357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be535a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be535d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11be5360 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5363 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be5366 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11be5369:;
  /* 11be5369 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be536c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be536f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11be5372:;
  /* 11be5372 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5376 jne 0x11be53a7 */
  if (!C.zf) goto L_11be53a7;
  /* 11be5378 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be537c jne 0x11be5386 */
  if (!C.zf) goto L_11be5386;
  /* 11be537e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5381 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5384 je 0x11be53a7 */
  if (C.zf) goto L_11be53a7;
L_11be5386:;
  /* 11be5386 push 0x11c0b71c */
  push32((uint32_t)(0x11c0b71cu));
  /* 11be538b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be538d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11be5392 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5397 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5399 call 0x11be3b90 */
  push32(0x11be539eu); f_11be3b90();
  /* 11be539e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be53a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be53a4 jne 0x11be53a7 */
  if (!C.zf) goto L_11be53a7;
  /* 11be53a6 int3  */
  x86_unimpl("int3 @ 0x11be53a6");
L_11be53a7:;
  /* 11be53a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be53a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be53ab jne 0x11be5372 */
  if (!C.zf) goto L_11be5372;
  /* 11be53ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be53b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be53b3 je 0x11be53bb */
  if (C.zf) goto L_11be53bb;
  /* 11be53b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be53b9 je 0x11be53c3 */
  if (C.zf) goto L_11be53c3;
L_11be53bb:;
  /* 11be53bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be53be jmp 0x11be54aa */
  goto L_11be54aa;
L_11be53c3:;
  /* 11be53c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be53c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be53c9 je 0x11be53db */
  if (C.zf) goto L_11be53db;
  /* 11be53cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be53ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be53d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be53d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be53d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11be53d9 jmp 0x11be5417 */
  goto L_11be5417;
L_11be53db:;
  /* 11be53db mov eax, dword ptr [0x11c1069c] */
  EAX = (r32((uint32_t)(0x11c1069c)));
  /* 11be53e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be53e3 je 0x11be5406 */
  if (C.zf) goto L_11be5406;
  /* 11be53e5 push 0x11c0b700 */
  push32((uint32_t)(0x11c0b700u));
  /* 11be53ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11be53ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11be53f1 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be53f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be53f8 call 0x11be3b90 */
  push32(0x11be53fdu); f_11be3b90();
  /* 11be53fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5400 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5403 jne 0x11be5406 */
  if (!C.zf) goto L_11be5406;
  /* 11be5405 int3  */
  x86_unimpl("int3 @ 0x11be5405");
L_11be5406:;
  /* 11be5406 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5408 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be540a jne 0x11be53db */
  if (!C.zf) goto L_11be53db;
  /* 11be540c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be540f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be5412 mov dword ptr [0x11c1069c], eax */
  w32((uint32_t)(0x11c1069c), (EAX));
L_11be5417:;
  /* 11be5417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be541a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be541e je 0x11be542f */
  if (C.zf) goto L_11be542f;
  /* 11be5420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5423 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be5426 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5429 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be542b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be542d jmp 0x11be546a */
  goto L_11be546a;
L_11be542f:;
  /* 11be542f mov eax, dword ptr [0x11c106a4] */
  EAX = (r32((uint32_t)(0x11c106a4)));
  /* 11be5434 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5437 je 0x11be545a */
  if (C.zf) goto L_11be545a;
  /* 11be5439 push 0x11c0b6e4 */
  push32((uint32_t)(0x11c0b6e4u));
  /* 11be543e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5440 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11be5445 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be544a push 2 */
  push32((uint32_t)(0x2u));
  /* 11be544c call 0x11be3b90 */
  push32(0x11be5451u); f_11be3b90();
  /* 11be5451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5457 jne 0x11be545a */
  if (!C.zf) goto L_11be545a;
  /* 11be5459 int3  */
  x86_unimpl("int3 @ 0x11be5459");
L_11be545a:;
  /* 11be545a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be545c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be545e jne 0x11be542f */
  if (!C.zf) goto L_11be542f;
  /* 11be5460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5463 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be5465 mov dword ptr [0x11c106a4], eax */
  w32((uint32_t)(0x11c106a4), (EAX));
L_11be546a:;
  /* 11be546a cmp dword ptr [0x11c106a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c106a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5471 je 0x11be5481 */
  if (C.zf) goto L_11be5481;
  /* 11be5473 mov ecx, dword ptr [0x11c106a4] */
  ECX = (r32((uint32_t)(0x11c106a4)));
  /* 11be5479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be547c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11be547f jmp 0x11be5489 */
  goto L_11be5489;
L_11be5481:;
  /* 11be5481 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5484 mov dword ptr [0x11c1069c], eax */
  w32((uint32_t)(0x11c1069c), (EAX));
L_11be5489:;
  /* 11be5489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be548c mov edx, dword ptr [0x11c106a4] */
  EDX = (r32((uint32_t)(0x11c106a4)));
  /* 11be5492 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11be5494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5497 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11be549e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be54a1 mov dword ptr [0x11c106a4], ecx */
  w32((uint32_t)(0x11c106a4), (ECX));
  /* 11be54a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be54aa:;
  /* 11be54aa pop edi */
  EDI = (pop32());
  /* 11be54ab pop esi */
  ESI = (pop32());
  /* 11be54ac pop ebx */
  EBX = (pop32());
  /* 11be54ad mov esp, ebp */
  ESP = (EBP);
  /* 11be54af pop ebp */
  EBP = (pop32());
  /* 11be54b0 ret  */
  ESPCHK(0x11be4fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x11be54c0 (27 bytes, 13 insns) */
void f_11be54c0(void) {
  FTRACE(0x11be54c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be54c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be54c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be54c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be54c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be54c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be54c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be54cc push eax */
  push32((uint32_t)(EAX));
  /* 11be54cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be54d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be54d1 call 0x11be54e0 */
  push32(0x11be54d6u); f_11be54e0();
  /* 11be54d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be54d9 pop ebp */
  EBP = (pop32());
  /* 11be54da ret  */
  ESPCHK(0x11be54c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x11be54e0 (64 bytes, 27 insns) */
void f_11be54e0(void) {
  FTRACE(0x11be54e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be54e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be54e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be54e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be54e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be54e6 call 0x11be84d0 */
  push32(0x11be54ebu); f_11be84d0();
  /* 11be54eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be54ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11be54f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be54f3 push eax */
  push32((uint32_t)(EAX));
  /* 11be54f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be54f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11be54f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be54fb push edx */
  push32((uint32_t)(EDX));
  /* 11be54fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be54ff push eax */
  push32((uint32_t)(EAX));
  /* 11be5500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5503 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5504 call 0x11be4fa0 */
  push32(0x11be5509u); f_11be4fa0();
  /* 11be5509 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be550c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be550f push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5511 call 0x11be8570 */
  push32(0x11be5516u); f_11be8570();
  /* 11be5516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be551c mov esp, ebp */
  ESP = (EBP);
  /* 11be551e pop ebp */
  EBP = (pop32());
  /* 11be551f ret  */
  ESPCHK(0x11be54e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x11be5520 (19 bytes, 9 insns) */
void f_11be5520(void) {
  FTRACE(0x11be5520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5520 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5521 mov ebp, esp */
  EBP = (ESP);
  /* 11be5523 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be5525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5528 push eax */
  push32((uint32_t)(EAX));
  /* 11be5529 call 0x11be5560 */
  push32(0x11be552eu); f_11be5560();
  /* 11be552e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5531 pop ebp */
  EBP = (pop32());
  /* 11be5532 ret  */
  ESPCHK(0x11be5520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x11be5540 (19 bytes, 9 insns) */
void f_11be5540(void) {
  FTRACE(0x11be5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5540 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5541 mov ebp, esp */
  EBP = (ESP);
  /* 11be5543 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be5545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5548 push eax */
  push32((uint32_t)(EAX));
  /* 11be5549 call 0x11be5590 */
  push32(0x11be554eu); f_11be5590();
  /* 11be554e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5551 pop ebp */
  EBP = (pop32());
  /* 11be5552 ret  */
  ESPCHK(0x11be5540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x11be5560 (41 bytes, 16 insns) */
void f_11be5560(void) {
  FTRACE(0x11be5560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5560 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5561 mov ebp, esp */
  EBP = (ESP);
  /* 11be5563 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5565 call 0x11be84d0 */
  push32(0x11be556au); f_11be84d0();
  /* 11be556a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be556d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5570 push eax */
  push32((uint32_t)(EAX));
  /* 11be5571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5574 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5575 call 0x11be5590 */
  push32(0x11be557au); f_11be5590();
  /* 11be557a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be557d push 9 */
  push32((uint32_t)(0x9u));
  /* 11be557f call 0x11be8570 */
  push32(0x11be5584u); f_11be8570();
  /* 11be5584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5587 pop ebp */
  EBP = (pop32());
  /* 11be5588 ret  */
  ESPCHK(0x11be5560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005590 @ 0x11be5590 (1004 bytes, 342 insns) */
void f_11be5590(void) {
  FTRACE(0x11be5590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5590 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5591 mov ebp, esp */
  EBP = (ESP);
  /* 11be5593 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5594 push ebx */
  push32((uint32_t)(EBX));
  /* 11be5595 push esi */
  push32((uint32_t)(ESI));
  /* 11be5596 push edi */
  push32((uint32_t)(EDI));
  /* 11be5597 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be559c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be559f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be55a1 je 0x11be55d3 */
  if (C.zf) goto L_11be55d3;
L_11be55a3:;
  /* 11be55a3 call 0x11be5c70 */
  push32(0x11be55a8u); f_11be5c70();
  /* 11be55a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be55aa jne 0x11be55cd */
  if (!C.zf) goto L_11be55cd;
  /* 11be55ac push 0x11c0b6d0 */
  push32((uint32_t)(0x11c0b6d0u));
  /* 11be55b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be55b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11be55b8 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be55bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11be55bf call 0x11be3b90 */
  push32(0x11be55c4u); f_11be3b90();
  /* 11be55c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be55c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be55ca jne 0x11be55cd */
  if (!C.zf) goto L_11be55cd;
  /* 11be55cc int3  */
  x86_unimpl("int3 @ 0x11be55cc");
L_11be55cd:;
  /* 11be55cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be55cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be55d1 jne 0x11be55a3 */
  if (!C.zf) goto L_11be55a3;
L_11be55d3:;
  /* 11be55d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be55d7 jne 0x11be55de */
  if (!C.zf) goto L_11be55de;
  /* 11be55d9 jmp 0x11be5975 */
  goto L_11be5975;
L_11be55de:;
  /* 11be55de push 0 */
  push32((uint32_t)(0x0u));
  /* 11be55e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be55e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be55e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be55e7 push edx */
  push32((uint32_t)(EDX));
  /* 11be55e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be55ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be55ed push eax */
  push32((uint32_t)(EAX));
  /* 11be55ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11be55f0 call dword ptr [0x11c0ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0ec90))), 0x11be55f6u);
  /* 11be55f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be55f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be55fb jne 0x11be5628 */
  if (!C.zf) goto L_11be5628;
L_11be55fd:;
  /* 11be55fd push 0x11c0b994 */
  push32((uint32_t)(0x11c0b994u));
  /* 11be5602 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be560b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be560d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be560f call 0x11be3b90 */
  push32(0x11be5614u); f_11be3b90();
  /* 11be5614 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be561a jne 0x11be561d */
  if (!C.zf) goto L_11be561d;
  /* 11be561c int3  */
  x86_unimpl("int3 @ 0x11be561c");
L_11be561d:;
  /* 11be561d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be561f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5621 jne 0x11be55fd */
  if (!C.zf) goto L_11be55fd;
  /* 11be5623 jmp 0x11be5975 */
  goto L_11be5975;
L_11be5628:;
  /* 11be5628 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be562b push edx */
  push32((uint32_t)(EDX));
  /* 11be562c call 0x11be60d0 */
  push32(0x11be5631u); f_11be60d0();
  /* 11be5631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5636 jne 0x11be5659 */
  if (!C.zf) goto L_11be5659;
  /* 11be5638 push 0x11c0b7d4 */
  push32((uint32_t)(0x11c0b7d4u));
  /* 11be563d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be563f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11be5644 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5649 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be564b call 0x11be3b90 */
  push32(0x11be5650u); f_11be3b90();
  /* 11be5650 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5653 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5656 jne 0x11be5659 */
  if (!C.zf) goto L_11be5659;
  /* 11be5658 int3  */
  x86_unimpl("int3 @ 0x11be5658");
L_11be5659:;
  /* 11be5659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be565b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be565d jne 0x11be5628 */
  if (!C.zf) goto L_11be5628;
  /* 11be565f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5662 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5665 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be5668:;
  /* 11be5668 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be566b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be566e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5673 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5676 je 0x11be56bb */
  if (C.zf) goto L_11be56bb;
  /* 11be5678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be567b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be567f je 0x11be56bb */
  if (C.zf) goto L_11be56bb;
  /* 11be5681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5684 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5687 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be568c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be568f je 0x11be56bb */
  if (C.zf) goto L_11be56bb;
  /* 11be5691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5694 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5698 je 0x11be56bb */
  if (C.zf) goto L_11be56bb;
  /* 11be569a push 0x11c0b96c */
  push32((uint32_t)(0x11c0b96cu));
  /* 11be569f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be56a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11be56a6 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be56ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11be56ad call 0x11be3b90 */
  push32(0x11be56b2u); f_11be3b90();
  /* 11be56b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be56b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be56b8 jne 0x11be56bb */
  if (!C.zf) goto L_11be56bb;
  /* 11be56ba int3  */
  x86_unimpl("int3 @ 0x11be56ba");
L_11be56bb:;
  /* 11be56bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be56bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be56bf jne 0x11be5668 */
  if (!C.zf) goto L_11be5668;
  /* 11be56c1 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be56c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be56c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be56cb jne 0x11be5796 */
  if (!C.zf) goto L_11be5796;
  /* 11be56d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be56d3 mov cl, byte ptr [0x11c0ea90] */
  CL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be56d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11be56da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be56dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be56e0 push edx */
  push32((uint32_t)(EDX));
  /* 11be56e1 call 0x11be5be0 */
  push32(0x11be56e6u); f_11be5be0();
  /* 11be56e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be56e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be56eb jne 0x11be5730 */
  if (!C.zf) goto L_11be5730;
L_11be56ed:;
  /* 11be56ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be56f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be56f3 push eax */
  push32((uint32_t)(EAX));
  /* 11be56f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be56f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11be56fa push edx */
  push32((uint32_t)(EDX));
  /* 11be56fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be56fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be5701 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5707 mov edx, dword ptr [ecx*4 + 0x11c0ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea94)));
  /* 11be570e push edx */
  push32((uint32_t)(EDX));
  /* 11be570f push 0x11c0b940 */
  push32((uint32_t)(0x11c0b940u));
  /* 11be5714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5718 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be571a push 1 */
  push32((uint32_t)(0x1u));
  /* 11be571c call 0x11be3b90 */
  push32(0x11be5721u); f_11be3b90();
  /* 11be5721 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5724 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5727 jne 0x11be572a */
  if (!C.zf) goto L_11be572a;
  /* 11be5729 int3  */
  x86_unimpl("int3 @ 0x11be5729");
L_11be572a:;
  /* 11be572a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be572c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be572e jne 0x11be56ed */
  if (!C.zf) goto L_11be56ed;
L_11be5730:;
  /* 11be5730 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be5732 mov cl, byte ptr [0x11c0ea90] */
  CL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be5738 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be573c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be573f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5742 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11be5746 push edx */
  push32((uint32_t)(EDX));
  /* 11be5747 call 0x11be5be0 */
  push32(0x11be574cu); f_11be5be0();
  /* 11be574c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be574f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5751 jne 0x11be5796 */
  if (!C.zf) goto L_11be5796;
L_11be5753:;
  /* 11be5753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5756 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5759 push eax */
  push32((uint32_t)(EAX));
  /* 11be575a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be575d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11be5760 push edx */
  push32((uint32_t)(EDX));
  /* 11be5761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5764 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be5767 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be576d mov edx, dword ptr [ecx*4 + 0x11c0ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea94)));
  /* 11be5774 push edx */
  push32((uint32_t)(EDX));
  /* 11be5775 push 0x11c0b914 */
  push32((uint32_t)(0x11c0b914u));
  /* 11be577a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be577c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be577e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5780 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be5782 call 0x11be3b90 */
  push32(0x11be5787u); f_11be3b90();
  /* 11be5787 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be578a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be578d jne 0x11be5790 */
  if (!C.zf) goto L_11be5790;
  /* 11be578f int3  */
  x86_unimpl("int3 @ 0x11be578f");
L_11be5790:;
  /* 11be5790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5794 jne 0x11be5753 */
  if (!C.zf) goto L_11be5753;
L_11be5796:;
  /* 11be5796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5799 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be579d jne 0x11be580b */
  if (!C.zf) goto L_11be580b;
L_11be579f:;
  /* 11be579f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be57a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be57a9 jne 0x11be57b4 */
  if (!C.zf) goto L_11be57b4;
  /* 11be57ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be57ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be57b2 je 0x11be57d5 */
  if (C.zf) goto L_11be57d5;
L_11be57b4:;
  /* 11be57b4 push 0x11c0b8d4 */
  push32((uint32_t)(0x11c0b8d4u));
  /* 11be57b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be57bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11be57c0 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be57c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be57c7 call 0x11be3b90 */
  push32(0x11be57ccu); f_11be3b90();
  /* 11be57cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be57cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be57d2 jne 0x11be57d5 */
  if (!C.zf) goto L_11be57d5;
  /* 11be57d4 int3  */
  x86_unimpl("int3 @ 0x11be57d4");
L_11be57d5:;
  /* 11be57d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be57d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be57d9 jne 0x11be579f */
  if (!C.zf) goto L_11be579f;
  /* 11be57db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be57de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be57e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be57e4 push eax */
  push32((uint32_t)(EAX));
  /* 11be57e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be57e7 mov cl, byte ptr [0x11c0ea91] */
  CL = (r8((uint32_t)(0x11c0ea91)));
  /* 11be57ed push ecx */
  push32((uint32_t)(ECX));
  /* 11be57ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be57f1 push edx */
  push32((uint32_t)(EDX));
  /* 11be57f2 call 0x11be8840 */
  push32(0x11be57f7u); f_11be8840();
  /* 11be57f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be57fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be57fd push eax */
  push32((uint32_t)(EAX));
  /* 11be57fe call 0x11be8c40 */
  push32(0x11be5803u); f_11be8c40();
  /* 11be5803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5806 jmp 0x11be5975 */
  goto L_11be5975;
L_11be580b:;
  /* 11be580b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be580e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5812 jne 0x11be5821 */
  if (!C.zf) goto L_11be5821;
  /* 11be5814 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5818 jne 0x11be5821 */
  if (!C.zf) goto L_11be5821;
  /* 11be581a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11be5821:;
  /* 11be5821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5824 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5827 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be582a je 0x11be584d */
  if (C.zf) goto L_11be584d;
  /* 11be582c push 0x11c0b8b4 */
  push32((uint32_t)(0x11c0b8b4u));
  /* 11be5831 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5833 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11be5838 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be583d push 2 */
  push32((uint32_t)(0x2u));
  /* 11be583f call 0x11be3b90 */
  push32(0x11be5844u); f_11be3b90();
  /* 11be5844 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be584a jne 0x11be584d */
  if (!C.zf) goto L_11be584d;
  /* 11be584c int3  */
  x86_unimpl("int3 @ 0x11be584c");
L_11be584d:;
  /* 11be584d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be584f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5851 jne 0x11be5821 */
  if (!C.zf) goto L_11be5821;
  /* 11be5853 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5856 mov eax, dword ptr [0x11c106a8] */
  EAX = (r32((uint32_t)(0x11c106a8)));
  /* 11be585b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be585e mov dword ptr [0x11c106a8], eax */
  w32((uint32_t)(0x11c106a8), (EAX));
  /* 11be5863 mov ecx, dword ptr [0x11c0ea84] */
  ECX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be5869 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11be586c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be586e jne 0x11be594c */
  if (!C.zf) goto L_11be594c;
  /* 11be5874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5877 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be587a je 0x11be588c */
  if (C.zf) goto L_11be588c;
  /* 11be587c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be587f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be5881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5884 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be5887 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11be588a jmp 0x11be58ca */
  goto L_11be58ca;
L_11be588c:;
  /* 11be588c mov ecx, dword ptr [0x11c1069c] */
  ECX = (r32((uint32_t)(0x11c1069c)));
  /* 11be5892 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5895 je 0x11be58b8 */
  if (C.zf) goto L_11be58b8;
  /* 11be5897 push 0x11c0b89c */
  push32((uint32_t)(0x11c0b89cu));
  /* 11be589c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be589e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11be58a3 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be58a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be58aa call 0x11be3b90 */
  push32(0x11be58afu); f_11be3b90();
  /* 11be58af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be58b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be58b5 jne 0x11be58b8 */
  if (!C.zf) goto L_11be58b8;
  /* 11be58b7 int3  */
  x86_unimpl("int3 @ 0x11be58b7");
L_11be58b8:;
  /* 11be58b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be58ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be58bc jne 0x11be588c */
  if (!C.zf) goto L_11be588c;
  /* 11be58be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be58c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be58c4 mov dword ptr [0x11c1069c], ecx */
  w32((uint32_t)(0x11c1069c), (ECX));
L_11be58ca:;
  /* 11be58ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be58cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be58d1 je 0x11be58e2 */
  if (C.zf) goto L_11be58e2;
  /* 11be58d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be58d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be58d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be58dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be58de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be58e0 jmp 0x11be591f */
  goto L_11be591f;
L_11be58e2:;
  /* 11be58e2 mov ecx, dword ptr [0x11c106a4] */
  ECX = (r32((uint32_t)(0x11c106a4)));
  /* 11be58e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be58eb je 0x11be590e */
  if (C.zf) goto L_11be590e;
  /* 11be58ed push 0x11c0b884 */
  push32((uint32_t)(0x11c0b884u));
  /* 11be58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be58f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11be58f9 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be58fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5900 call 0x11be3b90 */
  push32(0x11be5905u); f_11be3b90();
  /* 11be5905 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5908 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be590b jne 0x11be590e */
  if (!C.zf) goto L_11be590e;
  /* 11be590d int3  */
  x86_unimpl("int3 @ 0x11be590d");
L_11be590e:;
  /* 11be590e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5912 jne 0x11be58e2 */
  if (!C.zf) goto L_11be58e2;
  /* 11be5914 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5917 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be5919 mov dword ptr [0x11c106a4], ecx */
  w32((uint32_t)(0x11c106a4), (ECX));
L_11be591f:;
  /* 11be591f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5922 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be5925 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5928 push eax */
  push32((uint32_t)(EAX));
  /* 11be5929 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be592b mov cl, byte ptr [0x11c0ea91] */
  CL = (r8((uint32_t)(0x11c0ea91)));
  /* 11be5931 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5935 push edx */
  push32((uint32_t)(EDX));
  /* 11be5936 call 0x11be8840 */
  push32(0x11be593bu); f_11be8840();
  /* 11be593b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be593e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5941 push eax */
  push32((uint32_t)(EAX));
  /* 11be5942 call 0x11be8c40 */
  push32(0x11be5947u); f_11be8c40();
  /* 11be5947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be594a jmp 0x11be5975 */
  goto L_11be5975;
L_11be594c:;
  /* 11be594c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be594f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11be5956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5959 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be595c push eax */
  push32((uint32_t)(EAX));
  /* 11be595d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be595f mov cl, byte ptr [0x11c0ea91] */
  CL = (r8((uint32_t)(0x11c0ea91)));
  /* 11be5965 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5966 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5969 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be596c push edx */
  push32((uint32_t)(EDX));
  /* 11be596d call 0x11be8840 */
  push32(0x11be5972u); f_11be8840();
  /* 11be5972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be5975:;
  /* 11be5975 pop edi */
  EDI = (pop32());
  /* 11be5976 pop esi */
  ESI = (pop32());
  /* 11be5977 pop ebx */
  EBX = (pop32());
  /* 11be5978 mov esp, ebp */
  ESP = (EBP);
  /* 11be597a pop ebp */
  EBP = (pop32());
  /* 11be597b ret  */
  ESPCHK(0x11be5590u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x11be5980 (19 bytes, 9 insns) */
void f_11be5980(void) {
  FTRACE(0x11be5980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5980 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5981 mov ebp, esp */
  EBP = (ESP);
  /* 11be5983 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be5985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5988 push eax */
  push32((uint32_t)(EAX));
  /* 11be5989 call 0x11be59a0 */
  push32(0x11be598eu); f_11be59a0();
  /* 11be598e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5991 pop ebp */
  EBP = (pop32());
  /* 11be5992 ret  */
  ESPCHK(0x11be5980u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a0 @ 0x11be59a0 (342 bytes, 119 insns) */
void f_11be59a0(void) {
  FTRACE(0x11be59a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be59a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be59a1 mov ebp, esp */
  EBP = (ESP);
  /* 11be59a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be59a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be59a7 push esi */
  push32((uint32_t)(ESI));
  /* 11be59a8 push edi */
  push32((uint32_t)(EDI));
  /* 11be59a9 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be59ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be59b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be59b3 je 0x11be59e5 */
  if (C.zf) goto L_11be59e5;
L_11be59b5:;
  /* 11be59b5 call 0x11be5c70 */
  push32(0x11be59bau); f_11be5c70();
  /* 11be59ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be59bc jne 0x11be59df */
  if (!C.zf) goto L_11be59df;
  /* 11be59be push 0x11c0b6d0 */
  push32((uint32_t)(0x11c0b6d0u));
  /* 11be59c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be59c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11be59ca push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be59cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11be59d1 call 0x11be3b90 */
  push32(0x11be59d6u); f_11be3b90();
  /* 11be59d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be59d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be59dc jne 0x11be59df */
  if (!C.zf) goto L_11be59df;
  /* 11be59de int3  */
  x86_unimpl("int3 @ 0x11be59de");
L_11be59df:;
  /* 11be59df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be59e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be59e3 jne 0x11be59b5 */
  if (!C.zf) goto L_11be59b5;
L_11be59e5:;
  /* 11be59e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be59e7 call 0x11be84d0 */
  push32(0x11be59ecu); f_11be84d0();
  /* 11be59ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be59ef:;
  /* 11be59ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be59f2 push edx */
  push32((uint32_t)(EDX));
  /* 11be59f3 call 0x11be60d0 */
  push32(0x11be59f8u); f_11be60d0();
  /* 11be59f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be59fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be59fd jne 0x11be5a20 */
  if (!C.zf) goto L_11be5a20;
  /* 11be59ff push 0x11c0b7d4 */
  push32((uint32_t)(0x11c0b7d4u));
  /* 11be5a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5a06 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11be5a0b push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5a10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5a12 call 0x11be3b90 */
  push32(0x11be5a17u); f_11be3b90();
  /* 11be5a17 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5a1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a1d jne 0x11be5a20 */
  if (!C.zf) goto L_11be5a20;
  /* 11be5a1f int3  */
  x86_unimpl("int3 @ 0x11be5a1f");
L_11be5a20:;
  /* 11be5a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5a24 jne 0x11be59ef */
  if (!C.zf) goto L_11be59ef;
  /* 11be5a26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5a29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5a2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11be5a2f:;
  /* 11be5a2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5a32 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5a35 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5a3a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a3d je 0x11be5a82 */
  if (C.zf) goto L_11be5a82;
  /* 11be5a3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5a42 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a46 je 0x11be5a82 */
  if (C.zf) goto L_11be5a82;
  /* 11be5a48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5a4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5a4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5a53 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a56 je 0x11be5a82 */
  if (C.zf) goto L_11be5a82;
  /* 11be5a58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5a5b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a5f je 0x11be5a82 */
  if (C.zf) goto L_11be5a82;
  /* 11be5a61 push 0x11c0b96c */
  push32((uint32_t)(0x11c0b96cu));
  /* 11be5a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5a68 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11be5a6d push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5a74 call 0x11be3b90 */
  push32(0x11be5a79u); f_11be3b90();
  /* 11be5a79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a7f jne 0x11be5a82 */
  if (!C.zf) goto L_11be5a82;
  /* 11be5a81 int3  */
  x86_unimpl("int3 @ 0x11be5a81");
L_11be5a82:;
  /* 11be5a82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5a84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5a86 jne 0x11be5a2f */
  if (!C.zf) goto L_11be5a2f;
  /* 11be5a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5a8b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a8f jne 0x11be5a9e */
  if (!C.zf) goto L_11be5a9e;
  /* 11be5a91 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5a95 jne 0x11be5a9e */
  if (!C.zf) goto L_11be5a9e;
  /* 11be5a97 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11be5a9e:;
  /* 11be5a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5aa1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5aa5 je 0x11be5ad9 */
  if (C.zf) goto L_11be5ad9;
L_11be5aa7:;
  /* 11be5aa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5aaa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5aad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ab0 je 0x11be5ad3 */
  if (C.zf) goto L_11be5ad3;
  /* 11be5ab2 push 0x11c0b8b4 */
  push32((uint32_t)(0x11c0b8b4u));
  /* 11be5ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ab9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11be5abe push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5ac5 call 0x11be3b90 */
  push32(0x11be5acau); f_11be3b90();
  /* 11be5aca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ad0 jne 0x11be5ad3 */
  if (!C.zf) goto L_11be5ad3;
  /* 11be5ad2 int3  */
  x86_unimpl("int3 @ 0x11be5ad2");
L_11be5ad3:;
  /* 11be5ad3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5ad7 jne 0x11be5aa7 */
  if (!C.zf) goto L_11be5aa7;
L_11be5ad9:;
  /* 11be5ad9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5adc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be5adf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be5ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5ae4 call 0x11be8570 */
  push32(0x11be5ae9u); f_11be8570();
  /* 11be5ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5aef pop edi */
  EDI = (pop32());
  /* 11be5af0 pop esi */
  ESI = (pop32());
  /* 11be5af1 pop ebx */
  EBX = (pop32());
  /* 11be5af2 mov esp, ebp */
  ESP = (EBP);
  /* 11be5af4 pop ebp */
  EBP = (pop32());
  /* 11be5af5 ret  */
  ESPCHK(0x11be59a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x11be5b00 (28 bytes, 11 insns) */
void f_11be5b00(void) {
  FTRACE(0x11be5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5b01 mov ebp, esp */
  EBP = (ESP);
  /* 11be5b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5b04 mov eax, dword ptr [0x11c0ea8c] */
  EAX = (r32((uint32_t)(0x11c0ea8c)));
  /* 11be5b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be5b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5b0f mov dword ptr [0x11c0ea8c], ecx */
  w32((uint32_t)(0x11c0ea8c), (ECX));
  /* 11be5b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5b18 mov esp, ebp */
  ESP = (EBP);
  /* 11be5b1a pop ebp */
  EBP = (pop32());
  /* 11be5b1b ret  */
  ESPCHK(0x11be5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x11be5b20 (157 bytes, 59 insns) */
void f_11be5b20(void) {
  FTRACE(0x11be5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5b21 mov ebp, esp */
  EBP = (ESP);
  /* 11be5b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5b24 push ebx */
  push32((uint32_t)(EBX));
  /* 11be5b25 push esi */
  push32((uint32_t)(ESI));
  /* 11be5b26 push edi */
  push32((uint32_t)(EDI));
  /* 11be5b27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5b29 call 0x11be84d0 */
  push32(0x11be5b2eu); f_11be84d0();
  /* 11be5b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5b34 push eax */
  push32((uint32_t)(EAX));
  /* 11be5b35 call 0x11be60d0 */
  push32(0x11be5b3au); f_11be60d0();
  /* 11be5b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5b3f je 0x11be5bac */
  if (C.zf) goto L_11be5bac;
  /* 11be5b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5b44 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5b47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be5b4a:;
  /* 11be5b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5b4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5b50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5b55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5b58 je 0x11be5b9d */
  if (C.zf) goto L_11be5b9d;
  /* 11be5b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5b5d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5b61 je 0x11be5b9d */
  if (C.zf) goto L_11be5b9d;
  /* 11be5b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5b66 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be5b69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5b6e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5b71 je 0x11be5b9d */
  if (C.zf) goto L_11be5b9d;
  /* 11be5b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5b76 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5b7a je 0x11be5b9d */
  if (C.zf) goto L_11be5b9d;
  /* 11be5b7c push 0x11c0b96c */
  push32((uint32_t)(0x11c0b96cu));
  /* 11be5b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5b83 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11be5b88 push 0x11c0b6c4 */
  push32((uint32_t)(0x11c0b6c4u));
  /* 11be5b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11be5b8f call 0x11be3b90 */
  push32(0x11be5b94u); f_11be3b90();
  /* 11be5b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5b9a jne 0x11be5b9d */
  if (!C.zf) goto L_11be5b9d;
  /* 11be5b9c int3  */
  x86_unimpl("int3 @ 0x11be5b9c");
L_11be5b9d:;
  /* 11be5b9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5b9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5ba1 jne 0x11be5b4a */
  if (!C.zf) goto L_11be5b4a;
  /* 11be5ba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5ba6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5ba9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11be5bac:;
  /* 11be5bac push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5bae call 0x11be8570 */
  push32(0x11be5bb3u); f_11be8570();
  /* 11be5bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5bb6 pop edi */
  EDI = (pop32());
  /* 11be5bb7 pop esi */
  ESI = (pop32());
  /* 11be5bb8 pop ebx */
  EBX = (pop32());
  /* 11be5bb9 mov esp, ebp */
  ESP = (EBP);
  /* 11be5bbb pop ebp */
  EBP = (pop32());
  /* 11be5bbc ret  */
  ESPCHK(0x11be5b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc0 @ 0x11be5bc0 (28 bytes, 11 insns) */
void f_11be5bc0(void) {
  FTRACE(0x11be5bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11be5bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5bc4 mov eax, dword ptr [0x11c0ec90] */
  EAX = (r32((uint32_t)(0x11c0ec90)));
  /* 11be5bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be5bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5bcf mov dword ptr [0x11c0ec90], ecx */
  w32((uint32_t)(0x11c0ec90), (ECX));
  /* 11be5bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5bd8 mov esp, ebp */
  ESP = (EBP);
  /* 11be5bda pop ebp */
  EBP = (pop32());
  /* 11be5bdb ret  */
  ESPCHK(0x11be5bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005be0 @ 0x11be5be0 (136 bytes, 55 insns) */
void f_11be5be0(void) {
  FTRACE(0x11be5be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5be1 mov ebp, esp */
  EBP = (ESP);
  /* 11be5be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5be4 push ebx */
  push32((uint32_t)(EBX));
  /* 11be5be5 push esi */
  push32((uint32_t)(ESI));
  /* 11be5be6 push edi */
  push32((uint32_t)(EDI));
  /* 11be5be7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11be5bee:;
  /* 11be5bee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be5bf1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be5bf4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5bf7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11be5bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5bfc je 0x11be5c5e */
  if (C.zf) goto L_11be5c5e;
  /* 11be5bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5c01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5c03 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11be5c05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5c08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5c11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5c14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11be5c17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5c19 je 0x11be5c5c */
  if (C.zf) goto L_11be5c5c;
L_11be5c1b:;
  /* 11be5c1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be5c1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be5c23 push eax */
  push32((uint32_t)(EAX));
  /* 11be5c24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5c29 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11be5c2c push edx */
  push32((uint32_t)(EDX));
  /* 11be5c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5c30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5c33 push eax */
  push32((uint32_t)(EAX));
  /* 11be5c34 push 0x11c0b9b0 */
  push32((uint32_t)(0x11c0b9b0u));
  /* 11be5c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5c41 call 0x11be3b90 */
  push32(0x11be5c46u); f_11be3b90();
  /* 11be5c46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5c49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5c4c jne 0x11be5c4f */
  if (!C.zf) goto L_11be5c4f;
  /* 11be5c4e int3  */
  x86_unimpl("int3 @ 0x11be5c4e");
L_11be5c4f:;
  /* 11be5c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5c53 jne 0x11be5c1b */
  if (!C.zf) goto L_11be5c1b;
  /* 11be5c55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be5c5c:;
  /* 11be5c5c jmp 0x11be5bee */
  goto L_11be5bee;
L_11be5c5e:;
  /* 11be5c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5c61 pop edi */
  EDI = (pop32());
  /* 11be5c62 pop esi */
  ESI = (pop32());
  /* 11be5c63 pop ebx */
  EBX = (pop32());
  /* 11be5c64 mov esp, ebp */
  ESP = (EBP);
  /* 11be5c66 pop ebp */
  EBP = (pop32());
  /* 11be5c67 ret  */
  ESPCHK(0x11be5be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c70 @ 0x11be5c70 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11be5c70(void) {
  FTRACE(0x11be5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5c71 mov ebp, esp */
  EBP = (ESP);
  /* 11be5c73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be5c76 push ebx */
  push32((uint32_t)(EBX));
  /* 11be5c77 push esi */
  push32((uint32_t)(ESI));
  /* 11be5c78 push edi */
  push32((uint32_t)(EDI));
  /* 11be5c79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11be5c80 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be5c85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11be5c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5c8a jne 0x11be5c96 */
  if (!C.zf) goto L_11be5c96;
  /* 11be5c8c mov eax, 1 */
  EAX = (0x1u);
  /* 11be5c91 jmp 0x11be5fc8 */
  goto L_11be5fc8;
L_11be5c96:;
  /* 11be5c96 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5c98 call 0x11be84d0 */
  push32(0x11be5c9du); f_11be84d0();
  /* 11be5c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5ca0 call 0x11be8cb0 */
  push32(0x11be5ca5u); f_11be8cb0();
  /* 11be5ca5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be5ca8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5cac je 0x11be5db9 */
  if (C.zf) goto L_11be5db9;
  /* 11be5cb2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5cb6 je 0x11be5db9 */
  if (C.zf) goto L_11be5db9;
  /* 11be5cbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be5cbf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11be5cc2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be5cc5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5cc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11be5ccb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ccf ja 0x11be5d82 */
  if ((!C.cf&&!C.zf)) goto L_11be5d82;
  /* 11be5cd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be5cd8 jmp dword ptr [eax*4 + 0x11be5fcf] */
  switch (EAX) {
    case 0: goto L_11be5d5a;
    case 1: goto L_11be5d32;
    case 2: goto L_11be5d0a;
    case 3: goto L_11be5cdf;
    default: x86_unimpl("switch@0x11be5cd8 out of table"); return;
  }
L_11be5cdf:;
  /* 11be5cdf push 0x11c0bb04 */
  push32((uint32_t)(0x11c0bb04u));
  /* 11be5ce4 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5cef push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5cf1 call 0x11be3b90 */
  push32(0x11be5cf6u); f_11be3b90();
  /* 11be5cf6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5cf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5cfc jne 0x11be5cff */
  if (!C.zf) goto L_11be5cff;
  /* 11be5cfe int3  */
  x86_unimpl("int3 @ 0x11be5cfe");
L_11be5cff:;
  /* 11be5cff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5d01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5d03 jne 0x11be5cdf */
  if (!C.zf) goto L_11be5cdf;
  /* 11be5d05 jmp 0x11be5da8 */
  goto L_11be5da8;
L_11be5d0a:;
  /* 11be5d0a push 0x11c0bae0 */
  push32((uint32_t)(0x11c0bae0u));
  /* 11be5d0f push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d1c call 0x11be3b90 */
  push32(0x11be5d21u); f_11be3b90();
  /* 11be5d21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5d24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5d27 jne 0x11be5d2a */
  if (!C.zf) goto L_11be5d2a;
  /* 11be5d29 int3  */
  x86_unimpl("int3 @ 0x11be5d29");
L_11be5d2a:;
  /* 11be5d2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5d2e jne 0x11be5d0a */
  if (!C.zf) goto L_11be5d0a;
  /* 11be5d30 jmp 0x11be5da8 */
  goto L_11be5da8;
L_11be5d32:;
  /* 11be5d32 push 0x11c0babc */
  push32((uint32_t)(0x11c0babcu));
  /* 11be5d37 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d44 call 0x11be3b90 */
  push32(0x11be5d49u); f_11be3b90();
  /* 11be5d49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5d4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5d4f jne 0x11be5d52 */
  if (!C.zf) goto L_11be5d52;
  /* 11be5d51 int3  */
  x86_unimpl("int3 @ 0x11be5d51");
L_11be5d52:;
  /* 11be5d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5d56 jne 0x11be5d32 */
  if (!C.zf) goto L_11be5d32;
  /* 11be5d58 jmp 0x11be5da8 */
  goto L_11be5da8;
L_11be5d5a:;
  /* 11be5d5a push 0x11c0ba98 */
  push32((uint32_t)(0x11c0ba98u));
  /* 11be5d5f push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d6c call 0x11be3b90 */
  push32(0x11be5d71u); f_11be3b90();
  /* 11be5d71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5d74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5d77 jne 0x11be5d7a */
  if (!C.zf) goto L_11be5d7a;
  /* 11be5d79 int3  */
  x86_unimpl("int3 @ 0x11be5d79");
L_11be5d7a:;
  /* 11be5d7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5d7e jne 0x11be5d5a */
  if (!C.zf) goto L_11be5d5a;
  /* 11be5d80 jmp 0x11be5da8 */
  goto L_11be5da8;
L_11be5d82:;
  /* 11be5d82 push 0x11c0ba6c */
  push32((uint32_t)(0x11c0ba6cu));
  /* 11be5d87 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be5d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5d94 call 0x11be3b90 */
  push32(0x11be5d99u); f_11be3b90();
  /* 11be5d99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5d9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5d9f jne 0x11be5da2 */
  if (!C.zf) goto L_11be5da2;
  /* 11be5da1 int3  */
  x86_unimpl("int3 @ 0x11be5da1");
L_11be5da2:;
  /* 11be5da2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5da4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5da6 jne 0x11be5d82 */
  if (!C.zf) goto L_11be5d82;
L_11be5da8:;
  /* 11be5da8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5daa call 0x11be8570 */
  push32(0x11be5dafu); f_11be8570();
  /* 11be5daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5db4 jmp 0x11be5fc8 */
  goto L_11be5fc8;
L_11be5db9:;
  /* 11be5db9 mov eax, dword ptr [0x11c106a4] */
  EAX = (r32((uint32_t)(0x11c106a4)));
  /* 11be5dbe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be5dc1 jmp 0x11be5dcb */
  goto L_11be5dcb;
L_11be5dc3:;
  /* 11be5dc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5dc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be5dc8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11be5dcb:;
  /* 11be5dcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5dcf je 0x11be5fbb */
  if (C.zf) goto L_11be5fbb;
  /* 11be5dd5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11be5ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5ddf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be5de2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5de8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5deb je 0x11be5e10 */
  if (C.zf) goto L_11be5e10;
  /* 11be5ded mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5df0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5df4 je 0x11be5e10 */
  if (C.zf) goto L_11be5e10;
  /* 11be5df6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5df9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be5dfc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5e02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5e05 je 0x11be5e10 */
  if (C.zf) goto L_11be5e10;
  /* 11be5e07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5e0e jne 0x11be5e28 */
  if (!C.zf) goto L_11be5e28;
L_11be5e10:;
  /* 11be5e10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be5e16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be5e1c mov edx, dword ptr [ecx*4 + 0x11c0ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea94)));
  /* 11be5e23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11be5e26 jmp 0x11be5e2f */
  goto L_11be5e2f;
L_11be5e28:;
  /* 11be5e28 mov dword ptr [ebp - 0x14], 0x11c0ba64 */
  w32((uint32_t)(EBP + -0x14), (0x11c0ba64u));
L_11be5e2f:;
  /* 11be5e2f push 4 */
  push32((uint32_t)(0x4u));
  /* 11be5e31 mov al, byte ptr [0x11c0ea90] */
  AL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be5e36 push eax */
  push32((uint32_t)(EAX));
  /* 11be5e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5e3d push ecx */
  push32((uint32_t)(ECX));
  /* 11be5e3e call 0x11be5be0 */
  push32(0x11be5e43u); f_11be5be0();
  /* 11be5e43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5e48 jne 0x11be5e84 */
  if (!C.zf) goto L_11be5e84;
L_11be5e4a:;
  /* 11be5e4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5e50 push edx */
  push32((uint32_t)(EDX));
  /* 11be5e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11be5e57 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5e58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be5e5b push edx */
  push32((uint32_t)(EDX));
  /* 11be5e5c push 0x11c0b940 */
  push32((uint32_t)(0x11c0b940u));
  /* 11be5e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5e69 call 0x11be3b90 */
  push32(0x11be5e6eu); f_11be3b90();
  /* 11be5e6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5e71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5e74 jne 0x11be5e77 */
  if (!C.zf) goto L_11be5e77;
  /* 11be5e76 int3  */
  x86_unimpl("int3 @ 0x11be5e76");
L_11be5e77:;
  /* 11be5e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5e7b jne 0x11be5e4a */
  if (!C.zf) goto L_11be5e4a;
  /* 11be5e7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11be5e84:;
  /* 11be5e84 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be5e86 mov cl, byte ptr [0x11c0ea90] */
  CL = (r8((uint32_t)(0x11c0ea90)));
  /* 11be5e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11be5e8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be5e93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5e96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11be5e9a push edx */
  push32((uint32_t)(EDX));
  /* 11be5e9b call 0x11be5be0 */
  push32(0x11be5ea0u); f_11be5be0();
  /* 11be5ea0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5ea5 jne 0x11be5ee1 */
  if (!C.zf) goto L_11be5ee1;
L_11be5ea7:;
  /* 11be5ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5eaa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5ead push eax */
  push32((uint32_t)(EAX));
  /* 11be5eae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5eb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11be5eb4 push edx */
  push32((uint32_t)(EDX));
  /* 11be5eb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be5eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11be5eb9 push 0x11c0b914 */
  push32((uint32_t)(0x11c0b914u));
  /* 11be5ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5ec6 call 0x11be3b90 */
  push32(0x11be5ecbu); f_11be3b90();
  /* 11be5ecb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5ece cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ed1 jne 0x11be5ed4 */
  if (!C.zf) goto L_11be5ed4;
  /* 11be5ed3 int3  */
  x86_unimpl("int3 @ 0x11be5ed3");
L_11be5ed4:;
  /* 11be5ed4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be5ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be5ed8 jne 0x11be5ea7 */
  if (!C.zf) goto L_11be5ea7;
  /* 11be5eda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11be5ee1:;
  /* 11be5ee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5ee4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ee8 jne 0x11be5f3a */
  if (!C.zf) goto L_11be5f3a;
  /* 11be5eea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5eed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be5ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5ef1 mov dl, byte ptr [0x11c0ea91] */
  DL = (r8((uint32_t)(0x11c0ea91)));
  /* 11be5ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11be5ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5efb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5efe push eax */
  push32((uint32_t)(EAX));
  /* 11be5eff call 0x11be5be0 */
  push32(0x11be5f04u); f_11be5be0();
  /* 11be5f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5f09 jne 0x11be5f3a */
  if (!C.zf) goto L_11be5f3a;
L_11be5f0b:;
  /* 11be5f0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5f11 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5f12 push 0x11c0ba38 */
  push32((uint32_t)(0x11c0ba38u));
  /* 11be5f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f1f call 0x11be3b90 */
  push32(0x11be5f24u); f_11be3b90();
  /* 11be5f24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5f2a jne 0x11be5f2d */
  if (!C.zf) goto L_11be5f2d;
  /* 11be5f2c int3  */
  x86_unimpl("int3 @ 0x11be5f2c");
L_11be5f2d:;
  /* 11be5f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5f2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5f31 jne 0x11be5f0b */
  if (!C.zf) goto L_11be5f0b;
  /* 11be5f33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11be5f3a:;
  /* 11be5f3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5f3e jne 0x11be5fb6 */
  if (!C.zf) goto L_11be5fb6;
  /* 11be5f40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5f47 je 0x11be5f7c */
  if (C.zf) goto L_11be5f7c;
L_11be5f49:;
  /* 11be5f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11be5f4f push edx */
  push32((uint32_t)(EDX));
  /* 11be5f50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be5f56 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5f57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be5f5a push edx */
  push32((uint32_t)(EDX));
  /* 11be5f5b push 0x11c0ba18 */
  push32((uint32_t)(0x11c0ba18u));
  /* 11be5f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f68 call 0x11be3b90 */
  push32(0x11be5f6du); f_11be3b90();
  /* 11be5f6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5f70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5f73 jne 0x11be5f76 */
  if (!C.zf) goto L_11be5f76;
  /* 11be5f75 int3  */
  x86_unimpl("int3 @ 0x11be5f75");
L_11be5f76:;
  /* 11be5f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be5f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be5f7a jne 0x11be5f49 */
  if (!C.zf) goto L_11be5f49;
L_11be5f7c:;
  /* 11be5f7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be5f82 push edx */
  push32((uint32_t)(EDX));
  /* 11be5f83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be5f86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5f89 push eax */
  push32((uint32_t)(EAX));
  /* 11be5f8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be5f8d push ecx */
  push32((uint32_t)(ECX));
  /* 11be5f8e push 0x11c0b9ec */
  push32((uint32_t)(0x11c0b9ecu));
  /* 11be5f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be5f9b call 0x11be3b90 */
  push32(0x11be5fa0u); f_11be3b90();
  /* 11be5fa0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5fa3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5fa6 jne 0x11be5fa9 */
  if (!C.zf) goto L_11be5fa9;
  /* 11be5fa8 int3  */
  x86_unimpl("int3 @ 0x11be5fa8");
L_11be5fa9:;
  /* 11be5fa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be5fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be5fad jne 0x11be5f7c */
  if (!C.zf) goto L_11be5f7c;
  /* 11be5faf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be5fb6:;
  /* 11be5fb6 jmp 0x11be5dc3 */
  goto L_11be5dc3;
L_11be5fbb:;
  /* 11be5fbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11be5fbd call 0x11be8570 */
  push32(0x11be5fc2u); f_11be8570();
  /* 11be5fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be5fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be5fc8:;
  /* 11be5fc8 pop edi */
  EDI = (pop32());
  /* 11be5fc9 pop esi */
  ESI = (pop32());
  /* 11be5fca pop ebx */
  EBX = (pop32());
  /* 11be5fcb mov esp, ebp */
  ESP = (EBP);
  /* 11be5fcd pop ebp */
  EBP = (pop32());
  /* 11be5fce ret  */
  ESPCHK(0x11be5c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x11be5fe0 (34 bytes, 13 insns) */
void f_11be5fe0(void) {
  FTRACE(0x11be5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11be5fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be5fe4 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be5fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be5fec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be5ff0 je 0x11be5ffb */
  if (C.zf) goto L_11be5ffb;
  /* 11be5ff2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be5ff5 mov dword ptr [0x11c0ea84], ecx */
  w32((uint32_t)(0x11c0ea84), (ECX));
L_11be5ffb:;
  /* 11be5ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be5ffe mov esp, ebp */
  ESP = (EBP);
  /* 11be6000 pop ebp */
  EBP = (pop32());
  /* 11be6001 ret  */
  ESPCHK(0x11be5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006010 @ 0x11be6010 (103 bytes, 38 insns) */
void f_11be6010(void) {
  FTRACE(0x11be6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6010 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6011 mov ebp, esp */
  EBP = (ESP);
  /* 11be6013 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6014 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be6019 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11be601c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be601e jne 0x11be6022 */
  if (!C.zf) goto L_11be6022;
  /* 11be6020 jmp 0x11be6073 */
  goto L_11be6073;
L_11be6022:;
  /* 11be6022 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6024 call 0x11be84d0 */
  push32(0x11be6029u); f_11be84d0();
  /* 11be6029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be602c mov ecx, dword ptr [0x11c106a4] */
  ECX = (r32((uint32_t)(0x11c106a4)));
  /* 11be6032 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be6035 jmp 0x11be603f */
  goto L_11be603f;
L_11be6037:;
  /* 11be6037 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be603a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be603c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be603f:;
  /* 11be603f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6043 je 0x11be6069 */
  if (C.zf) goto L_11be6069;
  /* 11be6045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6048 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be604b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6051 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6054 jne 0x11be6067 */
  if (!C.zf) goto L_11be6067;
  /* 11be6056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6059 push eax */
  push32((uint32_t)(EAX));
  /* 11be605a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be605d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6060 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6061 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11be6064u);
  /* 11be6064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be6067:;
  /* 11be6067 jmp 0x11be6037 */
  goto L_11be6037;
L_11be6069:;
  /* 11be6069 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be606b call 0x11be8570 */
  push32(0x11be6070u); f_11be8570();
  /* 11be6070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be6073:;
  /* 11be6073 mov esp, ebp */
  ESP = (EBP);
  /* 11be6075 pop ebp */
  EBP = (pop32());
  /* 11be6076 ret  */
  ESPCHK(0x11be6010u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11be6080 (75 bytes, 28 insns) */
void f_11be6080(void) {
  FTRACE(0x11be6080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6080 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6081 mov ebp, esp */
  EBP = (ESP);
  /* 11be6083 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6084 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6088 je 0x11be60bd */
  if (C.zf) goto L_11be60bd;
  /* 11be608a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be608d push eax */
  push32((uint32_t)(EAX));
  /* 11be608e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6091 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6092 call dword ptr [0x11c133a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133a4))), 0x11be6098u);
  /* 11be6098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be609a jne 0x11be60bd */
  if (!C.zf) goto L_11be60bd;
  /* 11be609c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be60a0 je 0x11be60b4 */
  if (C.zf) goto L_11be60b4;
  /* 11be60a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be60a5 push edx */
  push32((uint32_t)(EDX));
  /* 11be60a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be60a9 push eax */
  push32((uint32_t)(EAX));
  /* 11be60aa call dword ptr [0x11c1337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1337c))), 0x11be60b0u);
  /* 11be60b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be60b2 jne 0x11be60bd */
  if (!C.zf) goto L_11be60bd;
L_11be60b4:;
  /* 11be60b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11be60bb jmp 0x11be60c4 */
  goto L_11be60c4;
L_11be60bd:;
  /* 11be60bd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be60c4:;
  /* 11be60c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be60c7 mov esp, ebp */
  ESP = (EBP);
  /* 11be60c9 pop ebp */
  EBP = (pop32());
  /* 11be60ca ret  */
  ESPCHK(0x11be6080u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x11be60d0 (134 bytes, 50 insns) */
void f_11be60d0(void) {
  FTRACE(0x11be60d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be60d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be60d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be60d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be60d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be60d8 jne 0x11be60de */
  if (!C.zf) goto L_11be60de;
  /* 11be60da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be60dc jmp 0x11be6152 */
  goto L_11be6152;
L_11be60de:;
  /* 11be60de push 1 */
  push32((uint32_t)(0x1u));
  /* 11be60e0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11be60e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be60e5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be60e8 push eax */
  push32((uint32_t)(EAX));
  /* 11be60e9 call 0x11be6080 */
  push32(0x11be60eeu); f_11be6080();
  /* 11be60ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be60f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be60f3 jne 0x11be60f9 */
  if (!C.zf) goto L_11be60f9;
  /* 11be60f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be60f7 jmp 0x11be6152 */
  goto L_11be6152;
L_11be60f9:;
  /* 11be60f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be60fc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be60ff push ecx */
  push32((uint32_t)(ECX));
  /* 11be6100 call 0x11be8dd0 */
  push32(0x11be6105u); f_11be8dd0();
  /* 11be6105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6108 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be610b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be610f je 0x11be6126 */
  if (C.zf) goto L_11be6126;
  /* 11be6111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6114 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6117 push edx */
  push32((uint32_t)(EDX));
  /* 11be6118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be611b push eax */
  push32((uint32_t)(EAX));
  /* 11be611c call 0x11be8e30 */
  push32(0x11be6121u); f_11be8e30();
  /* 11be6121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6124 jmp 0x11be6152 */
  goto L_11be6152;
L_11be6126:;
  /* 11be6126 mov ecx, dword ptr [0x11c10658] */
  ECX = (r32((uint32_t)(0x11c10658)));
  /* 11be612c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11be6132 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be6134 je 0x11be613d */
  if (C.zf) goto L_11be613d;
  /* 11be6136 mov eax, 1 */
  EAX = (0x1u);
  /* 11be613b jmp 0x11be6152 */
  goto L_11be6152;
L_11be613d:;
  /* 11be613d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6140 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6143 push edx */
  push32((uint32_t)(EDX));
  /* 11be6144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6146 mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be614b push eax */
  push32((uint32_t)(EAX));
  /* 11be614c call dword ptr [0x11c133a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133a8))), 0x11be6152u);
L_11be6152:;
  /* 11be6152 mov esp, ebp */
  ESP = (EBP);
  /* 11be6154 pop ebp */
  EBP = (pop32());
  /* 11be6155 ret  */
  ESPCHK(0x11be60d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006160 @ 0x11be6160 (227 bytes, 80 insns) */
void f_11be6160(void) {
  FTRACE(0x11be6160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6160 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6161 mov ebp, esp */
  EBP = (ESP);
  /* 11be6163 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6167 push eax */
  push32((uint32_t)(EAX));
  /* 11be6168 call 0x11be60d0 */
  push32(0x11be616du); f_11be60d0();
  /* 11be616d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6172 jne 0x11be617b */
  if (!C.zf) goto L_11be617b;
  /* 11be6174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6176 jmp 0x11be623f */
  goto L_11be623f;
L_11be617b:;
  /* 11be617b push 9 */
  push32((uint32_t)(0x9u));
  /* 11be617d call 0x11be84d0 */
  push32(0x11be6182u); f_11be84d0();
  /* 11be6182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6185 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6188 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be618b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be618e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6191 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be6194 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be6199 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be619c je 0x11be61c0 */
  if (C.zf) goto L_11be61c0;
  /* 11be619e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61a1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61a5 je 0x11be61c0 */
  if (C.zf) goto L_11be61c0;
  /* 11be61a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be61ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be61b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61b5 je 0x11be61c0 */
  if (C.zf) goto L_11be61c0;
  /* 11be61b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61ba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61be jne 0x11be6233 */
  if (!C.zf) goto L_11be6233;
L_11be61c0:;
  /* 11be61c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be61c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be61c5 push edx */
  push32((uint32_t)(EDX));
  /* 11be61c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be61c9 push eax */
  push32((uint32_t)(EAX));
  /* 11be61ca call 0x11be6080 */
  push32(0x11be61cfu); f_11be6080();
  /* 11be61cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be61d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be61d4 je 0x11be6233 */
  if (C.zf) goto L_11be6233;
  /* 11be61d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be61dc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61df jne 0x11be6233 */
  if (!C.zf) goto L_11be6233;
  /* 11be61e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11be61e7 cmp ecx, dword ptr [0x11c0ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61ed jg 0x11be6233 */
  if ((!C.zf&&C.sf==C.of)) goto L_11be6233;
  /* 11be61ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be61f3 je 0x11be6200 */
  if (C.zf) goto L_11be6200;
  /* 11be61f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be61f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be61fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11be61fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be6200:;
  /* 11be6200 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6204 je 0x11be6211 */
  if (C.zf) goto L_11be6211;
  /* 11be6206 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be6209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be620c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be620f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be6211:;
  /* 11be6211 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6215 je 0x11be6222 */
  if (C.zf) goto L_11be6222;
  /* 11be6217 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be621a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be621d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11be6220 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be6222:;
  /* 11be6222 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6224 call 0x11be8570 */
  push32(0x11be6229u); f_11be8570();
  /* 11be6229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be622c mov eax, 1 */
  EAX = (0x1u);
  /* 11be6231 jmp 0x11be623f */
  goto L_11be623f;
L_11be6233:;
  /* 11be6233 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6235 call 0x11be8570 */
  push32(0x11be623au); f_11be8570();
  /* 11be623a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be623d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be623f:;
  /* 11be623f mov esp, ebp */
  ESP = (EBP);
  /* 11be6241 pop ebp */
  EBP = (pop32());
  /* 11be6242 ret  */
  ESPCHK(0x11be6160u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x11be6250 (28 bytes, 11 insns) */
void f_11be6250(void) {
  FTRACE(0x11be6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6250 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6251 mov ebp, esp */
  EBP = (ESP);
  /* 11be6253 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6254 mov eax, dword ptr [0x11c12018] */
  EAX = (r32((uint32_t)(0x11c12018)));
  /* 11be6259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be625c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be625f mov dword ptr [0x11c12018], ecx */
  w32((uint32_t)(0x11c12018), (ECX));
  /* 11be6265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6268 mov esp, ebp */
  ESP = (EBP);
  /* 11be626a pop ebp */
  EBP = (pop32());
  /* 11be626b ret  */
  ESPCHK(0x11be6250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x11be6270 (362 bytes, 116 insns) */
void f_11be6270(void) {
  FTRACE(0x11be6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6270 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6271 mov ebp, esp */
  EBP = (ESP);
  /* 11be6273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6276 push ebx */
  push32((uint32_t)(EBX));
  /* 11be6277 push esi */
  push32((uint32_t)(ESI));
  /* 11be6278 push edi */
  push32((uint32_t)(EDI));
  /* 11be6279 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be627d jne 0x11be62aa */
  if (!C.zf) goto L_11be62aa;
L_11be627f:;
  /* 11be627f push 0x11c0bb4c */
  push32((uint32_t)(0x11c0bb4cu));
  /* 11be6284 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be6289 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be628b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be628d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be628f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6291 call 0x11be3b90 */
  push32(0x11be6296u); f_11be3b90();
  /* 11be6296 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6299 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be629c jne 0x11be629f */
  if (!C.zf) goto L_11be629f;
  /* 11be629e int3  */
  x86_unimpl("int3 @ 0x11be629e");
L_11be629f:;
  /* 11be629f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be62a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be62a3 jne 0x11be627f */
  if (!C.zf) goto L_11be627f;
  /* 11be62a5 jmp 0x11be63d3 */
  goto L_11be63d3;
L_11be62aa:;
  /* 11be62aa push 9 */
  push32((uint32_t)(0x9u));
  /* 11be62ac call 0x11be84d0 */
  push32(0x11be62b1u); f_11be84d0();
  /* 11be62b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be62b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be62b7 mov edx, dword ptr [0x11c106a4] */
  EDX = (r32((uint32_t)(0x11c106a4)));
  /* 11be62bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11be62bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be62c6 jmp 0x11be62d1 */
  goto L_11be62d1;
L_11be62c8:;
  /* 11be62c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be62cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be62ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be62d1:;
  /* 11be62d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be62d5 jge 0x11be62f5 */
  if ((C.sf==C.of)) goto L_11be62f5;
  /* 11be62d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be62da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be62dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11be62e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be62e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be62eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11be62f3 jmp 0x11be62c8 */
  goto L_11be62c8;
L_11be62f5:;
  /* 11be62f5 mov edx, dword ptr [0x11c106a4] */
  EDX = (r32((uint32_t)(0x11c106a4)));
  /* 11be62fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11be62fe jmp 0x11be6308 */
  goto L_11be6308;
L_11be6300:;
  /* 11be6300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6303 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be6305 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11be6308:;
  /* 11be6308 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be630c je 0x11be63b1 */
  if (C.zf) goto L_11be63b1;
  /* 11be6312 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6315 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be6318 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be631d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be631f jl 0x11be6387 */
  if ((C.sf!=C.of)) goto L_11be6387;
  /* 11be6321 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6324 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be6327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be632d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6330 jge 0x11be6387 */
  if ((C.sf==C.of)) goto L_11be6387;
  /* 11be6332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6335 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be6338 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be633e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6341 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11be6345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6348 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be634b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be634e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6354 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6357 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11be635b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be635e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be6361 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be6366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6369 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11be636d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6370 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6376 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be6379 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be637e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6381 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11be6385 jmp 0x11be63ac */
  goto L_11be63ac;
L_11be6387:;
  /* 11be6387 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be638a push edx */
  push32((uint32_t)(EDX));
  /* 11be638b push 0x11c0bb28 */
  push32((uint32_t)(0x11c0bb28u));
  /* 11be6390 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6392 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6394 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6398 call 0x11be3b90 */
  push32(0x11be639du); f_11be3b90();
  /* 11be639d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be63a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be63a3 jne 0x11be63a6 */
  if (!C.zf) goto L_11be63a6;
  /* 11be63a5 int3  */
  x86_unimpl("int3 @ 0x11be63a5");
L_11be63a6:;
  /* 11be63a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be63a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be63aa jne 0x11be6387 */
  if (!C.zf) goto L_11be6387;
L_11be63ac:;
  /* 11be63ac jmp 0x11be6300 */
  goto L_11be6300;
L_11be63b1:;
  /* 11be63b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be63b4 mov edx, dword ptr [0x11c106ac] */
  EDX = (r32((uint32_t)(0x11c106ac)));
  /* 11be63ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11be63bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be63c0 mov ecx, dword ptr [0x11c106a0] */
  ECX = (r32((uint32_t)(0x11c106a0)));
  /* 11be63c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11be63c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be63cb call 0x11be8570 */
  push32(0x11be63d0u); f_11be8570();
  /* 11be63d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be63d3:;
  /* 11be63d3 pop edi */
  EDI = (pop32());
  /* 11be63d4 pop esi */
  ESI = (pop32());
  /* 11be63d5 pop ebx */
  EBX = (pop32());
  /* 11be63d6 mov esp, ebp */
  ESP = (EBP);
  /* 11be63d8 pop ebp */
  EBP = (pop32());
  /* 11be63d9 ret  */
  ESPCHK(0x11be6270u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e0 @ 0x11be63e0 (291 bytes, 95 insns) */
void f_11be63e0(void) {
  FTRACE(0x11be63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be63e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be63e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be63e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be63e7 push esi */
  push32((uint32_t)(ESI));
  /* 11be63e8 push edi */
  push32((uint32_t)(EDI));
  /* 11be63e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be63f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be63f4 je 0x11be6402 */
  if (C.zf) goto L_11be6402;
  /* 11be63f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be63fa je 0x11be6402 */
  if (C.zf) goto L_11be6402;
  /* 11be63fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6400 jne 0x11be6430 */
  if (!C.zf) goto L_11be6430;
L_11be6402:;
  /* 11be6402 push 0x11c0bb74 */
  push32((uint32_t)(0x11c0bb74u));
  /* 11be6407 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be640c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be640e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6412 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6414 call 0x11be3b90 */
  push32(0x11be6419u); f_11be3b90();
  /* 11be6419 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be641c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be641f jne 0x11be6422 */
  if (!C.zf) goto L_11be6422;
  /* 11be6421 int3  */
  x86_unimpl("int3 @ 0x11be6421");
L_11be6422:;
  /* 11be6422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6426 jne 0x11be6402 */
  if (!C.zf) goto L_11be6402;
  /* 11be6428 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be642b jmp 0x11be64fc */
  goto L_11be64fc;
L_11be6430:;
  /* 11be6430 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be6437 jmp 0x11be6442 */
  goto L_11be6442;
L_11be6439:;
  /* 11be6439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be643c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be643f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be6442:;
  /* 11be6442 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6446 jge 0x11be64cc */
  if ((C.sf==C.of)) goto L_11be64cc;
  /* 11be644c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be644f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6455 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6458 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11be645c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6463 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6466 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11be646a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be646d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6473 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6476 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11be647a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be647e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6484 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11be6488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be648b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be648e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6493 jne 0x11be64a2 */
  if (!C.zf) goto L_11be64a2;
  /* 11be6495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be649b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be64a0 je 0x11be64c7 */
  if (C.zf) goto L_11be64c7;
L_11be64a2:;
  /* 11be64a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be64a6 je 0x11be64c7 */
  if (C.zf) goto L_11be64c7;
  /* 11be64a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be64ac jne 0x11be64c0 */
  if (!C.zf) goto L_11be64c0;
  /* 11be64ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be64b2 jne 0x11be64c7 */
  if (!C.zf) goto L_11be64c7;
  /* 11be64b4 mov eax, dword ptr [0x11c0ea84] */
  EAX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be64b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11be64bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be64be je 0x11be64c7 */
  if (C.zf) goto L_11be64c7;
L_11be64c0:;
  /* 11be64c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11be64c7:;
  /* 11be64c7 jmp 0x11be6439 */
  goto L_11be6439;
L_11be64cc:;
  /* 11be64cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be64cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be64d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11be64d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be64d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be64db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11be64de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be64e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be64e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11be64e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be64ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be64ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11be64f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be64f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be64f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11be64fc:;
  /* 11be64fc pop edi */
  EDI = (pop32());
  /* 11be64fd pop esi */
  ESI = (pop32());
  /* 11be64fe pop ebx */
  EBX = (pop32());
  /* 11be64ff mov esp, ebp */
  ESP = (EBP);
  /* 11be6501 pop ebp */
  EBP = (pop32());
  /* 11be6502 ret  */
  ESPCHK(0x11be63e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006510 @ 0x11be6510 (697 bytes, 253 insns) */
void f_11be6510(void) {
  FTRACE(0x11be6510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6510 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6511 mov ebp, esp */
  EBP = (ESP);
  /* 11be6513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6516 push ebx */
  push32((uint32_t)(EBX));
  /* 11be6517 push esi */
  push32((uint32_t)(ESI));
  /* 11be6518 push edi */
  push32((uint32_t)(EDI));
  /* 11be6519 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be6520 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6522 call 0x11be84d0 */
  push32(0x11be6527u); f_11be84d0();
  /* 11be6527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be652a:;
  /* 11be652a push 0x11c0bc6c */
  push32((uint32_t)(0x11c0bc6cu));
  /* 11be652f push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be6534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6538 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be653a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be653c call 0x11be3b90 */
  push32(0x11be6541u); f_11be3b90();
  /* 11be6541 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6544 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6547 jne 0x11be654a */
  if (!C.zf) goto L_11be654a;
  /* 11be6549 int3  */
  x86_unimpl("int3 @ 0x11be6549");
L_11be654a:;
  /* 11be654a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be654c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be654e jne 0x11be652a */
  if (!C.zf) goto L_11be652a;
  /* 11be6550 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6554 je 0x11be655e */
  if (C.zf) goto L_11be655e;
  /* 11be6556 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6559 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be655b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11be655e:;
  /* 11be655e mov eax, dword ptr [0x11c106a4] */
  EAX = (r32((uint32_t)(0x11c106a4)));
  /* 11be6563 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be6566 jmp 0x11be6570 */
  goto L_11be6570;
L_11be6568:;
  /* 11be6568 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be656b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be656d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be6570:;
  /* 11be6570 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6574 je 0x11be6792 */
  if (C.zf) goto L_11be6792;
  /* 11be657a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be657d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6580 je 0x11be6792 */
  if (C.zf) goto L_11be6792;
  /* 11be6586 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6589 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be658c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6592 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6595 je 0x11be65c4 */
  if (C.zf) goto L_11be65c4;
  /* 11be6597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be659a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11be659d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be65a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be65a5 je 0x11be65c4 */
  if (C.zf) goto L_11be65c4;
  /* 11be65a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be65aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be65ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be65b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be65b5 jne 0x11be65c9 */
  if (!C.zf) goto L_11be65c9;
  /* 11be65b7 mov ecx, dword ptr [0x11c0ea84] */
  ECX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be65bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11be65c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be65c2 jne 0x11be65c9 */
  if (!C.zf) goto L_11be65c9;
L_11be65c4:;
  /* 11be65c4 jmp 0x11be678d */
  goto L_11be678d;
L_11be65c9:;
  /* 11be65c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be65cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be65d0 je 0x11be6642 */
  if (C.zf) goto L_11be6642;
  /* 11be65d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be65d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be65d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be65d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be65dc push ecx */
  push32((uint32_t)(ECX));
  /* 11be65dd call 0x11be6080 */
  push32(0x11be65e2u); f_11be6080();
  /* 11be65e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be65e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be65e7 jne 0x11be6613 */
  if (!C.zf) goto L_11be6613;
L_11be65e9:;
  /* 11be65e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be65ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11be65ef push eax */
  push32((uint32_t)(EAX));
  /* 11be65f0 push 0x11c0bc58 */
  push32((uint32_t)(0x11c0bc58u));
  /* 11be65f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be65f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be65f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be65fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11be65fd call 0x11be3b90 */
  push32(0x11be6602u); f_11be3b90();
  /* 11be6602 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6605 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6608 jne 0x11be660b */
  if (!C.zf) goto L_11be660b;
  /* 11be660a int3  */
  x86_unimpl("int3 @ 0x11be660a");
L_11be660b:;
  /* 11be660b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be660d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be660f jne 0x11be65e9 */
  if (!C.zf) goto L_11be65e9;
  /* 11be6611 jmp 0x11be6642 */
  goto L_11be6642;
L_11be6613:;
  /* 11be6613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6616 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11be6619 push eax */
  push32((uint32_t)(EAX));
  /* 11be661a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be661d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be6620 push edx */
  push32((uint32_t)(EDX));
  /* 11be6621 push 0x11c0bc4c */
  push32((uint32_t)(0x11c0bc4cu));
  /* 11be6626 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6628 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be662a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be662c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be662e call 0x11be3b90 */
  push32(0x11be6633u); f_11be3b90();
  /* 11be6633 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6636 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6639 jne 0x11be663c */
  if (!C.zf) goto L_11be663c;
  /* 11be663b int3  */
  x86_unimpl("int3 @ 0x11be663b");
L_11be663c:;
  /* 11be663c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be663e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6640 jne 0x11be6613 */
  if (!C.zf) goto L_11be6613;
L_11be6642:;
  /* 11be6642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6645 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11be6648 push edx */
  push32((uint32_t)(EDX));
  /* 11be6649 push 0x11c0bc44 */
  push32((uint32_t)(0x11c0bc44u));
  /* 11be664e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6650 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6654 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6656 call 0x11be3b90 */
  push32(0x11be665bu); f_11be3b90();
  /* 11be665b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be665e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6661 jne 0x11be6664 */
  if (!C.zf) goto L_11be6664;
  /* 11be6663 int3  */
  x86_unimpl("int3 @ 0x11be6663");
L_11be6664:;
  /* 11be6664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6668 jne 0x11be6642 */
  if (!C.zf) goto L_11be6642;
  /* 11be666a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be666d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be6670 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6676 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6679 jne 0x11be66ec */
  if (!C.zf) goto L_11be66ec;
L_11be667b:;
  /* 11be667b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be667e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be6681 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6685 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be6688 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11be668b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be6690 push eax */
  push32((uint32_t)(EAX));
  /* 11be6691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6694 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6697 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6698 push 0x11c0bc10 */
  push32((uint32_t)(0x11c0bc10u));
  /* 11be669d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be669f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be66a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be66a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be66a5 call 0x11be3b90 */
  push32(0x11be66aau); f_11be3b90();
  /* 11be66aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be66ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be66b0 jne 0x11be66b3 */
  if (!C.zf) goto L_11be66b3;
  /* 11be66b2 int3  */
  x86_unimpl("int3 @ 0x11be66b2");
L_11be66b3:;
  /* 11be66b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be66b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be66b7 jne 0x11be667b */
  if (!C.zf) goto L_11be667b;
  /* 11be66b9 cmp dword ptr [0x11c12018], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12018))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be66c0 je 0x11be66db */
  if (C.zf) goto L_11be66db;
  /* 11be66c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be66c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be66c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be66cf push edx */
  push32((uint32_t)(EDX));
  /* 11be66d0 call dword ptr [0x11c12018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c12018))), 0x11be66d6u);
  /* 11be66d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be66d9 jmp 0x11be66e7 */
  goto L_11be66e7;
L_11be66db:;
  /* 11be66db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66de push eax */
  push32((uint32_t)(EAX));
  /* 11be66df call 0x11be67d0 */
  push32(0x11be66e4u); f_11be67d0();
  /* 11be66e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be66e7:;
  /* 11be66e7 jmp 0x11be678d */
  goto L_11be678d;
L_11be66ec:;
  /* 11be66ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be66f3 jne 0x11be6732 */
  if (!C.zf) goto L_11be6732;
L_11be66f5:;
  /* 11be66f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be66fb push eax */
  push32((uint32_t)(EAX));
  /* 11be66fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be66ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6702 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6703 push 0x11c0bbe8 */
  push32((uint32_t)(0x11c0bbe8u));
  /* 11be6708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be670a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be670c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be670e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6710 call 0x11be3b90 */
  push32(0x11be6715u); f_11be3b90();
  /* 11be6715 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6718 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be671b jne 0x11be671e */
  if (!C.zf) goto L_11be671e;
  /* 11be671d int3  */
  x86_unimpl("int3 @ 0x11be671d");
L_11be671e:;
  /* 11be671e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6722 jne 0x11be66f5 */
  if (!C.zf) goto L_11be66f5;
  /* 11be6724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6727 push eax */
  push32((uint32_t)(EAX));
  /* 11be6728 call 0x11be67d0 */
  push32(0x11be672du); f_11be67d0();
  /* 11be672d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6730 jmp 0x11be678d */
  goto L_11be678d;
L_11be6732:;
  /* 11be6732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6735 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11be6738 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be673e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6741 jne 0x11be678d */
  if (!C.zf) goto L_11be678d;
L_11be6743:;
  /* 11be6743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6746 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be6749 push ecx */
  push32((uint32_t)(ECX));
  /* 11be674a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be674d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11be6750 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11be6753 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be6758 push eax */
  push32((uint32_t)(EAX));
  /* 11be6759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be675c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be675f push ecx */
  push32((uint32_t)(ECX));
  /* 11be6760 push 0x11c0bbb4 */
  push32((uint32_t)(0x11c0bbb4u));
  /* 11be6765 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6767 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6769 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be676b push 0 */
  push32((uint32_t)(0x0u));
  /* 11be676d call 0x11be3b90 */
  push32(0x11be6772u); f_11be3b90();
  /* 11be6772 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6775 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6778 jne 0x11be677b */
  if (!C.zf) goto L_11be677b;
  /* 11be677a int3  */
  x86_unimpl("int3 @ 0x11be677a");
L_11be677b:;
  /* 11be677b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be677d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be677f jne 0x11be6743 */
  if (!C.zf) goto L_11be6743;
  /* 11be6781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6784 push eax */
  push32((uint32_t)(EAX));
  /* 11be6785 call 0x11be67d0 */
  push32(0x11be678au); f_11be67d0();
  /* 11be678a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be678d:;
  /* 11be678d jmp 0x11be6568 */
  goto L_11be6568;
L_11be6792:;
  /* 11be6792 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6794 call 0x11be8570 */
  push32(0x11be6799u); f_11be8570();
  /* 11be6799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be679c:;
  /* 11be679c push 0x11c0bb9c */
  push32((uint32_t)(0x11c0bb9cu));
  /* 11be67a1 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be67a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be67a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be67aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11be67ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11be67ae call 0x11be3b90 */
  push32(0x11be67b3u); f_11be3b90();
  /* 11be67b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be67b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be67b9 jne 0x11be67bc */
  if (!C.zf) goto L_11be67bc;
  /* 11be67bb int3  */
  x86_unimpl("int3 @ 0x11be67bb");
L_11be67bc:;
  /* 11be67bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be67be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be67c0 jne 0x11be679c */
  if (!C.zf) goto L_11be679c;
  /* 11be67c2 pop edi */
  EDI = (pop32());
  /* 11be67c3 pop esi */
  ESI = (pop32());
  /* 11be67c4 pop ebx */
  EBX = (pop32());
  /* 11be67c5 mov esp, ebp */
  ESP = (EBP);
  /* 11be67c7 pop ebp */
  EBP = (pop32());
  /* 11be67c8 ret  */
  ESPCHK(0x11be6510u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x11be67d0 (276 bytes, 89 insns) */
void f_11be67d0(void) {
  FTRACE(0x11be67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be67d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be67d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be67d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be67d7 push esi */
  push32((uint32_t)(ESI));
  /* 11be67d8 push edi */
  push32((uint32_t)(EDI));
  /* 11be67d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11be67e0 jmp 0x11be67eb */
  goto L_11be67eb;
L_11be67e2:;
  /* 11be67e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be67e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be67e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11be67eb:;
  /* 11be67eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be67ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be67f2 jge 0x11be67ff */
  if ((C.sf==C.of)) goto L_11be67ff;
  /* 11be67f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be67f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be67fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11be67fd jmp 0x11be6806 */
  goto L_11be6806;
L_11be67ff:;
  /* 11be67ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11be6806:;
  /* 11be6806 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be6809 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be680c jge 0x11be68ac */
  if ((C.sf==C.of)) goto L_11be68ac;
  /* 11be6812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6815 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6818 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11be681b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11be681e cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6825 jle 0x11be6843 */
  if ((C.zf||C.sf!=C.of)) goto L_11be6843;
  /* 11be6827 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11be682c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be682f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be6835 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6836 call 0x11beaae0 */
  push32(0x11be683bu); f_11beaae0();
  /* 11be683b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be683e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11be6841 jmp 0x11be6860 */
  goto L_11be6860;
L_11be6843:;
  /* 11be6843 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be6846 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be684c mov eax, dword ptr [0x11c0ec98] */
  EAX = (r32((uint32_t)(0x11c0ec98)));
  /* 11be6851 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be6853 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11be6857 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11be685d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11be6860:;
  /* 11be6860 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6864 je 0x11be6874 */
  if (C.zf) goto L_11be6874;
  /* 11be6866 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be6869 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be686f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11be6872 jmp 0x11be687b */
  goto L_11be687b;
L_11be6874:;
  /* 11be6874 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11be687b:;
  /* 11be687b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be687e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11be6881 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11be6885 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11be6888 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be688e push edx */
  push32((uint32_t)(EDX));
  /* 11be688f push 0x11c0bc90 */
  push32((uint32_t)(0x11c0bc90u));
  /* 11be6894 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be6897 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be689a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11be689e push ecx */
  push32((uint32_t)(ECX));
  /* 11be689f call 0x11bea9e0 */
  push32(0x11be68a4u); f_11bea9e0();
  /* 11be68a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be68a7 jmp 0x11be67e2 */
  goto L_11be67e2;
L_11be68ac:;
  /* 11be68ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11be68af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11be68b4:;
  /* 11be68b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11be68b7 push eax */
  push32((uint32_t)(EAX));
  /* 11be68b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11be68bb push ecx */
  push32((uint32_t)(ECX));
  /* 11be68bc push 0x11c0bc80 */
  push32((uint32_t)(0x11c0bc80u));
  /* 11be68c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be68c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be68c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be68c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be68c9 call 0x11be3b90 */
  push32(0x11be68ceu); f_11be3b90();
  /* 11be68ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be68d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be68d4 jne 0x11be68d7 */
  if (!C.zf) goto L_11be68d7;
  /* 11be68d6 int3  */
  x86_unimpl("int3 @ 0x11be68d6");
L_11be68d7:;
  /* 11be68d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be68d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be68db jne 0x11be68b4 */
  if (!C.zf) goto L_11be68b4;
  /* 11be68dd pop edi */
  EDI = (pop32());
  /* 11be68de pop esi */
  ESI = (pop32());
  /* 11be68df pop ebx */
  EBX = (pop32());
  /* 11be68e0 mov esp, ebp */
  ESP = (EBP);
  /* 11be68e2 pop ebp */
  EBP = (pop32());
  /* 11be68e3 ret  */
  ESPCHK(0x11be67d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x11be68f0 (116 bytes, 46 insns) */
void f_11be68f0(void) {
  FTRACE(0x11be68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be68f1 mov ebp, esp */
  EBP = (ESP);
  /* 11be68f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be68f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11be68f7 push esi */
  push32((uint32_t)(ESI));
  /* 11be68f8 push edi */
  push32((uint32_t)(EDI));
  /* 11be68f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11be68fc push eax */
  push32((uint32_t)(EAX));
  /* 11be68fd call 0x11be6270 */
  push32(0x11be6902u); f_11be6270();
  /* 11be6902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6905 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6909 jne 0x11be6924 */
  if (!C.zf) goto L_11be6924;
  /* 11be690b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be690f jne 0x11be6924 */
  if (!C.zf) goto L_11be6924;
  /* 11be6911 mov ecx, dword ptr [0x11c0ea84] */
  ECX = (r32((uint32_t)(0x11c0ea84)));
  /* 11be6917 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11be691a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be691c je 0x11be695b */
  if (C.zf) goto L_11be695b;
  /* 11be691e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6922 je 0x11be695b */
  if (C.zf) goto L_11be695b;
L_11be6924:;
  /* 11be6924 push 0x11c0bc98 */
  push32((uint32_t)(0x11c0bc98u));
  /* 11be6929 push 0x11c0b664 */
  push32((uint32_t)(0x11c0b664u));
  /* 11be692e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6930 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6936 call 0x11be3b90 */
  push32(0x11be693bu); f_11be3b90();
  /* 11be693b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be693e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6941 jne 0x11be6944 */
  if (!C.zf) goto L_11be6944;
  /* 11be6943 int3  */
  x86_unimpl("int3 @ 0x11be6943");
L_11be6944:;
  /* 11be6944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6946 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6948 jne 0x11be6924 */
  if (!C.zf) goto L_11be6924;
  /* 11be694a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be694c call 0x11be6510 */
  push32(0x11be6951u); f_11be6510();
  /* 11be6951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6954 mov eax, 1 */
  EAX = (0x1u);
  /* 11be6959 jmp 0x11be695d */
  goto L_11be695d;
L_11be695b:;
  /* 11be695b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be695d:;
  /* 11be695d pop edi */
  EDI = (pop32());
  /* 11be695e pop esi */
  ESI = (pop32());
  /* 11be695f pop ebx */
  EBX = (pop32());
  /* 11be6960 mov esp, ebp */
  ESP = (EBP);
  /* 11be6962 pop ebp */
  EBP = (pop32());
  /* 11be6963 ret  */
  ESPCHK(0x11be68f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x11be6970 (197 bytes, 79 insns) */
void f_11be6970(void) {
  FTRACE(0x11be6970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6970 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6971 mov ebp, esp */
  EBP = (ESP);
  /* 11be6973 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6974 push ebx */
  push32((uint32_t)(EBX));
  /* 11be6975 push esi */
  push32((uint32_t)(ESI));
  /* 11be6976 push edi */
  push32((uint32_t)(EDI));
  /* 11be6977 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be697b jne 0x11be6982 */
  if (!C.zf) goto L_11be6982;
  /* 11be697d jmp 0x11be6a2e */
  goto L_11be6a2e;
L_11be6982:;
  /* 11be6982 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be6989 jmp 0x11be6994 */
  goto L_11be6994;
L_11be698b:;
  /* 11be698b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be698e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6991 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be6994:;
  /* 11be6994 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6998 jge 0x11be69de */
  if ((C.sf==C.of)) goto L_11be69de;
L_11be699a:;
  /* 11be699a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be699d mov edx, dword ptr [ecx*4 + 0x11c0ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0ea94)));
  /* 11be69a4 push edx */
  push32((uint32_t)(EDX));
  /* 11be69a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be69a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be69ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11be69af push edx */
  push32((uint32_t)(EDX));
  /* 11be69b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be69b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be69b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11be69ba push edx */
  push32((uint32_t)(EDX));
  /* 11be69bb push 0x11c0bcf4 */
  push32((uint32_t)(0x11c0bcf4u));
  /* 11be69c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69c8 call 0x11be3b90 */
  push32(0x11be69cdu); f_11be3b90();
  /* 11be69cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be69d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be69d3 jne 0x11be69d6 */
  if (!C.zf) goto L_11be69d6;
  /* 11be69d5 int3  */
  x86_unimpl("int3 @ 0x11be69d5");
L_11be69d6:;
  /* 11be69d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be69d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be69da jne 0x11be699a */
  if (!C.zf) goto L_11be699a;
  /* 11be69dc jmp 0x11be698b */
  goto L_11be698b;
L_11be69de:;
  /* 11be69de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be69e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11be69e4 push edx */
  push32((uint32_t)(EDX));
  /* 11be69e5 push 0x11c0bcd0 */
  push32((uint32_t)(0x11c0bcd0u));
  /* 11be69ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be69f2 call 0x11be3b90 */
  push32(0x11be69f7u); f_11be3b90();
  /* 11be69f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be69fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be69fd jne 0x11be6a00 */
  if (!C.zf) goto L_11be6a00;
  /* 11be69ff int3  */
  x86_unimpl("int3 @ 0x11be69ff");
L_11be6a00:;
  /* 11be6a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6a04 jne 0x11be69de */
  if (!C.zf) goto L_11be69de;
L_11be6a06:;
  /* 11be6a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6a09 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11be6a0c push edx */
  push32((uint32_t)(EDX));
  /* 11be6a0d push 0x11c0bcb0 */
  push32((uint32_t)(0x11c0bcb0u));
  /* 11be6a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6a1a call 0x11be3b90 */
  push32(0x11be6a1fu); f_11be3b90();
  /* 11be6a1f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6a22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6a25 jne 0x11be6a28 */
  if (!C.zf) goto L_11be6a28;
  /* 11be6a27 int3  */
  x86_unimpl("int3 @ 0x11be6a27");
L_11be6a28:;
  /* 11be6a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6a2c jne 0x11be6a06 */
  if (!C.zf) goto L_11be6a06;
L_11be6a2e:;
  /* 11be6a2e pop edi */
  EDI = (pop32());
  /* 11be6a2f pop esi */
  ESI = (pop32());
  /* 11be6a30 pop ebx */
  EBX = (pop32());
  /* 11be6a31 mov esp, ebp */
  ESP = (EBP);
  /* 11be6a33 pop ebp */
  EBP = (pop32());
  /* 11be6a34 ret  */
  ESPCHK(0x11be6970u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11be6a40 (329 bytes, 102 insns) */
void f_11be6a40(void) {
  FTRACE(0x11be6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6a41 mov ebp, esp */
  EBP = (ESP);
  /* 11be6a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6a46 cmp dword ptr [0x11c12190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6a4d jne 0x11be6a54 */
  if (!C.zf) goto L_11be6a54;
  /* 11be6a4f call 0x11beb380 */
  push32(0x11be6a54u); f_11beb380();
L_11be6a54:;
  /* 11be6a54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be6a5b mov eax, dword ptr [0x11c10640] */
  EAX = (r32((uint32_t)(0x11c10640)));
  /* 11be6a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be6a63:;
  /* 11be6a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6a66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be6a69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6a6b je 0x11be6a99 */
  if (C.zf) goto L_11be6a99;
  /* 11be6a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6a70 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6a73 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6a76 je 0x11be6a81 */
  if (C.zf) goto L_11be6a81;
  /* 11be6a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6a7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6a7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11be6a81:;
  /* 11be6a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6a84 push eax */
  push32((uint32_t)(EAX));
  /* 11be6a85 call 0x11be7900 */
  push32(0x11be6a8au); f_11be7900();
  /* 11be6a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6a8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6a90 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11be6a94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be6a97 jmp 0x11be6a63 */
  goto L_11be6a63;
L_11be6a99:;
  /* 11be6a99 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11be6a9b push 0x11c0bd14 */
  push32((uint32_t)(0x11c0bd14u));
  /* 11be6aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be6aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6aa5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11be6aac push ecx */
  push32((uint32_t)(ECX));
  /* 11be6aad call 0x11be4ad0 */
  push32(0x11be6ab2u); f_11be4ad0();
  /* 11be6ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ab5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be6ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6abb mov dword ptr [0x11c10674], edx */
  w32((uint32_t)(0x11c10674), (EDX));
  /* 11be6ac1 cmp dword ptr [0x11c10674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6ac8 jne 0x11be6ad4 */
  if (!C.zf) goto L_11be6ad4;
  /* 11be6aca push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6acc call 0x11be3a40 */
  push32(0x11be6ad1u); f_11be3a40();
  /* 11be6ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be6ad4:;
  /* 11be6ad4 mov eax, dword ptr [0x11c10640] */
  EAX = (r32((uint32_t)(0x11c10640)));
  /* 11be6ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be6adc jmp 0x11be6ae7 */
  goto L_11be6ae7;
L_11be6ade:;
  /* 11be6ade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ae1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ae4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be6ae7:;
  /* 11be6ae7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6aea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6aef je 0x11be6b57 */
  if (C.zf) goto L_11be6b57;
  /* 11be6af1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6af4 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6af5 call 0x11be7900 */
  push32(0x11be6afau); f_11be7900();
  /* 11be6afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6b00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be6b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6b09 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6b0c je 0x11be6b55 */
  if (C.zf) goto L_11be6b55;
  /* 11be6b0e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11be6b10 push 0x11c0bd14 */
  push32((uint32_t)(0x11c0bd14u));
  /* 11be6b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be6b17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6b1a push ecx */
  push32((uint32_t)(ECX));
  /* 11be6b1b call 0x11be4ad0 */
  push32(0x11be6b20u); f_11be4ad0();
  /* 11be6b20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6b23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6b26 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be6b28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6b2b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6b2e jne 0x11be6b3a */
  if (!C.zf) goto L_11be6b3a;
  /* 11be6b30 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be6b32 call 0x11be3a40 */
  push32(0x11be6b37u); f_11be3a40();
  /* 11be6b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be6b3a:;
  /* 11be6b3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6b3d push ecx */
  push32((uint32_t)(ECX));
  /* 11be6b3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6b41 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be6b43 push eax */
  push32((uint32_t)(EAX));
  /* 11be6b44 call 0x11be7a80 */
  push32(0x11be6b49u); f_11be7a80();
  /* 11be6b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6b4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6b4f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6b52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11be6b55:;
  /* 11be6b55 jmp 0x11be6ade */
  goto L_11be6ade;
L_11be6b57:;
  /* 11be6b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be6b59 mov edx, dword ptr [0x11c10640] */
  EDX = (r32((uint32_t)(0x11c10640)));
  /* 11be6b5f push edx */
  push32((uint32_t)(EDX));
  /* 11be6b60 call 0x11be5560 */
  push32(0x11be6b65u); f_11be5560();
  /* 11be6b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6b68 mov dword ptr [0x11c10640], 0 */
  w32((uint32_t)(0x11c10640), (0x0u));
  /* 11be6b72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6b75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be6b7b mov dword ptr [0x11c12180], 1 */
  w32((uint32_t)(0x11c12180), (0x1u));
  /* 11be6b85 mov esp, ebp */
  ESP = (EBP);
  /* 11be6b87 pop ebp */
  EBP = (pop32());
  /* 11be6b88 ret  */
  ESPCHK(0x11be6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x11be6b90 (216 bytes, 69 insns) */
void f_11be6b90(void) {
  FTRACE(0x11be6b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6b91 mov ebp, esp */
  EBP = (ESP);
  /* 11be6b93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6b96 cmp dword ptr [0x11c12190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6b9d jne 0x11be6ba4 */
  if (!C.zf) goto L_11be6ba4;
  /* 11be6b9f call 0x11beb380 */
  push32(0x11be6ba4u); f_11beb380();
L_11be6ba4:;
  /* 11be6ba4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11be6ba9 push 0x11c106b0 */
  push32((uint32_t)(0x11c106b0u));
  /* 11be6bae push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6bb0 call dword ptr [0x11c13360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13360))), 0x11be6bb6u);
  /* 11be6bb6 mov dword ptr [0x11c10684], 0x11c106b0 */
  w32((uint32_t)(0x11c10684), (0x11c106b0u));
  /* 11be6bc0 mov eax, dword ptr [0x11c121ac] */
  EAX = (r32((uint32_t)(0x11c121ac)));
  /* 11be6bc5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6bc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be6bca jne 0x11be6bd7 */
  if (!C.zf) goto L_11be6bd7;
  /* 11be6bcc mov edx, dword ptr [0x11c10684] */
  EDX = (r32((uint32_t)(0x11c10684)));
  /* 11be6bd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11be6bd5 jmp 0x11be6bdf */
  goto L_11be6bdf;
L_11be6bd7:;
  /* 11be6bd7 mov eax, dword ptr [0x11c121ac] */
  EAX = (r32((uint32_t)(0x11c121ac)));
  /* 11be6bdc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11be6bdf:;
  /* 11be6bdf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be6be2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be6be5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11be6be8 push edx */
  push32((uint32_t)(EDX));
  /* 11be6be9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11be6bec push eax */
  push32((uint32_t)(EAX));
  /* 11be6bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11be6bf1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6bf5 call 0x11be6c70 */
  push32(0x11be6bfau); f_11be6c70();
  /* 11be6bfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6bfd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11be6c02 push 0x11c0bd20 */
  push32((uint32_t)(0x11c0bd20u));
  /* 11be6c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be6c09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6c0f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11be6c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6c13 call 0x11be4ad0 */
  push32(0x11be6c18u); f_11be4ad0();
  /* 11be6c18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6c1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be6c1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6c22 jne 0x11be6c2e */
  if (!C.zf) goto L_11be6c2e;
  /* 11be6c24 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be6c26 call 0x11be3a40 */
  push32(0x11be6c2bu); f_11be3a40();
  /* 11be6c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be6c2e:;
  /* 11be6c2e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11be6c31 push edx */
  push32((uint32_t)(EDX));
  /* 11be6c32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11be6c35 push eax */
  push32((uint32_t)(EAX));
  /* 11be6c36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6c39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6c3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11be6c3f push eax */
  push32((uint32_t)(EAX));
  /* 11be6c40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11be6c44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6c47 push edx */
  push32((uint32_t)(EDX));
  /* 11be6c48 call 0x11be6c70 */
  push32(0x11be6c4du); f_11be6c70();
  /* 11be6c4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6c50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6c53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6c56 mov dword ptr [0x11c10668], eax */
  w32((uint32_t)(0x11c10668), (EAX));
  /* 11be6c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be6c5e mov dword ptr [0x11c1066c], ecx */
  w32((uint32_t)(0x11c1066c), (ECX));
  /* 11be6c64 mov esp, ebp */
  ESP = (EBP);
  /* 11be6c66 pop ebp */
  EBP = (pop32());
  /* 11be6c67 ret  */
  ESPCHK(0x11be6b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x11be6c70 (1060 bytes, 360 insns) */
void f_11be6c70(void) {
  FTRACE(0x11be6c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be6c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be6c71 mov ebp, esp */
  EBP = (ESP);
  /* 11be6c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6c76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6c79 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be6c7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be6c82 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11be6c88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be6c8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be6c8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6c92 je 0x11be6ca5 */
  if (C.zf) goto L_11be6ca5;
  /* 11be6c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6c97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6c9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11be6c9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6c9f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ca2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11be6ca5:;
  /* 11be6ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ca8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6cab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6cae jne 0x11be6d7d */
  if (!C.zf) goto L_11be6d7d;
L_11be6cb4:;
  /* 11be6cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6cb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6cba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be6cbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6cc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6cc3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6cc6 je 0x11be6d42 */
  if (C.zf) goto L_11be6d42;
  /* 11be6cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ccb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6cd0 je 0x11be6d42 */
  if (C.zf) goto L_11be6d42;
  /* 11be6cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6cd5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6cd7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be6cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6cdb mov al, byte ptr [edx + 0x11c11ee1] */
  AL = (r8((uint32_t)(EDX + 0x11c11ee1)));
  /* 11be6ce1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11be6ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6ce6 je 0x11be6d17 */
  if (C.zf) goto L_11be6d17;
  /* 11be6ce8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6ceb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be6ced add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6cf0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6cf3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be6cf5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6cf9 je 0x11be6d17 */
  if (C.zf) goto L_11be6d17;
  /* 11be6cfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6cfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11be6d03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11be6d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11be6d0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be6d17:;
  /* 11be6d17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be6d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be6d24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6d28 je 0x11be6d3d */
  if (C.zf) goto L_11be6d3d;
  /* 11be6d2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be6d32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be6d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11be6d3d:;
  /* 11be6d3d jmp 0x11be6cb4 */
  goto L_11be6cb4;
L_11be6d42:;
  /* 11be6d42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be6d47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be6d4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6d53 je 0x11be6d64 */
  if (C.zf) goto L_11be6d64;
  /* 11be6d55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11be6d5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11be6d64:;
  /* 11be6d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6d6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6d6d jne 0x11be6d78 */
  if (!C.zf) goto L_11be6d78;
  /* 11be6d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be6d78:;
  /* 11be6d78 jmp 0x11be6e4c */
  goto L_11be6e4c;
L_11be6d7d:;
  /* 11be6d7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be6d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6d85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6d88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be6d8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6d8e je 0x11be6da3 */
  if (C.zf) goto L_11be6da3;
  /* 11be6d90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6d96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be6d98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be6d9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6d9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6da0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11be6da3:;
  /* 11be6da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be6da8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11be6dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6db1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be6db4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6db7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be6dbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6dbf mov dl, byte ptr [ecx + 0x11c11ee1] */
  DL = (r8((uint32_t)(ECX + 0x11c11ee1)));
  /* 11be6dc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11be6dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6dca je 0x11be6dfb */
  if (C.zf) goto L_11be6dfb;
  /* 11be6dcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6dcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be6dd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6dd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6dd7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be6dd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6ddd je 0x11be6df2 */
  if (C.zf) goto L_11be6df2;
  /* 11be6ddf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6de5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be6de7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be6de9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6dec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6def mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11be6df2:;
  /* 11be6df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6df5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6df8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be6dfb:;
  /* 11be6dfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6dfe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6e04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e07 je 0x11be6e27 */
  if (C.zf) goto L_11be6e27;
  /* 11be6e09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6e0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be6e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6e13 je 0x11be6e27 */
  if (C.zf) goto L_11be6e27;
  /* 11be6e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6e18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be6e1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e21 jne 0x11be6d7d */
  if (!C.zf) goto L_11be6d7d;
L_11be6e27:;
  /* 11be6e27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be6e2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be6e30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6e32 jne 0x11be6e3f */
  if (!C.zf) goto L_11be6e3f;
  /* 11be6e34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6e3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be6e3d jmp 0x11be6e4c */
  goto L_11be6e4c;
L_11be6e3f:;
  /* 11be6e3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e43 je 0x11be6e4c */
  if (C.zf) goto L_11be6e4c;
  /* 11be6e45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6e48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11be6e4c:;
  /* 11be6e4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11be6e53:;
  /* 11be6e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6e5b je 0x11be6e7e */
  if (C.zf) goto L_11be6e7e;
L_11be6e5d:;
  /* 11be6e5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be6e63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e66 je 0x11be6e73 */
  if (C.zf) goto L_11be6e73;
  /* 11be6e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6e6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e71 jne 0x11be6e7e */
  if (!C.zf) goto L_11be6e7e;
L_11be6e73:;
  /* 11be6e73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6e79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be6e7c jmp 0x11be6e5d */
  goto L_11be6e5d;
L_11be6e7e:;
  /* 11be6e7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6e81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6e84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be6e86 jne 0x11be6e8d */
  if (!C.zf) goto L_11be6e8d;
  /* 11be6e88 jmp 0x11be706b */
  goto L_11be706b;
L_11be6e8d:;
  /* 11be6e8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6e91 je 0x11be6ea4 */
  if (C.zf) goto L_11be6ea4;
  /* 11be6e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6e96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6e99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be6e9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be6e9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ea1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11be6ea4:;
  /* 11be6ea4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be6ea7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be6ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6eac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be6eaf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11be6eb1:;
  /* 11be6eb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11be6eb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11be6ebf:;
  /* 11be6ebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ec2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6ec5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6ec8 jne 0x11be6ede */
  if (!C.zf) goto L_11be6ede;
  /* 11be6eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ecd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ed0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be6ed3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6ed6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ed9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11be6edc jmp 0x11be6ebf */
  goto L_11be6ebf;
L_11be6ede:;
  /* 11be6ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6ee1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6ee4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6ee7 jne 0x11be6f3a */
  if (!C.zf) goto L_11be6f3a;
  /* 11be6ee9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6eec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6eee mov ecx, 2 */
  ECX = (0x2u);
  /* 11be6ef3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11be6ef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be6ef7 jne 0x11be6f32 */
  if (!C.zf) goto L_11be6f32;
  /* 11be6ef9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6efd je 0x11be6f1f */
  if (C.zf) goto L_11be6f1f;
  /* 11be6eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6f02 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11be6f06 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f09 jne 0x11be6f16 */
  if (!C.zf) goto L_11be6f16;
  /* 11be6f0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6f0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6f11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be6f14 jmp 0x11be6f1d */
  goto L_11be6f1d;
L_11be6f16:;
  /* 11be6f16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11be6f1d:;
  /* 11be6f1d jmp 0x11be6f26 */
  goto L_11be6f26;
L_11be6f1f:;
  /* 11be6f1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11be6f26:;
  /* 11be6f26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be6f28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f2c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11be6f2f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11be6f32:;
  /* 11be6f32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6f35 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11be6f37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11be6f3a:;
  /* 11be6f3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6f3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be6f40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be6f43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11be6f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be6f48 je 0x11be6f6e */
  if (C.zf) goto L_11be6f6e;
  /* 11be6f4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f4e je 0x11be6f5f */
  if (C.zf) goto L_11be6f5f;
  /* 11be6f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6f53 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11be6f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6f59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6f5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11be6f5f:;
  /* 11be6f5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6f62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be6f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6f67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6f6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be6f6c jmp 0x11be6f3a */
  goto L_11be6f3a;
L_11be6f6e:;
  /* 11be6f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6f71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11be6f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be6f76 je 0x11be6f94 */
  if (C.zf) goto L_11be6f94;
  /* 11be6f78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f7c jne 0x11be6f99 */
  if (!C.zf) goto L_11be6f99;
  /* 11be6f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6f81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be6f84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f87 je 0x11be6f94 */
  if (C.zf) goto L_11be6f94;
  /* 11be6f89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6f8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11be6f8f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f92 jne 0x11be6f99 */
  if (!C.zf) goto L_11be6f99;
L_11be6f94:;
  /* 11be6f94 jmp 0x11be7044 */
  goto L_11be7044;
L_11be6f99:;
  /* 11be6f99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6f9d je 0x11be7036 */
  if (C.zf) goto L_11be7036;
  /* 11be6fa3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be6fa7 je 0x11be6ffd */
  if (C.zf) goto L_11be6ffd;
  /* 11be6fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be6fae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11be6fb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be6fb2 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11be6fb8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11be6fbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be6fbd je 0x11be6fe8 */
  if (C.zf) goto L_11be6fe8;
  /* 11be6fbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6fc5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11be6fc7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11be6fc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6fcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6fcf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11be6fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6fd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be6fdb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6fde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be6fe0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6fe3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be6fe6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11be6fe8:;
  /* 11be6fe8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6feb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be6fee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11be6ff0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11be6ff2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be6ff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be6ff8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11be6ffb jmp 0x11be7029 */
  goto L_11be7029;
L_11be6ffd:;
  /* 11be6ffd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7002 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11be7004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be7006 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11be700c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11be700f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be7011 je 0x11be7029 */
  if (C.zf) goto L_11be7029;
  /* 11be7013 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7019 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be701c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be701f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be7021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7024 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be7027 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be7029:;
  /* 11be7029 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be702c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be702e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7031 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be7034 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be7036:;
  /* 11be7036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be703c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be703f jmp 0x11be6eb1 */
  goto L_11be6eb1;
L_11be7044:;
  /* 11be7044 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7048 je 0x11be7059 */
  if (C.zf) goto L_11be7059;
  /* 11be704a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be704d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11be7050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7053 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7056 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11be7059:;
  /* 11be7059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be705c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be705e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11be7064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be7066 jmp 0x11be6e53 */
  goto L_11be6e53;
L_11be706b:;
  /* 11be706b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be706f je 0x11be7083 */
  if (C.zf) goto L_11be7083;
  /* 11be7071 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7074 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be707a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be707d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7080 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11be7083:;
  /* 11be7083 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be7086 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be7088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be708b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be708e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be7090 mov esp, ebp */
  ESP = (EBP);
  /* 11be7092 pop ebp */
  EBP = (pop32());
  /* 11be7093 ret  */
  ESPCHK(0x11be6c70u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x11be70a0 (537 bytes, 173 insns) */
void f_11be70a0(void) {
  FTRACE(0x11be70a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be70a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be70a1 mov ebp, esp */
  EBP = (ESP);
  /* 11be70a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be70a6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11be70ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11be70b4 cmp dword ptr [0x11c107b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be70bb jne 0x11be70fa */
  if (!C.zf) goto L_11be70fa;
  /* 11be70bd call dword ptr [0x11c133b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b8))), 0x11be70c3u);
  /* 11be70c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11be70c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be70ca je 0x11be70d8 */
  if (C.zf) goto L_11be70d8;
  /* 11be70cc mov dword ptr [0x11c107b4], 1 */
  w32((uint32_t)(0x11c107b4), (0x1u));
  /* 11be70d6 jmp 0x11be70fa */
  goto L_11be70fa;
L_11be70d8:;
  /* 11be70d8 call dword ptr [0x11c133b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b4))), 0x11be70deu);
  /* 11be70de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be70e1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be70e5 je 0x11be70f3 */
  if (C.zf) goto L_11be70f3;
  /* 11be70e7 mov dword ptr [0x11c107b4], 2 */
  w32((uint32_t)(0x11c107b4), (0x2u));
  /* 11be70f1 jmp 0x11be70fa */
  goto L_11be70fa;
L_11be70f3:;
  /* 11be70f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be70f5 jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be70fa:;
  /* 11be70fa cmp dword ptr [0x11c107b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c107b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7101 jne 0x11be71fe */
  if (!C.zf) goto L_11be71fe;
  /* 11be7107 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be710b jne 0x11be7123 */
  if (!C.zf) goto L_11be7123;
  /* 11be710d call dword ptr [0x11c133b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b8))), 0x11be7113u);
  /* 11be7113 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11be7116 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be711a jne 0x11be7123 */
  if (!C.zf) goto L_11be7123;
  /* 11be711c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be711e jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be7123:;
  /* 11be7123 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be7126 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11be7129:;
  /* 11be7129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be712c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be712e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11be7131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be7133 je 0x11be7155 */
  if (C.zf) goto L_11be7155;
  /* 11be7135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7138 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be713b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be713e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7141 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7143 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11be7146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be7148 jne 0x11be7153 */
  if (!C.zf) goto L_11be7153;
  /* 11be714a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be714d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11be7153:;
  /* 11be7153 jmp 0x11be7129 */
  goto L_11be7129;
L_11be7155:;
  /* 11be7155 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7158 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be715b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11be715d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7160 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be7163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7167 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7169 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be716b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be716e push edx */
  push32((uint32_t)(EDX));
  /* 11be716f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be7172 push eax */
  push32((uint32_t)(EAX));
  /* 11be7173 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7177 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11be717du);
  /* 11be717d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be7180 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7184 je 0x11be71a4 */
  if (C.zf) goto L_11be71a4;
  /* 11be7186 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11be7188 push 0x11c0bd2c */
  push32((uint32_t)(0x11c0bd2cu));
  /* 11be718d push 2 */
  push32((uint32_t)(0x2u));
  /* 11be718f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be7192 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7193 call 0x11be4ad0 */
  push32(0x11be7198u); f_11be4ad0();
  /* 11be7198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be719b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be719e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be71a2 jne 0x11be71b5 */
  if (!C.zf) goto L_11be71b5;
L_11be71a4:;
  /* 11be71a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be71a7 push edx */
  push32((uint32_t)(EDX));
  /* 11be71a8 call dword ptr [0x11c133a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133a0))), 0x11be71aeu);
  /* 11be71ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be71b0 jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be71b5:;
  /* 11be71b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be71b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be71b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be71bc push eax */
  push32((uint32_t)(EAX));
  /* 11be71bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be71c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be71c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be71c4 push edx */
  push32((uint32_t)(EDX));
  /* 11be71c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be71c8 push eax */
  push32((uint32_t)(EAX));
  /* 11be71c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be71cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11be71cd call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11be71d3u);
  /* 11be71d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be71d5 jne 0x11be71ec */
  if (!C.zf) goto L_11be71ec;
  /* 11be71d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be71d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be71dc push ecx */
  push32((uint32_t)(ECX));
  /* 11be71dd call 0x11be5560 */
  push32(0x11be71e2u); f_11be5560();
  /* 11be71e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be71e5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11be71ec:;
  /* 11be71ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be71ef push edx */
  push32((uint32_t)(EDX));
  /* 11be71f0 call dword ptr [0x11c133a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133a0))), 0x11be71f6u);
  /* 11be71f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be71f9 jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be71fe:;
  /* 11be71fe cmp dword ptr [0x11c107b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c107b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7205 jne 0x11be72b3 */
  if (!C.zf) goto L_11be72b3;
  /* 11be720b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be720f jne 0x11be7227 */
  if (!C.zf) goto L_11be7227;
  /* 11be7211 call dword ptr [0x11c133b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b4))), 0x11be7217u);
  /* 11be7217 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be721a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be721e jne 0x11be7227 */
  if (!C.zf) goto L_11be7227;
  /* 11be7220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7222 jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be7227:;
  /* 11be7227 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be722a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11be722d:;
  /* 11be722d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7230 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be7233 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be7235 je 0x11be7255 */
  if (C.zf) goto L_11be7255;
  /* 11be7237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be723a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be723d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7243 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11be7246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be7248 jne 0x11be7253 */
  if (!C.zf) goto L_11be7253;
  /* 11be724a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be724d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7250 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11be7253:;
  /* 11be7253 jmp 0x11be722d */
  goto L_11be722d;
L_11be7255:;
  /* 11be7255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7258 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be725b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be725e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be7261 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11be7266 push 0x11c0bd2c */
  push32((uint32_t)(0x11c0bd2cu));
  /* 11be726b push 2 */
  push32((uint32_t)(0x2u));
  /* 11be726d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be7270 push edx */
  push32((uint32_t)(EDX));
  /* 11be7271 call 0x11be4ad0 */
  push32(0x11be7276u); f_11be4ad0();
  /* 11be7276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7279 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be727c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7280 jne 0x11be7290 */
  if (!C.zf) goto L_11be7290;
  /* 11be7282 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be7285 push eax */
  push32((uint32_t)(EAX));
  /* 11be7286 call dword ptr [0x11c133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133ac))), 0x11be728cu);
  /* 11be728c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be728e jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be7290:;
  /* 11be7290 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be7293 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7294 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be7297 push edx */
  push32((uint32_t)(EDX));
  /* 11be7298 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be729b push eax */
  push32((uint32_t)(EAX));
  /* 11be729c call 0x11beb3b0 */
  push32(0x11be72a1u); f_11beb3b0();
  /* 11be72a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be72a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be72a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11be72a8 call dword ptr [0x11c133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133ac))), 0x11be72aeu);
  /* 11be72ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be72b1 jmp 0x11be72b5 */
  goto L_11be72b5;
L_11be72b3:;
  /* 11be72b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be72b5:;
  /* 11be72b5 mov esp, ebp */
  ESP = (EBP);
  /* 11be72b7 pop ebp */
  EBP = (pop32());
  /* 11be72b8 ret  */
  ESPCHK(0x11be70a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072c0 @ 0x11be72c0 (77 bytes, 25 insns) */
void f_11be72c0(void) {
  FTRACE(0x11be72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be72c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be72c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be72c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11be72ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be72cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be72d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11be72d3 push eax */
  push32((uint32_t)(EAX));
  /* 11be72d4 call dword ptr [0x11c13378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13378))), 0x11be72dau);
  /* 11be72da mov dword ptr [0x11c1200c], eax */
  w32((uint32_t)(0x11c1200c), (EAX));
  /* 11be72df cmp dword ptr [0x11c1200c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1200c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be72e6 jne 0x11be72ec */
  if (!C.zf) goto L_11be72ec;
  /* 11be72e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be72ea jmp 0x11be730b */
  goto L_11be730b;
L_11be72ec:;
  /* 11be72ec call 0x11be8d70 */
  push32(0x11be72f1u); f_11be8d70();
  /* 11be72f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be72f3 jne 0x11be7306 */
  if (!C.zf) goto L_11be7306;
  /* 11be72f5 mov ecx, dword ptr [0x11c1200c] */
  ECX = (r32((uint32_t)(0x11c1200c)));
  /* 11be72fb push ecx */
  push32((uint32_t)(ECX));
  /* 11be72fc call dword ptr [0x11c133bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133bc))), 0x11be7302u);
  /* 11be7302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7304 jmp 0x11be730b */
  goto L_11be730b;
L_11be7306:;
  /* 11be7306 mov eax, 1 */
  EAX = (0x1u);
L_11be730b:;
  /* 11be730b pop ebp */
  EBP = (pop32());
  /* 11be730c ret  */
  ESPCHK(0x11be72c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x11be7310 (156 bytes, 48 insns) */
void f_11be7310(void) {
  FTRACE(0x11be7310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7310 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7311 mov ebp, esp */
  EBP = (ESP);
  /* 11be7313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7316 mov eax, dword ptr [0x11c12008] */
  EAX = (r32((uint32_t)(0x11c12008)));
  /* 11be731b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be731e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be7325 jmp 0x11be7330 */
  goto L_11be7330;
L_11be7327:;
  /* 11be7327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be732a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be732d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be7330:;
  /* 11be7330 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7333 cmp edx, dword ptr [0x11c12004] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c12004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7339 jge 0x11be7386 */
  if ((C.sf==C.of)) goto L_11be7386;
  /* 11be733b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11be7340 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11be7345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7348 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11be734b push ecx */
  push32((uint32_t)(ECX));
  /* 11be734c call dword ptr [0x11c13330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13330))), 0x11be7352u);
  /* 11be7352 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11be7357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7359 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be735c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11be735f push eax */
  push32((uint32_t)(EAX));
  /* 11be7360 call dword ptr [0x11c13330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13330))), 0x11be7366u);
  /* 11be7366 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7369 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be736c push edx */
  push32((uint32_t)(EDX));
  /* 11be736d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be736f mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be7374 push eax */
  push32((uint32_t)(EAX));
  /* 11be7375 call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11be737bu);
  /* 11be737b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be737e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7381 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be7384 jmp 0x11be7327 */
  goto L_11be7327;
L_11be7386:;
  /* 11be7386 mov edx, dword ptr [0x11c12008] */
  EDX = (r32((uint32_t)(0x11c12008)));
  /* 11be738c push edx */
  push32((uint32_t)(EDX));
  /* 11be738d push 0 */
  push32((uint32_t)(0x0u));
  /* 11be738f mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be7394 push eax */
  push32((uint32_t)(EAX));
  /* 11be7395 call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11be739bu);
  /* 11be739b mov ecx, dword ptr [0x11c1200c] */
  ECX = (r32((uint32_t)(0x11c1200c)));
  /* 11be73a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11be73a2 call dword ptr [0x11c133bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133bc))), 0x11be73a8u);
  /* 11be73a8 mov esp, ebp */
  ESP = (EBP);
  /* 11be73aa pop ebp */
  EBP = (pop32());
  /* 11be73ab ret  */
  ESPCHK(0x11be7310u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11be73b0 (73 bytes, 19 insns) */
void f_11be73b0(void) {
  FTRACE(0x11be73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be73b1 mov ebp, esp */
  EBP = (ESP);
  /* 11be73b3 cmp dword ptr [0x11c10648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be73ba je 0x11be73ce */
  if (C.zf) goto L_11be73ce;
  /* 11be73bc cmp dword ptr [0x11c10648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be73c3 jne 0x11be73f7 */
  if (!C.zf) goto L_11be73f7;
  /* 11be73c5 cmp dword ptr [0x11c1064c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1064c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be73cc jne 0x11be73f7 */
  if (!C.zf) goto L_11be73f7;
L_11be73ce:;
  /* 11be73ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11be73d3 call 0x11be7400 */
  push32(0x11be73d8u); f_11be7400();
  /* 11be73d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be73db cmp dword ptr [0x11c107b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be73e2 je 0x11be73ea */
  if (C.zf) goto L_11be73ea;
  /* 11be73e4 call dword ptr [0x11c107b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c107b8))), 0x11be73eau);
L_11be73ea:;
  /* 11be73ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 11be73ef call 0x11be7400 */
  push32(0x11be73f4u); f_11be7400();
  /* 11be73f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be73f7:;
  /* 11be73f7 pop ebp */
  EBP = (pop32());
  /* 11be73f8 ret  */
  ESPCHK(0x11be73b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007400 @ 0x11be7400 (447 bytes, 131 insns) */
void f_11be7400(void) {
  FTRACE(0x11be7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7400 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7401 mov ebp, esp */
  EBP = (ESP);
  /* 11be7403 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7409 push ebx */
  push32((uint32_t)(EBX));
  /* 11be740a push esi */
  push32((uint32_t)(ESI));
  /* 11be740b push edi */
  push32((uint32_t)(EDI));
  /* 11be740c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be7413 jmp 0x11be741e */
  goto L_11be741e;
L_11be7415:;
  /* 11be7415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7418 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be741b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11be741e:;
  /* 11be741e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7422 jae 0x11be7437 */
  if (!C.cf) goto L_11be7437;
  /* 11be7424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be742a cmp edx, dword ptr [ecx*8 + 0x11c0eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11c0eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7431 jne 0x11be7435 */
  if (!C.zf) goto L_11be7435;
  /* 11be7433 jmp 0x11be7437 */
  goto L_11be7437;
L_11be7435:;
  /* 11be7435 jmp 0x11be7415 */
  goto L_11be7415;
L_11be7437:;
  /* 11be7437 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be743a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be743d cmp ecx, dword ptr [eax*8 + 0x11c0eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11c0eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7444 jne 0x11be75b8 */
  if (!C.zf) goto L_11be75b8;
  /* 11be744a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7451 je 0x11be7474 */
  if (C.zf) goto L_11be7474;
  /* 11be7453 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7456 mov eax, dword ptr [edx*8 + 0x11c0eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11c0eab4)));
  /* 11be745d push eax */
  push32((uint32_t)(EAX));
  /* 11be745e push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7460 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7462 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7464 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7466 call 0x11be3b90 */
  push32(0x11be746bu); f_11be3b90();
  /* 11be746b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be746e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7471 jne 0x11be7474 */
  if (!C.zf) goto L_11be7474;
  /* 11be7473 int3  */
  x86_unimpl("int3 @ 0x11be7473");
L_11be7474:;
  /* 11be7474 cmp dword ptr [0x11c10648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be747b je 0x11be748f */
  if (C.zf) goto L_11be748f;
  /* 11be747d cmp dword ptr [0x11c10648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7484 jne 0x11be74c8 */
  if (!C.zf) goto L_11be74c8;
  /* 11be7486 cmp dword ptr [0x11c1064c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1064c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be748d jne 0x11be74c8 */
  if (!C.zf) goto L_11be74c8;
L_11be748f:;
  /* 11be748f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7491 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11be7494 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7495 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7498 mov eax, dword ptr [edx*8 + 0x11c0eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11c0eab4)));
  /* 11be749f push eax */
  push32((uint32_t)(EAX));
  /* 11be74a0 call 0x11be7900 */
  push32(0x11be74a5u); f_11be7900();
  /* 11be74a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be74a8 push eax */
  push32((uint32_t)(EAX));
  /* 11be74a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be74ac mov edx, dword ptr [ecx*8 + 0x11c0eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11c0eab4)));
  /* 11be74b3 push edx */
  push32((uint32_t)(EDX));
  /* 11be74b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11be74b6 call dword ptr [0x11c13344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13344))), 0x11be74bcu);
  /* 11be74bc push eax */
  push32((uint32_t)(EAX));
  /* 11be74bd call dword ptr [0x11c13348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13348))), 0x11be74c3u);
  /* 11be74c3 jmp 0x11be75b8 */
  goto L_11be75b8;
L_11be74c8:;
  /* 11be74c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be74cf je 0x11be75b8 */
  if (C.zf) goto L_11be75b8;
  /* 11be74d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11be74da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11be74e0 push eax */
  push32((uint32_t)(EAX));
  /* 11be74e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be74e3 call dword ptr [0x11c13360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13360))), 0x11be74e9u);
  /* 11be74e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be74eb jne 0x11be7501 */
  if (!C.zf) goto L_11be7501;
  /* 11be74ed push 0x11c0b594 */
  push32((uint32_t)(0x11c0b594u));
  /* 11be74f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11be74f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be74f9 call 0x11be7a80 */
  push32(0x11be74feu); f_11be7a80();
  /* 11be74fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be7501:;
  /* 11be7501 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11be7507 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11be750a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be750d push eax */
  push32((uint32_t)(EAX));
  /* 11be750e call 0x11be7900 */
  push32(0x11be7513u); f_11be7900();
  /* 11be7513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7516 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7519 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be751c jbe 0x11be754a */
  if ((C.cf||C.zf)) goto L_11be754a;
  /* 11be751e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11be7524 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7525 call 0x11be7900 */
  push32(0x11be752au); f_11be7900();
  /* 11be752a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be752d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7530 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11be7534 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7537 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be7539 push 0x11c0b590 */
  push32((uint32_t)(0x11c0b590u));
  /* 11be753e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7541 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7542 call 0x11be82f0 */
  push32(0x11be7547u); f_11be82f0();
  /* 11be7547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be754a:;
  /* 11be754a push 0x11c0bfe8 */
  push32((uint32_t)(0x11c0bfe8u));
  /* 11be754f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11be7555 push edx */
  push32((uint32_t)(EDX));
  /* 11be7556 call 0x11be7a80 */
  push32(0x11be755bu); f_11be7a80();
  /* 11be755b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be755e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7561 push eax */
  push32((uint32_t)(EAX));
  /* 11be7562 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11be7568 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7569 call 0x11be7a90 */
  push32(0x11be756eu); f_11be7a90();
  /* 11be756e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7571 push 0x11c0b508 */
  push32((uint32_t)(0x11c0b508u));
  /* 11be7576 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11be757c push edx */
  push32((uint32_t)(EDX));
  /* 11be757d call 0x11be7a90 */
  push32(0x11be7582u); f_11be7a90();
  /* 11be7582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7588 mov ecx, dword ptr [eax*8 + 0x11c0eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11c0eab4)));
  /* 11be758f push ecx */
  push32((uint32_t)(ECX));
  /* 11be7590 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11be7596 push edx */
  push32((uint32_t)(EDX));
  /* 11be7597 call 0x11be7a90 */
  push32(0x11be759cu); f_11be7a90();
  /* 11be759c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be759f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11be75a4 push 0x11c0bfc0 */
  push32((uint32_t)(0x11c0bfc0u));
  /* 11be75a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11be75af push eax */
  push32((uint32_t)(EAX));
  /* 11be75b0 call 0x11be8230 */
  push32(0x11be75b5u); f_11be8230();
  /* 11be75b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be75b8:;
  /* 11be75b8 pop edi */
  EDI = (pop32());
  /* 11be75b9 pop esi */
  ESI = (pop32());
  /* 11be75ba pop ebx */
  EBX = (pop32());
  /* 11be75bb mov esp, ebp */
  ESP = (EBP);
  /* 11be75bd pop ebp */
  EBP = (pop32());
  /* 11be75be ret  */
  ESPCHK(0x11be7400u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11be75c0 (80 bytes, 27 insns) */
void f_11be75c0(void) {
  FTRACE(0x11be75c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be75c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be75c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be75c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be75c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be75cb jmp 0x11be75d6 */
  goto L_11be75d6;
L_11be75cd:;
  /* 11be75cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be75d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be75d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be75d6:;
  /* 11be75d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be75da jae 0x11be75ef */
  if (!C.cf) goto L_11be75ef;
  /* 11be75dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be75df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be75e2 cmp edx, dword ptr [ecx*8 + 0x11c0eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11c0eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be75e9 jne 0x11be75ed */
  if (!C.zf) goto L_11be75ed;
  /* 11be75eb jmp 0x11be75ef */
  goto L_11be75ef;
L_11be75ed:;
  /* 11be75ed jmp 0x11be75cd */
  goto L_11be75cd;
L_11be75ef:;
  /* 11be75ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be75f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be75f5 cmp ecx, dword ptr [eax*8 + 0x11c0eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11c0eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be75fc jne 0x11be760a */
  if (!C.zf) goto L_11be760a;
  /* 11be75fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7601 mov eax, dword ptr [edx*8 + 0x11c0eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11c0eab4)));
  /* 11be7608 jmp 0x11be760c */
  goto L_11be760c;
L_11be760a:;
  /* 11be760a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be760c:;
  /* 11be760c mov esp, ebp */
  ESP = (EBP);
  /* 11be760e pop ebp */
  EBP = (pop32());
  /* 11be760f ret  */
  ESPCHK(0x11be75c0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11be7610 (66 bytes, 28 insns) */
void f_11be7610(void) {
  FTRACE(0x11be7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7610 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7611 mov ebp, esp */
  EBP = (ESP);
  /* 11be7613 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7617 jne 0x11be7637 */
  if (!C.zf) goto L_11be7637;
  /* 11be7619 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be761d jge 0x11be7637 */
  if ((C.sf==C.of)) goto L_11be7637;
  /* 11be761f push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7621 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7624 push eax */
  push32((uint32_t)(EAX));
  /* 11be7625 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7628 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be762c push edx */
  push32((uint32_t)(EDX));
  /* 11be762d call 0x11be7660 */
  push32(0x11be7632u); f_11be7660();
  /* 11be7632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7635 jmp 0x11be764d */
  goto L_11be764d;
L_11be7637:;
  /* 11be7637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7639 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be763c push eax */
  push32((uint32_t)(EAX));
  /* 11be763d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7640 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7644 push edx */
  push32((uint32_t)(EDX));
  /* 11be7645 call 0x11be7660 */
  push32(0x11be764au); f_11be7660();
  /* 11be764a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be764d:;
  /* 11be764d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7650 pop ebp */
  EBP = (pop32());
  /* 11be7651 ret  */
  ESPCHK(0x11be7610u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11be7660 (194 bytes, 71 insns) */
void f_11be7660(void) {
  FTRACE(0x11be7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7660 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7661 mov ebp, esp */
  EBP = (ESP);
  /* 11be7663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be766c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7670 je 0x11be7689 */
  if (C.zf) goto L_11be7689;
  /* 11be7672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7675 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11be7678 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be767b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be767e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be7681 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7684 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11be7686 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11be7689:;
  /* 11be7689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be768c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11be768f:;
  /* 11be768f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7692 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7694 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11be7697 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11be769a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be769d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be769f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11be76a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11be76a5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be76a9 jbe 0x11be76c1 */
  if ((C.cf||C.zf)) goto L_11be76c1;
  /* 11be76ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be76ae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be76b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76b4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be76b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be76bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be76bf jmp 0x11be76d5 */
  goto L_11be76d5;
L_11be76c1:;
  /* 11be76c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be76c4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be76c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be76cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be76d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be76d5:;
  /* 11be76d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be76d9 ja 0x11be768f */
  if ((!C.cf&&!C.zf)) goto L_11be768f;
  /* 11be76db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76de mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11be76e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be76e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be76ea:;
  /* 11be76ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be76ef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11be76f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be76f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be76f8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be76fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be76fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be76ff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11be7702 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11be7704 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7707 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be770a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be770d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7713 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be7716 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7719 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be771c jb 0x11be76ea */
  if (C.cf) goto L_11be76ea;
  /* 11be771e mov esp, ebp */
  ESP = (EBP);
  /* 11be7720 pop ebp */
  EBP = (pop32());
  /* 11be7721 ret  */
  ESPCHK(0x11be7660u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11be7730 (63 bytes, 24 insns) */
void f_11be7730(void) {
  FTRACE(0x11be7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7730 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7731 mov ebp, esp */
  EBP = (ESP);
  /* 11be7733 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7734 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7738 jne 0x11be7749 */
  if (!C.zf) goto L_11be7749;
  /* 11be773a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be773e jge 0x11be7749 */
  if ((C.sf==C.of)) goto L_11be7749;
  /* 11be7740 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11be7747 jmp 0x11be7750 */
  goto L_11be7750;
L_11be7749:;
  /* 11be7749 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be7750:;
  /* 11be7750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7753 push eax */
  push32((uint32_t)(EAX));
  /* 11be7754 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7757 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be775b push edx */
  push32((uint32_t)(EDX));
  /* 11be775c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be775f push eax */
  push32((uint32_t)(EAX));
  /* 11be7760 call 0x11be7660 */
  push32(0x11be7765u); f_11be7660();
  /* 11be7765 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be776b mov esp, ebp */
  ESP = (EBP);
  /* 11be776d pop ebp */
  EBP = (pop32());
  /* 11be776e ret  */
  ESPCHK(0x11be7730u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11be7770 (30 bytes, 14 insns) */
void f_11be7770(void) {
  FTRACE(0x11be7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7770 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7771 mov ebp, esp */
  EBP = (ESP);
  /* 11be7773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7775 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7778 push eax */
  push32((uint32_t)(EAX));
  /* 11be7779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be777c push ecx */
  push32((uint32_t)(ECX));
  /* 11be777d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7780 push edx */
  push32((uint32_t)(EDX));
  /* 11be7781 call 0x11be7660 */
  push32(0x11be7786u); f_11be7660();
  /* 11be7786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7789 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be778c pop ebp */
  EBP = (pop32());
  /* 11be778d ret  */
  ESPCHK(0x11be7770u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11be7790 (72 bytes, 28 insns) */
void f_11be7790(void) {
  FTRACE(0x11be7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7790 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7791 mov ebp, esp */
  EBP = (ESP);
  /* 11be7793 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7794 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7798 jne 0x11be77b1 */
  if (!C.zf) goto L_11be77b1;
  /* 11be779a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be779e jg 0x11be77b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11be77b1;
  /* 11be77a0 jl 0x11be77a8 */
  if ((C.sf!=C.of)) goto L_11be77a8;
  /* 11be77a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be77a6 jae 0x11be77b1 */
  if (!C.cf) goto L_11be77b1;
L_11be77a8:;
  /* 11be77a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11be77af jmp 0x11be77b8 */
  goto L_11be77b8;
L_11be77b1:;
  /* 11be77b1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be77b8:;
  /* 11be77b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be77bb push eax */
  push32((uint32_t)(EAX));
  /* 11be77bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be77bf push ecx */
  push32((uint32_t)(ECX));
  /* 11be77c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be77c3 push edx */
  push32((uint32_t)(EDX));
  /* 11be77c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be77c7 push eax */
  push32((uint32_t)(EAX));
  /* 11be77c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be77cb push ecx */
  push32((uint32_t)(ECX));
  /* 11be77cc call 0x11be77e0 */
  push32(0x11be77d1u); f_11be77e0();
  /* 11be77d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be77d4 mov esp, ebp */
  ESP = (EBP);
  /* 11be77d6 pop ebp */
  EBP = (pop32());
  /* 11be77d7 ret  */
  ESPCHK(0x11be7790u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11be77e0 (242 bytes, 91 insns) */
void f_11be77e0(void) {
  FTRACE(0x11be77e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be77e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be77e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be77e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be77e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be77e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be77ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be77f0 je 0x11be7814 */
  if (C.zf) goto L_11be7814;
  /* 11be77f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be77f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11be77f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be77fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be77fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be7801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7804 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11be7806 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7809 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be780c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11be780e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11be7811 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11be7814:;
  /* 11be7814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7817 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11be781a:;
  /* 11be781a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be781d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be781f push ecx */
  push32((uint32_t)(ECX));
  /* 11be7820 push eax */
  push32((uint32_t)(EAX));
  /* 11be7821 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7824 push edx */
  push32((uint32_t)(EDX));
  /* 11be7825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7828 push eax */
  push32((uint32_t)(EAX));
  /* 11be7829 call 0x11beb760 */
  push32(0x11be782eu); f_11beb760();
  /* 11be782e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7831 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be7834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7836 push edx */
  push32((uint32_t)(EDX));
  /* 11be7837 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be783b push eax */
  push32((uint32_t)(EAX));
  /* 11be783c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be783f push ecx */
  push32((uint32_t)(ECX));
  /* 11be7840 call 0x11beb6f0 */
  push32(0x11be7845u); f_11beb6f0();
  /* 11be7845 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11be7848 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11be784b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be784f jbe 0x11be7867 */
  if ((C.cf||C.zf)) goto L_11be7867;
  /* 11be7851 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7854 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be785a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be785c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be785f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7862 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be7865 jmp 0x11be787b */
  goto L_11be787b;
L_11be7867:;
  /* 11be7867 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be786a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be786d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7870 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be7872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7878 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11be787b:;
  /* 11be787b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be787f ja 0x11be781a */
  if ((!C.cf&&!C.zf)) goto L_11be781a;
  /* 11be7881 jb 0x11be7889 */
  if (C.cf) goto L_11be7889;
  /* 11be7883 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7887 ja 0x11be781a */
  if ((!C.cf&&!C.zf)) goto L_11be781a;
L_11be7889:;
  /* 11be7889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be788c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11be788f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7892 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be7898:;
  /* 11be7898 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be789b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be789d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11be78a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be78a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be78a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be78a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11be78aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be78ad mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11be78b0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11be78b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be78b5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be78b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be78bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be78be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be78c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be78c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be78c7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be78ca jb 0x11be7898 */
  if (C.cf) goto L_11be7898;
  /* 11be78cc mov esp, ebp */
  ESP = (EBP);
  /* 11be78ce pop ebp */
  EBP = (pop32());
  /* 11be78cf ret 0x14 */
  ESPCHK(0x11be77e0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11be78e0 (31 bytes, 15 insns) */
void f_11be78e0(void) {
  FTRACE(0x11be78e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be78e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be78e1 mov ebp, esp */
  EBP = (ESP);
  /* 11be78e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be78e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be78e8 push eax */
  push32((uint32_t)(EAX));
  /* 11be78e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be78ec push ecx */
  push32((uint32_t)(ECX));
  /* 11be78ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be78f0 push edx */
  push32((uint32_t)(EDX));
  /* 11be78f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be78f4 push eax */
  push32((uint32_t)(EAX));
  /* 11be78f5 call 0x11be77e0 */
  push32(0x11be78fau); f_11be77e0();
  /* 11be78fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be78fd pop ebp */
  EBP = (pop32());
  /* 11be78fe ret  */
  ESPCHK(0x11be78e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11be7900 (123 bytes, 44 insns) */
void f_11be7900(void) {
  FTRACE(0x11be7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7900 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be7904 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be790a je 0x11be7920 */
  if (C.zf) goto L_11be7920;
L_11be790c:;
  /* 11be790c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11be790e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11be790f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be7911 je 0x11be7953 */
  if (C.zf) goto L_11be7953;
  /* 11be7913 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be7919 jne 0x11be790c */
  if (!C.zf) goto L_11be790c;
  /* 11be791b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11be7920:;
  /* 11be7920 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11be7922 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11be7927 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7929 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be792c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be792e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7931 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11be7936 je 0x11be7920 */
  if (C.zf) goto L_11be7920;
  /* 11be7938 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11be793b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be793d je 0x11be7971 */
  if (C.zf) goto L_11be7971;
  /* 11be793f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11be7941 je 0x11be7967 */
  if (C.zf) goto L_11be7967;
  /* 11be7943 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11be7948 je 0x11be795d */
  if (C.zf) goto L_11be795d;
  /* 11be794a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11be794f je 0x11be7953 */
  if (C.zf) goto L_11be7953;
  /* 11be7951 jmp 0x11be7920 */
  goto L_11be7920;
L_11be7953:;
  /* 11be7953 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11be7956 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be795a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be795c ret  */
  ESPCHK(0x11be7900u, _esp0);
  ESP += 4; return;
L_11be795d:;
  /* 11be795d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11be7960 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be7964 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7966 ret  */
  ESPCHK(0x11be7900u, _esp0);
  ESP += 4; return;
L_11be7967:;
  /* 11be7967 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11be796a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be796e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7970 ret  */
  ESPCHK(0x11be7900u, _esp0);
  ESP += 4; return;
L_11be7971:;
  /* 11be7971 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11be7974 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be7978 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be797a ret  */
  ESPCHK(0x11be7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007980 @ 0x11be7980 (249 bytes, 93 insns) */
void f_11be7980(void) {
  FTRACE(0x11be7980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7980 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7981 mov ebp, esp */
  EBP = (ESP);
  /* 11be7983 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7986 push ebx */
  push32((uint32_t)(EBX));
  /* 11be7987 push esi */
  push32((uint32_t)(ESI));
  /* 11be7988 push edi */
  push32((uint32_t)(EDI));
  /* 11be7989 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11be798c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11be798f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11be7992 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11be7995:;
  /* 11be7995 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7999 jne 0x11be79b9 */
  if (!C.zf) goto L_11be79b9;
  /* 11be799b push 0x11c0c020 */
  push32((uint32_t)(0x11c0c020u));
  /* 11be79a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be79a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11be79a4 push 0x11c0c014 */
  push32((uint32_t)(0x11c0c014u));
  /* 11be79a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be79ab call 0x11be3b90 */
  push32(0x11be79b0u); f_11be3b90();
  /* 11be79b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be79b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be79b6 jne 0x11be79b9 */
  if (!C.zf) goto L_11be79b9;
  /* 11be79b8 int3  */
  x86_unimpl("int3 @ 0x11be79b8");
L_11be79b9:;
  /* 11be79b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be79bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be79bd jne 0x11be7995 */
  if (!C.zf) goto L_11be7995;
L_11be79bf:;
  /* 11be79bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be79c3 jne 0x11be79e3 */
  if (!C.zf) goto L_11be79e3;
  /* 11be79c5 push 0x11c0c004 */
  push32((uint32_t)(0x11c0c004u));
  /* 11be79ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11be79cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11be79ce push 0x11c0c014 */
  push32((uint32_t)(0x11c0c014u));
  /* 11be79d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be79d5 call 0x11be3b90 */
  push32(0x11be79dau); f_11be3b90();
  /* 11be79da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be79dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be79e0 jne 0x11be79e3 */
  if (!C.zf) goto L_11be79e3;
  /* 11be79e2 int3  */
  x86_unimpl("int3 @ 0x11be79e2");
L_11be79e3:;
  /* 11be79e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be79e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be79e7 jne 0x11be79bf */
  if (!C.zf) goto L_11be79bf;
  /* 11be79e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be79ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11be79f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be79f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be79f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be79fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be79ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7a02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11be7a04 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7a0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11be7a0d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be7a10 push edx */
  push32((uint32_t)(EDX));
  /* 11be7a11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7a14 push eax */
  push32((uint32_t)(EAX));
  /* 11be7a15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a18 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7a19 call 0x11beba60 */
  push32(0x11be7a1eu); f_11beba60();
  /* 11be7a1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7a21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11be7a24 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a27 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be7a2a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7a2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11be7a33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a36 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7a3a jl 0x11be7a5e */
  if ((C.sf!=C.of)) goto L_11be7a5e;
  /* 11be7a3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be7a41 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11be7a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7a46 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be7a4c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11be7a4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a52 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be7a54 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7a57 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a5a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be7a5c jmp 0x11be7a6f */
  goto L_11be7a6f;
L_11be7a5e:;
  /* 11be7a5e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7a61 push eax */
  push32((uint32_t)(EAX));
  /* 11be7a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7a64 call 0x11beb7e0 */
  push32(0x11be7a69u); f_11beb7e0();
  /* 11be7a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7a6c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11be7a6f:;
  /* 11be7a6f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be7a72 pop edi */
  EDI = (pop32());
  /* 11be7a73 pop esi */
  ESI = (pop32());
  /* 11be7a74 pop ebx */
  EBX = (pop32());
  /* 11be7a75 mov esp, ebp */
  ESP = (EBP);
  /* 11be7a77 pop ebp */
  EBP = (pop32());
  /* 11be7a78 ret  */
  ESPCHK(0x11be7980u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x11be7a80 (7 bytes, 3 insns) */
void f_11be7a80(void) {
  FTRACE(0x11be7a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7a80 push edi */
  push32((uint32_t)(EDI));
  /* 11be7a81 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11be7a85 jmp 0x11be7af1 */
  jmp_ind(0x11be7af1u); return;
}

/* FUN_10007a90 @ 0x11be7a90 (224 bytes, 84 insns) */
void f_11be7a90(void) {
  FTRACE(0x11be7a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7a90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be7a94 push edi */
  push32((uint32_t)(EDI));
  /* 11be7a95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be7a9b je 0x11be7aac */
  if (C.zf) goto L_11be7aac;
L_11be7a9d:;
  /* 11be7a9d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11be7a9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11be7aa0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be7aa2 je 0x11be7adf */
  if (C.zf) goto L_11be7adf;
  /* 11be7aa4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be7aaa jne 0x11be7a9d */
  if (!C.zf) goto L_11be7a9d;
L_11be7aac:;
  /* 11be7aac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11be7aae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11be7ab3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7ab5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be7ab8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7aba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7abd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11be7ac2 je 0x11be7aac */
  if (C.zf) goto L_11be7aac;
  /* 11be7ac4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11be7ac7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be7ac9 je 0x11be7aee */
  if (C.zf) goto L_11be7aee;
  /* 11be7acb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11be7acd je 0x11be7ae9 */
  if (C.zf) goto L_11be7ae9;
  /* 11be7acf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11be7ad4 je 0x11be7ae4 */
  if (C.zf) goto L_11be7ae4;
  /* 11be7ad6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11be7adb je 0x11be7adf */
  if (C.zf) goto L_11be7adf;
  /* 11be7add jmp 0x11be7aac */
  goto L_11be7aac;
L_11be7adf:;
  /* 11be7adf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11be7ae2 jmp 0x11be7af1 */
  goto L_11be7af1;
L_11be7ae4:;
  /* 11be7ae4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11be7ae7 jmp 0x11be7af1 */
  goto L_11be7af1;
L_11be7ae9:;
  /* 11be7ae9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11be7aec jmp 0x11be7af1 */
  goto L_11be7af1;
L_11be7aee:;
  /* 11be7aee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11be7af1:;
  /* 11be7af1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11be7af5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be7afb je 0x11be7b16 */
  if (C.zf) goto L_11be7b16;
L_11be7afd:;
  /* 11be7afd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11be7aff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11be7b00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11be7b02 je 0x11be7b68 */
  if (C.zf) goto L_11be7b68;
  /* 11be7b04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11be7b06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be7b07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11be7b0d jne 0x11be7afd */
  if (!C.zf) goto L_11be7afd;
  /* 11be7b0f jmp 0x11be7b16 */
  goto L_11be7b16;
L_11be7b11:;
  /* 11be7b11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be7b13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11be7b16:;
  /* 11be7b16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11be7b1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11be7b1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7b1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be7b22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7b24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be7b26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7b29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11be7b2e je 0x11be7b11 */
  if (C.zf) goto L_11be7b11;
  /* 11be7b30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11be7b32 je 0x11be7b68 */
  if (C.zf) goto L_11be7b68;
  /* 11be7b34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11be7b36 je 0x11be7b5f */
  if (C.zf) goto L_11be7b5f;
  /* 11be7b38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11be7b3e je 0x11be7b52 */
  if (C.zf) goto L_11be7b52;
  /* 11be7b40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11be7b46 je 0x11be7b4a */
  if (C.zf) goto L_11be7b4a;
  /* 11be7b48 jmp 0x11be7b11 */
  goto L_11be7b11;
L_11be7b4a:;
  /* 11be7b4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be7b4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be7b50 pop edi */
  EDI = (pop32());
  /* 11be7b51 ret  */
  ESPCHK(0x11be7a90u, _esp0);
  ESP += 4; return;
L_11be7b52:;
  /* 11be7b52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11be7b55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be7b59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11be7b5d pop edi */
  EDI = (pop32());
  /* 11be7b5e ret  */
  ESPCHK(0x11be7a90u, _esp0);
  ESP += 4; return;
L_11be7b5f:;
  /* 11be7b5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11be7b62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be7b66 pop edi */
  EDI = (pop32());
  /* 11be7b67 ret  */
  ESPCHK(0x11be7a90u, _esp0);
  ESP += 4; return;
L_11be7b68:;
  /* 11be7b68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11be7b6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be7b6e pop edi */
  EDI = (pop32());
  /* 11be7b6f ret  */
  ESPCHK(0x11be7a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x11be7b70 (243 bytes, 91 insns) */
void f_11be7b70(void) {
  FTRACE(0x11be7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7b71 mov ebp, esp */
  EBP = (ESP);
  /* 11be7b73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11be7b77 push esi */
  push32((uint32_t)(ESI));
  /* 11be7b78 push edi */
  push32((uint32_t)(EDI));
  /* 11be7b79 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11be7b7c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11be7b7f:;
  /* 11be7b7f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7b83 jne 0x11be7ba3 */
  if (!C.zf) goto L_11be7ba3;
  /* 11be7b85 push 0x11c0c020 */
  push32((uint32_t)(0x11c0c020u));
  /* 11be7b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7b8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11be7b8e push 0x11c0c030 */
  push32((uint32_t)(0x11c0c030u));
  /* 11be7b93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be7b95 call 0x11be3b90 */
  push32(0x11be7b9au); f_11be3b90();
  /* 11be7b9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7b9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7ba0 jne 0x11be7ba3 */
  if (!C.zf) goto L_11be7ba3;
  /* 11be7ba2 int3  */
  x86_unimpl("int3 @ 0x11be7ba2");
L_11be7ba3:;
  /* 11be7ba3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be7ba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be7ba7 jne 0x11be7b7f */
  if (!C.zf) goto L_11be7b7f;
L_11be7ba9:;
  /* 11be7ba9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7bad jne 0x11be7bcd */
  if (!C.zf) goto L_11be7bcd;
  /* 11be7baf push 0x11c0c004 */
  push32((uint32_t)(0x11c0c004u));
  /* 11be7bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7bb6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11be7bb8 push 0x11c0c030 */
  push32((uint32_t)(0x11c0c030u));
  /* 11be7bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11be7bbf call 0x11be3b90 */
  push32(0x11be7bc4u); f_11be3b90();
  /* 11be7bc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7bca jne 0x11be7bcd */
  if (!C.zf) goto L_11be7bcd;
  /* 11be7bcc int3  */
  x86_unimpl("int3 @ 0x11be7bcc");
L_11be7bcd:;
  /* 11be7bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be7bd1 jne 0x11be7ba9 */
  if (!C.zf) goto L_11be7ba9;
  /* 11be7bd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7bd6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11be7bdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7be3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11be7be6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7be9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7bec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11be7bee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7bf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7bf4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11be7bf7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11be7bfa push ecx */
  push32((uint32_t)(ECX));
  /* 11be7bfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be7bfe push edx */
  push32((uint32_t)(EDX));
  /* 11be7bff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c02 push eax */
  push32((uint32_t)(EAX));
  /* 11be7c03 call 0x11beba60 */
  push32(0x11be7c08u); f_11beba60();
  /* 11be7c08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7c0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11be7c0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be7c14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7c17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11be7c1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c20 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7c24 jl 0x11be7c48 */
  if ((C.sf!=C.of)) goto L_11be7c48;
  /* 11be7c26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be7c2b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11be7c2e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11be7c30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be7c36 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11be7c39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be7c3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7c41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be7c46 jmp 0x11be7c59 */
  goto L_11be7c59;
L_11be7c48:;
  /* 11be7c48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be7c4b push edx */
  push32((uint32_t)(EDX));
  /* 11be7c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11be7c4e call 0x11beb7e0 */
  push32(0x11be7c53u); f_11beb7e0();
  /* 11be7c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7c56 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11be7c59:;
  /* 11be7c59 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be7c5c pop edi */
  EDI = (pop32());
  /* 11be7c5d pop esi */
  ESI = (pop32());
  /* 11be7c5e pop ebx */
  EBX = (pop32());
  /* 11be7c5f mov esp, ebp */
  ESP = (EBP);
  /* 11be7c61 pop ebp */
  EBP = (pop32());
  /* 11be7c62 ret  */
  ESPCHK(0x11be7b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x11be7c70 (47 bytes, 17 insns) */
void f_11be7c70(void) {
  FTRACE(0x11be7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7c70 push ecx */
  push32((uint32_t)(ECX));
  /* 11be7c71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7c76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11be7c7a jb 0x11be7c90 */
  if (C.cf) goto L_11be7c90;
L_11be7c7c:;
  /* 11be7c7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7c82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7c87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11be7c89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7c8e jae 0x11be7c7c */
  if (!C.cf) goto L_11be7c7c;
L_11be7c90:;
  /* 11be7c90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7c92 mov eax, esp */
  EAX = (ESP);
  /* 11be7c94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11be7c96 mov esp, ecx */
  ESP = (ECX);
  /* 11be7c98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be7c9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be7c9d push eax */
  push32((uint32_t)(EAX));
  /* 11be7c9e ret  */
  ESPCHK(0x11be7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x11be7ca0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11be7ca0(void) {
  FTRACE(0x11be7ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11be7ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7ca6 push esi */
  push32((uint32_t)(ESI));
  /* 11be7ca7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cab je 0x11be7cb3 */
  if (C.zf) goto L_11be7cb3;
  /* 11be7cad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cb1 jne 0x11be7cb8 */
  if (!C.zf) goto L_11be7cb8;
L_11be7cb3:;
  /* 11be7cb3 jmp 0x11be7e88 */
  goto L_11be7e88;
L_11be7cb8:;
  /* 11be7cb8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cbc je 0x11be7cd4 */
  if (C.zf) goto L_11be7cd4;
  /* 11be7cbe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cc2 je 0x11be7cd4 */
  if (C.zf) goto L_11be7cd4;
  /* 11be7cc4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cc8 je 0x11be7cd4 */
  if (C.zf) goto L_11be7cd4;
  /* 11be7cca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cce jne 0x11be7db1 */
  if (!C.zf) goto L_11be7db1;
L_11be7cd4:;
  /* 11be7cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7cd6 call 0x11be84d0 */
  push32(0x11be7cdbu); f_11be84d0();
  /* 11be7cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7cde cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7ce2 je 0x11be7cea */
  if (C.zf) goto L_11be7cea;
  /* 11be7ce4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7ce8 jne 0x11be7d2f */
  if (!C.zf) goto L_11be7d2f;
L_11be7cea:;
  /* 11be7cea cmp dword ptr [0x11c107cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7cf1 jne 0x11be7d2f */
  if (!C.zf) goto L_11be7d2f;
  /* 11be7cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7cf5 push 0x11be7ed0 */
  push32((uint32_t)(0x11be7ed0u));
  /* 11be7cfa call dword ptr [0x11c1332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1332c))), 0x11be7d00u);
  /* 11be7d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7d03 jne 0x11be7d11 */
  if (!C.zf) goto L_11be7d11;
  /* 11be7d05 mov dword ptr [0x11c107cc], 1 */
  w32((uint32_t)(0x11c107cc), (0x1u));
  /* 11be7d0f jmp 0x11be7d2f */
  goto L_11be7d2f;
L_11be7d11:;
  /* 11be7d11 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11be7d17u);
  /* 11be7d17 mov esi, eax */
  ESI = (EAX);
  /* 11be7d19 call 0x11bec9b0 */
  push32(0x11be7d1eu); f_11bec9b0();
  /* 11be7d1e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11be7d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7d22 call 0x11be8570 */
  push32(0x11be7d27u); f_11be8570();
  /* 11be7d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7d2a jmp 0x11be7e88 */
  goto L_11be7e88;
L_11be7d2f:;
  /* 11be7d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7d32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be7d35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be7d38 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7d3b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be7d3e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7d42 ja 0x11be7da2 */
  if ((!C.cf&&!C.zf)) goto L_11be7da2;
  /* 11be7d44 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be7d47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7d49 mov dl, byte ptr [eax + 0x11be7eaf] */
  DL = (r8((uint32_t)(EAX + 0x11be7eaf)));
  /* 11be7d4f jmp dword ptr [edx*4 + 0x11be7e9b] */
  switch (EDX) {
    case 0: goto L_11be7d56;
    case 1: goto L_11be7d90;
    case 2: goto L_11be7d6a;
    case 3: goto L_11be7d7d;
    case 4: goto L_11be7da2;
    default: x86_unimpl("switch@0x11be7d4f out of table"); return;
  }
L_11be7d56:;
  /* 11be7d56 mov ecx, dword ptr [0x11c107bc] */
  ECX = (r32((uint32_t)(0x11c107bc)));
  /* 11be7d5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be7d5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7d62 mov dword ptr [0x11c107bc], edx */
  w32((uint32_t)(0x11c107bc), (EDX));
  /* 11be7d68 jmp 0x11be7da2 */
  goto L_11be7da2;
L_11be7d6a:;
  /* 11be7d6a mov eax, dword ptr [0x11c107c0] */
  EAX = (r32((uint32_t)(0x11c107c0)));
  /* 11be7d6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7d72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7d75 mov dword ptr [0x11c107c0], ecx */
  w32((uint32_t)(0x11c107c0), (ECX));
  /* 11be7d7b jmp 0x11be7da2 */
  goto L_11be7da2;
L_11be7d7d:;
  /* 11be7d7d mov edx, dword ptr [0x11c107c4] */
  EDX = (r32((uint32_t)(0x11c107c4)));
  /* 11be7d83 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11be7d86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7d89 mov dword ptr [0x11c107c4], eax */
  w32((uint32_t)(0x11c107c4), (EAX));
  /* 11be7d8e jmp 0x11be7da2 */
  goto L_11be7da2;
L_11be7d90:;
  /* 11be7d90 mov ecx, dword ptr [0x11c107c8] */
  ECX = (r32((uint32_t)(0x11c107c8)));
  /* 11be7d96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be7d99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7d9c mov dword ptr [0x11c107c8], edx */
  w32((uint32_t)(0x11c107c8), (EDX));
L_11be7da2:;
  /* 11be7da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7da4 call 0x11be8570 */
  push32(0x11be7da9u); f_11be8570();
  /* 11be7da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7dac jmp 0x11be7e83 */
  goto L_11be7e83;
L_11be7db1:;
  /* 11be7db1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7db5 je 0x11be7dc8 */
  if (C.zf) goto L_11be7dc8;
  /* 11be7db7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7dbb je 0x11be7dc8 */
  if (C.zf) goto L_11be7dc8;
  /* 11be7dbd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7dc1 je 0x11be7dc8 */
  if (C.zf) goto L_11be7dc8;
  /* 11be7dc3 jmp 0x11be7e88 */
  goto L_11be7e88;
L_11be7dc8:;
  /* 11be7dc8 call 0x11be4510 */
  push32(0x11be7dcdu); f_11be4510();
  /* 11be7dcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be7dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7dd3 cmp dword ptr [eax + 0x50], 0x11c0ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11c0ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7dda jne 0x11be7e25 */
  if (!C.zf) goto L_11be7e25;
  /* 11be7ddc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11be7de1 push 0x11c0c03c */
  push32((uint32_t)(0x11c0c03cu));
  /* 11be7de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be7de8 mov ecx, dword ptr [0x11c0ec80] */
  ECX = (r32((uint32_t)(0x11c0ec80)));
  /* 11be7dee push ecx */
  push32((uint32_t)(ECX));
  /* 11be7def call 0x11be4ad0 */
  push32(0x11be7df4u); f_11be4ad0();
  /* 11be7df4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7dfa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11be7dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7e00 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7e04 je 0x11be7e23 */
  if (C.zf) goto L_11be7e23;
  /* 11be7e06 mov ecx, dword ptr [0x11c0ec80] */
  ECX = (r32((uint32_t)(0x11c0ec80)));
  /* 11be7e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11be7e0d push 0x11c0ec00 */
  push32((uint32_t)(0x11c0ec00u));
  /* 11be7e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7e15 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11be7e18 push eax */
  push32((uint32_t)(EAX));
  /* 11be7e19 call 0x11beb3b0 */
  push32(0x11be7e1eu); f_11beb3b0();
  /* 11be7e1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7e21 jmp 0x11be7e25 */
  goto L_11be7e25;
L_11be7e23:;
  /* 11be7e23 jmp 0x11be7e88 */
  goto L_11be7e88;
L_11be7e25:;
  /* 11be7e25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7e28 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11be7e2b push edx */
  push32((uint32_t)(EDX));
  /* 11be7e2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7e2f push eax */
  push32((uint32_t)(EAX));
  /* 11be7e30 call 0x11be81b0 */
  push32(0x11be7e35u); f_11be81b0();
  /* 11be7e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7e38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be7e3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7e3f jne 0x11be7e43 */
  if (!C.zf) goto L_11be7e43;
  /* 11be7e41 jmp 0x11be7e88 */
  goto L_11be7e88;
L_11be7e43:;
  /* 11be7e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7e46 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be7e49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11be7e4c:;
  /* 11be7e4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7e4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be7e52 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7e55 jne 0x11be7e83 */
  if (!C.zf) goto L_11be7e83;
  /* 11be7e57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7e5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be7e5d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be7e60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7e63 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7e66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be7e69 mov edx, dword ptr [0x11c0ec84] */
  EDX = (r32((uint32_t)(0x11c0ec84)));
  /* 11be7e6f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be7e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7e75 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11be7e78 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7e7a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7e7d jb 0x11be7e81 */
  if (C.cf) goto L_11be7e81;
  /* 11be7e7f jmp 0x11be7e83 */
  goto L_11be7e83;
L_11be7e81:;
  /* 11be7e81 jmp 0x11be7e4c */
  goto L_11be7e4c;
L_11be7e83:;
  /* 11be7e83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7e86 jmp 0x11be7e96 */
  goto L_11be7e96;
L_11be7e88:;
  /* 11be7e88 call 0x11bec9a0 */
  push32(0x11be7e8du); f_11bec9a0();
  /* 11be7e8d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11be7e93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11be7e96:;
  /* 11be7e96 pop esi */
  ESI = (pop32());
  /* 11be7e97 mov esp, ebp */
  ESP = (EBP);
  /* 11be7e99 pop ebp */
  EBP = (pop32());
  /* 11be7e9a ret  */
  ESPCHK(0x11be7ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x11be7ed0 (146 bytes, 45 insns) */
void f_11be7ed0(void) {
  FTRACE(0x11be7ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11be7ed3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7ed8 call 0x11be84d0 */
  push32(0x11be7eddu); f_11be84d0();
  /* 11be7edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7ee0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7ee4 jne 0x11be7efe */
  if (!C.zf) goto L_11be7efe;
  /* 11be7ee6 mov dword ptr [ebp - 8], 0x11c107bc */
  w32((uint32_t)(EBP + -0x8), (0x11c107bcu));
  /* 11be7eed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7ef0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be7ef2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be7ef5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11be7efc jmp 0x11be7f14 */
  goto L_11be7f14;
L_11be7efe:;
  /* 11be7efe mov dword ptr [ebp - 8], 0x11c107c0 */
  w32((uint32_t)(EBP + -0x8), (0x11c107c0u));
  /* 11be7f05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7f08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be7f0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7f0d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11be7f14:;
  /* 11be7f14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7f18 jne 0x11be7f28 */
  if (!C.zf) goto L_11be7f28;
  /* 11be7f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7f1c call 0x11be8570 */
  push32(0x11be7f21u); f_11be8570();
  /* 11be7f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be7f26 jmp 0x11be7f5c */
  goto L_11be7f5c;
L_11be7f28:;
  /* 11be7f28 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7f2c je 0x11be7f4d */
  if (C.zf) goto L_11be7f4d;
  /* 11be7f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be7f31 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11be7f37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7f39 call 0x11be8570 */
  push32(0x11be7f3eu); f_11be8570();
  /* 11be7f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7f41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be7f44 push edx */
  push32((uint32_t)(EDX));
  /* 11be7f45 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11be7f48u);
  /* 11be7f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7f4b jmp 0x11be7f57 */
  goto L_11be7f57;
L_11be7f4d:;
  /* 11be7f4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11be7f4f call 0x11be8570 */
  push32(0x11be7f54u); f_11be8570();
  /* 11be7f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be7f57:;
  /* 11be7f57 mov eax, 1 */
  EAX = (0x1u);
L_11be7f5c:;
  /* 11be7f5c mov esp, ebp */
  ESP = (EBP);
  /* 11be7f5e pop ebp */
  EBP = (pop32());
  /* 11be7f5f ret 4 */
  ESPCHK(0x11be7ed0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007f70 @ 0x11be7f70 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11be7f70(void) {
  FTRACE(0x11be7f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be7f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be7f71 mov ebp, esp */
  EBP = (ESP);
  /* 11be7f73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7f76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11be7f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be7f80 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11be7f83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be7f86 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be7f89 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11be7f8c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be7f90 ja 0x11be803e */
  if ((!C.cf&&!C.zf)) goto L_11be803e;
  /* 11be7f96 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be7f99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be7f9b mov dl, byte ptr [eax + 0x11be8192] */
  DL = (r8((uint32_t)(EAX + 0x11be8192)));
  /* 11be7fa1 jmp dword ptr [edx*4 + 0x11be817a] */
  switch (EDX) {
    case 0: goto L_11be7fa8;
    case 1: goto L_11be8013;
    case 2: goto L_11be7ff9;
    case 3: goto L_11be7fc5;
    case 4: goto L_11be7fdf;
    case 5: goto L_11be803e;
    default: x86_unimpl("switch@0x11be7fa1 out of table"); return;
  }
L_11be7fa8:;
  /* 11be7fa8 mov dword ptr [ebp - 0x18], 0x11c107bc */
  w32((uint32_t)(EBP + -0x18), (0x11c107bcu));
  /* 11be7faf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be7fb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be7fb4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be7fb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7fba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7fbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7fc0 jmp 0x11be8046 */
  goto L_11be8046;
L_11be7fc5:;
  /* 11be7fc5 mov dword ptr [ebp - 0x18], 0x11c107c0 */
  w32((uint32_t)(EBP + -0x18), (0x11c107c0u));
  /* 11be7fcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be7fcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be7fd1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be7fd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7fd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7fda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7fdd jmp 0x11be8046 */
  goto L_11be8046;
L_11be7fdf:;
  /* 11be7fdf mov dword ptr [ebp - 0x18], 0x11c107c4 */
  w32((uint32_t)(EBP + -0x18), (0x11c107c4u));
  /* 11be7fe6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be7fe9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be7feb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be7fee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be7ff1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be7ff4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be7ff7 jmp 0x11be8046 */
  goto L_11be8046;
L_11be7ff9:;
  /* 11be7ff9 mov dword ptr [ebp - 0x18], 0x11c107c8 */
  w32((uint32_t)(EBP + -0x18), (0x11c107c8u));
  /* 11be8000 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be8003 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be8005 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be8008 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be800b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be800e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be8011 jmp 0x11be8046 */
  goto L_11be8046;
L_11be8013:;
  /* 11be8013 call 0x11be4510 */
  push32(0x11be8018u); f_11be4510();
  /* 11be8018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be801b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be801e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11be8021 push edx */
  push32((uint32_t)(EDX));
  /* 11be8022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8025 push eax */
  push32((uint32_t)(EAX));
  /* 11be8026 call 0x11be81b0 */
  push32(0x11be802bu); f_11be81b0();
  /* 11be802b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be802e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8031 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be8034 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be8037 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be8039 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be803c jmp 0x11be8046 */
  goto L_11be8046;
L_11be803e:;
  /* 11be803e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be8041 jmp 0x11be8176 */
  goto L_11be8176;
L_11be8046:;
  /* 11be8046 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be804a je 0x11be8056 */
  if (C.zf) goto L_11be8056;
  /* 11be804c push 1 */
  push32((uint32_t)(0x1u));
  /* 11be804e call 0x11be84d0 */
  push32(0x11be8053u); f_11be84d0();
  /* 11be8053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8056:;
  /* 11be8056 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be805a jne 0x11be8073 */
  if (!C.zf) goto L_11be8073;
  /* 11be805c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8060 je 0x11be806c */
  if (C.zf) goto L_11be806c;
  /* 11be8062 push 1 */
  push32((uint32_t)(0x1u));
  /* 11be8064 call 0x11be8570 */
  push32(0x11be8069u); f_11be8570();
  /* 11be8069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be806c:;
  /* 11be806c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be806e jmp 0x11be8176 */
  goto L_11be8176;
L_11be8073:;
  /* 11be8073 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8077 jne 0x11be8090 */
  if (!C.zf) goto L_11be8090;
  /* 11be8079 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be807d je 0x11be8089 */
  if (C.zf) goto L_11be8089;
  /* 11be807f push 1 */
  push32((uint32_t)(0x1u));
  /* 11be8081 call 0x11be8570 */
  push32(0x11be8086u); f_11be8570();
  /* 11be8086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8089:;
  /* 11be8089 push 3 */
  push32((uint32_t)(0x3u));
  /* 11be808b call 0x11be4290 */
  push32(0x11be8090u); f_11be4290();
L_11be8090:;
  /* 11be8090 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8094 je 0x11be80a2 */
  if (C.zf) goto L_11be80a2;
  /* 11be8096 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be809a je 0x11be80a2 */
  if (C.zf) goto L_11be80a2;
  /* 11be809c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be80a0 jne 0x11be80ce */
  if (!C.zf) goto L_11be80ce;
L_11be80a2:;
  /* 11be80a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be80a5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11be80a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11be80ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be80ae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11be80b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be80b9 jne 0x11be80ce */
  if (!C.zf) goto L_11be80ce;
  /* 11be80bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be80be mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11be80c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be80c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be80c7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11be80ce:;
  /* 11be80ce cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be80d2 jne 0x11be8110 */
  if (!C.zf) goto L_11be8110;
  /* 11be80d4 mov eax, dword ptr [0x11c0ec78] */
  EAX = (r32((uint32_t)(0x11c0ec78)));
  /* 11be80d9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be80dc jmp 0x11be80e7 */
  goto L_11be80e7;
L_11be80de:;
  /* 11be80de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be80e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be80e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11be80e7:;
  /* 11be80e7 mov edx, dword ptr [0x11c0ec78] */
  EDX = (r32((uint32_t)(0x11c0ec78)));
  /* 11be80ed add edx, dword ptr [0x11c0ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be80f3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be80f6 jge 0x11be810e */
  if ((C.sf==C.of)) goto L_11be810e;
  /* 11be80f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be80fb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be80fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8101 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11be8104 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11be810c jmp 0x11be80de */
  goto L_11be80de;
L_11be810e:;
  /* 11be810e jmp 0x11be8119 */
  goto L_11be8119;
L_11be8110:;
  /* 11be8110 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be8113 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11be8119:;
  /* 11be8119 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be811d je 0x11be8129 */
  if (C.zf) goto L_11be8129;
  /* 11be811f push 1 */
  push32((uint32_t)(0x1u));
  /* 11be8121 call 0x11be8570 */
  push32(0x11be8126u); f_11be8570();
  /* 11be8126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8129:;
  /* 11be8129 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be812d jne 0x11be8140 */
  if (!C.zf) goto L_11be8140;
  /* 11be812f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8132 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11be8135 push edx */
  push32((uint32_t)(EDX));
  /* 11be8136 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be8138 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11be813bu);
  /* 11be813b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be813e jmp 0x11be814a */
  goto L_11be814a;
L_11be8140:;
  /* 11be8140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8143 push eax */
  push32((uint32_t)(EAX));
  /* 11be8144 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11be8147u);
  /* 11be8147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be814a:;
  /* 11be814a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be814e je 0x11be815c */
  if (C.zf) goto L_11be815c;
  /* 11be8150 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8154 je 0x11be815c */
  if (C.zf) goto L_11be815c;
  /* 11be8156 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be815a jne 0x11be8174 */
  if (!C.zf) goto L_11be8174;
L_11be815c:;
  /* 11be815c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be815f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be8162 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11be8165 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8169 jne 0x11be8174 */
  if (!C.zf) goto L_11be8174;
  /* 11be816b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be816e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8171 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11be8174:;
  /* 11be8174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be8176:;
  /* 11be8176 mov esp, ebp */
  ESP = (EBP);
  /* 11be8178 pop ebp */
  EBP = (pop32());
  /* 11be8179 ret  */
  ESPCHK(0x11be7f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x11be81b0 (91 bytes, 35 insns) */
void f_11be81b0(void) {
  FTRACE(0x11be81b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be81b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be81b1 mov ebp, esp */
  EBP = (ESP);
  /* 11be81b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be81b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be81b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be81ba:;
  /* 11be81ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be81bd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be81c0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be81c3 je 0x11be81e3 */
  if (C.zf) goto L_11be81e3;
  /* 11be81c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be81c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be81cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be81ce mov ecx, dword ptr [0x11c0ec84] */
  ECX = (r32((uint32_t)(0x11c0ec84)));
  /* 11be81d4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be81d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be81da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be81dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be81df jae 0x11be81e3 */
  if (!C.cf) goto L_11be81e3;
  /* 11be81e1 jmp 0x11be81ba */
  goto L_11be81ba;
L_11be81e3:;
  /* 11be81e3 mov eax, dword ptr [0x11c0ec84] */
  EAX = (r32((uint32_t)(0x11c0ec84)));
  /* 11be81e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be81eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be81ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be81f0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be81f3 jae 0x11be8205 */
  if (!C.cf) goto L_11be8205;
  /* 11be81f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be81f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be81fb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be81fe jne 0x11be8205 */
  if (!C.zf) goto L_11be8205;
  /* 11be8200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8203 jmp 0x11be8207 */
  goto L_11be8207;
L_11be8205:;
  /* 11be8205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be8207:;
  /* 11be8207 mov esp, ebp */
  ESP = (EBP);
  /* 11be8209 pop ebp */
  EBP = (pop32());
  /* 11be820a ret  */
  ESPCHK(0x11be81b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x11be8210 (13 bytes, 6 insns) */
void f_11be8210(void) {
  FTRACE(0x11be8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8210 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8211 mov ebp, esp */
  EBP = (ESP);
  /* 11be8213 call 0x11be4510 */
  push32(0x11be8218u); f_11be4510();
  /* 11be8218 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be821b pop ebp */
  EBP = (pop32());
  /* 11be821c ret  */
  ESPCHK(0x11be8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x11be8220 (13 bytes, 6 insns) */
void f_11be8220(void) {
  FTRACE(0x11be8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8220 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8221 mov ebp, esp */
  EBP = (ESP);
  /* 11be8223 call 0x11be4510 */
  push32(0x11be8228u); f_11be4510();
  /* 11be8228 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be822b pop ebp */
  EBP = (pop32());
  /* 11be822c ret  */
  ESPCHK(0x11be8220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x11be8230 (187 bytes, 54 insns) */
void f_11be8230(void) {
  FTRACE(0x11be8230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8230 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8231 mov ebp, esp */
  EBP = (ESP);
  /* 11be8233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8236 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be823d cmp dword ptr [0x11c107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8244 jne 0x11be82a3 */
  if (!C.zf) goto L_11be82a3;
  /* 11be8246 push 0x11c0b468 */
  push32((uint32_t)(0x11c0b468u));
  /* 11be824b call dword ptr [0x11c13358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13358))), 0x11be8251u);
  /* 11be8251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be8254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8258 je 0x11be8277 */
  if (C.zf) goto L_11be8277;
  /* 11be825a push 0x11c0c06c */
  push32((uint32_t)(0x11c0c06cu));
  /* 11be825f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8262 push eax */
  push32((uint32_t)(EAX));
  /* 11be8263 call dword ptr [0x11c13354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13354))), 0x11be8269u);
  /* 11be8269 mov dword ptr [0x11c107d0], eax */
  w32((uint32_t)(0x11c107d0), (EAX));
  /* 11be826e cmp dword ptr [0x11c107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8275 jne 0x11be827b */
  if (!C.zf) goto L_11be827b;
L_11be8277:;
  /* 11be8277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8279 jmp 0x11be82e7 */
  goto L_11be82e7;
L_11be827b:;
  /* 11be827b push 0x11c0c05c */
  push32((uint32_t)(0x11c0c05cu));
  /* 11be8280 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8283 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8284 call dword ptr [0x11c13354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13354))), 0x11be828au);
  /* 11be828a mov dword ptr [0x11c107d4], eax */
  w32((uint32_t)(0x11c107d4), (EAX));
  /* 11be828f push 0x11c0c048 */
  push32((uint32_t)(0x11c0c048u));
  /* 11be8294 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8297 push edx */
  push32((uint32_t)(EDX));
  /* 11be8298 call dword ptr [0x11c13354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13354))), 0x11be829eu);
  /* 11be829e mov dword ptr [0x11c107d8], eax */
  w32((uint32_t)(0x11c107d8), (EAX));
L_11be82a3:;
  /* 11be82a3 cmp dword ptr [0x11c107d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be82aa je 0x11be82b5 */
  if (C.zf) goto L_11be82b5;
  /* 11be82ac call dword ptr [0x11c107d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c107d4))), 0x11be82b2u);
  /* 11be82b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be82b5:;
  /* 11be82b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be82b9 je 0x11be82d1 */
  if (C.zf) goto L_11be82d1;
  /* 11be82bb cmp dword ptr [0x11c107d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c107d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be82c2 je 0x11be82d1 */
  if (C.zf) goto L_11be82d1;
  /* 11be82c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be82c7 push eax */
  push32((uint32_t)(EAX));
  /* 11be82c8 call dword ptr [0x11c107d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c107d8))), 0x11be82ceu);
  /* 11be82ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be82d1:;
  /* 11be82d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be82d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11be82d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be82d8 push edx */
  push32((uint32_t)(EDX));
  /* 11be82d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be82dc push eax */
  push32((uint32_t)(EAX));
  /* 11be82dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be82e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11be82e1 call dword ptr [0x11c107d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c107d0))), 0x11be82e7u);
L_11be82e7:;
  /* 11be82e7 mov esp, ebp */
  ESP = (EBP);
  /* 11be82e9 pop ebp */
  EBP = (pop32());
  /* 11be82ea ret  */
  ESPCHK(0x11be8230u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11be82f0 (254 bytes, 109 insns) */
void f_11be82f0(void) {
  FTRACE(0x11be82f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be82f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11be82f4 push edi */
  push32((uint32_t)(EDI));
  /* 11be82f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be82f7 je 0x11be8373 */
  if (C.zf) goto L_11be8373;
  /* 11be82f9 push esi */
  push32((uint32_t)(ESI));
  /* 11be82fa push ebx */
  push32((uint32_t)(EBX));
  /* 11be82fb mov ebx, ecx */
  EBX = (ECX);
  /* 11be82fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11be8301 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11be8307 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11be830b jne 0x11be8314 */
  if (!C.zf) goto L_11be8314;
  /* 11be830d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11be8310 jne 0x11be8381 */
  if (!C.zf) goto L_11be8381;
  /* 11be8312 jmp 0x11be8335 */
  goto L_11be8335;
L_11be8314:;
  /* 11be8314 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11be8316 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11be8317 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be8319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be831a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be831b je 0x11be8342 */
  if (C.zf) goto L_11be8342;
  /* 11be831d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be831f je 0x11be834a */
  if (C.zf) goto L_11be834a;
  /* 11be8321 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11be8327 jne 0x11be8314 */
  if (!C.zf) goto L_11be8314;
  /* 11be8329 mov ebx, ecx */
  EBX = (ECX);
  /* 11be832b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11be832e jne 0x11be8381 */
  if (!C.zf) goto L_11be8381;
L_11be8330:;
  /* 11be8330 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11be8333 je 0x11be8342 */
  if (C.zf) goto L_11be8342;
L_11be8335:;
  /* 11be8335 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11be8337 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11be8338 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be833a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be833b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11be833d je 0x11be836e */
  if (C.zf) goto L_11be836e;
  /* 11be833f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11be8340 jne 0x11be8335 */
  if (!C.zf) goto L_11be8335;
L_11be8342:;
  /* 11be8342 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11be8346 pop ebx */
  EBX = (pop32());
  /* 11be8347 pop esi */
  ESI = (pop32());
  /* 11be8348 pop edi */
  EDI = (pop32());
  /* 11be8349 ret  */
  ESPCHK(0x11be82f0u, _esp0);
  ESP += 4; return;
L_11be834a:;
  /* 11be834a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11be8350 je 0x11be8364 */
  if (C.zf) goto L_11be8364;
L_11be8352:;
  /* 11be8352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be8354 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be8355 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be8356 je 0x11be83e6 */
  if (C.zf) goto L_11be83e6;
  /* 11be835c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11be8362 jne 0x11be8352 */
  if (!C.zf) goto L_11be8352;
L_11be8364:;
  /* 11be8364 mov ebx, ecx */
  EBX = (ECX);
  /* 11be8366 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11be8369 jne 0x11be83d7 */
  if (!C.zf) goto L_11be83d7;
L_11be836b:;
  /* 11be836b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be836d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11be836e:;
  /* 11be836e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11be836f jne 0x11be836b */
  if (!C.zf) goto L_11be836b;
  /* 11be8371 pop ebx */
  EBX = (pop32());
  /* 11be8372 pop esi */
  ESI = (pop32());
L_11be8373:;
  /* 11be8373 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be8377 pop edi */
  EDI = (pop32());
  /* 11be8378 ret  */
  ESPCHK(0x11be82f0u, _esp0);
  ESP += 4; return;
L_11be8379:;
  /* 11be8379 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be837b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11be837e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be837f je 0x11be8330 */
  if (C.zf) goto L_11be8330;
L_11be8381:;
  /* 11be8381 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11be8386 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11be8388 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be838a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be838d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be838f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11be8391 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8394 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11be8399 je 0x11be8379 */
  if (C.zf) goto L_11be8379;
  /* 11be839b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11be839d je 0x11be83cb */
  if (C.zf) goto L_11be83cb;
  /* 11be839f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11be83a1 je 0x11be83c1 */
  if (C.zf) goto L_11be83c1;
  /* 11be83a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11be83a9 je 0x11be83b7 */
  if (C.zf) goto L_11be83b7;
  /* 11be83ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11be83b1 jne 0x11be8379 */
  if (!C.zf) goto L_11be8379;
  /* 11be83b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be83b5 jmp 0x11be83cf */
  goto L_11be83cf;
L_11be83b7:;
  /* 11be83b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be83bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be83bf jmp 0x11be83cf */
  goto L_11be83cf;
L_11be83c1:;
  /* 11be83c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be83c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11be83c9 jmp 0x11be83cf */
  goto L_11be83cf;
L_11be83cb:;
  /* 11be83cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11be83cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11be83cf:;
  /* 11be83cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11be83d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be83d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be83d5 je 0x11be83e1 */
  if (C.zf) goto L_11be83e1;
L_11be83d7:;
  /* 11be83d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be83d9:;
  /* 11be83d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11be83db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11be83de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be83df jne 0x11be83d9 */
  if (!C.zf) goto L_11be83d9;
L_11be83e1:;
  /* 11be83e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11be83e4 jne 0x11be836b */
  if (!C.zf) goto L_11be836b;
L_11be83e6:;
  /* 11be83e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11be83ea pop ebx */
  EBX = (pop32());
  /* 11be83eb pop esi */
  ESI = (pop32());
  /* 11be83ec pop edi */
  EDI = (pop32());
  /* 11be83ed ret  */
  ESPCHK(0x11be82f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x11be83f0 (55 bytes, 16 insns) */
void f_11be83f0(void) {
  FTRACE(0x11be83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be83f1 mov ebp, esp */
  EBP = (ESP);
  /* 11be83f3 mov eax, dword ptr [0x11c0eb84] */
  EAX = (r32((uint32_t)(0x11c0eb84)));
  /* 11be83f8 push eax */
  push32((uint32_t)(EAX));
  /* 11be83f9 call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11be83ffu);
  /* 11be83ff mov ecx, dword ptr [0x11c0eb74] */
  ECX = (r32((uint32_t)(0x11c0eb74)));
  /* 11be8405 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8406 call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11be840cu);
  /* 11be840c mov edx, dword ptr [0x11c0eb64] */
  EDX = (r32((uint32_t)(0x11c0eb64)));
  /* 11be8412 push edx */
  push32((uint32_t)(EDX));
  /* 11be8413 call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11be8419u);
  /* 11be8419 mov eax, dword ptr [0x11c0eb44] */
  EAX = (r32((uint32_t)(0x11c0eb44)));
  /* 11be841e push eax */
  push32((uint32_t)(EAX));
  /* 11be841f call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11be8425u);
  /* 11be8425 pop ebp */
  EBP = (pop32());
  /* 11be8426 ret  */
  ESPCHK(0x11be83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x11be8430 (159 bytes, 47 insns) */
void f_11be8430(void) {
  FTRACE(0x11be8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8430 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8431 mov ebp, esp */
  EBP = (ESP);
  /* 11be8433 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be843b jmp 0x11be8446 */
  goto L_11be8446;
L_11be843d:;
  /* 11be843d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be8446:;
  /* 11be8446 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be844a jge 0x11be8499 */
  if ((C.sf==C.of)) goto L_11be8499;
  /* 11be844c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be844f cmp dword ptr [ecx*4 + 0x11c0eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11c0eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8457 je 0x11be8497 */
  if (C.zf) goto L_11be8497;
  /* 11be8459 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be845d je 0x11be8497 */
  if (C.zf) goto L_11be8497;
  /* 11be845f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8463 je 0x11be8497 */
  if (C.zf) goto L_11be8497;
  /* 11be8465 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8469 je 0x11be8497 */
  if (C.zf) goto L_11be8497;
  /* 11be846b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be846f je 0x11be8497 */
  if (C.zf) goto L_11be8497;
  /* 11be8471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8474 mov eax, dword ptr [edx*4 + 0x11c0eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c0eb40)));
  /* 11be847b push eax */
  push32((uint32_t)(EAX));
  /* 11be847c call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be8482u);
  /* 11be8482 push 2 */
  push32((uint32_t)(0x2u));
  /* 11be8484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8487 mov edx, dword ptr [ecx*4 + 0x11c0eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0eb40)));
  /* 11be848e push edx */
  push32((uint32_t)(EDX));
  /* 11be848f call 0x11be5560 */
  push32(0x11be8494u); f_11be5560();
  /* 11be8494 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8497:;
  /* 11be8497 jmp 0x11be843d */
  goto L_11be843d;
L_11be8499:;
  /* 11be8499 mov eax, dword ptr [0x11c0eb64] */
  EAX = (r32((uint32_t)(0x11c0eb64)));
  /* 11be849e push eax */
  push32((uint32_t)(EAX));
  /* 11be849f call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be84a5u);
  /* 11be84a5 mov ecx, dword ptr [0x11c0eb74] */
  ECX = (r32((uint32_t)(0x11c0eb74)));
  /* 11be84ab push ecx */
  push32((uint32_t)(ECX));
  /* 11be84ac call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be84b2u);
  /* 11be84b2 mov edx, dword ptr [0x11c0eb84] */
  EDX = (r32((uint32_t)(0x11c0eb84)));
  /* 11be84b8 push edx */
  push32((uint32_t)(EDX));
  /* 11be84b9 call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be84bfu);
  /* 11be84bf mov eax, dword ptr [0x11c0eb44] */
  EAX = (r32((uint32_t)(0x11c0eb44)));
  /* 11be84c4 push eax */
  push32((uint32_t)(EAX));
  /* 11be84c5 call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11be84cbu);
  /* 11be84cb mov esp, ebp */
  ESP = (EBP);
  /* 11be84cd pop ebp */
  EBP = (pop32());
  /* 11be84ce ret  */
  ESPCHK(0x11be8430u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x11be84d0 (151 bytes, 46 insns) */
void f_11be84d0(void) {
  FTRACE(0x11be84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be84d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be84d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be84d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be84d7 cmp dword ptr [eax*4 + 0x11c0eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c0eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be84df jne 0x11be8552 */
  if (!C.zf) goto L_11be8552;
  /* 11be84e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11be84e6 push 0x11c0c078 */
  push32((uint32_t)(0x11c0c078u));
  /* 11be84eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11be84ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11be84ef call 0x11be4ad0 */
  push32(0x11be84f4u); f_11be4ad0();
  /* 11be84f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be84f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be84fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be84fe jne 0x11be850a */
  if (!C.zf) goto L_11be850a;
  /* 11be8500 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11be8502 call 0x11be3a40 */
  push32(0x11be8507u); f_11be3a40();
  /* 11be8507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be850a:;
  /* 11be850a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11be850c call 0x11be84d0 */
  push32(0x11be8511u); f_11be84d0();
  /* 11be8511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8517 cmp dword ptr [ecx*4 + 0x11c0eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11c0eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be851f jne 0x11be853a */
  if (!C.zf) goto L_11be853a;
  /* 11be8521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8524 push edx */
  push32((uint32_t)(EDX));
  /* 11be8525 call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11be852bu);
  /* 11be852b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be852e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8531 mov dword ptr [eax*4 + 0x11c0eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x11c0eb40), (ECX));
  /* 11be8538 jmp 0x11be8548 */
  goto L_11be8548;
L_11be853a:;
  /* 11be853a push 2 */
  push32((uint32_t)(0x2u));
  /* 11be853c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be853f push edx */
  push32((uint32_t)(EDX));
  /* 11be8540 call 0x11be5560 */
  push32(0x11be8545u); f_11be5560();
  /* 11be8545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8548:;
  /* 11be8548 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11be854a call 0x11be8570 */
  push32(0x11be854fu); f_11be8570();
  /* 11be854f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8552:;
  /* 11be8552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8555 mov ecx, dword ptr [eax*4 + 0x11c0eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0eb40)));
  /* 11be855c push ecx */
  push32((uint32_t)(ECX));
  /* 11be855d call dword ptr [0x11c13324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13324))), 0x11be8563u);
  /* 11be8563 mov esp, ebp */
  ESP = (EBP);
  /* 11be8565 pop ebp */
  EBP = (pop32());
  /* 11be8566 ret  */
  ESPCHK(0x11be84d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x11be8570 (22 bytes, 8 insns) */
void f_11be8570(void) {
  FTRACE(0x11be8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8570 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8571 mov ebp, esp */
  EBP = (ESP);
  /* 11be8573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8576 mov ecx, dword ptr [eax*4 + 0x11c0eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0eb40)));
  /* 11be857d push ecx */
  push32((uint32_t)(ECX));
  /* 11be857e call dword ptr [0x11c13320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13320))), 0x11be8584u);
  /* 11be8584 pop ebp */
  EBP = (pop32());
  /* 11be8585 ret  */
  ESPCHK(0x11be8570u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x11be8590 (26 bytes, 10 insns) */
void f_11be8590(void) {
  FTRACE(0x11be8590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8590 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8591 mov ebp, esp */
  EBP = (ESP);
  /* 11be8593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8596 push eax */
  push32((uint32_t)(EAX));
  /* 11be8597 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8599 call dword ptr [0x11c1331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1331c))), 0x11be859fu);
  /* 11be859f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11be85a4 call dword ptr [0x11c13364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13364))), 0x11be85aau);
  /* 11be85aa pop ebp */
  EBP = (pop32());
  /* 11be85ab ret  */
  ESPCHK(0x11be8590u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11be85b0 (446 bytes, 130 insns) */
void f_11be85b0(void) {
  FTRACE(0x11be85b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be85b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be85b1 mov ebp, esp */
  EBP = (ESP);
  /* 11be85b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be85b6 call 0x11be4510 */
  push32(0x11be85bbu); f_11be4510();
  /* 11be85bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be85be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be85c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11be85c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11be85c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be85c8 push edx */
  push32((uint32_t)(EDX));
  /* 11be85c9 call 0x11be8770 */
  push32(0x11be85ceu); f_11be8770();
  /* 11be85ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be85d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be85d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be85d8 je 0x11be85e3 */
  if (C.zf) goto L_11be85e3;
  /* 11be85da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be85dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be85e1 jne 0x11be85f2 */
  if (!C.zf) goto L_11be85f2;
L_11be85e3:;
  /* 11be85e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be85e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11be85e7 call dword ptr [0x11c13318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13318))), 0x11be85edu);
  /* 11be85ed jmp 0x11be876a */
  goto L_11be876a;
L_11be85f2:;
  /* 11be85f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be85f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be85f9 jne 0x11be860f */
  if (!C.zf) goto L_11be860f;
  /* 11be85fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be85fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11be8605 mov eax, 1 */
  EAX = (0x1u);
  /* 11be860a jmp 0x11be876a */
  goto L_11be876a;
L_11be860f:;
  /* 11be860f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8612 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8616 jne 0x11be8620 */
  if (!C.zf) goto L_11be8620;
  /* 11be8618 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be861b jmp 0x11be876a */
  goto L_11be876a;
L_11be8620:;
  /* 11be8620 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8623 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11be8626 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be8629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be862c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11be862f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11be8632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8635 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8638 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11be863b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be863e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8642 jne 0x11be8747 */
  if (!C.zf) goto L_11be8747;
  /* 11be8648 mov eax, dword ptr [0x11c0ec78] */
  EAX = (r32((uint32_t)(0x11c0ec78)));
  /* 11be864d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11be8650 jmp 0x11be865b */
  goto L_11be865b;
L_11be8652:;
  /* 11be8652 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be8655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8658 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11be865b:;
  /* 11be865b mov edx, dword ptr [0x11c0ec78] */
  EDX = (r32((uint32_t)(0x11c0ec78)));
  /* 11be8661 add edx, dword ptr [0x11c0ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8667 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be866a jge 0x11be8682 */
  if ((C.sf==C.of)) goto L_11be8682;
  /* 11be866c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be866f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be8672 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8675 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11be8678 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11be8680 jmp 0x11be8652 */
  goto L_11be8652;
L_11be8682:;
  /* 11be8682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8685 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11be8688 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be868b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be868e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8694 jne 0x11be86a5 */
  if (!C.zf) goto L_11be86a5;
  /* 11be8696 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8699 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11be86a0 jmp 0x11be872d */
  goto L_11be872d;
L_11be86a5:;
  /* 11be86a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be86a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be86ae jne 0x11be86bc */
  if (!C.zf) goto L_11be86bc;
  /* 11be86b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be86b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11be86ba jmp 0x11be872d */
  goto L_11be872d;
L_11be86bc:;
  /* 11be86bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be86bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be86c5 jne 0x11be86d3 */
  if (!C.zf) goto L_11be86d3;
  /* 11be86c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be86ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11be86d1 jmp 0x11be872d */
  goto L_11be872d;
L_11be86d3:;
  /* 11be86d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be86d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be86dc jne 0x11be86ea */
  if (!C.zf) goto L_11be86ea;
  /* 11be86de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be86e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11be86e8 jmp 0x11be872d */
  goto L_11be872d;
L_11be86ea:;
  /* 11be86ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be86ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be86f3 jne 0x11be8701 */
  if (!C.zf) goto L_11be8701;
  /* 11be86f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be86f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11be86ff jmp 0x11be872d */
  goto L_11be872d;
L_11be8701:;
  /* 11be8701 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8704 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be870a jne 0x11be8718 */
  if (!C.zf) goto L_11be8718;
  /* 11be870c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be870f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11be8716 jmp 0x11be872d */
  goto L_11be872d;
L_11be8718:;
  /* 11be8718 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be871b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8721 jne 0x11be872d */
  if (!C.zf) goto L_11be872d;
  /* 11be8723 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8726 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11be872d:;
  /* 11be872d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8730 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11be8733 push edx */
  push32((uint32_t)(EDX));
  /* 11be8734 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be8736 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11be8739u);
  /* 11be8739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be873c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be873f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be8742 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11be8745 jmp 0x11be875e */
  goto L_11be875e;
L_11be8747:;
  /* 11be8747 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be874a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11be8751 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8754 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be8757 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8758 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11be875bu);
  /* 11be875b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be875e:;
  /* 11be875e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8761 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be8764 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11be8767 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11be876a:;
  /* 11be876a mov esp, ebp */
  ESP = (EBP);
  /* 11be876c pop ebp */
  EBP = (pop32());
  /* 11be876d ret  */
  ESPCHK(0x11be85b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x11be8770 (89 bytes, 35 insns) */
void f_11be8770(void) {
  FTRACE(0x11be8770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8770 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8771 mov ebp, esp */
  EBP = (ESP);
  /* 11be8773 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8774 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8777 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11be877a:;
  /* 11be877a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be877d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be877f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8782 je 0x11be87a2 */
  if (C.zf) goto L_11be87a2;
  /* 11be8784 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8787 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be878a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be878d mov ecx, dword ptr [0x11c0ec84] */
  ECX = (r32((uint32_t)(0x11c0ec84)));
  /* 11be8793 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be8796 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8799 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be879b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be879e jae 0x11be87a2 */
  if (!C.cf) goto L_11be87a2;
  /* 11be87a0 jmp 0x11be877a */
  goto L_11be877a;
L_11be87a2:;
  /* 11be87a2 mov eax, dword ptr [0x11c0ec84] */
  EAX = (r32((uint32_t)(0x11c0ec84)));
  /* 11be87a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be87aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be87ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be87af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be87b2 jae 0x11be87be */
  if (!C.cf) goto L_11be87be;
  /* 11be87b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be87b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be87b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be87bc je 0x11be87c2 */
  if (C.zf) goto L_11be87c2;
L_11be87be:;
  /* 11be87be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be87c0 jmp 0x11be87c5 */
  goto L_11be87c5;
L_11be87c2:;
  /* 11be87c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be87c5:;
  /* 11be87c5 mov esp, ebp */
  ESP = (EBP);
  /* 11be87c7 pop ebp */
  EBP = (pop32());
  /* 11be87c8 ret  */
  ESPCHK(0x11be8770u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11be87d0 (48 bytes, 17 insns) */
void f_11be87d0(void) {
  FTRACE(0x11be87d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be87d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be87d1 mov ebp, esp */
  EBP = (ESP);
  /* 11be87d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be87d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be87d6 call 0x11be84d0 */
  push32(0x11be87dbu); f_11be84d0();
  /* 11be87db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be87de mov eax, dword ptr [0x11c10844] */
  EAX = (r32((uint32_t)(0x11c10844)));
  /* 11be87e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be87e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be87e9 mov dword ptr [0x11c10844], ecx */
  w32((uint32_t)(0x11c10844), (ECX));
  /* 11be87ef push 9 */
  push32((uint32_t)(0x9u));
  /* 11be87f1 call 0x11be8570 */
  push32(0x11be87f6u); f_11be8570();
  /* 11be87f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be87f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be87fc mov esp, ebp */
  ESP = (EBP);
  /* 11be87fe pop ebp */
  EBP = (pop32());
  /* 11be87ff ret  */
  ESPCHK(0x11be87d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x11be8800 (10 bytes, 5 insns) */
void f_11be8800(void) {
  FTRACE(0x11be8800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8800 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8801 mov ebp, esp */
  EBP = (ESP);
  /* 11be8803 mov eax, dword ptr [0x11c10844] */
  EAX = (r32((uint32_t)(0x11c10844)));
  /* 11be8808 pop ebp */
  EBP = (pop32());
  /* 11be8809 ret  */
  ESPCHK(0x11be8800u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11be8810 (45 bytes, 19 insns) */
void f_11be8810(void) {
  FTRACE(0x11be8810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8810 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8811 mov ebp, esp */
  EBP = (ESP);
  /* 11be8813 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8814 mov eax, dword ptr [0x11c10844] */
  EAX = (r32((uint32_t)(0x11c10844)));
  /* 11be8819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be881c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8820 je 0x11be8830 */
  if (C.zf) goto L_11be8830;
  /* 11be8822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8825 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8826 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11be8829u);
  /* 11be8829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be882c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be882e jne 0x11be8834 */
  if (!C.zf) goto L_11be8834;
L_11be8830:;
  /* 11be8830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8832 jmp 0x11be8839 */
  goto L_11be8839;
L_11be8834:;
  /* 11be8834 mov eax, 1 */
  EAX = (0x1u);
L_11be8839:;
  /* 11be8839 mov esp, ebp */
  ESP = (EBP);
  /* 11be883b pop ebp */
  EBP = (pop32());
  /* 11be883c ret  */
  ESPCHK(0x11be8810u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11be8840 (88 bytes, 40 insns) */
void f_11be8840(void) {
  FTRACE(0x11be8840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8840 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11be8844 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be8848 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be884a je 0x11be8893 */
  if (C.zf) goto L_11be8893;
  /* 11be884c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be884e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11be8852 push edi */
  push32((uint32_t)(EDI));
  /* 11be8853 mov edi, ecx */
  EDI = (ECX);
  /* 11be8855 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8858 jb 0x11be8887 */
  if (C.cf) goto L_11be8887;
  /* 11be885a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11be885c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11be885f je 0x11be8869 */
  if (C.zf) goto L_11be8869;
  /* 11be8861 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11be8863:;
  /* 11be8863 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be8865 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be8866 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11be8867 jne 0x11be8863 */
  if (!C.zf) goto L_11be8863;
L_11be8869:;
  /* 11be8869 mov ecx, eax */
  ECX = (EAX);
  /* 11be886b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11be886e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8870 mov ecx, eax */
  ECX = (EAX);
  /* 11be8872 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11be8875 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8877 mov ecx, edx */
  ECX = (EDX);
  /* 11be8879 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11be887c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11be887f je 0x11be8887 */
  if (C.zf) goto L_11be8887;
  /* 11be8881 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11be8883 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be8885 je 0x11be888d */
  if (C.zf) goto L_11be888d;
L_11be8887:;
  /* 11be8887 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11be8889 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11be888a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11be888b jne 0x11be8887 */
  if (!C.zf) goto L_11be8887;
L_11be888d:;
  /* 11be888d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11be8891 pop edi */
  EDI = (pop32());
  /* 11be8892 ret  */
  ESPCHK(0x11be8840u, _esp0);
  ESP += 4; return;
L_11be8893:;
  /* 11be8893 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11be8897 ret  */
  ESPCHK(0x11be8840u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x11be88a0 (23 bytes, 10 insns) */
void f_11be88a0(void) {
  FTRACE(0x11be88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be88a1 mov ebp, esp */
  EBP = (ESP);
  /* 11be88a3 mov eax, dword ptr [0x11c10840] */
  EAX = (r32((uint32_t)(0x11c10840)));
  /* 11be88a8 push eax */
  push32((uint32_t)(EAX));
  /* 11be88a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be88ac push ecx */
  push32((uint32_t)(ECX));
  /* 11be88ad call 0x11be88c0 */
  push32(0x11be88b2u); f_11be88c0();
  /* 11be88b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be88b5 pop ebp */
  EBP = (pop32());
  /* 11be88b6 ret  */
  ESPCHK(0x11be88a0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11be88c0 (87 bytes, 34 insns) */
void f_11be88c0(void) {
  FTRACE(0x11be88c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be88c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be88c1 mov ebp, esp */
  EBP = (ESP);
  /* 11be88c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be88c4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be88c8 jbe 0x11be88ce */
  if ((C.cf||C.zf)) goto L_11be88ce;
  /* 11be88ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be88cc jmp 0x11be8913 */
  goto L_11be8913;
L_11be88ce:;
  /* 11be88ce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be88d2 ja 0x11be88e5 */
  if ((!C.cf&&!C.zf)) goto L_11be88e5;
  /* 11be88d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be88d7 push eax */
  push32((uint32_t)(EAX));
  /* 11be88d8 call 0x11be8920 */
  push32(0x11be88ddu); f_11be8920();
  /* 11be88dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be88e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be88e3 jmp 0x11be88ec */
  goto L_11be88ec;
L_11be88e5:;
  /* 11be88e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11be88ec:;
  /* 11be88ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be88f0 jne 0x11be88f8 */
  if (!C.zf) goto L_11be88f8;
  /* 11be88f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be88f6 jne 0x11be88fd */
  if (!C.zf) goto L_11be88fd;
L_11be88f8:;
  /* 11be88f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be88fb jmp 0x11be8913 */
  goto L_11be8913;
L_11be88fd:;
  /* 11be88fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8900 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8901 call 0x11be8810 */
  push32(0x11be8906u); f_11be8810();
  /* 11be8906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be890b jne 0x11be8911 */
  if (!C.zf) goto L_11be8911;
  /* 11be890d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be890f jmp 0x11be8913 */
  goto L_11be8913;
L_11be8911:;
  /* 11be8911 jmp 0x11be88ce */
  goto L_11be88ce;
L_11be8913:;
  /* 11be8913 mov esp, ebp */
  ESP = (EBP);
  /* 11be8915 pop ebp */
  EBP = (pop32());
  /* 11be8916 ret  */
  ESPCHK(0x11be88c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x11be8920 (109 bytes, 37 insns) */
void f_11be8920(void) {
  FTRACE(0x11be8920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8920 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8921 mov ebp, esp */
  EBP = (ESP);
  /* 11be8923 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8927 cmp eax, dword ptr [0x11c0ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be892d ja 0x11be895d */
  if ((!C.cf&&!C.zf)) goto L_11be895d;
  /* 11be892f push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8931 call 0x11be84d0 */
  push32(0x11be8936u); f_11be84d0();
  /* 11be8936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be893c push ecx */
  push32((uint32_t)(ECX));
  /* 11be893d call 0x11be9460 */
  push32(0x11be8942u); f_11be9460();
  /* 11be8942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be8948 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be894a call 0x11be8570 */
  push32(0x11be894fu); f_11be8570();
  /* 11be894f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8952 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8956 je 0x11be895d */
  if (C.zf) goto L_11be895d;
  /* 11be8958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be895b jmp 0x11be8989 */
  goto L_11be8989;
L_11be895d:;
  /* 11be895d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8961 jne 0x11be896a */
  if (!C.zf) goto L_11be896a;
  /* 11be8963 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11be896a:;
  /* 11be896a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be896d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8970 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11be8973 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11be8976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8979 push eax */
  push32((uint32_t)(EAX));
  /* 11be897a push 0 */
  push32((uint32_t)(0x0u));
  /* 11be897c mov ecx, dword ptr [0x11c1200c] */
  ECX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8982 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8983 call dword ptr [0x11c13314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13314))), 0x11be8989u);
L_11be8989:;
  /* 11be8989 mov esp, ebp */
  ESP = (EBP);
  /* 11be898b pop ebp */
  EBP = (pop32());
  /* 11be898c ret  */
  ESPCHK(0x11be8920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008990 @ 0x11be8990 (10 bytes, 5 insns) */
void f_11be8990(void) {
  FTRACE(0x11be8990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8990 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8991 mov ebp, esp */
  EBP = (ESP);
  /* 11be8993 mov eax, 1 */
  EAX = (0x1u);
  /* 11be8998 pop ebp */
  EBP = (pop32());
  /* 11be8999 ret  */
  ESPCHK(0x11be8990u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x11be89a0 (173 bytes, 59 insns) */
void f_11be89a0(void) {
  FTRACE(0x11be89a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be89a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be89a1 mov ebp, esp */
  EBP = (ESP);
  /* 11be89a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be89a6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be89aa jbe 0x11be89b3 */
  if ((C.cf||C.zf)) goto L_11be89b3;
  /* 11be89ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be89ae jmp 0x11be8a49 */
  goto L_11be8a49;
L_11be89b3:;
  /* 11be89b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be89b5 call 0x11be84d0 */
  push32(0x11be89bau); f_11be84d0();
  /* 11be89ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be89bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be89c0 push eax */
  push32((uint32_t)(EAX));
  /* 11be89c1 call 0x11be8dd0 */
  push32(0x11be89c6u); f_11be8dd0();
  /* 11be89c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be89c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be89cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be89d0 je 0x11be8a11 */
  if (C.zf) goto L_11be8a11;
  /* 11be89d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11be89d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be89dc cmp ecx, dword ptr [0x11c0ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be89e2 ja 0x11be8a02 */
  if ((!C.cf&&!C.zf)) goto L_11be8a02;
  /* 11be89e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be89e7 push edx */
  push32((uint32_t)(EDX));
  /* 11be89e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be89eb push eax */
  push32((uint32_t)(EAX));
  /* 11be89ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be89ef push ecx */
  push32((uint32_t)(ECX));
  /* 11be89f0 call 0x11be9ca0 */
  push32(0x11be89f5u); f_11be9ca0();
  /* 11be89f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be89f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be89fa je 0x11be8a02 */
  if (C.zf) goto L_11be8a02;
  /* 11be89fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be89ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be8a02:;
  /* 11be8a02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8a04 call 0x11be8570 */
  push32(0x11be8a09u); f_11be8570();
  /* 11be8a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8a0f jmp 0x11be8a49 */
  goto L_11be8a49;
L_11be8a11:;
  /* 11be8a11 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8a13 call 0x11be8570 */
  push32(0x11be8a18u); f_11be8570();
  /* 11be8a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8a1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8a1f jne 0x11be8a28 */
  if (!C.zf) goto L_11be8a28;
  /* 11be8a21 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11be8a28:;
  /* 11be8a28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8a2b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8a2e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11be8a30 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11be8a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8a36 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8a37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8a3a push edx */
  push32((uint32_t)(EDX));
  /* 11be8a3b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11be8a3d mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8a42 push eax */
  push32((uint32_t)(EAX));
  /* 11be8a43 call dword ptr [0x11c13310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13310))), 0x11be8a49u);
L_11be8a49:;
  /* 11be8a49 mov esp, ebp */
  ESP = (EBP);
  /* 11be8a4b pop ebp */
  EBP = (pop32());
  /* 11be8a4c ret  */
  ESPCHK(0x11be89a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x11be8a50 (490 bytes, 165 insns) */
void f_11be8a50(void) {
  FTRACE(0x11be8a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8a51 mov ebp, esp */
  EBP = (ESP);
  /* 11be8a53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8a56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8a5a jne 0x11be8a6d */
  if (!C.zf) goto L_11be8a6d;
  /* 11be8a5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8a5f push eax */
  push32((uint32_t)(EAX));
  /* 11be8a60 call 0x11be88a0 */
  push32(0x11be8a65u); f_11be88a0();
  /* 11be8a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8a68 jmp 0x11be8c36 */
  goto L_11be8c36;
L_11be8a6d:;
  /* 11be8a6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8a71 jne 0x11be8a86 */
  if (!C.zf) goto L_11be8a86;
  /* 11be8a73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8a76 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8a77 call 0x11be8c40 */
  push32(0x11be8a7cu); f_11be8c40();
  /* 11be8a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8a81 jmp 0x11be8c36 */
  goto L_11be8c36;
L_11be8a86:;
  /* 11be8a86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11be8a8d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8a91 ja 0x11be8c09 */
  if ((!C.cf&&!C.zf)) goto L_11be8c09;
  /* 11be8a97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8a99 call 0x11be84d0 */
  push32(0x11be8a9eu); f_11be84d0();
  /* 11be8a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8aa4 push edx */
  push32((uint32_t)(EDX));
  /* 11be8aa5 call 0x11be8dd0 */
  push32(0x11be8aaau); f_11be8dd0();
  /* 11be8aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8aad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be8ab0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8ab4 je 0x11be8bcc */
  if (C.zf) goto L_11be8bcc;
  /* 11be8aba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8abd cmp eax, dword ptr [0x11c0ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8ac3 ja 0x11be8b40 */
  if ((!C.cf&&!C.zf)) goto L_11be8b40;
  /* 11be8ac5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8acc push edx */
  push32((uint32_t)(EDX));
  /* 11be8acd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be8ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11be8ad1 call 0x11be9ca0 */
  push32(0x11be8ad6u); f_11be9ca0();
  /* 11be8ad6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be8adb je 0x11be8ae5 */
  if (C.zf) goto L_11be8ae5;
  /* 11be8add mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8ae0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be8ae3 jmp 0x11be8b40 */
  goto L_11be8b40;
L_11be8ae5:;
  /* 11be8ae5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8ae8 push edx */
  push32((uint32_t)(EDX));
  /* 11be8ae9 call 0x11be9460 */
  push32(0x11be8aeeu); f_11be9460();
  /* 11be8aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8af1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be8af4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8af8 je 0x11be8b40 */
  if (C.zf) goto L_11be8b40;
  /* 11be8afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8afd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11be8b00 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8b03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be8b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8b09 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8b0c jae 0x11be8b16 */
  if (!C.cf) goto L_11be8b16;
  /* 11be8b0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8b11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be8b14 jmp 0x11be8b1c */
  goto L_11be8b1c;
L_11be8b16:;
  /* 11be8b16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8b19 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11be8b1c:;
  /* 11be8b1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8b1f push edx */
  push32((uint32_t)(EDX));
  /* 11be8b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8b23 push eax */
  push32((uint32_t)(EAX));
  /* 11be8b24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8b27 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8b28 call 0x11beb3b0 */
  push32(0x11be8b2du); f_11beb3b0();
  /* 11be8b2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8b30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8b33 push edx */
  push32((uint32_t)(EDX));
  /* 11be8b34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be8b37 push eax */
  push32((uint32_t)(EAX));
  /* 11be8b38 call 0x11be8e90 */
  push32(0x11be8b3du); f_11be8e90();
  /* 11be8b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8b40:;
  /* 11be8b40 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8b44 jne 0x11be8bc0 */
  if (!C.zf) goto L_11be8bc0;
  /* 11be8b46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8b4a jne 0x11be8b53 */
  if (!C.zf) goto L_11be8b53;
  /* 11be8b4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11be8b53:;
  /* 11be8b53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8b56 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8b59 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11be8b5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11be8b5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8b62 push edx */
  push32((uint32_t)(EDX));
  /* 11be8b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8b65 mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8b6a push eax */
  push32((uint32_t)(EAX));
  /* 11be8b6b call dword ptr [0x11c13314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13314))), 0x11be8b71u);
  /* 11be8b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be8b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8b78 je 0x11be8bc0 */
  if (C.zf) goto L_11be8bc0;
  /* 11be8b7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8b7d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11be8b80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8b83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be8b86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8b89 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8b8c jae 0x11be8b96 */
  if (!C.cf) goto L_11be8b96;
  /* 11be8b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8b91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11be8b94 jmp 0x11be8b9c */
  goto L_11be8b9c;
L_11be8b96:;
  /* 11be8b96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8b99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11be8b9c:;
  /* 11be8b9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be8b9f push eax */
  push32((uint32_t)(EAX));
  /* 11be8ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8ba4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8ba7 push edx */
  push32((uint32_t)(EDX));
  /* 11be8ba8 call 0x11beb3b0 */
  push32(0x11be8badu); f_11beb3b0();
  /* 11be8bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8bb3 push eax */
  push32((uint32_t)(EAX));
  /* 11be8bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be8bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8bb8 call 0x11be8e90 */
  push32(0x11be8bbdu); f_11be8e90();
  /* 11be8bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11be8bc0:;
  /* 11be8bc0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8bc2 call 0x11be8570 */
  push32(0x11be8bc7u); f_11be8570();
  /* 11be8bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8bca jmp 0x11be8c09 */
  goto L_11be8c09;
L_11be8bcc:;
  /* 11be8bcc push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8bce call 0x11be8570 */
  push32(0x11be8bd3u); f_11be8570();
  /* 11be8bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8bd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8bda jne 0x11be8be3 */
  if (!C.zf) goto L_11be8be3;
  /* 11be8bdc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11be8be3:;
  /* 11be8be3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8be6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8be9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11be8bec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11be8bef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11be8bf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8bf9 mov edx, dword ptr [0x11c1200c] */
  EDX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8bff push edx */
  push32((uint32_t)(EDX));
  /* 11be8c00 call dword ptr [0x11c13310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13310))), 0x11be8c06u);
  /* 11be8c06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11be8c09:;
  /* 11be8c09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8c0d jne 0x11be8c18 */
  if (!C.zf) goto L_11be8c18;
  /* 11be8c0f cmp dword ptr [0x11c10840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8c16 jne 0x11be8c1d */
  if (!C.zf) goto L_11be8c1d;
L_11be8c18:;
  /* 11be8c18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8c1b jmp 0x11be8c36 */
  goto L_11be8c36;
L_11be8c1d:;
  /* 11be8c1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8c20 push eax */
  push32((uint32_t)(EAX));
  /* 11be8c21 call 0x11be8810 */
  push32(0x11be8c26u); f_11be8810();
  /* 11be8c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be8c2b jne 0x11be8c31 */
  if (!C.zf) goto L_11be8c31;
  /* 11be8c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8c2f jmp 0x11be8c36 */
  goto L_11be8c36;
L_11be8c31:;
  /* 11be8c31 jmp 0x11be8a86 */
  goto L_11be8a86;
L_11be8c36:;
  /* 11be8c36 mov esp, ebp */
  ESP = (EBP);
  /* 11be8c38 pop ebp */
  EBP = (pop32());
  /* 11be8c39 ret  */
  ESPCHK(0x11be8a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x11be8c40 (104 bytes, 38 insns) */
void f_11be8c40(void) {
  FTRACE(0x11be8c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8c41 mov ebp, esp */
  EBP = (ESP);
  /* 11be8c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8c44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8c48 jne 0x11be8c4c */
  if (!C.zf) goto L_11be8c4c;
  /* 11be8c4a jmp 0x11be8ca4 */
  goto L_11be8ca4;
L_11be8c4c:;
  /* 11be8c4c push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8c4e call 0x11be84d0 */
  push32(0x11be8c53u); f_11be84d0();
  /* 11be8c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8c59 push eax */
  push32((uint32_t)(EAX));
  /* 11be8c5a call 0x11be8dd0 */
  push32(0x11be8c5fu); f_11be8dd0();
  /* 11be8c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be8c65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8c69 je 0x11be8c87 */
  if (C.zf) goto L_11be8c87;
  /* 11be8c6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8c6e push ecx */
  push32((uint32_t)(ECX));
  /* 11be8c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8c72 push edx */
  push32((uint32_t)(EDX));
  /* 11be8c73 call 0x11be8e90 */
  push32(0x11be8c78u); f_11be8e90();
  /* 11be8c78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c7b push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8c7d call 0x11be8570 */
  push32(0x11be8c82u); f_11be8570();
  /* 11be8c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c85 jmp 0x11be8ca4 */
  goto L_11be8ca4;
L_11be8c87:;
  /* 11be8c87 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8c89 call 0x11be8570 */
  push32(0x11be8c8eu); f_11be8570();
  /* 11be8c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8c94 push eax */
  push32((uint32_t)(EAX));
  /* 11be8c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8c97 mov ecx, dword ptr [0x11c1200c] */
  ECX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8c9d push ecx */
  push32((uint32_t)(ECX));
  /* 11be8c9e call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11be8ca4u);
L_11be8ca4:;
  /* 11be8ca4 mov esp, ebp */
  ESP = (EBP);
  /* 11be8ca6 pop ebp */
  EBP = (pop32());
  /* 11be8ca7 ret  */
  ESPCHK(0x11be8c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x11be8cb0 (116 bytes, 34 insns) */
void f_11be8cb0(void) {
  FTRACE(0x11be8cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11be8cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be8cb4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11be8cbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8cbd call 0x11be84d0 */
  push32(0x11be8cc2u); f_11be84d0();
  /* 11be8cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8cc5 call 0x11bea3c0 */
  push32(0x11be8ccau); f_11bea3c0();
  /* 11be8cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be8ccc jge 0x11be8cd5 */
  if ((C.sf==C.of)) goto L_11be8cd5;
  /* 11be8cce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11be8cd5:;
  /* 11be8cd5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11be8cd7 call 0x11be8570 */
  push32(0x11be8cdcu); f_11be8570();
  /* 11be8cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8ce3 mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8ce8 push eax */
  push32((uint32_t)(EAX));
  /* 11be8ce9 call dword ptr [0x11c133a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133a8))), 0x11be8cefu);
  /* 11be8cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be8cf1 jne 0x11be8d1d */
  if (!C.zf) goto L_11be8d1d;
  /* 11be8cf3 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11be8cf9u);
  /* 11be8cf9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8cfc jne 0x11be8d16 */
  if (!C.zf) goto L_11be8d16;
  /* 11be8cfe call 0x11bec9b0 */
  push32(0x11be8d03u); f_11bec9b0();
  /* 11be8d03 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11be8d09 call 0x11bec9a0 */
  push32(0x11be8d0eu); f_11bec9a0();
  /* 11be8d0e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11be8d14 jmp 0x11be8d1d */
  goto L_11be8d1d;
L_11be8d16:;
  /* 11be8d16 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11be8d1d:;
  /* 11be8d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8d20 mov esp, ebp */
  ESP = (EBP);
  /* 11be8d22 pop ebp */
  EBP = (pop32());
  /* 11be8d23 ret  */
  ESPCHK(0x11be8cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x11be8d30 (10 bytes, 5 insns) */
void f_11be8d30(void) {
  FTRACE(0x11be8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8d31 mov ebp, esp */
  EBP = (ESP);
  /* 11be8d33 call 0x11be8cb0 */
  push32(0x11be8d38u); f_11be8cb0();
  /* 11be8d38 pop ebp */
  EBP = (pop32());
  /* 11be8d39 ret  */
  ESPCHK(0x11be8d30u, _esp0);
  ESP += 4; return;
}

