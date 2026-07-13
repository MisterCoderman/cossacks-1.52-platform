#include "recomp.h"

/* FUN_10001000 @ 0x101c1000 (5622 bytes, 1464 insns) */
void f_101c1000(void) {
  FTRACE(0x101c1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c1000 push esi */
  push32((uint32_t)(ESI));
  /* 101c1001 push edi */
  push32((uint32_t)(EDI));
  /* 101c1002 call 0x101c2760 */
  push32(0x101c1007u); f_101c2760();
  /* 101c1007 mov edx, eax */
  EDX = (EAX);
  /* 101c1009 mov edi, 0x101cfe3c */
  EDI = (0x101cfe3cu);
  /* 101c100e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101c1011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c1013 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101c1016 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101c1018 not ecx */
  ECX = (~(ECX));
  /* 101c101a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c101c mov eax, ecx */
  EAX = (ECX);
  /* 101c101e mov esi, edi */
  ESI = (EDI);
  /* 101c1020 mov edi, 0x101d5e78 */
  EDI = (0x101d5e78u);
  /* 101c1025 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c1028 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c102a mov ecx, eax */
  ECX = (EAX);
  /* 101c102c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c102e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101c1031 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101c1033 mov ecx, edx */
  ECX = (EDX);
  /* 101c1035 mov edi, 0x101cfe2c */
  EDI = (0x101cfe2cu);
  /* 101c103a and ecx, 6 */
  { uint32_t _r=(ECX)&(0x6u); ECX = (_r); fl_logic(_r,32); }
  /* 101c103d and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 101c1040 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c1043 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101c1046 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101c1048 not ecx */
  ECX = (~(ECX));
  /* 101c104a sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c104c mov eax, ecx */
  EAX = (ECX);
  /* 101c104e mov esi, edi */
  ESI = (EDI);
  /* 101c1050 mov edi, 0x101d6168 */
  EDI = (0x101d6168u);
  /* 101c1055 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c1058 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c105a mov ecx, eax */
  ECX = (EAX);
  /* 101c105c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101c105f cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c1062 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101c1064 mov edi, 0x101cfe20 */
  EDI = (0x101cfe20u);
  /* 101c1069 jne 0x101c1088 */
  if (!C.zf) goto L_101c1088;
  /* 101c106b or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101c106e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c1070 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101c1072 not ecx */
  ECX = (~(ECX));
  /* 101c1074 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c1076 mov edx, ecx */
  EDX = (ECX);
  /* 101c1078 mov esi, edi */
  ESI = (EDI);
  /* 101c107a mov edi, 0x101d5f98 */
  EDI = (0x101d5f98u);
  /* 101c107f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c1082 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c1084 mov ecx, edx */
  ECX = (EDX);
  /* 101c1086 jmp 0x101c10a3 */
  goto L_101c10a3;
L_101c1088:;
  /* 101c1088 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101c108b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c108d repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101c108f not ecx */
  ECX = (~(ECX));
  /* 101c1091 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c1093 mov eax, ecx */
  EAX = (ECX);
  /* 101c1095 mov esi, edi */
  ESI = (EDI);
  /* 101c1097 mov edi, 0x101d5f98 */
  EDI = (0x101d5f98u);
  /* 101c109c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c109f rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c10a1 mov ecx, eax */
  ECX = (EAX);
L_101c10a3:;
  /* 101c10a3 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c10a8 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101c10ab rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101c10ad pop edi */
  EDI = (pop32());
  /* 101c10ae pop esi */
  ESI = (pop32());
  /* 101c10af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c10b1 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c10b7 push 0x101cfe14 */
  push32((uint32_t)(0x101cfe14u));
  /* 101c10bc push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c10c1 call eax */
  call_ind((uint32_t)(EAX), 0x101c10c3u);
  /* 101c10c3 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c10c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c10cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c10cd je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c10d3 push 0x101cfe08 */
  push32((uint32_t)(0x101cfe08u));
  /* 101c10d8 push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c10dd call eax */
  call_ind((uint32_t)(EAX), 0x101c10dfu);
  /* 101c10df mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c10e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c10e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c10e9 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c10ef push 0x101cfdfc */
  push32((uint32_t)(0x101cfdfcu));
  /* 101c10f4 push 0x101d6048 */
  push32((uint32_t)(0x101d6048u));
  /* 101c10f9 call eax */
  call_ind((uint32_t)(EAX), 0x101c10fbu);
  /* 101c10fb mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1105 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c110b push 0x101cfdf0 */
  push32((uint32_t)(0x101cfdf0u));
  /* 101c1110 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c1115 call eax */
  call_ind((uint32_t)(EAX), 0x101c1117u);
  /* 101c1117 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c111c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c111f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1121 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c1127 push 0x101cfde4 */
  push32((uint32_t)(0x101cfde4u));
  /* 101c112c push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c1131 call eax */
  call_ind((uint32_t)(EAX), 0x101c1133u);
  /* 101c1133 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c113b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c113d je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c113f push 0x101cfdd8 */
  push32((uint32_t)(0x101cfdd8u));
  /* 101c1144 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c1149 call eax */
  call_ind((uint32_t)(EAX), 0x101c114bu);
  /* 101c114b mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1155 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c1157 push 0x101cfdcc */
  push32((uint32_t)(0x101cfdccu));
  /* 101c115c push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c1161 call eax */
  call_ind((uint32_t)(EAX), 0x101c1163u);
  /* 101c1163 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c116b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c116d je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c116f push 0x101cfdc0 */
  push32((uint32_t)(0x101cfdc0u));
  /* 101c1174 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c1179 call eax */
  call_ind((uint32_t)(EAX), 0x101c117bu);
  /* 101c117b mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1185 je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c1187 push 0x101cfdb4 */
  push32((uint32_t)(0x101cfdb4u));
  /* 101c118c push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c1191 call eax */
  call_ind((uint32_t)(EAX), 0x101c1193u);
  /* 101c1193 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c119b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c119d je 0x101c11ae */
  if (C.zf) goto L_101c11ae;
  /* 101c119f push 0x101cfda8 */
  push32((uint32_t)(0x101cfda8u));
  /* 101c11a4 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c11a9 call eax */
  call_ind((uint32_t)(EAX), 0x101c11abu);
  /* 101c11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c11ae:;
  /* 101c11ae push 0x101cfd94 */
  push32((uint32_t)(0x101cfd94u));
  /* 101c11b3 call dword ptr [0x101d64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64b0))), 0x101c11b9u);
  /* 101c11b9 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c11bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c11c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c11c4 je 0x101c11f4 */
  if (C.zf) goto L_101c11f4;
  /* 101c11c6 push 0x101cfd94 */
  push32((uint32_t)(0x101cfd94u));
  /* 101c11cb push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c11d0 call ecx */
  call_ind((uint32_t)(ECX), 0x101c11d2u);
  /* 101c11d2 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c11d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c11db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c11dd je 0x101c11f4 */
  if (C.zf) goto L_101c11f4;
  /* 101c11df push 0x101cfd88 */
  push32((uint32_t)(0x101cfd88u));
  /* 101c11e4 push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c11e9 call ecx */
  call_ind((uint32_t)(ECX), 0x101c11ebu);
  /* 101c11eb mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c11f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c11f4:;
  /* 101c11f4 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c11f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c11fb je 0x101c1217 */
  if (C.zf) goto L_101c1217;
  /* 101c11fd push 0x101cfd80 */
  push32((uint32_t)(0x101cfd80u));
  /* 101c1202 push 0x101d5fd8 */
  push32((uint32_t)(0x101d5fd8u));
  /* 101c1207 call eax */
  call_ind((uint32_t)(EAX), 0x101c1209u);
  /* 101c1209 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c120f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1217:;
  /* 101c1217 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c1219 je 0x101c1235 */
  if (C.zf) goto L_101c1235;
  /* 101c121b push 0x101cfd74 */
  push32((uint32_t)(0x101cfd74u));
  /* 101c1220 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c1225 call ecx */
  call_ind((uint32_t)(ECX), 0x101c1227u);
  /* 101c1227 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c122d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1235:;
  /* 101c1235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1237 je 0x101c128b */
  if (C.zf) goto L_101c128b;
  /* 101c1239 push 0x101cfd6c */
  push32((uint32_t)(0x101cfd6cu));
  /* 101c123e push 0x101d5f78 */
  push32((uint32_t)(0x101d5f78u));
  /* 101c1243 call eax */
  call_ind((uint32_t)(EAX), 0x101c1245u);
  /* 101c1245 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c124d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c124f je 0x101c1285 */
  if (C.zf) goto L_101c1285;
  /* 101c1251 push 0x101cfd64 */
  push32((uint32_t)(0x101cfd64u));
  /* 101c1256 push 0x101d5fd0 */
  push32((uint32_t)(0x101d5fd0u));
  /* 101c125b call eax */
  call_ind((uint32_t)(EAX), 0x101c125du);
  /* 101c125d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1267 je 0x101c1285 */
  if (C.zf) goto L_101c1285;
  /* 101c1269 push 0x101cfd5c */
  push32((uint32_t)(0x101cfd5cu));
  /* 101c126e push 0x101d5fe0 */
  push32((uint32_t)(0x101d5fe0u));
  /* 101c1273 call eax */
  call_ind((uint32_t)(EAX), 0x101c1275u);
  /* 101c1275 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c127b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1283 jmp 0x101c128b */
  goto L_101c128b;
L_101c1285:;
  /* 101c1285 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
L_101c128b:;
  /* 101c128b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c128d je 0x101c12f4 */
  if (C.zf) goto L_101c12f4;
  /* 101c128f push 0x101cfd50 */
  push32((uint32_t)(0x101cfd50u));
  /* 101c1294 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c1299 call ecx */
  call_ind((uint32_t)(ECX), 0x101c129bu);
  /* 101c129b mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c12a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c12a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c12a6 je 0x101c12ef */
  if (C.zf) goto L_101c12ef;
  /* 101c12a8 push 0x101cfe3c */
  push32((uint32_t)(0x101cfe3cu));
  /* 101c12ad push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c12b2 call ecx */
  call_ind((uint32_t)(ECX), 0x101c12b4u);
  /* 101c12b4 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c12ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c12bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c12bf je 0x101c12ef */
  if (C.zf) goto L_101c12ef;
  /* 101c12c1 push 0x101cfd44 */
  push32((uint32_t)(0x101cfd44u));
  /* 101c12c6 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c12cb call ecx */
  call_ind((uint32_t)(ECX), 0x101c12cdu);
  /* 101c12cd mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c12d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c12d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c12d8 je 0x101c12ef */
  if (C.zf) goto L_101c12ef;
  /* 101c12da push 0x101cfd30 */
  push32((uint32_t)(0x101cfd30u));
  /* 101c12df push 0x101d3650 */
  push32((uint32_t)(0x101d3650u));
  /* 101c12e4 call ecx */
  call_ind((uint32_t)(ECX), 0x101c12e6u);
  /* 101c12e6 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c12ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c12ef:;
  /* 101c12ef mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
L_101c12f4:;
  /* 101c12f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c12f6 je 0x101c1332 */
  if (C.zf) goto L_101c1332;
  /* 101c12f8 push 0x101cfd18 */
  push32((uint32_t)(0x101cfd18u));
  /* 101c12fd push 0x101d61b0 */
  push32((uint32_t)(0x101d61b0u));
  /* 101c1302 call eax */
  call_ind((uint32_t)(EAX), 0x101c1304u);
  /* 101c1304 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c130c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c130e je 0x101c132c */
  if (C.zf) goto L_101c132c;
  /* 101c1310 push 0x101cfd00 */
  push32((uint32_t)(0x101cfd00u));
  /* 101c1315 push 0x101d5f18 */
  push32((uint32_t)(0x101d5f18u));
  /* 101c131a call eax */
  call_ind((uint32_t)(EAX), 0x101c131cu);
  /* 101c131c mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1322 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c132a jmp 0x101c1332 */
  goto L_101c1332;
L_101c132c:;
  /* 101c132c mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
L_101c1332:;
  /* 101c1332 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c1334 je 0x101c1350 */
  if (C.zf) goto L_101c1350;
  /* 101c1336 push 0x101cfcec */
  push32((uint32_t)(0x101cfcecu));
  /* 101c133b push 0x101d3590 */
  push32((uint32_t)(0x101d3590u));
  /* 101c1340 call ecx */
  call_ind((uint32_t)(ECX), 0x101c1342u);
  /* 101c1342 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1348 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c134d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1350:;
  /* 101c1350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1352 je 0x101c136e */
  if (C.zf) goto L_101c136e;
  /* 101c1354 push 0x101cfcd0 */
  push32((uint32_t)(0x101cfcd0u));
  /* 101c1359 push 0x101d6020 */
  push32((uint32_t)(0x101d6020u));
  /* 101c135e call eax */
  call_ind((uint32_t)(EAX), 0x101c1360u);
  /* 101c1360 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1366 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c136b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c136e:;
  /* 101c136e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c1370 je 0x101c13be */
  if (C.zf) goto L_101c13be;
  /* 101c1372 push 0x101cfcc4 */
  push32((uint32_t)(0x101cfcc4u));
  /* 101c1377 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c137c call ecx */
  call_ind((uint32_t)(ECX), 0x101c137eu);
  /* 101c137e mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1387 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c1389 je 0x101c13b9 */
  if (C.zf) goto L_101c13b9;
  /* 101c138b push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1390 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c1395 call ecx */
  call_ind((uint32_t)(ECX), 0x101c1397u);
  /* 101c1397 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c139d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c13a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c13a2 je 0x101c13b9 */
  if (C.zf) goto L_101c13b9;
  /* 101c13a4 push 0x101cfcb8 */
  push32((uint32_t)(0x101cfcb8u));
  /* 101c13a9 push 0x101d35e0 */
  push32((uint32_t)(0x101d35e0u));
  /* 101c13ae call ecx */
  call_ind((uint32_t)(ECX), 0x101c13b0u);
  /* 101c13b0 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c13b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c13b9:;
  /* 101c13b9 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
L_101c13be:;
  /* 101c13be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c13c0 je 0x101c1658 */
  if (C.zf) goto L_101c1658;
  /* 101c13c6 push 0x101cfca4 */
  push32((uint32_t)(0x101cfca4u));
  /* 101c13cb push 0x101d3850 */
  push32((uint32_t)(0x101d3850u));
  /* 101c13d0 call eax */
  call_ind((uint32_t)(EAX), 0x101c13d2u);
  /* 101c13d2 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c13d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c13da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c13dc je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c13e2 push 0x101cfc90 */
  push32((uint32_t)(0x101cfc90u));
  /* 101c13e7 push 0x101d3848 */
  push32((uint32_t)(0x101d3848u));
  /* 101c13ec call eax */
  call_ind((uint32_t)(EAX), 0x101c13eeu);
  /* 101c13ee mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c13f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c13f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c13f8 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c13fe push 0x101cfc7c */
  push32((uint32_t)(0x101cfc7cu));
  /* 101c1403 push 0x101d3840 */
  push32((uint32_t)(0x101d3840u));
  /* 101c1408 call eax */
  call_ind((uint32_t)(EAX), 0x101c140au);
  /* 101c140a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c140f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1414 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c141a push 0x101cfc68 */
  push32((uint32_t)(0x101cfc68u));
  /* 101c141f push 0x101d3888 */
  push32((uint32_t)(0x101d3888u));
  /* 101c1424 call eax */
  call_ind((uint32_t)(EAX), 0x101c1426u);
  /* 101c1426 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c142e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1430 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1436 push 0x101cfc54 */
  push32((uint32_t)(0x101cfc54u));
  /* 101c143b push 0x101d3878 */
  push32((uint32_t)(0x101d3878u));
  /* 101c1440 call eax */
  call_ind((uint32_t)(EAX), 0x101c1442u);
  /* 101c1442 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c144a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c144c je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1452 push 0x101cfc40 */
  push32((uint32_t)(0x101cfc40u));
  /* 101c1457 push 0x101d3870 */
  push32((uint32_t)(0x101d3870u));
  /* 101c145c call eax */
  call_ind((uint32_t)(EAX), 0x101c145eu);
  /* 101c145e mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1468 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c146e push 0x101cfc2c */
  push32((uint32_t)(0x101cfc2cu));
  /* 101c1473 push 0x101d3628 */
  push32((uint32_t)(0x101d3628u));
  /* 101c1478 call eax */
  call_ind((uint32_t)(EAX), 0x101c147au);
  /* 101c147a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c147f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1484 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c148a push 0x101cfc18 */
  push32((uint32_t)(0x101cfc18u));
  /* 101c148f push 0x101d3618 */
  push32((uint32_t)(0x101d3618u));
  /* 101c1494 call eax */
  call_ind((uint32_t)(EAX), 0x101c1496u);
  /* 101c1496 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c149b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c149e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c14a0 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c14a6 push 0x101cfc04 */
  push32((uint32_t)(0x101cfc04u));
  /* 101c14ab push 0x101d3810 */
  push32((uint32_t)(0x101d3810u));
  /* 101c14b0 call eax */
  call_ind((uint32_t)(EAX), 0x101c14b2u);
  /* 101c14b2 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c14b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c14ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c14bc je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c14c2 push 0x101cfbf0 */
  push32((uint32_t)(0x101cfbf0u));
  /* 101c14c7 push 0x101d3808 */
  push32((uint32_t)(0x101d3808u));
  /* 101c14cc call eax */
  call_ind((uint32_t)(EAX), 0x101c14ceu);
  /* 101c14ce mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c14d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c14d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c14d8 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c14de push 0x101cfbdc */
  push32((uint32_t)(0x101cfbdcu));
  /* 101c14e3 push 0x101d3800 */
  push32((uint32_t)(0x101d3800u));
  /* 101c14e8 call eax */
  call_ind((uint32_t)(EAX), 0x101c14eau);
  /* 101c14ea mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c14ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c14f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c14f4 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c14fa push 0x101cfbc8 */
  push32((uint32_t)(0x101cfbc8u));
  /* 101c14ff push 0x101d37f8 */
  push32((uint32_t)(0x101d37f8u));
  /* 101c1504 call eax */
  call_ind((uint32_t)(EAX), 0x101c1506u);
  /* 101c1506 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c150b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c150e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1510 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1516 push 0x101cfca4 */
  push32((uint32_t)(0x101cfca4u));
  /* 101c151b push 0x101d3850 */
  push32((uint32_t)(0x101d3850u));
  /* 101c1520 call eax */
  call_ind((uint32_t)(EAX), 0x101c1522u);
  /* 101c1522 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c152a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c152c je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1532 push 0x101cfc90 */
  push32((uint32_t)(0x101cfc90u));
  /* 101c1537 push 0x101d3848 */
  push32((uint32_t)(0x101d3848u));
  /* 101c153c call eax */
  call_ind((uint32_t)(EAX), 0x101c153eu);
  /* 101c153e mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1548 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c154e push 0x101cfc7c */
  push32((uint32_t)(0x101cfc7cu));
  /* 101c1553 push 0x101d3840 */
  push32((uint32_t)(0x101d3840u));
  /* 101c1558 call eax */
  call_ind((uint32_t)(EAX), 0x101c155au);
  /* 101c155a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c155f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1564 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c156a push 0x101cfc68 */
  push32((uint32_t)(0x101cfc68u));
  /* 101c156f push 0x101d3888 */
  push32((uint32_t)(0x101d3888u));
  /* 101c1574 call eax */
  call_ind((uint32_t)(EAX), 0x101c1576u);
  /* 101c1576 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c157e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1580 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1586 push 0x101cfc54 */
  push32((uint32_t)(0x101cfc54u));
  /* 101c158b push 0x101d3878 */
  push32((uint32_t)(0x101d3878u));
  /* 101c1590 call eax */
  call_ind((uint32_t)(EAX), 0x101c1592u);
  /* 101c1592 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c159a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c159c je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c15a2 push 0x101cfc40 */
  push32((uint32_t)(0x101cfc40u));
  /* 101c15a7 push 0x101d3870 */
  push32((uint32_t)(0x101d3870u));
  /* 101c15ac call eax */
  call_ind((uint32_t)(EAX), 0x101c15aeu);
  /* 101c15ae mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c15b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c15b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c15b8 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c15be push 0x101cfc2c */
  push32((uint32_t)(0x101cfc2cu));
  /* 101c15c3 push 0x101d3628 */
  push32((uint32_t)(0x101d3628u));
  /* 101c15c8 call eax */
  call_ind((uint32_t)(EAX), 0x101c15cau);
  /* 101c15ca mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c15cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c15d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c15d4 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c15d6 push 0x101cfc18 */
  push32((uint32_t)(0x101cfc18u));
  /* 101c15db push 0x101d3618 */
  push32((uint32_t)(0x101d3618u));
  /* 101c15e0 call eax */
  call_ind((uint32_t)(EAX), 0x101c15e2u);
  /* 101c15e2 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c15e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c15ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c15ec je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c15ee push 0x101cfc04 */
  push32((uint32_t)(0x101cfc04u));
  /* 101c15f3 push 0x101d3810 */
  push32((uint32_t)(0x101d3810u));
  /* 101c15f8 call eax */
  call_ind((uint32_t)(EAX), 0x101c15fau);
  /* 101c15fa mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c15ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1604 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1606 push 0x101cfbf0 */
  push32((uint32_t)(0x101cfbf0u));
  /* 101c160b push 0x101d3808 */
  push32((uint32_t)(0x101d3808u));
  /* 101c1610 call eax */
  call_ind((uint32_t)(EAX), 0x101c1612u);
  /* 101c1612 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c161a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c161c je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c161e push 0x101cfbdc */
  push32((uint32_t)(0x101cfbdcu));
  /* 101c1623 push 0x101d3800 */
  push32((uint32_t)(0x101d3800u));
  /* 101c1628 call eax */
  call_ind((uint32_t)(EAX), 0x101c162au);
  /* 101c162a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c162f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1634 je 0x101c1652 */
  if (C.zf) goto L_101c1652;
  /* 101c1636 push 0x101cfbc8 */
  push32((uint32_t)(0x101cfbc8u));
  /* 101c163b push 0x101d37f8 */
  push32((uint32_t)(0x101d37f8u));
  /* 101c1640 call eax */
  call_ind((uint32_t)(EAX), 0x101c1642u);
  /* 101c1642 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1648 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c164d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1650 jmp 0x101c1658 */
  goto L_101c1658;
L_101c1652:;
  /* 101c1652 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
L_101c1658:;
  /* 101c1658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c165a je 0x101c168f */
  if (C.zf) goto L_101c168f;
  /* 101c165c push 0x101cfbbc */
  push32((uint32_t)(0x101cfbbcu));
  /* 101c1661 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c1666 call ecx */
  call_ind((uint32_t)(ECX), 0x101c1668u);
  /* 101c1668 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c166e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c1673 je 0x101c168a */
  if (C.zf) goto L_101c168a;
  /* 101c1675 push 0x101cfbac */
  push32((uint32_t)(0x101cfbacu));
  /* 101c167a push 0x101d35d0 */
  push32((uint32_t)(0x101d35d0u));
  /* 101c167f call ecx */
  call_ind((uint32_t)(ECX), 0x101c1681u);
  /* 101c1681 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c168a:;
  /* 101c168a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
L_101c168f:;
  /* 101c168f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1691 je 0x101c1929 */
  if (C.zf) goto L_101c1929;
  /* 101c1697 push 0x101cfb98 */
  push32((uint32_t)(0x101cfb98u));
  /* 101c169c push 0x101d35a8 */
  push32((uint32_t)(0x101d35a8u));
  /* 101c16a1 call eax */
  call_ind((uint32_t)(EAX), 0x101c16a3u);
  /* 101c16a3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c16a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c16ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c16ad je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c16b3 push 0x101cfb80 */
  push32((uint32_t)(0x101cfb80u));
  /* 101c16b8 push 0x101d35a0 */
  push32((uint32_t)(0x101d35a0u));
  /* 101c16bd call eax */
  call_ind((uint32_t)(EAX), 0x101c16bfu);
  /* 101c16bf mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c16c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c16c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c16c9 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c16cf push 0x101cfb68 */
  push32((uint32_t)(0x101cfb68u));
  /* 101c16d4 push 0x101d3598 */
  push32((uint32_t)(0x101d3598u));
  /* 101c16d9 call eax */
  call_ind((uint32_t)(EAX), 0x101c16dbu);
  /* 101c16db mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c16e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c16e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c16e5 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c16eb push 0x101cfb50 */
  push32((uint32_t)(0x101cfb50u));
  /* 101c16f0 push 0x101d6268 */
  push32((uint32_t)(0x101d6268u));
  /* 101c16f5 call eax */
  call_ind((uint32_t)(EAX), 0x101c16f7u);
  /* 101c16f7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c16fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c16ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1701 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1707 push 0x101cfb38 */
  push32((uint32_t)(0x101cfb38u));
  /* 101c170c push 0x101d6260 */
  push32((uint32_t)(0x101d6260u));
  /* 101c1711 call eax */
  call_ind((uint32_t)(EAX), 0x101c1713u);
  /* 101c1713 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c171b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c171d je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1723 push 0x101cfb20 */
  push32((uint32_t)(0x101cfb20u));
  /* 101c1728 push 0x101d6258 */
  push32((uint32_t)(0x101d6258u));
  /* 101c172d call eax */
  call_ind((uint32_t)(EAX), 0x101c172fu);
  /* 101c172f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1739 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c173f push 0x101cfb0c */
  push32((uint32_t)(0x101cfb0cu));
  /* 101c1744 push 0x101d62e0 */
  push32((uint32_t)(0x101d62e0u));
  /* 101c1749 call eax */
  call_ind((uint32_t)(EAX), 0x101c174bu);
  /* 101c174b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1755 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c175b push 0x101cfaf4 */
  push32((uint32_t)(0x101cfaf4u));
  /* 101c1760 push 0x101d62d8 */
  push32((uint32_t)(0x101d62d8u));
  /* 101c1765 call eax */
  call_ind((uint32_t)(EAX), 0x101c1767u);
  /* 101c1767 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c176c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c176f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1771 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1777 push 0x101cfadc */
  push32((uint32_t)(0x101cfadcu));
  /* 101c177c push 0x101d6328 */
  push32((uint32_t)(0x101d6328u));
  /* 101c1781 call eax */
  call_ind((uint32_t)(EAX), 0x101c1783u);
  /* 101c1783 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c178b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c178d je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1793 push 0x101cfac4 */
  push32((uint32_t)(0x101cfac4u));
  /* 101c1798 push 0x101d6320 */
  push32((uint32_t)(0x101d6320u));
  /* 101c179d call eax */
  call_ind((uint32_t)(EAX), 0x101c179fu);
  /* 101c179f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c17a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c17a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c17a9 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c17af push 0x101cfaac */
  push32((uint32_t)(0x101cfaacu));
  /* 101c17b4 push 0x101d6318 */
  push32((uint32_t)(0x101d6318u));
  /* 101c17b9 call eax */
  call_ind((uint32_t)(EAX), 0x101c17bbu);
  /* 101c17bb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c17c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c17c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c17c5 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c17cb push 0x101cfa94 */
  push32((uint32_t)(0x101cfa94u));
  /* 101c17d0 push 0x101d6310 */
  push32((uint32_t)(0x101d6310u));
  /* 101c17d5 call eax */
  call_ind((uint32_t)(EAX), 0x101c17d7u);
  /* 101c17d7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c17dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c17df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c17e1 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c17e7 push 0x101cfb98 */
  push32((uint32_t)(0x101cfb98u));
  /* 101c17ec push 0x101d35a8 */
  push32((uint32_t)(0x101d35a8u));
  /* 101c17f1 call eax */
  call_ind((uint32_t)(EAX), 0x101c17f3u);
  /* 101c17f3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c17f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c17fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c17fd je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1803 push 0x101cfb80 */
  push32((uint32_t)(0x101cfb80u));
  /* 101c1808 push 0x101d35a0 */
  push32((uint32_t)(0x101d35a0u));
  /* 101c180d call eax */
  call_ind((uint32_t)(EAX), 0x101c180fu);
  /* 101c180f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1819 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c181f push 0x101cfb68 */
  push32((uint32_t)(0x101cfb68u));
  /* 101c1824 push 0x101d3598 */
  push32((uint32_t)(0x101d3598u));
  /* 101c1829 call eax */
  call_ind((uint32_t)(EAX), 0x101c182bu);
  /* 101c182b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1835 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c183b push 0x101cfb50 */
  push32((uint32_t)(0x101cfb50u));
  /* 101c1840 push 0x101d6268 */
  push32((uint32_t)(0x101d6268u));
  /* 101c1845 call eax */
  call_ind((uint32_t)(EAX), 0x101c1847u);
  /* 101c1847 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c184c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c184f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1851 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1857 push 0x101cfb38 */
  push32((uint32_t)(0x101cfb38u));
  /* 101c185c push 0x101d6260 */
  push32((uint32_t)(0x101d6260u));
  /* 101c1861 call eax */
  call_ind((uint32_t)(EAX), 0x101c1863u);
  /* 101c1863 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c186b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c186d je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1873 push 0x101cfb20 */
  push32((uint32_t)(0x101cfb20u));
  /* 101c1878 push 0x101d6258 */
  push32((uint32_t)(0x101d6258u));
  /* 101c187d call eax */
  call_ind((uint32_t)(EAX), 0x101c187fu);
  /* 101c187f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1889 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c188f push 0x101cfb0c */
  push32((uint32_t)(0x101cfb0cu));
  /* 101c1894 push 0x101d62e0 */
  push32((uint32_t)(0x101d62e0u));
  /* 101c1899 call eax */
  call_ind((uint32_t)(EAX), 0x101c189bu);
  /* 101c189b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c18a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c18a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c18a5 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c18a7 push 0x101cfaf4 */
  push32((uint32_t)(0x101cfaf4u));
  /* 101c18ac push 0x101d62d8 */
  push32((uint32_t)(0x101d62d8u));
  /* 101c18b1 call eax */
  call_ind((uint32_t)(EAX), 0x101c18b3u);
  /* 101c18b3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c18b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c18bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c18bd je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c18bf push 0x101cfadc */
  push32((uint32_t)(0x101cfadcu));
  /* 101c18c4 push 0x101d6328 */
  push32((uint32_t)(0x101d6328u));
  /* 101c18c9 call eax */
  call_ind((uint32_t)(EAX), 0x101c18cbu);
  /* 101c18cb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c18d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c18d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c18d5 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c18d7 push 0x101cfac4 */
  push32((uint32_t)(0x101cfac4u));
  /* 101c18dc push 0x101d6320 */
  push32((uint32_t)(0x101d6320u));
  /* 101c18e1 call eax */
  call_ind((uint32_t)(EAX), 0x101c18e3u);
  /* 101c18e3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c18e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c18eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c18ed je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c18ef push 0x101cfaac */
  push32((uint32_t)(0x101cfaacu));
  /* 101c18f4 push 0x101d6318 */
  push32((uint32_t)(0x101d6318u));
  /* 101c18f9 call eax */
  call_ind((uint32_t)(EAX), 0x101c18fbu);
  /* 101c18fb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1905 je 0x101c1923 */
  if (C.zf) goto L_101c1923;
  /* 101c1907 push 0x101cfa94 */
  push32((uint32_t)(0x101cfa94u));
  /* 101c190c push 0x101d6310 */
  push32((uint32_t)(0x101d6310u));
  /* 101c1911 call eax */
  call_ind((uint32_t)(EAX), 0x101c1913u);
  /* 101c1913 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
  /* 101c1919 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c191e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1921 jmp 0x101c1929 */
  goto L_101c1929;
L_101c1923:;
  /* 101c1923 mov ecx, dword ptr [0x101d6348] */
  ECX = (r32((uint32_t)(0x101d6348)));
L_101c1929:;
  /* 101c1929 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c192b je 0x101c1ad5 */
  if (C.zf) goto L_101c1ad5;
  /* 101c1931 push 0x101cfa7c */
  push32((uint32_t)(0x101cfa7cu));
  /* 101c1936 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c193b call ecx */
  call_ind((uint32_t)(ECX), 0x101c193du);
  /* 101c193d mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1947 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c194d push 0x101cfa68 */
  push32((uint32_t)(0x101cfa68u));
  /* 101c1952 push 0x101d60b0 */
  push32((uint32_t)(0x101d60b0u));
  /* 101c1957 call eax */
  call_ind((uint32_t)(EAX), 0x101c1959u);
  /* 101c1959 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1963 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1969 push 0x101cfa50 */
  push32((uint32_t)(0x101cfa50u));
  /* 101c196e push 0x101d6278 */
  push32((uint32_t)(0x101d6278u));
  /* 101c1973 call eax */
  call_ind((uint32_t)(EAX), 0x101c1975u);
  /* 101c1975 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c197d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c197f je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1985 push 0x101cfa3c */
  push32((uint32_t)(0x101cfa3cu));
  /* 101c198a push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c198f call eax */
  call_ind((uint32_t)(EAX), 0x101c1991u);
  /* 101c1991 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c199b je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c19a1 push 0x101cfa28 */
  push32((uint32_t)(0x101cfa28u));
  /* 101c19a6 push 0x101d5f30 */
  push32((uint32_t)(0x101d5f30u));
  /* 101c19ab call eax */
  call_ind((uint32_t)(EAX), 0x101c19adu);
  /* 101c19ad mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c19b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c19b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c19b7 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c19bd push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c19c2 push 0x101d5ed0 */
  push32((uint32_t)(0x101d5ed0u));
  /* 101c19c7 call eax */
  call_ind((uint32_t)(EAX), 0x101c19c9u);
  /* 101c19c9 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c19ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c19d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c19d3 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c19d9 push 0x101cfa1c */
  push32((uint32_t)(0x101cfa1cu));
  /* 101c19de push 0x101d62c0 */
  push32((uint32_t)(0x101d62c0u));
  /* 101c19e3 call eax */
  call_ind((uint32_t)(EAX), 0x101c19e5u);
  /* 101c19e5 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c19ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c19ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c19ef je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c19f5 push 0x101cfa10 */
  push32((uint32_t)(0x101cfa10u));
  /* 101c19fa push 0x101d35b8 */
  push32((uint32_t)(0x101d35b8u));
  /* 101c19ff call eax */
  call_ind((uint32_t)(EAX), 0x101c1a01u);
  /* 101c1a01 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a0b je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a11 push 0x101cfa00 */
  push32((uint32_t)(0x101cfa00u));
  /* 101c1a16 push 0x101d3818 */
  push32((uint32_t)(0x101d3818u));
  /* 101c1a1b call eax */
  call_ind((uint32_t)(EAX), 0x101c1a1du);
  /* 101c1a1d mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a27 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a2d push 0x101cf9f4 */
  push32((uint32_t)(0x101cf9f4u));
  /* 101c1a32 push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c1a37 call eax */
  call_ind((uint32_t)(EAX), 0x101c1a39u);
  /* 101c1a39 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a43 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a49 push 0x101cfa50 */
  push32((uint32_t)(0x101cfa50u));
  /* 101c1a4e push 0x101d37e0 */
  push32((uint32_t)(0x101d37e0u));
  /* 101c1a53 call eax */
  call_ind((uint32_t)(EAX), 0x101c1a55u);
  /* 101c1a55 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a5f je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a61 push 0x101cf9e8 */
  push32((uint32_t)(0x101cf9e8u));
  /* 101c1a66 push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
  /* 101c1a6b call eax */
  call_ind((uint32_t)(EAX), 0x101c1a6du);
  /* 101c1a6d mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a77 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a79 push 0x101cf9dc */
  push32((uint32_t)(0x101cf9dcu));
  /* 101c1a7e push 0x101d5ee0 */
  push32((uint32_t)(0x101d5ee0u));
  /* 101c1a83 call eax */
  call_ind((uint32_t)(EAX), 0x101c1a85u);
  /* 101c1a85 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1a8f je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1a91 push 0x101cf9d0 */
  push32((uint32_t)(0x101cf9d0u));
  /* 101c1a96 push 0x101d62e8 */
  push32((uint32_t)(0x101d62e8u));
  /* 101c1a9b call eax */
  call_ind((uint32_t)(EAX), 0x101c1a9du);
  /* 101c1a9d mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1aa7 je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1aa9 push 0x101cf9c4 */
  push32((uint32_t)(0x101cf9c4u));
  /* 101c1aae push 0x101d5ed8 */
  push32((uint32_t)(0x101d5ed8u));
  /* 101c1ab3 call eax */
  call_ind((uint32_t)(EAX), 0x101c1ab5u);
  /* 101c1ab5 mov eax, dword ptr [0x101d6348] */
  EAX = (r32((uint32_t)(0x101d6348)));
  /* 101c1aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1abf je 0x101c1ad0 */
  if (C.zf) goto L_101c1ad0;
  /* 101c1ac1 push 0x101cf9b4 */
  push32((uint32_t)(0x101cf9b4u));
  /* 101c1ac6 push 0x101d37f0 */
  push32((uint32_t)(0x101d37f0u));
  /* 101c1acb call eax */
  call_ind((uint32_t)(EAX), 0x101c1acdu);
  /* 101c1acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1ad0:;
  /* 101c1ad0 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
L_101c1ad5:;
  /* 101c1ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ad7 je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1add push 0x101cf9a0 */
  push32((uint32_t)(0x101cf9a0u));
  /* 101c1ae2 push 0x101d62c8 */
  push32((uint32_t)(0x101d62c8u));
  /* 101c1ae7 call eax */
  call_ind((uint32_t)(EAX), 0x101c1ae9u);
  /* 101c1ae9 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1af3 je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1af9 push 0x101cf98c */
  push32((uint32_t)(0x101cf98cu));
  /* 101c1afe push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c1b03 call eax */
  call_ind((uint32_t)(EAX), 0x101c1b05u);
  /* 101c1b05 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b0f je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b15 push 0x101cf984 */
  push32((uint32_t)(0x101cf984u));
  /* 101c1b1a push 0x101d35b0 */
  push32((uint32_t)(0x101d35b0u));
  /* 101c1b1f call eax */
  call_ind((uint32_t)(EAX), 0x101c1b21u);
  /* 101c1b21 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b2b je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b31 push 0x101cf970 */
  push32((uint32_t)(0x101cf970u));
  /* 101c1b36 push 0x101d62f0 */
  push32((uint32_t)(0x101d62f0u));
  /* 101c1b3b call eax */
  call_ind((uint32_t)(EAX), 0x101c1b3du);
  /* 101c1b3d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b47 je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b49 push 0x101cf95c */
  push32((uint32_t)(0x101cf95cu));
  /* 101c1b4e push 0x101d62f8 */
  push32((uint32_t)(0x101d62f8u));
  /* 101c1b53 call eax */
  call_ind((uint32_t)(EAX), 0x101c1b55u);
  /* 101c1b55 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b5f je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b61 push 0x101cf948 */
  push32((uint32_t)(0x101cf948u));
  /* 101c1b66 push 0x101d6308 */
  push32((uint32_t)(0x101d6308u));
  /* 101c1b6b call eax */
  call_ind((uint32_t)(EAX), 0x101c1b6du);
  /* 101c1b6d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b77 je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b79 push 0x101cf934 */
  push32((uint32_t)(0x101cf934u));
  /* 101c1b7e push 0x101d6240 */
  push32((uint32_t)(0x101d6240u));
  /* 101c1b83 call eax */
  call_ind((uint32_t)(EAX), 0x101c1b85u);
  /* 101c1b85 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1b8f je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1b91 push 0x101cf920 */
  push32((uint32_t)(0x101cf920u));
  /* 101c1b96 push 0x101d6248 */
  push32((uint32_t)(0x101d6248u));
  /* 101c1b9b call eax */
  call_ind((uint32_t)(EAX), 0x101c1b9du);
  /* 101c1b9d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ba7 je 0x101c1bb8 */
  if (C.zf) goto L_101c1bb8;
  /* 101c1ba9 push 0x101cf90c */
  push32((uint32_t)(0x101cf90cu));
  /* 101c1bae push 0x101d6250 */
  push32((uint32_t)(0x101d6250u));
  /* 101c1bb3 call eax */
  call_ind((uint32_t)(EAX), 0x101c1bb5u);
  /* 101c1bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1bb8:;
  /* 101c1bb8 push 0x101cf970 */
  push32((uint32_t)(0x101cf970u));
  /* 101c1bbd push 0x101d62a0 */
  push32((uint32_t)(0x101d62a0u));
  /* 101c1bc2 call 0x101c2740 */
  push32(0x101c1bc7u); f_101c2740();
  /* 101c1bc7 push 0x101cf95c */
  push32((uint32_t)(0x101cf95cu));
  /* 101c1bcc push 0x101d62a8 */
  push32((uint32_t)(0x101d62a8u));
  /* 101c1bd1 call 0x101c2740 */
  push32(0x101c1bd6u); f_101c2740();
  /* 101c1bd6 push 0x101cf948 */
  push32((uint32_t)(0x101cf948u));
  /* 101c1bdb push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c1be0 call 0x101c2740 */
  push32(0x101c1be5u); f_101c2740();
  /* 101c1be5 push 0x101cf8f8 */
  push32((uint32_t)(0x101cf8f8u));
  /* 101c1bea push 0x101d6298 */
  push32((uint32_t)(0x101d6298u));
  /* 101c1bef call 0x101c2740 */
  push32(0x101c1bf4u); f_101c2740();
  /* 101c1bf4 push 0x101cf8e4 */
  push32((uint32_t)(0x101cf8e4u));
  /* 101c1bf9 push 0x101d62b0 */
  push32((uint32_t)(0x101d62b0u));
  /* 101c1bfe call 0x101c2740 */
  push32(0x101c1c03u); f_101c2740();
  /* 101c1c03 push 0x101cf934 */
  push32((uint32_t)(0x101cf934u));
  /* 101c1c08 push 0x101d61e8 */
  push32((uint32_t)(0x101d61e8u));
  /* 101c1c0d call 0x101c2740 */
  push32(0x101c1c12u); f_101c2740();
  /* 101c1c12 push 0x101cf920 */
  push32((uint32_t)(0x101cf920u));
  /* 101c1c17 push 0x101d61d0 */
  push32((uint32_t)(0x101d61d0u));
  /* 101c1c1c call 0x101c2740 */
  push32(0x101c1c21u); f_101c2740();
  /* 101c1c21 push 0x101cf90c */
  push32((uint32_t)(0x101cf90cu));
  /* 101c1c26 push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c1c2b call 0x101c2740 */
  push32(0x101c1c30u); f_101c2740();
  /* 101c1c30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1c33 push 0x101cf8d0 */
  push32((uint32_t)(0x101cf8d0u));
  /* 101c1c38 push 0x101d61f0 */
  push32((uint32_t)(0x101d61f0u));
  /* 101c1c3d call 0x101c2740 */
  push32(0x101c1c42u); f_101c2740();
  /* 101c1c42 push 0x101cf8bc */
  push32((uint32_t)(0x101cf8bcu));
  /* 101c1c47 push 0x101d61f8 */
  push32((uint32_t)(0x101d61f8u));
  /* 101c1c4c call 0x101c2740 */
  push32(0x101c1c51u); f_101c2740();
  /* 101c1c51 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1c56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1c5b je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1c61 push 0x101cf8a8 */
  push32((uint32_t)(0x101cf8a8u));
  /* 101c1c66 push 0x101d3860 */
  push32((uint32_t)(0x101d3860u));
  /* 101c1c6b call eax */
  call_ind((uint32_t)(EAX), 0x101c1c6du);
  /* 101c1c6d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1c77 je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1c79 push 0x101cf894 */
  push32((uint32_t)(0x101cf894u));
  /* 101c1c7e push 0x101d3868 */
  push32((uint32_t)(0x101d3868u));
  /* 101c1c83 call eax */
  call_ind((uint32_t)(EAX), 0x101c1c85u);
  /* 101c1c85 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1c8f je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1c91 push 0x101cf880 */
  push32((uint32_t)(0x101cf880u));
  /* 101c1c96 push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c1c9b call eax */
  call_ind((uint32_t)(EAX), 0x101c1c9du);
  /* 101c1c9d mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ca7 je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1ca9 push 0x101cf86c */
  push32((uint32_t)(0x101cf86cu));
  /* 101c1cae push 0x101d5ec8 */
  push32((uint32_t)(0x101d5ec8u));
  /* 101c1cb3 call eax */
  call_ind((uint32_t)(EAX), 0x101c1cb5u);
  /* 101c1cb5 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1cbf je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1cc1 push 0x101cf858 */
  push32((uint32_t)(0x101cf858u));
  /* 101c1cc6 push 0x101d5eb8 */
  push32((uint32_t)(0x101d5eb8u));
  /* 101c1ccb call eax */
  call_ind((uint32_t)(EAX), 0x101c1ccdu);
  /* 101c1ccd mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1cd7 je 0x101c1ce8 */
  if (C.zf) goto L_101c1ce8;
  /* 101c1cd9 push 0x101cf844 */
  push32((uint32_t)(0x101cf844u));
  /* 101c1cde push 0x101d5ec0 */
  push32((uint32_t)(0x101d5ec0u));
  /* 101c1ce3 call eax */
  call_ind((uint32_t)(EAX), 0x101c1ce5u);
  /* 101c1ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1ce8:;
  /* 101c1ce8 push 0x101cf83c */
  push32((uint32_t)(0x101cf83cu));
  /* 101c1ced push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1cf2 call 0x101c2fd0 */
  push32(0x101c1cf7u); f_101c2fd0();
  /* 101c1cf7 push eax */
  push32((uint32_t)(EAX));
  /* 101c1cf8 push 0x101d5f68 */
  push32((uint32_t)(0x101d5f68u));
  /* 101c1cfd call 0x101c2740 */
  push32(0x101c1d02u); f_101c2740();
  /* 101c1d02 push 0x101cf834 */
  push32((uint32_t)(0x101cf834u));
  /* 101c1d07 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d0c call 0x101c2fd0 */
  push32(0x101c1d11u); f_101c2fd0();
  /* 101c1d11 push eax */
  push32((uint32_t)(EAX));
  /* 101c1d12 push 0x101d5f60 */
  push32((uint32_t)(0x101d5f60u));
  /* 101c1d17 call 0x101c2740 */
  push32(0x101c1d1cu); f_101c2740();
  /* 101c1d1c push 0x101cf82c */
  push32((uint32_t)(0x101cf82cu));
  /* 101c1d21 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d26 call 0x101c2fd0 */
  push32(0x101c1d2bu); f_101c2fd0();
  /* 101c1d2b push eax */
  push32((uint32_t)(EAX));
  /* 101c1d2c push 0x101d5f58 */
  push32((uint32_t)(0x101d5f58u));
  /* 101c1d31 call 0x101c2740 */
  push32(0x101c1d36u); f_101c2740();
  /* 101c1d36 push 0x101cf824 */
  push32((uint32_t)(0x101cf824u));
  /* 101c1d3b push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d40 call 0x101c2fd0 */
  push32(0x101c1d45u); f_101c2fd0();
  /* 101c1d45 push eax */
  push32((uint32_t)(EAX));
  /* 101c1d46 push 0x101d5f50 */
  push32((uint32_t)(0x101d5f50u));
  /* 101c1d4b call 0x101c2740 */
  push32(0x101c1d50u); f_101c2740();
  /* 101c1d50 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1d53 push 0x101cf81c */
  push32((uint32_t)(0x101cf81cu));
  /* 101c1d58 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d5d call 0x101c2fd0 */
  push32(0x101c1d62u); f_101c2fd0();
  /* 101c1d62 push eax */
  push32((uint32_t)(EAX));
  /* 101c1d63 push 0x101d5f48 */
  push32((uint32_t)(0x101d5f48u));
  /* 101c1d68 call 0x101c2740 */
  push32(0x101c1d6du); f_101c2740();
  /* 101c1d6d push 0x101cf814 */
  push32((uint32_t)(0x101cf814u));
  /* 101c1d72 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d77 call 0x101c2fd0 */
  push32(0x101c1d7cu); f_101c2fd0();
  /* 101c1d7c push eax */
  push32((uint32_t)(EAX));
  /* 101c1d7d push 0x101d5f40 */
  push32((uint32_t)(0x101d5f40u));
  /* 101c1d82 call 0x101c2740 */
  push32(0x101c1d87u); f_101c2740();
  /* 101c1d87 push 0x101cf80c */
  push32((uint32_t)(0x101cf80cu));
  /* 101c1d8c push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1d91 call 0x101c2fd0 */
  push32(0x101c1d96u); f_101c2fd0();
  /* 101c1d96 push eax */
  push32((uint32_t)(EAX));
  /* 101c1d97 push 0x101d6080 */
  push32((uint32_t)(0x101d6080u));
  /* 101c1d9c call 0x101c2740 */
  push32(0x101c1da1u); f_101c2740();
  /* 101c1da1 push 0x101cf804 */
  push32((uint32_t)(0x101cf804u));
  /* 101c1da6 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1dab call 0x101c2fd0 */
  push32(0x101c1db0u); f_101c2fd0();
  /* 101c1db0 push eax */
  push32((uint32_t)(EAX));
  /* 101c1db1 push 0x101d6078 */
  push32((uint32_t)(0x101d6078u));
  /* 101c1db6 call 0x101c2740 */
  push32(0x101c1dbbu); f_101c2740();
  /* 101c1dbb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1dbe push 0x101cf7fc */
  push32((uint32_t)(0x101cf7fcu));
  /* 101c1dc3 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1dc8 call 0x101c2fd0 */
  push32(0x101c1dcdu); f_101c2fd0();
  /* 101c1dcd push eax */
  push32((uint32_t)(EAX));
  /* 101c1dce push 0x101d6070 */
  push32((uint32_t)(0x101d6070u));
  /* 101c1dd3 call 0x101c2740 */
  push32(0x101c1dd8u); f_101c2740();
  /* 101c1dd8 push 0x101cf7f4 */
  push32((uint32_t)(0x101cf7f4u));
  /* 101c1ddd push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1de2 call 0x101c2fd0 */
  push32(0x101c1de7u); f_101c2fd0();
  /* 101c1de7 push eax */
  push32((uint32_t)(EAX));
  /* 101c1de8 push 0x101d6068 */
  push32((uint32_t)(0x101d6068u));
  /* 101c1ded call 0x101c2740 */
  push32(0x101c1df2u); f_101c2740();
  /* 101c1df2 push 0x101cf7ec */
  push32((uint32_t)(0x101cf7ecu));
  /* 101c1df7 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1dfc call 0x101c2fd0 */
  push32(0x101c1e01u); f_101c2fd0();
  /* 101c1e01 push eax */
  push32((uint32_t)(EAX));
  /* 101c1e02 push 0x101d6058 */
  push32((uint32_t)(0x101d6058u));
  /* 101c1e07 call 0x101c2740 */
  push32(0x101c1e0cu); f_101c2740();
  /* 101c1e0c push 0x101cf7e4 */
  push32((uint32_t)(0x101cf7e4u));
  /* 101c1e11 push 0x101d6168 */
  push32((uint32_t)(0x101d6168u));
  /* 101c1e16 call 0x101c2fd0 */
  push32(0x101c1e1bu); f_101c2fd0();
  /* 101c1e1b push eax */
  push32((uint32_t)(EAX));
  /* 101c1e1c push 0x101d60a8 */
  push32((uint32_t)(0x101d60a8u));
  /* 101c1e21 call 0x101c2740 */
  push32(0x101c1e26u); f_101c2740();
  /* 101c1e26 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1e2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1e30 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1e36 push 0x101cf7d0 */
  push32((uint32_t)(0x101cf7d0u));
  /* 101c1e3b push 0x101d3608 */
  push32((uint32_t)(0x101d3608u));
  /* 101c1e40 call eax */
  call_ind((uint32_t)(EAX), 0x101c1e42u);
  /* 101c1e42 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1e4c je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1e52 push 0x101cf7bc */
  push32((uint32_t)(0x101cf7bcu));
  /* 101c1e57 push 0x101d3600 */
  push32((uint32_t)(0x101d3600u));
  /* 101c1e5c call eax */
  call_ind((uint32_t)(EAX), 0x101c1e5eu);
  /* 101c1e5e mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1e68 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1e6e push 0x101cf7a8 */
  push32((uint32_t)(0x101cf7a8u));
  /* 101c1e73 push 0x101d35f8 */
  push32((uint32_t)(0x101d35f8u));
  /* 101c1e78 call eax */
  call_ind((uint32_t)(EAX), 0x101c1e7au);
  /* 101c1e7a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1e84 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1e8a push 0x101cf794 */
  push32((uint32_t)(0x101cf794u));
  /* 101c1e8f push 0x101d35f0 */
  push32((uint32_t)(0x101d35f0u));
  /* 101c1e94 call eax */
  call_ind((uint32_t)(EAX), 0x101c1e96u);
  /* 101c1e96 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ea0 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1ea6 push 0x101cf780 */
  push32((uint32_t)(0x101cf780u));
  /* 101c1eab push 0x101d35c8 */
  push32((uint32_t)(0x101d35c8u));
  /* 101c1eb0 call eax */
  call_ind((uint32_t)(EAX), 0x101c1eb2u);
  /* 101c1eb2 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ebc je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1ec2 push 0x101cf76c */
  push32((uint32_t)(0x101cf76cu));
  /* 101c1ec7 push 0x101d35c0 */
  push32((uint32_t)(0x101d35c0u));
  /* 101c1ecc call eax */
  call_ind((uint32_t)(EAX), 0x101c1eceu);
  /* 101c1ece mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1ed6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ed8 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1ede push 0x101cf758 */
  push32((uint32_t)(0x101cf758u));
  /* 101c1ee3 push 0x101d3698 */
  push32((uint32_t)(0x101d3698u));
  /* 101c1ee8 call eax */
  call_ind((uint32_t)(EAX), 0x101c1eeau);
  /* 101c1eea mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1ef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1ef4 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1ef6 push 0x101cf744 */
  push32((uint32_t)(0x101cf744u));
  /* 101c1efb push 0x101d3690 */
  push32((uint32_t)(0x101d3690u));
  /* 101c1f00 call eax */
  call_ind((uint32_t)(EAX), 0x101c1f02u);
  /* 101c1f02 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1f07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1f0c je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1f0e push 0x101cf730 */
  push32((uint32_t)(0x101cf730u));
  /* 101c1f13 push 0x101d3688 */
  push32((uint32_t)(0x101d3688u));
  /* 101c1f18 call eax */
  call_ind((uint32_t)(EAX), 0x101c1f1au);
  /* 101c1f1a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1f1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1f24 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1f26 push 0x101cf71c */
  push32((uint32_t)(0x101cf71cu));
  /* 101c1f2b push 0x101d3670 */
  push32((uint32_t)(0x101d3670u));
  /* 101c1f30 call eax */
  call_ind((uint32_t)(EAX), 0x101c1f32u);
  /* 101c1f32 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1f3c je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1f3e push 0x101cf708 */
  push32((uint32_t)(0x101cf708u));
  /* 101c1f43 push 0x101d3668 */
  push32((uint32_t)(0x101d3668u));
  /* 101c1f48 call eax */
  call_ind((uint32_t)(EAX), 0x101c1f4au);
  /* 101c1f4a mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c1f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c1f54 je 0x101c1f65 */
  if (C.zf) goto L_101c1f65;
  /* 101c1f56 push 0x101cf6f4 */
  push32((uint32_t)(0x101cf6f4u));
  /* 101c1f5b push 0x101d3660 */
  push32((uint32_t)(0x101d3660u));
  /* 101c1f60 call eax */
  call_ind((uint32_t)(EAX), 0x101c1f62u);
  /* 101c1f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c1f65:;
  /* 101c1f65 push 0x101cf83c */
  push32((uint32_t)(0x101cf83cu));
  /* 101c1f6a push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1f6f call 0x101c2fd0 */
  push32(0x101c1f74u); f_101c2fd0();
  /* 101c1f74 push eax */
  push32((uint32_t)(EAX));
  /* 101c1f75 push 0x101d3630 */
  push32((uint32_t)(0x101d3630u));
  /* 101c1f7a call 0x101c2740 */
  push32(0x101c1f7fu); f_101c2740();
  /* 101c1f7f push 0x101cf834 */
  push32((uint32_t)(0x101cf834u));
  /* 101c1f84 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1f89 call 0x101c2fd0 */
  push32(0x101c1f8eu); f_101c2fd0();
  /* 101c1f8e push eax */
  push32((uint32_t)(EAX));
  /* 101c1f8f push 0x101d3638 */
  push32((uint32_t)(0x101d3638u));
  /* 101c1f94 call 0x101c2740 */
  push32(0x101c1f99u); f_101c2740();
  /* 101c1f99 push 0x101cf82c */
  push32((uint32_t)(0x101cf82cu));
  /* 101c1f9e push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1fa3 call 0x101c2fd0 */
  push32(0x101c1fa8u); f_101c2fd0();
  /* 101c1fa8 push eax */
  push32((uint32_t)(EAX));
  /* 101c1fa9 push 0x101d3640 */
  push32((uint32_t)(0x101d3640u));
  /* 101c1fae call 0x101c2740 */
  push32(0x101c1fb3u); f_101c2740();
  /* 101c1fb3 push 0x101cf824 */
  push32((uint32_t)(0x101cf824u));
  /* 101c1fb8 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1fbd call 0x101c2fd0 */
  push32(0x101c1fc2u); f_101c2fd0();
  /* 101c1fc2 push eax */
  push32((uint32_t)(EAX));
  /* 101c1fc3 push 0x101d3648 */
  push32((uint32_t)(0x101d3648u));
  /* 101c1fc8 call 0x101c2740 */
  push32(0x101c1fcdu); f_101c2740();
  /* 101c1fcd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c1fd0 push 0x101cf81c */
  push32((uint32_t)(0x101cf81cu));
  /* 101c1fd5 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1fda call 0x101c2fd0 */
  push32(0x101c1fdfu); f_101c2fd0();
  /* 101c1fdf push eax */
  push32((uint32_t)(EAX));
  /* 101c1fe0 push 0x101d3610 */
  push32((uint32_t)(0x101d3610u));
  /* 101c1fe5 call 0x101c2740 */
  push32(0x101c1feau); f_101c2740();
  /* 101c1fea push 0x101cf814 */
  push32((uint32_t)(0x101cf814u));
  /* 101c1fef push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c1ff4 call 0x101c2fd0 */
  push32(0x101c1ff9u); f_101c2fd0();
  /* 101c1ff9 push eax */
  push32((uint32_t)(EAX));
  /* 101c1ffa push 0x101d3620 */
  push32((uint32_t)(0x101d3620u));
  /* 101c1fff call 0x101c2740 */
  push32(0x101c2004u); f_101c2740();
  /* 101c2004 push 0x101cf80c */
  push32((uint32_t)(0x101cf80cu));
  /* 101c2009 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c200e call 0x101c2fd0 */
  push32(0x101c2013u); f_101c2fd0();
  /* 101c2013 push eax */
  push32((uint32_t)(EAX));
  /* 101c2014 push 0x101d36d8 */
  push32((uint32_t)(0x101d36d8u));
  /* 101c2019 call 0x101c2740 */
  push32(0x101c201eu); f_101c2740();
  /* 101c201e push 0x101cf804 */
  push32((uint32_t)(0x101cf804u));
  /* 101c2023 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c2028 call 0x101c2fd0 */
  push32(0x101c202du); f_101c2fd0();
  /* 101c202d push eax */
  push32((uint32_t)(EAX));
  /* 101c202e push 0x101d36e0 */
  push32((uint32_t)(0x101d36e0u));
  /* 101c2033 call 0x101c2740 */
  push32(0x101c2038u); f_101c2740();
  /* 101c2038 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c203b push 0x101cf7fc */
  push32((uint32_t)(0x101cf7fcu));
  /* 101c2040 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c2045 call 0x101c2fd0 */
  push32(0x101c204au); f_101c2fd0();
  /* 101c204a push eax */
  push32((uint32_t)(EAX));
  /* 101c204b push 0x101d36e8 */
  push32((uint32_t)(0x101d36e8u));
  /* 101c2050 call 0x101c2740 */
  push32(0x101c2055u); f_101c2740();
  /* 101c2055 push 0x101cf7f4 */
  push32((uint32_t)(0x101cf7f4u));
  /* 101c205a push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c205f call 0x101c2fd0 */
  push32(0x101c2064u); f_101c2fd0();
  /* 101c2064 push eax */
  push32((uint32_t)(EAX));
  /* 101c2065 push 0x101d36c0 */
  push32((uint32_t)(0x101d36c0u));
  /* 101c206a call 0x101c2740 */
  push32(0x101c206fu); f_101c2740();
  /* 101c206f push 0x101cf7ec */
  push32((uint32_t)(0x101cf7ecu));
  /* 101c2074 push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c2079 call 0x101c2fd0 */
  push32(0x101c207eu); f_101c2fd0();
  /* 101c207e push eax */
  push32((uint32_t)(EAX));
  /* 101c207f push 0x101d36c8 */
  push32((uint32_t)(0x101d36c8u));
  /* 101c2084 call 0x101c2740 */
  push32(0x101c2089u); f_101c2740();
  /* 101c2089 push 0x101cf7e4 */
  push32((uint32_t)(0x101cf7e4u));
  /* 101c208e push 0x101d5f98 */
  push32((uint32_t)(0x101d5f98u));
  /* 101c2093 call 0x101c2fd0 */
  push32(0x101c2098u); f_101c2fd0();
  /* 101c2098 push eax */
  push32((uint32_t)(EAX));
  /* 101c2099 push 0x101d36d0 */
  push32((uint32_t)(0x101d36d0u));
  /* 101c209e call 0x101c2740 */
  push32(0x101c20a3u); f_101c2740();
  /* 101c20a3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c20a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c20ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c20ad je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c20b3 push 0x101cf6e4 */
  push32((uint32_t)(0x101cf6e4u));
  /* 101c20b8 push 0x101d6128 */
  push32((uint32_t)(0x101d6128u));
  /* 101c20bd call eax */
  call_ind((uint32_t)(EAX), 0x101c20bfu);
  /* 101c20bf mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c20c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c20c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c20c9 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c20cf push 0x101cf6d0 */
  push32((uint32_t)(0x101cf6d0u));
  /* 101c20d4 push 0x101d6120 */
  push32((uint32_t)(0x101d6120u));
  /* 101c20d9 call eax */
  call_ind((uint32_t)(EAX), 0x101c20dbu);
  /* 101c20db mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c20e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c20e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c20e5 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c20eb push 0x101cf6bc */
  push32((uint32_t)(0x101cf6bcu));
  /* 101c20f0 push 0x101d60f0 */
  push32((uint32_t)(0x101d60f0u));
  /* 101c20f5 call eax */
  call_ind((uint32_t)(EAX), 0x101c20f7u);
  /* 101c20f7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c20fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c20ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2101 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2107 push 0x101cf6a8 */
  push32((uint32_t)(0x101cf6a8u));
  /* 101c210c push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c2111 call eax */
  call_ind((uint32_t)(EAX), 0x101c2113u);
  /* 101c2113 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c211b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c211d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2123 push 0x101cf694 */
  push32((uint32_t)(0x101cf694u));
  /* 101c2128 push 0x101d60f8 */
  push32((uint32_t)(0x101d60f8u));
  /* 101c212d call eax */
  call_ind((uint32_t)(EAX), 0x101c212fu);
  /* 101c212f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2139 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c213f push 0x101cf680 */
  push32((uint32_t)(0x101cf680u));
  /* 101c2144 push 0x101d5fe8 */
  push32((uint32_t)(0x101d5fe8u));
  /* 101c2149 call eax */
  call_ind((uint32_t)(EAX), 0x101c214bu);
  /* 101c214b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2155 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c215b push 0x101cf66c */
  push32((uint32_t)(0x101cf66cu));
  /* 101c2160 push 0x101d5ff0 */
  push32((uint32_t)(0x101d5ff0u));
  /* 101c2165 call eax */
  call_ind((uint32_t)(EAX), 0x101c2167u);
  /* 101c2167 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c216c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c216f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2171 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2177 push 0x101cf658 */
  push32((uint32_t)(0x101cf658u));
  /* 101c217c push 0x101d5ff8 */
  push32((uint32_t)(0x101d5ff8u));
  /* 101c2181 call eax */
  call_ind((uint32_t)(EAX), 0x101c2183u);
  /* 101c2183 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c218d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2193 push 0x101cf644 */
  push32((uint32_t)(0x101cf644u));
  /* 101c2198 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c219d call eax */
  call_ind((uint32_t)(EAX), 0x101c219fu);
  /* 101c219f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c21a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c21a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c21a9 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c21af push 0x101cf63c */
  push32((uint32_t)(0x101cf63cu));
  /* 101c21b4 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c21b9 call eax */
  call_ind((uint32_t)(EAX), 0x101c21bbu);
  /* 101c21bb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c21c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c21c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c21c5 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c21cb push 0x101cf634 */
  push32((uint32_t)(0x101cf634u));
  /* 101c21d0 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c21d5 call eax */
  call_ind((uint32_t)(EAX), 0x101c21d7u);
  /* 101c21d7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c21dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c21df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c21e1 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c21e7 push 0x101cf62c */
  push32((uint32_t)(0x101cf62cu));
  /* 101c21ec push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c21f1 call eax */
  call_ind((uint32_t)(EAX), 0x101c21f3u);
  /* 101c21f3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c21f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c21fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c21fd je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2203 push 0x101cf624 */
  push32((uint32_t)(0x101cf624u));
  /* 101c2208 push 0x101d5fc8 */
  push32((uint32_t)(0x101d5fc8u));
  /* 101c220d call eax */
  call_ind((uint32_t)(EAX), 0x101c220fu);
  /* 101c220f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2219 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c221f push 0x101cf61c */
  push32((uint32_t)(0x101cf61cu));
  /* 101c2224 push 0x101d5f80 */
  push32((uint32_t)(0x101d5f80u));
  /* 101c2229 call eax */
  call_ind((uint32_t)(EAX), 0x101c222bu);
  /* 101c222b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2235 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c223b push 0x101cf614 */
  push32((uint32_t)(0x101cf614u));
  /* 101c2240 push 0x101d5f88 */
  push32((uint32_t)(0x101d5f88u));
  /* 101c2245 call eax */
  call_ind((uint32_t)(EAX), 0x101c2247u);
  /* 101c2247 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c224c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c224f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2251 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2257 push 0x101cf60c */
  push32((uint32_t)(0x101cf60cu));
  /* 101c225c push 0x101d5f90 */
  push32((uint32_t)(0x101d5f90u));
  /* 101c2261 call eax */
  call_ind((uint32_t)(EAX), 0x101c2263u);
  /* 101c2263 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c226b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c226d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2273 push 0x101cf604 */
  push32((uint32_t)(0x101cf604u));
  /* 101c2278 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c227d call eax */
  call_ind((uint32_t)(EAX), 0x101c227fu);
  /* 101c227f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2289 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c228f push 0x101cf5fc */
  push32((uint32_t)(0x101cf5fcu));
  /* 101c2294 push 0x101d6060 */
  push32((uint32_t)(0x101d6060u));
  /* 101c2299 call eax */
  call_ind((uint32_t)(EAX), 0x101c229bu);
  /* 101c229b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c22a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c22a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c22a5 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c22ab push 0x101cf5f4 */
  push32((uint32_t)(0x101cf5f4u));
  /* 101c22b0 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c22b5 call eax */
  call_ind((uint32_t)(EAX), 0x101c22b7u);
  /* 101c22b7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c22bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c22bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c22c1 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c22c7 push 0x101cf5ec */
  push32((uint32_t)(0x101cf5ecu));
  /* 101c22cc push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c22d1 call eax */
  call_ind((uint32_t)(EAX), 0x101c22d3u);
  /* 101c22d3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c22d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c22db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c22dd je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c22e3 push 0x101cf5e4 */
  push32((uint32_t)(0x101cf5e4u));
  /* 101c22e8 push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c22ed call eax */
  call_ind((uint32_t)(EAX), 0x101c22efu);
  /* 101c22ef mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c22f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c22f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c22f9 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c22ff push 0x101cf5dc */
  push32((uint32_t)(0x101cf5dcu));
  /* 101c2304 push 0x101d60b8 */
  push32((uint32_t)(0x101d60b8u));
  /* 101c2309 call eax */
  call_ind((uint32_t)(EAX), 0x101c230bu);
  /* 101c230b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2315 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c231b push 0x101cf5d4 */
  push32((uint32_t)(0x101cf5d4u));
  /* 101c2320 push 0x101d60c8 */
  push32((uint32_t)(0x101d60c8u));
  /* 101c2325 call eax */
  call_ind((uint32_t)(EAX), 0x101c2327u);
  /* 101c2327 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c232c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c232f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2331 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2337 push 0x101cf5cc */
  push32((uint32_t)(0x101cf5ccu));
  /* 101c233c push 0x101d60d0 */
  push32((uint32_t)(0x101d60d0u));
  /* 101c2341 call eax */
  call_ind((uint32_t)(EAX), 0x101c2343u);
  /* 101c2343 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c234d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2353 push 0x101cf5c4 */
  push32((uint32_t)(0x101cf5c4u));
  /* 101c2358 push 0x101d60c0 */
  push32((uint32_t)(0x101d60c0u));
  /* 101c235d call eax */
  call_ind((uint32_t)(EAX), 0x101c235fu);
  /* 101c235f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2369 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c236f push 0x101cf5bc */
  push32((uint32_t)(0x101cf5bcu));
  /* 101c2374 push 0x101d38a0 */
  push32((uint32_t)(0x101d38a0u));
  /* 101c2379 call eax */
  call_ind((uint32_t)(EAX), 0x101c237bu);
  /* 101c237b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2385 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c238b push 0x101cf5b4 */
  push32((uint32_t)(0x101cf5b4u));
  /* 101c2390 push 0x101d3830 */
  push32((uint32_t)(0x101d3830u));
  /* 101c2395 call eax */
  call_ind((uint32_t)(EAX), 0x101c2397u);
  /* 101c2397 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c239c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c23a1 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c23a7 push 0x101cf5ac */
  push32((uint32_t)(0x101cf5acu));
  /* 101c23ac push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c23b1 call eax */
  call_ind((uint32_t)(EAX), 0x101c23b3u);
  /* 101c23b3 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c23b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c23bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c23bd je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c23c3 push 0x101cf5a4 */
  push32((uint32_t)(0x101cf5a4u));
  /* 101c23c8 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c23cd call eax */
  call_ind((uint32_t)(EAX), 0x101c23cfu);
  /* 101c23cf mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c23d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c23d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c23d9 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c23df push 0x101cf59c */
  push32((uint32_t)(0x101cf59cu));
  /* 101c23e4 push 0x101d3890 */
  push32((uint32_t)(0x101d3890u));
  /* 101c23e9 call eax */
  call_ind((uint32_t)(EAX), 0x101c23ebu);
  /* 101c23eb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c23f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c23f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c23f5 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c23fb push 0x101cf594 */
  push32((uint32_t)(0x101cf594u));
  /* 101c2400 push 0x101d6148 */
  push32((uint32_t)(0x101d6148u));
  /* 101c2405 call eax */
  call_ind((uint32_t)(EAX), 0x101c2407u);
  /* 101c2407 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c240c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c240f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2411 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2417 push 0x101cf58c */
  push32((uint32_t)(0x101cf58cu));
  /* 101c241c push 0x101d6150 */
  push32((uint32_t)(0x101d6150u));
  /* 101c2421 call eax */
  call_ind((uint32_t)(EAX), 0x101c2423u);
  /* 101c2423 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c242b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c242d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2433 push 0x101cf584 */
  push32((uint32_t)(0x101cf584u));
  /* 101c2438 push 0x101d37c0 */
  push32((uint32_t)(0x101d37c0u));
  /* 101c243d call eax */
  call_ind((uint32_t)(EAX), 0x101c243fu);
  /* 101c243f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2449 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c244f push 0x101cf57c */
  push32((uint32_t)(0x101cf57cu));
  /* 101c2454 push 0x101d37d0 */
  push32((uint32_t)(0x101d37d0u));
  /* 101c2459 call eax */
  call_ind((uint32_t)(EAX), 0x101c245bu);
  /* 101c245b mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2465 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c246b push 0x101cf574 */
  push32((uint32_t)(0x101cf574u));
  /* 101c2470 push 0x101d36b8 */
  push32((uint32_t)(0x101d36b8u));
  /* 101c2475 call eax */
  call_ind((uint32_t)(EAX), 0x101c2477u);
  /* 101c2477 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c247c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c247f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2481 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2487 push 0x101cf56c */
  push32((uint32_t)(0x101cf56cu));
  /* 101c248c push 0x101d3578 */
  push32((uint32_t)(0x101d3578u));
  /* 101c2491 call eax */
  call_ind((uint32_t)(EAX), 0x101c2493u);
  /* 101c2493 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c249b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c249d je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c24a3 push 0x101cf564 */
  push32((uint32_t)(0x101cf564u));
  /* 101c24a8 push 0x101d3658 */
  push32((uint32_t)(0x101d3658u));
  /* 101c24ad call eax */
  call_ind((uint32_t)(EAX), 0x101c24afu);
  /* 101c24af mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c24b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c24b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c24b9 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c24bf push 0x101cf55c */
  push32((uint32_t)(0x101cf55cu));
  /* 101c24c4 push 0x101d3580 */
  push32((uint32_t)(0x101d3580u));
  /* 101c24c9 call eax */
  call_ind((uint32_t)(EAX), 0x101c24cbu);
  /* 101c24cb mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c24d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c24d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c24d5 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c24db push 0x101cf548 */
  push32((uint32_t)(0x101cf548u));
  /* 101c24e0 push 0x101d6238 */
  push32((uint32_t)(0x101d6238u));
  /* 101c24e5 call eax */
  call_ind((uint32_t)(EAX), 0x101c24e7u);
  /* 101c24e7 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c24ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c24ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c24f1 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c24f3 push 0x101cf534 */
  push32((uint32_t)(0x101cf534u));
  /* 101c24f8 push 0x101d6220 */
  push32((uint32_t)(0x101d6220u));
  /* 101c24fd call eax */
  call_ind((uint32_t)(EAX), 0x101c24ffu);
  /* 101c24ff mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2509 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c250b push 0x101cf520 */
  push32((uint32_t)(0x101cf520u));
  /* 101c2510 push 0x101d6230 */
  push32((uint32_t)(0x101d6230u));
  /* 101c2515 call eax */
  call_ind((uint32_t)(EAX), 0x101c2517u);
  /* 101c2517 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c251c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c251f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2521 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2523 push 0x101cf50c */
  push32((uint32_t)(0x101cf50cu));
  /* 101c2528 push 0x101d6210 */
  push32((uint32_t)(0x101d6210u));
  /* 101c252d call eax */
  call_ind((uint32_t)(EAX), 0x101c252fu);
  /* 101c252f mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c2534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2539 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c253b push 0x101cf4f8 */
  push32((uint32_t)(0x101cf4f8u));
  /* 101c2540 push 0x101d6218 */
  push32((uint32_t)(0x101d6218u));
  /* 101c2545 call eax */
  call_ind((uint32_t)(EAX), 0x101c2547u);
  /* 101c2547 mov eax, dword ptr [0x101d634c] */
  EAX = (r32((uint32_t)(0x101d634c)));
  /* 101c254c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c254f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c2551 je 0x101c2562 */
  if (C.zf) goto L_101c2562;
  /* 101c2553 push 0x101cf4e4 */
  push32((uint32_t)(0x101cf4e4u));
  /* 101c2558 push 0x101d6208 */
  push32((uint32_t)(0x101d6208u));
  /* 101c255d call eax */
  call_ind((uint32_t)(EAX), 0x101c255fu);
  /* 101c255f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c2562:;
  /* 101c2562 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c2564 call dword ptr [0x101d6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6470))), 0x101c256au);
  /* 101c256a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c256c push 0x101cf4d0 */
  push32((uint32_t)(0x101cf4d0u));
  /* 101c2571 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c2573 call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c2579u);
  /* 101c2579 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c257b push 0x101cf4bc */
  push32((uint32_t)(0x101cf4bcu));
  /* 101c2580 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c2582 call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c2588u);
  /* 101c2588 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c258a push 0x101cf4a8 */
  push32((uint32_t)(0x101cf4a8u));
  /* 101c258f push 2 */
  push32((uint32_t)(0x2u));
  /* 101c2591 call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c2597u);
  /* 101c2597 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c2599 push 0x101cf494 */
  push32((uint32_t)(0x101cf494u));
  /* 101c259e push 3 */
  push32((uint32_t)(0x3u));
  /* 101c25a0 call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c25a6u);
  /* 101c25a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c25a8 push 0x101cf480 */
  push32((uint32_t)(0x101cf480u));
  /* 101c25ad push 4 */
  push32((uint32_t)(0x4u));
  /* 101c25af call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c25b5u);
  /* 101c25b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c25b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c25ba push 0x101cf46c */
  push32((uint32_t)(0x101cf46cu));
  /* 101c25bf push 5 */
  push32((uint32_t)(0x5u));
  /* 101c25c1 call dword ptr [0x101d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6474))), 0x101c25c7u);
  /* 101c25c7 push 0x101cfe3c */
  push32((uint32_t)(0x101cfe3cu));
  /* 101c25cc call 0x101c2730 */
  push32(0x101c25d1u); f_101c2730();
  /* 101c25d1 push 0x101cf460 */
  push32((uint32_t)(0x101cf460u));
  /* 101c25d6 call dword ptr [0x101d64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64ac))), 0x101c25dcu);
  /* 101c25dc push 0x101cf454 */
  push32((uint32_t)(0x101cf454u));
  /* 101c25e1 call dword ptr [0x101d64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64b4))), 0x101c25e7u);
  /* 101c25e7 push 0x101cf448 */
  push32((uint32_t)(0x101cf448u));
  /* 101c25ec call dword ptr [0x101d64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64bc))), 0x101c25f2u);
  /* 101c25f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c25f5 ret  */
  ESPCHK(0x101c1000u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x101c2600 (123 bytes, 28 insns) */
void f_101c2600(void) {
  FTRACE(0x101c2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2600 call dword ptr [0x101d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6450))), 0x101c2606u);
  /* 101c2606 mov dword ptr [0x101d6204], eax */
  w32((uint32_t)(0x101d6204), (EAX));
  /* 101c260b call 0x101c1000 */
  push32(0x101c2610u); f_101c1000();
  /* 101c2610 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101c2615 call dword ptr [0x101d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6478))), 0x101c261bu);
  /* 101c261b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c261d call dword ptr [0x101d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d647c))), 0x101c2623u);
  /* 101c2623 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c2625 call dword ptr [0x101d6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6480))), 0x101c262bu);
  /* 101c262b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c2630 call dword ptr [0x101d6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6484))), 0x101c2636u);
  /* 101c2636 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c2638 call dword ptr [0x101d6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6488))), 0x101c263eu);
  /* 101c263e mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c2643 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2646 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101c2649 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101c264c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101c264f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101c2652 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c2654 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101c2657 mov dword ptr [eax + 0x101d3a40], ecx */
  w32((uint32_t)(EAX + 0x101d3a40), (ECX));
  /* 101c265d mov dword ptr [eax + 0x101d3bd4], ecx */
  w32((uint32_t)(EAX + 0x101d3bd4), (ECX));
  /* 101c2663 call 0x101c2760 */
  push32(0x101c2668u); f_101c2760();
  /* 101c2668 mov edx, dword ptr [0x101d6204] */
  EDX = (r32((uint32_t)(0x101d6204)));
  /* 101c266e and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 101c2673 mov dword ptr [edx*4 + 0x101d5ee8], eax */
  w32((uint32_t)(EDX*4 + 0x101d5ee8), (EAX));
  /* 101c267a ret  */
  ESPCHK(0x101c2600u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x101c2680 (16 bytes, 3 insns) */
void f_101c2680(void) {
  FTRACE(0x101c2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2680 call dword ptr [0x101d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6450))), 0x101c2686u);
  /* 101c2686 mov dword ptr [0x101d6204], eax */
  w32((uint32_t)(0x101d6204), (EAX));
  /* 101c268b jmp 0x101c6de0 */
  f_101c6de0(); return;
}

/* FUN_10002690 @ 0x101c2690 (20 bytes, 7 insns) */
void f_101c2690(void) {
  FTRACE(0x101c2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2690 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c2694 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2698 push eax */
  push32((uint32_t)(EAX));
  /* 101c2699 push ecx */
  push32((uint32_t)(ECX));
  /* 101c269a call dword ptr [0x101d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6460))), 0x101c26a0u);
  /* 101c26a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c26a3 ret  */
  ESPCHK(0x101c2690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b0 @ 0x101c26b0 (25 bytes, 9 insns) */
void f_101c26b0(void) {
  FTRACE(0x101c26b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c26b0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c26b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c26b8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c26bc push eax */
  push32((uint32_t)(EAX));
  /* 101c26bd push ecx */
  push32((uint32_t)(ECX));
  /* 101c26be push edx */
  push32((uint32_t)(EDX));
  /* 101c26bf call dword ptr [0x101d646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d646c))), 0x101c26c5u);
  /* 101c26c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c26c8 ret  */
  ESPCHK(0x101c26b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x101c26d0 (6 bytes, 1 insns) */
void f_101c26d0(void) {
  FTRACE(0x101c26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c26d0 jmp dword ptr [0x101d6498] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d6498)))); return;
}

/* FUN_100026e0 @ 0x101c26e0 (20 bytes, 7 insns) */
void f_101c26e0(void) {
  FTRACE(0x101c26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c26e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c26e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c26e8 push eax */
  push32((uint32_t)(EAX));
  /* 101c26e9 push ecx */
  push32((uint32_t)(ECX));
  /* 101c26ea call dword ptr [0x101d64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64b8))), 0x101c26f0u);
  /* 101c26f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c26f3 ret  */
  ESPCHK(0x101c26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x101c2700 (6 bytes, 1 insns) */
void f_101c2700(void) {
  FTRACE(0x101c2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2700 jmp dword ptr [0x101d64c4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d64c4)))); return;
}

/* FUN_10002710 @ 0x101c2710 (6 bytes, 1 insns) */
void f_101c2710(void) {
  FTRACE(0x101c2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2710 jmp dword ptr [0x101d64c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d64c8)))); return;
}

/* FUN_10002720 @ 0x101c2720 (6 bytes, 1 insns) */
void f_101c2720(void) {
  FTRACE(0x101c2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2720 jmp dword ptr [0x101d64d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d64d0)))); return;
}

/* FUN_10002730 @ 0x101c2730 (13 bytes, 5 insns) */
void f_101c2730(void) {
  FTRACE(0x101c2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2734 push eax */
  push32((uint32_t)(EAX));
  /* 101c2735 call dword ptr [0x101d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64d4))), 0x101c273bu);
  /* 101c273b pop ecx */
  ECX = (pop32());
  /* 101c273c ret  */
  ESPCHK(0x101c2730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x101c2740 (20 bytes, 7 insns) */
void f_101c2740(void) {
  FTRACE(0x101c2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2740 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c2744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2748 push eax */
  push32((uint32_t)(EAX));
  /* 101c2749 push ecx */
  push32((uint32_t)(ECX));
  /* 101c274a call dword ptr [0x101d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64d8))), 0x101c2750u);
  /* 101c2750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2753 ret  */
  ESPCHK(0x101c2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x101c2760 (6 bytes, 1 insns) */
void f_101c2760(void) {
  FTRACE(0x101c2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2760 jmp dword ptr [0x101d64dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d64dc)))); return;
}

/* FUN_10002770 @ 0x101c2770 (20 bytes, 7 insns) */
void f_101c2770(void) {
  FTRACE(0x101c2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2770 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c2774 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2778 push eax */
  push32((uint32_t)(EAX));
  /* 101c2779 push ecx */
  push32((uint32_t)(ECX));
  /* 101c277a call dword ptr [0x101d61b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d61b8))), 0x101c2780u);
  /* 101c2780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2783 ret  */
  ESPCHK(0x101c2770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x101c2790 (15 bytes, 5 insns) */
void f_101c2790(void) {
  FTRACE(0x101c2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2790 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2794 push eax */
  push32((uint32_t)(EAX));
  /* 101c2795 call dword ptr [0x101d6200] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6200))), 0x101c279bu);
  /* 101c279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c279e ret  */
  ESPCHK(0x101c2790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x101c27a0 (20 bytes, 7 insns) */
void f_101c27a0(void) {
  FTRACE(0x101c27a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c27a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c27a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c27a8 push eax */
  push32((uint32_t)(EAX));
  /* 101c27a9 push ecx */
  push32((uint32_t)(ECX));
  /* 101c27aa call dword ptr [0x101d3680] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d3680))), 0x101c27b0u);
  /* 101c27b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c27b3 ret  */
  ESPCHK(0x101c27a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x101c27c0 (13 bytes, 5 insns) */
void f_101c27c0(void) {
  FTRACE(0x101c27c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c27c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c27c4 push eax */
  push32((uint32_t)(EAX));
  /* 101c27c5 call dword ptr [0x101d3820] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d3820))), 0x101c27cbu);
  /* 101c27cb pop ecx */
  ECX = (pop32());
  /* 101c27cc ret  */
  ESPCHK(0x101c27c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x101c27d0 (15 bytes, 5 insns) */
void f_101c27d0(void) {
  FTRACE(0x101c27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c27d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c27d4 push eax */
  push32((uint32_t)(EAX));
  /* 101c27d5 call dword ptr [0x101d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64e0))), 0x101c27dbu);
  /* 101c27db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c27de ret  */
  ESPCHK(0x101c27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e0 @ 0x101c27e0 (25 bytes, 9 insns) */
void f_101c27e0(void) {
  FTRACE(0x101c27e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c27e0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c27e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c27e8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c27ec push eax */
  push32((uint32_t)(EAX));
  /* 101c27ed push ecx */
  push32((uint32_t)(ECX));
  /* 101c27ee push edx */
  push32((uint32_t)(EDX));
  /* 101c27ef call dword ptr [0x101d5f10] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d5f10))), 0x101c27f5u);
  /* 101c27f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c27f8 ret  */
  ESPCHK(0x101c27e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x101c2800 (13 bytes, 5 insns) */
void f_101c2800(void) {
  FTRACE(0x101c2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2800 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2804 push eax */
  push32((uint32_t)(EAX));
  /* 101c2805 call dword ptr [0x101d3880] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d3880))), 0x101c280bu);
  /* 101c280b pop ecx */
  ECX = (pop32());
  /* 101c280c ret  */
  ESPCHK(0x101c2800u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x101c2810 (6 bytes, 1 insns) */
void f_101c2810(void) {
  FTRACE(0x101c2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2810 jmp dword ptr [0x101d6198] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d6198)))); return;
}

/* FUN_10002820 @ 0x101c2820 (6 bytes, 1 insns) */
void f_101c2820(void) {
  FTRACE(0x101c2820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2820 jmp dword ptr [0x101d3898] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101d3898)))); return;
}

/* FUN_10002830 @ 0x101c2830 (82 bytes, 28 insns) */
void f_101c2830(void) {
  FTRACE(0x101c2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2830 mov eax, dword ptr [0x101d6330] */
  EAX = (r32((uint32_t)(0x101d6330)));
  /* 101c2835 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c283b push esi */
  push32((uint32_t)(ESI));
  /* 101c283c push edi */
  push32((uint32_t)(EDI));
  /* 101c283d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101c2844 push edi */
  push32((uint32_t)(EDI));
  /* 101c2845 push eax */
  push32((uint32_t)(EAX));
  /* 101c2846 call dword ptr [0x101ce088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce088))), 0x101c284cu);
  /* 101c284c mov esi, eax */
  ESI = (EAX);
  /* 101c284e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c2850 jne 0x101c2877 */
  if (!C.zf) goto L_101c2877;
  /* 101c2852 push edi */
  push32((uint32_t)(EDI));
  /* 101c2853 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101c2857 push 0x101cfe58 */
  push32((uint32_t)(0x101cfe58u));
  /* 101c285c push ecx */
  push32((uint32_t)(ECX));
  /* 101c285d call 0x101c6f10 */
  push32(0x101c2862u); f_101c6f10();
  /* 101c2862 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2865 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101c2869 push esi */
  push32((uint32_t)(ESI));
  /* 101c286a push 0x101cfe48 */
  push32((uint32_t)(0x101cfe48u));
  /* 101c286f push edx */
  push32((uint32_t)(EDX));
  /* 101c2870 push esi */
  push32((uint32_t)(ESI));
  /* 101c2871 call dword ptr [0x101ce0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0dc))), 0x101c2877u);
L_101c2877:;
  /* 101c2877 mov eax, esi */
  EAX = (ESI);
  /* 101c2879 pop edi */
  EDI = (pop32());
  /* 101c287a pop esi */
  ESI = (pop32());
  /* 101c287b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2881 ret  */
  ESPCHK(0x101c2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x101c2890 (1844 bytes, 376 insns) */
void f_101c2890(void) {
  FTRACE(0x101c2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2890 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c2894 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c2895 jne 0x101c2fbc */
  if (!C.zf) goto L_101c2fbc;
  /* 101c289b push 0x101d05ac */
  push32((uint32_t)(0x101d05acu));
  /* 101c28a0 call dword ptr [0x101ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce004))), 0x101c28a6u);
  /* 101c28a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c28a8 mov dword ptr [0x101d6330], eax */
  w32((uint32_t)(0x101d6330), (EAX));
  /* 101c28ad jne 0x101c28c9 */
  if (!C.zf) goto L_101c28c9;
  /* 101c28af push eax */
  push32((uint32_t)(EAX));
  /* 101c28b0 push 0x101d05a4 */
  push32((uint32_t)(0x101d05a4u));
  /* 101c28b5 push 0x101d058c */
  push32((uint32_t)(0x101d058cu));
  /* 101c28ba push eax */
  push32((uint32_t)(EAX));
  /* 101c28bb call dword ptr [0x101ce0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0dc))), 0x101c28c1u);
  /* 101c28c1 mov eax, 1 */
  EAX = (0x1u);
  /* 101c28c6 ret 0xc */
  ESPCHK(0x101c2890u, _esp0);
  ESP += 16; return;
L_101c28c9:;
  /* 101c28c9 push 0x101d057c */
  push32((uint32_t)(0x101d057cu));
  /* 101c28ce call 0x101c2830 */
  push32(0x101c28d3u); f_101c2830();
  /* 101c28d3 push 0x101d056c */
  push32((uint32_t)(0x101d056cu));
  /* 101c28d8 mov dword ptr [0x101d6334], eax */
  w32((uint32_t)(0x101d6334), (EAX));
  /* 101c28dd call 0x101c2830 */
  push32(0x101c28e2u); f_101c2830();
  /* 101c28e2 push 0x101d055c */
  push32((uint32_t)(0x101d055cu));
  /* 101c28e7 mov dword ptr [0x101d6338], eax */
  w32((uint32_t)(0x101d6338), (EAX));
  /* 101c28ec call 0x101c2830 */
  push32(0x101c28f1u); f_101c2830();
  /* 101c28f1 push 0x101d0550 */
  push32((uint32_t)(0x101d0550u));
  /* 101c28f6 mov dword ptr [0x101d633c], eax */
  w32((uint32_t)(0x101d633c), (EAX));
  /* 101c28fb call 0x101c2830 */
  push32(0x101c2900u); f_101c2830();
  /* 101c2900 push 0x101d0540 */
  push32((uint32_t)(0x101d0540u));
  /* 101c2905 mov dword ptr [0x101d6340], eax */
  w32((uint32_t)(0x101d6340), (EAX));
  /* 101c290a call 0x101c2830 */
  push32(0x101c290fu); f_101c2830();
  /* 101c290f push 0x101d052c */
  push32((uint32_t)(0x101d052cu));
  /* 101c2914 mov dword ptr [0x101d6344], eax */
  w32((uint32_t)(0x101d6344), (EAX));
  /* 101c2919 call 0x101c2830 */
  push32(0x101c291eu); f_101c2830();
  /* 101c291e push 0x101d051c */
  push32((uint32_t)(0x101d051cu));
  /* 101c2923 mov dword ptr [0x101d6348], eax */
  w32((uint32_t)(0x101d6348), (EAX));
  /* 101c2928 call 0x101c2830 */
  push32(0x101c292du); f_101c2830();
  /* 101c292d push 0x101d050c */
  push32((uint32_t)(0x101d050cu));
  /* 101c2932 mov dword ptr [0x101d634c], eax */
  w32((uint32_t)(0x101d634c), (EAX));
  /* 101c2937 call 0x101c2830 */
  push32(0x101c293cu); f_101c2830();
  /* 101c293c push 0x101d04f8 */
  push32((uint32_t)(0x101d04f8u));
  /* 101c2941 mov dword ptr [0x101d6350], eax */
  w32((uint32_t)(0x101d6350), (EAX));
  /* 101c2946 call 0x101c2830 */
  push32(0x101c294bu); f_101c2830();
  /* 101c294b push 0x101d04e4 */
  push32((uint32_t)(0x101d04e4u));
  /* 101c2950 mov dword ptr [0x101d6354], eax */
  w32((uint32_t)(0x101d6354), (EAX));
  /* 101c2955 call 0x101c2830 */
  push32(0x101c295au); f_101c2830();
  /* 101c295a push 0x101d04d4 */
  push32((uint32_t)(0x101d04d4u));
  /* 101c295f mov dword ptr [0x101d6358], eax */
  w32((uint32_t)(0x101d6358), (EAX));
  /* 101c2964 call 0x101c2830 */
  push32(0x101c2969u); f_101c2830();
  /* 101c2969 push 0x101d04c4 */
  push32((uint32_t)(0x101d04c4u));
  /* 101c296e mov dword ptr [0x101d635c], eax */
  w32((uint32_t)(0x101d635c), (EAX));
  /* 101c2973 call 0x101c2830 */
  push32(0x101c2978u); f_101c2830();
  /* 101c2978 push 0x101d04b4 */
  push32((uint32_t)(0x101d04b4u));
  /* 101c297d mov dword ptr [0x101d6360], eax */
  w32((uint32_t)(0x101d6360), (EAX));
  /* 101c2982 call 0x101c2830 */
  push32(0x101c2987u); f_101c2830();
  /* 101c2987 push 0x101d04a4 */
  push32((uint32_t)(0x101d04a4u));
  /* 101c298c mov dword ptr [0x101d6364], eax */
  w32((uint32_t)(0x101d6364), (EAX));
  /* 101c2991 call 0x101c2830 */
  push32(0x101c2996u); f_101c2830();
  /* 101c2996 push 0x101d0494 */
  push32((uint32_t)(0x101d0494u));
  /* 101c299b mov dword ptr [0x101d6368], eax */
  w32((uint32_t)(0x101d6368), (EAX));
  /* 101c29a0 call 0x101c2830 */
  push32(0x101c29a5u); f_101c2830();
  /* 101c29a5 push 0x101d0484 */
  push32((uint32_t)(0x101d0484u));
  /* 101c29aa mov dword ptr [0x101d636c], eax */
  w32((uint32_t)(0x101d636c), (EAX));
  /* 101c29af call 0x101c2830 */
  push32(0x101c29b4u); f_101c2830();
  /* 101c29b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c29b7 mov dword ptr [0x101d6370], eax */
  w32((uint32_t)(0x101d6370), (EAX));
  /* 101c29bc push 0x101d0474 */
  push32((uint32_t)(0x101d0474u));
  /* 101c29c1 call 0x101c2830 */
  push32(0x101c29c6u); f_101c2830();
  /* 101c29c6 push 0x101d0464 */
  push32((uint32_t)(0x101d0464u));
  /* 101c29cb mov dword ptr [0x101d6374], eax */
  w32((uint32_t)(0x101d6374), (EAX));
  /* 101c29d0 call 0x101c2830 */
  push32(0x101c29d5u); f_101c2830();
  /* 101c29d5 push 0x101d0450 */
  push32((uint32_t)(0x101d0450u));
  /* 101c29da mov dword ptr [0x101d6378], eax */
  w32((uint32_t)(0x101d6378), (EAX));
  /* 101c29df call 0x101c2830 */
  push32(0x101c29e4u); f_101c2830();
  /* 101c29e4 push 0x101d0448 */
  push32((uint32_t)(0x101d0448u));
  /* 101c29e9 mov dword ptr [0x101d637c], eax */
  w32((uint32_t)(0x101d637c), (EAX));
  /* 101c29ee call 0x101c2830 */
  push32(0x101c29f3u); f_101c2830();
  /* 101c29f3 push 0x101d0438 */
  push32((uint32_t)(0x101d0438u));
  /* 101c29f8 mov dword ptr [0x101d6380], eax */
  w32((uint32_t)(0x101d6380), (EAX));
  /* 101c29fd call 0x101c2830 */
  push32(0x101c2a02u); f_101c2830();
  /* 101c2a02 push 0x101d0428 */
  push32((uint32_t)(0x101d0428u));
  /* 101c2a07 mov dword ptr [0x101d6384], eax */
  w32((uint32_t)(0x101d6384), (EAX));
  /* 101c2a0c call 0x101c2830 */
  push32(0x101c2a11u); f_101c2830();
  /* 101c2a11 push 0x101d041c */
  push32((uint32_t)(0x101d041cu));
  /* 101c2a16 mov dword ptr [0x101d6388], eax */
  w32((uint32_t)(0x101d6388), (EAX));
  /* 101c2a1b call 0x101c2830 */
  push32(0x101c2a20u); f_101c2830();
  /* 101c2a20 push 0x101d040c */
  push32((uint32_t)(0x101d040cu));
  /* 101c2a25 mov dword ptr [0x101d638c], eax */
  w32((uint32_t)(0x101d638c), (EAX));
  /* 101c2a2a call 0x101c2830 */
  push32(0x101c2a2fu); f_101c2830();
  /* 101c2a2f push 0x101d0404 */
  push32((uint32_t)(0x101d0404u));
  /* 101c2a34 mov dword ptr [0x101d6390], eax */
  w32((uint32_t)(0x101d6390), (EAX));
  /* 101c2a39 call 0x101c2830 */
  push32(0x101c2a3eu); f_101c2830();
  /* 101c2a3e push 0x101d03f4 */
  push32((uint32_t)(0x101d03f4u));
  /* 101c2a43 mov dword ptr [0x101d63a8], eax */
  w32((uint32_t)(0x101d63a8), (EAX));
  /* 101c2a48 call 0x101c2830 */
  push32(0x101c2a4du); f_101c2830();
  /* 101c2a4d push 0x101d03e4 */
  push32((uint32_t)(0x101d03e4u));
  /* 101c2a52 mov dword ptr [0x101d63ac], eax */
  w32((uint32_t)(0x101d63ac), (EAX));
  /* 101c2a57 call 0x101c2830 */
  push32(0x101c2a5cu); f_101c2830();
  /* 101c2a5c push 0x101d03d8 */
  push32((uint32_t)(0x101d03d8u));
  /* 101c2a61 mov dword ptr [0x101d63b0], eax */
  w32((uint32_t)(0x101d63b0), (EAX));
  /* 101c2a66 call 0x101c2830 */
  push32(0x101c2a6bu); f_101c2830();
  /* 101c2a6b push 0x101d03c8 */
  push32((uint32_t)(0x101d03c8u));
  /* 101c2a70 mov dword ptr [0x101d63b4], eax */
  w32((uint32_t)(0x101d63b4), (EAX));
  /* 101c2a75 call 0x101c2830 */
  push32(0x101c2a7au); f_101c2830();
  /* 101c2a7a push 0x101d03bc */
  push32((uint32_t)(0x101d03bcu));
  /* 101c2a7f mov dword ptr [0x101d63b8], eax */
  w32((uint32_t)(0x101d63b8), (EAX));
  /* 101c2a84 call 0x101c2830 */
  push32(0x101c2a89u); f_101c2830();
  /* 101c2a89 push 0x101d03ac */
  push32((uint32_t)(0x101d03acu));
  /* 101c2a8e mov dword ptr [0x101d63d4], eax */
  w32((uint32_t)(0x101d63d4), (EAX));
  /* 101c2a93 call 0x101c2830 */
  push32(0x101c2a98u); f_101c2830();
  /* 101c2a98 push 0x101d03a4 */
  push32((uint32_t)(0x101d03a4u));
  /* 101c2a9d mov dword ptr [0x101d63bc], eax */
  w32((uint32_t)(0x101d63bc), (EAX));
  /* 101c2aa2 call 0x101c2830 */
  push32(0x101c2aa7u); f_101c2830();
  /* 101c2aa7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2aaa mov dword ptr [0x101d63c0], eax */
  w32((uint32_t)(0x101d63c0), (EAX));
  /* 101c2aaf push 0x101d0394 */
  push32((uint32_t)(0x101d0394u));
  /* 101c2ab4 call 0x101c2830 */
  push32(0x101c2ab9u); f_101c2830();
  /* 101c2ab9 push 0x101d0384 */
  push32((uint32_t)(0x101d0384u));
  /* 101c2abe mov dword ptr [0x101d63c4], eax */
  w32((uint32_t)(0x101d63c4), (EAX));
  /* 101c2ac3 call 0x101c2830 */
  push32(0x101c2ac8u); f_101c2830();
  /* 101c2ac8 push 0x101d0374 */
  push32((uint32_t)(0x101d0374u));
  /* 101c2acd mov dword ptr [0x101d63c8], eax */
  w32((uint32_t)(0x101d63c8), (EAX));
  /* 101c2ad2 call 0x101c2830 */
  push32(0x101c2ad7u); f_101c2830();
  /* 101c2ad7 push 0x101d0368 */
  push32((uint32_t)(0x101d0368u));
  /* 101c2adc mov dword ptr [0x101d63cc], eax */
  w32((uint32_t)(0x101d63cc), (EAX));
  /* 101c2ae1 call 0x101c2830 */
  push32(0x101c2ae6u); f_101c2830();
  /* 101c2ae6 push 0x101d0360 */
  push32((uint32_t)(0x101d0360u));
  /* 101c2aeb mov dword ptr [0x101d63d0], eax */
  w32((uint32_t)(0x101d63d0), (EAX));
  /* 101c2af0 call 0x101c2830 */
  push32(0x101c2af5u); f_101c2830();
  /* 101c2af5 push 0x101d0350 */
  push32((uint32_t)(0x101d0350u));
  /* 101c2afa mov dword ptr [0x101d63d8], eax */
  w32((uint32_t)(0x101d63d8), (EAX));
  /* 101c2aff call 0x101c2830 */
  push32(0x101c2b04u); f_101c2830();
  /* 101c2b04 push 0x101d0340 */
  push32((uint32_t)(0x101d0340u));
  /* 101c2b09 mov dword ptr [0x101d63dc], eax */
  w32((uint32_t)(0x101d63dc), (EAX));
  /* 101c2b0e call 0x101c2830 */
  push32(0x101c2b13u); f_101c2830();
  /* 101c2b13 push 0x101d0330 */
  push32((uint32_t)(0x101d0330u));
  /* 101c2b18 mov dword ptr [0x101d63e0], eax */
  w32((uint32_t)(0x101d63e0), (EAX));
  /* 101c2b1d call 0x101c2830 */
  push32(0x101c2b22u); f_101c2830();
  /* 101c2b22 push 0x101d0320 */
  push32((uint32_t)(0x101d0320u));
  /* 101c2b27 mov dword ptr [0x101d63e4], eax */
  w32((uint32_t)(0x101d63e4), (EAX));
  /* 101c2b2c call 0x101c2830 */
  push32(0x101c2b31u); f_101c2830();
  /* 101c2b31 push 0x101d0314 */
  push32((uint32_t)(0x101d0314u));
  /* 101c2b36 mov dword ptr [0x101d63e8], eax */
  w32((uint32_t)(0x101d63e8), (EAX));
  /* 101c2b3b call 0x101c2830 */
  push32(0x101c2b40u); f_101c2830();
  /* 101c2b40 push 0x101d0308 */
  push32((uint32_t)(0x101d0308u));
  /* 101c2b45 mov dword ptr [0x101d63ec], eax */
  w32((uint32_t)(0x101d63ec), (EAX));
  /* 101c2b4a call 0x101c2830 */
  push32(0x101c2b4fu); f_101c2830();
  /* 101c2b4f push 0x101d02f8 */
  push32((uint32_t)(0x101d02f8u));
  /* 101c2b54 mov dword ptr [0x101d63f0], eax */
  w32((uint32_t)(0x101d63f0), (EAX));
  /* 101c2b59 call 0x101c2830 */
  push32(0x101c2b5eu); f_101c2830();
  /* 101c2b5e push 0x101d02ec */
  push32((uint32_t)(0x101d02ecu));
  /* 101c2b63 mov dword ptr [0x101d63f4], eax */
  w32((uint32_t)(0x101d63f4), (EAX));
  /* 101c2b68 call 0x101c2830 */
  push32(0x101c2b6du); f_101c2830();
  /* 101c2b6d push 0x101d02e0 */
  push32((uint32_t)(0x101d02e0u));
  /* 101c2b72 mov dword ptr [0x101d63f8], eax */
  w32((uint32_t)(0x101d63f8), (EAX));
  /* 101c2b77 call 0x101c2830 */
  push32(0x101c2b7cu); f_101c2830();
  /* 101c2b7c push 0x101d02d4 */
  push32((uint32_t)(0x101d02d4u));
  /* 101c2b81 mov dword ptr [0x101d63fc], eax */
  w32((uint32_t)(0x101d63fc), (EAX));
  /* 101c2b86 call 0x101c2830 */
  push32(0x101c2b8bu); f_101c2830();
  /* 101c2b8b push 0x101d02c8 */
  push32((uint32_t)(0x101d02c8u));
  /* 101c2b90 mov dword ptr [0x101d6130], eax */
  w32((uint32_t)(0x101d6130), (EAX));
  /* 101c2b95 call 0x101c2830 */
  push32(0x101c2b9au); f_101c2830();
  /* 101c2b9a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2b9d mov dword ptr [0x101d6400], eax */
  w32((uint32_t)(0x101d6400), (EAX));
  /* 101c2ba2 push 0x101d02bc */
  push32((uint32_t)(0x101d02bcu));
  /* 101c2ba7 call 0x101c2830 */
  push32(0x101c2bacu); f_101c2830();
  /* 101c2bac push 0x101d02b0 */
  push32((uint32_t)(0x101d02b0u));
  /* 101c2bb1 mov dword ptr [0x101d6404], eax */
  w32((uint32_t)(0x101d6404), (EAX));
  /* 101c2bb6 call 0x101c2830 */
  push32(0x101c2bbbu); f_101c2830();
  /* 101c2bbb push 0x101d02a0 */
  push32((uint32_t)(0x101d02a0u));
  /* 101c2bc0 mov dword ptr [0x101d6408], eax */
  w32((uint32_t)(0x101d6408), (EAX));
  /* 101c2bc5 call 0x101c2830 */
  push32(0x101c2bcau); f_101c2830();
  /* 101c2bca push 0x101d0294 */
  push32((uint32_t)(0x101d0294u));
  /* 101c2bcf mov dword ptr [0x101d640c], eax */
  w32((uint32_t)(0x101d640c), (EAX));
  /* 101c2bd4 call 0x101c2830 */
  push32(0x101c2bd9u); f_101c2830();
  /* 101c2bd9 push 0x101d0288 */
  push32((uint32_t)(0x101d0288u));
  /* 101c2bde mov dword ptr [0x101d6410], eax */
  w32((uint32_t)(0x101d6410), (EAX));
  /* 101c2be3 call 0x101c2830 */
  push32(0x101c2be8u); f_101c2830();
  /* 101c2be8 mov dword ptr [0x101d6414], eax */
  w32((uint32_t)(0x101d6414), (EAX));
  /* 101c2bed push 0x101d0278 */
  push32((uint32_t)(0x101d0278u));
  /* 101c2bf2 call 0x101c2830 */
  push32(0x101c2bf7u); f_101c2830();
  /* 101c2bf7 push 0x101d0268 */
  push32((uint32_t)(0x101d0268u));
  /* 101c2bfc mov dword ptr [0x101d6418], eax */
  w32((uint32_t)(0x101d6418), (EAX));
  /* 101c2c01 call 0x101c2830 */
  push32(0x101c2c06u); f_101c2830();
  /* 101c2c06 push 0x101d025c */
  push32((uint32_t)(0x101d025cu));
  /* 101c2c0b mov dword ptr [0x101d641c], eax */
  w32((uint32_t)(0x101d641c), (EAX));
  /* 101c2c10 call 0x101c2830 */
  push32(0x101c2c15u); f_101c2830();
  /* 101c2c15 push 0x101d0254 */
  push32((uint32_t)(0x101d0254u));
  /* 101c2c1a mov dword ptr [0x101d6420], eax */
  w32((uint32_t)(0x101d6420), (EAX));
  /* 101c2c1f call 0x101c2830 */
  push32(0x101c2c24u); f_101c2830();
  /* 101c2c24 push 0x101d0244 */
  push32((uint32_t)(0x101d0244u));
  /* 101c2c29 mov dword ptr [0x101d6424], eax */
  w32((uint32_t)(0x101d6424), (EAX));
  /* 101c2c2e call 0x101c2830 */
  push32(0x101c2c33u); f_101c2830();
  /* 101c2c33 push 0x101d023c */
  push32((uint32_t)(0x101d023cu));
  /* 101c2c38 mov dword ptr [0x101d6428], eax */
  w32((uint32_t)(0x101d6428), (EAX));
  /* 101c2c3d call 0x101c2830 */
  push32(0x101c2c42u); f_101c2830();
  /* 101c2c42 push 0x101d0230 */
  push32((uint32_t)(0x101d0230u));
  /* 101c2c47 mov dword ptr [0x101d642c], eax */
  w32((uint32_t)(0x101d642c), (EAX));
  /* 101c2c4c call 0x101c2830 */
  push32(0x101c2c51u); f_101c2830();
  /* 101c2c51 push 0x101d0228 */
  push32((uint32_t)(0x101d0228u));
  /* 101c2c56 mov dword ptr [0x101d6430], eax */
  w32((uint32_t)(0x101d6430), (EAX));
  /* 101c2c5b call 0x101c2830 */
  push32(0x101c2c60u); f_101c2830();
  /* 101c2c60 push 0x101d0214 */
  push32((uint32_t)(0x101d0214u));
  /* 101c2c65 mov dword ptr [0x101d6434], eax */
  w32((uint32_t)(0x101d6434), (EAX));
  /* 101c2c6a call 0x101c2830 */
  push32(0x101c2c6fu); f_101c2830();
  /* 101c2c6f push 0x101d0208 */
  push32((uint32_t)(0x101d0208u));
  /* 101c2c74 mov dword ptr [0x101d3588], eax */
  w32((uint32_t)(0x101d3588), (EAX));
  /* 101c2c79 call 0x101c2830 */
  push32(0x101c2c7eu); f_101c2830();
  /* 101c2c7e push 0x101d01fc */
  push32((uint32_t)(0x101d01fcu));
  /* 101c2c83 mov dword ptr [0x101d6440], eax */
  w32((uint32_t)(0x101d6440), (EAX));
  /* 101c2c88 call 0x101c2830 */
  push32(0x101c2c8du); f_101c2830();
  /* 101c2c8d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2c90 mov dword ptr [0x101d643c], eax */
  w32((uint32_t)(0x101d643c), (EAX));
  /* 101c2c95 push 0x101d01e8 */
  push32((uint32_t)(0x101d01e8u));
  /* 101c2c9a call 0x101c2830 */
  push32(0x101c2c9fu); f_101c2830();
  /* 101c2c9f push 0x101d01d8 */
  push32((uint32_t)(0x101d01d8u));
  /* 101c2ca4 mov dword ptr [0x101d6444], eax */
  w32((uint32_t)(0x101d6444), (EAX));
  /* 101c2ca9 call 0x101c2830 */
  push32(0x101c2caeu); f_101c2830();
  /* 101c2cae push 0x101d01c8 */
  push32((uint32_t)(0x101d01c8u));
  /* 101c2cb3 mov dword ptr [0x101d6448], eax */
  w32((uint32_t)(0x101d6448), (EAX));
  /* 101c2cb8 call 0x101c2830 */
  push32(0x101c2cbdu); f_101c2830();
  /* 101c2cbd push 0x101d01b8 */
  push32((uint32_t)(0x101d01b8u));
  /* 101c2cc2 mov dword ptr [0x101d644c], eax */
  w32((uint32_t)(0x101d644c), (EAX));
  /* 101c2cc7 call 0x101c2830 */
  push32(0x101c2cccu); f_101c2830();
  /* 101c2ccc push 0x101d01ac */
  push32((uint32_t)(0x101d01acu));
  /* 101c2cd1 mov dword ptr [0x101d6398], eax */
  w32((uint32_t)(0x101d6398), (EAX));
  /* 101c2cd6 call 0x101c2830 */
  push32(0x101c2cdbu); f_101c2830();
  /* 101c2cdb push 0x101d019c */
  push32((uint32_t)(0x101d019cu));
  /* 101c2ce0 mov dword ptr [0x101d6394], eax */
  w32((uint32_t)(0x101d6394), (EAX));
  /* 101c2ce5 call 0x101c2830 */
  push32(0x101c2ceau); f_101c2830();
  /* 101c2cea push 0x101d0188 */
  push32((uint32_t)(0x101d0188u));
  /* 101c2cef mov dword ptr [0x101d639c], eax */
  w32((uint32_t)(0x101d639c), (EAX));
  /* 101c2cf4 call 0x101c2830 */
  push32(0x101c2cf9u); f_101c2830();
  /* 101c2cf9 push 0x101d0170 */
  push32((uint32_t)(0x101d0170u));
  /* 101c2cfe mov dword ptr [0x101d63a0], eax */
  w32((uint32_t)(0x101d63a0), (EAX));
  /* 101c2d03 call 0x101c2830 */
  push32(0x101c2d08u); f_101c2830();
  /* 101c2d08 push 0x101d0160 */
  push32((uint32_t)(0x101d0160u));
  /* 101c2d0d mov dword ptr [0x101d63a4], eax */
  w32((uint32_t)(0x101d63a4), (EAX));
  /* 101c2d12 call 0x101c2830 */
  push32(0x101c2d17u); f_101c2830();
  /* 101c2d17 push 0x101d0148 */
  push32((uint32_t)(0x101d0148u));
  /* 101c2d1c mov dword ptr [0x101d6468], eax */
  w32((uint32_t)(0x101d6468), (EAX));
  /* 101c2d21 call 0x101c2830 */
  push32(0x101c2d26u); f_101c2830();
  /* 101c2d26 push 0x101d0138 */
  push32((uint32_t)(0x101d0138u));
  /* 101c2d2b mov dword ptr [0x101d6498], eax */
  w32((uint32_t)(0x101d6498), (EAX));
  /* 101c2d30 call 0x101c2830 */
  push32(0x101c2d35u); f_101c2830();
  /* 101c2d35 push 0x101d0130 */
  push32((uint32_t)(0x101d0130u));
  /* 101c2d3a mov dword ptr [0x101d6460], eax */
  w32((uint32_t)(0x101d6460), (EAX));
  /* 101c2d3f call 0x101c2830 */
  push32(0x101c2d44u); f_101c2830();
  /* 101c2d44 push 0x101d0120 */
  push32((uint32_t)(0x101d0120u));
  /* 101c2d49 mov dword ptr [0x101d646c], eax */
  w32((uint32_t)(0x101d646c), (EAX));
  /* 101c2d4e call 0x101c2830 */
  push32(0x101c2d53u); f_101c2830();
  /* 101c2d53 push 0x101d0114 */
  push32((uint32_t)(0x101d0114u));
  /* 101c2d58 mov dword ptr [0x101d64b8], eax */
  w32((uint32_t)(0x101d64b8), (EAX));
  /* 101c2d5d call 0x101c2830 */
  push32(0x101c2d62u); f_101c2830();
  /* 101c2d62 push 0x101d010c */
  push32((uint32_t)(0x101d010cu));
  /* 101c2d67 mov dword ptr [0x101d6450], eax */
  w32((uint32_t)(0x101d6450), (EAX));
  /* 101c2d6c call 0x101c2830 */
  push32(0x101c2d71u); f_101c2830();
  /* 101c2d71 push 0x101d0100 */
  push32((uint32_t)(0x101d0100u));
  /* 101c2d76 mov dword ptr [0x101d6454], eax */
  w32((uint32_t)(0x101d6454), (EAX));
  /* 101c2d7b call 0x101c2830 */
  push32(0x101c2d80u); f_101c2830();
  /* 101c2d80 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2d83 mov dword ptr [0x101d6458], eax */
  w32((uint32_t)(0x101d6458), (EAX));
  /* 101c2d88 push 0x101d00f0 */
  push32((uint32_t)(0x101d00f0u));
  /* 101c2d8d call 0x101c2830 */
  push32(0x101c2d92u); f_101c2830();
  /* 101c2d92 push 0x101d00dc */
  push32((uint32_t)(0x101d00dcu));
  /* 101c2d97 mov dword ptr [0x101d645c], eax */
  w32((uint32_t)(0x101d645c), (EAX));
  /* 101c2d9c call 0x101c2830 */
  push32(0x101c2da1u); f_101c2830();
  /* 101c2da1 push 0x101d00c0 */
  push32((uint32_t)(0x101d00c0u));
  /* 101c2da6 mov dword ptr [0x101d6464], eax */
  w32((uint32_t)(0x101d6464), (EAX));
  /* 101c2dab call 0x101c2830 */
  push32(0x101c2db0u); f_101c2830();
  /* 101c2db0 push 0x101d00ac */
  push32((uint32_t)(0x101d00acu));
  /* 101c2db5 mov dword ptr [0x101d6470], eax */
  w32((uint32_t)(0x101d6470), (EAX));
  /* 101c2dba call 0x101c2830 */
  push32(0x101c2dbfu); f_101c2830();
  /* 101c2dbf push 0x101d00a0 */
  push32((uint32_t)(0x101d00a0u));
  /* 101c2dc4 mov dword ptr [0x101d6474], eax */
  w32((uint32_t)(0x101d6474), (EAX));
  /* 101c2dc9 call 0x101c2830 */
  push32(0x101c2dceu); f_101c2830();
  /* 101c2dce push 0x101d0090 */
  push32((uint32_t)(0x101d0090u));
  /* 101c2dd3 mov dword ptr [0x101d64ac], eax */
  w32((uint32_t)(0x101d64ac), (EAX));
  /* 101c2dd8 call 0x101c2830 */
  push32(0x101c2dddu); f_101c2830();
  /* 101c2ddd push 0x101d0084 */
  push32((uint32_t)(0x101d0084u));
  /* 101c2de2 mov dword ptr [0x101d64b0], eax */
  w32((uint32_t)(0x101d64b0), (EAX));
  /* 101c2de7 call 0x101c2830 */
  push32(0x101c2decu); f_101c2830();
  /* 101c2dec push 0x101d0078 */
  push32((uint32_t)(0x101d0078u));
  /* 101c2df1 mov dword ptr [0x101d64b4], eax */
  w32((uint32_t)(0x101d64b4), (EAX));
  /* 101c2df6 call 0x101c2830 */
  push32(0x101c2dfbu); f_101c2830();
  /* 101c2dfb push 0x101d0060 */
  push32((uint32_t)(0x101d0060u));
  /* 101c2e00 mov dword ptr [0x101d64bc], eax */
  w32((uint32_t)(0x101d64bc), (EAX));
  /* 101c2e05 call 0x101c2830 */
  push32(0x101c2e0au); f_101c2830();
  /* 101c2e0a push 0x101d0044 */
  push32((uint32_t)(0x101d0044u));
  /* 101c2e0f mov dword ptr [0x101d6478], eax */
  w32((uint32_t)(0x101d6478), (EAX));
  /* 101c2e14 call 0x101c2830 */
  push32(0x101c2e19u); f_101c2830();
  /* 101c2e19 push 0x101d0028 */
  push32((uint32_t)(0x101d0028u));
  /* 101c2e1e mov dword ptr [0x101d647c], eax */
  w32((uint32_t)(0x101d647c), (EAX));
  /* 101c2e23 call 0x101c2830 */
  push32(0x101c2e28u); f_101c2830();
  /* 101c2e28 push 0x101d0010 */
  push32((uint32_t)(0x101d0010u));
  /* 101c2e2d mov dword ptr [0x101d6480], eax */
  w32((uint32_t)(0x101d6480), (EAX));
  /* 101c2e32 call 0x101c2830 */
  push32(0x101c2e37u); f_101c2830();
  /* 101c2e37 push 0x101cfff8 */
  push32((uint32_t)(0x101cfff8u));
  /* 101c2e3c mov dword ptr [0x101d6484], eax */
  w32((uint32_t)(0x101d6484), (EAX));
  /* 101c2e41 call 0x101c2830 */
  push32(0x101c2e46u); f_101c2830();
  /* 101c2e46 push 0x101cffec */
  push32((uint32_t)(0x101cffecu));
  /* 101c2e4b mov dword ptr [0x101d6488], eax */
  w32((uint32_t)(0x101d6488), (EAX));
  /* 101c2e50 call 0x101c2830 */
  push32(0x101c2e55u); f_101c2830();
  /* 101c2e55 push 0x101cffe0 */
  push32((uint32_t)(0x101cffe0u));
  /* 101c2e5a mov dword ptr [0x101d648c], eax */
  w32((uint32_t)(0x101d648c), (EAX));
  /* 101c2e5f call 0x101c2830 */
  push32(0x101c2e64u); f_101c2830();
  /* 101c2e64 push 0x101cffd0 */
  push32((uint32_t)(0x101cffd0u));
  /* 101c2e69 mov dword ptr [0x101d6490], eax */
  w32((uint32_t)(0x101d6490), (EAX));
  /* 101c2e6e call 0x101c2830 */
  push32(0x101c2e73u); f_101c2830();
  /* 101c2e73 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2e76 mov dword ptr [0x101d6494], eax */
  w32((uint32_t)(0x101d6494), (EAX));
  /* 101c2e7b push 0x101cffc4 */
  push32((uint32_t)(0x101cffc4u));
  /* 101c2e80 call 0x101c2830 */
  push32(0x101c2e85u); f_101c2830();
  /* 101c2e85 push 0x101cffb8 */
  push32((uint32_t)(0x101cffb8u));
  /* 101c2e8a mov dword ptr [0x101d649c], eax */
  w32((uint32_t)(0x101d649c), (EAX));
  /* 101c2e8f call 0x101c2830 */
  push32(0x101c2e94u); f_101c2830();
  /* 101c2e94 push 0x101cffac */
  push32((uint32_t)(0x101cffacu));
  /* 101c2e99 mov dword ptr [0x101d64a0], eax */
  w32((uint32_t)(0x101d64a0), (EAX));
  /* 101c2e9e call 0x101c2830 */
  push32(0x101c2ea3u); f_101c2830();
  /* 101c2ea3 push 0x101cff9c */
  push32((uint32_t)(0x101cff9cu));
  /* 101c2ea8 mov dword ptr [0x101d64c0], eax */
  w32((uint32_t)(0x101d64c0), (EAX));
  /* 101c2ead call 0x101c2830 */
  push32(0x101c2eb2u); f_101c2830();
  /* 101c2eb2 push 0x101cff90 */
  push32((uint32_t)(0x101cff90u));
  /* 101c2eb7 mov dword ptr [0x101d64c4], eax */
  w32((uint32_t)(0x101d64c4), (EAX));
  /* 101c2ebc call 0x101c2830 */
  push32(0x101c2ec1u); f_101c2830();
  /* 101c2ec1 push 0x101cff84 */
  push32((uint32_t)(0x101cff84u));
  /* 101c2ec6 mov dword ptr [0x101d64c8], eax */
  w32((uint32_t)(0x101d64c8), (EAX));
  /* 101c2ecb call 0x101c2830 */
  push32(0x101c2ed0u); f_101c2830();
  /* 101c2ed0 push 0x101cff78 */
  push32((uint32_t)(0x101cff78u));
  /* 101c2ed5 mov dword ptr [0x101d64cc], eax */
  w32((uint32_t)(0x101d64cc), (EAX));
  /* 101c2eda call 0x101c2830 */
  push32(0x101c2edfu); f_101c2830();
  /* 101c2edf push 0x101cff68 */
  push32((uint32_t)(0x101cff68u));
  /* 101c2ee4 mov dword ptr [0x101d64d0], eax */
  w32((uint32_t)(0x101d64d0), (EAX));
  /* 101c2ee9 call 0x101c2830 */
  push32(0x101c2eeeu); f_101c2830();
  /* 101c2eee push 0x101cff58 */
  push32((uint32_t)(0x101cff58u));
  /* 101c2ef3 mov dword ptr [0x101d64d4], eax */
  w32((uint32_t)(0x101d64d4), (EAX));
  /* 101c2ef8 call 0x101c2830 */
  push32(0x101c2efdu); f_101c2830();
  /* 101c2efd push 0x101cff44 */
  push32((uint32_t)(0x101cff44u));
  /* 101c2f02 mov dword ptr [0x101d64dc], eax */
  w32((uint32_t)(0x101d64dc), (EAX));
  /* 101c2f07 call 0x101c2830 */
  push32(0x101c2f0cu); f_101c2830();
  /* 101c2f0c mov dword ptr [0x101d64d8], eax */
  w32((uint32_t)(0x101d64d8), (EAX));
  /* 101c2f11 push 0x101cff2c */
  push32((uint32_t)(0x101cff2cu));
  /* 101c2f16 call 0x101c2830 */
  push32(0x101c2f1bu); f_101c2830();
  /* 101c2f1b push 0x101cff14 */
  push32((uint32_t)(0x101cff14u));
  /* 101c2f20 mov dword ptr [0x101d3820], eax */
  w32((uint32_t)(0x101d3820), (EAX));
  /* 101c2f25 call 0x101c2830 */
  push32(0x101c2f2au); f_101c2830();
  /* 101c2f2a push 0x101cff04 */
  push32((uint32_t)(0x101cff04u));
  /* 101c2f2f mov dword ptr [0x101d3680], eax */
  w32((uint32_t)(0x101d3680), (EAX));
  /* 101c2f34 call 0x101c2830 */
  push32(0x101c2f39u); f_101c2830();
  /* 101c2f39 push 0x101cfef4 */
  push32((uint32_t)(0x101cfef4u));
  /* 101c2f3e mov dword ptr [0x101d64e0], eax */
  w32((uint32_t)(0x101d64e0), (EAX));
  /* 101c2f43 call 0x101c2830 */
  push32(0x101c2f48u); f_101c2830();
  /* 101c2f48 push 0x101cfee4 */
  push32((uint32_t)(0x101cfee4u));
  /* 101c2f4d mov dword ptr [0x101d64a4], eax */
  w32((uint32_t)(0x101d64a4), (EAX));
  /* 101c2f52 call 0x101c2830 */
  push32(0x101c2f57u); f_101c2830();
  /* 101c2f57 push 0x101cfed4 */
  push32((uint32_t)(0x101cfed4u));
  /* 101c2f5c mov dword ptr [0x101d64a8], eax */
  w32((uint32_t)(0x101d64a8), (EAX));
  /* 101c2f61 call 0x101c2830 */
  push32(0x101c2f66u); f_101c2830();
  /* 101c2f66 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2f69 mov dword ptr [0x101d6200], eax */
  w32((uint32_t)(0x101d6200), (EAX));
  /* 101c2f6e push 0x101cfec4 */
  push32((uint32_t)(0x101cfec4u));
  /* 101c2f73 call 0x101c2830 */
  push32(0x101c2f78u); f_101c2830();
  /* 101c2f78 push 0x101cfeb4 */
  push32((uint32_t)(0x101cfeb4u));
  /* 101c2f7d mov dword ptr [0x101d61b8], eax */
  w32((uint32_t)(0x101d61b8), (EAX));
  /* 101c2f82 call 0x101c2830 */
  push32(0x101c2f87u); f_101c2830();
  /* 101c2f87 push 0x101cfea4 */
  push32((uint32_t)(0x101cfea4u));
  /* 101c2f8c mov dword ptr [0x101d5f10], eax */
  w32((uint32_t)(0x101d5f10), (EAX));
  /* 101c2f91 call 0x101c2830 */
  push32(0x101c2f96u); f_101c2830();
  /* 101c2f96 push 0x101cfe94 */
  push32((uint32_t)(0x101cfe94u));
  /* 101c2f9b mov dword ptr [0x101d3880], eax */
  w32((uint32_t)(0x101d3880), (EAX));
  /* 101c2fa0 call 0x101c2830 */
  push32(0x101c2fa5u); f_101c2830();
  /* 101c2fa5 push 0x101cfe80 */
  push32((uint32_t)(0x101cfe80u));
  /* 101c2faa mov dword ptr [0x101d6198], eax */
  w32((uint32_t)(0x101d6198), (EAX));
  /* 101c2faf call 0x101c2830 */
  push32(0x101c2fb4u); f_101c2830();
  /* 101c2fb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2fb7 mov dword ptr [0x101d3898], eax */
  w32((uint32_t)(0x101d3898), (EAX));
L_101c2fbc:;
  /* 101c2fbc mov eax, 1 */
  EAX = (0x1u);
  /* 101c2fc1 ret 0xc */
  ESPCHK(0x101c2890u, _esp0);
  ESP += 16; return;
}

/* FUN_10002fd0 @ 0x101c2fd0 (34 bytes, 10 insns) */
void f_101c2fd0(void) {
  FTRACE(0x101c2fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c2fd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c2fd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c2fd8 push eax */
  push32((uint32_t)(EAX));
  /* 101c2fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 101c2fda push 0x101d05b8 */
  push32((uint32_t)(0x101d05b8u));
  /* 101c2fdf push 0x101d36f8 */
  push32((uint32_t)(0x101d36f8u));
  /* 101c2fe4 call 0x101c6f10 */
  push32(0x101c2fe9u); f_101c6f10();
  /* 101c2fe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c2fec mov eax, 0x101d36f8 */
  EAX = (0x101d36f8u);
  /* 101c2ff1 ret  */
  ESPCHK(0x101c2fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003000 @ 0x101c3000 (45 bytes, 16 insns) */
void f_101c3000(void) {
  FTRACE(0x101c3000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c3000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c3004 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c3008 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c300d push eax */
  push32((uint32_t)(EAX));
  /* 101c300e push ecx */
  push32((uint32_t)(ECX));
  /* 101c300f call 0x101c27e0 */
  push32(0x101c3014u); f_101c27e0();
  /* 101c3014 mov ecx, eax */
  ECX = (EAX);
  /* 101c3016 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101c301a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c301d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101c3020 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101c3023 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101c3026 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101c3029 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c302a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c302c ret  */
  ESPCHK(0x101c3000u, _esp0);
  ESP += 4; return;
}

/* FUN_10003030 @ 0x101c3030 (171 bytes, 77 insns) */
void f_101c3030(void) {
  FTRACE(0x101c3030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c3030 push ebx */
  push32((uint32_t)(EBX));
  /* 101c3031 push ebp */
  push32((uint32_t)(EBP));
  /* 101c3032 push esi */
  push32((uint32_t)(ESI));
  /* 101c3033 push edi */
  push32((uint32_t)(EDI));
  /* 101c3034 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 101c3038 push edi */
  push32((uint32_t)(EDI));
  /* 101c3039 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c303fu);
  /* 101c303f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101c3043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3046 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3048 jl 0x101c3051 */
  if ((C.sf!=C.of)) goto L_101c3051;
  /* 101c304a pop edi */
  EDI = (pop32());
  /* 101c304b pop esi */
  ESI = (pop32());
  /* 101c304c pop ebp */
  EBP = (pop32());
  /* 101c304d mov al, 1 */
  AL = (0x1u);
  /* 101c304f pop ebx */
  EBX = (pop32());
  /* 101c3050 ret  */
  ESPCHK(0x101c3030u, _esp0);
  ESP += 4; return;
L_101c3051:;
  /* 101c3051 push edi */
  push32((uint32_t)(EDI));
  /* 101c3052 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3058u);
  /* 101c3058 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 101c305c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c305e push esi */
  push32((uint32_t)(ESI));
  /* 101c305f push edi */
  push32((uint32_t)(EDI));
  /* 101c3060 push ebp */
  push32((uint32_t)(EBP));
  /* 101c3061 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 101c3065 call 0x101c3000 */
  push32(0x101c306au); f_101c3000();
  /* 101c306a push ebp */
  push32((uint32_t)(EBP));
  /* 101c306b mov ebx, eax */
  EBX = (EAX);
  /* 101c306d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3073u);
  /* 101c3073 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3076 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3078 jle 0x101c30d4 */
  if ((C.zf||C.sf!=C.of)) goto L_101c30d4;
  /* 101c307a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3080 jle 0x101c30d4 */
  if ((C.zf||C.sf!=C.of)) goto L_101c30d4;
  /* 101c3082 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 101c3087 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c3089 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c308b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 101c308e mov eax, edx */
  EAX = (EDX);
  /* 101c3090 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c3093 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3095 mov ebx, edx */
  EBX = (EDX);
L_101c3097:;
  /* 101c3097 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c309a mov eax, 0xf */
  EAX = (0xfu);
  /* 101c309f jg 0x101c30a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c30a3;
  /* 101c30a1 mov eax, ebx */
  EAX = (EBX);
L_101c30a3:;
  /* 101c30a3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c30a5 jge 0x101c30b6 */
  if ((C.sf==C.of)) goto L_101c30b6;
  /* 101c30a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c30a9 push ebp */
  push32((uint32_t)(EBP));
  /* 101c30aa push edi */
  push32((uint32_t)(EDI));
  /* 101c30ab call 0x101c26b0 */
  push32(0x101c30b0u); f_101c26b0();
  /* 101c30b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c30b3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c30b4 jmp 0x101c3097 */
  goto L_101c3097;
L_101c30b6:;
  /* 101c30b6 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c30ba push ecx */
  push32((uint32_t)(ECX));
  /* 101c30bb push edi */
  push32((uint32_t)(EDI));
  /* 101c30bc push ebp */
  push32((uint32_t)(EBP));
  /* 101c30bd call 0x101c3000 */
  push32(0x101c30c2u); f_101c3000();
  /* 101c30c2 push eax */
  push32((uint32_t)(EAX));
  /* 101c30c3 push edi */
  push32((uint32_t)(EDI));
  /* 101c30c4 push ebp */
  push32((uint32_t)(EBP));
  /* 101c30c5 call 0x101c26b0 */
  push32(0x101c30cau); f_101c26b0();
  /* 101c30ca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c30cd mov al, 1 */
  AL = (0x1u);
  /* 101c30cf pop edi */
  EDI = (pop32());
  /* 101c30d0 pop esi */
  ESI = (pop32());
  /* 101c30d1 pop ebp */
  EBP = (pop32());
  /* 101c30d2 pop ebx */
  EBX = (pop32());
  /* 101c30d3 ret  */
  ESPCHK(0x101c3030u, _esp0);
  ESP += 4; return;
L_101c30d4:;
  /* 101c30d4 pop edi */
  EDI = (pop32());
  /* 101c30d5 pop esi */
  ESI = (pop32());
  /* 101c30d6 pop ebp */
  EBP = (pop32());
  /* 101c30d7 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 101c30d9 pop ebx */
  EBX = (pop32());
  /* 101c30da ret  */
  ESPCHK(0x101c3030u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x101c30e0 (369 bytes, 82 insns) */
void f_101c30e0(void) {
  FTRACE(0x101c30e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c30e0 push ebx */
  push32((uint32_t)(EBX));
  /* 101c30e1 push esi */
  push32((uint32_t)(ESI));
  /* 101c30e2 call dword ptr [0x101d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6450))), 0x101c30e8u);
  /* 101c30e8 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c30ed mov dword ptr [0x101d6204], eax */
  w32((uint32_t)(0x101d6204), (EAX));
  /* 101c30f2 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c30f8u);
  /* 101c30f8 mov ebx, 1 */
  EBX = (0x1u);
  /* 101c30fd mov esi, eax */
  ESI = (EAX);
  /* 101c30ff push ebx */
  push32((uint32_t)(EBX));
  /* 101c3100 call 0x101c27d0 */
  push32(0x101c3105u); f_101c27d0();
  /* 101c3105 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3107 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c3109 call 0x101c27d0 */
  push32(0x101c310eu); f_101c27d0();
  /* 101c310e push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3110 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c3112 call 0x101c27d0 */
  push32(0x101c3117u); f_101c27d0();
  /* 101c3117 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c3119 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c311e push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3120 mov dword ptr [0x101d6100], esi */
  w32((uint32_t)(0x101d6100), (ESI));
  /* 101c3126 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101c3129 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101c312c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101c312f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101c3132 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101c3135 mov ecx, dword ptr [eax + 0x101d3a40] */
  ECX = (r32((uint32_t)(EAX + 0x101d3a40)));
  /* 101c313b lea edx, [eax + 0x101d38b0] */
  EDX = ((uint32_t)(EAX + 0x101d38b0));
  /* 101c3141 mov dword ptr [0x101d6110], edx */
  w32((uint32_t)(0x101d6110), (EDX));
  /* 101c3147 lea edx, [eax + 0x101d3a44] */
  EDX = ((uint32_t)(EAX + 0x101d3a44));
  /* 101c314d mov dword ptr [0x101d6554], ecx */
  w32((uint32_t)(0x101d6554), (ECX));
  /* 101c3153 mov ecx, dword ptr [eax + 0x101d3bd4] */
  ECX = (r32((uint32_t)(EAX + 0x101d3bd4)));
  /* 101c3159 mov dword ptr [0x101d6114], edx */
  w32((uint32_t)(0x101d6114), (EDX));
  /* 101c315f lea edx, [eax + 0x101d3bd8] */
  EDX = ((uint32_t)(EAX + 0x101d3bd8));
  /* 101c3165 mov dword ptr [0x101d6558], ecx */
  w32((uint32_t)(0x101d6558), (ECX));
  /* 101c316b mov dword ptr [0x101d619c], edx */
  w32((uint32_t)(0x101d619c), (EDX));
  /* 101c3171 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3177u);
  /* 101c3177 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3179 mov dword ptr [0x101d61e0], eax */
  w32((uint32_t)(0x101d61e0), (EAX));
  /* 101c317e call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3184u);
  /* 101c3184 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3186 mov dword ptr [0x101d3570], eax */
  w32((uint32_t)(0x101d3570), (EAX));
  /* 101c318b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3191u);
  /* 101c3191 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3193 mov dword ptr [0x101d62d0], eax */
  w32((uint32_t)(0x101d62d0), (EAX));
  /* 101c3198 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c319eu);
  /* 101c319e push 5 */
  push32((uint32_t)(0x5u));
  /* 101c31a0 mov dword ptr [0x101d3678], eax */
  w32((uint32_t)(0x101d3678), (EAX));
  /* 101c31a5 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c31abu);
  /* 101c31ab push ebx */
  push32((uint32_t)(EBX));
  /* 101c31ac mov dword ptr [0x101d6038], eax */
  w32((uint32_t)(0x101d6038), (EAX));
  /* 101c31b1 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c31b7u);
  /* 101c31b7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c31ba mov dword ptr [0x101d6288], eax */
  w32((uint32_t)(0x101d6288), (EAX));
  /* 101c31bf call 0x101c2710 */
  push32(0x101c31c4u); f_101c2710();
  /* 101c31c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c31c6 jne 0x101c31d2 */
  if (!C.zf) goto L_101c31d2;
  /* 101c31c8 mov dword ptr [0x101cf248], 4 */
  w32((uint32_t)(0x101cf248), (0x4u));
L_101c31d2:;
  /* 101c31d2 push 0x101cf114 */
  push32((uint32_t)(0x101cf114u));
  /* 101c31d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c31d9 call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c31dfu);
  /* 101c31df push 0x101d64e8 */
  push32((uint32_t)(0x101d64e8u));
  /* 101c31e4 call 0x101c27c0 */
  push32(0x101c31e9u); f_101c27c0();
  /* 101c31e9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c31eb push 0x101cf244 */
  push32((uint32_t)(0x101cf244u));
  /* 101c31f0 call 0x101c27a0 */
  push32(0x101c31f5u); f_101c27a0();
  /* 101c31f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c31f8 mov byte ptr [0x101d60d8], bl */
  w8((uint32_t)(0x101d60d8), (BL));
  /* 101c31fe mov byte ptr [0x101d60da], bl */
  w8((uint32_t)(0x101d60da), (BL));
  /* 101c3204 mov byte ptr [0x101d60dc], bl */
  w8((uint32_t)(0x101d60dc), (BL));
  /* 101c320a mov byte ptr [0x101d60dd], bl */
  w8((uint32_t)(0x101d60dd), (BL));
  /* 101c3210 mov byte ptr [0x101d6273], bl */
  w8((uint32_t)(0x101d6273), (BL));
  /* 101c3216 mov byte ptr [0x101d6271], bl */
  w8((uint32_t)(0x101d6271), (BL));
  /* 101c321c mov byte ptr [0x101d6274], bl */
  w8((uint32_t)(0x101d6274), (BL));
  /* 101c3222 mov byte ptr [0x101d6275], bl */
  w8((uint32_t)(0x101d6275), (BL));
  /* 101c3228 pop esi */
  ESI = (pop32());
  /* 101c3229 mov byte ptr [0x101d60db], 0 */
  w8((uint32_t)(0x101d60db), (0x0u));
  /* 101c3230 mov byte ptr [0x101d60d9], 0 */
  w8((uint32_t)(0x101d60d9), (0x0u));
  /* 101c3237 mov byte ptr [0x101d6270], 0 */
  w8((uint32_t)(0x101d6270), (0x0u));
  /* 101c323e mov byte ptr [0x101d6272], 0 */
  w8((uint32_t)(0x101d6272), (0x0u));
  /* 101c3245 mov dword ptr [0x101d659c], 0 */
  w32((uint32_t)(0x101d659c), (0x0u));
  /* 101c324f pop ebx */
  EBX = (pop32());
  /* 101c3250 ret  */
  ESPCHK(0x101c30e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003260 @ 0x101c3260 (85 bytes, 29 insns) */
void f_101c3260(void) {
  FTRACE(0x101c3260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c3260 mov eax, dword ptr [0x101d5ea8] */
  EAX = (r32((uint32_t)(0x101d5ea8)));
  /* 101c3265 push esi */
  push32((uint32_t)(ESI));
  /* 101c3266 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3269 jg 0x101c32b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c32b3;
  /* 101c326b push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c3270 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3276u);
  /* 101c3276 mov ecx, eax */
  ECX = (EAX);
  /* 101c3278 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101c327d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c327f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101c3282 mov eax, edx */
  EAX = (EDX);
  /* 101c3284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3287 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c328a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c328c mov esi, edx */
  ESI = (EDX);
  /* 101c328e je 0x101c32b3 */
  if (C.zf) goto L_101c32b3;
  /* 101c3290 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3292 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3294 push esi */
  push32((uint32_t)(ESI));
  /* 101c3295 push 0x101d3650 */
  push32((uint32_t)(0x101d3650u));
  /* 101c329a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c32a0u);
  /* 101c32a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c32a2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c32a4 push esi */
  push32((uint32_t)(ESI));
  /* 101c32a5 push 0x101d3590 */
  push32((uint32_t)(0x101d3590u));
  /* 101c32aa call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c32b0u);
  /* 101c32b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c32b3:;
  /* 101c32b3 pop esi */
  ESI = (pop32());
  /* 101c32b4 ret  */
  ESPCHK(0x101c3260u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x101c32c0 (1 bytes, 1 insns) */
void f_101c32c0(void) {
  FTRACE(0x101c32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c32c0 ret  */
  ESPCHK(0x101c32c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x101c32d0 (157 bytes, 43 insns) */
void f_101c32d0(void) {
  FTRACE(0x101c32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c32d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c32d2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c32d4 push 0x101d62a0 */
  push32((uint32_t)(0x101d62a0u));
  /* 101c32d9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c32dfu);
  /* 101c32df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c32e1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c32e3 push 0x101d62a8 */
  push32((uint32_t)(0x101d62a8u));
  /* 101c32e8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c32eeu);
  /* 101c32ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c32f0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c32f2 push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c32f7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c32fdu);
  /* 101c32fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c32ff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3301 push 0x101d6298 */
  push32((uint32_t)(0x101d6298u));
  /* 101c3306 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c330cu);
  /* 101c330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c330e push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3310 push 0x101d62b0 */
  push32((uint32_t)(0x101d62b0u));
  /* 101c3315 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c331bu);
  /* 101c331b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c331d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c331f push 0x101d61e8 */
  push32((uint32_t)(0x101d61e8u));
  /* 101c3324 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c332au);
  /* 101c332a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c332d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c332f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c3331 push 0x101d61d0 */
  push32((uint32_t)(0x101d61d0u));
  /* 101c3336 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c333cu);
  /* 101c333c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c333e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c3340 push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c3345 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c334bu);
  /* 101c334b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c334d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c334f push 0x101d61f0 */
  push32((uint32_t)(0x101d61f0u));
  /* 101c3354 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c335au);
  /* 101c335a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c335c push 0xa */
  push32((uint32_t)(0xau));
  /* 101c335e push 0x101d61f8 */
  push32((uint32_t)(0x101d61f8u));
  /* 101c3363 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3369u);
  /* 101c3369 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c336c ret  */
  ESPCHK(0x101c32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x101c3370 (79 bytes, 22 insns) */
void f_101c3370(void) {
  FTRACE(0x101c3370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c3370 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3372 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3374 push 0x101d3860 */
  push32((uint32_t)(0x101d3860u));
  /* 101c3379 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c337fu);
  /* 101c337f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3381 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3383 push 0x101d3868 */
  push32((uint32_t)(0x101d3868u));
  /* 101c3388 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c338eu);
  /* 101c338e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3390 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3392 push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c3397 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c339du);
  /* 101c339d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c339f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c33a1 push 0x101d5ec8 */
  push32((uint32_t)(0x101d5ec8u));
  /* 101c33a6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33acu);
  /* 101c33ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c33ae push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c33b0 push 0x101d5eb8 */
  push32((uint32_t)(0x101d5eb8u));
  /* 101c33b5 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33bbu);
  /* 101c33bb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c33be ret  */
  ESPCHK(0x101c3370u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c0 @ 0x101c33c0 (64 bytes, 18 insns) */
void f_101c33c0(void) {
  FTRACE(0x101c33c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c33c0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c33c2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c33c4 push 0x101d5fe8 */
  push32((uint32_t)(0x101d5fe8u));
  /* 101c33c9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33cfu);
  /* 101c33cf push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c33d1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c33d3 push 0x101d5ff0 */
  push32((uint32_t)(0x101d5ff0u));
  /* 101c33d8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33deu);
  /* 101c33de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c33e0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c33e2 push 0x101d5ff8 */
  push32((uint32_t)(0x101d5ff8u));
  /* 101c33e7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33edu);
  /* 101c33ed push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c33ef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c33f1 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c33f6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c33fcu);
  /* 101c33fc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c33ff ret  */
  ESPCHK(0x101c33c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003400 @ 0x101c3400 (3787 bytes, 1079 insns) */
void f_101c3400(void) {
  FTRACE(0x101c3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c3400 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c3403 push ebx */
  push32((uint32_t)(EBX));
  /* 101c3404 push ebp */
  push32((uint32_t)(EBP));
  /* 101c3405 push esi */
  push32((uint32_t)(ESI));
  /* 101c3406 push edi */
  push32((uint32_t)(EDI));
  /* 101c3407 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101c340c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101c3411 call dword ptr [0x101d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6468))), 0x101c3417u);
  /* 101c3417 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3419 call 0x101c2800 */
  push32(0x101c341eu); f_101c2800();
  /* 101c341e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c3420 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3422 call 0x101c26e0 */
  push32(0x101c3427u); f_101c26e0();
  /* 101c3427 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c3429 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c342b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 101c342f call 0x101c26e0 */
  push32(0x101c3434u); f_101c26e0();
  /* 101c3434 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101c3436 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3438 mov edi, eax */
  EDI = (EAX);
  /* 101c343a call 0x101c26e0 */
  push32(0x101c343fu); f_101c26e0();
  /* 101c343f push 0xe */
  push32((uint32_t)(0xeu));
  /* 101c3441 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3443 mov esi, eax */
  ESI = (EAX);
  /* 101c3445 call 0x101c26e0 */
  push32(0x101c344au); f_101c26e0();
  /* 101c344a push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c344f mov ebx, eax */
  EBX = (EAX);
  /* 101c3451 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3457u);
  /* 101c3457 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101c345a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c345f add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3461 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101c3465 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c346a lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101c346d mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101c3471 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c3477u);
  /* 101c3477 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c347c mov ebx, eax */
  EBX = (EAX);
  /* 101c347e call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3484u);
  /* 101c3484 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c3489 mov ebp, eax */
  EBP = (EAX);
  /* 101c348b call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c3491u);
  /* 101c3491 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c3496 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101c349a call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c34a0u);
  /* 101c34a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c34a3 mov edi, eax */
  EDI = (EAX);
  /* 101c34a5 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c34aa call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c34b0u);
  /* 101c34b0 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c34b5 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 101c34b9 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c34bfu);
  /* 101c34bf push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c34c4 mov esi, eax */
  ESI = (EAX);
  /* 101c34c6 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c34ccu);
  /* 101c34cc push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c34d1 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 101c34d5 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c34dbu);
  /* 101c34db mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 101c34df mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 101c34e3 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c34e5 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 101c34e9 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c34eb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c34ed sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c34ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c34f1 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c34f3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c34f5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c34f7 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c34fc add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c34fe mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 101c3502 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3508u);
  /* 101c3508 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c350a mov bl, 1 */
  BL = (0x1u);
  /* 101c350c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3512u);
  /* 101c3512 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3515 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c351a jle 0x101c354a */
  if ((C.zf||C.sf!=C.of)) goto L_101c354a;
  /* 101c351c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c351e call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3524u);
  /* 101c3524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3527 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c352c jle 0x101c354a */
  if ((C.zf||C.sf!=C.of)) goto L_101c354a;
  /* 101c352e push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3530 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3536u);
  /* 101c3536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3539 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c353e jle 0x101c354a */
  if ((C.zf||C.sf!=C.of)) goto L_101c354a;
  /* 101c3540 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101c3544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c3546 jne 0x101c354a */
  if (!C.zf) goto L_101c354a;
  /* 101c3548 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101c354a:;
  /* 101c354a push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c354f call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3555u);
  /* 101c3555 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3557 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101c355b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3561u);
  /* 101c3561 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c3566 mov esi, eax */
  ESI = (EAX);
  /* 101c3568 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c356eu);
  /* 101c356e push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c3573 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101c3577 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c357du);
  /* 101c357d push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c3582 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3588u);
  /* 101c3588 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c358d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 101c3591 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3597u);
  /* 101c3597 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c359c mov edi, eax */
  EDI = (EAX);
  /* 101c359e call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c35a4u);
  /* 101c35a4 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c35a9 mov ebp, eax */
  EBP = (EAX);
  /* 101c35ab call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c35b1u);
  /* 101c35b1 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c35b3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c35b5 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c35b7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c35b9 push 0x101d6060 */
  push32((uint32_t)(0x101d6060u));
  /* 101c35be mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 101c35c2 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 101c35c7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c35cdu);
  /* 101c35cd push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c35cf push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101c35d1 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c35d6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c35dcu);
  /* 101c35dc push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c35e1 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c35e7u);
  /* 101c35e7 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c35ec mov edi, eax */
  EDI = (EAX);
  /* 101c35ee call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c35f4u);
  /* 101c35f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c35f7 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c35f9 je 0x101c3600 */
  if (C.zf) goto L_101c3600;
  /* 101c35fb mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_101c3600:;
  /* 101c3600 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 101c3604 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 101c3606 je 0x101c3fcd */
  if (C.zf) goto L_101c3fcd;
  /* 101c360c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c360e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3610 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3612 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c3617 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c361du);
  /* 101c361d push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c3622 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3628u);
  /* 101c3628 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c362b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c362d je 0x101c42c3 */
  if (C.zf) goto L_101c42c3;
  /* 101c3633 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3635 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3637 push 0x101d62c8 */
  push32((uint32_t)(0x101d62c8u));
  /* 101c363c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3642u);
  /* 101c3642 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3645 call dword ptr [0x101d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64c0))), 0x101c364bu);
  /* 101c364b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c364d jne 0x101c3690 */
  if (!C.zf) goto L_101c3690;
  /* 101c364f cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3655 jle 0x101c367c */
  if ((C.zf||C.sf!=C.of)) goto L_101c367c;
  /* 101c3657 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3659 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c365b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c365d push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c3662 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3668u);
  /* 101c3668 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c366a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c366c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c366e push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c3673 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3679u);
  /* 101c3679 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c367c:;
  /* 101c367c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c367e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3680 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3682 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c3688u);
  /* 101c3688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c368b jmp 0x101c379e */
  goto L_101c379e;
L_101c3690:;
  /* 101c3690 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c3695 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c369bu);
  /* 101c369b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c369e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c36a0 je 0x101c36ca */
  if (C.zf) goto L_101c36ca;
  /* 101c36a2 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c36a8 jle 0x101c36b2 */
  if ((C.zf||C.sf!=C.of)) goto L_101c36b2;
  /* 101c36aa push 6 */
  push32((uint32_t)(0x6u));
  /* 101c36ac push 8 */
  push32((uint32_t)(0x8u));
  /* 101c36ae push 9 */
  push32((uint32_t)(0x9u));
  /* 101c36b0 jmp 0x101c36f0 */
  goto L_101c36f0;
L_101c36b2:;
  /* 101c36b2 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c36b8 jle 0x101c36c2 */
  if ((C.zf||C.sf!=C.of)) goto L_101c36c2;
  /* 101c36ba push 3 */
  push32((uint32_t)(0x3u));
  /* 101c36bc push 5 */
  push32((uint32_t)(0x5u));
  /* 101c36be push 9 */
  push32((uint32_t)(0x9u));
  /* 101c36c0 jmp 0x101c36f0 */
  goto L_101c36f0;
L_101c36c2:;
  /* 101c36c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c36c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c36c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c36c8 jmp 0x101c36f0 */
  goto L_101c36f0;
L_101c36ca:;
  /* 101c36ca cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c36d0 jle 0x101c36da */
  if ((C.zf||C.sf!=C.of)) goto L_101c36da;
  /* 101c36d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 101c36d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 101c36d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c36d8 jmp 0x101c36f0 */
  goto L_101c36f0;
L_101c36da:;
  /* 101c36da cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c36e0 jle 0x101c36ea */
  if ((C.zf||C.sf!=C.of)) goto L_101c36ea;
  /* 101c36e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c36e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c36e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c36e8 jmp 0x101c36f0 */
  goto L_101c36f0;
L_101c36ea:;
  /* 101c36ea push 4 */
  push32((uint32_t)(0x4u));
  /* 101c36ec push 4 */
  push32((uint32_t)(0x4u));
  /* 101c36ee push 0xa */
  push32((uint32_t)(0xau));
L_101c36f0:;
  /* 101c36f0 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c36f6u);
  /* 101c36f6 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 101c36fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c36fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c36ff mov edi, 0x15e */
  EDI = (0x15eu);
  /* 101c3704 je 0x101c370b */
  if (C.zf) goto L_101c370b;
  /* 101c3706 mov edi, 0x12c */
  EDI = (0x12cu);
L_101c370b:;
  /* 101c370b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c370e jge 0x101c372c */
  if ((C.sf==C.of)) goto L_101c372c;
  /* 101c3710 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3716 jle 0x101c372c */
  if ((C.zf||C.sf!=C.of)) goto L_101c372c;
  /* 101c3718 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c371a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c371c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c371e push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c3723 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3729u);
  /* 101c3729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c372c:;
  /* 101c372c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3732 jle 0x101c376d */
  if ((C.zf||C.sf!=C.of)) goto L_101c376d;
  /* 101c3734 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c3736 je 0x101c3752 */
  if (C.zf) goto L_101c3752;
  /* 101c3738 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c373a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101c373f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c3744 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c3749 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c374fu);
  /* 101c374f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3752:;
  /* 101c3752 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3758 jle 0x101c376d */
  if ((C.zf||C.sf!=C.of)) goto L_101c376d;
  /* 101c375a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c375c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c375e push edi */
  push32((uint32_t)(EDI));
  /* 101c375f push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c3764 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c376au);
  /* 101c376a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c376d:;
  /* 101c376d push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c3772 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3778u);
  /* 101c3778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c377b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c377d je 0x101c379e */
  if (C.zf) goto L_101c379e;
  /* 101c377f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3785 jle 0x101c379e */
  if ((C.zf||C.sf!=C.of)) goto L_101c379e;
  /* 101c3787 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c378c call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3792u);
  /* 101c3792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c3797 jle 0x101c379e */
  if ((C.zf||C.sf!=C.of)) goto L_101c379e;
  /* 101c3799 call 0x101c32d0 */
  push32(0x101c379eu); f_101c32d0();
L_101c379e:;
  /* 101c379e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 101c37a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c37a4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c37a7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c37a9 jge 0x101c37af */
  if ((C.sf==C.of)) goto L_101c37af;
  /* 101c37ab push 5 */
  push32((uint32_t)(0x5u));
  /* 101c37ad jmp 0x101c37b3 */
  goto L_101c37b3;
L_101c37af:;
  /* 101c37af add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c37b2 push eax */
  push32((uint32_t)(EAX));
L_101c37b3:;
  /* 101c37b3 push 0x101d5ee0 */
  push32((uint32_t)(0x101d5ee0u));
  /* 101c37b8 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c37beu);
  /* 101c37be mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 101c37c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c37c5 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c37c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c37ca jge 0x101c37e0 */
  if ((C.sf==C.of)) goto L_101c37e0;
  /* 101c37cc push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c37ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 101c37d0 push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
  /* 101c37d5 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c37dbu);
  /* 101c37db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c37de jmp 0x101c381a */
  goto L_101c381a;
L_101c37e0:;
  /* 101c37e0 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 101c37e3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c37e5 push ecx */
  push32((uint32_t)(ECX));
  /* 101c37e6 push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
  /* 101c37eb call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c37f1u);
  /* 101c37f1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c37f3 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 101c37f6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c37f8 push edx */
  push32((uint32_t)(EDX));
  /* 101c37f9 push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
  /* 101c37fe call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3804u);
  /* 101c3804 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3806 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3809 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c380b push edi */
  push32((uint32_t)(EDI));
  /* 101c380c push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
  /* 101c3811 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3817u);
  /* 101c3817 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c381a:;
  /* 101c381a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101c381c push 0 */
  push32((uint32_t)(0x0u));
  /* 101c381e call 0x101c26e0 */
  push32(0x101c3823u); f_101c26e0();
  /* 101c3823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c3828 je 0x101c3887 */
  if (C.zf) goto L_101c3887;
  /* 101c382a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c382c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c382e push 0x101d6238 */
  push32((uint32_t)(0x101d6238u));
  /* 101c3833 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3839u);
  /* 101c3839 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c383b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c383d push 0x101d6220 */
  push32((uint32_t)(0x101d6220u));
  /* 101c3842 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3848u);
  /* 101c3848 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c384a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c384c push 0x101d6230 */
  push32((uint32_t)(0x101d6230u));
  /* 101c3851 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3857u);
  /* 101c3857 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3859 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c385b push 0x101d6210 */
  push32((uint32_t)(0x101d6210u));
  /* 101c3860 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3866u);
  /* 101c3866 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3868 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c386a push 0x101d6218 */
  push32((uint32_t)(0x101d6218u));
  /* 101c386f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3875u);
  /* 101c3875 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3877 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3879 push 0x101d6208 */
  push32((uint32_t)(0x101d6208u));
  /* 101c387e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3884u);
  /* 101c3884 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3887:;
  /* 101c3887 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3889 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c388b push 3 */
  push32((uint32_t)(0x3u));
  /* 101c388d push 0x101d37f0 */
  push32((uint32_t)(0x101d37f0u));
  /* 101c3892 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3898u);
  /* 101c3898 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c389a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c389c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c389e push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c38a3 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c38a9u);
  /* 101c38a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c38ab push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c38ad push 2 */
  push32((uint32_t)(0x2u));
  /* 101c38af push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c38b4 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c38bau);
  /* 101c38ba mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 101c38be add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c38c1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c38c3 jne 0x101c38d9 */
  if (!C.zf) goto L_101c38d9;
  /* 101c38c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c38c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c38c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c38cb push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c38d0 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c38d6u);
  /* 101c38d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c38d9:;
  /* 101c38d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c38db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c38dd push 1 */
  push32((uint32_t)(0x1u));
  /* 101c38df push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c38e4 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c38eau);
  /* 101c38ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c38ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c38ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101c38f0 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c38f5 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c38fbu);
  /* 101c38fb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c38fd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c38ff push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3901 push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c3906 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c390cu);
  /* 101c390c push 5 */
  push32((uint32_t)(0x5u));
  /* 101c390e push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3910 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3912 push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c3917 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c391du);
  /* 101c391d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3920 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3922 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3924 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3926 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c392b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3931u);
  /* 101c3931 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3933 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c3935 push 0x101d35b0 */
  push32((uint32_t)(0x101d35b0u));
  /* 101c393a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3940u);
  /* 101c3940 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c3945 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c394bu);
  /* 101c394b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c394e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c3950 jle 0x101c3977 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3977;
  /* 101c3952 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c3954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3956 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3958 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c395d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3963u);
  /* 101c3963 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3965 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3967 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3969 push 0x101d6048 */
  push32((uint32_t)(0x101d6048u));
  /* 101c396e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3974u);
  /* 101c3974 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3977:;
  /* 101c3977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3979 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c397b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c397d push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c3982 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3988u);
  /* 101c3988 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c398b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c398d jne 0x101c39a3 */
  if (!C.zf) goto L_101c39a3;
  /* 101c398f push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3991 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3993 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3995 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c399a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c39a0u);
  /* 101c39a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c39a3:;
  /* 101c39a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c39a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c39a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c39a9 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c39ae call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c39b4u);
  /* 101c39b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c39b7 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c39ba jle 0x101c39d0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c39d0;
  /* 101c39bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c39be push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c39c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c39c2 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c39c7 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c39cdu);
  /* 101c39cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c39d0:;
  /* 101c39d0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c39d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c39d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c39d6 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c39db call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c39e1u);
  /* 101c39e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c39e3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c39e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c39e7 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c39ec call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c39f2u);
  /* 101c39f2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c39f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c39f6 push 0x101d5fc8 */
  push32((uint32_t)(0x101d5fc8u));
  /* 101c39fb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a01u);
  /* 101c3a01 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3a03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3a05 push 0x101d5f80 */
  push32((uint32_t)(0x101d5f80u));
  /* 101c3a0a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a10u);
  /* 101c3a10 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3a12 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3a14 push 0x101d5f88 */
  push32((uint32_t)(0x101d5f88u));
  /* 101c3a19 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a1fu);
  /* 101c3a1f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3a22 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3a24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3a26 push 0x101d5f90 */
  push32((uint32_t)(0x101d5f90u));
  /* 101c3a2b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a31u);
  /* 101c3a31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3a33 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c3a35 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c3a3a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a40u);
  /* 101c3a40 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3a42 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3a44 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c3a49 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3a4fu);
  /* 101c3a4f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3a51 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c3a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3a55 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c3a5a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3a60u);
  /* 101c3a60 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3a62 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3a66 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c3a6b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3a71u);
  /* 101c3a71 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3a74 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3a76 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3a78 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3a7a push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c3a7f call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3a85u);
  /* 101c3a85 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3a87 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3a89 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3a8b push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c3a90 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3a96u);
  /* 101c3a96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3a98 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c3a9a push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c3a9f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3aa5u);
  /* 101c3aa5 call 0x101c26d0 */
  push32(0x101c3aaau); f_101c26d0();
  /* 101c3aaa push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c3aaf mov edi, eax */
  EDI = (EAX);
  /* 101c3ab1 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3ab7u);
  /* 101c3ab7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3aba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3abc je 0x101c3adf */
  if (C.zf) goto L_101c3adf;
  /* 101c3abe push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3ac0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3ac2 push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c3ac7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3acdu);
  /* 101c3acd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3acf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3ad1 push 0x101d37c0 */
  push32((uint32_t)(0x101d37c0u));
  /* 101c3ad6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3adcu);
  /* 101c3adc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3adf:;
  /* 101c3adf push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c3ae4 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3aeau);
  /* 101c3aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3aed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3aef je 0x101c3b17 */
  if (C.zf) goto L_101c3b17;
  /* 101c3af1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3af5 push 0x101d3890 */
  push32((uint32_t)(0x101d3890u));
  /* 101c3afa call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3b00u);
  /* 101c3b00 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3b02 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c3b04 push 0x101d37d0 */
  push32((uint32_t)(0x101d37d0u));
  /* 101c3b09 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3b0fu);
  /* 101c3b0f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b12 call 0x101c33c0 */
  push32(0x101c3b17u); f_101c33c0();
L_101c3b17:;
  /* 101c3b17 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c3b1c call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3b22u);
  /* 101c3b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3b27 je 0x101c3b4e */
  if (C.zf) goto L_101c3b4e;
  /* 101c3b29 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3b2b push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3b2d push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3b2f push 0x101d35b8 */
  push32((uint32_t)(0x101d35b8u));
  /* 101c3b34 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3b3au);
  /* 101c3b3a push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3b3c push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3b3e push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c3b40 push 0x101d35b8 */
  push32((uint32_t)(0x101d35b8u));
  /* 101c3b45 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3b4bu);
  /* 101c3b4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3b4e:;
  /* 101c3b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3b50 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3b52 call 0x101c2690 */
  push32(0x101c3b57u); f_101c2690();
  /* 101c3b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c3b59 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3b5fu);
  /* 101c3b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b62 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3b67 jle 0x101c3bab */
  if ((C.zf||C.sf!=C.of)) goto L_101c3bab;
  /* 101c3b69 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c3b6e call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3b74u);
  /* 101c3b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3b79 je 0x101c3bab */
  if (C.zf) goto L_101c3bab;
  /* 101c3b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3b7d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3b83u);
  /* 101c3b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b86 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3b8b jge 0x101c3bab */
  if ((C.sf==C.of)) goto L_101c3bab;
  /* 101c3b8d push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c3b92 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3b98u);
  /* 101c3b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3b9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3b9d jne 0x101c3bab */
  if (!C.zf) goto L_101c3bab;
  /* 101c3b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3ba3 call 0x101c2690 */
  push32(0x101c3ba8u); f_101c2690();
  /* 101c3ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3bab:;
  /* 101c3bab push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c3bb0 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3bb6u);
  /* 101c3bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3bb9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3bbb je 0x101c3d3c */
  if (C.zf) goto L_101c3d3c;
  /* 101c3bc1 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c3bc6 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3bccu);
  /* 101c3bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3bcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3bd1 je 0x101c3d3c */
  if (C.zf) goto L_101c3d3c;
  /* 101c3bd7 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c3bdc call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3be2u);
  /* 101c3be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3be5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3be7 je 0x101c3d3c */
  if (C.zf) goto L_101c3d3c;
  /* 101c3bed cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3bf0 je 0x101c3bf7 */
  if (C.zf) goto L_101c3bf7;
  /* 101c3bf2 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3bf5 jne 0x101c3c27 */
  if (!C.zf) goto L_101c3c27;
L_101c3bf7:;
  /* 101c3bf7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3bf9 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3bffu);
  /* 101c3bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c02 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c07 jle 0x101c3c27 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3c27;
  /* 101c3c09 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c0b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3c11u);
  /* 101c3c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c14 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c19 jge 0x101c3c27 */
  if ((C.sf==C.of)) goto L_101c3c27;
  /* 101c3c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c1f call 0x101c2690 */
  push32(0x101c3c24u); f_101c2690();
  /* 101c3c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3c27:;
  /* 101c3c27 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c3c2c call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3c32u);
  /* 101c3c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3c37 jne 0x101c3c69 */
  if (!C.zf) goto L_101c3c69;
  /* 101c3c39 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3c3b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3c41u);
  /* 101c3c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c44 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c49 jle 0x101c3c69 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3c69;
  /* 101c3c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c4d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3c53u);
  /* 101c3c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c56 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c5b jge 0x101c3c69 */
  if ((C.sf==C.of)) goto L_101c3c69;
  /* 101c3c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3c61 call 0x101c2690 */
  push32(0x101c3c66u); f_101c2690();
  /* 101c3c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3c69:;
  /* 101c3c69 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c3c6e call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3c74u);
  /* 101c3c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3c79 je 0x101c3d3c */
  if (C.zf) goto L_101c3d3c;
  /* 101c3c7f cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c82 jne 0x101c3cc2 */
  if (!C.zf) goto L_101c3cc2;
  /* 101c3c84 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3c86 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3c8cu);
  /* 101c3c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3c8f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3c94 jle 0x101c3d97 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3d97;
  /* 101c3c9a push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3c9c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3ca2u);
  /* 101c3ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3ca5 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3caa jle 0x101c3d97 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3d97;
  /* 101c3cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3cb2 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3cb8u);
  /* 101c3cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3cbb cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3cc0 jmp 0x101c3d2c */
  goto L_101c3d2c;
L_101c3cc2:;
  /* 101c3cc2 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3cc5 jne 0x101c3d05 */
  if (!C.zf) goto L_101c3d05;
  /* 101c3cc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3cc9 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3ccfu);
  /* 101c3ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3cd2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3cd7 jle 0x101c3d97 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3d97;
  /* 101c3cdd push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3cdf call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3ce5u);
  /* 101c3ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3ce8 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3ced jle 0x101c3d97 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3d97;
  /* 101c3cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3cf5 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3cfbu);
  /* 101c3cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3cfe cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3d03 jmp 0x101c3d2c */
  goto L_101c3d2c;
L_101c3d05:;
  /* 101c3d05 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3d08 jne 0x101c3d3c */
  if (!C.zf) goto L_101c3d3c;
  /* 101c3d0a push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3d0c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3d12u);
  /* 101c3d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3d15 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3d1a jle 0x101c3d97 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3d97;
  /* 101c3d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3d1e call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c3d24u);
  /* 101c3d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3d27 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101c3d2c:;
  /* 101c3d2c jge 0x101c3d97 */
  if ((C.sf==C.of)) goto L_101c3d97;
  /* 101c3d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3d32 call 0x101c2690 */
  push32(0x101c3d37u); f_101c2690();
  /* 101c3d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3d3a jmp 0x101c3d97 */
  goto L_101c3d97;
L_101c3d3c:;
  /* 101c3d3c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3d3f jne 0x101c3d97 */
  if (!C.zf) goto L_101c3d97;
  /* 101c3d41 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3d43 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c3d45 push 0x101d36b8 */
  push32((uint32_t)(0x101d36b8u));
  /* 101c3d4a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3d50u);
  /* 101c3d50 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3d52 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3d56 push 0x101d62e8 */
  push32((uint32_t)(0x101d62e8u));
  /* 101c3d5b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3d61u);
  /* 101c3d61 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3d63 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3d65 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3d67 push 0x101d62e8 */
  push32((uint32_t)(0x101d62e8u));
  /* 101c3d6c call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3d72u);
  /* 101c3d72 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3d74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3d76 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3d78 push 0x101d62e8 */
  push32((uint32_t)(0x101d62e8u));
  /* 101c3d7d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3d83u);
  /* 101c3d83 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3d85 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3d87 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c3d89 push 0x101d62e8 */
  push32((uint32_t)(0x101d62e8u));
  /* 101c3d8e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3d94u);
  /* 101c3d94 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3d97:;
  /* 101c3d97 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3d9a jle 0x101c3df3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3df3;
  /* 101c3d9c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101c3da0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3da2 je 0x101c3df3 */
  if (C.zf) goto L_101c3df3;
  /* 101c3da4 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3da6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c3da8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3daa push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c3daf call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3db5u);
  /* 101c3db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3db8 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3dbb jle 0x101c3df3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3df3;
  /* 101c3dbd push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3dbf push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c3dc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3dc3 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c3dc8 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3dceu);
  /* 101c3dce push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3dd0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c3dd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3dd4 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c3dd9 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3ddfu);
  /* 101c3ddf push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3de1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3de5 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c3dea call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3df0u);
  /* 101c3df0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3df3:;
  /* 101c3df3 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 101c3df7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c3df9 je 0x101c3e37 */
  if (C.zf) goto L_101c3e37;
  /* 101c3dfb push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c3e00 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3e06u);
  /* 101c3e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3e09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3e0b je 0x101c3e37 */
  if (C.zf) goto L_101c3e37;
  /* 101c3e0d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c3e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 101c3e11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 101c3e13 push 0x101d60b0 */
  push32((uint32_t)(0x101d60b0u));
  /* 101c3e18 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3e1eu);
  /* 101c3e1e push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c3e23 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3e29u);
  /* 101c3e29 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c3e2e call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3e34u);
  /* 101c3e34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3e37:;
  /* 101c3e37 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c3e3c call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3e42u);
  /* 101c3e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3e44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3e46 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3e48 push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c3e4d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3e53u);
  /* 101c3e53 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c3e58 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3e5eu);
  /* 101c3e5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3e61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3e63 je 0x101c3e79 */
  if (C.zf) goto L_101c3e79;
  /* 101c3e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3e67 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3e69 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3e6b push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c3e70 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3e76u);
  /* 101c3e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3e79:;
  /* 101c3e79 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c3e7b je 0x101c3f65 */
  if (C.zf) goto L_101c3f65;
  /* 101c3e81 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c3e86 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c3e8cu);
  /* 101c3e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3e8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3e91 je 0x101c3f65 */
  if (C.zf) goto L_101c3f65;
  /* 101c3e97 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c3e99 jne 0x101c3ed1 */
  if (!C.zf) goto L_101c3ed1;
  /* 101c3e9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3e9d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 101c3ea1 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c3ea6 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3eacu);
  /* 101c3eac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3eae push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3eb0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c3eb2 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c3eb7 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3ebdu);
  /* 101c3ebd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c3ebf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3ec1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c3ec3 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c3ec8 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3eceu);
  /* 101c3ece add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3ed1:;
  /* 101c3ed1 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c3ed6 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3edcu);
  /* 101c3edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3edf cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3ee2 jle 0x101c3f05 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3f05;
  /* 101c3ee4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3ee6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3ee8 push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c3eed call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3ef3u);
  /* 101c3ef3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c3ef5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c3ef7 push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c3efc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f02u);
  /* 101c3f02 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3f05:;
  /* 101c3f05 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f07 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c3f09 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c3f0e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f14u);
  /* 101c3f14 push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c3f19 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c3f1fu);
  /* 101c3f1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c3f24 je 0x101c3f65 */
  if (C.zf) goto L_101c3f65;
  /* 101c3f26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f2a push 0x101d60b8 */
  push32((uint32_t)(0x101d60b8u));
  /* 101c3f2f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f35u);
  /* 101c3f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f37 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f39 push 0x101d60c8 */
  push32((uint32_t)(0x101d60c8u));
  /* 101c3f3e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f44u);
  /* 101c3f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f46 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c3f48 push 0x101d60d0 */
  push32((uint32_t)(0x101d60d0u));
  /* 101c3f4d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f53u);
  /* 101c3f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f55 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c3f57 push 0x101d60c0 */
  push32((uint32_t)(0x101d60c0u));
  /* 101c3f5c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f62u);
  /* 101c3f62 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3f65:;
  /* 101c3f65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c3f67 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c3f69 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c3f6e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f74u);
  /* 101c3f74 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3f76 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c3f78 push 0x101d3830 */
  push32((uint32_t)(0x101d3830u));
  /* 101c3f7d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3f83u);
  /* 101c3f83 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c3f88 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c3f8eu);
  /* 101c3f8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c3f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3f94 jle 0x101c3fd1 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3fd1;
  /* 101c3f96 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101c3f9a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3f9f jle 0x101c3fd1 */
  if ((C.zf||C.sf!=C.of)) goto L_101c3fd1;
  /* 101c3fa1 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 101c3fa4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c3fa8 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 101c3fab cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c3fad jge 0x101c3fc6 */
  if ((C.sf==C.of)) goto L_101c3fc6;
  /* 101c3faf push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3fb1 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c3fb3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101c3fb8 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c3fbd call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c3fc3u);
  /* 101c3fc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c3fc6:;
  /* 101c3fc6 call 0x101c3370 */
  push32(0x101c3fcbu); f_101c3370();
  /* 101c3fcb jmp 0x101c3fd1 */
  goto L_101c3fd1;
L_101c3fcd:;
  /* 101c3fcd mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_101c3fd1:;
  /* 101c3fd1 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c3fd3 je 0x101c4016 */
  if (C.zf) goto L_101c4016;
  /* 101c3fd5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3fd7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c3fd9 push 0x101d3580 */
  push32((uint32_t)(0x101d3580u));
  /* 101c3fde call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3fe4u);
  /* 101c3fe4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3fe6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c3fe8 push 0x101d3658 */
  push32((uint32_t)(0x101d3658u));
  /* 101c3fed call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c3ff3u);
  /* 101c3ff3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c3ff5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c3ff7 push 0x101d3578 */
  push32((uint32_t)(0x101d3578u));
  /* 101c3ffc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4002u);
  /* 101c4002 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4004 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4006 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4008 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c400d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4013u);
  /* 101c4013 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4016:;
  /* 101c4016 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c401b call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4021u);
  /* 101c4021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4024 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4026 je 0x101c4049 */
  if (C.zf) goto L_101c4049;
  /* 101c4028 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c402a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c402c push 0x101d6148 */
  push32((uint32_t)(0x101d6148u));
  /* 101c4031 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4037u);
  /* 101c4037 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4039 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c403b push 0x101d6150 */
  push32((uint32_t)(0x101d6150u));
  /* 101c4040 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4046u);
  /* 101c4046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4049:;
  /* 101c4049 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c404e call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c4054u);
  /* 101c4054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4059 je 0x101c42c3 */
  if (C.zf) goto L_101c42c3;
  /* 101c405f push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c4064 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c406au);
  /* 101c406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c406d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c406f je 0x101c40ca */
  if (C.zf) goto L_101c40ca;
  /* 101c4071 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c4076 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c407cu);
  /* 101c407c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c407f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4081 jne 0x101c40ca */
  if (!C.zf) goto L_101c40ca;
  /* 101c4083 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4085 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c408bu);
  /* 101c408b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c408e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4093 jle 0x101c40ca */
  if ((C.zf||C.sf!=C.of)) goto L_101c40ca;
  /* 101c4095 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4097 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c409du);
  /* 101c409d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c40a0 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c40a5 jge 0x101c40ca */
  if ((C.sf==C.of)) goto L_101c40ca;
  /* 101c40a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c40a9 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c40afu);
  /* 101c40af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c40b2 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c40b7 jle 0x101c40ca */
  if ((C.zf||C.sf!=C.of)) goto L_101c40ca;
  /* 101c40b9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c40be push 3 */
  push32((uint32_t)(0x3u));
  /* 101c40c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c40c2 call 0x101c26b0 */
  push32(0x101c40c7u); f_101c26b0();
  /* 101c40c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c40ca:;
  /* 101c40ca push 3 */
  push32((uint32_t)(0x3u));
  /* 101c40cc call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c40d2u);
  /* 101c40d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c40d5 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c40da jge 0x101c40ff */
  if ((C.sf==C.of)) goto L_101c40ff;
  /* 101c40dc push 2 */
  push32((uint32_t)(0x2u));
  /* 101c40de call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c40e4u);
  /* 101c40e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c40e7 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c40ec jle 0x101c40ff */
  if ((C.zf||C.sf!=C.of)) goto L_101c40ff;
  /* 101c40ee push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101c40f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c40f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c40f7 call 0x101c26b0 */
  push32(0x101c40fcu); f_101c26b0();
  /* 101c40fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c40ff:;
  /* 101c40ff push 0x101d6148 */
  push32((uint32_t)(0x101d6148u));
  /* 101c4104 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c410au);
  /* 101c410a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c410d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c410f je 0x101c4237 */
  if (C.zf) goto L_101c4237;
  /* 101c4115 push 0x101d6150 */
  push32((uint32_t)(0x101d6150u));
  /* 101c411a call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4120u);
  /* 101c4120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4123 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4125 je 0x101c4237 */
  if (C.zf) goto L_101c4237;
  /* 101c412b push 2 */
  push32((uint32_t)(0x2u));
  /* 101c412d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4133u);
  /* 101c4133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4136 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c413b jle 0x101c414e */
  if ((C.zf||C.sf!=C.of)) goto L_101c414e;
  /* 101c413d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101c4142 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4144 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4146 call 0x101c26b0 */
  push32(0x101c414bu); f_101c26b0();
  /* 101c414b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c414e:;
  /* 101c414e push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4150 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4156u);
  /* 101c4156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c415b je 0x101c425a */
  if (C.zf) goto L_101c425a;
  /* 101c4161 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4163 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4169u);
  /* 101c4169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c416c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c416e je 0x101c41db */
  if (C.zf) goto L_101c41db;
  /* 101c4170 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4172 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4178u);
  /* 101c4178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c417b cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4180 jge 0x101c41db */
  if ((C.sf==C.of)) goto L_101c41db;
  /* 101c4182 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4184 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c418au);
  /* 101c418a push 5 */
  push32((uint32_t)(0x5u));
  /* 101c418c mov esi, eax */
  ESI = (EAX);
  /* 101c418e call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4194u);
  /* 101c4194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4197 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4199 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101c419e jge 0x101c41bf */
  if ((C.sf==C.of)) goto L_101c41bf;
  /* 101c41a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c41a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c41a4 call 0x101c26b0 */
  push32(0x101c41a9u); f_101c26b0();
  /* 101c41a9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101c41ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101c41b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c41b2 call 0x101c26b0 */
  push32(0x101c41b7u); f_101c26b0();
  /* 101c41b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c41ba jmp 0x101c425a */
  goto L_101c425a;
L_101c41bf:;
  /* 101c41bf push 4 */
  push32((uint32_t)(0x4u));
  /* 101c41c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c41c3 call 0x101c26b0 */
  push32(0x101c41c8u); f_101c26b0();
  /* 101c41c8 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101c41cd push 5 */
  push32((uint32_t)(0x5u));
  /* 101c41cf push 2 */
  push32((uint32_t)(0x2u));
  /* 101c41d1 call 0x101c26b0 */
  push32(0x101c41d6u); f_101c26b0();
  /* 101c41d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c41d9 jmp 0x101c425a */
  goto L_101c425a;
L_101c41db:;
  /* 101c41db push 5 */
  push32((uint32_t)(0x5u));
  /* 101c41dd call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c41e3u);
  /* 101c41e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c41e6 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c41eb jge 0x101c420d */
  if ((C.sf==C.of)) goto L_101c420d;
  /* 101c41ed push 0 */
  push32((uint32_t)(0x0u));
  /* 101c41ef call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c41f5u);
  /* 101c41f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c41f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c41fa je 0x101c420d */
  if (C.zf) goto L_101c420d;
  /* 101c41fc push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101c4201 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4203 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4205 call 0x101c26b0 */
  push32(0x101c420au); f_101c26b0();
  /* 101c420a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c420d:;
  /* 101c420d push 5 */
  push32((uint32_t)(0x5u));
  /* 101c420f call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4215u);
  /* 101c4215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4218 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c421d jge 0x101c425a */
  if ((C.sf==C.of)) goto L_101c425a;
  /* 101c421f push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4221 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4227u);
  /* 101c4227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c422a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c422c je 0x101c425a */
  if (C.zf) goto L_101c425a;
  /* 101c422e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101c4233 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4235 jmp 0x101c4250 */
  goto L_101c4250;
L_101c4237:;
  /* 101c4237 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4239 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c423fu);
  /* 101c423f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4242 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4247 jle 0x101c425a */
  if ((C.zf||C.sf!=C.of)) goto L_101c425a;
  /* 101c4249 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101c424e push 1 */
  push32((uint32_t)(0x1u));
L_101c4250:;
  /* 101c4250 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4252 call 0x101c26b0 */
  push32(0x101c4257u); f_101c26b0();
  /* 101c4257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c425a:;
  /* 101c425a push 0 */
  push32((uint32_t)(0x0u));
  /* 101c425c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4262u);
  /* 101c4262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4265 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c426a jle 0x101c427d */
  if ((C.zf||C.sf!=C.of)) goto L_101c427d;
  /* 101c426c push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101c4271 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4273 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4275 call 0x101c26b0 */
  push32(0x101c427au); f_101c26b0();
  /* 101c427a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c427d:;
  /* 101c427d push 4 */
  push32((uint32_t)(0x4u));
  /* 101c427f call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4285u);
  /* 101c4285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4288 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c428d jle 0x101c42a0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c42a0;
  /* 101c428f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101c4294 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4296 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4298 call 0x101c26b0 */
  push32(0x101c429du); f_101c26b0();
  /* 101c429d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c42a0:;
  /* 101c42a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c42a2 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c42a8u);
  /* 101c42a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c42ab cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c42b0 jle 0x101c42c3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c42c3;
  /* 101c42b2 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101c42b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c42b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c42bb call 0x101c26b0 */
  push32(0x101c42c0u); f_101c26b0();
  /* 101c42c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c42c3:;
  /* 101c42c3 pop edi */
  EDI = (pop32());
  /* 101c42c4 pop esi */
  ESI = (pop32());
  /* 101c42c5 pop ebp */
  EBP = (pop32());
  /* 101c42c6 pop ebx */
  EBX = (pop32());
  /* 101c42c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c42ca ret  */
  ESPCHK(0x101c3400u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x101c42d0 (209 bytes, 56 insns) */
void f_101c42d0(void) {
  FTRACE(0x101c42d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c42d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c42d2 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c42d8u);
  /* 101c42d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c42db cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c42e0 jle 0x101c43a0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c43a0;
  /* 101c42e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c42e8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c42ea push 0x101d62a0 */
  push32((uint32_t)(0x101d62a0u));
  /* 101c42ef call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c42f5u);
  /* 101c42f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c42f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c42f9 push 0x101d62a8 */
  push32((uint32_t)(0x101d62a8u));
  /* 101c42fe call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4304u);
  /* 101c4304 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4306 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4308 push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c430d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4313u);
  /* 101c4313 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4315 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4317 push 0x101d6298 */
  push32((uint32_t)(0x101d6298u));
  /* 101c431c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4322u);
  /* 101c4322 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4324 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4326 push 0x101d62b0 */
  push32((uint32_t)(0x101d62b0u));
  /* 101c432b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4331u);
  /* 101c4331 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4333 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4335 push 0x101d61e8 */
  push32((uint32_t)(0x101d61e8u));
  /* 101c433a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4340u);
  /* 101c4340 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4343 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4345 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4347 push 0x101d61d0 */
  push32((uint32_t)(0x101d61d0u));
  /* 101c434c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4352u);
  /* 101c4352 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4354 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4356 push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c435b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4361u);
  /* 101c4361 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4363 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4365 push 0x101d61f0 */
  push32((uint32_t)(0x101d61f0u));
  /* 101c436a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4370u);
  /* 101c4370 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4372 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4374 push 0x101d61f8 */
  push32((uint32_t)(0x101d61f8u));
  /* 101c4379 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c437fu);
  /* 101c437f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4381 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4383 push 0x101d61b0 */
  push32((uint32_t)(0x101d61b0u));
  /* 101c4388 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c438eu);
  /* 101c438e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4390 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4392 push 0x101d5f18 */
  push32((uint32_t)(0x101d5f18u));
  /* 101c4397 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c439du);
  /* 101c439d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c43a0:;
  /* 101c43a0 ret  */
  ESPCHK(0x101c42d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x101c43b0 (79 bytes, 22 insns) */
void f_101c43b0(void) {
  FTRACE(0x101c43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c43b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c43b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c43b4 push 0x101d3860 */
  push32((uint32_t)(0x101d3860u));
  /* 101c43b9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c43bfu);
  /* 101c43bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c43c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c43c3 push 0x101d3868 */
  push32((uint32_t)(0x101d3868u));
  /* 101c43c8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c43ceu);
  /* 101c43ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c43d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c43d2 push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c43d7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c43ddu);
  /* 101c43dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c43df push 0xa */
  push32((uint32_t)(0xau));
  /* 101c43e1 push 0x101d5ec8 */
  push32((uint32_t)(0x101d5ec8u));
  /* 101c43e6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c43ecu);
  /* 101c43ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c43ee push 0xa */
  push32((uint32_t)(0xau));
  /* 101c43f0 push 0x101d5eb8 */
  push32((uint32_t)(0x101d5eb8u));
  /* 101c43f5 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c43fbu);
  /* 101c43fb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c43fe ret  */
  ESPCHK(0x101c43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004400 @ 0x101c4400 (127 bytes, 35 insns) */
void f_101c4400(void) {
  FTRACE(0x101c4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c4400 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4402 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4404 push 0x101d6128 */
  push32((uint32_t)(0x101d6128u));
  /* 101c4409 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c440fu);
  /* 101c440f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4411 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4413 push 0x101d6120 */
  push32((uint32_t)(0x101d6120u));
  /* 101c4418 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c441eu);
  /* 101c441e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4420 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4422 push 0x101d60f0 */
  push32((uint32_t)(0x101d60f0u));
  /* 101c4427 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c442du);
  /* 101c442d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c442f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4431 push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c4436 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c443cu);
  /* 101c443c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c443e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4440 push 0x101d5fe8 */
  push32((uint32_t)(0x101d5fe8u));
  /* 101c4445 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c444bu);
  /* 101c444b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c444d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c444f push 0x101d5ff0 */
  push32((uint32_t)(0x101d5ff0u));
  /* 101c4454 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c445au);
  /* 101c445a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c445d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c445f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4461 push 0x101d5ff8 */
  push32((uint32_t)(0x101d5ff8u));
  /* 101c4466 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c446cu);
  /* 101c446c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c446e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4470 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c4475 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c447bu);
  /* 101c447b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c447e ret  */
  ESPCHK(0x101c4400u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101c4480 (3643 bytes, 1035 insns) */
void f_101c4480(void) {
  FTRACE(0x101c4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c4480 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c4483 push ebx */
  push32((uint32_t)(EBX));
  /* 101c4484 push ebp */
  push32((uint32_t)(EBP));
  /* 101c4485 push esi */
  push32((uint32_t)(ESI));
  /* 101c4486 push edi */
  push32((uint32_t)(EDI));
  /* 101c4487 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4489 call 0x101c2800 */
  push32(0x101c448eu); f_101c2800();
  /* 101c448e push 0x101cf030 */
  push32((uint32_t)(0x101cf030u));
  /* 101c4493 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c4495 call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c449bu);
  /* 101c449b push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c44a0 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c44a6u);
  /* 101c44a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c44a8 mov ebx, eax */
  EBX = (EAX);
  /* 101c44aa call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c44b0u);
  /* 101c44b0 mov ebp, eax */
  EBP = (EAX);
  /* 101c44b2 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c44b7 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 101c44bb call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c44c1u);
  /* 101c44c1 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c44c6 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 101c44ca call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c44d0u);
  /* 101c44d0 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c44d5 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c44dbu);
  /* 101c44db push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c44e0 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c44e6u);
  /* 101c44e6 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c44eb call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c44f1u);
  /* 101c44f1 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c44f6 mov esi, eax */
  ESI = (EAX);
  /* 101c44f8 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c44feu);
  /* 101c44fe push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c4503 mov edi, eax */
  EDI = (EAX);
  /* 101c4505 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c450bu);
  /* 101c450b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c450d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4510 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4512 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 101c4517 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 101c451b call 0x101c2700 */
  push32(0x101c4520u); f_101c2700();
  /* 101c4520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4522 jle 0x101c4538 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4538;
  /* 101c4524 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c4526 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4528 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c452a push 0x101d6278 */
  push32((uint32_t)(0x101d6278u));
  /* 101c452f call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4535u);
  /* 101c4535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4538:;
  /* 101c4538 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c453d call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c4543u);
  /* 101c4543 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c4548 mov esi, eax */
  ESI = (EAX);
  /* 101c454a call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4550u);
  /* 101c4550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4553 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c4555 je 0x101c455c */
  if (C.zf) goto L_101c455c;
  /* 101c4557 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101c455c:;
  /* 101c455c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c455e je 0x101c52b3 */
  if (C.zf) goto L_101c52b3;
  /* 101c4564 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4566 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4568 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c456a push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c456f call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4575u);
  /* 101c4575 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c457a call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4580u);
  /* 101c4580 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4585 je 0x101c52b3 */
  if (C.zf) goto L_101c52b3;
  /* 101c458b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c458d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c458f push 0x101d62c8 */
  push32((uint32_t)(0x101d62c8u));
  /* 101c4594 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c459au);
  /* 101c459a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c459d call dword ptr [0x101d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64c0))), 0x101c45a3u);
  /* 101c45a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c45a5 jne 0x101c45fc */
  if (!C.zf) goto L_101c45fc;
  /* 101c45a7 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c45ad jle 0x101c45d4 */
  if ((C.zf||C.sf!=C.of)) goto L_101c45d4;
  /* 101c45af push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45b5 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c45ba call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c45c0u);
  /* 101c45c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c45c6 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c45cb call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c45d1u);
  /* 101c45d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c45d4:;
  /* 101c45d4 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c45da jle 0x101c45e8 */
  if ((C.zf||C.sf!=C.of)) goto L_101c45e8;
  /* 101c45dc cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c45e1 jle 0x101c45e8 */
  if ((C.zf||C.sf!=C.of)) goto L_101c45e8;
  /* 101c45e3 call 0x101c42d0 */
  push32(0x101c45e8u); f_101c42d0();
L_101c45e8:;
  /* 101c45e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c45ea push 1 */
  push32((uint32_t)(0x1u));
  /* 101c45ec push 0 */
  push32((uint32_t)(0x0u));
  /* 101c45ee call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c45f4u);
  /* 101c45f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c45f7 jmp 0x101c46bf */
  goto L_101c46bf;
L_101c45fc:;
  /* 101c45fc mov eax, dword ptr [0x101d64e4] */
  EAX = (r32((uint32_t)(0x101d64e4)));
  /* 101c4601 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c4604 je 0x101c4618 */
  if (C.zf) goto L_101c4618;
  /* 101c4606 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c4607 je 0x101c4612 */
  if (C.zf) goto L_101c4612;
  /* 101c4609 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c460a jne 0x101c4644 */
  if (!C.zf) goto L_101c4644;
  /* 101c460c push 9 */
  push32((uint32_t)(0x9u));
  /* 101c460e push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4610 jmp 0x101c4639 */
  goto L_101c4639;
L_101c4612:;
  /* 101c4612 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4614 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c4616 jmp 0x101c4639 */
  goto L_101c4639;
L_101c4618:;
  /* 101c4618 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c461e jle 0x101c462f */
  if ((C.zf||C.sf!=C.of)) goto L_101c462f;
  /* 101c4620 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c4622 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c4624 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c4626 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c462cu);
  /* 101c462c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c462f:;
  /* 101c462f push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4631 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4637 push 5 */
  push32((uint32_t)(0x5u));
L_101c4639:;
  /* 101c4639 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c463b call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c4641u);
  /* 101c4641 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4644:;
  /* 101c4644 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101c4648 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101c464d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c464f je 0x101c4656 */
  if (C.zf) goto L_101c4656;
  /* 101c4651 mov esi, 0x17c */
  ESI = (0x17cu);
L_101c4656:;
  /* 101c4656 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4659 jge 0x101c4677 */
  if ((C.sf==C.of)) goto L_101c4677;
  /* 101c465b cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4661 jle 0x101c46b3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c46b3;
  /* 101c4663 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4669 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c466e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4674u);
  /* 101c4674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4677:;
  /* 101c4677 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c467d jle 0x101c46b3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c46b3;
  /* 101c467f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4681 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101c4686 push esi */
  push32((uint32_t)(ESI));
  /* 101c4687 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c468c call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4692u);
  /* 101c4692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4695 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c469b jle 0x101c46b3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c46b3;
  /* 101c469d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c469f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 101c46a4 push esi */
  push32((uint32_t)(ESI));
  /* 101c46a5 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c46aa call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c46b0u);
  /* 101c46b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c46b3:;
  /* 101c46b3 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c46b8 jle 0x101c46bf */
  if ((C.zf||C.sf!=C.of)) goto L_101c46bf;
  /* 101c46ba call 0x101c42d0 */
  push32(0x101c46bfu); f_101c42d0();
L_101c46bf:;
  /* 101c46bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c46c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c46c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c46c5 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c46ca call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c46d0u);
  /* 101c46d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c46d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c46d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c46d6 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c46db call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c46e1u);
  /* 101c46e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c46e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c46e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c46e7 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c46ec call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c46f2u);
  /* 101c46f2 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c46f7 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c46fdu);
  /* 101c46fd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4700 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4703 jle 0x101c4776 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4776;
  /* 101c4705 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4707 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c4709 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c470b push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c4710 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4716u);
  /* 101c4716 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c471b call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4721u);
  /* 101c4721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4724 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4727 jle 0x101c473d */
  if ((C.zf||C.sf!=C.of)) goto L_101c473d;
  /* 101c4729 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c472b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c472d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c472f push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4734 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c473au);
  /* 101c473a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c473d:;
  /* 101c473d push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c4742 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c4748u);
  /* 101c4748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c474b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c474e jle 0x101c4764 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4764;
  /* 101c4750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4752 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4754 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4756 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c475b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4761u);
  /* 101c4761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4764:;
  /* 101c4764 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4766 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4768 push 0x101d6060 */
  push32((uint32_t)(0x101d6060u));
  /* 101c476d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4773u);
  /* 101c4773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4776:;
  /* 101c4776 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c477b call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4781u);
  /* 101c4781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4784 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4787 jle 0x101c479d */
  if ((C.zf||C.sf!=C.of)) goto L_101c479d;
  /* 101c4789 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c478b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c478d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c478f push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c4794 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c479au);
  /* 101c479a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c479d:;
  /* 101c479d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c479f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c47a3 push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c47a8 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c47aeu);
  /* 101c47ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c47b4 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c47b9 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c47bfu);
  /* 101c47bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c47c5 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c47ca call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c47d0u);
  /* 101c47d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c47d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c47d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c47d6 push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c47db call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c47e1u);
  /* 101c47e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c47e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c47e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c47e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c47ea push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c47ef call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c47f5u);
  /* 101c47f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c47f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c47f9 push 0x101d35b0 */
  push32((uint32_t)(0x101d35b0u));
  /* 101c47fe call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4804u);
  /* 101c4804 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c4809 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c480fu);
  /* 101c480f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4814 jle 0x101c482a */
  if ((C.zf||C.sf!=C.of)) goto L_101c482a;
  /* 101c4816 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4818 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c481a push 1 */
  push32((uint32_t)(0x1u));
  /* 101c481c push 0x101d6048 */
  push32((uint32_t)(0x101d6048u));
  /* 101c4821 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4827u);
  /* 101c4827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c482a:;
  /* 101c482a call dword ptr [0x101d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64c0))), 0x101c4830u);
  /* 101c4830 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4832 je 0x101c4848 */
  if (C.zf) goto L_101c4848;
  /* 101c4834 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4836 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4838 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c483a push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c483f call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4845u);
  /* 101c4845 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4848:;
  /* 101c4848 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c484a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c484c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c484e push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c4853 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4859u);
  /* 101c4859 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c485b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c485d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c485f push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c4864 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c486au);
  /* 101c486a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c486d cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4870 jle 0x101c4886 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4886;
  /* 101c4872 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4874 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4876 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4878 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c487d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4883u);
  /* 101c4883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4886:;
  /* 101c4886 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4888 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c488a push 1 */
  push32((uint32_t)(0x1u));
  /* 101c488c push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c4891 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4897u);
  /* 101c4897 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4899 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c489b push 2 */
  push32((uint32_t)(0x2u));
  /* 101c489d push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c48a2 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c48a8u);
  /* 101c48a8 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c48aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c48ac push 0x101d5fc8 */
  push32((uint32_t)(0x101d5fc8u));
  /* 101c48b1 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c48b7u);
  /* 101c48b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c48b9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c48bb push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c48c0 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c48c6u);
  /* 101c48c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c48c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c48ca push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c48cf call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c48d5u);
  /* 101c48d5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c48d8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c48da push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c48dc push 0x101d5f90 */
  push32((uint32_t)(0x101d5f90u));
  /* 101c48e1 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c48e7u);
  /* 101c48e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c48e9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c48eb push 0x101d5f80 */
  push32((uint32_t)(0x101d5f80u));
  /* 101c48f0 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c48f6u);
  /* 101c48f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c48f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c48fa push 0x101d5f88 */
  push32((uint32_t)(0x101d5f88u));
  /* 101c48ff call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4905u);
  /* 101c4905 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c490a call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c4910u);
  /* 101c4910 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4915 je 0x101c49d4 */
  if (C.zf) goto L_101c49d4;
  /* 101c491b push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c4920 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4926u);
  /* 101c4926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4929 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c492b jne 0x101c49d4 */
  if (!C.zf) goto L_101c49d4;
  /* 101c4931 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4933 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4939u);
  /* 101c4939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c493c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4941 jle 0x101c4967 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4967;
  /* 101c4943 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4945 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c494bu);
  /* 101c494b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c494e cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4953 jle 0x101c4967 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4967;
  /* 101c4955 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4957 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c495du);
  /* 101c495d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4960 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4965 jg 0x101c49d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c49d4;
L_101c4967:;
  /* 101c4967 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4969 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c496fu);
  /* 101c496f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4974 je 0x101c49fb */
  if (C.zf) goto L_101c49fb;
  /* 101c497a push 5 */
  push32((uint32_t)(0x5u));
  /* 101c497c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4982u);
  /* 101c4982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4985 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c498a jle 0x101c49fb */
  if ((C.zf||C.sf!=C.of)) goto L_101c49fb;
  /* 101c498c push 5 */
  push32((uint32_t)(0x5u));
  /* 101c498e call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4994u);
  /* 101c4994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4997 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c499c jle 0x101c49af */
  if ((C.zf||C.sf!=C.of)) goto L_101c49af;
  /* 101c499e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101c49a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c49a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c49a7 call 0x101c26b0 */
  push32(0x101c49acu); f_101c26b0();
  /* 101c49ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c49af:;
  /* 101c49af push 4 */
  push32((uint32_t)(0x4u));
  /* 101c49b1 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c49b7u);
  /* 101c49b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c49ba cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c49bf jle 0x101c49fb */
  if ((C.zf||C.sf!=C.of)) goto L_101c49fb;
  /* 101c49c1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101c49c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c49c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c49ca call 0x101c26b0 */
  push32(0x101c49cfu); f_101c26b0();
  /* 101c49cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c49d2 jmp 0x101c49fb */
  goto L_101c49fb;
L_101c49d4:;
  /* 101c49d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c49d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c49d8 call 0x101c2690 */
  push32(0x101c49ddu); f_101c2690();
  /* 101c49dd push 0 */
  push32((uint32_t)(0x0u));
  /* 101c49df push 4 */
  push32((uint32_t)(0x4u));
  /* 101c49e1 call 0x101c2690 */
  push32(0x101c49e6u); f_101c2690();
  /* 101c49e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c49e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c49ea call 0x101c2690 */
  push32(0x101c49efu); f_101c2690();
  /* 101c49ef push 0 */
  push32((uint32_t)(0x0u));
  /* 101c49f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c49f3 call 0x101c2690 */
  push32(0x101c49f8u); f_101c2690();
  /* 101c49f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c49fb:;
  /* 101c49fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c49fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c49ff push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c4a04 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4a0au);
  /* 101c4a0a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4a0c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a0e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4a10 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c4a15 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4a1bu);
  /* 101c4a1b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4a1f push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4a21 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c4a26 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4a2cu);
  /* 101c4a2c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a2e push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4a30 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4a32 push 0x101d6228 */
  push32((uint32_t)(0x101d6228u));
  /* 101c4a37 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4a3du);
  /* 101c4a3d push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c4a42 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4a48u);
  /* 101c4a48 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4a4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4a4d jne 0x101c4a98 */
  if (!C.zf) goto L_101c4a98;
  /* 101c4a4f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101c4a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4a53 call 0x101c26e0 */
  push32(0x101c4a58u); f_101c26e0();
  /* 101c4a58 mov esi, eax */
  ESI = (EAX);
  /* 101c4a5a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c4a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4a5e sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101c4a61 call 0x101c26e0 */
  push32(0x101c4a66u); f_101c26e0();
  /* 101c4a66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c4a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4a6a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4a6c call 0x101c26e0 */
  push32(0x101c4a71u); f_101c26e0();
  /* 101c4a71 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4a73 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4a76 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4a79 jle 0x101c4a88 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4a88;
  /* 101c4a7b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a7f push 6 */
  push32((uint32_t)(0x6u));
  /* 101c4a81 push 0x101d5ee0 */
  push32((uint32_t)(0x101d5ee0u));
  /* 101c4a86 jmp 0x101c4aa3 */
  goto L_101c4aa3;
L_101c4a88:;
  /* 101c4a88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c4a8a je 0x101c4aac */
  if (C.zf) goto L_101c4aac;
  /* 101c4a8c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a8e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a90 push esi */
  push32((uint32_t)(ESI));
  /* 101c4a91 push 0x101d5ee0 */
  push32((uint32_t)(0x101d5ee0u));
  /* 101c4a96 jmp 0x101c4aa3 */
  goto L_101c4aa3;
L_101c4a98:;
  /* 101c4a98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a9a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4a9c push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4a9e push 0x101d3838 */
  push32((uint32_t)(0x101d3838u));
L_101c4aa3:;
  /* 101c4aa3 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4aa9u);
  /* 101c4aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4aac:;
  /* 101c4aac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4aae push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4ab0 push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c4ab5 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4abbu);
  /* 101c4abb push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c4ac0 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4ac6u);
  /* 101c4ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4ac9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4acb je 0x101c4aee */
  if (C.zf) goto L_101c4aee;
  /* 101c4acd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4acf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ad1 push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c4ad6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4adcu);
  /* 101c4adc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4ade push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4ae0 push 0x101d37c0 */
  push32((uint32_t)(0x101d37c0u));
  /* 101c4ae5 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4aebu);
  /* 101c4aeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4aee:;
  /* 101c4aee push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c4af3 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4af9u);
  /* 101c4af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4afc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4afe je 0x101c4b26 */
  if (C.zf) goto L_101c4b26;
  /* 101c4b00 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4b02 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4b04 push 0x101d3890 */
  push32((uint32_t)(0x101d3890u));
  /* 101c4b09 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4b0fu);
  /* 101c4b0f push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4b11 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c4b13 push 0x101d37d0 */
  push32((uint32_t)(0x101d37d0u));
  /* 101c4b18 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4b1eu);
  /* 101c4b1e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4b21 call 0x101c33c0 */
  push32(0x101c4b26u); f_101c33c0();
L_101c4b26:;
  /* 101c4b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4b28 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4b2a call 0x101c2690 */
  push32(0x101c4b2fu); f_101c2690();
  /* 101c4b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4b31 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4b37u);
  /* 101c4b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4b3a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4b3f jle 0x101c4b83 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4b83;
  /* 101c4b41 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c4b46 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4b4cu);
  /* 101c4b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4b4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4b51 je 0x101c4b83 */
  if (C.zf) goto L_101c4b83;
  /* 101c4b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4b55 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4b5bu);
  /* 101c4b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4b5e cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4b63 jge 0x101c4b83 */
  if ((C.sf==C.of)) goto L_101c4b83;
  /* 101c4b65 push 0x101d38a8 */
  push32((uint32_t)(0x101d38a8u));
  /* 101c4b6a call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4b70u);
  /* 101c4b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4b73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4b75 jne 0x101c4b83 */
  if (!C.zf) goto L_101c4b83;
  /* 101c4b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4b79 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4b7b call 0x101c2690 */
  push32(0x101c4b80u); f_101c2690();
  /* 101c4b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4b83:;
  /* 101c4b83 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4b85 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4b87 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4b89 push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c4b8e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4b94u);
  /* 101c4b94 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c4b99 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4b9fu);
  /* 101c4b9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4ba2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4ba4 je 0x101c4bba */
  if (C.zf) goto L_101c4bba;
  /* 101c4ba6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ba8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4baa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4bac push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c4bb1 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4bb7u);
  /* 101c4bb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4bba:;
  /* 101c4bba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4bbc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4bbe push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c4bc3 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4bc9u);
  /* 101c4bc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4bcb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4bcd push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c4bd2 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4bd8u);
  /* 101c4bd8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4bda push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4bdc push 0x101d6238 */
  push32((uint32_t)(0x101d6238u));
  /* 101c4be1 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4be7u);
  /* 101c4be7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4be9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4beb push 0x101d6220 */
  push32((uint32_t)(0x101d6220u));
  /* 101c4bf0 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4bf6u);
  /* 101c4bf6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4bf8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4bfa push 0x101d6230 */
  push32((uint32_t)(0x101d6230u));
  /* 101c4bff call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4c05u);
  /* 101c4c05 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c07 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c09 push 0x101d6210 */
  push32((uint32_t)(0x101d6210u));
  /* 101c4c0e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4c14u);
  /* 101c4c14 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4c17 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c19 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c1b push 0x101d6218 */
  push32((uint32_t)(0x101d6218u));
  /* 101c4c20 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4c26u);
  /* 101c4c26 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c28 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c2a push 0x101d6208 */
  push32((uint32_t)(0x101d6208u));
  /* 101c4c2f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4c35u);
  /* 101c4c35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4c38 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4c3b jle 0x101c4c94 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4c94;
  /* 101c4c3d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 101c4c41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4c43 je 0x101c4c94 */
  if (C.zf) goto L_101c4c94;
  /* 101c4c45 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4c47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c4c49 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4c4b push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c4c50 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4c56u);
  /* 101c4c56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4c59 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4c5c jle 0x101c4c94 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4c94;
  /* 101c4c5e push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4c60 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c4c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4c64 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c4c69 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4c6fu);
  /* 101c4c6f push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4c71 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4c73 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4c75 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c4c7a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4c80u);
  /* 101c4c80 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4c82 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4c84 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4c86 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c4c8b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4c91u);
  /* 101c4c91 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4c94:;
  /* 101c4c94 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 101c4c98 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c4c9a je 0x101c4d7e */
  if (C.zf) goto L_101c4d7e;
  /* 101c4ca0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4ca2 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4ca4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4ca6 push 0x101d3818 */
  push32((uint32_t)(0x101d3818u));
  /* 101c4cab call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4cb1u);
  /* 101c4cb1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4cb5 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 101c4cb7 push 0x101d60b0 */
  push32((uint32_t)(0x101d60b0u));
  /* 101c4cbc call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4cc2u);
  /* 101c4cc2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4cc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4cc6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4cc8 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c4ccd call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4cd3u);
  /* 101c4cd3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4cd5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4cd7 push 0x101d3580 */
  push32((uint32_t)(0x101d3580u));
  /* 101c4cdc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4ce2u);
  /* 101c4ce2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ce4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4ce6 push 0x101d3658 */
  push32((uint32_t)(0x101d3658u));
  /* 101c4ceb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4cf1u);
  /* 101c4cf1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4cf4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4cf6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4cf8 push 0x101d3578 */
  push32((uint32_t)(0x101d3578u));
  /* 101c4cfd call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4d03u);
  /* 101c4d03 push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c4d08 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4d0eu);
  /* 101c4d0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4d11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4d13 je 0x101c4d29 */
  if (C.zf) goto L_101c4d29;
  /* 101c4d15 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4d17 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4d19 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4d1b push 0x101d62c0 */
  push32((uint32_t)(0x101d62c0u));
  /* 101c4d20 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4d26u);
  /* 101c4d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4d29:;
  /* 101c4d29 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c4d2e call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4d34u);
  /* 101c4d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4d37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4d39 je 0x101c4d4f */
  if (C.zf) goto L_101c4d4f;
  /* 101c4d3b push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4d3d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4d41 push 0x101d35b8 */
  push32((uint32_t)(0x101d35b8u));
  /* 101c4d46 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4d4cu);
  /* 101c4d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4d4f:;
  /* 101c4d4f call 0x101c4400 */
  push32(0x101c4d54u); f_101c4400();
L_101c4d54:;
  /* 101c4d54 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c4d59 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4d5fu);
  /* 101c4d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4d64 je 0x101c4db4 */
  if (C.zf) goto L_101c4db4;
  /* 101c4d66 push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c4d6b call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4d71u);
  /* 101c4d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4d74 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4d76 jne 0x101c4da5 */
  if (!C.zf) goto L_101c4da5;
  /* 101c4d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4d7c jmp 0x101c4da9 */
  goto L_101c4da9;
L_101c4d7e:;
  /* 101c4d7e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4d82 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c4d84 push 0x101d60b0 */
  push32((uint32_t)(0x101d60b0u));
  /* 101c4d89 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4d8fu);
  /* 101c4d8f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c4d91 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4d93 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4d95 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c4d9a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4da0u);
  /* 101c4da0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4da3 jmp 0x101c4d54 */
  goto L_101c4d54;
L_101c4da5:;
  /* 101c4da5 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4da7 push 4 */
  push32((uint32_t)(0x4u));
L_101c4da9:;
  /* 101c4da9 push 8 */
  push32((uint32_t)(0x8u));
  /* 101c4dab call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c4db1u);
  /* 101c4db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4db4:;
  /* 101c4db4 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4db9 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4dbfu);
  /* 101c4dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4dc4 je 0x101c4dda */
  if (C.zf) goto L_101c4dda;
  /* 101c4dc6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4dc8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4dca push 6 */
  push32((uint32_t)(0x6u));
  /* 101c4dcc push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c4dd1 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4dd7u);
  /* 101c4dd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4dda:;
  /* 101c4dda push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c4ddf call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c4de5u);
  /* 101c4de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4de8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4dea je 0x101c4e00 */
  if (C.zf) goto L_101c4e00;
  /* 101c4dec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4dee push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4df0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4df2 push 0x101d6140 */
  push32((uint32_t)(0x101d6140u));
  /* 101c4df7 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4dfdu);
  /* 101c4dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4e00:;
  /* 101c4e00 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c4e02 je 0x101c4f03 */
  if (C.zf) goto L_101c4f03;
  /* 101c4e08 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4e0a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4e0e push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4e13 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4e19u);
  /* 101c4e19 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4e1b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4e1d push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4e1f push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4e24 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4e2au);
  /* 101c4e2a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4e2c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c4e2e push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4e30 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4e35 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4e3bu);
  /* 101c4e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4e3d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c4e3f push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4e41 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4e46 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4e4cu);
  /* 101c4e4c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4e4f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c4e51 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c4e53 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c4e55 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c4e5a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4e60u);
  /* 101c4e60 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4e62 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4e64 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c4e69 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4e6fu);
  /* 101c4e6f push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c4e74 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c4e7au);
  /* 101c4e7a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4e7d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4e80 jle 0x101c4ea3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4ea3;
  /* 101c4e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4e84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4e86 push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c4e8b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4e91u);
  /* 101c4e91 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c4e93 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c4e95 push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c4e9a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4ea0u);
  /* 101c4ea0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4ea3:;
  /* 101c4ea3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ea5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c4ea7 push 0x101d6040 */
  push32((uint32_t)(0x101d6040u));
  /* 101c4eac call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4eb2u);
  /* 101c4eb2 push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c4eb7 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c4ebdu);
  /* 101c4ebd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4ec0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c4ec2 je 0x101c4f03 */
  if (C.zf) goto L_101c4f03;
  /* 101c4ec4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ec6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ec8 push 0x101d60b8 */
  push32((uint32_t)(0x101d60b8u));
  /* 101c4ecd call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4ed3u);
  /* 101c4ed3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ed5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ed7 push 0x101d60c8 */
  push32((uint32_t)(0x101d60c8u));
  /* 101c4edc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4ee2u);
  /* 101c4ee2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ee4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c4ee6 push 0x101d60d0 */
  push32((uint32_t)(0x101d60d0u));
  /* 101c4eeb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4ef1u);
  /* 101c4ef1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4ef3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101c4ef5 push 0x101d60c0 */
  push32((uint32_t)(0x101d60c0u));
  /* 101c4efa call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4f00u);
  /* 101c4f00 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c4f03:;
  /* 101c4f03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4f05 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101c4f07 push 0x101d36f0 */
  push32((uint32_t)(0x101d36f0u));
  /* 101c4f0c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4f12u);
  /* 101c4f12 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c4f14 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c4f16 push 0x101d3830 */
  push32((uint32_t)(0x101d3830u));
  /* 101c4f1b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4f21u);
  /* 101c4f21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4f23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4f25 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c4f2a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c4f30u);
  /* 101c4f30 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 101c4f34 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4f37 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4f3c jle 0x101c4f5a */
  if ((C.zf||C.sf!=C.of)) goto L_101c4f5a;
  /* 101c4f3e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c4f40 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c4f42 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101c4f47 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c4f4c call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c4f52u);
  /* 101c4f52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4f55 call 0x101c43b0 */
  push32(0x101c4f5au); f_101c43b0();
L_101c4f5a:;
  /* 101c4f5a push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c4f5f call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c4f65u);
  /* 101c4f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4f68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c4f6a je 0x101c52b3 */
  if (C.zf) goto L_101c52b3;
  /* 101c4f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4f72 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4f78u);
  /* 101c4f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4f7a mov edi, eax */
  EDI = (EAX);
  /* 101c4f7c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4f82u);
  /* 101c4f82 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c4f84 mov esi, eax */
  ESI = (EAX);
  /* 101c4f86 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4f8cu);
  /* 101c4f8c push 5 */
  push32((uint32_t)(0x5u));
  /* 101c4f8e mov ebp, eax */
  EBP = (EAX);
  /* 101c4f90 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4f96u);
  /* 101c4f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c4f98 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101c4f9c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c4fa2u);
  /* 101c4fa2 mov ebx, eax */
  EBX = (EAX);
  /* 101c4fa4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 101c4fa8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c4fab cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4fb0 jge 0x101c5043 */
  if ((C.sf==C.of)) goto L_101c5043;
  /* 101c4fb6 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4fbc jle 0x101c4fc9 */
  if ((C.zf||C.sf!=C.of)) goto L_101c4fc9;
  /* 101c4fbe push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c4fc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4fc7 jmp 0x101c503b */
  goto L_101c503b;
L_101c4fc9:;
  /* 101c4fc9 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4fcf jle 0x101c4fdc */
  if ((C.zf||C.sf!=C.of)) goto L_101c4fdc;
  /* 101c4fd1 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101c4fd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4fd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c4fda jmp 0x101c503b */
  goto L_101c503b;
L_101c4fdc:;
  /* 101c4fdc cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4fe2 jle 0x101c4fef */
  if ((C.zf||C.sf!=C.of)) goto L_101c4fef;
  /* 101c4fe4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c4fe9 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4feb push 0 */
  push32((uint32_t)(0x0u));
  /* 101c4fed jmp 0x101c503b */
  goto L_101c503b;
L_101c4fef:;
  /* 101c4fef cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c4ff5 jle 0x101c5002 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5002;
  /* 101c4ff7 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101c4ffc push 3 */
  push32((uint32_t)(0x3u));
  /* 101c4ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 101c5000 jmp 0x101c503b */
  goto L_101c503b;
L_101c5002:;
  /* 101c5002 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c500a jle 0x101c5017 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5017;
  /* 101c500c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101c5011 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5013 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5015 jmp 0x101c503b */
  goto L_101c503b;
L_101c5017:;
  /* 101c5017 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c501d jle 0x101c502a */
  if ((C.zf||C.sf!=C.of)) goto L_101c502a;
  /* 101c501f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101c5024 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5026 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5028 jmp 0x101c503b */
  goto L_101c503b;
L_101c502a:;
  /* 101c502a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5030 jle 0x101c5043 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5043;
  /* 101c5032 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101c5037 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5039 push 1 */
  push32((uint32_t)(0x1u));
L_101c503b:;
  /* 101c503b call 0x101c26b0 */
  push32(0x101c5040u); f_101c26b0();
  /* 101c5040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5043:;
  /* 101c5043 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c5048 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c504eu);
  /* 101c504e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5053 je 0x101c50a3 */
  if (C.zf) goto L_101c50a3;
  /* 101c5055 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c505b jle 0x101c50a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c50a3;
  /* 101c505d push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c5062 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5068u);
  /* 101c5068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c506b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c506d jne 0x101c50a3 */
  if (!C.zf) goto L_101c50a3;
  /* 101c506f cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5075 jle 0x101c5088 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5088;
  /* 101c5077 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101c507c push 3 */
  push32((uint32_t)(0x3u));
  /* 101c507e push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5080 call 0x101c26b0 */
  push32(0x101c5085u); f_101c26b0();
  /* 101c5085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5088:;
  /* 101c5088 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5090 jle 0x101c50a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c50a3;
  /* 101c5092 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c5097 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5099 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c509b call 0x101c26b0 */
  push32(0x101c50a0u); f_101c26b0();
  /* 101c50a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c50a3:;
  /* 101c50a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c50a5 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c50abu);
  /* 101c50ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c50ae cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c50b3 jle 0x101c50c6 */
  if ((C.zf||C.sf!=C.of)) goto L_101c50c6;
  /* 101c50b5 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101c50ba push 1 */
  push32((uint32_t)(0x1u));
  /* 101c50bc push 2 */
  push32((uint32_t)(0x2u));
  /* 101c50be call 0x101c26b0 */
  push32(0x101c50c3u); f_101c26b0();
  /* 101c50c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c50c6:;
  /* 101c50c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c50c8 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c50ceu);
  /* 101c50ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c50d1 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c50d6 jle 0x101c50e9 */
  if ((C.zf||C.sf!=C.of)) goto L_101c50e9;
  /* 101c50d8 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101c50dd push 1 */
  push32((uint32_t)(0x1u));
  /* 101c50df push 0 */
  push32((uint32_t)(0x0u));
  /* 101c50e1 call 0x101c26b0 */
  push32(0x101c50e6u); f_101c26b0();
  /* 101c50e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c50e9:;
  /* 101c50e9 push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c50ee call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c50f4u);
  /* 101c50f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c50f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c50f9 je 0x101c5280 */
  if (C.zf) goto L_101c5280;
  /* 101c50ff push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c5104 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c510au);
  /* 101c510a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c510d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c510f jne 0x101c5280 */
  if (!C.zf) goto L_101c5280;
  /* 101c5115 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5117 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c511du);
  /* 101c511d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5120 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5125 jle 0x101c51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c51e0;
  /* 101c512b push 0 */
  push32((uint32_t)(0x0u));
  /* 101c512d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5133u);
  /* 101c5133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5138 je 0x101c51e0 */
  if (C.zf) goto L_101c51e0;
  /* 101c513e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5140 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5146u);
  /* 101c5146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5149 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c514e jge 0x101c51e0 */
  if ((C.sf==C.of)) goto L_101c51e0;
  /* 101c5154 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5156 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c515cu);
  /* 101c515c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c515f cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5164 jle 0x101c5177 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5177;
  /* 101c5166 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c516b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c516d push 5 */
  push32((uint32_t)(0x5u));
  /* 101c516f call 0x101c26b0 */
  push32(0x101c5174u); f_101c26b0();
  /* 101c5174 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5177:;
  /* 101c5177 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5179 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c517fu);
  /* 101c517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5182 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5187 jle 0x101c519a */
  if ((C.zf||C.sf!=C.of)) goto L_101c519a;
  /* 101c5189 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101c518e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5190 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5192 call 0x101c26b0 */
  push32(0x101c5197u); f_101c26b0();
  /* 101c5197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c519a:;
  /* 101c519a push 2 */
  push32((uint32_t)(0x2u));
  /* 101c519c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c51a2u);
  /* 101c51a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c51a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c51aa jle 0x101c51bd */
  if ((C.zf||C.sf!=C.of)) goto L_101c51bd;
  /* 101c51ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101c51b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c51b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c51b5 call 0x101c26b0 */
  push32(0x101c51bau); f_101c26b0();
  /* 101c51ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c51bd:;
  /* 101c51bd push 3 */
  push32((uint32_t)(0x3u));
  /* 101c51bf call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c51c5u);
  /* 101c51c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c51c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c51cd jle 0x101c51e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c51e0;
  /* 101c51cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101c51d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c51d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c51d8 call 0x101c26b0 */
  push32(0x101c51ddu); f_101c26b0();
  /* 101c51dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c51e0:;
  /* 101c51e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c51e2 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c51e8u);
  /* 101c51e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c51eb cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c51f0 jle 0x101c5280 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5280;
  /* 101c51f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c51f8 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c51feu);
  /* 101c51fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5203 je 0x101c5280 */
  if (C.zf) goto L_101c5280;
  /* 101c5205 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5207 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c520du);
  /* 101c520d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5210 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5215 jle 0x101c5280 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5280;
  /* 101c5217 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5219 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c521fu);
  /* 101c521f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5222 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5227 jle 0x101c523a */
  if ((C.zf||C.sf!=C.of)) goto L_101c523a;
  /* 101c5229 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101c522e push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5230 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5232 call 0x101c26b0 */
  push32(0x101c5237u); f_101c26b0();
  /* 101c5237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c523a:;
  /* 101c523a push 2 */
  push32((uint32_t)(0x2u));
  /* 101c523c call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5242u);
  /* 101c5242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5245 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c524a jle 0x101c525d */
  if ((C.zf||C.sf!=C.of)) goto L_101c525d;
  /* 101c524c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101c5251 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5253 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c5255 call 0x101c26b0 */
  push32(0x101c525au); f_101c26b0();
  /* 101c525a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c525d:;
  /* 101c525d push 3 */
  push32((uint32_t)(0x3u));
  /* 101c525f call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5265u);
  /* 101c5265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5268 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c526d jle 0x101c5280 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5280;
  /* 101c526f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101c5274 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5276 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5278 call 0x101c26b0 */
  push32(0x101c527du); f_101c26b0();
  /* 101c527d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5280:;
  /* 101c5280 call dword ptr [0x101d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6450))), 0x101c5286u);
  /* 101c5286 mov ecx, dword ptr [eax*4 + 0x101d655c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101d655c)));
  /* 101c528d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c528f jne 0x101c52b3 */
  if (!C.zf) goto L_101c52b3;
  /* 101c5291 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101c5296 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5298 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c529a call 0x101c26b0 */
  push32(0x101c529fu); f_101c26b0();
  /* 101c529f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c52a2 call dword ptr [0x101d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6450))), 0x101c52a8u);
  /* 101c52a8 mov dword ptr [eax*4 + 0x101d655c], 1 */
  w32((uint32_t)(EAX*4 + 0x101d655c), (0x1u));
L_101c52b3:;
  /* 101c52b3 pop edi */
  EDI = (pop32());
  /* 101c52b4 pop esi */
  ESI = (pop32());
  /* 101c52b5 pop ebp */
  EBP = (pop32());
  /* 101c52b6 pop ebx */
  EBX = (pop32());
  /* 101c52b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c52ba ret  */
  ESPCHK(0x101c4480u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x101c52c0 (72 bytes, 22 insns) */
void f_101c52c0(void) {
  FTRACE(0x101c52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c52c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c52c6 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c52cb call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c52d1u);
  /* 101c52d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c52d7 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c52dc call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c52e2u);
  /* 101c52e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c52e8 push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c52ed call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c52f3u);
  /* 101c52f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c52f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c52f9 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c52fe call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5304u);
  /* 101c5304 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5307 ret  */
  ESPCHK(0x101c52c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005310 @ 0x101c5310 (55 bytes, 16 insns) */
void f_101c5310(void) {
  FTRACE(0x101c5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c5310 cmp dword ptr [esp + 4], 0x101d35d8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x101d35d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5318 jne 0x101c5344 */
  if (!C.zf) goto L_101c5344;
  /* 101c531a push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c531f call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c5325u);
  /* 101c5325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5328 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c532a je 0x101c5344 */
  if (C.zf) goto L_101c5344;
  /* 101c532c push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c5331 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c5337u);
  /* 101c5337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c533a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c533c je 0x101c5344 */
  if (C.zf) goto L_101c5344;
  /* 101c533e mov eax, 1 */
  EAX = (0x1u);
  /* 101c5343 ret  */
  ESPCHK(0x101c5310u, _esp0);
  ESP += 4; return;
L_101c5344:;
  /* 101c5344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c5346 ret  */
  ESPCHK(0x101c5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x101c5350 (2008 bytes, 535 insns) */
void f_101c5350(void) {
  FTRACE(0x101c5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c5350 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c5355 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c535bu);
  /* 101c535b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c535e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5360 jne 0x101c5374 */
  if (!C.zf) goto L_101c5374;
  /* 101c5362 push 0x101d3818 */
  push32((uint32_t)(0x101d3818u));
  /* 101c5367 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c536du);
  /* 101c536d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5372 je 0x101c53a4 */
  if (C.zf) goto L_101c53a4;
L_101c5374:;
  /* 101c5374 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5376 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5378 push 0x101d38a0 */
  push32((uint32_t)(0x101d38a0u));
  /* 101c537d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5383u);
  /* 101c5383 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5387 push 0x101d6148 */
  push32((uint32_t)(0x101d6148u));
  /* 101c538c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5392u);
  /* 101c5392 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5394 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5396 push 0x101d6150 */
  push32((uint32_t)(0x101d6150u));
  /* 101c539b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c53a1u);
  /* 101c53a1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c53a4:;
  /* 101c53a4 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c53a9 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c53afu);
  /* 101c53af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c53b2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c53b5 jg 0x101c53df */
  if ((!C.zf&&C.sf==C.of)) goto L_101c53df;
  /* 101c53b7 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c53bc call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c53c2u);
  /* 101c53c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c53c5 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c53c8 jg 0x101c53df */
  if ((!C.zf&&C.sf==C.of)) goto L_101c53df;
  /* 101c53ca push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c53cf call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c53d5u);
  /* 101c53d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c53d8 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c53dd jle 0x101c543d */
  if ((C.zf||C.sf!=C.of)) goto L_101c543d;
L_101c53df:;
  /* 101c53df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c53e1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c53e3 push 0x101d3578 */
  push32((uint32_t)(0x101d3578u));
  /* 101c53e8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c53eeu);
  /* 101c53ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c53f0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c53f2 push 0x101d3580 */
  push32((uint32_t)(0x101d3580u));
  /* 101c53f7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c53fdu);
  /* 101c53fd push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c5402 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5408u);
  /* 101c5408 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c540b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5410 jg 0x101c542b */
  if ((!C.zf&&C.sf==C.of)) goto L_101c542b;
  /* 101c5412 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c5417 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c541du);
  /* 101c541d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5420 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5423 jg 0x101c542b */
  if ((!C.zf&&C.sf==C.of)) goto L_101c542b;
  /* 101c5425 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5427 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c5429 jmp 0x101c542f */
  goto L_101c542f;
L_101c542b:;
  /* 101c542b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c542d push 0x5f */
  push32((uint32_t)(0x5fu));
L_101c542f:;
  /* 101c542f push 0x101d3658 */
  push32((uint32_t)(0x101d3658u));
  /* 101c5434 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c543au);
  /* 101c543a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c543d:;
  /* 101c543d push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c5442 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5448u);
  /* 101c5448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c544b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c544e jle 0x101c5503 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5503;
  /* 101c5454 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5456 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c5458 push 0x101d62a0 */
  push32((uint32_t)(0x101d62a0u));
  /* 101c545d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5463u);
  /* 101c5463 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5465 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c5467 push 0x101d62a8 */
  push32((uint32_t)(0x101d62a8u));
  /* 101c546c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5472u);
  /* 101c5472 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5474 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5476 push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c547b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5481u);
  /* 101c5481 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5483 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c5485 push 0x101d61e8 */
  push32((uint32_t)(0x101d61e8u));
  /* 101c548a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5490u);
  /* 101c5490 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5492 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c5494 push 0x101d61d0 */
  push32((uint32_t)(0x101d61d0u));
  /* 101c5499 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c549fu);
  /* 101c549f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c54a1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c54a3 push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c54a8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c54aeu);
  /* 101c54ae add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c54b1 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c54b6 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c54bcu);
  /* 101c54bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c54bf cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c54c2 jle 0x101c5503 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5503;
  /* 101c54c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c54c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c54c8 push 0x101d6298 */
  push32((uint32_t)(0x101d6298u));
  /* 101c54cd call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c54d3u);
  /* 101c54d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c54d5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c54d7 push 0x101d62b0 */
  push32((uint32_t)(0x101d62b0u));
  /* 101c54dc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c54e2u);
  /* 101c54e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c54e4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c54e6 push 0x101d61f0 */
  push32((uint32_t)(0x101d61f0u));
  /* 101c54eb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c54f1u);
  /* 101c54f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c54f3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c54f5 push 0x101d61f8 */
  push32((uint32_t)(0x101d61f8u));
  /* 101c54fa call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5500u);
  /* 101c5500 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5503:;
  /* 101c5503 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c5508 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c550eu);
  /* 101c550e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5511 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5514 jle 0x101c55ab */
  if ((C.zf||C.sf!=C.of)) goto L_101c55ab;
  /* 101c551a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c551c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c551e push 0x101d3860 */
  push32((uint32_t)(0x101d3860u));
  /* 101c5523 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5529u);
  /* 101c5529 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c552b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c552d push 0x101d3868 */
  push32((uint32_t)(0x101d3868u));
  /* 101c5532 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5538u);
  /* 101c5538 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c553a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c553c push 0x101d3858 */
  push32((uint32_t)(0x101d3858u));
  /* 101c5541 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5547u);
  /* 101c5547 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5549 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c554b push 0x101d5ec8 */
  push32((uint32_t)(0x101d5ec8u));
  /* 101c5550 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5556u);
  /* 101c5556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5558 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c555a push 0x101d5eb8 */
  push32((uint32_t)(0x101d5eb8u));
  /* 101c555f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5565u);
  /* 101c5565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5567 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c5569 push 0x101d5ec0 */
  push32((uint32_t)(0x101d5ec0u));
  /* 101c556e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5574u);
  /* 101c5574 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5577 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5579 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c557b push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c5580 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5586u);
  /* 101c5586 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c558b call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5591u);
  /* 101c5591 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5594 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5597 jle 0x101c55ab */
  if ((C.zf||C.sf!=C.of)) goto L_101c55ab;
  /* 101c5599 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c559b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c559d push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c55a2 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c55a8u);
  /* 101c55a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c55ab:;
  /* 101c55ab push 0x101d3650 */
  push32((uint32_t)(0x101d3650u));
  /* 101c55b0 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c55b6u);
  /* 101c55b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c55b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c55bc jle 0x101c55df */
  if ((C.zf||C.sf!=C.of)) goto L_101c55df;
  /* 101c55be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c55c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c55c2 push 0x101d61b0 */
  push32((uint32_t)(0x101d61b0u));
  /* 101c55c7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c55cdu);
  /* 101c55cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c55cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c55d1 push 0x101d5f18 */
  push32((uint32_t)(0x101d5f18u));
  /* 101c55d6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c55dcu);
  /* 101c55dc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c55df:;
  /* 101c55df push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c55e4 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c55eau);
  /* 101c55ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c55ed cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c55f0 jle 0x101c56c3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c56c3;
  /* 101c55f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c55f8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c55fa push 0x101d6080 */
  push32((uint32_t)(0x101d6080u));
  /* 101c55ff call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5605u);
  /* 101c5605 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5607 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c5609 push 0x101d6078 */
  push32((uint32_t)(0x101d6078u));
  /* 101c560e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5614u);
  /* 101c5614 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5616 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5618 push 0x101d6070 */
  push32((uint32_t)(0x101d6070u));
  /* 101c561d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5623u);
  /* 101c5623 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5625 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c5627 push 0x101d5f68 */
  push32((uint32_t)(0x101d5f68u));
  /* 101c562c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5632u);
  /* 101c5632 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5634 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c5636 push 0x101d5f60 */
  push32((uint32_t)(0x101d5f60u));
  /* 101c563b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5641u);
  /* 101c5641 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5645 push 0x101d5f58 */
  push32((uint32_t)(0x101d5f58u));
  /* 101c564a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5650u);
  /* 101c5650 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5653 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c5658 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c565eu);
  /* 101c565e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5661 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5664 jle 0x101c56c3 */
  if ((C.zf||C.sf!=C.of)) goto L_101c56c3;
  /* 101c5666 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5668 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c566a push 0x101d6068 */
  push32((uint32_t)(0x101d6068u));
  /* 101c566f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5675u);
  /* 101c5675 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5677 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5679 push 0x101d6058 */
  push32((uint32_t)(0x101d6058u));
  /* 101c567e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5684u);
  /* 101c5684 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5686 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5688 push 0x101d60a8 */
  push32((uint32_t)(0x101d60a8u));
  /* 101c568d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5693u);
  /* 101c5693 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5695 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5697 push 0x101d5f50 */
  push32((uint32_t)(0x101d5f50u));
  /* 101c569c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c56a2u);
  /* 101c56a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c56a4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c56a6 push 0x101d5f48 */
  push32((uint32_t)(0x101d5f48u));
  /* 101c56ab call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c56b1u);
  /* 101c56b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c56b3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c56b5 push 0x101d5f40 */
  push32((uint32_t)(0x101d5f40u));
  /* 101c56ba call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c56c0u);
  /* 101c56c0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c56c3:;
  /* 101c56c3 push 0x101d6280 */
  push32((uint32_t)(0x101d6280u));
  /* 101c56c8 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c56ceu);
  /* 101c56ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c56d1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c56d4 jle 0x101c57a6 */
  if ((C.zf||C.sf!=C.of)) goto L_101c57a6;
  /* 101c56da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c56dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c56de push 0x101d3698 */
  push32((uint32_t)(0x101d3698u));
  /* 101c56e3 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c56e9u);
  /* 101c56e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c56eb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c56ed push 0x101d3690 */
  push32((uint32_t)(0x101d3690u));
  /* 101c56f2 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c56f8u);
  /* 101c56f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c56fa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c56fc push 0x101d3688 */
  push32((uint32_t)(0x101d3688u));
  /* 101c5701 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5707u);
  /* 101c5707 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5709 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c570b push 0x101d3608 */
  push32((uint32_t)(0x101d3608u));
  /* 101c5710 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5716u);
  /* 101c5716 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5718 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c571a push 0x101d3600 */
  push32((uint32_t)(0x101d3600u));
  /* 101c571f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5725u);
  /* 101c5725 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5727 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5729 push 0x101d35f8 */
  push32((uint32_t)(0x101d35f8u));
  /* 101c572e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5734u);
  /* 101c5734 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5737 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5739 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c573b push 0x101d35f0 */
  push32((uint32_t)(0x101d35f0u));
  /* 101c5740 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5746u);
  /* 101c5746 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5748 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c574a push 0x101d35c8 */
  push32((uint32_t)(0x101d35c8u));
  /* 101c574f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5755u);
  /* 101c5755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5757 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5759 push 0x101d35c0 */
  push32((uint32_t)(0x101d35c0u));
  /* 101c575e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5764u);
  /* 101c5764 push 0x101d35c0 */
  push32((uint32_t)(0x101d35c0u));
  /* 101c5769 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c576fu);
  /* 101c576f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5772 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5774 je 0x101c57a6 */
  if (C.zf) goto L_101c57a6;
  /* 101c5776 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5778 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c577a push 0x101d3670 */
  push32((uint32_t)(0x101d3670u));
  /* 101c577f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5785u);
  /* 101c5785 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5787 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5789 push 0x101d3668 */
  push32((uint32_t)(0x101d3668u));
  /* 101c578e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5794u);
  /* 101c5794 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5796 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5798 push 0x101d3660 */
  push32((uint32_t)(0x101d3660u));
  /* 101c579d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c57a3u);
  /* 101c57a3 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c57a6:;
  /* 101c57a6 push 0x101d35e0 */
  push32((uint32_t)(0x101d35e0u));
  /* 101c57ab call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c57b1u);
  /* 101c57b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c57b4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c57b7 jle 0x101c583f */
  if ((C.zf||C.sf!=C.of)) goto L_101c583f;
  /* 101c57bd push 0x101d35d0 */
  push32((uint32_t)(0x101d35d0u));
  /* 101c57c2 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c57c8u);
  /* 101c57c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c57cb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c57ce jge 0x101c583f */
  if ((C.sf==C.of)) goto L_101c583f;
  /* 101c57d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c57d2 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c57d4 push 0x101d3850 */
  push32((uint32_t)(0x101d3850u));
  /* 101c57d9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c57dfu);
  /* 101c57df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c57e1 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c57e3 push 0x101d3848 */
  push32((uint32_t)(0x101d3848u));
  /* 101c57e8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c57eeu);
  /* 101c57ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c57f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c57f2 push 0x101d3840 */
  push32((uint32_t)(0x101d3840u));
  /* 101c57f7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c57fdu);
  /* 101c57fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c57ff push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5801 push 0x101d3808 */
  push32((uint32_t)(0x101d3808u));
  /* 101c5806 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c580cu);
  /* 101c580c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c580e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5810 push 0x101d3800 */
  push32((uint32_t)(0x101d3800u));
  /* 101c5815 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c581bu);
  /* 101c581b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c581d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c581f push 0x101d37f8 */
  push32((uint32_t)(0x101d37f8u));
  /* 101c5824 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c582au);
  /* 101c582a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c582d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c582f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5831 push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c5836 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c583cu);
  /* 101c583c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c583f:;
  /* 101c583f push 0x101d35d0 */
  push32((uint32_t)(0x101d35d0u));
  /* 101c5844 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c584au);
  /* 101c584a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c584d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5850 jle 0x101c5931 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5931;
  /* 101c5856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5858 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c585a push 0x101d35a8 */
  push32((uint32_t)(0x101d35a8u));
  /* 101c585f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5865u);
  /* 101c5865 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5867 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101c5869 push 0x101d35a0 */
  push32((uint32_t)(0x101d35a0u));
  /* 101c586e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5874u);
  /* 101c5874 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5876 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5878 push 0x101d3598 */
  push32((uint32_t)(0x101d3598u));
  /* 101c587d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5883u);
  /* 101c5883 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5885 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5887 push 0x101d6268 */
  push32((uint32_t)(0x101d6268u));
  /* 101c588c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5892u);
  /* 101c5892 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5894 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c5896 push 0x101d6260 */
  push32((uint32_t)(0x101d6260u));
  /* 101c589b call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58a1u);
  /* 101c58a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58a3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101c58a5 push 0x101d6258 */
  push32((uint32_t)(0x101d6258u));
  /* 101c58aa call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58b0u);
  /* 101c58b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c58b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58b5 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c58b7 push 0x101d62e0 */
  push32((uint32_t)(0x101d62e0u));
  /* 101c58bc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58c2u);
  /* 101c58c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58c4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c58c6 push 0x101d62d8 */
  push32((uint32_t)(0x101d62d8u));
  /* 101c58cb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58d1u);
  /* 101c58d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58d3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c58d5 push 0x101d6328 */
  push32((uint32_t)(0x101d6328u));
  /* 101c58da call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58e0u);
  /* 101c58e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c58e4 push 0x101d6320 */
  push32((uint32_t)(0x101d6320u));
  /* 101c58e9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58efu);
  /* 101c58ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c58f1 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c58f3 push 0x101d6318 */
  push32((uint32_t)(0x101d6318u));
  /* 101c58f8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c58feu);
  /* 101c58fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5900 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101c5902 push 0x101d6310 */
  push32((uint32_t)(0x101d6310u));
  /* 101c5907 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c590du);
  /* 101c590d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5910 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5912 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5914 push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c5919 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c591fu);
  /* 101c591f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5921 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5923 push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c5928 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c592eu);
  /* 101c592e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5931:;
  /* 101c5931 push 0x101d5ed0 */
  push32((uint32_t)(0x101d5ed0u));
  /* 101c5936 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c593cu);
  /* 101c593c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c593f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5942 jle 0x101c5aa0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c5aa0;
  /* 101c5948 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c594a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c594c push 0x101d3630 */
  push32((uint32_t)(0x101d3630u));
  /* 101c5951 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5957u);
  /* 101c5957 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5959 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c595b push 0x101d3638 */
  push32((uint32_t)(0x101d3638u));
  /* 101c5960 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5966u);
  /* 101c5966 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5968 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c596a push 0x101d3640 */
  push32((uint32_t)(0x101d3640u));
  /* 101c596f call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5975u);
  /* 101c5975 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5979 push 0x101d3648 */
  push32((uint32_t)(0x101d3648u));
  /* 101c597e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5984u);
  /* 101c5984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5988 push 0x101d3610 */
  push32((uint32_t)(0x101d3610u));
  /* 101c598d call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5993u);
  /* 101c5993 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5995 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5997 push 0x101d3620 */
  push32((uint32_t)(0x101d3620u));
  /* 101c599c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59a2u);
  /* 101c59a2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c59a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59a7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59a9 push 0x101d36d8 */
  push32((uint32_t)(0x101d36d8u));
  /* 101c59ae call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59b4u);
  /* 101c59b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59b8 push 0x101d36e0 */
  push32((uint32_t)(0x101d36e0u));
  /* 101c59bd call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59c3u);
  /* 101c59c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59c5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59c7 push 0x101d36e8 */
  push32((uint32_t)(0x101d36e8u));
  /* 101c59cc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59d2u);
  /* 101c59d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59d6 push 0x101d36c0 */
  push32((uint32_t)(0x101d36c0u));
  /* 101c59db call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59e1u);
  /* 101c59e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59e5 push 0x101d36c8 */
  push32((uint32_t)(0x101d36c8u));
  /* 101c59ea call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59f0u);
  /* 101c59f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c59f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c59f4 push 0x101d36d0 */
  push32((uint32_t)(0x101d36d0u));
  /* 101c59f9 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c59ffu);
  /* 101c59ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5a02 push 0x101d5ed0 */
  push32((uint32_t)(0x101d5ed0u));
  /* 101c5a07 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5a0du);
  /* 101c5a0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5a10 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5a13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a15 jle 0x101c5a2a */
  if ((C.zf||C.sf!=C.of)) goto L_101c5a2a;
  /* 101c5a17 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5a19 push 0x101d5f78 */
  push32((uint32_t)(0x101d5f78u));
  /* 101c5a1e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a24u);
  /* 101c5a24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5a28 jmp 0x101c5a3b */
  goto L_101c5a3b;
L_101c5a2a:;
  /* 101c5a2a push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c5a2c push 0x101d5f78 */
  push32((uint32_t)(0x101d5f78u));
  /* 101c5a31 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a37u);
  /* 101c5a37 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a39 push 0xf */
  push32((uint32_t)(0xfu));
L_101c5a3b:;
  /* 101c5a3b push 0x101d5fd8 */
  push32((uint32_t)(0x101d5fd8u));
  /* 101c5a40 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a46u);
  /* 101c5a46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5a49 push 0x101d5f78 */
  push32((uint32_t)(0x101d5f78u));
  /* 101c5a4e call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5a54u);
  /* 101c5a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5a57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5a59 je 0x101c5a7f */
  if (C.zf) goto L_101c5a7f;
  /* 101c5a5b push 0x101d5fd8 */
  push32((uint32_t)(0x101d5fd8u));
  /* 101c5a60 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5a66u);
  /* 101c5a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5a69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5a6b je 0x101c5a7f */
  if (C.zf) goto L_101c5a7f;
  /* 101c5a6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a6f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5a71 push 0x101d5fd0 */
  push32((uint32_t)(0x101d5fd0u));
  /* 101c5a76 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a7cu);
  /* 101c5a7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5a7f:;
  /* 101c5a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a81 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5a83 push 0x101d6158 */
  push32((uint32_t)(0x101d6158u));
  /* 101c5a88 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a8eu);
  /* 101c5a8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5a90 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5a92 push 0x101d6160 */
  push32((uint32_t)(0x101d6160u));
  /* 101c5a97 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5a9du);
  /* 101c5a9d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5aa0:;
  /* 101c5aa0 push 0x101d6258 */
  push32((uint32_t)(0x101d6258u));
  /* 101c5aa5 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c5aabu);
  /* 101c5aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5aae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5ab0 je 0x101c5b27 */
  if (C.zf) goto L_101c5b27;
  /* 101c5ab2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ab4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5ab6 push 0x101d60c0 */
  push32((uint32_t)(0x101d60c0u));
  /* 101c5abb call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5ac1u);
  /* 101c5ac1 push 0x101d60c0 */
  push32((uint32_t)(0x101d60c0u));
  /* 101c5ac6 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5accu);
  /* 101c5acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5acf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5ad1 je 0x101c5b27 */
  if (C.zf) goto L_101c5b27;
  /* 101c5ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ad5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5ad7 push 0x101d60d0 */
  push32((uint32_t)(0x101d60d0u));
  /* 101c5adc call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5ae2u);
  /* 101c5ae2 push 0x101d60d0 */
  push32((uint32_t)(0x101d60d0u));
  /* 101c5ae7 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5aedu);
  /* 101c5aed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5af0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5af2 je 0x101c5b27 */
  if (C.zf) goto L_101c5b27;
  /* 101c5af4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5af6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5af8 push 0x101d60c8 */
  push32((uint32_t)(0x101d60c8u));
  /* 101c5afd call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5b03u);
  /* 101c5b03 push 0x101d60c8 */
  push32((uint32_t)(0x101d60c8u));
  /* 101c5b08 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5b0eu);
  /* 101c5b0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5b11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5b13 je 0x101c5b27 */
  if (C.zf) goto L_101c5b27;
  /* 101c5b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b17 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5b19 push 0x101d60b8 */
  push32((uint32_t)(0x101d60b8u));
  /* 101c5b1e call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5b24u);
  /* 101c5b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5b27:;
  /* 101c5b27 ret  */
  ESPCHK(0x101c5350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x101c5b30 (305 bytes, 86 insns) */
void f_101c5b30(void) {
  FTRACE(0x101c5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c5b30 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b32 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c5b34 push 0x101d62c8 */
  push32((uint32_t)(0x101d62c8u));
  /* 101c5b39 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5b3fu);
  /* 101c5b3f push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c5b44 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5b4au);
  /* 101c5b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5b4f je 0x101c5b63 */
  if (C.zf) goto L_101c5b63;
  /* 101c5b51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b53 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b55 push 0x101d35b0 */
  push32((uint32_t)(0x101d35b0u));
  /* 101c5b5a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5b60u);
  /* 101c5b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5b63:;
  /* 101c5b63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b67 push 0x101d5fc8 */
  push32((uint32_t)(0x101d5fc8u));
  /* 101c5b6c call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5b72u);
  /* 101c5b72 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c5b77 call 0x101c5310 */
  push32(0x101c5b7cu); f_101c5310();
  /* 101c5b7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5b81 jne 0x101c5b91 */
  if (!C.zf) goto L_101c5b91;
  /* 101c5b83 mov eax, dword ptr [0x101d5ea8] */
  EAX = (r32((uint32_t)(0x101d5ea8)));
  /* 101c5b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5b8a je 0x101c5ba3 */
  if (C.zf) goto L_101c5ba3;
  /* 101c5b8c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5b8f je 0x101c5ba3 */
  if (C.zf) goto L_101c5ba3;
L_101c5b91:;
  /* 101c5b91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5b93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101c5b95 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c5b9a call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5ba0u);
  /* 101c5ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5ba3:;
  /* 101c5ba3 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c5ba8 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5baeu);
  /* 101c5bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5bb3 je 0x101c5bc7 */
  if (C.zf) goto L_101c5bc7;
  /* 101c5bb5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bb7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bb9 push 0x101d5f90 */
  push32((uint32_t)(0x101d5f90u));
  /* 101c5bbe call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5bc4u);
  /* 101c5bc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5bc7:;
  /* 101c5bc7 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c5bcc call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c5bd2u);
  /* 101c5bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5bd5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5bd7 je 0x101c5beb */
  if (C.zf) goto L_101c5beb;
  /* 101c5bd9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bdb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bdd push 0x101d5f80 */
  push32((uint32_t)(0x101d5f80u));
  /* 101c5be2 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5be8u);
  /* 101c5be8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5beb:;
  /* 101c5beb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bed push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 101c5bef push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c5bf4 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5bfau);
  /* 101c5bfa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5bfc push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101c5bfe push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c5c03 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5c09u);
  /* 101c5c09 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c5c0e call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5c14u);
  /* 101c5c14 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5c19 je 0x101c5c2d */
  if (C.zf) goto L_101c5c2d;
  /* 101c5c1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c1d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101c5c1f push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c5c24 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5c2au);
  /* 101c5c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5c2d:;
  /* 101c5c2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c2f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101c5c31 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c5c36 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5c3cu);
  /* 101c5c3c push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c5c41 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5c47u);
  /* 101c5c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5c4c je 0x101c5c60 */
  if (C.zf) goto L_101c5c60;
  /* 101c5c4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c52 push 0x101d3830 */
  push32((uint32_t)(0x101d3830u));
  /* 101c5c57 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c5c5du);
  /* 101c5c5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5c60:;
  /* 101c5c60 ret  */
  ESPCHK(0x101c5b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c70 @ 0x101c5c70 (536 bytes, 150 insns) */
void f_101c5c70(void) {
  FTRACE(0x101c5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c5c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c74 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5c76 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c5c7b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5c81u);
  /* 101c5c81 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c5c86 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5c8cu);
  /* 101c5c8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5c91 je 0x101c5cb8 */
  if (C.zf) goto L_101c5cb8;
  /* 101c5c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c95 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c5c99 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c5c9e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5ca4u);
  /* 101c5ca4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ca6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ca8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5caa push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c5caf call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5cb5u);
  /* 101c5cb5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5cb8:;
  /* 101c5cb8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5cba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5cbe push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c5cc3 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5cc9u);
  /* 101c5cc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ccb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5ccf push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c5cd4 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5cdau);
  /* 101c5cda mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c5cdf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5ce2 mov ecx, dword ptr [eax*4 + 0x101d5ee8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101d5ee8)));
  /* 101c5ce9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c5ceb jne 0x101c5d08 */
  if (!C.zf) goto L_101c5d08;
  /* 101c5ced call 0x101c52c0 */
  push32(0x101c5cf2u); f_101c52c0();
  /* 101c5cf2 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c5cf7 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5cfdu);
  /* 101c5cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5d02 je 0x101c5e87 */
  if (C.zf) goto L_101c5e87;
L_101c5d08:;
  /* 101c5d08 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d0a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5d0e push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c5d13 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5d19u);
  /* 101c5d19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 101c5d1f push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c5d24 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5d2au);
  /* 101c5d2a push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c5d2f call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5d35u);
  /* 101c5d35 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5d38 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5d3b jge 0x101c5d4a */
  if ((C.sf==C.of)) goto L_101c5d4a;
  /* 101c5d3d call 0x101c2710 */
  push32(0x101c5d42u); f_101c2710();
  /* 101c5d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5d44 jne 0x101c5e87 */
  if (!C.zf) goto L_101c5e87;
L_101c5d4a:;
  /* 101c5d4a push esi */
  push32((uint32_t)(ESI));
  /* 101c5d4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d4d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 101c5d51 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c5d56 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5d5cu);
  /* 101c5d5c push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c5d61 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5d67u);
  /* 101c5d67 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c5d6c mov esi, eax */
  ESI = (EAX);
  /* 101c5d6e call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5d74u);
  /* 101c5d74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5d77 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c5d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5d7b pop esi */
  ESI = (pop32());
  /* 101c5d7c jg 0x101c5e87 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c5e87;
  /* 101c5d82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d84 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5d88 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c5d8d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5d93u);
  /* 101c5d93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5d96 call 0x101c2820 */
  push32(0x101c5d9bu); f_101c2820();
  /* 101c5d9b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5d9e jge 0x101c5dc7 */
  if ((C.sf==C.of)) goto L_101c5dc7;
  /* 101c5da0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5da2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5da4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5da6 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c5dab call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5db1u);
  /* 101c5db1 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c5db6 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5dbcu);
  /* 101c5dbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5dc1 je 0x101c5e87 */
  if (C.zf) goto L_101c5e87;
L_101c5dc7:;
  /* 101c5dc7 call 0x101c52c0 */
  push32(0x101c5dccu); f_101c52c0();
  /* 101c5dcc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5dce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5dd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5dd2 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c5dd7 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5dddu);
  /* 101c5ddd push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c5de2 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5de8u);
  /* 101c5de8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5deb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5dee jl 0x101c5e87 */
  if ((C.sf!=C.of)) goto L_101c5e87;
  /* 101c5df4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5df6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5df8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5dfa push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c5dff call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e05u);
  /* 101c5e05 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c5e0a call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5e10u);
  /* 101c5e10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5e15 je 0x101c5e2b */
  if (C.zf) goto L_101c5e2b;
  /* 101c5e17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e1b push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5e1d push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c5e22 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e28u);
  /* 101c5e28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5e2b:;
  /* 101c5e2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5e31 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c5e36 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e3cu);
  /* 101c5e3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e3e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c5e40 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c5e42 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c5e47 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e4du);
  /* 101c5e4d push 0x101d3830 */
  push32((uint32_t)(0x101d3830u));
  /* 101c5e52 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c5e58u);
  /* 101c5e58 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5e5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c5e5d je 0x101c5e73 */
  if (C.zf) goto L_101c5e73;
  /* 101c5e5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e63 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5e65 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c5e6a call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e70u);
  /* 101c5e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5e73:;
  /* 101c5e73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5e79 push 0x101d6048 */
  push32((uint32_t)(0x101d6048u));
  /* 101c5e7e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5e84u);
  /* 101c5e84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5e87:;
  /* 101c5e87 ret  */
  ESPCHK(0x101c5c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x101c5e90 (472 bytes, 137 insns) */
void f_101c5e90(void) {
  FTRACE(0x101c5e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c5e90 push ecx */
  push32((uint32_t)(ECX));
  /* 101c5e91 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c5e96 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5e9cu);
  /* 101c5e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5e9f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5ea2 jge 0x101c5eb7 */
  if ((C.sf==C.of)) goto L_101c5eb7;
  /* 101c5ea4 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c5ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c5eab add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5eae push eax */
  push32((uint32_t)(EAX));
  /* 101c5eaf call 0x101c2770 */
  push32(0x101c5eb4u); f_101c2770();
  /* 101c5eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5eb7:;
  /* 101c5eb7 push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c5ebc call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5ec2u);
  /* 101c5ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5ec5 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5eca jg 0x101c5ede */
  if ((!C.zf&&C.sf==C.of)) goto L_101c5ede;
  /* 101c5ecc push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c5ed1 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c5ed7u);
  /* 101c5ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5edc je 0x101c5ef2 */
  if (C.zf) goto L_101c5ef2;
L_101c5ede:;
  /* 101c5ede mov ecx, dword ptr [0x101d6204] */
  ECX = (r32((uint32_t)(0x101d6204)));
  /* 101c5ee4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5ee6 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 101c5eea call 0x101c2770 */
  push32(0x101c5eefu); f_101c2770();
  /* 101c5eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5ef2:;
  /* 101c5ef2 push esi */
  push32((uint32_t)(ESI));
  /* 101c5ef3 push edi */
  push32((uint32_t)(EDI));
  /* 101c5ef4 mov edi, 2 */
  EDI = (0x2u);
L_101c5ef9:;
  /* 101c5ef9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5efb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c5efd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c5f02 push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c5f07 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5f0du);
  /* 101c5f0d push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c5f12 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c5f18u);
  /* 101c5f18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5f1b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5f20 jge 0x101c5f3b */
  if ((C.sf==C.of)) goto L_101c5f3b;
  /* 101c5f22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5f24 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c5f26 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c5f2b push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c5f30 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5f36u);
  /* 101c5f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5f39 jmp 0x101c5f66 */
  goto L_101c5f66;
L_101c5f3b:;
  /* 101c5f3b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c5f3d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c5f3f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c5f44 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c5f49 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5f4fu);
  /* 101c5f4f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5f51 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c5f53 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c5f58 push 0x101d6030 */
  push32((uint32_t)(0x101d6030u));
  /* 101c5f5d call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5f63u);
  /* 101c5f63 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5f66:;
  /* 101c5f66 mov edx, dword ptr [0x101d6204] */
  EDX = (r32((uint32_t)(0x101d6204)));
  /* 101c5f6c add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5f6f push edx */
  push32((uint32_t)(EDX));
  /* 101c5f70 call 0x101c2790 */
  push32(0x101c5f75u); f_101c2790();
  /* 101c5f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5f7a jne 0x101c5f9d */
  if (!C.zf) goto L_101c5f9d;
  /* 101c5f7c call 0x101c2820 */
  push32(0x101c5f81u); f_101c2820();
  /* 101c5f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5f84 jge 0x101c5f9d */
  if ((C.sf==C.of)) goto L_101c5f9d;
  /* 101c5f86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5f88 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c5f8a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 101c5f8f push 0x101d61c8 */
  push32((uint32_t)(0x101d61c8u));
  /* 101c5f94 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5f9au);
  /* 101c5f9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c5f9d:;
  /* 101c5f9d mov al, byte ptr [0x101d6204] */
  AL = (r8((uint32_t)(0x101d6204)));
  /* 101c5fa2 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 101c5fa6 mov eax, dword ptr [0x101d6408] */
  EAX = (r32((uint32_t)(0x101d6408)));
  /* 101c5fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c5fad je 0x101c5fc5 */
  if (C.zf) goto L_101c5fc5;
  /* 101c5faf mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c5fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c5fb5 push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c5fba push ecx */
  push32((uint32_t)(ECX));
  /* 101c5fbb call eax */
  call_ind((uint32_t)(EAX), 0x101c5fbdu);
  /* 101c5fbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5fc0 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5fc3 jge 0x101c6005 */
  if ((C.sf==C.of)) goto L_101c6005;
L_101c5fc5:;
  /* 101c5fc5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c5fc7 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5fcdu);
  /* 101c5fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5fd0 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5fd5 jle 0x101c6005 */
  if ((C.zf||C.sf!=C.of)) goto L_101c6005;
  /* 101c5fd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c5fd9 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c5fdfu);
  /* 101c5fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c5fe2 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c5fe7 jle 0x101c6005 */
  if ((C.zf||C.sf!=C.of)) goto L_101c6005;
  /* 101c5fe9 mov esi, 0x1e */
  ESI = (0x1eu);
L_101c5fee:;
  /* 101c5fee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c5ff0 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c5ff2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c5ff4 push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c5ff9 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c5fffu);
  /* 101c5fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6002 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c6003 jne 0x101c5fee */
  if (!C.zf) goto L_101c5fee;
L_101c6005:;
  /* 101c6005 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c600a call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c6010u);
  /* 101c6010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6013 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6015 je 0x101c601b */
  if (C.zf) goto L_101c601b;
  /* 101c6017 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c6019 jmp 0x101c601d */
  goto L_101c601d;
L_101c601b:;
  /* 101c601b push 0x64 */
  push32((uint32_t)(0x64u));
L_101c601d:;
  /* 101c601d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c601f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6024 push 0x101d6300 */
  push32((uint32_t)(0x101d6300u));
  /* 101c6029 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c602fu);
  /* 101c602f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6032 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6034 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6036 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c603b push 0x101d35d0 */
  push32((uint32_t)(0x101d35d0u));
  /* 101c6040 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6046u);
  /* 101c6046 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6048 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c604a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c604f push 0x101d5ed0 */
  push32((uint32_t)(0x101d5ed0u));
  /* 101c6054 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c605au);
  /* 101c605a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c605d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c605e jne 0x101c5ef9 */
  if (!C.zf) goto L_101c5ef9;
  /* 101c6064 pop edi */
  EDI = (pop32());
  /* 101c6065 pop esi */
  ESI = (pop32());
  /* 101c6066 pop ecx */
  ECX = (pop32());
  /* 101c6067 ret  */
  ESPCHK(0x101c5e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x101c6070 (789 bytes, 244 insns) */
void f_101c6070(void) {
  FTRACE(0x101c6070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6070 push ecx */
  push32((uint32_t)(ECX));
  /* 101c6071 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c6076 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c607cu);
  /* 101c607c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6081 je 0x101c6383 */
  if (C.zf) goto L_101c6383;
  /* 101c6087 call 0x101c2710 */
  push32(0x101c608cu); f_101c2710();
  /* 101c608c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c608f jne 0x101c60d6 */
  if (!C.zf) goto L_101c60d6;
  /* 101c6091 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c6096 push eax */
  push32((uint32_t)(EAX));
  /* 101c6097 call 0x101c2790 */
  push32(0x101c609cu); f_101c2790();
  /* 101c609c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c609f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c60a1 jne 0x101c6383 */
  if (!C.zf) goto L_101c6383;
  /* 101c60a7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 101c60ac push 3 */
  push32((uint32_t)(0x3u));
  /* 101c60ae push 2 */
  push32((uint32_t)(0x2u));
  /* 101c60b0 call 0x101c26b0 */
  push32(0x101c60b5u); f_101c26b0();
  /* 101c60b5 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 101c60ba push 3 */
  push32((uint32_t)(0x3u));
  /* 101c60bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101c60be call 0x101c26b0 */
  push32(0x101c60c3u); f_101c26b0();
  /* 101c60c3 mov ecx, dword ptr [0x101d6204] */
  ECX = (r32((uint32_t)(0x101d6204)));
  /* 101c60c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c60cb push ecx */
  push32((uint32_t)(ECX));
  /* 101c60cc call 0x101c2770 */
  push32(0x101c60d1u); f_101c2770();
  /* 101c60d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c60d4 pop ecx */
  ECX = (pop32());
  /* 101c60d5 ret  */
  ESPCHK(0x101c6070u, _esp0);
  ESP += 4; return;
L_101c60d6:;
  /* 101c60d6 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c60db call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c60e1u);
  /* 101c60e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c60e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c60e6 je 0x101c6383 */
  if (C.zf) goto L_101c6383;
  /* 101c60ec mov edx, dword ptr [0x101d6204] */
  EDX = (r32((uint32_t)(0x101d6204)));
  /* 101c60f2 push edx */
  push32((uint32_t)(EDX));
  /* 101c60f3 call 0x101c2790 */
  push32(0x101c60f8u); f_101c2790();
  /* 101c60f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c60fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c60fd jne 0x101c6172 */
  if (!C.zf) goto L_101c6172;
  /* 101c60ff push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101c6104 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6106 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c6108 call 0x101c26b0 */
  push32(0x101c610du); f_101c26b0();
  /* 101c610d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6110 call 0x101c2710 */
  push32(0x101c6115u); f_101c2710();
  /* 101c6115 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6118 jne 0x101c6139 */
  if (!C.zf) goto L_101c6139;
  /* 101c611a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c611f push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6121 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6123 call 0x101c26b0 */
  push32(0x101c6128u); f_101c26b0();
  /* 101c6128 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c612d push 2 */
  push32((uint32_t)(0x2u));
  /* 101c612f push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6131 call 0x101c26b0 */
  push32(0x101c6136u); f_101c26b0();
  /* 101c6136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6139:;
  /* 101c6139 call 0x101c2710 */
  push32(0x101c613eu); f_101c2710();
  /* 101c613e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6141 jne 0x101c6162 */
  if (!C.zf) goto L_101c6162;
  /* 101c6143 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101c6148 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c614a push 4 */
  push32((uint32_t)(0x4u));
  /* 101c614c call 0x101c26b0 */
  push32(0x101c6151u); f_101c26b0();
  /* 101c6151 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101c6156 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c6158 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c615a call 0x101c26b0 */
  push32(0x101c615fu); f_101c26b0();
  /* 101c615f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6162:;
  /* 101c6162 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c6167 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6169 push eax */
  push32((uint32_t)(EAX));
  /* 101c616a call 0x101c2770 */
  push32(0x101c616fu); f_101c2770();
  /* 101c616f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6172:;
  /* 101c6172 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c6177 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c617du);
  /* 101c617d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6180 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6182 je 0x101c61f4 */
  if (C.zf) goto L_101c61f4;
  /* 101c6184 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c6189 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c618fu);
  /* 101c618f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6192 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6194 jne 0x101c61f4 */
  if (!C.zf) goto L_101c61f4;
  /* 101c6196 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c619b call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c61a1u);
  /* 101c61a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c61a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c61a6 je 0x101c61f4 */
  if (C.zf) goto L_101c61f4;
  /* 101c61a8 mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c61ad mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c61b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c61b5 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101c61b9 je 0x101c61ce */
  if (C.zf) goto L_101c61ce;
  /* 101c61bb mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101c61bf push 5 */
  push32((uint32_t)(0x5u));
  /* 101c61c1 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c61c6 push edx */
  push32((uint32_t)(EDX));
  /* 101c61c7 call eax */
  call_ind((uint32_t)(EAX), 0x101c61c9u);
  /* 101c61c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c61cc jmp 0x101c61d0 */
  goto L_101c61d0;
L_101c61ce:;
  /* 101c61ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c61d0:;
  /* 101c61d0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101c61d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c61d5 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101c61d8 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c61dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c61df sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c61e2 mov eax, edx */
  EAX = (EDX);
  /* 101c61e4 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c61e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c61e9 push edx */
  push32((uint32_t)(EDX));
  /* 101c61ea push 5 */
  push32((uint32_t)(0x5u));
  /* 101c61ec call 0x101c3030 */
  push32(0x101c61f1u); f_101c3030();
  /* 101c61f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c61f4:;
  /* 101c61f4 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c61f9 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c61ffu);
  /* 101c61ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6202 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6204 je 0x101c6319 */
  if (C.zf) goto L_101c6319;
  /* 101c620a push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c620f call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6215u);
  /* 101c6215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6218 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c621a jne 0x101c6319 */
  if (!C.zf) goto L_101c6319;
  /* 101c6220 mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c6225 mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c622b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c622d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101c6231 je 0x101c6246 */
  if (C.zf) goto L_101c6246;
  /* 101c6233 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101c6237 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6239 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c623e push edx */
  push32((uint32_t)(EDX));
  /* 101c623f call eax */
  call_ind((uint32_t)(EAX), 0x101c6241u);
  /* 101c6241 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6244 jmp 0x101c6248 */
  goto L_101c6248;
L_101c6246:;
  /* 101c6246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c6248:;
  /* 101c6248 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101c624b push 2 */
  push32((uint32_t)(0x2u));
  /* 101c624d lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101c6250 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c6255 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c6257 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c625a mov eax, edx */
  EAX = (EDX);
  /* 101c625c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c625f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6261 push edx */
  push32((uint32_t)(EDX));
  /* 101c6262 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6264 call 0x101c3030 */
  push32(0x101c6269u); f_101c3030();
  /* 101c6269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c626c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c626e je 0x101c6319 */
  if (C.zf) goto L_101c6319;
  /* 101c6274 mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c6279 mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c627f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6281 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101c6285 je 0x101c629a */
  if (C.zf) goto L_101c629a;
  /* 101c6287 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101c628b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c628d push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c6292 push edx */
  push32((uint32_t)(EDX));
  /* 101c6293 call eax */
  call_ind((uint32_t)(EAX), 0x101c6295u);
  /* 101c6295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6298 jmp 0x101c629c */
  goto L_101c629c;
L_101c629a:;
  /* 101c629a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c629c:;
  /* 101c629c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 101c62a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c62a5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c62a7 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 101c62aa lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101c62ad mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 101c62b2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c62b4 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 101c62b7 mov eax, edx */
  EAX = (EDX);
  /* 101c62b9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c62bc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c62be push edx */
  push32((uint32_t)(EDX));
  /* 101c62bf push 1 */
  push32((uint32_t)(0x1u));
  /* 101c62c1 call 0x101c3030 */
  push32(0x101c62c6u); f_101c3030();
  /* 101c62c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c62c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c62cb je 0x101c6319 */
  if (C.zf) goto L_101c6319;
  /* 101c62cd mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c62d2 mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c62d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c62da mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101c62de je 0x101c62f3 */
  if (C.zf) goto L_101c62f3;
  /* 101c62e0 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101c62e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c62e6 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c62eb push edx */
  push32((uint32_t)(EDX));
  /* 101c62ec call eax */
  call_ind((uint32_t)(EAX), 0x101c62eeu);
  /* 101c62ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c62f1 jmp 0x101c62f5 */
  goto L_101c62f5;
L_101c62f3:;
  /* 101c62f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c62f5:;
  /* 101c62f5 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101c62f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c62fa lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101c62fd mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c6302 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c6304 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c6307 mov eax, edx */
  EAX = (EDX);
  /* 101c6309 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c630c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c630e push edx */
  push32((uint32_t)(EDX));
  /* 101c630f push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6311 call 0x101c3030 */
  push32(0x101c6316u); f_101c3030();
  /* 101c6316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6319:;
  /* 101c6319 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c631b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c6321u);
  /* 101c6321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6324 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6329 jle 0x101c634e */
  if ((C.zf||C.sf!=C.of)) goto L_101c634e;
  /* 101c632b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101c6330 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c6332 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6334 call 0x101c26b0 */
  push32(0x101c6339u); f_101c26b0();
  /* 101c6339 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c633b call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c6341u);
  /* 101c6341 push eax */
  push32((uint32_t)(EAX));
  /* 101c6342 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6344 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c6346 call 0x101c26b0 */
  push32(0x101c634bu); f_101c26b0();
  /* 101c634b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c634e:;
  /* 101c634e push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6350 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c6356u);
  /* 101c6356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6359 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c635e jle 0x101c6383 */
  if ((C.zf||C.sf!=C.of)) goto L_101c6383;
  /* 101c6360 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101c6365 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6367 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c6369 call 0x101c26b0 */
  push32(0x101c636eu); f_101c26b0();
  /* 101c636e push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6370 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c6376u);
  /* 101c6376 push eax */
  push32((uint32_t)(EAX));
  /* 101c6377 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6379 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c637b call 0x101c26b0 */
  push32(0x101c6380u); f_101c26b0();
  /* 101c6380 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6383:;
  /* 101c6383 pop ecx */
  ECX = (pop32());
  /* 101c6384 ret  */
  ESPCHK(0x101c6070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x101c6390 (818 bytes, 268 insns) */
void f_101c6390(void) {
  FTRACE(0x101c6390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6390 push ecx */
  push32((uint32_t)(ECX));
  /* 101c6391 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6393 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6395 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6397 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c639du);
  /* 101c639d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c63a0 call dword ptr [0x101d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64c0))), 0x101c63a6u);
  /* 101c63a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c63a8 je 0x101c66c0 */
  if (C.zf) goto L_101c66c0;
  /* 101c63ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101c63b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c63b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c63b4 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c63bau);
  /* 101c63ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c63bd call 0x101c2710 */
  push32(0x101c63c2u); f_101c2710();
  /* 101c63c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c63c5 je 0x101c66c0 */
  if (C.zf) goto L_101c66c0;
  /* 101c63cb call dword ptr [0x101d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64c0))), 0x101c63d1u);
  /* 101c63d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c63d3 je 0x101c66b1 */
  if (C.zf) goto L_101c66b1;
  /* 101c63d9 push esi */
  push32((uint32_t)(ESI));
  /* 101c63da push edi */
  push32((uint32_t)(EDI));
  /* 101c63db push 4 */
  push32((uint32_t)(0x4u));
  /* 101c63dd push 4 */
  push32((uint32_t)(0x4u));
  /* 101c63df push 9 */
  push32((uint32_t)(0x9u));
  /* 101c63e1 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c63e7u);
  /* 101c63e7 push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c63ec call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c63f2u);
  /* 101c63f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c63f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c63f7 jne 0x101c645f */
  if (!C.zf) goto L_101c645f;
  /* 101c63f9 mov al, byte ptr [0x101d6204] */
  AL = (r8((uint32_t)(0x101d6204)));
  /* 101c63fe mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 101c6402 mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c6407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6409 je 0x101c6420 */
  if (C.zf) goto L_101c6420;
  /* 101c640b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c640f push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6411 push 0x101d6050 */
  push32((uint32_t)(0x101d6050u));
  /* 101c6416 push ecx */
  push32((uint32_t)(ECX));
  /* 101c6417 call eax */
  call_ind((uint32_t)(EAX), 0x101c6419u);
  /* 101c6419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c641c mov esi, eax */
  ESI = (EAX);
  /* 101c641e jmp 0x101c6422 */
  goto L_101c6422;
L_101c6420:;
  /* 101c6420 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101c6422:;
  /* 101c6422 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6424 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c642au);
  /* 101c642a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 101c642d mov edi, eax */
  EDI = (EAX);
  /* 101c642f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c6434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6437 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 101c643a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c643c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c643f mov eax, edx */
  EAX = (EDX);
  /* 101c6441 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c6444 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6446 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6448 jge 0x101c6450 */
  if ((C.sf==C.of)) goto L_101c6450;
  /* 101c644a push 4 */
  push32((uint32_t)(0x4u));
  /* 101c644c push 4 */
  push32((uint32_t)(0x4u));
  /* 101c644e jmp 0x101c6454 */
  goto L_101c6454;
L_101c6450:;
  /* 101c6450 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c6452 push 6 */
  push32((uint32_t)(0x6u));
L_101c6454:;
  /* 101c6454 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c6456 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c645cu);
  /* 101c645c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c645f:;
  /* 101c645f push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c6464 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c646au);
  /* 101c646a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c646d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c646f jne 0x101c64d8 */
  if (!C.zf) goto L_101c64d8;
  /* 101c6471 mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c6476 mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c647c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c647e mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101c6482 je 0x101c6499 */
  if (C.zf) goto L_101c6499;
  /* 101c6484 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c6488 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c648a push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c648f push edx */
  push32((uint32_t)(EDX));
  /* 101c6490 call eax */
  call_ind((uint32_t)(EAX), 0x101c6492u);
  /* 101c6492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6495 mov esi, eax */
  ESI = (EAX);
  /* 101c6497 jmp 0x101c649b */
  goto L_101c649b;
L_101c6499:;
  /* 101c6499 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101c649b:;
  /* 101c649b push 3 */
  push32((uint32_t)(0x3u));
  /* 101c649d call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c64a3u);
  /* 101c64a3 mov edi, eax */
  EDI = (EAX);
  /* 101c64a5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101c64a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c64ab lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 101c64ae mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c64b3 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c64b5 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c64b8 mov ecx, edx */
  ECX = (EDX);
  /* 101c64ba shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101c64bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c64bf cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c64c1 jge 0x101c64c9 */
  if ((C.sf==C.of)) goto L_101c64c9;
  /* 101c64c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c64c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c64c7 jmp 0x101c64cd */
  goto L_101c64cd;
L_101c64c9:;
  /* 101c64c9 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c64cb push 6 */
  push32((uint32_t)(0x6u));
L_101c64cd:;
  /* 101c64cd push 9 */
  push32((uint32_t)(0x9u));
  /* 101c64cf call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c64d5u);
  /* 101c64d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c64d8:;
  /* 101c64d8 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c64dd call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c64e3u);
  /* 101c64e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c64e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c64e8 jne 0x101c654f */
  if (!C.zf) goto L_101c654f;
  /* 101c64ea mov eax, dword ptr [0x101d640c] */
  EAX = (r32((uint32_t)(0x101d640c)));
  /* 101c64ef mov dl, byte ptr [0x101d6204] */
  DL = (r8((uint32_t)(0x101d6204)));
  /* 101c64f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c64f7 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 101c64fb je 0x101c6512 */
  if (C.zf) goto L_101c6512;
  /* 101c64fd mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c6501 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6503 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c6508 push ecx */
  push32((uint32_t)(ECX));
  /* 101c6509 call eax */
  call_ind((uint32_t)(EAX), 0x101c650bu);
  /* 101c650b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c650e mov esi, eax */
  ESI = (EAX);
  /* 101c6510 jmp 0x101c6514 */
  goto L_101c6514;
L_101c6512:;
  /* 101c6512 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101c6514:;
  /* 101c6514 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6516 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c651cu);
  /* 101c651c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 101c651f mov edi, eax */
  EDI = (EAX);
  /* 101c6521 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c6526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6529 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 101c652c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c652e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c6531 mov eax, edx */
  EAX = (EDX);
  /* 101c6533 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6535 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101c6538 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c653a push 9 */
  push32((uint32_t)(0x9u));
  /* 101c653c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c653e jge 0x101c6544 */
  if ((C.sf==C.of)) goto L_101c6544;
  /* 101c6540 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c6542 jmp 0x101c6546 */
  goto L_101c6546;
L_101c6544:;
  /* 101c6544 push 6 */
  push32((uint32_t)(0x6u));
L_101c6546:;
  /* 101c6546 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c654cu);
  /* 101c654c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c654f:;
  /* 101c654f push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c6554 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c655au);
  /* 101c655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c655d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c655f je 0x101c6573 */
  if (C.zf) goto L_101c6573;
  /* 101c6561 push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c6566 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c656cu);
  /* 101c656c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c656f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6571 jne 0x101c6594 */
  if (!C.zf) goto L_101c6594;
L_101c6573:;
  /* 101c6573 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6575 call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c657bu);
  /* 101c657b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c657e cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6583 jge 0x101c6594 */
  if ((C.sf==C.of)) goto L_101c6594;
  /* 101c6585 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6587 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6589 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c658b call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c6591u);
  /* 101c6591 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6594:;
  /* 101c6594 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c6599 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c659fu);
  /* 101c659f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c65a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c65a4 jne 0x101c6617 */
  if (!C.zf) goto L_101c6617;
  /* 101c65a6 call 0x101c2820 */
  push32(0x101c65abu); f_101c2820();
  /* 101c65ab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c65ae jge 0x101c6617 */
  if ((C.sf==C.of)) goto L_101c6617;
  /* 101c65b0 mov eax, dword ptr [0x101d6408] */
  EAX = (r32((uint32_t)(0x101d6408)));
  /* 101c65b5 mov cl, byte ptr [0x101d6204] */
  CL = (r8((uint32_t)(0x101d6204)));
  /* 101c65bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c65bd mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101c65c1 je 0x101c65d8 */
  if (C.zf) goto L_101c65d8;
  /* 101c65c3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c65c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c65c9 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c65ce push edx */
  push32((uint32_t)(EDX));
  /* 101c65cf call eax */
  call_ind((uint32_t)(EAX), 0x101c65d1u);
  /* 101c65d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c65d4 mov esi, eax */
  ESI = (EAX);
  /* 101c65d6 jmp 0x101c65da */
  goto L_101c65da;
L_101c65d8:;
  /* 101c65d8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101c65da:;
  /* 101c65da push 2 */
  push32((uint32_t)(0x2u));
  /* 101c65dc call dword ptr [0x101d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d648c))), 0x101c65e2u);
  /* 101c65e2 mov edi, eax */
  EDI = (EAX);
  /* 101c65e4 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101c65e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c65ea lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 101c65ed mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101c65f2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101c65f4 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101c65f7 mov ecx, edx */
  ECX = (EDX);
  /* 101c65f9 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101c65fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c65fe cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6600 jge 0x101c6608 */
  if ((C.sf==C.of)) goto L_101c6608;
  /* 101c6602 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6604 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c6606 jmp 0x101c660c */
  goto L_101c660c;
L_101c6608:;
  /* 101c6608 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c660a push 7 */
  push32((uint32_t)(0x7u));
L_101c660c:;
  /* 101c660c push 9 */
  push32((uint32_t)(0x9u));
  /* 101c660e call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c6614u);
  /* 101c6614 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6617:;
  /* 101c6617 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c661c call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6622u);
  /* 101c6622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6625 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6627 pop edi */
  EDI = (pop32());
  /* 101c6628 pop esi */
  ESI = (pop32());
  /* 101c6629 jne 0x101c663a */
  if (!C.zf) goto L_101c663a;
  /* 101c662b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c662d push 1 */
  push32((uint32_t)(0x1u));
  /* 101c662f push 9 */
  push32((uint32_t)(0x9u));
  /* 101c6631 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c6637u);
  /* 101c6637 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c663a:;
  /* 101c663a push 0x101d5fc8 */
  push32((uint32_t)(0x101d5fc8u));
  /* 101c663f call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6645u);
  /* 101c6645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c664a je 0x101c665e */
  if (C.zf) goto L_101c665e;
  /* 101c664c push 0x101d35b0 */
  push32((uint32_t)(0x101d35b0u));
  /* 101c6651 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6657u);
  /* 101c6657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c665c jne 0x101c666d */
  if (!C.zf) goto L_101c666d;
L_101c665e:;
  /* 101c665e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6660 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6662 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c6664 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c666au);
  /* 101c666a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c666d:;
  /* 101c666d push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c6672 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6678u);
  /* 101c6678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c667b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c667d jne 0x101c668e */
  if (!C.zf) goto L_101c668e;
  /* 101c667f push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6681 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6683 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c6685 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c668bu);
  /* 101c668b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c668e:;
  /* 101c668e push 0x101d62c8 */
  push32((uint32_t)(0x101d62c8u));
  /* 101c6693 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6699u);
  /* 101c6699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c669c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c669e jne 0x101c66c0 */
  if (!C.zf) goto L_101c66c0;
  /* 101c66a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c66a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c66a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101c66a6 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c66acu);
  /* 101c66ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c66af pop ecx */
  ECX = (pop32());
  /* 101c66b0 ret  */
  ESPCHK(0x101c6390u, _esp0);
  ESP += 4; return;
L_101c66b1:;
  /* 101c66b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c66b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c66b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c66b7 call dword ptr [0x101d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6464))), 0x101c66bdu);
  /* 101c66bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c66c0:;
  /* 101c66c0 pop ecx */
  ECX = (pop32());
  /* 101c66c1 ret  */
  ESPCHK(0x101c6390u, _esp0);
  ESP += 4; return;
}

/* FUN_100066d0 @ 0x101c66d0 (174 bytes, 50 insns) */
void f_101c66d0(void) {
  FTRACE(0x101c66d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c66d0 push 0x101d64e8 */
  push32((uint32_t)(0x101d64e8u));
  /* 101c66d5 call 0x101c27c0 */
  push32(0x101c66dau); f_101c27c0();
  /* 101c66da push 0x101d6290 */
  push32((uint32_t)(0x101d6290u));
  /* 101c66df call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c66e5u);
  /* 101c66e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c66e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c66ea je 0x101c670c */
  if (C.zf) goto L_101c670c;
  /* 101c66ec push 0x101d61d8 */
  push32((uint32_t)(0x101d61d8u));
  /* 101c66f1 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c66f7u);
  /* 101c66f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c66fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c66fc je 0x101c670c */
  if (C.zf) goto L_101c670c;
  /* 101c66fe push 0x101cf16c */
  push32((uint32_t)(0x101cf16cu));
  /* 101c6703 call 0x101c27c0 */
  push32(0x101c6708u); f_101c27c0();
  /* 101c6708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c670b ret  */
  ESPCHK(0x101c66d0u, _esp0);
  ESP += 4; return;
L_101c670c:;
  /* 101c670c mov eax, dword ptr [0x101d5ea8] */
  EAX = (r32((uint32_t)(0x101d5ea8)));
  /* 101c6711 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6714 je 0x101c6772 */
  if (C.zf) goto L_101c6772;
  /* 101c6716 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6719 je 0x101c6772 */
  if (C.zf) goto L_101c6772;
  /* 101c671b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c671e je 0x101c6772 */
  if (C.zf) goto L_101c6772;
  /* 101c6720 push 0x101d61c0 */
  push32((uint32_t)(0x101d61c0u));
  /* 101c6725 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c672bu);
  /* 101c672b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c672e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6730 je 0x101c6752 */
  if (C.zf) goto L_101c6752;
  /* 101c6732 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c6737 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c673du);
  /* 101c673d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6740 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6742 jne 0x101c6752 */
  if (!C.zf) goto L_101c6752;
  /* 101c6744 push 0x101d64e8 */
  push32((uint32_t)(0x101d64e8u));
  /* 101c6749 call 0x101c27c0 */
  push32(0x101c674eu); f_101c27c0();
  /* 101c674e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6751 ret  */
  ESPCHK(0x101c66d0u, _esp0);
  ESP += 4; return;
L_101c6752:;
  /* 101c6752 push 0x101d60a0 */
  push32((uint32_t)(0x101d60a0u));
  /* 101c6757 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c675du);
  /* 101c675d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6760 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6762 je 0x101c677d */
  if (C.zf) goto L_101c677d;
  /* 101c6764 push 0x101cf1d8 */
  push32((uint32_t)(0x101cf1d8u));
  /* 101c6769 call 0x101c27c0 */
  push32(0x101c676eu); f_101c27c0();
  /* 101c676e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6771 ret  */
  ESPCHK(0x101c66d0u, _esp0);
  ESP += 4; return;
L_101c6772:;
  /* 101c6772 push 0x101cf1d8 */
  push32((uint32_t)(0x101cf1d8u));
  /* 101c6777 call 0x101c27c0 */
  push32(0x101c677cu); f_101c27c0();
  /* 101c677c pop ecx */
  ECX = (pop32());
L_101c677d:;
  /* 101c677d ret  */
  ESPCHK(0x101c66d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x101c6780 (70 bytes, 22 insns) */
void f_101c6780(void) {
  FTRACE(0x101c6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6780 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6782 call 0x101c2800 */
  push32(0x101c6787u); f_101c2800();
  /* 101c6787 push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c678c call 0x101c5310 */
  push32(0x101c6791u); f_101c5310();
  /* 101c6791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6796 je 0x101c67a2 */
  if (C.zf) goto L_101c67a2;
  /* 101c6798 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c679a call 0x101c2800 */
  push32(0x101c679fu); f_101c2800();
  /* 101c679f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c67a2:;
  /* 101c67a2 call 0x101c2810 */
  push32(0x101c67a7u); f_101c2810();
  /* 101c67a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c67a9 jg 0x101c67bd */
  if ((!C.zf&&C.sf==C.of)) goto L_101c67bd;
  /* 101c67ab push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c67b0 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c67b6u);
  /* 101c67b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c67b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c67bb jle 0x101c67c5 */
  if ((C.zf||C.sf!=C.of)) goto L_101c67c5;
L_101c67bd:;
  /* 101c67bd push 0 */
  push32((uint32_t)(0x0u));
  /* 101c67bf call 0x101c2800 */
  push32(0x101c67c4u); f_101c2800();
  /* 101c67c4 pop ecx */
  ECX = (pop32());
L_101c67c5:;
  /* 101c67c5 ret  */
  ESPCHK(0x101c6780u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x101c67d0 (235 bytes, 66 insns) */
void f_101c67d0(void) {
  FTRACE(0x101c67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c67d0 push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c67d5 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c67dbu);
  /* 101c67db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c67de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c67e0 je 0x101c67f6 */
  if (C.zf) goto L_101c67f6;
  /* 101c67e2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c67e4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c67e6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c67e8 push 0x101d62c0 */
  push32((uint32_t)(0x101d62c0u));
  /* 101c67ed call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c67f3u);
  /* 101c67f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c67f6:;
  /* 101c67f6 push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c67fb call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c6801u);
  /* 101c6801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6804 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6806 je 0x101c681c */
  if (C.zf) goto L_101c681c;
  /* 101c6808 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c680c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c680e push 0x101d35b8 */
  push32((uint32_t)(0x101d35b8u));
  /* 101c6813 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6819u);
  /* 101c6819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c681c:;
  /* 101c681c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c681e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101c6820 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c6822 push 0x101d3818 */
  push32((uint32_t)(0x101d3818u));
  /* 101c6827 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c682du);
  /* 101c682d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c682f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c6831 push 0x101d6128 */
  push32((uint32_t)(0x101d6128u));
  /* 101c6836 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c683cu);
  /* 101c683c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c683e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c6840 push 0x101d6120 */
  push32((uint32_t)(0x101d6120u));
  /* 101c6845 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c684bu);
  /* 101c684b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c684d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c684f push 0x101d60f0 */
  push32((uint32_t)(0x101d60f0u));
  /* 101c6854 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c685au);
  /* 101c685a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c685c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c685e push 0x101d60e8 */
  push32((uint32_t)(0x101d60e8u));
  /* 101c6863 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c6869u);
  /* 101c6869 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c686c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c686e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c6870 push 0x101d60f8 */
  push32((uint32_t)(0x101d60f8u));
  /* 101c6875 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c687bu);
  /* 101c687b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c687d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c687f push 0x101d5fe8 */
  push32((uint32_t)(0x101d5fe8u));
  /* 101c6884 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c688au);
  /* 101c688a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c688c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c688e push 0x101d5ff0 */
  push32((uint32_t)(0x101d5ff0u));
  /* 101c6893 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c6899u);
  /* 101c6899 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c689b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c689d push 0x101d5ff8 */
  push32((uint32_t)(0x101d5ff8u));
  /* 101c68a2 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c68a8u);
  /* 101c68a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c68aa push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c68ac push 0x101d6000 */
  push32((uint32_t)(0x101d6000u));
  /* 101c68b1 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c68b7u);
  /* 101c68b7 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c68ba ret  */
  ESPCHK(0x101c67d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x101c68c0 (303 bytes, 90 insns) */
void f_101c68c0(void) {
  FTRACE(0x101c68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c68c0 push ecx */
  push32((uint32_t)(ECX));
  /* 101c68c1 push ebx */
  push32((uint32_t)(EBX));
  /* 101c68c2 push ebp */
  push32((uint32_t)(EBP));
  /* 101c68c3 push esi */
  push32((uint32_t)(ESI));
  /* 101c68c4 push edi */
  push32((uint32_t)(EDI));
  /* 101c68c5 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c68ca call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c68d0u);
  /* 101c68d0 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c68d5 mov ebx, eax */
  EBX = (EAX);
  /* 101c68d7 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c68ddu);
  /* 101c68dd push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c68e2 mov edi, eax */
  EDI = (EAX);
  /* 101c68e4 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c68eau);
  /* 101c68ea push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c68ef mov ebp, eax */
  EBP = (EAX);
  /* 101c68f1 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c68f7u);
  /* 101c68f7 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c68fc mov esi, eax */
  ESI = (EAX);
  /* 101c68fe call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6904u);
  /* 101c6904 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c6909 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101c690d call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6913u);
  /* 101c6913 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 101c6917 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c691a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c691c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c691e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6920 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6922 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6924 pop edi */
  EDI = (pop32());
  /* 101c6925 pop esi */
  ESI = (pop32());
  /* 101c6926 pop ebp */
  EBP = (pop32());
  /* 101c6927 pop ebx */
  EBX = (pop32());
  /* 101c6928 jne 0x101c6990 */
  if (!C.zf) goto L_101c6990;
  /* 101c692a cmp dword ptr [0x101d6100], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x101d6100))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6931 jle 0x101c6990 */
  if ((C.zf||C.sf!=C.of)) goto L_101c6990;
  /* 101c6933 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6935 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c6937 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c6939 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c693e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6944u);
  /* 101c6944 push 0x101d6108 */
  push32((uint32_t)(0x101d6108u));
  /* 101c6949 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c694fu);
  /* 101c694f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6952 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6954 je 0x101c696a */
  if (C.zf) goto L_101c696a;
  /* 101c6956 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6958 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c695a push 6 */
  push32((uint32_t)(0x6u));
  /* 101c695c push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c6961 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6967u);
  /* 101c6967 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c696a:;
  /* 101c696a push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c696f call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6975u);
  /* 101c6975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6978 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c697a je 0x101c6990 */
  if (C.zf) goto L_101c6990;
  /* 101c697c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c697e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c6980 push 8 */
  push32((uint32_t)(0x8u));
  /* 101c6982 push 0x101d3828 */
  push32((uint32_t)(0x101d3828u));
  /* 101c6987 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c698du);
  /* 101c698d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6990:;
  /* 101c6990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6992 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101c6994 push 0x101d6238 */
  push32((uint32_t)(0x101d6238u));
  /* 101c6999 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c699fu);
  /* 101c699f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c69a1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101c69a3 push 0x101d6220 */
  push32((uint32_t)(0x101d6220u));
  /* 101c69a8 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c69aeu);
  /* 101c69ae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c69b0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101c69b2 push 0x101d6230 */
  push32((uint32_t)(0x101d6230u));
  /* 101c69b7 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c69bdu);
  /* 101c69bd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c69bf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c69c1 push 0x101d6210 */
  push32((uint32_t)(0x101d6210u));
  /* 101c69c6 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c69ccu);
  /* 101c69cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c69ce push 0xf */
  push32((uint32_t)(0xfu));
  /* 101c69d0 push 0x101d6218 */
  push32((uint32_t)(0x101d6218u));
  /* 101c69d5 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c69dbu);
  /* 101c69db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c69dd push 0xa */
  push32((uint32_t)(0xau));
  /* 101c69df push 0x101d6208 */
  push32((uint32_t)(0x101d6208u));
  /* 101c69e4 call dword ptr [0x101d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6458))), 0x101c69eau);
  /* 101c69ea add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c69ed pop ecx */
  ECX = (pop32());
  /* 101c69ee ret  */
  ESPCHK(0x101c68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x101c69f0 (517 bytes, 145 insns) */
void f_101c69f0(void) {
  FTRACE(0x101c69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c69f0 push esi */
  push32((uint32_t)(ESI));
  /* 101c69f1 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c69f6 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c69fcu);
  /* 101c69fc push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c6a01 mov esi, eax */
  ESI = (EAX);
  /* 101c6a03 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6a09u);
  /* 101c6a09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6a0c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6a0e jne 0x101c6a24 */
  if (!C.zf) goto L_101c6a24;
  /* 101c6a10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c6a16 push 0x101d61a8 */
  push32((uint32_t)(0x101d61a8u));
  /* 101c6a1b call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6a21u);
  /* 101c6a21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6a24:;
  /* 101c6a24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6a2a push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c6a2f call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6a35u);
  /* 101c6a35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a37 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a39 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6a3b push 0x101d6138 */
  push32((uint32_t)(0x101d6138u));
  /* 101c6a40 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6a46u);
  /* 101c6a46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a48 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 101c6a4c push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c6a51 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6a57u);
  /* 101c6a57 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c6a5c call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6a62u);
  /* 101c6a62 push 0x101d61a0 */
  push32((uint32_t)(0x101d61a0u));
  /* 101c6a67 mov esi, eax */
  ESI = (EAX);
  /* 101c6a69 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6a6fu);
  /* 101c6a6f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6a72 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6a74 jne 0x101c6bf3 */
  if (!C.zf) goto L_101c6bf3;
  /* 101c6a7a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6a80 push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c6a85 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6a8bu);
  /* 101c6a8b push 0x101d5e70 */
  push32((uint32_t)(0x101d5e70u));
  /* 101c6a90 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6a96u);
  /* 101c6a96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6a9b je 0x101c6bf3 */
  if (C.zf) goto L_101c6bf3;
  /* 101c6aa1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6aa3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6aa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6aa7 push 0x101d5f20 */
  push32((uint32_t)(0x101d5f20u));
  /* 101c6aac call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6ab2u);
  /* 101c6ab2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6ab4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6ab8 push 0x101d5f28 */
  push32((uint32_t)(0x101d5f28u));
  /* 101c6abd call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6ac3u);
  /* 101c6ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6ac9 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c6ace call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6ad4u);
  /* 101c6ad4 push 0x101d37c8 */
  push32((uint32_t)(0x101d37c8u));
  /* 101c6ad9 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6adfu);
  /* 101c6adf add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6ae4 je 0x101c6bf3 */
  if (C.zf) goto L_101c6bf3;
  /* 101c6aea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6aec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6aee push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6af0 push 0x101d5f38 */
  push32((uint32_t)(0x101d5f38u));
  /* 101c6af5 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6afbu);
  /* 101c6afb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6afd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6aff push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6b01 push 0x101d6048 */
  push32((uint32_t)(0x101d6048u));
  /* 101c6b06 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6b0cu);
  /* 101c6b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6b12 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c6b17 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6b1du);
  /* 101c6b1d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b21 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6b23 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c6b28 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6b2eu);
  /* 101c6b2e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6b31 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c6b36 call dword ptr [0x101d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d64a0))), 0x101c6b3cu);
  /* 101c6b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6b3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6b41 je 0x101c6bf3 */
  if (C.zf) goto L_101c6bf3;
  /* 101c6b47 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c6b4c call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6b52u);
  /* 101c6b52 push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c6b57 mov esi, eax */
  ESI = (EAX);
  /* 101c6b59 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6b5fu);
  /* 101c6b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6b62 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6b64 jne 0x101c6b8d */
  if (!C.zf) goto L_101c6b8d;
  /* 101c6b66 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6b68 call 0x101c27d0 */
  push32(0x101c6b6du); f_101c27d0();
  /* 101c6b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6b70 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6b73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6b77 jge 0x101c6b7d */
  if ((C.sf==C.of)) goto L_101c6b7d;
  /* 101c6b79 push 6 */
  push32((uint32_t)(0x6u));
  /* 101c6b7b jmp 0x101c6b7f */
  goto L_101c6b7f;
L_101c6b7d:;
  /* 101c6b7d push 4 */
  push32((uint32_t)(0x4u));
L_101c6b7f:;
  /* 101c6b7f push 0x101d5f08 */
  push32((uint32_t)(0x101d5f08u));
  /* 101c6b84 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6b8au);
  /* 101c6b8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6b8d:;
  /* 101c6b8d push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c6b92 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6b98u);
  /* 101c6b98 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c6b9d mov esi, eax */
  ESI = (EAX);
  /* 101c6b9f call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6ba5u);
  /* 101c6ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6ba8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6baa jne 0x101c6bc0 */
  if (!C.zf) goto L_101c6bc0;
  /* 101c6bac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6bb0 push 7 */
  push32((uint32_t)(0x7u));
  /* 101c6bb2 push 0x101d6028 */
  push32((uint32_t)(0x101d6028u));
  /* 101c6bb7 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6bbdu);
  /* 101c6bbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6bc0:;
  /* 101c6bc0 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c6bc5 call dword ptr [0x101d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6494))), 0x101c6bcbu);
  /* 101c6bcb push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c6bd0 mov esi, eax */
  ESI = (EAX);
  /* 101c6bd2 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6bd8u);
  /* 101c6bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6bdb sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6bdd jne 0x101c6bf3 */
  if (!C.zf) goto L_101c6bf3;
  /* 101c6bdf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6be1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6be3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6be5 push 0x101d3568 */
  push32((uint32_t)(0x101d3568u));
  /* 101c6bea call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6bf0u);
  /* 101c6bf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6bf3:;
  /* 101c6bf3 pop esi */
  ESI = (pop32());
  /* 101c6bf4 ret  */
  ESPCHK(0x101c69f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x101c6c00 (121 bytes, 36 insns) */
void f_101c6c00(void) {
  FTRACE(0x101c6c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6c02 call 0x101c2800 */
  push32(0x101c6c07u); f_101c2800();
  /* 101c6c07 push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c6c0c call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6c12u);
  /* 101c6c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c15 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6c18 jge 0x101c6c2d */
  if ((C.sf==C.of)) goto L_101c6c2d;
  /* 101c6c1a mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c6c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6c21 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c24 push eax */
  push32((uint32_t)(EAX));
  /* 101c6c25 call 0x101c2770 */
  push32(0x101c6c2au); f_101c2770();
  /* 101c6c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6c2d:;
  /* 101c6c2d push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c6c32 call dword ptr [0x101d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6490))), 0x101c6c38u);
  /* 101c6c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c3b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6c3e jle 0x101c6c54 */
  if ((C.zf||C.sf!=C.of)) goto L_101c6c54;
  /* 101c6c40 mov ecx, dword ptr [0x101d6204] */
  ECX = (r32((uint32_t)(0x101d6204)));
  /* 101c6c46 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6c48 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c4b push ecx */
  push32((uint32_t)(ECX));
  /* 101c6c4c call 0x101c2770 */
  push32(0x101c6c51u); f_101c2770();
  /* 101c6c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6c54:;
  /* 101c6c54 mov edx, dword ptr [0x101d6204] */
  EDX = (r32((uint32_t)(0x101d6204)));
  /* 101c6c5a add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c5d push edx */
  push32((uint32_t)(EDX));
  /* 101c6c5e call 0x101c2790 */
  push32(0x101c6c63u); f_101c2790();
  /* 101c6c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6c65 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c6c68 push eax */
  push32((uint32_t)(EAX));
  /* 101c6c69 call 0x101c2800 */
  push32(0x101c6c6eu); f_101c2800();
  /* 101c6c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6c70 call 0x101c2800 */
  push32(0x101c6c75u); f_101c2800();
  /* 101c6c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6c78 ret  */
  ESPCHK(0x101c6c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x101c6c80 (86 bytes, 20 insns) */
void f_101c6c80(void) {
  FTRACE(0x101c6c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6c80 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c6c85 mov ecx, dword ptr [eax*4 + 0x101d5ee8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101d5ee8)));
  /* 101c6c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c6c8e je 0x101c6c95 */
  if (C.zf) goto L_101c6c95;
  /* 101c6c90 call 0x101c6780 */
  push32(0x101c6c95u); f_101c6780();
L_101c6c95:;
  /* 101c6c95 call 0x101c5e90 */
  push32(0x101c6c9au); f_101c5e90();
  /* 101c6c9a call 0x101c67d0 */
  push32(0x101c6c9fu); f_101c67d0();
  /* 101c6c9f call 0x101c2820 */
  push32(0x101c6ca4u); f_101c2820();
  /* 101c6ca4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6ca7 jge 0x101c6cae */
  if ((C.sf==C.of)) goto L_101c6cae;
  /* 101c6ca9 call 0x101c68c0 */
  push32(0x101c6caeu); f_101c68c0();
L_101c6cae:;
  /* 101c6cae call 0x101c5c70 */
  push32(0x101c6cb3u); f_101c5c70();
  /* 101c6cb3 call 0x101c5b30 */
  push32(0x101c6cb8u); f_101c5b30();
  /* 101c6cb8 call 0x101c2820 */
  push32(0x101c6cbdu); f_101c2820();
  /* 101c6cbd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6cc0 jge 0x101c6cc7 */
  if ((C.sf==C.of)) goto L_101c6cc7;
  /* 101c6cc2 call 0x101c5350 */
  push32(0x101c6cc7u); f_101c5350();
L_101c6cc7:;
  /* 101c6cc7 call 0x101c6070 */
  push32(0x101c6cccu); f_101c6070();
  /* 101c6ccc call 0x101c6390 */
  push32(0x101c6cd1u); f_101c6390();
  /* 101c6cd1 jmp 0x101c66d0 */
  f_101c66d0(); return;
}

/* FUN_10006ce0 @ 0x101c6ce0 (247 bytes, 70 insns) */
void f_101c6ce0(void) {
  FTRACE(0x101c6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6ce0 push esi */
  push32((uint32_t)(ESI));
  /* 101c6ce1 push edi */
  push32((uint32_t)(EDI));
  /* 101c6ce2 call 0x101c6c00 */
  push32(0x101c6ce7u); f_101c6c00();
  /* 101c6ce7 call 0x101c69f0 */
  push32(0x101c6cecu); f_101c69f0();
  /* 101c6cec mov edi, 2 */
  EDI = (0x2u);
L_101c6cf1:;
  /* 101c6cf1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6cf5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6cfa push 0x101d60e0 */
  push32((uint32_t)(0x101d60e0u));
  /* 101c6cff call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d05u);
  /* 101c6d05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d07 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6d09 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6d0e push 0x101d35d8 */
  push32((uint32_t)(0x101d35d8u));
  /* 101c6d13 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d19u);
  /* 101c6d19 mov eax, dword ptr [0x101d6204] */
  EAX = (r32((uint32_t)(0x101d6204)));
  /* 101c6d1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6d21 push eax */
  push32((uint32_t)(EAX));
  /* 101c6d22 call 0x101c2790 */
  push32(0x101c6d27u); f_101c2790();
  /* 101c6d27 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6d2c jne 0x101c6d4c */
  if (!C.zf) goto L_101c6d4c;
  /* 101c6d2e mov esi, 0x64 */
  ESI = (0x64u);
L_101c6d33:;
  /* 101c6d33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d35 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6d37 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 101c6d39 push 0x101d37d8 */
  push32((uint32_t)(0x101d37d8u));
  /* 101c6d3e call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d44u);
  /* 101c6d44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6d47 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c6d48 jne 0x101c6d33 */
  if (!C.zf) goto L_101c6d33;
  /* 101c6d4a jmp 0x101c6d60 */
  goto L_101c6d60;
L_101c6d4c:;
  /* 101c6d4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 101c6d50 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101c6d52 push 0x101d60b0 */
  push32((uint32_t)(0x101d60b0u));
  /* 101c6d57 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d5du);
  /* 101c6d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6d60:;
  /* 101c6d60 push 0x101d5f70 */
  push32((uint32_t)(0x101d5f70u));
  /* 101c6d65 call dword ptr [0x101d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d649c))), 0x101c6d6bu);
  /* 101c6d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6d6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c6d70 jne 0x101c6d89 */
  if (!C.zf) goto L_101c6d89;
  /* 101c6d72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6d76 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6d7b push 0x101d35e0 */
  push32((uint32_t)(0x101d35e0u));
  /* 101c6d80 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d86u);
  /* 101c6d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c6d89:;
  /* 101c6d89 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d8b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6d8d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6d92 push 0x101d35d0 */
  push32((uint32_t)(0x101d35d0u));
  /* 101c6d97 call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6d9du);
  /* 101c6d9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c6d9f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101c6da1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101c6da6 push 0x101d5ed0 */
  push32((uint32_t)(0x101d5ed0u));
  /* 101c6dab call dword ptr [0x101d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6454))), 0x101c6db1u);
  /* 101c6db1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6db4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c6db5 jne 0x101c6cf1 */
  if (!C.zf) goto L_101c6cf1;
  /* 101c6dbb call 0x101c67d0 */
  push32(0x101c6dc0u); f_101c67d0();
  /* 101c6dc0 call 0x101c6070 */
  push32(0x101c6dc5u); f_101c6070();
  /* 101c6dc5 call 0x101c6390 */
  push32(0x101c6dcau); f_101c6390();
  /* 101c6dca call 0x101c5350 */
  push32(0x101c6dcfu); f_101c5350();
  /* 101c6dcf call 0x101c5b30 */
  push32(0x101c6dd4u); f_101c5b30();
  /* 101c6dd4 pop edi */
  EDI = (pop32());
  /* 101c6dd5 pop esi */
  ESI = (pop32());
  /* 101c6dd6 ret  */
  ESPCHK(0x101c6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x101c6de0 (279 bytes, 62 insns) [1 switch table(s)] */
void f_101c6de0(void) {
  FTRACE(0x101c6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6de0 call 0x101c2720 */
  push32(0x101c6de5u); f_101c2720();
  /* 101c6de5 mov dword ptr [0x101d5ea8], eax */
  w32((uint32_t)(0x101d5ea8), (EAX));
  /* 101c6dea call 0x101c2700 */
  push32(0x101c6defu); f_101c2700();
  /* 101c6def mov dword ptr [0x101d62b8], eax */
  w32((uint32_t)(0x101d62b8), (EAX));
  /* 101c6df4 call 0x101c2710 */
  push32(0x101c6df9u); f_101c2710();
  /* 101c6df9 mov dword ptr [0x101d37e8], eax */
  w32((uint32_t)(0x101d37e8), (EAX));
  /* 101c6dfe call 0x101c30e0 */
  push32(0x101c6e03u); f_101c30e0();
  /* 101c6e03 push 0x101cf114 */
  push32((uint32_t)(0x101cf114u));
  /* 101c6e08 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c6e0a call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c6e10u);
  /* 101c6e10 call 0x101c66d0 */
  push32(0x101c6e15u); f_101c66d0();
  /* 101c6e15 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c6e17 push 0x101cf244 */
  push32((uint32_t)(0x101cf244u));
  /* 101c6e1c call 0x101c27a0 */
  push32(0x101c6e21u); f_101c27a0();
  /* 101c6e21 mov eax, dword ptr [0x101d5ea8] */
  EAX = (r32((uint32_t)(0x101d5ea8)));
  /* 101c6e26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6e29 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6e2c ja 0x101c6ef2 */
  if ((!C.cf&&!C.zf)) goto L_101c6ef2;
  /* 101c6e32 jmp dword ptr [eax*4 + 0x101c6ef8] */
  switch (EAX) {
    case 0: goto L_101c6e39;
    case 1: goto L_101c6eb5;
    case 2: goto L_101c6ebc;
    case 3: goto L_101c6ebc;
    case 4: goto L_101c6ebc;
    case 5: goto L_101c6e39;
    default: x86_unimpl("switch@0x101c6e32 out of table"); return;
  }
L_101c6e39:;
  /* 101c6e39 cmp dword ptr [0x101d37e8], 3 */
  { uint32_t _a=(r32((uint32_t)(0x101d37e8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6e40 jne 0x101c6e72 */
  if (!C.zf) goto L_101c6e72;
  /* 101c6e42 push 0x101cf160 */
  push32((uint32_t)(0x101cf160u));
  /* 101c6e47 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c6e49 call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c6e4fu);
  /* 101c6e4f push 0x101cf16c */
  push32((uint32_t)(0x101cf16cu));
  /* 101c6e54 call 0x101c27c0 */
  push32(0x101c6e59u); f_101c27c0();
  /* 101c6e59 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c6e5b push 0x101cf41c */
  push32((uint32_t)(0x101cf41cu));
  /* 101c6e60 call 0x101c27a0 */
  push32(0x101c6e65u); f_101c27a0();
  /* 101c6e65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6e68 call 0x101c6ce0 */
  push32(0x101c6e6du); f_101c6ce0();
  /* 101c6e6d jmp 0x101c6ef2 */
  goto L_101c6ef2;
L_101c6e72:;
  /* 101c6e72 push 0x101cf114 */
  push32((uint32_t)(0x101cf114u));
  /* 101c6e77 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c6e79 call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c6e7fu);
  /* 101c6e7f push 0x101d64e8 */
  push32((uint32_t)(0x101d64e8u));
  /* 101c6e84 call 0x101c27c0 */
  push32(0x101c6e89u); f_101c27c0();
  /* 101c6e89 mov eax, dword ptr [0x101d37e8] */
  EAX = (r32((uint32_t)(0x101d37e8)));
  /* 101c6e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6e93 jne 0x101c6e9f */
  if (!C.zf) goto L_101c6e9f;
  /* 101c6e95 mov dword ptr [0x101cf248], 4 */
  w32((uint32_t)(0x101cf248), (0x4u));
L_101c6e9f:;
  /* 101c6e9f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c6ea1 push 0x101cf244 */
  push32((uint32_t)(0x101cf244u));
  /* 101c6ea6 call 0x101c27a0 */
  push32(0x101c6eabu); f_101c27a0();
  /* 101c6eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6eae call 0x101c6c80 */
  push32(0x101c6eb3u); f_101c6c80();
  /* 101c6eb3 jmp 0x101c6ef2 */
  goto L_101c6ef2;
L_101c6eb5:;
  /* 101c6eb5 call 0x101c4480 */
  push32(0x101c6ebau); f_101c4480();
  /* 101c6eba jmp 0x101c6ef2 */
  goto L_101c6ef2;
L_101c6ebc:;
  /* 101c6ebc push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101c6ec1 call dword ptr [0x101d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6478))), 0x101c6ec7u);
  /* 101c6ec7 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101c6ecc call dword ptr [0x101d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d647c))), 0x101c6ed2u);
  /* 101c6ed2 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101c6ed7 call dword ptr [0x101d6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6480))), 0x101c6eddu);
  /* 101c6edd push 0x101cf07c */
  push32((uint32_t)(0x101cf07cu));
  /* 101c6ee2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c6ee4 call dword ptr [0x101d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d645c))), 0x101c6eeau);
  /* 101c6eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6eed call 0x101c3400 */
  push32(0x101c6ef2u); f_101c3400();
L_101c6ef2:;
  /* 101c6ef2 jmp 0x101c3260 */
  f_101c3260(); return;
}

/* FUN_10006f10 @ 0x101c6f10 (82 bytes, 32 insns) */
void f_101c6f10(void) {
  FTRACE(0x101c6f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6f10 push ebp */
  push32((uint32_t)(EBP));
  /* 101c6f11 mov ebp, esp */
  EBP = (ESP);
  /* 101c6f13 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c6f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c6f19 push esi */
  push32((uint32_t)(ESI));
  /* 101c6f1a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 101c6f1d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101c6f20 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c6f23 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 101c6f2a push eax */
  push32((uint32_t)(EAX));
  /* 101c6f2b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101c6f2e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c6f31 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 101c6f38 push eax */
  push32((uint32_t)(EAX));
  /* 101c6f39 call 0x101c729c */
  push32(0x101c6f3eu); f_101c729c();
  /* 101c6f3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6f41 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 101c6f44 mov esi, eax */
  ESI = (EAX);
  /* 101c6f46 js 0x101c6f50 */
  if (C.sf) goto L_101c6f50;
  /* 101c6f48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101c6f4b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101c6f4e jmp 0x101c6f5d */
  goto L_101c6f5d;
L_101c6f50:;
  /* 101c6f50 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101c6f53 push eax */
  push32((uint32_t)(EAX));
  /* 101c6f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c6f56 call 0x101c7184 */
  push32(0x101c6f5bu); f_101c7184();
  /* 101c6f5b pop ecx */
  ECX = (pop32());
  /* 101c6f5c pop ecx */
  ECX = (pop32());
L_101c6f5d:;
  /* 101c6f5d mov eax, esi */
  EAX = (ESI);
  /* 101c6f5f pop esi */
  ESI = (pop32());
  /* 101c6f60 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c6f61 ret  */
  ESPCHK(0x101c6f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f62 @ 0x101c6f62 (23 bytes, 6 insns) */
void f_101c6f62(void) {
  FTRACE(0x101c6f62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6f62 call 0x101c6f7a */
  push32(0x101c6f67u); f_101c6f7a();
  /* 101c6f67 call 0x101c7af6 */
  push32(0x101c6f6cu); f_101c7af6();
  /* 101c6f6c mov dword ptr [0x101d65b0], eax */
  w32((uint32_t)(0x101d65b0), (EAX));
  /* 101c6f71 call 0x101c7aa6 */
  push32(0x101c6f76u); f_101c7aa6();
  /* 101c6f76 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 101c6f78 ret  */
  ESPCHK(0x101c6f62u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f7a @ 0x101c6f7a (56 bytes, 8 insns) */
void f_101c6f7a(void) {
  FTRACE(0x101c6f7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6f7a mov eax, 0x101c7ecf */
  EAX = (0x101c7ecfu);
  /* 101c6f7f mov dword ptr [0x101d05e4], 0x101c7b79 */
  w32((uint32_t)(0x101d05e4), (0x101c7b79u));
  /* 101c6f89 mov dword ptr [0x101d05e0], eax */
  w32((uint32_t)(0x101d05e0), (EAX));
  /* 101c6f8e mov dword ptr [0x101d05e8], 0x101c7bdf */
  w32((uint32_t)(0x101d05e8), (0x101c7bdfu));
  /* 101c6f98 mov dword ptr [0x101d05ec], 0x101c7b1f */
  w32((uint32_t)(0x101d05ec), (0x101c7b1fu));
  /* 101c6fa2 mov dword ptr [0x101d05f0], 0x101c7bc7 */
  w32((uint32_t)(0x101d05f0), (0x101c7bc7u));
  /* 101c6fac mov dword ptr [0x101d05f4], eax */
  w32((uint32_t)(0x101d05f4), (EAX));
  /* 101c6fb1 ret  */
  ESPCHK(0x101c6f7au, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x101c6fb4 (39 bytes, 16 insns) */
void f_101c6fb4(void) {
  FTRACE(0x101c6fb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6fb4 push ebp */
  push32((uint32_t)(EBP));
  /* 101c6fb5 mov ebp, esp */
  EBP = (ESP);
  /* 101c6fb7 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c6fba wait  */
  /* wait (no observable integer/reg state) */
  /* 101c6fbb fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 101c6fbe wait  */
  /* wait (no observable integer/reg state) */
  /* 101c6fbf mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 101c6fc3 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101c6fc6 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 101c6fca fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 101c6fcd fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 101c6fd0 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 101c6fd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c6fd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c6fd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c6fda ret  */
  ESPCHK(0x101c6fb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fdb @ 0x101c6fdb (217 bytes, 57 insns) */
void f_101c6fdb(void) {
  FTRACE(0x101c6fdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c6fdb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c6fdf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c6fe2 jne 0x101c7070 */
  if (!C.zf) goto L_101c7070;
  /* 101c6fe8 call dword ptr [0x101ce014] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce014))), 0x101c6feeu);
  /* 101c6fee push 1 */
  push32((uint32_t)(0x1u));
  /* 101c6ff0 mov dword ptr [0x101d65cc], eax */
  w32((uint32_t)(0x101d65cc), (EAX));
  /* 101c6ff5 call 0x101c89ac */
  push32(0x101c6ffau); f_101c89ac();
  /* 101c6ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c6ffc pop ecx */
  ECX = (pop32());
  /* 101c6ffd je 0x101c703b */
  if (C.zf) goto L_101c703b;
  /* 101c6fff mov eax, dword ptr [0x101d65cc] */
  EAX = (r32((uint32_t)(0x101d65cc)));
  /* 101c7004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c7006 mov cl, byte ptr [0x101d65cd] */
  CL = (r8((uint32_t)(0x101d65cd)));
  /* 101c700c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c7011 shr dword ptr [0x101d65cc], 0x10 */
  w32((uint32_t)(0x101d65cc), (sh_shr((uint32_t)(r32((uint32_t)(0x101d65cc))), (0x10u)&0x1f, 32)));
  /* 101c7018 mov dword ptr [0x101d65d4], eax */
  w32((uint32_t)(0x101d65d4), (EAX));
  /* 101c701d mov dword ptr [0x101d65d8], ecx */
  w32((uint32_t)(0x101d65d8), (ECX));
  /* 101c7023 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101c7026 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7028 mov dword ptr [0x101d65d0], eax */
  w32((uint32_t)(0x101d65d0), (EAX));
  /* 101c702d call 0x101c8063 */
  push32(0x101c7032u); f_101c8063();
  /* 101c7032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7034 jne 0x101c703f */
  if (!C.zf) goto L_101c703f;
  /* 101c7036 call 0x101c8a09 */
  push32(0x101c703bu); f_101c8a09();
L_101c703b:;
  /* 101c703b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c703d jmp 0x101c70b1 */
  goto L_101c70b1;
L_101c703f:;
  /* 101c703f call dword ptr [0x101ce010] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce010))), 0x101c7045u);
  /* 101c7045 mov dword ptr [0x101d7cb4], eax */
  w32((uint32_t)(0x101d7cb4), (EAX));
  /* 101c704a call 0x101c8705 */
  push32(0x101c704fu); f_101c8705();
  /* 101c704f mov dword ptr [0x101d65b8], eax */
  w32((uint32_t)(0x101d65b8), (EAX));
  /* 101c7054 call 0x101c81ef */
  push32(0x101c7059u); f_101c81ef();
  /* 101c7059 call 0x101c84b8 */
  push32(0x101c705eu); f_101c84b8();
  /* 101c705e call 0x101c83ff */
  push32(0x101c7063u); f_101c83ff();
  /* 101c7063 call 0x101c7f45 */
  push32(0x101c7068u); f_101c7f45();
  /* 101c7068 inc dword ptr [0x101d65b4] */
  { uint32_t _r=(r32((uint32_t)(0x101d65b4)))+1; w32((uint32_t)(0x101d65b4), (_r)); fl_inc(_r,32); }
  /* 101c706e jmp 0x101c70ae */
  goto L_101c70ae;
L_101c7070:;
  /* 101c7070 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c7072 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7074 jne 0x101c70a2 */
  if (!C.zf) goto L_101c70a2;
  /* 101c7076 cmp dword ptr [0x101d65b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101d65b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c707c jle 0x101c703b */
  if ((C.zf||C.sf!=C.of)) goto L_101c703b;
  /* 101c707e dec dword ptr [0x101d65b4] */
  { uint32_t _r=(r32((uint32_t)(0x101d65b4)))-1; w32((uint32_t)(0x101d65b4), (_r)); fl_dec(_r,32); }
  /* 101c7084 cmp dword ptr [0x101d6604], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101d6604))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c708a jne 0x101c7091 */
  if (!C.zf) goto L_101c7091;
  /* 101c708c call 0x101c7f83 */
  push32(0x101c7091u); f_101c7f83();
L_101c7091:;
  /* 101c7091 call 0x101c83ab */
  push32(0x101c7096u); f_101c83ab();
  /* 101c7096 call 0x101c80b7 */
  push32(0x101c709bu); f_101c80b7();
  /* 101c709b call 0x101c8a09 */
  push32(0x101c70a0u); f_101c8a09();
  /* 101c70a0 jmp 0x101c70ae */
  goto L_101c70ae;
L_101c70a2:;
  /* 101c70a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c70a5 jne 0x101c70ae */
  if (!C.zf) goto L_101c70ae;
  /* 101c70a7 push ecx */
  push32((uint32_t)(ECX));
  /* 101c70a8 call 0x101c814f */
  push32(0x101c70adu); f_101c814f();
  /* 101c70ad pop ecx */
  ECX = (pop32());
L_101c70ae:;
  /* 101c70ae push 1 */
  push32((uint32_t)(0x1u));
  /* 101c70b0 pop eax */
  EAX = (pop32());
L_101c70b1:;
  /* 101c70b1 ret 0xc */
  ESPCHK(0x101c6fdbu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x101c70b4 (157 bytes, 73 insns) */
void f_101c70b4(void) {
  FTRACE(0x101c70b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c70b4 push ebp */
  push32((uint32_t)(EBP));
  /* 101c70b5 mov ebp, esp */
  EBP = (ESP);
  /* 101c70b7 push ebx */
  push32((uint32_t)(EBX));
  /* 101c70b8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c70bb push esi */
  push32((uint32_t)(ESI));
  /* 101c70bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c70bf push edi */
  push32((uint32_t)(EDI));
  /* 101c70c0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c70c3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c70c5 jne 0x101c70d0 */
  if (!C.zf) goto L_101c70d0;
  /* 101c70c7 cmp dword ptr [0x101d65b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d65b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c70ce jmp 0x101c70f6 */
  goto L_101c70f6;
L_101c70d0:;
  /* 101c70d0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c70d3 je 0x101c70da */
  if (C.zf) goto L_101c70da;
  /* 101c70d5 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c70d8 jne 0x101c70fc */
  if (!C.zf) goto L_101c70fc;
L_101c70da:;
  /* 101c70da mov eax, dword ptr [0x101d7cb8] */
  EAX = (r32((uint32_t)(0x101d7cb8)));
  /* 101c70df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c70e1 je 0x101c70ec */
  if (C.zf) goto L_101c70ec;
  /* 101c70e3 push edi */
  push32((uint32_t)(EDI));
  /* 101c70e4 push esi */
  push32((uint32_t)(ESI));
  /* 101c70e5 push ebx */
  push32((uint32_t)(EBX));
  /* 101c70e6 call eax */
  call_ind((uint32_t)(EAX), 0x101c70e8u);
  /* 101c70e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c70ea je 0x101c70f8 */
  if (C.zf) goto L_101c70f8;
L_101c70ec:;
  /* 101c70ec push edi */
  push32((uint32_t)(EDI));
  /* 101c70ed push esi */
  push32((uint32_t)(ESI));
  /* 101c70ee push ebx */
  push32((uint32_t)(EBX));
  /* 101c70ef call 0x101c6fdb */
  push32(0x101c70f4u); f_101c6fdb();
  /* 101c70f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_101c70f6:;
  /* 101c70f6 jne 0x101c70fc */
  if (!C.zf) goto L_101c70fc;
L_101c70f8:;
  /* 101c70f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c70fa jmp 0x101c714a */
  goto L_101c714a;
L_101c70fc:;
  /* 101c70fc push edi */
  push32((uint32_t)(EDI));
  /* 101c70fd push esi */
  push32((uint32_t)(ESI));
  /* 101c70fe push ebx */
  push32((uint32_t)(EBX));
  /* 101c70ff call 0x101c2890 */
  push32(0x101c7104u); f_101c2890();
  /* 101c7104 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7107 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c710a jne 0x101c7118 */
  if (!C.zf) goto L_101c7118;
  /* 101c710c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c710e jne 0x101c7147 */
  if (!C.zf) goto L_101c7147;
  /* 101c7110 push edi */
  push32((uint32_t)(EDI));
  /* 101c7111 push eax */
  push32((uint32_t)(EAX));
  /* 101c7112 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7113 call 0x101c6fdb */
  push32(0x101c7118u); f_101c6fdb();
L_101c7118:;
  /* 101c7118 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c711a je 0x101c7121 */
  if (C.zf) goto L_101c7121;
  /* 101c711c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c711f jne 0x101c7147 */
  if (!C.zf) goto L_101c7147;
L_101c7121:;
  /* 101c7121 push edi */
  push32((uint32_t)(EDI));
  /* 101c7122 push esi */
  push32((uint32_t)(ESI));
  /* 101c7123 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7124 call 0x101c6fdb */
  push32(0x101c7129u); f_101c6fdb();
  /* 101c7129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c712b jne 0x101c7130 */
  if (!C.zf) goto L_101c7130;
  /* 101c712d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_101c7130:;
  /* 101c7130 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7134 je 0x101c7147 */
  if (C.zf) goto L_101c7147;
  /* 101c7136 mov eax, dword ptr [0x101d7cb8] */
  EAX = (r32((uint32_t)(0x101d7cb8)));
  /* 101c713b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c713d je 0x101c7147 */
  if (C.zf) goto L_101c7147;
  /* 101c713f push edi */
  push32((uint32_t)(EDI));
  /* 101c7140 push esi */
  push32((uint32_t)(ESI));
  /* 101c7141 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7142 call eax */
  call_ind((uint32_t)(EAX), 0x101c7144u);
  /* 101c7144 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101c7147:;
  /* 101c7147 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101c714a:;
  /* 101c714a pop edi */
  EDI = (pop32());
  /* 101c714b pop esi */
  ESI = (pop32());
  /* 101c714c pop ebx */
  EBX = (pop32());
  /* 101c714d pop ebp */
  EBP = (pop32());
  /* 101c714e ret 0xc */
  ESPCHK(0x101c70b4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101c7151 (48 bytes, 15 insns) */
void f_101c7151(void) {
  FTRACE(0x101c7151u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7151 mov eax, dword ptr [0x101d65c0] */
  EAX = (r32((uint32_t)(0x101d65c0)));
  /* 101c7156 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7159 je 0x101c7168 */
  if (C.zf) goto L_101c7168;
  /* 101c715b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c715d jne 0x101c716d */
  if (!C.zf) goto L_101c716d;
  /* 101c715f cmp dword ptr [0x101d65c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d65c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7166 jne 0x101c716d */
  if (!C.zf) goto L_101c716d;
L_101c7168:;
  /* 101c7168 call 0x101c8ab1 */
  push32(0x101c716du); f_101c8ab1();
L_101c716d:;
  /* 101c716d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101c7171 call 0x101c8aea */
  push32(0x101c7176u); f_101c8aea();
  /* 101c7176 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101c717b call dword ptr [0x101d05d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d05d4))), 0x101c7181u);
  /* 101c7181 pop ecx */
  ECX = (pop32());
  /* 101c7182 pop ecx */
  ECX = (pop32());
  /* 101c7183 ret  */
  ESPCHK(0x101c7151u, _esp0);
  ESP += 4; return;
}

/* FUN_10007184 @ 0x101c7184 (280 bytes, 106 insns) */
void f_101c7184(void) {
  FTRACE(0x101c7184u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7184 push ebp */
  push32((uint32_t)(EBP));
  /* 101c7185 mov ebp, esp */
  EBP = (ESP);
  /* 101c7187 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7188 push esi */
  push32((uint32_t)(ESI));
  /* 101c7189 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c718c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101c718f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101c7192 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101c7194 je 0x101c7290 */
  if (C.zf) goto L_101c7290;
  /* 101c719a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101c719c jne 0x101c7290 */
  if (!C.zf) goto L_101c7290;
  /* 101c71a2 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101c71a4 je 0x101c71bc */
  if (C.zf) goto L_101c71bc;
  /* 101c71a6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101c71aa test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 101c71ac je 0x101c7290 */
  if (C.zf) goto L_101c7290;
  /* 101c71b2 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 101c71b5 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 101c71b7 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101c71b9 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101c71bc:;
  /* 101c71bc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101c71bf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101c71c3 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101c71c7 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 101c71c9 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 101c71cb test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 101c71cf mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101c71d2 jne 0x101c71f6 */
  if (!C.zf) goto L_101c71f6;
  /* 101c71d4 cmp esi, 0x101d06d8 */
  { uint32_t _a=(ESI),_b=(0x101d06d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c71da je 0x101c71e4 */
  if (C.zf) goto L_101c71e4;
  /* 101c71dc cmp esi, 0x101d06f8 */
  { uint32_t _a=(ESI),_b=(0x101d06f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c71e2 jne 0x101c71ef */
  if (!C.zf) goto L_101c71ef;
L_101c71e4:;
  /* 101c71e4 push ebx */
  push32((uint32_t)(EBX));
  /* 101c71e5 call 0x101c8f49 */
  push32(0x101c71eau); f_101c8f49();
  /* 101c71ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c71ec pop ecx */
  ECX = (pop32());
  /* 101c71ed jne 0x101c71f6 */
  if (!C.zf) goto L_101c71f6;
L_101c71ef:;
  /* 101c71ef push esi */
  push32((uint32_t)(ESI));
  /* 101c71f0 call 0x101c8f05 */
  push32(0x101c71f5u); f_101c8f05();
  /* 101c71f5 pop ecx */
  ECX = (pop32());
L_101c71f6:;
  /* 101c71f6 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 101c71fc push edi */
  push32((uint32_t)(EDI));
  /* 101c71fd je 0x101c7266 */
  if (C.zf) goto L_101c7266;
  /* 101c71ff mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101c7202 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101c7204 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7206 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101c7209 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101c720b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 101c720e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101c720f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c7211 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101c7214 jle 0x101c7226 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7226;
  /* 101c7216 push edi */
  push32((uint32_t)(EDI));
  /* 101c7217 push eax */
  push32((uint32_t)(EAX));
  /* 101c7218 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7219 call 0x101c8d15 */
  push32(0x101c721eu); f_101c8d15();
  /* 101c721e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7221 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c7224 jmp 0x101c725c */
  goto L_101c725c;
L_101c7226:;
  /* 101c7226 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7229 je 0x101c7244 */
  if (C.zf) goto L_101c7244;
  /* 101c722b mov ecx, ebx */
  ECX = (EBX);
  /* 101c722d mov eax, ebx */
  EAX = (EBX);
  /* 101c722f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c7232 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c7235 mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c723c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c723f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101c7242 jmp 0x101c7249 */
  goto L_101c7249;
L_101c7244:;
  /* 101c7244 mov eax, 0x101d0600 */
  EAX = (0x101d0600u);
L_101c7249:;
  /* 101c7249 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101c724d je 0x101c725c */
  if (C.zf) goto L_101c725c;
  /* 101c724f push 2 */
  push32((uint32_t)(0x2u));
  /* 101c7251 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7253 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7254 call 0x101c8c3d */
  push32(0x101c7259u); f_101c8c3d();
  /* 101c7259 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c725c:;
  /* 101c725c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101c725f mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101c7262 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101c7264 jmp 0x101c727a */
  goto L_101c727a;
L_101c7266:;
  /* 101c7266 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7268 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101c726b pop edi */
  EDI = (pop32());
  /* 101c726c push edi */
  push32((uint32_t)(EDI));
  /* 101c726d push eax */
  push32((uint32_t)(EAX));
  /* 101c726e push ebx */
  push32((uint32_t)(EBX));
  /* 101c726f call 0x101c8d15 */
  push32(0x101c7274u); f_101c8d15();
  /* 101c7274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7277 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101c727a:;
  /* 101c727a cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c727d pop edi */
  EDI = (pop32());
  /* 101c727e je 0x101c7286 */
  if (C.zf) goto L_101c7286;
  /* 101c7280 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101c7284 jmp 0x101c7295 */
  goto L_101c7295;
L_101c7286:;
  /* 101c7286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7289 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c728e jmp 0x101c7298 */
  goto L_101c7298;
L_101c7290:;
  /* 101c7290 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101c7292 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101c7295:;
  /* 101c7295 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101c7298:;
  /* 101c7298 pop esi */
  ESI = (pop32());
  /* 101c7299 pop ebx */
  EBX = (pop32());
  /* 101c729a pop ebp */
  EBP = (pop32());
  /* 101c729b ret  */
  ESPCHK(0x101c7184u, _esp0);
  ESP += 4; return;
}

/* FUN_1000729c @ 0x101c729c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101c729c(void) {
  FTRACE(0x101c729cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c729c push ebp */
  push32((uint32_t)(EBP));
  /* 101c729d mov ebp, esp */
  EBP = (ESP);
  /* 101c729f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c72a5 push ebx */
  push32((uint32_t)(EBX));
  /* 101c72a6 push esi */
  push32((uint32_t)(ESI));
  /* 101c72a7 push edi */
  push32((uint32_t)(EDI));
  /* 101c72a8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c72ab xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c72ad mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101c72af inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c72b0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c72b2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101c72b5 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 101c72b8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101c72bb je 0x101c79b5 */
  if (C.zf) goto L_101c79b5;
  /* 101c72c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101c72c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c72c6 jmp 0x101c72d0 */
  goto L_101c72d0;
L_101c72c8:;
  /* 101c72c8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101c72cb mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 101c72ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101c72d0:;
  /* 101c72d0 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c72d3 jl 0x101c79b5 */
  if ((C.sf!=C.of)) goto L_101c79b5;
  /* 101c72d9 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c72dc jl 0x101c72f1 */
  if ((C.sf!=C.of)) goto L_101c72f1;
  /* 101c72de cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c72e1 jg 0x101c72f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c72f1;
  /* 101c72e3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c72e6 mov al, byte ptr [eax + 0x101ce0c8] */
  AL = (r8((uint32_t)(EAX + 0x101ce0c8)));
  /* 101c72ec and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 101c72ef jmp 0x101c72f3 */
  goto L_101c72f3;
L_101c72f1:;
  /* 101c72f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c72f3:;
  /* 101c72f3 movsx eax, byte ptr [esi + eax*8 + 0x101ce0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x101ce0e8))));
  /* 101c72fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101c72fe cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7301 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101c7304 ja 0x101c79a4 */
  if ((!C.cf&&!C.zf)) goto L_101c79a4;
  /* 101c730a jmp dword ptr [eax*4 + 0x101c79bd] */
  switch (EAX) {
    case 0: goto L_101c743b;
    case 1: goto L_101c7311;
    case 2: goto L_101c732c;
    case 3: goto L_101c7378;
    case 4: goto L_101c73af;
    case 5: goto L_101c73b7;
    case 6: goto L_101c73ec;
    case 7: goto L_101c747f;
    default: x86_unimpl("switch@0x101c730a out of table"); return;
  }
L_101c7311:;
  /* 101c7311 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101c7315 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 101c7318 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 101c731b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 101c731e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 101c7321 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101c7324 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101c7327 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c732c:;
  /* 101c732c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c732f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7332 je 0x101c736f */
  if (C.zf) goto L_101c736f;
  /* 101c7334 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7337 je 0x101c7366 */
  if (C.zf) goto L_101c7366;
  /* 101c7339 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c733c je 0x101c735d */
  if (C.zf) goto L_101c735d;
  /* 101c733e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c733f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c7340 je 0x101c7354 */
  if (C.zf) goto L_101c7354;
  /* 101c7342 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7345 jne 0x101c79a4 */
  if (!C.zf) goto L_101c79a4;
  /* 101c734b or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c734f jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7354:;
  /* 101c7354 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c7358 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c735d:;
  /* 101c735d or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c7361 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7366:;
  /* 101c7366 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101c736a jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c736f:;
  /* 101c736f or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c7373 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7378:;
  /* 101c7378 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c737b jne 0x101c73a0 */
  if (!C.zf) goto L_101c73a0;
  /* 101c737d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c7380 push eax */
  push32((uint32_t)(EAX));
  /* 101c7381 call 0x101c7a7b */
  push32(0x101c7386u); f_101c7a7b();
  /* 101c7386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7388 pop ecx */
  ECX = (pop32());
  /* 101c7389 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101c738c jge 0x101c79a4 */
  if ((C.sf==C.of)) goto L_101c79a4;
  /* 101c7392 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c7396 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101c7398:;
  /* 101c7398 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101c739b jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c73a0:;
  /* 101c73a0 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101c73a3 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c73a6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101c73a9 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101c73ad jmp 0x101c7398 */
  goto L_101c7398;
L_101c73af:;
  /* 101c73af mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101c73b2 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c73b7:;
  /* 101c73b7 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c73ba jne 0x101c73da */
  if (!C.zf) goto L_101c73da;
  /* 101c73bc lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c73bf push eax */
  push32((uint32_t)(EAX));
  /* 101c73c0 call 0x101c7a7b */
  push32(0x101c73c5u); f_101c7a7b();
  /* 101c73c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c73c7 pop ecx */
  ECX = (pop32());
  /* 101c73c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101c73cb jge 0x101c79a4 */
  if ((C.sf==C.of)) goto L_101c79a4;
  /* 101c73d1 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101c73d5 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c73da:;
  /* 101c73da lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 101c73dd movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c73e0 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101c73e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101c73e7 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c73ec:;
  /* 101c73ec cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c73ef je 0x101c741f */
  if (C.zf) goto L_101c741f;
  /* 101c73f1 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c73f4 je 0x101c7416 */
  if (C.zf) goto L_101c7416;
  /* 101c73f6 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c73f9 je 0x101c740d */
  if (C.zf) goto L_101c740d;
  /* 101c73fb cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c73fe jne 0x101c79a4 */
  if (!C.zf) goto L_101c79a4;
  /* 101c7404 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c7408 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c740d:;
  /* 101c740d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c7411 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7416:;
  /* 101c7416 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c741a jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c741f:;
  /* 101c741f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7422 jne 0x101c7438 */
  if (!C.zf) goto L_101c7438;
  /* 101c7424 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7428 jne 0x101c7438 */
  if (!C.zf) goto L_101c7438;
  /* 101c742a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c742b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c742c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c7430 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101c7433 jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7438:;
  /* 101c7438 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_101c743b:;
  /* 101c743b mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101c7441 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101c7444 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101c7447 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101c744c je 0x101c7467 */
  if (C.zf) goto L_101c7467;
  /* 101c744e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c7451 push eax */
  push32((uint32_t)(EAX));
  /* 101c7452 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7455 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c7458 push eax */
  push32((uint32_t)(EAX));
  /* 101c7459 call 0x101c79dd */
  push32(0x101c745eu); f_101c79dd();
  /* 101c745e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101c7460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7463 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c7464 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101c7467:;
  /* 101c7467 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c746a push eax */
  push32((uint32_t)(EAX));
  /* 101c746b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c746e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c7471 push eax */
  push32((uint32_t)(EAX));
  /* 101c7472 call 0x101c79dd */
  push32(0x101c7477u); f_101c79dd();
  /* 101c7477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c747a jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c747f:;
  /* 101c747f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c7482 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7485 jg 0x101c76a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c76a7;
  /* 101c748b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c748e jge 0x101c752a */
  if ((C.sf==C.of)) goto L_101c752a;
  /* 101c7494 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7497 jg 0x101c7588 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7588;
  /* 101c749d je 0x101c771b */
  if (C.zf) goto L_101c771b;
  /* 101c74a3 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c74a6 je 0x101c754b */
  if (C.zf) goto L_101c754b;
  /* 101c74ac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c74ad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c74ae je 0x101c7520 */
  if (C.zf) goto L_101c7520;
  /* 101c74b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c74b1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c74b2 je 0x101c7520 */
  if (C.zf) goto L_101c7520;
  /* 101c74b4 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c74b7 jne 0x101c78a6 */
  if (!C.zf) goto L_101c78a6;
  /* 101c74bd test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101c74c3 jne 0x101c74c9 */
  if (!C.zf) goto L_101c74c9;
  /* 101c74c5 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101c74c9:;
  /* 101c74c9 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101c74cc cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c74cf jne 0x101c74d6 */
  if (!C.zf) goto L_101c74d6;
  /* 101c74d1 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_101c74d6:;
  /* 101c74d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c74d9 push eax */
  push32((uint32_t)(EAX));
  /* 101c74da call 0x101c7a7b */
  push32(0x101c74dfu); f_101c7a7b();
  /* 101c74df test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101c74e5 pop ecx */
  ECX = (pop32());
  /* 101c74e6 mov ecx, eax */
  ECX = (EAX);
  /* 101c74e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c74eb je 0x101c76ef */
  if (C.zf) goto L_101c76ef;
  /* 101c74f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c74f3 jne 0x101c74fe */
  if (!C.zf) goto L_101c74fe;
  /* 101c74f5 mov ecx, dword ptr [0x101d05dc] */
  ECX = (r32((uint32_t)(0x101d05dc)));
  /* 101c74fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101c74fe:;
  /* 101c74fe mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101c7505 mov eax, ecx */
  EAX = (ECX);
L_101c7507:;
  /* 101c7507 mov edx, esi */
  EDX = (ESI);
  /* 101c7509 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c750a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c750c je 0x101c76e6 */
  if (C.zf) goto L_101c76e6;
  /* 101c7512 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c7516 je 0x101c76e6 */
  if (C.zf) goto L_101c76e6;
  /* 101c751c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c751d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c751e jmp 0x101c7507 */
  goto L_101c7507;
L_101c7520:;
  /* 101c7520 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 101c7527 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_101c752a:;
  /* 101c752a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c752e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 101c7534 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7536 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101c7539 jge 0x101c760e */
  if ((C.sf==C.of)) goto L_101c760e;
  /* 101c753f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101c7546 jmp 0x101c761c */
  goto L_101c761c;
L_101c754b:;
  /* 101c754b test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101c7551 jne 0x101c7557 */
  if (!C.zf) goto L_101c7557;
  /* 101c7553 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101c7557:;
  /* 101c7557 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101c755d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c7560 push eax */
  push32((uint32_t)(EAX));
  /* 101c7561 je 0x101c759e */
  if (C.zf) goto L_101c759e;
  /* 101c7563 call 0x101c7a98 */
  push32(0x101c7568u); f_101c7a98();
  /* 101c7568 push eax */
  push32((uint32_t)(EAX));
  /* 101c7569 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101c756f push eax */
  push32((uint32_t)(EAX));
  /* 101c7570 call 0x101c915b */
  push32(0x101c7575u); f_101c915b();
  /* 101c7575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7578 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101c757b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c757d jge 0x101c75b1 */
  if ((C.sf==C.of)) goto L_101c75b1;
  /* 101c757f mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101c7586 jmp 0x101c75b1 */
  goto L_101c75b1;
L_101c7588:;
  /* 101c7588 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c758b je 0x101c75bf */
  if (C.zf) goto L_101c75bf;
  /* 101c758d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7590 je 0x101c7557 */
  if (C.zf) goto L_101c7557;
  /* 101c7592 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c7593 je 0x101c7781 */
  if (C.zf) goto L_101c7781;
  /* 101c7599 jmp 0x101c78a6 */
  goto L_101c78a6;
L_101c759e:;
  /* 101c759e call 0x101c7a7b */
  push32(0x101c75a3u); f_101c7a7b();
  /* 101c75a3 pop ecx */
  ECX = (pop32());
  /* 101c75a4 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 101c75aa mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_101c75b1:;
  /* 101c75b1 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101c75b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101c75ba jmp 0x101c78a6 */
  goto L_101c78a6;
L_101c75bf:;
  /* 101c75bf lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c75c2 push eax */
  push32((uint32_t)(EAX));
  /* 101c75c3 call 0x101c7a7b */
  push32(0x101c75c8u); f_101c7a7b();
  /* 101c75c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c75ca pop ecx */
  ECX = (pop32());
  /* 101c75cb je 0x101c7600 */
  if (C.zf) goto L_101c7600;
  /* 101c75cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101c75d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c75d2 je 0x101c7600 */
  if (C.zf) goto L_101c7600;
  /* 101c75d4 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 101c75d8 je 0x101c75f1 */
  if (C.zf) goto L_101c75f1;
  /* 101c75da movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101c75dd shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101c75df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c75e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101c75e5 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101c75ec jmp 0x101c78a6 */
  goto L_101c78a6;
L_101c75f1:;
  /* 101c75f1 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 101c75f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c75f8 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101c75fb jmp 0x101c78a3 */
  goto L_101c78a3;
L_101c7600:;
  /* 101c7600 mov eax, dword ptr [0x101d05d8] */
  EAX = (r32((uint32_t)(0x101d05d8)));
  /* 101c7605 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101c7608 push eax */
  push32((uint32_t)(EAX));
  /* 101c7609 jmp 0x101c769c */
  goto L_101c769c;
L_101c760e:;
  /* 101c760e jne 0x101c761c */
  if (!C.zf) goto L_101c761c;
  /* 101c7610 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7613 jne 0x101c761c */
  if (!C.zf) goto L_101c761c;
  /* 101c7615 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_101c761c:;
  /* 101c761c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c761f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 101c7622 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7625 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 101c7628 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 101c762b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 101c762e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 101c7631 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101c7634 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 101c7637 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101c763a push eax */
  push32((uint32_t)(EAX));
  /* 101c763b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101c7641 push eax */
  push32((uint32_t)(EAX));
  /* 101c7642 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101c7645 push eax */
  push32((uint32_t)(EAX));
  /* 101c7646 call dword ptr [0x101d05e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d05e0))), 0x101c764cu);
  /* 101c764c mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101c764f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7652 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101c7658 je 0x101c766e */
  if (C.zf) goto L_101c766e;
  /* 101c765a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c765e jne 0x101c766e */
  if (!C.zf) goto L_101c766e;
  /* 101c7660 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101c7666 push eax */
  push32((uint32_t)(EAX));
  /* 101c7667 call dword ptr [0x101d05ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d05ec))), 0x101c766du);
  /* 101c766d pop ecx */
  ECX = (pop32());
L_101c766e:;
  /* 101c766e cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7671 jne 0x101c7685 */
  if (!C.zf) goto L_101c7685;
  /* 101c7673 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c7675 jne 0x101c7685 */
  if (!C.zf) goto L_101c7685;
  /* 101c7677 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101c767d push eax */
  push32((uint32_t)(EAX));
  /* 101c767e call dword ptr [0x101d05e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d05e4))), 0x101c7684u);
  /* 101c7684 pop ecx */
  ECX = (pop32());
L_101c7685:;
  /* 101c7685 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c768c jne 0x101c769b */
  if (!C.zf) goto L_101c769b;
  /* 101c768e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c7692 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101c7698 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101c769b:;
  /* 101c769b push edi */
  push32((uint32_t)(EDI));
L_101c769c:;
  /* 101c769c call 0x101c90e0 */
  push32(0x101c76a1u); f_101c90e0();
  /* 101c76a1 pop ecx */
  ECX = (pop32());
  /* 101c76a2 jmp 0x101c78a3 */
  goto L_101c78a3;
L_101c76a7:;
  /* 101c76a7 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c76aa je 0x101c7781 */
  if (C.zf) goto L_101c7781;
  /* 101c76b0 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c76b3 je 0x101c7757 */
  if (C.zf) goto L_101c7757;
  /* 101c76b9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c76ba je 0x101c7744 */
  if (C.zf) goto L_101c7744;
  /* 101c76c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c76c1 je 0x101c7714 */
  if (C.zf) goto L_101c7714;
  /* 101c76c3 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c76c6 je 0x101c74c9 */
  if (C.zf) goto L_101c74c9;
  /* 101c76cc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c76cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c76ce je 0x101c7785 */
  if (C.zf) goto L_101c7785;
  /* 101c76d4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c76d7 jne 0x101c78a6 */
  if (!C.zf) goto L_101c78a6;
  /* 101c76dd mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 101c76e4 jmp 0x101c7722 */
  goto L_101c7722;
L_101c76e6:;
  /* 101c76e6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c76e8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101c76ea jmp 0x101c78a3 */
  goto L_101c78a3;
L_101c76ef:;
  /* 101c76ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c76f1 jne 0x101c76fc */
  if (!C.zf) goto L_101c76fc;
  /* 101c76f3 mov ecx, dword ptr [0x101d05d8] */
  ECX = (r32((uint32_t)(0x101d05d8)));
  /* 101c76f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101c76fc:;
  /* 101c76fc mov eax, ecx */
  EAX = (ECX);
L_101c76fe:;
  /* 101c76fe mov edx, esi */
  EDX = (ESI);
  /* 101c7700 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c7701 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c7703 je 0x101c770d */
  if (C.zf) goto L_101c770d;
  /* 101c7705 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7708 je 0x101c770d */
  if (C.zf) goto L_101c770d;
  /* 101c770a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c770b jmp 0x101c76fe */
  goto L_101c76fe;
L_101c770d:;
  /* 101c770d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c770f jmp 0x101c78a3 */
  goto L_101c78a3;
L_101c7714:;
  /* 101c7714 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_101c771b:;
  /* 101c771b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_101c7722:;
  /* 101c7722 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101c7726 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 101c772d je 0x101c778c */
  if (C.zf) goto L_101c778c;
  /* 101c772f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 101c7732 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 101c7736 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101c7738 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 101c773f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101c7742 jmp 0x101c778c */
  goto L_101c778c;
L_101c7744:;
  /* 101c7744 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101c7748 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101c774f je 0x101c778c */
  if (C.zf) goto L_101c778c;
  /* 101c7751 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c7755 jmp 0x101c778c */
  goto L_101c778c;
L_101c7757:;
  /* 101c7757 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c775a push eax */
  push32((uint32_t)(EAX));
  /* 101c775b call 0x101c7a7b */
  push32(0x101c7760u); f_101c7a7b();
  /* 101c7760 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101c7764 pop ecx */
  ECX = (pop32());
  /* 101c7765 je 0x101c7770 */
  if (C.zf) goto L_101c7770;
  /* 101c7767 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101c776b mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101c776e jmp 0x101c7775 */
  goto L_101c7775;
L_101c7770:;
  /* 101c7770 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101c7773 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101c7775:;
  /* 101c7775 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101c777c jmp 0x101c79a4 */
  goto L_101c79a4;
L_101c7781:;
  /* 101c7781 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101c7785:;
  /* 101c7785 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101c778c:;
  /* 101c778c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101c7790 je 0x101c779e */
  if (C.zf) goto L_101c779e;
  /* 101c7792 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c7795 push eax */
  push32((uint32_t)(EAX));
  /* 101c7796 call 0x101c7a88 */
  push32(0x101c779bu); f_101c7a88();
  /* 101c779b pop ecx */
  ECX = (pop32());
  /* 101c779c jmp 0x101c77df */
  goto L_101c77df;
L_101c779e:;
  /* 101c779e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101c77a2 je 0x101c77c5 */
  if (C.zf) goto L_101c77c5;
  /* 101c77a4 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101c77a8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c77ab push eax */
  push32((uint32_t)(EAX));
  /* 101c77ac je 0x101c77ba */
  if (C.zf) goto L_101c77ba;
  /* 101c77ae call 0x101c7a7b */
  push32(0x101c77b3u); f_101c7a7b();
  /* 101c77b3 pop ecx */
  ECX = (pop32());
  /* 101c77b4 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_101c77b7:;
  /* 101c77b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c77b8 jmp 0x101c77df */
  goto L_101c77df;
L_101c77ba:;
  /* 101c77ba call 0x101c7a7b */
  push32(0x101c77bfu); f_101c7a7b();
  /* 101c77bf pop ecx */
  ECX = (pop32());
  /* 101c77c0 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 101c77c3 jmp 0x101c77b7 */
  goto L_101c77b7;
L_101c77c5:;
  /* 101c77c5 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101c77c9 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c77cc push eax */
  push32((uint32_t)(EAX));
  /* 101c77cd je 0x101c77d7 */
  if (C.zf) goto L_101c77d7;
  /* 101c77cf call 0x101c7a7b */
  push32(0x101c77d4u); f_101c7a7b();
  /* 101c77d4 pop ecx */
  ECX = (pop32());
  /* 101c77d5 jmp 0x101c77b7 */
  goto L_101c77b7;
L_101c77d7:;
  /* 101c77d7 call 0x101c7a7b */
  push32(0x101c77dcu); f_101c7a7b();
  /* 101c77dc pop ecx */
  ECX = (pop32());
  /* 101c77dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101c77df:;
  /* 101c77df test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101c77e3 je 0x101c7800 */
  if (C.zf) goto L_101c7800;
  /* 101c77e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c77e7 jg 0x101c7800 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7800;
  /* 101c77e9 jl 0x101c77ef */
  if ((C.sf!=C.of)) goto L_101c77ef;
  /* 101c77eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c77ed jae 0x101c7800 */
  if (!C.cf) goto L_101c7800;
L_101c77ef:;
  /* 101c77ef neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c77f1 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c77f4 mov esi, eax */
  ESI = (EAX);
  /* 101c77f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c77f8 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c77fc mov edi, edx */
  EDI = (EDX);
  /* 101c77fe jmp 0x101c7804 */
  goto L_101c7804;
L_101c7800:;
  /* 101c7800 mov esi, eax */
  ESI = (EAX);
  /* 101c7802 mov edi, edx */
  EDI = (EDX);
L_101c7804:;
  /* 101c7804 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101c7808 jne 0x101c780d */
  if (!C.zf) goto L_101c780d;
  /* 101c780a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_101c780d:;
  /* 101c780d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7811 jge 0x101c781c */
  if ((C.sf==C.of)) goto L_101c781c;
  /* 101c7813 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 101c781a jmp 0x101c7820 */
  goto L_101c7820;
L_101c781c:;
  /* 101c781c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101c7820:;
  /* 101c7820 mov eax, esi */
  EAX = (ESI);
  /* 101c7822 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101c7824 jne 0x101c782a */
  if (!C.zf) goto L_101c782a;
  /* 101c7826 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_101c782a:;
  /* 101c782a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101c782d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101c7830:;
  /* 101c7830 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101c7833 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 101c7836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7838 jg 0x101c7840 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7840;
  /* 101c783a mov eax, esi */
  EAX = (ESI);
  /* 101c783c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101c783e je 0x101c787b */
  if (C.zf) goto L_101c787b;
L_101c7840:;
  /* 101c7840 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c7843 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c7844 push edx */
  push32((uint32_t)(EDX));
  /* 101c7845 push eax */
  push32((uint32_t)(EAX));
  /* 101c7846 push edi */
  push32((uint32_t)(EDI));
  /* 101c7847 push esi */
  push32((uint32_t)(ESI));
  /* 101c7848 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101c784b mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101c784e call 0x101c9290 */
  push32(0x101c7853u); f_101c9290();
  /* 101c7853 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101c7856 mov ebx, eax */
  EBX = (EAX);
  /* 101c7858 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c785b push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101c785e push edi */
  push32((uint32_t)(EDI));
  /* 101c785f push esi */
  push32((uint32_t)(ESI));
  /* 101c7860 call 0x101c9220 */
  push32(0x101c7865u); f_101c9220();
  /* 101c7865 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7868 mov esi, eax */
  ESI = (EAX);
  /* 101c786a mov edi, edx */
  EDI = (EDX);
  /* 101c786c jle 0x101c7871 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7871;
  /* 101c786e add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101c7871:;
  /* 101c7871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c7874 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101c7877 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101c7879 jmp 0x101c7830 */
  goto L_101c7830;
L_101c787b:;
  /* 101c787b lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101c787e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7881 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101c7884 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101c7888 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101c788b je 0x101c78a6 */
  if (C.zf) goto L_101c78a6;
  /* 101c788d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c7890 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7893 jne 0x101c7899 */
  if (!C.zf) goto L_101c7899;
  /* 101c7895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7897 jne 0x101c78a6 */
  if (!C.zf) goto L_101c78a6;
L_101c7899:;
  /* 101c7899 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101c789c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c789d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c78a0 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101c78a3:;
  /* 101c78a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_101c78a6:;
  /* 101c78a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c78aa jne 0x101c79a4 */
  if (!C.zf) goto L_101c79a4;
  /* 101c78b0 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c78b3 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 101c78b6 je 0x101c78de */
  if (C.zf) goto L_101c78de;
  /* 101c78b8 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 101c78bb je 0x101c78c3 */
  if (C.zf) goto L_101c78c3;
  /* 101c78bd mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 101c78c1 jmp 0x101c78d7 */
  goto L_101c78d7;
L_101c78c3:;
  /* 101c78c3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101c78c6 je 0x101c78ce */
  if (C.zf) goto L_101c78ce;
  /* 101c78c8 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 101c78cc jmp 0x101c78d7 */
  goto L_101c78d7;
L_101c78ce:;
  /* 101c78ce test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101c78d1 je 0x101c78de */
  if (C.zf) goto L_101c78de;
  /* 101c78d3 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_101c78d7:;
  /* 101c78d7 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_101c78de:;
  /* 101c78de mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 101c78e1 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c78e4 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c78e7 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 101c78ea jne 0x101c78fe */
  if (!C.zf) goto L_101c78fe;
  /* 101c78ec lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c78ef push eax */
  push32((uint32_t)(EAX));
  /* 101c78f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c78f3 push esi */
  push32((uint32_t)(ESI));
  /* 101c78f4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c78f6 call 0x101c7a12 */
  push32(0x101c78fbu); f_101c7a12();
  /* 101c78fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c78fe:;
  /* 101c78fe lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c7901 push eax */
  push32((uint32_t)(EAX));
  /* 101c7902 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 101c7905 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7908 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101c790b push eax */
  push32((uint32_t)(EAX));
  /* 101c790c call 0x101c7a43 */
  push32(0x101c7911u); f_101c7a43();
  /* 101c7911 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7914 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101c7917 je 0x101c7930 */
  if (C.zf) goto L_101c7930;
  /* 101c7919 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101c791c jne 0x101c7930 */
  if (!C.zf) goto L_101c7930;
  /* 101c791e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c7921 push eax */
  push32((uint32_t)(EAX));
  /* 101c7922 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7925 push esi */
  push32((uint32_t)(ESI));
  /* 101c7926 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101c7928 call 0x101c7a12 */
  push32(0x101c792du); f_101c7a12();
  /* 101c792d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c7930:;
  /* 101c7930 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7934 je 0x101c7977 */
  if (C.zf) goto L_101c7977;
  /* 101c7936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c793a jle 0x101c7977 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7977;
  /* 101c793c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c793f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c7942 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101c7945:;
  /* 101c7945 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101c7948 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c7949 push eax */
  push32((uint32_t)(EAX));
  /* 101c794a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101c794d push eax */
  push32((uint32_t)(EAX));
  /* 101c794e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c794f call 0x101c915b */
  push32(0x101c7954u); f_101c915b();
  /* 101c7954 pop ecx */
  ECX = (pop32());
  /* 101c7955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7957 pop ecx */
  ECX = (pop32());
  /* 101c7958 jle 0x101c798c */
  if ((C.zf||C.sf!=C.of)) goto L_101c798c;
  /* 101c795a lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101c795d push ecx */
  push32((uint32_t)(ECX));
  /* 101c795e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7961 push eax */
  push32((uint32_t)(EAX));
  /* 101c7962 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101c7965 push eax */
  push32((uint32_t)(EAX));
  /* 101c7966 call 0x101c7a43 */
  push32(0x101c796bu); f_101c7a43();
  /* 101c796b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c796e mov eax, edi */
  EAX = (EDI);
  /* 101c7970 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c7971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7973 jne 0x101c7945 */
  if (!C.zf) goto L_101c7945;
  /* 101c7975 jmp 0x101c798c */
  goto L_101c798c;
L_101c7977:;
  /* 101c7977 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c797a push eax */
  push32((uint32_t)(EAX));
  /* 101c797b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c797e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101c7981 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101c7984 call 0x101c7a43 */
  push32(0x101c7989u); f_101c7a43();
  /* 101c7989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c798c:;
  /* 101c798c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101c7990 je 0x101c79a4 */
  if (C.zf) goto L_101c79a4;
  /* 101c7992 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101c7995 push eax */
  push32((uint32_t)(EAX));
  /* 101c7996 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7999 push esi */
  push32((uint32_t)(ESI));
  /* 101c799a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c799c call 0x101c7a12 */
  push32(0x101c79a1u); f_101c7a12();
  /* 101c79a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c79a4:;
  /* 101c79a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c79a7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101c79a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c79aa test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101c79ac mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101c79af jne 0x101c72c8 */
  if (!C.zf) goto L_101c72c8;
L_101c79b5:;
  /* 101c79b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101c79b8 pop edi */
  EDI = (pop32());
  /* 101c79b9 pop esi */
  ESI = (pop32());
  /* 101c79ba pop ebx */
  EBX = (pop32());
  /* 101c79bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c79bc ret  */
  ESPCHK(0x101c729cu, _esp0);
  ESP += 4; return;
}

/* FUN_100079dd @ 0x101c79dd (53 bytes, 25 insns) */
void f_101c79dd(void) {
  FTRACE(0x101c79ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c79dd push ebp */
  push32((uint32_t)(EBP));
  /* 101c79de mov ebp, esp */
  EBP = (ESP);
  /* 101c79e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c79e3 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 101c79e6 js 0x101c79f6 */
  if (C.sf) goto L_101c79f6;
  /* 101c79e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101c79ea mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 101c79ed mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 101c79ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c79f1 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101c79f4 jmp 0x101c7a01 */
  goto L_101c7a01;
L_101c79f6:;
  /* 101c79f6 push ecx */
  push32((uint32_t)(ECX));
  /* 101c79f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c79fa call 0x101c7184 */
  push32(0x101c79ffu); f_101c7184();
  /* 101c79ff pop ecx */
  ECX = (pop32());
  /* 101c7a00 pop ecx */
  ECX = (pop32());
L_101c7a01:;
  /* 101c7a01 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7a07 jne 0x101c7a0e */
  if (!C.zf) goto L_101c7a0e;
  /* 101c7a09 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101c7a0c pop ebp */
  EBP = (pop32());
  /* 101c7a0d ret  */
  ESPCHK(0x101c79ddu, _esp0);
  ESP += 4; return;
L_101c7a0e:;
  /* 101c7a0e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101c7a10 pop ebp */
  EBP = (pop32());
  /* 101c7a11 ret  */
  ESPCHK(0x101c79ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a12 @ 0x101c7a12 (49 bytes, 22 insns) */
void f_101c7a12(void) {
  FTRACE(0x101c7a12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7a12 push esi */
  push32((uint32_t)(ESI));
  /* 101c7a13 push edi */
  push32((uint32_t)(EDI));
  /* 101c7a14 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101c7a18 mov eax, edi */
  EAX = (EDI);
  /* 101c7a1a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c7a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7a1d jle 0x101c7a40 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7a40;
  /* 101c7a1f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_101c7a23:;
  /* 101c7a23 push esi */
  push32((uint32_t)(ESI));
  /* 101c7a24 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c7a28 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101c7a2c call 0x101c79dd */
  push32(0x101c7a31u); f_101c79dd();
  /* 101c7a31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7a34 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7a37 je 0x101c7a40 */
  if (C.zf) goto L_101c7a40;
  /* 101c7a39 mov eax, edi */
  EAX = (EDI);
  /* 101c7a3b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c7a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7a3e jg 0x101c7a23 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7a23;
L_101c7a40:;
  /* 101c7a40 pop edi */
  EDI = (pop32());
  /* 101c7a41 pop esi */
  ESI = (pop32());
  /* 101c7a42 ret  */
  ESPCHK(0x101c7a12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a43 @ 0x101c7a43 (56 bytes, 27 insns) */
void f_101c7a43(void) {
  FTRACE(0x101c7a43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7a43 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7a44 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c7a48 mov eax, ebx */
  EAX = (EBX);
  /* 101c7a4a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c7a4b push esi */
  push32((uint32_t)(ESI));
  /* 101c7a4c push edi */
  push32((uint32_t)(EDI));
  /* 101c7a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7a4f jle 0x101c7a77 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7a77;
  /* 101c7a51 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101c7a55 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101c7a59:;
  /* 101c7a59 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101c7a5c push edi */
  push32((uint32_t)(EDI));
  /* 101c7a5d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c7a5e push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101c7a62 push eax */
  push32((uint32_t)(EAX));
  /* 101c7a63 call 0x101c79dd */
  push32(0x101c7a68u); f_101c79dd();
  /* 101c7a68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7a6b cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7a6e je 0x101c7a77 */
  if (C.zf) goto L_101c7a77;
  /* 101c7a70 mov eax, ebx */
  EAX = (EBX);
  /* 101c7a72 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c7a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7a75 jg 0x101c7a59 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7a59;
L_101c7a77:;
  /* 101c7a77 pop edi */
  EDI = (pop32());
  /* 101c7a78 pop esi */
  ESI = (pop32());
  /* 101c7a79 pop ebx */
  EBX = (pop32());
  /* 101c7a7a ret  */
  ESPCHK(0x101c7a43u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a7b @ 0x101c7a7b (13 bytes, 5 insns) */
void f_101c7a7b(void) {
  FTRACE(0x101c7a7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7a7b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c7a7f add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c7a82 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101c7a84 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101c7a87 ret  */
  ESPCHK(0x101c7a7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a88 @ 0x101c7a88 (16 bytes, 6 insns) */
void f_101c7a88(void) {
  FTRACE(0x101c7a88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7a88 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c7a8c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c7a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101c7a91 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101c7a94 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101c7a97 ret  */
  ESPCHK(0x101c7a88u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a98 @ 0x101c7a98 (14 bytes, 5 insns) */
void f_101c7a98(void) {
  FTRACE(0x101c7a98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7a98 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c7a9c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c7a9f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101c7aa1 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 101c7aa5 ret  */
  ESPCHK(0x101c7a98u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa6 @ 0x101c7aa6 (18 bytes, 6 insns) */
void f_101c7aa6(void) {
  FTRACE(0x101c7aa6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7aa6 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 101c7aab push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 101c7ab0 call 0x101c933a */
  push32(0x101c7ab5u); f_101c933a();
  /* 101c7ab5 pop ecx */
  ECX = (pop32());
  /* 101c7ab6 pop ecx */
  ECX = (pop32());
  /* 101c7ab7 ret  */
  ESPCHK(0x101c7aa6u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ab8 @ 0x101c7ab8 (62 bytes, 24 insns) */
void f_101c7ab8(void) {
  FTRACE(0x101c7ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7ab8 push ebp */
  push32((uint32_t)(EBP));
  /* 101c7ab9 mov ebp, esp */
  EBP = (ESP);
  /* 101c7abb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7abe fld qword ptr [0x101ce170] */
  fpu_push(rf64((uint32_t)(0x101ce170)));
  /* 101c7ac4 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7ac7 fld qword ptr [0x101ce168] */
  fpu_push(rf64((uint32_t)(0x101ce168)));
  /* 101c7acd fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7ad0 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 101c7ad3 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 101c7ad6 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 101c7ad9 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 101c7adc fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7adf fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 101c7ae2 fcomp qword ptr [0x101ce160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x101ce160)));
  (void)fpu_pop();
  /* 101c7ae8 fnstsw ax */
  AX = fpu_status();
  /* 101c7aea sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 101c7aeb jbe 0x101c7af2 */
  if ((C.cf||C.zf)) goto L_101c7af2;
  /* 101c7aed push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7aef pop eax */
  EAX = (pop32());
  /* 101c7af0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7af1 ret  */
  ESPCHK(0x101c7ab8u, _esp0);
  ESP += 4; return;
L_101c7af2:;
  /* 101c7af2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7af4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7af5 ret  */
  ESPCHK(0x101c7ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af6 @ 0x101c7af6 (41 bytes, 13 insns) */
void f_101c7af6(void) {
  FTRACE(0x101c7af6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7af6 push 0x101ce194 */
  push32((uint32_t)(0x101ce194u));
  /* 101c7afb call dword ptr [0x101ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce004))), 0x101c7b01u);
  /* 101c7b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7b03 je 0x101c7b1a */
  if (C.zf) goto L_101c7b1a;
  /* 101c7b05 push 0x101ce178 */
  push32((uint32_t)(0x101ce178u));
  /* 101c7b0a push eax */
  push32((uint32_t)(EAX));
  /* 101c7b0b call dword ptr [0x101ce088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce088))), 0x101c7b11u);
  /* 101c7b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7b13 je 0x101c7b1a */
  if (C.zf) goto L_101c7b1a;
  /* 101c7b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7b17 call eax */
  call_ind((uint32_t)(EAX), 0x101c7b19u);
  /* 101c7b19 ret  */
  ESPCHK(0x101c7af6u, _esp0);
  ESP += 4; return;
L_101c7b1a:;
  /* 101c7b1a jmp 0x101c7ab8 */
  f_101c7ab8(); return;
}

/* FUN_10007b1f @ 0x101c7b1f (90 bytes, 37 insns) */
void f_101c7b1f(void) {
  FTRACE(0x101c7b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7b1f push esi */
  push32((uint32_t)(ESI));
  /* 101c7b20 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c7b24 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101c7b27 push eax */
  push32((uint32_t)(EAX));
  /* 101c7b28 call 0x101c94e0 */
  push32(0x101c7b2du); f_101c94e0();
  /* 101c7b2d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7b30 pop ecx */
  ECX = (pop32());
  /* 101c7b31 je 0x101c7b5f */
  if (C.zf) goto L_101c7b5f;
L_101c7b33:;
  /* 101c7b33 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c7b34 cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7b3b jle 0x101c7b4c */
  if ((C.zf||C.sf!=C.of)) goto L_101c7b4c;
  /* 101c7b3d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101c7b40 push 4 */
  push32((uint32_t)(0x4u));
  /* 101c7b42 push eax */
  push32((uint32_t)(EAX));
  /* 101c7b43 call 0x101c946b */
  push32(0x101c7b48u); f_101c946b();
  /* 101c7b48 pop ecx */
  ECX = (pop32());
  /* 101c7b49 pop ecx */
  ECX = (pop32());
  /* 101c7b4a jmp 0x101c7b5b */
  goto L_101c7b5b;
L_101c7b4c:;
  /* 101c7b4c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101c7b4f mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101c7b55 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101c7b58 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101c7b5b:;
  /* 101c7b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7b5d jne 0x101c7b33 */
  if (!C.zf) goto L_101c7b33;
L_101c7b5f:;
  /* 101c7b5f mov cl, byte ptr [0x101d0b54] */
  CL = (r8((uint32_t)(0x101d0b54)));
  /* 101c7b65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c7b67 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101c7b69 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c7b6a:;
  /* 101c7b6a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101c7b6c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 101c7b6e mov al, cl */
  AL = (CL);
  /* 101c7b70 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101c7b72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c7b73 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101c7b75 jne 0x101c7b6a */
  if (!C.zf) goto L_101c7b6a;
  /* 101c7b77 pop esi */
  ESI = (pop32());
  /* 101c7b78 ret  */
  ESPCHK(0x101c7b1fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x101c7bdf (62 bytes, 29 insns) */
void f_101c7bdf(void) {
  FTRACE(0x101c7bdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7bdf push ebp */
  push32((uint32_t)(EBP));
  /* 101c7be0 mov ebp, esp */
  EBP = (ESP);
  /* 101c7be2 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7be3 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7be4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7be8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101c7beb je 0x101c7c08 */
  if (C.zf) goto L_101c7c08;
  /* 101c7bed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101c7bf0 push eax */
  push32((uint32_t)(EAX));
  /* 101c7bf1 call 0x101c99ac */
  push32(0x101c7bf6u); f_101c99ac();
  /* 101c7bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c7bf9 pop ecx */
  ECX = (pop32());
  /* 101c7bfa pop ecx */
  ECX = (pop32());
  /* 101c7bfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c7bfe mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101c7c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c7c03 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101c7c06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7c07 ret  */
  ESPCHK(0x101c7bdfu, _esp0);
  ESP += 4; return;
L_101c7c08:;
  /* 101c7c08 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101c7c0b push eax */
  push32((uint32_t)(EAX));
  /* 101c7c0c call 0x101c99d9 */
  push32(0x101c7c11u); f_101c99d9();
  /* 101c7c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c7c14 pop ecx */
  ECX = (pop32());
  /* 101c7c15 pop ecx */
  ECX = (pop32());
  /* 101c7c16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7c19 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101c7c1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7c1c ret  */
  ESPCHK(0x101c7bdfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c1d @ 0x101c7c1d (97 bytes, 42 insns) */
void f_101c7c1d(void) {
  FTRACE(0x101c7c1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7c1d push ebp */
  push32((uint32_t)(EBP));
  /* 101c7c1e mov ebp, esp */
  EBP = (ESP);
  /* 101c7c20 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7c23 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101c7c26 push esi */
  push32((uint32_t)(ESI));
  /* 101c7c27 push eax */
  push32((uint32_t)(EAX));
  /* 101c7c28 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7c2b push eax */
  push32((uint32_t)(EAX));
  /* 101c7c2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7c2f push ecx */
  push32((uint32_t)(ECX));
  /* 101c7c30 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7c31 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101c7c33 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7c36 call 0x101c9a7d */
  push32(0x101c7c3bu); f_101c9a7d();
  /* 101c7c3b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7c3e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7c41 push eax */
  push32((uint32_t)(EAX));
  /* 101c7c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c7c45 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 101c7c48 push eax */
  push32((uint32_t)(EAX));
  /* 101c7c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7c4b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7c4f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c7c52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c7c54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c7c56 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101c7c59 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7c5b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7c5d push ecx */
  push32((uint32_t)(ECX));
  /* 101c7c5e call 0x101c9a06 */
  push32(0x101c7c63u); f_101c9a06();
  /* 101c7c63 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7c68 push eax */
  push32((uint32_t)(EAX));
  /* 101c7c69 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101c7c6c push esi */
  push32((uint32_t)(ESI));
  /* 101c7c6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7c70 call 0x101c7c7e */
  push32(0x101c7c75u); f_101c7c7e();
  /* 101c7c75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c7c78 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7c7b pop esi */
  ESI = (pop32());
  /* 101c7c7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7c7d ret  */
  ESPCHK(0x101c7c1du, _esp0);
  ESP += 4; return;
}

/* FUN_10007c7e @ 0x101c7c7e (194 bytes, 91 insns) */
void f_101c7c7e(void) {
  FTRACE(0x101c7c7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7c7e push ebp */
  push32((uint32_t)(EBP));
  /* 101c7c7f mov ebp, esp */
  EBP = (ESP);
  /* 101c7c81 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7c82 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c7c84 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7c87 push esi */
  push32((uint32_t)(ESI));
  /* 101c7c88 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 101c7c8b push edi */
  push32((uint32_t)(EDI));
  /* 101c7c8c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7c8f je 0x101c7cac */
  if (C.zf) goto L_101c7cac;
  /* 101c7c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7c93 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7c96 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101c7c99 push eax */
  push32((uint32_t)(EAX));
  /* 101c7c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7c9c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7c9f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c7ca2 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7ca4 push eax */
  push32((uint32_t)(EAX));
  /* 101c7ca5 call 0x101c7f20 */
  push32(0x101c7caau); f_101c7f20();
  /* 101c7caa pop ecx */
  ECX = (pop32());
  /* 101c7cab pop ecx */
  ECX = (pop32());
L_101c7cac:;
  /* 101c7cac cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7caf mov eax, edi */
  EAX = (EDI);
  /* 101c7cb1 jne 0x101c7cb9 */
  if (!C.zf) goto L_101c7cb9;
  /* 101c7cb3 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 101c7cb6 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_101c7cb9:;
  /* 101c7cb9 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7cbc jle 0x101c7cd0 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7cd0;
  /* 101c7cbe mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101c7cc1 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101c7cc4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101c7cc6 mov eax, ecx */
  EAX = (ECX);
  /* 101c7cc8 mov cl, byte ptr [0x101d0b54] */
  CL = (r8((uint32_t)(0x101d0b54)));
  /* 101c7cce mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_101c7cd0:;
  /* 101c7cd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c7cd2 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7cd5 push 0x101ce1a8 */
  push32((uint32_t)(0x101ce1a8u));
  /* 101c7cda sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101c7cdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7cdf add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7ce3 call 0x101c9b90 */
  push32(0x101c7ce8u); f_101c9b90();
  /* 101c7ce8 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7ceb pop ecx */
  ECX = (pop32());
  /* 101c7cec pop ecx */
  ECX = (pop32());
  /* 101c7ced mov ecx, eax */
  ECX = (EAX);
  /* 101c7cef je 0x101c7cf4 */
  if (C.zf) goto L_101c7cf4;
  /* 101c7cf1 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_101c7cf4:;
  /* 101c7cf4 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101c7cf7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c7cf8 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7cfb je 0x101c7d39 */
  if (C.zf) goto L_101c7d39;
  /* 101c7cfd mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 101c7d00 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c7d01 jns 0x101c7d08 */
  if (!C.sf) goto L_101c7d08;
  /* 101c7d03 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c7d05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_101c7d08:;
  /* 101c7d08 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c7d09 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7d0c jl 0x101c7d1f */
  if ((C.sf!=C.of)) goto L_101c7d1f;
  /* 101c7d0e mov eax, ebx */
  EAX = (EBX);
  /* 101c7d10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101c7d12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c7d13 pop esi */
  ESI = (pop32());
  /* 101c7d14 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c7d16 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101c7d18 mov eax, ebx */
  EAX = (EBX);
  /* 101c7d1a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c7d1b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c7d1d mov ebx, edx */
  EBX = (EDX);
L_101c7d1f:;
  /* 101c7d1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c7d20 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7d23 jl 0x101c7d36 */
  if ((C.sf!=C.of)) goto L_101c7d36;
  /* 101c7d25 mov eax, ebx */
  EAX = (EBX);
  /* 101c7d27 push 0xa */
  push32((uint32_t)(0xau));
  /* 101c7d29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c7d2a pop esi */
  ESI = (pop32());
  /* 101c7d2b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c7d2d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101c7d2f mov eax, ebx */
  EAX = (EBX);
  /* 101c7d31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c7d32 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c7d34 mov ebx, edx */
  EBX = (EDX);
L_101c7d36:;
  /* 101c7d36 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_101c7d39:;
  /* 101c7d39 mov eax, edi */
  EAX = (EDI);
  /* 101c7d3b pop edi */
  EDI = (pop32());
  /* 101c7d3c pop esi */
  ESI = (pop32());
  /* 101c7d3d pop ebx */
  EBX = (pop32());
  /* 101c7d3e pop ebp */
  EBP = (pop32());
  /* 101c7d3f ret  */
  ESPCHK(0x101c7c7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x101c7d40 (85 bytes, 37 insns) */
void f_101c7d40(void) {
  FTRACE(0x101c7d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7d40 push ebp */
  push32((uint32_t)(EBP));
  /* 101c7d41 mov ebp, esp */
  EBP = (ESP);
  /* 101c7d43 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7d46 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101c7d49 push esi */
  push32((uint32_t)(ESI));
  /* 101c7d4a push eax */
  push32((uint32_t)(EAX));
  /* 101c7d4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7d4e push eax */
  push32((uint32_t)(EAX));
  /* 101c7d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7d52 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7d53 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7d54 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101c7d56 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7d59 call 0x101c9a7d */
  push32(0x101c7d5eu); f_101c9a7d();
  /* 101c7d5e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7d61 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7d64 push eax */
  push32((uint32_t)(EAX));
  /* 101c7d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c7d68 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7d6a push eax */
  push32((uint32_t)(EAX));
  /* 101c7d6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7d6d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7d71 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c7d74 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7d77 push eax */
  push32((uint32_t)(EAX));
  /* 101c7d78 call 0x101c9a06 */
  push32(0x101c7d7du); f_101c9a06();
  /* 101c7d7d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7d82 push eax */
  push32((uint32_t)(EAX));
  /* 101c7d83 push esi */
  push32((uint32_t)(ESI));
  /* 101c7d84 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7d87 call 0x101c7d95 */
  push32(0x101c7d8cu); f_101c7d95();
  /* 101c7d8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c7d8f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7d92 pop esi */
  ESI = (pop32());
  /* 101c7d93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7d94 ret  */
  ESPCHK(0x101c7d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d95 @ 0x101c7d95 (167 bytes, 73 insns) */
void f_101c7d95(void) {
  FTRACE(0x101c7d95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7d95 push ebp */
  push32((uint32_t)(EBP));
  /* 101c7d96 mov ebp, esp */
  EBP = (ESP);
  /* 101c7d98 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7d99 push esi */
  push32((uint32_t)(ESI));
  /* 101c7d9a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7d9d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7da0 push edi */
  push32((uint32_t)(EDI));
  /* 101c7da1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101c7da4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c7da5 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7da9 je 0x101c7dc5 */
  if (C.zf) goto L_101c7dc5;
  /* 101c7dab cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7dae jne 0x101c7dc5 */
  if (!C.zf) goto L_101c7dc5;
  /* 101c7db0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c7db2 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7db5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101c7db8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7dba add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7dbc mov eax, ecx */
  EAX = (ECX);
  /* 101c7dbe mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101c7dc1 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_101c7dc5:;
  /* 101c7dc5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7dc8 mov edi, ebx */
  EDI = (EBX);
  /* 101c7dca jne 0x101c7dd2 */
  if (!C.zf) goto L_101c7dd2;
  /* 101c7dcc mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 101c7dcf lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_101c7dd2:;
  /* 101c7dd2 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101c7dd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7dd7 jg 0x101c7de9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c7de9;
  /* 101c7dd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7ddb push edi */
  push32((uint32_t)(EDI));
  /* 101c7ddc call 0x101c7f20 */
  push32(0x101c7de1u); f_101c7f20();
  /* 101c7de1 pop ecx */
  ECX = (pop32());
  /* 101c7de2 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 101c7de5 pop ecx */
  ECX = (pop32());
  /* 101c7de6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c7de7 jmp 0x101c7deb */
  goto L_101c7deb;
L_101c7de9:;
  /* 101c7de9 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101c7deb:;
  /* 101c7deb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7def jle 0x101c7e35 */
  if ((C.zf||C.sf!=C.of)) goto L_101c7e35;
  /* 101c7df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7df3 push edi */
  push32((uint32_t)(EDI));
  /* 101c7df4 call 0x101c7f20 */
  push32(0x101c7df9u); f_101c7f20();
  /* 101c7df9 mov al, byte ptr [0x101d0b54] */
  AL = (r8((uint32_t)(0x101d0b54)));
  /* 101c7dfe pop ecx */
  ECX = (pop32());
  /* 101c7dff mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c7e01 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 101c7e04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c7e05 pop ecx */
  ECX = (pop32());
  /* 101c7e06 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c7e08 jge 0x101c7e35 */
  if ((C.sf==C.of)) goto L_101c7e35;
  /* 101c7e0a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c7e0e je 0x101c7e14 */
  if (C.zf) goto L_101c7e14;
  /* 101c7e10 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101c7e12 jmp 0x101c7e1b */
  goto L_101c7e1b;
L_101c7e14:;
  /* 101c7e14 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101c7e16 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7e19 jl 0x101c7e1e */
  if ((C.sf!=C.of)) goto L_101c7e1e;
L_101c7e1b:;
  /* 101c7e1b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_101c7e1e:;
  /* 101c7e1e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7e21 push edi */
  push32((uint32_t)(EDI));
  /* 101c7e22 call 0x101c7f20 */
  push32(0x101c7e27u); f_101c7f20();
  /* 101c7e27 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7e2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101c7e2c push edi */
  push32((uint32_t)(EDI));
  /* 101c7e2d call 0x101c9c80 */
  push32(0x101c7e32u); f_101c9c80();
  /* 101c7e32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c7e35:;
  /* 101c7e35 pop edi */
  EDI = (pop32());
  /* 101c7e36 mov eax, ebx */
  EAX = (EBX);
  /* 101c7e38 pop esi */
  ESI = (pop32());
  /* 101c7e39 pop ebx */
  EBX = (pop32());
  /* 101c7e3a pop ebp */
  EBP = (pop32());
  /* 101c7e3b ret  */
  ESPCHK(0x101c7d95u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e3c @ 0x101c7e3c (147 bytes, 66 insns) */
void f_101c7e3c(void) {
  FTRACE(0x101c7e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7e3c push ebp */
  push32((uint32_t)(EBP));
  /* 101c7e3d mov ebp, esp */
  EBP = (ESP);
  /* 101c7e3f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7e42 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7e43 push esi */
  push32((uint32_t)(ESI));
  /* 101c7e44 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101c7e47 push edi */
  push32((uint32_t)(EDI));
  /* 101c7e48 push eax */
  push32((uint32_t)(EAX));
  /* 101c7e49 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7e4c push eax */
  push32((uint32_t)(EAX));
  /* 101c7e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c7e50 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7e51 push ecx */
  push32((uint32_t)(ECX));
  /* 101c7e52 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101c7e54 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101c7e57 call 0x101c9a7d */
  push32(0x101c7e5cu); f_101c9a7d();
  /* 101c7e5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c7e5f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c7e62 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 101c7e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c7e67 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7e6b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c7e6e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7e71 mov edi, eax */
  EDI = (EAX);
  /* 101c7e73 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7e76 push eax */
  push32((uint32_t)(EAX));
  /* 101c7e77 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7e78 push edi */
  push32((uint32_t)(EDI));
  /* 101c7e79 call 0x101c9a06 */
  push32(0x101c7e7eu); f_101c9a06();
  /* 101c7e7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c7e81 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7e84 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c7e85 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7e87 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 101c7e8a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7e8d jl 0x101c7eb5 */
  if ((C.sf!=C.of)) goto L_101c7eb5;
  /* 101c7e8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7e91 jge 0x101c7eb5 */
  if ((C.sf==C.of)) goto L_101c7eb5;
  /* 101c7e93 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101c7e95 je 0x101c7ea1 */
  if (C.zf) goto L_101c7ea1;
L_101c7e97:;
  /* 101c7e97 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101c7e99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c7e9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c7e9c jne 0x101c7e97 */
  if (!C.zf) goto L_101c7e97;
  /* 101c7e9e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_101c7ea1:;
  /* 101c7ea1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7ea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7ea6 push eax */
  push32((uint32_t)(EAX));
  /* 101c7ea7 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7ea8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7eab call 0x101c7d95 */
  push32(0x101c7eb0u); f_101c7d95();
  /* 101c7eb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7eb3 jmp 0x101c7eca */
  goto L_101c7eca;
L_101c7eb5:;
  /* 101c7eb5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101c7eb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7eba push eax */
  push32((uint32_t)(EAX));
  /* 101c7ebb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101c7ebe push ebx */
  push32((uint32_t)(EBX));
  /* 101c7ebf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7ec2 call 0x101c7c7e */
  push32(0x101c7ec7u); f_101c7c7e();
  /* 101c7ec7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c7eca:;
  /* 101c7eca pop edi */
  EDI = (pop32());
  /* 101c7ecb pop esi */
  ESI = (pop32());
  /* 101c7ecc pop ebx */
  EBX = (pop32());
  /* 101c7ecd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c7ece ret  */
  ESPCHK(0x101c7e3cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x101c7ecf (81 bytes, 29 insns) */
void f_101c7ecf(void) {
  FTRACE(0x101c7ecfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7ecf push ebp */
  push32((uint32_t)(EBP));
  /* 101c7ed0 mov ebp, esp */
  EBP = (ESP);
  /* 101c7ed2 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7ed6 je 0x101c7f0a */
  if (C.zf) goto L_101c7f0a;
  /* 101c7ed8 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7edc je 0x101c7f0a */
  if (C.zf) goto L_101c7f0a;
  /* 101c7ede cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7ee2 jne 0x101c7ef7 */
  if (!C.zf) goto L_101c7ef7;
  /* 101c7ee4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101c7ee7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7eea push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7eed call 0x101c7d40 */
  push32(0x101c7ef2u); f_101c7d40();
  /* 101c7ef2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7ef5 pop ebp */
  EBP = (pop32());
  /* 101c7ef6 ret  */
  ESPCHK(0x101c7ecfu, _esp0);
  ESP += 4; return;
L_101c7ef7:;
  /* 101c7ef7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101c7efa push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101c7efd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7f00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7f03 call 0x101c7e3c */
  push32(0x101c7f08u); f_101c7e3c();
  /* 101c7f08 jmp 0x101c7f1b */
  goto L_101c7f1b;
L_101c7f0a:;
  /* 101c7f0a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101c7f0d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101c7f10 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c7f13 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c7f16 call 0x101c7c1d */
  push32(0x101c7f1bu); f_101c7c1d();
L_101c7f1b:;
  /* 101c7f1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f1e pop ebp */
  EBP = (pop32());
  /* 101c7f1f ret  */
  ESPCHK(0x101c7ecfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x101c7f20 (37 bytes, 18 insns) */
void f_101c7f20(void) {
  FTRACE(0x101c7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7f20 push edi */
  push32((uint32_t)(EDI));
  /* 101c7f21 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 101c7f25 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c7f27 je 0x101c7f43 */
  if (C.zf) goto L_101c7f43;
  /* 101c7f29 push esi */
  push32((uint32_t)(ESI));
  /* 101c7f2a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101c7f2e push esi */
  push32((uint32_t)(ESI));
  /* 101c7f2f call 0x101c90e0 */
  push32(0x101c7f34u); f_101c90e0();
  /* 101c7f34 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c7f35 push eax */
  push32((uint32_t)(EAX));
  /* 101c7f36 push esi */
  push32((uint32_t)(ESI));
  /* 101c7f37 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f39 push esi */
  push32((uint32_t)(ESI));
  /* 101c7f3a call 0x101c9ce0 */
  push32(0x101c7f3fu); f_101c9ce0();
  /* 101c7f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f42 pop esi */
  ESI = (pop32());
L_101c7f43:;
  /* 101c7f43 pop edi */
  EDI = (pop32());
  /* 101c7f44 ret  */
  ESPCHK(0x101c7f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f45 @ 0x101c7f45 (45 bytes, 12 insns) */
void f_101c7f45(void) {
  FTRACE(0x101c7f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7f45 mov eax, dword ptr [0x101d05c8] */
  EAX = (r32((uint32_t)(0x101d05c8)));
  /* 101c7f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7f4c je 0x101c7f50 */
  if (C.zf) goto L_101c7f50;
  /* 101c7f4e call eax */
  call_ind((uint32_t)(EAX), 0x101c7f50u);
L_101c7f50:;
  /* 101c7f50 push 0x101cf014 */
  push32((uint32_t)(0x101cf014u));
  /* 101c7f55 push 0x101cf008 */
  push32((uint32_t)(0x101cf008u));
  /* 101c7f5a call 0x101c8049 */
  push32(0x101c7f5fu); f_101c8049();
  /* 101c7f5f push 0x101cf004 */
  push32((uint32_t)(0x101cf004u));
  /* 101c7f64 push 0x101cf000 */
  push32((uint32_t)(0x101cf000u));
  /* 101c7f69 call 0x101c8049 */
  push32(0x101c7f6eu); f_101c8049();
  /* 101c7f6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f71 ret  */
  ESPCHK(0x101c7f45u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x101c7f72 (17 bytes, 6 insns) */
void f_101c7f72(void) {
  FTRACE(0x101c7f72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7f76 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101c7f7a call 0x101c7f92 */
  push32(0x101c7f7fu); f_101c7f92();
  /* 101c7f7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f82 ret  */
  ESPCHK(0x101c7f72u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f83 @ 0x101c7f83 (15 bytes, 6 insns) */
void f_101c7f83(void) {
  FTRACE(0x101c7f83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c7f89 call 0x101c7f92 */
  push32(0x101c7f8eu); f_101c7f92();
  /* 101c7f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c7f91 ret  */
  ESPCHK(0x101c7f83u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f92 @ 0x101c7f92 (163 bytes, 53 insns) */
void f_101c7f92(void) {
  FTRACE(0x101c7f92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c7f92 push edi */
  push32((uint32_t)(EDI));
  /* 101c7f93 call 0x101c8037 */
  push32(0x101c7f98u); f_101c8037();
  /* 101c7f98 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c7f9a pop edi */
  EDI = (pop32());
  /* 101c7f9b cmp dword ptr [0x101d6608], edi */
  { uint32_t _a=(r32((uint32_t)(0x101d6608))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7fa1 jne 0x101c7fb4 */
  if (!C.zf) goto L_101c7fb4;
  /* 101c7fa3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101c7fa7 call dword ptr [0x101ce020] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce020))), 0x101c7fadu);
  /* 101c7fad push eax */
  push32((uint32_t)(EAX));
  /* 101c7fae call dword ptr [0x101ce01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce01c))), 0x101c7fb4u);
L_101c7fb4:;
  /* 101c7fb4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 101c7fba mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c7fbe mov dword ptr [0x101d6604], edi */
  w32((uint32_t)(0x101d6604), (EDI));
  /* 101c7fc4 mov byte ptr [0x101d6600], bl */
  w8((uint32_t)(0x101d6600), (BL));
  /* 101c7fca jne 0x101c8008 */
  if (!C.zf) goto L_101c8008;
  /* 101c7fcc mov eax, dword ptr [0x101d7cb0] */
  EAX = (r32((uint32_t)(0x101d7cb0)));
  /* 101c7fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7fd3 je 0x101c7ff7 */
  if (C.zf) goto L_101c7ff7;
  /* 101c7fd5 mov ecx, dword ptr [0x101d7cac] */
  ECX = (r32((uint32_t)(0x101d7cac)));
  /* 101c7fdb push esi */
  push32((uint32_t)(ESI));
  /* 101c7fdc lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 101c7fdf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7fe1 jb 0x101c7ff6 */
  if (C.cf) goto L_101c7ff6;
L_101c7fe3:;
  /* 101c7fe3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101c7fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c7fe7 je 0x101c7feb */
  if (C.zf) goto L_101c7feb;
  /* 101c7fe9 call eax */
  call_ind((uint32_t)(EAX), 0x101c7febu);
L_101c7feb:;
  /* 101c7feb sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c7fee cmp esi, dword ptr [0x101d7cb0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d7cb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c7ff4 jae 0x101c7fe3 */
  if (!C.cf) goto L_101c7fe3;
L_101c7ff6:;
  /* 101c7ff6 pop esi */
  ESI = (pop32());
L_101c7ff7:;
  /* 101c7ff7 push 0x101cf020 */
  push32((uint32_t)(0x101cf020u));
  /* 101c7ffc push 0x101cf018 */
  push32((uint32_t)(0x101cf018u));
  /* 101c8001 call 0x101c8049 */
  push32(0x101c8006u); f_101c8049();
  /* 101c8006 pop ecx */
  ECX = (pop32());
  /* 101c8007 pop ecx */
  ECX = (pop32());
L_101c8008:;
  /* 101c8008 push 0x101cf028 */
  push32((uint32_t)(0x101cf028u));
  /* 101c800d push 0x101cf024 */
  push32((uint32_t)(0x101cf024u));
  /* 101c8012 call 0x101c8049 */
  push32(0x101c8017u); f_101c8049();
  /* 101c8017 pop ecx */
  ECX = (pop32());
  /* 101c8018 pop ecx */
  ECX = (pop32());
  /* 101c8019 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c801b pop ebx */
  EBX = (pop32());
  /* 101c801c je 0x101c8025 */
  if (C.zf) goto L_101c8025;
  /* 101c801e call 0x101c8040 */
  push32(0x101c8023u); f_101c8040();
  /* 101c8023 pop edi */
  EDI = (pop32());
  /* 101c8024 ret  */
  ESPCHK(0x101c7f92u, _esp0);
  ESP += 4; return;
L_101c8025:;
  /* 101c8025 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101c8029 mov dword ptr [0x101d6608], edi */
  w32((uint32_t)(0x101d6608), (EDI));
  /* 101c802f call dword ptr [0x101ce018] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce018))), 0x101c8035u);
  /* 101c8035 pop edi */
  EDI = (pop32());
  /* 101c8036 ret  */
  ESPCHK(0x101c7f92u, _esp0);
  ESP += 4; return;
}

/* FUN_10008037 @ 0x101c8037 (9 bytes, 4 insns) */
void f_101c8037(void) {
  FTRACE(0x101c8037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8037 push 0xd */
  push32((uint32_t)(0xdu));
  /* 101c8039 call 0x101ca0b3 */
  push32(0x101c803eu); f_101ca0b3();
  /* 101c803e pop ecx */
  ECX = (pop32());
  /* 101c803f ret  */
  ESPCHK(0x101c8037u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x101c8040 (9 bytes, 4 insns) */
void f_101c8040(void) {
  FTRACE(0x101c8040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8040 push 0xd */
  push32((uint32_t)(0xdu));
  /* 101c8042 call 0x101ca114 */
  push32(0x101c8047u); f_101ca114();
  /* 101c8047 pop ecx */
  ECX = (pop32());
  /* 101c8048 ret  */
  ESPCHK(0x101c8040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008049 @ 0x101c8049 (26 bytes, 12 insns) */
void f_101c8049(void) {
  FTRACE(0x101c8049u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8049 push esi */
  push32((uint32_t)(ESI));
  /* 101c804a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_101c804e:;
  /* 101c804e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8052 jae 0x101c8061 */
  if (!C.cf) goto L_101c8061;
  /* 101c8054 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101c8056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8058 je 0x101c805c */
  if (C.zf) goto L_101c805c;
  /* 101c805a call eax */
  call_ind((uint32_t)(EAX), 0x101c805cu);
L_101c805c:;
  /* 101c805c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c805f jmp 0x101c804e */
  goto L_101c804e;
L_101c8061:;
  /* 101c8061 pop esi */
  ESI = (pop32());
  /* 101c8062 ret  */
  ESPCHK(0x101c8049u, _esp0);
  ESP += 4; return;
}

/* FUN_10008063 @ 0x101c8063 (84 bytes, 32 insns) */
void f_101c8063(void) {
  FTRACE(0x101c8063u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8063 push esi */
  push32((uint32_t)(ESI));
  /* 101c8064 call 0x101ca01e */
  push32(0x101c8069u); f_101ca01e();
  /* 101c8069 call dword ptr [0x101ce02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce02c))), 0x101c806fu);
  /* 101c806f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8072 mov dword ptr [0x101d05f8], eax */
  w32((uint32_t)(0x101d05f8), (EAX));
  /* 101c8077 je 0x101c80b3 */
  if (C.zf) goto L_101c80b3;
  /* 101c8079 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101c807b push 1 */
  push32((uint32_t)(0x1u));
  /* 101c807d call 0x101ca129 */
  push32(0x101c8082u); f_101ca129();
  /* 101c8082 mov esi, eax */
  ESI = (EAX);
  /* 101c8084 pop ecx */
  ECX = (pop32());
  /* 101c8085 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8087 pop ecx */
  ECX = (pop32());
  /* 101c8088 je 0x101c80b3 */
  if (C.zf) goto L_101c80b3;
  /* 101c808a push esi */
  push32((uint32_t)(ESI));
  /* 101c808b push dword ptr [0x101d05f8] */
  push32((uint32_t)(r32((uint32_t)(0x101d05f8))));
  /* 101c8091 call dword ptr [0x101ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce028))), 0x101c8097u);
  /* 101c8097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8099 je 0x101c80b3 */
  if (C.zf) goto L_101c80b3;
  /* 101c809b push esi */
  push32((uint32_t)(ESI));
  /* 101c809c call 0x101c80d5 */
  push32(0x101c80a1u); f_101c80d5();
  /* 101c80a1 pop ecx */
  ECX = (pop32());
  /* 101c80a2 call dword ptr [0x101ce024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce024))), 0x101c80a8u);
  /* 101c80a8 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101c80ac push 1 */
  push32((uint32_t)(0x1u));
  /* 101c80ae mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101c80b0 pop eax */
  EAX = (pop32());
  /* 101c80b1 pop esi */
  ESI = (pop32());
  /* 101c80b2 ret  */
  ESPCHK(0x101c8063u, _esp0);
  ESP += 4; return;
L_101c80b3:;
  /* 101c80b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c80b5 pop esi */
  ESI = (pop32());
  /* 101c80b6 ret  */
  ESPCHK(0x101c8063u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b7 @ 0x101c80b7 (30 bytes, 8 insns) */
void f_101c80b7(void) {
  FTRACE(0x101c80b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c80b7 call 0x101ca047 */
  push32(0x101c80bcu); f_101ca047();
  /* 101c80bc mov eax, dword ptr [0x101d05f8] */
  EAX = (r32((uint32_t)(0x101d05f8)));
  /* 101c80c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c80c4 je 0x101c80d4 */
  if (C.zf) goto L_101c80d4;
  /* 101c80c6 push eax */
  push32((uint32_t)(EAX));
  /* 101c80c7 call dword ptr [0x101ce030] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce030))), 0x101c80cdu);
  /* 101c80cd or dword ptr [0x101d05f8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101d05f8)))|(0xffffffffu); w32((uint32_t)(0x101d05f8), (_r)); fl_logic(_r,32); }
L_101c80d4:;
  /* 101c80d4 ret  */
  ESPCHK(0x101c80b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d5 @ 0x101c80d5 (19 bytes, 4 insns) */
void f_101c80d5(void) {
  FTRACE(0x101c80d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c80d5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c80d9 mov dword ptr [eax + 0x50], 0x101d0c50 */
  w32((uint32_t)(EAX + 0x50), (0x101d0c50u));
  /* 101c80e0 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 101c80e7 ret  */
  ESPCHK(0x101c80d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e8 @ 0x101c80e8 (103 bytes, 38 insns) */
void f_101c80e8(void) {
  FTRACE(0x101c80e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c80e8 push esi */
  push32((uint32_t)(ESI));
  /* 101c80e9 push edi */
  push32((uint32_t)(EDI));
  /* 101c80ea call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101c80f0u);
  /* 101c80f0 push dword ptr [0x101d05f8] */
  push32((uint32_t)(r32((uint32_t)(0x101d05f8))));
  /* 101c80f6 mov edi, eax */
  EDI = (EAX);
  /* 101c80f8 call dword ptr [0x101ce038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce038))), 0x101c80feu);
  /* 101c80fe mov esi, eax */
  ESI = (EAX);
  /* 101c8100 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8102 jne 0x101c8143 */
  if (!C.zf) goto L_101c8143;
  /* 101c8104 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101c8106 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c8108 call 0x101ca129 */
  push32(0x101c810du); f_101ca129();
  /* 101c810d mov esi, eax */
  ESI = (EAX);
  /* 101c810f pop ecx */
  ECX = (pop32());
  /* 101c8110 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8112 pop ecx */
  ECX = (pop32());
  /* 101c8113 je 0x101c813b */
  if (C.zf) goto L_101c813b;
  /* 101c8115 push esi */
  push32((uint32_t)(ESI));
  /* 101c8116 push dword ptr [0x101d05f8] */
  push32((uint32_t)(r32((uint32_t)(0x101d05f8))));
  /* 101c811c call dword ptr [0x101ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce028))), 0x101c8122u);
  /* 101c8122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8124 je 0x101c813b */
  if (C.zf) goto L_101c813b;
  /* 101c8126 push esi */
  push32((uint32_t)(ESI));
  /* 101c8127 call 0x101c80d5 */
  push32(0x101c812cu); f_101c80d5();
  /* 101c812c pop ecx */
  ECX = (pop32());
  /* 101c812d call dword ptr [0x101ce024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce024))), 0x101c8133u);
  /* 101c8133 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101c8137 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101c8139 jmp 0x101c8143 */
  goto L_101c8143;
L_101c813b:;
  /* 101c813b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101c813d call 0x101c7151 */
  push32(0x101c8142u); f_101c7151();
  /* 101c8142 pop ecx */
  ECX = (pop32());
L_101c8143:;
  /* 101c8143 push edi */
  push32((uint32_t)(EDI));
  /* 101c8144 call dword ptr [0x101ce034] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce034))), 0x101c814au);
  /* 101c814a mov eax, esi */
  EAX = (ESI);
  /* 101c814c pop edi */
  EDI = (pop32());
  /* 101c814d pop esi */
  ESI = (pop32());
  /* 101c814e ret  */
  ESPCHK(0x101c80e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x101c814f (160 bytes, 62 insns) */
void f_101c814f(void) {
  FTRACE(0x101c814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c814f mov eax, dword ptr [0x101d05f8] */
  EAX = (r32((uint32_t)(0x101d05f8)));
  /* 101c8154 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8157 je 0x101c81ee */
  if (C.zf) goto L_101c81ee;
  /* 101c815d push esi */
  push32((uint32_t)(ESI));
  /* 101c815e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c8162 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8164 jne 0x101c8173 */
  if (!C.zf) goto L_101c8173;
  /* 101c8166 push eax */
  push32((uint32_t)(EAX));
  /* 101c8167 call dword ptr [0x101ce038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce038))), 0x101c816du);
  /* 101c816d mov esi, eax */
  ESI = (EAX);
  /* 101c816f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8171 je 0x101c81df */
  if (C.zf) goto L_101c81df;
L_101c8173:;
  /* 101c8173 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101c8176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8178 je 0x101c8181 */
  if (C.zf) goto L_101c8181;
  /* 101c817a push eax */
  push32((uint32_t)(EAX));
  /* 101c817b call 0x101ca266 */
  push32(0x101c8180u); f_101ca266();
  /* 101c8180 pop ecx */
  ECX = (pop32());
L_101c8181:;
  /* 101c8181 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101c8184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8186 je 0x101c818f */
  if (C.zf) goto L_101c818f;
  /* 101c8188 push eax */
  push32((uint32_t)(EAX));
  /* 101c8189 call 0x101ca266 */
  push32(0x101c818eu); f_101ca266();
  /* 101c818e pop ecx */
  ECX = (pop32());
L_101c818f:;
  /* 101c818f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101c8192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8194 je 0x101c819d */
  if (C.zf) goto L_101c819d;
  /* 101c8196 push eax */
  push32((uint32_t)(EAX));
  /* 101c8197 call 0x101ca266 */
  push32(0x101c819cu); f_101ca266();
  /* 101c819c pop ecx */
  ECX = (pop32());
L_101c819d:;
  /* 101c819d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 101c81a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c81a2 je 0x101c81ab */
  if (C.zf) goto L_101c81ab;
  /* 101c81a4 push eax */
  push32((uint32_t)(EAX));
  /* 101c81a5 call 0x101ca266 */
  push32(0x101c81aau); f_101ca266();
  /* 101c81aa pop ecx */
  ECX = (pop32());
L_101c81ab:;
  /* 101c81ab mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 101c81ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c81b0 je 0x101c81b9 */
  if (C.zf) goto L_101c81b9;
  /* 101c81b2 push eax */
  push32((uint32_t)(EAX));
  /* 101c81b3 call 0x101ca266 */
  push32(0x101c81b8u); f_101ca266();
  /* 101c81b8 pop ecx */
  ECX = (pop32());
L_101c81b9:;
  /* 101c81b9 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 101c81bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c81be je 0x101c81c7 */
  if (C.zf) goto L_101c81c7;
  /* 101c81c0 push eax */
  push32((uint32_t)(EAX));
  /* 101c81c1 call 0x101ca266 */
  push32(0x101c81c6u); f_101ca266();
  /* 101c81c6 pop ecx */
  ECX = (pop32());
L_101c81c7:;
  /* 101c81c7 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 101c81ca cmp eax, 0x101d0c50 */
  { uint32_t _a=(EAX),_b=(0x101d0c50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c81cf je 0x101c81d8 */
  if (C.zf) goto L_101c81d8;
  /* 101c81d1 push eax */
  push32((uint32_t)(EAX));
  /* 101c81d2 call 0x101ca266 */
  push32(0x101c81d7u); f_101ca266();
  /* 101c81d7 pop ecx */
  ECX = (pop32());
L_101c81d8:;
  /* 101c81d8 push esi */
  push32((uint32_t)(ESI));
  /* 101c81d9 call 0x101ca266 */
  push32(0x101c81deu); f_101ca266();
  /* 101c81de pop ecx */
  ECX = (pop32());
L_101c81df:;
  /* 101c81df push 0 */
  push32((uint32_t)(0x0u));
  /* 101c81e1 push dword ptr [0x101d05f8] */
  push32((uint32_t)(r32((uint32_t)(0x101d05f8))));
  /* 101c81e7 call dword ptr [0x101ce028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce028))), 0x101c81edu);
  /* 101c81ed pop esi */
  ESI = (pop32());
L_101c81ee:;
  /* 101c81ee ret  */
  ESPCHK(0x101c814fu, _esp0);
  ESP += 4; return;
}

/* FUN_100081ef @ 0x101c81ef (444 bytes, 150 insns) */
void f_101c81ef(void) {
  FTRACE(0x101c81efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c81ef push ebp */
  push32((uint32_t)(EBP));
  /* 101c81f0 mov ebp, esp */
  EBP = (ESP);
  /* 101c81f2 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c81f5 push ebx */
  push32((uint32_t)(EBX));
  /* 101c81f6 push esi */
  push32((uint32_t)(ESI));
  /* 101c81f7 push edi */
  push32((uint32_t)(EDI));
  /* 101c81f8 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101c81fd call 0x101ca34f */
  push32(0x101c8202u); f_101ca34f();
  /* 101c8202 mov esi, eax */
  ESI = (EAX);
  /* 101c8204 pop ecx */
  ECX = (pop32());
  /* 101c8205 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8207 jne 0x101c8211 */
  if (!C.zf) goto L_101c8211;
  /* 101c8209 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101c820b call 0x101c7151 */
  push32(0x101c8210u); f_101c7151();
  /* 101c8210 pop ecx */
  ECX = (pop32());
L_101c8211:;
  /* 101c8211 mov dword ptr [0x101d7ba0], esi */
  w32((uint32_t)(0x101d7ba0), (ESI));
  /* 101c8217 mov dword ptr [0x101d7ca0], 0x20 */
  w32((uint32_t)(0x101d7ca0), (0x20u));
  /* 101c8221 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_101c8227:;
  /* 101c8227 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8229 jae 0x101c8249 */
  if (!C.cf) goto L_101c8249;
  /* 101c822b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101c822f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101c8232 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101c8236 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 101c823a mov eax, dword ptr [0x101d7ba0] */
  EAX = (r32((uint32_t)(0x101d7ba0)));
  /* 101c823f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8242 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8247 jmp 0x101c8227 */
  goto L_101c8227;
L_101c8249:;
  /* 101c8249 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101c824c push eax */
  push32((uint32_t)(EAX));
  /* 101c824d call dword ptr [0x101ce04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce04c))), 0x101c8253u);
  /* 101c8253 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c8258 je 0x101c832f */
  if (C.zf) goto L_101c832f;
  /* 101c825e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101c8261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8263 je 0x101c832f */
  if (C.zf) goto L_101c832f;
  /* 101c8269 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101c826b lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101c826e lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101c8271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101c8274 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101c8279 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c827b jl 0x101c827f */
  if ((C.sf!=C.of)) goto L_101c827f;
  /* 101c827d mov edi, eax */
  EDI = (EAX);
L_101c827f:;
  /* 101c827f cmp dword ptr [0x101d7ca0], edi */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8285 jge 0x101c82dd */
  if ((C.sf==C.of)) goto L_101c82dd;
  /* 101c8287 mov esi, 0x101d7ba4 */
  ESI = (0x101d7ba4u);
L_101c828c:;
  /* 101c828c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101c8291 call 0x101ca34f */
  push32(0x101c8296u); f_101ca34f();
  /* 101c8296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8298 pop ecx */
  ECX = (pop32());
  /* 101c8299 je 0x101c82d7 */
  if (C.zf) goto L_101c82d7;
  /* 101c829b add dword ptr [0x101d7ca0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x101d7ca0), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c82a2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101c82a4 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_101c82aa:;
  /* 101c82aa cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c82ac jae 0x101c82ca */
  if (!C.cf) goto L_101c82ca;
  /* 101c82ae and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 101c82b2 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101c82b5 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101c82b9 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 101c82bd mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101c82bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c82c2 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c82c8 jmp 0x101c82aa */
  goto L_101c82aa;
L_101c82ca:;
  /* 101c82ca add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c82cd cmp dword ptr [0x101d7ca0], edi */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c82d3 jl 0x101c828c */
  if ((C.sf!=C.of)) goto L_101c828c;
  /* 101c82d5 jmp 0x101c82dd */
  goto L_101c82dd;
L_101c82d7:;
  /* 101c82d7 mov edi, dword ptr [0x101d7ca0] */
  EDI = (r32((uint32_t)(0x101d7ca0)));
L_101c82dd:;
  /* 101c82dd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c82df test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c82e1 jle 0x101c832f */
  if ((C.zf||C.sf!=C.of)) goto L_101c832f;
L_101c82e3:;
  /* 101c82e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c82e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101c82e8 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c82eb je 0x101c8325 */
  if (C.zf) goto L_101c8325;
  /* 101c82ed mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 101c82ef test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101c82f1 je 0x101c8325 */
  if (C.zf) goto L_101c8325;
  /* 101c82f3 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101c82f5 jne 0x101c8302 */
  if (!C.zf) goto L_101c8302;
  /* 101c82f7 push ecx */
  push32((uint32_t)(ECX));
  /* 101c82f8 call dword ptr [0x101ce048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce048))), 0x101c82feu);
  /* 101c82fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8300 je 0x101c8325 */
  if (C.zf) goto L_101c8325;
L_101c8302:;
  /* 101c8302 mov ecx, esi */
  ECX = (ESI);
  /* 101c8304 mov eax, esi */
  EAX = (ESI);
  /* 101c8306 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c8309 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c830c mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c8313 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c8316 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101c8319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c831c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101c831e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101c8320 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 101c8322 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_101c8325:;
  /* 101c8325 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c8329 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c832a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c832b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c832d jl 0x101c82e3 */
  if ((C.sf!=C.of)) goto L_101c82e3;
L_101c832f:;
  /* 101c832f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101c8331:;
  /* 101c8331 mov ecx, dword ptr [0x101d7ba0] */
  ECX = (r32((uint32_t)(0x101d7ba0)));
  /* 101c8337 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 101c833a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c833e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101c8341 jne 0x101c8390 */
  if (!C.zf) goto L_101c8390;
  /* 101c8343 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c8345 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101c8349 jne 0x101c8350 */
  if (!C.zf) goto L_101c8350;
  /* 101c834b push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101c834d pop eax */
  EAX = (pop32());
  /* 101c834e jmp 0x101c835a */
  goto L_101c835a;
L_101c8350:;
  /* 101c8350 mov eax, ebx */
  EAX = (EBX);
  /* 101c8352 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c8353 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c8355 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8357 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101c835a:;
  /* 101c835a push eax */
  push32((uint32_t)(EAX));
  /* 101c835b call dword ptr [0x101ce044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce044))), 0x101c8361u);
  /* 101c8361 mov edi, eax */
  EDI = (EAX);
  /* 101c8363 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8366 je 0x101c837f */
  if (C.zf) goto L_101c837f;
  /* 101c8368 push edi */
  push32((uint32_t)(EDI));
  /* 101c8369 call dword ptr [0x101ce048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce048))), 0x101c836fu);
  /* 101c836f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8371 je 0x101c837f */
  if (C.zf) goto L_101c837f;
  /* 101c8373 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8378 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101c837a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c837d jne 0x101c8385 */
  if (!C.zf) goto L_101c8385;
L_101c837f:;
  /* 101c837f or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101c8383 jmp 0x101c8394 */
  goto L_101c8394;
L_101c8385:;
  /* 101c8385 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8388 jne 0x101c8394 */
  if (!C.zf) goto L_101c8394;
  /* 101c838a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101c838e jmp 0x101c8394 */
  goto L_101c8394;
L_101c8390:;
  /* 101c8390 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101c8394:;
  /* 101c8394 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c8395 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8398 jl 0x101c8331 */
  if ((C.sf!=C.of)) goto L_101c8331;
  /* 101c839a push dword ptr [0x101d7ca0] */
  push32((uint32_t)(r32((uint32_t)(0x101d7ca0))));
  /* 101c83a0 call dword ptr [0x101ce040] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce040))), 0x101c83a6u);
  /* 101c83a6 pop edi */
  EDI = (pop32());
  /* 101c83a7 pop esi */
  ESI = (pop32());
  /* 101c83a8 pop ebx */
  EBX = (pop32());
  /* 101c83a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c83aa ret  */
  ESPCHK(0x101c81efu, _esp0);
  ESP += 4; return;
}

/* FUN_100083ab @ 0x101c83ab (84 bytes, 33 insns) */
void f_101c83ab(void) {
  FTRACE(0x101c83abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c83ab push ebx */
  push32((uint32_t)(EBX));
  /* 101c83ac push esi */
  push32((uint32_t)(ESI));
  /* 101c83ad push edi */
  push32((uint32_t)(EDI));
  /* 101c83ae mov esi, 0x101d7ba0 */
  ESI = (0x101d7ba0u);
L_101c83b3:;
  /* 101c83b3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101c83b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c83b7 je 0x101c83f0 */
  if (C.zf) goto L_101c83f0;
  /* 101c83b9 mov edi, eax */
  EDI = (EAX);
  /* 101c83bb add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c83c0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c83c2 jae 0x101c83e5 */
  if (!C.cf) goto L_101c83e5;
  /* 101c83c4 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_101c83c7:;
  /* 101c83c7 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c83cb je 0x101c83d4 */
  if (C.zf) goto L_101c83d4;
  /* 101c83cd push ebx */
  push32((uint32_t)(EBX));
  /* 101c83ce call dword ptr [0x101ce050] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce050))), 0x101c83d4u);
L_101c83d4:;
  /* 101c83d4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101c83d6 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c83d9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c83de add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c83e1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c83e3 jb 0x101c83c7 */
  if (C.cf) goto L_101c83c7;
L_101c83e5:;
  /* 101c83e5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c83e7 call 0x101ca266 */
  push32(0x101c83ecu); f_101ca266();
  /* 101c83ec and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101c83ef pop ecx */
  ECX = (pop32());
L_101c83f0:;
  /* 101c83f0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c83f3 cmp esi, 0x101d7ca0 */
  { uint32_t _a=(ESI),_b=(0x101d7ca0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c83f9 jl 0x101c83b3 */
  if ((C.sf!=C.of)) goto L_101c83b3;
  /* 101c83fb pop edi */
  EDI = (pop32());
  /* 101c83fc pop esi */
  ESI = (pop32());
  /* 101c83fd pop ebx */
  EBX = (pop32());
  /* 101c83fe ret  */
  ESPCHK(0x101c83abu, _esp0);
  ESP += 4; return;
}

/* FUN_100083ff @ 0x101c83ff (185 bytes, 71 insns) */
void f_101c83ff(void) {
  FTRACE(0x101c83ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c83ff push ebx */
  push32((uint32_t)(EBX));
  /* 101c8400 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c8402 cmp dword ptr [0x101d7ca8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8408 push esi */
  push32((uint32_t)(ESI));
  /* 101c8409 push edi */
  push32((uint32_t)(EDI));
  /* 101c840a jne 0x101c8411 */
  if (!C.zf) goto L_101c8411;
  /* 101c840c call 0x101ca861 */
  push32(0x101c8411u); f_101ca861();
L_101c8411:;
  /* 101c8411 mov esi, dword ptr [0x101d65b8] */
  ESI = (r32((uint32_t)(0x101d65b8)));
  /* 101c8417 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101c8419:;
  /* 101c8419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c841b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c841d je 0x101c8431 */
  if (C.zf) goto L_101c8431;
  /* 101c841f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8421 je 0x101c8424 */
  if (C.zf) goto L_101c8424;
  /* 101c8423 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101c8424:;
  /* 101c8424 push esi */
  push32((uint32_t)(ESI));
  /* 101c8425 call 0x101c90e0 */
  push32(0x101c842au); f_101c90e0();
  /* 101c842a pop ecx */
  ECX = (pop32());
  /* 101c842b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 101c842f jmp 0x101c8419 */
  goto L_101c8419;
L_101c8431:;
  /* 101c8431 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 101c8438 push eax */
  push32((uint32_t)(EAX));
  /* 101c8439 call 0x101ca34f */
  push32(0x101c843eu); f_101ca34f();
  /* 101c843e mov esi, eax */
  ESI = (EAX);
  /* 101c8440 pop ecx */
  ECX = (pop32());
  /* 101c8441 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8443 mov dword ptr [0x101d65e8], esi */
  w32((uint32_t)(0x101d65e8), (ESI));
  /* 101c8449 jne 0x101c8453 */
  if (!C.zf) goto L_101c8453;
  /* 101c844b push 9 */
  push32((uint32_t)(0x9u));
  /* 101c844d call 0x101c7151 */
  push32(0x101c8452u); f_101c7151();
  /* 101c8452 pop ecx */
  ECX = (pop32());
L_101c8453:;
  /* 101c8453 mov edi, dword ptr [0x101d65b8] */
  EDI = (r32((uint32_t)(0x101d65b8)));
  /* 101c8459 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c845b je 0x101c8496 */
  if (C.zf) goto L_101c8496;
  /* 101c845d push ebp */
  push32((uint32_t)(EBP));
L_101c845e:;
  /* 101c845e push edi */
  push32((uint32_t)(EDI));
  /* 101c845f call 0x101c90e0 */
  push32(0x101c8464u); f_101c90e0();
  /* 101c8464 mov ebp, eax */
  EBP = (EAX);
  /* 101c8466 pop ecx */
  ECX = (pop32());
  /* 101c8467 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101c8468 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c846b je 0x101c848f */
  if (C.zf) goto L_101c848f;
  /* 101c846d push ebp */
  push32((uint32_t)(EBP));
  /* 101c846e call 0x101ca34f */
  push32(0x101c8473u); f_101ca34f();
  /* 101c8473 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8475 pop ecx */
  ECX = (pop32());
  /* 101c8476 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101c8478 jne 0x101c8482 */
  if (!C.zf) goto L_101c8482;
  /* 101c847a push 9 */
  push32((uint32_t)(0x9u));
  /* 101c847c call 0x101c7151 */
  push32(0x101c8481u); f_101c7151();
  /* 101c8481 pop ecx */
  ECX = (pop32());
L_101c8482:;
  /* 101c8482 push edi */
  push32((uint32_t)(EDI));
  /* 101c8483 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c8485 call 0x101c9b90 */
  push32(0x101c848au); f_101c9b90();
  /* 101c848a pop ecx */
  ECX = (pop32());
  /* 101c848b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c848e pop ecx */
  ECX = (pop32());
L_101c848f:;
  /* 101c848f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8491 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8493 jne 0x101c845e */
  if (!C.zf) goto L_101c845e;
  /* 101c8495 pop ebp */
  EBP = (pop32());
L_101c8496:;
  /* 101c8496 push dword ptr [0x101d65b8] */
  push32((uint32_t)(r32((uint32_t)(0x101d65b8))));
  /* 101c849c call 0x101ca266 */
  push32(0x101c84a1u); f_101ca266();
  /* 101c84a1 pop ecx */
  ECX = (pop32());
  /* 101c84a2 mov dword ptr [0x101d65b8], ebx */
  w32((uint32_t)(0x101d65b8), (EBX));
  /* 101c84a8 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 101c84aa pop edi */
  EDI = (pop32());
  /* 101c84ab pop esi */
  ESI = (pop32());
  /* 101c84ac mov dword ptr [0x101d7ca4], 1 */
  w32((uint32_t)(0x101d7ca4), (0x1u));
  /* 101c84b6 pop ebx */
  EBX = (pop32());
  /* 101c84b7 ret  */
  ESPCHK(0x101c83ffu, _esp0);
  ESP += 4; return;
}

/* FUN_100084b8 @ 0x101c84b8 (153 bytes, 62 insns) */
void f_101c84b8(void) {
  FTRACE(0x101c84b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c84b8 push ebp */
  push32((uint32_t)(EBP));
  /* 101c84b9 mov ebp, esp */
  EBP = (ESP);
  /* 101c84bb push ecx */
  push32((uint32_t)(ECX));
  /* 101c84bc push ecx */
  push32((uint32_t)(ECX));
  /* 101c84bd push ebx */
  push32((uint32_t)(EBX));
  /* 101c84be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c84c0 cmp dword ptr [0x101d7ca8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c84c6 push esi */
  push32((uint32_t)(ESI));
  /* 101c84c7 push edi */
  push32((uint32_t)(EDI));
  /* 101c84c8 jne 0x101c84cf */
  if (!C.zf) goto L_101c84cf;
  /* 101c84ca call 0x101ca861 */
  push32(0x101c84cfu); f_101ca861();
L_101c84cf:;
  /* 101c84cf mov esi, 0x101d660c */
  ESI = (0x101d660cu);
  /* 101c84d4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101c84d9 push esi */
  push32((uint32_t)(ESI));
  /* 101c84da push ebx */
  push32((uint32_t)(EBX));
  /* 101c84db call dword ptr [0x101ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce054))), 0x101c84e1u);
  /* 101c84e1 mov eax, dword ptr [0x101d7cb4] */
  EAX = (r32((uint32_t)(0x101d7cb4)));
  /* 101c84e6 mov dword ptr [0x101d65f8], esi */
  w32((uint32_t)(0x101d65f8), (ESI));
  /* 101c84ec mov edi, esi */
  EDI = (ESI);
  /* 101c84ee cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c84f0 je 0x101c84f4 */
  if (C.zf) goto L_101c84f4;
  /* 101c84f2 mov edi, eax */
  EDI = (EAX);
L_101c84f4:;
  /* 101c84f4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101c84f7 push eax */
  push32((uint32_t)(EAX));
  /* 101c84f8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101c84fb push eax */
  push32((uint32_t)(EAX));
  /* 101c84fc push ebx */
  push32((uint32_t)(EBX));
  /* 101c84fd push ebx */
  push32((uint32_t)(EBX));
  /* 101c84fe push edi */
  push32((uint32_t)(EDI));
  /* 101c84ff call 0x101c8551 */
  push32(0x101c8504u); f_101c8551();
  /* 101c8504 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c8507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c850a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101c850d push eax */
  push32((uint32_t)(EAX));
  /* 101c850e call 0x101ca34f */
  push32(0x101c8513u); f_101ca34f();
  /* 101c8513 mov esi, eax */
  ESI = (EAX);
  /* 101c8515 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8518 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c851a jne 0x101c8524 */
  if (!C.zf) goto L_101c8524;
  /* 101c851c push 8 */
  push32((uint32_t)(0x8u));
  /* 101c851e call 0x101c7151 */
  push32(0x101c8523u); f_101c7151();
  /* 101c8523 pop ecx */
  ECX = (pop32());
L_101c8524:;
  /* 101c8524 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101c8527 push eax */
  push32((uint32_t)(EAX));
  /* 101c8528 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101c852b push eax */
  push32((uint32_t)(EAX));
  /* 101c852c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c852f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 101c8532 push eax */
  push32((uint32_t)(EAX));
  /* 101c8533 push esi */
  push32((uint32_t)(ESI));
  /* 101c8534 push edi */
  push32((uint32_t)(EDI));
  /* 101c8535 call 0x101c8551 */
  push32(0x101c853au); f_101c8551();
  /* 101c853a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c853d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8540 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c8541 mov dword ptr [0x101d65e0], esi */
  w32((uint32_t)(0x101d65e0), (ESI));
  /* 101c8547 pop edi */
  EDI = (pop32());
  /* 101c8548 pop esi */
  ESI = (pop32());
  /* 101c8549 mov dword ptr [0x101d65dc], eax */
  w32((uint32_t)(0x101d65dc), (EAX));
  /* 101c854e pop ebx */
  EBX = (pop32());
  /* 101c854f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c8550 ret  */
  ESPCHK(0x101c84b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008551 @ 0x101c8551 (436 bytes, 187 insns) */
void f_101c8551(void) {
  FTRACE(0x101c8551u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8551 push ebp */
  push32((uint32_t)(EBP));
  /* 101c8552 mov ebp, esp */
  EBP = (ESP);
  /* 101c8554 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101c8557 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101c855a push ebx */
  push32((uint32_t)(EBX));
  /* 101c855b push esi */
  push32((uint32_t)(ESI));
  /* 101c855c and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101c855f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c8562 push edi */
  push32((uint32_t)(EDI));
  /* 101c8563 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c8566 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101c856c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c856f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c8571 je 0x101c857b */
  if (C.zf) goto L_101c857b;
  /* 101c8573 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101c8575 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8578 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101c857b:;
  /* 101c857b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c857e jne 0x101c85c4 */
  if (!C.zf) goto L_101c85c4;
L_101c8580:;
  /* 101c8580 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101c8583 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8584 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8587 je 0x101c85b2 */
  if (C.zf) goto L_101c85b2;
  /* 101c8589 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c858b je 0x101c85b2 */
  if (C.zf) goto L_101c85b2;
  /* 101c858d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101c8590 test byte ptr [edx + 0x101d6a61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101d6a61)))&(0x4u); fl_logic(_r,8); }
  /* 101c8597 je 0x101c85a5 */
  if (C.zf) goto L_101c85a5;
  /* 101c8599 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c859b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c859d je 0x101c85a5 */
  if (C.zf) goto L_101c85a5;
  /* 101c859f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c85a1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101c85a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c85a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101c85a5:;
  /* 101c85a5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c85a7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c85a9 je 0x101c8580 */
  if (C.zf) goto L_101c8580;
  /* 101c85ab mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c85ad mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101c85af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c85b0 jmp 0x101c8580 */
  goto L_101c8580;
L_101c85b2:;
  /* 101c85b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c85b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c85b6 je 0x101c85bc */
  if (C.zf) goto L_101c85bc;
  /* 101c85b8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101c85bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c85bc:;
  /* 101c85bc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c85bf jne 0x101c8607 */
  if (!C.zf) goto L_101c8607;
  /* 101c85c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c85c2 jmp 0x101c8607 */
  goto L_101c8607;
L_101c85c4:;
  /* 101c85c4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c85c6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c85c8 je 0x101c85cf */
  if (C.zf) goto L_101c85cf;
  /* 101c85ca mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c85cc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101c85ce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c85cf:;
  /* 101c85cf mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c85d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c85d2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101c85d5 test byte ptr [ebx + 0x101d6a61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101d6a61)))&(0x4u); fl_logic(_r,8); }
  /* 101c85dc je 0x101c85ea */
  if (C.zf) goto L_101c85ea;
  /* 101c85de inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c85e0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c85e2 je 0x101c85e9 */
  if (C.zf) goto L_101c85e9;
  /* 101c85e4 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101c85e6 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 101c85e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c85e9:;
  /* 101c85e9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101c85ea:;
  /* 101c85ea cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c85ed je 0x101c85f8 */
  if (C.zf) goto L_101c85f8;
  /* 101c85ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c85f1 je 0x101c85fc */
  if (C.zf) goto L_101c85fc;
  /* 101c85f3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c85f6 jne 0x101c85c4 */
  if (!C.zf) goto L_101c85c4;
L_101c85f8:;
  /* 101c85f8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c85fa jne 0x101c85ff */
  if (!C.zf) goto L_101c85ff;
L_101c85fc:;
  /* 101c85fc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c85fd jmp 0x101c8607 */
  goto L_101c8607;
L_101c85ff:;
  /* 101c85ff test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c8601 je 0x101c8607 */
  if (C.zf) goto L_101c8607;
  /* 101c8603 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_101c8607:;
  /* 101c8607 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_101c860b:;
  /* 101c860b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c860e je 0x101c86f4 */
  if (C.zf) goto L_101c86f4;
L_101c8614:;
  /* 101c8614 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c8616 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8619 je 0x101c8620 */
  if (C.zf) goto L_101c8620;
  /* 101c861b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c861e jne 0x101c8623 */
  if (!C.zf) goto L_101c8623;
L_101c8620:;
  /* 101c8620 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8621 jmp 0x101c8614 */
  goto L_101c8614;
L_101c8623:;
  /* 101c8623 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8626 je 0x101c86f4 */
  if (C.zf) goto L_101c86f4;
  /* 101c862c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c862e je 0x101c8638 */
  if (C.zf) goto L_101c8638;
  /* 101c8630 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101c8632 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8635 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101c8638:;
  /* 101c8638 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 101c863b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_101c863d:;
  /* 101c863d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101c8644 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101c8646:;
  /* 101c8646 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8649 jne 0x101c864f */
  if (!C.zf) goto L_101c864f;
  /* 101c864b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c864c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c864d jmp 0x101c8646 */
  goto L_101c8646;
L_101c864f:;
  /* 101c864f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8652 jne 0x101c8680 */
  if (!C.zf) goto L_101c8680;
  /* 101c8654 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101c8657 jne 0x101c867e */
  if (!C.zf) goto L_101c867e;
  /* 101c8659 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101c865b cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c865e je 0x101c866d */
  if (C.zf) goto L_101c866d;
  /* 101c8660 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8664 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101c8667 jne 0x101c866d */
  if (!C.zf) goto L_101c866d;
  /* 101c8669 mov eax, edx */
  EAX = (EDX);
  /* 101c866b jmp 0x101c8670 */
  goto L_101c8670;
L_101c866d:;
  /* 101c866d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101c8670:;
  /* 101c8670 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c8673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c8675 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8678 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101c867b mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101c867e:;
  /* 101c867e shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101c8680:;
  /* 101c8680 mov edx, ebx */
  EDX = (EBX);
  /* 101c8682 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c8683 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c8685 je 0x101c8695 */
  if (C.zf) goto L_101c8695;
  /* 101c8687 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101c8688:;
  /* 101c8688 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c868a je 0x101c8690 */
  if (C.zf) goto L_101c8690;
  /* 101c868c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101c868f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c8690:;
  /* 101c8690 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c8692 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c8693 jne 0x101c8688 */
  if (!C.zf) goto L_101c8688;
L_101c8695:;
  /* 101c8695 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c8697 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c8699 je 0x101c86e5 */
  if (C.zf) goto L_101c86e5;
  /* 101c869b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c869f jne 0x101c86ab */
  if (!C.zf) goto L_101c86ab;
  /* 101c86a1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c86a4 je 0x101c86e5 */
  if (C.zf) goto L_101c86e5;
  /* 101c86a6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c86a9 je 0x101c86e5 */
  if (C.zf) goto L_101c86e5;
L_101c86ab:;
  /* 101c86ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c86af je 0x101c86df */
  if (C.zf) goto L_101c86df;
  /* 101c86b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c86b3 je 0x101c86ce */
  if (C.zf) goto L_101c86ce;
  /* 101c86b5 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101c86b8 test byte ptr [ebx + 0x101d6a61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101d6a61)))&(0x4u); fl_logic(_r,8); }
  /* 101c86bf je 0x101c86c7 */
  if (C.zf) goto L_101c86c7;
  /* 101c86c1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101c86c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c86c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c86c5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101c86c7:;
  /* 101c86c7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101c86c9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101c86cb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c86cc jmp 0x101c86dd */
  goto L_101c86dd;
L_101c86ce:;
  /* 101c86ce movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101c86d1 test byte ptr [edx + 0x101d6a61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101d6a61)))&(0x4u); fl_logic(_r,8); }
  /* 101c86d8 je 0x101c86dd */
  if (C.zf) goto L_101c86dd;
  /* 101c86da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c86db inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101c86dd:;
  /* 101c86dd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101c86df:;
  /* 101c86df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c86e0 jmp 0x101c863d */
  goto L_101c863d;
L_101c86e5:;
  /* 101c86e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c86e7 je 0x101c86ed */
  if (C.zf) goto L_101c86ed;
  /* 101c86e9 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101c86ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101c86ed:;
  /* 101c86ed inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101c86ef jmp 0x101c860b */
  goto L_101c860b;
L_101c86f4:;
  /* 101c86f4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101c86f6 je 0x101c86fb */
  if (C.zf) goto L_101c86fb;
  /* 101c86f8 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101c86fb:;
  /* 101c86fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101c86fe pop edi */
  EDI = (pop32());
  /* 101c86ff pop esi */
  ESI = (pop32());
  /* 101c8700 pop ebx */
  EBX = (pop32());
  /* 101c8701 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101c8703 pop ebp */
  EBP = (pop32());
  /* 101c8704 ret  */
  ESPCHK(0x101c8551u, _esp0);
  ESP += 4; return;
}

/* FUN_10008705 @ 0x101c8705 (306 bytes, 132 insns) */
void f_101c8705(void) {
  FTRACE(0x101c8705u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8705 push ecx */
  push32((uint32_t)(ECX));
  /* 101c8706 push ecx */
  push32((uint32_t)(ECX));
  /* 101c8707 mov eax, dword ptr [0x101d6710] */
  EAX = (r32((uint32_t)(0x101d6710)));
  /* 101c870c push ebx */
  push32((uint32_t)(EBX));
  /* 101c870d push ebp */
  push32((uint32_t)(EBP));
  /* 101c870e mov ebp, dword ptr [0x101ce068] */
  EBP = (r32((uint32_t)(0x101ce068)));
  /* 101c8714 push esi */
  push32((uint32_t)(ESI));
  /* 101c8715 push edi */
  push32((uint32_t)(EDI));
  /* 101c8716 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c8718 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c871a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101c871c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c871e jne 0x101c8753 */
  if (!C.zf) goto L_101c8753;
  /* 101c8720 call ebp */
  call_ind((uint32_t)(EBP), 0x101c8722u);
  /* 101c8722 mov esi, eax */
  ESI = (EAX);
  /* 101c8724 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8726 je 0x101c8734 */
  if (C.zf) goto L_101c8734;
  /* 101c8728 mov dword ptr [0x101d6710], 1 */
  w32((uint32_t)(0x101d6710), (0x1u));
  /* 101c8732 jmp 0x101c875c */
  goto L_101c875c;
L_101c8734:;
  /* 101c8734 call dword ptr [0x101ce064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce064))), 0x101c873au);
  /* 101c873a mov edi, eax */
  EDI = (EAX);
  /* 101c873c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c873e je 0x101c882e */
  if (C.zf) goto L_101c882e;
  /* 101c8744 mov dword ptr [0x101d6710], 2 */
  w32((uint32_t)(0x101d6710), (0x2u));
  /* 101c874e jmp 0x101c87e2 */
  goto L_101c87e2;
L_101c8753:;
  /* 101c8753 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8756 jne 0x101c87dd */
  if (!C.zf) goto L_101c87dd;
L_101c875c:;
  /* 101c875c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c875e jne 0x101c876c */
  if (!C.zf) goto L_101c876c;
  /* 101c8760 call ebp */
  call_ind((uint32_t)(EBP), 0x101c8762u);
  /* 101c8762 mov esi, eax */
  ESI = (EAX);
  /* 101c8764 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8766 je 0x101c882e */
  if (C.zf) goto L_101c882e;
L_101c876c:;
  /* 101c876c cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c876f mov eax, esi */
  EAX = (ESI);
  /* 101c8771 je 0x101c8781 */
  if (C.zf) goto L_101c8781;
L_101c8773:;
  /* 101c8773 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8774 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8775 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c8778 jne 0x101c8773 */
  if (!C.zf) goto L_101c8773;
  /* 101c877a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c877b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c877c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c877f jne 0x101c8773 */
  if (!C.zf) goto L_101c8773;
L_101c8781:;
  /* 101c8781 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8783 mov edi, dword ptr [0x101ce060] */
  EDI = (r32((uint32_t)(0x101ce060)));
  /* 101c8789 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101c878b push ebx */
  push32((uint32_t)(EBX));
  /* 101c878c push ebx */
  push32((uint32_t)(EBX));
  /* 101c878d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c878e push ebx */
  push32((uint32_t)(EBX));
  /* 101c878f push ebx */
  push32((uint32_t)(EBX));
  /* 101c8790 push eax */
  push32((uint32_t)(EAX));
  /* 101c8791 push esi */
  push32((uint32_t)(ESI));
  /* 101c8792 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8793 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8794 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101c8798 call edi */
  call_ind((uint32_t)(EDI), 0x101c879au);
  /* 101c879a mov ebp, eax */
  EBP = (EAX);
  /* 101c879c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c879e je 0x101c87d2 */
  if (C.zf) goto L_101c87d2;
  /* 101c87a0 push ebp */
  push32((uint32_t)(EBP));
  /* 101c87a1 call 0x101ca34f */
  push32(0x101c87a6u); f_101ca34f();
  /* 101c87a6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c87a8 pop ecx */
  ECX = (pop32());
  /* 101c87a9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101c87ad je 0x101c87d2 */
  if (C.zf) goto L_101c87d2;
  /* 101c87af push ebx */
  push32((uint32_t)(EBX));
  /* 101c87b0 push ebx */
  push32((uint32_t)(EBX));
  /* 101c87b1 push ebp */
  push32((uint32_t)(EBP));
  /* 101c87b2 push eax */
  push32((uint32_t)(EAX));
  /* 101c87b3 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 101c87b7 push esi */
  push32((uint32_t)(ESI));
  /* 101c87b8 push ebx */
  push32((uint32_t)(EBX));
  /* 101c87b9 push ebx */
  push32((uint32_t)(EBX));
  /* 101c87ba call edi */
  call_ind((uint32_t)(EDI), 0x101c87bcu);
  /* 101c87bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c87be jne 0x101c87ce */
  if (!C.zf) goto L_101c87ce;
  /* 101c87c0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101c87c4 call 0x101ca266 */
  push32(0x101c87c9u); f_101ca266();
  /* 101c87c9 pop ecx */
  ECX = (pop32());
  /* 101c87ca mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_101c87ce:;
  /* 101c87ce mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_101c87d2:;
  /* 101c87d2 push esi */
  push32((uint32_t)(ESI));
  /* 101c87d3 call dword ptr [0x101ce05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce05c))), 0x101c87d9u);
  /* 101c87d9 mov eax, ebx */
  EAX = (EBX);
  /* 101c87db jmp 0x101c8830 */
  goto L_101c8830;
L_101c87dd:;
  /* 101c87dd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c87e0 jne 0x101c882e */
  if (!C.zf) goto L_101c882e;
L_101c87e2:;
  /* 101c87e2 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c87e4 jne 0x101c87f2 */
  if (!C.zf) goto L_101c87f2;
  /* 101c87e6 call dword ptr [0x101ce064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce064))), 0x101c87ecu);
  /* 101c87ec mov edi, eax */
  EDI = (EAX);
  /* 101c87ee cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c87f0 je 0x101c882e */
  if (C.zf) goto L_101c882e;
L_101c87f2:;
  /* 101c87f2 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c87f4 mov eax, edi */
  EAX = (EDI);
  /* 101c87f6 je 0x101c8802 */
  if (C.zf) goto L_101c8802;
L_101c87f8:;
  /* 101c87f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c87f9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c87fb jne 0x101c87f8 */
  if (!C.zf) goto L_101c87f8;
  /* 101c87fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c87fe cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8800 jne 0x101c87f8 */
  if (!C.zf) goto L_101c87f8;
L_101c8802:;
  /* 101c8802 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8804 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8805 mov ebp, eax */
  EBP = (EAX);
  /* 101c8807 push ebp */
  push32((uint32_t)(EBP));
  /* 101c8808 call 0x101ca34f */
  push32(0x101c880du); f_101ca34f();
  /* 101c880d mov esi, eax */
  ESI = (EAX);
  /* 101c880f pop ecx */
  ECX = (pop32());
  /* 101c8810 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8812 jne 0x101c8818 */
  if (!C.zf) goto L_101c8818;
  /* 101c8814 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c8816 jmp 0x101c8823 */
  goto L_101c8823;
L_101c8818:;
  /* 101c8818 push ebp */
  push32((uint32_t)(EBP));
  /* 101c8819 push edi */
  push32((uint32_t)(EDI));
  /* 101c881a push esi */
  push32((uint32_t)(ESI));
  /* 101c881b call 0x101ca880 */
  push32(0x101c8820u); f_101ca880();
  /* 101c8820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c8823:;
  /* 101c8823 push edi */
  push32((uint32_t)(EDI));
  /* 101c8824 call dword ptr [0x101ce058] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce058))), 0x101c882au);
  /* 101c882a mov eax, esi */
  EAX = (ESI);
  /* 101c882c jmp 0x101c8830 */
  goto L_101c8830;
L_101c882e:;
  /* 101c882e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c8830:;
  /* 101c8830 pop edi */
  EDI = (pop32());
  /* 101c8831 pop esi */
  ESI = (pop32());
  /* 101c8832 pop ebp */
  EBP = (pop32());
  /* 101c8833 pop ebx */
  EBX = (pop32());
  /* 101c8834 pop ecx */
  ECX = (pop32());
  /* 101c8835 pop ecx */
  ECX = (pop32());
  /* 101c8836 ret  */
  ESPCHK(0x101c8705u, _esp0);
  ESP += 4; return;
}

/* FUN_10008837 @ 0x101c8837 (45 bytes, 17 insns) */
void f_101c8837(void) {
  FTRACE(0x101c8837u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8837 push esi */
  push32((uint32_t)(ESI));
  /* 101c8838 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c883c push 0 */
  push32((uint32_t)(0x0u));
  /* 101c883e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101c8841 call dword ptr [0x101ce004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce004))), 0x101c8847u);
  /* 101c8847 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c884c jne 0x101c8862 */
  if (!C.zf) goto L_101c8862;
  /* 101c884e mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101c8851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101c8853 je 0x101c8862 */
  if (C.zf) goto L_101c8862;
  /* 101c8855 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8857 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101c885a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101c885c mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101c885f mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101c8862:;
  /* 101c8862 pop esi */
  ESI = (pop32());
  /* 101c8863 ret  */
  ESPCHK(0x101c8837u, _esp0);
  ESP += 4; return;
}

/* FUN_10008864 @ 0x101c8864 (328 bytes, 115 insns) */
void f_101c8864(void) {
  FTRACE(0x101c8864u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8864 push ebp */
  push32((uint32_t)(EBP));
  /* 101c8865 mov ebp, esp */
  EBP = (ESP);
  /* 101c8867 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101c886c call 0x101caf70 */
  push32(0x101c8871u); f_101caf70();
  /* 101c8871 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101c8877 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8878 push eax */
  push32((uint32_t)(EAX));
  /* 101c8879 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101c8883 call dword ptr [0x101ce070] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce070))), 0x101c8889u);
  /* 101c8889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c888b je 0x101c88a7 */
  if (C.zf) goto L_101c88a7;
  /* 101c888d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8894 jne 0x101c88a7 */
  if (!C.zf) goto L_101c88a7;
  /* 101c8896 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c889d jb 0x101c88a7 */
  if (C.cf) goto L_101c88a7;
  /* 101c889f push 1 */
  push32((uint32_t)(0x1u));
  /* 101c88a1 pop eax */
  EAX = (pop32());
  /* 101c88a2 jmp 0x101c89a9 */
  goto L_101c89a9;
L_101c88a7:;
  /* 101c88a7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101c88ad push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 101c88b2 push eax */
  push32((uint32_t)(EAX));
  /* 101c88b3 push 0x101ce1c8 */
  push32((uint32_t)(0x101ce1c8u));
  /* 101c88b8 call dword ptr [0x101ce06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce06c))), 0x101c88beu);
  /* 101c88be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c88c0 je 0x101c8996 */
  if (C.zf) goto L_101c8996;
  /* 101c88c6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c88c8 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 101c88ce cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c88d4 je 0x101c88e9 */
  if (C.zf) goto L_101c88e9;
L_101c88d6:;
  /* 101c88d6 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101c88d8 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c88da jl 0x101c88e4 */
  if ((C.sf!=C.of)) goto L_101c88e4;
  /* 101c88dc cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c88de jg 0x101c88e4 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c88e4;
  /* 101c88e0 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c88e2 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101c88e4:;
  /* 101c88e4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c88e5 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c88e7 jne 0x101c88d6 */
  if (!C.zf) goto L_101c88d6;
L_101c88e9:;
  /* 101c88e9 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101c88ef push 0x16 */
  push32((uint32_t)(0x16u));
  /* 101c88f1 push eax */
  push32((uint32_t)(EAX));
  /* 101c88f2 push 0x101ce1b0 */
  push32((uint32_t)(0x101ce1b0u));
  /* 101c88f7 call 0x101caf30 */
  push32(0x101c88fcu); f_101caf30();
  /* 101c88fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c88ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8901 jne 0x101c890b */
  if (!C.zf) goto L_101c890b;
  /* 101c8903 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101c8909 jmp 0x101c8954 */
  goto L_101c8954;
L_101c890b:;
  /* 101c890b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101c8911 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101c8916 push eax */
  push32((uint32_t)(EAX));
  /* 101c8917 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8918 call dword ptr [0x101ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce054))), 0x101c891eu);
  /* 101c891e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8924 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 101c892a je 0x101c893f */
  if (C.zf) goto L_101c893f;
L_101c892c:;
  /* 101c892c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101c892e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8930 jl 0x101c893a */
  if ((C.sf!=C.of)) goto L_101c893a;
  /* 101c8932 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8934 jg 0x101c893a */
  if ((!C.zf&&C.sf==C.of)) goto L_101c893a;
  /* 101c8936 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c8938 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101c893a:;
  /* 101c893a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c893b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c893d jne 0x101c892c */
  if (!C.zf) goto L_101c892c;
L_101c893f:;
  /* 101c893f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101c8945 push eax */
  push32((uint32_t)(EAX));
  /* 101c8946 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101c894c push eax */
  push32((uint32_t)(EAX));
  /* 101c894d call 0x101caeb0 */
  push32(0x101c8952u); f_101caeb0();
  /* 101c8952 pop ecx */
  ECX = (pop32());
  /* 101c8953 pop ecx */
  ECX = (pop32());
L_101c8954:;
  /* 101c8954 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8956 je 0x101c8996 */
  if (C.zf) goto L_101c8996;
  /* 101c8958 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101c895a push eax */
  push32((uint32_t)(EAX));
  /* 101c895b call 0x101cadf0 */
  push32(0x101c8960u); f_101cadf0();
  /* 101c8960 pop ecx */
  ECX = (pop32());
  /* 101c8961 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8963 pop ecx */
  ECX = (pop32());
  /* 101c8964 je 0x101c8996 */
  if (C.zf) goto L_101c8996;
  /* 101c8966 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8967 mov ecx, eax */
  ECX = (EAX);
  /* 101c8969 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c896b je 0x101c897b */
  if (C.zf) goto L_101c897b;
L_101c896d:;
  /* 101c896d cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8970 jne 0x101c8976 */
  if (!C.zf) goto L_101c8976;
  /* 101c8972 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101c8974 jmp 0x101c8977 */
  goto L_101c8977;
L_101c8976:;
  /* 101c8976 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101c8977:;
  /* 101c8977 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8979 jne 0x101c896d */
  if (!C.zf) goto L_101c896d;
L_101c897b:;
  /* 101c897b push 0xa */
  push32((uint32_t)(0xau));
  /* 101c897d push ebx */
  push32((uint32_t)(EBX));
  /* 101c897e push eax */
  push32((uint32_t)(EAX));
  /* 101c897f call 0x101cabb5 */
  push32(0x101c8984u); f_101cabb5();
  /* 101c8984 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8987 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c898a je 0x101c89a9 */
  if (C.zf) goto L_101c89a9;
  /* 101c898c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c898f je 0x101c89a9 */
  if (C.zf) goto L_101c89a9;
  /* 101c8991 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8994 je 0x101c89a9 */
  if (C.zf) goto L_101c89a9;
L_101c8996:;
  /* 101c8996 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101c8999 push eax */
  push32((uint32_t)(EAX));
  /* 101c899a call 0x101c8837 */
  push32(0x101c899fu); f_101c8837();
  /* 101c899f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c89a3 pop ecx */
  ECX = (pop32());
  /* 101c89a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c89a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101c89a9:;
  /* 101c89a9 pop ebx */
  EBX = (pop32());
  /* 101c89aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c89ab ret  */
  ESPCHK(0x101c8864u, _esp0);
  ESP += 4; return;
}

/* FUN_100089ac @ 0x101c89ac (93 bytes, 30 insns) */
void f_101c89ac(void) {
  FTRACE(0x101c89acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c89ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c89ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101c89b0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c89b4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101c89b9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101c89bc push eax */
  push32((uint32_t)(EAX));
  /* 101c89bd call dword ptr [0x101ce078] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce078))), 0x101c89c3u);
  /* 101c89c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c89c5 mov dword ptr [0x101d7b84], eax */
  w32((uint32_t)(0x101d7b84), (EAX));
  /* 101c89ca je 0x101c8a02 */
  if (C.zf) goto L_101c8a02;
  /* 101c89cc call 0x101c8864 */
  push32(0x101c89d1u); f_101c8864();
  /* 101c89d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c89d4 mov dword ptr [0x101d7b88], eax */
  w32((uint32_t)(0x101d7b88), (EAX));
  /* 101c89d9 jne 0x101c89e8 */
  if (!C.zf) goto L_101c89e8;
  /* 101c89db push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 101c89e0 call 0x101caf9f */
  push32(0x101c89e5u); f_101caf9f();
  /* 101c89e5 pop ecx */
  ECX = (pop32());
  /* 101c89e6 jmp 0x101c89f2 */
  goto L_101c89f2;
L_101c89e8:;
  /* 101c89e8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c89eb jne 0x101c8a05 */
  if (!C.zf) goto L_101c8a05;
  /* 101c89ed call 0x101cb7f0 */
  push32(0x101c89f2u); f_101cb7f0();
L_101c89f2:;
  /* 101c89f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c89f4 jne 0x101c8a05 */
  if (!C.zf) goto L_101c8a05;
  /* 101c89f6 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101c89fc call dword ptr [0x101ce074] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce074))), 0x101c8a02u);
L_101c8a02:;
  /* 101c8a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c8a04 ret  */
  ESPCHK(0x101c89acu, _esp0);
  ESP += 4; return;
L_101c8a05:;
  /* 101c8a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c8a07 pop eax */
  EAX = (pop32());
  /* 101c8a08 ret  */
  ESPCHK(0x101c89acu, _esp0);
  ESP += 4; return;
}

/* FUN_10008a09 @ 0x101c8a09 (168 bytes, 56 insns) */
void f_101c8a09(void) {
  FTRACE(0x101c8a09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8a09 mov eax, dword ptr [0x101d7b88] */
  EAX = (r32((uint32_t)(0x101d7b88)));
  /* 101c8a0e push esi */
  push32((uint32_t)(ESI));
  /* 101c8a0f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8a12 push edi */
  push32((uint32_t)(EDI));
  /* 101c8a13 jne 0x101c8a7b */
  if (!C.zf) goto L_101c8a7b;
  /* 101c8a15 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8a16 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c8a18 cmp dword ptr [0x101d6938], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d6938))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8a1e push ebp */
  push32((uint32_t)(EBP));
  /* 101c8a1f mov ebp, dword ptr [0x101ce080] */
  EBP = (r32((uint32_t)(0x101ce080)));
  /* 101c8a25 jle 0x101c8a67 */
  if ((C.zf||C.sf!=C.of)) goto L_101c8a67;
  /* 101c8a27 mov eax, dword ptr [0x101d693c] */
  EAX = (r32((uint32_t)(0x101d693c)));
  /* 101c8a2c mov edi, dword ptr [0x101ce07c] */
  EDI = (r32((uint32_t)(0x101ce07c)));
  /* 101c8a32 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_101c8a35:;
  /* 101c8a35 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101c8a3a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101c8a3f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c8a41 call edi */
  call_ind((uint32_t)(EDI), 0x101c8a43u);
  /* 101c8a43 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101c8a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8a4a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c8a4c call edi */
  call_ind((uint32_t)(EDI), 0x101c8a4eu);
  /* 101c8a4e push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101c8a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8a53 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101c8a59 call ebp */
  call_ind((uint32_t)(EBP), 0x101c8a5bu);
  /* 101c8a5b add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8a5e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c8a5f cmp ebx, dword ptr [0x101d6938] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101d6938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8a65 jl 0x101c8a35 */
  if ((C.sf!=C.of)) goto L_101c8a35;
L_101c8a67:;
  /* 101c8a67 push dword ptr [0x101d693c] */
  push32((uint32_t)(r32((uint32_t)(0x101d693c))));
  /* 101c8a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8a6f push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101c8a75 call ebp */
  call_ind((uint32_t)(EBP), 0x101c8a77u);
  /* 101c8a77 pop ebp */
  EBP = (pop32());
  /* 101c8a78 pop ebx */
  EBX = (pop32());
  /* 101c8a79 jmp 0x101c8aa2 */
  goto L_101c8aa2;
L_101c8a7b:;
  /* 101c8a7b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8a7e jne 0x101c8aa2 */
  if (!C.zf) goto L_101c8aa2;
  /* 101c8a80 mov edi, 0x101d0dd0 */
  EDI = (0x101d0dd0u);
  /* 101c8a85 mov esi, edi */
  ESI = (EDI);
L_101c8a87:;
  /* 101c8a87 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101c8a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8a8c je 0x101c8a9c */
  if (C.zf) goto L_101c8a9c;
  /* 101c8a8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101c8a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8a95 push eax */
  push32((uint32_t)(EAX));
  /* 101c8a96 call dword ptr [0x101ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce07c))), 0x101c8a9cu);
L_101c8a9c:;
  /* 101c8a9c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101c8a9e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8aa0 jne 0x101c8a87 */
  if (!C.zf) goto L_101c8a87;
L_101c8aa2:;
  /* 101c8aa2 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101c8aa8 call dword ptr [0x101ce074] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce074))), 0x101c8aaeu);
  /* 101c8aae pop edi */
  EDI = (pop32());
  /* 101c8aaf pop esi */
  ESI = (pop32());
  /* 101c8ab0 ret  */
  ESPCHK(0x101c8a09u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab1 @ 0x101c8ab1 (57 bytes, 18 insns) */
void f_101c8ab1(void) {
  FTRACE(0x101c8ab1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8ab1 mov eax, dword ptr [0x101d65c0] */
  EAX = (r32((uint32_t)(0x101d65c0)));
  /* 101c8ab6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8ab9 je 0x101c8ac8 */
  if (C.zf) goto L_101c8ac8;
  /* 101c8abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8abd jne 0x101c8ae9 */
  if (!C.zf) goto L_101c8ae9;
  /* 101c8abf cmp dword ptr [0x101d65c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d65c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8ac6 jne 0x101c8ae9 */
  if (!C.zf) goto L_101c8ae9;
L_101c8ac8:;
  /* 101c8ac8 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 101c8acd call 0x101c8aea */
  push32(0x101c8ad2u); f_101c8aea();
  /* 101c8ad2 mov eax, dword ptr [0x101d6714] */
  EAX = (r32((uint32_t)(0x101d6714)));
  /* 101c8ad7 pop ecx */
  ECX = (pop32());
  /* 101c8ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8ada je 0x101c8ade */
  if (C.zf) goto L_101c8ade;
  /* 101c8adc call eax */
  call_ind((uint32_t)(EAX), 0x101c8adeu);
L_101c8ade:;
  /* 101c8ade push 0xff */
  push32((uint32_t)(0xffu));
  /* 101c8ae3 call 0x101c8aea */
  push32(0x101c8ae8u); f_101c8aea();
  /* 101c8ae8 pop ecx */
  ECX = (pop32());
L_101c8ae9:;
  /* 101c8ae9 ret  */
  ESPCHK(0x101c8ab1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aea @ 0x101c8aea (339 bytes, 100 insns) */
void f_101c8aea(void) {
  FTRACE(0x101c8aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8aea push ebp */
  push32((uint32_t)(EBP));
  /* 101c8aeb mov ebp, esp */
  EBP = (ESP);
  /* 101c8aed sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c8af6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c8af8 mov eax, 0x101d0628 */
  EAX = (0x101d0628u);
L_101c8afd:;
  /* 101c8afd cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8aff je 0x101c8b0c */
  if (C.zf) goto L_101c8b0c;
  /* 101c8b01 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8b04 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c8b05 cmp eax, 0x101d06b8 */
  { uint32_t _a=(EAX),_b=(0x101d06b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b0a jl 0x101c8afd */
  if ((C.sf!=C.of)) goto L_101c8afd;
L_101c8b0c:;
  /* 101c8b0c push esi */
  push32((uint32_t)(ESI));
  /* 101c8b0d mov esi, ecx */
  ESI = (ECX);
  /* 101c8b0f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 101c8b12 cmp edx, dword ptr [esi + 0x101d0628] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101d0628))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b18 jne 0x101c8c3a */
  if (!C.zf) goto L_101c8c3a;
  /* 101c8b1e mov eax, dword ptr [0x101d65c0] */
  EAX = (r32((uint32_t)(0x101d65c0)));
  /* 101c8b23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b26 je 0x101c8c14 */
  if (C.zf) goto L_101c8c14;
  /* 101c8b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8b2e jne 0x101c8b3d */
  if (!C.zf) goto L_101c8b3d;
  /* 101c8b30 cmp dword ptr [0x101d65c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d65c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b37 je 0x101c8c14 */
  if (C.zf) goto L_101c8c14;
L_101c8b3d:;
  /* 101c8b3d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b43 je 0x101c8c3a */
  if (C.zf) goto L_101c8c3a;
  /* 101c8b49 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101c8b4f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101c8b54 push eax */
  push32((uint32_t)(EAX));
  /* 101c8b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8b57 call dword ptr [0x101ce054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce054))), 0x101c8b5du);
  /* 101c8b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8b5f jne 0x101c8b74 */
  if (!C.zf) goto L_101c8b74;
  /* 101c8b61 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101c8b67 push 0x101ce4b8 */
  push32((uint32_t)(0x101ce4b8u));
  /* 101c8b6c push eax */
  push32((uint32_t)(EAX));
  /* 101c8b6d call 0x101c9b90 */
  push32(0x101c8b72u); f_101c9b90();
  /* 101c8b72 pop ecx */
  ECX = (pop32());
  /* 101c8b73 pop ecx */
  ECX = (pop32());
L_101c8b74:;
  /* 101c8b74 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101c8b7a push edi */
  push32((uint32_t)(EDI));
  /* 101c8b7b push eax */
  push32((uint32_t)(EAX));
  /* 101c8b7c lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 101c8b82 call 0x101c90e0 */
  push32(0x101c8b87u); f_101c90e0();
  /* 101c8b87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8b88 pop ecx */
  ECX = (pop32());
  /* 101c8b89 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8b8c jbe 0x101c8bb7 */
  if ((C.cf||C.zf)) goto L_101c8bb7;
  /* 101c8b8e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101c8b94 push eax */
  push32((uint32_t)(EAX));
  /* 101c8b95 call 0x101c90e0 */
  push32(0x101c8b9au); f_101c90e0();
  /* 101c8b9a mov edi, eax */
  EDI = (EAX);
  /* 101c8b9c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101c8ba2 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8ba5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c8ba7 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8ba9 push 0x101ce4b4 */
  push32((uint32_t)(0x101ce4b4u));
  /* 101c8bae push edi */
  push32((uint32_t)(EDI));
  /* 101c8baf call 0x101cbea0 */
  push32(0x101c8bb4u); f_101cbea0();
  /* 101c8bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c8bb7:;
  /* 101c8bb7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101c8bbd push 0x101ce498 */
  push32((uint32_t)(0x101ce498u));
  /* 101c8bc2 push eax */
  push32((uint32_t)(EAX));
  /* 101c8bc3 call 0x101c9b90 */
  push32(0x101c8bc8u); f_101c9b90();
  /* 101c8bc8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101c8bce push edi */
  push32((uint32_t)(EDI));
  /* 101c8bcf push eax */
  push32((uint32_t)(EAX));
  /* 101c8bd0 call 0x101c9ba0 */
  push32(0x101c8bd5u); f_101c9ba0();
  /* 101c8bd5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101c8bdb push 0x101ce494 */
  push32((uint32_t)(0x101ce494u));
  /* 101c8be0 push eax */
  push32((uint32_t)(EAX));
  /* 101c8be1 call 0x101c9ba0 */
  push32(0x101c8be6u); f_101c9ba0();
  /* 101c8be6 push dword ptr [esi + 0x101d062c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101d062c))));
  /* 101c8bec lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101c8bf2 push eax */
  push32((uint32_t)(EAX));
  /* 101c8bf3 call 0x101c9ba0 */
  push32(0x101c8bf8u); f_101c9ba0();
  /* 101c8bf8 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 101c8bfd lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101c8c03 push 0x101ce46c */
  push32((uint32_t)(0x101ce46cu));
  /* 101c8c08 push eax */
  push32((uint32_t)(EAX));
  /* 101c8c09 call 0x101cbe14 */
  push32(0x101c8c0eu); f_101cbe14();
  /* 101c8c0e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8c11 pop edi */
  EDI = (pop32());
  /* 101c8c12 jmp 0x101c8c3a */
  goto L_101c8c3a;
L_101c8c14:;
  /* 101c8c14 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101c8c17 lea esi, [esi + 0x101d062c] */
  ESI = ((uint32_t)(ESI + 0x101d062c));
  /* 101c8c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8c1f push eax */
  push32((uint32_t)(EAX));
  /* 101c8c20 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c8c22 call 0x101c90e0 */
  push32(0x101c8c27u); f_101c90e0();
  /* 101c8c27 pop ecx */
  ECX = (pop32());
  /* 101c8c28 push eax */
  push32((uint32_t)(EAX));
  /* 101c8c29 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101c8c2b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101c8c2d call dword ptr [0x101ce044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce044))), 0x101c8c33u);
  /* 101c8c33 push eax */
  push32((uint32_t)(EAX));
  /* 101c8c34 call dword ptr [0x101ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce084))), 0x101c8c3au);
L_101c8c3a:;
  /* 101c8c3a pop esi */
  ESI = (pop32());
  /* 101c8c3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c8c3c ret  */
  ESPCHK(0x101c8aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10008c3d @ 0x101c8c3d (101 bytes, 34 insns) */
void f_101c8c3d(void) {
  FTRACE(0x101c8c3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8c3d push esi */
  push32((uint32_t)(ESI));
  /* 101c8c3e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c8c42 cmp esi, dword ptr [0x101d7ca0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8c48 jae 0x101c8c8a */
  if (!C.cf) goto L_101c8c8a;
  /* 101c8c4a mov ecx, esi */
  ECX = (ESI);
  /* 101c8c4c mov eax, esi */
  EAX = (ESI);
  /* 101c8c4e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c8c51 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8c54 mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c8c5b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c8c5e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101c8c63 je 0x101c8c8a */
  if (C.zf) goto L_101c8c8a;
  /* 101c8c65 push edi */
  push32((uint32_t)(EDI));
  /* 101c8c66 push esi */
  push32((uint32_t)(ESI));
  /* 101c8c67 call 0x101cc0e4 */
  push32(0x101c8c6cu); f_101cc0e4();
  /* 101c8c6c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c8c70 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c8c74 push esi */
  push32((uint32_t)(ESI));
  /* 101c8c75 call 0x101c8ca2 */
  push32(0x101c8c7au); f_101c8ca2();
  /* 101c8c7a push esi */
  push32((uint32_t)(ESI));
  /* 101c8c7b mov edi, eax */
  EDI = (EAX);
  /* 101c8c7d call 0x101cc143 */
  push32(0x101c8c82u); f_101cc143();
  /* 101c8c82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8c85 mov eax, edi */
  EAX = (EDI);
  /* 101c8c87 pop edi */
  EDI = (pop32());
  /* 101c8c88 pop esi */
  ESI = (pop32());
  /* 101c8c89 ret  */
  ESPCHK(0x101c8c3du, _esp0);
  ESP += 4; return;
L_101c8c8a:;
  /* 101c8c8a call 0x101cc011 */
  push32(0x101c8c8fu); f_101cc011();
  /* 101c8c8f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101c8c95 call 0x101cc01a */
  push32(0x101c8c9au); f_101cc01a();
  /* 101c8c9a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101c8c9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8ca0 pop esi */
  ESI = (pop32());
  /* 101c8ca1 ret  */
  ESPCHK(0x101c8c3du, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca2 @ 0x101c8ca2 (115 bytes, 41 insns) */
void f_101c8ca2(void) {
  FTRACE(0x101c8ca2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8ca2 push esi */
  push32((uint32_t)(ESI));
  /* 101c8ca3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c8ca7 push edi */
  push32((uint32_t)(EDI));
  /* 101c8ca8 push esi */
  push32((uint32_t)(ESI));
  /* 101c8ca9 call 0x101cc0a2 */
  push32(0x101c8caeu); f_101cc0a2();
  /* 101c8cae cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8cb1 pop ecx */
  ECX = (pop32());
  /* 101c8cb2 jne 0x101c8cc1 */
  if (!C.zf) goto L_101c8cc1;
  /* 101c8cb4 call 0x101cc011 */
  push32(0x101c8cb9u); f_101cc011();
  /* 101c8cb9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101c8cbf jmp 0x101c8cee */
  goto L_101c8cee;
L_101c8cc1:;
  /* 101c8cc1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101c8cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8cc7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c8ccb push eax */
  push32((uint32_t)(EAX));
  /* 101c8ccc call dword ptr [0x101ce000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce000))), 0x101c8cd2u);
  /* 101c8cd2 mov edi, eax */
  EDI = (EAX);
  /* 101c8cd4 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8cd7 jne 0x101c8ce1 */
  if (!C.zf) goto L_101c8ce1;
  /* 101c8cd9 call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101c8cdfu);
  /* 101c8cdf jmp 0x101c8ce3 */
  goto L_101c8ce3;
L_101c8ce1:;
  /* 101c8ce1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c8ce3:;
  /* 101c8ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8ce5 je 0x101c8cf3 */
  if (C.zf) goto L_101c8cf3;
  /* 101c8ce7 push eax */
  push32((uint32_t)(EAX));
  /* 101c8ce8 call 0x101cbf9e */
  push32(0x101c8cedu); f_101cbf9e();
  /* 101c8ced pop ecx */
  ECX = (pop32());
L_101c8cee:;
  /* 101c8cee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8cf1 jmp 0x101c8d12 */
  goto L_101c8d12;
L_101c8cf3:;
  /* 101c8cf3 mov ecx, esi */
  ECX = (ESI);
  /* 101c8cf5 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101c8cf8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c8cfb mov eax, esi */
  EAX = (ESI);
  /* 101c8cfd mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c8d04 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c8d07 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101c8d0c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 101c8d10 mov eax, edi */
  EAX = (EDI);
L_101c8d12:;
  /* 101c8d12 pop edi */
  EDI = (pop32());
  /* 101c8d13 pop esi */
  ESI = (pop32());
  /* 101c8d14 ret  */
  ESPCHK(0x101c8ca2u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d15 @ 0x101c8d15 (101 bytes, 34 insns) */
void f_101c8d15(void) {
  FTRACE(0x101c8d15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8d15 push esi */
  push32((uint32_t)(ESI));
  /* 101c8d16 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c8d1a cmp esi, dword ptr [0x101d7ca0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8d20 jae 0x101c8d62 */
  if (!C.cf) goto L_101c8d62;
  /* 101c8d22 mov ecx, esi */
  ECX = (ESI);
  /* 101c8d24 mov eax, esi */
  EAX = (ESI);
  /* 101c8d26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c8d29 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8d2c mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c8d33 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c8d36 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101c8d3b je 0x101c8d62 */
  if (C.zf) goto L_101c8d62;
  /* 101c8d3d push edi */
  push32((uint32_t)(EDI));
  /* 101c8d3e push esi */
  push32((uint32_t)(ESI));
  /* 101c8d3f call 0x101cc0e4 */
  push32(0x101c8d44u); f_101cc0e4();
  /* 101c8d44 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c8d48 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101c8d4c push esi */
  push32((uint32_t)(ESI));
  /* 101c8d4d call 0x101c8d7a */
  push32(0x101c8d52u); f_101c8d7a();
  /* 101c8d52 push esi */
  push32((uint32_t)(ESI));
  /* 101c8d53 mov edi, eax */
  EDI = (EAX);
  /* 101c8d55 call 0x101cc143 */
  push32(0x101c8d5au); f_101cc143();
  /* 101c8d5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8d5d mov eax, edi */
  EAX = (EDI);
  /* 101c8d5f pop edi */
  EDI = (pop32());
  /* 101c8d60 pop esi */
  ESI = (pop32());
  /* 101c8d61 ret  */
  ESPCHK(0x101c8d15u, _esp0);
  ESP += 4; return;
L_101c8d62:;
  /* 101c8d62 call 0x101cc011 */
  push32(0x101c8d67u); f_101cc011();
  /* 101c8d67 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101c8d6d call 0x101cc01a */
  push32(0x101c8d72u); f_101cc01a();
  /* 101c8d72 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101c8d75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8d78 pop esi */
  ESI = (pop32());
  /* 101c8d79 ret  */
  ESPCHK(0x101c8d15u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d7a @ 0x101c8d7a (395 bytes, 135 insns) */
void f_101c8d7a(void) {
  FTRACE(0x101c8d7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8d7a push ebp */
  push32((uint32_t)(EBP));
  /* 101c8d7b mov ebp, esp */
  EBP = (ESP);
  /* 101c8d7d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8d83 push ebx */
  push32((uint32_t)(EBX));
  /* 101c8d84 push esi */
  push32((uint32_t)(ESI));
  /* 101c8d85 push edi */
  push32((uint32_t)(EDI));
  /* 101c8d86 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101c8d88 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8d8b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101c8d8e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 101c8d91 jne 0x101c8d9a */
  if (!C.zf) goto L_101c8d9a;
L_101c8d93:;
  /* 101c8d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c8d95 jmp 0x101c8f00 */
  goto L_101c8f00;
L_101c8d9a:;
  /* 101c8d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c8d9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101c8da0 lea ebx, [eax*4 + 0x101d7ba0] */
  EBX = ((uint32_t)(EAX*4 + 0x101d7ba0));
  /* 101c8da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c8daa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8dad lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101c8db0 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101c8db2 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101c8db5 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101c8dba je 0x101c8dca */
  if (C.zf) goto L_101c8dca;
  /* 101c8dbc push 2 */
  push32((uint32_t)(0x2u));
  /* 101c8dbe push edi */
  push32((uint32_t)(EDI));
  /* 101c8dbf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c8dc2 call 0x101c8ca2 */
  push32(0x101c8dc7u); f_101c8ca2();
  /* 101c8dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c8dca:;
  /* 101c8dca mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101c8dcc add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c8dce test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101c8dd2 je 0x101c8e99 */
  if (C.zf) goto L_101c8e99;
  /* 101c8dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c8ddb cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101c8de1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101c8de4 jbe 0x101c8ed4 */
  if ((C.cf||C.zf)) goto L_101c8ed4;
L_101c8dea:;
  /* 101c8dea lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_101c8df0:;
  /* 101c8df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c8df3 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8df6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8df9 jae 0x101c8e24 */
  if (!C.cf) goto L_101c8e24;
  /* 101c8dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c8dfe inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101c8e01 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 101c8e03 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8e06 jne 0x101c8e0f */
  if (!C.zf) goto L_101c8e0f;
  /* 101c8e08 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101c8e0b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 101c8e0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101c8e0f:;
  /* 101c8e0f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101c8e11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c8e12 mov ecx, eax */
  ECX = (EAX);
  /* 101c8e14 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 101c8e1a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8e1c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e22 jl 0x101c8df0 */
  if ((C.sf!=C.of)) goto L_101c8df0;
L_101c8e24:;
  /* 101c8e24 mov edi, eax */
  EDI = (EAX);
  /* 101c8e26 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101c8e2c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8e2e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c8e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c8e33 push eax */
  push32((uint32_t)(EAX));
  /* 101c8e34 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101c8e3a push edi */
  push32((uint32_t)(EDI));
  /* 101c8e3b push eax */
  push32((uint32_t)(EAX));
  /* 101c8e3c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101c8e3e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 101c8e41 call dword ptr [0x101ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce084))), 0x101c8e47u);
  /* 101c8e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8e49 je 0x101c8e8e */
  if (C.zf) goto L_101c8e8e;
  /* 101c8e4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c8e4e add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101c8e51 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e53 jl 0x101c8e60 */
  if ((C.sf!=C.of)) goto L_101c8e60;
  /* 101c8e55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c8e58 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c8e5b cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e5e jb 0x101c8dea */
  if (C.cf) goto L_101c8dea;
L_101c8e60:;
  /* 101c8e60 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101c8e62:;
  /* 101c8e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c8e65 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e67 jne 0x101c8efd */
  if (!C.zf) goto L_101c8efd;
  /* 101c8e6d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e70 je 0x101c8ed4 */
  if (C.zf) goto L_101c8ed4;
  /* 101c8e72 push 5 */
  push32((uint32_t)(0x5u));
  /* 101c8e74 pop esi */
  ESI = (pop32());
  /* 101c8e75 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8e78 jne 0x101c8ec6 */
  if (!C.zf) goto L_101c8ec6;
  /* 101c8e7a call 0x101cc011 */
  push32(0x101c8e7fu); f_101cc011();
  /* 101c8e7f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101c8e85 call 0x101cc01a */
  push32(0x101c8e8au); f_101cc01a();
  /* 101c8e8a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101c8e8c jmp 0x101c8ecf */
  goto L_101c8ecf;
L_101c8e8e:;
  /* 101c8e8e call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101c8e94u);
  /* 101c8e94 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101c8e97 jmp 0x101c8e60 */
  goto L_101c8e60;
L_101c8e99:;
  /* 101c8e99 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 101c8e9c push edi */
  push32((uint32_t)(EDI));
  /* 101c8e9d push ecx */
  push32((uint32_t)(ECX));
  /* 101c8e9e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101c8ea1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c8ea4 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101c8ea6 call dword ptr [0x101ce084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce084))), 0x101c8eacu);
  /* 101c8eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8eae je 0x101c8ebb */
  if (C.zf) goto L_101c8ebb;
  /* 101c8eb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101c8eb3 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101c8eb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101c8eb9 jmp 0x101c8e62 */
  goto L_101c8e62;
L_101c8ebb:;
  /* 101c8ebb call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101c8ec1u);
  /* 101c8ec1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101c8ec4 jmp 0x101c8e62 */
  goto L_101c8e62;
L_101c8ec6:;
  /* 101c8ec6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c8ec9 call 0x101cbf9e */
  push32(0x101c8eceu); f_101cbf9e();
  /* 101c8ece pop ecx */
  ECX = (pop32());
L_101c8ecf:;
  /* 101c8ecf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8ed2 jmp 0x101c8f00 */
  goto L_101c8f00;
L_101c8ed4:;
  /* 101c8ed4 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101c8ed6 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101c8edb je 0x101c8ee9 */
  if (C.zf) goto L_101c8ee9;
  /* 101c8edd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c8ee0 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c8ee3 je 0x101c8d93 */
  if (C.zf) goto L_101c8d93;
L_101c8ee9:;
  /* 101c8ee9 call 0x101cc011 */
  push32(0x101c8eeeu); f_101cc011();
  /* 101c8eee mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 101c8ef4 call 0x101cc01a */
  push32(0x101c8ef9u); f_101cc01a();
  /* 101c8ef9 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101c8efb jmp 0x101c8ecf */
  goto L_101c8ecf;
L_101c8efd:;
  /* 101c8efd sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101c8f00:;
  /* 101c8f00 pop edi */
  EDI = (pop32());
  /* 101c8f01 pop esi */
  ESI = (pop32());
  /* 101c8f02 pop ebx */
  EBX = (pop32());
  /* 101c8f03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c8f04 ret  */
  ESPCHK(0x101c8d7au, _esp0);
  ESP += 4; return;
}

/* FUN_10008f05 @ 0x101c8f05 (68 bytes, 19 insns) */
void f_101c8f05(void) {
  FTRACE(0x101c8f05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8f05 inc dword ptr [0x101d6718] */
  { uint32_t _r=(r32((uint32_t)(0x101d6718)))+1; w32((uint32_t)(0x101d6718), (_r)); fl_inc(_r,32); }
  /* 101c8f0b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101c8f10 call 0x101ca34f */
  push32(0x101c8f15u); f_101ca34f();
  /* 101c8f15 pop ecx */
  ECX = (pop32());
  /* 101c8f16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c8f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c8f1c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101c8f1f je 0x101c8f2e */
  if (C.zf) goto L_101c8f2e;
  /* 101c8f21 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101c8f25 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 101c8f2c jmp 0x101c8f3f */
  goto L_101c8f3f;
L_101c8f2e:;
  /* 101c8f2e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101c8f32 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 101c8f35 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101c8f38 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_101c8f3f:;
  /* 101c8f3f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101c8f42 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101c8f46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101c8f48 ret  */
  ESPCHK(0x101c8f05u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f49 @ 0x101c8f49 (41 bytes, 13 insns) */
void f_101c8f49(void) {
  FTRACE(0x101c8f49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c8f49 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c8f4d cmp eax, dword ptr [0x101d7ca0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c8f53 jb 0x101c8f58 */
  if (C.cf) goto L_101c8f58;
  /* 101c8f55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c8f57 ret  */
  ESPCHK(0x101c8f49u, _esp0);
  ESP += 4; return;
L_101c8f58:;
  /* 101c8f58 mov ecx, eax */
  ECX = (EAX);
  /* 101c8f5a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101c8f5d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101c8f60 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101c8f63 mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101c8f6a mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 101c8f6e and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 101c8f71 ret  */
  ESPCHK(0x101c8f49u, _esp0);
  ESP += 4; return;
}

/* FUN_1000902e @ 0x101c902e (47 bytes, 17 insns) */
void f_101c902e(void) {
  FTRACE(0x101c902eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c902e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9032 mov ecx, 0x101d06b8 */
  ECX = (0x101d06b8u);
  /* 101c9037 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9039 jb 0x101c9052 */
  if (C.cf) goto L_101c9052;
  /* 101c903b cmp eax, 0x101d0918 */
  { uint32_t _a=(EAX),_b=(0x101d0918u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9040 ja 0x101c9052 */
  if ((!C.cf&&!C.zf)) goto L_101c9052;
  /* 101c9042 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9044 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101c9047 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c904a push eax */
  push32((uint32_t)(EAX));
  /* 101c904b call 0x101ca0b3 */
  push32(0x101c9050u); f_101ca0b3();
  /* 101c9050 pop ecx */
  ECX = (pop32());
  /* 101c9051 ret  */
  ESPCHK(0x101c902eu, _esp0);
  ESP += 4; return;
L_101c9052:;
  /* 101c9052 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9055 push eax */
  push32((uint32_t)(EAX));
  /* 101c9056 call dword ptr [0x101ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce00c))), 0x101c905cu);
  /* 101c905c ret  */
  ESPCHK(0x101c902eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000905d @ 0x101c905d (35 bytes, 13 insns) */
void f_101c905d(void) {
  FTRACE(0x101c905du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c905d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9061 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9064 jge 0x101c9071 */
  if ((C.sf==C.of)) goto L_101c9071;
  /* 101c9066 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9069 push eax */
  push32((uint32_t)(EAX));
  /* 101c906a call 0x101ca0b3 */
  push32(0x101c906fu); f_101ca0b3();
  /* 101c906f pop ecx */
  ECX = (pop32());
  /* 101c9070 ret  */
  ESPCHK(0x101c905du, _esp0);
  ESP += 4; return;
L_101c9071:;
  /* 101c9071 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9075 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9078 push eax */
  push32((uint32_t)(EAX));
  /* 101c9079 call dword ptr [0x101ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce00c))), 0x101c907fu);
  /* 101c907f ret  */
  ESPCHK(0x101c905du, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x101c9080 (47 bytes, 17 insns) */
void f_101c9080(void) {
  FTRACE(0x101c9080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9080 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9084 mov ecx, 0x101d06b8 */
  ECX = (0x101d06b8u);
  /* 101c9089 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c908b jb 0x101c90a4 */
  if (C.cf) goto L_101c90a4;
  /* 101c908d cmp eax, 0x101d0918 */
  { uint32_t _a=(EAX),_b=(0x101d0918u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9092 ja 0x101c90a4 */
  if ((!C.cf&&!C.zf)) goto L_101c90a4;
  /* 101c9094 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9096 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101c9099 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c909c push eax */
  push32((uint32_t)(EAX));
  /* 101c909d call 0x101ca114 */
  push32(0x101c90a2u); f_101ca114();
  /* 101c90a2 pop ecx */
  ECX = (pop32());
  /* 101c90a3 ret  */
  ESPCHK(0x101c9080u, _esp0);
  ESP += 4; return;
L_101c90a4:;
  /* 101c90a4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c90a7 push eax */
  push32((uint32_t)(EAX));
  /* 101c90a8 call dword ptr [0x101ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce008))), 0x101c90aeu);
  /* 101c90ae ret  */
  ESPCHK(0x101c9080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090af @ 0x101c90af (35 bytes, 13 insns) */
void f_101c90af(void) {
  FTRACE(0x101c90afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c90af mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c90b3 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c90b6 jge 0x101c90c3 */
  if ((C.sf==C.of)) goto L_101c90c3;
  /* 101c90b8 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c90bb push eax */
  push32((uint32_t)(EAX));
  /* 101c90bc call 0x101ca114 */
  push32(0x101c90c1u); f_101ca114();
  /* 101c90c1 pop ecx */
  ECX = (pop32());
  /* 101c90c2 ret  */
  ESPCHK(0x101c90afu, _esp0);
  ESP += 4; return;
L_101c90c3:;
  /* 101c90c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c90c7 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c90ca push eax */
  push32((uint32_t)(EAX));
  /* 101c90cb call dword ptr [0x101ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce008))), 0x101c90d1u);
  /* 101c90d1 ret  */
  ESPCHK(0x101c90afu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x101c90e0 (123 bytes, 44 insns) */
void f_101c90e0(void) {
  FTRACE(0x101c90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c90e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c90e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c90ea je 0x101c9100 */
  if (C.zf) goto L_101c9100;
L_101c90ec:;
  /* 101c90ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101c90ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c90ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c90f1 je 0x101c9133 */
  if (C.zf) goto L_101c9133;
  /* 101c90f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c90f9 jne 0x101c90ec */
  if (!C.zf) goto L_101c90ec;
  /* 101c90fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101c9100:;
  /* 101c9100 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101c9102 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101c9107 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9109 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c910c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101c910e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9111 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101c9116 je 0x101c9100 */
  if (C.zf) goto L_101c9100;
  /* 101c9118 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101c911b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c911d je 0x101c9151 */
  if (C.zf) goto L_101c9151;
  /* 101c911f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101c9121 je 0x101c9147 */
  if (C.zf) goto L_101c9147;
  /* 101c9123 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101c9128 je 0x101c913d */
  if (C.zf) goto L_101c913d;
  /* 101c912a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101c912f je 0x101c9133 */
  if (C.zf) goto L_101c9133;
  /* 101c9131 jmp 0x101c9100 */
  goto L_101c9100;
L_101c9133:;
  /* 101c9133 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 101c9136 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c913a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c913c ret  */
  ESPCHK(0x101c90e0u, _esp0);
  ESP += 4; return;
L_101c913d:;
  /* 101c913d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101c9140 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9144 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9146 ret  */
  ESPCHK(0x101c90e0u, _esp0);
  ESP += 4; return;
L_101c9147:;
  /* 101c9147 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101c914a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c914e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9150 ret  */
  ESPCHK(0x101c90e0u, _esp0);
  ESP += 4; return;
L_101c9151:;
  /* 101c9151 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101c9154 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9158 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c915a ret  */
  ESPCHK(0x101c90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000915b @ 0x101c915b (89 bytes, 39 insns) */
void f_101c915b(void) {
  FTRACE(0x101c915bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c915b push ebp */
  push32((uint32_t)(EBP));
  /* 101c915c mov ebp, esp */
  EBP = (ESP);
  /* 101c915e push ebx */
  push32((uint32_t)(EBX));
  /* 101c915f push esi */
  push32((uint32_t)(ESI));
  /* 101c9160 mov esi, 0x101d6924 */
  ESI = (0x101d6924u);
  /* 101c9165 push edi */
  push32((uint32_t)(EDI));
  /* 101c9166 push esi */
  push32((uint32_t)(ESI));
  /* 101c9167 call dword ptr [0x101ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce090))), 0x101c916du);
  /* 101c916d mov edi, dword ptr [0x101ce08c] */
  EDI = (r32((uint32_t)(0x101ce08c)));
  /* 101c9173 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c9175 cmp dword ptr [0x101d6920], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d6920))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c917b je 0x101c918b */
  if (C.zf) goto L_101c918b;
  /* 101c917d push esi */
  push32((uint32_t)(ESI));
  /* 101c917e call edi */
  call_ind((uint32_t)(EDI), 0x101c9180u);
  /* 101c9180 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c9182 call 0x101ca0b3 */
  push32(0x101c9187u); f_101ca0b3();
  /* 101c9187 pop ecx */
  ECX = (pop32());
  /* 101c9188 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c918a pop ebx */
  EBX = (pop32());
L_101c918b:;
  /* 101c918b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c918e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c9191 call 0x101c91b4 */
  push32(0x101c9196u); f_101c91b4();
  /* 101c9196 pop ecx */
  ECX = (pop32());
  /* 101c9197 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c919a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c919c pop ecx */
  ECX = (pop32());
  /* 101c919d je 0x101c91a9 */
  if (C.zf) goto L_101c91a9;
  /* 101c919f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c91a1 call 0x101ca114 */
  push32(0x101c91a6u); f_101ca114();
  /* 101c91a6 pop ecx */
  ECX = (pop32());
  /* 101c91a7 jmp 0x101c91ac */
  goto L_101c91ac;
L_101c91a9:;
  /* 101c91a9 push esi */
  push32((uint32_t)(ESI));
  /* 101c91aa call edi */
  call_ind((uint32_t)(EDI), 0x101c91acu);
L_101c91ac:;
  /* 101c91ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c91af pop edi */
  EDI = (pop32());
  /* 101c91b0 pop esi */
  ESI = (pop32());
  /* 101c91b1 pop ebx */
  EBX = (pop32());
  /* 101c91b2 pop ebp */
  EBP = (pop32());
  /* 101c91b3 ret  */
  ESPCHK(0x101c915bu, _esp0);
  ESP += 4; return;
}

/* FUN_100091b4 @ 0x101c91b4 (105 bytes, 38 insns) */
void f_101c91b4(void) {
  FTRACE(0x101c91b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c91b4 push ebp */
  push32((uint32_t)(EBP));
  /* 101c91b5 mov ebp, esp */
  EBP = (ESP);
  /* 101c91b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c91ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c91bc jne 0x101c91c0 */
  if (!C.zf) goto L_101c91c0;
  /* 101c91be pop ebp */
  EBP = (pop32());
  /* 101c91bf ret  */
  ESPCHK(0x101c91b4u, _esp0);
  ESP += 4; return;
L_101c91c0:;
  /* 101c91c0 cmp dword ptr [0x101d67a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d67a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c91c7 jne 0x101c91db */
  if (!C.zf) goto L_101c91db;
  /* 101c91c9 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 101c91cd cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101c91d2 ja 0x101c920d */
  if ((!C.cf&&!C.zf)) goto L_101c920d;
  /* 101c91d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c91d6 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101c91d8 pop eax */
  EAX = (pop32());
  /* 101c91d9 pop ebp */
  EBP = (pop32());
  /* 101c91da ret  */
  ESPCHK(0x101c91b4u, _esp0);
  ESP += 4; return;
L_101c91db:;
  /* 101c91db lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 101c91de and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 101c91e2 push ecx */
  push32((uint32_t)(ECX));
  /* 101c91e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101c91e5 push dword ptr [0x101d0b50] */
  push32((uint32_t)(r32((uint32_t)(0x101d0b50))));
  /* 101c91eb push eax */
  push32((uint32_t)(EAX));
  /* 101c91ec lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101c91ef push 1 */
  push32((uint32_t)(0x1u));
  /* 101c91f1 push eax */
  push32((uint32_t)(EAX));
  /* 101c91f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101c91f7 push dword ptr [0x101d67b8] */
  push32((uint32_t)(r32((uint32_t)(0x101d67b8))));
  /* 101c91fd call dword ptr [0x101ce060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce060))), 0x101c9203u);
  /* 101c9203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c9205 je 0x101c920d */
  if (C.zf) goto L_101c920d;
  /* 101c9207 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c920b je 0x101c921b */
  if (C.zf) goto L_101c921b;
L_101c920d:;
  /* 101c920d call 0x101cc011 */
  push32(0x101c9212u); f_101cc011();
  /* 101c9212 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 101c9218 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101c921b:;
  /* 101c921b pop ebp */
  EBP = (pop32());
  /* 101c921c ret  */
  ESPCHK(0x101c91b4u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x101c9220 (104 bytes, 43 insns) */
void f_101c9220(void) {
  FTRACE(0x101c9220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9220 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9221 push esi */
  push32((uint32_t)(ESI));
  /* 101c9222 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101c9226 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9228 jne 0x101c9242 */
  if (!C.zf) goto L_101c9242;
  /* 101c922a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c922e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c9232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9234 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c9236 mov ebx, eax */
  EBX = (EAX);
  /* 101c9238 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c923c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c923e mov edx, ebx */
  EDX = (EBX);
  /* 101c9240 jmp 0x101c9283 */
  goto L_101c9283;
L_101c9242:;
  /* 101c9242 mov ecx, eax */
  ECX = (EAX);
  /* 101c9244 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c9248 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c924c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101c9250:;
  /* 101c9250 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101c9252 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101c9254 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101c9256 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101c9258 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c925a jne 0x101c9250 */
  if (!C.zf) goto L_101c9250;
  /* 101c925c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c925e mov esi, eax */
  ESI = (EAX);
  /* 101c9260 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101c9264 mov ecx, eax */
  ECX = (EAX);
  /* 101c9266 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c926a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101c926c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c926e jb 0x101c927e */
  if (C.cf) goto L_101c927e;
  /* 101c9270 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9274 ja 0x101c927e */
  if ((!C.cf&&!C.zf)) goto L_101c927e;
  /* 101c9276 jb 0x101c927f */
  if (C.cf) goto L_101c927f;
  /* 101c9278 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c927c jbe 0x101c927f */
  if ((C.cf||C.zf)) goto L_101c927f;
L_101c927e:;
  /* 101c927e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101c927f:;
  /* 101c927f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9281 mov eax, esi */
  EAX = (ESI);
L_101c9283:;
  /* 101c9283 pop esi */
  ESI = (pop32());
  /* 101c9284 pop ebx */
  EBX = (pop32());
  /* 101c9285 ret 0x10 */
  ESPCHK(0x101c9220u, _esp0);
  ESP += 20; return;
}

