#include "recomp.h"

/* FUN_10010fe0 @ 0x10ad0fe0 (878 bytes, 273 insns) */
void f_10ad0fe0(void) {
  FTRACE(0x10ad0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0fe3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0fe6 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0fe7 mov eax, dword ptr [0x10aeec98] */
  EAX = (r32((uint32_t)(0x10aeec98)));
  /* 10ad0fec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad0fef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad0ff6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad0ffd jmp 0x10ad1008 */
  goto L_10ad1008;
L_10ad0fff:;
  /* 10ad0fff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1002 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1005 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ad1008:;
  /* 10ad1008 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad100c jae 0x10ad1041 */
  if (!C.cf) goto L_10ad1041;
  /* 10ad100e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1014 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ad1017 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1018 call 0x10ac6e60 */
  push32(0x10ad101du); f_10ac6e60();
  /* 10ad101d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1020 mov esi, eax */
  ESI = (EAX);
  /* 10ad1022 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1028 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10ad102c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad102d call 0x10ac6e60 */
  push32(0x10ad1032u); f_10ac6e60();
  /* 10ad1032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1035 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1038 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ad103c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad103f jmp 0x10ad0fff */
  goto L_10ad0fff;
L_10ad1041:;
  /* 10ad1041 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad1048 jmp 0x10ad1053 */
  goto L_10ad1053;
L_10ad104a:;
  /* 10ad104a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad104d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1050 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ad1053:;
  /* 10ad1053 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1057 jae 0x10ad108d */
  if (!C.cf) goto L_10ad108d;
  /* 10ad1059 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad105c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad105f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10ad1063 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1064 call 0x10ac6e60 */
  push32(0x10ad1069u); f_10ac6e60();
  /* 10ad1069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad106c mov esi, eax */
  ESI = (EAX);
  /* 10ad106e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1071 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1074 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ad1078 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1079 call 0x10ac6e60 */
  push32(0x10ad107eu); f_10ac6e60();
  /* 10ad107e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1081 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1084 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ad1088 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad108b jmp 0x10ad104a */
  goto L_10ad104a;
L_10ad108d:;
  /* 10ad108d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1090 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10ad1096 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1097 call 0x10ac6e60 */
  push32(0x10ad109cu); f_10ac6e60();
  /* 10ad109c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad109f mov esi, eax */
  ESI = (EAX);
  /* 10ad10a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad10a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10ad10aa push edx */
  push32((uint32_t)(EDX));
  /* 10ad10ab call 0x10ac6e60 */
  push32(0x10ad10b0u); f_10ac6e60();
  /* 10ad10b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad10b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad10b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ad10ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad10bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad10c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10ad10c6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad10c7 call 0x10ac6e60 */
  push32(0x10ad10ccu); f_10ac6e60();
  /* 10ad10cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad10cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad10d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad10d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad10d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad10dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10ad10e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad10e3 call 0x10ac6e60 */
  push32(0x10ad10e8u); f_10ac6e60();
  /* 10ad10e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad10eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad10ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ad10f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad10f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad10f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10ad10fe push edx */
  push32((uint32_t)(EDX));
  /* 10ad10ff call 0x10ac6e60 */
  push32(0x10ad1104u); f_10ac6e60();
  /* 10ad1104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad110a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad110e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad1111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad1114 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1119 push eax */
  push32((uint32_t)(EAX));
  /* 10ad111a call 0x10ac4010 */
  push32(0x10ad111fu); f_10ac4010();
  /* 10ad111f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad1125 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1129 je 0x10ad1346 */
  if (C.zf) goto L_10ad1346;
  /* 10ad112f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1132 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ad1135 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1138 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad113e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad1141 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10ad1146 mov eax, dword ptr [0x10aeec98] */
  EAX = (r32((uint32_t)(0x10aeec98)));
  /* 10ad114b push eax */
  push32((uint32_t)(EAX));
  /* 10ad114c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad114f push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1150 call 0x10aca910 */
  push32(0x10ad1155u); f_10aca910();
  /* 10ad1155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1158 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad115f jmp 0x10ad116a */
  goto L_10ad116a;
L_10ad1161:;
  /* 10ad1161 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1164 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1167 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad116a:;
  /* 10ad116a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad116e jae 0x10ad11de */
  if (!C.cf) goto L_10ad11de;
  /* 10ad1170 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1173 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1176 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1179 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ad117c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad117f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1182 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ad1185 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1186 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1189 push eax */
  push32((uint32_t)(EAX));
  /* 10ad118a call 0x10ac6fe0 */
  push32(0x10ad118fu); f_10ac6fe0();
  /* 10ad118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1192 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1193 call 0x10ac6e60 */
  push32(0x10ad1198u); f_10ac6e60();
  /* 10ad1198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad119b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad119e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad11a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad11a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad11a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad11ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad11ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10ad11b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad11b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad11b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10ad11bc push edx */
  push32((uint32_t)(EDX));
  /* 10ad11bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad11c0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad11c1 call 0x10ac6fe0 */
  push32(0x10ad11c6u); f_10ac6fe0();
  /* 10ad11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad11c9 push eax */
  push32((uint32_t)(EAX));
  /* 10ad11ca call 0x10ac6e60 */
  push32(0x10ad11cfu); f_10ac6e60();
  /* 10ad11cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad11d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad11d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad11d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad11dc jmp 0x10ad1161 */
  goto L_10ad1161;
L_10ad11de:;
  /* 10ad11de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad11e5 jmp 0x10ad11f0 */
  goto L_10ad11f0;
L_10ad11e7:;
  /* 10ad11e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad11ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad11ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ad11f0:;
  /* 10ad11f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad11f4 jae 0x10ad1266 */
  if (!C.cf) goto L_10ad1266;
  /* 10ad11f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad11f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad11fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad11ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10ad1203 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1206 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1209 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10ad120d push eax */
  push32((uint32_t)(EAX));
  /* 10ad120e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1211 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1212 call 0x10ac6fe0 */
  push32(0x10ad1217u); f_10ac6fe0();
  /* 10ad1217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad121a push eax */
  push32((uint32_t)(EAX));
  /* 10ad121b call 0x10ac6e60 */
  push32(0x10ad1220u); f_10ac6e60();
  /* 10ad1220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1223 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1226 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ad122a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad122d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1230 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1233 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1236 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10ad123a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad123d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1240 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ad1244 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1245 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1248 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1249 call 0x10ac6fe0 */
  push32(0x10ad124eu); f_10ac6fe0();
  /* 10ad124e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1251 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1252 call 0x10ac6e60 */
  push32(0x10ad1257u); f_10ac6e60();
  /* 10ad1257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad125a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad125d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ad1261 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad1264 jmp 0x10ad11e7 */
  goto L_10ad11e7;
L_10ad1266:;
  /* 10ad1266 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1269 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad126c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10ad1272 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1275 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ad127b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad127c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad127f push edx */
  push32((uint32_t)(EDX));
  /* 10ad1280 call 0x10ac6fe0 */
  push32(0x10ad1285u); f_10ac6fe0();
  /* 10ad1285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1288 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1289 call 0x10ac6e60 */
  push32(0x10ad128eu); f_10ac6e60();
  /* 10ad128e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1291 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1294 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad1298 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad129b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad129e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10ad12a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad12aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ad12b0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad12b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad12b5 call 0x10ac6fe0 */
  push32(0x10ad12bau); f_10ac6fe0();
  /* 10ad12ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad12bd push eax */
  push32((uint32_t)(EAX));
  /* 10ad12be call 0x10ac6e60 */
  push32(0x10ad12c3u); f_10ac6e60();
  /* 10ad12c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad12c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ad12cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad12d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad12d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10ad12dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad12df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10ad12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad12e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12e9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad12ea call 0x10ac6fe0 */
  push32(0x10ad12efu); f_10ac6fe0();
  /* 10ad12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad12f2 push eax */
  push32((uint32_t)(EAX));
  /* 10ad12f3 call 0x10ac6e60 */
  push32(0x10ad12f8u); f_10ac6e60();
  /* 10ad12f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad12fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad12fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ad1302 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad1305 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1308 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad130b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10ad1311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1314 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10ad131a push eax */
  push32((uint32_t)(EAX));
  /* 10ad131b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad131e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad131f call 0x10ac6fe0 */
  push32(0x10ad1324u); f_10ac6fe0();
  /* 10ad1324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1327 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1328 call 0x10ac6e60 */
  push32(0x10ad132du); f_10ac6e60();
  /* 10ad132d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1330 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1333 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10ad1337 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad133a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad133d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1340 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10ad1346:;
  /* 10ad1346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1349 pop esi */
  ESI = (pop32());
  /* 10ad134a mov esp, ebp */
  ESP = (EBP);
  /* 10ad134c pop ebp */
  EBP = (pop32());
  /* 10ad134d ret  */
  ESPCHK(0x10ad0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x10ad1350 (31 bytes, 15 insns) */
void f_10ad1350(void) {
  FTRACE(0x10ad1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1350 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1351 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad1355 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1358 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1359 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad135c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad135d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1360 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1364 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1365 call 0x10ad1370 */
  push32(0x10ad136au); f_10ad1370();
  /* 10ad136a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad136d pop ebp */
  EBP = (pop32());
  /* 10ad136e ret  */
  ESPCHK(0x10ad1350u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x10ad1370 (393 bytes, 123 insns) */
void f_10ad1370(void) {
  FTRACE(0x10ad1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1370 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1371 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1376 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad137a jne 0x10ad1386 */
  if (!C.zf) goto L_10ad1386;
  /* 10ad137c mov eax, dword ptr [0x10aeec98] */
  EAX = (r32((uint32_t)(0x10aeec98)));
  /* 10ad1381 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ad1384 jmp 0x10ad138c */
  goto L_10ad138c;
L_10ad1386:;
  /* 10ad1386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1389 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ad138c:;
  /* 10ad138c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad138f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad1392 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad1398 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad139d call dword ptr [0x10af230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af230c))), 0x10ad13a3u);
  /* 10ad13a3 cmp dword ptr [0x10aef954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad13aa je 0x10ad13ca */
  if (C.zf) goto L_10ad13ca;
  /* 10ad13ac push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad13b1 call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ad13b7u);
  /* 10ad13b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad13b9 call 0x10ac7a30 */
  push32(0x10ad13beu); f_10ac7a30();
  /* 10ad13be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad13c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ad13c8 jmp 0x10ad13d1 */
  goto L_10ad13d1;
L_10ad13ca:;
  /* 10ad13ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ad13d1:;
  /* 10ad13d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad13d5 jbe 0x10ad14c2 */
  if ((C.cf||C.zf)) goto L_10ad14c2;
  /* 10ad13db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad13de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad13e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10ad13e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad13e7 je 0x10ad13f1 */
  if (C.zf) goto L_10ad13f1;
  /* 10ad13e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad13ed je 0x10ad13f6 */
  if (C.zf) goto L_10ad13f6;
  /* 10ad13ef jmp 0x10ad1450 */
  goto L_10ad1450;
L_10ad13f1:;
  /* 10ad13f1 jmp 0x10ad14c2 */
  goto L_10ad14c2;
L_10ad13f6:;
  /* 10ad13f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad13f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad13fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10ad13ff mov dword ptr [0x10aef940], 0 */
  w32((uint32_t)(0x10aef940), (0x0u));
  /* 10ad1409 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad140c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad140f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1412 jne 0x10ad1427 */
  if (!C.zf) goto L_10ad1427;
  /* 10ad1414 mov dword ptr [0x10aef940], 1 */
  w32((uint32_t)(0x10aef940), (0x1u));
  /* 10ad141e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1421 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1424 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10ad1427:;
  /* 10ad1427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad142a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad142b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ad142e push edx */
  push32((uint32_t)(EDX));
  /* 10ad142f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10ad1432 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1433 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1436 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1437 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad143a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad143c push eax */
  push32((uint32_t)(EAX));
  /* 10ad143d call 0x10ad1500 */
  push32(0x10ad1442u); f_10ad1500();
  /* 10ad1442 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad144b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ad144e jmp 0x10ad14bd */
  goto L_10ad14bd;
L_10ad1450:;
  /* 10ad1450 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad1455 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1457 mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad145d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad145f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad1463 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad1469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad146b je 0x10ad1498 */
  if (C.zf) goto L_10ad1498;
  /* 10ad146d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1471 jbe 0x10ad1498 */
  if ((C.cf||C.zf)) goto L_10ad1498;
  /* 10ad1473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1476 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1479 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad147b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ad147d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1483 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad1486 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1489 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad148c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ad148f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1492 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1495 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ad1498:;
  /* 10ad1498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad149b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad149e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad14a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ad14a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad14a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad14a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad14ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad14ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad14b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ad14b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad14b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad14ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ad14bd:;
  /* 10ad14bd jmp 0x10ad13d1 */
  goto L_10ad13d1;
L_10ad14c2:;
  /* 10ad14c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad14c6 je 0x10ad14d4 */
  if (C.zf) goto L_10ad14d4;
  /* 10ad14c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad14ca call 0x10ac7ad0 */
  push32(0x10ad14cfu); f_10ac7ad0();
  /* 10ad14cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad14d2 jmp 0x10ad14df */
  goto L_10ad14df;
L_10ad14d4:;
  /* 10ad14d4 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad14d9 call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ad14dfu);
L_10ad14df:;
  /* 10ad14df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad14e3 jbe 0x10ad14f3 */
  if ((C.cf||C.zf)) goto L_10ad14f3;
  /* 10ad14e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad14e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ad14eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad14ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad14f1 jmp 0x10ad14f5 */
  goto L_10ad14f5;
L_10ad14f3:;
  /* 10ad14f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad14f5:;
  /* 10ad14f5 mov esp, ebp */
  ESP = (EBP);
  /* 10ad14f7 pop ebp */
  EBP = (pop32());
  /* 10ad14f8 ret  */
  ESPCHK(0x10ad1370u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x10ad1500 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10ad1500(void) {
  FTRACE(0x10ad1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1500 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1501 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1506 push esi */
  push32((uint32_t)(ESI));
  /* 10ad1507 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10ad150b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad150e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1511 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1514 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad1517 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad151b ja 0x10ad1a68 */
  if ((!C.cf&&!C.zf)) goto L_10ad1a68;
  /* 10ad1521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad1526 mov dl, byte ptr [eax + 0x10ad1ac9] */
  DL = (r8((uint32_t)(EAX + 0x10ad1ac9)));
  /* 10ad152c jmp dword ptr [edx*4 + 0x10ad1a6d] */
  switch (EDX) {
    case 0: goto L_10ad1a46;
    case 1: goto L_10ad1555;
    case 2: goto L_10ad159b;
    case 3: goto L_10ad16e8;
    case 4: goto L_10ad1710;
    case 5: goto L_10ad17af;
    case 6: goto L_10ad181b;
    case 7: goto L_10ad1844;
    case 8: goto L_10ad1885;
    case 9: goto L_10ad1967;
    case 10: goto L_10ad19ce;
    case 11: goto L_10ad1a1b;
    case 12: goto L_10ad1533;
    case 13: goto L_10ad1578;
    case 14: goto L_10ad15be;
    case 15: goto L_10ad16be;
    case 16: goto L_10ad1755;
    case 17: goto L_10ad1782;
    case 18: goto L_10ad17d7;
    case 19: goto L_10ad185b;
    case 20: goto L_10ad1909;
    case 21: goto L_10ad1998;
    case 22: goto L_10ad1a68;
    default: x86_unimpl("switch@0x10ad152c out of table"); return;
  }
L_10ad1533:;
  /* 10ad1533 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1536 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1537 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad153a push edx */
  push32((uint32_t)(EDX));
  /* 10ad153b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad153e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ad1541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1544 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ad1547 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1548 call 0x10ad1b20 */
  push32(0x10ad154du); f_10ad1b20();
  /* 10ad154d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1550 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1555:;
  /* 10ad1555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1558 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1559 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad155c push edx */
  push32((uint32_t)(EDX));
  /* 10ad155d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1560 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ad1563 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1566 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10ad156a push eax */
  push32((uint32_t)(EAX));
  /* 10ad156b call 0x10ad1b20 */
  push32(0x10ad1570u); f_10ad1b20();
  /* 10ad1570 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1573 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1578:;
  /* 10ad1578 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad157b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad157c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad157f push edx */
  push32((uint32_t)(EDX));
  /* 10ad1580 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1583 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ad1586 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1589 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10ad158d push eax */
  push32((uint32_t)(EAX));
  /* 10ad158e call 0x10ad1b20 */
  push32(0x10ad1593u); f_10ad1b20();
  /* 10ad1593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1596 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad159b:;
  /* 10ad159b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad159e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad159f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad15a2 push edx */
  push32((uint32_t)(EDX));
  /* 10ad15a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad15a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ad15a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad15ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ad15b0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad15b1 call 0x10ad1b20 */
  push32(0x10ad15b6u); f_10ad1b20();
  /* 10ad15b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad15b9 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad15be:;
  /* 10ad15be cmp dword ptr [0x10aef940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad15c5 je 0x10ad1646 */
  if (C.zf) goto L_10ad1646;
  /* 10ad15c7 mov dword ptr [0x10aef940], 0 */
  w32((uint32_t)(0x10aef940), (0x0u));
  /* 10ad15d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad15d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad15d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad15d8 push edx */
  push32((uint32_t)(EDX));
  /* 10ad15d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad15dc push eax */
  push32((uint32_t)(EAX));
  /* 10ad15dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad15e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad15e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad15e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10ad15ea push eax */
  push32((uint32_t)(EAX));
  /* 10ad15eb call 0x10ad1cd0 */
  push32(0x10ad15f0u); f_10ad1cd0();
  /* 10ad15f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad15f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad15f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad15f9 jne 0x10ad1600 */
  if (!C.zf) goto L_10ad1600;
  /* 10ad15fb jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1600:;
  /* 10ad1600 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1603 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1605 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10ad1608 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad160b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad160d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1610 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1613 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1615 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1618 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad161a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad161d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1620 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1622 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1625 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1626 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1629 push edx */
  push32((uint32_t)(EDX));
  /* 10ad162a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad162d push eax */
  push32((uint32_t)(EAX));
  /* 10ad162e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1631 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1632 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1635 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10ad163b push eax */
  push32((uint32_t)(EAX));
  /* 10ad163c call 0x10ad1cd0 */
  push32(0x10ad1641u); f_10ad1cd0();
  /* 10ad1641 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1644 jmp 0x10ad16b9 */
  goto L_10ad16b9;
L_10ad1646:;
  /* 10ad1646 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1649 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad164a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad164d push edx */
  push32((uint32_t)(EDX));
  /* 10ad164e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1651 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1652 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1655 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1656 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1659 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10ad165f push eax */
  push32((uint32_t)(EAX));
  /* 10ad1660 call 0x10ad1cd0 */
  push32(0x10ad1665u); f_10ad1cd0();
  /* 10ad1665 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1668 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad166b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad166e jne 0x10ad1675 */
  if (!C.zf) goto L_10ad1675;
  /* 10ad1670 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1675:;
  /* 10ad1675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1678 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad167a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10ad167d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1680 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1682 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1685 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1688 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad168a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad168d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad168f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1692 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1695 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1697 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad169a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad169b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad169e push edx */
  push32((uint32_t)(EDX));
  /* 10ad169f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad16a2 push eax */
  push32((uint32_t)(EAX));
  /* 10ad16a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad16a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad16a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad16aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10ad16b0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad16b1 call 0x10ad1cd0 */
  push32(0x10ad16b6u); f_10ad1cd0();
  /* 10ad16b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad16b9:;
  /* 10ad16b9 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad16be:;
  /* 10ad16be mov ecx, dword ptr [0x10aef940] */
  ECX = (r32((uint32_t)(0x10aef940)));
  /* 10ad16c4 mov dword ptr [0x10aef950], ecx */
  w32((uint32_t)(0x10aef950), (ECX));
  /* 10ad16ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad16cd push edx */
  push32((uint32_t)(EDX));
  /* 10ad16ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad16d1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad16d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad16d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad16d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ad16da push edx */
  push32((uint32_t)(EDX));
  /* 10ad16db call 0x10ad1b70 */
  push32(0x10ad16e0u); f_10ad1b70();
  /* 10ad16e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad16e3 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad16e8:;
  /* 10ad16e8 mov eax, dword ptr [0x10aef940] */
  EAX = (r32((uint32_t)(0x10aef940)));
  /* 10ad16ed mov dword ptr [0x10aef950], eax */
  w32((uint32_t)(0x10aef950), (EAX));
  /* 10ad16f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad16f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad16f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad16f9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad16fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad16fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad16ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ad1702 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1703 call 0x10ad1b70 */
  push32(0x10ad1708u); f_10ad1b70();
  /* 10ad1708 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad170b jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1710:;
  /* 10ad1710 mov edx, dword ptr [0x10aef940] */
  EDX = (r32((uint32_t)(0x10aef940)));
  /* 10ad1716 mov dword ptr [0x10aef950], edx */
  w32((uint32_t)(0x10aef950), (EDX));
  /* 10ad171c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad171f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ad1722 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad1723 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10ad1728 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad172a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad172d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1731 jne 0x10ad173a */
  if (!C.zf) goto L_10ad173a;
  /* 10ad1733 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10ad173a:;
  /* 10ad173a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad173d push edx */
  push32((uint32_t)(EDX));
  /* 10ad173e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1741 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1742 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad1744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1747 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1748 call 0x10ad1b70 */
  push32(0x10ad174du); f_10ad1b70();
  /* 10ad174d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1750 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1755:;
  /* 10ad1755 mov edx, dword ptr [0x10aef940] */
  EDX = (r32((uint32_t)(0x10aef940)));
  /* 10ad175b mov dword ptr [0x10aef950], edx */
  w32((uint32_t)(0x10aef950), (EDX));
  /* 10ad1761 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1764 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1768 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1769 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ad176b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad176e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ad1771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1774 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1775 call 0x10ad1b70 */
  push32(0x10ad177au); f_10ad1b70();
  /* 10ad177a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad177d jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1782:;
  /* 10ad1782 mov ecx, dword ptr [0x10aef940] */
  ECX = (r32((uint32_t)(0x10aef940)));
  /* 10ad1788 mov dword ptr [0x10aef950], ecx */
  w32((uint32_t)(0x10aef950), (ECX));
  /* 10ad178e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1791 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1792 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1795 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1796 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad1798 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad179b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ad179e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad17a1 push edx */
  push32((uint32_t)(EDX));
  /* 10ad17a2 call 0x10ad1b70 */
  push32(0x10ad17a7u); f_10ad1b70();
  /* 10ad17a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad17aa jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad17af:;
  /* 10ad17af mov eax, dword ptr [0x10aef940] */
  EAX = (r32((uint32_t)(0x10aef940)));
  /* 10ad17b4 mov dword ptr [0x10aef950], eax */
  w32((uint32_t)(0x10aef950), (EAX));
  /* 10ad17b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad17bc push ecx */
  push32((uint32_t)(ECX));
  /* 10ad17bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad17c0 push edx */
  push32((uint32_t)(EDX));
  /* 10ad17c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad17c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad17c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ad17c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad17ca call 0x10ad1b70 */
  push32(0x10ad17cfu); f_10ad1b70();
  /* 10ad17cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad17d2 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad17d7:;
  /* 10ad17d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad17da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad17de jg 0x10ad17fc */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad17fc;
  /* 10ad17e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad17e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ad17e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad17e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad17e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad17eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10ad17f1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad17f2 call 0x10ad1b20 */
  push32(0x10ad17f7u); f_10ad1b20();
  /* 10ad17f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad17fa jmp 0x10ad1816 */
  goto L_10ad1816;
L_10ad17fc:;
  /* 10ad17fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad17ff push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1800 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1803 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1804 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1807 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10ad180d push ecx */
  push32((uint32_t)(ECX));
  /* 10ad180e call 0x10ad1b20 */
  push32(0x10ad1813u); f_10ad1b20();
  /* 10ad1813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad1816:;
  /* 10ad1816 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad181b:;
  /* 10ad181b mov edx, dword ptr [0x10aef940] */
  EDX = (r32((uint32_t)(0x10aef940)));
  /* 10ad1821 mov dword ptr [0x10aef950], edx */
  w32((uint32_t)(0x10aef950), (EDX));
  /* 10ad1827 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad182a push eax */
  push32((uint32_t)(EAX));
  /* 10ad182b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad182e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad182f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad1831 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1834 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1836 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1837 call 0x10ad1b70 */
  push32(0x10ad183cu); f_10ad1b70();
  /* 10ad183c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad183f jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1844:;
  /* 10ad1844 mov ecx, dword ptr [0x10aef940] */
  ECX = (r32((uint32_t)(0x10aef940)));
  /* 10ad184a mov dword ptr [0x10aef950], ecx */
  w32((uint32_t)(0x10aef950), (ECX));
  /* 10ad1850 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1853 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ad1856 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad1859 jmp 0x10ad18ad */
  goto L_10ad18ad;
L_10ad185b:;
  /* 10ad185b mov ecx, dword ptr [0x10aef940] */
  ECX = (r32((uint32_t)(0x10aef940)));
  /* 10ad1861 mov dword ptr [0x10aef950], ecx */
  w32((uint32_t)(0x10aef950), (ECX));
  /* 10ad1867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad186a push edx */
  push32((uint32_t)(EDX));
  /* 10ad186b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad186e push eax */
  push32((uint32_t)(EAX));
  /* 10ad186f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad1871 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1874 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ad1877 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1878 call 0x10ad1b70 */
  push32(0x10ad187du); f_10ad1b70();
  /* 10ad187d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1880 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1885:;
  /* 10ad1885 mov eax, dword ptr [0x10aef940] */
  EAX = (r32((uint32_t)(0x10aef940)));
  /* 10ad188a mov dword ptr [0x10aef950], eax */
  w32((uint32_t)(0x10aef950), (EAX));
  /* 10ad188f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1892 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1896 jne 0x10ad18a1 */
  if (!C.zf) goto L_10ad18a1;
  /* 10ad1898 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10ad189f jmp 0x10ad18ad */
  goto L_10ad18ad;
L_10ad18a1:;
  /* 10ad18a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad18a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ad18a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad18aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ad18ad:;
  /* 10ad18ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad18b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ad18b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad18b6 jge 0x10ad18c1 */
  if ((C.sf==C.of)) goto L_10ad18c1;
  /* 10ad18b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad18bf jmp 0x10ad18ee */
  goto L_10ad18ee;
L_10ad18c1:;
  /* 10ad18c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad18c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ad18c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad18c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ad18cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad18cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad18d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad18d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ad18d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad18d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10ad18de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad18e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad18e3 jl 0x10ad18ee */
  if ((C.sf!=C.of)) goto L_10ad18ee;
  /* 10ad18e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad18e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad18eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ad18ee:;
  /* 10ad18ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad18f1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad18f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad18f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad18f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad18f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad18fb push edx */
  push32((uint32_t)(EDX));
  /* 10ad18fc call 0x10ad1b70 */
  push32(0x10ad1901u); f_10ad1b70();
  /* 10ad1901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1904 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1909:;
  /* 10ad1909 cmp dword ptr [0x10aef940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1910 je 0x10ad1940 */
  if (C.zf) goto L_10ad1940;
  /* 10ad1912 mov dword ptr [0x10aef940], 0 */
  w32((uint32_t)(0x10aef940), (0x0u));
  /* 10ad191c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad191f push eax */
  push32((uint32_t)(EAX));
  /* 10ad1920 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1923 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1924 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1927 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad192b push eax */
  push32((uint32_t)(EAX));
  /* 10ad192c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad192f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10ad1935 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1936 call 0x10ad1cd0 */
  push32(0x10ad193bu); f_10ad1cd0();
  /* 10ad193b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad193e jmp 0x10ad1962 */
  goto L_10ad1962;
L_10ad1940:;
  /* 10ad1940 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1943 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1944 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1947 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1948 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad194b push edx */
  push32((uint32_t)(EDX));
  /* 10ad194c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad194f push eax */
  push32((uint32_t)(EAX));
  /* 10ad1950 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1953 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10ad1959 push edx */
  push32((uint32_t)(EDX));
  /* 10ad195a call 0x10ad1cd0 */
  push32(0x10ad195fu); f_10ad1cd0();
  /* 10ad195f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad1962:;
  /* 10ad1962 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1967:;
  /* 10ad1967 mov dword ptr [0x10aef940], 0 */
  w32((uint32_t)(0x10aef940), (0x0u));
  /* 10ad1971 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1974 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1975 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1978 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1979 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad197c push edx */
  push32((uint32_t)(EDX));
  /* 10ad197d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1980 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1981 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1984 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10ad198a push edx */
  push32((uint32_t)(EDX));
  /* 10ad198b call 0x10ad1cd0 */
  push32(0x10ad1990u); f_10ad1cd0();
  /* 10ad1990 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1993 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1998:;
  /* 10ad1998 mov eax, dword ptr [0x10aef940] */
  EAX = (r32((uint32_t)(0x10aef940)));
  /* 10ad199d mov dword ptr [0x10aef950], eax */
  w32((uint32_t)(0x10aef950), (EAX));
  /* 10ad19a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad19a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ad19a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad19a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ad19ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad19b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad19b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad19b6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad19b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad19ba push eax */
  push32((uint32_t)(EAX));
  /* 10ad19bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad19bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad19c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad19c1 call 0x10ad1b70 */
  push32(0x10ad19c6u); f_10ad1b70();
  /* 10ad19c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad19c9 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad19ce:;
  /* 10ad19ce mov edx, dword ptr [0x10aef940] */
  EDX = (r32((uint32_t)(0x10aef940)));
  /* 10ad19d4 mov dword ptr [0x10aef950], edx */
  w32((uint32_t)(0x10aef950), (EDX));
  /* 10ad19da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad19dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ad19e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad19e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10ad19e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad19e8 mov ecx, eax */
  ECX = (EAX);
  /* 10ad19ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad19ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad19f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad19f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ad19f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad19f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10ad19fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad19fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1a00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad1a03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1a06 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1a07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1a0a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1a0b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad1a0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1a10 push edx */
  push32((uint32_t)(EDX));
  /* 10ad1a11 call 0x10ad1b70 */
  push32(0x10ad1a16u); f_10ad1b70();
  /* 10ad1a16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1a19 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1a1b:;
  /* 10ad1a1b call 0x10ad2b30 */
  push32(0x10ad1a20u); f_10ad2b30();
  /* 10ad1a20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1a23 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1a24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1a27 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1a28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad1a2d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1a31 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10ad1a34 mov ecx, dword ptr [eax*4 + 0x10aeee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aeee1c)));
  /* 10ad1a3b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1a3c call 0x10ad1b20 */
  push32(0x10ad1a41u); f_10ad1b20();
  /* 10ad1a41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1a44 jmp 0x10ad1a68 */
  goto L_10ad1a68;
L_10ad1a46:;
  /* 10ad1a46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1a49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1a4b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10ad1a4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1a51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1a53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1a56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1a59 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1a5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1a5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1a60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1a63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1a66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ad1a68:;
  /* 10ad1a68 pop esi */
  ESI = (pop32());
  /* 10ad1a69 mov esp, ebp */
  ESP = (EBP);
  /* 10ad1a6b pop ebp */
  EBP = (pop32());
  /* 10ad1a6c ret  */
  ESPCHK(0x10ad1500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10ad1b20 (72 bytes, 30 insns) */
void f_10ad1b20(void) {
  FTRACE(0x10ad1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1b21 mov ebp, esp */
  EBP = (ESP);
L_10ad1b23:;
  /* 10ad1b23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1b26 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1b29 je 0x10ad1b66 */
  if (C.zf) goto L_10ad1b66;
  /* 10ad1b2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1b2e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad1b31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad1b33 je 0x10ad1b66 */
  if (C.zf) goto L_10ad1b66;
  /* 10ad1b35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1b38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1b3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1b3d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1b3f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ad1b41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1b44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1b46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1b4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1b4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1b54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ad1b57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1b5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1b5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1b5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1b62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad1b64 jmp 0x10ad1b23 */
  goto L_10ad1b23;
L_10ad1b66:;
  /* 10ad1b66 pop ebp */
  EBP = (pop32());
  /* 10ad1b67 ret  */
  ESPCHK(0x10ad1b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x10ad1b70 (173 bytes, 64 insns) */
void f_10ad1b70(void) {
  FTRACE(0x10ad1b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1b71 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad1b7b cmp dword ptr [0x10aef950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1b82 je 0x10ad1b9a */
  if (C.zf) goto L_10ad1b9a;
  /* 10ad1b84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1b87 push eax */
  push32((uint32_t)(EAX));
  /* 10ad1b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1b8b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1b8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1b8f push edx */
  push32((uint32_t)(EDX));
  /* 10ad1b90 call 0x10ad1c20 */
  push32(0x10ad1b95u); f_10ad1c20();
  /* 10ad1b95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1b98 jmp 0x10ad1c19 */
  goto L_10ad1c19;
L_10ad1b9a:;
  /* 10ad1b9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1ba0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1ba2 jae 0x10ad1c10 */
  if (!C.cf) goto L_10ad1c10;
  /* 10ad1ba4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1ba7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1baa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ad1bad jmp 0x10ad1bb8 */
  goto L_10ad1bb8;
L_10ad1baf:;
  /* 10ad1baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1bb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1bb5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ad1bb8:;
  /* 10ad1bb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1bbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad1bc0 je 0x10ad1bf4 */
  if (C.zf) goto L_10ad1bf4;
  /* 10ad1bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1bc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad1bc6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ad1bcb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad1bcd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1bd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1bd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1bd8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10ad1bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1bde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad1bdf mov ecx, 0xa */
  ECX = (0xau);
  /* 10ad1be4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad1be6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad1be9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1bec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1bef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad1bf2 jmp 0x10ad1baf */
  goto L_10ad1baf;
L_10ad1bf4:;
  /* 10ad1bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1bf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1bf9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1bff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ad1c01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1c04 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1c06 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1c09 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1c0c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ad1c0e jmp 0x10ad1c19 */
  goto L_10ad1c19;
L_10ad1c10:;
  /* 10ad1c10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1c13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ad1c19:;
  /* 10ad1c19 mov esp, ebp */
  ESP = (EBP);
  /* 10ad1c1b pop ebp */
  EBP = (pop32());
  /* 10ad1c1c ret  */
  ESPCHK(0x10ad1b70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10ad1c20 (172 bytes, 65 insns) */
void f_10ad1c20(void) {
  FTRACE(0x10ad1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1c21 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1c29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad1c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1c31 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1c34 jbe 0x10ad1c7b */
  if ((C.cf||C.zf)) goto L_10ad1c7b;
L_10ad1c36:;
  /* 10ad1c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1c39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad1c3a mov ecx, 0xa */
  ECX = (0xau);
  /* 10ad1c3f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad1c41 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ad1c49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1c4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad1c52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1c55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1c57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1c5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad1c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1c62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad1c63 mov ecx, 0xa */
  ECX = (0xau);
  /* 10ad1c68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad1c6a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad1c6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1c71 jle 0x10ad1c7b */
  if ((C.zf||C.sf!=C.of)) goto L_10ad1c7b;
  /* 10ad1c73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1c76 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1c79 ja 0x10ad1c36 */
  if ((!C.cf&&!C.zf)) goto L_10ad1c36;
L_10ad1c7b:;
  /* 10ad1c7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1c7e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1c80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad1c83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1c86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ad1c8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c8e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1c91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ad1c94:;
  /* 10ad1c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c97 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1c99 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10ad1c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1c9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad1ca2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1ca4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ad1ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1ca9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1cac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad1caf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad1cb2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ad1cb5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ad1cb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad1cba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1cbd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad1cc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad1cc3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1cc6 jb 0x10ad1c94 */
  if (C.cf) goto L_10ad1c94;
  /* 10ad1cc8 mov esp, ebp */
  ESP = (EBP);
  /* 10ad1cca pop ebp */
  EBP = (pop32());
  /* 10ad1ccb ret  */
  ESPCHK(0x10ad1c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x10ad1cd0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10ad1cd0(void) {
  FTRACE(0x10ad1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad1cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ad1cd6:;
  /* 10ad1cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad1cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad1cde je 0x10ad214c */
  if (C.zf) goto L_10ad214c;
  /* 10ad1ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1ce7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1cea je 0x10ad214c */
  if (C.zf) goto L_10ad214c;
  /* 10ad1cf0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad1cf4 mov dword ptr [0x10aef950], 0 */
  w32((uint32_t)(0x10aef950), (0x0u));
  /* 10ad1cfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ad1d05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1d08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad1d0b jmp 0x10ad1d16 */
  goto L_10ad1d16;
L_10ad1d0d:;
  /* 10ad1d0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1d10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1d13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ad1d16:;
  /* 10ad1d16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1d19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad1d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1d1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad1d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1d25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1d28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad1d2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1d2d jne 0x10ad1d31 */
  if (!C.zf) goto L_10ad1d31;
  /* 10ad1d2f jmp 0x10ad1d0d */
  goto L_10ad1d0d;
L_10ad1d31:;
  /* 10ad1d31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1d34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1d37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad1d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1d3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad1d40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad1d43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1d46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1d49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad1d4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1d50 ja 0x10ad20a0 */
  if ((!C.cf&&!C.zf)) goto L_10ad20a0;
  /* 10ad1d56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad1d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad1d5b mov al, byte ptr [ecx + 0x10ad217c] */
  AL = (r8((uint32_t)(ECX + 0x10ad217c)));
  /* 10ad1d61 jmp dword ptr [eax*4 + 0x10ad2150] */
  switch (EAX) {
    case 0: goto L_10ad1fbf;
    case 1: goto L_10ad1ea3;
    case 2: goto L_10ad1e2e;
    case 3: goto L_10ad1d68;
    case 4: goto L_10ad1da6;
    case 5: goto L_10ad1e07;
    case 6: goto L_10ad1e55;
    case 7: goto L_10ad1e7c;
    case 8: goto L_10ad1eea;
    case 9: goto L_10ad1de4;
    case 10: goto L_10ad20a0;
    default: x86_unimpl("switch@0x10ad1d61 out of table"); return;
  }
L_10ad1d68:;
  /* 10ad1d68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1d6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ad1d6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1d71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1d74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ad1d77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1d7b ja 0x10ad1da1 */
  if ((!C.cf&&!C.zf)) goto L_10ad1da1;
  /* 10ad1d7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad1d80 jmp dword ptr [ecx*4 + 0x10ad21cf] */
  switch (ECX) {
    case 0: goto L_10ad1d87;
    case 1: goto L_10ad1d91;
    case 2: goto L_10ad1d97;
    case 3: goto L_10ad1d9d;
    case 4: goto L_10ad1dc5;
    case 5: goto L_10ad1dcf;
    case 6: goto L_10ad1dd5;
    case 7: goto L_10ad1ddb;
    default: x86_unimpl("switch@0x10ad1d80 out of table"); return;
  }
L_10ad1d87:;
  /* 10ad1d87 mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1d91:;
  /* 10ad1d91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10ad1d95 jmp 0x10ad1da1 */
  goto L_10ad1da1;
L_10ad1d97:;
  /* 10ad1d97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10ad1d9b jmp 0x10ad1da1 */
  goto L_10ad1da1;
L_10ad1d9d:;
  /* 10ad1d9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10ad1da1:;
  /* 10ad1da1 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1da6:;
  /* 10ad1da6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1da9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ad1dac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad1daf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1db2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ad1db5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1db9 ja 0x10ad1ddf */
  if ((!C.cf&&!C.zf)) goto L_10ad1ddf;
  /* 10ad1dbb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad1dbe jmp dword ptr [ecx*4 + 0x10ad21df] */
  switch (ECX) {
    case 0: goto L_10ad1dc5;
    case 1: goto L_10ad1dcf;
    case 2: goto L_10ad1dd5;
    case 3: goto L_10ad1ddb;
    default: x86_unimpl("switch@0x10ad1dbe out of table"); return;
  }
L_10ad1dc5:;
  /* 10ad1dc5 mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1dcf:;
  /* 10ad1dcf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10ad1dd3 jmp 0x10ad1ddf */
  goto L_10ad1ddf;
L_10ad1dd5:;
  /* 10ad1dd5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10ad1dd9 jmp 0x10ad1ddf */
  goto L_10ad1ddf;
L_10ad1ddb:;
  /* 10ad1ddb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10ad1ddf:;
  /* 10ad1ddf jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1de4:;
  /* 10ad1de4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1de7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ad1dea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1dee je 0x10ad1df8 */
  if (C.zf) goto L_10ad1df8;
  /* 10ad1df0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1df4 je 0x10ad1dfe */
  if (C.zf) goto L_10ad1dfe;
  /* 10ad1df6 jmp 0x10ad1e02 */
  goto L_10ad1e02;
L_10ad1df8:;
  /* 10ad1df8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10ad1dfc jmp 0x10ad1e02 */
  goto L_10ad1e02;
L_10ad1dfe:;
  /* 10ad1dfe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10ad1e02:;
  /* 10ad1e02 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1e07:;
  /* 10ad1e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1e0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ad1e0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e11 je 0x10ad1e1b */
  if (C.zf) goto L_10ad1e1b;
  /* 10ad1e13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e17 je 0x10ad1e25 */
  if (C.zf) goto L_10ad1e25;
  /* 10ad1e19 jmp 0x10ad1e29 */
  goto L_10ad1e29;
L_10ad1e1b:;
  /* 10ad1e1b mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1e25:;
  /* 10ad1e25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10ad1e29:;
  /* 10ad1e29 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1e2e:;
  /* 10ad1e2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1e31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ad1e34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e38 je 0x10ad1e42 */
  if (C.zf) goto L_10ad1e42;
  /* 10ad1e3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e3e je 0x10ad1e4c */
  if (C.zf) goto L_10ad1e4c;
  /* 10ad1e40 jmp 0x10ad1e50 */
  goto L_10ad1e50;
L_10ad1e42:;
  /* 10ad1e42 mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1e4c:;
  /* 10ad1e4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10ad1e50:;
  /* 10ad1e50 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1e55:;
  /* 10ad1e55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1e58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ad1e5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e5f je 0x10ad1e69 */
  if (C.zf) goto L_10ad1e69;
  /* 10ad1e61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e65 je 0x10ad1e73 */
  if (C.zf) goto L_10ad1e73;
  /* 10ad1e67 jmp 0x10ad1e77 */
  goto L_10ad1e77;
L_10ad1e69:;
  /* 10ad1e69 mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1e73:;
  /* 10ad1e73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10ad1e77:;
  /* 10ad1e77 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1e7c:;
  /* 10ad1e7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1e7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ad1e82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e86 je 0x10ad1e90 */
  if (C.zf) goto L_10ad1e90;
  /* 10ad1e88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1e8c je 0x10ad1e9a */
  if (C.zf) goto L_10ad1e9a;
  /* 10ad1e8e jmp 0x10ad1e9e */
  goto L_10ad1e9e;
L_10ad1e90:;
  /* 10ad1e90 mov dword ptr [0x10aef950], 1 */
  w32((uint32_t)(0x10aef950), (0x1u));
L_10ad1e9a:;
  /* 10ad1e9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10ad1e9e:;
  /* 10ad1e9e jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1ea3:;
  /* 10ad1ea3 push 0x10aeb9d4 */
  push32((uint32_t)(0x10aeb9d4u));
  /* 10ad1ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1eab push ecx */
  push32((uint32_t)(ECX));
  /* 10ad1eac call 0x10ad2700 */
  push32(0x10ad1eb1u); f_10ad2700();
  /* 10ad1eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad1eb6 jne 0x10ad1ec3 */
  if (!C.zf) goto L_10ad1ec3;
  /* 10ad1eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1ebb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1ebe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad1ec1 jmp 0x10ad1ee1 */
  goto L_10ad1ee1;
L_10ad1ec3:;
  /* 10ad1ec3 push 0x10aeb9d0 */
  push32((uint32_t)(0x10aeb9d0u));
  /* 10ad1ec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1ecb push eax */
  push32((uint32_t)(EAX));
  /* 10ad1ecc call 0x10ad2700 */
  push32(0x10ad1ed1u); f_10ad2700();
  /* 10ad1ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad1ed6 jne 0x10ad1ee1 */
  if (!C.zf) goto L_10ad1ee1;
  /* 10ad1ed8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1edb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1ede mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ad1ee1:;
  /* 10ad1ee1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10ad1ee5 jmp 0x10ad20a0 */
  goto L_10ad20a0;
L_10ad1eea:;
  /* 10ad1eea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad1eed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1ef1 jg 0x10ad1f01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad1f01;
  /* 10ad1ef3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1ef6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10ad1efc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ad1eff jmp 0x10ad1f0d */
  goto L_10ad1f0d;
L_10ad1f01:;
  /* 10ad1f01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad1f04 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10ad1f0a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ad1f0d:;
  /* 10ad1f0d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1f11 jle 0x10ad1fb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad1fb4;
  /* 10ad1f17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1f1a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1f1d jbe 0x10ad1fb4 */
  if ((C.cf||C.zf)) goto L_10ad1fb4;
  /* 10ad1f23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad1f28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1f2a mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad1f30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad1f32 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad1f36 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad1f3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad1f3e je 0x10ad1f77 */
  if (C.zf) goto L_10ad1f77;
  /* 10ad1f40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1f43 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1f46 jbe 0x10ad1f77 */
  if ((C.cf||C.zf)) goto L_10ad1f77;
  /* 10ad1f48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1f4d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1f50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad1f52 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ad1f54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1f5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad1f61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1f64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1f67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ad1f6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1f6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1f6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1f72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1f75 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ad1f77:;
  /* 10ad1f77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad1f7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1f7f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad1f81 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ad1f83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad1f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1f8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad1f8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad1f90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad1f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1f96 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ad1f99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1f9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad1f9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1fa1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1fa4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad1fa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1fa9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad1fac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ad1faf jmp 0x10ad1f0d */
  goto L_10ad1f0d;
L_10ad1fb4:;
  /* 10ad1fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad1fb7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad1fba jmp 0x10ad1cd6 */
  goto L_10ad1cd6;
L_10ad1fbf:;
  /* 10ad1fbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad1fc2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad1fc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad1fc7 je 0x10ad2092 */
  if (C.zf) goto L_10ad2092;
  /* 10ad1fcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1fd0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad1fd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ad1fd6:;
  /* 10ad1fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1fd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad1fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad1fde je 0x10ad2090 */
  if (C.zf) goto L_10ad2090;
  /* 10ad1fe4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad1fe7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1fea je 0x10ad2090 */
  if (C.zf) goto L_10ad2090;
  /* 10ad1ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1ff3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad1ff6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad1ff9 jne 0x10ad2009 */
  if (!C.zf) goto L_10ad2009;
  /* 10ad1ffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad1ffe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2001 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ad2004 jmp 0x10ad2090 */
  goto L_10ad2090;
L_10ad2009:;
  /* 10ad2009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad200c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad200e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad2010 mov edx, dword ptr [0x10aedc98] */
  EDX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad2016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2018 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ad201c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2023 je 0x10ad205c */
  if (C.zf) goto L_10ad205c;
  /* 10ad2025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2028 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad202b jbe 0x10ad205c */
  if ((C.cf||C.zf)) goto L_10ad205c;
  /* 10ad202d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2030 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad2032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2035 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad2037 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ad2039 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad203c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad203e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2041 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2044 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ad2046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad204c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad204f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2052 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad2054 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2057 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad205a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ad205c:;
  /* 10ad205c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad205f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad2061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2064 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad2066 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ad2068 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad206b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad206d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2073 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad2075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad207b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ad207e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2081 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad2083 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2089 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ad208b jmp 0x10ad1fd6 */
  goto L_10ad1fd6;
L_10ad2090:;
  /* 10ad2090 jmp 0x10ad209b */
  goto L_10ad209b;
L_10ad2092:;
  /* 10ad2092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2095 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2098 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ad209b:;
  /* 10ad209b jmp 0x10ad1cd6 */
  goto L_10ad1cd6;
L_10ad20a0:;
  /* 10ad20a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad20a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad20a6 je 0x10ad20cc */
  if (C.zf) goto L_10ad20cc;
  /* 10ad20a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad20ab push edx */
  push32((uint32_t)(EDX));
  /* 10ad20ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad20af push eax */
  push32((uint32_t)(EAX));
  /* 10ad20b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad20b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad20b7 push edx */
  push32((uint32_t)(EDX));
  /* 10ad20b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ad20bb push eax */
  push32((uint32_t)(EAX));
  /* 10ad20bc call 0x10ad1500 */
  push32(0x10ad20c1u); f_10ad1500();
  /* 10ad20c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad20c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad20c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ad20ca jmp 0x10ad2147 */
  goto L_10ad2147;
L_10ad20cc:;
  /* 10ad20cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad20cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad20d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad20d3 mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad20d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad20db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad20df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad20e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad20e7 je 0x10ad2118 */
  if (C.zf) goto L_10ad2118;
  /* 10ad20e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad20ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad20ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad20f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad20f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ad20f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad20f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad20fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad20fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2100 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad2102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2108 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ad210b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad210e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad2110 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2116 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ad2118:;
  /* 10ad2118 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad211b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad211d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2120 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad2122 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ad2124 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2127 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad2129 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad212c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad212f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ad2131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2137 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad213a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad213d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad213f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2142 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2145 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ad2147:;
  /* 10ad2147 jmp 0x10ad1cd6 */
  goto L_10ad1cd6;
L_10ad214c:;
  /* 10ad214c mov esp, ebp */
  ESP = (EBP);
  /* 10ad214e pop ebp */
  EBP = (pop32());
  /* 10ad214f ret  */
  ESPCHK(0x10ad1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x10ad21f0 (650 bytes, 178 insns) */
void f_10ad21f0(void) {
  FTRACE(0x10ad21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad21f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad21f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad21f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad21fd jne 0x10ad2359 */
  if (!C.zf) goto L_10ad2359;
  /* 10ad2203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2206 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10ad220c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10ad2212 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2215 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad221c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10ad2226 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2228 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ad222e push edx */
  push32((uint32_t)(EDX));
  /* 10ad222f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2232 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2233 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2236 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2237 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad223a push edx */
  push32((uint32_t)(EDX));
  /* 10ad223b call 0x10ad3610 */
  push32(0x10ad2240u); f_10ad3610();
  /* 10ad2240 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2243 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad2246 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad224a jne 0x10ad22df */
  if (!C.zf) goto L_10ad22df;
  /* 10ad2250 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ad2256u);
  /* 10ad2256 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2259 je 0x10ad2260 */
  if (C.zf) goto L_10ad2260;
  /* 10ad225b jmp 0x10ad233d */
  goto L_10ad233d;
L_10ad2260:;
  /* 10ad2260 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2262 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2269 push eax */
  push32((uint32_t)(EAX));
  /* 10ad226a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad226d push ecx */
  push32((uint32_t)(ECX));
  /* 10ad226e call 0x10ad3610 */
  push32(0x10ad2273u); f_10ad3610();
  /* 10ad2273 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2276 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10ad227c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2283 jne 0x10ad228a */
  if (!C.zf) goto L_10ad228a;
  /* 10ad2285 jmp 0x10ad233d */
  goto L_10ad233d;
L_10ad228a:;
  /* 10ad228a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10ad228c push 0x10aeb9dc */
  push32((uint32_t)(0x10aeb9dcu));
  /* 10ad2291 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad2293 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ad2299 push edx */
  push32((uint32_t)(EDX));
  /* 10ad229a call 0x10ac4030 */
  push32(0x10ad229fu); f_10ac4030();
  /* 10ad229f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad22a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad22a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad22a9 jne 0x10ad22b0 */
  if (!C.zf) goto L_10ad22b0;
  /* 10ad22ab jmp 0x10ad233d */
  goto L_10ad233d;
L_10ad22b0:;
  /* 10ad22b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ad22b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad22b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ad22bf push eax */
  push32((uint32_t)(EAX));
  /* 10ad22c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad22c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad22c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad22c7 push edx */
  push32((uint32_t)(EDX));
  /* 10ad22c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad22cb push eax */
  push32((uint32_t)(EAX));
  /* 10ad22cc call 0x10ad3610 */
  push32(0x10ad22d1u); f_10ad3610();
  /* 10ad22d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad22d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad22d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad22db jne 0x10ad22df */
  if (!C.zf) goto L_10ad22df;
  /* 10ad22dd jmp 0x10ad233d */
  goto L_10ad233d;
L_10ad22df:;
  /* 10ad22df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10ad22e1 push 0x10aeb9dc */
  push32((uint32_t)(0x10aeb9dcu));
  /* 10ad22e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad22e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad22eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ad22ec call 0x10ac4030 */
  push32(0x10ad22f1u); f_10ac4030();
  /* 10ad22f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad22f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ad22fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ad22fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ad2302 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2305 jne 0x10ad2309 */
  if (!C.zf) goto L_10ad2309;
  /* 10ad2307 jmp 0x10ad233d */
  goto L_10ad233d;
L_10ad2309:;
  /* 10ad2309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad230c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad230d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2310 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2311 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10ad2317 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad2319 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad231a call 0x10ac7850 */
  push32(0x10ad231fu); f_10ac7850();
  /* 10ad231f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2322 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2326 je 0x10ad2336 */
  if (C.zf) goto L_10ad2336;
  /* 10ad2328 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad232a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad232d push edx */
  push32((uint32_t)(EDX));
  /* 10ad232e call 0x10ac4ac0 */
  push32(0x10ad2333u); f_10ac4ac0();
  /* 10ad2333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad2336:;
  /* 10ad2336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2338 jmp 0x10ad2476 */
  goto L_10ad2476;
L_10ad233d:;
  /* 10ad233d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2341 je 0x10ad2351 */
  if (C.zf) goto L_10ad2351;
  /* 10ad2343 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad2345 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2348 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2349 call 0x10ac4ac0 */
  push32(0x10ad234eu); f_10ac4ac0();
  /* 10ad234e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad2351:;
  /* 10ad2351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2354 jmp 0x10ad2476 */
  goto L_10ad2476;
L_10ad2359:;
  /* 10ad2359 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad235d jne 0x10ad2473 */
  if (!C.zf) goto L_10ad2473;
  /* 10ad2363 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10ad236d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad2370 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ad2376 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2378 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ad237e push edx */
  push32((uint32_t)(EDX));
  /* 10ad237f push 0x10aef868 */
  push32((uint32_t)(0x10aef868u));
  /* 10ad2384 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2387 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2388 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad238b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad238c call 0x10ad3470 */
  push32(0x10ad2391u); f_10ad3470();
  /* 10ad2391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2396 jne 0x10ad23a0 */
  if (!C.zf) goto L_10ad23a0;
  /* 10ad2398 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad239b jmp 0x10ad2476 */
  goto L_10ad2476;
L_10ad23a0:;
  /* 10ad23a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ad23a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ad23a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10ad23b3 jmp 0x10ad23c4 */
  goto L_10ad23c4;
L_10ad23b5:;
  /* 10ad23b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ad23bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad23be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10ad23c4:;
  /* 10ad23c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad23cb jge 0x10ad246f */
  if ((C.sf==C.of)) goto L_10ad246f;
  /* 10ad23d1 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad23d8 jle 0x10ad240b */
  if ((C.zf||C.sf!=C.of)) goto L_10ad240b;
  /* 10ad23da push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad23dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ad23e2 mov dl, byte ptr [ecx*2 + 0x10aef868] */
  DL = (r8((uint32_t)(ECX*2 + 0x10aef868)));
  /* 10ad23e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ad23ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ad23f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad23fa push eax */
  push32((uint32_t)(EAX));
  /* 10ad23fb call 0x10aca040 */
  push32(0x10ad2400u); f_10aca040();
  /* 10ad2400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2403 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ad2409 jmp 0x10ad243e */
  goto L_10ad243e;
L_10ad240b:;
  /* 10ad240b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ad2411 mov dl, byte ptr [ecx*2 + 0x10aef868] */
  DL = (r8((uint32_t)(ECX*2 + 0x10aef868)));
  /* 10ad2418 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10ad241e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ad2424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2429 mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad242f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2431 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad2435 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2438 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10ad243e:;
  /* 10ad243e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2445 je 0x10ad2468 */
  if (C.zf) goto L_10ad2468;
  /* 10ad2447 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ad244d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad2450 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2453 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10ad245a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ad245e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ad2464 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ad2466 jmp 0x10ad246a */
  goto L_10ad246a;
L_10ad2468:;
  /* 10ad2468 jmp 0x10ad246f */
  goto L_10ad246f;
L_10ad246a:;
  /* 10ad246a jmp 0x10ad23b5 */
  goto L_10ad23b5;
L_10ad246f:;
  /* 10ad246f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2471 jmp 0x10ad2476 */
  goto L_10ad2476;
L_10ad2473:;
  /* 10ad2473 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ad2476:;
  /* 10ad2476 mov esp, ebp */
  ESP = (EBP);
  /* 10ad2478 pop ebp */
  EBP = (pop32());
  /* 10ad2479 ret  */
  ESPCHK(0x10ad21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x10ad2480 (10 bytes, 5 insns) */
void f_10ad2480(void) {
  FTRACE(0x10ad2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2481 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2483 mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10ad2488 pop ebp */
  EBP = (pop32());
  /* 10ad2489 ret  */
  ESPCHK(0x10ad2480u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x10ad2490 (575 bytes, 196 insns) */
void f_10ad2490(void) {
  FTRACE(0x10ad2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2490 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2491 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad2495 push 0x10aeb9e8 */
  push32((uint32_t)(0x10aeb9e8u));
  /* 10ad249a push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10ad249f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ad24a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad24a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ad24ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad24b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad24b1 push esi */
  push32((uint32_t)(ESI));
  /* 10ad24b2 push edi */
  push32((uint32_t)(EDI));
  /* 10ad24b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad24b6 cmp dword ptr [0x10aef874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad24bd jne 0x10ad250e */
  if (!C.zf) goto L_10ad250e;
  /* 10ad24bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ad24c2 push eax */
  push32((uint32_t)(EAX));
  /* 10ad24c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad24c5 push 0x10aeb11c */
  push32((uint32_t)(0x10aeb11cu));
  /* 10ad24ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad24cc call dword ptr [0x10af22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c4))), 0x10ad24d2u);
  /* 10ad24d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad24d4 je 0x10ad24e2 */
  if (C.zf) goto L_10ad24e2;
  /* 10ad24d6 mov dword ptr [0x10aef874], 1 */
  w32((uint32_t)(0x10aef874), (0x1u));
  /* 10ad24e0 jmp 0x10ad250e */
  goto L_10ad250e;
L_10ad24e2:;
  /* 10ad24e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ad24e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad24e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad24e8 push 0x10aeb118 */
  push32((uint32_t)(0x10aeb118u));
  /* 10ad24ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad24ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad24f1 call dword ptr [0x10af22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d4))), 0x10ad24f7u);
  /* 10ad24f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad24f9 je 0x10ad2507 */
  if (C.zf) goto L_10ad2507;
  /* 10ad24fb mov dword ptr [0x10aef874], 2 */
  w32((uint32_t)(0x10aef874), (0x2u));
  /* 10ad2505 jmp 0x10ad250e */
  goto L_10ad250e;
L_10ad2507:;
  /* 10ad2507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2509 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad250e:;
  /* 10ad250e cmp dword ptr [0x10aef874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2515 jne 0x10ad2532 */
  if (!C.zf) goto L_10ad2532;
  /* 10ad2517 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad251a push edx */
  push32((uint32_t)(EDX));
  /* 10ad251b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad251e push eax */
  push32((uint32_t)(EAX));
  /* 10ad251f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad2522 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2526 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2527 call dword ptr [0x10af22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c4))), 0x10ad252du);
  /* 10ad252d jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad2532:;
  /* 10ad2532 cmp dword ptr [0x10aef874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2539 jne 0x10ad26e7 */
  if (!C.zf) goto L_10ad26e7;
  /* 10ad253f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2543 jne 0x10ad254d */
  if (!C.zf) goto L_10ad254d;
  /* 10ad2545 mov eax, dword ptr [0x10aef7e8] */
  EAX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad254a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10ad254d:;
  /* 10ad254d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad254f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2558 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2559 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad255c push edx */
  push32((uint32_t)(EDX));
  /* 10ad255d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad2562 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad2565 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2566 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad256cu);
  /* 10ad256c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ad256f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2573 jne 0x10ad257c */
  if (!C.zf) goto L_10ad257c;
  /* 10ad2575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2577 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad257c:;
  /* 10ad257c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad2583 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad2586 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2589 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad258b call 0x10ac71d0 */
  push32(0x10ad2590u); f_10ac71d0();
  /* 10ad2590 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ad2593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad2596 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ad2599 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ad259c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad259f push edx */
  push32((uint32_t)(EDX));
  /* 10ad25a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad25a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ad25a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad25a6 call 0x10ac7da0 */
  push32(0x10ad25abu); f_10ac7da0();
  /* 10ad25ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad25ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad25b5 jmp 0x10ad25ce */
  goto L_10ad25ce;
  /* 10ad25b7 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad25bc ret  */
  ESPCHK(0x10ad2490u, _esp0);
  ESP += 4; return;
  /* 10ad25bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad25c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10ad25c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad25ce:;
  /* 10ad25ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad25d2 jne 0x10ad25db */
  if (!C.zf) goto L_10ad25db;
  /* 10ad25d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad25d6 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad25db:;
  /* 10ad25db push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad25dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad25df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad25e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad25e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ad25e6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad25e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad25ea push eax */
  push32((uint32_t)(EAX));
  /* 10ad25eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad25ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ad25ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad25f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad25f7 push edx */
  push32((uint32_t)(EDX));
  /* 10ad25f8 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad25feu);
  /* 10ad25fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2600 jne 0x10ad2609 */
  if (!C.zf) goto L_10ad2609;
  /* 10ad2602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2604 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad2609:;
  /* 10ad2609 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ad2610 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad2613 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10ad2617 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad261a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad261c call 0x10ac71d0 */
  push32(0x10ad2621u); f_10ac71d0();
  /* 10ad2621 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ad2624 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad2627 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ad262a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ad262d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad2634 jmp 0x10ad264d */
  goto L_10ad264d;
  /* 10ad2636 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad263b ret  */
  ESPCHK(0x10ad2490u, _esp0);
  ESP += 4; return;
  /* 10ad263c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad263f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ad2646 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad264d:;
  /* 10ad264d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2651 jne 0x10ad265a */
  if (!C.zf) goto L_10ad265a;
  /* 10ad2653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2655 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad265a:;
  /* 10ad265a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad265e jne 0x10ad2669 */
  if (!C.zf) goto L_10ad2669;
  /* 10ad2660 mov edx, dword ptr [0x10aef7d8] */
  EDX = (r32((uint32_t)(0x10aef7d8)));
  /* 10ad2666 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ad2669:;
  /* 10ad2669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad266c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad266f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10ad2675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad2678 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad267b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10ad2682 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad2685 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2686 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad2689 push edx */
  push32((uint32_t)(EDX));
  /* 10ad268a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ad268d push eax */
  push32((uint32_t)(EAX));
  /* 10ad268e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2691 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2692 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad2695 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2696 call dword ptr [0x10af22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d4))), 0x10ad269cu);
  /* 10ad269c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ad269f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad26a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad26a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad26a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10ad26ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad26b2 je 0x10ad26c8 */
  if (C.zf) goto L_10ad26c8;
  /* 10ad26b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad26b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad26ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad26bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad26c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad26c6 je 0x10ad26cc */
  if (C.zf) goto L_10ad26cc;
L_10ad26c8:;
  /* 10ad26c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad26ca jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad26cc:;
  /* 10ad26cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad26cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad26d1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad26d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad26d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad26d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad26d9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad26da call 0x10acbf20 */
  push32(0x10ad26dfu); f_10acbf20();
  /* 10ad26df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad26e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad26e5 jmp 0x10ad26e9 */
  goto L_10ad26e9;
L_10ad26e7:;
  /* 10ad26e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad26e9:;
  /* 10ad26e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ad26ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad26ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ad26f6 pop edi */
  EDI = (pop32());
  /* 10ad26f7 pop esi */
  ESI = (pop32());
  /* 10ad26f8 pop ebx */
  EBX = (pop32());
  /* 10ad26f9 mov esp, ebp */
  ESP = (EBP);
  /* 10ad26fb pop ebp */
  EBP = (pop32());
  /* 10ad26fc ret  */
  ESPCHK(0x10ad2490u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x10ad2700 (208 bytes, 85 insns) */
void f_10ad2700(void) {
  FTRACE(0x10ad2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2700 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2701 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2703 push edi */
  push32((uint32_t)(EDI));
  /* 10ad2704 push esi */
  push32((uint32_t)(ESI));
  /* 10ad2705 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad2706 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad2709 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad270c lea eax, [0x10aef7d0] */
  EAX = ((uint32_t)(0x10aef7d0));
  /* 10ad2712 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2716 jne 0x10ad2753 */
  if (!C.zf) goto L_10ad2753;
  /* 10ad2718 mov al, 0xff */
  AL = (0xffu);
  /* 10ad271a mov edi, edi */
  EDI = (EDI);
L_10ad271c:;
  /* 10ad271c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ad271e je 0x10ad274e */
  if (C.zf) goto L_10ad274e;
  /* 10ad2720 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ad2722 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ad2723 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10ad2725 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ad2726 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2728 je 0x10ad271c */
  if (C.zf) goto L_10ad271c;
  /* 10ad272a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ad272c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad272e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ad2730 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ad2733 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad2735 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad2737 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10ad2739 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ad273b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad273d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ad273f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ad2742 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad2744 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad2746 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2748 je 0x10ad271c */
  if (C.zf) goto L_10ad271c;
  /* 10ad274a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ad274c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10ad274e:;
  /* 10ad274e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10ad2751 jmp 0x10ad27cb */
  goto L_10ad27cb;
L_10ad2753:;
  /* 10ad2753 lock inc dword ptr [0x10aef964] */
  x86_unimpl("lock inc @ 0x10ad2753");
  /* 10ad275a cmp dword ptr [0x10aef954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2761 jg 0x10ad2767 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad2767;
  /* 10ad2763 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2765 jmp 0x10ad277c */
  goto L_10ad277c;
L_10ad2767:;
  /* 10ad2767 lock dec dword ptr [0x10aef964] */
  x86_unimpl("lock dec @ 0x10ad2767");
  /* 10ad276e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad2770 call 0x10ac7a30 */
  push32(0x10ad2775u); f_10ac7a30();
  /* 10ad2775 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10ad277c:;
  /* 10ad277c mov eax, 0xff */
  EAX = (0xffu);
  /* 10ad2781 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ad2783 nop  */
  /* nop */
L_10ad2784:;
  /* 10ad2784 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ad2786 je 0x10ad27af */
  if (C.zf) goto L_10ad27af;
  /* 10ad2788 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ad278a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ad278b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ad278d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ad278e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2790 je 0x10ad2784 */
  if (C.zf) goto L_10ad2784;
  /* 10ad2792 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2793 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad2794 call 0x10ad3870 */
  push32(0x10ad2799u); f_10ad3870();
  /* 10ad2799 mov ebx, eax */
  EBX = (EAX);
  /* 10ad279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad279e call 0x10ad3870 */
  push32(0x10ad27a3u); f_10ad3870();
  /* 10ad27a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad27a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad27a8 je 0x10ad2784 */
  if (C.zf) goto L_10ad2784;
  /* 10ad27aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad27ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ad27af:;
  /* 10ad27af mov ebx, eax */
  EBX = (EAX);
  /* 10ad27b1 pop eax */
  EAX = (pop32());
  /* 10ad27b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad27b4 jne 0x10ad27bf */
  if (!C.zf) goto L_10ad27bf;
  /* 10ad27b6 lock dec dword ptr [0x10aef964] */
  x86_unimpl("lock dec @ 0x10ad27b6");
  /* 10ad27bd jmp 0x10ad27c9 */
  goto L_10ad27c9;
L_10ad27bf:;
  /* 10ad27bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad27c1 call 0x10ac7ad0 */
  push32(0x10ad27c6u); f_10ac7ad0();
  /* 10ad27c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad27c9:;
  /* 10ad27c9 mov eax, ebx */
  EAX = (EBX);
L_10ad27cb:;
  /* 10ad27cb pop ebx */
  EBX = (pop32());
  /* 10ad27cc pop esi */
  ESI = (pop32());
  /* 10ad27cd pop edi */
  EDI = (pop32());
  /* 10ad27ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ad27cf ret  */
  ESPCHK(0x10ad2700u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x10ad27d0 (257 bytes, 103 insns) */
void f_10ad27d0(void) {
  FTRACE(0x10ad27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad27d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad27d3 push edi */
  push32((uint32_t)(EDI));
  /* 10ad27d4 push esi */
  push32((uint32_t)(ESI));
  /* 10ad27d5 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad27d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad27d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad27db je 0x10ad28ca */
  if (C.zf) goto L_10ad28ca;
  /* 10ad27e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad27e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad27e7 lea eax, [0x10aef7d0] */
  EAX = ((uint32_t)(0x10aef7d0));
  /* 10ad27ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad27f1 jne 0x10ad2841 */
  if (!C.zf) goto L_10ad2841;
  /* 10ad27f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10ad27f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10ad27f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10ad27f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ad27fc:;
  /* 10ad27fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10ad27fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ad2800 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10ad2802 je 0x10ad2825 */
  if (C.zf) goto L_10ad2825;
  /* 10ad2804 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ad2806 je 0x10ad2825 */
  if (C.zf) goto L_10ad2825;
  /* 10ad2808 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ad2809 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ad280a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad280c jb 0x10ad2814 */
  if (C.cf) goto L_10ad2814;
  /* 10ad280e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2810 ja 0x10ad2814 */
  if ((!C.cf&&!C.zf)) goto L_10ad2814;
  /* 10ad2812 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10ad2814:;
  /* 10ad2814 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2816 jb 0x10ad281e */
  if (C.cf) goto L_10ad281e;
  /* 10ad2818 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad281a ja 0x10ad281e */
  if ((!C.cf&&!C.zf)) goto L_10ad281e;
  /* 10ad281c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10ad281e:;
  /* 10ad281e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2820 jne 0x10ad282f */
  if (!C.zf) goto L_10ad282f;
  /* 10ad2822 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ad2823 jne 0x10ad27fc */
  if (!C.zf) goto L_10ad27fc;
L_10ad2825:;
  /* 10ad2825 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad2827 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad2829 je 0x10ad28ca */
  if (C.zf) goto L_10ad28ca;
L_10ad282f:;
  /* 10ad282f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ad2834 jb 0x10ad28ca */
  if (C.cf) goto L_10ad28ca;
  /* 10ad283a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad283c jmp 0x10ad28ca */
  goto L_10ad28ca;
L_10ad2841:;
  /* 10ad2841 lock inc dword ptr [0x10aef964] */
  x86_unimpl("lock inc @ 0x10ad2841");
  /* 10ad2848 cmp dword ptr [0x10aef954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad284f jg 0x10ad2855 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad2855;
  /* 10ad2851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2853 jmp 0x10ad286e */
  goto L_10ad286e;
L_10ad2855:;
  /* 10ad2855 lock dec dword ptr [0x10aef964] */
  x86_unimpl("lock dec @ 0x10ad2855");
  /* 10ad285c mov ebx, ecx */
  EBX = (ECX);
  /* 10ad285e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad2860 call 0x10ac7a30 */
  push32(0x10ad2865u); f_10ac7a30();
  /* 10ad2865 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10ad286c mov ecx, ebx */
  ECX = (EBX);
L_10ad286e:;
  /* 10ad286e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2870 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ad2872 mov edi, edi */
  EDI = (EDI);
L_10ad2874:;
  /* 10ad2874 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ad2876 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2878 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10ad287a je 0x10ad289f */
  if (C.zf) goto L_10ad289f;
  /* 10ad287c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ad287e je 0x10ad289f */
  if (C.zf) goto L_10ad289f;
  /* 10ad2880 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ad2881 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ad2882 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2883 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2884 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad2885 call 0x10ad3870 */
  push32(0x10ad288au); f_10ad3870();
  /* 10ad288a mov ebx, eax */
  EBX = (EAX);
  /* 10ad288c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad288f call 0x10ad3870 */
  push32(0x10ad2894u); f_10ad3870();
  /* 10ad2894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2897 pop ecx */
  ECX = (pop32());
  /* 10ad2898 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad289a jne 0x10ad28a5 */
  if (!C.zf) goto L_10ad28a5;
  /* 10ad289c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ad289d jne 0x10ad2874 */
  if (!C.zf) goto L_10ad2874;
L_10ad289f:;
  /* 10ad289f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad28a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad28a3 je 0x10ad28ae */
  if (C.zf) goto L_10ad28ae;
L_10ad28a5:;
  /* 10ad28a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10ad28aa jb 0x10ad28ae */
  if (C.cf) goto L_10ad28ae;
  /* 10ad28ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10ad28ae:;
  /* 10ad28ae pop eax */
  EAX = (pop32());
  /* 10ad28af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad28b1 jne 0x10ad28bc */
  if (!C.zf) goto L_10ad28bc;
  /* 10ad28b3 lock dec dword ptr [0x10aef964] */
  x86_unimpl("lock dec @ 0x10ad28b3");
  /* 10ad28ba jmp 0x10ad28ca */
  goto L_10ad28ca;
L_10ad28bc:;
  /* 10ad28bc mov ebx, ecx */
  EBX = (ECX);
  /* 10ad28be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad28c0 call 0x10ac7ad0 */
  push32(0x10ad28c5u); f_10ac7ad0();
  /* 10ad28c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad28c8 mov ecx, ebx */
  ECX = (EBX);
L_10ad28ca:;
  /* 10ad28ca mov eax, ecx */
  EAX = (ECX);
  /* 10ad28cc pop ebx */
  EBX = (pop32());
  /* 10ad28cd pop esi */
  ESI = (pop32());
  /* 10ad28ce pop edi */
  EDI = (pop32());
  /* 10ad28cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ad28d0 ret  */
  ESPCHK(0x10ad27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x10ad28e0 (255 bytes, 88 insns) */
void f_10ad28e0(void) {
  FTRACE(0x10ad28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad28e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad28e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ad28e6:;
  /* 10ad28e6 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad28ed jle 0x10ad2906 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad2906;
  /* 10ad28ef push 8 */
  push32((uint32_t)(0x8u));
  /* 10ad28f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad28f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad28f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad28f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad28f9 call 0x10aca040 */
  push32(0x10ad28feu); f_10aca040();
  /* 10ad28fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2901 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ad2904 jmp 0x10ad291f */
  goto L_10ad291f;
L_10ad2906:;
  /* 10ad2906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad290b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad290d mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad2913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2915 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad2919 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad291c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad291f:;
  /* 10ad291f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2923 je 0x10ad2930 */
  if (C.zf) goto L_10ad2930;
  /* 10ad2925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2928 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad292b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad292e jmp 0x10ad28e6 */
  goto L_10ad28e6;
L_10ad2930:;
  /* 10ad2930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2933 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2935 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad2937 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad293a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad293d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2940 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad2943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2946 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2949 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad294d je 0x10ad2955 */
  if (C.zf) goto L_10ad2955;
  /* 10ad294f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2953 jne 0x10ad2968 */
  if (!C.zf) goto L_10ad2968;
L_10ad2955:;
  /* 10ad2955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad295a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad295c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad295f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2965 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ad2968:;
  /* 10ad2968 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ad296f:;
  /* 10ad296f cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2976 jle 0x10ad298b */
  if ((C.zf||C.sf!=C.of)) goto L_10ad298b;
  /* 10ad2978 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad297a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad297d push edx */
  push32((uint32_t)(EDX));
  /* 10ad297e call 0x10aca040 */
  push32(0x10ad2983u); f_10aca040();
  /* 10ad2983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2986 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad2989 jmp 0x10ad29a0 */
  goto L_10ad29a0;
L_10ad298b:;
  /* 10ad298b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad298e mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad2994 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2996 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad299a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad299d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ad29a0:;
  /* 10ad29a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad29a4 je 0x10ad29cb */
  if (C.zf) goto L_10ad29cb;
  /* 10ad29a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad29a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad29ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad29af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ad29b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad29b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad29b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad29bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad29bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad29c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad29c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad29c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ad29c9 jmp 0x10ad296f */
  goto L_10ad296f;
L_10ad29cb:;
  /* 10ad29cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad29cf jne 0x10ad29d8 */
  if (!C.zf) goto L_10ad29d8;
  /* 10ad29d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad29d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad29d6 jmp 0x10ad29db */
  goto L_10ad29db;
L_10ad29d8:;
  /* 10ad29d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ad29db:;
  /* 10ad29db mov esp, ebp */
  ESP = (EBP);
  /* 10ad29dd pop ebp */
  EBP = (pop32());
  /* 10ad29de ret  */
  ESPCHK(0x10ad28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x10ad29e0 (17 bytes, 8 insns) */
void f_10ad29e0(void) {
  FTRACE(0x10ad29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad29e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad29e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad29e6 push eax */
  push32((uint32_t)(EAX));
  /* 10ad29e7 call 0x10ad28e0 */
  push32(0x10ad29ecu); f_10ad28e0();
  /* 10ad29ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad29ef pop ebp */
  EBP = (pop32());
  /* 10ad29f0 ret  */
  ESPCHK(0x10ad29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a00 @ 0x10ad2a00 (297 bytes, 106 insns) */
void f_10ad2a00(void) {
  FTRACE(0x10ad2a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2a01 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2a03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2a06 push esi */
  push32((uint32_t)(ESI));
L_10ad2a07:;
  /* 10ad2a07 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2a0e jle 0x10ad2a27 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad2a27;
  /* 10ad2a10 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ad2a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad2a17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad2a19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2a1a call 0x10aca040 */
  push32(0x10ad2a1fu); f_10aca040();
  /* 10ad2a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2a22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad2a25 jmp 0x10ad2a40 */
  goto L_10ad2a40;
L_10ad2a27:;
  /* 10ad2a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2a2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad2a2e mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad2a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2a36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad2a3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2a3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ad2a40:;
  /* 10ad2a40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2a44 je 0x10ad2a51 */
  if (C.zf) goto L_10ad2a51;
  /* 10ad2a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad2a4f jmp 0x10ad2a07 */
  goto L_10ad2a07;
L_10ad2a51:;
  /* 10ad2a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2a56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad2a58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad2a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2a61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad2a64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2a67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ad2a6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2a6e je 0x10ad2a76 */
  if (C.zf) goto L_10ad2a76;
  /* 10ad2a70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2a74 jne 0x10ad2a89 */
  if (!C.zf) goto L_10ad2a89;
L_10ad2a76:;
  /* 10ad2a76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2a7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad2a7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad2a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2a83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2a86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ad2a89:;
  /* 10ad2a89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ad2a90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ad2a97:;
  /* 10ad2a97 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2a9e jle 0x10ad2ab3 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad2ab3;
  /* 10ad2aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad2aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2aa6 call 0x10aca040 */
  push32(0x10ad2aabu); f_10aca040();
  /* 10ad2aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2aae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ad2ab1 jmp 0x10ad2ac8 */
  goto L_10ad2ac8;
L_10ad2ab3:;
  /* 10ad2ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2ab6 mov ecx, dword ptr [0x10aedc98] */
  ECX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad2abc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2abe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ad2ac2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2ac5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10ad2ac8:;
  /* 10ad2ac8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2acc je 0x10ad2b09 */
  if (C.zf) goto L_10ad2b09;
  /* 10ad2ace push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ad2ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad2ad5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2ada call 0x10ad39a0 */
  push32(0x10ad2adfu); f_10ad39a0();
  /* 10ad2adf mov ecx, eax */
  ECX = (EAX);
  /* 10ad2ae1 mov esi, edx */
  ESI = (EDX);
  /* 10ad2ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2ae6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2ae9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad2aea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2aec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2aee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2af1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10ad2af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2af9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad2afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad2afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2b01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ad2b07 jmp 0x10ad2a97 */
  goto L_10ad2a97;
L_10ad2b09:;
  /* 10ad2b09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2b0d jne 0x10ad2b1e */
  if (!C.zf) goto L_10ad2b1e;
  /* 10ad2b0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2b12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad2b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad2b17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad2b1c jmp 0x10ad2b24 */
  goto L_10ad2b24;
L_10ad2b1e:;
  /* 10ad2b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2b21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10ad2b24:;
  /* 10ad2b24 pop esi */
  ESI = (pop32());
  /* 10ad2b25 mov esp, ebp */
  ESP = (EBP);
  /* 10ad2b27 pop ebp */
  EBP = (pop32());
  /* 10ad2b28 ret  */
  ESPCHK(0x10ad2a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x10ad2b30 (61 bytes, 18 insns) */
void f_10ad2b30(void) {
  FTRACE(0x10ad2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2b31 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2b33 cmp dword ptr [0x10aef930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2b3a jne 0x10ad2b6b */
  if (!C.zf) goto L_10ad2b6b;
  /* 10ad2b3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2b3e call 0x10ac7a30 */
  push32(0x10ad2b43u); f_10ac7a30();
  /* 10ad2b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b46 cmp dword ptr [0x10aef930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2b4d jne 0x10ad2b61 */
  if (!C.zf) goto L_10ad2b61;
  /* 10ad2b4f call 0x10ad2b90 */
  push32(0x10ad2b54u); f_10ad2b90();
  /* 10ad2b54 mov eax, dword ptr [0x10aef930] */
  EAX = (r32((uint32_t)(0x10aef930)));
  /* 10ad2b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b5c mov dword ptr [0x10aef930], eax */
  w32((uint32_t)(0x10aef930), (EAX));
L_10ad2b61:;
  /* 10ad2b61 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2b63 call 0x10ac7ad0 */
  push32(0x10ad2b68u); f_10ac7ad0();
  /* 10ad2b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad2b6b:;
  /* 10ad2b6b pop ebp */
  EBP = (pop32());
  /* 10ad2b6c ret  */
  ESPCHK(0x10ad2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b70 @ 0x10ad2b70 (30 bytes, 11 insns) */
void f_10ad2b70(void) {
  FTRACE(0x10ad2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2b71 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2b73 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2b75 call 0x10ac7a30 */
  push32(0x10ad2b7au); f_10ac7a30();
  /* 10ad2b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b7d call 0x10ad2b90 */
  push32(0x10ad2b82u); f_10ad2b90();
  /* 10ad2b82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2b84 call 0x10ac7ad0 */
  push32(0x10ad2b89u); f_10ac7ad0();
  /* 10ad2b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2b8c pop ebp */
  EBP = (pop32());
  /* 10ad2b8d ret  */
  ESPCHK(0x10ad2b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x10ad2b90 (939 bytes, 266 insns) */
void f_10ad2b90(void) {
  FTRACE(0x10ad2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2b91 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2b96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad2b9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad2b9f call 0x10ac7a30 */
  push32(0x10ad2ba4u); f_10ac7a30();
  /* 10ad2ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2ba7 mov dword ptr [0x10aef878], 0 */
  w32((uint32_t)(0x10aef878), (0x0u));
  /* 10ad2bb1 mov dword ptr [0x10aeee38], 0xffffffff */
  w32((uint32_t)(0x10aeee38), (0xffffffffu));
  /* 10ad2bbb mov eax, dword ptr [0x10aeee38] */
  EAX = (r32((uint32_t)(0x10aeee38)));
  /* 10ad2bc0 mov dword ptr [0x10aeee28], eax */
  w32((uint32_t)(0x10aeee28), (EAX));
  /* 10ad2bc5 push 0x10aeba48 */
  push32((uint32_t)(0x10aeba48u));
  /* 10ad2bca call 0x10ad3a10 */
  push32(0x10ad2bcfu); f_10ad3a10();
  /* 10ad2bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2bd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad2bd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2bd9 jne 0x10ad2d13 */
  if (!C.zf) goto L_10ad2d13;
  /* 10ad2bdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad2be1 call 0x10ac7ad0 */
  push32(0x10ad2be6u); f_10ac7ad0();
  /* 10ad2be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2be9 push 0x10aef880 */
  push32((uint32_t)(0x10aef880u));
  /* 10ad2bee call dword ptr [0x10af2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2288))), 0x10ad2bf4u);
  /* 10ad2bf4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2bf7 je 0x10ad2d0e */
  if (C.zf) goto L_10ad2d0e;
  /* 10ad2bfd mov dword ptr [0x10aef878], 1 */
  w32((uint32_t)(0x10aef878), (0x1u));
  /* 10ad2c07 mov ecx, dword ptr [0x10aef880] */
  ECX = (r32((uint32_t)(0x10aef880)));
  /* 10ad2c0d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2c10 mov dword ptr [0x10aeed90], ecx */
  w32((uint32_t)(0x10aeed90), (ECX));
  /* 10ad2c16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2c18 mov dx, word ptr [0x10aef8c6] */
  DX = (r16((uint32_t)(0x10aef8c6)));
  /* 10ad2c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad2c21 je 0x10ad2c39 */
  if (C.zf) goto L_10ad2c39;
  /* 10ad2c23 mov eax, dword ptr [0x10aef8d4] */
  EAX = (r32((uint32_t)(0x10aef8d4)));
  /* 10ad2c28 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2c2b mov ecx, dword ptr [0x10aeed90] */
  ECX = (r32((uint32_t)(0x10aeed90)));
  /* 10ad2c31 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2c33 mov dword ptr [0x10aeed90], ecx */
  w32((uint32_t)(0x10aeed90), (ECX));
L_10ad2c39:;
  /* 10ad2c39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2c3b mov dx, word ptr [0x10aef91a] */
  DX = (r16((uint32_t)(0x10aef91a)));
  /* 10ad2c42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad2c44 je 0x10ad2c6e */
  if (C.zf) goto L_10ad2c6e;
  /* 10ad2c46 cmp dword ptr [0x10aef928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2c4d je 0x10ad2c6e */
  if (C.zf) goto L_10ad2c6e;
  /* 10ad2c4f mov dword ptr [0x10aeed94], 1 */
  w32((uint32_t)(0x10aeed94), (0x1u));
  /* 10ad2c59 mov eax, dword ptr [0x10aef928] */
  EAX = (r32((uint32_t)(0x10aef928)));
  /* 10ad2c5e sub eax, dword ptr [0x10aef8d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aef8d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad2c64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2c67 mov dword ptr [0x10aeed98], eax */
  w32((uint32_t)(0x10aeed98), (EAX));
  /* 10ad2c6c jmp 0x10ad2c82 */
  goto L_10ad2c82;
L_10ad2c6e:;
  /* 10ad2c6e mov dword ptr [0x10aeed94], 0 */
  w32((uint32_t)(0x10aeed94), (0x0u));
  /* 10ad2c78 mov dword ptr [0x10aeed98], 0 */
  w32((uint32_t)(0x10aeed98), (0x0u));
L_10ad2c82:;
  /* 10ad2c82 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ad2c85 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2c88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ad2c8a mov edx, dword ptr [0x10aeee1c] */
  EDX = (r32((uint32_t)(0x10aeee1c)));
  /* 10ad2c90 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2c91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad2c93 push 0x10aef884 */
  push32((uint32_t)(0x10aef884u));
  /* 10ad2c98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad2c9d mov eax, dword ptr [0x10aef7e8] */
  EAX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad2ca2 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2ca3 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad2ca9u);
  /* 10ad2ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2cab je 0x10ad2cbf */
  if (C.zf) goto L_10ad2cbf;
  /* 10ad2cad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2cb1 jne 0x10ad2cbf */
  if (!C.zf) goto L_10ad2cbf;
  /* 10ad2cb3 mov ecx, dword ptr [0x10aeee1c] */
  ECX = (r32((uint32_t)(0x10aeee1c)));
  /* 10ad2cb9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10ad2cbd jmp 0x10ad2cc8 */
  goto L_10ad2cc8;
L_10ad2cbf:;
  /* 10ad2cbf mov edx, dword ptr [0x10aeee1c] */
  EDX = (r32((uint32_t)(0x10aeee1c)));
  /* 10ad2cc5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ad2cc8:;
  /* 10ad2cc8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ad2ccb push eax */
  push32((uint32_t)(EAX));
  /* 10ad2ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2cce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ad2cd0 mov ecx, dword ptr [0x10aeee20] */
  ECX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2cd7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad2cd9 push 0x10aef8d8 */
  push32((uint32_t)(0x10aef8d8u));
  /* 10ad2cde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad2ce3 mov edx, dword ptr [0x10aef7e8] */
  EDX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad2ce9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2cea call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad2cf0u);
  /* 10ad2cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2cf2 je 0x10ad2d05 */
  if (C.zf) goto L_10ad2d05;
  /* 10ad2cf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2cf8 jne 0x10ad2d05 */
  if (!C.zf) goto L_10ad2d05;
  /* 10ad2cfa mov eax, dword ptr [0x10aeee20] */
  EAX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2cff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10ad2d03 jmp 0x10ad2d0e */
  goto L_10ad2d0e;
L_10ad2d05:;
  /* 10ad2d05 mov ecx, dword ptr [0x10aeee20] */
  ECX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2d0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10ad2d0e:;
  /* 10ad2d0e jmp 0x10ad2f37 */
  goto L_10ad2f37;
L_10ad2d13:;
  /* 10ad2d13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2d16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2d1b je 0x10ad2d3d */
  if (C.zf) goto L_10ad2d3d;
  /* 10ad2d1d cmp dword ptr [0x10aef92c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef92c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2d24 je 0x10ad2d4c */
  if (C.zf) goto L_10ad2d4c;
  /* 10ad2d26 mov ecx, dword ptr [0x10aef92c] */
  ECX = (r32((uint32_t)(0x10aef92c)));
  /* 10ad2d2c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2d2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2d30 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2d31 call 0x10acfcc0 */
  push32(0x10ad2d36u); f_10acfcc0();
  /* 10ad2d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad2d3b jne 0x10ad2d4c */
  if (!C.zf) goto L_10ad2d4c;
L_10ad2d3d:;
  /* 10ad2d3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad2d3f call 0x10ac7ad0 */
  push32(0x10ad2d44u); f_10ac7ad0();
  /* 10ad2d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d47 jmp 0x10ad2f37 */
  goto L_10ad2f37;
L_10ad2d4c:;
  /* 10ad2d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad2d4e mov eax, dword ptr [0x10aef92c] */
  EAX = (r32((uint32_t)(0x10aef92c)));
  /* 10ad2d53 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2d54 call 0x10ac4ac0 */
  push32(0x10ad2d59u); f_10ac4ac0();
  /* 10ad2d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10ad2d61 push 0x10aeba40 */
  push32((uint32_t)(0x10aeba40u));
  /* 10ad2d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad2d68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2d6b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2d6c call 0x10ac6e60 */
  push32(0x10ad2d71u); f_10ac6e60();
  /* 10ad2d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d77 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2d78 call 0x10ac4030 */
  push32(0x10ad2d7du); f_10ac4030();
  /* 10ad2d7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d80 mov dword ptr [0x10aef92c], eax */
  w32((uint32_t)(0x10aef92c), (EAX));
  /* 10ad2d85 cmp dword ptr [0x10aef92c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef92c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2d8c jne 0x10ad2d9d */
  if (!C.zf) goto L_10ad2d9d;
  /* 10ad2d8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad2d90 call 0x10ac7ad0 */
  push32(0x10ad2d95u); f_10ac7ad0();
  /* 10ad2d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2d98 jmp 0x10ad2f37 */
  goto L_10ad2f37;
L_10ad2d9d:;
  /* 10ad2d9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2da0 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2da1 mov eax, dword ptr [0x10aef92c] */
  EAX = (r32((uint32_t)(0x10aef92c)));
  /* 10ad2da6 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2da7 call 0x10ac6fe0 */
  push32(0x10ad2dacu); f_10ac6fe0();
  /* 10ad2dac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2daf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad2db1 call 0x10ac7ad0 */
  push32(0x10ad2db6u); f_10ac7ad0();
  /* 10ad2db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2db9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ad2dbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2dbe push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2dbf mov edx, dword ptr [0x10aeee1c] */
  EDX = (r32((uint32_t)(0x10aeee1c)));
  /* 10ad2dc5 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2dc6 call 0x10ac7850 */
  push32(0x10ad2dcbu); f_10ac7850();
  /* 10ad2dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2dce mov eax, dword ptr [0x10aeee1c] */
  EAX = (r32((uint32_t)(0x10aeee1c)));
  /* 10ad2dd3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10ad2dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2dda add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2ddd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2de0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2de3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2de6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2de9 jne 0x10ad2dfd */
  if (!C.zf) goto L_10ad2dfd;
  /* 10ad2deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2df1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad2df4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2df7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2dfa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ad2dfd:;
  /* 10ad2dfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e00 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2e01 call 0x10ad28e0 */
  push32(0x10ad2e06u); f_10ad28e0();
  /* 10ad2e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2e0f mov dword ptr [0x10aeed90], eax */
  w32((uint32_t)(0x10aeed90), (EAX));
L_10ad2e14:;
  /* 10ad2e14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad2e1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e1d je 0x10ad2e35 */
  if (C.zf) goto L_10ad2e35;
  /* 10ad2e1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad2e25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e28 jl 0x10ad2e40 */
  if ((C.sf!=C.of)) goto L_10ad2e40;
  /* 10ad2e2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2e30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e33 jg 0x10ad2e40 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad2e40;
L_10ad2e35:;
  /* 10ad2e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2e3e jmp 0x10ad2e14 */
  goto L_10ad2e14;
L_10ad2e40:;
  /* 10ad2e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2e46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e49 jne 0x10ad2ee5 */
  if (!C.zf) goto L_10ad2ee5;
  /* 10ad2e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2e58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e5b push edx */
  push32((uint32_t)(EDX));
  /* 10ad2e5c call 0x10ad28e0 */
  push32(0x10ad2e61u); f_10ad28e0();
  /* 10ad2e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad2e67 mov ecx, dword ptr [0x10aeed90] */
  ECX = (r32((uint32_t)(0x10aeed90)));
  /* 10ad2e6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e6f mov dword ptr [0x10aeed90], ecx */
  w32((uint32_t)(0x10aeed90), (ECX));
L_10ad2e75:;
  /* 10ad2e75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2e7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e7e jl 0x10ad2e96 */
  if ((C.sf!=C.of)) goto L_10ad2e96;
  /* 10ad2e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad2e86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e89 jg 0x10ad2e96 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad2e96;
  /* 10ad2e8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2e91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad2e94 jmp 0x10ad2e75 */
  goto L_10ad2e75;
L_10ad2e96:;
  /* 10ad2e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2e99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad2e9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2e9f jne 0x10ad2ee5 */
  if (!C.zf) goto L_10ad2ee5;
  /* 10ad2ea1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2ea4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2ea7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad2eaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2ead push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2eae call 0x10ad28e0 */
  push32(0x10ad2eb3u); f_10ad28e0();
  /* 10ad2eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2eb6 mov edx, dword ptr [0x10aeed90] */
  EDX = (r32((uint32_t)(0x10aeed90)));
  /* 10ad2ebc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2ebe mov dword ptr [0x10aeed90], edx */
  w32((uint32_t)(0x10aeed90), (EDX));
L_10ad2ec4:;
  /* 10ad2ec4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2ec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad2eca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2ecd jl 0x10ad2ee5 */
  if ((C.sf!=C.of)) goto L_10ad2ee5;
  /* 10ad2ecf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2ed2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ad2ed5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2ed8 jg 0x10ad2ee5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad2ee5;
  /* 10ad2eda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2edd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2ee0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad2ee3 jmp 0x10ad2ec4 */
  goto L_10ad2ec4;
L_10ad2ee5:;
  /* 10ad2ee5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2ee9 je 0x10ad2ef9 */
  if (C.zf) goto L_10ad2ef9;
  /* 10ad2eeb mov edx, dword ptr [0x10aeed90] */
  EDX = (r32((uint32_t)(0x10aeed90)));
  /* 10ad2ef1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad2ef3 mov dword ptr [0x10aeed90], edx */
  w32((uint32_t)(0x10aeed90), (EDX));
L_10ad2ef9:;
  /* 10ad2ef9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2efc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad2eff mov dword ptr [0x10aeed94], ecx */
  w32((uint32_t)(0x10aeed94), (ECX));
  /* 10ad2f05 cmp dword ptr [0x10aeed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aeed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2f0c je 0x10ad2f2e */
  if (C.zf) goto L_10ad2f2e;
  /* 10ad2f0e push 3 */
  push32((uint32_t)(0x3u));
  /* 10ad2f10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad2f13 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2f14 mov eax, dword ptr [0x10aeee20] */
  EAX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2f19 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2f1a call 0x10ac7850 */
  push32(0x10ad2f1fu); f_10ac7850();
  /* 10ad2f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2f22 mov ecx, dword ptr [0x10aeee20] */
  ECX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2f28 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10ad2f2c jmp 0x10ad2f37 */
  goto L_10ad2f37;
L_10ad2f2e:;
  /* 10ad2f2e mov edx, dword ptr [0x10aeee20] */
  EDX = (r32((uint32_t)(0x10aeee20)));
  /* 10ad2f34 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ad2f37:;
  /* 10ad2f37 mov esp, ebp */
  ESP = (EBP);
  /* 10ad2f39 pop ebp */
  EBP = (pop32());
  /* 10ad2f3a ret  */
  ESPCHK(0x10ad2b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x10ad2f40 (46 bytes, 18 insns) */
void f_10ad2f40(void) {
  FTRACE(0x10ad2f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2f44 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2f46 call 0x10ac7a30 */
  push32(0x10ad2f4bu); f_10ac7a30();
  /* 10ad2f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2f4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2f51 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2f52 call 0x10ad2f70 */
  push32(0x10ad2f57u); f_10ad2f70();
  /* 10ad2f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2f5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad2f5d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad2f5f call 0x10ac7ad0 */
  push32(0x10ad2f64u); f_10ac7ad0();
  /* 10ad2f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad2f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad2f6a mov esp, ebp */
  ESP = (EBP);
  /* 10ad2f6c pop ebp */
  EBP = (pop32());
  /* 10ad2f6d ret  */
  ESPCHK(0x10ad2f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x10ad2f70 (762 bytes, 246 insns) */
void f_10ad2f70(void) {
  FTRACE(0x10ad2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad2f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ad2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2f74 cmp dword ptr [0x10aeed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aeed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2f7b jne 0x10ad2f84 */
  if (!C.zf) goto L_10ad2f84;
  /* 10ad2f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2f7f jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad2f84:;
  /* 10ad2f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2f87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ad2f8a cmp ecx, dword ptr [0x10aeee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2f90 jne 0x10ad2fa4 */
  if (!C.zf) goto L_10ad2fa4;
  /* 10ad2f92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad2f95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ad2f98 cmp eax, dword ptr [0x10aeee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2f9e je 0x10ad316b */
  if (C.zf) goto L_10ad316b;
L_10ad2fa4:;
  /* 10ad2fa4 cmp dword ptr [0x10aef878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad2fab je 0x10ad3125 */
  if (C.zf) goto L_10ad3125;
  /* 10ad2fb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad2fb3 mov cx, word ptr [0x10aef918] */
  CX = (r16((uint32_t)(0x10aef918)));
  /* 10ad2fba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad2fbc jne 0x10ad3019 */
  if (!C.zf) goto L_10ad3019;
  /* 10ad2fbe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2fc0 mov dx, word ptr [0x10aef926] */
  DX = (r16((uint32_t)(0x10aef926)));
  /* 10ad2fc7 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2fc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2fca mov ax, word ptr [0x10aef924] */
  AX = (r16((uint32_t)(0x10aef924)));
  /* 10ad2fd0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad2fd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad2fd3 mov cx, word ptr [0x10aef922] */
  CX = (r16((uint32_t)(0x10aef922)));
  /* 10ad2fda push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2fdd mov dx, word ptr [0x10aef920] */
  DX = (r16((uint32_t)(0x10aef920)));
  /* 10ad2fe4 push edx */
  push32((uint32_t)(EDX));
  /* 10ad2fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad2fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad2fe9 mov ax, word ptr [0x10aef91c] */
  AX = (r16((uint32_t)(0x10aef91c)));
  /* 10ad2fef push eax */
  push32((uint32_t)(EAX));
  /* 10ad2ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad2ff2 mov cx, word ptr [0x10aef91e] */
  CX = (r16((uint32_t)(0x10aef91e)));
  /* 10ad2ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad2ffa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad2ffc mov dx, word ptr [0x10aef91a] */
  DX = (r16((uint32_t)(0x10aef91a)));
  /* 10ad3003 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3007 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ad300a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad300b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad300d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad300f call 0x10ad3270 */
  push32(0x10ad3014u); f_10ad3270();
  /* 10ad3014 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3017 jmp 0x10ad306a */
  goto L_10ad306a;
L_10ad3019:;
  /* 10ad3019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad301b mov dx, word ptr [0x10aef926] */
  DX = (r16((uint32_t)(0x10aef926)));
  /* 10ad3022 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3025 mov ax, word ptr [0x10aef924] */
  AX = (r16((uint32_t)(0x10aef924)));
  /* 10ad302b push eax */
  push32((uint32_t)(EAX));
  /* 10ad302c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad302e mov cx, word ptr [0x10aef922] */
  CX = (r16((uint32_t)(0x10aef922)));
  /* 10ad3035 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3036 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3038 mov dx, word ptr [0x10aef920] */
  DX = (r16((uint32_t)(0x10aef920)));
  /* 10ad303f push edx */
  push32((uint32_t)(EDX));
  /* 10ad3040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3042 mov ax, word ptr [0x10aef91e] */
  AX = (r16((uint32_t)(0x10aef91e)));
  /* 10ad3048 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad304b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad304d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad304f mov cx, word ptr [0x10aef91a] */
  CX = (r16((uint32_t)(0x10aef91a)));
  /* 10ad3056 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad305a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ad305d push eax */
  push32((uint32_t)(EAX));
  /* 10ad305e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3060 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3062 call 0x10ad3270 */
  push32(0x10ad3067u); f_10ad3270();
  /* 10ad3067 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad306a:;
  /* 10ad306a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad306c mov cx, word ptr [0x10aef8c4] */
  CX = (r16((uint32_t)(0x10aef8c4)));
  /* 10ad3073 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad3075 jne 0x10ad30d2 */
  if (!C.zf) goto L_10ad30d2;
  /* 10ad3077 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3079 mov dx, word ptr [0x10aef8d2] */
  DX = (r16((uint32_t)(0x10aef8d2)));
  /* 10ad3080 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3083 mov ax, word ptr [0x10aef8d0] */
  AX = (r16((uint32_t)(0x10aef8d0)));
  /* 10ad3089 push eax */
  push32((uint32_t)(EAX));
  /* 10ad308a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad308c mov cx, word ptr [0x10aef8ce] */
  CX = (r16((uint32_t)(0x10aef8ce)));
  /* 10ad3093 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3096 mov dx, word ptr [0x10aef8cc] */
  DX = (r16((uint32_t)(0x10aef8cc)));
  /* 10ad309d push edx */
  push32((uint32_t)(EDX));
  /* 10ad309e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad30a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad30a2 mov ax, word ptr [0x10aef8c8] */
  AX = (r16((uint32_t)(0x10aef8c8)));
  /* 10ad30a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ad30a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad30ab mov cx, word ptr [0x10aef8ca] */
  CX = (r16((uint32_t)(0x10aef8ca)));
  /* 10ad30b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad30b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad30b5 mov dx, word ptr [0x10aef8c6] */
  DX = (r16((uint32_t)(0x10aef8c6)));
  /* 10ad30bc push edx */
  push32((uint32_t)(EDX));
  /* 10ad30bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad30c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ad30c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad30c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad30c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad30c8 call 0x10ad3270 */
  push32(0x10ad30cdu); f_10ad3270();
  /* 10ad30cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad30d0 jmp 0x10ad3123 */
  goto L_10ad3123;
L_10ad30d2:;
  /* 10ad30d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad30d4 mov dx, word ptr [0x10aef8d2] */
  DX = (r16((uint32_t)(0x10aef8d2)));
  /* 10ad30db push edx */
  push32((uint32_t)(EDX));
  /* 10ad30dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad30de mov ax, word ptr [0x10aef8d0] */
  AX = (r16((uint32_t)(0x10aef8d0)));
  /* 10ad30e4 push eax */
  push32((uint32_t)(EAX));
  /* 10ad30e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad30e7 mov cx, word ptr [0x10aef8ce] */
  CX = (r16((uint32_t)(0x10aef8ce)));
  /* 10ad30ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ad30ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad30f1 mov dx, word ptr [0x10aef8cc] */
  DX = (r16((uint32_t)(0x10aef8cc)));
  /* 10ad30f8 push edx */
  push32((uint32_t)(EDX));
  /* 10ad30f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad30fb mov ax, word ptr [0x10aef8ca] */
  AX = (r16((uint32_t)(0x10aef8ca)));
  /* 10ad3101 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3102 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3106 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3108 mov cx, word ptr [0x10aef8c6] */
  CX = (r16((uint32_t)(0x10aef8c6)));
  /* 10ad310f push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3113 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ad3116 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3119 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad311b call 0x10ad3270 */
  push32(0x10ad3120u); f_10ad3270();
  /* 10ad3120 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad3123:;
  /* 10ad3123 jmp 0x10ad316b */
  goto L_10ad316b;
L_10ad3125:;
  /* 10ad3125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3129 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad312b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad312d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad312f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3133 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad3135 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3138 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ad313b push edx */
  push32((uint32_t)(EDX));
  /* 10ad313c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad313e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3140 call 0x10ad3270 */
  push32(0x10ad3145u); f_10ad3270();
  /* 10ad3145 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad314a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad314c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad314e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad3150 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3152 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3154 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ad3156 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ad3158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad315b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ad315e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad315f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3163 call 0x10ad3270 */
  push32(0x10ad3168u); f_10ad3270();
  /* 10ad3168 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad316b:;
  /* 10ad316b mov edx, dword ptr [0x10aeee2c] */
  EDX = (r32((uint32_t)(0x10aeee2c)));
  /* 10ad3171 cmp edx, dword ptr [0x10aeee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aeee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3177 jge 0x10ad31c4 */
  if ((C.sf==C.of)) goto L_10ad31c4;
  /* 10ad3179 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad317c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ad317f cmp ecx, dword ptr [0x10aeee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3185 jl 0x10ad3195 */
  if ((C.sf!=C.of)) goto L_10ad3195;
  /* 10ad3187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad318a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ad318d cmp eax, dword ptr [0x10aeee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3193 jle 0x10ad319c */
  if ((C.zf||C.sf!=C.of)) goto L_10ad319c;
L_10ad3195:;
  /* 10ad3195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3197 jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad319c:;
  /* 10ad319c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad319f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ad31a2 cmp edx, dword ptr [0x10aeee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aeee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad31a8 jle 0x10ad31c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad31c2;
  /* 10ad31aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad31ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ad31b0 cmp ecx, dword ptr [0x10aeee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad31b6 jge 0x10ad31c2 */
  if ((C.sf==C.of)) goto L_10ad31c2;
  /* 10ad31b8 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad31bd jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad31c2:;
  /* 10ad31c2 jmp 0x10ad3207 */
  goto L_10ad3207;
L_10ad31c4:;
  /* 10ad31c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad31c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ad31ca cmp eax, dword ptr [0x10aeee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad31d0 jl 0x10ad31e0 */
  if ((C.sf!=C.of)) goto L_10ad31e0;
  /* 10ad31d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad31d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ad31d8 cmp edx, dword ptr [0x10aeee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aeee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad31de jle 0x10ad31e7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad31e7;
L_10ad31e0:;
  /* 10ad31e0 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad31e5 jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad31e7:;
  /* 10ad31e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad31ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ad31ed cmp ecx, dword ptr [0x10aeee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad31f3 jle 0x10ad3207 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3207;
  /* 10ad31f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad31f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ad31fb cmp eax, dword ptr [0x10aeee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3201 jge 0x10ad3207 */
  if ((C.sf==C.of)) goto L_10ad3207;
  /* 10ad3203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3205 jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad3207:;
  /* 10ad3207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad320a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ad320d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad3210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad3215 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad321a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ad321d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad3223 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3225 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad322b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad322e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3231 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ad3234 cmp edx, dword ptr [0x10aeee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aeee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad323a jne 0x10ad3252 */
  if (!C.zf) goto L_10ad3252;
  /* 10ad323c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad323f cmp eax, dword ptr [0x10aeee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3245 jl 0x10ad324e */
  if ((C.sf!=C.of)) goto L_10ad324e;
  /* 10ad3247 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad324c jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad324e:;
  /* 10ad324e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3250 jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad3252:;
  /* 10ad3252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3255 cmp ecx, dword ptr [0x10aeee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad325b jge 0x10ad3264 */
  if ((C.sf==C.of)) goto L_10ad3264;
  /* 10ad325d mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3262 jmp 0x10ad3266 */
  goto L_10ad3266;
L_10ad3264:;
  /* 10ad3264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad3266:;
  /* 10ad3266 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3268 pop ebp */
  EBP = (pop32());
  /* 10ad3269 ret  */
  ESPCHK(0x10ad2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x10ad3270 (504 bytes, 145 insns) */
void f_10ad3270(void) {
  FTRACE(0x10ad3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3270 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3271 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3276 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad327a jne 0x10ad334c */
  if (!C.zf) goto L_10ad334c;
  /* 10ad3280 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3283 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3288 jne 0x10ad3299 */
  if (!C.zf) goto L_10ad3299;
  /* 10ad328a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad328d mov edx, dword ptr [ecx*4 + 0x10aeee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeee4c)));
  /* 10ad3294 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ad3297 jmp 0x10ad32a6 */
  goto L_10ad32a6;
L_10ad3299:;
  /* 10ad3299 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad329c mov ecx, dword ptr [eax*4 + 0x10aeee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aeee80)));
  /* 10ad32a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ad32a6:;
  /* 10ad32a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad32a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad32ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad32af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad32b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad32b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad32bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad32be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad32c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad32c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad32c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10ad32c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10ad32cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad32ce mov ecx, 7 */
  ECX = (0x7u);
  /* 10ad32d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ad32d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad32d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad32db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad32de jge 0x10ad32f9 */
  if ((C.sf==C.of)) goto L_10ad32f9;
  /* 10ad32e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad32e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad32e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad32e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad32ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad32ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad32f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad32f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad32f7 jmp 0x10ad330d */
  goto L_10ad330d;
L_10ad32f9:;
  /* 10ad32f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad32fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad32ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3302 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad3305 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3308 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad330a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ad330d:;
  /* 10ad330d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3311 jne 0x10ad334a */
  if (!C.zf) goto L_10ad334a;
  /* 10ad3313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3316 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3319 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad331b jne 0x10ad332c */
  if (!C.zf) goto L_10ad332c;
  /* 10ad331d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3320 mov eax, dword ptr [edx*4 + 0x10aeee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aeee50)));
  /* 10ad3327 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ad332a jmp 0x10ad3339 */
  goto L_10ad3339;
L_10ad332c:;
  /* 10ad332c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad332f mov edx, dword ptr [ecx*4 + 0x10aeee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeee84)));
  /* 10ad3336 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad3339:;
  /* 10ad3339 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad333c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad333f jle 0x10ad334a */
  if ((C.zf||C.sf!=C.of)) goto L_10ad334a;
  /* 10ad3341 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3344 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3347 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ad334a:;
  /* 10ad334a jmp 0x10ad3381 */
  goto L_10ad3381;
L_10ad334c:;
  /* 10ad334c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad334f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad3354 jne 0x10ad3365 */
  if (!C.zf) goto L_10ad3365;
  /* 10ad3356 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3359 mov ecx, dword ptr [eax*4 + 0x10aeee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aeee4c)));
  /* 10ad3360 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad3363 jmp 0x10ad3372 */
  goto L_10ad3372;
L_10ad3365:;
  /* 10ad3365 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3368 mov eax, dword ptr [edx*4 + 0x10aeee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aeee80)));
  /* 10ad336f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ad3372:;
  /* 10ad3372 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad3375 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad3378 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad337b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad337e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ad3381:;
  /* 10ad3381 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3385 jne 0x10ad33c1 */
  if (!C.zf) goto L_10ad33c1;
  /* 10ad3387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad338a mov dword ptr [0x10aeee2c], eax */
  w32((uint32_t)(0x10aeee2c), (EAX));
  /* 10ad338f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ad3392 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad3395 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ad3398 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad339a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad339d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ad33a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad33a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad33a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ad33ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad33ad mov dword ptr [0x10aeee30], ecx */
  w32((uint32_t)(0x10aeee30), (ECX));
  /* 10ad33b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad33b6 mov dword ptr [0x10aeee28], edx */
  w32((uint32_t)(0x10aeee28), (EDX));
  /* 10ad33bc jmp 0x10ad3464 */
  goto L_10ad3464;
L_10ad33c1:;
  /* 10ad33c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad33c4 mov dword ptr [0x10aeee3c], eax */
  w32((uint32_t)(0x10aeee3c), (EAX));
  /* 10ad33c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ad33cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad33cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ad33d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad33d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad33d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ad33da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad33dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad33e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ad33e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad33e7 mov dword ptr [0x10aeee40], ecx */
  w32((uint32_t)(0x10aeee40), (ECX));
  /* 10ad33ed mov edx, dword ptr [0x10aeed98] */
  EDX = (r32((uint32_t)(0x10aeed98)));
  /* 10ad33f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad33f9 mov eax, dword ptr [0x10aeee40] */
  EAX = (r32((uint32_t)(0x10aeee40)));
  /* 10ad33fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3400 mov dword ptr [0x10aeee40], eax */
  w32((uint32_t)(0x10aeee40), (EAX));
  /* 10ad3405 cmp dword ptr [0x10aeee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aeee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad340c jge 0x10ad3431 */
  if ((C.sf==C.of)) goto L_10ad3431;
  /* 10ad340e mov ecx, dword ptr [0x10aeee40] */
  ECX = (r32((uint32_t)(0x10aeee40)));
  /* 10ad3414 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad341a mov dword ptr [0x10aeee40], ecx */
  w32((uint32_t)(0x10aeee40), (ECX));
  /* 10ad3420 mov edx, dword ptr [0x10aeee3c] */
  EDX = (r32((uint32_t)(0x10aeee3c)));
  /* 10ad3426 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3429 mov dword ptr [0x10aeee3c], edx */
  w32((uint32_t)(0x10aeee3c), (EDX));
  /* 10ad342f jmp 0x10ad345b */
  goto L_10ad345b;
L_10ad3431:;
  /* 10ad3431 cmp dword ptr [0x10aeee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10aeee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad343b jl 0x10ad345b */
  if ((C.sf!=C.of)) goto L_10ad345b;
  /* 10ad343d mov eax, dword ptr [0x10aeee40] */
  EAX = (r32((uint32_t)(0x10aeee40)));
  /* 10ad3442 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3447 mov dword ptr [0x10aeee40], eax */
  w32((uint32_t)(0x10aeee40), (EAX));
  /* 10ad344c mov ecx, dword ptr [0x10aeee3c] */
  ECX = (r32((uint32_t)(0x10aeee3c)));
  /* 10ad3452 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3455 mov dword ptr [0x10aeee3c], ecx */
  w32((uint32_t)(0x10aeee3c), (ECX));
L_10ad345b:;
  /* 10ad345b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad345e mov dword ptr [0x10aeee38], edx */
  w32((uint32_t)(0x10aeee38), (EDX));
L_10ad3464:;
  /* 10ad3464 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3466 pop ebp */
  EBP = (pop32());
  /* 10ad3467 ret  */
  ESPCHK(0x10ad3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x10ad3470 (382 bytes, 135 insns) */
void f_10ad3470(void) {
  FTRACE(0x10ad3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3470 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3471 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3475 push 0x10aeba50 */
  push32((uint32_t)(0x10aeba50u));
  /* 10ad347a push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10ad347f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ad3485 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ad348d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3490 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad3491 push esi */
  push32((uint32_t)(ESI));
  /* 10ad3492 push edi */
  push32((uint32_t)(EDI));
  /* 10ad3493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3496 cmp dword ptr [0x10aef934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad349d jne 0x10ad34e2 */
  if (!C.zf) goto L_10ad34e2;
  /* 10ad349f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad34a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34a7 call dword ptr [0x10af2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2284))), 0x10ad34adu);
  /* 10ad34ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad34af je 0x10ad34bd */
  if (C.zf) goto L_10ad34bd;
  /* 10ad34b1 mov dword ptr [0x10aef934], 1 */
  w32((uint32_t)(0x10aef934), (0x1u));
  /* 10ad34bb jmp 0x10ad34e2 */
  goto L_10ad34e2;
L_10ad34bd:;
  /* 10ad34bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad34c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad34c5 call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad34cbu);
  /* 10ad34cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad34cd je 0x10ad34db */
  if (C.zf) goto L_10ad34db;
  /* 10ad34cf mov dword ptr [0x10aef934], 2 */
  w32((uint32_t)(0x10aef934), (0x2u));
  /* 10ad34d9 jmp 0x10ad34e2 */
  goto L_10ad34e2;
L_10ad34db:;
  /* 10ad34db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad34dd jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad34e2:;
  /* 10ad34e2 cmp dword ptr [0x10aef934], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef934))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad34e9 jne 0x10ad3506 */
  if (!C.zf) goto L_10ad3506;
  /* 10ad34eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad34ee push eax */
  push32((uint32_t)(EAX));
  /* 10ad34ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad34f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad34f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad34f6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad34f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad34fa push eax */
  push32((uint32_t)(EAX));
  /* 10ad34fb call dword ptr [0x10af2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2284))), 0x10ad3501u);
  /* 10ad3501 jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad3506:;
  /* 10ad3506 cmp dword ptr [0x10aef934], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef934))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad350d jne 0x10ad35ef */
  if (!C.zf) goto L_10ad35ef;
  /* 10ad3513 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3517 jne 0x10ad3522 */
  if (!C.zf) goto L_10ad3522;
  /* 10ad3519 mov ecx, dword ptr [0x10aef7e8] */
  ECX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad351f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ad3522:;
  /* 10ad3522 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3524 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3529 push edx */
  push32((uint32_t)(EDX));
  /* 10ad352a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad352d push eax */
  push32((uint32_t)(EAX));
  /* 10ad352e call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad3534u);
  /* 10ad3534 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ad3537 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad353b jne 0x10ad3544 */
  if (!C.zf) goto L_10ad3544;
  /* 10ad353d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad353f jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad3544:;
  /* 10ad3544 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad354b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad354e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3551 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad3553 call 0x10ac71d0 */
  push32(0x10ad3558u); f_10ac71d0();
  /* 10ad3558 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ad355b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad355e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad3561 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ad3564 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad356b jmp 0x10ad3584 */
  goto L_10ad3584;
  /* 10ad356d mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3572 ret  */
  ESPCHK(0x10ad3470u, _esp0);
  ESP += 4; return;
  /* 10ad3573 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad3576 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ad357d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad3584:;
  /* 10ad3584 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3588 jne 0x10ad358e */
  if (!C.zf) goto L_10ad358e;
  /* 10ad358a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad358c jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad358e:;
  /* 10ad358e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad3591 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3592 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3595 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3596 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3599 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad359a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad359d push edx */
  push32((uint32_t)(EDX));
  /* 10ad359e call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad35a4u);
  /* 10ad35a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad35a6 jne 0x10ad35ac */
  if (!C.zf) goto L_10ad35ac;
  /* 10ad35a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad35aa jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad35ac:;
  /* 10ad35ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad35b0 jne 0x10ad35cd */
  if (!C.zf) goto L_10ad35cd;
  /* 10ad35b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad35b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad35b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad35b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad35bb push eax */
  push32((uint32_t)(EAX));
  /* 10ad35bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad35be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad35c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad35c2 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad35c8u);
  /* 10ad35c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ad35cb jmp 0x10ad35ea */
  goto L_10ad35ea;
L_10ad35cd:;
  /* 10ad35cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad35d0 push edx */
  push32((uint32_t)(EDX));
  /* 10ad35d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad35d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ad35d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad35d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad35da push ecx */
  push32((uint32_t)(ECX));
  /* 10ad35db push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad35dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad35e0 push edx */
  push32((uint32_t)(EDX));
  /* 10ad35e1 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad35e7u);
  /* 10ad35e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ad35ea:;
  /* 10ad35ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad35ed jmp 0x10ad35f1 */
  goto L_10ad35f1;
L_10ad35ef:;
  /* 10ad35ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad35f1:;
  /* 10ad35f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ad35f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad35f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ad35fe pop edi */
  EDI = (pop32());
  /* 10ad35ff pop esi */
  ESI = (pop32());
  /* 10ad3600 pop ebx */
  EBX = (pop32());
  /* 10ad3601 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3603 pop ebp */
  EBP = (pop32());
  /* 10ad3604 ret  */
  ESPCHK(0x10ad3470u, _esp0);
  ESP += 4; return;
}

/* FUN_10013610 @ 0x10ad3610 (398 bytes, 140 insns) */
void f_10ad3610(void) {
  FTRACE(0x10ad3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3610 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3611 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3615 push 0x10aeba60 */
  push32((uint32_t)(0x10aeba60u));
  /* 10ad361a push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10ad361f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ad3625 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ad362d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3630 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad3631 push esi */
  push32((uint32_t)(ESI));
  /* 10ad3632 push edi */
  push32((uint32_t)(EDI));
  /* 10ad3633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3636 cmp dword ptr [0x10aef938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad363d jne 0x10ad3682 */
  if (!C.zf) goto L_10ad3682;
  /* 10ad363f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3641 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3643 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3645 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3647 call dword ptr [0x10af2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2284))), 0x10ad364du);
  /* 10ad364d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad364f je 0x10ad365d */
  if (C.zf) goto L_10ad365d;
  /* 10ad3651 mov dword ptr [0x10aef938], 1 */
  w32((uint32_t)(0x10aef938), (0x1u));
  /* 10ad365b jmp 0x10ad3682 */
  goto L_10ad3682;
L_10ad365d:;
  /* 10ad365d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad365f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3661 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3665 call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad366bu);
  /* 10ad366b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad366d je 0x10ad367b */
  if (C.zf) goto L_10ad367b;
  /* 10ad366f mov dword ptr [0x10aef938], 2 */
  w32((uint32_t)(0x10aef938), (0x2u));
  /* 10ad3679 jmp 0x10ad3682 */
  goto L_10ad3682;
L_10ad367b:;
  /* 10ad367b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad367d jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad3682:;
  /* 10ad3682 cmp dword ptr [0x10aef938], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef938))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3689 jne 0x10ad36a6 */
  if (!C.zf) goto L_10ad36a6;
  /* 10ad368b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad368e push eax */
  push32((uint32_t)(EAX));
  /* 10ad368f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3692 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3693 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3696 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad369a push eax */
  push32((uint32_t)(EAX));
  /* 10ad369b call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad36a1u);
  /* 10ad36a1 jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad36a6:;
  /* 10ad36a6 cmp dword ptr [0x10aef938], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef938))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad36ad jne 0x10ad379f */
  if (!C.zf) goto L_10ad379f;
  /* 10ad36b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad36b7 jne 0x10ad36c2 */
  if (!C.zf) goto L_10ad36c2;
  /* 10ad36b9 mov ecx, dword ptr [0x10aef7e8] */
  ECX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad36bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10ad36c2:;
  /* 10ad36c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad36c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad36c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad36c9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad36ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad36cd push eax */
  push32((uint32_t)(EAX));
  /* 10ad36ce call dword ptr [0x10af2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2284))), 0x10ad36d4u);
  /* 10ad36d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ad36d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad36db jne 0x10ad36e4 */
  if (!C.zf) goto L_10ad36e4;
  /* 10ad36dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad36df jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad36e4:;
  /* 10ad36e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad36eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad36ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad36f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad36f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad36f5 call 0x10ac71d0 */
  push32(0x10ad36fau); f_10ac71d0();
  /* 10ad36fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10ad36fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3700 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad3703 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ad3706 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad370d jmp 0x10ad3726 */
  goto L_10ad3726;
  /* 10ad370f mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3714 ret  */
  ESPCHK(0x10ad3610u, _esp0);
  ESP += 4; return;
  /* 10ad3715 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad3718 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ad371f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad3726:;
  /* 10ad3726 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad372a jne 0x10ad3730 */
  if (!C.zf) goto L_10ad3730;
  /* 10ad372c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad372e jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad3730:;
  /* 10ad3730 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad3733 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3734 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3737 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3738 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad373b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad373c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad373f push edx */
  push32((uint32_t)(EDX));
  /* 10ad3740 call dword ptr [0x10af2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2284))), 0x10ad3746u);
  /* 10ad3746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3748 jne 0x10ad374e */
  if (!C.zf) goto L_10ad374e;
  /* 10ad374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad374c jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad374e:;
  /* 10ad374e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3752 jne 0x10ad3776 */
  if (!C.zf) goto L_10ad3776;
  /* 10ad3754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3758 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad375a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad375c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad375e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3761 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3762 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad3767 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad376a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad376b call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad3771u);
  /* 10ad3771 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ad3774 jmp 0x10ad379a */
  goto L_10ad379a;
L_10ad3776:;
  /* 10ad3776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3778 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad377a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad377d push edx */
  push32((uint32_t)(EDX));
  /* 10ad377e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3781 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3782 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3784 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3787 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3788 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ad378d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3790 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3791 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad3797u);
  /* 10ad3797 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ad379a:;
  /* 10ad379a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad379d jmp 0x10ad37a1 */
  goto L_10ad37a1;
L_10ad379f:;
  /* 10ad379f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad37a1:;
  /* 10ad37a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ad37a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad37a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ad37ae pop edi */
  EDI = (pop32());
  /* 10ad37af pop esi */
  ESI = (pop32());
  /* 10ad37b0 pop ebx */
  EBX = (pop32());
  /* 10ad37b1 mov esp, ebp */
  ESP = (EBP);
  /* 10ad37b3 pop ebp */
  EBP = (pop32());
  /* 10ad37b4 ret  */
  ESPCHK(0x10ad3610u, _esp0);
  ESP += 4; return;
}

/* FUN_100137c0 @ 0x10ad37c0 (11 bytes, 6 insns) */
void f_10ad37c0(void) {
  FTRACE(0x10ad37c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad37c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad37c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad37c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad37c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad37c9 pop ebp */
  EBP = (pop32());
  /* 10ad37ca ret  */
  ESPCHK(0x10ad37c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x10ad37d0 (147 bytes, 43 insns) */
void f_10ad37d0(void) {
  FTRACE(0x10ad37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad37d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad37d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad37d4 cmp dword ptr [0x10aef7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad37db jne 0x10ad37f7 */
  if (!C.zf) goto L_10ad37f7;
  /* 10ad37dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad37e1 jl 0x10ad37f2 */
  if ((C.sf!=C.of)) goto L_10ad37f2;
  /* 10ad37e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad37e7 jg 0x10ad37f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad37f2;
  /* 10ad37e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad37ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad37ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ad37f2:;
  /* 10ad37f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad37f5 jmp 0x10ad385f */
  goto L_10ad385f;
L_10ad37f7:;
  /* 10ad37f7 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad37fc call dword ptr [0x10af230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af230c))), 0x10ad3802u);
  /* 10ad3802 cmp dword ptr [0x10aef954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3809 je 0x10ad3829 */
  if (C.zf) goto L_10ad3829;
  /* 10ad380b push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad3810 call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ad3816u);
  /* 10ad3816 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad3818 call 0x10ac7a30 */
  push32(0x10ad381du); f_10ac7a30();
  /* 10ad381d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3820 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ad3827 jmp 0x10ad3830 */
  goto L_10ad3830;
L_10ad3829:;
  /* 10ad3829 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ad3830:;
  /* 10ad3830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3833 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3834 call 0x10ad3870 */
  push32(0x10ad3839u); f_10ad3870();
  /* 10ad3839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad383c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad383f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3843 je 0x10ad3851 */
  if (C.zf) goto L_10ad3851;
  /* 10ad3845 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ad3847 call 0x10ac7ad0 */
  push32(0x10ad384cu); f_10ac7ad0();
  /* 10ad384c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad384f jmp 0x10ad385c */
  goto L_10ad385c;
L_10ad3851:;
  /* 10ad3851 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10ad3856 call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ad385cu);
L_10ad385c:;
  /* 10ad385c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ad385f:;
  /* 10ad385f mov esp, ebp */
  ESP = (EBP);
  /* 10ad3861 pop ebp */
  EBP = (pop32());
  /* 10ad3862 ret  */
  ESPCHK(0x10ad37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013870 @ 0x10ad3870 (299 bytes, 91 insns) */
void f_10ad3870(void) {
  FTRACE(0x10ad3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3870 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3871 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3873 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3876 cmp dword ptr [0x10aef7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad387d jne 0x10ad389c */
  if (!C.zf) goto L_10ad389c;
  /* 10ad387f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3883 jl 0x10ad3894 */
  if ((C.sf!=C.of)) goto L_10ad3894;
  /* 10ad3885 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3889 jg 0x10ad3894 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad3894;
  /* 10ad388b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad388e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3891 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ad3894:;
  /* 10ad3894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3897 jmp 0x10ad3997 */
  goto L_10ad3997;
L_10ad389c:;
  /* 10ad389c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad38a3 jge 0x10ad38e3 */
  if ((C.sf==C.of)) goto L_10ad38e3;
  /* 10ad38a5 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad38ac jle 0x10ad38c1 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad38c1;
  /* 10ad38ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad38b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad38b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad38b4 call 0x10aca040 */
  push32(0x10ad38b9u); f_10aca040();
  /* 10ad38b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad38bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ad38bf jmp 0x10ad38d5 */
  goto L_10ad38d5;
L_10ad38c1:;
  /* 10ad38c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad38c4 mov eax, dword ptr [0x10aedc98] */
  EAX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad38c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad38cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ad38cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad38d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ad38d5:;
  /* 10ad38d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad38d9 jne 0x10ad38e3 */
  if (!C.zf) goto L_10ad38e3;
  /* 10ad38db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad38de jmp 0x10ad3997 */
  goto L_10ad3997;
L_10ad38e3:;
  /* 10ad38e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad38e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ad38e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad38ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad38f5 mov eax, dword ptr [0x10aedc98] */
  EAX = (r32((uint32_t)(0x10aedc98)));
  /* 10ad38fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad38fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ad3900 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad3908 je 0x10ad392c */
  if (C.zf) goto L_10ad392c;
  /* 10ad390a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad390d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ad3910 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3916 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10ad3919 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ad391c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10ad391f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10ad3923 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ad392a jmp 0x10ad393d */
  goto L_10ad393d;
L_10ad392c:;
  /* 10ad392c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ad392f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ad3932 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10ad3936 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ad393d:;
  /* 10ad393d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad393f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3941 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ad3943 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ad3946 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad394a push eax */
  push32((uint32_t)(EAX));
  /* 10ad394b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ad394e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad394f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ad3954 mov edx, dword ptr [0x10aef7d8] */
  EDX = (r32((uint32_t)(0x10aef7d8)));
  /* 10ad395a push edx */
  push32((uint32_t)(EDX));
  /* 10ad395b call 0x10acc420 */
  push32(0x10ad3960u); f_10acc420();
  /* 10ad3960 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad3966 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad396a jne 0x10ad3971 */
  if (!C.zf) goto L_10ad3971;
  /* 10ad396c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad396f jmp 0x10ad3997 */
  goto L_10ad3997;
L_10ad3971:;
  /* 10ad3971 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3975 jne 0x10ad3981 */
  if (!C.zf) goto L_10ad3981;
  /* 10ad3977 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad397a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad397f jmp 0x10ad3997 */
  goto L_10ad3997;
L_10ad3981:;
  /* 10ad3981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad3984 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3989 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10ad398c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3992 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ad3995 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10ad3997:;
  /* 10ad3997 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3999 pop ebp */
  EBP = (pop32());
  /* 10ad399a ret  */
  ESPCHK(0x10ad3870u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10ad39a0 (52 bytes, 19 insns) */
void f_10ad39a0(void) {
  FTRACE(0x10ad39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad39a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ad39a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ad39a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad39aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ad39ae jne 0x10ad39b9 */
  if (!C.zf) goto L_10ad39b9;
  /* 10ad39b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ad39b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ad39b6 ret 0x10 */
  ESPCHK(0x10ad39a0u, _esp0);
  ESP += 20; return;
L_10ad39b9:;
  /* 10ad39b9 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad39ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ad39bc mov ebx, eax */
  EBX = (EAX);
  /* 10ad39be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ad39c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ad39c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad39c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ad39cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ad39ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad39d0 pop ebx */
  EBX = (pop32());
  /* 10ad39d1 ret 0x10 */
  ESPCHK(0x10ad39a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100139e0 @ 0x10ad39e0 (46 bytes, 18 insns) */
void f_10ad39e0(void) {
  FTRACE(0x10ad39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad39e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad39e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad39e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad39e6 call 0x10ac7a30 */
  push32(0x10ad39ebu); f_10ac7a30();
  /* 10ad39eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad39ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad39f1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad39f2 call 0x10ad3a10 */
  push32(0x10ad39f7u); f_10ad3a10();
  /* 10ad39f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad39fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad39fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ad39ff call 0x10ac7ad0 */
  push32(0x10ad3a04u); f_10ac7ad0();
  /* 10ad3a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3a0a mov esp, ebp */
  ESP = (EBP);
  /* 10ad3a0c pop ebp */
  EBP = (pop32());
  /* 10ad3a0d ret  */
  ESPCHK(0x10ad39e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10ad3a10 (198 bytes, 69 insns) */
void f_10ad3a10(void) {
  FTRACE(0x10ad3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3a11 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3a16 mov eax, dword ptr [0x10aef5f4] */
  EAX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad3a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad3a1e cmp dword ptr [0x10af1100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a25 jne 0x10ad3a2e */
  if (!C.zf) goto L_10ad3a2e;
  /* 10ad3a27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3a29 jmp 0x10ad3ad2 */
  goto L_10ad3ad2;
L_10ad3a2e:;
  /* 10ad3a2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a32 jne 0x10ad3a56 */
  if (!C.zf) goto L_10ad3a56;
  /* 10ad3a34 cmp dword ptr [0x10aef5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a3b je 0x10ad3a56 */
  if (C.zf) goto L_10ad3a56;
  /* 10ad3a3d call 0x10ad3b30 */
  push32(0x10ad3a42u); f_10ad3b30();
  /* 10ad3a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3a44 je 0x10ad3a4d */
  if (C.zf) goto L_10ad3a4d;
  /* 10ad3a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3a48 jmp 0x10ad3ad2 */
  goto L_10ad3ad2;
L_10ad3a4d:;
  /* 10ad3a4d mov ecx, dword ptr [0x10aef5f4] */
  ECX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad3a53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ad3a56:;
  /* 10ad3a56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a5a je 0x10ad3ad0 */
  if (C.zf) goto L_10ad3ad0;
  /* 10ad3a5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a60 je 0x10ad3ad0 */
  if (C.zf) goto L_10ad3ad0;
  /* 10ad3a62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3a65 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3a66 call 0x10ac6e60 */
  push32(0x10ad3a6bu); f_10ac6e60();
  /* 10ad3a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3a6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ad3a71:;
  /* 10ad3a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3a74 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a77 je 0x10ad3ad0 */
  if (C.zf) goto L_10ad3ad0;
  /* 10ad3a79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3a7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad3a7e push edx */
  push32((uint32_t)(EDX));
  /* 10ad3a7f call 0x10ac6e60 */
  push32(0x10ad3a84u); f_10ac6e60();
  /* 10ad3a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3a87 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a8a jbe 0x10ad3ac5 */
  if ((C.cf||C.zf)) goto L_10ad3ac5;
  /* 10ad3a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad3a91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3a94 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10ad3a98 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3a9b jne 0x10ad3ac5 */
  if (!C.zf) goto L_10ad3ac5;
  /* 10ad3a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3aa4 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3aa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3aa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad3aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3aab call 0x10ad3ae0 */
  push32(0x10ad3ab0u); f_10ad3ae0();
  /* 10ad3ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3ab5 jne 0x10ad3ac5 */
  if (!C.zf) goto L_10ad3ac5;
  /* 10ad3ab7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3aba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad3abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3abf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10ad3ac3 jmp 0x10ad3ad2 */
  goto L_10ad3ad2;
L_10ad3ac5:;
  /* 10ad3ac5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3ac8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3acb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad3ace jmp 0x10ad3a71 */
  goto L_10ad3a71;
L_10ad3ad0:;
  /* 10ad3ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad3ad2:;
  /* 10ad3ad2 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3ad4 pop ebp */
  EBP = (pop32());
  /* 10ad3ad5 ret  */
  ESPCHK(0x10ad3a10u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10ad3ae0 (79 bytes, 32 insns) */
void f_10ad3ae0(void) {
  FTRACE(0x10ad3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3ae4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3ae8 jne 0x10ad3aee */
  if (!C.zf) goto L_10ad3aee;
  /* 10ad3aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3aec jmp 0x10ad3b2b */
  goto L_10ad3b2b;
L_10ad3aee:;
  /* 10ad3aee mov eax, dword ptr [0x10af0cc4] */
  EAX = (r32((uint32_t)(0x10af0cc4)));
  /* 10ad3af3 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3af4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3af7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3af8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3afb push edx */
  push32((uint32_t)(EDX));
  /* 10ad3afc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3aff push eax */
  push32((uint32_t)(EAX));
  /* 10ad3b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3b04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3b06 mov edx, dword ptr [0x10af0f64] */
  EDX = (r32((uint32_t)(0x10af0f64)));
  /* 10ad3b0c push edx */
  push32((uint32_t)(EDX));
  /* 10ad3b0d call 0x10ad3be0 */
  push32(0x10ad3b12u); f_10ad3be0();
  /* 10ad3b12 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3b15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad3b18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3b1c jne 0x10ad3b25 */
  if (!C.zf) goto L_10ad3b25;
  /* 10ad3b1e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10ad3b23 jmp 0x10ad3b2b */
  goto L_10ad3b2b;
L_10ad3b25:;
  /* 10ad3b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3b28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ad3b2b:;
  /* 10ad3b2b mov esp, ebp */
  ESP = (EBP);
  /* 10ad3b2d pop ebp */
  EBP = (pop32());
  /* 10ad3b2e ret  */
  ESPCHK(0x10ad3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b30 @ 0x10ad3b30 (174 bytes, 66 insns) */
void f_10ad3b30(void) {
  FTRACE(0x10ad3b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3b31 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3b36 mov eax, dword ptr [0x10aef5fc] */
  EAX = (r32((uint32_t)(0x10aef5fc)));
  /* 10ad3b3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ad3b3e:;
  /* 10ad3b3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3b41 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3b44 je 0x10ad3bd8 */
  if (C.zf) goto L_10ad3bd8;
  /* 10ad3b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3b54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3b57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad3b59 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3b5e call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad3b64u);
  /* 10ad3b64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad3b67 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3b6b jne 0x10ad3b72 */
  if (!C.zf) goto L_10ad3b72;
  /* 10ad3b6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3b70 jmp 0x10ad3bda */
  goto L_10ad3bda;
L_10ad3b72:;
  /* 10ad3b72 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ad3b74 push 0x10aeba6c */
  push32((uint32_t)(0x10aeba6cu));
  /* 10ad3b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad3b7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad3b7e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3b7f call 0x10ac4030 */
  push32(0x10ad3b84u); f_10ac4030();
  /* 10ad3b84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3b87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad3b8a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3b8e jne 0x10ad3b95 */
  if (!C.zf) goto L_10ad3b95;
  /* 10ad3b90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3b93 jmp 0x10ad3bda */
  goto L_10ad3bda;
L_10ad3b95:;
  /* 10ad3b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad3b9c push edx */
  push32((uint32_t)(EDX));
  /* 10ad3b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3ba0 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3ba1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3ba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad3ba8 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3bad call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ad3bb3u);
  /* 10ad3bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3bb5 jne 0x10ad3bbc */
  if (!C.zf) goto L_10ad3bbc;
  /* 10ad3bb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3bba jmp 0x10ad3bda */
  goto L_10ad3bda;
L_10ad3bbc:;
  /* 10ad3bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3bc2 call 0x10ad4030 */
  push32(0x10ad3bc7u); f_10ad4030();
  /* 10ad3bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad3bcd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad3bd3 jmp 0x10ad3b3e */
  goto L_10ad3b3e;
L_10ad3bd8:;
  /* 10ad3bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad3bda:;
  /* 10ad3bda mov esp, ebp */
  ESP = (EBP);
  /* 10ad3bdc pop ebp */
  EBP = (pop32());
  /* 10ad3bdd ret  */
  ESPCHK(0x10ad3b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x10ad3be0 (970 bytes, 340 insns) */
void f_10ad3be0(void) {
  FTRACE(0x10ad3be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3be1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3be3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ad3be5 push 0x10aebac0 */
  push32((uint32_t)(0x10aebac0u));
  /* 10ad3bea push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10ad3bef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ad3bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3bf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ad3bfd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3c00 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad3c01 push esi */
  push32((uint32_t)(ESI));
  /* 10ad3c02 push edi */
  push32((uint32_t)(EDI));
  /* 10ad3c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3c06 cmp dword ptr [0x10aef93c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef93c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3c0d jne 0x10ad3c66 */
  if (!C.zf) goto L_10ad3c66;
  /* 10ad3c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3c11 push 0x10aeb11c */
  push32((uint32_t)(0x10aeb11cu));
  /* 10ad3c16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3c18 push 0x10aeb11c */
  push32((uint32_t)(0x10aeb11cu));
  /* 10ad3c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3c21 call dword ptr [0x10af2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2280))), 0x10ad3c27u);
  /* 10ad3c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3c29 je 0x10ad3c37 */
  if (C.zf) goto L_10ad3c37;
  /* 10ad3c2b mov dword ptr [0x10aef93c], 1 */
  w32((uint32_t)(0x10aef93c), (0x1u));
  /* 10ad3c35 jmp 0x10ad3c66 */
  goto L_10ad3c66;
L_10ad3c37:;
  /* 10ad3c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3c39 push 0x10aeb118 */
  push32((uint32_t)(0x10aeb118u));
  /* 10ad3c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3c40 push 0x10aeb118 */
  push32((uint32_t)(0x10aeb118u));
  /* 10ad3c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3c49 call dword ptr [0x10af228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af228c))), 0x10ad3c4fu);
  /* 10ad3c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3c51 je 0x10ad3c5f */
  if (C.zf) goto L_10ad3c5f;
  /* 10ad3c53 mov dword ptr [0x10aef93c], 2 */
  w32((uint32_t)(0x10aef93c), (0x2u));
  /* 10ad3c5d jmp 0x10ad3c66 */
  goto L_10ad3c66;
L_10ad3c5f:;
  /* 10ad3c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3c61 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3c66:;
  /* 10ad3c66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3c6a jle 0x10ad3c7f */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3c7f;
  /* 10ad3c6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3c6f push eax */
  push32((uint32_t)(EAX));
  /* 10ad3c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3c74 call 0x10ad3fe0 */
  push32(0x10ad3c79u); f_10ad3fe0();
  /* 10ad3c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3c7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ad3c7f:;
  /* 10ad3c7f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3c83 jle 0x10ad3c98 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3c98;
  /* 10ad3c85 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad3c88 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3c89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3c8c push eax */
  push32((uint32_t)(EAX));
  /* 10ad3c8d call 0x10ad3fe0 */
  push32(0x10ad3c92u); f_10ad3fe0();
  /* 10ad3c92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3c95 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10ad3c98:;
  /* 10ad3c98 cmp dword ptr [0x10aef93c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef93c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3c9f jne 0x10ad3cc4 */
  if (!C.zf) goto L_10ad3cc4;
  /* 10ad3ca1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad3ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3ca5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3ca8 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3ca9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3cac push eax */
  push32((uint32_t)(EAX));
  /* 10ad3cad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3cb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3cb4 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3cb9 call dword ptr [0x10af228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af228c))), 0x10ad3cbfu);
  /* 10ad3cbf jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3cc4:;
  /* 10ad3cc4 cmp dword ptr [0x10aef93c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef93c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3ccb jne 0x10ad3fc2 */
  if (!C.zf) goto L_10ad3fc2;
  /* 10ad3cd1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3cd5 jne 0x10ad3ce0 */
  if (!C.zf) goto L_10ad3ce0;
  /* 10ad3cd7 mov ecx, dword ptr [0x10aef7e8] */
  ECX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ad3cdd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10ad3ce0:;
  /* 10ad3ce0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3ce4 je 0x10ad3cf0 */
  if (C.zf) goto L_10ad3cf0;
  /* 10ad3ce6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3cea jne 0x10ad3e6c */
  if (!C.zf) goto L_10ad3e6c;
L_10ad3cf0:;
  /* 10ad3cf0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3cf3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3cf6 jne 0x10ad3d02 */
  if (!C.zf) goto L_10ad3d02;
  /* 10ad3cf8 mov eax, 2 */
  EAX = (0x2u);
  /* 10ad3cfd jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3d02:;
  /* 10ad3d02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d06 jle 0x10ad3d12 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3d12;
  /* 10ad3d08 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3d0d jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3d12:;
  /* 10ad3d12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d16 jle 0x10ad3d22 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3d22;
  /* 10ad3d18 mov eax, 3 */
  EAX = (0x3u);
  /* 10ad3d1d jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3d22:;
  /* 10ad3d22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10ad3d25 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3d26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ad3d29 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3d2a call dword ptr [0x10af22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d8))), 0x10ad3d30u);
  /* 10ad3d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3d32 jne 0x10ad3d3b */
  if (!C.zf) goto L_10ad3d3b;
  /* 10ad3d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3d36 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3d3b:;
  /* 10ad3d3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d3f jne 0x10ad3d47 */
  if (!C.zf) goto L_10ad3d47;
  /* 10ad3d41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d45 je 0x10ad3d74 */
  if (C.zf) goto L_10ad3d74;
L_10ad3d47:;
  /* 10ad3d47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d4b jne 0x10ad3d53 */
  if (!C.zf) goto L_10ad3d53;
  /* 10ad3d4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d51 je 0x10ad3d74 */
  if (C.zf) goto L_10ad3d74;
L_10ad3d53:;
  /* 10ad3d53 push 0x10aeba80 */
  push32((uint32_t)(0x10aeba80u));
  /* 10ad3d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3d5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ad3d5f push 0x10aeba78 */
  push32((uint32_t)(0x10aeba78u));
  /* 10ad3d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad3d66 call 0x10ac30f0 */
  push32(0x10ad3d6bu); f_10ac30f0();
  /* 10ad3d6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3d6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d71 jne 0x10ad3d74 */
  if (!C.zf) goto L_10ad3d74;
  /* 10ad3d73 int3  */
  x86_unimpl("int3 @ 0x10ad3d73");
L_10ad3d74:;
  /* 10ad3d74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad3d78 jne 0x10ad3d3b */
  if (!C.zf) goto L_10ad3d3b;
  /* 10ad3d7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d7e jle 0x10ad3df3 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3df3;
  /* 10ad3d80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3d84 jae 0x10ad3d90 */
  if (!C.cf) goto L_10ad3d90;
  /* 10ad3d86 mov eax, 3 */
  EAX = (0x3u);
  /* 10ad3d8b jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3d90:;
  /* 10ad3d90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10ad3d93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ad3d96 jmp 0x10ad3da1 */
  goto L_10ad3da1;
L_10ad3d98:;
  /* 10ad3d98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3d9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3d9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10ad3da1:;
  /* 10ad3da1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3da6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad3da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3daa je 0x10ad3de9 */
  if (C.zf) goto L_10ad3de9;
  /* 10ad3dac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3daf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3db1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ad3db4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad3db6 je 0x10ad3de9 */
  if (C.zf) goto L_10ad3de9;
  /* 10ad3db8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3dbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3dbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad3dbf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3dc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad3dc6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3dc8 jl 0x10ad3de7 */
  if ((C.sf!=C.of)) goto L_10ad3de7;
  /* 10ad3dca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3dcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3dcf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad3dd1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3dd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3dd6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ad3dd9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3ddb jg 0x10ad3de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad3de7;
  /* 10ad3ddd mov eax, 2 */
  EAX = (0x2u);
  /* 10ad3de2 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3de7:;
  /* 10ad3de7 jmp 0x10ad3d98 */
  goto L_10ad3d98;
L_10ad3de9:;
  /* 10ad3de9 mov eax, 3 */
  EAX = (0x3u);
  /* 10ad3dee jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3df3:;
  /* 10ad3df3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3df7 jle 0x10ad3e6c */
  if ((C.zf||C.sf!=C.of)) goto L_10ad3e6c;
  /* 10ad3df9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3dfd jae 0x10ad3e09 */
  if (!C.cf) goto L_10ad3e09;
  /* 10ad3dff mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3e04 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3e09:;
  /* 10ad3e09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10ad3e0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10ad3e0f jmp 0x10ad3e1a */
  goto L_10ad3e1a;
L_10ad3e11:;
  /* 10ad3e11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3e14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3e17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10ad3e1a:;
  /* 10ad3e1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3e1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3e1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad3e21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad3e23 je 0x10ad3e62 */
  if (C.zf) goto L_10ad3e62;
  /* 10ad3e25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3e28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3e2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ad3e2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad3e2f je 0x10ad3e62 */
  if (C.zf) goto L_10ad3e62;
  /* 10ad3e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3e36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad3e38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3e3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad3e3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ad3e3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3e41 jl 0x10ad3e60 */
  if ((C.sf!=C.of)) goto L_10ad3e60;
  /* 10ad3e43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3e46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad3e48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad3e4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ad3e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3e4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ad3e52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3e54 jg 0x10ad3e60 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad3e60;
  /* 10ad3e56 mov eax, 2 */
  EAX = (0x2u);
  /* 10ad3e5b jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3e60:;
  /* 10ad3e60 jmp 0x10ad3e11 */
  goto L_10ad3e11;
L_10ad3e62:;
  /* 10ad3e62 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3e67 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3e6c:;
  /* 10ad3e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3e70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3e74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3e77 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3e78 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ad3e7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ad3e7d push eax */
  push32((uint32_t)(EAX));
  /* 10ad3e7e call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad3e84u);
  /* 10ad3e84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ad3e87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3e8b jne 0x10ad3e94 */
  if (!C.zf) goto L_10ad3e94;
  /* 10ad3e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3e8f jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3e94:;
  /* 10ad3e94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad3e9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad3e9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad3ea0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3ea3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad3ea5 call 0x10ac71d0 */
  push32(0x10ad3eaau); f_10ac71d0();
  /* 10ad3eaa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10ad3ead mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3eb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ad3eb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ad3eb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad3ebd jmp 0x10ad3ed6 */
  goto L_10ad3ed6;
  /* 10ad3ebf mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3ec4 ret  */
  ESPCHK(0x10ad3be0u, _esp0);
  ESP += 4; return;
  /* 10ad3ec5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad3ec8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ad3ecf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad3ed6:;
  /* 10ad3ed6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3eda jne 0x10ad3ee3 */
  if (!C.zf) goto L_10ad3ee3;
  /* 10ad3edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3ede jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3ee3:;
  /* 10ad3ee3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad3ee6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3ee7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad3eea push eax */
  push32((uint32_t)(EAX));
  /* 10ad3eeb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad3eee push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3eef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad3ef2 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3ef5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ad3ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3ef9 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad3effu);
  /* 10ad3eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3f01 jne 0x10ad3f0a */
  if (!C.zf) goto L_10ad3f0a;
  /* 10ad3f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3f05 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3f0a:;
  /* 10ad3f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad3f0e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad3f11 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3f12 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3f15 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3f16 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ad3f18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ad3f1b push eax */
  push32((uint32_t)(EAX));
  /* 10ad3f1c call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad3f22u);
  /* 10ad3f22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ad3f25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3f29 jne 0x10ad3f32 */
  if (!C.zf) goto L_10ad3f32;
  /* 10ad3f2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3f2d jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3f32:;
  /* 10ad3f32 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ad3f39 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3f3c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad3f3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad3f41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ad3f43 call 0x10ac71d0 */
  push32(0x10ad3f48u); f_10ac71d0();
  /* 10ad3f48 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10ad3f4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ad3f4e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ad3f51 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ad3f54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ad3f5b jmp 0x10ad3f74 */
  goto L_10ad3f74;
  /* 10ad3f5d mov eax, 1 */
  EAX = (0x1u);
  /* 10ad3f62 ret  */
  ESPCHK(0x10ad3be0u, _esp0);
  ESP += 4; return;
  /* 10ad3f63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad3f66 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ad3f6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ad3f74:;
  /* 10ad3f74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad3f78 jne 0x10ad3f7e */
  if (!C.zf) goto L_10ad3f7e;
  /* 10ad3f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3f7c jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3f7e:;
  /* 10ad3f7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3f81 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3f82 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad3f85 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3f86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ad3f89 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3f8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ad3f8d push edx */
  push32((uint32_t)(EDX));
  /* 10ad3f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad3f90 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ad3f93 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3f94 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10ad3f9au);
  /* 10ad3f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad3f9c jne 0x10ad3fa2 */
  if (!C.zf) goto L_10ad3fa2;
  /* 10ad3f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad3fa0 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3fa2:;
  /* 10ad3fa2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ad3fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3fa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ad3fa9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3faa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ad3fad push eax */
  push32((uint32_t)(EAX));
  /* 10ad3fae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ad3fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad3fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3fb5 push edx */
  push32((uint32_t)(EDX));
  /* 10ad3fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10ad3fba call dword ptr [0x10af2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2280))), 0x10ad3fc0u);
  /* 10ad3fc0 jmp 0x10ad3fc4 */
  goto L_10ad3fc4;
L_10ad3fc2:;
  /* 10ad3fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad3fc4:;
  /* 10ad3fc4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10ad3fc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad3fca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ad3fd1 pop edi */
  EDI = (pop32());
  /* 10ad3fd2 pop esi */
  ESI = (pop32());
  /* 10ad3fd3 pop ebx */
  EBX = (pop32());
  /* 10ad3fd4 mov esp, ebp */
  ESP = (EBP);
  /* 10ad3fd6 pop ebp */
  EBP = (pop32());
  /* 10ad3fd7 ret  */
  ESPCHK(0x10ad3be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fe0 @ 0x10ad3fe0 (80 bytes, 32 insns) */
void f_10ad3fe0(void) {
  FTRACE(0x10ad3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad3fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad3fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad3fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad3fe9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad3fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad3fef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ad3ff2:;
  /* 10ad3ff2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad3ff8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad3ffb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad3ffe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad4000 je 0x10ad4017 */
  if (C.zf) goto L_10ad4017;
  /* 10ad4002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4005 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad4008 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad400a je 0x10ad4017 */
  if (C.zf) goto L_10ad4017;
  /* 10ad400c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad400f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad4015 jmp 0x10ad3ff2 */
  goto L_10ad3ff2;
L_10ad4017:;
  /* 10ad4017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad401a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ad401d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad401f jne 0x10ad4029 */
  if (!C.zf) goto L_10ad4029;
  /* 10ad4021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4024 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4027 jmp 0x10ad402c */
  goto L_10ad402c;
L_10ad4029:;
  /* 10ad4029 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ad402c:;
  /* 10ad402c mov esp, ebp */
  ESP = (EBP);
  /* 10ad402e pop ebp */
  EBP = (pop32());
  /* 10ad402f ret  */
  ESPCHK(0x10ad3fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014030 @ 0x10ad4030 (736 bytes, 224 insns) */
void f_10ad4030(void) {
  FTRACE(0x10ad4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad4030 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad4031 mov ebp, esp */
  EBP = (ESP);
  /* 10ad4033 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4036 push esi */
  push32((uint32_t)(ESI));
  /* 10ad4037 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad403b je 0x10ad405c */
  if (C.zf) goto L_10ad405c;
  /* 10ad403d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10ad403f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4042 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4043 call 0x10ad4480 */
  push32(0x10ad4048u); f_10ad4480();
  /* 10ad4048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad404b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ad404e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4052 je 0x10ad405c */
  if (C.zf) goto L_10ad405c;
  /* 10ad4054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4057 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad405a jne 0x10ad4064 */
  if (!C.zf) goto L_10ad4064;
L_10ad405c:;
  /* 10ad405c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad405f jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad4064:;
  /* 10ad4064 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad4067 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ad406b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad406d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad406f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ad4070 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad4073 mov ecx, dword ptr [0x10aef5f4] */
  ECX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad4079 cmp ecx, dword ptr [0x10aef5f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aef5f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad407f jne 0x10ad4095 */
  if (!C.zf) goto L_10ad4095;
  /* 10ad4081 mov edx, dword ptr [0x10aef5f4] */
  EDX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad4087 push edx */
  push32((uint32_t)(EDX));
  /* 10ad4088 call 0x10ad4390 */
  push32(0x10ad408du); f_10ad4390();
  /* 10ad408d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4090 mov dword ptr [0x10aef5f4], eax */
  w32((uint32_t)(0x10aef5f4), (EAX));
L_10ad4095:;
  /* 10ad4095 cmp dword ptr [0x10aef5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad409c jne 0x10ad4155 */
  if (!C.zf) goto L_10ad4155;
  /* 10ad40a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad40a6 je 0x10ad40c7 */
  if (C.zf) goto L_10ad40c7;
  /* 10ad40a8 cmp dword ptr [0x10aef5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad40af je 0x10ad40c7 */
  if (C.zf) goto L_10ad40c7;
  /* 10ad40b1 call 0x10ad3b30 */
  push32(0x10ad40b6u); f_10ad3b30();
  /* 10ad40b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad40b8 je 0x10ad40c2 */
  if (C.zf) goto L_10ad40c2;
  /* 10ad40ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad40bd jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad40c2:;
  /* 10ad40c2 jmp 0x10ad4155 */
  goto L_10ad4155;
L_10ad40c7:;
  /* 10ad40c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad40cb je 0x10ad40d4 */
  if (C.zf) goto L_10ad40d4;
  /* 10ad40cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad40cf jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad40d4:;
  /* 10ad40d4 cmp dword ptr [0x10aef5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad40db jne 0x10ad4114 */
  if (!C.zf) goto L_10ad4114;
  /* 10ad40dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10ad40e2 push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad40e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad40e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad40eb call 0x10ac4030 */
  push32(0x10ad40f0u); f_10ac4030();
  /* 10ad40f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad40f3 mov dword ptr [0x10aef5f4], eax */
  w32((uint32_t)(0x10aef5f4), (EAX));
  /* 10ad40f8 cmp dword ptr [0x10aef5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad40ff jne 0x10ad4109 */
  if (!C.zf) goto L_10ad4109;
  /* 10ad4101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad4104 jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad4109:;
  /* 10ad4109 mov eax, dword ptr [0x10aef5f4] */
  EAX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad410e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ad4114:;
  /* 10ad4114 cmp dword ptr [0x10aef5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad411b jne 0x10ad4155 */
  if (!C.zf) goto L_10ad4155;
  /* 10ad411d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10ad4122 push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad4127 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad4129 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ad412b call 0x10ac4030 */
  push32(0x10ad4130u); f_10ac4030();
  /* 10ad4130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4133 mov dword ptr [0x10aef5fc], eax */
  w32((uint32_t)(0x10aef5fc), (EAX));
  /* 10ad4138 cmp dword ptr [0x10aef5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad413f jne 0x10ad4149 */
  if (!C.zf) goto L_10ad4149;
  /* 10ad4141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad4144 jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad4149:;
  /* 10ad4149 mov ecx, dword ptr [0x10aef5fc] */
  ECX = (r32((uint32_t)(0x10aef5fc)));
  /* 10ad414f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10ad4155:;
  /* 10ad4155 mov edx, dword ptr [0x10aef5f4] */
  EDX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad415b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ad415e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad4161 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4164 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4168 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad4169 call 0x10ad4310 */
  push32(0x10ad416eu); f_10ad4310();
  /* 10ad416e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad4174 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4178 jl 0x10ad4211 */
  if ((C.sf!=C.of)) goto L_10ad4211;
  /* 10ad417e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4181 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4184 je 0x10ad4211 */
  if (C.zf) goto L_10ad4211;
  /* 10ad418a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad418e je 0x10ad4203 */
  if (C.zf) goto L_10ad4203;
  /* 10ad4190 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad4192 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4198 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ad419b push edx */
  push32((uint32_t)(EDX));
  /* 10ad419c call 0x10ac4ac0 */
  push32(0x10ad41a1u); f_10ac4ac0();
  /* 10ad41a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad41a4 jmp 0x10ad41af */
  goto L_10ad41af;
L_10ad41a6:;
  /* 10ad41a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad41a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad41ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ad41af:;
  /* 10ad41af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad41b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad41b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad41b9 je 0x10ad41d0 */
  if (C.zf) goto L_10ad41d0;
  /* 10ad41bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad41be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad41c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad41c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad41c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10ad41cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ad41ce jmp 0x10ad41a6 */
  goto L_10ad41a6;
L_10ad41d0:;
  /* 10ad41d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10ad41d5 push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad41da push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad41dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad41df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ad41e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ad41e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad41e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad41e7 call 0x10ac44c0 */
  push32(0x10ad41ecu); f_10ac44c0();
  /* 10ad41ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad41ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad41f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad41f6 je 0x10ad4201 */
  if (C.zf) goto L_10ad4201;
  /* 10ad41f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad41fb mov dword ptr [0x10aef5f4], edx */
  w32((uint32_t)(0x10aef5f4), (EDX));
L_10ad4201:;
  /* 10ad4201 jmp 0x10ad420f */
  goto L_10ad420f;
L_10ad4203:;
  /* 10ad4203 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad420c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10ad420f:;
  /* 10ad420f jmp 0x10ad4284 */
  goto L_10ad4284;
L_10ad4211:;
  /* 10ad4211 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4215 jne 0x10ad427d */
  if (!C.zf) goto L_10ad427d;
  /* 10ad4217 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad421b jge 0x10ad4225 */
  if ((C.sf==C.of)) goto L_10ad4225;
  /* 10ad421d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4220 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad4222 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ad4225:;
  /* 10ad4225 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10ad422a push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad422f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad4231 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4234 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10ad423b push edx */
  push32((uint32_t)(EDX));
  /* 10ad423c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad423f push eax */
  push32((uint32_t)(EAX));
  /* 10ad4240 call 0x10ac44c0 */
  push32(0x10ad4245u); f_10ac44c0();
  /* 10ad4245 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4248 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad424b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad424f jne 0x10ad4259 */
  if (!C.zf) goto L_10ad4259;
  /* 10ad4251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad4254 jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad4259:;
  /* 10ad4259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad425c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad425f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4262 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ad4265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4268 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad426b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10ad4273 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4276 mov dword ptr [0x10aef5f4], eax */
  w32((uint32_t)(0x10aef5f4), (EAX));
  /* 10ad427b jmp 0x10ad4284 */
  goto L_10ad4284;
L_10ad427d:;
  /* 10ad427d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad427f jmp 0x10ad430b */
  goto L_10ad430b;
L_10ad4284:;
  /* 10ad4284 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4288 je 0x10ad4309 */
  if (C.zf) goto L_10ad4309;
  /* 10ad428a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10ad428f push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad4294 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad4296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4299 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad429a call 0x10ac6e60 */
  push32(0x10ad429fu); f_10ac6e60();
  /* 10ad429f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad42a6 call 0x10ac4030 */
  push32(0x10ad42abu); f_10ac4030();
  /* 10ad42ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ad42b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad42b5 je 0x10ad4309 */
  if (C.zf) goto L_10ad4309;
  /* 10ad42b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad42ba push edx */
  push32((uint32_t)(EDX));
  /* 10ad42bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad42be push eax */
  push32((uint32_t)(EAX));
  /* 10ad42bf call 0x10ac6fe0 */
  push32(0x10ad42c4u); f_10ac6fe0();
  /* 10ad42c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ad42ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad42cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad42d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ad42d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad42d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ad42db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad42de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad42e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad42e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad42e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad42e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad42eb not edx */
  EDX = (~(EDX));
  /* 10ad42ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ad42f0 push edx */
  push32((uint32_t)(EDX));
  /* 10ad42f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad42f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ad42f5 call dword ptr [0x10af227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af227c))), 0x10ad42fbu);
  /* 10ad42fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad42fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad4300 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad4301 call 0x10ac4ac0 */
  push32(0x10ad4306u); f_10ac4ac0();
  /* 10ad4306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad4309:;
  /* 10ad4309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad430b:;
  /* 10ad430b pop esi */
  ESI = (pop32());
  /* 10ad430c mov esp, ebp */
  ESP = (EBP);
  /* 10ad430e pop ebp */
  EBP = (pop32());
  /* 10ad430f ret  */
  ESPCHK(0x10ad4030u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10ad4310 (124 bytes, 47 insns) */
void f_10ad4310(void) {
  FTRACE(0x10ad4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad4310 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad4311 mov ebp, esp */
  EBP = (ESP);
  /* 10ad4313 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad4314 mov eax, dword ptr [0x10aef5f4] */
  EAX = (r32((uint32_t)(0x10aef5f4)));
  /* 10ad4319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad431c jmp 0x10ad4327 */
  goto L_10ad4327;
L_10ad431e:;
  /* 10ad431e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4321 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4324 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ad4327:;
  /* 10ad4327 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad432a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad432d je 0x10ad437a */
  if (C.zf) goto L_10ad437a;
  /* 10ad432f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad4332 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4333 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4336 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad4338 push edx */
  push32((uint32_t)(EDX));
  /* 10ad4339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad433c push eax */
  push32((uint32_t)(EAX));
  /* 10ad433d call 0x10ad3ae0 */
  push32(0x10ad4342u); f_10ad3ae0();
  /* 10ad4342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad4347 jne 0x10ad4378 */
  if (!C.zf) goto L_10ad4378;
  /* 10ad4349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad434c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad434e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad4351 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10ad4355 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4358 je 0x10ad436a */
  if (C.zf) goto L_10ad436a;
  /* 10ad435a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad435d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad435f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad4362 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10ad4366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad4368 jne 0x10ad4378 */
  if (!C.zf) goto L_10ad4378;
L_10ad436a:;
  /* 10ad436a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad436d sub eax, dword ptr [0x10aef5f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aef5f4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4373 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ad4376 jmp 0x10ad4388 */
  goto L_10ad4388;
L_10ad4378:;
  /* 10ad4378 jmp 0x10ad431e */
  goto L_10ad431e;
L_10ad437a:;
  /* 10ad437a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad437d sub eax, dword ptr [0x10aef5f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aef5f4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4383 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ad4386 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ad4388:;
  /* 10ad4388 mov esp, ebp */
  ESP = (EBP);
  /* 10ad438a pop ebp */
  EBP = (pop32());
  /* 10ad438b ret  */
  ESPCHK(0x10ad4310u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10ad4390 (238 bytes, 80 insns) */
void f_10ad4390(void) {
  FTRACE(0x10ad4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad4390 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad4391 mov ebp, esp */
  EBP = (ESP);
  /* 10ad4393 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad439d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad43a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad43a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad43a7 jne 0x10ad43b0 */
  if (!C.zf) goto L_10ad43b0;
  /* 10ad43a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad43ab jmp 0x10ad447a */
  goto L_10ad447a;
L_10ad43b0:;
  /* 10ad43b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad43b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad43b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad43b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad43bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad43be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad43c0 je 0x10ad43cd */
  if (C.zf) goto L_10ad43cd;
  /* 10ad43c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad43c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad43c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ad43cb jmp 0x10ad43b0 */
  goto L_10ad43b0;
L_10ad43cd:;
  /* 10ad43cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10ad43d2 push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad43d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad43d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad43dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10ad43e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ad43e4 call 0x10ac4030 */
  push32(0x10ad43e9u); f_10ac4030();
  /* 10ad43e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad43ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad43ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad43f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad43f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad43f9 jne 0x10ad4405 */
  if (!C.zf) goto L_10ad4405;
  /* 10ad43fb push 9 */
  push32((uint32_t)(0x9u));
  /* 10ad43fd call 0x10ac2fa0 */
  push32(0x10ad4402u); f_10ac2fa0();
  /* 10ad4402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad4405:;
  /* 10ad4405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4408 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ad440b:;
  /* 10ad440b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad440e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4411 je 0x10ad446e */
  if (C.zf) goto L_10ad446e;
  /* 10ad4413 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10ad4418 push 0x10aebad8 */
  push32((uint32_t)(0x10aebad8u));
  /* 10ad441d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad441f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4422 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad4424 push edx */
  push32((uint32_t)(EDX));
  /* 10ad4425 call 0x10ac6e60 */
  push32(0x10ad442au); f_10ac6e60();
  /* 10ad442a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad442d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4430 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4431 call 0x10ac4030 */
  push32(0x10ad4436u); f_10ac4030();
  /* 10ad4436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad443c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ad443e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4441 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4444 je 0x10ad445a */
  if (C.zf) goto L_10ad445a;
  /* 10ad4446 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad4449 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ad444b push ecx */
  push32((uint32_t)(ECX));
  /* 10ad444c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad444f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ad4451 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4452 call 0x10ac6fe0 */
  push32(0x10ad4457u); f_10ac6fe0();
  /* 10ad4457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad445a:;
  /* 10ad445a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad445d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ad4463 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4466 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4469 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad446c jmp 0x10ad440b */
  goto L_10ad440b;
L_10ad446e:;
  /* 10ad446e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad4471 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ad4477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ad447a:;
  /* 10ad447a mov esp, ebp */
  ESP = (EBP);
  /* 10ad447c pop ebp */
  EBP = (pop32());
  /* 10ad447d ret  */
  ESPCHK(0x10ad4390u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x10ad4480 (237 bytes, 81 insns) */
void f_10ad4480(void) {
  FTRACE(0x10ad4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad4480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad4481 mov ebp, esp */
  EBP = (ESP);
  /* 10ad4483 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad4484 cmp dword ptr [0x10af0d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad448b jne 0x10ad44a2 */
  if (!C.zf) goto L_10ad44a2;
  /* 10ad448d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad4490 push eax */
  push32((uint32_t)(EAX));
  /* 10ad4491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4494 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad4495 call 0x10ad4580 */
  push32(0x10ad449au); f_10ad4580();
  /* 10ad449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad449d jmp 0x10ad4569 */
  goto L_10ad4569;
L_10ad44a2:;
  /* 10ad44a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ad44a4 call 0x10ac7a30 */
  push32(0x10ad44a9u); f_10ac7a30();
  /* 10ad44a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad44ac jmp 0x10ad44b7 */
  goto L_10ad44b7;
L_10ad44ae:;
  /* 10ad44ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad44b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad44b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ad44b7:;
  /* 10ad44b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad44ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10ad44be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ad44c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad44c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad44cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad44cd je 0x10ad454b */
  if (C.zf) goto L_10ad454b;
  /* 10ad44cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad44d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad44d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad44d9 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10ad44df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad44e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad44e4 je 0x10ad4536 */
  if (C.zf) goto L_10ad4536;
  /* 10ad44e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad44e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad44ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ad44ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad44f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad44f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad44f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad44f8 jne 0x10ad4508 */
  if (!C.zf) goto L_10ad4508;
  /* 10ad44fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ad44fc call 0x10ac7ad0 */
  push32(0x10ad4501u); f_10ac7ad0();
  /* 10ad4501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad4506 jmp 0x10ad4569 */
  goto L_10ad4569;
L_10ad4508:;
  /* 10ad4508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad450b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad4511 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ad4514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4517 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad4519 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad451b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ad451d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4520 jne 0x10ad4534 */
  if (!C.zf) goto L_10ad4534;
  /* 10ad4522 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ad4524 call 0x10ac7ad0 */
  push32(0x10ad4529u); f_10ac7ad0();
  /* 10ad4529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad452c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad452f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad4532 jmp 0x10ad4569 */
  goto L_10ad4569;
L_10ad4534:;
  /* 10ad4534 jmp 0x10ad4546 */
  goto L_10ad4546;
L_10ad4536:;
  /* 10ad4536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4539 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad453f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4542 jne 0x10ad4546 */
  if (!C.zf) goto L_10ad4546;
  /* 10ad4544 jmp 0x10ad454b */
  goto L_10ad454b;
L_10ad4546:;
  /* 10ad4546 jmp 0x10ad44ae */
  goto L_10ad44ae;
L_10ad454b:;
  /* 10ad454b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ad454d call 0x10ac7ad0 */
  push32(0x10ad4552u); f_10ac7ad0();
  /* 10ad4552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad4555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad4558 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad455d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad4560 jne 0x10ad4567 */
  if (!C.zf) goto L_10ad4567;
  /* 10ad4562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad4565 jmp 0x10ad4569 */
  goto L_10ad4569;
L_10ad4567:;
  /* 10ad4567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad4569:;
  /* 10ad4569 mov esp, ebp */
  ESP = (EBP);
  /* 10ad456b pop ebp */
  EBP = (pop32());
  /* 10ad456c ret  */
  ESPCHK(0x10ad4480u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10ad4580 (193 bytes, 87 insns) */
void f_10ad4580(void) {
  FTRACE(0x10ad4580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad4580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad4582 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ad4586 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad4587 mov ebx, eax */
  EBX = (EAX);
  /* 10ad4589 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ad458c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ad4590 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ad4596 je 0x10ad45ab */
  if (C.zf) goto L_10ad45ab;
L_10ad4598:;
  /* 10ad4598 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10ad459a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ad459b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad459d je 0x10ad4570 */
  if (C.zf) { jmp_ind(0x10ad4570u); return; }
  /* 10ad459f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10ad45a1 je 0x10ad45f4 */
  if (C.zf) goto L_10ad45f4;
  /* 10ad45a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ad45a9 jne 0x10ad4598 */
  if (!C.zf) goto L_10ad4598;
L_10ad45ab:;
  /* 10ad45ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10ad45ad push edi */
  push32((uint32_t)(EDI));
  /* 10ad45ae mov eax, ebx */
  EAX = (EBX);
  /* 10ad45b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10ad45b3 push esi */
  push32((uint32_t)(ESI));
  /* 10ad45b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10ad45b6:;
  /* 10ad45b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ad45b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10ad45bd mov eax, ecx */
  EAX = (ECX);
  /* 10ad45bf mov esi, edi */
  ESI = (EDI);
  /* 10ad45c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad45c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad45c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad45c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ad45ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad45cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ad45cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ad45d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad45d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad45da jne 0x10ad45f8 */
  if (!C.zf) goto L_10ad45f8;
  /* 10ad45dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad45e1 je 0x10ad45b6 */
  if (C.zf) goto L_10ad45b6;
  /* 10ad45e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad45e8 jne 0x10ad45f2 */
  if (!C.zf) goto L_10ad45f2;
  /* 10ad45ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10ad45f0 jne 0x10ad45b6 */
  if (!C.zf) goto L_10ad45b6;
L_10ad45f2:;
  /* 10ad45f2 pop esi */
  ESI = (pop32());
  /* 10ad45f3 pop edi */
  EDI = (pop32());
L_10ad45f4:;
  /* 10ad45f4 pop ebx */
  EBX = (pop32());
  /* 10ad45f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad45f7 ret  */
  ESPCHK(0x10ad4580u, _esp0);
  ESP += 4; return;
L_10ad45f8:;
  /* 10ad45f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ad45fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad45fd je 0x10ad4635 */
  if (C.zf) goto L_10ad4635;
  /* 10ad45ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ad4601 je 0x10ad45f2 */
  if (C.zf) goto L_10ad45f2;
  /* 10ad4603 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad4605 je 0x10ad462e */
  if (C.zf) goto L_10ad462e;
  /* 10ad4607 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ad4609 je 0x10ad45f2 */
  if (C.zf) goto L_10ad45f2;
  /* 10ad460b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ad460e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad4610 je 0x10ad4627 */
  if (C.zf) goto L_10ad4627;
  /* 10ad4612 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ad4614 je 0x10ad45f2 */
  if (C.zf) goto L_10ad45f2;
  /* 10ad4616 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ad4618 je 0x10ad4620 */
  if (C.zf) goto L_10ad4620;
  /* 10ad461a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ad461c je 0x10ad45f2 */
  if (C.zf) goto L_10ad45f2;
  /* 10ad461e jmp 0x10ad45b6 */
  goto L_10ad45b6;
L_10ad4620:;
  /* 10ad4620 pop esi */
  ESI = (pop32());
  /* 10ad4621 pop edi */
  EDI = (pop32());
  /* 10ad4622 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10ad4625 pop ebx */
  EBX = (pop32());
  /* 10ad4626 ret  */
  ESPCHK(0x10ad4580u, _esp0);
  ESP += 4; return;
L_10ad4627:;
  /* 10ad4627 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10ad462a pop esi */
  ESI = (pop32());
  /* 10ad462b pop edi */
  EDI = (pop32());
  /* 10ad462c pop ebx */
  EBX = (pop32());
  /* 10ad462d ret  */
  ESPCHK(0x10ad4580u, _esp0);
  ESP += 4; return;
L_10ad462e:;
  /* 10ad462e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10ad4631 pop esi */
  ESI = (pop32());
  /* 10ad4632 pop edi */
  EDI = (pop32());
  /* 10ad4633 pop ebx */
  EBX = (pop32());
  /* 10ad4634 ret  */
  ESPCHK(0x10ad4580u, _esp0);
  ESP += 4; return;
L_10ad4635:;
  /* 10ad4635 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10ad4638 pop esi */
  ESI = (pop32());
  /* 10ad4639 pop edi */
  EDI = (pop32());
  /* 10ad463a pop ebx */
  EBX = (pop32());
  /* 10ad463b ret  */
  ESPCHK(0x10ad4580u, _esp0);
  ESP += 4; return;
  /* 10ad463c jmp dword ptr [0x10af22e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10af22e8)))); return;
}

/* RtlUnwind @ 0x10ad478c (6 bytes, 1 insns) */
void f_10ad478c(void) {
  FTRACE(0x10ad478cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad478c jmp dword ptr [0x10af22b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10af22b4)))); return;
}

