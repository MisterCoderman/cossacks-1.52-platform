#include "recomp.h"

/* FUN_10001000 @ 0x11ca1000 (20 bytes, 6 insns) */
void f_11ca1000(void) {
  FTRACE(0x11ca1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca1005 jne 0x11ca100c */
  if (!C.zf) goto L_11ca100c;
  /* 11ca1007 call 0x11ca1020 */
  push32(0x11ca100cu); f_11ca1020();
L_11ca100c:;
  /* 11ca100c mov eax, 1 */
  EAX = (0x1u);
  /* 11ca1011 ret 0xc */
  ESPCHK(0x11ca1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11ca1020 (461 bytes, 125 insns) */
void f_11ca1020(void) {
  FTRACE(0x11ca1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1020 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1021 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1022 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1023 mov esi, dword ptr [0x11ca7160] */
  ESI = (r32((uint32_t)(0x11ca7160)));
  /* 11ca1029 push edi */
  push32((uint32_t)(EDI));
  /* 11ca102a push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca102f call esi */
  call_ind((uint32_t)(ESI), 0x11ca1031u);
  /* 11ca1031 mov ebx, dword ptr [0x11ca7170] */
  EBX = (r32((uint32_t)(0x11ca7170)));
  /* 11ca1037 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca1039 push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca103e call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1040u);
  /* 11ca1040 push 0x11caac20 */
  push32((uint32_t)(0x11caac20u));
  /* 11ca1045 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1047u);
  /* 11ca1047 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca1049 push 0x11caac20 */
  push32((uint32_t)(0x11caac20u));
  /* 11ca104e call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1050u);
  /* 11ca1050 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca1052 push 0x11ca8030 */
  push32((uint32_t)(0x11ca8030u));
  /* 11ca1057 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1059u);
  /* 11ca1059 mov edi, dword ptr [0x11ca7174] */
  EDI = (r32((uint32_t)(0x11ca7174)));
  /* 11ca105f push 0x11ca819c */
  push32((uint32_t)(0x11ca819cu));
  /* 11ca1064 push 0x11caac90 */
  push32((uint32_t)(0x11caac90u));
  /* 11ca1069 call edi */
  call_ind((uint32_t)(EDI), 0x11ca106bu);
  /* 11ca106b push 0x11ca8190 */
  push32((uint32_t)(0x11ca8190u));
  /* 11ca1070 push 0x11caac10 */
  push32((uint32_t)(0x11caac10u));
  /* 11ca1075 call dword ptr [0x11ca716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca716c))), 0x11ca107bu);
  /* 11ca107b push 0x11caac78 */
  push32((uint32_t)(0x11caac78u));
  /* 11ca1080 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1082u);
  /* 11ca1082 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca1084 push 0x11caac78 */
  push32((uint32_t)(0x11caac78u));
  /* 11ca1089 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca108bu);
  /* 11ca108b mov ebp, dword ptr [0x11ca717c] */
  EBP = (r32((uint32_t)(0x11ca717c)));
  /* 11ca1091 push 0x11ca8184 */
  push32((uint32_t)(0x11ca8184u));
  /* 11ca1096 push 0x11caac18 */
  push32((uint32_t)(0x11caac18u));
  /* 11ca109b call ebp */
  call_ind((uint32_t)(EBP), 0x11ca109du);
  /* 11ca109d mov esi, dword ptr [0x11ca7180] */
  ESI = (r32((uint32_t)(0x11ca7180)));
  /* 11ca10a3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca10a6 push 0x11ca8174 */
  push32((uint32_t)(0x11ca8174u));
  /* 11ca10ab push 0x11caac60 */
  push32((uint32_t)(0x11caac60u));
  /* 11ca10b0 call esi */
  call_ind((uint32_t)(ESI), 0x11ca10b2u);
  /* 11ca10b2 push 0x11ca8160 */
  push32((uint32_t)(0x11ca8160u));
  /* 11ca10b7 push 0x11caac68 */
  push32((uint32_t)(0x11caac68u));
  /* 11ca10bc call esi */
  call_ind((uint32_t)(ESI), 0x11ca10beu);
  /* 11ca10be push 0x11ca814c */
  push32((uint32_t)(0x11ca814cu));
  /* 11ca10c3 push 0x11caac28 */
  push32((uint32_t)(0x11caac28u));
  /* 11ca10c8 call esi */
  call_ind((uint32_t)(ESI), 0x11ca10cau);
  /* 11ca10ca push 0x11ca8138 */
  push32((uint32_t)(0x11ca8138u));
  /* 11ca10cf push 0x11caac58 */
  push32((uint32_t)(0x11caac58u));
  /* 11ca10d4 call esi */
  call_ind((uint32_t)(ESI), 0x11ca10d6u);
  /* 11ca10d6 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ca10d8 push 0x11caacc0 */
  push32((uint32_t)(0x11caacc0u));
  /* 11ca10dd call ebx */
  call_ind((uint32_t)(EBX), 0x11ca10dfu);
  /* 11ca10df push 0x11ca812c */
  push32((uint32_t)(0x11ca812cu));
  /* 11ca10e4 push 0x11caacc0 */
  push32((uint32_t)(0x11caacc0u));
  /* 11ca10e9 call esi */
  call_ind((uint32_t)(ESI), 0x11ca10ebu);
  /* 11ca10eb push 0x11ca811c */
  push32((uint32_t)(0x11ca811cu));
  /* 11ca10f0 push 0x11caacc8 */
  push32((uint32_t)(0x11caacc8u));
  /* 11ca10f5 call esi */
  call_ind((uint32_t)(ESI), 0x11ca10f7u);
  /* 11ca10f7 push 0x11ca810c */
  push32((uint32_t)(0x11ca810cu));
  /* 11ca10fc push 0x11caacd0 */
  push32((uint32_t)(0x11caacd0u));
  /* 11ca1101 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1103u);
  /* 11ca1103 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1106 push 0x11ca8100 */
  push32((uint32_t)(0x11ca8100u));
  /* 11ca110b push 0x11caacd8 */
  push32((uint32_t)(0x11caacd8u));
  /* 11ca1110 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1112u);
  /* 11ca1112 push 0x11ca80f0 */
  push32((uint32_t)(0x11ca80f0u));
  /* 11ca1117 push 0x11caace0 */
  push32((uint32_t)(0x11caace0u));
  /* 11ca111c call esi */
  call_ind((uint32_t)(ESI), 0x11ca111eu);
  /* 11ca111e push 0x11ca80e0 */
  push32((uint32_t)(0x11ca80e0u));
  /* 11ca1123 push 0x11caace8 */
  push32((uint32_t)(0x11caace8u));
  /* 11ca1128 call esi */
  call_ind((uint32_t)(ESI), 0x11ca112au);
  /* 11ca112a push 0x11ca80d4 */
  push32((uint32_t)(0x11ca80d4u));
  /* 11ca112f push 0x11caac80 */
  push32((uint32_t)(0x11caac80u));
  /* 11ca1134 call dword ptr [0x11ca716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca716c))), 0x11ca113au);
  /* 11ca113a push 0x11ca80c8 */
  push32((uint32_t)(0x11ca80c8u));
  /* 11ca113f push 0x11caac88 */
  push32((uint32_t)(0x11caac88u));
  /* 11ca1144 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1146u);
  /* 11ca1146 push 0x11ca80bc */
  push32((uint32_t)(0x11ca80bcu));
  /* 11ca114b push 0x11caac98 */
  push32((uint32_t)(0x11caac98u));
  /* 11ca1150 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1152u);
  /* 11ca1152 push 0x11ca80b0 */
  push32((uint32_t)(0x11ca80b0u));
  /* 11ca1157 push 0x11caaca0 */
  push32((uint32_t)(0x11caaca0u));
  /* 11ca115c call edi */
  call_ind((uint32_t)(EDI), 0x11ca115eu);
  /* 11ca115e push 0x11ca80a4 */
  push32((uint32_t)(0x11ca80a4u));
  /* 11ca1163 push 0x11caaca8 */
  push32((uint32_t)(0x11caaca8u));
  /* 11ca1168 call edi */
  call_ind((uint32_t)(EDI), 0x11ca116au);
  /* 11ca116a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca116d push 0x11ca8098 */
  push32((uint32_t)(0x11ca8098u));
  /* 11ca1172 push 0x11caacb0 */
  push32((uint32_t)(0x11caacb0u));
  /* 11ca1177 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1179u);
  /* 11ca1179 push 0x11ca808c */
  push32((uint32_t)(0x11ca808cu));
  /* 11ca117e push 0x11caacb8 */
  push32((uint32_t)(0x11caacb8u));
  /* 11ca1183 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1185u);
  /* 11ca1185 push 0x11ca8184 */
  push32((uint32_t)(0x11ca8184u));
  /* 11ca118a push 0x11caac48 */
  push32((uint32_t)(0x11caac48u));
  /* 11ca118f call ebp */
  call_ind((uint32_t)(EBP), 0x11ca1191u);
  /* 11ca1191 push 0x11ca8080 */
  push32((uint32_t)(0x11ca8080u));
  /* 11ca1196 push 0x11caac40 */
  push32((uint32_t)(0x11caac40u));
  /* 11ca119b call ebp */
  call_ind((uint32_t)(EBP), 0x11ca119du);
  /* 11ca119d push 0x11ca8074 */
  push32((uint32_t)(0x11ca8074u));
  /* 11ca11a2 push 0x11caac38 */
  push32((uint32_t)(0x11caac38u));
  /* 11ca11a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca11a9u);
  /* 11ca11a9 push 0x11ca8068 */
  push32((uint32_t)(0x11ca8068u));
  /* 11ca11ae push 0x11caac30 */
  push32((uint32_t)(0x11caac30u));
  /* 11ca11b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca11b5u);
  /* 11ca11b5 push 0x11ca8054 */
  push32((uint32_t)(0x11ca8054u));
  /* 11ca11ba push 0x11caac50 */
  push32((uint32_t)(0x11caac50u));
  /* 11ca11bf call esi */
  call_ind((uint32_t)(ESI), 0x11ca11c1u);
  /* 11ca11c1 mov esi, dword ptr [0x11ca7178] */
  ESI = (r32((uint32_t)(0x11ca7178)));
  /* 11ca11c7 push 0x11ca804c */
  push32((uint32_t)(0x11ca804cu));
  /* 11ca11cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca11ce call esi */
  call_ind((uint32_t)(ESI), 0x11ca11d0u);
  /* 11ca11d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca11d3 push 0x11ca8044 */
  push32((uint32_t)(0x11ca8044u));
  /* 11ca11d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca11da call esi */
  call_ind((uint32_t)(ESI), 0x11ca11dcu);
  /* 11ca11dc push 0x11ca8038 */
  push32((uint32_t)(0x11ca8038u));
  /* 11ca11e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca11e3 call esi */
  call_ind((uint32_t)(ESI), 0x11ca11e5u);
  /* 11ca11e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca11e8 pop edi */
  EDI = (pop32());
  /* 11ca11e9 pop esi */
  ESI = (pop32());
  /* 11ca11ea pop ebp */
  EBP = (pop32());
  /* 11ca11eb pop ebx */
  EBX = (pop32());
  /* 11ca11ec ret  */
  ESPCHK(0x11ca1020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11ca11f0 (1007 bytes, 326 insns) [1 switch table(s)] */
void f_11ca11f0(void) {
  FTRACE(0x11ca11f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca11f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca11f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca11f2 push esi */
  push32((uint32_t)(ESI));
  /* 11ca11f3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca11f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca11f6 call dword ptr [0x11ca7114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7114))), 0x11ca11fcu);
  /* 11ca11fc mov ebp, dword ptr [0x11ca710c] */
  EBP = (r32((uint32_t)(0x11ca710c)));
  /* 11ca1202 mov esi, dword ptr [0x11ca711c] */
  ESI = (r32((uint32_t)(0x11ca711c)));
  /* 11ca1208 mov ebx, dword ptr [0x11ca7120] */
  EBX = (r32((uint32_t)(0x11ca7120)));
  /* 11ca120e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1211 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca1213 je 0x11ca139c */
  if (C.zf) goto L_11ca139c;
  /* 11ca1219 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca121b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca121d call dword ptr [0x11ca7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7118))), 0x11ca1223u);
  /* 11ca1223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1226 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11ca1228:;
  /* 11ca1228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca122a call ebp */
  call_ind((uint32_t)(EBP), 0x11ca122cu);
  /* 11ca122c mov ecx, 0xa */
  ECX = (0xau);
  /* 11ca1231 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1233 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11ca1236 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca1239 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca123c shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca123f push eax */
  push32((uint32_t)(EAX));
  /* 11ca1240 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1241 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1243 call dword ptr [0x11ca7128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7128))), 0x11ca1249u);
  /* 11ca1249 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11ca124e push edi */
  push32((uint32_t)(EDI));
  /* 11ca124f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca1251 call dword ptr [0x11ca7128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7128))), 0x11ca1257u);
  /* 11ca1257 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11ca125c push edi */
  push32((uint32_t)(EDI));
  /* 11ca125d push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca125f call dword ptr [0x11ca7128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7128))), 0x11ca1265u);
  /* 11ca1265 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1268 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca1269 cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca126c jl 0x11ca1228 */
  if ((C.sf!=C.of)) goto L_11ca1228;
  /* 11ca126e push 0x11ca81f8 */
  push32((uint32_t)(0x11ca81f8u));
  /* 11ca1273 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1275 push 0x11ca81ec */
  push32((uint32_t)(0x11ca81ecu));
  /* 11ca127a push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca127c call dword ptr [0x11ca712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca712c))), 0x11ca1282u);
  /* 11ca1282 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1285 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1288 ja 0x11ca12ee */
  if ((!C.cf&&!C.zf)) goto L_11ca12ee;
  /* 11ca128a jmp dword ptr [eax*4 + 0x11ca15e0] */
  switch (EAX) {
    case 0: goto L_11ca1291;
    case 1: goto L_11ca12a4;
    case 2: goto L_11ca12b7;
    case 3: goto L_11ca12ca;
    default: x86_unimpl("switch@0x11ca128a out of table"); return;
  }
L_11ca1291:;
  /* 11ca1291 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11ca1296 push 0x11caac90 */
  push32((uint32_t)(0x11caac90u));
  /* 11ca129b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca129d push 0x11caac60 */
  push32((uint32_t)(0x11caac60u));
  /* 11ca12a2 jmp 0x11ca12db */
  goto L_11ca12db;
L_11ca12a4:;
  /* 11ca12a4 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11ca12a9 push 0x11caac90 */
  push32((uint32_t)(0x11caac90u));
  /* 11ca12ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca12b0 push 0x11caac68 */
  push32((uint32_t)(0x11caac68u));
  /* 11ca12b5 jmp 0x11ca12db */
  goto L_11ca12db;
L_11ca12b7:;
  /* 11ca12b7 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11ca12bc push 0x11caac90 */
  push32((uint32_t)(0x11caac90u));
  /* 11ca12c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca12c3 push 0x11caac28 */
  push32((uint32_t)(0x11caac28u));
  /* 11ca12c8 jmp 0x11ca12db */
  goto L_11ca12db;
L_11ca12ca:;
  /* 11ca12ca push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11ca12cf push 0x11caac90 */
  push32((uint32_t)(0x11caac90u));
  /* 11ca12d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca12d6 push 0x11caac58 */
  push32((uint32_t)(0x11caac58u));
L_11ca12db:;
  /* 11ca12db push 0x11caac18 */
  push32((uint32_t)(0x11caac18u));
  /* 11ca12e0 push 0x11caac78 */
  push32((uint32_t)(0x11caac78u));
  /* 11ca12e5 call dword ptr [0x11ca7124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7124))), 0x11ca12ebu);
  /* 11ca12eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca12ee:;
  /* 11ca12ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca12f0 push 0x11caac10 */
  push32((uint32_t)(0x11caac10u));
  /* 11ca12f5 call dword ptr [0x11ca7134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7134))), 0x11ca12fbu);
  /* 11ca12fb push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca12fd call dword ptr [0x11ca7138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7138))), 0x11ca1303u);
  /* 11ca1303 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca1305 call dword ptr [0x11ca7130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7130))), 0x11ca130bu);
  /* 11ca130b mov edi, dword ptr [0x11ca7140] */
  EDI = (r32((uint32_t)(0x11ca7140)));
  /* 11ca1311 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca1313 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1315 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1317u);
  /* 11ca1317 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ca1319 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca131b call edi */
  call_ind((uint32_t)(EDI), 0x11ca131du);
  /* 11ca131d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca131f call ebp */
  call_ind((uint32_t)(EBP), 0x11ca1321u);
  /* 11ca1321 mov edi, dword ptr [0x11ca7144] */
  EDI = (r32((uint32_t)(0x11ca7144)));
  /* 11ca1327 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1328 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca132a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca132c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca132e push 0x11ca81e0 */
  push32((uint32_t)(0x11ca81e0u));
  /* 11ca1333 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca1335 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1337u);
  /* 11ca1337 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1339 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca133bu);
  /* 11ca133b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca133e push eax */
  push32((uint32_t)(EAX));
  /* 11ca133f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1341 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1345 push 0x11ca81d4 */
  push32((uint32_t)(0x11ca81d4u));
  /* 11ca134a push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca134c call edi */
  call_ind((uint32_t)(EDI), 0x11ca134eu);
  /* 11ca134e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1350 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca1352u);
  /* 11ca1352 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1355 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca1358 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca135b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11ca135e shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11ca1361 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca1362 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1364 call dword ptr [0x11ca713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca713c))), 0x11ca136au);
  /* 11ca136a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11ca136c call esi */
  call_ind((uint32_t)(ESI), 0x11ca136eu);
  /* 11ca136e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11ca1370 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1372u);
  /* 11ca1372 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11ca1374 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1376u);
  /* 11ca1376 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11ca1378 call esi */
  call_ind((uint32_t)(ESI), 0x11ca137au);
  /* 11ca137a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11ca137c call ebx */
  call_ind((uint32_t)(EBX), 0x11ca137eu);
  /* 11ca137e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ca1380 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1382u);
  /* 11ca1382 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11ca1384 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1386u);
  /* 11ca1386 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1389 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11ca138b call esi */
  call_ind((uint32_t)(ESI), 0x11ca138du);
  /* 11ca138d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11ca138f call esi */
  call_ind((uint32_t)(ESI), 0x11ca1391u);
  /* 11ca1391 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11ca1393 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1395u);
  /* 11ca1395 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11ca1397 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1399u);
  /* 11ca1399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca139c:;
  /* 11ca139c push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca139e call dword ptr [0x11ca7114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7114))), 0x11ca13a4u);
  /* 11ca13a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca13a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca13a9 je 0x11ca140c */
  if (C.zf) goto L_11ca140c;
  /* 11ca13ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca13ad push 0x11caac88 */
  push32((uint32_t)(0x11caac88u));
  /* 11ca13b2 call dword ptr [0x11ca714c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca714c))), 0x11ca13b8u);
  /* 11ca13b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca13bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca13bd je 0x11ca140c */
  if (C.zf) goto L_11ca140c;
  /* 11ca13bf push 0x11caac80 */
  push32((uint32_t)(0x11caac80u));
  /* 11ca13c4 call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca13cau);
  /* 11ca13ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca13cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca13cf je 0x11ca140c */
  if (C.zf) goto L_11ca140c;
  /* 11ca13d1 mov edi, dword ptr [0x11ca7118] */
  EDI = (r32((uint32_t)(0x11ca7118)));
  /* 11ca13d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca13d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca13db call edi */
  call_ind((uint32_t)(EDI), 0x11ca13ddu);
  /* 11ca13dd push 0x11ca81c8 */
  push32((uint32_t)(0x11ca81c8u));
  /* 11ca13e2 call dword ptr [0x11ca7148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7148))), 0x11ca13e8u);
  /* 11ca13e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca13ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca13ec push 0x11caac88 */
  push32((uint32_t)(0x11caac88u));
  /* 11ca13f1 call dword ptr [0x11ca7158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7158))), 0x11ca13f7u);
  /* 11ca13f7 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11ca13f9 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca13fbu);
  /* 11ca13fb push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11ca13fd call esi */
  call_ind((uint32_t)(ESI), 0x11ca13ffu);
  /* 11ca13ff push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ca1401 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1403u);
  /* 11ca1403 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11ca1405 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1407u);
  /* 11ca1407 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca140a jmp 0x11ca1412 */
  goto L_11ca1412;
L_11ca140c:;
  /* 11ca140c mov edi, dword ptr [0x11ca7118] */
  EDI = (r32((uint32_t)(0x11ca7118)));
L_11ca1412:;
  /* 11ca1412 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1414 call dword ptr [0x11ca715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca715c))), 0x11ca141au);
  /* 11ca141a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca141d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca141f je 0x11ca14c3 */
  if (C.zf) goto L_11ca14c3;
  /* 11ca1425 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca1427 call dword ptr [0x11ca7114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7114))), 0x11ca142du);
  /* 11ca142d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1430 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca1432 jne 0x11ca14c3 */
  if (!C.zf) goto L_11ca14c3;
  /* 11ca1438 push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca143d call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca1443u);
  /* 11ca1443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1448 jne 0x11ca14c3 */
  if (!C.zf) goto L_11ca14c3;
  /* 11ca144a push 0x11caac80 */
  push32((uint32_t)(0x11caac80u));
  /* 11ca144f call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca1455u);
  /* 11ca1455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca145a je 0x11ca14c3 */
  if (C.zf) goto L_11ca14c3;
  /* 11ca145c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca145e call ebp */
  call_ind((uint32_t)(EBP), 0x11ca1460u);
  /* 11ca1460 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1463 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca1466 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca1469 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11ca146c shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11ca146f push edx */
  push32((uint32_t)(EDX));
  /* 11ca1470 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1472 call dword ptr [0x11ca713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca713c))), 0x11ca1478u);
  /* 11ca1478 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca147a call 0x11ca194f */
  push32(0x11ca147fu); f_11ca194f();
  /* 11ca147f push eax */
  push32((uint32_t)(EAX));
  /* 11ca1480 call 0x11ca1920 */
  push32(0x11ca1485u); f_11ca1920();
  /* 11ca1485 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1488 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ca148a call 0x11ca192d */
  push32(0x11ca148fu); f_11ca192d();
  /* 11ca148f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ca1490 mov ecx, 5 */
  ECX = (0x5u);
  /* 11ca1495 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ca1497 lea edx, [edx*8 + 0x11caac98] */
  EDX = ((uint32_t)(EDX*8 + 0x11caac98));
  /* 11ca149e push edx */
  push32((uint32_t)(EDX));
  /* 11ca149f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca14a1 push 0x11caac50 */
  push32((uint32_t)(0x11caac50u));
  /* 11ca14a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca14a8 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca14aau);
  /* 11ca14aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca14ad lea eax, [eax*8 + 0x11caac30] */
  EAX = ((uint32_t)(EAX*8 + 0x11caac30));
  /* 11ca14b4 push eax */
  push32((uint32_t)(EAX));
  /* 11ca14b5 push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca14ba call dword ptr [0x11ca7124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7124))), 0x11ca14c0u);
  /* 11ca14c0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca14c3:;
  /* 11ca14c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca14c5 push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca14ca call 0x11ca1850 */
  push32(0x11ca14cfu); f_11ca1850();
  /* 11ca14cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca14d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca14d4 je 0x11ca150b */
  if (C.zf) goto L_11ca150b;
  /* 11ca14d6 push 0x11caac80 */
  push32((uint32_t)(0x11caac80u));
  /* 11ca14db call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca14e1u);
  /* 11ca14e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca14e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca14e6 je 0x11ca150b */
  if (C.zf) goto L_11ca150b;
  /* 11ca14e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca14ea push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca14ef push 6 */
  push32((uint32_t)(0x6u));
  /* 11ca14f1 push 0x11caacc0 */
  push32((uint32_t)(0x11caacc0u));
  /* 11ca14f6 push 0x11caac20 */
  push32((uint32_t)(0x11caac20u));
  /* 11ca14fb call 0x11ca1790 */
  push32(0x11ca1500u); f_11ca1790();
  /* 11ca1500 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1502 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca1504 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1506u);
  /* 11ca1506 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1509 jmp 0x11ca1532 */
  goto L_11ca1532;
L_11ca150b:;
  /* 11ca150b push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca150d call dword ptr [0x11ca7114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7114))), 0x11ca1513u);
  /* 11ca1513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1516 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca1518 je 0x11ca1532 */
  if (C.zf) goto L_11ca1532;
  /* 11ca151a push 0x11caac20 */
  push32((uint32_t)(0x11caac20u));
  /* 11ca151f push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca1524 call 0x11ca18c0 */
  push32(0x11ca1529u); f_11ca18c0();
  /* 11ca1529 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca152b push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca152d call edi */
  call_ind((uint32_t)(EDI), 0x11ca152fu);
  /* 11ca152f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca1532:;
  /* 11ca1532 push 0x11caac70 */
  push32((uint32_t)(0x11caac70u));
  /* 11ca1537 call 0x11ca1800 */
  push32(0x11ca153cu); f_11ca1800();
  /* 11ca153c push 0x11caac80 */
  push32((uint32_t)(0x11caac80u));
  /* 11ca1541 call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca1547u);
  /* 11ca1547 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca154a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca154c jne 0x11ca158d */
  if (!C.zf) goto L_11ca158d;
  /* 11ca154e push 5 */
  push32((uint32_t)(0x5u));
  /* 11ca1550 call dword ptr [0x11ca7114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7114))), 0x11ca1556u);
  /* 11ca1556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1559 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca155b je 0x11ca158d */
  if (C.zf) goto L_11ca158d;
  /* 11ca155d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca155f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ca1561 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1563u);
  /* 11ca1563 mov edi, dword ptr [0x11ca7148] */
  EDI = (r32((uint32_t)(0x11ca7148)));
  /* 11ca1569 push 0x11ca81bc */
  push32((uint32_t)(0x11ca81bcu));
  /* 11ca156e call edi */
  call_ind((uint32_t)(EDI), 0x11ca1570u);
  /* 11ca1570 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11ca1572 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1574u);
  /* 11ca1574 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ca1576 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1578u);
  /* 11ca1578 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11ca157a call ebx */
  call_ind((uint32_t)(EBX), 0x11ca157cu);
  /* 11ca157c push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11ca157e call esi */
  call_ind((uint32_t)(ESI), 0x11ca1580u);
  /* 11ca1580 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11ca1582 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1584u);
  /* 11ca1584 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11ca1586 call esi */
  call_ind((uint32_t)(ESI), 0x11ca1588u);
  /* 11ca1588 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca158b jmp 0x11ca1593 */
  goto L_11ca1593;
L_11ca158d:;
  /* 11ca158d mov edi, dword ptr [0x11ca7148] */
  EDI = (r32((uint32_t)(0x11ca7148)));
L_11ca1593:;
  /* 11ca1593 mov esi, dword ptr [0x11ca7154] */
  ESI = (r32((uint32_t)(0x11ca7154)));
  /* 11ca1599 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca159b call esi */
  call_ind((uint32_t)(ESI), 0x11ca159du);
  /* 11ca159d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca15a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca15a2 je 0x11ca15bf */
  if (C.zf) goto L_11ca15bf;
  /* 11ca15a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca15a6 call esi */
  call_ind((uint32_t)(ESI), 0x11ca15a8u);
  /* 11ca15a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca15ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca15ad je 0x11ca15bf */
  if (C.zf) goto L_11ca15bf;
  /* 11ca15af push 0x11ca81b0 */
  push32((uint32_t)(0x11ca81b0u));
  /* 11ca15b4 call edi */
  call_ind((uint32_t)(EDI), 0x11ca15b6u);
  /* 11ca15b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca15b9 call dword ptr [0x11ca7164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7164))), 0x11ca15bfu);
L_11ca15bf:;
  /* 11ca15bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca15c1 call esi */
  call_ind((uint32_t)(ESI), 0x11ca15c3u);
  /* 11ca15c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca15c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca15c8 je 0x11ca15da */
  if (C.zf) goto L_11ca15da;
  /* 11ca15ca push 0x11ca81a4 */
  push32((uint32_t)(0x11ca81a4u));
  /* 11ca15cf call edi */
  call_ind((uint32_t)(EDI), 0x11ca15d1u);
  /* 11ca15d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca15d4 call dword ptr [0x11ca7168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7168))), 0x11ca15dau);
L_11ca15da:;
  /* 11ca15da pop edi */
  EDI = (pop32());
  /* 11ca15db pop esi */
  ESI = (pop32());
  /* 11ca15dc pop ebp */
  EBP = (pop32());
  /* 11ca15dd pop ebx */
  EBX = (pop32());
  /* 11ca15de ret  */
  ESPCHK(0x11ca11f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015f0 @ 0x11ca15f0 (59 bytes, 29 insns) */
void f_11ca15f0(void) {
  FTRACE(0x11ca15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca15f0 push esi */
  push32((uint32_t)(ESI));
  /* 11ca15f1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca15f5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca15f6 mov edi, dword ptr [0x11ca7150] */
  EDI = (r32((uint32_t)(0x11ca7150)));
  /* 11ca15fc push esi */
  push32((uint32_t)(ESI));
  /* 11ca15fd call edi */
  call_ind((uint32_t)(EDI), 0x11ca15ffu);
  /* 11ca15ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1604 je 0x11ca161d */
  if (C.zf) goto L_11ca161d;
  /* 11ca1606 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1607 mov ebx, dword ptr [0x11ca7110] */
  EBX = (r32((uint32_t)(0x11ca7110)));
L_11ca160d:;
  /* 11ca160d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca160f push esi */
  push32((uint32_t)(ESI));
  /* 11ca1610 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca1612u);
  /* 11ca1612 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1613 call edi */
  call_ind((uint32_t)(EDI), 0x11ca1615u);
  /* 11ca1615 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca161a jne 0x11ca160d */
  if (!C.zf) goto L_11ca160d;
  /* 11ca161c pop ebx */
  EBX = (pop32());
L_11ca161d:;
  /* 11ca161d push esi */
  push32((uint32_t)(ESI));
  /* 11ca161e call edi */
  call_ind((uint32_t)(EDI), 0x11ca1620u);
  /* 11ca1620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1623 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca1625 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1627 pop edi */
  EDI = (pop32());
  /* 11ca1628 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca1629 pop esi */
  ESI = (pop32());
  /* 11ca162a ret  */
  ESPCHK(0x11ca15f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001630 @ 0x11ca1630 (348 bytes, 119 insns) */
void f_11ca1630(void) {
  FTRACE(0x11ca1630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1630 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1633 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1634 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1635 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1636 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca1638 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca163a push edi */
  push32((uint32_t)(EDI));
  /* 11ca163b mov edi, dword ptr [esp + 0x54] */
  EDI = (r32((uint32_t)(ESP + 0x54)));
  /* 11ca163f mov dword ptr [esp + 0x18], esi */
  w32((uint32_t)(ESP + 0x18), (ESI));
  /* 11ca1643 mov byte ptr [esp + 0x13], bl */
  w8((uint32_t)(ESP + 0x13), (BL));
  /* 11ca1647 mov dword ptr [esp + 0x14], esi */
  w32((uint32_t)(ESP + 0x14), (ESI));
L_11ca164b:;
  /* 11ca164b cmp byte ptr [esi + 0x11ca8030], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x11ca8030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca1652 jne 0x11ca1754 */
  if (!C.zf) goto L_11ca1754;
  /* 11ca1658 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1659 call dword ptr [0x11ca7130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7130))), 0x11ca165fu);
  /* 11ca165f mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11ca1663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1668 jle 0x11ca168b */
  if ((C.zf||C.sf!=C.of)) goto L_11ca168b;
  /* 11ca166a mov esi, dword ptr [esp + 0x58] */
  ESI = (r32((uint32_t)(ESP + 0x58)));
  /* 11ca166e mov ebp, eax */
  EBP = (EAX);
L_11ca1670:;
  /* 11ca1670 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ca1674 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1676 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1677 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1678 call dword ptr [0x11ca70f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f8))), 0x11ca167eu);
  /* 11ca167e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1681 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1684 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 11ca1685 jne 0x11ca1670 */
  if (!C.zf) goto L_11ca1670;
  /* 11ca1687 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
L_11ca168b:;
  /* 11ca168b push edi */
  push32((uint32_t)(EDI));
  /* 11ca168c call 0x11ca15f0 */
  push32(0x11ca1691u); f_11ca15f0();
  /* 11ca1691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1693 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1694 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1695 call dword ptr [0x11ca70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70fc))), 0x11ca169bu);
  /* 11ca169b push esi */
  push32((uint32_t)(ESI));
  /* 11ca169c call dword ptr [0x11ca7130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7130))), 0x11ca16a2u);
  /* 11ca16a2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca16a3 call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca16a9u);
  /* 11ca16a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca16ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca16ae je 0x11ca16c8 */
  if (C.zf) goto L_11ca16c8;
  /* 11ca16b0 mov ebp, dword ptr [esp + 0x60] */
  EBP = (r32((uint32_t)(ESP + 0x60)));
  /* 11ca16b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ca16b6 push edi */
  push32((uint32_t)(EDI));
  /* 11ca16b7 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11ca16bb push ebp */
  push32((uint32_t)(EBP));
  /* 11ca16bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ca16bd call dword ptr [0x11ca70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f4))), 0x11ca16c3u);
  /* 11ca16c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca16c6 jmp 0x11ca16cc */
  goto L_11ca16cc;
L_11ca16c8:;
  /* 11ca16c8 mov ebp, dword ptr [esp + 0x60] */
  EBP = (r32((uint32_t)(ESP + 0x60)));
L_11ca16cc:;
  /* 11ca16cc push edi */
  push32((uint32_t)(EDI));
  /* 11ca16cd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca16cf call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca16d5u);
  /* 11ca16d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca16d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca16da jle 0x11ca1750 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca1750;
L_11ca16dc:;
  /* 11ca16dc lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 11ca16e0 push edx */
  push32((uint32_t)(EDX));
  /* 11ca16e1 push esi */
  push32((uint32_t)(ESI));
  /* 11ca16e2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca16e3 call dword ptr [0x11ca7104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7104))), 0x11ca16e9u);
  /* 11ca16e9 mov ax, word ptr [esp + 0x44] */
  AX = (r16((uint32_t)(ESP + 0x44)));
  /* 11ca16ee mov cx, word ptr [esp + 0x48] */
  CX = (r16((uint32_t)(ESP + 0x48)));
  /* 11ca16f3 mov word ptr [esp + 0x28], ax */
  w16((uint32_t)(ESP + 0x28), (AX));
  /* 11ca16f8 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11ca16fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca16ff mov word ptr [esp + 0x1e], cx */
  w16((uint32_t)(ESP + 0x1e), (CX));
  /* 11ca1704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1706 je 0x11ca171f */
  if (C.zf) goto L_11ca171f;
  /* 11ca1708 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 11ca170c push edx */
  push32((uint32_t)(EDX));
  /* 11ca170d push ebp */
  push32((uint32_t)(EBP));
  /* 11ca170e call dword ptr [0x11ca7108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7108))), 0x11ca1714u);
  /* 11ca1714 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ca1718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca171b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca171d jge 0x11ca1741 */
  if ((C.sf==C.of)) goto L_11ca1741;
L_11ca171f:;
  /* 11ca171f lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 11ca1723 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1724 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1725 call dword ptr [0x11ca7108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7108))), 0x11ca172bu);
  /* 11ca172b mov ebx, dword ptr [esp + 0x2c] */
  EBX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11ca172f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1732 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11ca1736 and ebx, 0xffff */
  { uint32_t _r=(EBX)&(0xffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11ca173c mov byte ptr [esp + 0x13], 1 */
  w8((uint32_t)(ESP + 0x13), (0x1u));
L_11ca1741:;
  /* 11ca1741 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1742 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca1743 call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca1749u);
  /* 11ca1749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca174c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca174e jl 0x11ca16dc */
  if ((C.sf!=C.of)) goto L_11ca16dc;
L_11ca1750:;
  /* 11ca1750 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
L_11ca1754:;
  /* 11ca1754 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca1755 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1758 mov dword ptr [esp + 0x14], esi */
  w32((uint32_t)(ESP + 0x14), (ESI));
  /* 11ca175c jl 0x11ca164b */
  if ((C.sf!=C.of)) goto L_11ca164b;
  /* 11ca1762 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1763 call 0x11ca15f0 */
  push32(0x11ca1768u); f_11ca15f0();
  /* 11ca1768 mov al, byte ptr [esp + 0x17] */
  AL = (r8((uint32_t)(ESP + 0x17)));
  /* 11ca176c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca176f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca1771 je 0x11ca1784 */
  if (C.zf) goto L_11ca1784;
  /* 11ca1773 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1774 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1777 call dword ptr [0x11ca7100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7100))), 0x11ca177du);
  /* 11ca177d mov al, byte ptr [esp + 0x1f] */
  AL = (r8((uint32_t)(ESP + 0x1f)));
  /* 11ca1781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca1784:;
  /* 11ca1784 pop edi */
  EDI = (pop32());
  /* 11ca1785 pop esi */
  ESI = (pop32());
  /* 11ca1786 pop ebp */
  EBP = (pop32());
  /* 11ca1787 pop ebx */
  EBX = (pop32());
  /* 11ca1788 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca178b ret  */
  ESPCHK(0x11ca1630u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x11ca1790 (109 bytes, 44 insns) */
void f_11ca1790(void) {
  FTRACE(0x11ca1790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1790 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1793 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1794 mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11ca1798 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1799 push esi */
  push32((uint32_t)(ESI));
  /* 11ca179a call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca17a0u);
  /* 11ca17a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca17a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca17a5 je 0x11ca17f5 */
  if (C.zf) goto L_11ca17f5;
  /* 11ca17a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ca17a9 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11ca17ad push esi */
  push32((uint32_t)(ESI));
  /* 11ca17ae push eax */
  push32((uint32_t)(EAX));
  /* 11ca17af call dword ptr [0x11ca70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f0))), 0x11ca17b5u);
  /* 11ca17b5 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11ca17b9 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11ca17bd mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11ca17c1 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11ca17c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca17c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ca17c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ca17c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ca17c9 call 0x11ca1630 */
  push32(0x11ca17ceu); f_11ca1630();
  /* 11ca17ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca17d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca17d3 je 0x11ca17f5 */
  if (C.zf) goto L_11ca17f5;
  /* 11ca17d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca17d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ca17d8 call dword ptr [0x11ca7134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7134))), 0x11ca17deu);
  /* 11ca17de mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11ca17e2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca17e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca17e4 call dword ptr [0x11ca70e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70e8))), 0x11ca17eau);
  /* 11ca17ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca17ed mov al, 1 */
  AL = (0x1u);
  /* 11ca17ef pop edi */
  EDI = (pop32());
  /* 11ca17f0 pop esi */
  ESI = (pop32());
  /* 11ca17f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca17f4 ret  */
  ESPCHK(0x11ca1790u, _esp0);
  ESP += 4; return;
L_11ca17f5:;
  /* 11ca17f5 pop edi */
  EDI = (pop32());
  /* 11ca17f6 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca17f8 pop esi */
  ESI = (pop32());
  /* 11ca17f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca17fc ret  */
  ESPCHK(0x11ca1790u, _esp0);
  ESP += 4; return;
}

/* FUN_10001800 @ 0x11ca1800 (79 bytes, 30 insns) */
void f_11ca1800(void) {
  FTRACE(0x11ca1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1800 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1803 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1804 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca1808 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1809 call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca180fu);
  /* 11ca180f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1814 je 0x11ca183d */
  if (C.zf) goto L_11ca183d;
  /* 11ca1816 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ca1818 lea eax, [esp + 8] */
  EAX = ((uint32_t)(ESP + 0x8));
  /* 11ca181c push esi */
  push32((uint32_t)(ESI));
  /* 11ca181d push eax */
  push32((uint32_t)(EAX));
  /* 11ca181e call dword ptr [0x11ca70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f0))), 0x11ca1824u);
  /* 11ca1824 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1826 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11ca182a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca182c push ecx */
  push32((uint32_t)(ECX));
  /* 11ca182d call dword ptr [0x11ca7158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7158))), 0x11ca1833u);
  /* 11ca1833 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1836 mov al, 1 */
  AL = (0x1u);
  /* 11ca1838 pop esi */
  ESI = (pop32());
  /* 11ca1839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca183c ret  */
  ESPCHK(0x11ca1800u, _esp0);
  ESP += 4; return;
L_11ca183d:;
  /* 11ca183d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca183f call dword ptr [0x11ca70ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70ec))), 0x11ca1845u);
  /* 11ca1845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1848 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca184a pop esi */
  ESI = (pop32());
  /* 11ca184b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca184e ret  */
  ESPCHK(0x11ca1800u, _esp0);
  ESP += 4; return;
}

/* FUN_10001850 @ 0x11ca1850 (104 bytes, 42 insns) */
void f_11ca1850(void) {
  FTRACE(0x11ca1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1850 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1853 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1854 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1855 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11ca1859 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11ca185b push esi */
  push32((uint32_t)(ESI));
  /* 11ca185c call dword ptr [0x11ca7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7150))), 0x11ca1862u);
  /* 11ca1862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1867 je 0x11ca18ab */
  if (C.zf) goto L_11ca18ab;
  /* 11ca1869 push edi */
  push32((uint32_t)(EDI));
  /* 11ca186a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ca186f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11ca1873 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1874 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1875 call dword ptr [0x11ca70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f0))), 0x11ca187bu);
  /* 11ca187b mov edi, dword ptr [0x11ca714c] */
  EDI = (r32((uint32_t)(0x11ca714c)));
  /* 11ca1881 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1884 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11ca1886:;
  /* 11ca1886 cmp byte ptr [esi + 0x11ca8030], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x11ca8030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca188d jne 0x11ca18a4 */
  if (!C.zf) goto L_11ca18a4;
  /* 11ca188f test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11ca1891 jne 0x11ca18a2 */
  if (!C.zf) goto L_11ca18a2;
  /* 11ca1893 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 11ca1897 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1898 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca1899 call edi */
  call_ind((uint32_t)(EDI), 0x11ca189bu);
  /* 11ca189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca189e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca18a0 je 0x11ca18a4 */
  if (C.zf) goto L_11ca18a4;
L_11ca18a2:;
  /* 11ca18a2 mov bl, 1 */
  BL = (0x1u);
L_11ca18a4:;
  /* 11ca18a4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca18a5 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca18a8 jl 0x11ca1886 */
  if ((C.sf!=C.of)) goto L_11ca1886;
  /* 11ca18aa pop edi */
  EDI = (pop32());
L_11ca18ab:;
  /* 11ca18ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca18ad pop esi */
  ESI = (pop32());
  /* 11ca18ae test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11ca18b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ca18b3 pop ebx */
  EBX = (pop32());
  /* 11ca18b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca18b7 ret  */
  ESPCHK(0x11ca1850u, _esp0);
  ESP += 4; return;
}

/* FUN_100018c0 @ 0x11ca18c0 (93 bytes, 37 insns) */
void f_11ca18c0(void) {
  FTRACE(0x11ca18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca18c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca18c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca18c4 mov ebx, dword ptr [0x11ca7150] */
  EBX = (r32((uint32_t)(0x11ca7150)));
  /* 11ca18ca push esi */
  push32((uint32_t)(ESI));
  /* 11ca18cb push edi */
  push32((uint32_t)(EDI));
  /* 11ca18cc mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11ca18d0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca18d1 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca18d3u);
  /* 11ca18d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca18d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca18d8 je 0x11ca1916 */
  if (C.zf) goto L_11ca1916;
  /* 11ca18da mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11ca18de push esi */
  push32((uint32_t)(ESI));
  /* 11ca18df call ebx */
  call_ind((uint32_t)(EBX), 0x11ca18e1u);
  /* 11ca18e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca18e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca18e6 je 0x11ca1916 */
  if (C.zf) goto L_11ca1916;
  /* 11ca18e8 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ca18ed lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11ca18f1 push esi */
  push32((uint32_t)(ESI));
  /* 11ca18f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ca18f3 call dword ptr [0x11ca70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70f0))), 0x11ca18f9u);
  /* 11ca18f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca18fb push edi */
  push32((uint32_t)(EDI));
  /* 11ca18fc call dword ptr [0x11ca7134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7134))), 0x11ca1902u);
  /* 11ca1902 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1904 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11ca1908 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca190a push ecx */
  push32((uint32_t)(ECX));
  /* 11ca190b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca190d call dword ptr [0x11ca70e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70e4))), 0x11ca1913u);
  /* 11ca1913 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca1916:;
  /* 11ca1916 pop edi */
  EDI = (pop32());
  /* 11ca1917 pop esi */
  ESI = (pop32());
  /* 11ca1918 pop ebx */
  EBX = (pop32());
  /* 11ca1919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca191c ret  */
  ESPCHK(0x11ca18c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001920 @ 0x11ca1920 (13 bytes, 4 insns) */
void f_11ca1920(void) {
  FTRACE(0x11ca1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1920 call 0x11ca1c59 */
  push32(0x11ca1925u); f_11ca1c59();
  /* 11ca1925 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca1929 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ca192c ret  */
  ESPCHK(0x11ca1920u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11ca192d (34 bytes, 9 insns) */
void f_11ca192d(void) {
  FTRACE(0x11ca192du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca192d call 0x11ca1c59 */
  push32(0x11ca1932u); f_11ca1c59();
  /* 11ca1932 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ca1935 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca193b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1941 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ca1944 mov eax, ecx */
  EAX = (ECX);
  /* 11ca1946 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ca1949 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca194e ret  */
  ESPCHK(0x11ca192du, _esp0);
  ESP += 4; return;
}

/* FUN_1000194f @ 0x11ca194f (220 bytes, 75 insns) */
void f_11ca194f(void) {
  FTRACE(0x11ca194fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca194f push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1950 mov ebp, esp */
  EBP = (ESP);
  /* 11ca1952 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1958 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11ca195b push eax */
  push32((uint32_t)(EAX));
  /* 11ca195c call dword ptr [0x11ca7080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7080))), 0x11ca1962u);
  /* 11ca1962 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ca1965 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1966 call dword ptr [0x11ca707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca707c))), 0x11ca196cu);
  /* 11ca196c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11ca1970 cmp ax, word ptr [0x11caad0a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11caad0a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca1977 jne 0x11ca19b4 */
  if (!C.zf) goto L_11ca19b4;
  /* 11ca1979 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11ca197d cmp ax, word ptr [0x11caad08] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11caad08))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca1984 jne 0x11ca19b4 */
  if (!C.zf) goto L_11ca19b4;
  /* 11ca1986 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11ca198a cmp ax, word ptr [0x11caad06] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11caad06))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca1991 jne 0x11ca19b4 */
  if (!C.zf) goto L_11ca19b4;
  /* 11ca1993 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11ca1997 cmp ax, word ptr [0x11caad02] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11caad02))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca199e jne 0x11ca19b4 */
  if (!C.zf) goto L_11ca19b4;
  /* 11ca19a0 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11ca19a4 cmp ax, word ptr [0x11caad00] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11caad00))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca19ab jne 0x11ca19b4 */
  if (!C.zf) goto L_11ca19b4;
  /* 11ca19ad mov eax, dword ptr [0x11caacf8] */
  EAX = (r32((uint32_t)(0x11caacf8)));
  /* 11ca19b2 jmp 0x11ca19f9 */
  goto L_11ca19f9;
L_11ca19b4:;
  /* 11ca19b4 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11ca19ba push eax */
  push32((uint32_t)(EAX));
  /* 11ca19bb call dword ptr [0x11ca7078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7078))), 0x11ca19c1u);
  /* 11ca19c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca19c4 je 0x11ca19e1 */
  if (C.zf) goto L_11ca19e1;
  /* 11ca19c6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca19c9 jne 0x11ca19dd */
  if (!C.zf) goto L_11ca19dd;
  /* 11ca19cb cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca19d0 je 0x11ca19dd */
  if (C.zf) goto L_11ca19dd;
  /* 11ca19d2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca19d6 je 0x11ca19dd */
  if (C.zf) goto L_11ca19dd;
  /* 11ca19d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca19da pop eax */
  EAX = (pop32());
  /* 11ca19db jmp 0x11ca19e4 */
  goto L_11ca19e4;
L_11ca19dd:;
  /* 11ca19dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca19df jmp 0x11ca19e4 */
  goto L_11ca19e4;
L_11ca19e1:;
  /* 11ca19e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ca19e4:;
  /* 11ca19e4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca19e5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca19e6 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11ca19e9 mov edi, 0x11caad00 */
  EDI = (0x11caad00u);
  /* 11ca19ee movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca19ef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca19f0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca19f1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca19f2 pop edi */
  EDI = (pop32());
  /* 11ca19f3 mov dword ptr [0x11caacf8], eax */
  w32((uint32_t)(0x11caacf8), (EAX));
  /* 11ca19f8 pop esi */
  ESI = (pop32());
L_11ca19f9:;
  /* 11ca19f9 push eax */
  push32((uint32_t)(EAX));
  /* 11ca19fa movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11ca19fe push eax */
  push32((uint32_t)(EAX));
  /* 11ca19ff movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11ca1a03 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1a04 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11ca1a08 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1a09 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11ca1a0d push eax */
  push32((uint32_t)(EAX));
  /* 11ca1a0e movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11ca1a12 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1a13 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11ca1a17 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1a18 call 0x11ca1d60 */
  push32(0x11ca1a1du); f_11ca1d60();
  /* 11ca1a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca1a20 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1a23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca1a25 je 0x11ca1a29 */
  if (C.zf) goto L_11ca1a29;
  /* 11ca1a27 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ca1a29:;
  /* 11ca1a29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca1a2a ret  */
  ESPCHK(0x11ca194fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001a2b @ 0x11ca1a2b (217 bytes, 57 insns) */
void f_11ca1a2b(void) {
  FTRACE(0x11ca1a2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1a2b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca1a2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1a32 jne 0x11ca1ac0 */
  if (!C.zf) goto L_11ca1ac0;
  /* 11ca1a38 call dword ptr [0x11ca7088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7088))), 0x11ca1a3eu);
  /* 11ca1a3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1a40 mov dword ptr [0x11caad28], eax */
  w32((uint32_t)(0x11caad28), (EAX));
  /* 11ca1a45 call 0x11ca26fd */
  push32(0x11ca1a4au); f_11ca26fd();
  /* 11ca1a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1a4c pop ecx */
  ECX = (pop32());
  /* 11ca1a4d je 0x11ca1a8b */
  if (C.zf) goto L_11ca1a8b;
  /* 11ca1a4f mov eax, dword ptr [0x11caad28] */
  EAX = (r32((uint32_t)(0x11caad28)));
  /* 11ca1a54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca1a56 mov cl, byte ptr [0x11caad29] */
  CL = (r8((uint32_t)(0x11caad29)));
  /* 11ca1a5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca1a61 shr dword ptr [0x11caad28], 0x10 */
  w32((uint32_t)(0x11caad28), (sh_shr((uint32_t)(r32((uint32_t)(0x11caad28))), (0x10u)&0x1f, 32)));
  /* 11ca1a68 mov dword ptr [0x11caad30], eax */
  w32((uint32_t)(0x11caad30), (EAX));
  /* 11ca1a6d mov dword ptr [0x11caad34], ecx */
  w32((uint32_t)(0x11caad34), (ECX));
  /* 11ca1a73 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca1a76 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1a78 mov dword ptr [0x11caad2c], eax */
  w32((uint32_t)(0x11caad2c), (EAX));
  /* 11ca1a7d call 0x11ca1bd4 */
  push32(0x11ca1a82u); f_11ca1bd4();
  /* 11ca1a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1a84 jne 0x11ca1a8f */
  if (!C.zf) goto L_11ca1a8f;
  /* 11ca1a86 call 0x11ca275a */
  push32(0x11ca1a8bu); f_11ca275a();
L_11ca1a8b:;
  /* 11ca1a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca1a8d jmp 0x11ca1b01 */
  goto L_11ca1b01;
L_11ca1a8f:;
  /* 11ca1a8f call dword ptr [0x11ca7084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7084))), 0x11ca1a95u);
  /* 11ca1a95 mov dword ptr [0x11cab3d8], eax */
  w32((uint32_t)(0x11cab3d8), (EAX));
  /* 11ca1a9a call 0x11ca2456 */
  push32(0x11ca1a9fu); f_11ca2456();
  /* 11ca1a9f mov dword ptr [0x11caad14], eax */
  w32((uint32_t)(0x11caad14), (EAX));
  /* 11ca1aa4 call 0x11ca1f40 */
  push32(0x11ca1aa9u); f_11ca1f40();
  /* 11ca1aa9 call 0x11ca2209 */
  push32(0x11ca1aaeu); f_11ca2209();
  /* 11ca1aae call 0x11ca2150 */
  push32(0x11ca1ab3u); f_11ca2150();
  /* 11ca1ab3 call 0x11ca1e22 */
  push32(0x11ca1ab8u); f_11ca1e22();
  /* 11ca1ab8 inc dword ptr [0x11caad10] */
  { uint32_t _r=(r32((uint32_t)(0x11caad10)))+1; w32((uint32_t)(0x11caad10), (_r)); fl_inc(_r,32); }
  /* 11ca1abe jmp 0x11ca1afe */
  goto L_11ca1afe;
L_11ca1ac0:;
  /* 11ca1ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca1ac2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ac4 jne 0x11ca1af2 */
  if (!C.zf) goto L_11ca1af2;
  /* 11ca1ac6 cmp dword ptr [0x11caad10], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11caad10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1acc jle 0x11ca1a8b */
  if ((C.zf||C.sf!=C.of)) goto L_11ca1a8b;
  /* 11ca1ace dec dword ptr [0x11caad10] */
  { uint32_t _r=(r32((uint32_t)(0x11caad10)))-1; w32((uint32_t)(0x11caad10), (_r)); fl_dec(_r,32); }
  /* 11ca1ad4 cmp dword ptr [0x11caad60], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11caad60))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ada jne 0x11ca1ae1 */
  if (!C.zf) goto L_11ca1ae1;
  /* 11ca1adc call 0x11ca1e60 */
  push32(0x11ca1ae1u); f_11ca1e60();
L_11ca1ae1:;
  /* 11ca1ae1 call 0x11ca20fc */
  push32(0x11ca1ae6u); f_11ca20fc();
  /* 11ca1ae6 call 0x11ca1c28 */
  push32(0x11ca1aebu); f_11ca1c28();
  /* 11ca1aeb call 0x11ca275a */
  push32(0x11ca1af0u); f_11ca275a();
  /* 11ca1af0 jmp 0x11ca1afe */
  goto L_11ca1afe;
L_11ca1af2:;
  /* 11ca1af2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1af5 jne 0x11ca1afe */
  if (!C.zf) goto L_11ca1afe;
  /* 11ca1af7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca1af8 call 0x11ca1cc0 */
  push32(0x11ca1afdu); f_11ca1cc0();
  /* 11ca1afd pop ecx */
  ECX = (pop32());
L_11ca1afe:;
  /* 11ca1afe push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1b00 pop eax */
  EAX = (pop32());
L_11ca1b01:;
  /* 11ca1b01 ret 0xc */
  ESPCHK(0x11ca1a2bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11ca1b04 (157 bytes, 73 insns) */
void f_11ca1b04(void) {
  FTRACE(0x11ca1b04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1b04 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1b05 mov ebp, esp */
  EBP = (ESP);
  /* 11ca1b07 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b08 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca1b0b push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b0c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca1b0f push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b10 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca1b13 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1b15 jne 0x11ca1b20 */
  if (!C.zf) goto L_11ca1b20;
  /* 11ca1b17 cmp dword ptr [0x11caad10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caad10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b1e jmp 0x11ca1b46 */
  goto L_11ca1b46;
L_11ca1b20:;
  /* 11ca1b20 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b23 je 0x11ca1b2a */
  if (C.zf) goto L_11ca1b2a;
  /* 11ca1b25 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b28 jne 0x11ca1b4c */
  if (!C.zf) goto L_11ca1b4c;
L_11ca1b2a:;
  /* 11ca1b2a mov eax, dword ptr [0x11cab3dc] */
  EAX = (r32((uint32_t)(0x11cab3dc)));
  /* 11ca1b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1b31 je 0x11ca1b3c */
  if (C.zf) goto L_11ca1b3c;
  /* 11ca1b33 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b34 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b35 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b36 call eax */
  call_ind((uint32_t)(EAX), 0x11ca1b38u);
  /* 11ca1b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1b3a je 0x11ca1b48 */
  if (C.zf) goto L_11ca1b48;
L_11ca1b3c:;
  /* 11ca1b3c push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b3d push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b3e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b3f call 0x11ca1a2b */
  push32(0x11ca1b44u); f_11ca1a2b();
  /* 11ca1b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11ca1b46:;
  /* 11ca1b46 jne 0x11ca1b4c */
  if (!C.zf) goto L_11ca1b4c;
L_11ca1b48:;
  /* 11ca1b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca1b4a jmp 0x11ca1b9a */
  goto L_11ca1b9a;
L_11ca1b4c:;
  /* 11ca1b4c push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b4d push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b4e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b4f call 0x11ca1000 */
  push32(0x11ca1b54u); f_11ca1000();
  /* 11ca1b54 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b57 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ca1b5a jne 0x11ca1b68 */
  if (!C.zf) goto L_11ca1b68;
  /* 11ca1b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1b5e jne 0x11ca1b97 */
  if (!C.zf) goto L_11ca1b97;
  /* 11ca1b60 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b61 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1b62 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b63 call 0x11ca1a2b */
  push32(0x11ca1b68u); f_11ca1a2b();
L_11ca1b68:;
  /* 11ca1b68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1b6a je 0x11ca1b71 */
  if (C.zf) goto L_11ca1b71;
  /* 11ca1b6c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b6f jne 0x11ca1b97 */
  if (!C.zf) goto L_11ca1b97;
L_11ca1b71:;
  /* 11ca1b71 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b72 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b73 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b74 call 0x11ca1a2b */
  push32(0x11ca1b79u); f_11ca1a2b();
  /* 11ca1b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1b7b jne 0x11ca1b80 */
  if (!C.zf) goto L_11ca1b80;
  /* 11ca1b7d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11ca1b80:;
  /* 11ca1b80 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1b84 je 0x11ca1b97 */
  if (C.zf) goto L_11ca1b97;
  /* 11ca1b86 mov eax, dword ptr [0x11cab3dc] */
  EAX = (r32((uint32_t)(0x11cab3dc)));
  /* 11ca1b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1b8d je 0x11ca1b97 */
  if (C.zf) goto L_11ca1b97;
  /* 11ca1b8f push edi */
  push32((uint32_t)(EDI));
  /* 11ca1b90 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1b91 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1b92 call eax */
  call_ind((uint32_t)(EAX), 0x11ca1b94u);
  /* 11ca1b94 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ca1b97:;
  /* 11ca1b97 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ca1b9a:;
  /* 11ca1b9a pop edi */
  EDI = (pop32());
  /* 11ca1b9b pop esi */
  ESI = (pop32());
  /* 11ca1b9c pop ebx */
  EBX = (pop32());
  /* 11ca1b9d pop ebp */
  EBP = (pop32());
  /* 11ca1b9e ret 0xc */
  ESPCHK(0x11ca1b04u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11ca1ba1 (48 bytes, 15 insns) */
void f_11ca1ba1(void) {
  FTRACE(0x11ca1ba1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1ba1 mov eax, dword ptr [0x11caad1c] */
  EAX = (r32((uint32_t)(0x11caad1c)));
  /* 11ca1ba6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ba9 je 0x11ca1bb8 */
  if (C.zf) goto L_11ca1bb8;
  /* 11ca1bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1bad jne 0x11ca1bbd */
  if (!C.zf) goto L_11ca1bbd;
  /* 11ca1baf cmp dword ptr [0x11caad20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caad20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1bb6 jne 0x11ca1bbd */
  if (!C.zf) goto L_11ca1bbd;
L_11ca1bb8:;
  /* 11ca1bb8 call 0x11ca2802 */
  push32(0x11ca1bbdu); f_11ca2802();
L_11ca1bbd:;
  /* 11ca1bbd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ca1bc1 call 0x11ca283b */
  push32(0x11ca1bc6u); f_11ca283b();
  /* 11ca1bc6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ca1bcb call dword ptr [0x11ca8214] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca8214))), 0x11ca1bd1u);
  /* 11ca1bd1 pop ecx */
  ECX = (pop32());
  /* 11ca1bd2 pop ecx */
  ECX = (pop32());
  /* 11ca1bd3 ret  */
  ESPCHK(0x11ca1ba1u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bd4 @ 0x11ca1bd4 (84 bytes, 32 insns) */
void f_11ca1bd4(void) {
  FTRACE(0x11ca1bd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1bd4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1bd5 call 0x11ca2acb */
  push32(0x11ca1bdau); f_11ca2acb();
  /* 11ca1bda call dword ptr [0x11ca7094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7094))), 0x11ca1be0u);
  /* 11ca1be0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1be3 mov dword ptr [0x11ca8218], eax */
  w32((uint32_t)(0x11ca8218), (EAX));
  /* 11ca1be8 je 0x11ca1c24 */
  if (C.zf) goto L_11ca1c24;
  /* 11ca1bea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11ca1bec push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1bee call 0x11ca298e */
  push32(0x11ca1bf3u); f_11ca298e();
  /* 11ca1bf3 mov esi, eax */
  ESI = (EAX);
  /* 11ca1bf5 pop ecx */
  ECX = (pop32());
  /* 11ca1bf6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1bf8 pop ecx */
  ECX = (pop32());
  /* 11ca1bf9 je 0x11ca1c24 */
  if (C.zf) goto L_11ca1c24;
  /* 11ca1bfb push esi */
  push32((uint32_t)(ESI));
  /* 11ca1bfc push dword ptr [0x11ca8218] */
  push32((uint32_t)(r32((uint32_t)(0x11ca8218))));
  /* 11ca1c02 call dword ptr [0x11ca7090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7090))), 0x11ca1c08u);
  /* 11ca1c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1c0a je 0x11ca1c24 */
  if (C.zf) goto L_11ca1c24;
  /* 11ca1c0c push esi */
  push32((uint32_t)(ESI));
  /* 11ca1c0d call 0x11ca1c46 */
  push32(0x11ca1c12u); f_11ca1c46();
  /* 11ca1c12 pop ecx */
  ECX = (pop32());
  /* 11ca1c13 call dword ptr [0x11ca708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca708c))), 0x11ca1c19u);
  /* 11ca1c19 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca1c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1c1f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca1c21 pop eax */
  EAX = (pop32());
  /* 11ca1c22 pop esi */
  ESI = (pop32());
  /* 11ca1c23 ret  */
  ESPCHK(0x11ca1bd4u, _esp0);
  ESP += 4; return;
L_11ca1c24:;
  /* 11ca1c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca1c26 pop esi */
  ESI = (pop32());
  /* 11ca1c27 ret  */
  ESPCHK(0x11ca1bd4u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c28 @ 0x11ca1c28 (30 bytes, 8 insns) */
void f_11ca1c28(void) {
  FTRACE(0x11ca1c28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1c28 call 0x11ca2af4 */
  push32(0x11ca1c2du); f_11ca2af4();
  /* 11ca1c2d mov eax, dword ptr [0x11ca8218] */
  EAX = (r32((uint32_t)(0x11ca8218)));
  /* 11ca1c32 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1c35 je 0x11ca1c45 */
  if (C.zf) goto L_11ca1c45;
  /* 11ca1c37 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1c38 call dword ptr [0x11ca7098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7098))), 0x11ca1c3eu);
  /* 11ca1c3e or dword ptr [0x11ca8218], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11ca8218)))|(0xffffffffu); w32((uint32_t)(0x11ca8218), (_r)); fl_logic(_r,32); }
L_11ca1c45:;
  /* 11ca1c45 ret  */
  ESPCHK(0x11ca1c28u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c46 @ 0x11ca1c46 (19 bytes, 4 insns) */
void f_11ca1c46(void) {
  FTRACE(0x11ca1c46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1c46 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca1c4a mov dword ptr [eax + 0x50], 0x11ca8398 */
  w32((uint32_t)(EAX + 0x50), (0x11ca8398u));
  /* 11ca1c51 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11ca1c58 ret  */
  ESPCHK(0x11ca1c46u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c59 @ 0x11ca1c59 (103 bytes, 38 insns) */
void f_11ca1c59(void) {
  FTRACE(0x11ca1c59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1c59 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1c5a push edi */
  push32((uint32_t)(EDI));
  /* 11ca1c5b call dword ptr [0x11ca70a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a4))), 0x11ca1c61u);
  /* 11ca1c61 push dword ptr [0x11ca8218] */
  push32((uint32_t)(r32((uint32_t)(0x11ca8218))));
  /* 11ca1c67 mov edi, eax */
  EDI = (EAX);
  /* 11ca1c69 call dword ptr [0x11ca70a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a0))), 0x11ca1c6fu);
  /* 11ca1c6f mov esi, eax */
  ESI = (EAX);
  /* 11ca1c71 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1c73 jne 0x11ca1cb4 */
  if (!C.zf) goto L_11ca1cb4;
  /* 11ca1c75 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11ca1c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1c79 call 0x11ca298e */
  push32(0x11ca1c7eu); f_11ca298e();
  /* 11ca1c7e mov esi, eax */
  ESI = (EAX);
  /* 11ca1c80 pop ecx */
  ECX = (pop32());
  /* 11ca1c81 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1c83 pop ecx */
  ECX = (pop32());
  /* 11ca1c84 je 0x11ca1cac */
  if (C.zf) goto L_11ca1cac;
  /* 11ca1c86 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1c87 push dword ptr [0x11ca8218] */
  push32((uint32_t)(r32((uint32_t)(0x11ca8218))));
  /* 11ca1c8d call dword ptr [0x11ca7090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7090))), 0x11ca1c93u);
  /* 11ca1c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1c95 je 0x11ca1cac */
  if (C.zf) goto L_11ca1cac;
  /* 11ca1c97 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1c98 call 0x11ca1c46 */
  push32(0x11ca1c9du); f_11ca1c46();
  /* 11ca1c9d pop ecx */
  ECX = (pop32());
  /* 11ca1c9e call dword ptr [0x11ca708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca708c))), 0x11ca1ca4u);
  /* 11ca1ca4 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca1ca8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca1caa jmp 0x11ca1cb4 */
  goto L_11ca1cb4;
L_11ca1cac:;
  /* 11ca1cac push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ca1cae call 0x11ca1ba1 */
  push32(0x11ca1cb3u); f_11ca1ba1();
  /* 11ca1cb3 pop ecx */
  ECX = (pop32());
L_11ca1cb4:;
  /* 11ca1cb4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1cb5 call dword ptr [0x11ca709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca709c))), 0x11ca1cbbu);
  /* 11ca1cbb mov eax, esi */
  EAX = (ESI);
  /* 11ca1cbd pop edi */
  EDI = (pop32());
  /* 11ca1cbe pop esi */
  ESI = (pop32());
  /* 11ca1cbf ret  */
  ESPCHK(0x11ca1c59u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cc0 @ 0x11ca1cc0 (160 bytes, 62 insns) */
void f_11ca1cc0(void) {
  FTRACE(0x11ca1cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1cc0 mov eax, dword ptr [0x11ca8218] */
  EAX = (r32((uint32_t)(0x11ca8218)));
  /* 11ca1cc5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1cc8 je 0x11ca1d5f */
  if (C.zf) goto L_11ca1d5f;
  /* 11ca1cce push esi */
  push32((uint32_t)(ESI));
  /* 11ca1ccf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca1cd3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1cd5 jne 0x11ca1ce4 */
  if (!C.zf) goto L_11ca1ce4;
  /* 11ca1cd7 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1cd8 call dword ptr [0x11ca70a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a0))), 0x11ca1cdeu);
  /* 11ca1cde mov esi, eax */
  ESI = (EAX);
  /* 11ca1ce0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1ce2 je 0x11ca1d50 */
  if (C.zf) goto L_11ca1d50;
L_11ca1ce4:;
  /* 11ca1ce4 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11ca1ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1ce9 je 0x11ca1cf2 */
  if (C.zf) goto L_11ca1cf2;
  /* 11ca1ceb push eax */
  push32((uint32_t)(EAX));
  /* 11ca1cec call 0x11ca2bd6 */
  push32(0x11ca1cf1u); f_11ca2bd6();
  /* 11ca1cf1 pop ecx */
  ECX = (pop32());
L_11ca1cf2:;
  /* 11ca1cf2 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11ca1cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1cf7 je 0x11ca1d00 */
  if (C.zf) goto L_11ca1d00;
  /* 11ca1cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1cfa call 0x11ca2bd6 */
  push32(0x11ca1cffu); f_11ca2bd6();
  /* 11ca1cff pop ecx */
  ECX = (pop32());
L_11ca1d00:;
  /* 11ca1d00 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11ca1d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1d05 je 0x11ca1d0e */
  if (C.zf) goto L_11ca1d0e;
  /* 11ca1d07 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1d08 call 0x11ca2bd6 */
  push32(0x11ca1d0du); f_11ca2bd6();
  /* 11ca1d0d pop ecx */
  ECX = (pop32());
L_11ca1d0e:;
  /* 11ca1d0e mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11ca1d11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1d13 je 0x11ca1d1c */
  if (C.zf) goto L_11ca1d1c;
  /* 11ca1d15 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1d16 call 0x11ca2bd6 */
  push32(0x11ca1d1bu); f_11ca2bd6();
  /* 11ca1d1b pop ecx */
  ECX = (pop32());
L_11ca1d1c:;
  /* 11ca1d1c mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11ca1d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1d21 je 0x11ca1d2a */
  if (C.zf) goto L_11ca1d2a;
  /* 11ca1d23 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1d24 call 0x11ca2bd6 */
  push32(0x11ca1d29u); f_11ca2bd6();
  /* 11ca1d29 pop ecx */
  ECX = (pop32());
L_11ca1d2a:;
  /* 11ca1d2a mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11ca1d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1d2f je 0x11ca1d38 */
  if (C.zf) goto L_11ca1d38;
  /* 11ca1d31 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1d32 call 0x11ca2bd6 */
  push32(0x11ca1d37u); f_11ca2bd6();
  /* 11ca1d37 pop ecx */
  ECX = (pop32());
L_11ca1d38:;
  /* 11ca1d38 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11ca1d3b cmp eax, 0x11ca8398 */
  { uint32_t _a=(EAX),_b=(0x11ca8398u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1d40 je 0x11ca1d49 */
  if (C.zf) goto L_11ca1d49;
  /* 11ca1d42 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1d43 call 0x11ca2bd6 */
  push32(0x11ca1d48u); f_11ca2bd6();
  /* 11ca1d48 pop ecx */
  ECX = (pop32());
L_11ca1d49:;
  /* 11ca1d49 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1d4a call 0x11ca2bd6 */
  push32(0x11ca1d4fu); f_11ca2bd6();
  /* 11ca1d4f pop ecx */
  ECX = (pop32());
L_11ca1d50:;
  /* 11ca1d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1d52 push dword ptr [0x11ca8218] */
  push32((uint32_t)(r32((uint32_t)(0x11ca8218))));
  /* 11ca1d58 call dword ptr [0x11ca7090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7090))), 0x11ca1d5eu);
  /* 11ca1d5e pop esi */
  ESI = (pop32());
L_11ca1d5f:;
  /* 11ca1d5f ret  */
  ESPCHK(0x11ca1cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d60 @ 0x11ca1d60 (194 bytes, 65 insns) */
void f_11ca1d60(void) {
  FTRACE(0x11ca1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1d61 mov ebp, esp */
  EBP = (ESP);
  /* 11ca1d63 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1d67 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca1d6a sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1d70 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1d73 jl 0x11ca1e1c */
  if ((C.sf!=C.of)) goto L_11ca1e1c;
  /* 11ca1d79 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1d7f jg 0x11ca1e1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca1e1c;
  /* 11ca1d85 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1d86 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1d87 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca1d8a mov esi, dword ptr [edi*4 + 0x11ca8504] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11ca8504)));
  /* 11ca1d91 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1d94 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11ca1d97 jne 0x11ca1d9f */
  if (!C.zf) goto L_11ca1d9f;
  /* 11ca1d99 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1d9c jle 0x11ca1d9f */
  if ((C.zf||C.sf!=C.of)) goto L_11ca1d9f;
  /* 11ca1d9e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca1d9f:;
  /* 11ca1d9f call 0x11ca2cbf */
  push32(0x11ca1da4u); f_11ca2cbf();
  /* 11ca1da4 mov eax, ebx */
  EAX = (EBX);
  /* 11ca1da6 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11ca1da9 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca1daf sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca1db2 mov edx, esi */
  EDX = (ESI);
  /* 11ca1db4 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11ca1db7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1db9 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11ca1dbc add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1dbe mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ca1dc1 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11ca1dc4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca1dc7 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ca1dca lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11ca1dcd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca1dd0 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1dd3 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca1dd6 add ecx, dword ptr [0x11ca8420] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ca8420))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1ddc dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ca1ddd cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1de1 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11ca1de4 pop edi */
  EDI = (pop32());
  /* 11ca1de5 pop esi */
  ESI = (pop32());
  /* 11ca1de6 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11ca1ded mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ca1df0 je 0x11ca1e12 */
  if (C.zf) goto L_11ca1e12;
  /* 11ca1df2 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1df6 jne 0x11ca1e18 */
  if (!C.zf) goto L_11ca1e18;
  /* 11ca1df8 cmp dword ptr [0x11ca8424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ca8424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1dff je 0x11ca1e18 */
  if (C.zf) goto L_11ca1e18;
  /* 11ca1e01 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11ca1e04 push eax */
  push32((uint32_t)(EAX));
  /* 11ca1e05 call 0x11ca2f74 */
  push32(0x11ca1e0au); f_11ca2f74();
  /* 11ca1e0a pop ecx */
  ECX = (pop32());
  /* 11ca1e0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca1e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1e10 je 0x11ca1e18 */
  if (C.zf) goto L_11ca1e18;
L_11ca1e12:;
  /* 11ca1e12 add ecx, dword ptr [0x11ca8428] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ca8428))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11ca1e18:;
  /* 11ca1e18 mov eax, ecx */
  EAX = (ECX);
  /* 11ca1e1a jmp 0x11ca1e1f */
  goto L_11ca1e1f;
L_11ca1e1c:;
  /* 11ca1e1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ca1e1f:;
  /* 11ca1e1f pop ebx */
  EBX = (pop32());
  /* 11ca1e20 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca1e21 ret  */
  ESPCHK(0x11ca1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e22 @ 0x11ca1e22 (45 bytes, 12 insns) */
void f_11ca1e22(void) {
  FTRACE(0x11ca1e22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1e22 mov eax, dword ptr [0x11cab3d4] */
  EAX = (r32((uint32_t)(0x11cab3d4)));
  /* 11ca1e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1e29 je 0x11ca1e2d */
  if (C.zf) goto L_11ca1e2d;
  /* 11ca1e2b call eax */
  call_ind((uint32_t)(EAX), 0x11ca1e2du);
L_11ca1e2d:;
  /* 11ca1e2d push 0x11ca8010 */
  push32((uint32_t)(0x11ca8010u));
  /* 11ca1e32 push 0x11ca8008 */
  push32((uint32_t)(0x11ca8008u));
  /* 11ca1e37 call 0x11ca1f26 */
  push32(0x11ca1e3cu); f_11ca1f26();
  /* 11ca1e3c push 0x11ca8004 */
  push32((uint32_t)(0x11ca8004u));
  /* 11ca1e41 push 0x11ca8000 */
  push32((uint32_t)(0x11ca8000u));
  /* 11ca1e46 call 0x11ca1f26 */
  push32(0x11ca1e4bu); f_11ca1f26();
  /* 11ca1e4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1e4e ret  */
  ESPCHK(0x11ca1e22u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11ca1e4f (17 bytes, 6 insns) */
void f_11ca1e4f(void) {
  FTRACE(0x11ca1e4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1e53 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11ca1e57 call 0x11ca1e6f */
  push32(0x11ca1e5cu); f_11ca1e6f();
  /* 11ca1e5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1e5f ret  */
  ESPCHK(0x11ca1e4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e60 @ 0x11ca1e60 (15 bytes, 6 insns) */
void f_11ca1e60(void) {
  FTRACE(0x11ca1e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca1e66 call 0x11ca1e6f */
  push32(0x11ca1e6bu); f_11ca1e6f();
  /* 11ca1e6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1e6e ret  */
  ESPCHK(0x11ca1e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e6f @ 0x11ca1e6f (163 bytes, 53 insns) */
void f_11ca1e6f(void) {
  FTRACE(0x11ca1e6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1e6f push edi */
  push32((uint32_t)(EDI));
  /* 11ca1e70 call 0x11ca1f14 */
  push32(0x11ca1e75u); f_11ca1f14();
  /* 11ca1e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca1e77 pop edi */
  EDI = (pop32());
  /* 11ca1e78 cmp dword ptr [0x11caad64], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caad64))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1e7e jne 0x11ca1e91 */
  if (!C.zf) goto L_11ca1e91;
  /* 11ca1e80 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ca1e84 call dword ptr [0x11ca70b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70b0))), 0x11ca1e8au);
  /* 11ca1e8a push eax */
  push32((uint32_t)(EAX));
  /* 11ca1e8b call dword ptr [0x11ca7004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7004))), 0x11ca1e91u);
L_11ca1e91:;
  /* 11ca1e91 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1e97 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ca1e9b mov dword ptr [0x11caad60], edi */
  w32((uint32_t)(0x11caad60), (EDI));
  /* 11ca1ea1 mov byte ptr [0x11caad5c], bl */
  w8((uint32_t)(0x11caad5c), (BL));
  /* 11ca1ea7 jne 0x11ca1ee5 */
  if (!C.zf) goto L_11ca1ee5;
  /* 11ca1ea9 mov eax, dword ptr [0x11cab3d0] */
  EAX = (r32((uint32_t)(0x11cab3d0)));
  /* 11ca1eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1eb0 je 0x11ca1ed4 */
  if (C.zf) goto L_11ca1ed4;
  /* 11ca1eb2 mov ecx, dword ptr [0x11cab3cc] */
  ECX = (r32((uint32_t)(0x11cab3cc)));
  /* 11ca1eb8 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1eb9 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11ca1ebc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ebe jb 0x11ca1ed3 */
  if (C.cf) goto L_11ca1ed3;
L_11ca1ec0:;
  /* 11ca1ec0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca1ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1ec4 je 0x11ca1ec8 */
  if (C.zf) goto L_11ca1ec8;
  /* 11ca1ec6 call eax */
  call_ind((uint32_t)(EAX), 0x11ca1ec8u);
L_11ca1ec8:;
  /* 11ca1ec8 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1ecb cmp esi, dword ptr [0x11cab3d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11cab3d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ed1 jae 0x11ca1ec0 */
  if (!C.cf) goto L_11ca1ec0;
L_11ca1ed3:;
  /* 11ca1ed3 pop esi */
  ESI = (pop32());
L_11ca1ed4:;
  /* 11ca1ed4 push 0x11ca8018 */
  push32((uint32_t)(0x11ca8018u));
  /* 11ca1ed9 push 0x11ca8014 */
  push32((uint32_t)(0x11ca8014u));
  /* 11ca1ede call 0x11ca1f26 */
  push32(0x11ca1ee3u); f_11ca1f26();
  /* 11ca1ee3 pop ecx */
  ECX = (pop32());
  /* 11ca1ee4 pop ecx */
  ECX = (pop32());
L_11ca1ee5:;
  /* 11ca1ee5 push 0x11ca8020 */
  push32((uint32_t)(0x11ca8020u));
  /* 11ca1eea push 0x11ca801c */
  push32((uint32_t)(0x11ca801cu));
  /* 11ca1eef call 0x11ca1f26 */
  push32(0x11ca1ef4u); f_11ca1f26();
  /* 11ca1ef4 pop ecx */
  ECX = (pop32());
  /* 11ca1ef5 pop ecx */
  ECX = (pop32());
  /* 11ca1ef6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca1ef8 pop ebx */
  EBX = (pop32());
  /* 11ca1ef9 je 0x11ca1f02 */
  if (C.zf) goto L_11ca1f02;
  /* 11ca1efb call 0x11ca1f1d */
  push32(0x11ca1f00u); f_11ca1f1d();
  /* 11ca1f00 pop edi */
  EDI = (pop32());
  /* 11ca1f01 ret  */
  ESPCHK(0x11ca1e6fu, _esp0);
  ESP += 4; return;
L_11ca1f02:;
  /* 11ca1f02 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ca1f06 mov dword ptr [0x11caad64], edi */
  w32((uint32_t)(0x11caad64), (EDI));
  /* 11ca1f0c call dword ptr [0x11ca7000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7000))), 0x11ca1f12u);
  /* 11ca1f12 pop edi */
  EDI = (pop32());
  /* 11ca1f13 ret  */
  ESPCHK(0x11ca1e6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f14 @ 0x11ca1f14 (9 bytes, 4 insns) */
void f_11ca1f14(void) {
  FTRACE(0x11ca1f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1f14 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ca1f16 call 0x11ca2b60 */
  push32(0x11ca1f1bu); f_11ca2b60();
  /* 11ca1f1b pop ecx */
  ECX = (pop32());
  /* 11ca1f1c ret  */
  ESPCHK(0x11ca1f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f1d @ 0x11ca1f1d (9 bytes, 4 insns) */
void f_11ca1f1d(void) {
  FTRACE(0x11ca1f1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1f1d push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ca1f1f call 0x11ca2bc1 */
  push32(0x11ca1f24u); f_11ca2bc1();
  /* 11ca1f24 pop ecx */
  ECX = (pop32());
  /* 11ca1f25 ret  */
  ESPCHK(0x11ca1f1du, _esp0);
  ESP += 4; return;
}

/* FUN_10001f26 @ 0x11ca1f26 (26 bytes, 12 insns) */
void f_11ca1f26(void) {
  FTRACE(0x11ca1f26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1f26 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1f27 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11ca1f2b:;
  /* 11ca1f2b cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1f2f jae 0x11ca1f3e */
  if (!C.cf) goto L_11ca1f3e;
  /* 11ca1f31 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca1f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1f35 je 0x11ca1f39 */
  if (C.zf) goto L_11ca1f39;
  /* 11ca1f37 call eax */
  call_ind((uint32_t)(EAX), 0x11ca1f39u);
L_11ca1f39:;
  /* 11ca1f39 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1f3c jmp 0x11ca1f2b */
  goto L_11ca1f2b;
L_11ca1f3e:;
  /* 11ca1f3e pop esi */
  ESI = (pop32());
  /* 11ca1f3f ret  */
  ESPCHK(0x11ca1f26u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f40 @ 0x11ca1f40 (444 bytes, 150 insns) */
void f_11ca1f40(void) {
  FTRACE(0x11ca1f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca1f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca1f41 mov ebp, esp */
  EBP = (ESP);
  /* 11ca1f43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca1f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca1f47 push esi */
  push32((uint32_t)(ESI));
  /* 11ca1f48 push edi */
  push32((uint32_t)(EDI));
  /* 11ca1f49 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ca1f4e call 0x11ca3281 */
  push32(0x11ca1f53u); f_11ca3281();
  /* 11ca1f53 mov esi, eax */
  ESI = (EAX);
  /* 11ca1f55 pop ecx */
  ECX = (pop32());
  /* 11ca1f56 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca1f58 jne 0x11ca1f62 */
  if (!C.zf) goto L_11ca1f62;
  /* 11ca1f5a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11ca1f5c call 0x11ca1ba1 */
  push32(0x11ca1f61u); f_11ca1ba1();
  /* 11ca1f61 pop ecx */
  ECX = (pop32());
L_11ca1f62:;
  /* 11ca1f62 mov dword ptr [0x11cab2c0], esi */
  w32((uint32_t)(0x11cab2c0), (ESI));
  /* 11ca1f68 mov dword ptr [0x11cab3c0], 0x20 */
  w32((uint32_t)(0x11cab3c0), (0x20u));
  /* 11ca1f72 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11ca1f78:;
  /* 11ca1f78 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1f7a jae 0x11ca1f9a */
  if (!C.cf) goto L_11ca1f9a;
  /* 11ca1f7c and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ca1f80 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ca1f83 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ca1f87 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11ca1f8b mov eax, dword ptr [0x11cab2c0] */
  EAX = (r32((uint32_t)(0x11cab2c0)));
  /* 11ca1f90 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1f93 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca1f98 jmp 0x11ca1f78 */
  goto L_11ca1f78;
L_11ca1f9a:;
  /* 11ca1f9a lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11ca1f9d push eax */
  push32((uint32_t)(EAX));
  /* 11ca1f9e call dword ptr [0x11ca70c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70c0))), 0x11ca1fa4u);
  /* 11ca1fa4 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca1fa9 je 0x11ca2080 */
  if (C.zf) goto L_11ca2080;
  /* 11ca1faf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ca1fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1fb4 je 0x11ca2080 */
  if (C.zf) goto L_11ca2080;
  /* 11ca1fba mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11ca1fbc lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11ca1fbf lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11ca1fc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ca1fc5 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11ca1fca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1fcc jl 0x11ca1fd0 */
  if ((C.sf!=C.of)) goto L_11ca1fd0;
  /* 11ca1fce mov edi, eax */
  EDI = (EAX);
L_11ca1fd0:;
  /* 11ca1fd0 cmp dword ptr [0x11cab3c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1fd6 jge 0x11ca202e */
  if ((C.sf==C.of)) goto L_11ca202e;
  /* 11ca1fd8 mov esi, 0x11cab2c4 */
  ESI = (0x11cab2c4u);
L_11ca1fdd:;
  /* 11ca1fdd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ca1fe2 call 0x11ca3281 */
  push32(0x11ca1fe7u); f_11ca3281();
  /* 11ca1fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca1fe9 pop ecx */
  ECX = (pop32());
  /* 11ca1fea je 0x11ca2028 */
  if (C.zf) goto L_11ca2028;
  /* 11ca1fec add dword ptr [0x11cab3c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11cab3c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca1ff3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca1ff5 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11ca1ffb:;
  /* 11ca1ffb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca1ffd jae 0x11ca201b */
  if (!C.cf) goto L_11ca201b;
  /* 11ca1fff and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ca2003 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ca2006 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ca200a mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11ca200e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ca2010 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2013 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2019 jmp 0x11ca1ffb */
  goto L_11ca1ffb;
L_11ca201b:;
  /* 11ca201b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca201e cmp dword ptr [0x11cab3c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2024 jl 0x11ca1fdd */
  if ((C.sf!=C.of)) goto L_11ca1fdd;
  /* 11ca2026 jmp 0x11ca202e */
  goto L_11ca202e;
L_11ca2028:;
  /* 11ca2028 mov edi, dword ptr [0x11cab3c0] */
  EDI = (r32((uint32_t)(0x11cab3c0)));
L_11ca202e:;
  /* 11ca202e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca2030 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca2032 jle 0x11ca2080 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca2080;
L_11ca2034:;
  /* 11ca2034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca2037 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ca2039 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca203c je 0x11ca2076 */
  if (C.zf) goto L_11ca2076;
  /* 11ca203e mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11ca2040 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11ca2042 je 0x11ca2076 */
  if (C.zf) goto L_11ca2076;
  /* 11ca2044 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11ca2046 jne 0x11ca2053 */
  if (!C.zf) goto L_11ca2053;
  /* 11ca2048 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2049 call dword ptr [0x11ca70bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70bc))), 0x11ca204fu);
  /* 11ca204f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2051 je 0x11ca2076 */
  if (C.zf) goto L_11ca2076;
L_11ca2053:;
  /* 11ca2053 mov ecx, esi */
  ECX = (ESI);
  /* 11ca2055 mov eax, esi */
  EAX = (ESI);
  /* 11ca2057 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ca205a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca205d mov ecx, dword ptr [ecx*4 + 0x11cab2c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11cab2c0)));
  /* 11ca2064 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11ca2067 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11ca206a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca206d mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11ca206f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ca2071 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11ca2073 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11ca2076:;
  /* 11ca2076 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca207a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca207b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca207c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca207e jl 0x11ca2034 */
  if ((C.sf!=C.of)) goto L_11ca2034;
L_11ca2080:;
  /* 11ca2080 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ca2082:;
  /* 11ca2082 mov ecx, dword ptr [0x11cab2c0] */
  ECX = (r32((uint32_t)(0x11cab2c0)));
  /* 11ca2088 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11ca208b cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca208f lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11ca2092 jne 0x11ca20e1 */
  if (!C.zf) goto L_11ca20e1;
  /* 11ca2094 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca2096 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11ca209a jne 0x11ca20a1 */
  if (!C.zf) goto L_11ca20a1;
  /* 11ca209c push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ca209e pop eax */
  EAX = (pop32());
  /* 11ca209f jmp 0x11ca20ab */
  goto L_11ca20ab;
L_11ca20a1:;
  /* 11ca20a1 mov eax, ebx */
  EAX = (EBX);
  /* 11ca20a3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca20a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca20a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca20a8 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ca20ab:;
  /* 11ca20ab push eax */
  push32((uint32_t)(EAX));
  /* 11ca20ac call dword ptr [0x11ca70b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70b8))), 0x11ca20b2u);
  /* 11ca20b2 mov edi, eax */
  EDI = (EAX);
  /* 11ca20b4 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca20b7 je 0x11ca20d0 */
  if (C.zf) goto L_11ca20d0;
  /* 11ca20b9 push edi */
  push32((uint32_t)(EDI));
  /* 11ca20ba call dword ptr [0x11ca70bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70bc))), 0x11ca20c0u);
  /* 11ca20c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca20c2 je 0x11ca20d0 */
  if (C.zf) goto L_11ca20d0;
  /* 11ca20c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca20c9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ca20cb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca20ce jne 0x11ca20d6 */
  if (!C.zf) goto L_11ca20d6;
L_11ca20d0:;
  /* 11ca20d0 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ca20d4 jmp 0x11ca20e5 */
  goto L_11ca20e5;
L_11ca20d6:;
  /* 11ca20d6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca20d9 jne 0x11ca20e5 */
  if (!C.zf) goto L_11ca20e5;
  /* 11ca20db or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ca20df jmp 0x11ca20e5 */
  goto L_11ca20e5;
L_11ca20e1:;
  /* 11ca20e1 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11ca20e5:;
  /* 11ca20e5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca20e6 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca20e9 jl 0x11ca2082 */
  if ((C.sf!=C.of)) goto L_11ca2082;
  /* 11ca20eb push dword ptr [0x11cab3c0] */
  push32((uint32_t)(r32((uint32_t)(0x11cab3c0))));
  /* 11ca20f1 call dword ptr [0x11ca70b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70b4))), 0x11ca20f7u);
  /* 11ca20f7 pop edi */
  EDI = (pop32());
  /* 11ca20f8 pop esi */
  ESI = (pop32());
  /* 11ca20f9 pop ebx */
  EBX = (pop32());
  /* 11ca20fa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca20fb ret  */
  ESPCHK(0x11ca1f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100020fc @ 0x11ca20fc (84 bytes, 33 insns) */
void f_11ca20fc(void) {
  FTRACE(0x11ca20fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca20fc push ebx */
  push32((uint32_t)(EBX));
  /* 11ca20fd push esi */
  push32((uint32_t)(ESI));
  /* 11ca20fe push edi */
  push32((uint32_t)(EDI));
  /* 11ca20ff mov esi, 0x11cab2c0 */
  ESI = (0x11cab2c0u);
L_11ca2104:;
  /* 11ca2104 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca2106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2108 je 0x11ca2141 */
  if (C.zf) goto L_11ca2141;
  /* 11ca210a mov edi, eax */
  EDI = (EAX);
  /* 11ca210c add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2111 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2113 jae 0x11ca2136 */
  if (!C.cf) goto L_11ca2136;
  /* 11ca2115 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11ca2118:;
  /* 11ca2118 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca211c je 0x11ca2125 */
  if (C.zf) goto L_11ca2125;
  /* 11ca211e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca211f call dword ptr [0x11ca70ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70ac))), 0x11ca2125u);
L_11ca2125:;
  /* 11ca2125 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca2127 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca212a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca212f add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2132 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2134 jb 0x11ca2118 */
  if (C.cf) goto L_11ca2118;
L_11ca2136:;
  /* 11ca2136 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca2138 call 0x11ca2bd6 */
  push32(0x11ca213du); f_11ca2bd6();
  /* 11ca213d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ca2140 pop ecx */
  ECX = (pop32());
L_11ca2141:;
  /* 11ca2141 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2144 cmp esi, 0x11cab3c0 */
  { uint32_t _a=(ESI),_b=(0x11cab3c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca214a jl 0x11ca2104 */
  if ((C.sf!=C.of)) goto L_11ca2104;
  /* 11ca214c pop edi */
  EDI = (pop32());
  /* 11ca214d pop esi */
  ESI = (pop32());
  /* 11ca214e pop ebx */
  EBX = (pop32());
  /* 11ca214f ret  */
  ESPCHK(0x11ca20fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x11ca2150 (185 bytes, 71 insns) */
void f_11ca2150(void) {
  FTRACE(0x11ca2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2150 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2151 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2153 cmp dword ptr [0x11cab3c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2159 push esi */
  push32((uint32_t)(ESI));
  /* 11ca215a push edi */
  push32((uint32_t)(EDI));
  /* 11ca215b jne 0x11ca2162 */
  if (!C.zf) goto L_11ca2162;
  /* 11ca215d call 0x11ca3903 */
  push32(0x11ca2162u); f_11ca3903();
L_11ca2162:;
  /* 11ca2162 mov esi, dword ptr [0x11caad14] */
  ESI = (r32((uint32_t)(0x11caad14)));
  /* 11ca2168 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11ca216a:;
  /* 11ca216a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca216c cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca216e je 0x11ca2182 */
  if (C.zf) goto L_11ca2182;
  /* 11ca2170 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2172 je 0x11ca2175 */
  if (C.zf) goto L_11ca2175;
  /* 11ca2174 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ca2175:;
  /* 11ca2175 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2176 call 0x11ca34b0 */
  push32(0x11ca217bu); f_11ca34b0();
  /* 11ca217b pop ecx */
  ECX = (pop32());
  /* 11ca217c lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11ca2180 jmp 0x11ca216a */
  goto L_11ca216a;
L_11ca2182:;
  /* 11ca2182 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11ca2189 push eax */
  push32((uint32_t)(EAX));
  /* 11ca218a call 0x11ca3281 */
  push32(0x11ca218fu); f_11ca3281();
  /* 11ca218f mov esi, eax */
  ESI = (EAX);
  /* 11ca2191 pop ecx */
  ECX = (pop32());
  /* 11ca2192 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2194 mov dword ptr [0x11caad44], esi */
  w32((uint32_t)(0x11caad44), (ESI));
  /* 11ca219a jne 0x11ca21a4 */
  if (!C.zf) goto L_11ca21a4;
  /* 11ca219c push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca219e call 0x11ca1ba1 */
  push32(0x11ca21a3u); f_11ca1ba1();
  /* 11ca21a3 pop ecx */
  ECX = (pop32());
L_11ca21a4:;
  /* 11ca21a4 mov edi, dword ptr [0x11caad14] */
  EDI = (r32((uint32_t)(0x11caad14)));
  /* 11ca21aa cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca21ac je 0x11ca21e7 */
  if (C.zf) goto L_11ca21e7;
  /* 11ca21ae push ebp */
  push32((uint32_t)(EBP));
L_11ca21af:;
  /* 11ca21af push edi */
  push32((uint32_t)(EDI));
  /* 11ca21b0 call 0x11ca34b0 */
  push32(0x11ca21b5u); f_11ca34b0();
  /* 11ca21b5 mov ebp, eax */
  EBP = (EAX);
  /* 11ca21b7 pop ecx */
  ECX = (pop32());
  /* 11ca21b8 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11ca21b9 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca21bc je 0x11ca21e0 */
  if (C.zf) goto L_11ca21e0;
  /* 11ca21be push ebp */
  push32((uint32_t)(EBP));
  /* 11ca21bf call 0x11ca3281 */
  push32(0x11ca21c4u); f_11ca3281();
  /* 11ca21c4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca21c6 pop ecx */
  ECX = (pop32());
  /* 11ca21c7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca21c9 jne 0x11ca21d3 */
  if (!C.zf) goto L_11ca21d3;
  /* 11ca21cb push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca21cd call 0x11ca1ba1 */
  push32(0x11ca21d2u); f_11ca1ba1();
  /* 11ca21d2 pop ecx */
  ECX = (pop32());
L_11ca21d3:;
  /* 11ca21d3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca21d4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca21d6 call 0x11ca33c0 */
  push32(0x11ca21dbu); f_11ca33c0();
  /* 11ca21db pop ecx */
  ECX = (pop32());
  /* 11ca21dc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca21df pop ecx */
  ECX = (pop32());
L_11ca21e0:;
  /* 11ca21e0 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca21e2 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca21e4 jne 0x11ca21af */
  if (!C.zf) goto L_11ca21af;
  /* 11ca21e6 pop ebp */
  EBP = (pop32());
L_11ca21e7:;
  /* 11ca21e7 push dword ptr [0x11caad14] */
  push32((uint32_t)(r32((uint32_t)(0x11caad14))));
  /* 11ca21ed call 0x11ca2bd6 */
  push32(0x11ca21f2u); f_11ca2bd6();
  /* 11ca21f2 pop ecx */
  ECX = (pop32());
  /* 11ca21f3 mov dword ptr [0x11caad14], ebx */
  w32((uint32_t)(0x11caad14), (EBX));
  /* 11ca21f9 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11ca21fb pop edi */
  EDI = (pop32());
  /* 11ca21fc pop esi */
  ESI = (pop32());
  /* 11ca21fd mov dword ptr [0x11cab3c4], 1 */
  w32((uint32_t)(0x11cab3c4), (0x1u));
  /* 11ca2207 pop ebx */
  EBX = (pop32());
  /* 11ca2208 ret  */
  ESPCHK(0x11ca2150u, _esp0);
  ESP += 4; return;
}

/* FUN_10002209 @ 0x11ca2209 (153 bytes, 62 insns) */
void f_11ca2209(void) {
  FTRACE(0x11ca2209u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2209 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca220a mov ebp, esp */
  EBP = (ESP);
  /* 11ca220c push ecx */
  push32((uint32_t)(ECX));
  /* 11ca220d push ecx */
  push32((uint32_t)(ECX));
  /* 11ca220e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca220f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2211 cmp dword ptr [0x11cab3c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2217 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2218 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2219 jne 0x11ca2220 */
  if (!C.zf) goto L_11ca2220;
  /* 11ca221b call 0x11ca3903 */
  push32(0x11ca2220u); f_11ca3903();
L_11ca2220:;
  /* 11ca2220 mov esi, 0x11caad68 */
  ESI = (0x11caad68u);
  /* 11ca2225 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ca222a push esi */
  push32((uint32_t)(ESI));
  /* 11ca222b push ebx */
  push32((uint32_t)(EBX));
  /* 11ca222c call dword ptr [0x11ca70a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a8))), 0x11ca2232u);
  /* 11ca2232 mov eax, dword ptr [0x11cab3d8] */
  EAX = (r32((uint32_t)(0x11cab3d8)));
  /* 11ca2237 mov dword ptr [0x11caad54], esi */
  w32((uint32_t)(0x11caad54), (ESI));
  /* 11ca223d mov edi, esi */
  EDI = (ESI);
  /* 11ca223f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2241 je 0x11ca2245 */
  if (C.zf) goto L_11ca2245;
  /* 11ca2243 mov edi, eax */
  EDI = (EAX);
L_11ca2245:;
  /* 11ca2245 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ca2248 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2249 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca224c push eax */
  push32((uint32_t)(EAX));
  /* 11ca224d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca224e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca224f push edi */
  push32((uint32_t)(EDI));
  /* 11ca2250 call 0x11ca22a2 */
  push32(0x11ca2255u); f_11ca22a2();
  /* 11ca2255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca2258 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca225b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11ca225e push eax */
  push32((uint32_t)(EAX));
  /* 11ca225f call 0x11ca3281 */
  push32(0x11ca2264u); f_11ca3281();
  /* 11ca2264 mov esi, eax */
  ESI = (EAX);
  /* 11ca2266 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2269 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca226b jne 0x11ca2275 */
  if (!C.zf) goto L_11ca2275;
  /* 11ca226d push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca226f call 0x11ca1ba1 */
  push32(0x11ca2274u); f_11ca1ba1();
  /* 11ca2274 pop ecx */
  ECX = (pop32());
L_11ca2275:;
  /* 11ca2275 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ca2278 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2279 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca227c push eax */
  push32((uint32_t)(EAX));
  /* 11ca227d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca2280 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11ca2283 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2284 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2285 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2286 call 0x11ca22a2 */
  push32(0x11ca228bu); f_11ca22a2();
  /* 11ca228b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca228e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2291 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca2292 mov dword ptr [0x11caad3c], esi */
  w32((uint32_t)(0x11caad3c), (ESI));
  /* 11ca2298 pop edi */
  EDI = (pop32());
  /* 11ca2299 pop esi */
  ESI = (pop32());
  /* 11ca229a mov dword ptr [0x11caad38], eax */
  w32((uint32_t)(0x11caad38), (EAX));
  /* 11ca229f pop ebx */
  EBX = (pop32());
  /* 11ca22a0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca22a1 ret  */
  ESPCHK(0x11ca2209u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a2 @ 0x11ca22a2 (436 bytes, 187 insns) */
void f_11ca22a2(void) {
  FTRACE(0x11ca22a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca22a2 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca22a3 mov ebp, esp */
  EBP = (ESP);
  /* 11ca22a5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ca22a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca22ab push ebx */
  push32((uint32_t)(EBX));
  /* 11ca22ac push esi */
  push32((uint32_t)(ESI));
  /* 11ca22ad and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca22b0 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca22b3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca22b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca22b7 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11ca22bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca22c0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca22c2 je 0x11ca22cc */
  if (C.zf) goto L_11ca22cc;
  /* 11ca22c4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11ca22c6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca22c9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11ca22cc:;
  /* 11ca22cc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca22cf jne 0x11ca2315 */
  if (!C.zf) goto L_11ca2315;
L_11ca22d1:;
  /* 11ca22d1 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ca22d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca22d5 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca22d8 je 0x11ca2303 */
  if (C.zf) goto L_11ca2303;
  /* 11ca22da test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca22dc je 0x11ca2303 */
  if (C.zf) goto L_11ca2303;
  /* 11ca22de movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11ca22e1 test byte ptr [edx + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11cab1a1)))&(0x4u); fl_logic(_r,8); }
  /* 11ca22e8 je 0x11ca22f6 */
  if (C.zf) goto L_11ca22f6;
  /* 11ca22ea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca22ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca22ee je 0x11ca22f6 */
  if (C.zf) goto L_11ca22f6;
  /* 11ca22f0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca22f2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca22f4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca22f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ca22f6:;
  /* 11ca22f6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca22f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca22fa je 0x11ca22d1 */
  if (C.zf) goto L_11ca22d1;
  /* 11ca22fc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca22fe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca2300 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2301 jmp 0x11ca22d1 */
  goto L_11ca22d1;
L_11ca2303:;
  /* 11ca2303 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca2305 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2307 je 0x11ca230d */
  if (C.zf) goto L_11ca230d;
  /* 11ca2309 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11ca230c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca230d:;
  /* 11ca230d cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2310 jne 0x11ca2358 */
  if (!C.zf) goto L_11ca2358;
  /* 11ca2312 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2313 jmp 0x11ca2358 */
  goto L_11ca2358;
L_11ca2315:;
  /* 11ca2315 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca2317 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2319 je 0x11ca2320 */
  if (C.zf) goto L_11ca2320;
  /* 11ca231b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca231d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca231f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca2320:;
  /* 11ca2320 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca2322 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2323 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11ca2326 test byte ptr [ebx + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11cab1a1)))&(0x4u); fl_logic(_r,8); }
  /* 11ca232d je 0x11ca233b */
  if (C.zf) goto L_11ca233b;
  /* 11ca232f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca2331 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2333 je 0x11ca233a */
  if (C.zf) goto L_11ca233a;
  /* 11ca2335 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11ca2337 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11ca2339 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca233a:;
  /* 11ca233a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ca233b:;
  /* 11ca233b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca233e je 0x11ca2349 */
  if (C.zf) goto L_11ca2349;
  /* 11ca2340 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca2342 je 0x11ca234d */
  if (C.zf) goto L_11ca234d;
  /* 11ca2344 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2347 jne 0x11ca2315 */
  if (!C.zf) goto L_11ca2315;
L_11ca2349:;
  /* 11ca2349 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca234b jne 0x11ca2350 */
  if (!C.zf) goto L_11ca2350;
L_11ca234d:;
  /* 11ca234d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca234e jmp 0x11ca2358 */
  goto L_11ca2358;
L_11ca2350:;
  /* 11ca2350 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2352 je 0x11ca2358 */
  if (C.zf) goto L_11ca2358;
  /* 11ca2354 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11ca2358:;
  /* 11ca2358 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11ca235c:;
  /* 11ca235c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca235f je 0x11ca2445 */
  if (C.zf) goto L_11ca2445;
L_11ca2365:;
  /* 11ca2365 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca2367 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca236a je 0x11ca2371 */
  if (C.zf) goto L_11ca2371;
  /* 11ca236c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca236f jne 0x11ca2374 */
  if (!C.zf) goto L_11ca2374;
L_11ca2371:;
  /* 11ca2371 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2372 jmp 0x11ca2365 */
  goto L_11ca2365;
L_11ca2374:;
  /* 11ca2374 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2377 je 0x11ca2445 */
  if (C.zf) goto L_11ca2445;
  /* 11ca237d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca237f je 0x11ca2389 */
  if (C.zf) goto L_11ca2389;
  /* 11ca2381 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11ca2383 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2386 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11ca2389:;
  /* 11ca2389 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca238c inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11ca238e:;
  /* 11ca238e mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11ca2395 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ca2397:;
  /* 11ca2397 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca239a jne 0x11ca23a0 */
  if (!C.zf) goto L_11ca23a0;
  /* 11ca239c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca239d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca239e jmp 0x11ca2397 */
  goto L_11ca2397;
L_11ca23a0:;
  /* 11ca23a0 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca23a3 jne 0x11ca23d1 */
  if (!C.zf) goto L_11ca23d1;
  /* 11ca23a5 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11ca23a8 jne 0x11ca23cf */
  if (!C.zf) goto L_11ca23cf;
  /* 11ca23aa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca23ac cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca23af je 0x11ca23be */
  if (C.zf) goto L_11ca23be;
  /* 11ca23b1 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca23b5 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11ca23b8 jne 0x11ca23be */
  if (!C.zf) goto L_11ca23be;
  /* 11ca23ba mov eax, edx */
  EAX = (EDX);
  /* 11ca23bc jmp 0x11ca23c1 */
  goto L_11ca23c1;
L_11ca23be:;
  /* 11ca23be mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11ca23c1:;
  /* 11ca23c1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca23c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca23c6 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca23c9 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11ca23cc mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11ca23cf:;
  /* 11ca23cf shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11ca23d1:;
  /* 11ca23d1 mov edx, ebx */
  EDX = (EBX);
  /* 11ca23d3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ca23d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca23d6 je 0x11ca23e6 */
  if (C.zf) goto L_11ca23e6;
  /* 11ca23d8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11ca23d9:;
  /* 11ca23d9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca23db je 0x11ca23e1 */
  if (C.zf) goto L_11ca23e1;
  /* 11ca23dd mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11ca23e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca23e1:;
  /* 11ca23e1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca23e3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ca23e4 jne 0x11ca23d9 */
  if (!C.zf) goto L_11ca23d9;
L_11ca23e6:;
  /* 11ca23e6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca23e8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca23ea je 0x11ca2436 */
  if (C.zf) goto L_11ca2436;
  /* 11ca23ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca23f0 jne 0x11ca23fc */
  if (!C.zf) goto L_11ca23fc;
  /* 11ca23f2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca23f5 je 0x11ca2436 */
  if (C.zf) goto L_11ca2436;
  /* 11ca23f7 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca23fa je 0x11ca2436 */
  if (C.zf) goto L_11ca2436;
L_11ca23fc:;
  /* 11ca23fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2400 je 0x11ca2430 */
  if (C.zf) goto L_11ca2430;
  /* 11ca2402 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2404 je 0x11ca241f */
  if (C.zf) goto L_11ca241f;
  /* 11ca2406 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11ca2409 test byte ptr [ebx + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11cab1a1)))&(0x4u); fl_logic(_r,8); }
  /* 11ca2410 je 0x11ca2418 */
  if (C.zf) goto L_11ca2418;
  /* 11ca2412 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca2414 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2415 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2416 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ca2418:;
  /* 11ca2418 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ca241a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca241c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca241d jmp 0x11ca242e */
  goto L_11ca242e;
L_11ca241f:;
  /* 11ca241f movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11ca2422 test byte ptr [edx + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11cab1a1)))&(0x4u); fl_logic(_r,8); }
  /* 11ca2429 je 0x11ca242e */
  if (C.zf) goto L_11ca242e;
  /* 11ca242b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca242c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ca242e:;
  /* 11ca242e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ca2430:;
  /* 11ca2430 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2431 jmp 0x11ca238e */
  goto L_11ca238e;
L_11ca2436:;
  /* 11ca2436 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2438 je 0x11ca243e */
  if (C.zf) goto L_11ca243e;
  /* 11ca243a and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11ca243d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca243e:;
  /* 11ca243e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ca2440 jmp 0x11ca235c */
  goto L_11ca235c;
L_11ca2445:;
  /* 11ca2445 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca2447 je 0x11ca244c */
  if (C.zf) goto L_11ca244c;
  /* 11ca2449 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11ca244c:;
  /* 11ca244c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca244f pop edi */
  EDI = (pop32());
  /* 11ca2450 pop esi */
  ESI = (pop32());
  /* 11ca2451 pop ebx */
  EBX = (pop32());
  /* 11ca2452 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11ca2454 pop ebp */
  EBP = (pop32());
  /* 11ca2455 ret  */
  ESPCHK(0x11ca22a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002456 @ 0x11ca2456 (306 bytes, 132 insns) */
void f_11ca2456(void) {
  FTRACE(0x11ca2456u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2456 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2457 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2458 mov eax, dword ptr [0x11caae6c] */
  EAX = (r32((uint32_t)(0x11caae6c)));
  /* 11ca245d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca245e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca245f mov ebp, dword ptr [0x11ca70dc] */
  EBP = (r32((uint32_t)(0x11ca70dc)));
  /* 11ca2465 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2466 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2467 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2469 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca246b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca246d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca246f jne 0x11ca24a4 */
  if (!C.zf) goto L_11ca24a4;
  /* 11ca2471 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca2473u);
  /* 11ca2473 mov esi, eax */
  ESI = (EAX);
  /* 11ca2475 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2477 je 0x11ca2485 */
  if (C.zf) goto L_11ca2485;
  /* 11ca2479 mov dword ptr [0x11caae6c], 1 */
  w32((uint32_t)(0x11caae6c), (0x1u));
  /* 11ca2483 jmp 0x11ca24ad */
  goto L_11ca24ad;
L_11ca2485:;
  /* 11ca2485 call dword ptr [0x11ca70d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70d8))), 0x11ca248bu);
  /* 11ca248b mov edi, eax */
  EDI = (EAX);
  /* 11ca248d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca248f je 0x11ca257f */
  if (C.zf) goto L_11ca257f;
  /* 11ca2495 mov dword ptr [0x11caae6c], 2 */
  w32((uint32_t)(0x11caae6c), (0x2u));
  /* 11ca249f jmp 0x11ca2533 */
  goto L_11ca2533;
L_11ca24a4:;
  /* 11ca24a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca24a7 jne 0x11ca252e */
  if (!C.zf) goto L_11ca252e;
L_11ca24ad:;
  /* 11ca24ad cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca24af jne 0x11ca24bd */
  if (!C.zf) goto L_11ca24bd;
  /* 11ca24b1 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca24b3u);
  /* 11ca24b3 mov esi, eax */
  ESI = (EAX);
  /* 11ca24b5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca24b7 je 0x11ca257f */
  if (C.zf) goto L_11ca257f;
L_11ca24bd:;
  /* 11ca24bd cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca24c0 mov eax, esi */
  EAX = (ESI);
  /* 11ca24c2 je 0x11ca24d2 */
  if (C.zf) goto L_11ca24d2;
L_11ca24c4:;
  /* 11ca24c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca24c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca24c6 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca24c9 jne 0x11ca24c4 */
  if (!C.zf) goto L_11ca24c4;
  /* 11ca24cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca24cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca24cd cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca24d0 jne 0x11ca24c4 */
  if (!C.zf) goto L_11ca24c4;
L_11ca24d2:;
  /* 11ca24d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca24d4 mov edi, dword ptr [0x11ca70d4] */
  EDI = (r32((uint32_t)(0x11ca70d4)));
  /* 11ca24da sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ca24dc push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24dd push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca24df push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24e1 push eax */
  push32((uint32_t)(EAX));
  /* 11ca24e2 push esi */
  push32((uint32_t)(ESI));
  /* 11ca24e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca24e5 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11ca24e9 call edi */
  call_ind((uint32_t)(EDI), 0x11ca24ebu);
  /* 11ca24eb mov ebp, eax */
  EBP = (EAX);
  /* 11ca24ed cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca24ef je 0x11ca2523 */
  if (C.zf) goto L_11ca2523;
  /* 11ca24f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca24f2 call 0x11ca3281 */
  push32(0x11ca24f7u); f_11ca3281();
  /* 11ca24f7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca24f9 pop ecx */
  ECX = (pop32());
  /* 11ca24fa mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11ca24fe je 0x11ca2523 */
  if (C.zf) goto L_11ca2523;
  /* 11ca2500 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2501 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2502 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2503 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2504 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11ca2508 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2509 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca250a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca250b call edi */
  call_ind((uint32_t)(EDI), 0x11ca250du);
  /* 11ca250d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca250f jne 0x11ca251f */
  if (!C.zf) goto L_11ca251f;
  /* 11ca2511 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ca2515 call 0x11ca2bd6 */
  push32(0x11ca251au); f_11ca2bd6();
  /* 11ca251a pop ecx */
  ECX = (pop32());
  /* 11ca251b mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11ca251f:;
  /* 11ca251f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11ca2523:;
  /* 11ca2523 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2524 call dword ptr [0x11ca70d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70d0))), 0x11ca252au);
  /* 11ca252a mov eax, ebx */
  EAX = (EBX);
  /* 11ca252c jmp 0x11ca2581 */
  goto L_11ca2581;
L_11ca252e:;
  /* 11ca252e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2531 jne 0x11ca257f */
  if (!C.zf) goto L_11ca257f;
L_11ca2533:;
  /* 11ca2533 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2535 jne 0x11ca2543 */
  if (!C.zf) goto L_11ca2543;
  /* 11ca2537 call dword ptr [0x11ca70d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70d8))), 0x11ca253du);
  /* 11ca253d mov edi, eax */
  EDI = (EAX);
  /* 11ca253f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2541 je 0x11ca257f */
  if (C.zf) goto L_11ca257f;
L_11ca2543:;
  /* 11ca2543 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2545 mov eax, edi */
  EAX = (EDI);
  /* 11ca2547 je 0x11ca2553 */
  if (C.zf) goto L_11ca2553;
L_11ca2549:;
  /* 11ca2549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca254a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca254c jne 0x11ca2549 */
  if (!C.zf) goto L_11ca2549;
  /* 11ca254e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca254f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2551 jne 0x11ca2549 */
  if (!C.zf) goto L_11ca2549;
L_11ca2553:;
  /* 11ca2553 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca2555 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2556 mov ebp, eax */
  EBP = (EAX);
  /* 11ca2558 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2559 call 0x11ca3281 */
  push32(0x11ca255eu); f_11ca3281();
  /* 11ca255e mov esi, eax */
  ESI = (EAX);
  /* 11ca2560 pop ecx */
  ECX = (pop32());
  /* 11ca2561 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2563 jne 0x11ca2569 */
  if (!C.zf) goto L_11ca2569;
  /* 11ca2565 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca2567 jmp 0x11ca2574 */
  goto L_11ca2574;
L_11ca2569:;
  /* 11ca2569 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca256a push edi */
  push32((uint32_t)(EDI));
  /* 11ca256b push esi */
  push32((uint32_t)(ESI));
  /* 11ca256c call 0x11ca3920 */
  push32(0x11ca2571u); f_11ca3920();
  /* 11ca2571 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca2574:;
  /* 11ca2574 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2575 call dword ptr [0x11ca70cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70cc))), 0x11ca257bu);
  /* 11ca257b mov eax, esi */
  EAX = (ESI);
  /* 11ca257d jmp 0x11ca2581 */
  goto L_11ca2581;
L_11ca257f:;
  /* 11ca257f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca2581:;
  /* 11ca2581 pop edi */
  EDI = (pop32());
  /* 11ca2582 pop esi */
  ESI = (pop32());
  /* 11ca2583 pop ebp */
  EBP = (pop32());
  /* 11ca2584 pop ebx */
  EBX = (pop32());
  /* 11ca2585 pop ecx */
  ECX = (pop32());
  /* 11ca2586 pop ecx */
  ECX = (pop32());
  /* 11ca2587 ret  */
  ESPCHK(0x11ca2456u, _esp0);
  ESP += 4; return;
}

/* FUN_10002588 @ 0x11ca2588 (45 bytes, 17 insns) */
void f_11ca2588(void) {
  FTRACE(0x11ca2588u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2588 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2589 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca258d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca258f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ca2592 call dword ptr [0x11ca70c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70c4))), 0x11ca2598u);
  /* 11ca2598 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca259d jne 0x11ca25b3 */
  if (!C.zf) goto L_11ca25b3;
  /* 11ca259f mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11ca25a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca25a4 je 0x11ca25b3 */
  if (C.zf) goto L_11ca25b3;
  /* 11ca25a6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca25a8 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11ca25ab mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11ca25ad mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11ca25b0 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11ca25b3:;
  /* 11ca25b3 pop esi */
  ESI = (pop32());
  /* 11ca25b4 ret  */
  ESPCHK(0x11ca2588u, _esp0);
  ESP += 4; return;
}

/* FUN_100025b5 @ 0x11ca25b5 (328 bytes, 115 insns) */
void f_11ca25b5(void) {
  FTRACE(0x11ca25b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca25b5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca25b6 mov ebp, esp */
  EBP = (ESP);
  /* 11ca25b8 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11ca25bd call 0x11ca4010 */
  push32(0x11ca25c2u); f_11ca4010();
  /* 11ca25c2 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ca25c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca25c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ca25ca mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11ca25d4 call dword ptr [0x11ca7070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7070))), 0x11ca25dau);
  /* 11ca25da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca25dc je 0x11ca25f8 */
  if (C.zf) goto L_11ca25f8;
  /* 11ca25de cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca25e5 jne 0x11ca25f8 */
  if (!C.zf) goto L_11ca25f8;
  /* 11ca25e7 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca25ee jb 0x11ca25f8 */
  if (C.cf) goto L_11ca25f8;
  /* 11ca25f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca25f2 pop eax */
  EAX = (pop32());
  /* 11ca25f3 jmp 0x11ca26fa */
  goto L_11ca26fa;
L_11ca25f8:;
  /* 11ca25f8 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11ca25fe push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11ca2603 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2604 push 0x11ca71a0 */
  push32((uint32_t)(0x11ca71a0u));
  /* 11ca2609 call dword ptr [0x11ca70c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70c8))), 0x11ca260fu);
  /* 11ca260f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2611 je 0x11ca26e7 */
  if (C.zf) goto L_11ca26e7;
  /* 11ca2617 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2619 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11ca261f cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2625 je 0x11ca263a */
  if (C.zf) goto L_11ca263a;
L_11ca2627:;
  /* 11ca2627 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ca2629 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca262b jl 0x11ca2635 */
  if ((C.sf!=C.of)) goto L_11ca2635;
  /* 11ca262d cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca262f jg 0x11ca2635 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca2635;
  /* 11ca2631 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca2633 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11ca2635:;
  /* 11ca2635 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca2636 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2638 jne 0x11ca2627 */
  if (!C.zf) goto L_11ca2627;
L_11ca263a:;
  /* 11ca263a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11ca2640 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ca2642 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2643 push 0x11ca7188 */
  push32((uint32_t)(0x11ca7188u));
  /* 11ca2648 call 0x11ca3fd0 */
  push32(0x11ca264du); f_11ca3fd0();
  /* 11ca264d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2652 jne 0x11ca265c */
  if (!C.zf) goto L_11ca265c;
  /* 11ca2654 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11ca265a jmp 0x11ca26a5 */
  goto L_11ca26a5;
L_11ca265c:;
  /* 11ca265c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11ca2662 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ca2667 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2668 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2669 call dword ptr [0x11ca70a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a8))), 0x11ca266fu);
  /* 11ca266f cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2675 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11ca267b je 0x11ca2690 */
  if (C.zf) goto L_11ca2690;
L_11ca267d:;
  /* 11ca267d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ca267f cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2681 jl 0x11ca268b */
  if ((C.sf!=C.of)) goto L_11ca268b;
  /* 11ca2683 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2685 jg 0x11ca268b */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca268b;
  /* 11ca2687 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca2689 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11ca268b:;
  /* 11ca268b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca268c cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca268e jne 0x11ca267d */
  if (!C.zf) goto L_11ca267d;
L_11ca2690:;
  /* 11ca2690 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11ca2696 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2697 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11ca269d push eax */
  push32((uint32_t)(EAX));
  /* 11ca269e call 0x11ca3f50 */
  push32(0x11ca26a3u); f_11ca3f50();
  /* 11ca26a3 pop ecx */
  ECX = (pop32());
  /* 11ca26a4 pop ecx */
  ECX = (pop32());
L_11ca26a5:;
  /* 11ca26a5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca26a7 je 0x11ca26e7 */
  if (C.zf) goto L_11ca26e7;
  /* 11ca26a9 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11ca26ab push eax */
  push32((uint32_t)(EAX));
  /* 11ca26ac call 0x11ca3e90 */
  push32(0x11ca26b1u); f_11ca3e90();
  /* 11ca26b1 pop ecx */
  ECX = (pop32());
  /* 11ca26b2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca26b4 pop ecx */
  ECX = (pop32());
  /* 11ca26b5 je 0x11ca26e7 */
  if (C.zf) goto L_11ca26e7;
  /* 11ca26b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca26b8 mov ecx, eax */
  ECX = (EAX);
  /* 11ca26ba cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca26bc je 0x11ca26cc */
  if (C.zf) goto L_11ca26cc;
L_11ca26be:;
  /* 11ca26be cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca26c1 jne 0x11ca26c7 */
  if (!C.zf) goto L_11ca26c7;
  /* 11ca26c3 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11ca26c5 jmp 0x11ca26c8 */
  goto L_11ca26c8;
L_11ca26c7:;
  /* 11ca26c7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11ca26c8:;
  /* 11ca26c8 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca26ca jne 0x11ca26be */
  if (!C.zf) goto L_11ca26be;
L_11ca26cc:;
  /* 11ca26cc push 0xa */
  push32((uint32_t)(0xau));
  /* 11ca26ce push ebx */
  push32((uint32_t)(EBX));
  /* 11ca26cf push eax */
  push32((uint32_t)(EAX));
  /* 11ca26d0 call 0x11ca3c55 */
  push32(0x11ca26d5u); f_11ca3c55();
  /* 11ca26d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca26d8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca26db je 0x11ca26fa */
  if (C.zf) goto L_11ca26fa;
  /* 11ca26dd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca26e0 je 0x11ca26fa */
  if (C.zf) goto L_11ca26fa;
  /* 11ca26e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca26e5 je 0x11ca26fa */
  if (C.zf) goto L_11ca26fa;
L_11ca26e7:;
  /* 11ca26e7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca26ea push eax */
  push32((uint32_t)(EAX));
  /* 11ca26eb call 0x11ca2588 */
  push32(0x11ca26f0u); f_11ca2588();
  /* 11ca26f0 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca26f4 pop ecx */
  ECX = (pop32());
  /* 11ca26f5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca26f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ca26fa:;
  /* 11ca26fa pop ebx */
  EBX = (pop32());
  /* 11ca26fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca26fc ret  */
  ESPCHK(0x11ca25b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100026fd @ 0x11ca26fd (93 bytes, 30 insns) */
void f_11ca26fd(void) {
  FTRACE(0x11ca26fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca26fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca26ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca2701 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2705 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ca270a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ca270d push eax */
  push32((uint32_t)(EAX));
  /* 11ca270e call dword ptr [0x11ca7074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7074))), 0x11ca2714u);
  /* 11ca2714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2716 mov dword ptr [0x11cab2a8], eax */
  w32((uint32_t)(0x11cab2a8), (EAX));
  /* 11ca271b je 0x11ca2753 */
  if (C.zf) goto L_11ca2753;
  /* 11ca271d call 0x11ca25b5 */
  push32(0x11ca2722u); f_11ca25b5();
  /* 11ca2722 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2725 mov dword ptr [0x11cab2ac], eax */
  w32((uint32_t)(0x11cab2ac), (EAX));
  /* 11ca272a jne 0x11ca2739 */
  if (!C.zf) goto L_11ca2739;
  /* 11ca272c push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11ca2731 call 0x11ca403f */
  push32(0x11ca2736u); f_11ca403f();
  /* 11ca2736 pop ecx */
  ECX = (pop32());
  /* 11ca2737 jmp 0x11ca2743 */
  goto L_11ca2743;
L_11ca2739:;
  /* 11ca2739 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca273c jne 0x11ca2756 */
  if (!C.zf) goto L_11ca2756;
  /* 11ca273e call 0x11ca4b86 */
  push32(0x11ca2743u); f_11ca4b86();
L_11ca2743:;
  /* 11ca2743 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2745 jne 0x11ca2756 */
  if (!C.zf) goto L_11ca2756;
  /* 11ca2747 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca274d call dword ptr [0x11ca706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca706c))), 0x11ca2753u);
L_11ca2753:;
  /* 11ca2753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca2755 ret  */
  ESPCHK(0x11ca26fdu, _esp0);
  ESP += 4; return;
L_11ca2756:;
  /* 11ca2756 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca2758 pop eax */
  EAX = (pop32());
  /* 11ca2759 ret  */
  ESPCHK(0x11ca26fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000275a @ 0x11ca275a (168 bytes, 56 insns) */
void f_11ca275a(void) {
  FTRACE(0x11ca275au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca275a mov eax, dword ptr [0x11cab2ac] */
  EAX = (r32((uint32_t)(0x11cab2ac)));
  /* 11ca275f push esi */
  push32((uint32_t)(ESI));
  /* 11ca2760 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2763 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2764 jne 0x11ca27cc */
  if (!C.zf) goto L_11ca27cc;
  /* 11ca2766 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2767 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2769 cmp dword ptr [0x11cab07c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cab07c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca276f push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2770 mov ebp, dword ptr [0x11ca7060] */
  EBP = (r32((uint32_t)(0x11ca7060)));
  /* 11ca2776 jle 0x11ca27b8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca27b8;
  /* 11ca2778 mov eax, dword ptr [0x11cab080] */
  EAX = (r32((uint32_t)(0x11cab080)));
  /* 11ca277d mov edi, dword ptr [0x11ca7064] */
  EDI = (r32((uint32_t)(0x11ca7064)));
  /* 11ca2783 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11ca2786:;
  /* 11ca2786 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ca278b push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ca2790 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca2792 call edi */
  call_ind((uint32_t)(EDI), 0x11ca2794u);
  /* 11ca2794 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ca2799 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca279b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca279d call edi */
  call_ind((uint32_t)(EDI), 0x11ca279fu);
  /* 11ca279f push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11ca27a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca27a4 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca27aa call ebp */
  call_ind((uint32_t)(EBP), 0x11ca27acu);
  /* 11ca27ac add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca27af inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca27b0 cmp ebx, dword ptr [0x11cab07c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cab07c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca27b6 jl 0x11ca2786 */
  if ((C.sf!=C.of)) goto L_11ca2786;
L_11ca27b8:;
  /* 11ca27b8 push dword ptr [0x11cab080] */
  push32((uint32_t)(r32((uint32_t)(0x11cab080))));
  /* 11ca27be push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca27c0 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca27c6 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca27c8u);
  /* 11ca27c8 pop ebp */
  EBP = (pop32());
  /* 11ca27c9 pop ebx */
  EBX = (pop32());
  /* 11ca27ca jmp 0x11ca27f3 */
  goto L_11ca27f3;
L_11ca27cc:;
  /* 11ca27cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca27cf jne 0x11ca27f3 */
  if (!C.zf) goto L_11ca27f3;
  /* 11ca27d1 mov edi, 0x11ca8640 */
  EDI = (0x11ca8640u);
  /* 11ca27d6 mov esi, edi */
  ESI = (EDI);
L_11ca27d8:;
  /* 11ca27d8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ca27db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca27dd je 0x11ca27ed */
  if (C.zf) goto L_11ca27ed;
  /* 11ca27df push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ca27e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca27e6 push eax */
  push32((uint32_t)(EAX));
  /* 11ca27e7 call dword ptr [0x11ca7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7064))), 0x11ca27edu);
L_11ca27ed:;
  /* 11ca27ed mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11ca27ef cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca27f1 jne 0x11ca27d8 */
  if (!C.zf) goto L_11ca27d8;
L_11ca27f3:;
  /* 11ca27f3 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca27f9 call dword ptr [0x11ca706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca706c))), 0x11ca27ffu);
  /* 11ca27ff pop edi */
  EDI = (pop32());
  /* 11ca2800 pop esi */
  ESI = (pop32());
  /* 11ca2801 ret  */
  ESPCHK(0x11ca275au, _esp0);
  ESP += 4; return;
}

/* FUN_10002802 @ 0x11ca2802 (57 bytes, 18 insns) */
void f_11ca2802(void) {
  FTRACE(0x11ca2802u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2802 mov eax, dword ptr [0x11caad1c] */
  EAX = (r32((uint32_t)(0x11caad1c)));
  /* 11ca2807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca280a je 0x11ca2819 */
  if (C.zf) goto L_11ca2819;
  /* 11ca280c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca280e jne 0x11ca283a */
  if (!C.zf) goto L_11ca283a;
  /* 11ca2810 cmp dword ptr [0x11caad20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caad20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2817 jne 0x11ca283a */
  if (!C.zf) goto L_11ca283a;
L_11ca2819:;
  /* 11ca2819 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11ca281e call 0x11ca283b */
  push32(0x11ca2823u); f_11ca283b();
  /* 11ca2823 mov eax, dword ptr [0x11caae70] */
  EAX = (r32((uint32_t)(0x11caae70)));
  /* 11ca2828 pop ecx */
  ECX = (pop32());
  /* 11ca2829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca282b je 0x11ca282f */
  if (C.zf) goto L_11ca282f;
  /* 11ca282d call eax */
  call_ind((uint32_t)(EAX), 0x11ca282fu);
L_11ca282f:;
  /* 11ca282f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ca2834 call 0x11ca283b */
  push32(0x11ca2839u); f_11ca283b();
  /* 11ca2839 pop ecx */
  ECX = (pop32());
L_11ca283a:;
  /* 11ca283a ret  */
  ESPCHK(0x11ca2802u, _esp0);
  ESP += 4; return;
}

/* FUN_1000283b @ 0x11ca283b (339 bytes, 100 insns) */
void f_11ca283b(void) {
  FTRACE(0x11ca283bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca283b push ebp */
  push32((uint32_t)(EBP));
  /* 11ca283c mov ebp, esp */
  EBP = (ESP);
  /* 11ca283e sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca2844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca2847 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca2849 mov eax, 0x11ca8248 */
  EAX = (0x11ca8248u);
L_11ca284e:;
  /* 11ca284e cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2850 je 0x11ca285d */
  if (C.zf) goto L_11ca285d;
  /* 11ca2852 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2855 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca2856 cmp eax, 0x11ca82d8 */
  { uint32_t _a=(EAX),_b=(0x11ca82d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca285b jl 0x11ca284e */
  if ((C.sf!=C.of)) goto L_11ca284e;
L_11ca285d:;
  /* 11ca285d push esi */
  push32((uint32_t)(ESI));
  /* 11ca285e mov esi, ecx */
  ESI = (ECX);
  /* 11ca2860 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11ca2863 cmp edx, dword ptr [esi + 0x11ca8248] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11ca8248))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2869 jne 0x11ca298b */
  if (!C.zf) goto L_11ca298b;
  /* 11ca286f mov eax, dword ptr [0x11caad1c] */
  EAX = (r32((uint32_t)(0x11caad1c)));
  /* 11ca2874 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2877 je 0x11ca2965 */
  if (C.zf) goto L_11ca2965;
  /* 11ca287d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca287f jne 0x11ca288e */
  if (!C.zf) goto L_11ca288e;
  /* 11ca2881 cmp dword ptr [0x11caad20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caad20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2888 je 0x11ca2965 */
  if (C.zf) goto L_11ca2965;
L_11ca288e:;
  /* 11ca288e cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2894 je 0x11ca298b */
  if (C.zf) goto L_11ca298b;
  /* 11ca289a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28a0 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ca28a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ca28a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca28a8 call dword ptr [0x11ca70a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70a8))), 0x11ca28aeu);
  /* 11ca28ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca28b0 jne 0x11ca28c5 */
  if (!C.zf) goto L_11ca28c5;
  /* 11ca28b2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28b8 push 0x11ca7490 */
  push32((uint32_t)(0x11ca7490u));
  /* 11ca28bd push eax */
  push32((uint32_t)(EAX));
  /* 11ca28be call 0x11ca33c0 */
  push32(0x11ca28c3u); f_11ca33c0();
  /* 11ca28c3 pop ecx */
  ECX = (pop32());
  /* 11ca28c4 pop ecx */
  ECX = (pop32());
L_11ca28c5:;
  /* 11ca28c5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28cb push edi */
  push32((uint32_t)(EDI));
  /* 11ca28cc push eax */
  push32((uint32_t)(EAX));
  /* 11ca28cd lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28d3 call 0x11ca34b0 */
  push32(0x11ca28d8u); f_11ca34b0();
  /* 11ca28d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca28d9 pop ecx */
  ECX = (pop32());
  /* 11ca28da cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca28dd jbe 0x11ca2908 */
  if ((C.cf||C.zf)) goto L_11ca2908;
  /* 11ca28df lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28e5 push eax */
  push32((uint32_t)(EAX));
  /* 11ca28e6 call 0x11ca34b0 */
  push32(0x11ca28ebu); f_11ca34b0();
  /* 11ca28eb mov edi, eax */
  EDI = (EAX);
  /* 11ca28ed lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ca28f3 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca28f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca28f8 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca28fa push 0x11ca748c */
  push32((uint32_t)(0x11ca748cu));
  /* 11ca28ff push edi */
  push32((uint32_t)(EDI));
  /* 11ca2900 call 0x11ca52e0 */
  push32(0x11ca2905u); f_11ca52e0();
  /* 11ca2905 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca2908:;
  /* 11ca2908 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ca290e push 0x11ca7470 */
  push32((uint32_t)(0x11ca7470u));
  /* 11ca2913 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2914 call 0x11ca33c0 */
  push32(0x11ca2919u); f_11ca33c0();
  /* 11ca2919 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ca291f push edi */
  push32((uint32_t)(EDI));
  /* 11ca2920 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2921 call 0x11ca33d0 */
  push32(0x11ca2926u); f_11ca33d0();
  /* 11ca2926 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ca292c push 0x11ca746c */
  push32((uint32_t)(0x11ca746cu));
  /* 11ca2931 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2932 call 0x11ca33d0 */
  push32(0x11ca2937u); f_11ca33d0();
  /* 11ca2937 push dword ptr [esi + 0x11ca824c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11ca824c))));
  /* 11ca293d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ca2943 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2944 call 0x11ca33d0 */
  push32(0x11ca2949u); f_11ca33d0();
  /* 11ca2949 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11ca294e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ca2954 push 0x11ca7444 */
  push32((uint32_t)(0x11ca7444u));
  /* 11ca2959 push eax */
  push32((uint32_t)(EAX));
  /* 11ca295a call 0x11ca5253 */
  push32(0x11ca295fu); f_11ca5253();
  /* 11ca295f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2962 pop edi */
  EDI = (pop32());
  /* 11ca2963 jmp 0x11ca298b */
  goto L_11ca298b;
L_11ca2965:;
  /* 11ca2965 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ca2968 lea esi, [esi + 0x11ca824c] */
  ESI = ((uint32_t)(ESI + 0x11ca824c));
  /* 11ca296e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca2970 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2971 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca2973 call 0x11ca34b0 */
  push32(0x11ca2978u); f_11ca34b0();
  /* 11ca2978 pop ecx */
  ECX = (pop32());
  /* 11ca2979 push eax */
  push32((uint32_t)(EAX));
  /* 11ca297a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca297c push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ca297e call dword ptr [0x11ca70b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70b8))), 0x11ca2984u);
  /* 11ca2984 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2985 call dword ptr [0x11ca7068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7068))), 0x11ca298bu);
L_11ca298b:;
  /* 11ca298b pop esi */
  ESI = (pop32());
  /* 11ca298c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca298d ret  */
  ESPCHK(0x11ca283bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000298e @ 0x11ca298e (289 bytes, 98 insns) */
void f_11ca298e(void) {
  FTRACE(0x11ca298eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca298e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca298f mov ebp, esp */
  EBP = (ESP);
  /* 11ca2991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca2993 push 0x11ca74a8 */
  push32((uint32_t)(0x11ca74a8u));
  /* 11ca2998 push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca299d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca29a3 push eax */
  push32((uint32_t)(EAX));
  /* 11ca29a4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca29ab sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca29ae push ebx */
  push32((uint32_t)(EBX));
  /* 11ca29af push esi */
  push32((uint32_t)(ESI));
  /* 11ca29b0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca29b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca29b4 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca29b8 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11ca29bb mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11ca29be cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca29c1 ja 0x11ca29d7 */
  if ((!C.cf&&!C.zf)) goto L_11ca29d7;
  /* 11ca29c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca29c5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca29c7 jne 0x11ca29cc */
  if (!C.zf) goto L_11ca29cc;
  /* 11ca29c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca29cb pop esi */
  ESI = (pop32());
L_11ca29cc:;
  /* 11ca29cc add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca29cf and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca29d2 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11ca29d5 jmp 0x11ca29d9 */
  goto L_11ca29d9;
L_11ca29d7:;
  /* 11ca29d7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ca29d9:;
  /* 11ca29d9 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11ca29dc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca29df ja 0x11ca2a8d */
  if ((!C.cf&&!C.zf)) goto L_11ca2a8d;
  /* 11ca29e5 mov eax, dword ptr [0x11cab2ac] */
  EAX = (r32((uint32_t)(0x11cab2ac)));
  /* 11ca29ea cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca29ed jne 0x11ca2a30 */
  if (!C.zf) goto L_11ca2a30;
  /* 11ca29ef mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ca29f2 cmp edi, dword ptr [0x11cab084] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11cab084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca29f8 ja 0x11ca2a76 */
  if ((!C.cf&&!C.zf)) goto L_11ca2a76;
  /* 11ca29fa push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca29fc call 0x11ca2b60 */
  push32(0x11ca2a01u); f_11ca2b60();
  /* 11ca2a01 pop ecx */
  ECX = (pop32());
  /* 11ca2a02 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11ca2a05 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2a06 call 0x11ca43db */
  push32(0x11ca2a0bu); f_11ca43db();
  /* 11ca2a0b pop ecx */
  ECX = (pop32());
  /* 11ca2a0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ca2a0f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca2a13 call 0x11ca2a27 */
  push32(0x11ca2a18u); f_11ca2a27();
  /* 11ca2a18 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a1b je 0x11ca2a7b */
  if (C.zf) goto L_11ca2a7b;
  /* 11ca2a1d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11ca2a20 jmp 0x11ca2a6a */
  goto L_11ca2a6a;
  /* 11ca2a22 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2a24 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca2a27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2a29 call 0x11ca2bc1 */
  push32(0x11ca2a2eu); f_11ca2bc1();
  /* 11ca2a2e pop ecx */
  ECX = (pop32());
  /* 11ca2a2f ret  */
  ESPCHK(0x11ca298eu, _esp0);
  ESP += 4; return;
L_11ca2a30:;
  /* 11ca2a30 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a33 jne 0x11ca2a76 */
  if (!C.zf) goto L_11ca2a76;
  /* 11ca2a35 cmp esi, dword ptr [0x11caa664] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11caa664))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a3b ja 0x11ca2a76 */
  if ((!C.cf&&!C.zf)) goto L_11ca2a76;
  /* 11ca2a3d push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2a3f call 0x11ca2b60 */
  push32(0x11ca2a44u); f_11ca2b60();
  /* 11ca2a44 pop ecx */
  ECX = (pop32());
  /* 11ca2a45 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ca2a4c mov eax, esi */
  EAX = (ESI);
  /* 11ca2a4e shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca2a51 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2a52 call 0x11ca4e7e */
  push32(0x11ca2a57u); f_11ca4e7e();
  /* 11ca2a57 pop ecx */
  ECX = (pop32());
  /* 11ca2a58 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ca2a5b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca2a5f call 0x11ca2ab0 */
  push32(0x11ca2a64u); f_11ca2ab0();
  /* 11ca2a64 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a67 je 0x11ca2a7b */
  if (C.zf) goto L_11ca2a7b;
  /* 11ca2a69 push esi */
  push32((uint32_t)(ESI));
L_11ca2a6a:;
  /* 11ca2a6a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2a6b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11ca2a6e call 0x11ca5400 */
  push32(0x11ca2a73u); f_11ca5400();
  /* 11ca2a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca2a76:;
  /* 11ca2a76 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a79 jne 0x11ca2ab9 */
  if (!C.zf) { jmp_ind(0x11ca2ab9u); return; }
L_11ca2a7b:;
  /* 11ca2a7b push esi */
  push32((uint32_t)(ESI));
  /* 11ca2a7c push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca2a7e push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca2a84 call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca2a8au);
  /* 11ca2a8a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ca2a8d:;
  /* 11ca2a8d cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a90 jne 0x11ca2ab9 */
  if (!C.zf) { jmp_ind(0x11ca2ab9u); return; }
  /* 11ca2a92 cmp dword ptr [0x11caafac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11caafac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2a98 je 0x11ca2ab9 */
  if (C.zf) { jmp_ind(0x11ca2ab9u); return; }
  /* 11ca2a9a push esi */
  push32((uint32_t)(ESI));
  /* 11ca2a9b call 0x11ca53de */
  push32(0x11ca2aa0u); f_11ca53de();
  /* 11ca2aa0 pop ecx */
  ECX = (pop32());
  /* 11ca2aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2aa3 jne 0x11ca29d9 */
  if (!C.zf) goto L_11ca29d9;
  /* 11ca2aa9 jmp 0x11ca2abc */
  jmp_ind(0x11ca2abcu); return;
  /* 11ca2aab xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10002a27 @ 0x11ca2a27 (9 bytes, 4 insns) */
void f_11ca2a27(void) {
  FTRACE(0x11ca2a27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2a27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2a29 call 0x11ca2bc1 */
  push32(0x11ca2a2eu); f_11ca2bc1();
  /* 11ca2a2e pop ecx */
  ECX = (pop32());
  /* 11ca2a2f ret  */
  ESPCHK(0x11ca2a27u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab0 @ 0x11ca2ab0 (9 bytes, 4 insns) */
void f_11ca2ab0(void) {
  FTRACE(0x11ca2ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2ab0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2ab2 call 0x11ca2bc1 */
  push32(0x11ca2ab7u); f_11ca2bc1();
  /* 11ca2ab7 pop ecx */
  ECX = (pop32());
  /* 11ca2ab8 ret  */
  ESPCHK(0x11ca2ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002acb @ 0x11ca2acb (41 bytes, 12 insns) */
void f_11ca2acb(void) {
  FTRACE(0x11ca2acbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2acb push esi */
  push32((uint32_t)(ESI));
  /* 11ca2acc mov esi, dword ptr [0x11ca7054] */
  ESI = (r32((uint32_t)(0x11ca7054)));
  /* 11ca2ad2 push dword ptr [0x11ca831c] */
  push32((uint32_t)(r32((uint32_t)(0x11ca831c))));
  /* 11ca2ad8 call esi */
  call_ind((uint32_t)(ESI), 0x11ca2adau);
  /* 11ca2ada push dword ptr [0x11ca830c] */
  push32((uint32_t)(r32((uint32_t)(0x11ca830c))));
  /* 11ca2ae0 call esi */
  call_ind((uint32_t)(ESI), 0x11ca2ae2u);
  /* 11ca2ae2 push dword ptr [0x11ca82fc] */
  push32((uint32_t)(r32((uint32_t)(0x11ca82fc))));
  /* 11ca2ae8 call esi */
  call_ind((uint32_t)(ESI), 0x11ca2aeau);
  /* 11ca2aea push dword ptr [0x11ca82dc] */
  push32((uint32_t)(r32((uint32_t)(0x11ca82dc))));
  /* 11ca2af0 call esi */
  call_ind((uint32_t)(ESI), 0x11ca2af2u);
  /* 11ca2af2 pop esi */
  ESI = (pop32());
  /* 11ca2af3 ret  */
  ESPCHK(0x11ca2acbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002af4 @ 0x11ca2af4 (108 bytes, 34 insns) */
void f_11ca2af4(void) {
  FTRACE(0x11ca2af4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2af4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2af5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2af6 mov edi, dword ptr [0x11ca70ac] */
  EDI = (r32((uint32_t)(0x11ca70ac)));
  /* 11ca2afc mov esi, 0x11ca82d8 */
  ESI = (0x11ca82d8u);
L_11ca2b01:;
  /* 11ca2b01 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca2b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2b05 je 0x11ca2b32 */
  if (C.zf) goto L_11ca2b32;
  /* 11ca2b07 cmp esi, 0x11ca831c */
  { uint32_t _a=(ESI),_b=(0x11ca831cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b0d je 0x11ca2b32 */
  if (C.zf) goto L_11ca2b32;
  /* 11ca2b0f cmp esi, 0x11ca830c */
  { uint32_t _a=(ESI),_b=(0x11ca830cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b15 je 0x11ca2b32 */
  if (C.zf) goto L_11ca2b32;
  /* 11ca2b17 cmp esi, 0x11ca82fc */
  { uint32_t _a=(ESI),_b=(0x11ca82fcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b1d je 0x11ca2b32 */
  if (C.zf) goto L_11ca2b32;
  /* 11ca2b1f cmp esi, 0x11ca82dc */
  { uint32_t _a=(ESI),_b=(0x11ca82dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b25 je 0x11ca2b32 */
  if (C.zf) goto L_11ca2b32;
  /* 11ca2b27 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2b28 call edi */
  call_ind((uint32_t)(EDI), 0x11ca2b2au);
  /* 11ca2b2a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca2b2c call 0x11ca2bd6 */
  push32(0x11ca2b31u); f_11ca2bd6();
  /* 11ca2b31 pop ecx */
  ECX = (pop32());
L_11ca2b32:;
  /* 11ca2b32 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2b35 cmp esi, 0x11ca8398 */
  { uint32_t _a=(ESI),_b=(0x11ca8398u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b3b jl 0x11ca2b01 */
  if ((C.sf!=C.of)) goto L_11ca2b01;
  /* 11ca2b3d push dword ptr [0x11ca82fc] */
  push32((uint32_t)(r32((uint32_t)(0x11ca82fc))));
  /* 11ca2b43 call edi */
  call_ind((uint32_t)(EDI), 0x11ca2b45u);
  /* 11ca2b45 push dword ptr [0x11ca830c] */
  push32((uint32_t)(r32((uint32_t)(0x11ca830c))));
  /* 11ca2b4b call edi */
  call_ind((uint32_t)(EDI), 0x11ca2b4du);
  /* 11ca2b4d push dword ptr [0x11ca831c] */
  push32((uint32_t)(r32((uint32_t)(0x11ca831c))));
  /* 11ca2b53 call edi */
  call_ind((uint32_t)(EDI), 0x11ca2b55u);
  /* 11ca2b55 push dword ptr [0x11ca82dc] */
  push32((uint32_t)(r32((uint32_t)(0x11ca82dc))));
  /* 11ca2b5b call edi */
  call_ind((uint32_t)(EDI), 0x11ca2b5du);
  /* 11ca2b5d pop edi */
  EDI = (pop32());
  /* 11ca2b5e pop esi */
  ESI = (pop32());
  /* 11ca2b5f ret  */
  ESPCHK(0x11ca2af4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b60 @ 0x11ca2b60 (97 bytes, 37 insns) */
void f_11ca2b60(void) {
  FTRACE(0x11ca2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2b61 mov ebp, esp */
  EBP = (ESP);
  /* 11ca2b63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca2b66 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2b67 cmp dword ptr [eax*4 + 0x11ca82d8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ca82d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b6f lea esi, [eax*4 + 0x11ca82d8] */
  ESI = ((uint32_t)(EAX*4 + 0x11ca82d8));
  /* 11ca2b76 jne 0x11ca2bb6 */
  if (!C.zf) goto L_11ca2bb6;
  /* 11ca2b78 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2b79 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11ca2b7b call 0x11ca3281 */
  push32(0x11ca2b80u); f_11ca3281();
  /* 11ca2b80 mov edi, eax */
  EDI = (EAX);
  /* 11ca2b82 pop ecx */
  ECX = (pop32());
  /* 11ca2b83 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca2b85 jne 0x11ca2b8f */
  if (!C.zf) goto L_11ca2b8f;
  /* 11ca2b87 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ca2b89 call 0x11ca1ba1 */
  push32(0x11ca2b8eu); f_11ca1ba1();
  /* 11ca2b8e pop ecx */
  ECX = (pop32());
L_11ca2b8f:;
  /* 11ca2b8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ca2b91 call 0x11ca2b60 */
  push32(0x11ca2b96u); f_11ca2b60();
  /* 11ca2b96 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2b99 pop ecx */
  ECX = (pop32());
  /* 11ca2b9a push edi */
  push32((uint32_t)(EDI));
  /* 11ca2b9b jne 0x11ca2ba7 */
  if (!C.zf) goto L_11ca2ba7;
  /* 11ca2b9d call dword ptr [0x11ca7054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7054))), 0x11ca2ba3u);
  /* 11ca2ba3 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ca2ba5 jmp 0x11ca2bad */
  goto L_11ca2bad;
L_11ca2ba7:;
  /* 11ca2ba7 call 0x11ca2bd6 */
  push32(0x11ca2bacu); f_11ca2bd6();
  /* 11ca2bac pop ecx */
  ECX = (pop32());
L_11ca2bad:;
  /* 11ca2bad push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ca2baf call 0x11ca2bc1 */
  push32(0x11ca2bb4u); f_11ca2bc1();
  /* 11ca2bb4 pop ecx */
  ECX = (pop32());
  /* 11ca2bb5 pop edi */
  EDI = (pop32());
L_11ca2bb6:;
  /* 11ca2bb6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca2bb8 call dword ptr [0x11ca705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca705c))), 0x11ca2bbeu);
  /* 11ca2bbe pop esi */
  ESI = (pop32());
  /* 11ca2bbf pop ebp */
  EBP = (pop32());
  /* 11ca2bc0 ret  */
  ESPCHK(0x11ca2b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc1 @ 0x11ca2bc1 (21 bytes, 7 insns) */
void f_11ca2bc1(void) {
  FTRACE(0x11ca2bc1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2bc1 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2bc2 mov ebp, esp */
  EBP = (ESP);
  /* 11ca2bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca2bc7 push dword ptr [eax*4 + 0x11ca82d8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11ca82d8))));
  /* 11ca2bce call dword ptr [0x11ca7050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7050))), 0x11ca2bd4u);
  /* 11ca2bd4 pop ebp */
  EBP = (pop32());
  /* 11ca2bd5 ret  */
  ESPCHK(0x11ca2bc1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bd6 @ 0x11ca2bd6 (215 bytes, 76 insns) */
void f_11ca2bd6(void) {
  FTRACE(0x11ca2bd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2bd6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2bd7 mov ebp, esp */
  EBP = (ESP);
  /* 11ca2bd9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca2bdb push 0x11ca74c0 */
  push32((uint32_t)(0x11ca74c0u));
  /* 11ca2be0 push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca2be5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca2beb push eax */
  push32((uint32_t)(EAX));
  /* 11ca2bec mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca2bf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca2bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2bf7 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2bf8 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2bf9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca2bfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca2bfe je 0x11ca2cb0 */
  if (C.zf) { jmp_ind(0x11ca2cb0u); return; }
  /* 11ca2c04 mov eax, dword ptr [0x11cab2ac] */
  EAX = (r32((uint32_t)(0x11cab2ac)));
  /* 11ca2c09 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2c0c jne 0x11ca2c49 */
  if (!C.zf) goto L_11ca2c49;
  /* 11ca2c0e push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c10 call 0x11ca2b60 */
  push32(0x11ca2c15u); f_11ca2b60();
  /* 11ca2c15 pop ecx */
  ECX = (pop32());
  /* 11ca2c16 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca2c1a push esi */
  push32((uint32_t)(ESI));
  /* 11ca2c1b call 0x11ca4087 */
  push32(0x11ca2c20u); f_11ca4087();
  /* 11ca2c20 pop ecx */
  ECX = (pop32());
  /* 11ca2c21 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ca2c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2c26 je 0x11ca2c31 */
  if (C.zf) goto L_11ca2c31;
  /* 11ca2c28 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2c29 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2c2a call 0x11ca40b2 */
  push32(0x11ca2c2fu); f_11ca40b2();
  /* 11ca2c2f pop ecx */
  ECX = (pop32());
  /* 11ca2c30 pop ecx */
  ECX = (pop32());
L_11ca2c31:;
  /* 11ca2c31 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca2c35 call 0x11ca2c40 */
  push32(0x11ca2c3au); f_11ca2c40();
  /* 11ca2c3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2c3e jmp 0x11ca2c91 */
  goto L_11ca2c91;
  /* 11ca2c40 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c42 call 0x11ca2bc1 */
  push32(0x11ca2c47u); f_11ca2bc1();
  /* 11ca2c47 pop ecx */
  ECX = (pop32());
  /* 11ca2c48 ret  */
  ESPCHK(0x11ca2bd6u, _esp0);
  ESP += 4; return;
L_11ca2c49:;
  /* 11ca2c49 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2c4c jne 0x11ca2ca1 */
  if (!C.zf) goto L_11ca2ca1;
  /* 11ca2c4e push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c50 call 0x11ca2b60 */
  push32(0x11ca2c55u); f_11ca2b60();
  /* 11ca2c55 pop ecx */
  ECX = (pop32());
  /* 11ca2c56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ca2c5d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ca2c60 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2c61 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11ca2c64 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2c65 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2c66 call 0x11ca4de2 */
  push32(0x11ca2c6bu); f_11ca4de2();
  /* 11ca2c6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2c6e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca2c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2c73 je 0x11ca2c84 */
  if (C.zf) goto L_11ca2c84;
  /* 11ca2c75 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2c76 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11ca2c79 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11ca2c7c call 0x11ca4e39 */
  push32(0x11ca2c81u); f_11ca4e39();
  /* 11ca2c81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca2c84:;
  /* 11ca2c84 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca2c88 call 0x11ca2c98 */
  push32(0x11ca2c8du); f_11ca2c98();
  /* 11ca2c8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca2c91:;
  /* 11ca2c91 jne 0x11ca2cb0 */
  if (!C.zf) { jmp_ind(0x11ca2cb0u); return; }
  /* 11ca2c93 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca2c96 jmp 0x11ca2ca2 */
  goto L_11ca2ca2;
  /* 11ca2c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c9a call 0x11ca2bc1 */
  push32(0x11ca2c9fu); f_11ca2bc1();
  /* 11ca2c9f pop ecx */
  ECX = (pop32());
  /* 11ca2ca0 ret  */
  ESPCHK(0x11ca2bd6u, _esp0);
  ESP += 4; return;
L_11ca2ca1:;
  /* 11ca2ca1 push esi */
  push32((uint32_t)(ESI));
L_11ca2ca2:;
  /* 11ca2ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca2ca4 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca2cac pushal  */
  x86_unimpl("pushal @ 0x11ca2cac");
}

/* FUN_10002c40 @ 0x11ca2c40 (9 bytes, 4 insns) */
void f_11ca2c40(void) {
  FTRACE(0x11ca2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2c40 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c42 call 0x11ca2bc1 */
  push32(0x11ca2c47u); f_11ca2bc1();
  /* 11ca2c47 pop ecx */
  ECX = (pop32());
  /* 11ca2c48 ret  */
  ESPCHK(0x11ca2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c98 @ 0x11ca2c98 (9 bytes, 4 insns) */
void f_11ca2c98(void) {
  FTRACE(0x11ca2c98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca2c9a call 0x11ca2bc1 */
  push32(0x11ca2c9fu); f_11ca2bc1();
  /* 11ca2c9f pop ecx */
  ECX = (pop32());
  /* 11ca2ca0 ret  */
  ESPCHK(0x11ca2c98u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cbf @ 0x11ca2cbf (46 bytes, 13 insns) */
void f_11ca2cbf(void) {
  FTRACE(0x11ca2cbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2cbf cmp dword ptr [0x11caaf90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caaf90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2cc6 jne 0x11ca2cec */
  if (!C.zf) goto L_11ca2cec;
  /* 11ca2cc8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ca2cca call 0x11ca2b60 */
  push32(0x11ca2ccfu); f_11ca2b60();
  /* 11ca2ccf cmp dword ptr [0x11caaf90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caaf90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2cd6 pop ecx */
  ECX = (pop32());
  /* 11ca2cd7 jne 0x11ca2ce4 */
  if (!C.zf) goto L_11ca2ce4;
  /* 11ca2cd9 call 0x11ca2ced */
  push32(0x11ca2cdeu); f_11ca2ced();
  /* 11ca2cde inc dword ptr [0x11caaf90] */
  { uint32_t _r=(r32((uint32_t)(0x11caaf90)))+1; w32((uint32_t)(0x11caaf90), (_r)); fl_inc(_r,32); }
L_11ca2ce4:;
  /* 11ca2ce4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ca2ce6 call 0x11ca2bc1 */
  push32(0x11ca2cebu); f_11ca2bc1();
  /* 11ca2ceb pop ecx */
  ECX = (pop32());
L_11ca2cec:;
  /* 11ca2cec ret  */
  ESPCHK(0x11ca2cbfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ced @ 0x11ca2ced (647 bytes, 207 insns) */
void f_11ca2ced(void) {
  FTRACE(0x11ca2cedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2ced push ebp */
  push32((uint32_t)(EBP));
  /* 11ca2cee mov ebp, esp */
  EBP = (ESP);
  /* 11ca2cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2cf2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2cf3 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2cf5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ca2cf7 pop edi */
  EDI = (pop32());
  /* 11ca2cf8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca2cfa push edi */
  push32((uint32_t)(EDI));
  /* 11ca2cfb mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11ca2cfe call 0x11ca2b60 */
  push32(0x11ca2d03u); f_11ca2b60();
  /* 11ca2d03 or dword ptr [0x11ca84c8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11ca84c8)))|(0xffffffffu); w32((uint32_t)(0x11ca84c8), (_r)); fl_logic(_r,32); }
  /* 11ca2d0a or dword ptr [0x11ca84b8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11ca84b8)))|(0xffffffffu); w32((uint32_t)(0x11ca84b8), (_r)); fl_logic(_r,32); }
  /* 11ca2d11 mov dword ptr [0x11caaed8], ebx */
  w32((uint32_t)(0x11caaed8), (EBX));
  /* 11ca2d17 mov dword ptr [esp], 0x11ca7518 */
  w32((uint32_t)(ESP), (0x11ca7518u));
  /* 11ca2d1e call 0x11ca5744 */
  push32(0x11ca2d23u); f_11ca5744();
  /* 11ca2d23 mov esi, eax */
  ESI = (EAX);
  /* 11ca2d25 pop ecx */
  ECX = (pop32());
  /* 11ca2d26 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2d28 jne 0x11ca2e2b */
  if (!C.zf) goto L_11ca2e2b;
  /* 11ca2d2e push edi */
  push32((uint32_t)(EDI));
  /* 11ca2d2f call 0x11ca2bc1 */
  push32(0x11ca2d34u); f_11ca2bc1();
  /* 11ca2d34 mov dword ptr [esp], 0x11caaee0 */
  w32((uint32_t)(ESP), (0x11caaee0u));
  /* 11ca2d3b call dword ptr [0x11ca7078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7078))), 0x11ca2d41u);
  /* 11ca2d41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2d44 je 0x11ca2f6f */
  if (C.zf) goto L_11ca2f6f;
  /* 11ca2d4a mov eax, dword ptr [0x11caaee0] */
  EAX = (r32((uint32_t)(0x11caaee0)));
  /* 11ca2d4f mov ecx, dword ptr [0x11caaf34] */
  ECX = (r32((uint32_t)(0x11caaf34)));
  /* 11ca2d55 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca2d58 cmp word ptr [0x11caaf26], bx */
  { uint32_t _a=(r16((uint32_t)(0x11caaf26))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca2d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca2d61 pop edx */
  EDX = (pop32());
  /* 11ca2d62 mov dword ptr [0x11ca8420], eax */
  w32((uint32_t)(0x11ca8420), (EAX));
  /* 11ca2d67 mov dword ptr [0x11caaed8], edx */
  w32((uint32_t)(0x11caaed8), (EDX));
  /* 11ca2d6d je 0x11ca2d7b */
  if (C.zf) goto L_11ca2d7b;
  /* 11ca2d6f mov esi, ecx */
  ESI = (ECX);
  /* 11ca2d71 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca2d74 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2d76 mov dword ptr [0x11ca8420], eax */
  w32((uint32_t)(0x11ca8420), (EAX));
L_11ca2d7b:;
  /* 11ca2d7b cmp word ptr [0x11caaf7a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11caaf7a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca2d82 je 0x11ca2d9f */
  if (C.zf) goto L_11ca2d9f;
  /* 11ca2d84 mov eax, dword ptr [0x11caaf88] */
  EAX = (r32((uint32_t)(0x11caaf88)));
  /* 11ca2d89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2d8b je 0x11ca2d9f */
  if (C.zf) goto L_11ca2d9f;
  /* 11ca2d8d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca2d8f mov dword ptr [0x11ca8424], edx */
  w32((uint32_t)(0x11ca8424), (EDX));
  /* 11ca2d95 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca2d98 mov dword ptr [0x11ca8428], eax */
  w32((uint32_t)(0x11ca8428), (EAX));
  /* 11ca2d9d jmp 0x11ca2dab */
  goto L_11ca2dab;
L_11ca2d9f:;
  /* 11ca2d9f mov dword ptr [0x11ca8424], ebx */
  w32((uint32_t)(0x11ca8424), (EBX));
  /* 11ca2da5 mov dword ptr [0x11ca8428], ebx */
  w32((uint32_t)(0x11ca8428), (EBX));
L_11ca2dab:;
  /* 11ca2dab lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca2dae mov esi, dword ptr [0x11ca70d4] */
  ESI = (r32((uint32_t)(0x11ca70d4)));
  /* 11ca2db4 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2db5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2db6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca2db8 mov edi, 0x220 */
  EDI = (0x220u);
  /* 11ca2dbd push dword ptr [0x11ca84ac] */
  push32((uint32_t)(r32((uint32_t)(0x11ca84ac))));
  /* 11ca2dc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca2dc5 push 0x11caaee4 */
  push32((uint32_t)(0x11caaee4u));
  /* 11ca2dca push edi */
  push32((uint32_t)(EDI));
  /* 11ca2dcb push dword ptr [0x11caafc8] */
  push32((uint32_t)(r32((uint32_t)(0x11caafc8))));
  /* 11ca2dd1 call esi */
  call_ind((uint32_t)(ESI), 0x11ca2dd3u);
  /* 11ca2dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2dd5 je 0x11ca2de7 */
  if (C.zf) goto L_11ca2de7;
  /* 11ca2dd7 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2dda jne 0x11ca2de7 */
  if (!C.zf) goto L_11ca2de7;
  /* 11ca2ddc mov eax, dword ptr [0x11ca84ac] */
  EAX = (r32((uint32_t)(0x11ca84ac)));
  /* 11ca2de1 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11ca2de5 jmp 0x11ca2def */
  goto L_11ca2def;
L_11ca2de7:;
  /* 11ca2de7 mov eax, dword ptr [0x11ca84ac] */
  EAX = (r32((uint32_t)(0x11ca84ac)));
  /* 11ca2dec and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11ca2def:;
  /* 11ca2def lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca2df2 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2df3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2df4 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca2df6 push dword ptr [0x11ca84b0] */
  push32((uint32_t)(r32((uint32_t)(0x11ca84b0))));
  /* 11ca2dfc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca2dfe push 0x11caaf38 */
  push32((uint32_t)(0x11caaf38u));
  /* 11ca2e03 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2e04 push dword ptr [0x11caafc8] */
  push32((uint32_t)(r32((uint32_t)(0x11caafc8))));
  /* 11ca2e0a call esi */
  call_ind((uint32_t)(ESI), 0x11ca2e0cu);
  /* 11ca2e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2e0e je 0x11ca2f5e */
  if (C.zf) goto L_11ca2f5e;
  /* 11ca2e14 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2e17 jne 0x11ca2f5e */
  if (!C.zf) goto L_11ca2f5e;
  /* 11ca2e1d mov eax, dword ptr [0x11ca84b0] */
  EAX = (r32((uint32_t)(0x11ca84b0)));
  /* 11ca2e22 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11ca2e26 jmp 0x11ca2f6f */
  goto L_11ca2f6f;
L_11ca2e2b:;
  /* 11ca2e2b cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2e2e je 0x11ca2f68 */
  if (C.zf) goto L_11ca2f68;
  /* 11ca2e34 mov eax, dword ptr [0x11caaf8c] */
  EAX = (r32((uint32_t)(0x11caaf8c)));
  /* 11ca2e39 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2e3b je 0x11ca2e4e */
  if (C.zf) goto L_11ca2e4e;
  /* 11ca2e3d push eax */
  push32((uint32_t)(EAX));
  /* 11ca2e3e push esi */
  push32((uint32_t)(ESI));
  /* 11ca2e3f call 0x11ca56c0 */
  push32(0x11ca2e44u); f_11ca56c0();
  /* 11ca2e44 pop ecx */
  ECX = (pop32());
  /* 11ca2e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2e47 pop ecx */
  ECX = (pop32());
  /* 11ca2e48 je 0x11ca2f68 */
  if (C.zf) goto L_11ca2f68;
L_11ca2e4e:;
  /* 11ca2e4e push dword ptr [0x11caaf8c] */
  push32((uint32_t)(r32((uint32_t)(0x11caaf8c))));
  /* 11ca2e54 call 0x11ca2bd6 */
  push32(0x11ca2e59u); f_11ca2bd6();
  /* 11ca2e59 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2e5a call 0x11ca34b0 */
  push32(0x11ca2e5fu); f_11ca34b0();
  /* 11ca2e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca2e60 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2e61 call 0x11ca3281 */
  push32(0x11ca2e66u); f_11ca3281();
  /* 11ca2e66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2e69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2e6b mov dword ptr [0x11caaf8c], eax */
  w32((uint32_t)(0x11caaf8c), (EAX));
  /* 11ca2e70 je 0x11ca2f68 */
  if (C.zf) goto L_11ca2f68;
  /* 11ca2e76 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2e77 push eax */
  push32((uint32_t)(EAX));
  /* 11ca2e78 call 0x11ca33c0 */
  push32(0x11ca2e7du); f_11ca33c0();
  /* 11ca2e7d push edi */
  push32((uint32_t)(EDI));
  /* 11ca2e7e call 0x11ca2bc1 */
  push32(0x11ca2e83u); f_11ca2bc1();
  /* 11ca2e83 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca2e85 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2e86 push dword ptr [0x11ca84ac] */
  push32((uint32_t)(r32((uint32_t)(0x11ca84ac))));
  /* 11ca2e8c call 0x11ca52e0 */
  push32(0x11ca2e91u); f_11ca52e0();
  /* 11ca2e91 mov eax, dword ptr [0x11ca84ac] */
  EAX = (r32((uint32_t)(0x11ca84ac)));
  /* 11ca2e96 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2e99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2e9c and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11ca2ea0 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ea3 jne 0x11ca2ead */
  if (!C.zf) goto L_11ca2ead;
  /* 11ca2ea5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ca2eac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca2ead:;
  /* 11ca2ead push esi */
  push32((uint32_t)(ESI));
  /* 11ca2eae call 0x11ca5628 */
  push32(0x11ca2eb3u); f_11ca5628();
  /* 11ca2eb3 pop ecx */
  ECX = (pop32());
  /* 11ca2eb4 mov bl, 0x30 */
  BL = (0x30u);
  /* 11ca2eb6 mov ecx, eax */
  ECX = (EAX);
  /* 11ca2eb8 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca2ebe mov dword ptr [0x11ca8420], ecx */
  w32((uint32_t)(0x11ca8420), (ECX));
L_11ca2ec4:;
  /* 11ca2ec4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca2ec6 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ec8 je 0x11ca2ed2 */
  if (C.zf) goto L_11ca2ed2;
  /* 11ca2eca cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ecc jl 0x11ca2ed5 */
  if ((C.sf!=C.of)) goto L_11ca2ed5;
  /* 11ca2ece cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ed0 jg 0x11ca2ed5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca2ed5;
L_11ca2ed2:;
  /* 11ca2ed2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2ed3 jmp 0x11ca2ec4 */
  goto L_11ca2ec4;
L_11ca2ed5:;
  /* 11ca2ed5 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ed8 jne 0x11ca2f28 */
  if (!C.zf) goto L_11ca2f28;
  /* 11ca2eda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2edb push esi */
  push32((uint32_t)(ESI));
  /* 11ca2edc call 0x11ca5628 */
  push32(0x11ca2ee1u); f_11ca5628();
  /* 11ca2ee1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca2ee4 pop ecx */
  ECX = (pop32());
  /* 11ca2ee5 mov ecx, dword ptr [0x11ca8420] */
  ECX = (r32((uint32_t)(0x11ca8420)));
  /* 11ca2eeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2eed mov dword ptr [0x11ca8420], ecx */
  w32((uint32_t)(0x11ca8420), (ECX));
L_11ca2ef3:;
  /* 11ca2ef3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca2ef5 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2ef7 jl 0x11ca2f00 */
  if ((C.sf!=C.of)) goto L_11ca2f00;
  /* 11ca2ef9 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2efb jg 0x11ca2f00 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca2f00;
  /* 11ca2efd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2efe jmp 0x11ca2ef3 */
  goto L_11ca2ef3;
L_11ca2f00:;
  /* 11ca2f00 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2f03 jne 0x11ca2f28 */
  if (!C.zf) goto L_11ca2f28;
  /* 11ca2f05 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2f06 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2f07 call 0x11ca5628 */
  push32(0x11ca2f0cu); f_11ca5628();
  /* 11ca2f0c pop ecx */
  ECX = (pop32());
  /* 11ca2f0d mov ecx, dword ptr [0x11ca8420] */
  ECX = (r32((uint32_t)(0x11ca8420)));
  /* 11ca2f13 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2f15 mov dword ptr [0x11ca8420], ecx */
  w32((uint32_t)(0x11ca8420), (ECX));
L_11ca2f1b:;
  /* 11ca2f1b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca2f1d cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2f1f jl 0x11ca2f28 */
  if ((C.sf!=C.of)) goto L_11ca2f28;
  /* 11ca2f21 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca2f23 jg 0x11ca2f28 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca2f28;
  /* 11ca2f25 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca2f26 jmp 0x11ca2f1b */
  goto L_11ca2f1b;
L_11ca2f28:;
  /* 11ca2f28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2f2c je 0x11ca2f36 */
  if (C.zf) goto L_11ca2f36;
  /* 11ca2f2e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca2f30 mov dword ptr [0x11ca8420], ecx */
  w32((uint32_t)(0x11ca8420), (ECX));
L_11ca2f36:;
  /* 11ca2f36 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11ca2f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca2f3b mov dword ptr [0x11ca8424], eax */
  w32((uint32_t)(0x11ca8424), (EAX));
  /* 11ca2f40 je 0x11ca2f5e */
  if (C.zf) goto L_11ca2f5e;
  /* 11ca2f42 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca2f44 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2f45 push dword ptr [0x11ca84b0] */
  push32((uint32_t)(r32((uint32_t)(0x11ca84b0))));
  /* 11ca2f4b call 0x11ca52e0 */
  push32(0x11ca2f50u); f_11ca52e0();
  /* 11ca2f50 mov eax, dword ptr [0x11ca84b0] */
  EAX = (r32((uint32_t)(0x11ca84b0)));
  /* 11ca2f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2f58 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11ca2f5c jmp 0x11ca2f6f */
  goto L_11ca2f6f;
L_11ca2f5e:;
  /* 11ca2f5e mov eax, dword ptr [0x11ca84b0] */
  EAX = (r32((uint32_t)(0x11ca84b0)));
  /* 11ca2f63 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11ca2f66 jmp 0x11ca2f6f */
  goto L_11ca2f6f;
L_11ca2f68:;
  /* 11ca2f68 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2f69 call 0x11ca2bc1 */
  push32(0x11ca2f6eu); f_11ca2bc1();
  /* 11ca2f6e pop ecx */
  ECX = (pop32());
L_11ca2f6f:;
  /* 11ca2f6f pop edi */
  EDI = (pop32());
  /* 11ca2f70 pop esi */
  ESI = (pop32());
  /* 11ca2f71 pop ebx */
  EBX = (pop32());
  /* 11ca2f72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca2f73 ret  */
  ESPCHK(0x11ca2cedu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f74 @ 0x11ca2f74 (33 bytes, 12 insns) */
void f_11ca2f74(void) {
  FTRACE(0x11ca2f74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2f74 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2f75 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ca2f77 call 0x11ca2b60 */
  push32(0x11ca2f7cu); f_11ca2b60();
  /* 11ca2f7c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11ca2f80 call 0x11ca2f95 */
  push32(0x11ca2f85u); f_11ca2f95();
  /* 11ca2f85 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ca2f87 mov esi, eax */
  ESI = (EAX);
  /* 11ca2f89 call 0x11ca2bc1 */
  push32(0x11ca2f8eu); f_11ca2bc1();
  /* 11ca2f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca2f91 mov eax, esi */
  EAX = (ESI);
  /* 11ca2f93 pop esi */
  ESI = (pop32());
  /* 11ca2f94 ret  */
  ESPCHK(0x11ca2f74u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f95 @ 0x11ca2f95 (428 bytes, 149 insns) */
void f_11ca2f95(void) {
  FTRACE(0x11ca2f95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca2f95 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca2f96 push esi */
  push32((uint32_t)(ESI));
  /* 11ca2f97 push edi */
  push32((uint32_t)(EDI));
  /* 11ca2f98 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca2f9a cmp dword ptr [0x11ca8424], edi */
  { uint32_t _a=(r32((uint32_t)(0x11ca8424))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2fa0 jne 0x11ca2fa9 */
  if (!C.zf) goto L_11ca2fa9;
L_11ca2fa2:;
  /* 11ca2fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca2fa4 jmp 0x11ca30f5 */
  goto L_11ca30f5;
L_11ca2fa9:;
  /* 11ca2fa9 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca2fad push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca2faf pop ebx */
  EBX = (pop32());
  /* 11ca2fb0 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11ca2fb3 cmp eax, dword ptr [0x11ca84b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ca84b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2fb9 jne 0x11ca2fc7 */
  if (!C.zf) goto L_11ca2fc7;
  /* 11ca2fbb cmp eax, dword ptr [0x11ca84c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ca84c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2fc1 je 0x11ca30c9 */
  if (C.zf) goto L_11ca30c9;
L_11ca2fc7:;
  /* 11ca2fc7 cmp dword ptr [0x11caaed8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caaed8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca2fcd je 0x11ca309f */
  if (C.zf) goto L_11ca309f;
  /* 11ca2fd3 movzx ecx, word ptr [0x11caaf86] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf86))));
  /* 11ca2fda push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2fdb cmp word ptr [0x11caaf78], di */
  { uint32_t _a=(r16((uint32_t)(0x11caaf78))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca2fe2 movzx ecx, word ptr [0x11caaf84] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf84))));
  /* 11ca2fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2fea movzx ecx, word ptr [0x11caaf82] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf82))));
  /* 11ca2ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2ff2 movzx ecx, word ptr [0x11caaf80] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf80))));
  /* 11ca2ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca2ffa jne 0x11ca3019 */
  if (!C.zf) goto L_11ca3019;
  /* 11ca2ffc movzx ecx, word ptr [0x11caaf7c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf7c))));
  /* 11ca3003 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3004 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca3005 movzx ecx, word ptr [0x11caaf7e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf7e))));
  /* 11ca300c push ecx */
  push32((uint32_t)(ECX));
  /* 11ca300d movzx ecx, word ptr [0x11caaf7a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf7a))));
  /* 11ca3014 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca3015 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3016 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3017 jmp 0x11ca302d */
  goto L_11ca302d;
L_11ca3019:;
  /* 11ca3019 movzx ecx, word ptr [0x11caaf7e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf7e))));
  /* 11ca3020 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca3021 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3022 movzx ecx, word ptr [0x11caaf7a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11caaf7a))));
  /* 11ca3029 push edi */
  push32((uint32_t)(EDI));
  /* 11ca302a push ecx */
  push32((uint32_t)(ECX));
  /* 11ca302b push eax */
  push32((uint32_t)(EAX));
  /* 11ca302c push edi */
  push32((uint32_t)(EDI));
L_11ca302d:;
  /* 11ca302d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca302e call 0x11ca3141 */
  push32(0x11ca3033u); f_11ca3141();
  /* 11ca3033 movzx eax, word ptr [0x11caaf32] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf32))));
  /* 11ca303a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca303d cmp word ptr [0x11caaf24], di */
  { uint32_t _a=(r16((uint32_t)(0x11caaf24))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ca3044 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3045 movzx eax, word ptr [0x11caaf30] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf30))));
  /* 11ca304c push eax */
  push32((uint32_t)(EAX));
  /* 11ca304d movzx eax, word ptr [0x11caaf2e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf2e))));
  /* 11ca3054 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3055 movzx eax, word ptr [0x11caaf2c] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf2c))));
  /* 11ca305c push eax */
  push32((uint32_t)(EAX));
  /* 11ca305d jne 0x11ca3087 */
  if (!C.zf) goto L_11ca3087;
  /* 11ca305f movzx eax, word ptr [0x11caaf28] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf28))));
  /* 11ca3066 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3067 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3068 movzx eax, word ptr [0x11caaf2a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf2a))));
  /* 11ca306f push eax */
  push32((uint32_t)(EAX));
  /* 11ca3070 movzx eax, word ptr [0x11caaf26] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf26))));
  /* 11ca3077 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3078 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11ca307b push ebx */
  push32((uint32_t)(EBX));
L_11ca307c:;
  /* 11ca307c push edi */
  push32((uint32_t)(EDI));
  /* 11ca307d call 0x11ca3141 */
  push32(0x11ca3082u); f_11ca3141();
  /* 11ca3082 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3085 jmp 0x11ca30c9 */
  goto L_11ca30c9;
L_11ca3087:;
  /* 11ca3087 movzx eax, word ptr [0x11caaf2a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf2a))));
  /* 11ca308e push eax */
  push32((uint32_t)(EAX));
  /* 11ca308f push edi */
  push32((uint32_t)(EDI));
  /* 11ca3090 movzx eax, word ptr [0x11caaf26] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11caaf26))));
  /* 11ca3097 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3098 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3099 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11ca309c push edi */
  push32((uint32_t)(EDI));
  /* 11ca309d jmp 0x11ca307c */
  goto L_11ca307c;
L_11ca309f:;
  /* 11ca309f push edi */
  push32((uint32_t)(EDI));
  /* 11ca30a0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30a1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca30a4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30a5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca30a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca30a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ca30aa push ebx */
  push32((uint32_t)(EBX));
  /* 11ca30ab push ebx */
  push32((uint32_t)(EBX));
  /* 11ca30ac call 0x11ca3141 */
  push32(0x11ca30b1u); f_11ca3141();
  /* 11ca30b1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30b2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30b3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca30b6 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30b7 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ca30ba push 0xa */
  push32((uint32_t)(0xau));
  /* 11ca30bc push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11ca30bf push ebx */
  push32((uint32_t)(EBX));
  /* 11ca30c0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca30c1 call 0x11ca3141 */
  push32(0x11ca30c6u); f_11ca3141();
  /* 11ca30c6 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca30c9:;
  /* 11ca30c9 mov edx, dword ptr [0x11ca84bc] */
  EDX = (r32((uint32_t)(0x11ca84bc)));
  /* 11ca30cf mov eax, dword ptr [0x11ca84cc] */
  EAX = (r32((uint32_t)(0x11ca84cc)));
  /* 11ca30d4 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11ca30d7 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30d9 jge 0x11ca30f9 */
  if ((C.sf==C.of)) goto L_11ca30f9;
  /* 11ca30db cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30dd jl 0x11ca2fa2 */
  if ((C.sf!=C.of)) goto L_11ca2fa2;
  /* 11ca30e3 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30e5 jg 0x11ca2fa2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca2fa2;
  /* 11ca30eb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30ed jle 0x11ca310d */
  if ((C.zf||C.sf!=C.of)) goto L_11ca310d;
  /* 11ca30ef cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30f1 jge 0x11ca310d */
  if ((C.sf==C.of)) goto L_11ca310d;
L_11ca30f3:;
  /* 11ca30f3 mov eax, ebx */
  EAX = (EBX);
L_11ca30f5:;
  /* 11ca30f5 pop edi */
  EDI = (pop32());
  /* 11ca30f6 pop esi */
  ESI = (pop32());
  /* 11ca30f7 pop ebx */
  EBX = (pop32());
  /* 11ca30f8 ret  */
  ESPCHK(0x11ca2f95u, _esp0);
  ESP += 4; return;
L_11ca30f9:;
  /* 11ca30f9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30fb jl 0x11ca30f3 */
  if ((C.sf!=C.of)) goto L_11ca30f3;
  /* 11ca30fd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca30ff jg 0x11ca30f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca30f3;
  /* 11ca3101 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3103 jle 0x11ca310d */
  if ((C.zf||C.sf!=C.of)) goto L_11ca310d;
  /* 11ca3105 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3107 jl 0x11ca2fa2 */
  if ((C.sf!=C.of)) goto L_11ca2fa2;
L_11ca310d:;
  /* 11ca310d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11ca3110 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3113 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3116 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3119 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca311b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3121 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3123 jne 0x11ca3134 */
  if (!C.zf) goto L_11ca3134;
  /* 11ca3125 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3127 cmp eax, dword ptr [0x11ca84c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ca84c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca312d setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11ca3130:;
  /* 11ca3130 mov eax, ecx */
  EAX = (ECX);
  /* 11ca3132 jmp 0x11ca30f5 */
  goto L_11ca30f5;
L_11ca3134:;
  /* 11ca3134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3136 cmp eax, dword ptr [0x11ca84d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ca84d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca313c setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11ca313f jmp 0x11ca3130 */
  goto L_11ca3130;
}

/* FUN_10003141 @ 0x11ca3141 (320 bytes, 101 insns) */
void f_11ca3141(void) {
  FTRACE(0x11ca3141u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3141 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca3142 mov ebp, esp */
  EBP = (ESP);
  /* 11ca3144 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3148 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3149 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca314c push esi */
  push32((uint32_t)(ESI));
  /* 11ca314d jne 0x11ca31dc */
  if (!C.zf) goto L_11ca31dc;
  /* 11ca3153 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca3156 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11ca3159 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11ca315d mov esi, eax */
  ESI = (EAX);
  /* 11ca315f jne 0x11ca316c */
  if (!C.zf) goto L_11ca316c;
  /* 11ca3161 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11ca3164 mov eax, dword ptr [esi + 0x11ca84d0] */
  EAX = (r32((uint32_t)(ESI + 0x11ca84d0)));
  /* 11ca316a jmp 0x11ca3175 */
  goto L_11ca3175;
L_11ca316c:;
  /* 11ca316c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11ca316f mov eax, dword ptr [esi + 0x11ca8504] */
  EAX = (r32((uint32_t)(ESI + 0x11ca8504)));
L_11ca3175:;
  /* 11ca3175 mov edx, ebx */
  EDX = (EBX);
  /* 11ca3177 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11ca317a imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3180 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11ca3183 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3184 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca3187 mov edi, ecx */
  EDI = (ECX);
  /* 11ca3189 push 7 */
  push32((uint32_t)(0x7u));
  /* 11ca318b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca318d lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11ca3194 pop edi */
  EDI = (pop32());
  /* 11ca3195 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ca3196 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ca3198 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ca319b pop edi */
  EDI = (pop32());
  /* 11ca319c cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca319f jg 0x11ca31af */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca31af;
  /* 11ca31a1 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca31a4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca31a6 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca31a9 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11ca31ad jmp 0x11ca31b9 */
  goto L_11ca31b9;
L_11ca31af:;
  /* 11ca31af imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca31b2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca31b4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca31b7 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11ca31b9:;
  /* 11ca31b9 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca31bd jne 0x11ca31f7 */
  if (!C.zf) goto L_11ca31f7;
  /* 11ca31bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca31c3 jne 0x11ca31cd */
  if (!C.zf) goto L_11ca31cd;
  /* 11ca31c5 mov esi, dword ptr [esi + 0x11ca84d4] */
  ESI = (r32((uint32_t)(ESI + 0x11ca84d4)));
  /* 11ca31cb jmp 0x11ca31d3 */
  goto L_11ca31d3;
L_11ca31cd:;
  /* 11ca31cd mov esi, dword ptr [esi + 0x11ca8508] */
  ESI = (r32((uint32_t)(ESI + 0x11ca8508)));
L_11ca31d3:;
  /* 11ca31d3 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca31d5 jle 0x11ca31f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca31f7;
  /* 11ca31d7 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca31da jmp 0x11ca31f7 */
  goto L_11ca31f7;
L_11ca31dc:;
  /* 11ca31dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca31df test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11ca31e2 jne 0x11ca31ed */
  if (!C.zf) goto L_11ca31ed;
  /* 11ca31e4 mov ecx, dword ptr [eax*4 + 0x11ca84d0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ca84d0)));
  /* 11ca31eb jmp 0x11ca31f4 */
  goto L_11ca31f4;
L_11ca31ed:;
  /* 11ca31ed mov ecx, dword ptr [eax*4 + 0x11ca8504] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ca8504)));
L_11ca31f4:;
  /* 11ca31f4 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11ca31f7:;
  /* 11ca31f7 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca31fb jne 0x11ca3228 */
  if (!C.zf) goto L_11ca3228;
  /* 11ca31fd mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ca3200 mov dword ptr [0x11ca84bc], ecx */
  w32((uint32_t)(0x11ca84bc), (ECX));
  /* 11ca3206 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3209 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca320c mov dword ptr [0x11ca84b8], ebx */
  w32((uint32_t)(0x11ca84b8), (EBX));
  /* 11ca3212 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3215 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3218 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca321e add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3221 mov dword ptr [0x11ca84c0], eax */
  w32((uint32_t)(0x11ca84c0), (EAX));
  /* 11ca3226 jmp 0x11ca327d */
  goto L_11ca327d;
L_11ca3228:;
  /* 11ca3228 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ca322b mov dword ptr [0x11ca84cc], ecx */
  w32((uint32_t)(0x11ca84cc), (ECX));
  /* 11ca3231 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3234 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3237 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca323a add eax, dword ptr [0x11ca8428] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ca8428))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3240 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3243 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3249 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca324c mov dword ptr [0x11ca84d0], eax */
  w32((uint32_t)(0x11ca84d0), (EAX));
  /* 11ca3251 jns 0x11ca3260 */
  if (!C.sf) goto L_11ca3260;
  /* 11ca3253 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3258 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca3259 mov dword ptr [0x11ca84d0], eax */
  w32((uint32_t)(0x11ca84d0), (EAX));
  /* 11ca325e jmp 0x11ca3271 */
  goto L_11ca3271;
L_11ca3260:;
  /* 11ca3260 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11ca3265 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3267 jl 0x11ca3277 */
  if ((C.sf!=C.of)) goto L_11ca3277;
  /* 11ca3269 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca326b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca326c mov dword ptr [0x11ca84d0], eax */
  w32((uint32_t)(0x11ca84d0), (EAX));
L_11ca3271:;
  /* 11ca3271 mov dword ptr [0x11ca84cc], ecx */
  w32((uint32_t)(0x11ca84cc), (ECX));
L_11ca3277:;
  /* 11ca3277 mov dword ptr [0x11ca84c8], ebx */
  w32((uint32_t)(0x11ca84c8), (EBX));
L_11ca327d:;
  /* 11ca327d pop esi */
  ESI = (pop32());
  /* 11ca327e pop ebx */
  EBX = (pop32());
  /* 11ca327f pop ebp */
  EBP = (pop32());
  /* 11ca3280 ret  */
  ESPCHK(0x11ca3141u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11ca3281 (18 bytes, 6 insns) */
void f_11ca3281(void) {
  FTRACE(0x11ca3281u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3281 push dword ptr [0x11caafac] */
  push32((uint32_t)(r32((uint32_t)(0x11caafac))));
  /* 11ca3287 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ca328b call 0x11ca3293 */
  push32(0x11ca3290u); f_11ca3293();
  /* 11ca3290 pop ecx */
  ECX = (pop32());
  /* 11ca3291 pop ecx */
  ECX = (pop32());
  /* 11ca3292 ret  */
  ESPCHK(0x11ca3281u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11ca3293 (44 bytes, 16 insns) */
void f_11ca3293(void) {
  FTRACE(0x11ca3293u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3293 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3298 ja 0x11ca32bc */
  if ((!C.cf&&!C.zf)) goto L_11ca32bc;
L_11ca329a:;
  /* 11ca329a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ca329e call 0x11ca32bf */
  push32(0x11ca32a3u); f_11ca32bf();
  /* 11ca32a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca32a5 pop ecx */
  ECX = (pop32());
  /* 11ca32a6 jne 0x11ca32be */
  if (!C.zf) goto L_11ca32be;
  /* 11ca32a8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca32ac je 0x11ca32be */
  if (C.zf) goto L_11ca32be;
  /* 11ca32ae push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ca32b2 call 0x11ca53de */
  push32(0x11ca32b7u); f_11ca53de();
  /* 11ca32b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca32b9 pop ecx */
  ECX = (pop32());
  /* 11ca32ba jne 0x11ca329a */
  if (!C.zf) goto L_11ca329a;
L_11ca32bc:;
  /* 11ca32bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca32be:;
  /* 11ca32be ret  */
  ESPCHK(0x11ca3293u, _esp0);
  ESP += 4; return;
}

/* FUN_100032bf @ 0x11ca32bf (231 bytes, 81 insns) */
void f_11ca32bf(void) {
  FTRACE(0x11ca32bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca32bf push ebp */
  push32((uint32_t)(EBP));
  /* 11ca32c0 mov ebp, esp */
  EBP = (ESP);
  /* 11ca32c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca32c4 push 0x11ca7520 */
  push32((uint32_t)(0x11ca7520u));
  /* 11ca32c9 push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca32ce mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca32d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ca32d5 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca32dc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca32df push ebx */
  push32((uint32_t)(EBX));
  /* 11ca32e0 push esi */
  push32((uint32_t)(ESI));
  /* 11ca32e1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca32e2 mov eax, dword ptr [0x11cab2ac] */
  EAX = (r32((uint32_t)(0x11cab2ac)));
  /* 11ca32e7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca32ea jne 0x11ca332f */
  if (!C.zf) goto L_11ca332f;
  /* 11ca32ec mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca32ef cmp esi, dword ptr [0x11cab084] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11cab084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca32f5 ja 0x11ca338e */
  if ((!C.cf&&!C.zf)) goto L_11ca338e;
  /* 11ca32fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca32fd call 0x11ca2b60 */
  push32(0x11ca3302u); f_11ca2b60();
  /* 11ca3302 pop ecx */
  ECX = (pop32());
  /* 11ca3303 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca3307 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3308 call 0x11ca43db */
  push32(0x11ca330du); f_11ca43db();
  /* 11ca330d pop ecx */
  ECX = (pop32());
  /* 11ca330e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ca3311 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca3315 call 0x11ca3326 */
  push32(0x11ca331au); f_11ca3326();
  /* 11ca331a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ca331d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca331f je 0x11ca338e */
  if (C.zf) goto L_11ca338e;
  /* 11ca3321 jmp 0x11ca33ac */
  jmp_ind(0x11ca33acu); return;
  /* 11ca3326 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca3328 call 0x11ca2bc1 */
  push32(0x11ca332du); f_11ca2bc1();
  /* 11ca332d pop ecx */
  ECX = (pop32());
  /* 11ca332e ret  */
  ESPCHK(0x11ca32bfu, _esp0);
  ESP += 4; return;
L_11ca332f:;
  /* 11ca332f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3332 jne 0x11ca338e */
  if (!C.zf) goto L_11ca338e;
  /* 11ca3334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3337 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3339 je 0x11ca3343 */
  if (C.zf) goto L_11ca3343;
  /* 11ca333b lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11ca333e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca3341 jmp 0x11ca3346 */
  goto L_11ca3346;
L_11ca3343:;
  /* 11ca3343 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ca3345 pop esi */
  ESI = (pop32());
L_11ca3346:;
  /* 11ca3346 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11ca3349 cmp esi, dword ptr [0x11caa664] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11caa664))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca334f ja 0x11ca337f */
  if ((!C.cf&&!C.zf)) goto L_11ca337f;
  /* 11ca3351 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca3353 call 0x11ca2b60 */
  push32(0x11ca3358u); f_11ca2b60();
  /* 11ca3358 pop ecx */
  ECX = (pop32());
  /* 11ca3359 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ca3360 mov eax, esi */
  EAX = (ESI);
  /* 11ca3362 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca3365 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3366 call 0x11ca4e7e */
  push32(0x11ca336bu); f_11ca4e7e();
  /* 11ca336b pop ecx */
  ECX = (pop32());
  /* 11ca336c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ca336f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca3373 call 0x11ca3385 */
  push32(0x11ca3378u); f_11ca3385();
  /* 11ca3378 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ca337b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca337d jne 0x11ca33ac */
  if (!C.zf) { jmp_ind(0x11ca33acu); return; }
L_11ca337f:;
  /* 11ca337f push esi */
  push32((uint32_t)(ESI));
  /* 11ca3380 jmp 0x11ca339e */
  goto L_11ca339e;
  /* 11ca3382 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3385 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca3387 call 0x11ca2bc1 */
  push32(0x11ca338cu); f_11ca2bc1();
  /* 11ca338c pop ecx */
  ECX = (pop32());
  /* 11ca338d ret  */
  ESPCHK(0x11ca32bfu, _esp0);
  ESP += 4; return;
L_11ca338e:;
  /* 11ca338e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3393 jne 0x11ca3398 */
  if (!C.zf) goto L_11ca3398;
  /* 11ca3395 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca3397 pop eax */
  EAX = (pop32());
L_11ca3398:;
  /* 11ca3398 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca339b and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11ca339d push eax */
  push32((uint32_t)(EAX));
L_11ca339e:;
  /* 11ca339e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca33a0 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
}

/* FUN_10003326 @ 0x11ca3326 (9 bytes, 4 insns) */
void f_11ca3326(void) {
  FTRACE(0x11ca3326u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3326 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca3328 call 0x11ca2bc1 */
  push32(0x11ca332du); f_11ca2bc1();
  /* 11ca332d pop ecx */
  ECX = (pop32());
  /* 11ca332e ret  */
  ESPCHK(0x11ca3326u, _esp0);
  ESP += 4; return;
}

/* FUN_10003385 @ 0x11ca3385 (9 bytes, 4 insns) */
void f_11ca3385(void) {
  FTRACE(0x11ca3385u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3385 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca3387 call 0x11ca2bc1 */
  push32(0x11ca338cu); f_11ca2bc1();
  /* 11ca338c pop ecx */
  ECX = (pop32());
  /* 11ca338d ret  */
  ESPCHK(0x11ca3385u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c0 @ 0x11ca33c0 (7 bytes, 3 insns) */
void f_11ca33c0(void) {
  FTRACE(0x11ca33c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca33c0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca33c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca33c5 jmp 0x11ca3431 */
  jmp_ind(0x11ca3431u); return;
}

/* FUN_100033d0 @ 0x11ca33d0 (224 bytes, 84 insns) */
void f_11ca33d0(void) {
  FTRACE(0x11ca33d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca33d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca33d4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca33d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca33db je 0x11ca33ec */
  if (C.zf) goto L_11ca33ec;
L_11ca33dd:;
  /* 11ca33dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ca33df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca33e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca33e2 je 0x11ca341f */
  if (C.zf) goto L_11ca341f;
  /* 11ca33e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca33ea jne 0x11ca33dd */
  if (!C.zf) goto L_11ca33dd;
L_11ca33ec:;
  /* 11ca33ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ca33ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ca33f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca33f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca33f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca33fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca33fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ca3402 je 0x11ca33ec */
  if (C.zf) goto L_11ca33ec;
  /* 11ca3404 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ca3407 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3409 je 0x11ca342e */
  if (C.zf) goto L_11ca342e;
  /* 11ca340b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ca340d je 0x11ca3429 */
  if (C.zf) goto L_11ca3429;
  /* 11ca340f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ca3414 je 0x11ca3424 */
  if (C.zf) goto L_11ca3424;
  /* 11ca3416 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ca341b je 0x11ca341f */
  if (C.zf) goto L_11ca341f;
  /* 11ca341d jmp 0x11ca33ec */
  goto L_11ca33ec;
L_11ca341f:;
  /* 11ca341f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11ca3422 jmp 0x11ca3431 */
  goto L_11ca3431;
L_11ca3424:;
  /* 11ca3424 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11ca3427 jmp 0x11ca3431 */
  goto L_11ca3431;
L_11ca3429:;
  /* 11ca3429 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11ca342c jmp 0x11ca3431 */
  goto L_11ca3431;
L_11ca342e:;
  /* 11ca342e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11ca3431:;
  /* 11ca3431 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ca3435 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca343b je 0x11ca3456 */
  if (C.zf) goto L_11ca3456;
L_11ca343d:;
  /* 11ca343d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ca343f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca3440 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca3442 je 0x11ca34a8 */
  if (C.zf) goto L_11ca34a8;
  /* 11ca3444 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ca3446 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca3447 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca344d jne 0x11ca343d */
  if (!C.zf) goto L_11ca343d;
  /* 11ca344f jmp 0x11ca3456 */
  goto L_11ca3456;
L_11ca3451:;
  /* 11ca3451 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca3453 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ca3456:;
  /* 11ca3456 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ca345b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ca345d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca345f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3462 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3464 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ca3466 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3469 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ca346e je 0x11ca3451 */
  if (C.zf) goto L_11ca3451;
  /* 11ca3470 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca3472 je 0x11ca34a8 */
  if (C.zf) goto L_11ca34a8;
  /* 11ca3474 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ca3476 je 0x11ca349f */
  if (C.zf) goto L_11ca349f;
  /* 11ca3478 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ca347e je 0x11ca3492 */
  if (C.zf) goto L_11ca3492;
  /* 11ca3480 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ca3486 je 0x11ca348a */
  if (C.zf) goto L_11ca348a;
  /* 11ca3488 jmp 0x11ca3451 */
  goto L_11ca3451;
L_11ca348a:;
  /* 11ca348a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca348c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca3490 pop edi */
  EDI = (pop32());
  /* 11ca3491 ret  */
  ESPCHK(0x11ca33d0u, _esp0);
  ESP += 4; return;
L_11ca3492:;
  /* 11ca3492 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ca3495 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca3499 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11ca349d pop edi */
  EDI = (pop32());
  /* 11ca349e ret  */
  ESPCHK(0x11ca33d0u, _esp0);
  ESP += 4; return;
L_11ca349f:;
  /* 11ca349f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ca34a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca34a6 pop edi */
  EDI = (pop32());
  /* 11ca34a7 ret  */
  ESPCHK(0x11ca33d0u, _esp0);
  ESP += 4; return;
L_11ca34a8:;
  /* 11ca34a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ca34aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca34ae pop edi */
  EDI = (pop32());
  /* 11ca34af ret  */
  ESPCHK(0x11ca33d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11ca34b0 (123 bytes, 44 insns) */
void f_11ca34b0(void) {
  FTRACE(0x11ca34b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca34b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca34b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca34ba je 0x11ca34d0 */
  if (C.zf) goto L_11ca34d0;
L_11ca34bc:;
  /* 11ca34bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ca34be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca34bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca34c1 je 0x11ca3503 */
  if (C.zf) goto L_11ca3503;
  /* 11ca34c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ca34c9 jne 0x11ca34bc */
  if (!C.zf) goto L_11ca34bc;
  /* 11ca34cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ca34d0:;
  /* 11ca34d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ca34d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ca34d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca34d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca34dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca34de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca34e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ca34e6 je 0x11ca34d0 */
  if (C.zf) goto L_11ca34d0;
  /* 11ca34e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ca34eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca34ed je 0x11ca3521 */
  if (C.zf) goto L_11ca3521;
  /* 11ca34ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ca34f1 je 0x11ca3517 */
  if (C.zf) goto L_11ca3517;
  /* 11ca34f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ca34f8 je 0x11ca350d */
  if (C.zf) goto L_11ca350d;
  /* 11ca34fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ca34ff je 0x11ca3503 */
  if (C.zf) goto L_11ca3503;
  /* 11ca3501 jmp 0x11ca34d0 */
  goto L_11ca34d0;
L_11ca3503:;
  /* 11ca3503 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11ca3506 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca350a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca350c ret  */
  ESPCHK(0x11ca34b0u, _esp0);
  ESP += 4; return;
L_11ca350d:;
  /* 11ca350d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11ca3510 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca3514 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3516 ret  */
  ESPCHK(0x11ca34b0u, _esp0);
  ESP += 4; return;
L_11ca3517:;
  /* 11ca3517 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11ca351a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca351e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3520 ret  */
  ESPCHK(0x11ca34b0u, _esp0);
  ESP += 4; return;
L_11ca3521:;
  /* 11ca3521 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11ca3524 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca3528 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca352a ret  */
  ESPCHK(0x11ca34b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000352b @ 0x11ca352b (429 bytes, 143 insns) */
void f_11ca352b(void) {
  FTRACE(0x11ca352bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca352b push ebp */
  push32((uint32_t)(EBP));
  /* 11ca352c mov ebp, esp */
  EBP = (ESP);
  /* 11ca352e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3531 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3532 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3533 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3534 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca3536 call 0x11ca2b60 */
  push32(0x11ca353bu); f_11ca2b60();
  /* 11ca353b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca353e call 0x11ca36d8 */
  push32(0x11ca3543u); f_11ca36d8();
  /* 11ca3543 mov ebx, eax */
  EBX = (EAX);
  /* 11ca3545 pop ecx */
  ECX = (pop32());
  /* 11ca3546 cmp ebx, dword ptr [0x11cab088] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cab088))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca354c pop ecx */
  ECX = (pop32());
  /* 11ca354d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca3550 jne 0x11ca3559 */
  if (!C.zf) goto L_11ca3559;
L_11ca3552:;
  /* 11ca3552 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca3554 jmp 0x11ca36c9 */
  goto L_11ca36c9;
L_11ca3559:;
  /* 11ca3559 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca355b je 0x11ca36b7 */
  if (C.zf) goto L_11ca36b7;
  /* 11ca3561 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3563 mov eax, 0x11ca8548 */
  EAX = (0x11ca8548u);
L_11ca3568:;
  /* 11ca3568 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca356a je 0x11ca35e0 */
  if (C.zf) goto L_11ca35e0;
  /* 11ca356c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca356f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca3570 cmp eax, 0x11ca8638 */
  { uint32_t _a=(EAX),_b=(0x11ca8638u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3575 jl 0x11ca3568 */
  if ((C.sf!=C.of)) goto L_11ca3568;
  /* 11ca3577 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ca357a push eax */
  push32((uint32_t)(EAX));
  /* 11ca357b push ebx */
  push32((uint32_t)(EBX));
  /* 11ca357c call dword ptr [0x11ca7048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7048))), 0x11ca3582u);
  /* 11ca3582 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca3584 pop esi */
  ESI = (pop32());
  /* 11ca3585 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3587 jne 0x11ca36ae */
  if (!C.zf) goto L_11ca36ae;
  /* 11ca358d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ca358f and dword ptr [0x11cab2a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cab2a4)))&(0x0u); w32((uint32_t)(0x11cab2a4), (_r)); fl_logic(_r,32); }
  /* 11ca3596 pop ecx */
  ECX = (pop32());
  /* 11ca3597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3599 mov edi, 0x11cab1a0 */
  EDI = (0x11cab1a0u);
  /* 11ca359e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca35a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ca35a3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ca35a4 mov dword ptr [0x11cab088], ebx */
  w32((uint32_t)(0x11cab088), (EBX));
  /* 11ca35aa jbe 0x11ca369b */
  if ((C.cf||C.zf)) goto L_11ca369b;
  /* 11ca35b0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca35b4 je 0x11ca3676 */
  if (C.zf) goto L_11ca3676;
  /* 11ca35ba lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11ca35bd:;
  /* 11ca35bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ca35bf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca35c1 je 0x11ca3676 */
  if (C.zf) goto L_11ca3676;
  /* 11ca35c7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11ca35cb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11ca35ce:;
  /* 11ca35ce cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca35d0 ja 0x11ca366a */
  if ((!C.cf&&!C.zf)) goto L_11ca366a;
  /* 11ca35d6 or byte ptr [eax + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x4u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca35dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca35de jmp 0x11ca35ce */
  goto L_11ca35ce;
L_11ca35e0:;
  /* 11ca35e0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca35e4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ca35e6 pop ecx */
  ECX = (pop32());
  /* 11ca35e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca35e9 mov edi, 0x11cab1a0 */
  EDI = (0x11cab1a0u);
  /* 11ca35ee lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11ca35f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ca35f3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ca35f6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ca35f7 lea ebx, [esi + 0x11ca8558] */
  EBX = ((uint32_t)(ESI + 0x11ca8558));
L_11ca35fd:;
  /* 11ca35fd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3600 mov ecx, ebx */
  ECX = (EBX);
  /* 11ca3602 je 0x11ca3630 */
  if (C.zf) goto L_11ca3630;
L_11ca3604:;
  /* 11ca3604 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ca3607 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca3609 je 0x11ca3630 */
  if (C.zf) goto L_11ca3630;
  /* 11ca360b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11ca360e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11ca3611 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3613 ja 0x11ca3629 */
  if ((!C.cf&&!C.zf)) goto L_11ca3629;
  /* 11ca3615 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca3618 mov dl, byte ptr [edx + 0x11ca8540] */
  DL = (r8((uint32_t)(EDX + 0x11ca8540)));
L_11ca361e:;
  /* 11ca361e or byte ptr [eax + 0x11cab1a1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(DL); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca3624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca3625 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3627 jbe 0x11ca361e */
  if ((C.cf||C.zf)) goto L_11ca361e;
L_11ca3629:;
  /* 11ca3629 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca362a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca362b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca362e jne 0x11ca3604 */
  if (!C.zf) goto L_11ca3604;
L_11ca3630:;
  /* 11ca3630 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ca3633 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3636 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca363a jb 0x11ca35fd */
  if (C.cf) goto L_11ca35fd;
  /* 11ca363c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca363f mov dword ptr [0x11cab09c], 1 */
  w32((uint32_t)(0x11cab09c), (0x1u));
  /* 11ca3649 push eax */
  push32((uint32_t)(EAX));
  /* 11ca364a mov dword ptr [0x11cab088], eax */
  w32((uint32_t)(0x11cab088), (EAX));
  /* 11ca364f call 0x11ca3722 */
  push32(0x11ca3654u); f_11ca3722();
  /* 11ca3654 lea esi, [esi + 0x11ca854c] */
  ESI = ((uint32_t)(ESI + 0x11ca854c));
  /* 11ca365a mov edi, 0x11cab090 */
  EDI = (0x11cab090u);
  /* 11ca365f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca3660 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca3661 pop ecx */
  ECX = (pop32());
  /* 11ca3662 mov dword ptr [0x11cab2a4], eax */
  w32((uint32_t)(0x11cab2a4), (EAX));
  /* 11ca3667 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ca3668 jmp 0x11ca36bc */
  goto L_11ca36bc;
L_11ca366a:;
  /* 11ca366a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca366b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca366c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3670 jne 0x11ca35bd */
  if (!C.zf) goto L_11ca35bd;
L_11ca3676:;
  /* 11ca3676 mov eax, esi */
  EAX = (ESI);
L_11ca3678:;
  /* 11ca3678 or byte ptr [eax + 0x11cab1a1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x8u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca367f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca3680 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3685 jb 0x11ca3678 */
  if (C.cf) goto L_11ca3678;
  /* 11ca3687 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3688 call 0x11ca3722 */
  push32(0x11ca368du); f_11ca3722();
  /* 11ca368d pop ecx */
  ECX = (pop32());
  /* 11ca368e mov dword ptr [0x11cab2a4], eax */
  w32((uint32_t)(0x11cab2a4), (EAX));
  /* 11ca3693 mov dword ptr [0x11cab09c], esi */
  w32((uint32_t)(0x11cab09c), (ESI));
  /* 11ca3699 jmp 0x11ca36a2 */
  goto L_11ca36a2;
L_11ca369b:;
  /* 11ca369b and dword ptr [0x11cab09c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cab09c)))&(0x0u); w32((uint32_t)(0x11cab09c), (_r)); fl_logic(_r,32); }
L_11ca36a2:;
  /* 11ca36a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca36a4 mov edi, 0x11cab090 */
  EDI = (0x11cab090u);
  /* 11ca36a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca36aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca36ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca36ac jmp 0x11ca36bc */
  goto L_11ca36bc;
L_11ca36ae:;
  /* 11ca36ae cmp dword ptr [0x11caaf94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caaf94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca36b5 je 0x11ca36c6 */
  if (C.zf) goto L_11ca36c6;
L_11ca36b7:;
  /* 11ca36b7 call 0x11ca3755 */
  push32(0x11ca36bcu); f_11ca3755();
L_11ca36bc:;
  /* 11ca36bc call 0x11ca377e */
  push32(0x11ca36c1u); f_11ca377e();
  /* 11ca36c1 jmp 0x11ca3552 */
  goto L_11ca3552;
L_11ca36c6:;
  /* 11ca36c6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11ca36c9:;
  /* 11ca36c9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca36cb call 0x11ca2bc1 */
  push32(0x11ca36d0u); f_11ca2bc1();
  /* 11ca36d0 pop ecx */
  ECX = (pop32());
  /* 11ca36d1 mov eax, esi */
  EAX = (ESI);
  /* 11ca36d3 pop edi */
  EDI = (pop32());
  /* 11ca36d4 pop esi */
  ESI = (pop32());
  /* 11ca36d5 pop ebx */
  EBX = (pop32());
  /* 11ca36d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca36d7 ret  */
  ESPCHK(0x11ca352bu, _esp0);
  ESP += 4; return;
}

/* FUN_100036d8 @ 0x11ca36d8 (74 bytes, 15 insns) */
void f_11ca36d8(void) {
  FTRACE(0x11ca36d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca36d8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca36dc and dword ptr [0x11caaf94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11caaf94)))&(0x0u); w32((uint32_t)(0x11caaf94), (_r)); fl_logic(_r,32); }
  /* 11ca36e3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca36e6 jne 0x11ca36f8 */
  if (!C.zf) goto L_11ca36f8;
  /* 11ca36e8 mov dword ptr [0x11caaf94], 1 */
  w32((uint32_t)(0x11caaf94), (0x1u));
  /* 11ca36f2 jmp dword ptr [0x11ca704c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ca704c)))); return;
L_11ca36f8:;
  /* 11ca36f8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca36fb jne 0x11ca370d */
  if (!C.zf) goto L_11ca370d;
  /* 11ca36fd mov dword ptr [0x11caaf94], 1 */
  w32((uint32_t)(0x11caaf94), (0x1u));
  /* 11ca3707 jmp dword ptr [0x11ca7044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ca7044)))); return;
L_11ca370d:;
  /* 11ca370d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3710 jne 0x11ca3721 */
  if (!C.zf) goto L_11ca3721;
  /* 11ca3712 mov eax, dword ptr [0x11caafc8] */
  EAX = (r32((uint32_t)(0x11caafc8)));
  /* 11ca3717 mov dword ptr [0x11caaf94], 1 */
  w32((uint32_t)(0x11caaf94), (0x1u));
L_11ca3721:;
  /* 11ca3721 ret  */
  ESPCHK(0x11ca36d8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003722 @ 0x11ca3722 (51 bytes, 19 insns) */
void f_11ca3722(void) {
  FTRACE(0x11ca3722u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3722 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca3726 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca372b je 0x11ca374f */
  if (C.zf) goto L_11ca374f;
  /* 11ca372d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3730 je 0x11ca3749 */
  if (C.zf) goto L_11ca3749;
  /* 11ca3732 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3735 je 0x11ca3743 */
  if (C.zf) goto L_11ca3743;
  /* 11ca3737 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca3738 je 0x11ca373d */
  if (C.zf) goto L_11ca373d;
  /* 11ca373a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca373c ret  */
  ESPCHK(0x11ca3722u, _esp0);
  ESP += 4; return;
L_11ca373d:;
  /* 11ca373d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11ca3742 ret  */
  ESPCHK(0x11ca3722u, _esp0);
  ESP += 4; return;
L_11ca3743:;
  /* 11ca3743 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11ca3748 ret  */
  ESPCHK(0x11ca3722u, _esp0);
  ESP += 4; return;
L_11ca3749:;
  /* 11ca3749 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11ca374e ret  */
  ESPCHK(0x11ca3722u, _esp0);
  ESP += 4; return;
L_11ca374f:;
  /* 11ca374f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11ca3754 ret  */
  ESPCHK(0x11ca3722u, _esp0);
  ESP += 4; return;
}

/* FUN_10003755 @ 0x11ca3755 (41 bytes, 17 insns) */
void f_11ca3755(void) {
  FTRACE(0x11ca3755u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3755 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3756 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ca3758 pop ecx */
  ECX = (pop32());
  /* 11ca3759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca375b mov edi, 0x11cab1a0 */
  EDI = (0x11cab1a0u);
  /* 11ca3760 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ca3762 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ca3763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3765 mov edi, 0x11cab090 */
  EDI = (0x11cab090u);
  /* 11ca376a mov dword ptr [0x11cab088], eax */
  w32((uint32_t)(0x11cab088), (EAX));
  /* 11ca376f mov dword ptr [0x11cab09c], eax */
  w32((uint32_t)(0x11cab09c), (EAX));
  /* 11ca3774 mov dword ptr [0x11cab2a4], eax */
  w32((uint32_t)(0x11cab2a4), (EAX));
  /* 11ca3779 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca377a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca377b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ca377c pop edi */
  EDI = (pop32());
  /* 11ca377d ret  */
  ESPCHK(0x11ca3755u, _esp0);
  ESP += 4; return;
}

/* FUN_1000377e @ 0x11ca377e (389 bytes, 124 insns) */
void f_11ca377e(void) {
  FTRACE(0x11ca377eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca377e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca377f mov ebp, esp */
  EBP = (ESP);
  /* 11ca3781 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3787 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ca378a push esi */
  push32((uint32_t)(ESI));
  /* 11ca378b push eax */
  push32((uint32_t)(EAX));
  /* 11ca378c push dword ptr [0x11cab088] */
  push32((uint32_t)(r32((uint32_t)(0x11cab088))));
  /* 11ca3792 call dword ptr [0x11ca7048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7048))), 0x11ca3798u);
  /* 11ca3798 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca379b jne 0x11ca38b7 */
  if (!C.zf) goto L_11ca38b7;
  /* 11ca37a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca37a3 mov esi, 0x100 */
  ESI = (0x100u);
L_11ca37a8:;
  /* 11ca37a8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11ca37af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca37b0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca37b2 jb 0x11ca37a8 */
  if (C.cf) goto L_11ca37a8;
  /* 11ca37b4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11ca37b7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11ca37be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca37c0 je 0x11ca37f9 */
  if (C.zf) goto L_11ca37f9;
  /* 11ca37c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca37c3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca37c4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11ca37c7:;
  /* 11ca37c7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11ca37ca movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11ca37cd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca37cf ja 0x11ca37ee */
  if ((!C.cf&&!C.zf)) goto L_11ca37ee;
  /* 11ca37d1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca37d3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11ca37da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca37db mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11ca37e0 mov ebx, ecx */
  EBX = (ECX);
  /* 11ca37e2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca37e5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ca37e7 mov ecx, ebx */
  ECX = (EBX);
  /* 11ca37e9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ca37ec rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11ca37ee:;
  /* 11ca37ee inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca37ef inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca37f0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11ca37f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca37f5 jne 0x11ca37c7 */
  if (!C.zf) goto L_11ca37c7;
  /* 11ca37f7 pop edi */
  EDI = (pop32());
  /* 11ca37f8 pop ebx */
  EBX = (pop32());
L_11ca37f9:;
  /* 11ca37f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca37fb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11ca3801 push dword ptr [0x11cab2a4] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a4))));
  /* 11ca3807 push dword ptr [0x11cab088] */
  push32((uint32_t)(r32((uint32_t)(0x11cab088))));
  /* 11ca380d push eax */
  push32((uint32_t)(EAX));
  /* 11ca380e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ca3814 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3815 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3816 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca3818 call 0x11ca59e5 */
  push32(0x11ca381du); f_11ca59e5();
  /* 11ca381d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca381f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11ca3825 push dword ptr [0x11cab088] */
  push32((uint32_t)(r32((uint32_t)(0x11cab088))));
  /* 11ca382b push esi */
  push32((uint32_t)(ESI));
  /* 11ca382c push eax */
  push32((uint32_t)(EAX));
  /* 11ca382d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ca3833 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3834 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3835 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3836 push dword ptr [0x11cab2a4] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a4))));
  /* 11ca383c call 0x11ca57c1 */
  push32(0x11ca3841u); f_11ca57c1();
  /* 11ca3841 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca3843 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11ca3849 push dword ptr [0x11cab088] */
  push32((uint32_t)(r32((uint32_t)(0x11cab088))));
  /* 11ca384f push esi */
  push32((uint32_t)(ESI));
  /* 11ca3850 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3851 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ca3857 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3858 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3859 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ca385e push dword ptr [0x11cab2a4] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a4))));
  /* 11ca3864 call 0x11ca57c1 */
  push32(0x11ca3869u); f_11ca57c1();
  /* 11ca3869 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca386c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca386e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11ca3874:;
  /* 11ca3874 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11ca3877 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11ca387a je 0x11ca3892 */
  if (C.zf) goto L_11ca3892;
  /* 11ca387c or byte ptr [eax + 0x11cab1a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x10u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca3883 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11ca388a:;
  /* 11ca388a mov byte ptr [eax + 0x11cab0a0], dl */
  w8((uint32_t)(EAX + 0x11cab0a0), (DL));
  /* 11ca3890 jmp 0x11ca38ae */
  goto L_11ca38ae;
L_11ca3892:;
  /* 11ca3892 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11ca3895 je 0x11ca38a7 */
  if (C.zf) goto L_11ca38a7;
  /* 11ca3897 or byte ptr [eax + 0x11cab1a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x20u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca389e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11ca38a5 jmp 0x11ca388a */
  goto L_11ca388a;
L_11ca38a7:;
  /* 11ca38a7 and byte ptr [eax + 0x11cab0a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab0a0)))&(0x0u); w8((uint32_t)(EAX + 0x11cab0a0), (_r)); fl_logic(_r,8); }
L_11ca38ae:;
  /* 11ca38ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca38af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca38b0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca38b1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38b3 jb 0x11ca3874 */
  if (C.cf) goto L_11ca3874;
  /* 11ca38b5 jmp 0x11ca3900 */
  goto L_11ca3900;
L_11ca38b7:;
  /* 11ca38b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca38b9 mov esi, 0x100 */
  ESI = (0x100u);
L_11ca38be:;
  /* 11ca38be cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38c1 jb 0x11ca38dc */
  if (C.cf) goto L_11ca38dc;
  /* 11ca38c3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38c6 ja 0x11ca38dc */
  if ((!C.cf&&!C.zf)) goto L_11ca38dc;
  /* 11ca38c8 or byte ptr [eax + 0x11cab1a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x10u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca38cf mov cl, al */
  CL = (AL);
  /* 11ca38d1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11ca38d4:;
  /* 11ca38d4 mov byte ptr [eax + 0x11cab0a0], cl */
  w8((uint32_t)(EAX + 0x11cab0a0), (CL));
  /* 11ca38da jmp 0x11ca38fb */
  goto L_11ca38fb;
L_11ca38dc:;
  /* 11ca38dc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38df jb 0x11ca38f4 */
  if (C.cf) goto L_11ca38f4;
  /* 11ca38e1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38e4 ja 0x11ca38f4 */
  if ((!C.cf&&!C.zf)) goto L_11ca38f4;
  /* 11ca38e6 or byte ptr [eax + 0x11cab1a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))|(0x20u); w8((uint32_t)(EAX + 0x11cab1a1), (_r)); fl_logic(_r,8); }
  /* 11ca38ed mov cl, al */
  CL = (AL);
  /* 11ca38ef sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca38f2 jmp 0x11ca38d4 */
  goto L_11ca38d4;
L_11ca38f4:;
  /* 11ca38f4 and byte ptr [eax + 0x11cab0a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab0a0)))&(0x0u); w8((uint32_t)(EAX + 0x11cab0a0), (_r)); fl_logic(_r,8); }
L_11ca38fb:;
  /* 11ca38fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca38fc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca38fe jb 0x11ca38be */
  if (C.cf) goto L_11ca38be;
L_11ca3900:;
  /* 11ca3900 pop esi */
  ESI = (pop32());
  /* 11ca3901 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3902 ret  */
  ESPCHK(0x11ca377eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003903 @ 0x11ca3903 (28 bytes, 7 insns) */
void f_11ca3903(void) {
  FTRACE(0x11ca3903u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3903 cmp dword ptr [0x11cab3c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca390a jne 0x11ca391e */
  if (!C.zf) goto L_11ca391e;
  /* 11ca390c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11ca390e call 0x11ca352b */
  push32(0x11ca3913u); f_11ca352b();
  /* 11ca3913 pop ecx */
  ECX = (pop32());
  /* 11ca3914 mov dword ptr [0x11cab3c8], 1 */
  w32((uint32_t)(0x11cab3c8), (0x1u));
L_11ca391e:;
  /* 11ca391e ret  */
  ESPCHK(0x11ca3903u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x11ca3920 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11ca3920(void) {
  FTRACE(0x11ca3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3920 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca3921 mov ebp, esp */
  EBP = (ESP);
  /* 11ca3923 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3924 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3925 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca3928 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca392b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca392e mov eax, ecx */
  EAX = (ECX);
  /* 11ca3930 mov edx, ecx */
  EDX = (ECX);
  /* 11ca3932 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3934 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3936 jbe 0x11ca3940 */
  if ((C.cf||C.zf)) goto L_11ca3940;
  /* 11ca3938 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca393a jb 0x11ca3ab8 */
  if (C.cf) goto L_11ca3ab8;
L_11ca3940:;
  /* 11ca3940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca3946 jne 0x11ca395c */
  if (!C.zf) goto L_11ca395c;
  /* 11ca3948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca394b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ca394e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3951 jb 0x11ca397c */
  if (C.cf) goto L_11ca397c;
  /* 11ca3953 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca3955 jmp dword ptr [edx*4 + 0x11ca3a68] */
  switch (EDX) {
    case 0: goto L_11ca3a78;
    case 1: goto L_11ca3a80;
    case 2: goto L_11ca3a8c;
    case 3: goto L_11ca3aa0;
    default: x86_unimpl("switch@0x11ca3955 out of table"); return;
  }
L_11ca395c:;
  /* 11ca395c mov eax, edi */
  EAX = (EDI);
  /* 11ca395e mov edx, 3 */
  EDX = (0x3u);
  /* 11ca3963 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3966 jb 0x11ca3974 */
  if (C.cf) goto L_11ca3974;
  /* 11ca3968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca396b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca396d jmp dword ptr [eax*4 + 0x11ca3980] */
  switch (EAX) {
    case 1: goto L_11ca3990;
    case 2: goto L_11ca39bc;
    case 3: goto L_11ca39e0;
    default: x86_unimpl("switch@0x11ca396d out of table"); return;
  }
L_11ca3974:;
  /* 11ca3974 jmp dword ptr [ecx*4 + 0x11ca3a78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ca3a78)))); return;
  /* 11ca397b nop  */
  /* nop */
L_11ca397c:;
  /* 11ca397c jmp dword ptr [ecx*4 + 0x11ca39fc] */
  switch (ECX) {
    case 0: goto L_11ca3a5f;
    case 1: goto L_11ca3a4c;
    case 2: goto L_11ca3a44;
    case 3: goto L_11ca3a3c;
    case 4: goto L_11ca3a34;
    case 5: goto L_11ca3a2c;
    case 6: goto L_11ca3a24;
    case 7: goto L_11ca3a1c;
    default: x86_unimpl("switch@0x11ca397c out of table"); return;
  }
  /* 11ca3983 nop  */
  /* nop */
L_11ca3990:;
  /* 11ca3990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca3996 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3999 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca399c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca399f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca39a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca39a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca39a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca39ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca39ae jb 0x11ca397c */
  if (C.cf) goto L_11ca397c;
  /* 11ca39b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca39b2 jmp dword ptr [edx*4 + 0x11ca3a68] */
  switch (EDX) {
    case 0: goto L_11ca3a78;
    case 1: goto L_11ca3a80;
    case 2: goto L_11ca3a8c;
    case 3: goto L_11ca3aa0;
    default: x86_unimpl("switch@0x11ca39b2 out of table"); return;
  }
  /* 11ca39b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca39bc:;
  /* 11ca39bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca39be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca39c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca39c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca39c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca39c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca39cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca39ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca39d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca39d4 jb 0x11ca397c */
  if (C.cf) goto L_11ca397c;
  /* 11ca39d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca39d8 jmp dword ptr [edx*4 + 0x11ca3a68] */
  switch (EDX) {
    case 0: goto L_11ca3a78;
    case 1: goto L_11ca3a80;
    case 2: goto L_11ca3a8c;
    case 3: goto L_11ca3aa0;
    default: x86_unimpl("switch@0x11ca39d8 out of table"); return;
  }
  /* 11ca39df nop  */
  /* nop */
L_11ca39e0:;
  /* 11ca39e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca39e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca39e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca39e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca39e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca39ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca39eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca39ee jb 0x11ca397c */
  if (C.cf) goto L_11ca397c;
  /* 11ca39f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca39f2 jmp dword ptr [edx*4 + 0x11ca3a68] */
  switch (EDX) {
    case 0: goto L_11ca3a78;
    case 1: goto L_11ca3a80;
    case 2: goto L_11ca3a8c;
    case 3: goto L_11ca3aa0;
    default: x86_unimpl("switch@0x11ca39f2 out of table"); return;
  }
  /* 11ca39f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca3a1c:;
  /* 11ca3a1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ca3a20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ca3a24:;
  /* 11ca3a24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ca3a28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ca3a2c:;
  /* 11ca3a2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ca3a30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ca3a34:;
  /* 11ca3a34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ca3a38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ca3a3c:;
  /* 11ca3a3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ca3a40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ca3a44:;
  /* 11ca3a44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ca3a48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ca3a4c:;
  /* 11ca3a4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ca3a50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ca3a54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ca3a5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3a5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ca3a5f:;
  /* 11ca3a5f jmp dword ptr [edx*4 + 0x11ca3a68] */
  switch (EDX) {
    case 0: goto L_11ca3a78;
    case 1: goto L_11ca3a80;
    case 2: goto L_11ca3a8c;
    case 3: goto L_11ca3aa0;
    default: x86_unimpl("switch@0x11ca3a5f out of table"); return;
  }
  /* 11ca3a66 mov edi, edi */
  EDI = (EDI);
L_11ca3a78:;
  /* 11ca3a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3a7b pop esi */
  ESI = (pop32());
  /* 11ca3a7c pop edi */
  EDI = (pop32());
  /* 11ca3a7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3a7e ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3a7f nop  */
  /* nop */
L_11ca3a80:;
  /* 11ca3a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3a82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca3a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3a87 pop esi */
  ESI = (pop32());
  /* 11ca3a88 pop edi */
  EDI = (pop32());
  /* 11ca3a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3a8a ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3a8b nop  */
  /* nop */
L_11ca3a8c:;
  /* 11ca3a8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3a8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca3a90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3a93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca3a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3a99 pop esi */
  ESI = (pop32());
  /* 11ca3a9a pop edi */
  EDI = (pop32());
  /* 11ca3a9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3a9c ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3a9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca3aa0:;
  /* 11ca3aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca3aa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3aa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca3aaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca3aad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca3ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3ab3 pop esi */
  ESI = (pop32());
  /* 11ca3ab4 pop edi */
  EDI = (pop32());
  /* 11ca3ab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3ab6 ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3ab7 nop  */
  /* nop */
L_11ca3ab8:;
  /* 11ca3ab8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ca3abc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ca3ac0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca3ac6 jne 0x11ca3aec */
  if (!C.zf) goto L_11ca3aec;
  /* 11ca3ac8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca3acb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3ace cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3ad1 jb 0x11ca3ae0 */
  if (C.cf) goto L_11ca3ae0;
  /* 11ca3ad3 std  */
  C.df=1;
  /* 11ca3ad4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca3ad6 cld  */
  C.df=0;
  /* 11ca3ad7 jmp dword ptr [edx*4 + 0x11ca3c00] */
  switch (EDX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3ad7 out of table"); return;
  }
  /* 11ca3ade mov edi, edi */
  EDI = (EDI);
L_11ca3ae0:;
  /* 11ca3ae0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca3ae2 jmp dword ptr [ecx*4 + 0x11ca3bb0] */
  switch (ECX) {
    case 0: goto L_11ca3bf7;
    default: x86_unimpl("switch@0x11ca3ae2 out of table"); return;
  }
  /* 11ca3ae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca3aec:;
  /* 11ca3aec mov eax, edi */
  EAX = (EDI);
  /* 11ca3aee mov edx, 3 */
  EDX = (0x3u);
  /* 11ca3af3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3af6 jb 0x11ca3b04 */
  if (C.cf) goto L_11ca3b04;
  /* 11ca3af8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3afb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3afd jmp dword ptr [eax*4 + 0x11ca3b08] */
  switch (EAX) {
    case 1: goto L_11ca3b18;
    case 2: goto L_11ca3b38;
    case 3: goto L_11ca3b60;
    default: x86_unimpl("switch@0x11ca3afd out of table"); return;
  }
L_11ca3b04:;
  /* 11ca3b04 jmp dword ptr [ecx*4 + 0x11ca3c00] */
  switch (ECX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3b04 out of table"); return;
  }
  /* 11ca3b0b nop  */
  /* nop */
L_11ca3b18:;
  /* 11ca3b18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3b1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3b1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3b20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca3b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca3b24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ca3b25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3b28 jb 0x11ca3ae0 */
  if (C.cf) goto L_11ca3ae0;
  /* 11ca3b2a std  */
  C.df=1;
  /* 11ca3b2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca3b2d cld  */
  C.df=0;
  /* 11ca3b2e jmp dword ptr [edx*4 + 0x11ca3c00] */
  switch (EDX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3b2e out of table"); return;
  }
  /* 11ca3b35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca3b38:;
  /* 11ca3b38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3b3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3b3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3b40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca3b43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca3b46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca3b49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3b4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3b4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3b52 jb 0x11ca3ae0 */
  if (C.cf) goto L_11ca3ae0;
  /* 11ca3b54 std  */
  C.df=1;
  /* 11ca3b55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca3b57 cld  */
  C.df=0;
  /* 11ca3b58 jmp dword ptr [edx*4 + 0x11ca3c00] */
  switch (EDX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3b58 out of table"); return;
  }
  /* 11ca3b5f nop  */
  /* nop */
L_11ca3b60:;
  /* 11ca3b60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3b63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3b65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3b68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca3b6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca3b6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3b71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca3b74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca3b77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3b7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3b7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3b80 jb 0x11ca3ae0 */
  if (C.cf) goto L_11ca3ae0;
  /* 11ca3b86 std  */
  C.df=1;
  /* 11ca3b87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca3b89 cld  */
  C.df=0;
  /* 11ca3b8a jmp dword ptr [edx*4 + 0x11ca3c00] */
  switch (EDX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3b8a out of table"); return;
  }
  /* 11ca3b91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ca3b94 mov ah, 0x3b */
  AH = (0x3bu);
  /* 11ca3b96 retf 0xbc11 */
  x86_unimpl("retf @ 0x11ca3b96");
  /* 11ca3b99 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3b9b adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3b9d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3b9f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ba1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3ba3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ba5 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3ba7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ba9 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3bab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3bad cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3bb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ca3bb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ca3bbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ca3bc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ca3bc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ca3bc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ca3bcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ca3bd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ca3bd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ca3bd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ca3bdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ca3be0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ca3be4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ca3be8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ca3bec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ca3bf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3bf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ca3bf7:;
  /* 11ca3bf7 jmp dword ptr [edx*4 + 0x11ca3c00] */
  switch (EDX) {
    case 0: goto L_11ca3c10;
    case 1: goto L_11ca3c18;
    case 2: goto L_11ca3c28;
    case 3: goto L_11ca3c3c;
    default: x86_unimpl("switch@0x11ca3bf7 out of table"); return;
  }
  /* 11ca3bfe mov edi, edi */
  EDI = (EDI);
L_11ca3c10:;
  /* 11ca3c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3c13 pop esi */
  ESI = (pop32());
  /* 11ca3c14 pop edi */
  EDI = (pop32());
  /* 11ca3c15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3c16 ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3c17 nop  */
  /* nop */
L_11ca3c18:;
  /* 11ca3c18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3c1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3c21 pop esi */
  ESI = (pop32());
  /* 11ca3c22 pop edi */
  EDI = (pop32());
  /* 11ca3c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3c24 ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3c25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca3c28:;
  /* 11ca3c28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3c2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3c2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca3c31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca3c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3c37 pop esi */
  ESI = (pop32());
  /* 11ca3c38 pop edi */
  EDI = (pop32());
  /* 11ca3c39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3c3a ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
  /* 11ca3c3b nop  */
  /* nop */
L_11ca3c3c:;
  /* 11ca3c3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca3c3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca3c42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca3c45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca3c48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3c4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca3c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3c51 pop esi */
  ESI = (pop32());
  /* 11ca3c52 pop edi */
  EDI = (pop32());
  /* 11ca3c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3c54 ret  */
  ESPCHK(0x11ca3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c55 @ 0x11ca3c55 (23 bytes, 7 insns) */
void f_11ca3c55(void) {
  FTRACE(0x11ca3c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca3c57 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ca3c5b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ca3c5f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ca3c63 call 0x11ca3c6c */
  push32(0x11ca3c68u); f_11ca3c6c();
  /* 11ca3c68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3c6b ret  */
  ESPCHK(0x11ca3c55u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c6c @ 0x11ca3c6c (517 bytes, 195 insns) */
void f_11ca3c6c(void) {
  FTRACE(0x11ca3c6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3c6c push ebp */
  push32((uint32_t)(EBP));
  /* 11ca3c6d mov ebp, esp */
  EBP = (ESP);
  /* 11ca3c6f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3c72 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3c73 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ca3c77 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3c78 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3c79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3c7c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ca3c7e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11ca3c81 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11ca3c84:;
  /* 11ca3c84 cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3c8b jle 0x11ca3c9c */
  if ((C.zf||C.sf!=C.of)) goto L_11ca3c9c;
  /* 11ca3c8d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11ca3c90 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca3c92 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3c93 call 0x11ca5c72 */
  push32(0x11ca3c98u); f_11ca5c72();
  /* 11ca3c98 pop ecx */
  ECX = (pop32());
  /* 11ca3c99 pop ecx */
  ECX = (pop32());
  /* 11ca3c9a jmp 0x11ca3cab */
  goto L_11ca3cab;
L_11ca3c9c:;
  /* 11ca3c9c mov ecx, dword ptr [0x11caa7e8] */
  ECX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca3ca2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11ca3ca5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11ca3ca8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11ca3cab:;
  /* 11ca3cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3cad je 0x11ca3cb4 */
  if (C.zf) goto L_11ca3cb4;
  /* 11ca3caf mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11ca3cb1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3cb2 jmp 0x11ca3c84 */
  goto L_11ca3c84;
L_11ca3cb4:;
  /* 11ca3cb4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3cb7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11ca3cba jne 0x11ca3cc2 */
  if (!C.zf) goto L_11ca3cc2;
  /* 11ca3cbc or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11ca3cc0 jmp 0x11ca3cc7 */
  goto L_11ca3cc7;
L_11ca3cc2:;
  /* 11ca3cc2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3cc5 jne 0x11ca3ccd */
  if (!C.zf) goto L_11ca3ccd;
L_11ca3cc7:;
  /* 11ca3cc7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11ca3cc9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3cca mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11ca3ccd:;
  /* 11ca3ccd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca3cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3cd2 jl 0x11ca3e61 */
  if ((C.sf!=C.of)) goto L_11ca3e61;
  /* 11ca3cd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3cdb je 0x11ca3e61 */
  if (C.zf) goto L_11ca3e61;
  /* 11ca3ce1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3ce4 jg 0x11ca3e61 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca3e61;
  /* 11ca3cea push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ca3cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3cee pop ecx */
  ECX = (pop32());
  /* 11ca3cef jne 0x11ca3d15 */
  if (!C.zf) goto L_11ca3d15;
  /* 11ca3cf1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3cf4 je 0x11ca3cff */
  if (C.zf) goto L_11ca3cff;
  /* 11ca3cf6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11ca3cfd jmp 0x11ca3d31 */
  goto L_11ca3d31;
L_11ca3cff:;
  /* 11ca3cff mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3d01 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3d03 je 0x11ca3d12 */
  if (C.zf) goto L_11ca3d12;
  /* 11ca3d05 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3d07 je 0x11ca3d12 */
  if (C.zf) goto L_11ca3d12;
  /* 11ca3d09 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11ca3d10 jmp 0x11ca3d31 */
  goto L_11ca3d31;
L_11ca3d12:;
  /* 11ca3d12 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11ca3d15:;
  /* 11ca3d15 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3d18 jne 0x11ca3d31 */
  if (!C.zf) goto L_11ca3d31;
  /* 11ca3d1a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3d1d jne 0x11ca3d31 */
  if (!C.zf) goto L_11ca3d31;
  /* 11ca3d1f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3d21 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3d23 je 0x11ca3d29 */
  if (C.zf) goto L_11ca3d29;
  /* 11ca3d25 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3d27 jne 0x11ca3d31 */
  if (!C.zf) goto L_11ca3d31;
L_11ca3d29:;
  /* 11ca3d29 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca3d2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3d2d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3d2e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11ca3d31:;
  /* 11ca3d31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3d34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3d36 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ca3d39 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11ca3d3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ca3d41:;
  /* 11ca3d41 cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3d48 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11ca3d4b jle 0x11ca3d59 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca3d59;
  /* 11ca3d4d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca3d4f push esi */
  push32((uint32_t)(ESI));
  /* 11ca3d50 call 0x11ca5c72 */
  push32(0x11ca3d55u); f_11ca5c72();
  /* 11ca3d55 pop ecx */
  ECX = (pop32());
  /* 11ca3d56 pop ecx */
  ECX = (pop32());
  /* 11ca3d57 jmp 0x11ca3d64 */
  goto L_11ca3d64;
L_11ca3d59:;
  /* 11ca3d59 mov eax, dword ptr [0x11caa7e8] */
  EAX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca3d5e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11ca3d61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11ca3d64:;
  /* 11ca3d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3d66 je 0x11ca3d70 */
  if (C.zf) goto L_11ca3d70;
  /* 11ca3d68 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11ca3d6b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3d6e jmp 0x11ca3da2 */
  goto L_11ca3da2;
L_11ca3d70:;
  /* 11ca3d70 cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3d77 jle 0x11ca3d84 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca3d84;
  /* 11ca3d79 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3d7a push esi */
  push32((uint32_t)(ESI));
  /* 11ca3d7b call 0x11ca5c72 */
  push32(0x11ca3d80u); f_11ca5c72();
  /* 11ca3d80 pop ecx */
  ECX = (pop32());
  /* 11ca3d81 pop ecx */
  ECX = (pop32());
  /* 11ca3d82 jmp 0x11ca3d8f */
  goto L_11ca3d8f;
L_11ca3d84:;
  /* 11ca3d84 mov eax, dword ptr [0x11caa7e8] */
  EAX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca3d89 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11ca3d8d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11ca3d8f:;
  /* 11ca3d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3d91 je 0x11ca3ddd */
  if (C.zf) goto L_11ca3ddd;
  /* 11ca3d93 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11ca3d96 push eax */
  push32((uint32_t)(EAX));
  /* 11ca3d97 call 0x11ca5b37 */
  push32(0x11ca3d9cu); f_11ca5b37();
  /* 11ca3d9c pop ecx */
  ECX = (pop32());
  /* 11ca3d9d mov ecx, eax */
  ECX = (EAX);
  /* 11ca3d9f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11ca3da2:;
  /* 11ca3da2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3da5 jae 0x11ca3ddd */
  if (!C.cf) goto L_11ca3ddd;
  /* 11ca3da7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca3daa or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11ca3dae cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3db1 jb 0x11ca3dc7 */
  if (C.cf) goto L_11ca3dc7;
  /* 11ca3db3 jne 0x11ca3dc1 */
  if (!C.zf) goto L_11ca3dc1;
  /* 11ca3db5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3db8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca3dba div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ca3dbd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3dbf jbe 0x11ca3dc7 */
  if ((C.cf||C.zf)) goto L_11ca3dc7;
L_11ca3dc1:;
  /* 11ca3dc1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11ca3dc5 jmp 0x11ca3dd0 */
  goto L_11ca3dd0;
L_11ca3dc7:;
  /* 11ca3dc7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca3dcb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3dcd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11ca3dd0:;
  /* 11ca3dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca3dd3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ca3dd6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11ca3dd8 jmp 0x11ca3d41 */
  goto L_11ca3d41;
L_11ca3ddd:;
  /* 11ca3ddd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca3de0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11ca3de3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca3de6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11ca3de8 jne 0x11ca3dfa */
  if (!C.zf) goto L_11ca3dfa;
  /* 11ca3dea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca3dec je 0x11ca3df4 */
  if (C.zf) goto L_11ca3df4;
  /* 11ca3dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3df1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ca3df4:;
  /* 11ca3df4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ca3df8 jmp 0x11ca3e45 */
  goto L_11ca3e45;
L_11ca3dfa:;
  /* 11ca3dfa test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11ca3dfc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11ca3e01 jne 0x11ca3e1e */
  if (!C.zf) goto L_11ca3e1e;
  /* 11ca3e03 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11ca3e05 jne 0x11ca3e45 */
  if (!C.zf) goto L_11ca3e45;
  /* 11ca3e07 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3e0a je 0x11ca3e15 */
  if (C.zf) goto L_11ca3e15;
  /* 11ca3e0c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3e13 ja 0x11ca3e1e */
  if ((!C.cf&&!C.zf)) goto L_11ca3e1e;
L_11ca3e15:;
  /* 11ca3e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3e17 jne 0x11ca3e45 */
  if (!C.zf) goto L_11ca3e45;
  /* 11ca3e19 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca3e1c jbe 0x11ca3e45 */
  if ((C.cf||C.zf)) goto L_11ca3e45;
L_11ca3e1e:;
  /* 11ca3e1e call 0x11ca5b2e */
  push32(0x11ca3e23u); f_11ca5b2e();
  /* 11ca3e23 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11ca3e27 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11ca3e2d je 0x11ca3e35 */
  if (C.zf) goto L_11ca3e35;
  /* 11ca3e2f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ca3e33 jmp 0x11ca3e45 */
  goto L_11ca3e45;
L_11ca3e35:;
  /* 11ca3e35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca3e38 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ca3e3a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11ca3e3c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca3e3e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca3e40 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3e42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ca3e45:;
  /* 11ca3e45 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca3e47 je 0x11ca3e4e */
  if (C.zf) goto L_11ca3e4e;
  /* 11ca3e49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca3e4c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11ca3e4e:;
  /* 11ca3e4e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11ca3e52 je 0x11ca3e5c */
  if (C.zf) goto L_11ca3e5c;
  /* 11ca3e54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca3e57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca3e59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ca3e5c:;
  /* 11ca3e5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca3e5f jmp 0x11ca3e6c */
  goto L_11ca3e6c;
L_11ca3e61:;
  /* 11ca3e61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca3e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca3e66 je 0x11ca3e6a */
  if (C.zf) goto L_11ca3e6a;
  /* 11ca3e68 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11ca3e6a:;
  /* 11ca3e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca3e6c:;
  /* 11ca3e6c pop edi */
  EDI = (pop32());
  /* 11ca3e6d pop esi */
  ESI = (pop32());
  /* 11ca3e6e pop ebx */
  EBX = (pop32());
  /* 11ca3e6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca3e70 ret  */
  ESPCHK(0x11ca3c6cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11ca3e90 (193 bytes, 90 insns) */
void f_11ca3e90(void) {
  FTRACE(0x11ca3e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3e92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ca3e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3e97 mov ebx, eax */
  EBX = (EAX);
  /* 11ca3e99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca3e9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca3ea0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ca3ea6 je 0x11ca3ebb */
  if (C.zf) goto L_11ca3ebb;
L_11ca3ea8:;
  /* 11ca3ea8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ca3eaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca3eab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3ead je 0x11ca3e80 */
  if (C.zf) { jmp_ind(0x11ca3e80u); return; }
  /* 11ca3eaf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11ca3eb1 je 0x11ca3f04 */
  if (C.zf) goto L_11ca3f04;
  /* 11ca3eb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ca3eb9 jne 0x11ca3ea8 */
  if (!C.zf) goto L_11ca3ea8;
L_11ca3ebb:;
  /* 11ca3ebb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca3ebd push edi */
  push32((uint32_t)(EDI));
  /* 11ca3ebe mov eax, ebx */
  EAX = (EBX);
  /* 11ca3ec0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11ca3ec3 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3ec4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11ca3ec6:;
  /* 11ca3ec6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ca3ec8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11ca3ecd mov eax, ecx */
  EAX = (ECX);
  /* 11ca3ecf mov esi, edi */
  ESI = (EDI);
  /* 11ca3ed1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3ed3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ed5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ed7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3eda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3edd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3edf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3ee1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3ee4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3eea jne 0x11ca3f08 */
  if (!C.zf) goto L_11ca3f08;
  /* 11ca3eec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3ef1 je 0x11ca3ec6 */
  if (C.zf) goto L_11ca3ec6;
  /* 11ca3ef3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3ef8 jne 0x11ca3f02 */
  if (!C.zf) goto L_11ca3f02;
  /* 11ca3efa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca3f00 jne 0x11ca3ec6 */
  if (!C.zf) goto L_11ca3ec6;
L_11ca3f02:;
  /* 11ca3f02 pop esi */
  ESI = (pop32());
  /* 11ca3f03 pop edi */
  EDI = (pop32());
L_11ca3f04:;
  /* 11ca3f04 pop ebx */
  EBX = (pop32());
  /* 11ca3f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3f07 ret  */
  ESPCHK(0x11ca3e90u, _esp0);
  ESP += 4; return;
L_11ca3f08:;
  /* 11ca3f08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ca3f0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f0d je 0x11ca3f45 */
  if (C.zf) goto L_11ca3f45;
  /* 11ca3f0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3f11 je 0x11ca3f02 */
  if (C.zf) goto L_11ca3f02;
  /* 11ca3f13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f15 je 0x11ca3f3e */
  if (C.zf) goto L_11ca3f3e;
  /* 11ca3f17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ca3f19 je 0x11ca3f02 */
  if (C.zf) goto L_11ca3f02;
  /* 11ca3f1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ca3f1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f20 je 0x11ca3f37 */
  if (C.zf) goto L_11ca3f37;
  /* 11ca3f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3f24 je 0x11ca3f02 */
  if (C.zf) goto L_11ca3f02;
  /* 11ca3f26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f28 je 0x11ca3f30 */
  if (C.zf) goto L_11ca3f30;
  /* 11ca3f2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ca3f2c je 0x11ca3f02 */
  if (C.zf) goto L_11ca3f02;
  /* 11ca3f2e jmp 0x11ca3ec6 */
  goto L_11ca3ec6;
L_11ca3f30:;
  /* 11ca3f30 pop esi */
  ESI = (pop32());
  /* 11ca3f31 pop edi */
  EDI = (pop32());
  /* 11ca3f32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11ca3f35 pop ebx */
  EBX = (pop32());
  /* 11ca3f36 ret  */
  ESPCHK(0x11ca3e90u, _esp0);
  ESP += 4; return;
L_11ca3f37:;
  /* 11ca3f37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11ca3f3a pop esi */
  ESI = (pop32());
  /* 11ca3f3b pop edi */
  EDI = (pop32());
  /* 11ca3f3c pop ebx */
  EBX = (pop32());
  /* 11ca3f3d ret  */
  ESPCHK(0x11ca3e90u, _esp0);
  ESP += 4; return;
L_11ca3f3e:;
  /* 11ca3f3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11ca3f41 pop esi */
  ESI = (pop32());
  /* 11ca3f42 pop edi */
  EDI = (pop32());
  /* 11ca3f43 pop ebx */
  EBX = (pop32());
  /* 11ca3f44 ret  */
  ESPCHK(0x11ca3e90u, _esp0);
  ESP += 4; return;
L_11ca3f45:;
  /* 11ca3f45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11ca3f48 pop esi */
  ESI = (pop32());
  /* 11ca3f49 pop edi */
  EDI = (pop32());
  /* 11ca3f4a pop ebx */
  EBX = (pop32());
  /* 11ca3f4b ret  */
  ESPCHK(0x11ca3e90u, _esp0);
  ESP += 4; return;
  /* 11ca3f4c int3  */
  x86_unimpl("int3 @ 0x11ca3f4c");
  /* 11ca3f4d int3  */
  x86_unimpl("int3 @ 0x11ca3f4d");
  /* 11ca3f4e int3  */
  x86_unimpl("int3 @ 0x11ca3f4e");
  /* 11ca3f4f int3  */
  x86_unimpl("int3 @ 0x11ca3f4f");
}

/* _strstr @ 0x11ca3f50 (128 bytes, 66 insns) */
void f_11ca3f50(void) {
  FTRACE(0x11ca3f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3f50 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca3f54 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3f55 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3f56 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3f57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ca3f59 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca3f5d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca3f5f je 0x11ca3fca */
  if (C.zf) goto L_11ca3fca;
  /* 11ca3f61 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11ca3f64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ca3f66 je 0x11ca3fb7 */
  if (C.zf) goto L_11ca3fb7;
L_11ca3f68:;
  /* 11ca3f68 mov esi, edi */
  ESI = (EDI);
  /* 11ca3f6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ca3f6e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11ca3f70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3f71 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f73 je 0x11ca3f8a */
  if (C.zf) goto L_11ca3f8a;
  /* 11ca3f75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3f77 je 0x11ca3f84 */
  if (C.zf) goto L_11ca3f84;
L_11ca3f79:;
  /* 11ca3f79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3f7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ca3f7c:;
  /* 11ca3f7c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f7e je 0x11ca3f8a */
  if (C.zf) goto L_11ca3f8a;
  /* 11ca3f80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3f82 jne 0x11ca3f79 */
  if (!C.zf) goto L_11ca3f79;
L_11ca3f84:;
  /* 11ca3f84 pop esi */
  ESI = (pop32());
  /* 11ca3f85 pop ebx */
  EBX = (pop32());
  /* 11ca3f86 pop edi */
  EDI = (pop32());
  /* 11ca3f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3f89 ret  */
  ESPCHK(0x11ca3f50u, _esp0);
  ESP += 4; return;
L_11ca3f8a:;
  /* 11ca3f8a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3f8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca3f8d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3f8f jne 0x11ca3f7c */
  if (!C.zf) goto L_11ca3f7c;
  /* 11ca3f91 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11ca3f94:;
  /* 11ca3f94 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11ca3f97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ca3f99 je 0x11ca3fc3 */
  if (C.zf) goto L_11ca3fc3;
  /* 11ca3f9b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca3f9d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3fa0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3fa2 jne 0x11ca3f68 */
  if (!C.zf) goto L_11ca3f68;
  /* 11ca3fa4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11ca3fa7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca3fa9 je 0x11ca3fc3 */
  if (C.zf) goto L_11ca3fc3;
  /* 11ca3fab mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11ca3fae add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3fb1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3fb3 je 0x11ca3f94 */
  if (C.zf) goto L_11ca3f94;
  /* 11ca3fb5 jmp 0x11ca3f68 */
  goto L_11ca3f68;
L_11ca3fb7:;
  /* 11ca3fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3fb9 pop esi */
  ESI = (pop32());
  /* 11ca3fba pop ebx */
  EBX = (pop32());
  /* 11ca3fbb pop edi */
  EDI = (pop32());
  /* 11ca3fbc mov al, dl */
  AL = (DL);
  /* 11ca3fbe jmp 0x11ca3e96 */
  jmp_ind(0x11ca3e96u); return;
L_11ca3fc3:;
  /* 11ca3fc3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11ca3fc6 pop esi */
  ESI = (pop32());
  /* 11ca3fc7 pop ebx */
  EBX = (pop32());
  /* 11ca3fc8 pop edi */
  EDI = (pop32());
  /* 11ca3fc9 ret  */
  ESPCHK(0x11ca3f50u, _esp0);
  ESP += 4; return;
L_11ca3fca:;
  /* 11ca3fca mov eax, edi */
  EAX = (EDI);
  /* 11ca3fcc pop esi */
  ESI = (pop32());
  /* 11ca3fcd pop ebx */
  EBX = (pop32());
  /* 11ca3fce pop edi */
  EDI = (pop32());
  /* 11ca3fcf ret  */
  ESPCHK(0x11ca3f50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11ca3fd0 (56 bytes, 31 insns) */
void f_11ca3fd0(void) {
  FTRACE(0x11ca3fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca3fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca3fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ca3fd3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca3fd4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca3fd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca3fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca3fd9 jecxz 0x11ca4001 */
  x86_unimpl("jecxz @ 0x11ca3fd9");
  /* 11ca3fdb mov ebx, ecx */
  EBX = (ECX);
  /* 11ca3fdd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca3fe0 mov esi, edi */
  ESI = (EDI);
  /* 11ca3fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca3fe4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11ca3fe6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca3fe8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca3fea mov edi, esi */
  EDI = (ESI);
  /* 11ca3fec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca3fef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11ca3ff1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11ca3ff4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca3ff6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca3ff9 ja 0x11ca3fff */
  if ((!C.cf&&!C.zf)) goto L_11ca3fff;
  /* 11ca3ffb je 0x11ca4001 */
  if (C.zf) goto L_11ca4001;
  /* 11ca3ffd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca3ffe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11ca3fff:;
  /* 11ca3fff not ecx */
  ECX = (~(ECX));
L_11ca4001:;
  /* 11ca4001 mov eax, ecx */
  EAX = (ECX);
  /* 11ca4003 pop ebx */
  EBX = (pop32());
  /* 11ca4004 pop esi */
  ESI = (pop32());
  /* 11ca4005 pop edi */
  EDI = (pop32());
  /* 11ca4006 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca4007 ret  */
  ESPCHK(0x11ca3fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x11ca4010 (47 bytes, 17 insns) */
void f_11ca4010(void) {
  FTRACE(0x11ca4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4010 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4011 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4016 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11ca401a jb 0x11ca4030 */
  if (C.cf) goto L_11ca4030;
L_11ca401c:;
  /* 11ca401c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4022 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4027 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ca4029 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca402e jae 0x11ca401c */
  if (!C.cf) goto L_11ca401c;
L_11ca4030:;
  /* 11ca4030 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4032 mov eax, esp */
  EAX = (ESP);
  /* 11ca4034 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ca4036 mov esp, ecx */
  ESP = (ECX);
  /* 11ca4038 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ca403a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ca403d push eax */
  push32((uint32_t)(EAX));
  /* 11ca403e ret  */
  ESPCHK(0x11ca4010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000403f @ 0x11ca403f (72 bytes, 17 insns) */
void f_11ca403f(void) {
  FTRACE(0x11ca403fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca403f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11ca4044 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4046 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca404c call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca4052u);
  /* 11ca4052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4054 mov dword ptr [0x11cab080], eax */
  w32((uint32_t)(0x11cab080), (EAX));
  /* 11ca4059 jne 0x11ca405c */
  if (!C.zf) goto L_11ca405c;
  /* 11ca405b ret  */
  ESPCHK(0x11ca403fu, _esp0);
  ESP += 4; return;
L_11ca405c:;
  /* 11ca405c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca4060 and dword ptr [0x11cab078], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cab078)))&(0x0u); w32((uint32_t)(0x11cab078), (_r)); fl_logic(_r,32); }
  /* 11ca4067 and dword ptr [0x11cab07c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cab07c)))&(0x0u); w32((uint32_t)(0x11cab07c), (_r)); fl_logic(_r,32); }
  /* 11ca406e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca4070 mov dword ptr [0x11cab074], eax */
  w32((uint32_t)(0x11cab074), (EAX));
  /* 11ca4075 mov dword ptr [0x11cab084], ecx */
  w32((uint32_t)(0x11cab084), (ECX));
  /* 11ca407b mov dword ptr [0x11cab06c], 0x10 */
  w32((uint32_t)(0x11cab06c), (0x10u));
  /* 11ca4085 pop eax */
  EAX = (pop32());
  /* 11ca4086 ret  */
  ESPCHK(0x11ca403fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004087 @ 0x11ca4087 (43 bytes, 14 insns) */
void f_11ca4087(void) {
  FTRACE(0x11ca4087u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4087 mov eax, dword ptr [0x11cab07c] */
  EAX = (r32((uint32_t)(0x11cab07c)));
  /* 11ca408c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11ca408f mov eax, dword ptr [0x11cab080] */
  EAX = (r32((uint32_t)(0x11cab080)));
  /* 11ca4094 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11ca4097:;
  /* 11ca4097 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4099 jae 0x11ca40af */
  if (!C.cf) goto L_11ca40af;
  /* 11ca409b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca409f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca40a2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca40a8 jb 0x11ca40b1 */
  if (C.cf) goto L_11ca40b1;
  /* 11ca40aa add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca40ad jmp 0x11ca4097 */
  goto L_11ca4097;
L_11ca40af:;
  /* 11ca40af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca40b1:;
  /* 11ca40b1 ret  */
  ESPCHK(0x11ca4087u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b2 @ 0x11ca40b2 (809 bytes, 265 insns) */
void f_11ca40b2(void) {
  FTRACE(0x11ca40b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca40b2 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca40b3 mov ebp, esp */
  EBP = (ESP);
  /* 11ca40b5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca40b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca40bb push ebx */
  push32((uint32_t)(EBX));
  /* 11ca40bc push esi */
  push32((uint32_t)(ESI));
  /* 11ca40bd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca40c0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ca40c3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca40c4 mov edi, esi */
  EDI = (ESI);
  /* 11ca40c6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca40c9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca40cc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11ca40cf mov ecx, edi */
  ECX = (EDI);
  /* 11ca40d1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca40d7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ca40de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ca40e1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ca40e3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca40e4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11ca40e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ca40ea jne 0x11ca43d6 */
  if (!C.zf) goto L_11ca43d6;
  /* 11ca40f0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11ca40f3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11ca40f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ca40f9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11ca40fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ca40ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca4102 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11ca4105 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11ca4108 jne 0x11ca4188 */
  if (!C.zf) goto L_11ca4188;
  /* 11ca410a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ca410d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca410e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4111 jbe 0x11ca4116 */
  if ((C.cf||C.zf)) goto L_11ca4116;
  /* 11ca4113 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4115 pop edx */
  EDX = (pop32());
L_11ca4116:;
  /* 11ca4116 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca4119 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca411c jne 0x11ca416a */
  if (!C.zf) goto L_11ca416a;
  /* 11ca411e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4121 jae 0x11ca4141 */
  if (!C.cf) goto L_11ca4141;
  /* 11ca4123 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4128 mov ecx, edx */
  ECX = (EDX);
  /* 11ca412a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca412c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11ca4130 not ebx */
  EBX = (~(EBX));
  /* 11ca4132 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca4136 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ca4138 jne 0x11ca4162 */
  if (!C.zf) goto L_11ca4162;
  /* 11ca413a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca413d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca413f jmp 0x11ca4162 */
  goto L_11ca4162;
L_11ca4141:;
  /* 11ca4141 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11ca4144 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4149 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca414b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11ca414f not ebx */
  EBX = (~(EBX));
  /* 11ca4151 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ca4158 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ca415a jne 0x11ca4162 */
  if (!C.zf) goto L_11ca4162;
  /* 11ca415c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca415f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4162:;
  /* 11ca4162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4165 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca4168 jmp 0x11ca416d */
  goto L_11ca416d;
L_11ca416a:;
  /* 11ca416a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11ca416d:;
  /* 11ca416d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11ca4170 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca4173 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4176 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11ca4179 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca417c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ca417f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca4182 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ca4185 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11ca4188:;
  /* 11ca4188 mov edx, ecx */
  EDX = (ECX);
  /* 11ca418a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ca418d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca418e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4191 jbe 0x11ca4196 */
  if ((C.cf||C.zf)) goto L_11ca4196;
  /* 11ca4193 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4195 pop edx */
  EDX = (pop32());
L_11ca4196:;
  /* 11ca4196 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca4199 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11ca419c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11ca419f jne 0x11ca4239 */
  if (!C.zf) goto L_11ca4239;
  /* 11ca41a5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca41a8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca41ab sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11ca41ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca41b0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11ca41b3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ca41b4 pop esi */
  ESI = (pop32());
  /* 11ca41b5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca41b7 jbe 0x11ca41bb */
  if ((C.cf||C.zf)) goto L_11ca41bb;
  /* 11ca41b9 mov ebx, esi */
  EBX = (ESI);
L_11ca41bb:;
  /* 11ca41bb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca41be mov edx, ecx */
  EDX = (ECX);
  /* 11ca41c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ca41c3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ca41c6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca41c7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca41c9 jbe 0x11ca41cd */
  if ((C.cf||C.zf)) goto L_11ca41cd;
  /* 11ca41cb mov edx, esi */
  EDX = (ESI);
L_11ca41cd:;
  /* 11ca41cd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca41cf je 0x11ca4234 */
  if (C.zf) goto L_11ca4234;
  /* 11ca41d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca41d4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca41d7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca41da jne 0x11ca421c */
  if (!C.zf) goto L_11ca421c;
  /* 11ca41dc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca41df jae 0x11ca41fd */
  if (!C.cf) goto L_11ca41fd;
  /* 11ca41e1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11ca41e6 mov ecx, ebx */
  ECX = (EBX);
  /* 11ca41e8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ca41ea not esi */
  ESI = (~(ESI));
  /* 11ca41ec and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca41f0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11ca41f4 jne 0x11ca421c */
  if (!C.zf) goto L_11ca421c;
  /* 11ca41f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca41f9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca41fb jmp 0x11ca421c */
  goto L_11ca421c;
L_11ca41fd:;
  /* 11ca41fd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11ca4200 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11ca4205 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ca4207 not esi */
  ESI = (~(ESI));
  /* 11ca4209 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ca4210 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11ca4214 jne 0x11ca421c */
  if (!C.zf) goto L_11ca421c;
  /* 11ca4216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4219 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca421c:;
  /* 11ca421c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca421f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11ca4222 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca4225 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11ca4228 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca422b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca422e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ca4231 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11ca4234:;
  /* 11ca4234 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca4237 jmp 0x11ca423c */
  goto L_11ca423c;
L_11ca4239:;
  /* 11ca4239 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ca423c:;
  /* 11ca423c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4240 jne 0x11ca424a */
  if (!C.zf) goto L_11ca424a;
  /* 11ca4242 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4244 je 0x11ca42cb */
  if (C.zf) goto L_11ca42cb;
L_11ca424a:;
  /* 11ca424a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca424d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11ca4251 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11ca4254 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11ca4257 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11ca425a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11ca425d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4260 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11ca4263 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4266 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4269 jne 0x11ca42cb */
  if (!C.zf) goto L_11ca42cb;
  /* 11ca426b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11ca426f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4272 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11ca4275 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca4277 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11ca427b jae 0x11ca42a2 */
  if (!C.cf) goto L_11ca42a2;
  /* 11ca427d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca4281 jne 0x11ca4291 */
  if (!C.zf) goto L_11ca4291;
  /* 11ca4283 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4288 mov ecx, edx */
  ECX = (EDX);
  /* 11ca428a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca428c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca428f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11ca4291:;
  /* 11ca4291 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4296 mov ecx, edx */
  ECX = (EDX);
  /* 11ca4298 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca429a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11ca429e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ca42a0 jmp 0x11ca42cb */
  goto L_11ca42cb;
L_11ca42a2:;
  /* 11ca42a2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca42a6 jne 0x11ca42b8 */
  if (!C.zf) goto L_11ca42b8;
  /* 11ca42a8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11ca42ab mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca42b0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca42b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca42b5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca42b8:;
  /* 11ca42b8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11ca42bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ca42c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ca42c2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11ca42c9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11ca42cb:;
  /* 11ca42cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca42ce mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca42d0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11ca42d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca42d7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11ca42d9 jne 0x11ca43d6 */
  if (!C.zf) goto L_11ca43d6;
  /* 11ca42df mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca42e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca42e6 je 0x11ca43c8 */
  if (C.zf) goto L_11ca43c8;
  /* 11ca42ec mov ecx, dword ptr [0x11cab070] */
  ECX = (r32((uint32_t)(0x11cab070)));
  /* 11ca42f2 mov esi, dword ptr [0x11ca7064] */
  ESI = (r32((uint32_t)(0x11ca7064)));
  /* 11ca42f8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11ca42fb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca42fe mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11ca4303 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ca4308 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4309 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca430a call esi */
  call_ind((uint32_t)(ESI), 0x11ca430cu);
  /* 11ca430c mov ecx, dword ptr [0x11cab070] */
  ECX = (r32((uint32_t)(0x11cab070)));
  /* 11ca4312 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca4317 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ca431c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ca431e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ca4321 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca4326 mov ecx, dword ptr [0x11cab070] */
  ECX = (r32((uint32_t)(0x11cab070)));
  /* 11ca432c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ca432f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ca4337 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca433c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ca433f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11ca4342 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca4347 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ca434a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca434e jne 0x11ca4359 */
  if (!C.zf) goto L_11ca4359;
  /* 11ca4350 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca4354 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
L_11ca4359:;
  /* 11ca4359 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca435d jne 0x11ca43c8 */
  if (!C.zf) goto L_11ca43c8;
  /* 11ca435f push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4362 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11ca4365 call esi */
  call_ind((uint32_t)(ESI), 0x11ca4367u);
  /* 11ca4367 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca436c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11ca436f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4371 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca4377 call dword ptr [0x11ca7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7060))), 0x11ca437du);
  /* 11ca437d mov eax, dword ptr [0x11cab07c] */
  EAX = (r32((uint32_t)(0x11cab07c)));
  /* 11ca4382 mov edx, dword ptr [0x11cab080] */
  EDX = (r32((uint32_t)(0x11cab080)));
  /* 11ca4388 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca438b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca438e mov ecx, eax */
  ECX = (EAX);
  /* 11ca4390 mov eax, dword ptr [0x11cab078] */
  EAX = (r32((uint32_t)(0x11cab078)));
  /* 11ca4395 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4397 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11ca439b push ecx */
  push32((uint32_t)(ECX));
  /* 11ca439c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11ca439f push ecx */
  push32((uint32_t)(ECX));
  /* 11ca43a0 push eax */
  push32((uint32_t)(EAX));
  /* 11ca43a1 call 0x11ca5cf0 */
  push32(0x11ca43a6u); f_11ca5cf0();
  /* 11ca43a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca43a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca43ac dec dword ptr [0x11cab07c] */
  { uint32_t _r=(r32((uint32_t)(0x11cab07c)))-1; w32((uint32_t)(0x11cab07c), (_r)); fl_dec(_r,32); }
  /* 11ca43b2 cmp eax, dword ptr [0x11cab078] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cab078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca43b8 jbe 0x11ca43be */
  if ((C.cf||C.zf)) goto L_11ca43be;
  /* 11ca43ba sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11ca43be:;
  /* 11ca43be mov eax, dword ptr [0x11cab080] */
  EAX = (r32((uint32_t)(0x11cab080)));
  /* 11ca43c3 mov dword ptr [0x11cab074], eax */
  w32((uint32_t)(0x11cab074), (EAX));
L_11ca43c8:;
  /* 11ca43c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca43cb mov dword ptr [0x11cab070], edi */
  w32((uint32_t)(0x11cab070), (EDI));
  /* 11ca43d1 mov dword ptr [0x11cab078], eax */
  w32((uint32_t)(0x11cab078), (EAX));
L_11ca43d6:;
  /* 11ca43d6 pop edi */
  EDI = (pop32());
  /* 11ca43d7 pop esi */
  ESI = (pop32());
  /* 11ca43d8 pop ebx */
  EBX = (pop32());
  /* 11ca43d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca43da ret  */
  ESPCHK(0x11ca40b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100043db @ 0x11ca43db (777 bytes, 275 insns) */
void f_11ca43db(void) {
  FTRACE(0x11ca43dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca43db push ebp */
  push32((uint32_t)(EBP));
  /* 11ca43dc mov ebp, esp */
  EBP = (ESP);
  /* 11ca43de sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca43e1 mov eax, dword ptr [0x11cab07c] */
  EAX = (r32((uint32_t)(0x11cab07c)));
  /* 11ca43e6 mov edx, dword ptr [0x11cab080] */
  EDX = (r32((uint32_t)(0x11cab080)));
  /* 11ca43ec push ebx */
  push32((uint32_t)(EBX));
  /* 11ca43ed push esi */
  push32((uint32_t)(ESI));
  /* 11ca43ee lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca43f1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca43f2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11ca43f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca43f8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca43fb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11ca43fe and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4401 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ca4404 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ca4407 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca4408 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca440b jge 0x11ca441b */
  if ((C.sf==C.of)) goto L_11ca441b;
  /* 11ca440d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11ca4410 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ca4412 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ca4416 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11ca4419 jmp 0x11ca442b */
  goto L_11ca442b;
L_11ca441b:;
  /* 11ca441b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca441e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca4421 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ca4423 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ca4425 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11ca4428 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ca442b:;
  /* 11ca442b mov eax, dword ptr [0x11cab074] */
  EAX = (r32((uint32_t)(0x11cab074)));
  /* 11ca4430 mov ebx, eax */
  EBX = (EAX);
  /* 11ca4432 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4434 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca4437 jae 0x11ca4452 */
  if (!C.cf) goto L_11ca4452;
L_11ca4439:;
  /* 11ca4439 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca443c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11ca443e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4441 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca4443 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4445 jne 0x11ca4452 */
  if (!C.zf) goto L_11ca4452;
  /* 11ca4447 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca444a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca444d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca4450 jb 0x11ca4439 */
  if (C.cf) goto L_11ca4439;
L_11ca4452:;
  /* 11ca4452 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4455 jne 0x11ca44d0 */
  if (!C.zf) goto L_11ca44d0;
  /* 11ca4457 mov ebx, edx */
  EBX = (EDX);
L_11ca4459:;
  /* 11ca4459 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca445b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca445e jae 0x11ca4475 */
  if (!C.cf) goto L_11ca4475;
  /* 11ca4460 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca4463 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11ca4465 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4468 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca446a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ca446c jne 0x11ca4473 */
  if (!C.zf) goto L_11ca4473;
  /* 11ca446e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4471 jmp 0x11ca4459 */
  goto L_11ca4459;
L_11ca4473:;
  /* 11ca4473 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca4475:;
  /* 11ca4475 jne 0x11ca44d0 */
  if (!C.zf) goto L_11ca44d0;
L_11ca4477:;
  /* 11ca4477 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca447a jae 0x11ca448d */
  if (!C.cf) goto L_11ca448d;
  /* 11ca447c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4480 jne 0x11ca448a */
  if (!C.zf) goto L_11ca448a;
  /* 11ca4482 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4485 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca4488 jmp 0x11ca4477 */
  goto L_11ca4477;
L_11ca448a:;
  /* 11ca448a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca448d:;
  /* 11ca448d jne 0x11ca44b5 */
  if (!C.zf) goto L_11ca44b5;
  /* 11ca448f mov ebx, edx */
  EBX = (EDX);
L_11ca4491:;
  /* 11ca4491 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4493 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca4496 jae 0x11ca44a5 */
  if (!C.cf) goto L_11ca44a5;
  /* 11ca4498 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca449c jne 0x11ca44a3 */
  if (!C.zf) goto L_11ca44a3;
  /* 11ca449e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca44a1 jmp 0x11ca4491 */
  goto L_11ca4491;
L_11ca44a3:;
  /* 11ca44a3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca44a5:;
  /* 11ca44a5 jne 0x11ca44b5 */
  if (!C.zf) goto L_11ca44b5;
  /* 11ca44a7 call 0x11ca46e4 */
  push32(0x11ca44acu); f_11ca46e4();
  /* 11ca44ac mov ebx, eax */
  EBX = (EAX);
  /* 11ca44ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca44b0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca44b3 je 0x11ca44c9 */
  if (C.zf) goto L_11ca44c9;
L_11ca44b5:;
  /* 11ca44b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca44b6 call 0x11ca4795 */
  push32(0x11ca44bbu); f_11ca4795();
  /* 11ca44bb pop ecx */
  ECX = (pop32());
  /* 11ca44bc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ca44bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ca44c1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ca44c4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca44c7 jne 0x11ca44d0 */
  if (!C.zf) goto L_11ca44d0;
L_11ca44c9:;
  /* 11ca44c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca44cb jmp 0x11ca46df */
  goto L_11ca46df;
L_11ca44d0:;
  /* 11ca44d0 mov dword ptr [0x11cab074], ebx */
  w32((uint32_t)(0x11cab074), (EBX));
  /* 11ca44d6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ca44d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ca44db cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca44de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ca44e1 je 0x11ca44f7 */
  if (C.zf) goto L_11ca44f7;
  /* 11ca44e3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11ca44ea mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11ca44ee and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ca44f1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca44f3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ca44f5 jne 0x11ca452e */
  if (!C.zf) goto L_11ca452e;
L_11ca44f7:;
  /* 11ca44f7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11ca44fd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11ca4500 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ca4503 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11ca4506 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca450a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11ca450d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11ca450f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca4512 jne 0x11ca452b */
  if (!C.zf) goto L_11ca452b;
L_11ca4514:;
  /* 11ca4514 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11ca451a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ca451d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ca4520 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4523 mov edi, esi */
  EDI = (ESI);
  /* 11ca4525 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11ca4527 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11ca4529 je 0x11ca4514 */
  if (C.zf) goto L_11ca4514;
L_11ca452b:;
  /* 11ca452b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11ca452e:;
  /* 11ca452e mov ecx, edx */
  ECX = (EDX);
  /* 11ca4530 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca4532 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca4538 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ca453f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ca4542 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11ca4546 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4548 jne 0x11ca4557 */
  if (!C.zf) goto L_11ca4557;
  /* 11ca454a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11ca4551 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ca4553 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ca4556 pop edi */
  EDI = (pop32());
L_11ca4557:;
  /* 11ca4557 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca4559 jl 0x11ca4560 */
  if ((C.sf!=C.of)) goto L_11ca4560;
  /* 11ca455b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ca455d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca455e jmp 0x11ca4557 */
  goto L_11ca4557;
L_11ca4560:;
  /* 11ca4560 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca4563 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11ca4567 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ca4569 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca456c mov esi, ecx */
  ESI = (ECX);
  /* 11ca456e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ca4571 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ca4574 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca4575 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4578 jle 0x11ca457d */
  if ((C.zf||C.sf!=C.of)) goto L_11ca457d;
  /* 11ca457a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca457c pop esi */
  ESI = (pop32());
L_11ca457d:;
  /* 11ca457d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca457f je 0x11ca4692 */
  if (C.zf) goto L_11ca4692;
  /* 11ca4585 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca4588 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca458b jne 0x11ca45ee */
  if (!C.zf) goto L_11ca45ee;
  /* 11ca458d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4590 jge 0x11ca45bd */
  if ((C.sf==C.of)) goto L_11ca45bd;
  /* 11ca4592 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4597 mov ecx, edi */
  ECX = (EDI);
  /* 11ca4599 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca459b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca459e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11ca45a2 not ebx */
  EBX = (~(EBX));
  /* 11ca45a4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11ca45a7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11ca45ab mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11ca45af dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11ca45b1 jne 0x11ca45eb */
  if (!C.zf) goto L_11ca45eb;
  /* 11ca45b3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca45b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ca45b9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11ca45bb jmp 0x11ca45ee */
  goto L_11ca45ee;
L_11ca45bd:;
  /* 11ca45bd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ca45c0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca45c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca45c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca45ca lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11ca45ce lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11ca45d5 not ebx */
  EBX = (~(EBX));
  /* 11ca45d7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca45d9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11ca45db mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11ca45de jne 0x11ca45eb */
  if (!C.zf) goto L_11ca45eb;
  /* 11ca45e0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca45e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ca45e6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca45e9 jmp 0x11ca45ee */
  goto L_11ca45ee;
L_11ca45eb:;
  /* 11ca45eb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ca45ee:;
  /* 11ca45ee mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ca45f1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca45f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca45f8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11ca45fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca45fe mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11ca4601 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11ca4604 je 0x11ca469e */
  if (C.zf) goto L_11ca469e;
  /* 11ca460a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca460d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11ca4611 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11ca4614 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11ca4617 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ca461a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ca461d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca4620 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ca4623 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ca4626 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4629 jne 0x11ca468f */
  if (!C.zf) goto L_11ca468f;
  /* 11ca462b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11ca462f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4632 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11ca4635 jge 0x11ca4660 */
  if ((C.sf==C.of)) goto L_11ca4660;
  /* 11ca4637 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca4639 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca463d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11ca4641 jne 0x11ca464e */
  if (!C.zf) goto L_11ca464e;
  /* 11ca4643 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ca4648 mov ecx, esi */
  ECX = (ESI);
  /* 11ca464a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ca464c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11ca464e:;
  /* 11ca464e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ca4653 mov ecx, esi */
  ECX = (ESI);
  /* 11ca4655 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ca4657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca465a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca465e jmp 0x11ca468f */
  goto L_11ca468f;
L_11ca4660:;
  /* 11ca4660 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca4662 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca4666 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11ca466a jne 0x11ca4679 */
  if (!C.zf) goto L_11ca4679;
  /* 11ca466c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ca466f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ca4674 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ca4676 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4679:;
  /* 11ca4679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca467c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11ca4683 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ca4686 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11ca468b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ca468d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11ca468f:;
  /* 11ca468f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11ca4692:;
  /* 11ca4692 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca4694 je 0x11ca46a1 */
  if (C.zf) goto L_11ca46a1;
  /* 11ca4696 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ca4698 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11ca469c jmp 0x11ca46a1 */
  goto L_11ca46a1;
L_11ca469e:;
  /* 11ca469e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11ca46a1:;
  /* 11ca46a1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca46a4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca46a6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11ca46a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ca46ab mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11ca46af mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca46b2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ca46b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca46b6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11ca46b9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ca46bb jne 0x11ca46d7 */
  if (!C.zf) goto L_11ca46d7;
  /* 11ca46bd cmp ebx, dword ptr [0x11cab078] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cab078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca46c3 jne 0x11ca46d7 */
  if (!C.zf) goto L_11ca46d7;
  /* 11ca46c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca46c8 cmp ecx, dword ptr [0x11cab070] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cab070))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca46ce jne 0x11ca46d7 */
  if (!C.zf) goto L_11ca46d7;
  /* 11ca46d0 and dword ptr [0x11cab078], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cab078)))&(0x0u); w32((uint32_t)(0x11cab078), (_r)); fl_logic(_r,32); }
L_11ca46d7:;
  /* 11ca46d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca46da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ca46dc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11ca46df:;
  /* 11ca46df pop edi */
  EDI = (pop32());
  /* 11ca46e0 pop esi */
  ESI = (pop32());
  /* 11ca46e1 pop ebx */
  EBX = (pop32());
  /* 11ca46e2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca46e3 ret  */
  ESPCHK(0x11ca43dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100046e4 @ 0x11ca46e4 (177 bytes, 53 insns) */
void f_11ca46e4(void) {
  FTRACE(0x11ca46e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca46e4 mov eax, dword ptr [0x11cab07c] */
  EAX = (r32((uint32_t)(0x11cab07c)));
  /* 11ca46e9 mov ecx, dword ptr [0x11cab06c] */
  ECX = (r32((uint32_t)(0x11cab06c)));
  /* 11ca46ef push esi */
  push32((uint32_t)(ESI));
  /* 11ca46f0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca46f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca46f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca46f5 jne 0x11ca4727 */
  if (!C.zf) goto L_11ca4727;
  /* 11ca46f7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11ca46fb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca46fe push eax */
  push32((uint32_t)(EAX));
  /* 11ca46ff push dword ptr [0x11cab080] */
  push32((uint32_t)(r32((uint32_t)(0x11cab080))));
  /* 11ca4705 push edi */
  push32((uint32_t)(EDI));
  /* 11ca4706 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca470c call dword ptr [0x11ca703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca703c))), 0x11ca4712u);
  /* 11ca4712 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4714 je 0x11ca4777 */
  if (C.zf) goto L_11ca4777;
  /* 11ca4716 add dword ptr [0x11cab06c], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11cab06c))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11cab06c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca471d mov dword ptr [0x11cab080], eax */
  w32((uint32_t)(0x11cab080), (EAX));
  /* 11ca4722 mov eax, dword ptr [0x11cab07c] */
  EAX = (r32((uint32_t)(0x11cab07c)));
L_11ca4727:;
  /* 11ca4727 mov ecx, dword ptr [0x11cab080] */
  ECX = (r32((uint32_t)(0x11cab080)));
  /* 11ca472d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ca4732 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca4734 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ca4737 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca473d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11ca4740 call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca4746u);
  /* 11ca4746 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4748 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11ca474b je 0x11ca4777 */
  if (C.zf) goto L_11ca4777;
  /* 11ca474d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca474f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ca4754 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ca4759 push edi */
  push32((uint32_t)(EDI));
  /* 11ca475a call dword ptr [0x11ca7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7040))), 0x11ca4760u);
  /* 11ca4760 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4762 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11ca4765 jne 0x11ca477b */
  if (!C.zf) goto L_11ca477b;
  /* 11ca4767 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11ca476a push edi */
  push32((uint32_t)(EDI));
  /* 11ca476b push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca4771 call dword ptr [0x11ca7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7060))), 0x11ca4777u);
L_11ca4777:;
  /* 11ca4777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca4779 jmp 0x11ca4792 */
  goto L_11ca4792;
L_11ca477b:;
  /* 11ca477b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ca477f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ca4781 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11ca4784 inc dword ptr [0x11cab07c] */
  { uint32_t _r=(r32((uint32_t)(0x11cab07c)))+1; w32((uint32_t)(0x11cab07c), (_r)); fl_inc(_r,32); }
  /* 11ca478a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ca478d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ca4790 mov eax, esi */
  EAX = (ESI);
L_11ca4792:;
  /* 11ca4792 pop edi */
  EDI = (pop32());
  /* 11ca4793 pop esi */
  ESI = (pop32());
  /* 11ca4794 ret  */
  ESPCHK(0x11ca46e4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004795 @ 0x11ca4795 (251 bytes, 85 insns) */
void f_11ca4795(void) {
  FTRACE(0x11ca4795u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4795 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca4796 mov ebp, esp */
  EBP = (ESP);
  /* 11ca4798 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca479c push ebx */
  push32((uint32_t)(EBX));
  /* 11ca479d push esi */
  push32((uint32_t)(ESI));
  /* 11ca479e push edi */
  push32((uint32_t)(EDI));
  /* 11ca479f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11ca47a2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ca47a5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ca47a7:;
  /* 11ca47a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca47a9 jl 0x11ca47b0 */
  if ((C.sf!=C.of)) goto L_11ca47b0;
  /* 11ca47ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ca47ad inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca47ae jmp 0x11ca47a7 */
  goto L_11ca47a7;
L_11ca47b0:;
  /* 11ca47b0 mov eax, ebx */
  EAX = (EBX);
  /* 11ca47b2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca47b4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca47ba pop edx */
  EDX = (pop32());
  /* 11ca47bb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11ca47c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ca47c5:;
  /* 11ca47c5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11ca47c8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11ca47cb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca47ce dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca47cf jne 0x11ca47c5 */
  if (!C.zf) goto L_11ca47c5;
  /* 11ca47d1 mov edi, ebx */
  EDI = (EBX);
  /* 11ca47d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca47d5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11ca47d8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca47db push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ca47e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ca47e5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca47e6 call dword ptr [0x11ca7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7040))), 0x11ca47ecu);
  /* 11ca47ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca47ee jne 0x11ca47f8 */
  if (!C.zf) goto L_11ca47f8;
  /* 11ca47f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca47f3 jmp 0x11ca488b */
  goto L_11ca488b;
L_11ca47f8:;
  /* 11ca47f8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11ca47fe cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4800 ja 0x11ca483e */
  if ((!C.cf&&!C.zf)) goto L_11ca483e;
  /* 11ca4802 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11ca4805:;
  /* 11ca4805 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ca4809 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11ca4810 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11ca4816 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11ca481d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ca481f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11ca4825 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ca4828 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11ca4832 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4837 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11ca483a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca483c jbe 0x11ca4805 */
  if ((C.cf||C.zf)) goto L_11ca4805;
L_11ca483e:;
  /* 11ca483e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4841 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11ca4844 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca484b pop edi */
  EDI = (pop32());
  /* 11ca484c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ca484f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ca4852 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11ca4855 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ca4858 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ca485b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca4860 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11ca4867 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11ca486a mov cl, al */
  CL = (AL);
  /* 11ca486c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca486e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca4870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4873 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11ca4876 jne 0x11ca487b */
  if (!C.zf) goto L_11ca487b;
  /* 11ca4878 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca487b:;
  /* 11ca487b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ca4880 mov ecx, ebx */
  ECX = (EBX);
  /* 11ca4882 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ca4884 not edx */
  EDX = (~(EDX));
  /* 11ca4886 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ca4889 mov eax, ebx */
  EAX = (EBX);
L_11ca488b:;
  /* 11ca488b pop edi */
  EDI = (pop32());
  /* 11ca488c pop esi */
  ESI = (pop32());
  /* 11ca488d pop ebx */
  EBX = (pop32());
  /* 11ca488e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca488f ret  */
  ESPCHK(0x11ca4795u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x11ca4890 (758 bytes, 259 insns) */
void f_11ca4890(void) {
  FTRACE(0x11ca4890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4890 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca4891 mov ebp, esp */
  EBP = (ESP);
  /* 11ca4893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca489c push ebx */
  push32((uint32_t)(EBX));
  /* 11ca489d push esi */
  push32((uint32_t)(ESI));
  /* 11ca489e push edi */
  push32((uint32_t)(EDI));
  /* 11ca489f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca48a2 mov edx, edi */
  EDX = (EDI);
  /* 11ca48a4 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11ca48a7 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca48aa mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ca48ad and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca48b0 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ca48b3 mov ecx, edx */
  ECX = (EDX);
  /* 11ca48b5 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca48bb lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ca48c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ca48c5 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11ca48c8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca48c9 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca48cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ca48ce mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11ca48d2 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ca48d6 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11ca48d9 jle 0x11ca4a3e */
  if ((C.zf||C.sf!=C.of)) goto L_11ca4a3e;
  /* 11ca48df test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11ca48e2 jne 0x11ca4a37 */
  if (!C.zf) goto L_11ca4a37;
  /* 11ca48e8 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca48ea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca48ec jg 0x11ca4a37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca4a37;
  /* 11ca48f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca48f5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ca48f8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca48f9 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca48fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ca48ff jbe 0x11ca4907 */
  if ((C.cf||C.zf)) goto L_11ca4907;
  /* 11ca4901 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4903 pop ecx */
  ECX = (pop32());
  /* 11ca4904 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ca4907:;
  /* 11ca4907 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca490a cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca490d jne 0x11ca4957 */
  if (!C.zf) goto L_11ca4957;
  /* 11ca490f cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4912 jae 0x11ca4933 */
  if (!C.cf) goto L_11ca4933;
  /* 11ca4914 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4919 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca491b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca491e lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ca4922 not ebx */
  EBX = (~(EBX));
  /* 11ca4924 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca4928 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ca492a jne 0x11ca4957 */
  if (!C.zf) goto L_11ca4957;
  /* 11ca492c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca492f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca4931 jmp 0x11ca4957 */
  goto L_11ca4957;
L_11ca4933:;
  /* 11ca4933 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4936 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca493b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca493d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ca4940 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ca4944 not ebx */
  EBX = (~(EBX));
  /* 11ca4946 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ca494d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ca494f jne 0x11ca4957 */
  if (!C.zf) goto L_11ca4957;
  /* 11ca4951 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4954 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4957:;
  /* 11ca4957 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11ca495a mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca495d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11ca4960 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca4963 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11ca4966 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11ca4969 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca496c sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca496e add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca4971 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4975 jle 0x11ca4a25 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca4a25;
  /* 11ca497b mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca497e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca4981 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11ca4984 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ca4985 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ca4989 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca498c jbe 0x11ca4991 */
  if ((C.cf||C.zf)) goto L_11ca4991;
  /* 11ca498e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4990 pop edi */
  EDI = (pop32());
L_11ca4991:;
  /* 11ca4991 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca4994 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11ca4997 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11ca499a mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca499d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11ca49a0 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca49a3 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11ca49a6 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11ca49a9 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca49ac mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ca49af mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca49b2 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca49b5 jne 0x11ca4a13 */
  if (!C.zf) goto L_11ca4a13;
  /* 11ca49b7 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11ca49bb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca49be mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11ca49c1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca49c3 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11ca49c7 jae 0x11ca49ea */
  if (!C.cf) goto L_11ca49ea;
  /* 11ca49c9 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca49cd jne 0x11ca49dd */
  if (!C.zf) goto L_11ca49dd;
  /* 11ca49cf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca49d4 mov ecx, edi */
  ECX = (EDI);
  /* 11ca49d6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca49d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca49db or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11ca49dd:;
  /* 11ca49dd lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11ca49e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ca49e6 mov ecx, edi */
  ECX = (EDI);
  /* 11ca49e8 jmp 0x11ca4a0f */
  goto L_11ca4a0f;
L_11ca49ea:;
  /* 11ca49ea cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca49ee jne 0x11ca4a00 */
  if (!C.zf) goto L_11ca4a00;
  /* 11ca49f0 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ca49f3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca49f8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca49fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca49fd or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4a00:;
  /* 11ca4a00 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11ca4a07 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ca4a0a mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11ca4a0f:;
  /* 11ca4a0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ca4a11 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11ca4a13:;
  /* 11ca4a13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca4a16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4a19 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11ca4a1d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ca4a1f mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11ca4a23 jmp 0x11ca4a28 */
  goto L_11ca4a28;
L_11ca4a25:;
  /* 11ca4a25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11ca4a28:;
  /* 11ca4a28 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11ca4a2b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11ca4a2e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11ca4a32 jmp 0x11ca4b7e */
  goto L_11ca4b7e;
L_11ca4a37:;
  /* 11ca4a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca4a39 jmp 0x11ca4b81 */
  goto L_11ca4b81;
L_11ca4a3e:;
  /* 11ca4a3e jge 0x11ca4b7e */
  if ((C.sf==C.of)) goto L_11ca4b7e;
  /* 11ca4a44 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca4a47 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca4a4a lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11ca4a4d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11ca4a50 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11ca4a54 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca4a57 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11ca4a5a sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ca4a5d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca4a5e mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11ca4a61 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4a64 jbe 0x11ca4a69 */
  if ((C.cf||C.zf)) goto L_11ca4a69;
  /* 11ca4a66 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4a68 pop esi */
  ESI = (pop32());
L_11ca4a69:;
  /* 11ca4a69 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11ca4a6d jne 0x11ca4af8 */
  if (!C.zf) goto L_11ca4af8;
  /* 11ca4a73 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4a76 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ca4a79 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca4a7a cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4a7d jbe 0x11ca4a82 */
  if ((C.cf||C.zf)) goto L_11ca4a82;
  /* 11ca4a7f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4a81 pop esi */
  ESI = (pop32());
L_11ca4a82:;
  /* 11ca4a82 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca4a85 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4a88 jne 0x11ca4ad1 */
  if (!C.zf) goto L_11ca4ad1;
  /* 11ca4a8a cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4a8d jae 0x11ca4aad */
  if (!C.cf) goto L_11ca4aad;
  /* 11ca4a8f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4a94 mov ecx, esi */
  ECX = (ESI);
  /* 11ca4a96 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca4a98 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11ca4a9c not ebx */
  EBX = (~(EBX));
  /* 11ca4a9e and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ca4aa2 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11ca4aa4 jne 0x11ca4ace */
  if (!C.zf) goto L_11ca4ace;
  /* 11ca4aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4aa9 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ca4aab jmp 0x11ca4ace */
  goto L_11ca4ace;
L_11ca4aad:;
  /* 11ca4aad lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ca4ab0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ca4ab5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ca4ab7 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11ca4abb not ebx */
  EBX = (~(EBX));
  /* 11ca4abd and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ca4ac4 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ca4ac6 jne 0x11ca4ace */
  if (!C.zf) goto L_11ca4ace;
  /* 11ca4ac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4acb and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4ace:;
  /* 11ca4ace mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11ca4ad1:;
  /* 11ca4ad1 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11ca4ad4 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca4ad7 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11ca4ada mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca4add mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11ca4ae0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11ca4ae3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca4ae6 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4ae9 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11ca4aec sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ca4aef dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca4af0 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4af3 jbe 0x11ca4af8 */
  if ((C.cf||C.zf)) goto L_11ca4af8;
  /* 11ca4af5 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ca4af7 pop esi */
  ESI = (pop32());
L_11ca4af8:;
  /* 11ca4af8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ca4afb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11ca4aff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11ca4b02 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11ca4b05 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ca4b08 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11ca4b0b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca4b0e mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11ca4b11 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ca4b14 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4b17 jne 0x11ca4b75 */
  if (!C.zf) goto L_11ca4b75;
  /* 11ca4b19 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11ca4b1d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4b20 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11ca4b23 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ca4b25 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11ca4b29 jae 0x11ca4b4c */
  if (!C.cf) goto L_11ca4b4c;
  /* 11ca4b2b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca4b2f jne 0x11ca4b3f */
  if (!C.zf) goto L_11ca4b3f;
  /* 11ca4b31 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ca4b36 mov ecx, esi */
  ECX = (ESI);
  /* 11ca4b38 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ca4b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4b3d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11ca4b3f:;
  /* 11ca4b3f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11ca4b43 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ca4b48 mov ecx, esi */
  ECX = (ESI);
  /* 11ca4b4a jmp 0x11ca4b71 */
  goto L_11ca4b71;
L_11ca4b4c:;
  /* 11ca4b4c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca4b50 jne 0x11ca4b62 */
  if (!C.zf) goto L_11ca4b62;
  /* 11ca4b52 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ca4b55 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ca4b5a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ca4b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4b5f or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ca4b62:;
  /* 11ca4b62 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11ca4b69 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ca4b6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11ca4b71:;
  /* 11ca4b71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ca4b73 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11ca4b75:;
  /* 11ca4b75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca4b78 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11ca4b7a mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11ca4b7e:;
  /* 11ca4b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca4b80 pop eax */
  EAX = (pop32());
L_11ca4b81:;
  /* 11ca4b81 pop edi */
  EDI = (pop32());
  /* 11ca4b82 pop esi */
  ESI = (pop32());
  /* 11ca4b83 pop ebx */
  EBX = (pop32());
  /* 11ca4b84 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca4b85 ret  */
  ESPCHK(0x11ca4890u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b86 @ 0x11ca4b86 (324 bytes, 102 insns) */
void f_11ca4b86(void) {
  FTRACE(0x11ca4b86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4b86 cmp dword ptr [0x11ca8650], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ca8650))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4b8d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4b8e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca4b8f push esi */
  push32((uint32_t)(ESI));
  /* 11ca4b90 push edi */
  push32((uint32_t)(EDI));
  /* 11ca4b91 jne 0x11ca4b9a */
  if (!C.zf) goto L_11ca4b9a;
  /* 11ca4b93 mov esi, 0x11ca8640 */
  ESI = (0x11ca8640u);
  /* 11ca4b98 jmp 0x11ca4bb7 */
  goto L_11ca4bb7;
L_11ca4b9a:;
  /* 11ca4b9a push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11ca4b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4ba1 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca4ba7 call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca4badu);
  /* 11ca4bad mov esi, eax */
  ESI = (EAX);
  /* 11ca4baf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca4bb1 je 0x11ca4cc3 */
  if (C.zf) goto L_11ca4cc3;
L_11ca4bb7:;
  /* 11ca4bb7 mov ebp, dword ptr [0x11ca7040] */
  EBP = (r32((uint32_t)(0x11ca7040)));
  /* 11ca4bbd push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca4bbf push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ca4bc4 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11ca4bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4bcb call ebp */
  call_ind((uint32_t)(EBP), 0x11ca4bcdu);
  /* 11ca4bcd mov edi, eax */
  EDI = (EAX);
  /* 11ca4bcf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca4bd1 je 0x11ca4cac */
  if (C.zf) goto L_11ca4cac;
  /* 11ca4bd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca4bd9 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11ca4bde push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ca4be3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4be4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca4be5 call ebp */
  call_ind((uint32_t)(EBP), 0x11ca4be7u);
  /* 11ca4be7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4be9 je 0x11ca4c9e */
  if (C.zf) goto L_11ca4c9e;
  /* 11ca4bef mov eax, 0x11ca8640 */
  EAX = (0x11ca8640u);
  /* 11ca4bf4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4bf6 jne 0x11ca4c16 */
  if (!C.zf) goto L_11ca4c16;
  /* 11ca4bf8 cmp dword ptr [0x11ca8640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ca8640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4bff jne 0x11ca4c06 */
  if (!C.zf) goto L_11ca4c06;
  /* 11ca4c01 mov dword ptr [0x11ca8640], eax */
  w32((uint32_t)(0x11ca8640), (EAX));
L_11ca4c06:;
  /* 11ca4c06 cmp dword ptr [0x11ca8644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ca8644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4c0d jne 0x11ca4c2b */
  if (!C.zf) goto L_11ca4c2b;
  /* 11ca4c0f mov dword ptr [0x11ca8644], eax */
  w32((uint32_t)(0x11ca8644), (EAX));
  /* 11ca4c14 jmp 0x11ca4c2b */
  goto L_11ca4c2b;
L_11ca4c16:;
  /* 11ca4c16 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca4c18 mov eax, dword ptr [0x11ca8644] */
  EAX = (r32((uint32_t)(0x11ca8644)));
  /* 11ca4c1d mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11ca4c20 mov dword ptr [0x11ca8644], esi */
  w32((uint32_t)(0x11ca8644), (ESI));
  /* 11ca4c26 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4c29 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11ca4c2b:;
  /* 11ca4c2b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11ca4c31 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11ca4c37 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11ca4c3a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11ca4c3d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11ca4c40 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11ca4c43 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11ca4c46 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11ca4c48 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11ca4c4d:;
  /* 11ca4c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca4c4f cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4c52 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11ca4c55 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca4c56 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca4c58 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca4c59 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11ca4c5a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ca4c5c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ca4c5f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4c62 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4c68 jl 0x11ca4c4d */
  if ((C.sf!=C.of)) goto L_11ca4c4d;
  /* 11ca4c6a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4c6d push edi */
  push32((uint32_t)(EDI));
  /* 11ca4c6e call 0x11ca5400 */
  push32(0x11ca4c73u); f_11ca5400();
  /* 11ca4c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca4c76:;
  /* 11ca4c76 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ca4c79 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4c7b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4c7d jae 0x11ca4c9a */
  if (!C.cf) goto L_11ca4c9a;
  /* 11ca4c7f or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11ca4c86 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11ca4c89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11ca4c8b mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11ca4c92 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4c98 jmp 0x11ca4c76 */
  goto L_11ca4c76;
L_11ca4c9a:;
  /* 11ca4c9a mov eax, esi */
  EAX = (ESI);
  /* 11ca4c9c jmp 0x11ca4cc5 */
  goto L_11ca4cc5;
L_11ca4c9e:;
  /* 11ca4c9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ca4ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4ca5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca4ca6 call dword ptr [0x11ca7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7064))), 0x11ca4cacu);
L_11ca4cac:;
  /* 11ca4cac cmp esi, 0x11ca8640 */
  { uint32_t _a=(ESI),_b=(0x11ca8640u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4cb2 je 0x11ca4cc3 */
  if (C.zf) goto L_11ca4cc3;
  /* 11ca4cb4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca4cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4cb7 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca4cbd call dword ptr [0x11ca7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7060))), 0x11ca4cc3u);
L_11ca4cc3:;
  /* 11ca4cc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca4cc5:;
  /* 11ca4cc5 pop edi */
  EDI = (pop32());
  /* 11ca4cc6 pop esi */
  ESI = (pop32());
  /* 11ca4cc7 pop ebp */
  EBP = (pop32());
  /* 11ca4cc8 pop ebx */
  EBX = (pop32());
  /* 11ca4cc9 ret  */
  ESPCHK(0x11ca4b86u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cca @ 0x11ca4cca (86 bytes, 27 insns) */
void f_11ca4cca(void) {
  FTRACE(0x11ca4ccau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4cca push esi */
  push32((uint32_t)(ESI));
  /* 11ca4ccb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca4ccf push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ca4cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4cd6 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11ca4cd9 call dword ptr [0x11ca7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7064))), 0x11ca4cdfu);
  /* 11ca4cdf cmp dword ptr [0x11caa660], esi */
  { uint32_t _a=(r32((uint32_t)(0x11caa660))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4ce5 jne 0x11ca4cef */
  if (!C.zf) goto L_11ca4cef;
  /* 11ca4ce7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4cea mov dword ptr [0x11caa660], eax */
  w32((uint32_t)(0x11caa660), (EAX));
L_11ca4cef:;
  /* 11ca4cef cmp esi, 0x11ca8640 */
  { uint32_t _a=(ESI),_b=(0x11ca8640u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4cf5 je 0x11ca4d17 */
  if (C.zf) goto L_11ca4d17;
  /* 11ca4cf7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4cfa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ca4cfc push esi */
  push32((uint32_t)(ESI));
  /* 11ca4cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4cff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ca4d01 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca4d03 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4d06 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ca4d09 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca4d0f call dword ptr [0x11ca7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7060))), 0x11ca4d15u);
  /* 11ca4d15 pop esi */
  ESI = (pop32());
  /* 11ca4d16 ret  */
  ESPCHK(0x11ca4ccau, _esp0);
  ESP += 4; return;
L_11ca4d17:;
  /* 11ca4d17 or dword ptr [0x11ca8650], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11ca8650)))|(0xffffffffu); w32((uint32_t)(0x11ca8650), (_r)); fl_logic(_r,32); }
  /* 11ca4d1e pop esi */
  ESI = (pop32());
  /* 11ca4d1f ret  */
  ESPCHK(0x11ca4ccau, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x11ca4d20 (194 bytes, 66 insns) */
void f_11ca4d20(void) {
  FTRACE(0x11ca4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca4d21 mov ebp, esp */
  EBP = (ESP);
  /* 11ca4d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4d24 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4d25 push esi */
  push32((uint32_t)(ESI));
  /* 11ca4d26 mov esi, dword ptr [0x11ca8644] */
  ESI = (r32((uint32_t)(0x11ca8644)));
  /* 11ca4d2c push edi */
  push32((uint32_t)(EDI));
L_11ca4d2d:;
  /* 11ca4d2d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4d31 je 0x11ca4dcb */
  if (C.zf) goto L_11ca4dcb;
  /* 11ca4d37 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca4d3b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11ca4d41 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11ca4d46:;
  /* 11ca4d46 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4d4c jne 0x11ca4d87 */
  if (!C.zf) goto L_11ca4d87;
  /* 11ca4d4e mov eax, ebx */
  EAX = (EBX);
  /* 11ca4d50 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ca4d55 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4d58 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ca4d5d push eax */
  push32((uint32_t)(EAX));
  /* 11ca4d5e call dword ptr [0x11ca7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7064))), 0x11ca4d64u);
  /* 11ca4d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4d66 je 0x11ca4d87 */
  if (C.zf) goto L_11ca4d87;
  /* 11ca4d68 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11ca4d6b dec dword ptr [0x11caaf98] */
  { uint32_t _r=(r32((uint32_t)(0x11caaf98)))-1; w32((uint32_t)(0x11caaf98), (_r)); fl_dec(_r,32); }
  /* 11ca4d71 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11ca4d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4d76 je 0x11ca4d7c */
  if (C.zf) goto L_11ca4d7c;
  /* 11ca4d78 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4d7a jbe 0x11ca4d7f */
  if ((C.cf||C.zf)) goto L_11ca4d7f;
L_11ca4d7c:;
  /* 11ca4d7c mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11ca4d7f:;
  /* 11ca4d7f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ca4d82 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11ca4d85 je 0x11ca4d94 */
  if (C.zf) goto L_11ca4d94;
L_11ca4d87:;
  /* 11ca4d87 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4d8d sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4d90 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca4d92 jge 0x11ca4d46 */
  if ((C.sf==C.of)) goto L_11ca4d46;
L_11ca4d94:;
  /* 11ca4d94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4d98 mov ecx, esi */
  ECX = (ESI);
  /* 11ca4d9a mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca4d9d je 0x11ca4dcb */
  if (C.zf) goto L_11ca4dcb;
  /* 11ca4d9f cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4da3 jne 0x11ca4dcb */
  if (!C.zf) goto L_11ca4dcb;
  /* 11ca4da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca4da7 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11ca4daa pop edx */
  EDX = (pop32());
L_11ca4dab:;
  /* 11ca4dab cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dae jne 0x11ca4dbc */
  if (!C.zf) goto L_11ca4dbc;
  /* 11ca4db0 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca4db1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4db4 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dba jl 0x11ca4dab */
  if ((C.sf!=C.of)) goto L_11ca4dab;
L_11ca4dbc:;
  /* 11ca4dbc cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dc2 jne 0x11ca4dcb */
  if (!C.zf) goto L_11ca4dcb;
  /* 11ca4dc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4dc5 call 0x11ca4cca */
  push32(0x11ca4dcau); f_11ca4cca();
  /* 11ca4dca pop ecx */
  ECX = (pop32());
L_11ca4dcb:;
  /* 11ca4dcb cmp esi, dword ptr [0x11ca8644] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11ca8644))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dd1 je 0x11ca4ddd */
  if (C.zf) goto L_11ca4ddd;
  /* 11ca4dd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dd7 jg 0x11ca4d2d */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca4d2d;
L_11ca4ddd:;
  /* 11ca4ddd pop edi */
  EDI = (pop32());
  /* 11ca4dde pop esi */
  ESI = (pop32());
  /* 11ca4ddf pop ebx */
  EBX = (pop32());
  /* 11ca4de0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca4de1 ret  */
  ESPCHK(0x11ca4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de2 @ 0x11ca4de2 (87 bytes, 34 insns) */
void f_11ca4de2(void) {
  FTRACE(0x11ca4de2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4de2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca4de6 mov edx, 0x11ca8640 */
  EDX = (0x11ca8640u);
  /* 11ca4deb push esi */
  push32((uint32_t)(ESI));
  /* 11ca4dec mov ecx, edx */
  ECX = (EDX);
L_11ca4dee:;
  /* 11ca4dee cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4df1 jbe 0x11ca4df8 */
  if ((C.cf||C.zf)) goto L_11ca4df8;
  /* 11ca4df3 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4df6 jb 0x11ca4e00 */
  if (C.cf) goto L_11ca4e00;
L_11ca4df8:;
  /* 11ca4df8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11ca4dfa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4dfc je 0x11ca4e35 */
  if (C.zf) goto L_11ca4e35;
  /* 11ca4dfe jmp 0x11ca4dee */
  goto L_11ca4dee;
L_11ca4e00:;
  /* 11ca4e00 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11ca4e02 jne 0x11ca4e35 */
  if (!C.zf) goto L_11ca4e35;
  /* 11ca4e04 mov esi, eax */
  ESI = (EAX);
  /* 11ca4e06 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11ca4e0b and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11ca4e11 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4e13 jb 0x11ca4e35 */
  if (C.cf) goto L_11ca4e35;
  /* 11ca4e15 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11ca4e19 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11ca4e1b mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca4e1f mov ecx, eax */
  ECX = (EAX);
  /* 11ca4e21 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11ca4e26 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4e28 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11ca4e2a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4e2c pop esi */
  ESI = (pop32());
  /* 11ca4e2d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca4e30 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11ca4e34 ret  */
  ESPCHK(0x11ca4de2u, _esp0);
  ESP += 4; return;
L_11ca4e35:;
  /* 11ca4e35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca4e37 pop esi */
  ESI = (pop32());
  /* 11ca4e38 ret  */
  ESPCHK(0x11ca4de2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e39 @ 0x11ca4e39 (69 bytes, 19 insns) */
void f_11ca4e39(void) {
  FTRACE(0x11ca4e39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4e39 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca4e3d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca4e41 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4e44 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11ca4e47 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11ca4e4b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ca4e4f movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11ca4e52 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca4e54 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11ca4e57 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4e5d mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11ca4e64 jne 0x11ca4e7d */
  if (!C.zf) goto L_11ca4e7d;
  /* 11ca4e66 inc dword ptr [0x11caaf98] */
  { uint32_t _r=(r32((uint32_t)(0x11caaf98)))+1; w32((uint32_t)(0x11caaf98), (_r)); fl_inc(_r,32); }
  /* 11ca4e6c cmp dword ptr [0x11caaf98], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11caaf98))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4e73 jne 0x11ca4e7d */
  if (!C.zf) goto L_11ca4e7d;
  /* 11ca4e75 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ca4e77 call 0x11ca4d20 */
  push32(0x11ca4e7cu); f_11ca4d20();
  /* 11ca4e7c pop ecx */
  ECX = (pop32());
L_11ca4e7d:;
  /* 11ca4e7d ret  */
  ESPCHK(0x11ca4e39u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e7e @ 0x11ca4e7e (520 bytes, 180 insns) */
void f_11ca4e7e(void) {
  FTRACE(0x11ca4e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca4e7e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca4e7f mov ebp, esp */
  EBP = (ESP);
  /* 11ca4e81 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4e82 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4e83 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4e84 push esi */
  push32((uint32_t)(ESI));
  /* 11ca4e85 mov esi, dword ptr [0x11caa660] */
  ESI = (r32((uint32_t)(0x11caa660)));
  /* 11ca4e8b push edi */
  push32((uint32_t)(EDI));
L_11ca4e8c:;
  /* 11ca4e8c mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ca4e8f cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4e92 je 0x11ca4f37 */
  if (C.zf) goto L_11ca4f37;
  /* 11ca4e98 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11ca4e9b lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11ca4ea1 mov eax, edi */
  EAX = (EDI);
  /* 11ca4ea3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4ea5 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4ea8 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11ca4eab shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11ca4eae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4eb0 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4eb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ca4eb5 jae 0x11ca4ef1 */
  if (!C.cf) goto L_11ca4ef1;
L_11ca4eb7:;
  /* 11ca4eb7 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11ca4eb9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca4ebc cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4ebe jl 0x11ca4eda */
  if ((C.sf!=C.of)) goto L_11ca4eda;
  /* 11ca4ec0 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4ec3 jbe 0x11ca4eda */
  if ((C.cf||C.zf)) goto L_11ca4eda;
  /* 11ca4ec5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca4ec7 push eax */
  push32((uint32_t)(EAX));
  /* 11ca4ec8 call 0x11ca5086 */
  push32(0x11ca4ecdu); f_11ca5086();
  /* 11ca4ecd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4ed2 jne 0x11ca4f49 */
  if (!C.zf) goto L_11ca4f49;
  /* 11ca4ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4ed7 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11ca4eda:;
  /* 11ca4eda add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4edd lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11ca4ee3 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4ee8 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ca4eed jb 0x11ca4eb7 */
  if (C.cf) goto L_11ca4eb7;
  /* 11ca4eef jmp 0x11ca4ef4 */
  goto L_11ca4ef4;
L_11ca4ef1:;
  /* 11ca4ef1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ca4ef4:;
  /* 11ca4ef4 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11ca4ef7 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ca4efa lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11ca4efd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ca4f00 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ca4f05 jae 0x11ca4f3a */
  if (!C.cf) goto L_11ca4f3a;
L_11ca4f07:;
  /* 11ca4f07 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11ca4f09 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f0b jl 0x11ca4f26 */
  if ((C.sf!=C.of)) goto L_11ca4f26;
  /* 11ca4f0d cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f10 jbe 0x11ca4f26 */
  if ((C.cf||C.zf)) goto L_11ca4f26;
  /* 11ca4f12 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca4f13 push eax */
  push32((uint32_t)(EAX));
  /* 11ca4f14 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11ca4f17 call 0x11ca5086 */
  push32(0x11ca4f1cu); f_11ca5086();
  /* 11ca4f1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca4f21 jne 0x11ca4f49 */
  if (!C.zf) goto L_11ca4f49;
  /* 11ca4f23 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11ca4f26:;
  /* 11ca4f26 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca4f2d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4f30 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f33 jb 0x11ca4f07 */
  if (C.cf) goto L_11ca4f07;
  /* 11ca4f35 jmp 0x11ca4f3a */
  goto L_11ca4f3a;
L_11ca4f37:;
  /* 11ca4f37 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ca4f3a:;
  /* 11ca4f3a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11ca4f3c cmp esi, dword ptr [0x11caa660] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11caa660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f42 je 0x11ca4f59 */
  if (C.zf) goto L_11ca4f59;
  /* 11ca4f44 jmp 0x11ca4e8c */
  goto L_11ca4e8c;
L_11ca4f49:;
  /* 11ca4f49 mov dword ptr [0x11caa660], esi */
  w32((uint32_t)(0x11caa660), (ESI));
  /* 11ca4f4f sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca4f51 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11ca4f54 jmp 0x11ca5081 */
  goto L_11ca5081;
L_11ca4f59:;
  /* 11ca4f59 mov eax, 0x11ca8640 */
  EAX = (0x11ca8640u);
  /* 11ca4f5e mov edi, eax */
  EDI = (EAX);
L_11ca4f60:;
  /* 11ca4f60 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f64 je 0x11ca4f6c */
  if (C.zf) goto L_11ca4f6c;
  /* 11ca4f66 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f6a jne 0x11ca4f78 */
  if (!C.zf) goto L_11ca4f78;
L_11ca4f6c:;
  /* 11ca4f6c mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11ca4f6e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f70 je 0x11ca504d */
  if (C.zf) goto L_11ca504d;
  /* 11ca4f76 jmp 0x11ca4f60 */
  goto L_11ca4f60;
L_11ca4f78:;
  /* 11ca4f78 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11ca4f7b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca4f7f mov esi, ebx */
  ESI = (EBX);
  /* 11ca4f81 mov eax, ebx */
  EAX = (EBX);
  /* 11ca4f83 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4f85 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca4f88 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11ca4f8b shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11ca4f8e add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4f91 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f94 jne 0x11ca4fa7 */
  if (!C.zf) goto L_11ca4fa7;
L_11ca4f96:;
  /* 11ca4f96 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4f9a jge 0x11ca4fa7 */
  if ((C.sf==C.of)) goto L_11ca4fa7;
  /* 11ca4f9c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4f9f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ca4fa2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4fa5 je 0x11ca4f96 */
  if (C.zf) goto L_11ca4f96;
L_11ca4fa7:;
  /* 11ca4fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4faa push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca4fac shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11ca4faf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ca4fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11ca4fb5 push esi */
  push32((uint32_t)(ESI));
  /* 11ca4fb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ca4fb9 call dword ptr [0x11ca7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7040))), 0x11ca4fbfu);
  /* 11ca4fbf cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca4fc1 jne 0x11ca507f */
  if (!C.zf) goto L_11ca507f;
  /* 11ca4fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca4fc9 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11ca4fcc push esi */
  push32((uint32_t)(ESI));
  /* 11ca4fcd call 0x11ca5400 */
  push32(0x11ca4fd2u); f_11ca5400();
  /* 11ca4fd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca4fd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca4fd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca4fda mov ecx, ebx */
  ECX = (EBX);
  /* 11ca4fdc jle 0x11ca500e */
  if ((C.zf||C.sf!=C.of)) goto L_11ca500e;
  /* 11ca4fde lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11ca4fe1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ca4fe4:;
  /* 11ca4fe4 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11ca4feb lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11ca4fee mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11ca4ff1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11ca4ff6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ca4ff8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ca4ffa mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11ca5001 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5006 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5009 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11ca500c jne 0x11ca4fe4 */
  if (!C.zf) goto L_11ca4fe4;
L_11ca500e:;
  /* 11ca500e mov dword ptr [0x11caa660], edi */
  w32((uint32_t)(0x11caa660), (EDI));
  /* 11ca5014 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11ca501a:;
  /* 11ca501a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca501c jae 0x11ca502a */
  if (!C.cf) goto L_11ca502a;
  /* 11ca501e cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5021 je 0x11ca5028 */
  if (C.zf) goto L_11ca5028;
  /* 11ca5023 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5026 jmp 0x11ca501a */
  goto L_11ca501a;
L_11ca5028:;
  /* 11ca5028 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca502a:;
  /* 11ca502a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca502c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca502e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11ca5031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5034 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11ca5037 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11ca503a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca503c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca503f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11ca5043 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11ca5049 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11ca504b jmp 0x11ca5081 */
  goto L_11ca5081;
L_11ca504d:;
  /* 11ca504d call 0x11ca4b86 */
  push32(0x11ca5052u); f_11ca4b86();
  /* 11ca5052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5054 je 0x11ca507f */
  if (C.zf) goto L_11ca507f;
  /* 11ca5056 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ca5059 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11ca505c lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11ca5060 mov dword ptr [0x11caa660], eax */
  w32((uint32_t)(0x11caa660), (EAX));
  /* 11ca5065 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ca5067 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11ca506c sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca506e mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ca5071 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11ca5074 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca5077 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11ca507d jmp 0x11ca5081 */
  goto L_11ca5081;
L_11ca507f:;
  /* 11ca507f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca5081:;
  /* 11ca5081 pop edi */
  EDI = (pop32());
  /* 11ca5082 pop esi */
  ESI = (pop32());
  /* 11ca5083 pop ebx */
  EBX = (pop32());
  /* 11ca5084 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5085 ret  */
  ESPCHK(0x11ca4e7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005086 @ 0x11ca5086 (292 bytes, 125 insns) */
void f_11ca5086(void) {
  FTRACE(0x11ca5086u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5086 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca5087 mov ebp, esp */
  EBP = (ESP);
  /* 11ca5089 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca508a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca508d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca5090 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5091 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5092 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11ca5095 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5096 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11ca5098 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11ca509e cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca50a0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca50a3 mov eax, edi */
  EAX = (EDI);
  /* 11ca50a5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ca50a8 jb 0x11ca50cb */
  if (C.cf) goto L_11ca50cb;
  /* 11ca50aa lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11ca50ad mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ca50af cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca50b1 jae 0x11ca50ba */
  if (!C.cf) goto L_11ca50ba;
  /* 11ca50b3 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca50b5 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca50b8 jmp 0x11ca50c3 */
  goto L_11ca50c3;
L_11ca50ba:;
  /* 11ca50ba and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca50be lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11ca50c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ca50c3:;
  /* 11ca50c3 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11ca50c6 jmp 0x11ca5199 */
  goto L_11ca5199;
L_11ca50cb:;
  /* 11ca50cb add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca50cd cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca50d0 je 0x11ca50d4 */
  if (C.zf) goto L_11ca50d4;
  /* 11ca50d2 mov eax, esi */
  EAX = (ESI);
L_11ca50d4:;
  /* 11ca50d4 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11ca50d7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca50d9 jae 0x11ca511e */
  if (!C.cf) goto L_11ca511e;
L_11ca50db:;
  /* 11ca50db mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11ca50dd test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11ca50df jne 0x11ca5111 */
  if (!C.zf) goto L_11ca5111;
  /* 11ca50e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca50e3 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11ca50e6 pop esi */
  ESI = (pop32());
L_11ca50e7:;
  /* 11ca50e7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca50ea jne 0x11ca50f0 */
  if (!C.zf) goto L_11ca50f0;
  /* 11ca50ec inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca50ed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca50ee jmp 0x11ca50e7 */
  goto L_11ca50e7;
L_11ca50f0:;
  /* 11ca50f0 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca50f2 jae 0x11ca5142 */
  if (!C.cf) goto L_11ca5142;
  /* 11ca50f4 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca50f7 jne 0x11ca50fe */
  if (!C.zf) goto L_11ca50fe;
  /* 11ca50f9 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11ca50fc jmp 0x11ca510a */
  goto L_11ca510a;
L_11ca50fe:;
  /* 11ca50fe sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca5101 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5104 jb 0x11ca51a3 */
  if (C.cf) goto L_11ca51a3;
L_11ca510a:;
  /* 11ca510a mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca510d mov eax, ebx */
  EAX = (EBX);
  /* 11ca510f jmp 0x11ca5116 */
  goto L_11ca5116;
L_11ca5111:;
  /* 11ca5111 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11ca5114 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ca5116:;
  /* 11ca5116 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11ca5119 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca511c jb 0x11ca50db */
  if (C.cf) goto L_11ca50db;
L_11ca511e:;
  /* 11ca511e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11ca5121:;
  /* 11ca5121 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5123 jae 0x11ca51a3 */
  if (!C.cf) goto L_11ca51a3;
  /* 11ca5125 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11ca5128 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca512b jae 0x11ca51a3 */
  if (!C.cf) goto L_11ca51a3;
  /* 11ca512d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca512f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca5131 jne 0x11ca5173 */
  if (!C.zf) goto L_11ca5173;
  /* 11ca5133 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5135 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11ca5138 pop eax */
  EAX = (pop32());
L_11ca5139:;
  /* 11ca5139 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca513c jne 0x11ca5163 */
  if (!C.zf) goto L_11ca5163;
  /* 11ca513e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ca513f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca5140 jmp 0x11ca5139 */
  goto L_11ca5139;
L_11ca5142:;
  /* 11ca5142 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11ca5145 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5148 jae 0x11ca5153 */
  if (!C.cf) goto L_11ca5153;
  /* 11ca514a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca514c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11ca514e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11ca5151 jmp 0x11ca515c */
  goto L_11ca515c;
L_11ca5153:;
  /* 11ca5153 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca5157 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11ca515a mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11ca515c:;
  /* 11ca515c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ca515e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5161 jmp 0x11ca5199 */
  goto L_11ca5199;
L_11ca5163:;
  /* 11ca5163 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5165 jae 0x11ca517a */
  if (!C.cf) goto L_11ca517a;
  /* 11ca5167 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11ca516a cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca516d jb 0x11ca51a3 */
  if (C.cf) goto L_11ca51a3;
  /* 11ca516f mov esi, ebx */
  ESI = (EBX);
  /* 11ca5171 jmp 0x11ca5121 */
  goto L_11ca5121;
L_11ca5173:;
  /* 11ca5173 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11ca5176 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5178 jmp 0x11ca5121 */
  goto L_11ca5121;
L_11ca517a:;
  /* 11ca517a lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11ca517d cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5180 jae 0x11ca518b */
  if (!C.cf) goto L_11ca518b;
  /* 11ca5182 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5184 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11ca5186 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ca5189 jmp 0x11ca5194 */
  goto L_11ca5194;
L_11ca518b:;
  /* 11ca518b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca518f lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11ca5192 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ca5194:;
  /* 11ca5194 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ca5196 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11ca5199:;
  /* 11ca5199 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ca519c shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca519f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca51a1 jmp 0x11ca51a5 */
  goto L_11ca51a5;
L_11ca51a3:;
  /* 11ca51a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca51a5:;
  /* 11ca51a5 pop edi */
  EDI = (pop32());
  /* 11ca51a6 pop esi */
  ESI = (pop32());
  /* 11ca51a7 pop ebx */
  EBX = (pop32());
  /* 11ca51a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca51a9 ret  */
  ESPCHK(0x11ca5086u, _esp0);
  ESP += 4; return;
}

/* FUN_100051aa @ 0x11ca51aa (169 bytes, 69 insns) */
void f_11ca51aa(void) {
  FTRACE(0x11ca51aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca51aa push ebp */
  push32((uint32_t)(EBP));
  /* 11ca51ab mov ebp, esp */
  EBP = (ESP);
  /* 11ca51ad push ecx */
  push32((uint32_t)(ECX));
  /* 11ca51ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca51b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca51b2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca51b5 push esi */
  push32((uint32_t)(ESI));
  /* 11ca51b6 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11ca51b9 push edi */
  push32((uint32_t)(EDI));
  /* 11ca51ba mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca51bd and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca51c1 mov eax, ebx */
  EAX = (EBX);
  /* 11ca51c3 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca51c6 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11ca51c9 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca51cc lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11ca51d0 jbe 0x11ca51e4 */
  if ((C.cf||C.zf)) goto L_11ca51e4;
  /* 11ca51d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca51d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca51d7 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ca51d9 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca51db mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11ca51e2 jmp 0x11ca5244 */
  goto L_11ca5244;
L_11ca51e4:;
  /* 11ca51e4 jae 0x11ca524b */
  if (!C.cf) goto L_11ca524b;
  /* 11ca51e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca51e9 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11ca51ec lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11ca51f2 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca51f4 jb 0x11ca524b */
  if (C.cf) goto L_11ca524b;
  /* 11ca51f6 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11ca51f9:;
  /* 11ca51f9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca51fb jae 0x11ca5207 */
  if (!C.cf) goto L_11ca5207;
  /* 11ca51fd cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca5200 jne 0x11ca5205 */
  if (!C.zf) goto L_11ca5205;
  /* 11ca5202 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca5203 jmp 0x11ca51f9 */
  goto L_11ca51f9;
L_11ca5205:;
  /* 11ca5205 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ca5207:;
  /* 11ca5207 jne 0x11ca524b */
  if (!C.zf) goto L_11ca524b;
  /* 11ca5209 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11ca520c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ca520e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11ca5210 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5212 ja 0x11ca523f */
  if ((!C.cf&&!C.zf)) goto L_11ca523f;
  /* 11ca5214 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5216 jbe 0x11ca523f */
  if ((C.cf||C.zf)) goto L_11ca523f;
  /* 11ca5218 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11ca521e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5220 jae 0x11ca5236 */
  if (!C.cf) goto L_11ca5236;
  /* 11ca5222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5224 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11ca5226 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca5228 jne 0x11ca5231 */
  if (!C.zf) goto L_11ca5231;
L_11ca522a:;
  /* 11ca522a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca522b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca522f je 0x11ca522a */
  if (C.zf) goto L_11ca522a;
L_11ca5231:;
  /* 11ca5231 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ca5234 jmp 0x11ca523f */
  goto L_11ca523f;
L_11ca5236:;
  /* 11ca5236 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ca523a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11ca523d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11ca523f:;
  /* 11ca523f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5242 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11ca5244:;
  /* 11ca5244 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11ca524b:;
  /* 11ca524b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ca524e pop edi */
  EDI = (pop32());
  /* 11ca524f pop esi */
  ESI = (pop32());
  /* 11ca5250 pop ebx */
  EBX = (pop32());
  /* 11ca5251 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5252 ret  */
  ESPCHK(0x11ca51aau, _esp0);
  ESP += 4; return;
}

/* FUN_10005253 @ 0x11ca5253 (137 bytes, 50 insns) */
void f_11ca5253(void) {
  FTRACE(0x11ca5253u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5253 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5254 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5256 cmp dword ptr [0x11caaf9c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11caaf9c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca525c push esi */
  push32((uint32_t)(ESI));
  /* 11ca525d push edi */
  push32((uint32_t)(EDI));
  /* 11ca525e jne 0x11ca52a2 */
  if (!C.zf) goto L_11ca52a2;
  /* 11ca5260 push 0x11ca7568 */
  push32((uint32_t)(0x11ca7568u));
  /* 11ca5265 call dword ptr [0x11ca7030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7030))), 0x11ca526bu);
  /* 11ca526b mov edi, eax */
  EDI = (EAX);
  /* 11ca526d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca526f je 0x11ca52d8 */
  if (C.zf) goto L_11ca52d8;
  /* 11ca5271 mov esi, dword ptr [0x11ca7034] */
  ESI = (r32((uint32_t)(0x11ca7034)));
  /* 11ca5277 push 0x11ca755c */
  push32((uint32_t)(0x11ca755cu));
  /* 11ca527c push edi */
  push32((uint32_t)(EDI));
  /* 11ca527d call esi */
  call_ind((uint32_t)(ESI), 0x11ca527fu);
  /* 11ca527f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5281 mov dword ptr [0x11caaf9c], eax */
  w32((uint32_t)(0x11caaf9c), (EAX));
  /* 11ca5286 je 0x11ca52d8 */
  if (C.zf) goto L_11ca52d8;
  /* 11ca5288 push 0x11ca754c */
  push32((uint32_t)(0x11ca754cu));
  /* 11ca528d push edi */
  push32((uint32_t)(EDI));
  /* 11ca528e call esi */
  call_ind((uint32_t)(ESI), 0x11ca5290u);
  /* 11ca5290 push 0x11ca7538 */
  push32((uint32_t)(0x11ca7538u));
  /* 11ca5295 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5296 mov dword ptr [0x11caafa0], eax */
  w32((uint32_t)(0x11caafa0), (EAX));
  /* 11ca529b call esi */
  call_ind((uint32_t)(ESI), 0x11ca529du);
  /* 11ca529d mov dword ptr [0x11caafa4], eax */
  w32((uint32_t)(0x11caafa4), (EAX));
L_11ca52a2:;
  /* 11ca52a2 mov eax, dword ptr [0x11caafa0] */
  EAX = (r32((uint32_t)(0x11caafa0)));
  /* 11ca52a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca52a9 je 0x11ca52c1 */
  if (C.zf) goto L_11ca52c1;
  /* 11ca52ab call eax */
  call_ind((uint32_t)(EAX), 0x11ca52adu);
  /* 11ca52ad mov ebx, eax */
  EBX = (EAX);
  /* 11ca52af test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca52b1 je 0x11ca52c1 */
  if (C.zf) goto L_11ca52c1;
  /* 11ca52b3 mov eax, dword ptr [0x11caafa4] */
  EAX = (r32((uint32_t)(0x11caafa4)));
  /* 11ca52b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca52ba je 0x11ca52c1 */
  if (C.zf) goto L_11ca52c1;
  /* 11ca52bc push ebx */
  push32((uint32_t)(EBX));
  /* 11ca52bd call eax */
  call_ind((uint32_t)(EAX), 0x11ca52bfu);
  /* 11ca52bf mov ebx, eax */
  EBX = (EAX);
L_11ca52c1:;
  /* 11ca52c1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ca52c5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ca52c9 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ca52cd push ebx */
  push32((uint32_t)(EBX));
  /* 11ca52ce call dword ptr [0x11caaf9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11caaf9c))), 0x11ca52d4u);
L_11ca52d4:;
  /* 11ca52d4 pop edi */
  EDI = (pop32());
  /* 11ca52d5 pop esi */
  ESI = (pop32());
  /* 11ca52d6 pop ebx */
  EBX = (pop32());
  /* 11ca52d7 ret  */
  ESPCHK(0x11ca5253u, _esp0);
  ESP += 4; return;
L_11ca52d8:;
  /* 11ca52d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca52da jmp 0x11ca52d4 */
  goto L_11ca52d4;
}

/* _strncpy @ 0x11ca52e0 (254 bytes, 109 insns) */
void f_11ca52e0(void) {
  FTRACE(0x11ca52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca52e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ca52e4 push edi */
  push32((uint32_t)(EDI));
  /* 11ca52e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ca52e7 je 0x11ca5363 */
  if (C.zf) goto L_11ca5363;
  /* 11ca52e9 push esi */
  push32((uint32_t)(ESI));
  /* 11ca52ea push ebx */
  push32((uint32_t)(EBX));
  /* 11ca52eb mov ebx, ecx */
  EBX = (ECX);
  /* 11ca52ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11ca52f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ca52f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca52fb jne 0x11ca5304 */
  if (!C.zf) goto L_11ca5304;
  /* 11ca52fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5300 jne 0x11ca5371 */
  if (!C.zf) goto L_11ca5371;
  /* 11ca5302 jmp 0x11ca5325 */
  goto L_11ca5325;
L_11ca5304:;
  /* 11ca5304 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5306 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca5307 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5309 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca530a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca530b je 0x11ca5332 */
  if (C.zf) goto L_11ca5332;
  /* 11ca530d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca530f je 0x11ca533a */
  if (C.zf) goto L_11ca533a;
  /* 11ca5311 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ca5317 jne 0x11ca5304 */
  if (!C.zf) goto L_11ca5304;
  /* 11ca5319 mov ebx, ecx */
  EBX = (ECX);
  /* 11ca531b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca531e jne 0x11ca5371 */
  if (!C.zf) goto L_11ca5371;
L_11ca5320:;
  /* 11ca5320 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5323 je 0x11ca5332 */
  if (C.zf) goto L_11ca5332;
L_11ca5325:;
  /* 11ca5325 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5327 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca5328 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca532a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca532b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca532d je 0x11ca535e */
  if (C.zf) goto L_11ca535e;
  /* 11ca532f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ca5330 jne 0x11ca5325 */
  if (!C.zf) goto L_11ca5325;
L_11ca5332:;
  /* 11ca5332 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca5336 pop ebx */
  EBX = (pop32());
  /* 11ca5337 pop esi */
  ESI = (pop32());
  /* 11ca5338 pop edi */
  EDI = (pop32());
  /* 11ca5339 ret  */
  ESPCHK(0x11ca52e0u, _esp0);
  ESP += 4; return;
L_11ca533a:;
  /* 11ca533a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca5340 je 0x11ca5354 */
  if (C.zf) goto L_11ca5354;
L_11ca5342:;
  /* 11ca5342 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5344 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca5345 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca5346 je 0x11ca53d6 */
  if (C.zf) goto L_11ca53d6;
  /* 11ca534c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca5352 jne 0x11ca5342 */
  if (!C.zf) goto L_11ca5342;
L_11ca5354:;
  /* 11ca5354 mov ebx, ecx */
  EBX = (ECX);
  /* 11ca5356 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5359 jne 0x11ca53c7 */
  if (!C.zf) goto L_11ca53c7;
L_11ca535b:;
  /* 11ca535b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca535d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ca535e:;
  /* 11ca535e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ca535f jne 0x11ca535b */
  if (!C.zf) goto L_11ca535b;
  /* 11ca5361 pop ebx */
  EBX = (pop32());
  /* 11ca5362 pop esi */
  ESI = (pop32());
L_11ca5363:;
  /* 11ca5363 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca5367 pop edi */
  EDI = (pop32());
  /* 11ca5368 ret  */
  ESPCHK(0x11ca52e0u, _esp0);
  ESP += 4; return;
L_11ca5369:;
  /* 11ca5369 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca536b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca536e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca536f je 0x11ca5320 */
  if (C.zf) goto L_11ca5320;
L_11ca5371:;
  /* 11ca5371 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ca5376 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca5378 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca537a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca537d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca537f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11ca5381 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5384 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ca5389 je 0x11ca5369 */
  if (C.zf) goto L_11ca5369;
  /* 11ca538b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ca538d je 0x11ca53bb */
  if (C.zf) goto L_11ca53bb;
  /* 11ca538f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ca5391 je 0x11ca53b1 */
  if (C.zf) goto L_11ca53b1;
  /* 11ca5393 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ca5399 je 0x11ca53a7 */
  if (C.zf) goto L_11ca53a7;
  /* 11ca539b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ca53a1 jne 0x11ca5369 */
  if (!C.zf) goto L_11ca5369;
  /* 11ca53a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca53a5 jmp 0x11ca53bf */
  goto L_11ca53bf;
L_11ca53a7:;
  /* 11ca53a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ca53ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca53af jmp 0x11ca53bf */
  goto L_11ca53bf;
L_11ca53b1:;
  /* 11ca53b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ca53b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ca53b9 jmp 0x11ca53bf */
  goto L_11ca53bf;
L_11ca53bb:;
  /* 11ca53bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca53bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11ca53bf:;
  /* 11ca53bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca53c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca53c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca53c5 je 0x11ca53d1 */
  if (C.zf) goto L_11ca53d1;
L_11ca53c7:;
  /* 11ca53c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca53c9:;
  /* 11ca53c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11ca53cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca53ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca53cf jne 0x11ca53c9 */
  if (!C.zf) goto L_11ca53c9;
L_11ca53d1:;
  /* 11ca53d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ca53d4 jne 0x11ca535b */
  if (!C.zf) goto L_11ca535b;
L_11ca53d6:;
  /* 11ca53d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca53da pop ebx */
  EBX = (pop32());
  /* 11ca53db pop esi */
  ESI = (pop32());
  /* 11ca53dc pop edi */
  EDI = (pop32());
  /* 11ca53dd ret  */
  ESPCHK(0x11ca52e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053de @ 0x11ca53de (27 bytes, 13 insns) */
void f_11ca53de(void) {
  FTRACE(0x11ca53deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca53de mov eax, dword ptr [0x11caafa8] */
  EAX = (r32((uint32_t)(0x11caafa8)));
  /* 11ca53e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca53e5 je 0x11ca53f6 */
  if (C.zf) goto L_11ca53f6;
  /* 11ca53e7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ca53eb call eax */
  call_ind((uint32_t)(EAX), 0x11ca53edu);
  /* 11ca53ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca53ef pop ecx */
  ECX = (pop32());
  /* 11ca53f0 je 0x11ca53f6 */
  if (C.zf) goto L_11ca53f6;
  /* 11ca53f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca53f4 pop eax */
  EAX = (pop32());
  /* 11ca53f5 ret  */
  ESPCHK(0x11ca53deu, _esp0);
  ESP += 4; return;
L_11ca53f6:;
  /* 11ca53f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca53f8 ret  */
  ESPCHK(0x11ca53deu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11ca5400 (88 bytes, 40 insns) */
void f_11ca5400(void) {
  FTRACE(0x11ca5400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5400 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ca5404 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca5408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca540a je 0x11ca5453 */
  if (C.zf) goto L_11ca5453;
  /* 11ca540c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca540e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ca5412 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5413 mov edi, ecx */
  EDI = (ECX);
  /* 11ca5415 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5418 jb 0x11ca5447 */
  if (C.cf) goto L_11ca5447;
  /* 11ca541a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca541c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ca541f je 0x11ca5429 */
  if (C.zf) goto L_11ca5429;
  /* 11ca5421 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ca5423:;
  /* 11ca5423 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5425 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca5426 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca5427 jne 0x11ca5423 */
  if (!C.zf) goto L_11ca5423;
L_11ca5429:;
  /* 11ca5429 mov ecx, eax */
  ECX = (EAX);
  /* 11ca542b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca542e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5430 mov ecx, eax */
  ECX = (EAX);
  /* 11ca5432 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ca5435 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5437 mov ecx, edx */
  ECX = (EDX);
  /* 11ca5439 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ca543c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca543f je 0x11ca5447 */
  if (C.zf) goto L_11ca5447;
  /* 11ca5441 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ca5443 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca5445 je 0x11ca544d */
  if (C.zf) goto L_11ca544d;
L_11ca5447:;
  /* 11ca5447 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5449 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca544a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ca544b jne 0x11ca5447 */
  if (!C.zf) goto L_11ca5447;
L_11ca544d:;
  /* 11ca544d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca5451 pop edi */
  EDI = (pop32());
  /* 11ca5452 ret  */
  ESPCHK(0x11ca5400u, _esp0);
  ESP += 4; return;
L_11ca5453:;
  /* 11ca5453 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca5457 ret  */
  ESPCHK(0x11ca5400u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11ca5458 (32 bytes, 18 insns) */
void f_11ca5458(void) {
  FTRACE(0x11ca5458u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5458 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca5459 mov ebp, esp */
  EBP = (ESP);
  /* 11ca545b push ebx */
  push32((uint32_t)(EBX));
  /* 11ca545c push esi */
  push32((uint32_t)(ESI));
  /* 11ca545d push edi */
  push32((uint32_t)(EDI));
  /* 11ca545e push ebp */
  push32((uint32_t)(EBP));
  /* 11ca545f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca5461 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca5463 push 0x11ca5470 */
  push32((uint32_t)(0x11ca5470u));
  /* 11ca5468 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca546b call 0x11ca6e00 */
  push32(0x11ca5470u); f_11ca6e00();
  /* 11ca5470 pop ebp */
  EBP = (pop32());
  /* 11ca5471 pop edi */
  EDI = (pop32());
  /* 11ca5472 pop esi */
  ESI = (pop32());
  /* 11ca5473 pop ebx */
  EBX = (pop32());
  /* 11ca5474 mov esp, ebp */
  ESP = (EBP);
  /* 11ca5476 pop ebp */
  EBP = (pop32());
  /* 11ca5477 ret  */
  ESPCHK(0x11ca5458u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11ca549a (104 bytes, 33 insns) */
void f_11ca549a(void) {
  FTRACE(0x11ca549au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca549a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca549b push esi */
  push32((uint32_t)(ESI));
  /* 11ca549c push edi */
  push32((uint32_t)(EDI));
  /* 11ca549d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca54a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ca54a2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11ca54a4 push 0x11ca5478 */
  push32((uint32_t)(0x11ca5478u));
  /* 11ca54a9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11ca54b0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11ca54b7:;
  /* 11ca54b7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ca54bb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ca54be mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ca54c1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca54c4 je 0x11ca54f4 */
  if (C.zf) goto L_11ca54f4;
  /* 11ca54c6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca54ca je 0x11ca54f4 */
  if (C.zf) goto L_11ca54f4;
  /* 11ca54cc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11ca54cf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11ca54d2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11ca54d6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ca54d9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca54de jne 0x11ca54f2 */
  if (!C.zf) goto L_11ca54f2;
  /* 11ca54e0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ca54e5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11ca54e9 call 0x11ca552e */
  push32(0x11ca54eeu); f_11ca552e();
  /* 11ca54ee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11ca54f2u);
L_11ca54f2:;
  /* 11ca54f2 jmp 0x11ca54b7 */
  goto L_11ca54b7;
L_11ca54f4:;
  /* 11ca54f4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11ca54fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca54fe pop edi */
  EDI = (pop32());
  /* 11ca54ff pop esi */
  ESI = (pop32());
  /* 11ca5500 pop ebx */
  EBX = (pop32());
  /* 11ca5501 ret  */
  ESPCHK(0x11ca549au, _esp0);
  ESP += 4; return;
}

/* FUN_1000552e @ 0x11ca552e (24 bytes, 10 insns) */
void f_11ca552e(void) {
  FTRACE(0x11ca552eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca552e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca552f push ecx */
  push32((uint32_t)(ECX));
  /* 11ca5530 mov ebx, 0x11caa670 */
  EBX = (0x11caa670u);
  /* 11ca5535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5538 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ca553b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ca553e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11ca5541 pop ecx */
  ECX = (pop32());
  /* 11ca5542 pop ebx */
  EBX = (pop32());
  /* 11ca5543 ret 4 */
  ESPCHK(0x11ca552eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000560d @ 0x11ca560d (27 bytes, 11 insns) */
void f_11ca560d(void) {
  FTRACE(0x11ca560du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca560d push ebp */
  push32((uint32_t)(EBP));
  /* 11ca560e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca5612 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11ca5614 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ca5617 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5618 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ca561b push eax */
  push32((uint32_t)(EAX));
  /* 11ca561c call 0x11ca549a */
  push32(0x11ca5621u); f_11ca549a();
  /* 11ca5621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5624 pop ebp */
  EBP = (pop32());
  /* 11ca5625 ret 4 */
  ESPCHK(0x11ca560du, _esp0);
  ESP += 8; return;
}

/* FUN_10005628 @ 0x11ca5628 (139 bytes, 59 insns) */
void f_11ca5628(void) {
  FTRACE(0x11ca5628u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5628 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5629 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca562a push esi */
  push32((uint32_t)(ESI));
  /* 11ca562b push edi */
  push32((uint32_t)(EDI));
  /* 11ca562c mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11ca5630:;
  /* 11ca5630 cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5637 jle 0x11ca5648 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca5648;
  /* 11ca5639 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca563c push 8 */
  push32((uint32_t)(0x8u));
  /* 11ca563e push eax */
  push32((uint32_t)(EAX));
  /* 11ca563f call 0x11ca5c72 */
  push32(0x11ca5644u); f_11ca5c72();
  /* 11ca5644 pop ecx */
  ECX = (pop32());
  /* 11ca5645 pop ecx */
  ECX = (pop32());
  /* 11ca5646 jmp 0x11ca5657 */
  goto L_11ca5657;
L_11ca5648:;
  /* 11ca5648 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca564b mov ecx, dword ptr [0x11caa7e8] */
  ECX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca5651 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11ca5654 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11ca5657:;
  /* 11ca5657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5659 je 0x11ca565e */
  if (C.zf) goto L_11ca565e;
  /* 11ca565b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca565c jmp 0x11ca5630 */
  goto L_11ca5630;
L_11ca565e:;
  /* 11ca565e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca5661 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca5662 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5665 mov ebp, esi */
  EBP = (ESI);
  /* 11ca5667 je 0x11ca566e */
  if (C.zf) goto L_11ca566e;
  /* 11ca5669 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca566c jne 0x11ca5672 */
  if (!C.zf) goto L_11ca5672;
L_11ca566e:;
  /* 11ca566e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca5671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ca5672:;
  /* 11ca5672 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ca5674:;
  /* 11ca5674 cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca567b jle 0x11ca5689 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca5689;
  /* 11ca567d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca567f push esi */
  push32((uint32_t)(ESI));
  /* 11ca5680 call 0x11ca5c72 */
  push32(0x11ca5685u); f_11ca5c72();
  /* 11ca5685 pop ecx */
  ECX = (pop32());
  /* 11ca5686 pop ecx */
  ECX = (pop32());
  /* 11ca5687 jmp 0x11ca5694 */
  goto L_11ca5694;
L_11ca5689:;
  /* 11ca5689 mov eax, dword ptr [0x11caa7e8] */
  EAX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca568e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11ca5691 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11ca5694:;
  /* 11ca5694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5696 je 0x11ca56a5 */
  if (C.zf) goto L_11ca56a5;
  /* 11ca5698 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11ca569b lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11ca569f movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca56a2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca56a3 jmp 0x11ca5674 */
  goto L_11ca5674;
L_11ca56a5:;
  /* 11ca56a5 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca56a8 mov eax, ebx */
  EAX = (EBX);
  /* 11ca56aa jne 0x11ca56ae */
  if (!C.zf) goto L_11ca56ae;
  /* 11ca56ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11ca56ae:;
  /* 11ca56ae pop edi */
  EDI = (pop32());
  /* 11ca56af pop esi */
  ESI = (pop32());
  /* 11ca56b0 pop ebp */
  EBP = (pop32());
  /* 11ca56b1 pop ebx */
  EBX = (pop32());
  /* 11ca56b2 ret  */
  ESPCHK(0x11ca5628u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11ca56c0 (129 bytes, 56 insns) */
void f_11ca56c0(void) {
  FTRACE(0x11ca56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca56c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca56c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca56c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ca56ce jne 0x11ca570c */
  if (!C.zf) goto L_11ca570c;
L_11ca56d0:;
  /* 11ca56d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ca56d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca56d4 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca56d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca56d8 je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca56da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca56dd jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca56df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ca56e1 je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca56e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ca56e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca56e9 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca56eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca56ed je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca56ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca56f2 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca56f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca56f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca56fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ca56fc jne 0x11ca56d0 */
  if (!C.zf) goto L_11ca56d0;
  /* 11ca56fe mov edi, edi */
  EDI = (EDI);
L_11ca5700:;
  /* 11ca5700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5702 ret  */
  ESPCHK(0x11ca56c0u, _esp0);
  ESP += 4; return;
  /* 11ca5703 nop  */
  /* nop */
L_11ca5704:;
  /* 11ca5704 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5706 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ca5708 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca5709 ret  */
  ESPCHK(0x11ca56c0u, _esp0);
  ESP += 4; return;
  /* 11ca570a mov edi, edi */
  EDI = (EDI);
L_11ca570c:;
  /* 11ca570c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11ca5712 je 0x11ca5728 */
  if (C.zf) goto L_11ca5728;
  /* 11ca5714 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ca5716 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca5717 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca5719 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca571b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca571c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca571e je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca5720 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11ca5726 je 0x11ca56d0 */
  if (C.zf) goto L_11ca56d0;
L_11ca5728:;
  /* 11ca5728 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ca572b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca572e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca5730 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca5732 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca5734 je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca5736 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca5739 jne 0x11ca5704 */
  if (!C.zf) goto L_11ca5704;
  /* 11ca573b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ca573d je 0x11ca5700 */
  if (C.zf) goto L_11ca5700;
  /* 11ca573f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5742 jmp 0x11ca56d0 */
  goto L_11ca56d0;
}

/* FUN_10005744 @ 0x11ca5744 (125 bytes, 51 insns) */
void f_11ca5744(void) {
  FTRACE(0x11ca5744u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5744 cmp dword ptr [0x11cab3c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cab3c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca574b push ebx */
  push32((uint32_t)(EBX));
  /* 11ca574c push esi */
  push32((uint32_t)(ESI));
  /* 11ca574d mov esi, dword ptr [0x11caad44] */
  ESI = (r32((uint32_t)(0x11caad44)));
  /* 11ca5753 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5754 je 0x11ca57bb */
  if (C.zf) goto L_11ca57bb;
  /* 11ca5756 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca5758 jne 0x11ca5775 */
  if (!C.zf) goto L_11ca5775;
  /* 11ca575a cmp dword ptr [0x11caad4c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11caad4c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5760 je 0x11ca57bb */
  if (C.zf) goto L_11ca57bb;
  /* 11ca5762 call 0x11ca60a3 */
  push32(0x11ca5767u); f_11ca60a3();
  /* 11ca5767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5769 jne 0x11ca57bb */
  if (!C.zf) goto L_11ca57bb;
  /* 11ca576b mov esi, dword ptr [0x11caad44] */
  ESI = (r32((uint32_t)(0x11caad44)));
  /* 11ca5771 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca5773 je 0x11ca57bb */
  if (C.zf) goto L_11ca57bb;
L_11ca5775:;
  /* 11ca5775 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca5779 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca577b je 0x11ca57bb */
  if (C.zf) goto L_11ca57bb;
  /* 11ca577d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca577e call 0x11ca34b0 */
  push32(0x11ca5783u); f_11ca34b0();
  /* 11ca5783 pop ecx */
  ECX = (pop32());
  /* 11ca5784 mov edi, eax */
  EDI = (EAX);
L_11ca5786:;
  /* 11ca5786 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca5788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca578a je 0x11ca57bb */
  if (C.zf) goto L_11ca57bb;
  /* 11ca578c push eax */
  push32((uint32_t)(EAX));
  /* 11ca578d call 0x11ca34b0 */
  push32(0x11ca5792u); f_11ca34b0();
  /* 11ca5792 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5794 pop ecx */
  ECX = (pop32());
  /* 11ca5795 jbe 0x11ca57ae */
  if ((C.cf||C.zf)) goto L_11ca57ae;
  /* 11ca5797 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca5799 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca579d jne 0x11ca57ae */
  if (!C.zf) goto L_11ca57ae;
  /* 11ca579f push edi */
  push32((uint32_t)(EDI));
  /* 11ca57a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca57a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ca57a2 call 0x11ca6064 */
  push32(0x11ca57a7u); f_11ca6064();
  /* 11ca57a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca57aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca57ac je 0x11ca57b3 */
  if (C.zf) goto L_11ca57b3;
L_11ca57ae:;
  /* 11ca57ae add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca57b1 jmp 0x11ca5786 */
  goto L_11ca5786;
L_11ca57b3:;
  /* 11ca57b3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca57b5 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11ca57b9 jmp 0x11ca57bd */
  goto L_11ca57bd;
L_11ca57bb:;
  /* 11ca57bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca57bd:;
  /* 11ca57bd pop edi */
  EDI = (pop32());
  /* 11ca57be pop esi */
  ESI = (pop32());
  /* 11ca57bf pop ebx */
  EBX = (pop32());
  /* 11ca57c0 ret  */
  ESPCHK(0x11ca5744u, _esp0);
  ESP += 4; return;
}

/* FUN_100057c1 @ 0x11ca57c1 (511 bytes, 193 insns) */
void f_11ca57c1(void) {
  FTRACE(0x11ca57c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca57c1 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca57c2 mov ebp, esp */
  EBP = (ESP);
  /* 11ca57c4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca57c6 push 0x11ca7580 */
  push32((uint32_t)(0x11ca7580u));
  /* 11ca57cb push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca57d0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca57d6 push eax */
  push32((uint32_t)(EAX));
  /* 11ca57d7 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca57de sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca57e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca57e2 push esi */
  push32((uint32_t)(ESI));
  /* 11ca57e3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca57e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca57e7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca57e9 cmp dword ptr [0x11caafd0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caafd0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca57ef jne 0x11ca5837 */
  if (!C.zf) goto L_11ca5837;
  /* 11ca57f1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca57f2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca57f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca57f5 pop ebx */
  EBX = (pop32());
  /* 11ca57f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca57f7 push 0x11ca7578 */
  push32((uint32_t)(0x11ca7578u));
  /* 11ca57fc mov esi, 0x100 */
  ESI = (0x100u);
  /* 11ca5801 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5802 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5803 call dword ptr [0x11ca702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca702c))), 0x11ca5809u);
  /* 11ca5809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca580b je 0x11ca5815 */
  if (C.zf) goto L_11ca5815;
  /* 11ca580d mov dword ptr [0x11caafd0], ebx */
  w32((uint32_t)(0x11caafd0), (EBX));
  /* 11ca5813 jmp 0x11ca5837 */
  goto L_11ca5837;
L_11ca5815:;
  /* 11ca5815 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5816 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5817 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5818 push 0x11ca7574 */
  push32((uint32_t)(0x11ca7574u));
  /* 11ca581d push esi */
  push32((uint32_t)(ESI));
  /* 11ca581e push edi */
  push32((uint32_t)(EDI));
  /* 11ca581f call dword ptr [0x11ca7024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7024))), 0x11ca5825u);
  /* 11ca5825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5827 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca582d mov dword ptr [0x11caafd0], 2 */
  w32((uint32_t)(0x11caafd0), (0x2u));
L_11ca5837:;
  /* 11ca5837 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca583a jle 0x11ca584c */
  if ((C.zf||C.sf!=C.of)) goto L_11ca584c;
  /* 11ca583c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca583f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5842 call 0x11ca638e */
  push32(0x11ca5847u); f_11ca638e();
  /* 11ca5847 pop ecx */
  ECX = (pop32());
  /* 11ca5848 pop ecx */
  ECX = (pop32());
  /* 11ca5849 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ca584c:;
  /* 11ca584c mov eax, dword ptr [0x11caafd0] */
  EAX = (r32((uint32_t)(0x11caafd0)));
  /* 11ca5851 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5854 jne 0x11ca5873 */
  if (!C.zf) goto L_11ca5873;
  /* 11ca5856 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca5859 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca585c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca585f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5862 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca5865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca5868 call dword ptr [0x11ca7024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7024))), 0x11ca586eu);
  /* 11ca586e jmp 0x11ca5951 */
  goto L_11ca5951;
L_11ca5873:;
  /* 11ca5873 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5876 jne 0x11ca594f */
  if (!C.zf) goto L_11ca594f;
  /* 11ca587c cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca587f jne 0x11ca5889 */
  if (!C.zf) goto L_11ca5889;
  /* 11ca5881 mov eax, dword ptr [0x11caafc8] */
  EAX = (r32((uint32_t)(0x11caafc8)));
  /* 11ca5886 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11ca5889:;
  /* 11ca5889 push edi */
  push32((uint32_t)(EDI));
  /* 11ca588a push edi */
  push32((uint32_t)(EDI));
  /* 11ca588b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca588e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5891 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ca5894 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca5896 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5898 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca589b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca589c push eax */
  push32((uint32_t)(EAX));
  /* 11ca589d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca58a0 call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca58a6u);
  /* 11ca58a6 mov ebx, eax */
  EBX = (EAX);
  /* 11ca58a8 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11ca58ab cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca58ad je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca58b3 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca58b6 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11ca58b9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca58bc and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ca58be call 0x11ca4010 */
  push32(0x11ca58c3u); f_11ca4010();
  /* 11ca58c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca58c6 mov eax, esp */
  EAX = (ESP);
  /* 11ca58c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca58cb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca58cf jmp 0x11ca58e4 */
  goto L_11ca58e4;
  /* 11ca58d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca58d3 pop eax */
  EAX = (pop32());
  /* 11ca58d4 ret  */
  ESPCHK(0x11ca57c1u, _esp0);
  ESP += 4; return;
  /* 11ca58d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ca58d8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca58da mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11ca58dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca58e1 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11ca58e4:;
  /* 11ca58e4 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca58e7 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca58e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca58ea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca58ed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca58f0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca58f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca58f5 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca58f8 call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca58feu);
  /* 11ca58fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5900 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca5902 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5903 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5904 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5905 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca5908 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca590b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca590e call dword ptr [0x11ca702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca702c))), 0x11ca5914u);
  /* 11ca5914 mov esi, eax */
  ESI = (EAX);
  /* 11ca5916 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11ca5919 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca591b je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca591d test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11ca5921 je 0x11ca5963 */
  if (C.zf) goto L_11ca5963;
  /* 11ca5923 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5926 je 0x11ca59de */
  if (C.zf) goto L_11ca59de;
  /* 11ca592c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca592f jg 0x11ca594f */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca594f;
  /* 11ca5931 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca5934 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca5937 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5938 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca593b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca593e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca5941 call dword ptr [0x11ca702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca702c))), 0x11ca5947u);
  /* 11ca5947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5949 jne 0x11ca59de */
  if (!C.zf) goto L_11ca59de;
L_11ca594f:;
  /* 11ca594f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca5951:;
  /* 11ca5951 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11ca5954 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca5957 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ca595e pop edi */
  EDI = (pop32());
  /* 11ca595f pop esi */
  ESI = (pop32());
  /* 11ca5960 pop ebx */
  EBX = (pop32());
  /* 11ca5961 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5962 ret  */
  ESPCHK(0x11ca57c1u, _esp0);
  ESP += 4; return;
L_11ca5963:;
  /* 11ca5963 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ca596a lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11ca596d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5970 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ca5972 call 0x11ca4010 */
  push32(0x11ca5977u); f_11ca4010();
  /* 11ca5977 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca597a mov ebx, esp */
  EBX = (ESP);
  /* 11ca597c mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11ca597f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca5983 jmp 0x11ca5997 */
  goto L_11ca5997;
  /* 11ca5985 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5987 pop eax */
  EAX = (pop32());
  /* 11ca5988 ret  */
  ESPCHK(0x11ca57c1u, _esp0);
  ESP += 4; return;
  /* 11ca5989 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ca598c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca598e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5990 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca5994 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11ca5997:;
  /* 11ca5997 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5999 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca599b push esi */
  push32((uint32_t)(ESI));
  /* 11ca599c push ebx */
  push32((uint32_t)(EBX));
  /* 11ca599d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11ca59a0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca59a3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca59a6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca59a9 call dword ptr [0x11ca702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca702c))), 0x11ca59afu);
  /* 11ca59af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca59b1 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
  /* 11ca59b3 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca59b6 push edi */
  push32((uint32_t)(EDI));
  /* 11ca59b7 push edi */
  push32((uint32_t)(EDI));
  /* 11ca59b8 jne 0x11ca59be */
  if (!C.zf) goto L_11ca59be;
  /* 11ca59ba push edi */
  push32((uint32_t)(EDI));
  /* 11ca59bb push edi */
  push32((uint32_t)(EDI));
  /* 11ca59bc jmp 0x11ca59c4 */
  goto L_11ca59c4;
L_11ca59be:;
  /* 11ca59be push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca59c1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11ca59c4:;
  /* 11ca59c4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca59c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca59c6 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ca59cb push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca59ce call dword ptr [0x11ca70d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca70d4))), 0x11ca59d4u);
  /* 11ca59d4 mov esi, eax */
  ESI = (EAX);
  /* 11ca59d6 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca59d8 je 0x11ca594f */
  if (C.zf) goto L_11ca594f;
L_11ca59de:;
  /* 11ca59de mov eax, esi */
  EAX = (ESI);
  /* 11ca59e0 jmp 0x11ca5951 */
  goto L_11ca5951;
}

/* FUN_100059e5 @ 0x11ca59e5 (318 bytes, 123 insns) */
void f_11ca59e5(void) {
  FTRACE(0x11ca59e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca59e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca59e6 mov ebp, esp */
  EBP = (ESP);
  /* 11ca59e8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca59ea push 0x11ca7598 */
  push32((uint32_t)(0x11ca7598u));
  /* 11ca59ef push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca59f4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca59fa push eax */
  push32((uint32_t)(EAX));
  /* 11ca59fb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca5a02 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5a05 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5a06 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5a07 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5a08 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca5a0b mov eax, dword ptr [0x11caafd4] */
  EAX = (r32((uint32_t)(0x11caafd4)));
  /* 11ca5a10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5a12 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5a14 jne 0x11ca5a54 */
  if (!C.zf) goto L_11ca5a54;
  /* 11ca5a16 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ca5a19 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5a1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5a1c pop esi */
  ESI = (pop32());
  /* 11ca5a1d push esi */
  push32((uint32_t)(ESI));
  /* 11ca5a1e push 0x11ca7578 */
  push32((uint32_t)(0x11ca7578u));
  /* 11ca5a23 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5a24 call dword ptr [0x11ca7018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7018))), 0x11ca5a2au);
  /* 11ca5a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5a2c je 0x11ca5a32 */
  if (C.zf) goto L_11ca5a32;
  /* 11ca5a2e mov eax, esi */
  EAX = (ESI);
  /* 11ca5a30 jmp 0x11ca5a4f */
  goto L_11ca5a4f;
L_11ca5a32:;
  /* 11ca5a32 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ca5a35 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5a36 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5a37 push 0x11ca7574 */
  push32((uint32_t)(0x11ca7574u));
  /* 11ca5a3c push esi */
  push32((uint32_t)(ESI));
  /* 11ca5a3d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5a3e call dword ptr [0x11ca701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca701c))), 0x11ca5a44u);
  /* 11ca5a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5a46 je 0x11ca5b1a */
  if (C.zf) goto L_11ca5b1a;
  /* 11ca5a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca5a4e pop eax */
  EAX = (pop32());
L_11ca5a4f:;
  /* 11ca5a4f mov dword ptr [0x11caafd4], eax */
  w32((uint32_t)(0x11caafd4), (EAX));
L_11ca5a54:;
  /* 11ca5a54 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5a57 jne 0x11ca5a7d */
  if (!C.zf) goto L_11ca5a7d;
  /* 11ca5a59 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ca5a5c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5a5e jne 0x11ca5a65 */
  if (!C.zf) goto L_11ca5a65;
  /* 11ca5a60 mov eax, dword ptr [0x11caafb8] */
  EAX = (r32((uint32_t)(0x11caafb8)));
L_11ca5a65:;
  /* 11ca5a65 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca5a68 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5a6b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca5a6e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca5a71 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5a72 call dword ptr [0x11ca701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca701c))), 0x11ca5a78u);
  /* 11ca5a78 jmp 0x11ca5b1c */
  goto L_11ca5b1c;
L_11ca5a7d:;
  /* 11ca5a7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5a80 jne 0x11ca5b1a */
  if (!C.zf) goto L_11ca5b1a;
  /* 11ca5a86 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5a89 jne 0x11ca5a93 */
  if (!C.zf) goto L_11ca5a93;
  /* 11ca5a8b mov eax, dword ptr [0x11caafc8] */
  EAX = (r32((uint32_t)(0x11caafc8)));
  /* 11ca5a90 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11ca5a93:;
  /* 11ca5a93 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5a94 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5a95 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5a98 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca5a9b mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ca5a9e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca5aa0 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5aa2 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5aa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca5aa6 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5aa7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca5aaa call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca5ab0u);
  /* 11ca5ab0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ca5ab3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5ab5 je 0x11ca5b1a */
  if (C.zf) goto L_11ca5b1a;
  /* 11ca5ab7 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11ca5aba lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11ca5abd mov eax, edi */
  EAX = (EDI);
  /* 11ca5abf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5ac2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ca5ac4 call 0x11ca4010 */
  push32(0x11ca5ac9u); f_11ca4010();
  /* 11ca5ac9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca5acc mov esi, esp */
  ESI = (ESP);
  /* 11ca5ace mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11ca5ad1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5ad2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5ad3 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5ad4 call 0x11ca5400 */
  push32(0x11ca5ad9u); f_11ca5400();
  /* 11ca5ad9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5adc jmp 0x11ca5ae9 */
  goto L_11ca5ae9;
  /* 11ca5ade push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5ae0 pop eax */
  EAX = (pop32());
  /* 11ca5ae1 ret  */
  ESPCHK(0x11ca59e5u, _esp0);
  ESP += 4; return;
  /* 11ca5ae2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ca5ae5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5ae7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11ca5ae9:;
  /* 11ca5ae9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca5aed cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5aef je 0x11ca5b1a */
  if (C.zf) goto L_11ca5b1a;
  /* 11ca5af1 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11ca5af4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5af5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca5af8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca5afb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5afd push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca5b00 call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca5b06u);
  /* 11ca5b06 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5b08 je 0x11ca5b1a */
  if (C.zf) goto L_11ca5b1a;
  /* 11ca5b0a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ca5b0d push eax */
  push32((uint32_t)(EAX));
  /* 11ca5b0e push esi */
  push32((uint32_t)(ESI));
  /* 11ca5b0f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca5b12 call dword ptr [0x11ca7018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7018))), 0x11ca5b18u);
  /* 11ca5b18 jmp 0x11ca5b1c */
  goto L_11ca5b1c;
L_11ca5b1a:;
  /* 11ca5b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca5b1c:;
  /* 11ca5b1c lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ca5b1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca5b22 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ca5b29 pop edi */
  EDI = (pop32());
  /* 11ca5b2a pop esi */
  ESI = (pop32());
  /* 11ca5b2b pop ebx */
  EBX = (pop32());
  /* 11ca5b2c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5b2d ret  */
  ESPCHK(0x11ca59e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b2e @ 0x11ca5b2e (9 bytes, 3 insns) */
void f_11ca5b2e(void) {
  FTRACE(0x11ca5b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5b2e call 0x11ca1c59 */
  push32(0x11ca5b33u); f_11ca1c59();
  /* 11ca5b33 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5b36 ret  */
  ESPCHK(0x11ca5b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b37 @ 0x11ca5b37 (111 bytes, 44 insns) */
void f_11ca5b37(void) {
  FTRACE(0x11ca5b37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5b37 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5b38 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca5b3a cmp dword ptr [0x11caafb8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11caafb8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5b40 jne 0x11ca5b55 */
  if (!C.zf) goto L_11ca5b55;
  /* 11ca5b42 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca5b46 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5b49 jl 0x11ca5ba4 */
  if ((C.sf!=C.of)) goto L_11ca5ba4;
  /* 11ca5b4b cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5b4e jg 0x11ca5ba4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca5ba4;
  /* 11ca5b50 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5b53 pop ebx */
  EBX = (pop32());
  /* 11ca5b54 ret  */
  ESPCHK(0x11ca5b37u, _esp0);
  ESP += 4; return;
L_11ca5b55:;
  /* 11ca5b55 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5b56 mov esi, 0x11cab068 */
  ESI = (0x11cab068u);
  /* 11ca5b5b push edi */
  push32((uint32_t)(EDI));
  /* 11ca5b5c push esi */
  push32((uint32_t)(ESI));
  /* 11ca5b5d call dword ptr [0x11ca7010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7010))), 0x11ca5b63u);
  /* 11ca5b63 cmp dword ptr [0x11cab064], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cab064))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5b69 mov edi, dword ptr [0x11ca7020] */
  EDI = (r32((uint32_t)(0x11ca7020)));
  /* 11ca5b6f je 0x11ca5b7f */
  if (C.zf) goto L_11ca5b7f;
  /* 11ca5b71 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5b72 call edi */
  call_ind((uint32_t)(EDI), 0x11ca5b74u);
  /* 11ca5b74 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca5b76 call 0x11ca2b60 */
  push32(0x11ca5b7bu); f_11ca2b60();
  /* 11ca5b7b pop ecx */
  ECX = (pop32());
  /* 11ca5b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5b7e pop ebx */
  EBX = (pop32());
L_11ca5b7f:;
  /* 11ca5b7f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ca5b83 call 0x11ca5ba6 */
  push32(0x11ca5b88u); f_11ca5ba6();
  /* 11ca5b88 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca5b8a pop ecx */
  ECX = (pop32());
  /* 11ca5b8b mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11ca5b8f je 0x11ca5b9b */
  if (C.zf) goto L_11ca5b9b;
  /* 11ca5b91 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca5b93 call 0x11ca2bc1 */
  push32(0x11ca5b98u); f_11ca2bc1();
  /* 11ca5b98 pop ecx */
  ECX = (pop32());
  /* 11ca5b99 jmp 0x11ca5b9e */
  goto L_11ca5b9e;
L_11ca5b9b:;
  /* 11ca5b9b push esi */
  push32((uint32_t)(ESI));
  /* 11ca5b9c call edi */
  call_ind((uint32_t)(EDI), 0x11ca5b9eu);
L_11ca5b9e:;
  /* 11ca5b9e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ca5ba2 pop edi */
  EDI = (pop32());
  /* 11ca5ba3 pop esi */
  ESI = (pop32());
L_11ca5ba4:;
  /* 11ca5ba4 pop ebx */
  EBX = (pop32());
  /* 11ca5ba5 ret  */
  ESPCHK(0x11ca5b37u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba6 @ 0x11ca5ba6 (204 bytes, 71 insns) */
void f_11ca5ba6(void) {
  FTRACE(0x11ca5ba6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5ba6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca5ba7 mov ebp, esp */
  EBP = (ESP);
  /* 11ca5ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca5baa cmp dword ptr [0x11caafb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caafb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5bb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5bb2 jne 0x11ca5bd1 */
  if (!C.zf) goto L_11ca5bd1;
  /* 11ca5bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5bb7 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5bba jl 0x11ca5c6f */
  if ((C.sf!=C.of)) goto L_11ca5c6f;
  /* 11ca5bc0 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5bc3 jg 0x11ca5c6f */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca5c6f;
  /* 11ca5bc9 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5bcc jmp 0x11ca5c6f */
  goto L_11ca5c6f;
L_11ca5bd1:;
  /* 11ca5bd1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5bd4 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5bda jge 0x11ca5c04 */
  if ((C.sf==C.of)) goto L_11ca5c04;
  /* 11ca5bdc cmp dword ptr [0x11caa9f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5be3 jle 0x11ca5bf1 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca5bf1;
  /* 11ca5be5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca5be7 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca5be8 call 0x11ca5c72 */
  push32(0x11ca5bedu); f_11ca5c72();
  /* 11ca5bed pop ecx */
  ECX = (pop32());
  /* 11ca5bee pop ecx */
  ECX = (pop32());
  /* 11ca5bef jmp 0x11ca5bfc */
  goto L_11ca5bfc;
L_11ca5bf1:;
  /* 11ca5bf1 mov eax, dword ptr [0x11caa7e8] */
  EAX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca5bf6 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11ca5bf9 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11ca5bfc:;
  /* 11ca5bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5bfe jne 0x11ca5c04 */
  if (!C.zf) goto L_11ca5c04;
L_11ca5c00:;
  /* 11ca5c00 mov eax, ebx */
  EAX = (EBX);
  /* 11ca5c02 jmp 0x11ca5c6f */
  goto L_11ca5c6f;
L_11ca5c04:;
  /* 11ca5c04 mov edx, dword ptr [0x11caa7e8] */
  EDX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca5c0a mov eax, ebx */
  EAX = (EBX);
  /* 11ca5c0c sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca5c0f movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11ca5c12 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11ca5c17 je 0x11ca5c27 */
  if (C.zf) goto L_11ca5c27;
  /* 11ca5c19 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11ca5c1d mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11ca5c20 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11ca5c23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca5c25 jmp 0x11ca5c30 */
  goto L_11ca5c30;
L_11ca5c27:;
  /* 11ca5c27 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11ca5c2b mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11ca5c2e push 1 */
  push32((uint32_t)(0x1u));
L_11ca5c30:;
  /* 11ca5c30 pop eax */
  EAX = (pop32());
  /* 11ca5c31 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ca5c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca5c38 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca5c3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ca5c3b push eax */
  push32((uint32_t)(EAX));
  /* 11ca5c3c lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ca5c3f push eax */
  push32((uint32_t)(EAX));
  /* 11ca5c40 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ca5c45 push dword ptr [0x11caafb8] */
  push32((uint32_t)(r32((uint32_t)(0x11caafb8))));
  /* 11ca5c4b call 0x11ca57c1 */
  push32(0x11ca5c50u); f_11ca57c1();
  /* 11ca5c50 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5c55 je 0x11ca5c00 */
  if (C.zf) goto L_11ca5c00;
  /* 11ca5c57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5c5a jne 0x11ca5c62 */
  if (!C.zf) goto L_11ca5c62;
  /* 11ca5c5c movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ca5c60 jmp 0x11ca5c6f */
  goto L_11ca5c6f;
L_11ca5c62:;
  /* 11ca5c62 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11ca5c66 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ca5c6a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca5c6d or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11ca5c6f:;
  /* 11ca5c6f pop ebx */
  EBX = (pop32());
  /* 11ca5c70 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5c71 ret  */
  ESPCHK(0x11ca5ba6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c72 @ 0x11ca5c72 (117 bytes, 46 insns) */
void f_11ca5c72(void) {
  FTRACE(0x11ca5c72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5c72 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca5c73 mov ebp, esp */
  EBP = (ESP);
  /* 11ca5c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca5c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5c79 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11ca5c7c cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5c82 ja 0x11ca5c90 */
  if ((!C.cf&&!C.zf)) goto L_11ca5c90;
  /* 11ca5c84 mov ecx, dword ptr [0x11caa7e8] */
  ECX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca5c8a movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11ca5c8e jmp 0x11ca5ce2 */
  goto L_11ca5ce2;
L_11ca5c90:;
  /* 11ca5c90 mov ecx, eax */
  ECX = (EAX);
  /* 11ca5c92 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5c93 mov esi, dword ptr [0x11caa7e8] */
  ESI = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca5c99 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ca5c9c movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11ca5c9f test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11ca5ca4 pop esi */
  ESI = (pop32());
  /* 11ca5ca5 je 0x11ca5cb5 */
  if (C.zf) goto L_11ca5cb5;
  /* 11ca5ca7 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11ca5cab mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11ca5cae mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11ca5cb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca5cb3 jmp 0x11ca5cbe */
  goto L_11ca5cbe;
L_11ca5cb5:;
  /* 11ca5cb5 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11ca5cb9 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11ca5cbc push 1 */
  push32((uint32_t)(0x1u));
L_11ca5cbe:;
  /* 11ca5cbe pop eax */
  EAX = (pop32());
  /* 11ca5cbf lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11ca5cc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca5cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca5cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca5cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11ca5cca lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ca5ccd push eax */
  push32((uint32_t)(EAX));
  /* 11ca5cce push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca5cd0 call 0x11ca59e5 */
  push32(0x11ca5cd5u); f_11ca59e5();
  /* 11ca5cd5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca5cda jne 0x11ca5cde */
  if (!C.zf) goto L_11ca5cde;
  /* 11ca5cdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5cdd ret  */
  ESPCHK(0x11ca5c72u, _esp0);
  ESP += 4; return;
L_11ca5cde:;
  /* 11ca5cde movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11ca5ce2:;
  /* 11ca5ce2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5ce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5ce6 ret  */
  ESPCHK(0x11ca5c72u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x11ca5cf0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_11ca5cf0(void) {
  FTRACE(0x11ca5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ca5cf3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca5cf4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca5cf5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca5cf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca5cfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5cfe mov eax, ecx */
  EAX = (ECX);
  /* 11ca5d00 mov edx, ecx */
  EDX = (ECX);
  /* 11ca5d02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5d04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5d06 jbe 0x11ca5d10 */
  if ((C.cf||C.zf)) goto L_11ca5d10;
  /* 11ca5d08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5d0a jb 0x11ca5e88 */
  if (C.cf) goto L_11ca5e88;
L_11ca5d10:;
  /* 11ca5d10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca5d16 jne 0x11ca5d2c */
  if (!C.zf) goto L_11ca5d2c;
  /* 11ca5d18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5d1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5d1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5d21 jb 0x11ca5d4c */
  if (C.cf) goto L_11ca5d4c;
  /* 11ca5d23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5d25 jmp dword ptr [edx*4 + 0x11ca5e38] */
  switch (EDX) {
    case 0: goto L_11ca5e48;
    case 1: goto L_11ca5e50;
    case 2: goto L_11ca5e5c;
    case 3: goto L_11ca5e70;
    default: x86_unimpl("switch@0x11ca5d25 out of table"); return;
  }
L_11ca5d2c:;
  /* 11ca5d2c mov eax, edi */
  EAX = (EDI);
  /* 11ca5d2e mov edx, 3 */
  EDX = (0x3u);
  /* 11ca5d33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5d36 jb 0x11ca5d44 */
  if (C.cf) goto L_11ca5d44;
  /* 11ca5d38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5d3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5d3d jmp dword ptr [eax*4 + 0x11ca5d50] */
  switch (EAX) {
    case 1: goto L_11ca5d60;
    case 2: goto L_11ca5d8c;
    case 3: goto L_11ca5db0;
    default: x86_unimpl("switch@0x11ca5d3d out of table"); return;
  }
L_11ca5d44:;
  /* 11ca5d44 jmp dword ptr [ecx*4 + 0x11ca5e48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ca5e48)))); return;
  /* 11ca5d4b nop  */
  /* nop */
L_11ca5d4c:;
  /* 11ca5d4c jmp dword ptr [ecx*4 + 0x11ca5dcc] */
  switch (ECX) {
    case 0: goto L_11ca5e2f;
    case 1: goto L_11ca5e1c;
    case 2: goto L_11ca5e14;
    case 3: goto L_11ca5e0c;
    case 4: goto L_11ca5e04;
    case 5: goto L_11ca5dfc;
    case 6: goto L_11ca5df4;
    case 7: goto L_11ca5dec;
    default: x86_unimpl("switch@0x11ca5d4c out of table"); return;
  }
  /* 11ca5d53 nop  */
  /* nop */
L_11ca5d60:;
  /* 11ca5d60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5d62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5d64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5d66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca5d69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca5d6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca5d6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5d72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca5d75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5d78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5d7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5d7e jb 0x11ca5d4c */
  if (C.cf) goto L_11ca5d4c;
  /* 11ca5d80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5d82 jmp dword ptr [edx*4 + 0x11ca5e38] */
  switch (EDX) {
    case 0: goto L_11ca5e48;
    case 1: goto L_11ca5e50;
    case 2: goto L_11ca5e5c;
    case 3: goto L_11ca5e70;
    default: x86_unimpl("switch@0x11ca5d82 out of table"); return;
  }
  /* 11ca5d89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5d8c:;
  /* 11ca5d8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5d8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5d90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5d92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca5d95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5d98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca5d9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5d9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5da1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5da4 jb 0x11ca5d4c */
  if (C.cf) goto L_11ca5d4c;
  /* 11ca5da6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5da8 jmp dword ptr [edx*4 + 0x11ca5e38] */
  switch (EDX) {
    case 0: goto L_11ca5e48;
    case 1: goto L_11ca5e50;
    case 2: goto L_11ca5e5c;
    case 3: goto L_11ca5e70;
    default: x86_unimpl("switch@0x11ca5da8 out of table"); return;
  }
  /* 11ca5daf nop  */
  /* nop */
L_11ca5db0:;
  /* 11ca5db0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5db2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5db4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5db6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca5db7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5dba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca5dbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5dbe jb 0x11ca5d4c */
  if (C.cf) goto L_11ca5d4c;
  /* 11ca5dc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5dc2 jmp dword ptr [edx*4 + 0x11ca5e38] */
  switch (EDX) {
    case 0: goto L_11ca5e48;
    case 1: goto L_11ca5e50;
    case 2: goto L_11ca5e5c;
    case 3: goto L_11ca5e70;
    default: x86_unimpl("switch@0x11ca5dc2 out of table"); return;
  }
  /* 11ca5dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5dec:;
  /* 11ca5dec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ca5df0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ca5df4:;
  /* 11ca5df4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ca5df8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ca5dfc:;
  /* 11ca5dfc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ca5e00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ca5e04:;
  /* 11ca5e04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ca5e08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ca5e0c:;
  /* 11ca5e0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ca5e10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ca5e14:;
  /* 11ca5e14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ca5e18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ca5e1c:;
  /* 11ca5e1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ca5e20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ca5e24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ca5e2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5e2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ca5e2f:;
  /* 11ca5e2f jmp dword ptr [edx*4 + 0x11ca5e38] */
  switch (EDX) {
    case 0: goto L_11ca5e48;
    case 1: goto L_11ca5e50;
    case 2: goto L_11ca5e5c;
    case 3: goto L_11ca5e70;
    default: x86_unimpl("switch@0x11ca5e2f out of table"); return;
  }
  /* 11ca5e36 mov edi, edi */
  EDI = (EDI);
L_11ca5e48:;
  /* 11ca5e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5e4b pop esi */
  ESI = (pop32());
  /* 11ca5e4c pop edi */
  EDI = (pop32());
  /* 11ca5e4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5e4e ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5e4f nop  */
  /* nop */
L_11ca5e50:;
  /* 11ca5e50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5e52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5e57 pop esi */
  ESI = (pop32());
  /* 11ca5e58 pop edi */
  EDI = (pop32());
  /* 11ca5e59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5e5a ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5e5b nop  */
  /* nop */
L_11ca5e5c:;
  /* 11ca5e5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5e5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5e60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca5e63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca5e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5e69 pop esi */
  ESI = (pop32());
  /* 11ca5e6a pop edi */
  EDI = (pop32());
  /* 11ca5e6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5e6c ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5e6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5e70:;
  /* 11ca5e70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca5e72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ca5e74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca5e77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca5e7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca5e7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca5e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5e83 pop esi */
  ESI = (pop32());
  /* 11ca5e84 pop edi */
  EDI = (pop32());
  /* 11ca5e85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5e86 ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5e87 nop  */
  /* nop */
L_11ca5e88:;
  /* 11ca5e88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ca5e8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ca5e90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ca5e96 jne 0x11ca5ebc */
  if (!C.zf) goto L_11ca5ebc;
  /* 11ca5e98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5e9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5e9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5ea1 jb 0x11ca5eb0 */
  if (C.cf) goto L_11ca5eb0;
  /* 11ca5ea3 std  */
  C.df=1;
  /* 11ca5ea4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5ea6 cld  */
  C.df=0;
  /* 11ca5ea7 jmp dword ptr [edx*4 + 0x11ca5fd0] */
  switch (EDX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5ea7 out of table"); return;
  }
  /* 11ca5eae mov edi, edi */
  EDI = (EDI);
L_11ca5eb0:;
  /* 11ca5eb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca5eb2 jmp dword ptr [ecx*4 + 0x11ca5f80] */
  switch (ECX) {
    case 0: goto L_11ca5fc7;
    default: x86_unimpl("switch@0x11ca5eb2 out of table"); return;
  }
  /* 11ca5eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5ebc:;
  /* 11ca5ebc mov eax, edi */
  EAX = (EDI);
  /* 11ca5ebe mov edx, 3 */
  EDX = (0x3u);
  /* 11ca5ec3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5ec6 jb 0x11ca5ed4 */
  if (C.cf) goto L_11ca5ed4;
  /* 11ca5ec8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ca5ecb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5ecd jmp dword ptr [eax*4 + 0x11ca5ed8] */
  switch (EAX) {
    case 1: goto L_11ca5ee8;
    case 2: goto L_11ca5f08;
    case 3: goto L_11ca5f30;
    default: x86_unimpl("switch@0x11ca5ecd out of table"); return;
  }
L_11ca5ed4:;
  /* 11ca5ed4 jmp dword ptr [ecx*4 + 0x11ca5fd0] */
  switch (ECX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5ed4 out of table"); return;
  }
  /* 11ca5edb nop  */
  /* nop */
L_11ca5ee8:;
  /* 11ca5ee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca5eeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5eed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca5ef0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ca5ef1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5ef4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ca5ef5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5ef8 jb 0x11ca5eb0 */
  if (C.cf) goto L_11ca5eb0;
  /* 11ca5efa std  */
  C.df=1;
  /* 11ca5efb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5efd cld  */
  C.df=0;
  /* 11ca5efe jmp dword ptr [edx*4 + 0x11ca5fd0] */
  switch (EDX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5efe out of table"); return;
  }
  /* 11ca5f05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5f08:;
  /* 11ca5f08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca5f0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5f0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca5f10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca5f13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5f16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca5f19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5f1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5f1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5f22 jb 0x11ca5eb0 */
  if (C.cf) goto L_11ca5eb0;
  /* 11ca5f24 std  */
  C.df=1;
  /* 11ca5f25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5f27 cld  */
  C.df=0;
  /* 11ca5f28 jmp dword ptr [edx*4 + 0x11ca5fd0] */
  switch (EDX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5f28 out of table"); return;
  }
  /* 11ca5f2f nop  */
  /* nop */
L_11ca5f30:;
  /* 11ca5f30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca5f33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ca5f35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca5f38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca5f3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca5f3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca5f41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ca5f44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca5f47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5f4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca5f4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca5f50 jb 0x11ca5eb0 */
  if (C.cf) goto L_11ca5eb0;
  /* 11ca5f56 std  */
  C.df=1;
  /* 11ca5f57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ca5f59 cld  */
  C.df=0;
  /* 11ca5f5a jmp dword ptr [edx*4 + 0x11ca5fd0] */
  switch (EDX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5f5a out of table"); return;
  }
  /* 11ca5f61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ca5f64 test byte ptr [edi - 0x36], bl */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x36)))&(BL); fl_logic(_r,8); }
  /* 11ca5f67 adc dword ptr [edi + ebx*2 + 0x5f9411ca], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + EBX*2 + 0x5f9411ca))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBX*2 + 0x5f9411ca), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ca5f6e retf 0x9c11 */
  x86_unimpl("retf @ 0x11ca5f6e");
  /* 11ca5f71 pop edi */
  EDI = (pop32());
  /* 11ca5f72 retf 0xa411 */
  x86_unimpl("retf @ 0x11ca5f72");
  /* 11ca5f75 pop edi */
  EDI = (pop32());
  /* 11ca5f76 retf 0xac11 */
  x86_unimpl("retf @ 0x11ca5f76");
  /* 11ca5f79 pop edi */
  EDI = (pop32());
  /* 11ca5f7a retf 0xb411 */
  x86_unimpl("retf @ 0x11ca5f7a");
  /* 11ca5f7d pop edi */
  EDI = (pop32());
  /* 11ca5f84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ca5f88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ca5f8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ca5f90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ca5f94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ca5f98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ca5f9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ca5fa0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ca5fa4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ca5fa8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ca5fac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ca5fb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ca5fb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ca5fb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ca5fbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ca5fc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca5fc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ca5fc7:;
  /* 11ca5fc7 jmp dword ptr [edx*4 + 0x11ca5fd0] */
  switch (EDX) {
    case 0: goto L_11ca5fe0;
    case 1: goto L_11ca5fe8;
    case 2: goto L_11ca5ff8;
    case 3: goto L_11ca600c;
    default: x86_unimpl("switch@0x11ca5fc7 out of table"); return;
  }
  /* 11ca5fce mov edi, edi */
  EDI = (EDI);
L_11ca5fe0:;
  /* 11ca5fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5fe3 pop esi */
  ESI = (pop32());
  /* 11ca5fe4 pop edi */
  EDI = (pop32());
  /* 11ca5fe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5fe6 ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5fe7 nop  */
  /* nop */
L_11ca5fe8:;
  /* 11ca5fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca5feb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca5fee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca5ff1 pop esi */
  ESI = (pop32());
  /* 11ca5ff2 pop edi */
  EDI = (pop32());
  /* 11ca5ff3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca5ff4 ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca5ff5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca5ff8:;
  /* 11ca5ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca5ffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca5ffe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca6001 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca6004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6007 pop esi */
  ESI = (pop32());
  /* 11ca6008 pop edi */
  EDI = (pop32());
  /* 11ca6009 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca600a ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
  /* 11ca600b nop  */
  /* nop */
L_11ca600c:;
  /* 11ca600c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ca600f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ca6012 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ca6015 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ca6018 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca601b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ca601e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6021 pop esi */
  ESI = (pop32());
  /* 11ca6022 pop edi */
  EDI = (pop32());
  /* 11ca6023 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6024 ret  */
  ESPCHK(0x11ca5cf0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11ca6064 (63 bytes, 24 insns) */
void f_11ca6064(void) {
  FTRACE(0x11ca6064u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6064 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6065 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6067 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca606b jne 0x11ca6071 */
  if (!C.zf) goto L_11ca6071;
  /* 11ca606d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca606f pop ebp */
  EBP = (pop32());
  /* 11ca6070 ret  */
  ESPCHK(0x11ca6064u, _esp0);
  ESP += 4; return;
L_11ca6071:;
  /* 11ca6071 push dword ptr [0x11cab088] */
  push32((uint32_t)(r32((uint32_t)(0x11cab088))));
  /* 11ca6077 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca607a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca607d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca6080 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca6083 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca6085 push dword ptr [0x11cab2a4] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a4))));
  /* 11ca608b call 0x11ca6111 */
  push32(0x11ca6090u); f_11ca6111();
  /* 11ca6090 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6095 jne 0x11ca609e */
  if (!C.zf) goto L_11ca609e;
  /* 11ca6097 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11ca609c pop ebp */
  EBP = (pop32());
  /* 11ca609d ret  */
  ESPCHK(0x11ca6064u, _esp0);
  ESP += 4; return;
L_11ca609e:;
  /* 11ca609e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca60a1 pop ebp */
  EBP = (pop32());
  /* 11ca60a2 ret  */
  ESPCHK(0x11ca6064u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a3 @ 0x11ca60a3 (110 bytes, 58 insns) */
void f_11ca60a3(void) {
  FTRACE(0x11ca60a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca60a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca60a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca60a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca60a6 push esi */
  push32((uint32_t)(ESI));
  /* 11ca60a7 mov esi, dword ptr [0x11caad4c] */
  ESI = (r32((uint32_t)(0x11caad4c)));
  /* 11ca60ad push edi */
  push32((uint32_t)(EDI));
  /* 11ca60ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca60b0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca60b2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca60b4 je 0x11ca6104 */
  if (C.zf) goto L_11ca6104;
  /* 11ca60b6 mov ebx, dword ptr [0x11ca70d4] */
  EBX = (r32((uint32_t)(0x11ca70d4)));
L_11ca60bc:;
  /* 11ca60bc push edi */
  push32((uint32_t)(EDI));
  /* 11ca60bd push edi */
  push32((uint32_t)(EDI));
  /* 11ca60be push edi */
  push32((uint32_t)(EDI));
  /* 11ca60bf push edi */
  push32((uint32_t)(EDI));
  /* 11ca60c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca60c2 push eax */
  push32((uint32_t)(EAX));
  /* 11ca60c3 push edi */
  push32((uint32_t)(EDI));
  /* 11ca60c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca60c6 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca60c8u);
  /* 11ca60c8 mov ebp, eax */
  EBP = (EAX);
  /* 11ca60ca cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca60cc je 0x11ca610c */
  if (C.zf) goto L_11ca610c;
  /* 11ca60ce push ebp */
  push32((uint32_t)(EBP));
  /* 11ca60cf call 0x11ca3281 */
  push32(0x11ca60d4u); f_11ca3281();
  /* 11ca60d4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca60d6 pop ecx */
  ECX = (pop32());
  /* 11ca60d7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11ca60db je 0x11ca610c */
  if (C.zf) goto L_11ca610c;
  /* 11ca60dd push edi */
  push32((uint32_t)(EDI));
  /* 11ca60de push edi */
  push32((uint32_t)(EDI));
  /* 11ca60df push ebp */
  push32((uint32_t)(EBP));
  /* 11ca60e0 push eax */
  push32((uint32_t)(EAX));
  /* 11ca60e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca60e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ca60e5 push edi */
  push32((uint32_t)(EDI));
  /* 11ca60e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca60e8 call ebx */
  call_ind((uint32_t)(EBX), 0x11ca60eau);
  /* 11ca60ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca60ec je 0x11ca610c */
  if (C.zf) goto L_11ca610c;
  /* 11ca60ee push edi */
  push32((uint32_t)(EDI));
  /* 11ca60ef push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11ca60f3 call 0x11ca63b9 */
  push32(0x11ca60f8u); f_11ca63b9();
  /* 11ca60f8 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca60fb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca60fe pop ecx */
  ECX = (pop32());
  /* 11ca60ff cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6101 pop ecx */
  ECX = (pop32());
  /* 11ca6102 jne 0x11ca60bc */
  if (!C.zf) goto L_11ca60bc;
L_11ca6104:;
  /* 11ca6104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca6106:;
  /* 11ca6106 pop edi */
  EDI = (pop32());
  /* 11ca6107 pop esi */
  ESI = (pop32());
  /* 11ca6108 pop ebp */
  EBP = (pop32());
  /* 11ca6109 pop ebx */
  EBX = (pop32());
  /* 11ca610a pop ecx */
  ECX = (pop32());
  /* 11ca610b ret  */
  ESPCHK(0x11ca60a3u, _esp0);
  ESP += 4; return;
L_11ca610c:;
  /* 11ca610c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ca610f jmp 0x11ca6106 */
  goto L_11ca6106;
}

/* FUN_10006111 @ 0x11ca6111 (597 bytes, 239 insns) */
void f_11ca6111(void) {
  FTRACE(0x11ca6111u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6111 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6112 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6114 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca6116 push 0x11ca75a8 */
  push32((uint32_t)(0x11ca75a8u));
  /* 11ca611b push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca6120 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca6126 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6127 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca612e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6131 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6132 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6133 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6134 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca6137 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca6139 cmp dword ptr [0x11caafe4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11caafe4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca613f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca6141 pop edi */
  EDI = (pop32());
  /* 11ca6142 jne 0x11ca6184 */
  if (!C.zf) goto L_11ca6184;
  /* 11ca6144 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6145 mov eax, 0x11ca7578 */
  EAX = (0x11ca7578u);
  /* 11ca614a push eax */
  push32((uint32_t)(EAX));
  /* 11ca614b push edi */
  push32((uint32_t)(EDI));
  /* 11ca614c push eax */
  push32((uint32_t)(EAX));
  /* 11ca614d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca614e push ebx */
  push32((uint32_t)(EBX));
  /* 11ca614f call dword ptr [0x11ca700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca700c))), 0x11ca6155u);
  /* 11ca6155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6157 je 0x11ca6161 */
  if (C.zf) goto L_11ca6161;
  /* 11ca6159 mov dword ptr [0x11caafe4], edi */
  w32((uint32_t)(0x11caafe4), (EDI));
  /* 11ca615f jmp 0x11ca6184 */
  goto L_11ca6184;
L_11ca6161:;
  /* 11ca6161 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6162 mov eax, 0x11ca7574 */
  EAX = (0x11ca7574u);
  /* 11ca6167 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6168 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6169 push eax */
  push32((uint32_t)(EAX));
  /* 11ca616a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca616b push ebx */
  push32((uint32_t)(EBX));
  /* 11ca616c call dword ptr [0x11ca7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7014))), 0x11ca6172u);
  /* 11ca6172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6174 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca617a mov dword ptr [0x11caafe4], 2 */
  w32((uint32_t)(0x11caafe4), (0x2u));
L_11ca6184:;
  /* 11ca6184 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca6187 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6189 jle 0x11ca619b */
  if ((C.zf||C.sf!=C.of)) goto L_11ca619b;
  /* 11ca618b push esi */
  push32((uint32_t)(ESI));
  /* 11ca618c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca618f call 0x11ca638e */
  push32(0x11ca6194u); f_11ca638e();
  /* 11ca6194 pop ecx */
  ECX = (pop32());
  /* 11ca6195 pop ecx */
  ECX = (pop32());
  /* 11ca6196 mov esi, eax */
  ESI = (EAX);
  /* 11ca6198 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11ca619b:;
  /* 11ca619b cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca619e jle 0x11ca61b0 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca61b0;
  /* 11ca61a0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca61a3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca61a6 call 0x11ca638e */
  push32(0x11ca61abu); f_11ca638e();
  /* 11ca61ab pop ecx */
  ECX = (pop32());
  /* 11ca61ac pop ecx */
  ECX = (pop32());
  /* 11ca61ad mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11ca61b0:;
  /* 11ca61b0 mov eax, dword ptr [0x11caafe4] */
  EAX = (r32((uint32_t)(0x11caafe4)));
  /* 11ca61b5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61b8 jne 0x11ca61d5 */
  if (!C.zf) goto L_11ca61d5;
  /* 11ca61ba push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca61bd push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca61c0 push esi */
  push32((uint32_t)(ESI));
  /* 11ca61c1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca61c4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca61c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca61ca call dword ptr [0x11ca7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7014))), 0x11ca61d0u);
  /* 11ca61d0 jmp 0x11ca637c */
  goto L_11ca637c;
L_11ca61d5:;
  /* 11ca61d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61d7 jne 0x11ca637a */
  if (!C.zf) goto L_11ca637a;
  /* 11ca61dd cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61e0 jne 0x11ca61ea */
  if (!C.zf) goto L_11ca61ea;
  /* 11ca61e2 mov eax, dword ptr [0x11caafc8] */
  EAX = (r32((uint32_t)(0x11caafc8)));
  /* 11ca61e7 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11ca61ea:;
  /* 11ca61ea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61ec je 0x11ca61f7 */
  if (C.zf) goto L_11ca61f7;
  /* 11ca61ee cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61f1 jne 0x11ca628f */
  if (!C.zf) goto L_11ca628f;
L_11ca61f7:;
  /* 11ca61f7 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca61fa jne 0x11ca6204 */
  if (!C.zf) goto L_11ca6204;
L_11ca61fc:;
  /* 11ca61fc push 2 */
  push32((uint32_t)(0x2u));
L_11ca61fe:;
  /* 11ca61fe pop eax */
  EAX = (pop32());
  /* 11ca61ff jmp 0x11ca637c */
  goto L_11ca637c;
L_11ca6204:;
  /* 11ca6204 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6207 jle 0x11ca6210 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca6210;
L_11ca6209:;
  /* 11ca6209 mov eax, edi */
  EAX = (EDI);
  /* 11ca620b jmp 0x11ca637c */
  goto L_11ca637c;
L_11ca6210:;
  /* 11ca6210 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6212 jg 0x11ca6255 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca6255;
  /* 11ca6214 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11ca6217 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6218 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca621b call dword ptr [0x11ca7048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7048))), 0x11ca6221u);
  /* 11ca6221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6223 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca6229 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca622b jle 0x11ca6259 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca6259;
  /* 11ca622d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6231 jb 0x11ca6255 */
  if (C.cf) goto L_11ca6255;
  /* 11ca6233 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11ca6236 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6239 je 0x11ca6255 */
  if (C.zf) goto L_11ca6255;
L_11ca623b:;
  /* 11ca623b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ca623e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6240 je 0x11ca6255 */
  if (C.zf) goto L_11ca6255;
  /* 11ca6242 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca6245 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11ca6247 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6249 jb 0x11ca624f */
  if (C.cf) goto L_11ca624f;
  /* 11ca624b cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca624d jbe 0x11ca61fc */
  if ((C.cf||C.zf)) goto L_11ca61fc;
L_11ca624f:;
  /* 11ca624f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6250 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6251 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6253 jne 0x11ca623b */
  if (!C.zf) goto L_11ca623b;
L_11ca6255:;
  /* 11ca6255 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca6257 jmp 0x11ca61fe */
  goto L_11ca61fe;
L_11ca6259:;
  /* 11ca6259 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca625c jle 0x11ca628f */
  if ((C.zf||C.sf!=C.of)) goto L_11ca628f;
  /* 11ca625e cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6262 jb 0x11ca6209 */
  if (C.cf) goto L_11ca6209;
  /* 11ca6264 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11ca6267 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca626a je 0x11ca6209 */
  if (C.zf) goto L_11ca6209;
L_11ca626c:;
  /* 11ca626c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ca626f cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6271 je 0x11ca6209 */
  if (C.zf) goto L_11ca6209;
  /* 11ca6273 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ca6276 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11ca6278 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca627a jb 0x11ca6284 */
  if (C.cf) goto L_11ca6284;
  /* 11ca627c cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca627e jbe 0x11ca61fc */
  if ((C.cf||C.zf)) goto L_11ca61fc;
L_11ca6284:;
  /* 11ca6284 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6285 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6286 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6288 jne 0x11ca626c */
  if (!C.zf) goto L_11ca626c;
  /* 11ca628a jmp 0x11ca6209 */
  goto L_11ca6209;
L_11ca628f:;
  /* 11ca628f push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6290 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6291 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6292 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca6295 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca6297 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca629a call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca62a0u);
  /* 11ca62a0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ca62a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca62a5 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca62ab mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11ca62ae add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca62b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca62b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ca62b5 call 0x11ca4010 */
  push32(0x11ca62bau); f_11ca4010();
  /* 11ca62ba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca62bd mov eax, esp */
  EAX = (ESP);
  /* 11ca62bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca62c2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca62c6 jmp 0x11ca62de */
  goto L_11ca62de;
  /* 11ca62c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca62ca pop eax */
  EAX = (pop32());
  /* 11ca62cb ret  */
  ESPCHK(0x11ca6111u, _esp0);
  ESP += 4; return;
  /* 11ca62cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ca62cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca62d1 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11ca62d4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca62d8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11ca62db push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca62dd pop edi */
  EDI = (pop32());
L_11ca62de:;
  /* 11ca62de cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca62e1 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca62e7 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11ca62ea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca62ed push esi */
  push32((uint32_t)(ESI));
  /* 11ca62ee push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ca62f1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca62f2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca62f5 mov esi, dword ptr [0x11ca7028] */
  ESI = (r32((uint32_t)(0x11ca7028)));
  /* 11ca62fb call esi */
  call_ind((uint32_t)(ESI), 0x11ca62fdu);
  /* 11ca62fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca62ff je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca6301 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6302 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6303 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca6306 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca6309 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca630b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca630e call esi */
  call_ind((uint32_t)(ESI), 0x11ca6310u);
  /* 11ca6310 mov esi, eax */
  ESI = (EAX);
  /* 11ca6312 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11ca6315 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6317 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca6319 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca631c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11ca631f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6322 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ca6324 call 0x11ca4010 */
  push32(0x11ca6329u); f_11ca4010();
  /* 11ca6329 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ca632c mov edi, esp */
  EDI = (ESP);
  /* 11ca632e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11ca6331 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca6335 jmp 0x11ca6349 */
  goto L_11ca6349;
  /* 11ca6337 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca6339 pop eax */
  EAX = (pop32());
  /* 11ca633a ret  */
  ESPCHK(0x11ca6111u, _esp0);
  ESP += 4; return;
  /* 11ca633b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ca633e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca6340 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca6342 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca6346 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11ca6349:;
  /* 11ca6349 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca634b je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca634d push esi */
  push32((uint32_t)(ESI));
  /* 11ca634e push edi */
  push32((uint32_t)(EDI));
  /* 11ca634f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ca6352 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ca6355 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca6357 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ca635a call dword ptr [0x11ca7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7028))), 0x11ca6360u);
  /* 11ca6360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6362 je 0x11ca637a */
  if (C.zf) goto L_11ca637a;
  /* 11ca6364 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6365 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6366 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11ca6369 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca636c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca636f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca6372 call dword ptr [0x11ca700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca700c))), 0x11ca6378u);
  /* 11ca6378 jmp 0x11ca637c */
  goto L_11ca637c;
L_11ca637a:;
  /* 11ca637a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ca637c:;
  /* 11ca637c lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11ca637f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ca6382 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ca6389 pop edi */
  EDI = (pop32());
  /* 11ca638a pop esi */
  ESI = (pop32());
  /* 11ca638b pop ebx */
  EBX = (pop32());
  /* 11ca638c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca638d ret  */
  ESPCHK(0x11ca6111u, _esp0);
  ESP += 4; return;
}

/* FUN_1000638e @ 0x11ca638e (43 bytes, 20 insns) */
void f_11ca638e(void) {
  FTRACE(0x11ca638eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca638e mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca6392 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ca6396 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca6398 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6399 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11ca639c je 0x11ca63ab */
  if (C.zf) goto L_11ca63ab;
L_11ca639e:;
  /* 11ca639e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca63a1 je 0x11ca63ab */
  if (C.zf) goto L_11ca63ab;
  /* 11ca63a3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca63a4 mov esi, ecx */
  ESI = (ECX);
  /* 11ca63a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca63a7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca63a9 jne 0x11ca639e */
  if (!C.zf) goto L_11ca639e;
L_11ca63ab:;
  /* 11ca63ab cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca63ae pop esi */
  ESI = (pop32());
  /* 11ca63af jne 0x11ca63b6 */
  if (!C.zf) goto L_11ca63b6;
  /* 11ca63b1 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca63b5 ret  */
  ESPCHK(0x11ca638eu, _esp0);
  ESP += 4; return;
L_11ca63b6:;
  /* 11ca63b6 mov eax, edx */
  EAX = (EDX);
  /* 11ca63b8 ret  */
  ESPCHK(0x11ca638eu, _esp0);
  ESP += 4; return;
}

/* FUN_100063b9 @ 0x11ca63b9 (391 bytes, 155 insns) */
void f_11ca63b9(void) {
  FTRACE(0x11ca63b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca63b9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca63ba mov ebp, esp */
  EBP = (ESP);
  /* 11ca63bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ca63bd push ecx */
  push32((uint32_t)(ECX));
  /* 11ca63be push ebx */
  push32((uint32_t)(EBX));
  /* 11ca63bf push esi */
  push32((uint32_t)(ESI));
  /* 11ca63c0 push edi */
  push32((uint32_t)(EDI));
  /* 11ca63c1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca63c3 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca63c6 je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca63c8 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ca63ca push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca63cd call 0x11ca69a9 */
  push32(0x11ca63d2u); f_11ca69a9();
  /* 11ca63d2 mov esi, eax */
  ESI = (EAX);
  /* 11ca63d4 pop ecx */
  ECX = (pop32());
  /* 11ca63d5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca63d7 pop ecx */
  ECX = (pop32());
  /* 11ca63d8 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11ca63db je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca63dd cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca63e0 je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca63e2 mov eax, dword ptr [0x11caad44] */
  EAX = (r32((uint32_t)(0x11caad44)));
  /* 11ca63e7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca63e9 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca63ec sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11ca63ef cmp eax, dword ptr [0x11caad48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11caad48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca63f5 jne 0x11ca6403 */
  if (!C.zf) goto L_11ca6403;
  /* 11ca63f7 push eax */
  push32((uint32_t)(EAX));
  /* 11ca63f8 call 0x11ca6598 */
  push32(0x11ca63fdu); f_11ca6598();
  /* 11ca63fd pop ecx */
  ECX = (pop32());
  /* 11ca63fe mov dword ptr [0x11caad44], eax */
  w32((uint32_t)(0x11caad44), (EAX));
L_11ca6403:;
  /* 11ca6403 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6405 jne 0x11ca645b */
  if (!C.zf) goto L_11ca645b;
  /* 11ca6407 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca640a je 0x11ca6425 */
  if (C.zf) goto L_11ca6425;
  /* 11ca640c cmp dword ptr [0x11caad4c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caad4c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6412 je 0x11ca6425 */
  if (C.zf) goto L_11ca6425;
  /* 11ca6414 call 0x11ca60a3 */
  push32(0x11ca6419u); f_11ca60a3();
  /* 11ca6419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca641b je 0x11ca645b */
  if (C.zf) goto L_11ca645b;
L_11ca641d:;
  /* 11ca641d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ca6420:;
  /* 11ca6420 pop edi */
  EDI = (pop32());
  /* 11ca6421 pop esi */
  ESI = (pop32());
  /* 11ca6422 pop ebx */
  EBX = (pop32());
  /* 11ca6423 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6424 ret  */
  ESPCHK(0x11ca63b9u, _esp0);
  ESP += 4; return;
L_11ca6425:;
  /* 11ca6425 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6427 jne 0x11ca6539 */
  if (!C.zf) goto L_11ca6539;
  /* 11ca642d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca642f call 0x11ca3281 */
  push32(0x11ca6434u); f_11ca3281();
  /* 11ca6434 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6436 pop ecx */
  ECX = (pop32());
  /* 11ca6437 mov dword ptr [0x11caad44], eax */
  w32((uint32_t)(0x11caad44), (EAX));
  /* 11ca643c je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca643e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11ca6440 cmp dword ptr [0x11caad4c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caad4c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6446 jne 0x11ca645b */
  if (!C.zf) goto L_11ca645b;
  /* 11ca6448 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ca644a call 0x11ca3281 */
  push32(0x11ca644fu); f_11ca3281();
  /* 11ca644f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6451 pop ecx */
  ECX = (pop32());
  /* 11ca6452 mov dword ptr [0x11caad4c], eax */
  w32((uint32_t)(0x11caad4c), (EAX));
  /* 11ca6457 je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca6459 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11ca645b:;
  /* 11ca645b sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca645e mov edi, dword ptr [0x11caad44] */
  EDI = (r32((uint32_t)(0x11caad44)));
  /* 11ca6464 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca6467 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6468 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca646b call 0x11ca6540 */
  push32(0x11ca6470u); f_11ca6540();
  /* 11ca6470 mov esi, eax */
  ESI = (EAX);
  /* 11ca6472 pop ecx */
  ECX = (pop32());
  /* 11ca6473 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca6475 pop ecx */
  ECX = (pop32());
  /* 11ca6476 jl 0x11ca64bb */
  if ((C.sf!=C.of)) goto L_11ca64bb;
  /* 11ca6478 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca647b je 0x11ca64bb */
  if (C.zf) goto L_11ca64bb;
  /* 11ca647d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca647f je 0x11ca64b3 */
  if (C.zf) goto L_11ca64b3;
  /* 11ca6481 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11ca6484 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11ca6487 call 0x11ca2bd6 */
  push32(0x11ca648cu); f_11ca2bd6();
  /* 11ca648c pop ecx */
  ECX = (pop32());
L_11ca648d:;
  /* 11ca648d cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6490 je 0x11ca649d */
  if (C.zf) goto L_11ca649d;
  /* 11ca6492 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11ca6495 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6496 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11ca6498 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca649b jmp 0x11ca648d */
  goto L_11ca648d;
L_11ca649d:;
  /* 11ca649d mov eax, esi */
  EAX = (ESI);
  /* 11ca649f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca64a2 push eax */
  push32((uint32_t)(EAX));
  /* 11ca64a3 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11ca64a6 call 0x11ca667a */
  push32(0x11ca64abu); f_11ca667a();
  /* 11ca64ab pop ecx */
  ECX = (pop32());
  /* 11ca64ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca64ae pop ecx */
  ECX = (pop32());
  /* 11ca64af je 0x11ca64ed */
  if (C.zf) goto L_11ca64ed;
  /* 11ca64b1 jmp 0x11ca64e8 */
  goto L_11ca64e8;
L_11ca64b3:;
  /* 11ca64b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca64b6 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11ca64b9 jmp 0x11ca64ed */
  goto L_11ca64ed;
L_11ca64bb:;
  /* 11ca64bb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ca64bd jne 0x11ca6539 */
  if (!C.zf) goto L_11ca6539;
  /* 11ca64bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca64c1 jge 0x11ca64c5 */
  if ((C.sf==C.of)) goto L_11ca64c5;
  /* 11ca64c3 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11ca64c5:;
  /* 11ca64c5 lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11ca64cc push eax */
  push32((uint32_t)(EAX));
  /* 11ca64cd push edi */
  push32((uint32_t)(EDI));
  /* 11ca64ce call 0x11ca667a */
  push32(0x11ca64d3u); f_11ca667a();
  /* 11ca64d3 pop ecx */
  ECX = (pop32());
  /* 11ca64d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca64d6 pop ecx */
  ECX = (pop32());
  /* 11ca64d7 je 0x11ca641d */
  if (C.zf) goto L_11ca641d;
  /* 11ca64dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca64e0 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11ca64e3 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11ca64e8:;
  /* 11ca64e8 mov dword ptr [0x11caad44], eax */
  w32((uint32_t)(0x11caad44), (EAX));
L_11ca64ed:;
  /* 11ca64ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca64f1 je 0x11ca6539 */
  if (C.zf) goto L_11ca6539;
  /* 11ca64f3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca64f6 call 0x11ca34b0 */
  push32(0x11ca64fbu); f_11ca34b0();
  /* 11ca64fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca64fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca64fd push eax */
  push32((uint32_t)(EAX));
  /* 11ca64fe call 0x11ca3281 */
  push32(0x11ca6503u); f_11ca3281();
  /* 11ca6503 mov esi, eax */
  ESI = (EAX);
  /* 11ca6505 pop ecx */
  ECX = (pop32());
  /* 11ca6506 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca6508 pop ecx */
  ECX = (pop32());
  /* 11ca6509 je 0x11ca6539 */
  if (C.zf) goto L_11ca6539;
  /* 11ca650b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca650e push esi */
  push32((uint32_t)(ESI));
  /* 11ca650f call 0x11ca33c0 */
  push32(0x11ca6514u); f_11ca33c0();
  /* 11ca6514 mov eax, esi */
  EAX = (ESI);
  /* 11ca6516 pop ecx */
  ECX = (pop32());
  /* 11ca6517 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca651a pop ecx */
  ECX = (pop32());
  /* 11ca651b add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca651e and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11ca6521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6522 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca6524 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6526 not ebx */
  EBX = (~(EBX));
  /* 11ca6528 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca652a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca652b push esi */
  push32((uint32_t)(ESI));
  /* 11ca652c call dword ptr [0x11ca7008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7008))), 0x11ca6532u);
  /* 11ca6532 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6533 call 0x11ca2bd6 */
  push32(0x11ca6538u); f_11ca2bd6();
  /* 11ca6538 pop ecx */
  ECX = (pop32());
L_11ca6539:;
  /* 11ca6539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca653b jmp 0x11ca6420 */
  goto L_11ca6420;
}

/* FUN_10006540 @ 0x11ca6540 (88 bytes, 35 insns) */
void f_11ca6540(void) {
  FTRACE(0x11ca6540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6540 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6541 mov esi, dword ptr [0x11caad44] */
  ESI = (r32((uint32_t)(0x11caad44)));
  /* 11ca6547 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6548 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca654a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca654c je 0x11ca657b */
  if (C.zf) goto L_11ca657b;
  /* 11ca654e mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11ca6552:;
  /* 11ca6552 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6553 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6554 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11ca6558 call 0x11ca6064 */
  push32(0x11ca655du); f_11ca6064();
  /* 11ca655d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6562 jne 0x11ca6571 */
  if (!C.zf) goto L_11ca6571;
  /* 11ca6564 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ca6566 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11ca6569 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca656b je 0x11ca658b */
  if (C.zf) goto L_11ca658b;
  /* 11ca656d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca656f je 0x11ca658b */
  if (C.zf) goto L_11ca658b;
L_11ca6571:;
  /* 11ca6571 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11ca6574 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6579 jne 0x11ca6552 */
  if (!C.zf) goto L_11ca6552;
L_11ca657b:;
  /* 11ca657b mov eax, esi */
  EAX = (ESI);
  /* 11ca657d sub eax, dword ptr [0x11caad44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11caad44))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6583 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca6586 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11ca6588:;
  /* 11ca6588 pop edi */
  EDI = (pop32());
  /* 11ca6589 pop esi */
  ESI = (pop32());
  /* 11ca658a ret  */
  ESPCHK(0x11ca6540u, _esp0);
  ESP += 4; return;
L_11ca658b:;
  /* 11ca658b mov eax, esi */
  EAX = (ESI);
  /* 11ca658d sub eax, dword ptr [0x11caad44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11caad44))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6593 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ca6596 jmp 0x11ca6588 */
  goto L_11ca6588;
}

/* FUN_10006598 @ 0x11ca6598 (103 bytes, 49 insns) */
void f_11ca6598(void) {
  FTRACE(0x11ca6598u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6598 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6599 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca659d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca659f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca65a1 jne 0x11ca65a7 */
  if (!C.zf) goto L_11ca65a7;
  /* 11ca65a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca65a5 pop edi */
  EDI = (pop32());
  /* 11ca65a6 ret  */
  ESPCHK(0x11ca6598u, _esp0);
  ESP += 4; return;
L_11ca65a7:;
  /* 11ca65a7 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca65aa lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11ca65ad je 0x11ca65b9 */
  if (C.zf) goto L_11ca65b9;
L_11ca65af:;
  /* 11ca65af mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ca65b1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca65b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca65b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ca65b7 jne 0x11ca65af */
  if (!C.zf) goto L_11ca65af;
L_11ca65b9:;
  /* 11ca65b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca65ba push ebp */
  push32((uint32_t)(EBP));
  /* 11ca65bb lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11ca65c2 push esi */
  push32((uint32_t)(ESI));
  /* 11ca65c3 push eax */
  push32((uint32_t)(EAX));
  /* 11ca65c4 call 0x11ca3281 */
  push32(0x11ca65c9u); f_11ca3281();
  /* 11ca65c9 mov esi, eax */
  ESI = (EAX);
  /* 11ca65cb pop ecx */
  ECX = (pop32());
  /* 11ca65cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca65ce mov ebp, esi */
  EBP = (ESI);
  /* 11ca65d0 jne 0x11ca65da */
  if (!C.zf) goto L_11ca65da;
  /* 11ca65d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca65d4 call 0x11ca1ba1 */
  push32(0x11ca65d9u); f_11ca1ba1();
  /* 11ca65d9 pop ecx */
  ECX = (pop32());
L_11ca65da:;
  /* 11ca65da mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11ca65dc mov ebx, edi */
  EBX = (EDI);
L_11ca65de:;
  /* 11ca65de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca65e0 je 0x11ca65f5 */
  if (C.zf) goto L_11ca65f5;
  /* 11ca65e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ca65e3 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca65e6 call 0x11ca6a40 */
  push32(0x11ca65ebu); f_11ca6a40();
  /* 11ca65eb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ca65ed mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11ca65ef pop ecx */
  ECX = (pop32());
  /* 11ca65f0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca65f3 jmp 0x11ca65de */
  goto L_11ca65de;
L_11ca65f5:;
  /* 11ca65f5 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ca65f8 mov eax, ebp */
  EAX = (EBP);
  /* 11ca65fa pop esi */
  ESI = (pop32());
  /* 11ca65fb pop ebp */
  EBP = (pop32());
  /* 11ca65fc pop ebx */
  EBX = (pop32());
  /* 11ca65fd pop edi */
  EDI = (pop32());
  /* 11ca65fe ret  */
  ESPCHK(0x11ca6598u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x11ca6600 (62 bytes, 35 insns) */
void f_11ca6600(void) {
  FTRACE(0x11ca6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6600 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6601 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6603 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6606 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6607 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6608 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6609 push eax */
  push32((uint32_t)(EAX));
  /* 11ca660a push eax */
  push32((uint32_t)(EAX));
  /* 11ca660b push eax */
  push32((uint32_t)(EAX));
  /* 11ca660c push eax */
  push32((uint32_t)(EAX));
  /* 11ca660d push eax */
  push32((uint32_t)(EAX));
  /* 11ca660e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca6614:;
  /* 11ca6614 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ca6616 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6618 je 0x11ca6621 */
  if (C.zf) goto L_11ca6621;
  /* 11ca661a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca661b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ca661b");
  /* 11ca661f jmp 0x11ca6614 */
  goto L_11ca6614;
L_11ca6621:;
  /* 11ca6621 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6624 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ca6627 nop  */
  /* nop */
L_11ca6628:;
  /* 11ca6628 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ca6629 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca662b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca662d je 0x11ca6636 */
  if (C.zf) goto L_11ca6636;
  /* 11ca662f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6630 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ca6630");
  /* 11ca6634 jae 0x11ca6628 */
  if (!C.cf) goto L_11ca6628;
L_11ca6636:;
  /* 11ca6636 mov eax, ecx */
  EAX = (ECX);
  /* 11ca6638 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca663b pop esi */
  ESI = (pop32());
  /* 11ca663c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca663d ret  */
  ESPCHK(0x11ca6600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x11ca6640 (58 bytes, 32 insns) */
void f_11ca6640(void) {
  FTRACE(0x11ca6640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6640 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6641 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6643 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6646 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6647 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6648 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6649 push eax */
  push32((uint32_t)(EAX));
  /* 11ca664a push eax */
  push32((uint32_t)(EAX));
  /* 11ca664b push eax */
  push32((uint32_t)(EAX));
  /* 11ca664c push eax */
  push32((uint32_t)(EAX));
  /* 11ca664d push eax */
  push32((uint32_t)(EAX));
  /* 11ca664e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca6654:;
  /* 11ca6654 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ca6656 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6658 je 0x11ca6661 */
  if (C.zf) goto L_11ca6661;
  /* 11ca665a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ca665b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ca665b");
  /* 11ca665f jmp 0x11ca6654 */
  goto L_11ca6654;
L_11ca6661:;
  /* 11ca6661 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11ca6664:;
  /* 11ca6664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca6666 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6668 je 0x11ca6674 */
  if (C.zf) goto L_11ca6674;
  /* 11ca666a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca666b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ca666b");
  /* 11ca666f jae 0x11ca6664 */
  if (!C.cf) goto L_11ca6664;
  /* 11ca6671 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11ca6674:;
  /* 11ca6674 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6677 pop esi */
  ESI = (pop32());
  /* 11ca6678 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6679 ret  */
  ESPCHK(0x11ca6640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000667a @ 0x11ca667a (781 bytes, 277 insns) */
void f_11ca667a(void) {
  FTRACE(0x11ca667au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca667a push ebp */
  push32((uint32_t)(EBP));
  /* 11ca667b mov ebp, esp */
  EBP = (ESP);
  /* 11ca667d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ca667f push 0x11ca75c0 */
  push32((uint32_t)(0x11ca75c0u));
  /* 11ca6684 push 0x11ca5550 */
  push32((uint32_t)(0x11ca5550u));
  /* 11ca6689 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ca668f push eax */
  push32((uint32_t)(EAX));
  /* 11ca6690 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ca6697 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca669a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca669b push esi */
  push32((uint32_t)(ESI));
  /* 11ca669c push edi */
  push32((uint32_t)(EDI));
  /* 11ca669d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca66a0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca66a2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca66a4 jne 0x11ca66b4 */
  if (!C.zf) goto L_11ca66b4;
  /* 11ca66a6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca66a9 call 0x11ca3281 */
  push32(0x11ca66aeu); f_11ca3281();
  /* 11ca66ae pop ecx */
  ECX = (pop32());
  /* 11ca66af jmp 0x11ca699a */
  jmp_ind(0x11ca699au); return;
L_11ca66b4:;
  /* 11ca66b4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca66b7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca66b9 jne 0x11ca66c7 */
  if (!C.zf) goto L_11ca66c7;
  /* 11ca66bb push ebx */
  push32((uint32_t)(EBX));
  /* 11ca66bc call 0x11ca2bd6 */
  push32(0x11ca66c1u); f_11ca2bd6();
  /* 11ca66c1 pop ecx */
  ECX = (pop32());
  /* 11ca66c2 jmp 0x11ca6998 */
  jmp_ind(0x11ca6998u); return;
L_11ca66c7:;
  /* 11ca66c7 mov eax, dword ptr [0x11cab2ac] */
  EAX = (r32((uint32_t)(0x11cab2ac)));
  /* 11ca66cc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca66cf jne 0x11ca680e */
  if (!C.zf) goto L_11ca680e;
L_11ca66d5:;
  /* 11ca66d5 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11ca66d8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca66db ja 0x11ca67d2 */
  if ((!C.cf&&!C.zf)) goto L_11ca67d2;
  /* 11ca66e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca66e3 call 0x11ca2b60 */
  push32(0x11ca66e8u); f_11ca2b60();
  /* 11ca66e8 pop ecx */
  ECX = (pop32());
  /* 11ca66e9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ca66ec push ebx */
  push32((uint32_t)(EBX));
  /* 11ca66ed call 0x11ca4087 */
  push32(0x11ca66f2u); f_11ca4087();
  /* 11ca66f2 pop ecx */
  ECX = (pop32());
  /* 11ca66f3 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ca66f6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca66f8 je 0x11ca67a2 */
  if (C.zf) goto L_11ca67a2;
  /* 11ca66fe cmp esi, dword ptr [0x11cab084] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11cab084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6704 ja 0x11ca6752 */
  if ((!C.cf&&!C.zf)) goto L_11ca6752;
  /* 11ca6706 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6707 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6708 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6709 call 0x11ca4890 */
  push32(0x11ca670eu); f_11ca4890();
  /* 11ca670e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6713 je 0x11ca671a */
  if (C.zf) goto L_11ca671a;
  /* 11ca6715 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11ca6718 jmp 0x11ca6752 */
  goto L_11ca6752;
L_11ca671a:;
  /* 11ca671a push esi */
  push32((uint32_t)(ESI));
  /* 11ca671b call 0x11ca43db */
  push32(0x11ca6720u); f_11ca43db();
  /* 11ca6720 pop ecx */
  ECX = (pop32());
  /* 11ca6721 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca6724 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6726 je 0x11ca6752 */
  if (C.zf) goto L_11ca6752;
  /* 11ca6728 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11ca672b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca672c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ca672f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6731 jb 0x11ca6735 */
  if (C.cf) goto L_11ca6735;
  /* 11ca6733 mov eax, esi */
  EAX = (ESI);
L_11ca6735:;
  /* 11ca6735 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6736 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6737 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca673a call 0x11ca3920 */
  push32(0x11ca673fu); f_11ca3920();
  /* 11ca673f push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6740 call 0x11ca4087 */
  push32(0x11ca6745u); f_11ca4087();
  /* 11ca6745 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ca6748 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6749 push eax */
  push32((uint32_t)(EAX));
  /* 11ca674a call 0x11ca40b2 */
  push32(0x11ca674fu); f_11ca40b2();
  /* 11ca674f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca6752:;
  /* 11ca6752 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6755 jne 0x11ca67a2 */
  if (!C.zf) goto L_11ca67a2;
  /* 11ca6757 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6759 jne 0x11ca6761 */
  if (!C.zf) goto L_11ca6761;
  /* 11ca675b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca675d pop esi */
  ESI = (pop32());
  /* 11ca675e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11ca6761:;
  /* 11ca6761 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6764 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca6767 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11ca676a push esi */
  push32((uint32_t)(ESI));
  /* 11ca676b push edi */
  push32((uint32_t)(EDI));
  /* 11ca676c push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca6772 call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca6778u);
  /* 11ca6778 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca677b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca677d je 0x11ca67a2 */
  if (C.zf) goto L_11ca67a2;
  /* 11ca677f mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11ca6782 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ca6783 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ca6786 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6788 jb 0x11ca678c */
  if (C.cf) goto L_11ca678c;
  /* 11ca678a mov eax, esi */
  EAX = (ESI);
L_11ca678c:;
  /* 11ca678c push eax */
  push32((uint32_t)(EAX));
  /* 11ca678d push ebx */
  push32((uint32_t)(EBX));
  /* 11ca678e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca6791 call 0x11ca3920 */
  push32(0x11ca6796u); f_11ca3920();
  /* 11ca6796 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6797 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11ca679a call 0x11ca40b2 */
  push32(0x11ca679fu); f_11ca40b2();
  /* 11ca679f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca67a2:;
  /* 11ca67a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca67a6 call 0x11ca6805 */
  push32(0x11ca67abu); f_11ca6805();
  /* 11ca67ab cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca67ae jne 0x11ca67d2 */
  if (!C.zf) goto L_11ca67d2;
  /* 11ca67b0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca67b2 jne 0x11ca67b7 */
  if (!C.zf) goto L_11ca67b7;
  /* 11ca67b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca67b6 pop esi */
  ESI = (pop32());
L_11ca67b7:;
  /* 11ca67b7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca67ba and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca67bd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11ca67c0 push esi */
  push32((uint32_t)(ESI));
  /* 11ca67c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca67c2 push edi */
  push32((uint32_t)(EDI));
  /* 11ca67c3 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca67c9 call dword ptr [0x11ca703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca703c))), 0x11ca67cfu);
  /* 11ca67cf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ca67d2:;
  /* 11ca67d2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ca67d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca67d7 jne 0x11ca699a */
  if (!C.zf) { jmp_ind(0x11ca699au); return; }
  /* 11ca67dd cmp dword ptr [0x11caafac], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caafac))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca67e3 je 0x11ca699a */
  if (C.zf) { jmp_ind(0x11ca699au); return; }
  /* 11ca67e9 push esi */
  push32((uint32_t)(ESI));
  /* 11ca67ea call 0x11ca53de */
  push32(0x11ca67efu); f_11ca53de();
  /* 11ca67ef pop ecx */
  ECX = (pop32());
  /* 11ca67f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca67f2 jne 0x11ca66d5 */
  if (!C.zf) goto L_11ca66d5;
  /* 11ca67f8 jmp 0x11ca6998 */
  jmp_ind(0x11ca6998u); return;
  /* 11ca67fd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6800 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6803 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca6805 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca6807 call 0x11ca2bc1 */
  push32(0x11ca680cu); f_11ca2bc1();
  /* 11ca680c pop ecx */
  ECX = (pop32());
  /* 11ca680d ret  */
  ESPCHK(0x11ca667au, _esp0);
  ESP += 4; return;
L_11ca680e:;
  /* 11ca680e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6811 jne 0x11ca695e */
  if (!C.zf) goto L_11ca695e;
  /* 11ca6817 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca681a ja 0x11ca682e */
  if ((!C.cf&&!C.zf)) goto L_11ca682e;
  /* 11ca681c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca681e jbe 0x11ca6828 */
  if ((C.cf||C.zf)) goto L_11ca6828;
  /* 11ca6820 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6823 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca6826 jmp 0x11ca682b */
  goto L_11ca682b;
L_11ca6828:;
  /* 11ca6828 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ca682a pop esi */
  ESI = (pop32());
L_11ca682b:;
  /* 11ca682b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11ca682e:;
  /* 11ca682e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11ca6831 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6834 ja 0x11ca692d */
  if ((!C.cf&&!C.zf)) goto L_11ca692d;
  /* 11ca683a push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca683c call 0x11ca2b60 */
  push32(0x11ca6841u); f_11ca2b60();
  /* 11ca6841 pop ecx */
  ECX = (pop32());
  /* 11ca6842 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ca6849 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11ca684c push eax */
  push32((uint32_t)(EAX));
  /* 11ca684d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11ca6850 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6851 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6852 call 0x11ca4de2 */
  push32(0x11ca6857u); f_11ca4de2();
  /* 11ca6857 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca685a mov edi, eax */
  EDI = (EAX);
  /* 11ca685c mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11ca685f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ca6861 je 0x11ca6911 */
  if (C.zf) goto L_11ca6911;
  /* 11ca6867 cmp esi, dword ptr [0x11caa664] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11caa664))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca686d jae 0x11ca68cb */
  if (!C.cf) goto L_11ca68cb;
  /* 11ca686f mov ebx, esi */
  EBX = (ESI);
  /* 11ca6871 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11ca6874 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6875 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6876 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11ca6879 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11ca687c call 0x11ca51aa */
  push32(0x11ca6881u); f_11ca51aa();
  /* 11ca6881 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6886 je 0x11ca6890 */
  if (C.zf) goto L_11ca6890;
  /* 11ca6888 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca688b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca688e jmp 0x11ca68c8 */
  goto L_11ca68c8;
L_11ca6890:;
  /* 11ca6890 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6891 call 0x11ca4e7e */
  push32(0x11ca6896u); f_11ca4e7e();
  /* 11ca6896 pop ecx */
  ECX = (pop32());
  /* 11ca6897 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca689a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca689c je 0x11ca68c8 */
  if (C.zf) goto L_11ca68c8;
  /* 11ca689e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca68a1 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca68a4 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ca68a7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca68a9 jb 0x11ca68ad */
  if (C.cf) goto L_11ca68ad;
  /* 11ca68ab mov eax, esi */
  EAX = (ESI);
L_11ca68ad:;
  /* 11ca68ad push eax */
  push32((uint32_t)(EAX));
  /* 11ca68ae push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca68b1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca68b4 call 0x11ca3920 */
  push32(0x11ca68b9u); f_11ca3920();
  /* 11ca68b9 push edi */
  push32((uint32_t)(EDI));
  /* 11ca68ba push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11ca68bd push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11ca68c0 call 0x11ca4e39 */
  push32(0x11ca68c5u); f_11ca4e39();
  /* 11ca68c5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca68c8:;
  /* 11ca68c8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ca68cb:;
  /* 11ca68cb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca68cf jne 0x11ca6924 */
  if (!C.zf) goto L_11ca6924;
  /* 11ca68d1 push esi */
  push32((uint32_t)(ESI));
  /* 11ca68d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca68d4 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca68da call dword ptr [0x11ca7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca7058))), 0x11ca68e0u);
  /* 11ca68e0 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ca68e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca68e5 je 0x11ca6924 */
  if (C.zf) goto L_11ca6924;
  /* 11ca68e7 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11ca68ea shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ca68ed mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ca68f0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca68f2 jb 0x11ca68f6 */
  if (C.cf) goto L_11ca68f6;
  /* 11ca68f4 mov eax, esi */
  EAX = (ESI);
L_11ca68f6:;
  /* 11ca68f6 push eax */
  push32((uint32_t)(EAX));
  /* 11ca68f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca68f8 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ca68fb call 0x11ca3920 */
  push32(0x11ca6900u); f_11ca3920();
  /* 11ca6900 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6901 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11ca6904 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11ca6907 call 0x11ca4e39 */
  push32(0x11ca690cu); f_11ca4e39();
  /* 11ca690c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca690f jmp 0x11ca6924 */
  goto L_11ca6924;
L_11ca6911:;
  /* 11ca6911 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6912 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6913 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca6915 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca691b call dword ptr [0x11ca703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca703c))), 0x11ca6921u);
  /* 11ca6921 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ca6924:;
  /* 11ca6924 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ca6928 call 0x11ca6953 */
  push32(0x11ca692du); f_11ca6953();
L_11ca692d:;
  /* 11ca692d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ca6930 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6932 jne 0x11ca699a */
  if (!C.zf) { jmp_ind(0x11ca699au); return; }
  /* 11ca6934 cmp dword ptr [0x11caafac], edi */
  { uint32_t _a=(r32((uint32_t)(0x11caafac))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca693a je 0x11ca699a */
  if (C.zf) { jmp_ind(0x11ca699au); return; }
  /* 11ca693c push esi */
  push32((uint32_t)(ESI));
  /* 11ca693d call 0x11ca53de */
  push32(0x11ca6942u); f_11ca53de();
  /* 11ca6942 pop ecx */
  ECX = (pop32());
  /* 11ca6943 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6945 jne 0x11ca682e */
  if (!C.zf) goto L_11ca682e;
  /* 11ca694b jmp 0x11ca6998 */
  jmp_ind(0x11ca6998u); return;
  /* 11ca694d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6950 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6953 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca6955 call 0x11ca2bc1 */
  push32(0x11ca695au); f_11ca2bc1();
  /* 11ca695a pop ecx */
  ECX = (pop32());
  /* 11ca695b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca695d ret  */
  ESPCHK(0x11ca667au, _esp0);
  ESP += 4; return;
L_11ca695e:;
  /* 11ca695e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6960 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6963 ja 0x11ca6981 */
  if ((!C.cf&&!C.zf)) goto L_11ca6981;
  /* 11ca6965 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6967 jne 0x11ca696c */
  if (!C.zf) goto L_11ca696c;
  /* 11ca6969 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca696b pop esi */
  ESI = (pop32());
L_11ca696c:;
  /* 11ca696c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca696f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ca6972 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6973 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6974 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6975 push dword ptr [0x11cab2a8] */
  push32((uint32_t)(r32((uint32_t)(0x11cab2a8))));
  /* 11ca697b call dword ptr [0x11ca703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ca703c))), 0x11ca6981u);
L_11ca6981:;
  /* 11ca6981 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6983 jne 0x11ca699a */
  if (!C.zf) { jmp_ind(0x11ca699au); return; }
}

/* FUN_10006805 @ 0x11ca6805 (9 bytes, 4 insns) */
void f_11ca6805(void) {
  FTRACE(0x11ca6805u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6805 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca6807 call 0x11ca2bc1 */
  push32(0x11ca680cu); f_11ca2bc1();
  /* 11ca680c pop ecx */
  ECX = (pop32());
  /* 11ca680d ret  */
  ESPCHK(0x11ca6805u, _esp0);
  ESP += 4; return;
}

