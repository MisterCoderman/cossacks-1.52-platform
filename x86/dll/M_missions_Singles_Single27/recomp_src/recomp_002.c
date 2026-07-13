#include "recomp.h"

/* FUN_10011070 @ 0x113e1070 (393 bytes, 123 insns) */
void f_113e1070(void) {
  FTRACE(0x113e1070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1070 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1071 mov ebp, esp */
  EBP = (ESP);
  /* 113e1073 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1076 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e107a jne 0x113e1086 */
  if (!C.zf) goto L_113e1086;
  /* 113e107c mov eax, dword ptr [0x113fec98] */
  EAX = (r32((uint32_t)(0x113fec98)));
  /* 113e1081 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113e1084 jmp 0x113e108c */
  goto L_113e108c;
L_113e1086:;
  /* 113e1086 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1089 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113e108c:;
  /* 113e108c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e108f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e1092 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1095 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e1098 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e109d call dword ptr [0x11402364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402364))), 0x113e10a3u);
  /* 113e10a3 cmp dword ptr [0x113ff894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e10aa je 0x113e10ca */
  if (C.zf) goto L_113e10ca;
  /* 113e10ac push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e10b1 call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113e10b7u);
  /* 113e10b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e10b9 call 0x113d7730 */
  push32(0x113e10beu); f_113d7730();
  /* 113e10be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e10c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113e10c8 jmp 0x113e10d1 */
  goto L_113e10d1;
L_113e10ca:;
  /* 113e10ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113e10d1:;
  /* 113e10d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e10d5 jbe 0x113e11c2 */
  if ((C.cf||C.zf)) goto L_113e11c2;
  /* 113e10db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e10de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e10e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 113e10e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e10e7 je 0x113e10f1 */
  if (C.zf) goto L_113e10f1;
  /* 113e10e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e10ed je 0x113e10f6 */
  if (C.zf) goto L_113e10f6;
  /* 113e10ef jmp 0x113e1150 */
  goto L_113e1150;
L_113e10f1:;
  /* 113e10f1 jmp 0x113e11c2 */
  goto L_113e11c2;
L_113e10f6:;
  /* 113e10f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e10f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e10fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 113e10ff mov dword ptr [0x113ff880], 0 */
  w32((uint32_t)(0x113ff880), (0x0u));
  /* 113e1109 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e110c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e110f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1112 jne 0x113e1127 */
  if (!C.zf) goto L_113e1127;
  /* 113e1114 mov dword ptr [0x113ff880], 1 */
  w32((uint32_t)(0x113ff880), (0x1u));
  /* 113e111e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1121 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1124 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113e1127:;
  /* 113e1127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e112a push ecx */
  push32((uint32_t)(ECX));
  /* 113e112b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 113e112e push edx */
  push32((uint32_t)(EDX));
  /* 113e112f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 113e1132 push eax */
  push32((uint32_t)(EAX));
  /* 113e1133 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1136 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1137 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e113a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e113c push eax */
  push32((uint32_t)(EAX));
  /* 113e113d call 0x113e1200 */
  push32(0x113e1142u); f_113e1200();
  /* 113e1142 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1145 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e114b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113e114e jmp 0x113e11bd */
  goto L_113e11bd;
L_113e1150:;
  /* 113e1150 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e1155 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1157 mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e115d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e115f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e1163 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113e1169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e116b je 0x113e1198 */
  if (C.zf) goto L_113e1198;
  /* 113e116d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1171 jbe 0x113e1198 */
  if ((C.cf||C.zf)) goto L_113e1198;
  /* 113e1173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1179 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e117b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113e117d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1183 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e1186 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1189 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e118c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113e118f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1192 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1195 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113e1198:;
  /* 113e1198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e119b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e119e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e11a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113e11a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e11a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e11a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e11ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e11ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e11b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113e11b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e11b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e11ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113e11bd:;
  /* 113e11bd jmp 0x113e10d1 */
  goto L_113e10d1;
L_113e11c2:;
  /* 113e11c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e11c6 je 0x113e11d4 */
  if (C.zf) goto L_113e11d4;
  /* 113e11c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e11ca call 0x113d77d0 */
  push32(0x113e11cfu); f_113d77d0();
  /* 113e11cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e11d2 jmp 0x113e11df */
  goto L_113e11df;
L_113e11d4:;
  /* 113e11d4 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e11d9 call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113e11dfu);
L_113e11df:;
  /* 113e11df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e11e3 jbe 0x113e11f3 */
  if ((C.cf||C.zf)) goto L_113e11f3;
  /* 113e11e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e11e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113e11eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e11ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e11f1 jmp 0x113e11f5 */
  goto L_113e11f5;
L_113e11f3:;
  /* 113e11f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e11f5:;
  /* 113e11f5 mov esp, ebp */
  ESP = (EBP);
  /* 113e11f7 pop ebp */
  EBP = (pop32());
  /* 113e11f8 ret  */
  ESPCHK(0x113e1070u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x113e1200 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_113e1200(void) {
  FTRACE(0x113e1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1200 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1201 mov ebp, esp */
  EBP = (ESP);
  /* 113e1203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1206 push esi */
  push32((uint32_t)(ESI));
  /* 113e1207 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 113e120b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e120e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1211 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1214 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e1217 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e121b ja 0x113e1768 */
  if ((!C.cf&&!C.zf)) goto L_113e1768;
  /* 113e1221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e1226 mov dl, byte ptr [eax + 0x113e17c9] */
  DL = (r8((uint32_t)(EAX + 0x113e17c9)));
  /* 113e122c jmp dword ptr [edx*4 + 0x113e176d] */
  switch (EDX) {
    case 0: goto L_113e1746;
    case 1: goto L_113e1255;
    case 2: goto L_113e129b;
    case 3: goto L_113e13e8;
    case 4: goto L_113e1410;
    case 5: goto L_113e14af;
    case 6: goto L_113e151b;
    case 7: goto L_113e1544;
    case 8: goto L_113e1585;
    case 9: goto L_113e1667;
    case 10: goto L_113e16ce;
    case 11: goto L_113e171b;
    case 12: goto L_113e1233;
    case 13: goto L_113e1278;
    case 14: goto L_113e12be;
    case 15: goto L_113e13be;
    case 16: goto L_113e1455;
    case 17: goto L_113e1482;
    case 18: goto L_113e14d7;
    case 19: goto L_113e155b;
    case 20: goto L_113e1609;
    case 21: goto L_113e1698;
    case 22: goto L_113e1768;
    default: x86_unimpl("switch@0x113e122c out of table"); return;
  }
L_113e1233:;
  /* 113e1233 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1236 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1237 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e123a push edx */
  push32((uint32_t)(EDX));
  /* 113e123b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e123e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113e1241 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1244 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113e1247 push eax */
  push32((uint32_t)(EAX));
  /* 113e1248 call 0x113e1820 */
  push32(0x113e124du); f_113e1820();
  /* 113e124d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1250 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1255:;
  /* 113e1255 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1258 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1259 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e125c push edx */
  push32((uint32_t)(EDX));
  /* 113e125d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1260 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113e1263 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1266 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 113e126a push eax */
  push32((uint32_t)(EAX));
  /* 113e126b call 0x113e1820 */
  push32(0x113e1270u); f_113e1820();
  /* 113e1270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1273 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1278:;
  /* 113e1278 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e127b push ecx */
  push32((uint32_t)(ECX));
  /* 113e127c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e127f push edx */
  push32((uint32_t)(EDX));
  /* 113e1280 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1283 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113e1286 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1289 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113e128d push eax */
  push32((uint32_t)(EAX));
  /* 113e128e call 0x113e1820 */
  push32(0x113e1293u); f_113e1820();
  /* 113e1293 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1296 jmp 0x113e1768 */
  goto L_113e1768;
L_113e129b:;
  /* 113e129b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e129e push ecx */
  push32((uint32_t)(ECX));
  /* 113e129f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e12a2 push edx */
  push32((uint32_t)(EDX));
  /* 113e12a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e12a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113e12a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e12ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113e12b0 push eax */
  push32((uint32_t)(EAX));
  /* 113e12b1 call 0x113e1820 */
  push32(0x113e12b6u); f_113e1820();
  /* 113e12b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e12b9 jmp 0x113e1768 */
  goto L_113e1768;
L_113e12be:;
  /* 113e12be cmp dword ptr [0x113ff880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e12c5 je 0x113e1346 */
  if (C.zf) goto L_113e1346;
  /* 113e12c7 mov dword ptr [0x113ff880], 0 */
  w32((uint32_t)(0x113ff880), (0x0u));
  /* 113e12d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e12d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113e12d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e12d8 push edx */
  push32((uint32_t)(EDX));
  /* 113e12d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e12dc push eax */
  push32((uint32_t)(EAX));
  /* 113e12dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e12e0 push ecx */
  push32((uint32_t)(ECX));
  /* 113e12e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e12e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 113e12ea push eax */
  push32((uint32_t)(EAX));
  /* 113e12eb call 0x113e19d0 */
  push32(0x113e12f0u); f_113e19d0();
  /* 113e12f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e12f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e12f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e12f9 jne 0x113e1300 */
  if (!C.zf) goto L_113e1300;
  /* 113e12fb jmp 0x113e1768 */
  goto L_113e1768;
L_113e1300:;
  /* 113e1300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1303 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1305 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 113e1308 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e130b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e130d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1310 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1313 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e1315 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1318 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e131a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e131d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1320 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e1322 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1325 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1326 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1329 push edx */
  push32((uint32_t)(EDX));
  /* 113e132a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e132d push eax */
  push32((uint32_t)(EAX));
  /* 113e132e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1331 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1332 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1335 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 113e133b push eax */
  push32((uint32_t)(EAX));
  /* 113e133c call 0x113e19d0 */
  push32(0x113e1341u); f_113e19d0();
  /* 113e1341 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1344 jmp 0x113e13b9 */
  goto L_113e13b9;
L_113e1346:;
  /* 113e1346 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1349 push ecx */
  push32((uint32_t)(ECX));
  /* 113e134a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e134d push edx */
  push32((uint32_t)(EDX));
  /* 113e134e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1351 push eax */
  push32((uint32_t)(EAX));
  /* 113e1352 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1355 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1356 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1359 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 113e135f push eax */
  push32((uint32_t)(EAX));
  /* 113e1360 call 0x113e19d0 */
  push32(0x113e1365u); f_113e19d0();
  /* 113e1365 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e136b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e136e jne 0x113e1375 */
  if (!C.zf) goto L_113e1375;
  /* 113e1370 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1375:;
  /* 113e1375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1378 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e137a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 113e137d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1380 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1382 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1385 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1388 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e138a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e138d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e138f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1392 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1395 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e1397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e139a push ecx */
  push32((uint32_t)(ECX));
  /* 113e139b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e139e push edx */
  push32((uint32_t)(EDX));
  /* 113e139f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e13a2 push eax */
  push32((uint32_t)(EAX));
  /* 113e13a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e13a6 push ecx */
  push32((uint32_t)(ECX));
  /* 113e13a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e13aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 113e13b0 push eax */
  push32((uint32_t)(EAX));
  /* 113e13b1 call 0x113e19d0 */
  push32(0x113e13b6u); f_113e19d0();
  /* 113e13b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e13b9:;
  /* 113e13b9 jmp 0x113e1768 */
  goto L_113e1768;
L_113e13be:;
  /* 113e13be mov ecx, dword ptr [0x113ff880] */
  ECX = (r32((uint32_t)(0x113ff880)));
  /* 113e13c4 mov dword ptr [0x113ff890], ecx */
  w32((uint32_t)(0x113ff890), (ECX));
  /* 113e13ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e13cd push edx */
  push32((uint32_t)(EDX));
  /* 113e13ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e13d1 push eax */
  push32((uint32_t)(EAX));
  /* 113e13d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e13d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e13d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113e13da push edx */
  push32((uint32_t)(EDX));
  /* 113e13db call 0x113e1870 */
  push32(0x113e13e0u); f_113e1870();
  /* 113e13e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e13e3 jmp 0x113e1768 */
  goto L_113e1768;
L_113e13e8:;
  /* 113e13e8 mov eax, dword ptr [0x113ff880] */
  EAX = (r32((uint32_t)(0x113ff880)));
  /* 113e13ed mov dword ptr [0x113ff890], eax */
  w32((uint32_t)(0x113ff890), (EAX));
  /* 113e13f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e13f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e13f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e13f9 push edx */
  push32((uint32_t)(EDX));
  /* 113e13fa push 2 */
  push32((uint32_t)(0x2u));
  /* 113e13fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e13ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113e1402 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1403 call 0x113e1870 */
  push32(0x113e1408u); f_113e1870();
  /* 113e1408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e140b jmp 0x113e1768 */
  goto L_113e1768;
L_113e1410:;
  /* 113e1410 mov edx, dword ptr [0x113ff880] */
  EDX = (r32((uint32_t)(0x113ff880)));
  /* 113e1416 mov dword ptr [0x113ff890], edx */
  w32((uint32_t)(0x113ff890), (EDX));
  /* 113e141c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e141f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 113e1422 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e1423 mov ecx, 0xc */
  ECX = (0xcu);
  /* 113e1428 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e142a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e142d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1431 jne 0x113e143a */
  if (!C.zf) goto L_113e143a;
  /* 113e1433 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_113e143a:;
  /* 113e143a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e143d push edx */
  push32((uint32_t)(EDX));
  /* 113e143e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1441 push eax */
  push32((uint32_t)(EAX));
  /* 113e1442 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e1444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1447 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1448 call 0x113e1870 */
  push32(0x113e144du); f_113e1870();
  /* 113e144d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1450 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1455:;
  /* 113e1455 mov edx, dword ptr [0x113ff880] */
  EDX = (r32((uint32_t)(0x113ff880)));
  /* 113e145b mov dword ptr [0x113ff890], edx */
  w32((uint32_t)(0x113ff890), (EDX));
  /* 113e1461 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1464 push eax */
  push32((uint32_t)(EAX));
  /* 113e1465 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1468 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1469 push 3 */
  push32((uint32_t)(0x3u));
  /* 113e146b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e146e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113e1471 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1474 push eax */
  push32((uint32_t)(EAX));
  /* 113e1475 call 0x113e1870 */
  push32(0x113e147au); f_113e1870();
  /* 113e147a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e147d jmp 0x113e1768 */
  goto L_113e1768;
L_113e1482:;
  /* 113e1482 mov ecx, dword ptr [0x113ff880] */
  ECX = (r32((uint32_t)(0x113ff880)));
  /* 113e1488 mov dword ptr [0x113ff890], ecx */
  w32((uint32_t)(0x113ff890), (ECX));
  /* 113e148e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1491 push edx */
  push32((uint32_t)(EDX));
  /* 113e1492 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1495 push eax */
  push32((uint32_t)(EAX));
  /* 113e1496 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e1498 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e149b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113e149e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e14a1 push edx */
  push32((uint32_t)(EDX));
  /* 113e14a2 call 0x113e1870 */
  push32(0x113e14a7u); f_113e1870();
  /* 113e14a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e14aa jmp 0x113e1768 */
  goto L_113e1768;
L_113e14af:;
  /* 113e14af mov eax, dword ptr [0x113ff880] */
  EAX = (r32((uint32_t)(0x113ff880)));
  /* 113e14b4 mov dword ptr [0x113ff890], eax */
  w32((uint32_t)(0x113ff890), (EAX));
  /* 113e14b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e14bc push ecx */
  push32((uint32_t)(ECX));
  /* 113e14bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e14c0 push edx */
  push32((uint32_t)(EDX));
  /* 113e14c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e14c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e14c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113e14c9 push ecx */
  push32((uint32_t)(ECX));
  /* 113e14ca call 0x113e1870 */
  push32(0x113e14cfu); f_113e1870();
  /* 113e14cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e14d2 jmp 0x113e1768 */
  goto L_113e1768;
L_113e14d7:;
  /* 113e14d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e14da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e14de jg 0x113e14fc */
  if ((!C.zf&&C.sf==C.of)) goto L_113e14fc;
  /* 113e14e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e14e3 push eax */
  push32((uint32_t)(EAX));
  /* 113e14e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e14e7 push ecx */
  push32((uint32_t)(ECX));
  /* 113e14e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e14eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 113e14f1 push eax */
  push32((uint32_t)(EAX));
  /* 113e14f2 call 0x113e1820 */
  push32(0x113e14f7u); f_113e1820();
  /* 113e14f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e14fa jmp 0x113e1516 */
  goto L_113e1516;
L_113e14fc:;
  /* 113e14fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e14ff push ecx */
  push32((uint32_t)(ECX));
  /* 113e1500 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1503 push edx */
  push32((uint32_t)(EDX));
  /* 113e1504 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1507 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 113e150d push ecx */
  push32((uint32_t)(ECX));
  /* 113e150e call 0x113e1820 */
  push32(0x113e1513u); f_113e1820();
  /* 113e1513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e1516:;
  /* 113e1516 jmp 0x113e1768 */
  goto L_113e1768;
L_113e151b:;
  /* 113e151b mov edx, dword ptr [0x113ff880] */
  EDX = (r32((uint32_t)(0x113ff880)));
  /* 113e1521 mov dword ptr [0x113ff890], edx */
  w32((uint32_t)(0x113ff890), (EDX));
  /* 113e1527 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e152a push eax */
  push32((uint32_t)(EAX));
  /* 113e152b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e152e push ecx */
  push32((uint32_t)(ECX));
  /* 113e152f push 2 */
  push32((uint32_t)(0x2u));
  /* 113e1531 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1534 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1536 push eax */
  push32((uint32_t)(EAX));
  /* 113e1537 call 0x113e1870 */
  push32(0x113e153cu); f_113e1870();
  /* 113e153c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e153f jmp 0x113e1768 */
  goto L_113e1768;
L_113e1544:;
  /* 113e1544 mov ecx, dword ptr [0x113ff880] */
  ECX = (r32((uint32_t)(0x113ff880)));
  /* 113e154a mov dword ptr [0x113ff890], ecx */
  w32((uint32_t)(0x113ff890), (ECX));
  /* 113e1550 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1553 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 113e1556 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e1559 jmp 0x113e15ad */
  goto L_113e15ad;
L_113e155b:;
  /* 113e155b mov ecx, dword ptr [0x113ff880] */
  ECX = (r32((uint32_t)(0x113ff880)));
  /* 113e1561 mov dword ptr [0x113ff890], ecx */
  w32((uint32_t)(0x113ff890), (ECX));
  /* 113e1567 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e156a push edx */
  push32((uint32_t)(EDX));
  /* 113e156b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e156e push eax */
  push32((uint32_t)(EAX));
  /* 113e156f push 1 */
  push32((uint32_t)(0x1u));
  /* 113e1571 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1574 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113e1577 push edx */
  push32((uint32_t)(EDX));
  /* 113e1578 call 0x113e1870 */
  push32(0x113e157du); f_113e1870();
  /* 113e157d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1580 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1585:;
  /* 113e1585 mov eax, dword ptr [0x113ff880] */
  EAX = (r32((uint32_t)(0x113ff880)));
  /* 113e158a mov dword ptr [0x113ff890], eax */
  w32((uint32_t)(0x113ff890), (EAX));
  /* 113e158f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1592 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1596 jne 0x113e15a1 */
  if (!C.zf) goto L_113e15a1;
  /* 113e1598 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 113e159f jmp 0x113e15ad */
  goto L_113e15ad;
L_113e15a1:;
  /* 113e15a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e15a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 113e15a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e15aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113e15ad:;
  /* 113e15ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e15b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113e15b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e15b6 jge 0x113e15c1 */
  if ((C.sf==C.of)) goto L_113e15c1;
  /* 113e15b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e15bf jmp 0x113e15ee */
  goto L_113e15ee;
L_113e15c1:;
  /* 113e15c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e15c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113e15c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e15c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 113e15cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e15cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e15d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e15d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113e15d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e15d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 113e15de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e15e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e15e3 jl 0x113e15ee */
  if ((C.sf!=C.of)) goto L_113e15ee;
  /* 113e15e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e15e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e15eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113e15ee:;
  /* 113e15ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e15f1 push eax */
  push32((uint32_t)(EAX));
  /* 113e15f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e15f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e15f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e15f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e15fb push edx */
  push32((uint32_t)(EDX));
  /* 113e15fc call 0x113e1870 */
  push32(0x113e1601u); f_113e1870();
  /* 113e1601 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1604 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1609:;
  /* 113e1609 cmp dword ptr [0x113ff880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1610 je 0x113e1640 */
  if (C.zf) goto L_113e1640;
  /* 113e1612 mov dword ptr [0x113ff880], 0 */
  w32((uint32_t)(0x113ff880), (0x0u));
  /* 113e161c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e161f push eax */
  push32((uint32_t)(EAX));
  /* 113e1620 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1623 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1624 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1627 push edx */
  push32((uint32_t)(EDX));
  /* 113e1628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e162b push eax */
  push32((uint32_t)(EAX));
  /* 113e162c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e162f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 113e1635 push edx */
  push32((uint32_t)(EDX));
  /* 113e1636 call 0x113e19d0 */
  push32(0x113e163bu); f_113e19d0();
  /* 113e163b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e163e jmp 0x113e1662 */
  goto L_113e1662;
L_113e1640:;
  /* 113e1640 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1643 push eax */
  push32((uint32_t)(EAX));
  /* 113e1644 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1647 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1648 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e164b push edx */
  push32((uint32_t)(EDX));
  /* 113e164c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e164f push eax */
  push32((uint32_t)(EAX));
  /* 113e1650 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1653 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 113e1659 push edx */
  push32((uint32_t)(EDX));
  /* 113e165a call 0x113e19d0 */
  push32(0x113e165fu); f_113e19d0();
  /* 113e165f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e1662:;
  /* 113e1662 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1667:;
  /* 113e1667 mov dword ptr [0x113ff880], 0 */
  w32((uint32_t)(0x113ff880), (0x0u));
  /* 113e1671 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1674 push eax */
  push32((uint32_t)(EAX));
  /* 113e1675 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1678 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1679 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e167c push edx */
  push32((uint32_t)(EDX));
  /* 113e167d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1680 push eax */
  push32((uint32_t)(EAX));
  /* 113e1681 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1684 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 113e168a push edx */
  push32((uint32_t)(EDX));
  /* 113e168b call 0x113e19d0 */
  push32(0x113e1690u); f_113e19d0();
  /* 113e1690 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1693 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1698:;
  /* 113e1698 mov eax, dword ptr [0x113ff880] */
  EAX = (r32((uint32_t)(0x113ff880)));
  /* 113e169d mov dword ptr [0x113ff890], eax */
  w32((uint32_t)(0x113ff890), (EAX));
  /* 113e16a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e16a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 113e16a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e16a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 113e16ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e16b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e16b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e16b6 push edx */
  push32((uint32_t)(EDX));
  /* 113e16b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e16ba push eax */
  push32((uint32_t)(EAX));
  /* 113e16bb push 2 */
  push32((uint32_t)(0x2u));
  /* 113e16bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e16c0 push ecx */
  push32((uint32_t)(ECX));
  /* 113e16c1 call 0x113e1870 */
  push32(0x113e16c6u); f_113e1870();
  /* 113e16c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e16c9 jmp 0x113e1768 */
  goto L_113e1768;
L_113e16ce:;
  /* 113e16ce mov edx, dword ptr [0x113ff880] */
  EDX = (r32((uint32_t)(0x113ff880)));
  /* 113e16d4 mov dword ptr [0x113ff890], edx */
  w32((uint32_t)(0x113ff890), (EDX));
  /* 113e16da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e16dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 113e16e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e16e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 113e16e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e16e8 mov ecx, eax */
  ECX = (EAX);
  /* 113e16ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e16ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e16f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e16f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113e16f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e16f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 113e16fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e16fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e1703 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1706 push eax */
  push32((uint32_t)(EAX));
  /* 113e1707 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e170a push ecx */
  push32((uint32_t)(ECX));
  /* 113e170b push 4 */
  push32((uint32_t)(0x4u));
  /* 113e170d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1710 push edx */
  push32((uint32_t)(EDX));
  /* 113e1711 call 0x113e1870 */
  push32(0x113e1716u); f_113e1870();
  /* 113e1716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1719 jmp 0x113e1768 */
  goto L_113e1768;
L_113e171b:;
  /* 113e171b call 0x113e2830 */
  push32(0x113e1720u); f_113e2830();
  /* 113e1720 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1723 push eax */
  push32((uint32_t)(EAX));
  /* 113e1724 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1727 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1728 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e172b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e172d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1731 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 113e1734 mov ecx, dword ptr [eax*4 + 0x113fee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fee1c)));
  /* 113e173b push ecx */
  push32((uint32_t)(ECX));
  /* 113e173c call 0x113e1820 */
  push32(0x113e1741u); f_113e1820();
  /* 113e1741 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1744 jmp 0x113e1768 */
  goto L_113e1768;
L_113e1746:;
  /* 113e1746 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1749 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e174b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 113e174e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1751 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1753 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1759 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e175b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e175e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1763 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1766 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113e1768:;
  /* 113e1768 pop esi */
  ESI = (pop32());
  /* 113e1769 mov esp, ebp */
  ESP = (EBP);
  /* 113e176b pop ebp */
  EBP = (pop32());
  /* 113e176c ret  */
  ESPCHK(0x113e1200u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x113e1820 (72 bytes, 30 insns) */
void f_113e1820(void) {
  FTRACE(0x113e1820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1820 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1821 mov ebp, esp */
  EBP = (ESP);
L_113e1823:;
  /* 113e1823 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1826 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1829 je 0x113e1866 */
  if (C.zf) goto L_113e1866;
  /* 113e182b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e182e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e1831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e1833 je 0x113e1866 */
  if (C.zf) goto L_113e1866;
  /* 113e1835 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1838 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e183a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e183d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e183f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113e1841 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1846 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e184c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e184e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1854 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113e1857 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e185a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e185c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e185f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1862 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e1864 jmp 0x113e1823 */
  goto L_113e1823;
L_113e1866:;
  /* 113e1866 pop ebp */
  EBP = (pop32());
  /* 113e1867 ret  */
  ESPCHK(0x113e1820u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x113e1870 (173 bytes, 64 insns) */
void f_113e1870(void) {
  FTRACE(0x113e1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1870 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1871 mov ebp, esp */
  EBP = (ESP);
  /* 113e1873 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e187b cmp dword ptr [0x113ff890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1882 je 0x113e189a */
  if (C.zf) goto L_113e189a;
  /* 113e1884 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1887 push eax */
  push32((uint32_t)(EAX));
  /* 113e1888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e188b push ecx */
  push32((uint32_t)(ECX));
  /* 113e188c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e188f push edx */
  push32((uint32_t)(EDX));
  /* 113e1890 call 0x113e1920 */
  push32(0x113e1895u); f_113e1920();
  /* 113e1895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1898 jmp 0x113e1919 */
  goto L_113e1919;
L_113e189a:;
  /* 113e189a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e189d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e18a0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e18a2 jae 0x113e1910 */
  if (!C.cf) goto L_113e1910;
  /* 113e18a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e18a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e18aa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 113e18ad jmp 0x113e18b8 */
  goto L_113e18b8;
L_113e18af:;
  /* 113e18af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e18b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e18b5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_113e18b8:;
  /* 113e18b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e18bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e18be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e18c0 je 0x113e18f4 */
  if (C.zf) goto L_113e18f4;
  /* 113e18c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e18c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e18c6 mov ecx, 0xa */
  ECX = (0xau);
  /* 113e18cb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e18cd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e18d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e18d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e18d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e18d8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 113e18db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e18de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e18df mov ecx, 0xa */
  ECX = (0xau);
  /* 113e18e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e18e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e18e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e18ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e18ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e18f2 jmp 0x113e18af */
  goto L_113e18af;
L_113e18f4:;
  /* 113e18f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e18f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e18f9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e18fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e18ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113e1901 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1904 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1906 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1909 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e190c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113e190e jmp 0x113e1919 */
  goto L_113e1919;
L_113e1910:;
  /* 113e1910 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1913 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113e1919:;
  /* 113e1919 mov esp, ebp */
  ESP = (EBP);
  /* 113e191b pop ebp */
  EBP = (pop32());
  /* 113e191c ret  */
  ESPCHK(0x113e1870u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x113e1920 (172 bytes, 65 insns) */
void f_113e1920(void) {
  FTRACE(0x113e1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1920 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1921 mov ebp, esp */
  EBP = (ESP);
  /* 113e1923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1929 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e192b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e192e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1931 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1934 jbe 0x113e197b */
  if ((C.cf||C.zf)) goto L_113e197b;
L_113e1936:;
  /* 113e1936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1939 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e193a mov ecx, 0xa */
  ECX = (0xau);
  /* 113e193f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e1941 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1947 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113e1949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e194c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e194f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e1952 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1955 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1957 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e195a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e195d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e195f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1962 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e1963 mov ecx, 0xa */
  ECX = (0xau);
  /* 113e1968 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e196a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e196d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1971 jle 0x113e197b */
  if ((C.zf||C.sf!=C.of)) goto L_113e197b;
  /* 113e1973 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1976 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1979 ja 0x113e1936 */
  if ((!C.cf&&!C.zf)) goto L_113e1936;
L_113e197b:;
  /* 113e197b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e197e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1980 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e1983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1989 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113e198b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e198e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113e1994:;
  /* 113e1994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1997 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1999 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 113e199c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e199f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e19a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e19a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113e19a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e19a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e19ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e19af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e19b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113e19b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 113e19b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e19ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e19bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e19c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e19c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e19c6 jb 0x113e1994 */
  if (C.cf) goto L_113e1994;
  /* 113e19c8 mov esp, ebp */
  ESP = (EBP);
  /* 113e19ca pop ebp */
  EBP = (pop32());
  /* 113e19cb ret  */
  ESPCHK(0x113e1920u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x113e19d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_113e19d0(void) {
  FTRACE(0x113e19d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e19d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e19d1 mov ebp, esp */
  EBP = (ESP);
  /* 113e19d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_113e19d6:;
  /* 113e19d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e19d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e19dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e19de je 0x113e1e4c */
  if (C.zf) goto L_113e1e4c;
  /* 113e19e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e19e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e19ea je 0x113e1e4c */
  if (C.zf) goto L_113e1e4c;
  /* 113e19f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e19f4 mov dword ptr [0x113ff890], 0 */
  w32((uint32_t)(0x113ff890), (0x0u));
  /* 113e19fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113e1a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1a08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e1a0b jmp 0x113e1a16 */
  goto L_113e1a16;
L_113e1a0d:;
  /* 113e1a0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1a10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1a13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113e1a16:;
  /* 113e1a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1a19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e1a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1a1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e1a22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1a28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e1a2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1a2d jne 0x113e1a31 */
  if (!C.zf) goto L_113e1a31;
  /* 113e1a2f jmp 0x113e1a0d */
  goto L_113e1a0d;
L_113e1a31:;
  /* 113e1a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1a34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1a37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e1a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1a3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e1a40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e1a43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e1a46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1a49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e1a4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1a50 ja 0x113e1da0 */
  if ((!C.cf&&!C.zf)) goto L_113e1da0;
  /* 113e1a56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e1a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e1a5b mov al, byte ptr [ecx + 0x113e1e7c] */
  AL = (r8((uint32_t)(ECX + 0x113e1e7c)));
  /* 113e1a61 jmp dword ptr [eax*4 + 0x113e1e50] */
  switch (EAX) {
    case 0: goto L_113e1cbf;
    case 1: goto L_113e1ba3;
    case 2: goto L_113e1b2e;
    case 3: goto L_113e1a68;
    case 4: goto L_113e1aa6;
    case 5: goto L_113e1b07;
    case 6: goto L_113e1b55;
    case 7: goto L_113e1b7c;
    case 8: goto L_113e1bea;
    case 9: goto L_113e1ae4;
    case 10: goto L_113e1da0;
    default: x86_unimpl("switch@0x113e1a61 out of table"); return;
  }
L_113e1a68:;
  /* 113e1a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1a6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113e1a6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e1a71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1a74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113e1a77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1a7b ja 0x113e1aa1 */
  if ((!C.cf&&!C.zf)) goto L_113e1aa1;
  /* 113e1a7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e1a80 jmp dword ptr [ecx*4 + 0x113e1ecf] */
  switch (ECX) {
    case 0: goto L_113e1a87;
    case 1: goto L_113e1a91;
    case 2: goto L_113e1a97;
    case 3: goto L_113e1a9d;
    case 4: goto L_113e1ac5;
    case 5: goto L_113e1acf;
    case 6: goto L_113e1ad5;
    case 7: goto L_113e1adb;
    default: x86_unimpl("switch@0x113e1a80 out of table"); return;
  }
L_113e1a87:;
  /* 113e1a87 mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1a91:;
  /* 113e1a91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 113e1a95 jmp 0x113e1aa1 */
  goto L_113e1aa1;
L_113e1a97:;
  /* 113e1a97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 113e1a9b jmp 0x113e1aa1 */
  goto L_113e1aa1;
L_113e1a9d:;
  /* 113e1a9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_113e1aa1:;
  /* 113e1aa1 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1aa6:;
  /* 113e1aa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1aa9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113e1aac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e1aaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1ab2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113e1ab5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1ab9 ja 0x113e1adf */
  if ((!C.cf&&!C.zf)) goto L_113e1adf;
  /* 113e1abb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e1abe jmp dword ptr [ecx*4 + 0x113e1edf] */
  switch (ECX) {
    case 0: goto L_113e1ac5;
    case 1: goto L_113e1acf;
    case 2: goto L_113e1ad5;
    case 3: goto L_113e1adb;
    default: x86_unimpl("switch@0x113e1abe out of table"); return;
  }
L_113e1ac5:;
  /* 113e1ac5 mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1acf:;
  /* 113e1acf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 113e1ad3 jmp 0x113e1adf */
  goto L_113e1adf;
L_113e1ad5:;
  /* 113e1ad5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 113e1ad9 jmp 0x113e1adf */
  goto L_113e1adf;
L_113e1adb:;
  /* 113e1adb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_113e1adf:;
  /* 113e1adf jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1ae4:;
  /* 113e1ae4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1ae7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113e1aea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1aee je 0x113e1af8 */
  if (C.zf) goto L_113e1af8;
  /* 113e1af0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1af4 je 0x113e1afe */
  if (C.zf) goto L_113e1afe;
  /* 113e1af6 jmp 0x113e1b02 */
  goto L_113e1b02;
L_113e1af8:;
  /* 113e1af8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 113e1afc jmp 0x113e1b02 */
  goto L_113e1b02;
L_113e1afe:;
  /* 113e1afe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_113e1b02:;
  /* 113e1b02 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1b07:;
  /* 113e1b07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1b0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113e1b0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b11 je 0x113e1b1b */
  if (C.zf) goto L_113e1b1b;
  /* 113e1b13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b17 je 0x113e1b25 */
  if (C.zf) goto L_113e1b25;
  /* 113e1b19 jmp 0x113e1b29 */
  goto L_113e1b29;
L_113e1b1b:;
  /* 113e1b1b mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1b25:;
  /* 113e1b25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_113e1b29:;
  /* 113e1b29 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1b2e:;
  /* 113e1b2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1b31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113e1b34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b38 je 0x113e1b42 */
  if (C.zf) goto L_113e1b42;
  /* 113e1b3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b3e je 0x113e1b4c */
  if (C.zf) goto L_113e1b4c;
  /* 113e1b40 jmp 0x113e1b50 */
  goto L_113e1b50;
L_113e1b42:;
  /* 113e1b42 mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1b4c:;
  /* 113e1b4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_113e1b50:;
  /* 113e1b50 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1b55:;
  /* 113e1b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1b58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 113e1b5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b5f je 0x113e1b69 */
  if (C.zf) goto L_113e1b69;
  /* 113e1b61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b65 je 0x113e1b73 */
  if (C.zf) goto L_113e1b73;
  /* 113e1b67 jmp 0x113e1b77 */
  goto L_113e1b77;
L_113e1b69:;
  /* 113e1b69 mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1b73:;
  /* 113e1b73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_113e1b77:;
  /* 113e1b77 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1b7c:;
  /* 113e1b7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1b7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113e1b82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b86 je 0x113e1b90 */
  if (C.zf) goto L_113e1b90;
  /* 113e1b88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1b8c je 0x113e1b9a */
  if (C.zf) goto L_113e1b9a;
  /* 113e1b8e jmp 0x113e1b9e */
  goto L_113e1b9e;
L_113e1b90:;
  /* 113e1b90 mov dword ptr [0x113ff890], 1 */
  w32((uint32_t)(0x113ff890), (0x1u));
L_113e1b9a:;
  /* 113e1b9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_113e1b9e:;
  /* 113e1b9e jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1ba3:;
  /* 113e1ba3 push 0x113fb8ac */
  push32((uint32_t)(0x113fb8acu));
  /* 113e1ba8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1bab push ecx */
  push32((uint32_t)(ECX));
  /* 113e1bac call 0x113e2400 */
  push32(0x113e1bb1u); f_113e2400();
  /* 113e1bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e1bb6 jne 0x113e1bc3 */
  if (!C.zf) goto L_113e1bc3;
  /* 113e1bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1bbb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1bbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e1bc1 jmp 0x113e1be1 */
  goto L_113e1be1;
L_113e1bc3:;
  /* 113e1bc3 push 0x113fb8a8 */
  push32((uint32_t)(0x113fb8a8u));
  /* 113e1bc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1bcb push eax */
  push32((uint32_t)(EAX));
  /* 113e1bcc call 0x113e2400 */
  push32(0x113e1bd1u); f_113e2400();
  /* 113e1bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e1bd6 jne 0x113e1be1 */
  if (!C.zf) goto L_113e1be1;
  /* 113e1bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1bdb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1bde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113e1be1:;
  /* 113e1be1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 113e1be5 jmp 0x113e1da0 */
  goto L_113e1da0;
L_113e1bea:;
  /* 113e1bea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1bed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1bf1 jg 0x113e1c01 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e1c01;
  /* 113e1bf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1bf6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 113e1bfc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113e1bff jmp 0x113e1c0d */
  goto L_113e1c0d;
L_113e1c01:;
  /* 113e1c01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1c04 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 113e1c0a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113e1c0d:;
  /* 113e1c0d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1c11 jle 0x113e1cb4 */
  if ((C.zf||C.sf!=C.of)) goto L_113e1cb4;
  /* 113e1c17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1c1a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1c1d jbe 0x113e1cb4 */
  if ((C.cf||C.zf)) goto L_113e1cb4;
  /* 113e1c23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e1c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e1c28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1c2a mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e1c30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e1c32 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e1c36 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113e1c3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e1c3e je 0x113e1c77 */
  if (C.zf) goto L_113e1c77;
  /* 113e1c40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1c43 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1c46 jbe 0x113e1c77 */
  if ((C.cf||C.zf)) goto L_113e1c77;
  /* 113e1c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1c4d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e1c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e1c52 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113e1c54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1c5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e1c61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e1c64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1c67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113e1c6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1c6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1c6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1c72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1c75 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113e1c77:;
  /* 113e1c77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1c7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e1c7f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1c81 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113e1c83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1c8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1c8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e1c90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e1c93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1c96 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113e1c99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1c9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1c9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1ca1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1ca4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e1ca6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1ca9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1cac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113e1caf jmp 0x113e1c0d */
  goto L_113e1c0d;
L_113e1cb4:;
  /* 113e1cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1cb7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e1cba jmp 0x113e19d6 */
  goto L_113e19d6;
L_113e1cbf:;
  /* 113e1cbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1cc2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113e1cc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e1cc7 je 0x113e1d92 */
  if (C.zf) goto L_113e1d92;
  /* 113e1ccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1cd0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1cd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113e1cd6:;
  /* 113e1cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e1cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e1cde je 0x113e1d90 */
  if (C.zf) goto L_113e1d90;
  /* 113e1ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1ce7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1cea je 0x113e1d90 */
  if (C.zf) goto L_113e1d90;
  /* 113e1cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1cf3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e1cf6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1cf9 jne 0x113e1d09 */
  if (!C.zf) goto L_113e1d09;
  /* 113e1cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1cfe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d01 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113e1d04 jmp 0x113e1d90 */
  goto L_113e1d90;
L_113e1d09:;
  /* 113e1d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e1d0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e1d10 mov edx, dword ptr [0x113fdc98] */
  EDX = (r32((uint32_t)(0x113fdc98)));
  /* 113e1d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e1d18 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 113e1d1c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113e1d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e1d23 je 0x113e1d5c */
  if (C.zf) goto L_113e1d5c;
  /* 113e1d25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1d28 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1d2b jbe 0x113e1d5c */
  if ((C.cf||C.zf)) goto L_113e1d5c;
  /* 113e1d2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e1d37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113e1d39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d41 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113e1d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e1d4f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1d52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1d54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1d57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1d5a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113e1d5c:;
  /* 113e1d5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e1d66 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113e1d68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d6b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1d6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1d73 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e1d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d7b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113e1d7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1d81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1d83 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1d86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1d89 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113e1d8b jmp 0x113e1cd6 */
  goto L_113e1cd6;
L_113e1d90:;
  /* 113e1d90 jmp 0x113e1d9b */
  goto L_113e1d9b;
L_113e1d92:;
  /* 113e1d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1d95 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1d98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113e1d9b:;
  /* 113e1d9b jmp 0x113e19d6 */
  goto L_113e19d6;
L_113e1da0:;
  /* 113e1da0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e1da4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e1da6 je 0x113e1dcc */
  if (C.zf) goto L_113e1dcc;
  /* 113e1da8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e1dab push edx */
  push32((uint32_t)(EDX));
  /* 113e1dac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1daf push eax */
  push32((uint32_t)(EAX));
  /* 113e1db0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1db3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1db4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1db7 push edx */
  push32((uint32_t)(EDX));
  /* 113e1db8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113e1dbb push eax */
  push32((uint32_t)(EAX));
  /* 113e1dbc call 0x113e1200 */
  push32(0x113e1dc1u); f_113e1200();
  /* 113e1dc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1dc7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113e1dca jmp 0x113e1e47 */
  goto L_113e1e47;
L_113e1dcc:;
  /* 113e1dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e1dd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1dd3 mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e1dd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e1ddb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e1ddf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113e1de5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e1de7 je 0x113e1e18 */
  if (C.zf) goto L_113e1e18;
  /* 113e1de9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1dec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1df1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e1df3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113e1df5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1df8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1dfa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1dfd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1e00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113e1e02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1e08 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113e1e0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1e0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1e10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1e13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1e16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_113e1e18:;
  /* 113e1e18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1e1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e1e1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1e20 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e1e22 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113e1e24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e1e29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1e2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1e2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113e1e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1e34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1e37 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e1e3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1e3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e1e3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1e42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1e45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113e1e47:;
  /* 113e1e47 jmp 0x113e19d6 */
  goto L_113e19d6;
L_113e1e4c:;
  /* 113e1e4c mov esp, ebp */
  ESP = (EBP);
  /* 113e1e4e pop ebp */
  EBP = (pop32());
  /* 113e1e4f ret  */
  ESPCHK(0x113e19d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x113e1ef0 (650 bytes, 178 insns) */
void f_113e1ef0(void) {
  FTRACE(0x113e1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 113e1ef3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e1ef9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1efd jne 0x113e2059 */
  if (!C.zf) goto L_113e2059;
  /* 113e1f03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1f06 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 113e1f0c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 113e1f12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e1f15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e1f1c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 113e1f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1f28 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113e1f2e push edx */
  push32((uint32_t)(EDX));
  /* 113e1f2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1f32 push eax */
  push32((uint32_t)(EAX));
  /* 113e1f33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1f36 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1f37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1f3a push edx */
  push32((uint32_t)(EDX));
  /* 113e1f3b call 0x113e3310 */
  push32(0x113e1f40u); f_113e3310();
  /* 113e1f40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1f43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e1f46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1f4a jne 0x113e1fdf */
  if (!C.zf) goto L_113e1fdf;
  /* 113e1f50 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113e1f56u);
  /* 113e1f56 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1f59 je 0x113e1f60 */
  if (C.zf) goto L_113e1f60;
  /* 113e1f5b jmp 0x113e203d */
  goto L_113e203d;
L_113e1f60:;
  /* 113e1f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1f66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1f69 push eax */
  push32((uint32_t)(EAX));
  /* 113e1f6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1f6d push ecx */
  push32((uint32_t)(ECX));
  /* 113e1f6e call 0x113e3310 */
  push32(0x113e1f73u); f_113e3310();
  /* 113e1f73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1f76 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 113e1f7c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1f83 jne 0x113e1f8a */
  if (!C.zf) goto L_113e1f8a;
  /* 113e1f85 jmp 0x113e203d */
  goto L_113e203d;
L_113e1f8a:;
  /* 113e1f8a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 113e1f8c push 0x113fb8b4 */
  push32((uint32_t)(0x113fb8b4u));
  /* 113e1f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e1f93 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113e1f99 push edx */
  push32((uint32_t)(EDX));
  /* 113e1f9a call 0x113d3d30 */
  push32(0x113e1f9fu); f_113d3d30();
  /* 113e1f9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1fa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e1fa5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1fa9 jne 0x113e1fb0 */
  if (!C.zf) goto L_113e1fb0;
  /* 113e1fab jmp 0x113e203d */
  goto L_113e203d;
L_113e1fb0:;
  /* 113e1fb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113e1fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1fb9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 113e1fbf push eax */
  push32((uint32_t)(EAX));
  /* 113e1fc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e1fc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e1fc7 push edx */
  push32((uint32_t)(EDX));
  /* 113e1fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1fcb push eax */
  push32((uint32_t)(EAX));
  /* 113e1fcc call 0x113e3310 */
  push32(0x113e1fd1u); f_113e3310();
  /* 113e1fd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1fd4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e1fd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e1fdb jne 0x113e1fdf */
  if (!C.zf) goto L_113e1fdf;
  /* 113e1fdd jmp 0x113e203d */
  goto L_113e203d;
L_113e1fdf:;
  /* 113e1fdf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113e1fe1 push 0x113fb8b4 */
  push32((uint32_t)(0x113fb8b4u));
  /* 113e1fe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e1fe8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e1feb push ecx */
  push32((uint32_t)(ECX));
  /* 113e1fec call 0x113d3d30 */
  push32(0x113e1ff1u); f_113d3d30();
  /* 113e1ff1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1ff4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 113e1ffa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113e1ffc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 113e2002 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2005 jne 0x113e2009 */
  if (!C.zf) goto L_113e2009;
  /* 113e2007 jmp 0x113e203d */
  goto L_113e203d;
L_113e2009:;
  /* 113e2009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e200c push ecx */
  push32((uint32_t)(ECX));
  /* 113e200d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2010 push edx */
  push32((uint32_t)(EDX));
  /* 113e2011 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 113e2017 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e2019 push ecx */
  push32((uint32_t)(ECX));
  /* 113e201a call 0x113d7550 */
  push32(0x113e201fu); f_113d7550();
  /* 113e201f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2022 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2026 je 0x113e2036 */
  if (C.zf) goto L_113e2036;
  /* 113e2028 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e202a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e202d push edx */
  push32((uint32_t)(EDX));
  /* 113e202e call 0x113d47c0 */
  push32(0x113e2033u); f_113d47c0();
  /* 113e2033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e2036:;
  /* 113e2036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2038 jmp 0x113e2176 */
  goto L_113e2176;
L_113e203d:;
  /* 113e203d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2041 je 0x113e2051 */
  if (C.zf) goto L_113e2051;
  /* 113e2043 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e2045 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2048 push eax */
  push32((uint32_t)(EAX));
  /* 113e2049 call 0x113d47c0 */
  push32(0x113e204eu); f_113d47c0();
  /* 113e204e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e2051:;
  /* 113e2051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e2054 jmp 0x113e2176 */
  goto L_113e2176;
L_113e2059:;
  /* 113e2059 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e205d jne 0x113e2173 */
  if (!C.zf) goto L_113e2173;
  /* 113e2063 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 113e206d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e2070 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 113e2076 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2078 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113e207e push edx */
  push32((uint32_t)(EDX));
  /* 113e207f push 0x113ff7a8 */
  push32((uint32_t)(0x113ff7a8u));
  /* 113e2084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2087 push eax */
  push32((uint32_t)(EAX));
  /* 113e2088 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e208b push ecx */
  push32((uint32_t)(ECX));
  /* 113e208c call 0x113e3170 */
  push32(0x113e2091u); f_113e3170();
  /* 113e2091 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e2096 jne 0x113e20a0 */
  if (!C.zf) goto L_113e20a0;
  /* 113e2098 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e209b jmp 0x113e2176 */
  goto L_113e2176;
L_113e20a0:;
  /* 113e20a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113e20a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113e20a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 113e20b3 jmp 0x113e20c4 */
  goto L_113e20c4;
L_113e20b5:;
  /* 113e20b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113e20bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e20be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_113e20c4:;
  /* 113e20c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e20cb jge 0x113e216f */
  if ((C.sf==C.of)) goto L_113e216f;
  /* 113e20d1 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e20d8 jle 0x113e210b */
  if ((C.zf||C.sf!=C.of)) goto L_113e210b;
  /* 113e20da push 4 */
  push32((uint32_t)(0x4u));
  /* 113e20dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113e20e2 mov dl, byte ptr [ecx*2 + 0x113ff7a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x113ff7a8)));
  /* 113e20e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 113e20ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113e20f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e20fa push eax */
  push32((uint32_t)(EAX));
  /* 113e20fb call 0x113d9d40 */
  push32(0x113e2100u); f_113d9d40();
  /* 113e2100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2103 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 113e2109 jmp 0x113e213e */
  goto L_113e213e;
L_113e210b:;
  /* 113e210b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113e2111 mov dl, byte ptr [ecx*2 + 0x113ff7a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x113ff7a8)));
  /* 113e2118 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 113e211e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113e2124 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e2129 mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e212f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2131 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e2135 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113e2138 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_113e213e:;
  /* 113e213e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2145 je 0x113e2168 */
  if (C.zf) goto L_113e2168;
  /* 113e2147 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113e214d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e2150 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2153 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 113e215a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113e215e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113e2164 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113e2166 jmp 0x113e216a */
  goto L_113e216a;
L_113e2168:;
  /* 113e2168 jmp 0x113e216f */
  goto L_113e216f;
L_113e216a:;
  /* 113e216a jmp 0x113e20b5 */
  goto L_113e20b5;
L_113e216f:;
  /* 113e216f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2171 jmp 0x113e2176 */
  goto L_113e2176;
L_113e2173:;
  /* 113e2173 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113e2176:;
  /* 113e2176 mov esp, ebp */
  ESP = (EBP);
  /* 113e2178 pop ebp */
  EBP = (pop32());
  /* 113e2179 ret  */
  ESPCHK(0x113e1ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012180 @ 0x113e2180 (10 bytes, 5 insns) */
void f_113e2180(void) {
  FTRACE(0x113e2180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2180 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2181 mov ebp, esp */
  EBP = (ESP);
  /* 113e2183 mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113e2188 pop ebp */
  EBP = (pop32());
  /* 113e2189 ret  */
  ESPCHK(0x113e2180u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x113e2190 (575 bytes, 196 insns) */
void f_113e2190(void) {
  FTRACE(0x113e2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2190 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2191 mov ebp, esp */
  EBP = (ESP);
  /* 113e2193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e2195 push 0x113fb8c0 */
  push32((uint32_t)(0x113fb8c0u));
  /* 113e219a push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113e219f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113e21a5 push eax */
  push32((uint32_t)(EAX));
  /* 113e21a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113e21ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e21b0 push ebx */
  push32((uint32_t)(EBX));
  /* 113e21b1 push esi */
  push32((uint32_t)(ESI));
  /* 113e21b2 push edi */
  push32((uint32_t)(EDI));
  /* 113e21b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e21b6 cmp dword ptr [0x113ff7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e21bd jne 0x113e220e */
  if (!C.zf) goto L_113e220e;
  /* 113e21bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 113e21c2 push eax */
  push32((uint32_t)(EAX));
  /* 113e21c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e21c5 push 0x113faff4 */
  push32((uint32_t)(0x113faff4u));
  /* 113e21ca push 1 */
  push32((uint32_t)(0x1u));
  /* 113e21cc call dword ptr [0x114022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f4))), 0x113e21d2u);
  /* 113e21d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e21d4 je 0x113e21e2 */
  if (C.zf) goto L_113e21e2;
  /* 113e21d6 mov dword ptr [0x113ff7b4], 1 */
  w32((uint32_t)(0x113ff7b4), (0x1u));
  /* 113e21e0 jmp 0x113e220e */
  goto L_113e220e;
L_113e21e2:;
  /* 113e21e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 113e21e5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e21e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e21e8 push 0x113faff0 */
  push32((uint32_t)(0x113faff0u));
  /* 113e21ed push 1 */
  push32((uint32_t)(0x1u));
  /* 113e21ef push 0 */
  push32((uint32_t)(0x0u));
  /* 113e21f1 call dword ptr [0x11402304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402304))), 0x113e21f7u);
  /* 113e21f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e21f9 je 0x113e2207 */
  if (C.zf) goto L_113e2207;
  /* 113e21fb mov dword ptr [0x113ff7b4], 2 */
  w32((uint32_t)(0x113ff7b4), (0x2u));
  /* 113e2205 jmp 0x113e220e */
  goto L_113e220e;
L_113e2207:;
  /* 113e2207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2209 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e220e:;
  /* 113e220e cmp dword ptr [0x113ff7b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff7b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2215 jne 0x113e2232 */
  if (!C.zf) goto L_113e2232;
  /* 113e2217 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e221a push edx */
  push32((uint32_t)(EDX));
  /* 113e221b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e221e push eax */
  push32((uint32_t)(EAX));
  /* 113e221f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e2222 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2226 push edx */
  push32((uint32_t)(EDX));
  /* 113e2227 call dword ptr [0x114022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f4))), 0x113e222du);
  /* 113e222d jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e2232:;
  /* 113e2232 cmp dword ptr [0x113ff7b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff7b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2239 jne 0x113e23e7 */
  if (!C.zf) goto L_113e23e7;
  /* 113e223f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2243 jne 0x113e224d */
  if (!C.zf) goto L_113e224d;
  /* 113e2245 mov eax, dword ptr [0x113ff728] */
  EAX = (r32((uint32_t)(0x113ff728)));
  /* 113e224a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_113e224d:;
  /* 113e224d push 0 */
  push32((uint32_t)(0x0u));
  /* 113e224f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2251 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2253 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2255 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2258 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2259 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e225c push edx */
  push32((uint32_t)(EDX));
  /* 113e225d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e2262 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e2265 push eax */
  push32((uint32_t)(EAX));
  /* 113e2266 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e226cu);
  /* 113e226c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113e226f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2273 jne 0x113e227c */
  if (!C.zf) goto L_113e227c;
  /* 113e2275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2277 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e227c:;
  /* 113e227c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e2283 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e2286 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2289 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e228b call 0x113d6ed0 */
  push32(0x113e2290u); f_113d6ed0();
  /* 113e2290 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 113e2293 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e2296 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113e2299 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113e229c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e229f push edx */
  push32((uint32_t)(EDX));
  /* 113e22a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e22a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113e22a5 push eax */
  push32((uint32_t)(EAX));
  /* 113e22a6 call 0x113d7aa0 */
  push32(0x113e22abu); f_113d7aa0();
  /* 113e22ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e22ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e22b5 jmp 0x113e22ce */
  goto L_113e22ce;
  /* 113e22b7 mov eax, 1 */
  EAX = (0x1u);
  /* 113e22bc ret  */
  ESPCHK(0x113e2190u, _esp0);
  ESP += 4; return;
  /* 113e22bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e22c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 113e22c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e22ce:;
  /* 113e22ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e22d2 jne 0x113e22db */
  if (!C.zf) goto L_113e22db;
  /* 113e22d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e22d6 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e22db:;
  /* 113e22db push 0 */
  push32((uint32_t)(0x0u));
  /* 113e22dd push 0 */
  push32((uint32_t)(0x0u));
  /* 113e22df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e22e2 push ecx */
  push32((uint32_t)(ECX));
  /* 113e22e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113e22e6 push edx */
  push32((uint32_t)(EDX));
  /* 113e22e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e22ea push eax */
  push32((uint32_t)(EAX));
  /* 113e22eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e22ee push ecx */
  push32((uint32_t)(ECX));
  /* 113e22ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e22f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e22f7 push edx */
  push32((uint32_t)(EDX));
  /* 113e22f8 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e22feu);
  /* 113e22fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e2300 jne 0x113e2309 */
  if (!C.zf) goto L_113e2309;
  /* 113e2302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2304 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e2309:;
  /* 113e2309 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113e2310 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e2313 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 113e2317 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e231a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e231c call 0x113d6ed0 */
  push32(0x113e2321u); f_113d6ed0();
  /* 113e2321 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 113e2324 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e2327 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 113e232a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113e232d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e2334 jmp 0x113e234d */
  goto L_113e234d;
  /* 113e2336 mov eax, 1 */
  EAX = (0x1u);
  /* 113e233b ret  */
  ESPCHK(0x113e2190u, _esp0);
  ESP += 4; return;
  /* 113e233c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e233f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113e2346 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e234d:;
  /* 113e234d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2351 jne 0x113e235a */
  if (!C.zf) goto L_113e235a;
  /* 113e2353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2355 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e235a:;
  /* 113e235a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e235e jne 0x113e2369 */
  if (!C.zf) goto L_113e2369;
  /* 113e2360 mov edx, dword ptr [0x113ff718] */
  EDX = (r32((uint32_t)(0x113ff718)));
  /* 113e2366 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_113e2369:;
  /* 113e2369 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e236c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e236f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 113e2375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2378 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e237b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 113e2382 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e2385 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2386 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e2389 push edx */
  push32((uint32_t)(EDX));
  /* 113e238a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113e238d push eax */
  push32((uint32_t)(EAX));
  /* 113e238e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2391 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2392 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e2395 push edx */
  push32((uint32_t)(EDX));
  /* 113e2396 call dword ptr [0x11402304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402304))), 0x113e239cu);
  /* 113e239c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113e239f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e23a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e23a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e23a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 113e23ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e23b2 je 0x113e23c8 */
  if (C.zf) goto L_113e23c8;
  /* 113e23b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e23b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e23ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e23bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e23c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e23c6 je 0x113e23cc */
  if (C.zf) goto L_113e23cc;
L_113e23c8:;
  /* 113e23c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e23ca jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e23cc:;
  /* 113e23cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e23cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113e23d1 push eax */
  push32((uint32_t)(EAX));
  /* 113e23d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e23d5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e23d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e23d9 push edx */
  push32((uint32_t)(EDX));
  /* 113e23da call 0x113dbc20 */
  push32(0x113e23dfu); f_113dbc20();
  /* 113e23df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e23e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e23e5 jmp 0x113e23e9 */
  goto L_113e23e9;
L_113e23e7:;
  /* 113e23e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e23e9:;
  /* 113e23e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 113e23ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e23ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113e23f6 pop edi */
  EDI = (pop32());
  /* 113e23f7 pop esi */
  ESI = (pop32());
  /* 113e23f8 pop ebx */
  EBX = (pop32());
  /* 113e23f9 mov esp, ebp */
  ESP = (EBP);
  /* 113e23fb pop ebp */
  EBP = (pop32());
  /* 113e23fc ret  */
  ESPCHK(0x113e2190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x113e2400 (208 bytes, 85 insns) */
void f_113e2400(void) {
  FTRACE(0x113e2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2400 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2401 mov ebp, esp */
  EBP = (ESP);
  /* 113e2403 push edi */
  push32((uint32_t)(EDI));
  /* 113e2404 push esi */
  push32((uint32_t)(ESI));
  /* 113e2405 push ebx */
  push32((uint32_t)(EBX));
  /* 113e2406 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113e2409 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113e240c lea eax, [0x113ff710] */
  EAX = ((uint32_t)(0x113ff710));
  /* 113e2412 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2416 jne 0x113e2453 */
  if (!C.zf) goto L_113e2453;
  /* 113e2418 mov al, 0xff */
  AL = (0xffu);
  /* 113e241a mov edi, edi */
  EDI = (EDI);
L_113e241c:;
  /* 113e241c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113e241e je 0x113e244e */
  if (C.zf) goto L_113e244e;
  /* 113e2420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113e2422 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113e2423 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 113e2425 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113e2426 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2428 je 0x113e241c */
  if (C.zf) goto L_113e241c;
  /* 113e242a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113e242c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e242e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113e2430 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113e2433 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e2435 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e2437 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 113e2439 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113e243b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e243d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113e243f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113e2442 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e2444 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e2446 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2448 je 0x113e241c */
  if (C.zf) goto L_113e241c;
  /* 113e244a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113e244c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_113e244e:;
  /* 113e244e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 113e2451 jmp 0x113e24cb */
  goto L_113e24cb;
L_113e2453:;
  /* 113e2453 lock inc dword ptr [0x113ff8a4] */
  x86_unimpl("lock inc @ 0x113e2453");
  /* 113e245a cmp dword ptr [0x113ff894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2461 jg 0x113e2467 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e2467;
  /* 113e2463 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2465 jmp 0x113e247c */
  goto L_113e247c;
L_113e2467:;
  /* 113e2467 lock dec dword ptr [0x113ff8a4] */
  x86_unimpl("lock dec @ 0x113e2467");
  /* 113e246e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e2470 call 0x113d7730 */
  push32(0x113e2475u); f_113d7730();
  /* 113e2475 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_113e247c:;
  /* 113e247c mov eax, 0xff */
  EAX = (0xffu);
  /* 113e2481 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113e2483 nop  */
  /* nop */
L_113e2484:;
  /* 113e2484 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113e2486 je 0x113e24af */
  if (C.zf) goto L_113e24af;
  /* 113e2488 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113e248a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113e248b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 113e248d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113e248e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2490 je 0x113e2484 */
  if (C.zf) goto L_113e2484;
  /* 113e2492 push eax */
  push32((uint32_t)(EAX));
  /* 113e2493 push ebx */
  push32((uint32_t)(EBX));
  /* 113e2494 call 0x113e3570 */
  push32(0x113e2499u); f_113e3570();
  /* 113e2499 mov ebx, eax */
  EBX = (EAX);
  /* 113e249b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e249e call 0x113e3570 */
  push32(0x113e24a3u); f_113e3570();
  /* 113e24a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e24a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e24a8 je 0x113e2484 */
  if (C.zf) goto L_113e2484;
  /* 113e24aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e24ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113e24af:;
  /* 113e24af mov ebx, eax */
  EBX = (EAX);
  /* 113e24b1 pop eax */
  EAX = (pop32());
  /* 113e24b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e24b4 jne 0x113e24bf */
  if (!C.zf) goto L_113e24bf;
  /* 113e24b6 lock dec dword ptr [0x113ff8a4] */
  x86_unimpl("lock dec @ 0x113e24b6");
  /* 113e24bd jmp 0x113e24c9 */
  goto L_113e24c9;
L_113e24bf:;
  /* 113e24bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e24c1 call 0x113d77d0 */
  push32(0x113e24c6u); f_113d77d0();
  /* 113e24c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e24c9:;
  /* 113e24c9 mov eax, ebx */
  EAX = (EBX);
L_113e24cb:;
  /* 113e24cb pop ebx */
  EBX = (pop32());
  /* 113e24cc pop esi */
  ESI = (pop32());
  /* 113e24cd pop edi */
  EDI = (pop32());
  /* 113e24ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113e24cf ret  */
  ESPCHK(0x113e2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x113e24d0 (257 bytes, 103 insns) */
void f_113e24d0(void) {
  FTRACE(0x113e24d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e24d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e24d1 mov ebp, esp */
  EBP = (ESP);
  /* 113e24d3 push edi */
  push32((uint32_t)(EDI));
  /* 113e24d4 push esi */
  push32((uint32_t)(ESI));
  /* 113e24d5 push ebx */
  push32((uint32_t)(EBX));
  /* 113e24d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e24d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e24db je 0x113e25ca */
  if (C.zf) goto L_113e25ca;
  /* 113e24e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 113e24e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 113e24e7 lea eax, [0x113ff710] */
  EAX = ((uint32_t)(0x113ff710));
  /* 113e24ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e24f1 jne 0x113e2541 */
  if (!C.zf) goto L_113e2541;
  /* 113e24f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 113e24f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 113e24f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 113e24f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113e24fc:;
  /* 113e24fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 113e24fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113e2500 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 113e2502 je 0x113e2525 */
  if (C.zf) goto L_113e2525;
  /* 113e2504 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113e2506 je 0x113e2525 */
  if (C.zf) goto L_113e2525;
  /* 113e2508 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113e2509 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113e250a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e250c jb 0x113e2514 */
  if (C.cf) goto L_113e2514;
  /* 113e250e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2510 ja 0x113e2514 */
  if ((!C.cf&&!C.zf)) goto L_113e2514;
  /* 113e2512 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_113e2514:;
  /* 113e2514 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2516 jb 0x113e251e */
  if (C.cf) goto L_113e251e;
  /* 113e2518 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e251a ja 0x113e251e */
  if ((!C.cf&&!C.zf)) goto L_113e251e;
  /* 113e251c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_113e251e:;
  /* 113e251e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2520 jne 0x113e252f */
  if (!C.zf) goto L_113e252f;
  /* 113e2522 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113e2523 jne 0x113e24fc */
  if (!C.zf) goto L_113e24fc;
L_113e2525:;
  /* 113e2525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2527 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e2529 je 0x113e25ca */
  if (C.zf) goto L_113e25ca;
L_113e252f:;
  /* 113e252f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 113e2534 jb 0x113e25ca */
  if (C.cf) goto L_113e25ca;
  /* 113e253a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e253c jmp 0x113e25ca */
  goto L_113e25ca;
L_113e2541:;
  /* 113e2541 lock inc dword ptr [0x113ff8a4] */
  x86_unimpl("lock inc @ 0x113e2541");
  /* 113e2548 cmp dword ptr [0x113ff894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e254f jg 0x113e2555 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e2555;
  /* 113e2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2553 jmp 0x113e256e */
  goto L_113e256e;
L_113e2555:;
  /* 113e2555 lock dec dword ptr [0x113ff8a4] */
  x86_unimpl("lock dec @ 0x113e2555");
  /* 113e255c mov ebx, ecx */
  EBX = (ECX);
  /* 113e255e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e2560 call 0x113d7730 */
  push32(0x113e2565u); f_113d7730();
  /* 113e2565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 113e256c mov ecx, ebx */
  ECX = (EBX);
L_113e256e:;
  /* 113e256e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2570 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113e2572 mov edi, edi */
  EDI = (EDI);
L_113e2574:;
  /* 113e2574 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113e2576 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2578 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 113e257a je 0x113e259f */
  if (C.zf) goto L_113e259f;
  /* 113e257c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113e257e je 0x113e259f */
  if (C.zf) goto L_113e259f;
  /* 113e2580 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113e2581 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113e2582 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2583 push eax */
  push32((uint32_t)(EAX));
  /* 113e2584 push ebx */
  push32((uint32_t)(EBX));
  /* 113e2585 call 0x113e3570 */
  push32(0x113e258au); f_113e3570();
  /* 113e258a mov ebx, eax */
  EBX = (EAX);
  /* 113e258c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e258f call 0x113e3570 */
  push32(0x113e2594u); f_113e3570();
  /* 113e2594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2597 pop ecx */
  ECX = (pop32());
  /* 113e2598 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e259a jne 0x113e25a5 */
  if (!C.zf) goto L_113e25a5;
  /* 113e259c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113e259d jne 0x113e2574 */
  if (!C.zf) goto L_113e2574;
L_113e259f:;
  /* 113e259f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e25a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e25a3 je 0x113e25ae */
  if (C.zf) goto L_113e25ae;
L_113e25a5:;
  /* 113e25a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 113e25aa jb 0x113e25ae */
  if (C.cf) goto L_113e25ae;
  /* 113e25ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_113e25ae:;
  /* 113e25ae pop eax */
  EAX = (pop32());
  /* 113e25af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e25b1 jne 0x113e25bc */
  if (!C.zf) goto L_113e25bc;
  /* 113e25b3 lock dec dword ptr [0x113ff8a4] */
  x86_unimpl("lock dec @ 0x113e25b3");
  /* 113e25ba jmp 0x113e25ca */
  goto L_113e25ca;
L_113e25bc:;
  /* 113e25bc mov ebx, ecx */
  EBX = (ECX);
  /* 113e25be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e25c0 call 0x113d77d0 */
  push32(0x113e25c5u); f_113d77d0();
  /* 113e25c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e25c8 mov ecx, ebx */
  ECX = (EBX);
L_113e25ca:;
  /* 113e25ca mov eax, ecx */
  EAX = (ECX);
  /* 113e25cc pop ebx */
  EBX = (pop32());
  /* 113e25cd pop esi */
  ESI = (pop32());
  /* 113e25ce pop edi */
  EDI = (pop32());
  /* 113e25cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113e25d0 ret  */
  ESPCHK(0x113e24d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x113e25e0 (255 bytes, 88 insns) */
void f_113e25e0(void) {
  FTRACE(0x113e25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e25e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e25e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e25e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_113e25e6:;
  /* 113e25e6 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e25ed jle 0x113e2606 */
  if ((C.zf||C.sf!=C.of)) goto L_113e2606;
  /* 113e25ef push 8 */
  push32((uint32_t)(0x8u));
  /* 113e25f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e25f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e25f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e25f8 push ecx */
  push32((uint32_t)(ECX));
  /* 113e25f9 call 0x113d9d40 */
  push32(0x113e25feu); f_113d9d40();
  /* 113e25fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2601 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113e2604 jmp 0x113e261f */
  goto L_113e261f;
L_113e2606:;
  /* 113e2606 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e260b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e260d mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e2613 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2615 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e2619 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 113e261c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e261f:;
  /* 113e261f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2623 je 0x113e2630 */
  if (C.zf) goto L_113e2630;
  /* 113e2625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2628 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e262b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e262e jmp 0x113e25e6 */
  goto L_113e25e6;
L_113e2630:;
  /* 113e2630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2633 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2635 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e2637 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e263a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e263d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2640 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e2643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2646 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e2649 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e264d je 0x113e2655 */
  if (C.zf) goto L_113e2655;
  /* 113e264f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2653 jne 0x113e2668 */
  if (!C.zf) goto L_113e2668;
L_113e2655:;
  /* 113e2655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e265a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e265c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e265f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2665 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113e2668:;
  /* 113e2668 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113e266f:;
  /* 113e266f cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2676 jle 0x113e268b */
  if ((C.zf||C.sf!=C.of)) goto L_113e268b;
  /* 113e2678 push 4 */
  push32((uint32_t)(0x4u));
  /* 113e267a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e267d push edx */
  push32((uint32_t)(EDX));
  /* 113e267e call 0x113d9d40 */
  push32(0x113e2683u); f_113d9d40();
  /* 113e2683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2686 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e2689 jmp 0x113e26a0 */
  goto L_113e26a0;
L_113e268b:;
  /* 113e268b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e268e mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e2694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2696 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e269a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113e269d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_113e26a0:;
  /* 113e26a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e26a4 je 0x113e26cb */
  if (C.zf) goto L_113e26cb;
  /* 113e26a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e26a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e26ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e26af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 113e26b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e26b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e26b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e26bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e26bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e26c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e26c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e26c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113e26c9 jmp 0x113e266f */
  goto L_113e266f;
L_113e26cb:;
  /* 113e26cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e26cf jne 0x113e26d8 */
  if (!C.zf) goto L_113e26d8;
  /* 113e26d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e26d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e26d6 jmp 0x113e26db */
  goto L_113e26db;
L_113e26d8:;
  /* 113e26d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113e26db:;
  /* 113e26db mov esp, ebp */
  ESP = (EBP);
  /* 113e26dd pop ebp */
  EBP = (pop32());
  /* 113e26de ret  */
  ESPCHK(0x113e25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126e0 @ 0x113e26e0 (17 bytes, 8 insns) */
void f_113e26e0(void) {
  FTRACE(0x113e26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e26e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e26e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e26e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e26e6 push eax */
  push32((uint32_t)(EAX));
  /* 113e26e7 call 0x113e25e0 */
  push32(0x113e26ecu); f_113e25e0();
  /* 113e26ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e26ef pop ebp */
  EBP = (pop32());
  /* 113e26f0 ret  */
  ESPCHK(0x113e26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x113e2700 (297 bytes, 106 insns) */
void f_113e2700(void) {
  FTRACE(0x113e2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2700 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2701 mov ebp, esp */
  EBP = (ESP);
  /* 113e2703 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2706 push esi */
  push32((uint32_t)(ESI));
L_113e2707:;
  /* 113e2707 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e270e jle 0x113e2727 */
  if ((C.zf||C.sf!=C.of)) goto L_113e2727;
  /* 113e2710 push 8 */
  push32((uint32_t)(0x8u));
  /* 113e2712 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2715 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2717 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e2719 push ecx */
  push32((uint32_t)(ECX));
  /* 113e271a call 0x113d9d40 */
  push32(0x113e271fu); f_113d9d40();
  /* 113e271f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2722 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e2725 jmp 0x113e2740 */
  goto L_113e2740;
L_113e2727:;
  /* 113e2727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e272a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e272c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e272e mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e2734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2736 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e273a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 113e273d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_113e2740:;
  /* 113e2740 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2744 je 0x113e2751 */
  if (C.zf) goto L_113e2751;
  /* 113e2746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e274c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e274f jmp 0x113e2707 */
  goto L_113e2707;
L_113e2751:;
  /* 113e2751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2756 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e2758 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e275b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e275e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2761 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e2764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2767 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113e276a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e276e je 0x113e2776 */
  if (C.zf) goto L_113e2776;
  /* 113e2770 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2774 jne 0x113e2789 */
  if (!C.zf) goto L_113e2789;
L_113e2776:;
  /* 113e2776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e277b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e277d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e2780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2783 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2786 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113e2789:;
  /* 113e2789 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113e2790 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113e2797:;
  /* 113e2797 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e279e jle 0x113e27b3 */
  if ((C.zf||C.sf!=C.of)) goto L_113e27b3;
  /* 113e27a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 113e27a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e27a5 push edx */
  push32((uint32_t)(EDX));
  /* 113e27a6 call 0x113d9d40 */
  push32(0x113e27abu); f_113d9d40();
  /* 113e27ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e27ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113e27b1 jmp 0x113e27c8 */
  goto L_113e27c8;
L_113e27b3:;
  /* 113e27b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e27b6 mov ecx, dword ptr [0x113fdc98] */
  ECX = (r32((uint32_t)(0x113fdc98)));
  /* 113e27bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e27be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113e27c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113e27c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_113e27c8:;
  /* 113e27c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e27cc je 0x113e2809 */
  if (C.zf) goto L_113e2809;
  /* 113e27ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113e27d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 113e27d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e27d5 push eax */
  push32((uint32_t)(EAX));
  /* 113e27d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e27d9 push ecx */
  push32((uint32_t)(ECX));
  /* 113e27da call 0x113e36a0 */
  push32(0x113e27dfu); f_113e36a0();
  /* 113e27df mov ecx, eax */
  ECX = (EAX);
  /* 113e27e1 mov esi, edx */
  ESI = (EDX);
  /* 113e27e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e27e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e27e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e27ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e27ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113e27ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e27f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 113e27f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e27f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e27f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e27fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e27fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2801 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2804 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113e2807 jmp 0x113e2797 */
  goto L_113e2797;
L_113e2809:;
  /* 113e2809 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e280d jne 0x113e281e */
  if (!C.zf) goto L_113e281e;
  /* 113e280f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2812 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e2814 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e2817 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e281a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e281c jmp 0x113e2824 */
  goto L_113e2824;
L_113e281e:;
  /* 113e281e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2821 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_113e2824:;
  /* 113e2824 pop esi */
  ESI = (pop32());
  /* 113e2825 mov esp, ebp */
  ESP = (EBP);
  /* 113e2827 pop ebp */
  EBP = (pop32());
  /* 113e2828 ret  */
  ESPCHK(0x113e2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x113e2830 (61 bytes, 18 insns) */
void f_113e2830(void) {
  FTRACE(0x113e2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2830 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2831 mov ebp, esp */
  EBP = (ESP);
  /* 113e2833 cmp dword ptr [0x113ff870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e283a jne 0x113e286b */
  if (!C.zf) goto L_113e286b;
  /* 113e283c push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e283e call 0x113d7730 */
  push32(0x113e2843u); f_113d7730();
  /* 113e2843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2846 cmp dword ptr [0x113ff870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e284d jne 0x113e2861 */
  if (!C.zf) goto L_113e2861;
  /* 113e284f call 0x113e2890 */
  push32(0x113e2854u); f_113e2890();
  /* 113e2854 mov eax, dword ptr [0x113ff870] */
  EAX = (r32((uint32_t)(0x113ff870)));
  /* 113e2859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e285c mov dword ptr [0x113ff870], eax */
  w32((uint32_t)(0x113ff870), (EAX));
L_113e2861:;
  /* 113e2861 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e2863 call 0x113d77d0 */
  push32(0x113e2868u); f_113d77d0();
  /* 113e2868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e286b:;
  /* 113e286b pop ebp */
  EBP = (pop32());
  /* 113e286c ret  */
  ESPCHK(0x113e2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012870 @ 0x113e2870 (30 bytes, 11 insns) */
void f_113e2870(void) {
  FTRACE(0x113e2870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2870 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2871 mov ebp, esp */
  EBP = (ESP);
  /* 113e2873 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e2875 call 0x113d7730 */
  push32(0x113e287au); f_113d7730();
  /* 113e287a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e287d call 0x113e2890 */
  push32(0x113e2882u); f_113e2890();
  /* 113e2882 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e2884 call 0x113d77d0 */
  push32(0x113e2889u); f_113d77d0();
  /* 113e2889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e288c pop ebp */
  EBP = (pop32());
  /* 113e288d ret  */
  ESPCHK(0x113e2870u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x113e2890 (939 bytes, 266 insns) */
void f_113e2890(void) {
  FTRACE(0x113e2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2890 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2891 mov ebp, esp */
  EBP = (ESP);
  /* 113e2893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e289d push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e289f call 0x113d7730 */
  push32(0x113e28a4u); f_113d7730();
  /* 113e28a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e28a7 mov dword ptr [0x113ff7b8], 0 */
  w32((uint32_t)(0x113ff7b8), (0x0u));
  /* 113e28b1 mov dword ptr [0x113fee38], 0xffffffff */
  w32((uint32_t)(0x113fee38), (0xffffffffu));
  /* 113e28bb mov eax, dword ptr [0x113fee38] */
  EAX = (r32((uint32_t)(0x113fee38)));
  /* 113e28c0 mov dword ptr [0x113fee28], eax */
  w32((uint32_t)(0x113fee28), (EAX));
  /* 113e28c5 push 0x113fb920 */
  push32((uint32_t)(0x113fb920u));
  /* 113e28ca call 0x113e3710 */
  push32(0x113e28cfu); f_113e3710();
  /* 113e28cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e28d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e28d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e28d9 jne 0x113e2a13 */
  if (!C.zf) goto L_113e2a13;
  /* 113e28df push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e28e1 call 0x113d77d0 */
  push32(0x113e28e6u); f_113d77d0();
  /* 113e28e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e28e9 push 0x113ff7c0 */
  push32((uint32_t)(0x113ff7c0u));
  /* 113e28ee call dword ptr [0x114022b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b8))), 0x113e28f4u);
  /* 113e28f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e28f7 je 0x113e2a0e */
  if (C.zf) goto L_113e2a0e;
  /* 113e28fd mov dword ptr [0x113ff7b8], 1 */
  w32((uint32_t)(0x113ff7b8), (0x1u));
  /* 113e2907 mov ecx, dword ptr [0x113ff7c0] */
  ECX = (r32((uint32_t)(0x113ff7c0)));
  /* 113e290d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2910 mov dword ptr [0x113fed90], ecx */
  w32((uint32_t)(0x113fed90), (ECX));
  /* 113e2916 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2918 mov dx, word ptr [0x113ff806] */
  DX = (r16((uint32_t)(0x113ff806)));
  /* 113e291f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e2921 je 0x113e2939 */
  if (C.zf) goto L_113e2939;
  /* 113e2923 mov eax, dword ptr [0x113ff814] */
  EAX = (r32((uint32_t)(0x113ff814)));
  /* 113e2928 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e292b mov ecx, dword ptr [0x113fed90] */
  ECX = (r32((uint32_t)(0x113fed90)));
  /* 113e2931 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2933 mov dword ptr [0x113fed90], ecx */
  w32((uint32_t)(0x113fed90), (ECX));
L_113e2939:;
  /* 113e2939 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e293b mov dx, word ptr [0x113ff85a] */
  DX = (r16((uint32_t)(0x113ff85a)));
  /* 113e2942 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e2944 je 0x113e296e */
  if (C.zf) goto L_113e296e;
  /* 113e2946 cmp dword ptr [0x113ff868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e294d je 0x113e296e */
  if (C.zf) goto L_113e296e;
  /* 113e294f mov dword ptr [0x113fed94], 1 */
  w32((uint32_t)(0x113fed94), (0x1u));
  /* 113e2959 mov eax, dword ptr [0x113ff868] */
  EAX = (r32((uint32_t)(0x113ff868)));
  /* 113e295e sub eax, dword ptr [0x113ff814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff814))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2964 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2967 mov dword ptr [0x113fed98], eax */
  w32((uint32_t)(0x113fed98), (EAX));
  /* 113e296c jmp 0x113e2982 */
  goto L_113e2982;
L_113e296e:;
  /* 113e296e mov dword ptr [0x113fed94], 0 */
  w32((uint32_t)(0x113fed94), (0x0u));
  /* 113e2978 mov dword ptr [0x113fed98], 0 */
  w32((uint32_t)(0x113fed98), (0x0u));
L_113e2982:;
  /* 113e2982 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 113e2985 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2986 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2988 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 113e298a mov edx, dword ptr [0x113fee1c] */
  EDX = (r32((uint32_t)(0x113fee1c)));
  /* 113e2990 push edx */
  push32((uint32_t)(EDX));
  /* 113e2991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e2993 push 0x113ff7c4 */
  push32((uint32_t)(0x113ff7c4u));
  /* 113e2998 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e299d mov eax, dword ptr [0x113ff728] */
  EAX = (r32((uint32_t)(0x113ff728)));
  /* 113e29a2 push eax */
  push32((uint32_t)(EAX));
  /* 113e29a3 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e29a9u);
  /* 113e29a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e29ab je 0x113e29bf */
  if (C.zf) goto L_113e29bf;
  /* 113e29ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e29b1 jne 0x113e29bf */
  if (!C.zf) goto L_113e29bf;
  /* 113e29b3 mov ecx, dword ptr [0x113fee1c] */
  ECX = (r32((uint32_t)(0x113fee1c)));
  /* 113e29b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 113e29bd jmp 0x113e29c8 */
  goto L_113e29c8;
L_113e29bf:;
  /* 113e29bf mov edx, dword ptr [0x113fee1c] */
  EDX = (r32((uint32_t)(0x113fee1c)));
  /* 113e29c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_113e29c8:;
  /* 113e29c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113e29cb push eax */
  push32((uint32_t)(EAX));
  /* 113e29cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113e29ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 113e29d0 mov ecx, dword ptr [0x113fee20] */
  ECX = (r32((uint32_t)(0x113fee20)));
  /* 113e29d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113e29d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e29d9 push 0x113ff818 */
  push32((uint32_t)(0x113ff818u));
  /* 113e29de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e29e3 mov edx, dword ptr [0x113ff728] */
  EDX = (r32((uint32_t)(0x113ff728)));
  /* 113e29e9 push edx */
  push32((uint32_t)(EDX));
  /* 113e29ea call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e29f0u);
  /* 113e29f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e29f2 je 0x113e2a05 */
  if (C.zf) goto L_113e2a05;
  /* 113e29f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e29f8 jne 0x113e2a05 */
  if (!C.zf) goto L_113e2a05;
  /* 113e29fa mov eax, dword ptr [0x113fee20] */
  EAX = (r32((uint32_t)(0x113fee20)));
  /* 113e29ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 113e2a03 jmp 0x113e2a0e */
  goto L_113e2a0e;
L_113e2a05:;
  /* 113e2a05 mov ecx, dword ptr [0x113fee20] */
  ECX = (r32((uint32_t)(0x113fee20)));
  /* 113e2a0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_113e2a0e:;
  /* 113e2a0e jmp 0x113e2c37 */
  goto L_113e2c37;
L_113e2a13:;
  /* 113e2a13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2a16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e2a1b je 0x113e2a3d */
  if (C.zf) goto L_113e2a3d;
  /* 113e2a1d cmp dword ptr [0x113ff86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2a24 je 0x113e2a4c */
  if (C.zf) goto L_113e2a4c;
  /* 113e2a26 mov ecx, dword ptr [0x113ff86c] */
  ECX = (r32((uint32_t)(0x113ff86c)));
  /* 113e2a2c push ecx */
  push32((uint32_t)(ECX));
  /* 113e2a2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2a30 push edx */
  push32((uint32_t)(EDX));
  /* 113e2a31 call 0x113df9c0 */
  push32(0x113e2a36u); f_113df9c0();
  /* 113e2a36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e2a3b jne 0x113e2a4c */
  if (!C.zf) goto L_113e2a4c;
L_113e2a3d:;
  /* 113e2a3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e2a3f call 0x113d77d0 */
  push32(0x113e2a44u); f_113d77d0();
  /* 113e2a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a47 jmp 0x113e2c37 */
  goto L_113e2c37;
L_113e2a4c:;
  /* 113e2a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 113e2a4e mov eax, dword ptr [0x113ff86c] */
  EAX = (r32((uint32_t)(0x113ff86c)));
  /* 113e2a53 push eax */
  push32((uint32_t)(EAX));
  /* 113e2a54 call 0x113d47c0 */
  push32(0x113e2a59u); f_113d47c0();
  /* 113e2a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 113e2a61 push 0x113fb918 */
  push32((uint32_t)(0x113fb918u));
  /* 113e2a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e2a68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2a6b push ecx */
  push32((uint32_t)(ECX));
  /* 113e2a6c call 0x113d6b60 */
  push32(0x113e2a71u); f_113d6b60();
  /* 113e2a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a77 push eax */
  push32((uint32_t)(EAX));
  /* 113e2a78 call 0x113d3d30 */
  push32(0x113e2a7du); f_113d3d30();
  /* 113e2a7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a80 mov dword ptr [0x113ff86c], eax */
  w32((uint32_t)(0x113ff86c), (EAX));
  /* 113e2a85 cmp dword ptr [0x113ff86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2a8c jne 0x113e2a9d */
  if (!C.zf) goto L_113e2a9d;
  /* 113e2a8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e2a90 call 0x113d77d0 */
  push32(0x113e2a95u); f_113d77d0();
  /* 113e2a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2a98 jmp 0x113e2c37 */
  goto L_113e2c37;
L_113e2a9d:;
  /* 113e2a9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2aa0 push edx */
  push32((uint32_t)(EDX));
  /* 113e2aa1 mov eax, dword ptr [0x113ff86c] */
  EAX = (r32((uint32_t)(0x113ff86c)));
  /* 113e2aa6 push eax */
  push32((uint32_t)(EAX));
  /* 113e2aa7 call 0x113d6ce0 */
  push32(0x113e2aacu); f_113d6ce0();
  /* 113e2aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2aaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e2ab1 call 0x113d77d0 */
  push32(0x113e2ab6u); f_113d77d0();
  /* 113e2ab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2ab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113e2abb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2abe push ecx */
  push32((uint32_t)(ECX));
  /* 113e2abf mov edx, dword ptr [0x113fee1c] */
  EDX = (r32((uint32_t)(0x113fee1c)));
  /* 113e2ac5 push edx */
  push32((uint32_t)(EDX));
  /* 113e2ac6 call 0x113d7550 */
  push32(0x113e2acbu); f_113d7550();
  /* 113e2acb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2ace mov eax, dword ptr [0x113fee1c] */
  EAX = (r32((uint32_t)(0x113fee1c)));
  /* 113e2ad3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 113e2ad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2ada add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2add mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e2ae0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2ae3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2ae6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2ae9 jne 0x113e2afd */
  if (!C.zf) goto L_113e2afd;
  /* 113e2aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2aee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2af1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e2af4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2af7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2afa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113e2afd:;
  /* 113e2afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b00 push eax */
  push32((uint32_t)(EAX));
  /* 113e2b01 call 0x113e25e0 */
  push32(0x113e2b06u); f_113e25e0();
  /* 113e2b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2b0f mov dword ptr [0x113fed90], eax */
  w32((uint32_t)(0x113fed90), (EAX));
L_113e2b14:;
  /* 113e2b14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e2b1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b1d je 0x113e2b35 */
  if (C.zf) goto L_113e2b35;
  /* 113e2b1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e2b25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b28 jl 0x113e2b40 */
  if ((C.sf!=C.of)) goto L_113e2b40;
  /* 113e2b2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2b30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b33 jg 0x113e2b40 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e2b40;
L_113e2b35:;
  /* 113e2b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e2b3e jmp 0x113e2b14 */
  goto L_113e2b14;
L_113e2b40:;
  /* 113e2b40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2b46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b49 jne 0x113e2be5 */
  if (!C.zf) goto L_113e2be5;
  /* 113e2b4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e2b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b5b push edx */
  push32((uint32_t)(EDX));
  /* 113e2b5c call 0x113e25e0 */
  push32(0x113e2b61u); f_113e25e0();
  /* 113e2b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2b67 mov ecx, dword ptr [0x113fed90] */
  ECX = (r32((uint32_t)(0x113fed90)));
  /* 113e2b6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b6f mov dword ptr [0x113fed90], ecx */
  w32((uint32_t)(0x113fed90), (ECX));
L_113e2b75:;
  /* 113e2b75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2b7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b7e jl 0x113e2b96 */
  if ((C.sf!=C.of)) goto L_113e2b96;
  /* 113e2b80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e2b86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b89 jg 0x113e2b96 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e2b96;
  /* 113e2b8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2b91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e2b94 jmp 0x113e2b75 */
  goto L_113e2b75;
L_113e2b96:;
  /* 113e2b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2b99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e2b9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2b9f jne 0x113e2be5 */
  if (!C.zf) goto L_113e2be5;
  /* 113e2ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2ba4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2ba7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e2baa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2bad push ecx */
  push32((uint32_t)(ECX));
  /* 113e2bae call 0x113e25e0 */
  push32(0x113e2bb3u); f_113e25e0();
  /* 113e2bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2bb6 mov edx, dword ptr [0x113fed90] */
  EDX = (r32((uint32_t)(0x113fed90)));
  /* 113e2bbc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2bbe mov dword ptr [0x113fed90], edx */
  w32((uint32_t)(0x113fed90), (EDX));
L_113e2bc4:;
  /* 113e2bc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2bc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e2bca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2bcd jl 0x113e2be5 */
  if ((C.sf!=C.of)) goto L_113e2be5;
  /* 113e2bcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2bd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113e2bd5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2bd8 jg 0x113e2be5 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e2be5;
  /* 113e2bda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2bdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2be0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e2be3 jmp 0x113e2bc4 */
  goto L_113e2bc4;
L_113e2be5:;
  /* 113e2be5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2be9 je 0x113e2bf9 */
  if (C.zf) goto L_113e2bf9;
  /* 113e2beb mov edx, dword ptr [0x113fed90] */
  EDX = (r32((uint32_t)(0x113fed90)));
  /* 113e2bf1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e2bf3 mov dword ptr [0x113fed90], edx */
  w32((uint32_t)(0x113fed90), (EDX));
L_113e2bf9:;
  /* 113e2bf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2bfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e2bff mov dword ptr [0x113fed94], ecx */
  w32((uint32_t)(0x113fed94), (ECX));
  /* 113e2c05 cmp dword ptr [0x113fed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113fed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2c0c je 0x113e2c2e */
  if (C.zf) goto L_113e2c2e;
  /* 113e2c0e push 3 */
  push32((uint32_t)(0x3u));
  /* 113e2c10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2c13 push edx */
  push32((uint32_t)(EDX));
  /* 113e2c14 mov eax, dword ptr [0x113fee20] */
  EAX = (r32((uint32_t)(0x113fee20)));
  /* 113e2c19 push eax */
  push32((uint32_t)(EAX));
  /* 113e2c1a call 0x113d7550 */
  push32(0x113e2c1fu); f_113d7550();
  /* 113e2c1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2c22 mov ecx, dword ptr [0x113fee20] */
  ECX = (r32((uint32_t)(0x113fee20)));
  /* 113e2c28 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 113e2c2c jmp 0x113e2c37 */
  goto L_113e2c37;
L_113e2c2e:;
  /* 113e2c2e mov edx, dword ptr [0x113fee20] */
  EDX = (r32((uint32_t)(0x113fee20)));
  /* 113e2c34 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_113e2c37:;
  /* 113e2c37 mov esp, ebp */
  ESP = (EBP);
  /* 113e2c39 pop ebp */
  EBP = (pop32());
  /* 113e2c3a ret  */
  ESPCHK(0x113e2890u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x113e2c40 (46 bytes, 18 insns) */
void f_113e2c40(void) {
  FTRACE(0x113e2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2c41 mov ebp, esp */
  EBP = (ESP);
  /* 113e2c43 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2c44 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e2c46 call 0x113d7730 */
  push32(0x113e2c4bu); f_113d7730();
  /* 113e2c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2c51 push eax */
  push32((uint32_t)(EAX));
  /* 113e2c52 call 0x113e2c70 */
  push32(0x113e2c57u); f_113e2c70();
  /* 113e2c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2c5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e2c5d push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e2c5f call 0x113d77d0 */
  push32(0x113e2c64u); f_113d77d0();
  /* 113e2c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2c6a mov esp, ebp */
  ESP = (EBP);
  /* 113e2c6c pop ebp */
  EBP = (pop32());
  /* 113e2c6d ret  */
  ESPCHK(0x113e2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x113e2c70 (762 bytes, 246 insns) */
void f_113e2c70(void) {
  FTRACE(0x113e2c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2c70 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2c71 mov ebp, esp */
  EBP = (ESP);
  /* 113e2c73 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2c74 cmp dword ptr [0x113fed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113fed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2c7b jne 0x113e2c84 */
  if (!C.zf) goto L_113e2c84;
  /* 113e2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2c7f jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2c84:;
  /* 113e2c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2c87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113e2c8a cmp ecx, dword ptr [0x113fee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2c90 jne 0x113e2ca4 */
  if (!C.zf) goto L_113e2ca4;
  /* 113e2c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2c95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113e2c98 cmp eax, dword ptr [0x113fee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2c9e je 0x113e2e6b */
  if (C.zf) goto L_113e2e6b;
L_113e2ca4:;
  /* 113e2ca4 cmp dword ptr [0x113ff7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2cab je 0x113e2e25 */
  if (C.zf) goto L_113e2e25;
  /* 113e2cb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2cb3 mov cx, word ptr [0x113ff858] */
  CX = (r16((uint32_t)(0x113ff858)));
  /* 113e2cba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e2cbc jne 0x113e2d19 */
  if (!C.zf) goto L_113e2d19;
  /* 113e2cbe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2cc0 mov dx, word ptr [0x113ff866] */
  DX = (r16((uint32_t)(0x113ff866)));
  /* 113e2cc7 push edx */
  push32((uint32_t)(EDX));
  /* 113e2cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2cca mov ax, word ptr [0x113ff864] */
  AX = (r16((uint32_t)(0x113ff864)));
  /* 113e2cd0 push eax */
  push32((uint32_t)(EAX));
  /* 113e2cd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2cd3 mov cx, word ptr [0x113ff862] */
  CX = (r16((uint32_t)(0x113ff862)));
  /* 113e2cda push ecx */
  push32((uint32_t)(ECX));
  /* 113e2cdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2cdd mov dx, word ptr [0x113ff860] */
  DX = (r16((uint32_t)(0x113ff860)));
  /* 113e2ce4 push edx */
  push32((uint32_t)(EDX));
  /* 113e2ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2ce9 mov ax, word ptr [0x113ff85c] */
  AX = (r16((uint32_t)(0x113ff85c)));
  /* 113e2cef push eax */
  push32((uint32_t)(EAX));
  /* 113e2cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2cf2 mov cx, word ptr [0x113ff85e] */
  CX = (r16((uint32_t)(0x113ff85e)));
  /* 113e2cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2cfa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2cfc mov dx, word ptr [0x113ff85a] */
  DX = (r16((uint32_t)(0x113ff85a)));
  /* 113e2d03 push edx */
  push32((uint32_t)(EDX));
  /* 113e2d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2d07 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113e2d0a push ecx */
  push32((uint32_t)(ECX));
  /* 113e2d0b push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2d0f call 0x113e2f70 */
  push32(0x113e2d14u); f_113e2f70();
  /* 113e2d14 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2d17 jmp 0x113e2d6a */
  goto L_113e2d6a;
L_113e2d19:;
  /* 113e2d19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2d1b mov dx, word ptr [0x113ff866] */
  DX = (r16((uint32_t)(0x113ff866)));
  /* 113e2d22 push edx */
  push32((uint32_t)(EDX));
  /* 113e2d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2d25 mov ax, word ptr [0x113ff864] */
  AX = (r16((uint32_t)(0x113ff864)));
  /* 113e2d2b push eax */
  push32((uint32_t)(EAX));
  /* 113e2d2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2d2e mov cx, word ptr [0x113ff862] */
  CX = (r16((uint32_t)(0x113ff862)));
  /* 113e2d35 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2d36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2d38 mov dx, word ptr [0x113ff860] */
  DX = (r16((uint32_t)(0x113ff860)));
  /* 113e2d3f push edx */
  push32((uint32_t)(EDX));
  /* 113e2d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2d42 mov ax, word ptr [0x113ff85e] */
  AX = (r16((uint32_t)(0x113ff85e)));
  /* 113e2d48 push eax */
  push32((uint32_t)(EAX));
  /* 113e2d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2d4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2d4f mov cx, word ptr [0x113ff85a] */
  CX = (r16((uint32_t)(0x113ff85a)));
  /* 113e2d56 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2d57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2d5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113e2d5d push eax */
  push32((uint32_t)(EAX));
  /* 113e2d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2d62 call 0x113e2f70 */
  push32(0x113e2d67u); f_113e2f70();
  /* 113e2d67 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e2d6a:;
  /* 113e2d6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2d6c mov cx, word ptr [0x113ff804] */
  CX = (r16((uint32_t)(0x113ff804)));
  /* 113e2d73 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e2d75 jne 0x113e2dd2 */
  if (!C.zf) goto L_113e2dd2;
  /* 113e2d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2d79 mov dx, word ptr [0x113ff812] */
  DX = (r16((uint32_t)(0x113ff812)));
  /* 113e2d80 push edx */
  push32((uint32_t)(EDX));
  /* 113e2d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2d83 mov ax, word ptr [0x113ff810] */
  AX = (r16((uint32_t)(0x113ff810)));
  /* 113e2d89 push eax */
  push32((uint32_t)(EAX));
  /* 113e2d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2d8c mov cx, word ptr [0x113ff80e] */
  CX = (r16((uint32_t)(0x113ff80e)));
  /* 113e2d93 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2d96 mov dx, word ptr [0x113ff80c] */
  DX = (r16((uint32_t)(0x113ff80c)));
  /* 113e2d9d push edx */
  push32((uint32_t)(EDX));
  /* 113e2d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2da2 mov ax, word ptr [0x113ff808] */
  AX = (r16((uint32_t)(0x113ff808)));
  /* 113e2da8 push eax */
  push32((uint32_t)(EAX));
  /* 113e2da9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2dab mov cx, word ptr [0x113ff80a] */
  CX = (r16((uint32_t)(0x113ff80a)));
  /* 113e2db2 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2db3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2db5 mov dx, word ptr [0x113ff806] */
  DX = (r16((uint32_t)(0x113ff806)));
  /* 113e2dbc push edx */
  push32((uint32_t)(EDX));
  /* 113e2dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2dc0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113e2dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e2dc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2dc8 call 0x113e2f70 */
  push32(0x113e2dcdu); f_113e2f70();
  /* 113e2dcd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2dd0 jmp 0x113e2e23 */
  goto L_113e2e23;
L_113e2dd2:;
  /* 113e2dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2dd4 mov dx, word ptr [0x113ff812] */
  DX = (r16((uint32_t)(0x113ff812)));
  /* 113e2ddb push edx */
  push32((uint32_t)(EDX));
  /* 113e2ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2dde mov ax, word ptr [0x113ff810] */
  AX = (r16((uint32_t)(0x113ff810)));
  /* 113e2de4 push eax */
  push32((uint32_t)(EAX));
  /* 113e2de5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2de7 mov cx, word ptr [0x113ff80e] */
  CX = (r16((uint32_t)(0x113ff80e)));
  /* 113e2dee push ecx */
  push32((uint32_t)(ECX));
  /* 113e2def xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e2df1 mov dx, word ptr [0x113ff80c] */
  DX = (r16((uint32_t)(0x113ff80c)));
  /* 113e2df8 push edx */
  push32((uint32_t)(EDX));
  /* 113e2df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2dfb mov ax, word ptr [0x113ff80a] */
  AX = (r16((uint32_t)(0x113ff80a)));
  /* 113e2e01 push eax */
  push32((uint32_t)(EAX));
  /* 113e2e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e2e08 mov cx, word ptr [0x113ff806] */
  CX = (r16((uint32_t)(0x113ff806)));
  /* 113e2e0f push ecx */
  push32((uint32_t)(ECX));
  /* 113e2e10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113e2e16 push eax */
  push32((uint32_t)(EAX));
  /* 113e2e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e1b call 0x113e2f70 */
  push32(0x113e2e20u); f_113e2f70();
  /* 113e2e20 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e2e23:;
  /* 113e2e23 jmp 0x113e2e6b */
  goto L_113e2e6b;
L_113e2e25:;
  /* 113e2e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 113e2e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2e33 push 4 */
  push32((uint32_t)(0x4u));
  /* 113e2e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113e2e3b push edx */
  push32((uint32_t)(EDX));
  /* 113e2e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2e3e push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2e40 call 0x113e2f70 */
  push32(0x113e2e45u); f_113e2f70();
  /* 113e2e45 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 113e2e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e54 push 5 */
  push32((uint32_t)(0x5u));
  /* 113e2e56 push 0xa */
  push32((uint32_t)(0xau));
  /* 113e2e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e5b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113e2e5e push ecx */
  push32((uint32_t)(ECX));
  /* 113e2e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 113e2e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e2e63 call 0x113e2f70 */
  push32(0x113e2e68u); f_113e2f70();
  /* 113e2e68 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e2e6b:;
  /* 113e2e6b mov edx, dword ptr [0x113fee2c] */
  EDX = (r32((uint32_t)(0x113fee2c)));
  /* 113e2e71 cmp edx, dword ptr [0x113fee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2e77 jge 0x113e2ec4 */
  if ((C.sf==C.of)) goto L_113e2ec4;
  /* 113e2e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e7c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113e2e7f cmp ecx, dword ptr [0x113fee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2e85 jl 0x113e2e95 */
  if ((C.sf!=C.of)) goto L_113e2e95;
  /* 113e2e87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e8a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113e2e8d cmp eax, dword ptr [0x113fee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2e93 jle 0x113e2e9c */
  if ((C.zf||C.sf!=C.of)) goto L_113e2e9c;
L_113e2e95:;
  /* 113e2e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2e97 jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2e9c:;
  /* 113e2e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2e9f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113e2ea2 cmp edx, dword ptr [0x113fee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2ea8 jle 0x113e2ec2 */
  if ((C.zf||C.sf!=C.of)) goto L_113e2ec2;
  /* 113e2eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2ead mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113e2eb0 cmp ecx, dword ptr [0x113fee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2eb6 jge 0x113e2ec2 */
  if ((C.sf==C.of)) goto L_113e2ec2;
  /* 113e2eb8 mov eax, 1 */
  EAX = (0x1u);
  /* 113e2ebd jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2ec2:;
  /* 113e2ec2 jmp 0x113e2f07 */
  goto L_113e2f07;
L_113e2ec4:;
  /* 113e2ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2ec7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113e2eca cmp eax, dword ptr [0x113fee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2ed0 jl 0x113e2ee0 */
  if ((C.sf!=C.of)) goto L_113e2ee0;
  /* 113e2ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2ed5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113e2ed8 cmp edx, dword ptr [0x113fee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2ede jle 0x113e2ee7 */
  if ((C.zf||C.sf!=C.of)) goto L_113e2ee7;
L_113e2ee0:;
  /* 113e2ee0 mov eax, 1 */
  EAX = (0x1u);
  /* 113e2ee5 jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2ee7:;
  /* 113e2ee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2eea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113e2eed cmp ecx, dword ptr [0x113fee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2ef3 jle 0x113e2f07 */
  if ((C.zf||C.sf!=C.of)) goto L_113e2f07;
  /* 113e2ef5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2ef8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113e2efb cmp eax, dword ptr [0x113fee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2f01 jge 0x113e2f07 */
  if ((C.sf==C.of)) goto L_113e2f07;
  /* 113e2f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2f05 jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2f07:;
  /* 113e2f07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2f0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113e2f0d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2f13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e2f15 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2f1a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113e2f1d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2f23 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2f25 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2f2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e2f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e2f31 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113e2f34 cmp edx, dword ptr [0x113fee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2f3a jne 0x113e2f52 */
  if (!C.zf) goto L_113e2f52;
  /* 113e2f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2f3f cmp eax, dword ptr [0x113fee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2f45 jl 0x113e2f4e */
  if ((C.sf!=C.of)) goto L_113e2f4e;
  /* 113e2f47 mov eax, 1 */
  EAX = (0x1u);
  /* 113e2f4c jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2f4e:;
  /* 113e2f4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e2f50 jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2f52:;
  /* 113e2f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2f55 cmp ecx, dword ptr [0x113fee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2f5b jge 0x113e2f64 */
  if ((C.sf==C.of)) goto L_113e2f64;
  /* 113e2f5d mov eax, 1 */
  EAX = (0x1u);
  /* 113e2f62 jmp 0x113e2f66 */
  goto L_113e2f66;
L_113e2f64:;
  /* 113e2f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e2f66:;
  /* 113e2f66 mov esp, ebp */
  ESP = (EBP);
  /* 113e2f68 pop ebp */
  EBP = (pop32());
  /* 113e2f69 ret  */
  ESPCHK(0x113e2c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x113e2f70 (504 bytes, 145 insns) */
void f_113e2f70(void) {
  FTRACE(0x113e2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 113e2f71 mov ebp, esp */
  EBP = (ESP);
  /* 113e2f73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2f76 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2f7a jne 0x113e304c */
  if (!C.zf) goto L_113e304c;
  /* 113e2f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2f83 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113e2f86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e2f88 jne 0x113e2f99 */
  if (!C.zf) goto L_113e2f99;
  /* 113e2f8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e2f8d mov edx, dword ptr [ecx*4 + 0x113fee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fee4c)));
  /* 113e2f94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113e2f97 jmp 0x113e2fa6 */
  goto L_113e2fa6;
L_113e2f99:;
  /* 113e2f99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e2f9c mov ecx, dword ptr [eax*4 + 0x113fee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fee80)));
  /* 113e2fa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113e2fa6:;
  /* 113e2fa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e2fa9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2fac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e2faf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2fb2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2fb5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2fbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e2fbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2fc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e2fc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2fc6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 113e2fc9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 113e2fcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e2fce mov ecx, 7 */
  ECX = (0x7u);
  /* 113e2fd3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113e2fd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e2fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e2fdb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e2fde jge 0x113e2ff9 */
  if ((C.sf==C.of)) goto L_113e2ff9;
  /* 113e2fe0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e2fe3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2fe6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e2fe9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2fec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e2fef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2ff2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e2ff4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e2ff7 jmp 0x113e300d */
  goto L_113e300d;
L_113e2ff9:;
  /* 113e2ff9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e2ffc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e2fff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3002 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e3005 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3008 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e300a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113e300d:;
  /* 113e300d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3011 jne 0x113e304a */
  if (!C.zf) goto L_113e304a;
  /* 113e3013 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3016 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 113e3019 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e301b jne 0x113e302c */
  if (!C.zf) goto L_113e302c;
  /* 113e301d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e3020 mov eax, dword ptr [edx*4 + 0x113fee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113fee50)));
  /* 113e3027 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113e302a jmp 0x113e3039 */
  goto L_113e3039;
L_113e302c:;
  /* 113e302c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e302f mov edx, dword ptr [ecx*4 + 0x113fee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fee84)));
  /* 113e3036 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e3039:;
  /* 113e3039 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e303c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e303f jle 0x113e304a */
  if ((C.zf||C.sf!=C.of)) goto L_113e304a;
  /* 113e3041 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3044 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3047 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113e304a:;
  /* 113e304a jmp 0x113e3081 */
  goto L_113e3081;
L_113e304c:;
  /* 113e304c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e304f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113e3052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3054 jne 0x113e3065 */
  if (!C.zf) goto L_113e3065;
  /* 113e3056 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e3059 mov ecx, dword ptr [eax*4 + 0x113fee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fee4c)));
  /* 113e3060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e3063 jmp 0x113e3072 */
  goto L_113e3072;
L_113e3065:;
  /* 113e3065 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e3068 mov eax, dword ptr [edx*4 + 0x113fee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113fee80)));
  /* 113e306f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_113e3072:;
  /* 113e3072 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e3075 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e3078 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e307b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e307e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113e3081:;
  /* 113e3081 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3085 jne 0x113e30c1 */
  if (!C.zf) goto L_113e30c1;
  /* 113e3087 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e308a mov dword ptr [0x113fee2c], eax */
  w32((uint32_t)(0x113fee2c), (EAX));
  /* 113e308f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 113e3092 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e3095 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 113e3098 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e309a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e309d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 113e30a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e30a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e30a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 113e30ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e30ad mov dword ptr [0x113fee30], ecx */
  w32((uint32_t)(0x113fee30), (ECX));
  /* 113e30b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e30b6 mov dword ptr [0x113fee28], edx */
  w32((uint32_t)(0x113fee28), (EDX));
  /* 113e30bc jmp 0x113e3164 */
  goto L_113e3164;
L_113e30c1:;
  /* 113e30c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e30c4 mov dword ptr [0x113fee3c], eax */
  w32((uint32_t)(0x113fee3c), (EAX));
  /* 113e30c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 113e30cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e30cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 113e30d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e30d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e30d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 113e30da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e30dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e30e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 113e30e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e30e7 mov dword ptr [0x113fee40], ecx */
  w32((uint32_t)(0x113fee40), (ECX));
  /* 113e30ed mov edx, dword ptr [0x113fed98] */
  EDX = (r32((uint32_t)(0x113fed98)));
  /* 113e30f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e30f9 mov eax, dword ptr [0x113fee40] */
  EAX = (r32((uint32_t)(0x113fee40)));
  /* 113e30fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3100 mov dword ptr [0x113fee40], eax */
  w32((uint32_t)(0x113fee40), (EAX));
  /* 113e3105 cmp dword ptr [0x113fee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113fee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e310c jge 0x113e3131 */
  if ((C.sf==C.of)) goto L_113e3131;
  /* 113e310e mov ecx, dword ptr [0x113fee40] */
  ECX = (r32((uint32_t)(0x113fee40)));
  /* 113e3114 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e311a mov dword ptr [0x113fee40], ecx */
  w32((uint32_t)(0x113fee40), (ECX));
  /* 113e3120 mov edx, dword ptr [0x113fee3c] */
  EDX = (r32((uint32_t)(0x113fee3c)));
  /* 113e3126 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3129 mov dword ptr [0x113fee3c], edx */
  w32((uint32_t)(0x113fee3c), (EDX));
  /* 113e312f jmp 0x113e315b */
  goto L_113e315b;
L_113e3131:;
  /* 113e3131 cmp dword ptr [0x113fee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x113fee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e313b jl 0x113e315b */
  if ((C.sf!=C.of)) goto L_113e315b;
  /* 113e313d mov eax, dword ptr [0x113fee40] */
  EAX = (r32((uint32_t)(0x113fee40)));
  /* 113e3142 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3147 mov dword ptr [0x113fee40], eax */
  w32((uint32_t)(0x113fee40), (EAX));
  /* 113e314c mov ecx, dword ptr [0x113fee3c] */
  ECX = (r32((uint32_t)(0x113fee3c)));
  /* 113e3152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3155 mov dword ptr [0x113fee3c], ecx */
  w32((uint32_t)(0x113fee3c), (ECX));
L_113e315b:;
  /* 113e315b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e315e mov dword ptr [0x113fee38], edx */
  w32((uint32_t)(0x113fee38), (EDX));
L_113e3164:;
  /* 113e3164 mov esp, ebp */
  ESP = (EBP);
  /* 113e3166 pop ebp */
  EBP = (pop32());
  /* 113e3167 ret  */
  ESPCHK(0x113e2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x113e3170 (382 bytes, 135 insns) */
void f_113e3170(void) {
  FTRACE(0x113e3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3170 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3171 mov ebp, esp */
  EBP = (ESP);
  /* 113e3173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e3175 push 0x113fb928 */
  push32((uint32_t)(0x113fb928u));
  /* 113e317a push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113e317f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113e3185 push eax */
  push32((uint32_t)(EAX));
  /* 113e3186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113e318d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3190 push ebx */
  push32((uint32_t)(EBX));
  /* 113e3191 push esi */
  push32((uint32_t)(ESI));
  /* 113e3192 push edi */
  push32((uint32_t)(EDI));
  /* 113e3193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3196 cmp dword ptr [0x113ff874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e319d jne 0x113e31e2 */
  if (!C.zf) goto L_113e31e2;
  /* 113e319f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e31a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31a7 call dword ptr [0x114022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b4))), 0x113e31adu);
  /* 113e31ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e31af je 0x113e31bd */
  if (C.zf) goto L_113e31bd;
  /* 113e31b1 mov dword ptr [0x113ff874], 1 */
  w32((uint32_t)(0x113ff874), (0x1u));
  /* 113e31bb jmp 0x113e31e2 */
  goto L_113e31e2;
L_113e31bd:;
  /* 113e31bd push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e31c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e31c5 call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e31cbu);
  /* 113e31cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e31cd je 0x113e31db */
  if (C.zf) goto L_113e31db;
  /* 113e31cf mov dword ptr [0x113ff874], 2 */
  w32((uint32_t)(0x113ff874), (0x2u));
  /* 113e31d9 jmp 0x113e31e2 */
  goto L_113e31e2;
L_113e31db:;
  /* 113e31db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e31dd jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e31e2:;
  /* 113e31e2 cmp dword ptr [0x113ff874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e31e9 jne 0x113e3206 */
  if (!C.zf) goto L_113e3206;
  /* 113e31eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e31ee push eax */
  push32((uint32_t)(EAX));
  /* 113e31ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e31f2 push ecx */
  push32((uint32_t)(ECX));
  /* 113e31f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e31f6 push edx */
  push32((uint32_t)(EDX));
  /* 113e31f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e31fa push eax */
  push32((uint32_t)(EAX));
  /* 113e31fb call dword ptr [0x114022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b4))), 0x113e3201u);
  /* 113e3201 jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e3206:;
  /* 113e3206 cmp dword ptr [0x113ff874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e320d jne 0x113e32ef */
  if (!C.zf) goto L_113e32ef;
  /* 113e3213 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3217 jne 0x113e3222 */
  if (!C.zf) goto L_113e3222;
  /* 113e3219 mov ecx, dword ptr [0x113ff728] */
  ECX = (r32((uint32_t)(0x113ff728)));
  /* 113e321f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_113e3222:;
  /* 113e3222 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3224 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e3229 push edx */
  push32((uint32_t)(EDX));
  /* 113e322a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e322d push eax */
  push32((uint32_t)(EAX));
  /* 113e322e call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e3234u);
  /* 113e3234 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113e3237 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e323b jne 0x113e3244 */
  if (!C.zf) goto L_113e3244;
  /* 113e323d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e323f jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e3244:;
  /* 113e3244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e324b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e324e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3251 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e3253 call 0x113d6ed0 */
  push32(0x113e3258u); f_113d6ed0();
  /* 113e3258 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 113e325b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e325e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e3261 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113e3264 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e326b jmp 0x113e3284 */
  goto L_113e3284;
  /* 113e326d mov eax, 1 */
  EAX = (0x1u);
  /* 113e3272 ret  */
  ESPCHK(0x113e3170u, _esp0);
  ESP += 4; return;
  /* 113e3273 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3276 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113e327d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e3284:;
  /* 113e3284 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3288 jne 0x113e328e */
  if (!C.zf) goto L_113e328e;
  /* 113e328a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e328c jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e328e:;
  /* 113e328e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e3291 push edx */
  push32((uint32_t)(EDX));
  /* 113e3292 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3295 push eax */
  push32((uint32_t)(EAX));
  /* 113e3296 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e3299 push ecx */
  push32((uint32_t)(ECX));
  /* 113e329a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e329d push edx */
  push32((uint32_t)(EDX));
  /* 113e329e call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e32a4u);
  /* 113e32a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e32a6 jne 0x113e32ac */
  if (!C.zf) goto L_113e32ac;
  /* 113e32a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e32aa jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e32ac:;
  /* 113e32ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e32b0 jne 0x113e32cd */
  if (!C.zf) goto L_113e32cd;
  /* 113e32b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e32b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e32b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e32b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e32bb push eax */
  push32((uint32_t)(EAX));
  /* 113e32bc push 1 */
  push32((uint32_t)(0x1u));
  /* 113e32be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e32c1 push ecx */
  push32((uint32_t)(ECX));
  /* 113e32c2 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e32c8u);
  /* 113e32c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113e32cb jmp 0x113e32ea */
  goto L_113e32ea;
L_113e32cd:;
  /* 113e32cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e32d0 push edx */
  push32((uint32_t)(EDX));
  /* 113e32d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e32d4 push eax */
  push32((uint32_t)(EAX));
  /* 113e32d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e32d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e32da push ecx */
  push32((uint32_t)(ECX));
  /* 113e32db push 1 */
  push32((uint32_t)(0x1u));
  /* 113e32dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e32e0 push edx */
  push32((uint32_t)(EDX));
  /* 113e32e1 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e32e7u);
  /* 113e32e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113e32ea:;
  /* 113e32ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e32ed jmp 0x113e32f1 */
  goto L_113e32f1;
L_113e32ef:;
  /* 113e32ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e32f1:;
  /* 113e32f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 113e32f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e32f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113e32fe pop edi */
  EDI = (pop32());
  /* 113e32ff pop esi */
  ESI = (pop32());
  /* 113e3300 pop ebx */
  EBX = (pop32());
  /* 113e3301 mov esp, ebp */
  ESP = (EBP);
  /* 113e3303 pop ebp */
  EBP = (pop32());
  /* 113e3304 ret  */
  ESPCHK(0x113e3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x113e3310 (398 bytes, 140 insns) */
void f_113e3310(void) {
  FTRACE(0x113e3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3310 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3311 mov ebp, esp */
  EBP = (ESP);
  /* 113e3313 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e3315 push 0x113fb938 */
  push32((uint32_t)(0x113fb938u));
  /* 113e331a push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113e331f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113e3325 push eax */
  push32((uint32_t)(EAX));
  /* 113e3326 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113e332d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3330 push ebx */
  push32((uint32_t)(EBX));
  /* 113e3331 push esi */
  push32((uint32_t)(ESI));
  /* 113e3332 push edi */
  push32((uint32_t)(EDI));
  /* 113e3333 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3336 cmp dword ptr [0x113ff878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e333d jne 0x113e3382 */
  if (!C.zf) goto L_113e3382;
  /* 113e333f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3341 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3343 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3345 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3347 call dword ptr [0x114022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b4))), 0x113e334du);
  /* 113e334d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e334f je 0x113e335d */
  if (C.zf) goto L_113e335d;
  /* 113e3351 mov dword ptr [0x113ff878], 1 */
  w32((uint32_t)(0x113ff878), (0x1u));
  /* 113e335b jmp 0x113e3382 */
  goto L_113e3382;
L_113e335d:;
  /* 113e335d push 0 */
  push32((uint32_t)(0x0u));
  /* 113e335f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3361 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3363 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3365 call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e336bu);
  /* 113e336b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e336d je 0x113e337b */
  if (C.zf) goto L_113e337b;
  /* 113e336f mov dword ptr [0x113ff878], 2 */
  w32((uint32_t)(0x113ff878), (0x2u));
  /* 113e3379 jmp 0x113e3382 */
  goto L_113e3382;
L_113e337b:;
  /* 113e337b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e337d jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e3382:;
  /* 113e3382 cmp dword ptr [0x113ff878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3389 jne 0x113e33a6 */
  if (!C.zf) goto L_113e33a6;
  /* 113e338b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e338e push eax */
  push32((uint32_t)(EAX));
  /* 113e338f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3392 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3393 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e3396 push edx */
  push32((uint32_t)(EDX));
  /* 113e3397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e339a push eax */
  push32((uint32_t)(EAX));
  /* 113e339b call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e33a1u);
  /* 113e33a1 jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e33a6:;
  /* 113e33a6 cmp dword ptr [0x113ff878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e33ad jne 0x113e349f */
  if (!C.zf) goto L_113e349f;
  /* 113e33b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e33b7 jne 0x113e33c2 */
  if (!C.zf) goto L_113e33c2;
  /* 113e33b9 mov ecx, dword ptr [0x113ff728] */
  ECX = (r32((uint32_t)(0x113ff728)));
  /* 113e33bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_113e33c2:;
  /* 113e33c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e33c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e33c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e33c9 push edx */
  push32((uint32_t)(EDX));
  /* 113e33ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e33cd push eax */
  push32((uint32_t)(EAX));
  /* 113e33ce call dword ptr [0x114022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b4))), 0x113e33d4u);
  /* 113e33d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113e33d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e33db jne 0x113e33e4 */
  if (!C.zf) goto L_113e33e4;
  /* 113e33dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e33df jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e33e4:;
  /* 113e33e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e33eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e33ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113e33f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e33f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e33f5 call 0x113d6ed0 */
  push32(0x113e33fau); f_113d6ed0();
  /* 113e33fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 113e33fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3400 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e3403 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113e3406 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e340d jmp 0x113e3426 */
  goto L_113e3426;
  /* 113e340f mov eax, 1 */
  EAX = (0x1u);
  /* 113e3414 ret  */
  ESPCHK(0x113e3310u, _esp0);
  ESP += 4; return;
  /* 113e3415 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3418 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113e341f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e3426:;
  /* 113e3426 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e342a jne 0x113e3430 */
  if (!C.zf) goto L_113e3430;
  /* 113e342c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e342e jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e3430:;
  /* 113e3430 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e3433 push edx */
  push32((uint32_t)(EDX));
  /* 113e3434 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3437 push eax */
  push32((uint32_t)(EAX));
  /* 113e3438 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e343b push ecx */
  push32((uint32_t)(ECX));
  /* 113e343c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e343f push edx */
  push32((uint32_t)(EDX));
  /* 113e3440 call dword ptr [0x114022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b4))), 0x113e3446u);
  /* 113e3446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3448 jne 0x113e344e */
  if (!C.zf) goto L_113e344e;
  /* 113e344a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e344c jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e344e:;
  /* 113e344e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3452 jne 0x113e3476 */
  if (!C.zf) goto L_113e3476;
  /* 113e3454 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3456 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3458 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e345a push 0 */
  push32((uint32_t)(0x0u));
  /* 113e345c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e345e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3461 push eax */
  push32((uint32_t)(EAX));
  /* 113e3462 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e3467 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e346a push ecx */
  push32((uint32_t)(ECX));
  /* 113e346b call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e3471u);
  /* 113e3471 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113e3474 jmp 0x113e349a */
  goto L_113e349a;
L_113e3476:;
  /* 113e3476 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3478 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e347a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e347d push edx */
  push32((uint32_t)(EDX));
  /* 113e347e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3481 push eax */
  push32((uint32_t)(EAX));
  /* 113e3482 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e3484 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3487 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3488 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113e348d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3490 push edx */
  push32((uint32_t)(EDX));
  /* 113e3491 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e3497u);
  /* 113e3497 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113e349a:;
  /* 113e349a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e349d jmp 0x113e34a1 */
  goto L_113e34a1;
L_113e349f:;
  /* 113e349f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e34a1:;
  /* 113e34a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 113e34a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e34a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113e34ae pop edi */
  EDI = (pop32());
  /* 113e34af pop esi */
  ESI = (pop32());
  /* 113e34b0 pop ebx */
  EBX = (pop32());
  /* 113e34b1 mov esp, ebp */
  ESP = (EBP);
  /* 113e34b3 pop ebp */
  EBP = (pop32());
  /* 113e34b4 ret  */
  ESPCHK(0x113e3310u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x113e34c0 (11 bytes, 6 insns) */
void f_113e34c0(void) {
  FTRACE(0x113e34c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e34c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e34c1 mov ebp, esp */
  EBP = (ESP);
  /* 113e34c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e34c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e34c9 pop ebp */
  EBP = (pop32());
  /* 113e34ca ret  */
  ESPCHK(0x113e34c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134d0 @ 0x113e34d0 (147 bytes, 43 insns) */
void f_113e34d0(void) {
  FTRACE(0x113e34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e34d1 mov ebp, esp */
  EBP = (ESP);
  /* 113e34d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e34d4 cmp dword ptr [0x113ff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e34db jne 0x113e34f7 */
  if (!C.zf) goto L_113e34f7;
  /* 113e34dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e34e1 jl 0x113e34f2 */
  if ((C.sf!=C.of)) goto L_113e34f2;
  /* 113e34e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e34e7 jg 0x113e34f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e34f2;
  /* 113e34e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e34ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e34ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113e34f2:;
  /* 113e34f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e34f5 jmp 0x113e355f */
  goto L_113e355f;
L_113e34f7:;
  /* 113e34f7 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e34fc call dword ptr [0x11402364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402364))), 0x113e3502u);
  /* 113e3502 cmp dword ptr [0x113ff894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3509 je 0x113e3529 */
  if (C.zf) goto L_113e3529;
  /* 113e350b push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e3510 call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113e3516u);
  /* 113e3516 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e3518 call 0x113d7730 */
  push32(0x113e351du); f_113d7730();
  /* 113e351d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3520 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113e3527 jmp 0x113e3530 */
  goto L_113e3530;
L_113e3529:;
  /* 113e3529 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113e3530:;
  /* 113e3530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3533 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3534 call 0x113e3570 */
  push32(0x113e3539u); f_113e3570();
  /* 113e3539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e353c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e353f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3543 je 0x113e3551 */
  if (C.zf) goto L_113e3551;
  /* 113e3545 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113e3547 call 0x113d77d0 */
  push32(0x113e354cu); f_113d77d0();
  /* 113e354c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e354f jmp 0x113e355c */
  goto L_113e355c;
L_113e3551:;
  /* 113e3551 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113e3556 call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113e355cu);
L_113e355c:;
  /* 113e355c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_113e355f:;
  /* 113e355f mov esp, ebp */
  ESP = (EBP);
  /* 113e3561 pop ebp */
  EBP = (pop32());
  /* 113e3562 ret  */
  ESPCHK(0x113e34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x113e3570 (299 bytes, 91 insns) */
void f_113e3570(void) {
  FTRACE(0x113e3570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3570 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3571 mov ebp, esp */
  EBP = (ESP);
  /* 113e3573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3576 cmp dword ptr [0x113ff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e357d jne 0x113e359c */
  if (!C.zf) goto L_113e359c;
  /* 113e357f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3583 jl 0x113e3594 */
  if ((C.sf!=C.of)) goto L_113e3594;
  /* 113e3585 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3589 jg 0x113e3594 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e3594;
  /* 113e358b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e358e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3591 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113e3594:;
  /* 113e3594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3597 jmp 0x113e3697 */
  goto L_113e3697;
L_113e359c:;
  /* 113e359c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e35a3 jge 0x113e35e3 */
  if ((C.sf==C.of)) goto L_113e35e3;
  /* 113e35a5 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e35ac jle 0x113e35c1 */
  if ((C.zf||C.sf!=C.of)) goto L_113e35c1;
  /* 113e35ae push 1 */
  push32((uint32_t)(0x1u));
  /* 113e35b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e35b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e35b4 call 0x113d9d40 */
  push32(0x113e35b9u); f_113d9d40();
  /* 113e35b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e35bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113e35bf jmp 0x113e35d5 */
  goto L_113e35d5;
L_113e35c1:;
  /* 113e35c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e35c4 mov eax, dword ptr [0x113fdc98] */
  EAX = (r32((uint32_t)(0x113fdc98)));
  /* 113e35c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e35cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113e35cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113e35d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113e35d5:;
  /* 113e35d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e35d9 jne 0x113e35e3 */
  if (!C.zf) goto L_113e35e3;
  /* 113e35db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e35de jmp 0x113e3697 */
  goto L_113e3697;
L_113e35e3:;
  /* 113e35e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e35e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113e35e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e35ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e35f5 mov eax, dword ptr [0x113fdc98] */
  EAX = (r32((uint32_t)(0x113fdc98)));
  /* 113e35fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e35fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113e3600 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 113e3606 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e3608 je 0x113e362c */
  if (C.zf) goto L_113e362c;
  /* 113e360a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e360d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113e3610 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e3616 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 113e3619 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 113e361c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 113e361f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 113e3623 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113e362a jmp 0x113e363d */
  goto L_113e363d;
L_113e362c:;
  /* 113e362c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 113e362f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 113e3632 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 113e3636 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_113e363d:;
  /* 113e363d push 1 */
  push32((uint32_t)(0x1u));
  /* 113e363f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3641 push 3 */
  push32((uint32_t)(0x3u));
  /* 113e3643 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 113e3646 push edx */
  push32((uint32_t)(EDX));
  /* 113e3647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e364a push eax */
  push32((uint32_t)(EAX));
  /* 113e364b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 113e364e push ecx */
  push32((uint32_t)(ECX));
  /* 113e364f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113e3654 mov edx, dword ptr [0x113ff718] */
  EDX = (r32((uint32_t)(0x113ff718)));
  /* 113e365a push edx */
  push32((uint32_t)(EDX));
  /* 113e365b call 0x113dc120 */
  push32(0x113e3660u); f_113dc120();
  /* 113e3660 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e3666 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e366a jne 0x113e3671 */
  if (!C.zf) goto L_113e3671;
  /* 113e366c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e366f jmp 0x113e3697 */
  goto L_113e3697;
L_113e3671:;
  /* 113e3671 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3675 jne 0x113e3681 */
  if (!C.zf) goto L_113e3681;
  /* 113e3677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e367a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e367f jmp 0x113e3697 */
  goto L_113e3697;
L_113e3681:;
  /* 113e3681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3684 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3689 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 113e368c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113e3692 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 113e3695 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_113e3697:;
  /* 113e3697 mov esp, ebp */
  ESP = (EBP);
  /* 113e3699 pop ebp */
  EBP = (pop32());
  /* 113e369a ret  */
  ESPCHK(0x113e3570u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x113e36a0 (52 bytes, 19 insns) */
void f_113e36a0(void) {
  FTRACE(0x113e36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e36a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113e36a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 113e36a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113e36aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113e36ae jne 0x113e36b9 */
  if (!C.zf) goto L_113e36b9;
  /* 113e36b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 113e36b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113e36b6 ret 0x10 */
  ESPCHK(0x113e36a0u, _esp0);
  ESP += 20; return;
L_113e36b9:;
  /* 113e36b9 push ebx */
  push32((uint32_t)(EBX));
  /* 113e36ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113e36bc mov ebx, eax */
  EBX = (EAX);
  /* 113e36be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113e36c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113e36c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e36c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113e36cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113e36ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e36d0 pop ebx */
  EBX = (pop32());
  /* 113e36d1 ret 0x10 */
  ESPCHK(0x113e36a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100136e0 @ 0x113e36e0 (46 bytes, 18 insns) */
void f_113e36e0(void) {
  FTRACE(0x113e36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e36e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e36e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e36e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e36e6 call 0x113d7730 */
  push32(0x113e36ebu); f_113d7730();
  /* 113e36eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e36ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e36f1 push eax */
  push32((uint32_t)(EAX));
  /* 113e36f2 call 0x113e3710 */
  push32(0x113e36f7u); f_113e3710();
  /* 113e36f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e36fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e36fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 113e36ff call 0x113d77d0 */
  push32(0x113e3704u); f_113d77d0();
  /* 113e3704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e370a mov esp, ebp */
  ESP = (EBP);
  /* 113e370c pop ebp */
  EBP = (pop32());
  /* 113e370d ret  */
  ESPCHK(0x113e36e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x113e3710 (198 bytes, 69 insns) */
void f_113e3710(void) {
  FTRACE(0x113e3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3710 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3711 mov ebp, esp */
  EBP = (ESP);
  /* 113e3713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3716 mov eax, dword ptr [0x113ff534] */
  EAX = (r32((uint32_t)(0x113ff534)));
  /* 113e371b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e371e cmp dword ptr [0x11401040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3725 jne 0x113e372e */
  if (!C.zf) goto L_113e372e;
  /* 113e3727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3729 jmp 0x113e37d2 */
  goto L_113e37d2;
L_113e372e:;
  /* 113e372e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3732 jne 0x113e3756 */
  if (!C.zf) goto L_113e3756;
  /* 113e3734 cmp dword ptr [0x113ff53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e373b je 0x113e3756 */
  if (C.zf) goto L_113e3756;
  /* 113e373d call 0x113e3830 */
  push32(0x113e3742u); f_113e3830();
  /* 113e3742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3744 je 0x113e374d */
  if (C.zf) goto L_113e374d;
  /* 113e3746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3748 jmp 0x113e37d2 */
  goto L_113e37d2;
L_113e374d:;
  /* 113e374d mov ecx, dword ptr [0x113ff534] */
  ECX = (r32((uint32_t)(0x113ff534)));
  /* 113e3753 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113e3756:;
  /* 113e3756 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e375a je 0x113e37d0 */
  if (C.zf) goto L_113e37d0;
  /* 113e375c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3760 je 0x113e37d0 */
  if (C.zf) goto L_113e37d0;
  /* 113e3762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3765 push edx */
  push32((uint32_t)(EDX));
  /* 113e3766 call 0x113d6b60 */
  push32(0x113e376bu); f_113d6b60();
  /* 113e376b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e376e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113e3771:;
  /* 113e3771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3774 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3777 je 0x113e37d0 */
  if (C.zf) goto L_113e37d0;
  /* 113e3779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e377c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e377e push edx */
  push32((uint32_t)(EDX));
  /* 113e377f call 0x113d6b60 */
  push32(0x113e3784u); f_113d6b60();
  /* 113e3784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3787 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e378a jbe 0x113e37c5 */
  if ((C.cf||C.zf)) goto L_113e37c5;
  /* 113e378c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e378f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e3791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3794 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 113e3798 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e379b jne 0x113e37c5 */
  if (!C.zf) goto L_113e37c5;
  /* 113e379d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e37a0 push ecx */
  push32((uint32_t)(ECX));
  /* 113e37a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e37a4 push edx */
  push32((uint32_t)(EDX));
  /* 113e37a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e37a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e37aa push ecx */
  push32((uint32_t)(ECX));
  /* 113e37ab call 0x113e37e0 */
  push32(0x113e37b0u); f_113e37e0();
  /* 113e37b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e37b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e37b5 jne 0x113e37c5 */
  if (!C.zf) goto L_113e37c5;
  /* 113e37b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e37ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e37bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e37bf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 113e37c3 jmp 0x113e37d2 */
  goto L_113e37d2;
L_113e37c5:;
  /* 113e37c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e37c8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e37cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e37ce jmp 0x113e3771 */
  goto L_113e3771;
L_113e37d0:;
  /* 113e37d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e37d2:;
  /* 113e37d2 mov esp, ebp */
  ESP = (EBP);
  /* 113e37d4 pop ebp */
  EBP = (pop32());
  /* 113e37d5 ret  */
  ESPCHK(0x113e3710u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x113e37e0 (79 bytes, 32 insns) */
void f_113e37e0(void) {
  FTRACE(0x113e37e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e37e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e37e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e37e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e37e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e37e8 jne 0x113e37ee */
  if (!C.zf) goto L_113e37ee;
  /* 113e37ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e37ec jmp 0x113e382b */
  goto L_113e382b;
L_113e37ee:;
  /* 113e37ee mov eax, dword ptr [0x11400c04] */
  EAX = (r32((uint32_t)(0x11400c04)));
  /* 113e37f3 push eax */
  push32((uint32_t)(EAX));
  /* 113e37f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e37f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113e37f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e37fb push edx */
  push32((uint32_t)(EDX));
  /* 113e37fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e37ff push eax */
  push32((uint32_t)(EAX));
  /* 113e3800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3803 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3804 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3806 mov edx, dword ptr [0x11400ea4] */
  EDX = (r32((uint32_t)(0x11400ea4)));
  /* 113e380c push edx */
  push32((uint32_t)(EDX));
  /* 113e380d call 0x113e38e0 */
  push32(0x113e3812u); f_113e38e0();
  /* 113e3812 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3815 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e3818 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e381c jne 0x113e3825 */
  if (!C.zf) goto L_113e3825;
  /* 113e381e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 113e3823 jmp 0x113e382b */
  goto L_113e382b;
L_113e3825:;
  /* 113e3825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3828 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113e382b:;
  /* 113e382b mov esp, ebp */
  ESP = (EBP);
  /* 113e382d pop ebp */
  EBP = (pop32());
  /* 113e382e ret  */
  ESPCHK(0x113e37e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x113e3830 (174 bytes, 66 insns) */
void f_113e3830(void) {
  FTRACE(0x113e3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3830 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3831 mov ebp, esp */
  EBP = (ESP);
  /* 113e3833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3836 mov eax, dword ptr [0x113ff53c] */
  EAX = (r32((uint32_t)(0x113ff53c)));
  /* 113e383b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113e383e:;
  /* 113e383e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3841 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3844 je 0x113e38d8 */
  if (C.zf) goto L_113e38d8;
  /* 113e384a push 0 */
  push32((uint32_t)(0x0u));
  /* 113e384c push 0 */
  push32((uint32_t)(0x0u));
  /* 113e384e push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3850 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3852 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e3854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3857 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e3859 push eax */
  push32((uint32_t)(EAX));
  /* 113e385a push 0 */
  push32((uint32_t)(0x0u));
  /* 113e385c push 1 */
  push32((uint32_t)(0x1u));
  /* 113e385e call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e3864u);
  /* 113e3864 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e3867 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e386b jne 0x113e3872 */
  if (!C.zf) goto L_113e3872;
  /* 113e386d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3870 jmp 0x113e38da */
  goto L_113e38da;
L_113e3872:;
  /* 113e3872 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113e3874 push 0x113fb944 */
  push32((uint32_t)(0x113fb944u));
  /* 113e3879 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e387b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e387e push ecx */
  push32((uint32_t)(ECX));
  /* 113e387f call 0x113d3d30 */
  push32(0x113e3884u); f_113d3d30();
  /* 113e3884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3887 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e388a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e388e jne 0x113e3895 */
  if (!C.zf) goto L_113e3895;
  /* 113e3890 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3893 jmp 0x113e38da */
  goto L_113e38da;
L_113e3895:;
  /* 113e3895 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3897 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3899 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e389c push edx */
  push32((uint32_t)(EDX));
  /* 113e389d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e38a0 push eax */
  push32((uint32_t)(EAX));
  /* 113e38a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e38a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e38a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e38a8 push edx */
  push32((uint32_t)(EDX));
  /* 113e38a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e38ab push 1 */
  push32((uint32_t)(0x1u));
  /* 113e38ad call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113e38b3u);
  /* 113e38b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e38b5 jne 0x113e38bc */
  if (!C.zf) goto L_113e38bc;
  /* 113e38b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e38ba jmp 0x113e38da */
  goto L_113e38da;
L_113e38bc:;
  /* 113e38bc push 0 */
  push32((uint32_t)(0x0u));
  /* 113e38be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e38c1 push eax */
  push32((uint32_t)(EAX));
  /* 113e38c2 call 0x113e3d30 */
  push32(0x113e38c7u); f_113e3d30();
  /* 113e38c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e38ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e38cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e38d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e38d3 jmp 0x113e383e */
  goto L_113e383e;
L_113e38d8:;
  /* 113e38d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e38da:;
  /* 113e38da mov esp, ebp */
  ESP = (EBP);
  /* 113e38dc pop ebp */
  EBP = (pop32());
  /* 113e38dd ret  */
  ESPCHK(0x113e3830u, _esp0);
  ESP += 4; return;
}

/* FUN_100138e0 @ 0x113e38e0 (970 bytes, 340 insns) */
void f_113e38e0(void) {
  FTRACE(0x113e38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e38e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e38e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113e38e5 push 0x113fb998 */
  push32((uint32_t)(0x113fb998u));
  /* 113e38ea push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113e38ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113e38f5 push eax */
  push32((uint32_t)(EAX));
  /* 113e38f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113e38fd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3900 push ebx */
  push32((uint32_t)(EBX));
  /* 113e3901 push esi */
  push32((uint32_t)(ESI));
  /* 113e3902 push edi */
  push32((uint32_t)(EDI));
  /* 113e3903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3906 cmp dword ptr [0x113ff87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e390d jne 0x113e3966 */
  if (!C.zf) goto L_113e3966;
  /* 113e390f push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3911 push 0x113faff4 */
  push32((uint32_t)(0x113faff4u));
  /* 113e3916 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3918 push 0x113faff4 */
  push32((uint32_t)(0x113faff4u));
  /* 113e391d push 0 */
  push32((uint32_t)(0x0u));
  /* 113e391f push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3921 call dword ptr [0x114022b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b0))), 0x113e3927u);
  /* 113e3927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3929 je 0x113e3937 */
  if (C.zf) goto L_113e3937;
  /* 113e392b mov dword ptr [0x113ff87c], 1 */
  w32((uint32_t)(0x113ff87c), (0x1u));
  /* 113e3935 jmp 0x113e3966 */
  goto L_113e3966;
L_113e3937:;
  /* 113e3937 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3939 push 0x113faff0 */
  push32((uint32_t)(0x113faff0u));
  /* 113e393e push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3940 push 0x113faff0 */
  push32((uint32_t)(0x113faff0u));
  /* 113e3945 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3947 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3949 call dword ptr [0x114022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022bc))), 0x113e394fu);
  /* 113e394f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3951 je 0x113e395f */
  if (C.zf) goto L_113e395f;
  /* 113e3953 mov dword ptr [0x113ff87c], 2 */
  w32((uint32_t)(0x113ff87c), (0x2u));
  /* 113e395d jmp 0x113e3966 */
  goto L_113e3966;
L_113e395f:;
  /* 113e395f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3961 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3966:;
  /* 113e3966 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e396a jle 0x113e397f */
  if ((C.zf||C.sf!=C.of)) goto L_113e397f;
  /* 113e396c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e396f push eax */
  push32((uint32_t)(EAX));
  /* 113e3970 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3973 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3974 call 0x113e3ce0 */
  push32(0x113e3979u); f_113e3ce0();
  /* 113e3979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e397c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_113e397f:;
  /* 113e397f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3983 jle 0x113e3998 */
  if ((C.zf||C.sf!=C.of)) goto L_113e3998;
  /* 113e3985 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e3988 push edx */
  push32((uint32_t)(EDX));
  /* 113e3989 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e398c push eax */
  push32((uint32_t)(EAX));
  /* 113e398d call 0x113e3ce0 */
  push32(0x113e3992u); f_113e3ce0();
  /* 113e3992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3995 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_113e3998:;
  /* 113e3998 cmp dword ptr [0x113ff87c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff87c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e399f jne 0x113e39c4 */
  if (!C.zf) goto L_113e39c4;
  /* 113e39a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e39a4 push ecx */
  push32((uint32_t)(ECX));
  /* 113e39a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e39a8 push edx */
  push32((uint32_t)(EDX));
  /* 113e39a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e39ac push eax */
  push32((uint32_t)(EAX));
  /* 113e39ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e39b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113e39b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e39b4 push edx */
  push32((uint32_t)(EDX));
  /* 113e39b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e39b8 push eax */
  push32((uint32_t)(EAX));
  /* 113e39b9 call dword ptr [0x114022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022bc))), 0x113e39bfu);
  /* 113e39bf jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e39c4:;
  /* 113e39c4 cmp dword ptr [0x113ff87c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff87c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e39cb jne 0x113e3cc2 */
  if (!C.zf) goto L_113e3cc2;
  /* 113e39d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e39d5 jne 0x113e39e0 */
  if (!C.zf) goto L_113e39e0;
  /* 113e39d7 mov ecx, dword ptr [0x113ff728] */
  ECX = (r32((uint32_t)(0x113ff728)));
  /* 113e39dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_113e39e0:;
  /* 113e39e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e39e4 je 0x113e39f0 */
  if (C.zf) goto L_113e39f0;
  /* 113e39e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e39ea jne 0x113e3b6c */
  if (!C.zf) goto L_113e3b6c;
L_113e39f0:;
  /* 113e39f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e39f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e39f6 jne 0x113e3a02 */
  if (!C.zf) goto L_113e3a02;
  /* 113e39f8 mov eax, 2 */
  EAX = (0x2u);
  /* 113e39fd jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3a02:;
  /* 113e3a02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a06 jle 0x113e3a12 */
  if ((C.zf||C.sf!=C.of)) goto L_113e3a12;
  /* 113e3a08 mov eax, 1 */
  EAX = (0x1u);
  /* 113e3a0d jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3a12:;
  /* 113e3a12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a16 jle 0x113e3a22 */
  if ((C.zf||C.sf!=C.of)) goto L_113e3a22;
  /* 113e3a18 mov eax, 3 */
  EAX = (0x3u);
  /* 113e3a1d jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3a22:;
  /* 113e3a22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 113e3a25 push eax */
  push32((uint32_t)(EAX));
  /* 113e3a26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 113e3a29 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3a2a call dword ptr [0x11402308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402308))), 0x113e3a30u);
  /* 113e3a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3a32 jne 0x113e3a3b */
  if (!C.zf) goto L_113e3a3b;
  /* 113e3a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3a36 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3a3b:;
  /* 113e3a3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a3f jne 0x113e3a47 */
  if (!C.zf) goto L_113e3a47;
  /* 113e3a41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a45 je 0x113e3a74 */
  if (C.zf) goto L_113e3a74;
L_113e3a47:;
  /* 113e3a47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a4b jne 0x113e3a53 */
  if (!C.zf) goto L_113e3a53;
  /* 113e3a4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a51 je 0x113e3a74 */
  if (C.zf) goto L_113e3a74;
L_113e3a53:;
  /* 113e3a53 push 0x113fb958 */
  push32((uint32_t)(0x113fb958u));
  /* 113e3a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3a5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 113e3a5f push 0x113fb950 */
  push32((uint32_t)(0x113fb950u));
  /* 113e3a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3a66 call 0x113d2df0 */
  push32(0x113e3a6bu); f_113d2df0();
  /* 113e3a6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a71 jne 0x113e3a74 */
  if (!C.zf) goto L_113e3a74;
  /* 113e3a73 int3  */
  x86_unimpl("int3 @ 0x113e3a73");
L_113e3a74:;
  /* 113e3a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e3a76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3a78 jne 0x113e3a3b */
  if (!C.zf) goto L_113e3a3b;
  /* 113e3a7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a7e jle 0x113e3af3 */
  if ((C.zf||C.sf!=C.of)) goto L_113e3af3;
  /* 113e3a80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3a84 jae 0x113e3a90 */
  if (!C.cf) goto L_113e3a90;
  /* 113e3a86 mov eax, 3 */
  EAX = (0x3u);
  /* 113e3a8b jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3a90:;
  /* 113e3a90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 113e3a93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 113e3a96 jmp 0x113e3aa1 */
  goto L_113e3aa1;
L_113e3a98:;
  /* 113e3a98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3a9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3a9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_113e3aa1:;
  /* 113e3aa1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3aa6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e3aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3aaa je 0x113e3ae9 */
  if (C.zf) goto L_113e3ae9;
  /* 113e3aac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3aaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e3ab1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113e3ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3ab6 je 0x113e3ae9 */
  if (C.zf) goto L_113e3ae9;
  /* 113e3ab8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3abb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e3abd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e3abf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3ac4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e3ac6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3ac8 jl 0x113e3ae7 */
  if ((C.sf!=C.of)) goto L_113e3ae7;
  /* 113e3aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e3acf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e3ad1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3ad4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e3ad6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113e3ad9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3adb jg 0x113e3ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e3ae7;
  /* 113e3add mov eax, 2 */
  EAX = (0x2u);
  /* 113e3ae2 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3ae7:;
  /* 113e3ae7 jmp 0x113e3a98 */
  goto L_113e3a98;
L_113e3ae9:;
  /* 113e3ae9 mov eax, 3 */
  EAX = (0x3u);
  /* 113e3aee jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3af3:;
  /* 113e3af3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3af7 jle 0x113e3b6c */
  if ((C.zf||C.sf!=C.of)) goto L_113e3b6c;
  /* 113e3af9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3afd jae 0x113e3b09 */
  if (!C.cf) goto L_113e3b09;
  /* 113e3aff mov eax, 1 */
  EAX = (0x1u);
  /* 113e3b04 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3b09:;
  /* 113e3b09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 113e3b0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 113e3b0f jmp 0x113e3b1a */
  goto L_113e3b1a;
L_113e3b11:;
  /* 113e3b11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3b14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3b17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_113e3b1a:;
  /* 113e3b1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3b1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e3b1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e3b21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3b23 je 0x113e3b62 */
  if (C.zf) goto L_113e3b62;
  /* 113e3b25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3b28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e3b2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113e3b2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e3b2f je 0x113e3b62 */
  if (C.zf) goto L_113e3b62;
  /* 113e3b31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3b36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e3b38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113e3b3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113e3b3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3b41 jl 0x113e3b60 */
  if ((C.sf!=C.of)) goto L_113e3b60;
  /* 113e3b43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3b46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e3b48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e3b4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113e3b4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3b4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113e3b52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3b54 jg 0x113e3b60 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e3b60;
  /* 113e3b56 mov eax, 2 */
  EAX = (0x2u);
  /* 113e3b5b jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3b60:;
  /* 113e3b60 jmp 0x113e3b11 */
  goto L_113e3b11;
L_113e3b62:;
  /* 113e3b62 mov eax, 1 */
  EAX = (0x1u);
  /* 113e3b67 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3b6c:;
  /* 113e3b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3b70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e3b73 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3b74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3b77 push edx */
  push32((uint32_t)(EDX));
  /* 113e3b78 push 9 */
  push32((uint32_t)(0x9u));
  /* 113e3b7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113e3b7d push eax */
  push32((uint32_t)(EAX));
  /* 113e3b7e call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e3b84u);
  /* 113e3b84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113e3b87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3b8b jne 0x113e3b94 */
  if (!C.zf) goto L_113e3b94;
  /* 113e3b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3b8f jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3b94:;
  /* 113e3b94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e3b9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e3b9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113e3ba0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3ba3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e3ba5 call 0x113d6ed0 */
  push32(0x113e3baau); f_113d6ed0();
  /* 113e3baa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 113e3bad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3bb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 113e3bb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113e3bb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e3bbd jmp 0x113e3bd6 */
  goto L_113e3bd6;
  /* 113e3bbf mov eax, 1 */
  EAX = (0x1u);
  /* 113e3bc4 ret  */
  ESPCHK(0x113e38e0u, _esp0);
  ESP += 4; return;
  /* 113e3bc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3bc8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113e3bcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e3bd6:;
  /* 113e3bd6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3bda jne 0x113e3be3 */
  if (!C.zf) goto L_113e3be3;
  /* 113e3bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3bde jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3be3:;
  /* 113e3be3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e3be6 push edx */
  push32((uint32_t)(EDX));
  /* 113e3be7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e3bea push eax */
  push32((uint32_t)(EAX));
  /* 113e3beb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e3bee push ecx */
  push32((uint32_t)(ECX));
  /* 113e3bef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e3bf2 push edx */
  push32((uint32_t)(EDX));
  /* 113e3bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3bf5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113e3bf8 push eax */
  push32((uint32_t)(EAX));
  /* 113e3bf9 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e3bffu);
  /* 113e3bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3c01 jne 0x113e3c0a */
  if (!C.zf) goto L_113e3c0a;
  /* 113e3c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3c05 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3c0a:;
  /* 113e3c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 113e3c0e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e3c11 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3c12 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3c15 push edx */
  push32((uint32_t)(EDX));
  /* 113e3c16 push 9 */
  push32((uint32_t)(0x9u));
  /* 113e3c18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113e3c1b push eax */
  push32((uint32_t)(EAX));
  /* 113e3c1c call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e3c22u);
  /* 113e3c22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113e3c25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3c29 jne 0x113e3c32 */
  if (!C.zf) goto L_113e3c32;
  /* 113e3c2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3c2d jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3c32:;
  /* 113e3c32 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113e3c39 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3c3c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113e3c3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3c41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113e3c43 call 0x113d6ed0 */
  push32(0x113e3c48u); f_113d6ed0();
  /* 113e3c48 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 113e3c4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113e3c4e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 113e3c51 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113e3c54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113e3c5b jmp 0x113e3c74 */
  goto L_113e3c74;
  /* 113e3c5d mov eax, 1 */
  EAX = (0x1u);
  /* 113e3c62 ret  */
  ESPCHK(0x113e38e0u, _esp0);
  ESP += 4; return;
  /* 113e3c63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3c66 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 113e3c6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113e3c74:;
  /* 113e3c74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3c78 jne 0x113e3c7e */
  if (!C.zf) goto L_113e3c7e;
  /* 113e3c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3c7c jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3c7e:;
  /* 113e3c7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3c81 push edx */
  push32((uint32_t)(EDX));
  /* 113e3c82 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e3c85 push eax */
  push32((uint32_t)(EAX));
  /* 113e3c86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113e3c89 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3c8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113e3c8d push edx */
  push32((uint32_t)(EDX));
  /* 113e3c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 113e3c90 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113e3c93 push eax */
  push32((uint32_t)(EAX));
  /* 113e3c94 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113e3c9au);
  /* 113e3c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3c9c jne 0x113e3ca2 */
  if (!C.zf) goto L_113e3ca2;
  /* 113e3c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3ca0 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3ca2:;
  /* 113e3ca2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113e3ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3ca6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113e3ca9 push edx */
  push32((uint32_t)(EDX));
  /* 113e3caa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113e3cad push eax */
  push32((uint32_t)(EAX));
  /* 113e3cae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113e3cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3cb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e3cb5 push edx */
  push32((uint32_t)(EDX));
  /* 113e3cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3cb9 push eax */
  push32((uint32_t)(EAX));
  /* 113e3cba call dword ptr [0x114022b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022b0))), 0x113e3cc0u);
  /* 113e3cc0 jmp 0x113e3cc4 */
  goto L_113e3cc4;
L_113e3cc2:;
  /* 113e3cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e3cc4:;
  /* 113e3cc4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 113e3cc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e3cca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113e3cd1 pop edi */
  EDI = (pop32());
  /* 113e3cd2 pop esi */
  ESI = (pop32());
  /* 113e3cd3 pop ebx */
  EBX = (pop32());
  /* 113e3cd4 mov esp, ebp */
  ESP = (EBP);
  /* 113e3cd6 pop ebp */
  EBP = (pop32());
  /* 113e3cd7 ret  */
  ESPCHK(0x113e38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ce0 @ 0x113e3ce0 (80 bytes, 32 insns) */
void f_113e3ce0(void) {
  FTRACE(0x113e3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3ce1 mov ebp, esp */
  EBP = (ESP);
  /* 113e3ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3ce6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e3ce9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e3cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3cef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113e3cf2:;
  /* 113e3cf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3cf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e3cfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3d00 je 0x113e3d17 */
  if (C.zf) goto L_113e3d17;
  /* 113e3d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3d05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e3d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3d0a je 0x113e3d17 */
  if (C.zf) goto L_113e3d17;
  /* 113e3d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3d0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3d12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e3d15 jmp 0x113e3cf2 */
  goto L_113e3cf2;
L_113e3d17:;
  /* 113e3d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3d1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113e3d1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e3d1f jne 0x113e3d29 */
  if (!C.zf) goto L_113e3d29;
  /* 113e3d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3d24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3d27 jmp 0x113e3d2c */
  goto L_113e3d2c;
L_113e3d29:;
  /* 113e3d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_113e3d2c:;
  /* 113e3d2c mov esp, ebp */
  ESP = (EBP);
  /* 113e3d2e pop ebp */
  EBP = (pop32());
  /* 113e3d2f ret  */
  ESPCHK(0x113e3ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x113e3d30 (736 bytes, 224 insns) */
void f_113e3d30(void) {
  FTRACE(0x113e3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 113e3d31 mov ebp, esp */
  EBP = (ESP);
  /* 113e3d33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3d36 push esi */
  push32((uint32_t)(ESI));
  /* 113e3d37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3d3b je 0x113e3d5c */
  if (C.zf) goto L_113e3d5c;
  /* 113e3d3d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113e3d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3d42 push eax */
  push32((uint32_t)(EAX));
  /* 113e3d43 call 0x113e4180 */
  push32(0x113e3d48u); f_113e4180();
  /* 113e3d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3d4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113e3d4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3d52 je 0x113e3d5c */
  if (C.zf) goto L_113e3d5c;
  /* 113e3d54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3d57 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3d5a jne 0x113e3d64 */
  if (!C.zf) goto L_113e3d64;
L_113e3d5c:;
  /* 113e3d5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3d5f jmp 0x113e400b */
  goto L_113e400b;
L_113e3d64:;
  /* 113e3d64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3d67 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113e3d6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e3d6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3d6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113e3d70 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e3d73 mov ecx, dword ptr [0x113ff534] */
  ECX = (r32((uint32_t)(0x113ff534)));
  /* 113e3d79 cmp ecx, dword ptr [0x113ff538] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113ff538))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3d7f jne 0x113e3d95 */
  if (!C.zf) goto L_113e3d95;
  /* 113e3d81 mov edx, dword ptr [0x113ff534] */
  EDX = (r32((uint32_t)(0x113ff534)));
  /* 113e3d87 push edx */
  push32((uint32_t)(EDX));
  /* 113e3d88 call 0x113e4090 */
  push32(0x113e3d8du); f_113e4090();
  /* 113e3d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3d90 mov dword ptr [0x113ff534], eax */
  w32((uint32_t)(0x113ff534), (EAX));
L_113e3d95:;
  /* 113e3d95 cmp dword ptr [0x113ff534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3d9c jne 0x113e3e55 */
  if (!C.zf) goto L_113e3e55;
  /* 113e3da2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3da6 je 0x113e3dc7 */
  if (C.zf) goto L_113e3dc7;
  /* 113e3da8 cmp dword ptr [0x113ff53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3daf je 0x113e3dc7 */
  if (C.zf) goto L_113e3dc7;
  /* 113e3db1 call 0x113e3830 */
  push32(0x113e3db6u); f_113e3830();
  /* 113e3db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e3db8 je 0x113e3dc2 */
  if (C.zf) goto L_113e3dc2;
  /* 113e3dba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3dbd jmp 0x113e400b */
  goto L_113e400b;
L_113e3dc2:;
  /* 113e3dc2 jmp 0x113e3e55 */
  goto L_113e3e55;
L_113e3dc7:;
  /* 113e3dc7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3dcb je 0x113e3dd4 */
  if (C.zf) goto L_113e3dd4;
  /* 113e3dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3dcf jmp 0x113e400b */
  goto L_113e400b;
L_113e3dd4:;
  /* 113e3dd4 cmp dword ptr [0x113ff534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3ddb jne 0x113e3e14 */
  if (!C.zf) goto L_113e3e14;
  /* 113e3ddd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 113e3de2 push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e3de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3de9 push 4 */
  push32((uint32_t)(0x4u));
  /* 113e3deb call 0x113d3d30 */
  push32(0x113e3df0u); f_113d3d30();
  /* 113e3df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3df3 mov dword ptr [0x113ff534], eax */
  w32((uint32_t)(0x113ff534), (EAX));
  /* 113e3df8 cmp dword ptr [0x113ff534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3dff jne 0x113e3e09 */
  if (!C.zf) goto L_113e3e09;
  /* 113e3e01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3e04 jmp 0x113e400b */
  goto L_113e400b;
L_113e3e09:;
  /* 113e3e09 mov eax, dword ptr [0x113ff534] */
  EAX = (r32((uint32_t)(0x113ff534)));
  /* 113e3e0e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113e3e14:;
  /* 113e3e14 cmp dword ptr [0x113ff53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3e1b jne 0x113e3e55 */
  if (!C.zf) goto L_113e3e55;
  /* 113e3e1d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 113e3e22 push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e3e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3e29 push 4 */
  push32((uint32_t)(0x4u));
  /* 113e3e2b call 0x113d3d30 */
  push32(0x113e3e30u); f_113d3d30();
  /* 113e3e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3e33 mov dword ptr [0x113ff53c], eax */
  w32((uint32_t)(0x113ff53c), (EAX));
  /* 113e3e38 cmp dword ptr [0x113ff53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3e3f jne 0x113e3e49 */
  if (!C.zf) goto L_113e3e49;
  /* 113e3e41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3e44 jmp 0x113e400b */
  goto L_113e400b;
L_113e3e49:;
  /* 113e3e49 mov ecx, dword ptr [0x113ff53c] */
  ECX = (r32((uint32_t)(0x113ff53c)));
  /* 113e3e4f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_113e3e55:;
  /* 113e3e55 mov edx, dword ptr [0x113ff534] */
  EDX = (r32((uint32_t)(0x113ff534)));
  /* 113e3e5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113e3e5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3e61 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3e64 push eax */
  push32((uint32_t)(EAX));
  /* 113e3e65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3e68 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3e69 call 0x113e4010 */
  push32(0x113e3e6eu); f_113e4010();
  /* 113e3e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3e71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e3e74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3e78 jl 0x113e3f11 */
  if ((C.sf!=C.of)) goto L_113e3f11;
  /* 113e3e7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3e81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3e84 je 0x113e3f11 */
  if (C.zf) goto L_113e3f11;
  /* 113e3e8a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3e8e je 0x113e3f03 */
  if (C.zf) goto L_113e3f03;
  /* 113e3e90 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3e92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3e98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113e3e9b push edx */
  push32((uint32_t)(EDX));
  /* 113e3e9c call 0x113d47c0 */
  push32(0x113e3ea1u); f_113d47c0();
  /* 113e3ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3ea4 jmp 0x113e3eaf */
  goto L_113e3eaf;
L_113e3ea6:;
  /* 113e3ea6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3eac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113e3eaf:;
  /* 113e3eaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3eb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3eb5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3eb9 je 0x113e3ed0 */
  if (C.zf) goto L_113e3ed0;
  /* 113e3ebb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3ec1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3ec4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3ec7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 113e3ecb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113e3ece jmp 0x113e3ea6 */
  goto L_113e3ea6;
L_113e3ed0:;
  /* 113e3ed0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 113e3ed5 push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e3eda push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3edc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3edf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113e3ee2 push eax */
  push32((uint32_t)(EAX));
  /* 113e3ee3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3ee7 call 0x113d41c0 */
  push32(0x113e3eecu); f_113d41c0();
  /* 113e3eec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3eef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e3ef2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3ef6 je 0x113e3f01 */
  if (C.zf) goto L_113e3f01;
  /* 113e3ef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3efb mov dword ptr [0x113ff534], edx */
  w32((uint32_t)(0x113ff534), (EDX));
L_113e3f01:;
  /* 113e3f01 jmp 0x113e3f0f */
  goto L_113e3f0f;
L_113e3f03:;
  /* 113e3f03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3f06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3f0c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_113e3f0f:;
  /* 113e3f0f jmp 0x113e3f84 */
  goto L_113e3f84;
L_113e3f11:;
  /* 113e3f11 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3f15 jne 0x113e3f7d */
  if (!C.zf) goto L_113e3f7d;
  /* 113e3f17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3f1b jge 0x113e3f25 */
  if ((C.sf==C.of)) goto L_113e3f25;
  /* 113e3f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3f20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e3f22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113e3f25:;
  /* 113e3f25 push 0xce */
  push32((uint32_t)(0xceu));
  /* 113e3f2a push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e3f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3f31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3f34 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 113e3f3b push edx */
  push32((uint32_t)(EDX));
  /* 113e3f3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3f3f push eax */
  push32((uint32_t)(EAX));
  /* 113e3f40 call 0x113d41c0 */
  push32(0x113e3f45u); f_113d41c0();
  /* 113e3f45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3f48 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e3f4b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3f4f jne 0x113e3f59 */
  if (!C.zf) goto L_113e3f59;
  /* 113e3f51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e3f54 jmp 0x113e400b */
  goto L_113e400b;
L_113e3f59:;
  /* 113e3f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3f5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3f62 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 113e3f65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e3f68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3f6b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 113e3f73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e3f76 mov dword ptr [0x113ff534], eax */
  w32((uint32_t)(0x113ff534), (EAX));
  /* 113e3f7b jmp 0x113e3f84 */
  goto L_113e3f84;
L_113e3f7d:;
  /* 113e3f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e3f7f jmp 0x113e400b */
  goto L_113e400b;
L_113e3f84:;
  /* 113e3f84 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3f88 je 0x113e4009 */
  if (C.zf) goto L_113e4009;
  /* 113e3f8a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 113e3f8f push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e3f94 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3f96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3f99 push ecx */
  push32((uint32_t)(ECX));
  /* 113e3f9a call 0x113d6b60 */
  push32(0x113e3f9fu); f_113d6b60();
  /* 113e3f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fa2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fa5 push eax */
  push32((uint32_t)(EAX));
  /* 113e3fa6 call 0x113d3d30 */
  push32(0x113e3fabu); f_113d3d30();
  /* 113e3fab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113e3fb1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e3fb5 je 0x113e4009 */
  if (C.zf) goto L_113e4009;
  /* 113e3fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e3fba push edx */
  push32((uint32_t)(EDX));
  /* 113e3fbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e3fbe push eax */
  push32((uint32_t)(EAX));
  /* 113e3fbf call 0x113d6ce0 */
  push32(0x113e3fc4u); f_113d6ce0();
  /* 113e3fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fc7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e3fca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3fcd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e3fd0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113e3fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3fd8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113e3fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e3fde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e3fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e3fe4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e3fe7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e3fe9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e3feb not edx */
  EDX = (~(EDX));
  /* 113e3fed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 113e3ff0 push edx */
  push32((uint32_t)(EDX));
  /* 113e3ff1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e3ff4 push eax */
  push32((uint32_t)(EAX));
  /* 113e3ff5 call dword ptr [0x114022ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ac))), 0x113e3ffbu);
  /* 113e3ffb push 2 */
  push32((uint32_t)(0x2u));
  /* 113e3ffd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e4000 push ecx */
  push32((uint32_t)(ECX));
  /* 113e4001 call 0x113d47c0 */
  push32(0x113e4006u); f_113d47c0();
  /* 113e4006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e4009:;
  /* 113e4009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e400b:;
  /* 113e400b pop esi */
  ESI = (pop32());
  /* 113e400c mov esp, ebp */
  ESP = (EBP);
  /* 113e400e pop ebp */
  EBP = (pop32());
  /* 113e400f ret  */
  ESPCHK(0x113e3d30u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x113e4010 (124 bytes, 47 insns) */
void f_113e4010(void) {
  FTRACE(0x113e4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e4010 push ebp */
  push32((uint32_t)(EBP));
  /* 113e4011 mov ebp, esp */
  EBP = (ESP);
  /* 113e4013 push ecx */
  push32((uint32_t)(ECX));
  /* 113e4014 mov eax, dword ptr [0x113ff534] */
  EAX = (r32((uint32_t)(0x113ff534)));
  /* 113e4019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e401c jmp 0x113e4027 */
  goto L_113e4027;
L_113e401e:;
  /* 113e401e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e4021 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4024 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113e4027:;
  /* 113e4027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e402a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e402d je 0x113e407a */
  if (C.zf) goto L_113e407a;
  /* 113e402f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e4032 push eax */
  push32((uint32_t)(EAX));
  /* 113e4033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e4036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e4038 push edx */
  push32((uint32_t)(EDX));
  /* 113e4039 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e403c push eax */
  push32((uint32_t)(EAX));
  /* 113e403d call 0x113e37e0 */
  push32(0x113e4042u); f_113e37e0();
  /* 113e4042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e4047 jne 0x113e4078 */
  if (!C.zf) goto L_113e4078;
  /* 113e4049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e404c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e404e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e4051 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 113e4055 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4058 je 0x113e406a */
  if (C.zf) goto L_113e406a;
  /* 113e405a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e405d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e405f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e4062 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 113e4066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e4068 jne 0x113e4078 */
  if (!C.zf) goto L_113e4078;
L_113e406a:;
  /* 113e406a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e406d sub eax, dword ptr [0x113ff534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e4073 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113e4076 jmp 0x113e4088 */
  goto L_113e4088;
L_113e4078:;
  /* 113e4078 jmp 0x113e401e */
  goto L_113e401e;
L_113e407a:;
  /* 113e407a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e407d sub eax, dword ptr [0x113ff534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e4083 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113e4086 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_113e4088:;
  /* 113e4088 mov esp, ebp */
  ESP = (EBP);
  /* 113e408a pop ebp */
  EBP = (pop32());
  /* 113e408b ret  */
  ESPCHK(0x113e4010u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x113e4090 (238 bytes, 80 insns) */
void f_113e4090(void) {
  FTRACE(0x113e4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e4090 push ebp */
  push32((uint32_t)(EBP));
  /* 113e4091 mov ebp, esp */
  EBP = (ESP);
  /* 113e4093 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e4096 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e409d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e40a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e40a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e40a7 jne 0x113e40b0 */
  if (!C.zf) goto L_113e40b0;
  /* 113e40a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e40ab jmp 0x113e417a */
  goto L_113e417a;
L_113e40b0:;
  /* 113e40b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e40b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e40b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e40b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e40bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e40be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e40c0 je 0x113e40cd */
  if (C.zf) goto L_113e40cd;
  /* 113e40c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e40c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e40c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113e40cb jmp 0x113e40b0 */
  goto L_113e40b0;
L_113e40cd:;
  /* 113e40cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 113e40d2 push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e40d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113e40d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e40dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 113e40e3 push eax */
  push32((uint32_t)(EAX));
  /* 113e40e4 call 0x113d3d30 */
  push32(0x113e40e9u); f_113d3d30();
  /* 113e40e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e40ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e40ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e40f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e40f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e40f9 jne 0x113e4105 */
  if (!C.zf) goto L_113e4105;
  /* 113e40fb push 9 */
  push32((uint32_t)(0x9u));
  /* 113e40fd call 0x113d2ca0 */
  push32(0x113e4102u); f_113d2ca0();
  /* 113e4102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e4105:;
  /* 113e4105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e4108 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113e410b:;
  /* 113e410b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e410e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4111 je 0x113e416e */
  if (C.zf) goto L_113e416e;
  /* 113e4113 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 113e4118 push 0x113fb9b0 */
  push32((uint32_t)(0x113fb9b0u));
  /* 113e411d push 2 */
  push32((uint32_t)(0x2u));
  /* 113e411f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e4122 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113e4124 push edx */
  push32((uint32_t)(EDX));
  /* 113e4125 call 0x113d6b60 */
  push32(0x113e412au); f_113d6b60();
  /* 113e412a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e412d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4130 push eax */
  push32((uint32_t)(EAX));
  /* 113e4131 call 0x113d3d30 */
  push32(0x113e4136u); f_113d3d30();
  /* 113e4136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e413c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113e413e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e4141 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4144 je 0x113e415a */
  if (C.zf) goto L_113e415a;
  /* 113e4146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e4149 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113e414b push ecx */
  push32((uint32_t)(ECX));
  /* 113e414c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e414f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113e4151 push eax */
  push32((uint32_t)(EAX));
  /* 113e4152 call 0x113d6ce0 */
  push32(0x113e4157u); f_113d6ce0();
  /* 113e4157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e415a:;
  /* 113e415a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e415d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4160 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113e4163 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e4166 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4169 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e416c jmp 0x113e410b */
  goto L_113e410b;
L_113e416e:;
  /* 113e416e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e4171 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113e4177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113e417a:;
  /* 113e417a mov esp, ebp */
  ESP = (EBP);
  /* 113e417c pop ebp */
  EBP = (pop32());
  /* 113e417d ret  */
  ESPCHK(0x113e4090u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x113e4180 (237 bytes, 81 insns) */
void f_113e4180(void) {
  FTRACE(0x113e4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e4180 push ebp */
  push32((uint32_t)(EBP));
  /* 113e4181 mov ebp, esp */
  EBP = (ESP);
  /* 113e4183 push ecx */
  push32((uint32_t)(ECX));
  /* 113e4184 cmp dword ptr [0x11400c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e418b jne 0x113e41a2 */
  if (!C.zf) goto L_113e41a2;
  /* 113e418d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e4190 push eax */
  push32((uint32_t)(EAX));
  /* 113e4191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e4194 push ecx */
  push32((uint32_t)(ECX));
  /* 113e4195 call 0x113e4280 */
  push32(0x113e419au); f_113e4280();
  /* 113e419a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e419d jmp 0x113e4269 */
  goto L_113e4269;
L_113e41a2:;
  /* 113e41a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113e41a4 call 0x113d7730 */
  push32(0x113e41a9u); f_113d7730();
  /* 113e41a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e41ac jmp 0x113e41b7 */
  goto L_113e41b7;
L_113e41ae:;
  /* 113e41ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e41b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e41b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113e41b7:;
  /* 113e41b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e41ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 113e41be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 113e41c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e41c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e41cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e41cd je 0x113e424b */
  if (C.zf) goto L_113e424b;
  /* 113e41cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e41d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e41d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e41d9 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113e41df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113e41e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e41e4 je 0x113e4236 */
  if (C.zf) goto L_113e4236;
  /* 113e41e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e41e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e41ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113e41ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e41f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e41f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e41f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e41f8 jne 0x113e4208 */
  if (!C.zf) goto L_113e4208;
  /* 113e41fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113e41fc call 0x113d77d0 */
  push32(0x113e4201u); f_113d77d0();
  /* 113e4201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e4206 jmp 0x113e4269 */
  goto L_113e4269;
L_113e4208:;
  /* 113e4208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e420b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e4211 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113e4214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e4217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e4219 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e421b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113e421d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4220 jne 0x113e4234 */
  if (!C.zf) goto L_113e4234;
  /* 113e4222 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113e4224 call 0x113d77d0 */
  push32(0x113e4229u); f_113d77d0();
  /* 113e4229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e422c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e422f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e4232 jmp 0x113e4269 */
  goto L_113e4269;
L_113e4234:;
  /* 113e4234 jmp 0x113e4246 */
  goto L_113e4246;
L_113e4236:;
  /* 113e4236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e4239 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e423f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4242 jne 0x113e4246 */
  if (!C.zf) goto L_113e4246;
  /* 113e4244 jmp 0x113e424b */
  goto L_113e424b;
L_113e4246:;
  /* 113e4246 jmp 0x113e41ae */
  goto L_113e41ae;
L_113e424b:;
  /* 113e424b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113e424d call 0x113d77d0 */
  push32(0x113e4252u); f_113d77d0();
  /* 113e4252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e4255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e4258 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e425d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e4260 jne 0x113e4267 */
  if (!C.zf) goto L_113e4267;
  /* 113e4262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e4265 jmp 0x113e4269 */
  goto L_113e4269;
L_113e4267:;
  /* 113e4267 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e4269:;
  /* 113e4269 mov esp, ebp */
  ESP = (EBP);
  /* 113e426b pop ebp */
  EBP = (pop32());
  /* 113e426c ret  */
  ESPCHK(0x113e4180u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x113e4280 (193 bytes, 87 insns) */
void f_113e4280(void) {
  FTRACE(0x113e4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e4280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e4282 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113e4286 push ebx */
  push32((uint32_t)(EBX));
  /* 113e4287 mov ebx, eax */
  EBX = (EAX);
  /* 113e4289 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113e428c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 113e4290 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113e4296 je 0x113e42ab */
  if (C.zf) goto L_113e42ab;
L_113e4298:;
  /* 113e4298 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 113e429a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113e429b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e429d je 0x113e4270 */
  if (C.zf) { jmp_ind(0x113e4270u); return; }
  /* 113e429f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 113e42a1 je 0x113e42f4 */
  if (C.zf) goto L_113e42f4;
  /* 113e42a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113e42a9 jne 0x113e4298 */
  if (!C.zf) goto L_113e4298;
L_113e42ab:;
  /* 113e42ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 113e42ad push edi */
  push32((uint32_t)(EDI));
  /* 113e42ae mov eax, ebx */
  EAX = (EBX);
  /* 113e42b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 113e42b3 push esi */
  push32((uint32_t)(ESI));
  /* 113e42b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_113e42b6:;
  /* 113e42b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113e42b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 113e42bd mov eax, ecx */
  EAX = (ECX);
  /* 113e42bf mov esi, edi */
  ESI = (EDI);
  /* 113e42c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 113e42c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113e42c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113e42c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113e42ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e42cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 113e42cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 113e42d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e42d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 113e42da jne 0x113e42f8 */
  if (!C.zf) goto L_113e42f8;
  /* 113e42dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 113e42e1 je 0x113e42b6 */
  if (C.zf) goto L_113e42b6;
  /* 113e42e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 113e42e8 jne 0x113e42f2 */
  if (!C.zf) goto L_113e42f2;
  /* 113e42ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 113e42f0 jne 0x113e42b6 */
  if (!C.zf) goto L_113e42b6;
L_113e42f2:;
  /* 113e42f2 pop esi */
  ESI = (pop32());
  /* 113e42f3 pop edi */
  EDI = (pop32());
L_113e42f4:;
  /* 113e42f4 pop ebx */
  EBX = (pop32());
  /* 113e42f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e42f7 ret  */
  ESPCHK(0x113e4280u, _esp0);
  ESP += 4; return;
L_113e42f8:;
  /* 113e42f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 113e42fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e42fd je 0x113e4335 */
  if (C.zf) goto L_113e4335;
  /* 113e42ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113e4301 je 0x113e42f2 */
  if (C.zf) goto L_113e42f2;
  /* 113e4303 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e4305 je 0x113e432e */
  if (C.zf) goto L_113e432e;
  /* 113e4307 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113e4309 je 0x113e42f2 */
  if (C.zf) goto L_113e42f2;
  /* 113e430b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113e430e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e4310 je 0x113e4327 */
  if (C.zf) goto L_113e4327;
  /* 113e4312 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113e4314 je 0x113e42f2 */
  if (C.zf) goto L_113e42f2;
  /* 113e4316 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113e4318 je 0x113e4320 */
  if (C.zf) goto L_113e4320;
  /* 113e431a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113e431c je 0x113e42f2 */
  if (C.zf) goto L_113e42f2;
  /* 113e431e jmp 0x113e42b6 */
  goto L_113e42b6;
L_113e4320:;
  /* 113e4320 pop esi */
  ESI = (pop32());
  /* 113e4321 pop edi */
  EDI = (pop32());
  /* 113e4322 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 113e4325 pop ebx */
  EBX = (pop32());
  /* 113e4326 ret  */
  ESPCHK(0x113e4280u, _esp0);
  ESP += 4; return;
L_113e4327:;
  /* 113e4327 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 113e432a pop esi */
  ESI = (pop32());
  /* 113e432b pop edi */
  EDI = (pop32());
  /* 113e432c pop ebx */
  EBX = (pop32());
  /* 113e432d ret  */
  ESPCHK(0x113e4280u, _esp0);
  ESP += 4; return;
L_113e432e:;
  /* 113e432e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 113e4331 pop esi */
  ESI = (pop32());
  /* 113e4332 pop edi */
  EDI = (pop32());
  /* 113e4333 pop ebx */
  EBX = (pop32());
  /* 113e4334 ret  */
  ESPCHK(0x113e4280u, _esp0);
  ESP += 4; return;
L_113e4335:;
  /* 113e4335 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 113e4338 pop esi */
  ESI = (pop32());
  /* 113e4339 pop edi */
  EDI = (pop32());
  /* 113e433a pop ebx */
  EBX = (pop32());
  /* 113e433b ret  */
  ESPCHK(0x113e4280u, _esp0);
  ESP += 4; return;
  /* 113e433c jmp dword ptr [0x11402340] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11402340)))); return;
}

/* RtlUnwind @ 0x113e448c (6 bytes, 1 insns) */
void f_113e448c(void) {
  FTRACE(0x113e448cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e448c jmp dword ptr [0x114022e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x114022e4)))); return;
}

