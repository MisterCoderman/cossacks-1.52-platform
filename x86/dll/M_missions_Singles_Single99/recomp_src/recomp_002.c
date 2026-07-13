#include "recomp.h"

/* FUN_100150b0 @ 0x121250b0 (393 bytes, 123 insns) */
void f_121250b0(void) {
  FTRACE(0x121250b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121250b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121250b1 mov ebp, esp */
  EBP = (ESP);
  /* 121250b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121250b6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121250ba jne 0x121250c6 */
  if (!C.zf) goto L_121250c6;
  /* 121250bc mov eax, dword ptr [0x12142c98] */
  EAX = (r32((uint32_t)(0x12142c98)));
  /* 121250c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121250c4 jmp 0x121250cc */
  goto L_121250cc;
L_121250c6:;
  /* 121250c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121250c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121250cc:;
  /* 121250cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121250cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121250d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121250d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121250d8 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 121250dd call dword ptr [0x121463d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d0))), 0x121250e3u);
  /* 121250e3 cmp dword ptr [0x12143b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121250ea je 0x1212510a */
  if (C.zf) goto L_1212510a;
  /* 121250ec push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 121250f1 call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x121250f7u);
  /* 121250f7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121250f9 call 0x1211b770 */
  push32(0x121250feu); f_1211b770();
  /* 121250fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125101 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12125108 jmp 0x12125111 */
  goto L_12125111;
L_1212510a:;
  /* 1212510a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12125111:;
  /* 12125111 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125115 jbe 0x12125202 */
  if ((C.cf||C.zf)) goto L_12125202;
  /* 1212511b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212511e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12125120 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12125123 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12125127 je 0x12125131 */
  if (C.zf) goto L_12125131;
  /* 12125129 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212512d je 0x12125136 */
  if (C.zf) goto L_12125136;
  /* 1212512f jmp 0x12125190 */
  goto L_12125190;
L_12125131:;
  /* 12125131 jmp 0x12125202 */
  goto L_12125202;
L_12125136:;
  /* 12125136 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125139 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212513c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1212513f mov dword ptr [0x12143b50], 0 */
  w32((uint32_t)(0x12143b50), (0x0u));
  /* 12125149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212514c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1212514f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125152 jne 0x12125167 */
  if (!C.zf) goto L_12125167;
  /* 12125154 mov dword ptr [0x12143b50], 1 */
  w32((uint32_t)(0x12143b50), (0x1u));
  /* 1212515e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125161 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125164 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12125167:;
  /* 12125167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212516a push ecx */
  push32((uint32_t)(ECX));
  /* 1212516b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1212516e push edx */
  push32((uint32_t)(EDX));
  /* 1212516f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12125172 push eax */
  push32((uint32_t)(EAX));
  /* 12125173 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125176 push ecx */
  push32((uint32_t)(ECX));
  /* 12125177 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212517a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212517c push eax */
  push32((uint32_t)(EAX));
  /* 1212517d call 0x12125240 */
  push32(0x12125182u); f_12125240();
  /* 12125182 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125185 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125188 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212518b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1212518e jmp 0x121251fd */
  goto L_121251fd;
L_12125190:;
  /* 12125190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12125195 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12125197 mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 1212519d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1212519f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121251a3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121251a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121251ab je 0x121251d8 */
  if (C.zf) goto L_121251d8;
  /* 121251ad cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121251b1 jbe 0x121251d8 */
  if ((C.cf||C.zf)) goto L_121251d8;
  /* 121251b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121251b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121251b9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121251bb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121251bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121251c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121251c3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121251c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121251c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121251cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121251cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121251d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121251d5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121251d8:;
  /* 121251d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121251db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121251de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121251e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121251e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121251e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121251e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121251eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121251ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121251f1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121251f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121251f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121251fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121251fd:;
  /* 121251fd jmp 0x12125111 */
  goto L_12125111;
L_12125202:;
  /* 12125202 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125206 je 0x12125214 */
  if (C.zf) goto L_12125214;
  /* 12125208 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1212520a call 0x1211b810 */
  push32(0x1212520fu); f_1211b810();
  /* 1212520f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125212 jmp 0x1212521f */
  goto L_1212521f;
L_12125214:;
  /* 12125214 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12125219 call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x1212521fu);
L_1212521f:;
  /* 1212521f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125223 jbe 0x12125233 */
  if ((C.cf||C.zf)) goto L_12125233;
  /* 12125225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125228 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1212522b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212522e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125231 jmp 0x12125235 */
  goto L_12125235;
L_12125233:;
  /* 12125233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12125235:;
  /* 12125235 mov esp, ebp */
  ESP = (EBP);
  /* 12125237 pop ebp */
  EBP = (pop32());
  /* 12125238 ret  */
  ESPCHK(0x121250b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015240 @ 0x12125240 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12125240(void) {
  FTRACE(0x12125240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125240 push ebp */
  push32((uint32_t)(EBP));
  /* 12125241 mov ebp, esp */
  EBP = (ESP);
  /* 12125243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125246 push esi */
  push32((uint32_t)(ESI));
  /* 12125247 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1212524b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1212524e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125251 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125254 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12125257 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212525b ja 0x121257a8 */
  if ((!C.cf&&!C.zf)) goto L_121257a8;
  /* 12125261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12125266 mov dl, byte ptr [eax + 0x12125809] */
  DL = (r8((uint32_t)(EAX + 0x12125809)));
  /* 1212526c jmp dword ptr [edx*4 + 0x121257ad] */
  switch (EDX) {
    case 0: goto L_12125786;
    case 1: goto L_12125295;
    case 2: goto L_121252db;
    case 3: goto L_12125428;
    case 4: goto L_12125450;
    case 5: goto L_121254ef;
    case 6: goto L_1212555b;
    case 7: goto L_12125584;
    case 8: goto L_121255c5;
    case 9: goto L_121256a7;
    case 10: goto L_1212570e;
    case 11: goto L_1212575b;
    case 12: goto L_12125273;
    case 13: goto L_121252b8;
    case 14: goto L_121252fe;
    case 15: goto L_121253fe;
    case 16: goto L_12125495;
    case 17: goto L_121254c2;
    case 18: goto L_12125517;
    case 19: goto L_1212559b;
    case 20: goto L_12125649;
    case 21: goto L_121256d8;
    case 22: goto L_121257a8;
    default: x86_unimpl("switch@0x1212526c out of table"); return;
  }
L_12125273:;
  /* 12125273 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125276 push ecx */
  push32((uint32_t)(ECX));
  /* 12125277 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212527a push edx */
  push32((uint32_t)(EDX));
  /* 1212527b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212527e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12125281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125284 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12125287 push eax */
  push32((uint32_t)(EAX));
  /* 12125288 call 0x12125860 */
  push32(0x1212528du); f_12125860();
  /* 1212528d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125290 jmp 0x121257a8 */
  goto L_121257a8;
L_12125295:;
  /* 12125295 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125298 push ecx */
  push32((uint32_t)(ECX));
  /* 12125299 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212529c push edx */
  push32((uint32_t)(EDX));
  /* 1212529d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121252a0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121252a3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121252a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121252aa push eax */
  push32((uint32_t)(EAX));
  /* 121252ab call 0x12125860 */
  push32(0x121252b0u); f_12125860();
  /* 121252b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121252b3 jmp 0x121257a8 */
  goto L_121257a8;
L_121252b8:;
  /* 121252b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121252bb push ecx */
  push32((uint32_t)(ECX));
  /* 121252bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121252bf push edx */
  push32((uint32_t)(EDX));
  /* 121252c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121252c3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121252c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121252c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121252cd push eax */
  push32((uint32_t)(EAX));
  /* 121252ce call 0x12125860 */
  push32(0x121252d3u); f_12125860();
  /* 121252d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121252d6 jmp 0x121257a8 */
  goto L_121257a8;
L_121252db:;
  /* 121252db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121252de push ecx */
  push32((uint32_t)(ECX));
  /* 121252df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121252e2 push edx */
  push32((uint32_t)(EDX));
  /* 121252e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121252e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121252e9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121252ec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121252f0 push eax */
  push32((uint32_t)(EAX));
  /* 121252f1 call 0x12125860 */
  push32(0x121252f6u); f_12125860();
  /* 121252f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121252f9 jmp 0x121257a8 */
  goto L_121257a8;
L_121252fe:;
  /* 121252fe cmp dword ptr [0x12143b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125305 je 0x12125386 */
  if (C.zf) goto L_12125386;
  /* 12125307 mov dword ptr [0x12143b50], 0 */
  w32((uint32_t)(0x12143b50), (0x0u));
  /* 12125311 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125314 push ecx */
  push32((uint32_t)(ECX));
  /* 12125315 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125318 push edx */
  push32((uint32_t)(EDX));
  /* 12125319 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212531c push eax */
  push32((uint32_t)(EAX));
  /* 1212531d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125320 push ecx */
  push32((uint32_t)(ECX));
  /* 12125321 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125324 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1212532a push eax */
  push32((uint32_t)(EAX));
  /* 1212532b call 0x12125a10 */
  push32(0x12125330u); f_12125a10();
  /* 12125330 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125333 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125336 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125339 jne 0x12125340 */
  if (!C.zf) goto L_12125340;
  /* 1212533b jmp 0x121257a8 */
  goto L_121257a8;
L_12125340:;
  /* 12125340 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125343 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125345 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12125348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212534b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1212534d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125350 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125353 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12125355 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125358 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1212535a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212535d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125360 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12125362 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125365 push ecx */
  push32((uint32_t)(ECX));
  /* 12125366 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125369 push edx */
  push32((uint32_t)(EDX));
  /* 1212536a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212536d push eax */
  push32((uint32_t)(EAX));
  /* 1212536e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125371 push ecx */
  push32((uint32_t)(ECX));
  /* 12125372 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125375 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1212537b push eax */
  push32((uint32_t)(EAX));
  /* 1212537c call 0x12125a10 */
  push32(0x12125381u); f_12125a10();
  /* 12125381 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125384 jmp 0x121253f9 */
  goto L_121253f9;
L_12125386:;
  /* 12125386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125389 push ecx */
  push32((uint32_t)(ECX));
  /* 1212538a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212538d push edx */
  push32((uint32_t)(EDX));
  /* 1212538e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125391 push eax */
  push32((uint32_t)(EAX));
  /* 12125392 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125395 push ecx */
  push32((uint32_t)(ECX));
  /* 12125396 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125399 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1212539f push eax */
  push32((uint32_t)(EAX));
  /* 121253a0 call 0x12125a10 */
  push32(0x121253a5u); f_12125a10();
  /* 121253a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121253a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121253ab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121253ae jne 0x121253b5 */
  if (!C.zf) goto L_121253b5;
  /* 121253b0 jmp 0x121257a8 */
  goto L_121257a8;
L_121253b5:;
  /* 121253b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121253b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121253ba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121253bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121253c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121253c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121253c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121253c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121253ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121253cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121253cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121253d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121253d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121253d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121253da push ecx */
  push32((uint32_t)(ECX));
  /* 121253db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121253de push edx */
  push32((uint32_t)(EDX));
  /* 121253df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121253e2 push eax */
  push32((uint32_t)(EAX));
  /* 121253e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121253e6 push ecx */
  push32((uint32_t)(ECX));
  /* 121253e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121253ea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 121253f0 push eax */
  push32((uint32_t)(EAX));
  /* 121253f1 call 0x12125a10 */
  push32(0x121253f6u); f_12125a10();
  /* 121253f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121253f9:;
  /* 121253f9 jmp 0x121257a8 */
  goto L_121257a8;
L_121253fe:;
  /* 121253fe mov ecx, dword ptr [0x12143b50] */
  ECX = (r32((uint32_t)(0x12143b50)));
  /* 12125404 mov dword ptr [0x12143b60], ecx */
  w32((uint32_t)(0x12143b60), (ECX));
  /* 1212540a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212540d push edx */
  push32((uint32_t)(EDX));
  /* 1212540e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125411 push eax */
  push32((uint32_t)(EAX));
  /* 12125412 push 2 */
  push32((uint32_t)(0x2u));
  /* 12125414 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125417 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1212541a push edx */
  push32((uint32_t)(EDX));
  /* 1212541b call 0x121258b0 */
  push32(0x12125420u); f_121258b0();
  /* 12125420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125423 jmp 0x121257a8 */
  goto L_121257a8;
L_12125428:;
  /* 12125428 mov eax, dword ptr [0x12143b50] */
  EAX = (r32((uint32_t)(0x12143b50)));
  /* 1212542d mov dword ptr [0x12143b60], eax */
  w32((uint32_t)(0x12143b60), (EAX));
  /* 12125432 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125435 push ecx */
  push32((uint32_t)(ECX));
  /* 12125436 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125439 push edx */
  push32((uint32_t)(EDX));
  /* 1212543a push 2 */
  push32((uint32_t)(0x2u));
  /* 1212543c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212543f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12125442 push ecx */
  push32((uint32_t)(ECX));
  /* 12125443 call 0x121258b0 */
  push32(0x12125448u); f_121258b0();
  /* 12125448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212544b jmp 0x121257a8 */
  goto L_121257a8;
L_12125450:;
  /* 12125450 mov edx, dword ptr [0x12143b50] */
  EDX = (r32((uint32_t)(0x12143b50)));
  /* 12125456 mov dword ptr [0x12143b60], edx */
  w32((uint32_t)(0x12143b60), (EDX));
  /* 1212545c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212545f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12125462 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125463 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12125468 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1212546a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1212546d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125471 jne 0x1212547a */
  if (!C.zf) goto L_1212547a;
  /* 12125473 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1212547a:;
  /* 1212547a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212547d push edx */
  push32((uint32_t)(EDX));
  /* 1212547e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125481 push eax */
  push32((uint32_t)(EAX));
  /* 12125482 push 2 */
  push32((uint32_t)(0x2u));
  /* 12125484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125487 push ecx */
  push32((uint32_t)(ECX));
  /* 12125488 call 0x121258b0 */
  push32(0x1212548du); f_121258b0();
  /* 1212548d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125490 jmp 0x121257a8 */
  goto L_121257a8;
L_12125495:;
  /* 12125495 mov edx, dword ptr [0x12143b50] */
  EDX = (r32((uint32_t)(0x12143b50)));
  /* 1212549b mov dword ptr [0x12143b60], edx */
  w32((uint32_t)(0x12143b60), (EDX));
  /* 121254a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121254a4 push eax */
  push32((uint32_t)(EAX));
  /* 121254a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121254a8 push ecx */
  push32((uint32_t)(ECX));
  /* 121254a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 121254ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121254ae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121254b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121254b4 push eax */
  push32((uint32_t)(EAX));
  /* 121254b5 call 0x121258b0 */
  push32(0x121254bau); f_121258b0();
  /* 121254ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121254bd jmp 0x121257a8 */
  goto L_121257a8;
L_121254c2:;
  /* 121254c2 mov ecx, dword ptr [0x12143b50] */
  ECX = (r32((uint32_t)(0x12143b50)));
  /* 121254c8 mov dword ptr [0x12143b60], ecx */
  w32((uint32_t)(0x12143b60), (ECX));
  /* 121254ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121254d1 push edx */
  push32((uint32_t)(EDX));
  /* 121254d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121254d5 push eax */
  push32((uint32_t)(EAX));
  /* 121254d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121254d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121254db mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121254de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121254e1 push edx */
  push32((uint32_t)(EDX));
  /* 121254e2 call 0x121258b0 */
  push32(0x121254e7u); f_121258b0();
  /* 121254e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121254ea jmp 0x121257a8 */
  goto L_121257a8;
L_121254ef:;
  /* 121254ef mov eax, dword ptr [0x12143b50] */
  EAX = (r32((uint32_t)(0x12143b50)));
  /* 121254f4 mov dword ptr [0x12143b60], eax */
  w32((uint32_t)(0x12143b60), (EAX));
  /* 121254f9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121254fc push ecx */
  push32((uint32_t)(ECX));
  /* 121254fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125500 push edx */
  push32((uint32_t)(EDX));
  /* 12125501 push 2 */
  push32((uint32_t)(0x2u));
  /* 12125503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125506 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12125509 push ecx */
  push32((uint32_t)(ECX));
  /* 1212550a call 0x121258b0 */
  push32(0x1212550fu); f_121258b0();
  /* 1212550f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125512 jmp 0x121257a8 */
  goto L_121257a8;
L_12125517:;
  /* 12125517 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212551a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212551e jg 0x1212553c */
  if ((!C.zf&&C.sf==C.of)) goto L_1212553c;
  /* 12125520 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125523 push eax */
  push32((uint32_t)(EAX));
  /* 12125524 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125527 push ecx */
  push32((uint32_t)(ECX));
  /* 12125528 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212552b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12125531 push eax */
  push32((uint32_t)(EAX));
  /* 12125532 call 0x12125860 */
  push32(0x12125537u); f_12125860();
  /* 12125537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212553a jmp 0x12125556 */
  goto L_12125556;
L_1212553c:;
  /* 1212553c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212553f push ecx */
  push32((uint32_t)(ECX));
  /* 12125540 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125543 push edx */
  push32((uint32_t)(EDX));
  /* 12125544 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125547 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1212554d push ecx */
  push32((uint32_t)(ECX));
  /* 1212554e call 0x12125860 */
  push32(0x12125553u); f_12125860();
  /* 12125553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12125556:;
  /* 12125556 jmp 0x121257a8 */
  goto L_121257a8;
L_1212555b:;
  /* 1212555b mov edx, dword ptr [0x12143b50] */
  EDX = (r32((uint32_t)(0x12143b50)));
  /* 12125561 mov dword ptr [0x12143b60], edx */
  w32((uint32_t)(0x12143b60), (EDX));
  /* 12125567 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212556a push eax */
  push32((uint32_t)(EAX));
  /* 1212556b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212556e push ecx */
  push32((uint32_t)(ECX));
  /* 1212556f push 2 */
  push32((uint32_t)(0x2u));
  /* 12125571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125574 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125576 push eax */
  push32((uint32_t)(EAX));
  /* 12125577 call 0x121258b0 */
  push32(0x1212557cu); f_121258b0();
  /* 1212557c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212557f jmp 0x121257a8 */
  goto L_121257a8;
L_12125584:;
  /* 12125584 mov ecx, dword ptr [0x12143b50] */
  ECX = (r32((uint32_t)(0x12143b50)));
  /* 1212558a mov dword ptr [0x12143b60], ecx */
  w32((uint32_t)(0x12143b60), (ECX));
  /* 12125590 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125593 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12125596 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12125599 jmp 0x121255ed */
  goto L_121255ed;
L_1212559b:;
  /* 1212559b mov ecx, dword ptr [0x12143b50] */
  ECX = (r32((uint32_t)(0x12143b50)));
  /* 121255a1 mov dword ptr [0x12143b60], ecx */
  w32((uint32_t)(0x12143b60), (ECX));
  /* 121255a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121255aa push edx */
  push32((uint32_t)(EDX));
  /* 121255ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121255ae push eax */
  push32((uint32_t)(EAX));
  /* 121255af push 1 */
  push32((uint32_t)(0x1u));
  /* 121255b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121255b4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121255b7 push edx */
  push32((uint32_t)(EDX));
  /* 121255b8 call 0x121258b0 */
  push32(0x121255bdu); f_121258b0();
  /* 121255bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121255c0 jmp 0x121257a8 */
  goto L_121257a8;
L_121255c5:;
  /* 121255c5 mov eax, dword ptr [0x12143b50] */
  EAX = (r32((uint32_t)(0x12143b50)));
  /* 121255ca mov dword ptr [0x12143b60], eax */
  w32((uint32_t)(0x12143b60), (EAX));
  /* 121255cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121255d2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121255d6 jne 0x121255e1 */
  if (!C.zf) goto L_121255e1;
  /* 121255d8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 121255df jmp 0x121255ed */
  goto L_121255ed;
L_121255e1:;
  /* 121255e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121255e4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121255e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121255ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121255ed:;
  /* 121255ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121255f0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121255f3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121255f6 jge 0x12125601 */
  if ((C.sf==C.of)) goto L_12125601;
  /* 121255f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121255ff jmp 0x1212562e */
  goto L_1212562e;
L_12125601:;
  /* 12125601 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125604 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12125607 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125608 mov ecx, 7 */
  ECX = (0x7u);
  /* 1212560d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1212560f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12125612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125615 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12125618 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125619 mov ecx, 7 */
  ECX = (0x7u);
  /* 1212561e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12125620 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125623 jl 0x1212562e */
  if ((C.sf!=C.of)) goto L_1212562e;
  /* 12125625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212562b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1212562e:;
  /* 1212562e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125631 push eax */
  push32((uint32_t)(EAX));
  /* 12125632 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125635 push ecx */
  push32((uint32_t)(ECX));
  /* 12125636 push 2 */
  push32((uint32_t)(0x2u));
  /* 12125638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212563b push edx */
  push32((uint32_t)(EDX));
  /* 1212563c call 0x121258b0 */
  push32(0x12125641u); f_121258b0();
  /* 12125641 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125644 jmp 0x121257a8 */
  goto L_121257a8;
L_12125649:;
  /* 12125649 cmp dword ptr [0x12143b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125650 je 0x12125680 */
  if (C.zf) goto L_12125680;
  /* 12125652 mov dword ptr [0x12143b50], 0 */
  w32((uint32_t)(0x12143b50), (0x0u));
  /* 1212565c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212565f push eax */
  push32((uint32_t)(EAX));
  /* 12125660 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125663 push ecx */
  push32((uint32_t)(ECX));
  /* 12125664 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125667 push edx */
  push32((uint32_t)(EDX));
  /* 12125668 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212566b push eax */
  push32((uint32_t)(EAX));
  /* 1212566c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212566f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12125675 push edx */
  push32((uint32_t)(EDX));
  /* 12125676 call 0x12125a10 */
  push32(0x1212567bu); f_12125a10();
  /* 1212567b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212567e jmp 0x121256a2 */
  goto L_121256a2;
L_12125680:;
  /* 12125680 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125683 push eax */
  push32((uint32_t)(EAX));
  /* 12125684 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125687 push ecx */
  push32((uint32_t)(ECX));
  /* 12125688 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212568b push edx */
  push32((uint32_t)(EDX));
  /* 1212568c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212568f push eax */
  push32((uint32_t)(EAX));
  /* 12125690 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125693 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12125699 push edx */
  push32((uint32_t)(EDX));
  /* 1212569a call 0x12125a10 */
  push32(0x1212569fu); f_12125a10();
  /* 1212569f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121256a2:;
  /* 121256a2 jmp 0x121257a8 */
  goto L_121257a8;
L_121256a7:;
  /* 121256a7 mov dword ptr [0x12143b50], 0 */
  w32((uint32_t)(0x12143b50), (0x0u));
  /* 121256b1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121256b4 push eax */
  push32((uint32_t)(EAX));
  /* 121256b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121256b8 push ecx */
  push32((uint32_t)(ECX));
  /* 121256b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121256bc push edx */
  push32((uint32_t)(EDX));
  /* 121256bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121256c0 push eax */
  push32((uint32_t)(EAX));
  /* 121256c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121256c4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121256ca push edx */
  push32((uint32_t)(EDX));
  /* 121256cb call 0x12125a10 */
  push32(0x121256d0u); f_12125a10();
  /* 121256d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121256d3 jmp 0x121257a8 */
  goto L_121257a8;
L_121256d8:;
  /* 121256d8 mov eax, dword ptr [0x12143b50] */
  EAX = (r32((uint32_t)(0x12143b50)));
  /* 121256dd mov dword ptr [0x12143b60], eax */
  w32((uint32_t)(0x12143b60), (EAX));
  /* 121256e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121256e5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 121256e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121256e9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 121256ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121256f0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121256f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121256f6 push edx */
  push32((uint32_t)(EDX));
  /* 121256f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121256fa push eax */
  push32((uint32_t)(EAX));
  /* 121256fb push 2 */
  push32((uint32_t)(0x2u));
  /* 121256fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125700 push ecx */
  push32((uint32_t)(ECX));
  /* 12125701 call 0x121258b0 */
  push32(0x12125706u); f_121258b0();
  /* 12125706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125709 jmp 0x121257a8 */
  goto L_121257a8;
L_1212570e:;
  /* 1212570e mov edx, dword ptr [0x12143b50] */
  EDX = (r32((uint32_t)(0x12143b50)));
  /* 12125714 mov dword ptr [0x12143b60], edx */
  w32((uint32_t)(0x12143b60), (EDX));
  /* 1212571a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212571d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12125720 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125721 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12125726 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12125728 mov ecx, eax */
  ECX = (EAX);
  /* 1212572a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212572d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12125730 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125733 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12125736 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125737 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1212573c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1212573e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125740 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12125743 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125746 push eax */
  push32((uint32_t)(EAX));
  /* 12125747 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212574a push ecx */
  push32((uint32_t)(ECX));
  /* 1212574b push 4 */
  push32((uint32_t)(0x4u));
  /* 1212574d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125750 push edx */
  push32((uint32_t)(EDX));
  /* 12125751 call 0x121258b0 */
  push32(0x12125756u); f_121258b0();
  /* 12125756 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125759 jmp 0x121257a8 */
  goto L_121257a8;
L_1212575b:;
  /* 1212575b call 0x12126870 */
  push32(0x12125760u); f_12126870();
  /* 12125760 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125763 push eax */
  push32((uint32_t)(EAX));
  /* 12125764 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125767 push ecx */
  push32((uint32_t)(ECX));
  /* 12125768 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212576b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212576d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125771 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12125774 mov ecx, dword ptr [eax*4 + 0x12142e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12142e1c)));
  /* 1212577b push ecx */
  push32((uint32_t)(ECX));
  /* 1212577c call 0x12125860 */
  push32(0x12125781u); f_12125860();
  /* 12125781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125784 jmp 0x121257a8 */
  goto L_121257a8;
L_12125786:;
  /* 12125786 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125789 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1212578b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1212578e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125791 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125793 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125796 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125799 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1212579b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212579e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121257a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121257a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121257a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121257a8:;
  /* 121257a8 pop esi */
  ESI = (pop32());
  /* 121257a9 mov esp, ebp */
  ESP = (EBP);
  /* 121257ab pop ebp */
  EBP = (pop32());
  /* 121257ac ret  */
  ESPCHK(0x12125240u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12125860 (72 bytes, 30 insns) */
void f_12125860(void) {
  FTRACE(0x12125860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125860 push ebp */
  push32((uint32_t)(EBP));
  /* 12125861 mov ebp, esp */
  EBP = (ESP);
L_12125863:;
  /* 12125863 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125866 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125869 je 0x121258a6 */
  if (C.zf) goto L_121258a6;
  /* 1212586b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212586e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12125871 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12125873 je 0x121258a6 */
  if (C.zf) goto L_121258a6;
  /* 12125875 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125878 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1212587a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212587d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212587f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12125881 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125884 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125886 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212588c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1212588e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125891 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125894 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12125897 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212589a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1212589c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212589f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121258a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121258a4 jmp 0x12125863 */
  goto L_12125863;
L_121258a6:;
  /* 121258a6 pop ebp */
  EBP = (pop32());
  /* 121258a7 ret  */
  ESPCHK(0x12125860u, _esp0);
  ESP += 4; return;
}

/* FUN_100158b0 @ 0x121258b0 (173 bytes, 64 insns) */
void f_121258b0(void) {
  FTRACE(0x121258b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121258b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121258b1 mov ebp, esp */
  EBP = (ESP);
  /* 121258b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121258b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121258bb cmp dword ptr [0x12143b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121258c2 je 0x121258da */
  if (C.zf) goto L_121258da;
  /* 121258c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121258c7 push eax */
  push32((uint32_t)(EAX));
  /* 121258c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121258cb push ecx */
  push32((uint32_t)(ECX));
  /* 121258cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121258cf push edx */
  push32((uint32_t)(EDX));
  /* 121258d0 call 0x12125960 */
  push32(0x121258d5u); f_12125960();
  /* 121258d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121258d8 jmp 0x12125959 */
  goto L_12125959;
L_121258da:;
  /* 121258da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121258dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121258e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121258e2 jae 0x12125950 */
  if (!C.cf) goto L_12125950;
  /* 121258e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121258e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121258ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 121258ed jmp 0x121258f8 */
  goto L_121258f8;
L_121258ef:;
  /* 121258ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121258f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121258f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_121258f8:;
  /* 121258f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121258fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121258fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12125900 je 0x12125934 */
  if (C.zf) goto L_12125934;
  /* 12125902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125905 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12125906 mov ecx, 0xa */
  ECX = (0xau);
  /* 1212590b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1212590d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125910 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125913 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125915 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125918 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1212591b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212591e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1212591f mov ecx, 0xa */
  ECX = (0xau);
  /* 12125924 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12125926 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12125929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212592c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212592f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12125932 jmp 0x121258ef */
  goto L_121258ef;
L_12125934:;
  /* 12125934 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125937 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125939 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212593c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212593f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12125941 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125944 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125946 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125949 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212594c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1212594e jmp 0x12125959 */
  goto L_12125959;
L_12125950:;
  /* 12125950 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125953 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12125959:;
  /* 12125959 mov esp, ebp */
  ESP = (EBP);
  /* 1212595b pop ebp */
  EBP = (pop32());
  /* 1212595c ret  */
  ESPCHK(0x121258b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12125960 (172 bytes, 65 insns) */
void f_12125960(void) {
  FTRACE(0x12125960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125960 push ebp */
  push32((uint32_t)(EBP));
  /* 12125961 mov ebp, esp */
  EBP = (ESP);
  /* 12125963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125969 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1212596b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1212596e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125971 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125974 jbe 0x121259bb */
  if ((C.cf||C.zf)) goto L_121259bb;
L_12125976:;
  /* 12125976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1212597a mov ecx, 0xa */
  ECX = (0xau);
  /* 1212597f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12125981 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125987 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12125989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212598c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212598f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12125992 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125995 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125997 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212599a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212599d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1212599f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121259a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121259a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 121259a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121259aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121259ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121259b1 jle 0x121259bb */
  if ((C.zf||C.sf!=C.of)) goto L_121259bb;
  /* 121259b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121259b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121259b9 ja 0x12125976 */
  if ((!C.cf&&!C.zf)) goto L_12125976;
L_121259bb:;
  /* 121259bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121259be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121259c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121259c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121259c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121259c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121259cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121259ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121259d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121259d4:;
  /* 121259d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121259d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121259d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 121259dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121259df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121259e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121259e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121259e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121259e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121259ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121259ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121259f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121259f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121259f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121259fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121259fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12125a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12125a03 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125a06 jb 0x121259d4 */
  if (C.cf) goto L_121259d4;
  /* 12125a08 mov esp, ebp */
  ESP = (EBP);
  /* 12125a0a pop ebp */
  EBP = (pop32());
  /* 12125a0b ret  */
  ESPCHK(0x12125960u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a10 @ 0x12125a10 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12125a10(void) {
  FTRACE(0x12125a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12125a11 mov ebp, esp */
  EBP = (ESP);
  /* 12125a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12125a16:;
  /* 12125a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125a19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12125a1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12125a1e je 0x12125e8c */
  if (C.zf) goto L_12125e8c;
  /* 12125a24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125a27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125a2a je 0x12125e8c */
  if (C.zf) goto L_12125e8c;
  /* 12125a30 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12125a34 mov dword ptr [0x12143b60], 0 */
  w32((uint32_t)(0x12143b60), (0x0u));
  /* 12125a3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12125a45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125a48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12125a4b jmp 0x12125a56 */
  goto L_12125a56;
L_12125a4d:;
  /* 12125a4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125a53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12125a56:;
  /* 12125a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125a59 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12125a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125a5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12125a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125a65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125a68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12125a6b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125a6d jne 0x12125a71 */
  if (!C.zf) goto L_12125a71;
  /* 12125a6f jmp 0x12125a4d */
  goto L_12125a4d;
L_12125a71:;
  /* 12125a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125a74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125a77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12125a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125a7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12125a80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12125a83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125a86 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125a89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12125a8c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125a90 ja 0x12125de0 */
  if ((!C.cf&&!C.zf)) goto L_12125de0;
  /* 12125a96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12125a9b mov al, byte ptr [ecx + 0x12125ebc] */
  AL = (r8((uint32_t)(ECX + 0x12125ebc)));
  /* 12125aa1 jmp dword ptr [eax*4 + 0x12125e90] */
  switch (EAX) {
    case 0: goto L_12125cff;
    case 1: goto L_12125be3;
    case 2: goto L_12125b6e;
    case 3: goto L_12125aa8;
    case 4: goto L_12125ae6;
    case 5: goto L_12125b47;
    case 6: goto L_12125b95;
    case 7: goto L_12125bbc;
    case 8: goto L_12125c2a;
    case 9: goto L_12125b24;
    case 10: goto L_12125de0;
    default: x86_unimpl("switch@0x12125aa1 out of table"); return;
  }
L_12125aa8:;
  /* 12125aa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125aab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12125aae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12125ab1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125ab4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12125ab7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125abb ja 0x12125ae1 */
  if ((!C.cf&&!C.zf)) goto L_12125ae1;
  /* 12125abd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12125ac0 jmp dword ptr [ecx*4 + 0x12125f0f] */
  switch (ECX) {
    case 0: goto L_12125ac7;
    case 1: goto L_12125ad1;
    case 2: goto L_12125ad7;
    case 3: goto L_12125add;
    case 4: goto L_12125b05;
    case 5: goto L_12125b0f;
    case 6: goto L_12125b15;
    case 7: goto L_12125b1b;
    default: x86_unimpl("switch@0x12125ac0 out of table"); return;
  }
L_12125ac7:;
  /* 12125ac7 mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125ad1:;
  /* 12125ad1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12125ad5 jmp 0x12125ae1 */
  goto L_12125ae1;
L_12125ad7:;
  /* 12125ad7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12125adb jmp 0x12125ae1 */
  goto L_12125ae1;
L_12125add:;
  /* 12125add mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12125ae1:;
  /* 12125ae1 jmp 0x12125de0 */
  goto L_12125de0;
L_12125ae6:;
  /* 12125ae6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125ae9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12125aec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12125aef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125af2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12125af5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125af9 ja 0x12125b1f */
  if ((!C.cf&&!C.zf)) goto L_12125b1f;
  /* 12125afb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12125afe jmp dword ptr [ecx*4 + 0x12125f1f] */
  switch (ECX) {
    case 0: goto L_12125b05;
    case 1: goto L_12125b0f;
    case 2: goto L_12125b15;
    case 3: goto L_12125b1b;
    default: x86_unimpl("switch@0x12125afe out of table"); return;
  }
L_12125b05:;
  /* 12125b05 mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125b0f:;
  /* 12125b0f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12125b13 jmp 0x12125b1f */
  goto L_12125b1f;
L_12125b15:;
  /* 12125b15 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12125b19 jmp 0x12125b1f */
  goto L_12125b1f;
L_12125b1b:;
  /* 12125b1b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12125b1f:;
  /* 12125b1f jmp 0x12125de0 */
  goto L_12125de0;
L_12125b24:;
  /* 12125b24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125b27 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12125b2a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b2e je 0x12125b38 */
  if (C.zf) goto L_12125b38;
  /* 12125b30 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b34 je 0x12125b3e */
  if (C.zf) goto L_12125b3e;
  /* 12125b36 jmp 0x12125b42 */
  goto L_12125b42;
L_12125b38:;
  /* 12125b38 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12125b3c jmp 0x12125b42 */
  goto L_12125b42;
L_12125b3e:;
  /* 12125b3e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12125b42:;
  /* 12125b42 jmp 0x12125de0 */
  goto L_12125de0;
L_12125b47:;
  /* 12125b47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125b4a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12125b4d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b51 je 0x12125b5b */
  if (C.zf) goto L_12125b5b;
  /* 12125b53 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b57 je 0x12125b65 */
  if (C.zf) goto L_12125b65;
  /* 12125b59 jmp 0x12125b69 */
  goto L_12125b69;
L_12125b5b:;
  /* 12125b5b mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125b65:;
  /* 12125b65 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12125b69:;
  /* 12125b69 jmp 0x12125de0 */
  goto L_12125de0;
L_12125b6e:;
  /* 12125b6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125b71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12125b74 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b78 je 0x12125b82 */
  if (C.zf) goto L_12125b82;
  /* 12125b7a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b7e je 0x12125b8c */
  if (C.zf) goto L_12125b8c;
  /* 12125b80 jmp 0x12125b90 */
  goto L_12125b90;
L_12125b82:;
  /* 12125b82 mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125b8c:;
  /* 12125b8c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12125b90:;
  /* 12125b90 jmp 0x12125de0 */
  goto L_12125de0;
L_12125b95:;
  /* 12125b95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125b98 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12125b9b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125b9f je 0x12125ba9 */
  if (C.zf) goto L_12125ba9;
  /* 12125ba1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125ba5 je 0x12125bb3 */
  if (C.zf) goto L_12125bb3;
  /* 12125ba7 jmp 0x12125bb7 */
  goto L_12125bb7;
L_12125ba9:;
  /* 12125ba9 mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125bb3:;
  /* 12125bb3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12125bb7:;
  /* 12125bb7 jmp 0x12125de0 */
  goto L_12125de0;
L_12125bbc:;
  /* 12125bbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125bbf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12125bc2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125bc6 je 0x12125bd0 */
  if (C.zf) goto L_12125bd0;
  /* 12125bc8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125bcc je 0x12125bda */
  if (C.zf) goto L_12125bda;
  /* 12125bce jmp 0x12125bde */
  goto L_12125bde;
L_12125bd0:;
  /* 12125bd0 mov dword ptr [0x12143b60], 1 */
  w32((uint32_t)(0x12143b60), (0x1u));
L_12125bda:;
  /* 12125bda mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12125bde:;
  /* 12125bde jmp 0x12125de0 */
  goto L_12125de0;
L_12125be3:;
  /* 12125be3 push 0x1213fd34 */
  push32((uint32_t)(0x1213fd34u));
  /* 12125be8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125beb push ecx */
  push32((uint32_t)(ECX));
  /* 12125bec call 0x12126440 */
  push32(0x12125bf1u); f_12126440();
  /* 12125bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12125bf6 jne 0x12125c03 */
  if (!C.zf) goto L_12125c03;
  /* 12125bf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125bfb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125bfe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12125c01 jmp 0x12125c21 */
  goto L_12125c21;
L_12125c03:;
  /* 12125c03 push 0x1213fd30 */
  push32((uint32_t)(0x1213fd30u));
  /* 12125c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125c0b push eax */
  push32((uint32_t)(EAX));
  /* 12125c0c call 0x12126440 */
  push32(0x12125c11u); f_12126440();
  /* 12125c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12125c16 jne 0x12125c21 */
  if (!C.zf) goto L_12125c21;
  /* 12125c18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125c1b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125c1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12125c21:;
  /* 12125c21 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12125c25 jmp 0x12125de0 */
  goto L_12125de0;
L_12125c2a:;
  /* 12125c2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125c2d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125c31 jg 0x12125c41 */
  if ((!C.zf&&C.sf==C.of)) goto L_12125c41;
  /* 12125c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125c36 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12125c3c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12125c3f jmp 0x12125c4d */
  goto L_12125c4d;
L_12125c41:;
  /* 12125c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125c44 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12125c4a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12125c4d:;
  /* 12125c4d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125c51 jle 0x12125cf4 */
  if ((C.zf||C.sf!=C.of)) goto L_12125cf4;
  /* 12125c57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125c5a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125c5d jbe 0x12125cf4 */
  if ((C.cf||C.zf)) goto L_12125cf4;
  /* 12125c63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12125c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12125c68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12125c6a mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 12125c70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12125c72 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12125c76 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12125c7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12125c7e je 0x12125cb7 */
  if (C.zf) goto L_12125cb7;
  /* 12125c80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125c83 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125c86 jbe 0x12125cb7 */
  if ((C.cf||C.zf)) goto L_12125cb7;
  /* 12125c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125c8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125c8d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12125c90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12125c92 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12125c94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125c9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125c9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12125ca1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12125ca4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125ca7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12125caa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125cad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125caf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125cb2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125cb5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12125cb7:;
  /* 12125cb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125cba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125cbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12125cbf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12125cc1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12125cc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125cc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125cc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125ccb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125cce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12125cd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12125cd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125cd6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12125cd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125cdc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125cde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125ce1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125ce4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12125ce6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125ce9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125cec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12125cef jmp 0x12125c4d */
  goto L_12125c4d;
L_12125cf4:;
  /* 12125cf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125cf7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12125cfa jmp 0x12125a16 */
  goto L_12125a16;
L_12125cff:;
  /* 12125cff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125d02 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12125d05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12125d07 je 0x12125dd2 */
  if (C.zf) goto L_12125dd2;
  /* 12125d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d10 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125d13 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12125d16:;
  /* 12125d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12125d1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12125d1e je 0x12125dd0 */
  if (C.zf) goto L_12125dd0;
  /* 12125d24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125d27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125d2a je 0x12125dd0 */
  if (C.zf) goto L_12125dd0;
  /* 12125d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d33 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12125d36 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125d39 jne 0x12125d49 */
  if (!C.zf) goto L_12125d49;
  /* 12125d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125d41 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12125d44 jmp 0x12125dd0 */
  goto L_12125dd0;
L_12125d49:;
  /* 12125d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12125d4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12125d50 mov edx, dword ptr [0x12141c98] */
  EDX = (r32((uint32_t)(0x12141c98)));
  /* 12125d56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12125d58 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12125d5c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12125d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12125d63 je 0x12125d9c */
  if (C.zf) goto L_12125d9c;
  /* 12125d65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125d68 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125d6b jbe 0x12125d9c */
  if ((C.cf||C.zf)) goto L_12125d9c;
  /* 12125d6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125d70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12125d77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12125d79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125d7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125d81 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125d84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12125d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125d8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12125d8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125d92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125d94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125d97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125d9a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12125d9c:;
  /* 12125d9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125d9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125da4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12125da6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12125da8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125dab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125dad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125db0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125db3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12125db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125db8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125dbb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12125dbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125dc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125dc3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125dc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125dc9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12125dcb jmp 0x12125d16 */
  goto L_12125d16;
L_12125dd0:;
  /* 12125dd0 jmp 0x12125ddb */
  goto L_12125ddb;
L_12125dd2:;
  /* 12125dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125dd5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125dd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12125ddb:;
  /* 12125ddb jmp 0x12125a16 */
  goto L_12125a16;
L_12125de0:;
  /* 12125de0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12125de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12125de6 je 0x12125e0c */
  if (C.zf) goto L_12125e0c;
  /* 12125de8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12125deb push edx */
  push32((uint32_t)(EDX));
  /* 12125dec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125def push eax */
  push32((uint32_t)(EAX));
  /* 12125df0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12125df4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125df7 push edx */
  push32((uint32_t)(EDX));
  /* 12125df8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12125dfb push eax */
  push32((uint32_t)(EAX));
  /* 12125dfc call 0x12125240 */
  push32(0x12125e01u); f_12125240();
  /* 12125e01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125e07 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12125e0a jmp 0x12125e87 */
  goto L_12125e87;
L_12125e0c:;
  /* 12125e0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12125e11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12125e13 mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 12125e19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12125e1b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12125e1f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12125e25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12125e27 je 0x12125e58 */
  if (C.zf) goto L_12125e58;
  /* 12125e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125e31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12125e33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12125e35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125e3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125e3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12125e42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125e48 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12125e4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125e4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125e50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125e53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125e56 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12125e58:;
  /* 12125e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12125e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125e60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12125e62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12125e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12125e69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125e6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125e6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12125e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12125e74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12125e77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12125e7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125e7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12125e7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125e82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125e85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12125e87:;
  /* 12125e87 jmp 0x12125a16 */
  goto L_12125a16;
L_12125e8c:;
  /* 12125e8c mov esp, ebp */
  ESP = (EBP);
  /* 12125e8e pop ebp */
  EBP = (pop32());
  /* 12125e8f ret  */
  ESPCHK(0x12125a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x12125f30 (650 bytes, 178 insns) */
void f_12125f30(void) {
  FTRACE(0x12125f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12125f31 mov ebp, esp */
  EBP = (ESP);
  /* 12125f33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12125f39 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125f3d jne 0x12126099 */
  if (!C.zf) goto L_12126099;
  /* 12125f43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125f46 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12125f4c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12125f52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12125f55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12125f5c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12125f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125f68 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12125f6e push edx */
  push32((uint32_t)(EDX));
  /* 12125f6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125f72 push eax */
  push32((uint32_t)(EAX));
  /* 12125f73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125f76 push ecx */
  push32((uint32_t)(ECX));
  /* 12125f77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125f7a push edx */
  push32((uint32_t)(EDX));
  /* 12125f7b call 0x12127350 */
  push32(0x12125f80u); f_12127350();
  /* 12125f80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125f83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12125f86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125f8a jne 0x1212601f */
  if (!C.zf) goto L_1212601f;
  /* 12125f90 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x12125f96u);
  /* 12125f96 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125f99 je 0x12125fa0 */
  if (C.zf) goto L_12125fa0;
  /* 12125f9b jmp 0x1212607d */
  goto L_1212607d;
L_12125fa0:;
  /* 12125fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125fa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12125fa9 push eax */
  push32((uint32_t)(EAX));
  /* 12125faa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12125fad push ecx */
  push32((uint32_t)(ECX));
  /* 12125fae call 0x12127350 */
  push32(0x12125fb3u); f_12127350();
  /* 12125fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125fb6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12125fbc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125fc3 jne 0x12125fca */
  if (!C.zf) goto L_12125fca;
  /* 12125fc5 jmp 0x1212607d */
  goto L_1212607d;
L_12125fca:;
  /* 12125fca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12125fcc push 0x1213fd3c */
  push32((uint32_t)(0x1213fd3cu));
  /* 12125fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12125fd3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12125fd9 push edx */
  push32((uint32_t)(EDX));
  /* 12125fda call 0x12117d70 */
  push32(0x12125fdfu); f_12117d70();
  /* 12125fdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125fe2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12125fe5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12125fe9 jne 0x12125ff0 */
  if (!C.zf) goto L_12125ff0;
  /* 12125feb jmp 0x1212607d */
  goto L_1212607d;
L_12125ff0:;
  /* 12125ff0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12125ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125ff9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12125fff push eax */
  push32((uint32_t)(EAX));
  /* 12126000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126003 push ecx */
  push32((uint32_t)(ECX));
  /* 12126004 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12126007 push edx */
  push32((uint32_t)(EDX));
  /* 12126008 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212600b push eax */
  push32((uint32_t)(EAX));
  /* 1212600c call 0x12127350 */
  push32(0x12126011u); f_12127350();
  /* 12126011 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126014 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12126017 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212601b jne 0x1212601f */
  if (!C.zf) goto L_1212601f;
  /* 1212601d jmp 0x1212607d */
  goto L_1212607d;
L_1212601f:;
  /* 1212601f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12126021 push 0x1213fd3c */
  push32((uint32_t)(0x1213fd3cu));
  /* 12126026 push 2 */
  push32((uint32_t)(0x2u));
  /* 12126028 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212602b push ecx */
  push32((uint32_t)(ECX));
  /* 1212602c call 0x12117d70 */
  push32(0x12126031u); f_12117d70();
  /* 12126031 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126034 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1212603a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1212603c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12126042 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126045 jne 0x12126049 */
  if (!C.zf) goto L_12126049;
  /* 12126047 jmp 0x1212607d */
  goto L_1212607d;
L_12126049:;
  /* 12126049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212604c push ecx */
  push32((uint32_t)(ECX));
  /* 1212604d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126050 push edx */
  push32((uint32_t)(EDX));
  /* 12126051 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12126057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12126059 push ecx */
  push32((uint32_t)(ECX));
  /* 1212605a call 0x1211b590 */
  push32(0x1212605fu); f_1211b590();
  /* 1212605f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126062 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126066 je 0x12126076 */
  if (C.zf) goto L_12126076;
  /* 12126068 push 2 */
  push32((uint32_t)(0x2u));
  /* 1212606a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212606d push edx */
  push32((uint32_t)(EDX));
  /* 1212606e call 0x12118800 */
  push32(0x12126073u); f_12118800();
  /* 12126073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126076:;
  /* 12126076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126078 jmp 0x121261b6 */
  goto L_121261b6;
L_1212607d:;
  /* 1212607d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126081 je 0x12126091 */
  if (C.zf) goto L_12126091;
  /* 12126083 push 2 */
  push32((uint32_t)(0x2u));
  /* 12126085 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126088 push eax */
  push32((uint32_t)(EAX));
  /* 12126089 call 0x12118800 */
  push32(0x1212608eu); f_12118800();
  /* 1212608e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126091:;
  /* 12126091 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12126094 jmp 0x121261b6 */
  goto L_121261b6;
L_12126099:;
  /* 12126099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212609d jne 0x121261b3 */
  if (!C.zf) goto L_121261b3;
  /* 121260a3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 121260ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121260b0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 121260b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121260b8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121260be push edx */
  push32((uint32_t)(EDX));
  /* 121260bf push 0x12143a78 */
  push32((uint32_t)(0x12143a78u));
  /* 121260c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121260c7 push eax */
  push32((uint32_t)(EAX));
  /* 121260c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121260cb push ecx */
  push32((uint32_t)(ECX));
  /* 121260cc call 0x121271b0 */
  push32(0x121260d1u); f_121271b0();
  /* 121260d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121260d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121260d6 jne 0x121260e0 */
  if (!C.zf) goto L_121260e0;
  /* 121260d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121260db jmp 0x121261b6 */
  goto L_121261b6;
L_121260e0:;
  /* 121260e0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121260e6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121260e9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 121260f3 jmp 0x12126104 */
  goto L_12126104;
L_121260f5:;
  /* 121260f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121260fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121260fe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12126104:;
  /* 12126104 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212610b jge 0x121261af */
  if ((C.sf==C.of)) goto L_121261af;
  /* 12126111 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126118 jle 0x1212614b */
  if ((C.zf||C.sf!=C.of)) goto L_1212614b;
  /* 1212611a push 4 */
  push32((uint32_t)(0x4u));
  /* 1212611c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12126122 mov dl, byte ptr [ecx*2 + 0x12143a78] */
  DL = (r8((uint32_t)(ECX*2 + 0x12143a78)));
  /* 12126129 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1212612f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12126135 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212613a push eax */
  push32((uint32_t)(EAX));
  /* 1212613b call 0x1211dd80 */
  push32(0x12126140u); f_1211dd80();
  /* 12126140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126143 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12126149 jmp 0x1212617e */
  goto L_1212617e;
L_1212614b:;
  /* 1212614b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12126151 mov dl, byte ptr [ecx*2 + 0x12143a78] */
  DL = (r8((uint32_t)(ECX*2 + 0x12143a78)));
  /* 12126158 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1212615e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12126164 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12126169 mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 1212616f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126171 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12126175 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12126178 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1212617e:;
  /* 1212617e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126185 je 0x121261a8 */
  if (C.zf) goto L_121261a8;
  /* 12126187 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1212618d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12126190 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126193 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1212619a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1212619e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121261a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121261a6 jmp 0x121261aa */
  goto L_121261aa;
L_121261a8:;
  /* 121261a8 jmp 0x121261af */
  goto L_121261af;
L_121261aa:;
  /* 121261aa jmp 0x121260f5 */
  goto L_121260f5;
L_121261af:;
  /* 121261af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121261b1 jmp 0x121261b6 */
  goto L_121261b6;
L_121261b3:;
  /* 121261b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121261b6:;
  /* 121261b6 mov esp, ebp */
  ESP = (EBP);
  /* 121261b8 pop ebp */
  EBP = (pop32());
  /* 121261b9 ret  */
  ESPCHK(0x12125f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100161c0 @ 0x121261c0 (10 bytes, 5 insns) */
void f_121261c0(void) {
  FTRACE(0x121261c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121261c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121261c1 mov ebp, esp */
  EBP = (ESP);
  /* 121261c3 mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 121261c8 pop ebp */
  EBP = (pop32());
  /* 121261c9 ret  */
  ESPCHK(0x121261c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161d0 @ 0x121261d0 (575 bytes, 196 insns) */
void f_121261d0(void) {
  FTRACE(0x121261d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121261d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121261d1 mov ebp, esp */
  EBP = (ESP);
  /* 121261d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121261d5 push 0x1213fd48 */
  push32((uint32_t)(0x1213fd48u));
  /* 121261da push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 121261df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121261e5 push eax */
  push32((uint32_t)(EAX));
  /* 121261e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121261ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121261f0 push ebx */
  push32((uint32_t)(EBX));
  /* 121261f1 push esi */
  push32((uint32_t)(ESI));
  /* 121261f2 push edi */
  push32((uint32_t)(EDI));
  /* 121261f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121261f6 cmp dword ptr [0x12143a84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121261fd jne 0x1212624e */
  if (!C.zf) goto L_1212624e;
  /* 121261ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12126202 push eax */
  push32((uint32_t)(EAX));
  /* 12126203 push 1 */
  push32((uint32_t)(0x1u));
  /* 12126205 push 0x1213f47c */
  push32((uint32_t)(0x1213f47cu));
  /* 1212620a push 1 */
  push32((uint32_t)(0x1u));
  /* 1212620c call dword ptr [0x12146330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146330))), 0x12126212u);
  /* 12126212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126214 je 0x12126222 */
  if (C.zf) goto L_12126222;
  /* 12126216 mov dword ptr [0x12143a84], 1 */
  w32((uint32_t)(0x12143a84), (0x1u));
  /* 12126220 jmp 0x1212624e */
  goto L_1212624e;
L_12126222:;
  /* 12126222 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12126225 push ecx */
  push32((uint32_t)(ECX));
  /* 12126226 push 1 */
  push32((uint32_t)(0x1u));
  /* 12126228 push 0x1213f478 */
  push32((uint32_t)(0x1213f478u));
  /* 1212622d push 1 */
  push32((uint32_t)(0x1u));
  /* 1212622f push 0 */
  push32((uint32_t)(0x0u));
  /* 12126231 call dword ptr [0x12146340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146340))), 0x12126237u);
  /* 12126237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126239 je 0x12126247 */
  if (C.zf) goto L_12126247;
  /* 1212623b mov dword ptr [0x12143a84], 2 */
  w32((uint32_t)(0x12143a84), (0x2u));
  /* 12126245 jmp 0x1212624e */
  goto L_1212624e;
L_12126247:;
  /* 12126247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126249 jmp 0x12126429 */
  goto L_12126429;
L_1212624e:;
  /* 1212624e cmp dword ptr [0x12143a84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143a84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126255 jne 0x12126272 */
  if (!C.zf) goto L_12126272;
  /* 12126257 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212625a push edx */
  push32((uint32_t)(EDX));
  /* 1212625b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212625e push eax */
  push32((uint32_t)(EAX));
  /* 1212625f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12126262 push ecx */
  push32((uint32_t)(ECX));
  /* 12126263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126266 push edx */
  push32((uint32_t)(EDX));
  /* 12126267 call dword ptr [0x12146330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146330))), 0x1212626du);
  /* 1212626d jmp 0x12126429 */
  goto L_12126429;
L_12126272:;
  /* 12126272 cmp dword ptr [0x12143a84], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143a84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126279 jne 0x12126427 */
  if (!C.zf) goto L_12126427;
  /* 1212627f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126283 jne 0x1212628d */
  if (!C.zf) goto L_1212628d;
  /* 12126285 mov eax, dword ptr [0x121439f8] */
  EAX = (r32((uint32_t)(0x121439f8)));
  /* 1212628a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1212628d:;
  /* 1212628d push 0 */
  push32((uint32_t)(0x0u));
  /* 1212628f push 0 */
  push32((uint32_t)(0x0u));
  /* 12126291 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126293 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126295 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12126298 push ecx */
  push32((uint32_t)(ECX));
  /* 12126299 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212629c push edx */
  push32((uint32_t)(EDX));
  /* 1212629d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121262a2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121262a5 push eax */
  push32((uint32_t)(EAX));
  /* 121262a6 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121262acu);
  /* 121262ac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121262af cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121262b3 jne 0x121262bc */
  if (!C.zf) goto L_121262bc;
  /* 121262b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121262b7 jmp 0x12126429 */
  goto L_12126429;
L_121262bc:;
  /* 121262bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121262c3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121262c6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121262c9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121262cb call 0x1211af10 */
  push32(0x121262d0u); f_1211af10();
  /* 121262d0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 121262d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121262d6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121262d9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121262dc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121262df push edx */
  push32((uint32_t)(EDX));
  /* 121262e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121262e2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121262e5 push eax */
  push32((uint32_t)(EAX));
  /* 121262e6 call 0x1211bae0 */
  push32(0x121262ebu); f_1211bae0();
  /* 121262eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121262ee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121262f5 jmp 0x1212630e */
  goto L_1212630e;
  /* 121262f7 mov eax, 1 */
  EAX = (0x1u);
  /* 121262fc ret  */
  ESPCHK(0x121261d0u, _esp0);
  ESP += 4; return;
  /* 121262fd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12126300 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12126307 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1212630e:;
  /* 1212630e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126312 jne 0x1212631b */
  if (!C.zf) goto L_1212631b;
  /* 12126314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126316 jmp 0x12126429 */
  goto L_12126429;
L_1212631b:;
  /* 1212631b push 0 */
  push32((uint32_t)(0x0u));
  /* 1212631d push 0 */
  push32((uint32_t)(0x0u));
  /* 1212631f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12126322 push ecx */
  push32((uint32_t)(ECX));
  /* 12126323 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12126326 push edx */
  push32((uint32_t)(EDX));
  /* 12126327 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212632a push eax */
  push32((uint32_t)(EAX));
  /* 1212632b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212632e push ecx */
  push32((uint32_t)(ECX));
  /* 1212632f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12126334 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12126337 push edx */
  push32((uint32_t)(EDX));
  /* 12126338 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x1212633eu);
  /* 1212633e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126340 jne 0x12126349 */
  if (!C.zf) goto L_12126349;
  /* 12126342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126344 jmp 0x12126429 */
  goto L_12126429;
L_12126349:;
  /* 12126349 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12126350 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12126353 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12126357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212635a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1212635c call 0x1211af10 */
  push32(0x12126361u); f_1211af10();
  /* 12126361 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12126364 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12126367 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1212636a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1212636d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12126374 jmp 0x1212638d */
  goto L_1212638d;
  /* 12126376 mov eax, 1 */
  EAX = (0x1u);
  /* 1212637b ret  */
  ESPCHK(0x121261d0u, _esp0);
  ESP += 4; return;
  /* 1212637c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1212637f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12126386 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1212638d:;
  /* 1212638d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126391 jne 0x1212639a */
  if (!C.zf) goto L_1212639a;
  /* 12126393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126395 jmp 0x12126429 */
  goto L_12126429;
L_1212639a:;
  /* 1212639a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212639e jne 0x121263a9 */
  if (!C.zf) goto L_121263a9;
  /* 121263a0 mov edx, dword ptr [0x121439e8] */
  EDX = (r32((uint32_t)(0x121439e8)));
  /* 121263a6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_121263a9:;
  /* 121263a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121263ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121263af mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 121263b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121263b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121263bb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 121263c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121263c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121263c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121263c9 push edx */
  push32((uint32_t)(EDX));
  /* 121263ca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121263cd push eax */
  push32((uint32_t)(EAX));
  /* 121263ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121263d1 push ecx */
  push32((uint32_t)(ECX));
  /* 121263d2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121263d5 push edx */
  push32((uint32_t)(EDX));
  /* 121263d6 call dword ptr [0x12146340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146340))), 0x121263dcu);
  /* 121263dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121263df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121263e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121263e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121263e7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 121263ec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121263f2 je 0x12126408 */
  if (C.zf) goto L_12126408;
  /* 121263f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121263f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121263fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121263fc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12126400 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126406 je 0x1212640c */
  if (C.zf) goto L_1212640c;
L_12126408:;
  /* 12126408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212640a jmp 0x12126429 */
  goto L_12126429;
L_1212640c:;
  /* 1212640c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212640f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12126411 push eax */
  push32((uint32_t)(EAX));
  /* 12126412 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12126415 push ecx */
  push32((uint32_t)(ECX));
  /* 12126416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12126419 push edx */
  push32((uint32_t)(EDX));
  /* 1212641a call 0x1211fc60 */
  push32(0x1212641fu); f_1211fc60();
  /* 1212641f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126422 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12126425 jmp 0x12126429 */
  goto L_12126429;
L_12126427:;
  /* 12126427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12126429:;
  /* 12126429 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1212642c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1212642f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12126436 pop edi */
  EDI = (pop32());
  /* 12126437 pop esi */
  ESI = (pop32());
  /* 12126438 pop ebx */
  EBX = (pop32());
  /* 12126439 mov esp, ebp */
  ESP = (EBP);
  /* 1212643b pop ebp */
  EBP = (pop32());
  /* 1212643c ret  */
  ESPCHK(0x121261d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x12126440 (208 bytes, 85 insns) */
void f_12126440(void) {
  FTRACE(0x12126440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126440 push ebp */
  push32((uint32_t)(EBP));
  /* 12126441 mov ebp, esp */
  EBP = (ESP);
  /* 12126443 push edi */
  push32((uint32_t)(EDI));
  /* 12126444 push esi */
  push32((uint32_t)(ESI));
  /* 12126445 push ebx */
  push32((uint32_t)(EBX));
  /* 12126446 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12126449 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1212644c lea eax, [0x121439e0] */
  EAX = ((uint32_t)(0x121439e0));
  /* 12126452 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126456 jne 0x12126493 */
  if (!C.zf) goto L_12126493;
  /* 12126458 mov al, 0xff */
  AL = (0xffu);
  /* 1212645a mov edi, edi */
  EDI = (EDI);
L_1212645c:;
  /* 1212645c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1212645e je 0x1212648e */
  if (C.zf) goto L_1212648e;
  /* 12126460 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12126462 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12126463 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12126465 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12126466 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126468 je 0x1212645c */
  if (C.zf) goto L_1212645c;
  /* 1212646a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1212646c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212646e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12126470 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12126473 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12126475 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12126477 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12126479 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1212647b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212647d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1212647f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12126482 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12126484 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12126486 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126488 je 0x1212645c */
  if (C.zf) goto L_1212645c;
  /* 1212648a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1212648c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1212648e:;
  /* 1212648e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12126491 jmp 0x1212650b */
  goto L_1212650b;
L_12126493:;
  /* 12126493 lock inc dword ptr [0x12143b74] */
  x86_unimpl("lock inc @ 0x12126493");
  /* 1212649a cmp dword ptr [0x12143b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121264a1 jg 0x121264a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121264a7;
  /* 121264a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121264a5 jmp 0x121264bc */
  goto L_121264bc;
L_121264a7:;
  /* 121264a7 lock dec dword ptr [0x12143b74] */
  x86_unimpl("lock dec @ 0x121264a7");
  /* 121264ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121264b0 call 0x1211b770 */
  push32(0x121264b5u); f_1211b770();
  /* 121264b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_121264bc:;
  /* 121264bc mov eax, 0xff */
  EAX = (0xffu);
  /* 121264c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121264c3 nop  */
  /* nop */
L_121264c4:;
  /* 121264c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121264c6 je 0x121264ef */
  if (C.zf) goto L_121264ef;
  /* 121264c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121264ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121264cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121264cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121264ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121264d0 je 0x121264c4 */
  if (C.zf) goto L_121264c4;
  /* 121264d2 push eax */
  push32((uint32_t)(EAX));
  /* 121264d3 push ebx */
  push32((uint32_t)(EBX));
  /* 121264d4 call 0x121275b0 */
  push32(0x121264d9u); f_121275b0();
  /* 121264d9 mov ebx, eax */
  EBX = (EAX);
  /* 121264db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121264de call 0x121275b0 */
  push32(0x121264e3u); f_121275b0();
  /* 121264e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121264e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121264e8 je 0x121264c4 */
  if (C.zf) goto L_121264c4;
  /* 121264ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121264ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121264ef:;
  /* 121264ef mov ebx, eax */
  EBX = (EAX);
  /* 121264f1 pop eax */
  EAX = (pop32());
  /* 121264f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121264f4 jne 0x121264ff */
  if (!C.zf) goto L_121264ff;
  /* 121264f6 lock dec dword ptr [0x12143b74] */
  x86_unimpl("lock dec @ 0x121264f6");
  /* 121264fd jmp 0x12126509 */
  goto L_12126509;
L_121264ff:;
  /* 121264ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12126501 call 0x1211b810 */
  push32(0x12126506u); f_1211b810();
  /* 12126506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126509:;
  /* 12126509 mov eax, ebx */
  EAX = (EBX);
L_1212650b:;
  /* 1212650b pop ebx */
  EBX = (pop32());
  /* 1212650c pop esi */
  ESI = (pop32());
  /* 1212650d pop edi */
  EDI = (pop32());
  /* 1212650e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1212650f ret  */
  ESPCHK(0x12126440u, _esp0);
  ESP += 4; return;
}

/* FUN_10016510 @ 0x12126510 (257 bytes, 103 insns) */
void f_12126510(void) {
  FTRACE(0x12126510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126510 push ebp */
  push32((uint32_t)(EBP));
  /* 12126511 mov ebp, esp */
  EBP = (ESP);
  /* 12126513 push edi */
  push32((uint32_t)(EDI));
  /* 12126514 push esi */
  push32((uint32_t)(ESI));
  /* 12126515 push ebx */
  push32((uint32_t)(EBX));
  /* 12126516 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12126519 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1212651b je 0x1212660a */
  if (C.zf) goto L_1212660a;
  /* 12126521 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12126524 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12126527 lea eax, [0x121439e0] */
  EAX = ((uint32_t)(0x121439e0));
  /* 1212652d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126531 jne 0x12126581 */
  if (!C.zf) goto L_12126581;
  /* 12126533 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12126535 mov bl, 0x5a */
  BL = (0x5au);
  /* 12126537 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12126539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1212653c:;
  /* 1212653c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1212653e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12126540 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12126542 je 0x12126565 */
  if (C.zf) goto L_12126565;
  /* 12126544 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12126546 je 0x12126565 */
  if (C.zf) goto L_12126565;
  /* 12126548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12126549 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1212654a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212654c jb 0x12126554 */
  if (C.cf) goto L_12126554;
  /* 1212654e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126550 ja 0x12126554 */
  if ((!C.cf&&!C.zf)) goto L_12126554;
  /* 12126552 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12126554:;
  /* 12126554 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126556 jb 0x1212655e */
  if (C.cf) goto L_1212655e;
  /* 12126558 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212655a ja 0x1212655e */
  if ((!C.cf&&!C.zf)) goto L_1212655e;
  /* 1212655c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1212655e:;
  /* 1212655e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126560 jne 0x1212656f */
  if (!C.zf) goto L_1212656f;
  /* 12126562 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12126563 jne 0x1212653c */
  if (!C.zf) goto L_1212653c;
L_12126565:;
  /* 12126565 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126567 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12126569 je 0x1212660a */
  if (C.zf) goto L_1212660a;
L_1212656f:;
  /* 1212656f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12126574 jb 0x1212660a */
  if (C.cf) goto L_1212660a;
  /* 1212657a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1212657c jmp 0x1212660a */
  goto L_1212660a;
L_12126581:;
  /* 12126581 lock inc dword ptr [0x12143b74] */
  x86_unimpl("lock inc @ 0x12126581");
  /* 12126588 cmp dword ptr [0x12143b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212658f jg 0x12126595 */
  if ((!C.zf&&C.sf==C.of)) goto L_12126595;
  /* 12126591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126593 jmp 0x121265ae */
  goto L_121265ae;
L_12126595:;
  /* 12126595 lock dec dword ptr [0x12143b74] */
  x86_unimpl("lock dec @ 0x12126595");
  /* 1212659c mov ebx, ecx */
  EBX = (ECX);
  /* 1212659e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121265a0 call 0x1211b770 */
  push32(0x121265a5u); f_1211b770();
  /* 121265a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 121265ac mov ecx, ebx */
  ECX = (EBX);
L_121265ae:;
  /* 121265ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121265b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121265b2 mov edi, edi */
  EDI = (EDI);
L_121265b4:;
  /* 121265b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121265b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121265b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121265ba je 0x121265df */
  if (C.zf) goto L_121265df;
  /* 121265bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121265be je 0x121265df */
  if (C.zf) goto L_121265df;
  /* 121265c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121265c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121265c2 push ecx */
  push32((uint32_t)(ECX));
  /* 121265c3 push eax */
  push32((uint32_t)(EAX));
  /* 121265c4 push ebx */
  push32((uint32_t)(EBX));
  /* 121265c5 call 0x121275b0 */
  push32(0x121265cau); f_121275b0();
  /* 121265ca mov ebx, eax */
  EBX = (EAX);
  /* 121265cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121265cf call 0x121275b0 */
  push32(0x121265d4u); f_121275b0();
  /* 121265d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121265d7 pop ecx */
  ECX = (pop32());
  /* 121265d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121265da jne 0x121265e5 */
  if (!C.zf) goto L_121265e5;
  /* 121265dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121265dd jne 0x121265b4 */
  if (!C.zf) goto L_121265b4;
L_121265df:;
  /* 121265df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121265e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121265e3 je 0x121265ee */
  if (C.zf) goto L_121265ee;
L_121265e5:;
  /* 121265e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 121265ea jb 0x121265ee */
  if (C.cf) goto L_121265ee;
  /* 121265ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_121265ee:;
  /* 121265ee pop eax */
  EAX = (pop32());
  /* 121265ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121265f1 jne 0x121265fc */
  if (!C.zf) goto L_121265fc;
  /* 121265f3 lock dec dword ptr [0x12143b74] */
  x86_unimpl("lock dec @ 0x121265f3");
  /* 121265fa jmp 0x1212660a */
  goto L_1212660a;
L_121265fc:;
  /* 121265fc mov ebx, ecx */
  EBX = (ECX);
  /* 121265fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12126600 call 0x1211b810 */
  push32(0x12126605u); f_1211b810();
  /* 12126605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126608 mov ecx, ebx */
  ECX = (EBX);
L_1212660a:;
  /* 1212660a mov eax, ecx */
  EAX = (ECX);
  /* 1212660c pop ebx */
  EBX = (pop32());
  /* 1212660d pop esi */
  ESI = (pop32());
  /* 1212660e pop edi */
  EDI = (pop32());
  /* 1212660f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12126610 ret  */
  ESPCHK(0x12126510u, _esp0);
  ESP += 4; return;
}

/* FUN_10016620 @ 0x12126620 (255 bytes, 88 insns) */
void f_12126620(void) {
  FTRACE(0x12126620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126620 push ebp */
  push32((uint32_t)(EBP));
  /* 12126621 mov ebp, esp */
  EBP = (ESP);
  /* 12126623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12126626:;
  /* 12126626 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212662d jle 0x12126646 */
  if ((C.zf||C.sf!=C.of)) goto L_12126646;
  /* 1212662f push 8 */
  push32((uint32_t)(0x8u));
  /* 12126631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126634 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126636 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12126638 push ecx */
  push32((uint32_t)(ECX));
  /* 12126639 call 0x1211dd80 */
  push32(0x1212663eu); f_1211dd80();
  /* 1212663e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126641 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12126644 jmp 0x1212665f */
  goto L_1212665f;
L_12126646:;
  /* 12126646 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212664b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212664d mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 12126653 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126655 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12126659 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1212665c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1212665f:;
  /* 1212665f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126663 je 0x12126670 */
  if (C.zf) goto L_12126670;
  /* 12126665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126668 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212666b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1212666e jmp 0x12126626 */
  goto L_12126626;
L_12126670:;
  /* 12126670 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126675 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12126677 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1212667a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212667d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126680 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12126683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126689 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212668d je 0x12126695 */
  if (C.zf) goto L_12126695;
  /* 1212668f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126693 jne 0x121266a8 */
  if (!C.zf) goto L_121266a8;
L_12126695:;
  /* 12126695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212669a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212669c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212669f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121266a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121266a5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121266a8:;
  /* 121266a8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121266af:;
  /* 121266af cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121266b6 jle 0x121266cb */
  if ((C.zf||C.sf!=C.of)) goto L_121266cb;
  /* 121266b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 121266ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121266bd push edx */
  push32((uint32_t)(EDX));
  /* 121266be call 0x1211dd80 */
  push32(0x121266c3u); f_1211dd80();
  /* 121266c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121266c6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121266c9 jmp 0x121266e0 */
  goto L_121266e0;
L_121266cb:;
  /* 121266cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121266ce mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 121266d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121266d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121266da and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121266dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121266e0:;
  /* 121266e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121266e4 je 0x1212670b */
  if (C.zf) goto L_1212670b;
  /* 121266e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121266e9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121266ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121266ef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 121266f3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121266f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121266f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121266fb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121266fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12126700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126703 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126706 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12126709 jmp 0x121266af */
  goto L_121266af;
L_1212670b:;
  /* 1212670b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212670f jne 0x12126718 */
  if (!C.zf) goto L_12126718;
  /* 12126711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12126714 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12126716 jmp 0x1212671b */
  goto L_1212671b;
L_12126718:;
  /* 12126718 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1212671b:;
  /* 1212671b mov esp, ebp */
  ESP = (EBP);
  /* 1212671d pop ebp */
  EBP = (pop32());
  /* 1212671e ret  */
  ESPCHK(0x12126620u, _esp0);
  ESP += 4; return;
}

/* FUN_10016720 @ 0x12126720 (17 bytes, 8 insns) */
void f_12126720(void) {
  FTRACE(0x12126720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126720 push ebp */
  push32((uint32_t)(EBP));
  /* 12126721 mov ebp, esp */
  EBP = (ESP);
  /* 12126723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126726 push eax */
  push32((uint32_t)(EAX));
  /* 12126727 call 0x12126620 */
  push32(0x1212672cu); f_12126620();
  /* 1212672c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212672f pop ebp */
  EBP = (pop32());
  /* 12126730 ret  */
  ESPCHK(0x12126720u, _esp0);
  ESP += 4; return;
}

/* FUN_10016740 @ 0x12126740 (297 bytes, 106 insns) */
void f_12126740(void) {
  FTRACE(0x12126740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126740 push ebp */
  push32((uint32_t)(EBP));
  /* 12126741 mov ebp, esp */
  EBP = (ESP);
  /* 12126743 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12126746 push esi */
  push32((uint32_t)(ESI));
L_12126747:;
  /* 12126747 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212674e jle 0x12126767 */
  if ((C.zf||C.sf!=C.of)) goto L_12126767;
  /* 12126750 push 8 */
  push32((uint32_t)(0x8u));
  /* 12126752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126757 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12126759 push ecx */
  push32((uint32_t)(ECX));
  /* 1212675a call 0x1211dd80 */
  push32(0x1212675fu); f_1211dd80();
  /* 1212675f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126762 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12126765 jmp 0x12126780 */
  goto L_12126780;
L_12126767:;
  /* 12126767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212676a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212676c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212676e mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 12126774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126776 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1212677a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1212677d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12126780:;
  /* 12126780 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126784 je 0x12126791 */
  if (C.zf) goto L_12126791;
  /* 12126786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212678c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1212678f jmp 0x12126747 */
  goto L_12126747;
L_12126791:;
  /* 12126791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126796 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12126798 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1212679b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212679e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121267a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121267a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121267a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121267aa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121267ae je 0x121267b6 */
  if (C.zf) goto L_121267b6;
  /* 121267b0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121267b4 jne 0x121267c9 */
  if (!C.zf) goto L_121267c9;
L_121267b6:;
  /* 121267b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121267b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121267bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121267bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121267c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121267c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121267c6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121267c9:;
  /* 121267c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121267d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121267d7:;
  /* 121267d7 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121267de jle 0x121267f3 */
  if ((C.zf||C.sf!=C.of)) goto L_121267f3;
  /* 121267e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121267e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121267e5 push edx */
  push32((uint32_t)(EDX));
  /* 121267e6 call 0x1211dd80 */
  push32(0x121267ebu); f_1211dd80();
  /* 121267eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121267ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121267f1 jmp 0x12126808 */
  goto L_12126808;
L_121267f3:;
  /* 121267f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121267f6 mov ecx, dword ptr [0x12141c98] */
  ECX = (r32((uint32_t)(0x12141c98)));
  /* 121267fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121267fe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12126802 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12126805 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12126808:;
  /* 12126808 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212680c je 0x12126849 */
  if (C.zf) goto L_12126849;
  /* 1212680e push 0 */
  push32((uint32_t)(0x0u));
  /* 12126810 push 0xa */
  push32((uint32_t)(0xau));
  /* 12126812 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12126815 push eax */
  push32((uint32_t)(EAX));
  /* 12126816 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126819 push ecx */
  push32((uint32_t)(ECX));
  /* 1212681a call 0x121276e0 */
  push32(0x1212681fu); f_121276e0();
  /* 1212681f mov ecx, eax */
  ECX = (EAX);
  /* 12126821 mov esi, edx */
  ESI = (EDX);
  /* 12126823 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126826 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12126829 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1212682a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212682c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1212682e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126831 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12126834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126839 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1212683b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212683e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126844 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12126847 jmp 0x121267d7 */
  goto L_121267d7;
L_12126849:;
  /* 12126849 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212684d jne 0x1212685e */
  if (!C.zf) goto L_1212685e;
  /* 1212684f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126852 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12126854 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12126857 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212685a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1212685c jmp 0x12126864 */
  goto L_12126864;
L_1212685e:;
  /* 1212685e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126861 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12126864:;
  /* 12126864 pop esi */
  ESI = (pop32());
  /* 12126865 mov esp, ebp */
  ESP = (EBP);
  /* 12126867 pop ebp */
  EBP = (pop32());
  /* 12126868 ret  */
  ESPCHK(0x12126740u, _esp0);
  ESP += 4; return;
}

/* FUN_10016870 @ 0x12126870 (61 bytes, 18 insns) */
void f_12126870(void) {
  FTRACE(0x12126870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126870 push ebp */
  push32((uint32_t)(EBP));
  /* 12126871 mov ebp, esp */
  EBP = (ESP);
  /* 12126873 cmp dword ptr [0x12143b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212687a jne 0x121268ab */
  if (!C.zf) goto L_121268ab;
  /* 1212687c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1212687e call 0x1211b770 */
  push32(0x12126883u); f_1211b770();
  /* 12126883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126886 cmp dword ptr [0x12143b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212688d jne 0x121268a1 */
  if (!C.zf) goto L_121268a1;
  /* 1212688f call 0x121268d0 */
  push32(0x12126894u); f_121268d0();
  /* 12126894 mov eax, dword ptr [0x12143b40] */
  EAX = (r32((uint32_t)(0x12143b40)));
  /* 12126899 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212689c mov dword ptr [0x12143b40], eax */
  w32((uint32_t)(0x12143b40), (EAX));
L_121268a1:;
  /* 121268a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121268a3 call 0x1211b810 */
  push32(0x121268a8u); f_1211b810();
  /* 121268a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121268ab:;
  /* 121268ab pop ebp */
  EBP = (pop32());
  /* 121268ac ret  */
  ESPCHK(0x12126870u, _esp0);
  ESP += 4; return;
}

/* FUN_100168b0 @ 0x121268b0 (30 bytes, 11 insns) */
void f_121268b0(void) {
  FTRACE(0x121268b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121268b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121268b1 mov ebp, esp */
  EBP = (ESP);
  /* 121268b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121268b5 call 0x1211b770 */
  push32(0x121268bau); f_1211b770();
  /* 121268ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121268bd call 0x121268d0 */
  push32(0x121268c2u); f_121268d0();
  /* 121268c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121268c4 call 0x1211b810 */
  push32(0x121268c9u); f_1211b810();
  /* 121268c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121268cc pop ebp */
  EBP = (pop32());
  /* 121268cd ret  */
  ESPCHK(0x121268b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100168d0 @ 0x121268d0 (939 bytes, 266 insns) */
void f_121268d0(void) {
  FTRACE(0x121268d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121268d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121268d1 mov ebp, esp */
  EBP = (ESP);
  /* 121268d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121268d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121268dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 121268df call 0x1211b770 */
  push32(0x121268e4u); f_1211b770();
  /* 121268e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121268e7 mov dword ptr [0x12143a88], 0 */
  w32((uint32_t)(0x12143a88), (0x0u));
  /* 121268f1 mov dword ptr [0x12142e38], 0xffffffff */
  w32((uint32_t)(0x12142e38), (0xffffffffu));
  /* 121268fb mov eax, dword ptr [0x12142e38] */
  EAX = (r32((uint32_t)(0x12142e38)));
  /* 12126900 mov dword ptr [0x12142e28], eax */
  w32((uint32_t)(0x12142e28), (EAX));
  /* 12126905 push 0x1213fda8 */
  push32((uint32_t)(0x1213fda8u));
  /* 1212690a call 0x12127750 */
  push32(0x1212690fu); f_12127750();
  /* 1212690f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126912 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12126915 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126919 jne 0x12126a53 */
  if (!C.zf) goto L_12126a53;
  /* 1212691f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12126921 call 0x1211b810 */
  push32(0x12126926u); f_1211b810();
  /* 12126926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126929 push 0x12143a90 */
  push32((uint32_t)(0x12143a90u));
  /* 1212692e call dword ptr [0x121462f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f4))), 0x12126934u);
  /* 12126934 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126937 je 0x12126a4e */
  if (C.zf) goto L_12126a4e;
  /* 1212693d mov dword ptr [0x12143a88], 1 */
  w32((uint32_t)(0x12143a88), (0x1u));
  /* 12126947 mov ecx, dword ptr [0x12143a90] */
  ECX = (r32((uint32_t)(0x12143a90)));
  /* 1212694d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126950 mov dword ptr [0x12142d90], ecx */
  w32((uint32_t)(0x12142d90), (ECX));
  /* 12126956 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126958 mov dx, word ptr [0x12143ad6] */
  DX = (r16((uint32_t)(0x12143ad6)));
  /* 1212695f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12126961 je 0x12126979 */
  if (C.zf) goto L_12126979;
  /* 12126963 mov eax, dword ptr [0x12143ae4] */
  EAX = (r32((uint32_t)(0x12143ae4)));
  /* 12126968 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212696b mov ecx, dword ptr [0x12142d90] */
  ECX = (r32((uint32_t)(0x12142d90)));
  /* 12126971 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126973 mov dword ptr [0x12142d90], ecx */
  w32((uint32_t)(0x12142d90), (ECX));
L_12126979:;
  /* 12126979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1212697b mov dx, word ptr [0x12143b2a] */
  DX = (r16((uint32_t)(0x12143b2a)));
  /* 12126982 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12126984 je 0x121269ae */
  if (C.zf) goto L_121269ae;
  /* 12126986 cmp dword ptr [0x12143b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212698d je 0x121269ae */
  if (C.zf) goto L_121269ae;
  /* 1212698f mov dword ptr [0x12142d94], 1 */
  w32((uint32_t)(0x12142d94), (0x1u));
  /* 12126999 mov eax, dword ptr [0x12143b38] */
  EAX = (r32((uint32_t)(0x12143b38)));
  /* 1212699e sub eax, dword ptr [0x12143ae4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143ae4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121269a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121269a7 mov dword ptr [0x12142d98], eax */
  w32((uint32_t)(0x12142d98), (EAX));
  /* 121269ac jmp 0x121269c2 */
  goto L_121269c2;
L_121269ae:;
  /* 121269ae mov dword ptr [0x12142d94], 0 */
  w32((uint32_t)(0x12142d94), (0x0u));
  /* 121269b8 mov dword ptr [0x12142d98], 0 */
  w32((uint32_t)(0x12142d98), (0x0u));
L_121269c2:;
  /* 121269c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121269c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121269c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121269c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121269ca mov edx, dword ptr [0x12142e1c] */
  EDX = (r32((uint32_t)(0x12142e1c)));
  /* 121269d0 push edx */
  push32((uint32_t)(EDX));
  /* 121269d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121269d3 push 0x12143a94 */
  push32((uint32_t)(0x12143a94u));
  /* 121269d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121269dd mov eax, dword ptr [0x121439f8] */
  EAX = (r32((uint32_t)(0x121439f8)));
  /* 121269e2 push eax */
  push32((uint32_t)(EAX));
  /* 121269e3 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121269e9u);
  /* 121269e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121269eb je 0x121269ff */
  if (C.zf) goto L_121269ff;
  /* 121269ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121269f1 jne 0x121269ff */
  if (!C.zf) goto L_121269ff;
  /* 121269f3 mov ecx, dword ptr [0x12142e1c] */
  ECX = (r32((uint32_t)(0x12142e1c)));
  /* 121269f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 121269fd jmp 0x12126a08 */
  goto L_12126a08;
L_121269ff:;
  /* 121269ff mov edx, dword ptr [0x12142e1c] */
  EDX = (r32((uint32_t)(0x12142e1c)));
  /* 12126a05 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12126a08:;
  /* 12126a08 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12126a0b push eax */
  push32((uint32_t)(EAX));
  /* 12126a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12126a0e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12126a10 mov ecx, dword ptr [0x12142e20] */
  ECX = (r32((uint32_t)(0x12142e20)));
  /* 12126a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12126a17 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12126a19 push 0x12143ae8 */
  push32((uint32_t)(0x12143ae8u));
  /* 12126a1e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12126a23 mov edx, dword ptr [0x121439f8] */
  EDX = (r32((uint32_t)(0x121439f8)));
  /* 12126a29 push edx */
  push32((uint32_t)(EDX));
  /* 12126a2a call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x12126a30u);
  /* 12126a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126a32 je 0x12126a45 */
  if (C.zf) goto L_12126a45;
  /* 12126a34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126a38 jne 0x12126a45 */
  if (!C.zf) goto L_12126a45;
  /* 12126a3a mov eax, dword ptr [0x12142e20] */
  EAX = (r32((uint32_t)(0x12142e20)));
  /* 12126a3f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12126a43 jmp 0x12126a4e */
  goto L_12126a4e;
L_12126a45:;
  /* 12126a45 mov ecx, dword ptr [0x12142e20] */
  ECX = (r32((uint32_t)(0x12142e20)));
  /* 12126a4b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12126a4e:;
  /* 12126a4e jmp 0x12126c77 */
  goto L_12126c77;
L_12126a53:;
  /* 12126a53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126a56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126a5b je 0x12126a7d */
  if (C.zf) goto L_12126a7d;
  /* 12126a5d cmp dword ptr [0x12143b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126a64 je 0x12126a8c */
  if (C.zf) goto L_12126a8c;
  /* 12126a66 mov ecx, dword ptr [0x12143b3c] */
  ECX = (r32((uint32_t)(0x12143b3c)));
  /* 12126a6c push ecx */
  push32((uint32_t)(ECX));
  /* 12126a6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126a70 push edx */
  push32((uint32_t)(EDX));
  /* 12126a71 call 0x12123a00 */
  push32(0x12126a76u); f_12123a00();
  /* 12126a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126a7b jne 0x12126a8c */
  if (!C.zf) goto L_12126a8c;
L_12126a7d:;
  /* 12126a7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12126a7f call 0x1211b810 */
  push32(0x12126a84u); f_1211b810();
  /* 12126a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126a87 jmp 0x12126c77 */
  goto L_12126c77;
L_12126a8c:;
  /* 12126a8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12126a8e mov eax, dword ptr [0x12143b3c] */
  EAX = (r32((uint32_t)(0x12143b3c)));
  /* 12126a93 push eax */
  push32((uint32_t)(EAX));
  /* 12126a94 call 0x12118800 */
  push32(0x12126a99u); f_12118800();
  /* 12126a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126a9c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12126aa1 push 0x1213fda0 */
  push32((uint32_t)(0x1213fda0u));
  /* 12126aa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12126aa8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126aab push ecx */
  push32((uint32_t)(ECX));
  /* 12126aac call 0x1211aba0 */
  push32(0x12126ab1u); f_1211aba0();
  /* 12126ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ab7 push eax */
  push32((uint32_t)(EAX));
  /* 12126ab8 call 0x12117d70 */
  push32(0x12126abdu); f_12117d70();
  /* 12126abd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ac0 mov dword ptr [0x12143b3c], eax */
  w32((uint32_t)(0x12143b3c), (EAX));
  /* 12126ac5 cmp dword ptr [0x12143b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126acc jne 0x12126add */
  if (!C.zf) goto L_12126add;
  /* 12126ace push 0xc */
  push32((uint32_t)(0xcu));
  /* 12126ad0 call 0x1211b810 */
  push32(0x12126ad5u); f_1211b810();
  /* 12126ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ad8 jmp 0x12126c77 */
  goto L_12126c77;
L_12126add:;
  /* 12126add mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126ae0 push edx */
  push32((uint32_t)(EDX));
  /* 12126ae1 mov eax, dword ptr [0x12143b3c] */
  EAX = (r32((uint32_t)(0x12143b3c)));
  /* 12126ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12126ae7 call 0x1211ad20 */
  push32(0x12126aecu); f_1211ad20();
  /* 12126aec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126aef push 0xc */
  push32((uint32_t)(0xcu));
  /* 12126af1 call 0x1211b810 */
  push32(0x12126af6u); f_1211b810();
  /* 12126af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126af9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12126afb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126afe push ecx */
  push32((uint32_t)(ECX));
  /* 12126aff mov edx, dword ptr [0x12142e1c] */
  EDX = (r32((uint32_t)(0x12142e1c)));
  /* 12126b05 push edx */
  push32((uint32_t)(EDX));
  /* 12126b06 call 0x1211b590 */
  push32(0x12126b0bu); f_1211b590();
  /* 12126b0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b0e mov eax, dword ptr [0x12142e1c] */
  EAX = (r32((uint32_t)(0x12142e1c)));
  /* 12126b13 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12126b17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b1a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126b20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126b26 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126b29 jne 0x12126b3d */
  if (!C.zf) goto L_12126b3d;
  /* 12126b2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126b2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12126b34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12126b3d:;
  /* 12126b3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b40 push eax */
  push32((uint32_t)(EAX));
  /* 12126b41 call 0x12126620 */
  push32(0x12126b46u); f_12126620();
  /* 12126b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b49 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126b4f mov dword ptr [0x12142d90], eax */
  w32((uint32_t)(0x12142d90), (EAX));
L_12126b54:;
  /* 12126b54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12126b5a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126b5d je 0x12126b75 */
  if (C.zf) goto L_12126b75;
  /* 12126b5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b62 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12126b65 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126b68 jl 0x12126b80 */
  if ((C.sf!=C.of)) goto L_12126b80;
  /* 12126b6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126b70 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126b73 jg 0x12126b80 */
  if ((!C.zf&&C.sf==C.of)) goto L_12126b80;
L_12126b75:;
  /* 12126b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126b7e jmp 0x12126b54 */
  goto L_12126b54;
L_12126b80:;
  /* 12126b80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126b86 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126b89 jne 0x12126c25 */
  if (!C.zf) goto L_12126c25;
  /* 12126b8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126b95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126b98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126b9b push edx */
  push32((uint32_t)(EDX));
  /* 12126b9c call 0x12126620 */
  push32(0x12126ba1u); f_12126620();
  /* 12126ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ba4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126ba7 mov ecx, dword ptr [0x12142d90] */
  ECX = (r32((uint32_t)(0x12142d90)));
  /* 12126bad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126baf mov dword ptr [0x12142d90], ecx */
  w32((uint32_t)(0x12142d90), (ECX));
L_12126bb5:;
  /* 12126bb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126bb8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126bbb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126bbe jl 0x12126bd6 */
  if ((C.sf!=C.of)) goto L_12126bd6;
  /* 12126bc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126bc3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12126bc6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126bc9 jg 0x12126bd6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12126bd6;
  /* 12126bcb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126bce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126bd1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12126bd4 jmp 0x12126bb5 */
  goto L_12126bb5;
L_12126bd6:;
  /* 12126bd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126bd9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12126bdc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126bdf jne 0x12126c25 */
  if (!C.zf) goto L_12126c25;
  /* 12126be1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126be4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126be7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12126bea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126bed push ecx */
  push32((uint32_t)(ECX));
  /* 12126bee call 0x12126620 */
  push32(0x12126bf3u); f_12126620();
  /* 12126bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126bf6 mov edx, dword ptr [0x12142d90] */
  EDX = (r32((uint32_t)(0x12142d90)));
  /* 12126bfc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126bfe mov dword ptr [0x12142d90], edx */
  w32((uint32_t)(0x12142d90), (EDX));
L_12126c04:;
  /* 12126c04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126c07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12126c0a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126c0d jl 0x12126c25 */
  if ((C.sf!=C.of)) goto L_12126c25;
  /* 12126c0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126c12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12126c15 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126c18 jg 0x12126c25 */
  if ((!C.zf&&C.sf==C.of)) goto L_12126c25;
  /* 12126c1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126c1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126c20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12126c23 jmp 0x12126c04 */
  goto L_12126c04;
L_12126c25:;
  /* 12126c25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126c29 je 0x12126c39 */
  if (C.zf) goto L_12126c39;
  /* 12126c2b mov edx, dword ptr [0x12142d90] */
  EDX = (r32((uint32_t)(0x12142d90)));
  /* 12126c31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12126c33 mov dword ptr [0x12142d90], edx */
  w32((uint32_t)(0x12142d90), (EDX));
L_12126c39:;
  /* 12126c39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126c3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12126c3f mov dword ptr [0x12142d94], ecx */
  w32((uint32_t)(0x12142d94), (ECX));
  /* 12126c45 cmp dword ptr [0x12142d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12142d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126c4c je 0x12126c6e */
  if (C.zf) goto L_12126c6e;
  /* 12126c4e push 3 */
  push32((uint32_t)(0x3u));
  /* 12126c50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126c53 push edx */
  push32((uint32_t)(EDX));
  /* 12126c54 mov eax, dword ptr [0x12142e20] */
  EAX = (r32((uint32_t)(0x12142e20)));
  /* 12126c59 push eax */
  push32((uint32_t)(EAX));
  /* 12126c5a call 0x1211b590 */
  push32(0x12126c5fu); f_1211b590();
  /* 12126c5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126c62 mov ecx, dword ptr [0x12142e20] */
  ECX = (r32((uint32_t)(0x12142e20)));
  /* 12126c68 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12126c6c jmp 0x12126c77 */
  goto L_12126c77;
L_12126c6e:;
  /* 12126c6e mov edx, dword ptr [0x12142e20] */
  EDX = (r32((uint32_t)(0x12142e20)));
  /* 12126c74 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12126c77:;
  /* 12126c77 mov esp, ebp */
  ESP = (EBP);
  /* 12126c79 pop ebp */
  EBP = (pop32());
  /* 12126c7a ret  */
  ESPCHK(0x121268d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c80 @ 0x12126c80 (46 bytes, 18 insns) */
void f_12126c80(void) {
  FTRACE(0x12126c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12126c81 mov ebp, esp */
  EBP = (ESP);
  /* 12126c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12126c84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12126c86 call 0x1211b770 */
  push32(0x12126c8bu); f_1211b770();
  /* 12126c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126c8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126c91 push eax */
  push32((uint32_t)(EAX));
  /* 12126c92 call 0x12126cb0 */
  push32(0x12126c97u); f_12126cb0();
  /* 12126c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126c9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12126c9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12126c9f call 0x1211b810 */
  push32(0x12126ca4u); f_1211b810();
  /* 12126ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126caa mov esp, ebp */
  ESP = (EBP);
  /* 12126cac pop ebp */
  EBP = (pop32());
  /* 12126cad ret  */
  ESPCHK(0x12126c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cb0 @ 0x12126cb0 (762 bytes, 246 insns) */
void f_12126cb0(void) {
  FTRACE(0x12126cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12126cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12126cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12126cb4 cmp dword ptr [0x12142d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12142d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126cbb jne 0x12126cc4 */
  if (!C.zf) goto L_12126cc4;
  /* 12126cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126cbf jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126cc4:;
  /* 12126cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126cc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12126cca cmp ecx, dword ptr [0x12142e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12142e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126cd0 jne 0x12126ce4 */
  if (!C.zf) goto L_12126ce4;
  /* 12126cd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126cd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12126cd8 cmp eax, dword ptr [0x12142e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12142e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126cde je 0x12126eab */
  if (C.zf) goto L_12126eab;
L_12126ce4:;
  /* 12126ce4 cmp dword ptr [0x12143a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126ceb je 0x12126e65 */
  if (C.zf) goto L_12126e65;
  /* 12126cf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126cf3 mov cx, word ptr [0x12143b28] */
  CX = (r16((uint32_t)(0x12143b28)));
  /* 12126cfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12126cfc jne 0x12126d59 */
  if (!C.zf) goto L_12126d59;
  /* 12126cfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126d00 mov dx, word ptr [0x12143b36] */
  DX = (r16((uint32_t)(0x12143b36)));
  /* 12126d07 push edx */
  push32((uint32_t)(EDX));
  /* 12126d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126d0a mov ax, word ptr [0x12143b34] */
  AX = (r16((uint32_t)(0x12143b34)));
  /* 12126d10 push eax */
  push32((uint32_t)(EAX));
  /* 12126d11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126d13 mov cx, word ptr [0x12143b32] */
  CX = (r16((uint32_t)(0x12143b32)));
  /* 12126d1a push ecx */
  push32((uint32_t)(ECX));
  /* 12126d1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126d1d mov dx, word ptr [0x12143b30] */
  DX = (r16((uint32_t)(0x12143b30)));
  /* 12126d24 push edx */
  push32((uint32_t)(EDX));
  /* 12126d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126d29 mov ax, word ptr [0x12143b2c] */
  AX = (r16((uint32_t)(0x12143b2c)));
  /* 12126d2f push eax */
  push32((uint32_t)(EAX));
  /* 12126d30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126d32 mov cx, word ptr [0x12143b2e] */
  CX = (r16((uint32_t)(0x12143b2e)));
  /* 12126d39 push ecx */
  push32((uint32_t)(ECX));
  /* 12126d3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126d3c mov dx, word ptr [0x12143b2a] */
  DX = (r16((uint32_t)(0x12143b2a)));
  /* 12126d43 push edx */
  push32((uint32_t)(EDX));
  /* 12126d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126d47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12126d4a push ecx */
  push32((uint32_t)(ECX));
  /* 12126d4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12126d4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12126d4f call 0x12126fb0 */
  push32(0x12126d54u); f_12126fb0();
  /* 12126d54 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126d57 jmp 0x12126daa */
  goto L_12126daa;
L_12126d59:;
  /* 12126d59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126d5b mov dx, word ptr [0x12143b36] */
  DX = (r16((uint32_t)(0x12143b36)));
  /* 12126d62 push edx */
  push32((uint32_t)(EDX));
  /* 12126d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126d65 mov ax, word ptr [0x12143b34] */
  AX = (r16((uint32_t)(0x12143b34)));
  /* 12126d6b push eax */
  push32((uint32_t)(EAX));
  /* 12126d6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126d6e mov cx, word ptr [0x12143b32] */
  CX = (r16((uint32_t)(0x12143b32)));
  /* 12126d75 push ecx */
  push32((uint32_t)(ECX));
  /* 12126d76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126d78 mov dx, word ptr [0x12143b30] */
  DX = (r16((uint32_t)(0x12143b30)));
  /* 12126d7f push edx */
  push32((uint32_t)(EDX));
  /* 12126d80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126d82 mov ax, word ptr [0x12143b2e] */
  AX = (r16((uint32_t)(0x12143b2e)));
  /* 12126d88 push eax */
  push32((uint32_t)(EAX));
  /* 12126d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12126d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126d8f mov cx, word ptr [0x12143b2a] */
  CX = (r16((uint32_t)(0x12143b2a)));
  /* 12126d96 push ecx */
  push32((uint32_t)(ECX));
  /* 12126d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126d9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12126d9d push eax */
  push32((uint32_t)(EAX));
  /* 12126d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12126da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12126da2 call 0x12126fb0 */
  push32(0x12126da7u); f_12126fb0();
  /* 12126da7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126daa:;
  /* 12126daa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126dac mov cx, word ptr [0x12143ad4] */
  CX = (r16((uint32_t)(0x12143ad4)));
  /* 12126db3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12126db5 jne 0x12126e12 */
  if (!C.zf) goto L_12126e12;
  /* 12126db7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126db9 mov dx, word ptr [0x12143ae2] */
  DX = (r16((uint32_t)(0x12143ae2)));
  /* 12126dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12126dc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126dc3 mov ax, word ptr [0x12143ae0] */
  AX = (r16((uint32_t)(0x12143ae0)));
  /* 12126dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12126dca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126dcc mov cx, word ptr [0x12143ade] */
  CX = (r16((uint32_t)(0x12143ade)));
  /* 12126dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12126dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126dd6 mov dx, word ptr [0x12143adc] */
  DX = (r16((uint32_t)(0x12143adc)));
  /* 12126ddd push edx */
  push32((uint32_t)(EDX));
  /* 12126dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12126de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126de2 mov ax, word ptr [0x12143ad8] */
  AX = (r16((uint32_t)(0x12143ad8)));
  /* 12126de8 push eax */
  push32((uint32_t)(EAX));
  /* 12126de9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126deb mov cx, word ptr [0x12143ada] */
  CX = (r16((uint32_t)(0x12143ada)));
  /* 12126df2 push ecx */
  push32((uint32_t)(ECX));
  /* 12126df3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126df5 mov dx, word ptr [0x12143ad6] */
  DX = (r16((uint32_t)(0x12143ad6)));
  /* 12126dfc push edx */
  push32((uint32_t)(EDX));
  /* 12126dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126e00 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12126e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12126e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12126e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e08 call 0x12126fb0 */
  push32(0x12126e0du); f_12126fb0();
  /* 12126e0d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126e10 jmp 0x12126e63 */
  goto L_12126e63;
L_12126e12:;
  /* 12126e12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126e14 mov dx, word ptr [0x12143ae2] */
  DX = (r16((uint32_t)(0x12143ae2)));
  /* 12126e1b push edx */
  push32((uint32_t)(EDX));
  /* 12126e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126e1e mov ax, word ptr [0x12143ae0] */
  AX = (r16((uint32_t)(0x12143ae0)));
  /* 12126e24 push eax */
  push32((uint32_t)(EAX));
  /* 12126e25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126e27 mov cx, word ptr [0x12143ade] */
  CX = (r16((uint32_t)(0x12143ade)));
  /* 12126e2e push ecx */
  push32((uint32_t)(ECX));
  /* 12126e2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12126e31 mov dx, word ptr [0x12143adc] */
  DX = (r16((uint32_t)(0x12143adc)));
  /* 12126e38 push edx */
  push32((uint32_t)(EDX));
  /* 12126e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126e3b mov ax, word ptr [0x12143ada] */
  AX = (r16((uint32_t)(0x12143ada)));
  /* 12126e41 push eax */
  push32((uint32_t)(EAX));
  /* 12126e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12126e48 mov cx, word ptr [0x12143ad6] */
  CX = (r16((uint32_t)(0x12143ad6)));
  /* 12126e4f push ecx */
  push32((uint32_t)(ECX));
  /* 12126e50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126e53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12126e56 push eax */
  push32((uint32_t)(EAX));
  /* 12126e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e5b call 0x12126fb0 */
  push32(0x12126e60u); f_12126fb0();
  /* 12126e60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126e63:;
  /* 12126e63 jmp 0x12126eab */
  goto L_12126eab;
L_12126e65:;
  /* 12126e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12126e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12126e73 push 4 */
  push32((uint32_t)(0x4u));
  /* 12126e75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126e78 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12126e7b push edx */
  push32((uint32_t)(EDX));
  /* 12126e7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12126e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12126e80 call 0x12126fb0 */
  push32(0x12126e85u); f_12126fb0();
  /* 12126e85 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12126e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12126e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126e94 push 5 */
  push32((uint32_t)(0x5u));
  /* 12126e96 push 0xa */
  push32((uint32_t)(0xau));
  /* 12126e98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126e9b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12126e9e push ecx */
  push32((uint32_t)(ECX));
  /* 12126e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12126ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12126ea3 call 0x12126fb0 */
  push32(0x12126ea8u); f_12126fb0();
  /* 12126ea8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12126eab:;
  /* 12126eab mov edx, dword ptr [0x12142e2c] */
  EDX = (r32((uint32_t)(0x12142e2c)));
  /* 12126eb1 cmp edx, dword ptr [0x12142e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12142e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126eb7 jge 0x12126f04 */
  if ((C.sf==C.of)) goto L_12126f04;
  /* 12126eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126ebc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12126ebf cmp ecx, dword ptr [0x12142e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12142e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126ec5 jl 0x12126ed5 */
  if ((C.sf!=C.of)) goto L_12126ed5;
  /* 12126ec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126eca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12126ecd cmp eax, dword ptr [0x12142e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12142e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126ed3 jle 0x12126edc */
  if ((C.zf||C.sf!=C.of)) goto L_12126edc;
L_12126ed5:;
  /* 12126ed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126ed7 jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126edc:;
  /* 12126edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126edf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12126ee2 cmp edx, dword ptr [0x12142e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12142e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126ee8 jle 0x12126f02 */
  if ((C.zf||C.sf!=C.of)) goto L_12126f02;
  /* 12126eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126eed mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12126ef0 cmp ecx, dword ptr [0x12142e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12142e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126ef6 jge 0x12126f02 */
  if ((C.sf==C.of)) goto L_12126f02;
  /* 12126ef8 mov eax, 1 */
  EAX = (0x1u);
  /* 12126efd jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126f02:;
  /* 12126f02 jmp 0x12126f47 */
  goto L_12126f47;
L_12126f04:;
  /* 12126f04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f07 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12126f0a cmp eax, dword ptr [0x12142e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12142e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f10 jl 0x12126f20 */
  if ((C.sf!=C.of)) goto L_12126f20;
  /* 12126f12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f15 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12126f18 cmp edx, dword ptr [0x12142e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12142e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f1e jle 0x12126f27 */
  if ((C.zf||C.sf!=C.of)) goto L_12126f27;
L_12126f20:;
  /* 12126f20 mov eax, 1 */
  EAX = (0x1u);
  /* 12126f25 jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126f27:;
  /* 12126f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f2a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12126f2d cmp ecx, dword ptr [0x12142e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12142e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f33 jle 0x12126f47 */
  if ((C.zf||C.sf!=C.of)) goto L_12126f47;
  /* 12126f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f38 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12126f3b cmp eax, dword ptr [0x12142e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12142e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f41 jge 0x12126f47 */
  if ((C.sf==C.of)) goto L_12126f47;
  /* 12126f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126f45 jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126f47:;
  /* 12126f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12126f4d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12126f55 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126f57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f5a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12126f5d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126f63 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126f65 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126f6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12126f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12126f71 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12126f74 cmp edx, dword ptr [0x12142e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12142e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f7a jne 0x12126f92 */
  if (!C.zf) goto L_12126f92;
  /* 12126f7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126f7f cmp eax, dword ptr [0x12142e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12142e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f85 jl 0x12126f8e */
  if ((C.sf!=C.of)) goto L_12126f8e;
  /* 12126f87 mov eax, 1 */
  EAX = (0x1u);
  /* 12126f8c jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126f8e:;
  /* 12126f8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12126f90 jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126f92:;
  /* 12126f92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12126f95 cmp ecx, dword ptr [0x12142e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12142e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126f9b jge 0x12126fa4 */
  if ((C.sf==C.of)) goto L_12126fa4;
  /* 12126f9d mov eax, 1 */
  EAX = (0x1u);
  /* 12126fa2 jmp 0x12126fa6 */
  goto L_12126fa6;
L_12126fa4:;
  /* 12126fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12126fa6:;
  /* 12126fa6 mov esp, ebp */
  ESP = (EBP);
  /* 12126fa8 pop ebp */
  EBP = (pop32());
  /* 12126fa9 ret  */
  ESPCHK(0x12126cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fb0 @ 0x12126fb0 (504 bytes, 145 insns) */
void f_12126fb0(void) {
  FTRACE(0x12126fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12126fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12126fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12126fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12126fb6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12126fba jne 0x1212708c */
  if (!C.zf) goto L_1212708c;
  /* 12126fc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12126fc3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12126fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12126fc8 jne 0x12126fd9 */
  if (!C.zf) goto L_12126fd9;
  /* 12126fca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12126fcd mov edx, dword ptr [ecx*4 + 0x12142e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12142e4c)));
  /* 12126fd4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12126fd7 jmp 0x12126fe6 */
  goto L_12126fe6;
L_12126fd9:;
  /* 12126fd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12126fdc mov ecx, dword ptr [eax*4 + 0x12142e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12142e80)));
  /* 12126fe3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12126fe6:;
  /* 12126fe6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12126fe9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12126fec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12126fef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12126ff2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12126ff5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12126ffb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12126ffe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127000 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127003 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127006 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12127009 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1212700d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1212700e mov ecx, 7 */
  ECX = (0x7u);
  /* 12127013 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12127015 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12127018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212701b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212701e jge 0x12127039 */
  if ((C.sf==C.of)) goto L_12127039;
  /* 12127020 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12127023 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127026 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127029 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212702c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212702f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127032 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127034 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12127037 jmp 0x1212704d */
  goto L_1212704d;
L_12127039:;
  /* 12127039 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1212703c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212703f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127042 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12127045 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127048 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212704a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1212704d:;
  /* 1212704d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127051 jne 0x1212708a */
  if (!C.zf) goto L_1212708a;
  /* 12127053 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127056 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12127059 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212705b jne 0x1212706c */
  if (!C.zf) goto L_1212706c;
  /* 1212705d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127060 mov eax, dword ptr [edx*4 + 0x12142e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12142e50)));
  /* 12127067 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1212706a jmp 0x12127079 */
  goto L_12127079;
L_1212706c:;
  /* 1212706c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212706f mov edx, dword ptr [ecx*4 + 0x12142e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12142e84)));
  /* 12127076 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12127079:;
  /* 12127079 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212707c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212707f jle 0x1212708a */
  if ((C.zf||C.sf!=C.of)) goto L_1212708a;
  /* 12127081 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127084 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127087 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1212708a:;
  /* 1212708a jmp 0x121270c1 */
  goto L_121270c1;
L_1212708c:;
  /* 1212708c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212708f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12127092 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127094 jne 0x121270a5 */
  if (!C.zf) goto L_121270a5;
  /* 12127096 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127099 mov ecx, dword ptr [eax*4 + 0x12142e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12142e4c)));
  /* 121270a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121270a3 jmp 0x121270b2 */
  goto L_121270b2;
L_121270a5:;
  /* 121270a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121270a8 mov eax, dword ptr [edx*4 + 0x12142e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12142e80)));
  /* 121270af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_121270b2:;
  /* 121270b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121270b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121270b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121270bb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121270be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121270c1:;
  /* 121270c1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121270c5 jne 0x12127101 */
  if (!C.zf) goto L_12127101;
  /* 121270c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121270ca mov dword ptr [0x12142e2c], eax */
  w32((uint32_t)(0x12142e2c), (EAX));
  /* 121270cf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 121270d2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121270d5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 121270d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121270da imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121270dd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 121270e0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121270e2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121270e8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 121270eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121270ed mov dword ptr [0x12142e30], ecx */
  w32((uint32_t)(0x12142e30), (ECX));
  /* 121270f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121270f6 mov dword ptr [0x12142e28], edx */
  w32((uint32_t)(0x12142e28), (EDX));
  /* 121270fc jmp 0x121271a4 */
  goto L_121271a4;
L_12127101:;
  /* 12127101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127104 mov dword ptr [0x12142e3c], eax */
  w32((uint32_t)(0x12142e3c), (EAX));
  /* 12127109 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1212710c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212710f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12127112 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127114 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12127117 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1212711a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212711c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12127122 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12127125 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127127 mov dword ptr [0x12142e40], ecx */
  w32((uint32_t)(0x12142e40), (ECX));
  /* 1212712d mov edx, dword ptr [0x12142d98] */
  EDX = (r32((uint32_t)(0x12142d98)));
  /* 12127133 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12127139 mov eax, dword ptr [0x12142e40] */
  EAX = (r32((uint32_t)(0x12142e40)));
  /* 1212713e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127140 mov dword ptr [0x12142e40], eax */
  w32((uint32_t)(0x12142e40), (EAX));
  /* 12127145 cmp dword ptr [0x12142e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12142e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212714c jge 0x12127171 */
  if ((C.sf==C.of)) goto L_12127171;
  /* 1212714e mov ecx, dword ptr [0x12142e40] */
  ECX = (r32((uint32_t)(0x12142e40)));
  /* 12127154 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212715a mov dword ptr [0x12142e40], ecx */
  w32((uint32_t)(0x12142e40), (ECX));
  /* 12127160 mov edx, dword ptr [0x12142e3c] */
  EDX = (r32((uint32_t)(0x12142e3c)));
  /* 12127166 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127169 mov dword ptr [0x12142e3c], edx */
  w32((uint32_t)(0x12142e3c), (EDX));
  /* 1212716f jmp 0x1212719b */
  goto L_1212719b;
L_12127171:;
  /* 12127171 cmp dword ptr [0x12142e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12142e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212717b jl 0x1212719b */
  if ((C.sf!=C.of)) goto L_1212719b;
  /* 1212717d mov eax, dword ptr [0x12142e40] */
  EAX = (r32((uint32_t)(0x12142e40)));
  /* 12127182 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127187 mov dword ptr [0x12142e40], eax */
  w32((uint32_t)(0x12142e40), (EAX));
  /* 1212718c mov ecx, dword ptr [0x12142e3c] */
  ECX = (r32((uint32_t)(0x12142e3c)));
  /* 12127192 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127195 mov dword ptr [0x12142e3c], ecx */
  w32((uint32_t)(0x12142e3c), (ECX));
L_1212719b:;
  /* 1212719b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212719e mov dword ptr [0x12142e38], edx */
  w32((uint32_t)(0x12142e38), (EDX));
L_121271a4:;
  /* 121271a4 mov esp, ebp */
  ESP = (EBP);
  /* 121271a6 pop ebp */
  EBP = (pop32());
  /* 121271a7 ret  */
  ESPCHK(0x12126fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171b0 @ 0x121271b0 (382 bytes, 135 insns) */
void f_121271b0(void) {
  FTRACE(0x121271b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121271b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121271b1 mov ebp, esp */
  EBP = (ESP);
  /* 121271b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121271b5 push 0x1213fdb0 */
  push32((uint32_t)(0x1213fdb0u));
  /* 121271ba push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 121271bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121271c5 push eax */
  push32((uint32_t)(EAX));
  /* 121271c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121271cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121271d0 push ebx */
  push32((uint32_t)(EBX));
  /* 121271d1 push esi */
  push32((uint32_t)(ESI));
  /* 121271d2 push edi */
  push32((uint32_t)(EDI));
  /* 121271d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121271d6 cmp dword ptr [0x12143b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121271dd jne 0x12127222 */
  if (!C.zf) goto L_12127222;
  /* 121271df push 0 */
  push32((uint32_t)(0x0u));
  /* 121271e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121271e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121271e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121271e7 call dword ptr [0x121462f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f0))), 0x121271edu);
  /* 121271ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121271ef je 0x121271fd */
  if (C.zf) goto L_121271fd;
  /* 121271f1 mov dword ptr [0x12143b44], 1 */
  w32((uint32_t)(0x12143b44), (0x1u));
  /* 121271fb jmp 0x12127222 */
  goto L_12127222;
L_121271fd:;
  /* 121271fd push 0 */
  push32((uint32_t)(0x0u));
  /* 121271ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12127201 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127203 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127205 call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x1212720bu);
  /* 1212720b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212720d je 0x1212721b */
  if (C.zf) goto L_1212721b;
  /* 1212720f mov dword ptr [0x12143b44], 2 */
  w32((uint32_t)(0x12143b44), (0x2u));
  /* 12127219 jmp 0x12127222 */
  goto L_12127222;
L_1212721b:;
  /* 1212721b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212721d jmp 0x12127331 */
  goto L_12127331;
L_12127222:;
  /* 12127222 cmp dword ptr [0x12143b44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143b44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127229 jne 0x12127246 */
  if (!C.zf) goto L_12127246;
  /* 1212722b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212722e push eax */
  push32((uint32_t)(EAX));
  /* 1212722f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127232 push ecx */
  push32((uint32_t)(ECX));
  /* 12127233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12127236 push edx */
  push32((uint32_t)(EDX));
  /* 12127237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212723a push eax */
  push32((uint32_t)(EAX));
  /* 1212723b call dword ptr [0x121462f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f0))), 0x12127241u);
  /* 12127241 jmp 0x12127331 */
  goto L_12127331;
L_12127246:;
  /* 12127246 cmp dword ptr [0x12143b44], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143b44))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212724d jne 0x1212732f */
  if (!C.zf) goto L_1212732f;
  /* 12127253 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127257 jne 0x12127262 */
  if (!C.zf) goto L_12127262;
  /* 12127259 mov ecx, dword ptr [0x121439f8] */
  ECX = (r32((uint32_t)(0x121439f8)));
  /* 1212725f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12127262:;
  /* 12127262 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127264 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12127269 push edx */
  push32((uint32_t)(EDX));
  /* 1212726a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212726d push eax */
  push32((uint32_t)(EAX));
  /* 1212726e call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x12127274u);
  /* 12127274 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12127277 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212727b jne 0x12127284 */
  if (!C.zf) goto L_12127284;
  /* 1212727d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212727f jmp 0x12127331 */
  goto L_12127331;
L_12127284:;
  /* 12127284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1212728b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1212728e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127291 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12127293 call 0x1211af10 */
  push32(0x12127298u); f_1211af10();
  /* 12127298 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1212729b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1212729e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121272a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121272a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121272ab jmp 0x121272c4 */
  goto L_121272c4;
  /* 121272ad mov eax, 1 */
  EAX = (0x1u);
  /* 121272b2 ret  */
  ESPCHK(0x121271b0u, _esp0);
  ESP += 4; return;
  /* 121272b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121272b6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121272bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121272c4:;
  /* 121272c4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121272c8 jne 0x121272ce */
  if (!C.zf) goto L_121272ce;
  /* 121272ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121272cc jmp 0x12127331 */
  goto L_12127331;
L_121272ce:;
  /* 121272ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121272d1 push edx */
  push32((uint32_t)(EDX));
  /* 121272d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121272d5 push eax */
  push32((uint32_t)(EAX));
  /* 121272d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121272d9 push ecx */
  push32((uint32_t)(ECX));
  /* 121272da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121272dd push edx */
  push32((uint32_t)(EDX));
  /* 121272de call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x121272e4u);
  /* 121272e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121272e6 jne 0x121272ec */
  if (!C.zf) goto L_121272ec;
  /* 121272e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121272ea jmp 0x12127331 */
  goto L_12127331;
L_121272ec:;
  /* 121272ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121272f0 jne 0x1212730d */
  if (!C.zf) goto L_1212730d;
  /* 121272f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121272f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121272f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121272f8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121272fb push eax */
  push32((uint32_t)(EAX));
  /* 121272fc push 1 */
  push32((uint32_t)(0x1u));
  /* 121272fe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127301 push ecx */
  push32((uint32_t)(ECX));
  /* 12127302 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127308u);
  /* 12127308 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1212730b jmp 0x1212732a */
  goto L_1212732a;
L_1212730d:;
  /* 1212730d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127310 push edx */
  push32((uint32_t)(EDX));
  /* 12127311 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127314 push eax */
  push32((uint32_t)(EAX));
  /* 12127315 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12127317 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1212731a push ecx */
  push32((uint32_t)(ECX));
  /* 1212731b push 1 */
  push32((uint32_t)(0x1u));
  /* 1212731d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127320 push edx */
  push32((uint32_t)(EDX));
  /* 12127321 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127327u);
  /* 12127327 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1212732a:;
  /* 1212732a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1212732d jmp 0x12127331 */
  goto L_12127331;
L_1212732f:;
  /* 1212732f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12127331:;
  /* 12127331 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12127334 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12127337 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1212733e pop edi */
  EDI = (pop32());
  /* 1212733f pop esi */
  ESI = (pop32());
  /* 12127340 pop ebx */
  EBX = (pop32());
  /* 12127341 mov esp, ebp */
  ESP = (EBP);
  /* 12127343 pop ebp */
  EBP = (pop32());
  /* 12127344 ret  */
  ESPCHK(0x121271b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x12127350 (398 bytes, 140 insns) */
void f_12127350(void) {
  FTRACE(0x12127350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127350 push ebp */
  push32((uint32_t)(EBP));
  /* 12127351 mov ebp, esp */
  EBP = (ESP);
  /* 12127353 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12127355 push 0x1213fdc0 */
  push32((uint32_t)(0x1213fdc0u));
  /* 1212735a push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 1212735f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12127365 push eax */
  push32((uint32_t)(EAX));
  /* 12127366 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1212736d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127370 push ebx */
  push32((uint32_t)(EBX));
  /* 12127371 push esi */
  push32((uint32_t)(ESI));
  /* 12127372 push edi */
  push32((uint32_t)(EDI));
  /* 12127373 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12127376 cmp dword ptr [0x12143b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212737d jne 0x121273c2 */
  if (!C.zf) goto L_121273c2;
  /* 1212737f push 0 */
  push32((uint32_t)(0x0u));
  /* 12127381 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127383 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127385 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127387 call dword ptr [0x121462f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f0))), 0x1212738du);
  /* 1212738d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212738f je 0x1212739d */
  if (C.zf) goto L_1212739d;
  /* 12127391 mov dword ptr [0x12143b48], 1 */
  w32((uint32_t)(0x12143b48), (0x1u));
  /* 1212739b jmp 0x121273c2 */
  goto L_121273c2;
L_1212739d:;
  /* 1212739d push 0 */
  push32((uint32_t)(0x0u));
  /* 1212739f push 0 */
  push32((uint32_t)(0x0u));
  /* 121273a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121273a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121273a5 call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x121273abu);
  /* 121273ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121273ad je 0x121273bb */
  if (C.zf) goto L_121273bb;
  /* 121273af mov dword ptr [0x12143b48], 2 */
  w32((uint32_t)(0x12143b48), (0x2u));
  /* 121273b9 jmp 0x121273c2 */
  goto L_121273c2;
L_121273bb:;
  /* 121273bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121273bd jmp 0x121274e1 */
  goto L_121274e1;
L_121273c2:;
  /* 121273c2 cmp dword ptr [0x12143b48], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143b48))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121273c9 jne 0x121273e6 */
  if (!C.zf) goto L_121273e6;
  /* 121273cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121273ce push eax */
  push32((uint32_t)(EAX));
  /* 121273cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121273d2 push ecx */
  push32((uint32_t)(ECX));
  /* 121273d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121273d6 push edx */
  push32((uint32_t)(EDX));
  /* 121273d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121273da push eax */
  push32((uint32_t)(EAX));
  /* 121273db call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x121273e1u);
  /* 121273e1 jmp 0x121274e1 */
  goto L_121274e1;
L_121273e6:;
  /* 121273e6 cmp dword ptr [0x12143b48], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143b48))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121273ed jne 0x121274df */
  if (!C.zf) goto L_121274df;
  /* 121273f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121273f7 jne 0x12127402 */
  if (!C.zf) goto L_12127402;
  /* 121273f9 mov ecx, dword ptr [0x121439f8] */
  ECX = (r32((uint32_t)(0x121439f8)));
  /* 121273ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12127402:;
  /* 12127402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127404 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127406 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12127409 push edx */
  push32((uint32_t)(EDX));
  /* 1212740a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212740d push eax */
  push32((uint32_t)(EAX));
  /* 1212740e call dword ptr [0x121462f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f0))), 0x12127414u);
  /* 12127414 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12127417 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212741b jne 0x12127424 */
  if (!C.zf) goto L_12127424;
  /* 1212741d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212741f jmp 0x121274e1 */
  goto L_121274e1;
L_12127424:;
  /* 12127424 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1212742b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1212742e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12127430 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127433 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12127435 call 0x1211af10 */
  push32(0x1212743au); f_1211af10();
  /* 1212743a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1212743d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12127440 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12127443 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12127446 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1212744d jmp 0x12127466 */
  goto L_12127466;
  /* 1212744f mov eax, 1 */
  EAX = (0x1u);
  /* 12127454 ret  */
  ESPCHK(0x12127350u, _esp0);
  ESP += 4; return;
  /* 12127455 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12127458 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1212745f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12127466:;
  /* 12127466 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212746a jne 0x12127470 */
  if (!C.zf) goto L_12127470;
  /* 1212746c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212746e jmp 0x121274e1 */
  goto L_121274e1;
L_12127470:;
  /* 12127470 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12127473 push edx */
  push32((uint32_t)(EDX));
  /* 12127474 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12127477 push eax */
  push32((uint32_t)(EAX));
  /* 12127478 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212747b push ecx */
  push32((uint32_t)(ECX));
  /* 1212747c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212747f push edx */
  push32((uint32_t)(EDX));
  /* 12127480 call dword ptr [0x121462f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f0))), 0x12127486u);
  /* 12127486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127488 jne 0x1212748e */
  if (!C.zf) goto L_1212748e;
  /* 1212748a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212748c jmp 0x121274e1 */
  goto L_121274e1;
L_1212748e:;
  /* 1212748e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127492 jne 0x121274b6 */
  if (!C.zf) goto L_121274b6;
  /* 12127494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127496 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212749a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212749c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1212749e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121274a1 push eax */
  push32((uint32_t)(EAX));
  /* 121274a2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121274a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121274aa push ecx */
  push32((uint32_t)(ECX));
  /* 121274ab call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121274b1u);
  /* 121274b1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121274b4 jmp 0x121274da */
  goto L_121274da;
L_121274b6:;
  /* 121274b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121274b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121274ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121274bd push edx */
  push32((uint32_t)(EDX));
  /* 121274be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121274c1 push eax */
  push32((uint32_t)(EAX));
  /* 121274c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121274c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121274c7 push ecx */
  push32((uint32_t)(ECX));
  /* 121274c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121274cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121274d0 push edx */
  push32((uint32_t)(EDX));
  /* 121274d1 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121274d7u);
  /* 121274d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121274da:;
  /* 121274da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121274dd jmp 0x121274e1 */
  goto L_121274e1;
L_121274df:;
  /* 121274df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121274e1:;
  /* 121274e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 121274e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121274e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121274ee pop edi */
  EDI = (pop32());
  /* 121274ef pop esi */
  ESI = (pop32());
  /* 121274f0 pop ebx */
  EBX = (pop32());
  /* 121274f1 mov esp, ebp */
  ESP = (EBP);
  /* 121274f3 pop ebp */
  EBP = (pop32());
  /* 121274f4 ret  */
  ESPCHK(0x12127350u, _esp0);
  ESP += 4; return;
}

/* FUN_10017500 @ 0x12127500 (11 bytes, 6 insns) */
void f_12127500(void) {
  FTRACE(0x12127500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127500 push ebp */
  push32((uint32_t)(EBP));
  /* 12127501 mov ebp, esp */
  EBP = (ESP);
  /* 12127503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127506 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127509 pop ebp */
  EBP = (pop32());
  /* 1212750a ret  */
  ESPCHK(0x12127500u, _esp0);
  ESP += 4; return;
}

/* FUN_10017510 @ 0x12127510 (147 bytes, 43 insns) */
void f_12127510(void) {
  FTRACE(0x12127510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127510 push ebp */
  push32((uint32_t)(EBP));
  /* 12127511 mov ebp, esp */
  EBP = (ESP);
  /* 12127513 push ecx */
  push32((uint32_t)(ECX));
  /* 12127514 cmp dword ptr [0x121439e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212751b jne 0x12127537 */
  if (!C.zf) goto L_12127537;
  /* 1212751d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127521 jl 0x12127532 */
  if ((C.sf!=C.of)) goto L_12127532;
  /* 12127523 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127527 jg 0x12127532 */
  if ((!C.zf&&C.sf==C.of)) goto L_12127532;
  /* 12127529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212752c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212752f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12127532:;
  /* 12127532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127535 jmp 0x1212759f */
  goto L_1212759f;
L_12127537:;
  /* 12127537 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 1212753c call dword ptr [0x121463d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d0))), 0x12127542u);
  /* 12127542 cmp dword ptr [0x12143b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127549 je 0x12127569 */
  if (C.zf) goto L_12127569;
  /* 1212754b push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12127550 call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x12127556u);
  /* 12127556 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12127558 call 0x1211b770 */
  push32(0x1212755du); f_1211b770();
  /* 1212755d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127560 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12127567 jmp 0x12127570 */
  goto L_12127570;
L_12127569:;
  /* 12127569 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12127570:;
  /* 12127570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127573 push ecx */
  push32((uint32_t)(ECX));
  /* 12127574 call 0x121275b0 */
  push32(0x12127579u); f_121275b0();
  /* 12127579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212757c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1212757f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127583 je 0x12127591 */
  if (C.zf) goto L_12127591;
  /* 12127585 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12127587 call 0x1211b810 */
  push32(0x1212758cu); f_1211b810();
  /* 1212758c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212758f jmp 0x1212759c */
  goto L_1212759c;
L_12127591:;
  /* 12127591 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12127596 call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x1212759cu);
L_1212759c:;
  /* 1212759c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1212759f:;
  /* 1212759f mov esp, ebp */
  ESP = (EBP);
  /* 121275a1 pop ebp */
  EBP = (pop32());
  /* 121275a2 ret  */
  ESPCHK(0x12127510u, _esp0);
  ESP += 4; return;
}

/* FUN_100175b0 @ 0x121275b0 (299 bytes, 91 insns) */
void f_121275b0(void) {
  FTRACE(0x121275b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121275b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121275b1 mov ebp, esp */
  EBP = (ESP);
  /* 121275b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121275b6 cmp dword ptr [0x121439e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121275bd jne 0x121275dc */
  if (!C.zf) goto L_121275dc;
  /* 121275bf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121275c3 jl 0x121275d4 */
  if ((C.sf!=C.of)) goto L_121275d4;
  /* 121275c5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121275c9 jg 0x121275d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_121275d4;
  /* 121275cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121275ce add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121275d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121275d4:;
  /* 121275d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121275d7 jmp 0x121276d7 */
  goto L_121276d7;
L_121275dc:;
  /* 121275dc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121275e3 jge 0x12127623 */
  if ((C.sf==C.of)) goto L_12127623;
  /* 121275e5 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121275ec jle 0x12127601 */
  if ((C.zf||C.sf!=C.of)) goto L_12127601;
  /* 121275ee push 1 */
  push32((uint32_t)(0x1u));
  /* 121275f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121275f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121275f4 call 0x1211dd80 */
  push32(0x121275f9u); f_1211dd80();
  /* 121275f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121275fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121275ff jmp 0x12127615 */
  goto L_12127615;
L_12127601:;
  /* 12127601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127604 mov eax, dword ptr [0x12141c98] */
  EAX = (r32((uint32_t)(0x12141c98)));
  /* 12127609 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1212760b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1212760f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12127612 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12127615:;
  /* 12127615 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127619 jne 0x12127623 */
  if (!C.zf) goto L_12127623;
  /* 1212761b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212761e jmp 0x121276d7 */
  goto L_121276d7;
L_12127623:;
  /* 12127623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127626 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12127629 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1212762f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12127635 mov eax, dword ptr [0x12141c98] */
  EAX = (r32((uint32_t)(0x12141c98)));
  /* 1212763a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1212763c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12127640 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12127646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12127648 je 0x1212766c */
  if (C.zf) goto L_1212766c;
  /* 1212764a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212764d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12127650 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12127656 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12127659 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1212765c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1212765f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12127663 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1212766a jmp 0x1212767d */
  goto L_1212767d;
L_1212766c:;
  /* 1212766c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1212766f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12127672 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12127676 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1212767d:;
  /* 1212767d push 1 */
  push32((uint32_t)(0x1u));
  /* 1212767f push 0 */
  push32((uint32_t)(0x0u));
  /* 12127681 push 3 */
  push32((uint32_t)(0x3u));
  /* 12127683 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12127686 push edx */
  push32((uint32_t)(EDX));
  /* 12127687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212768a push eax */
  push32((uint32_t)(EAX));
  /* 1212768b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1212768e push ecx */
  push32((uint32_t)(ECX));
  /* 1212768f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12127694 mov edx, dword ptr [0x121439e8] */
  EDX = (r32((uint32_t)(0x121439e8)));
  /* 1212769a push edx */
  push32((uint32_t)(EDX));
  /* 1212769b call 0x12120160 */
  push32(0x121276a0u); f_12120160();
  /* 121276a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121276a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121276a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121276aa jne 0x121276b1 */
  if (!C.zf) goto L_121276b1;
  /* 121276ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121276af jmp 0x121276d7 */
  goto L_121276d7;
L_121276b1:;
  /* 121276b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121276b5 jne 0x121276c1 */
  if (!C.zf) goto L_121276c1;
  /* 121276b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121276ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121276bf jmp 0x121276d7 */
  goto L_121276d7;
L_121276c1:;
  /* 121276c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121276c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121276c9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 121276cc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121276d2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121276d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_121276d7:;
  /* 121276d7 mov esp, ebp */
  ESP = (EBP);
  /* 121276d9 pop ebp */
  EBP = (pop32());
  /* 121276da ret  */
  ESPCHK(0x121275b0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x121276e0 (52 bytes, 19 insns) */
void f_121276e0(void) {
  FTRACE(0x121276e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121276e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121276e4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 121276e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121276ea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 121276ee jne 0x121276f9 */
  if (!C.zf) goto L_121276f9;
  /* 121276f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 121276f4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121276f6 ret 0x10 */
  ESPCHK(0x121276e0u, _esp0);
  ESP += 20; return;
L_121276f9:;
  /* 121276f9 push ebx */
  push32((uint32_t)(EBX));
  /* 121276fa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121276fc mov ebx, eax */
  EBX = (EAX);
  /* 121276fe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12127702 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12127706 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127708 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1212770c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1212770e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127710 pop ebx */
  EBX = (pop32());
  /* 12127711 ret 0x10 */
  ESPCHK(0x121276e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10017720 @ 0x12127720 (46 bytes, 18 insns) */
void f_12127720(void) {
  FTRACE(0x12127720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127720 push ebp */
  push32((uint32_t)(EBP));
  /* 12127721 mov ebp, esp */
  EBP = (ESP);
  /* 12127723 push ecx */
  push32((uint32_t)(ECX));
  /* 12127724 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12127726 call 0x1211b770 */
  push32(0x1212772bu); f_1211b770();
  /* 1212772b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212772e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127731 push eax */
  push32((uint32_t)(EAX));
  /* 12127732 call 0x12127750 */
  push32(0x12127737u); f_12127750();
  /* 12127737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212773a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212773d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1212773f call 0x1211b810 */
  push32(0x12127744u); f_1211b810();
  /* 12127744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212774a mov esp, ebp */
  ESP = (EBP);
  /* 1212774c pop ebp */
  EBP = (pop32());
  /* 1212774d ret  */
  ESPCHK(0x12127720u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12127750 (198 bytes, 69 insns) */
void f_12127750(void) {
  FTRACE(0x12127750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127750 push ebp */
  push32((uint32_t)(EBP));
  /* 12127751 mov ebp, esp */
  EBP = (ESP);
  /* 12127753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127756 mov eax, dword ptr [0x12143804] */
  EAX = (r32((uint32_t)(0x12143804)));
  /* 1212775b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1212775e cmp dword ptr [0x12145300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127765 jne 0x1212776e */
  if (!C.zf) goto L_1212776e;
  /* 12127767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127769 jmp 0x12127812 */
  goto L_12127812;
L_1212776e:;
  /* 1212776e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127772 jne 0x12127796 */
  if (!C.zf) goto L_12127796;
  /* 12127774 cmp dword ptr [0x1214380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212777b je 0x12127796 */
  if (C.zf) goto L_12127796;
  /* 1212777d call 0x12127870 */
  push32(0x12127782u); f_12127870();
  /* 12127782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127784 je 0x1212778d */
  if (C.zf) goto L_1212778d;
  /* 12127786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127788 jmp 0x12127812 */
  goto L_12127812;
L_1212778d:;
  /* 1212778d mov ecx, dword ptr [0x12143804] */
  ECX = (r32((uint32_t)(0x12143804)));
  /* 12127793 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12127796:;
  /* 12127796 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212779a je 0x12127810 */
  if (C.zf) goto L_12127810;
  /* 1212779c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121277a0 je 0x12127810 */
  if (C.zf) goto L_12127810;
  /* 121277a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121277a5 push edx */
  push32((uint32_t)(EDX));
  /* 121277a6 call 0x1211aba0 */
  push32(0x121277abu); f_1211aba0();
  /* 121277ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121277ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121277b1:;
  /* 121277b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121277b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121277b7 je 0x12127810 */
  if (C.zf) goto L_12127810;
  /* 121277b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121277bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121277be push edx */
  push32((uint32_t)(EDX));
  /* 121277bf call 0x1211aba0 */
  push32(0x121277c4u); f_1211aba0();
  /* 121277c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121277c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121277ca jbe 0x12127805 */
  if ((C.cf||C.zf)) goto L_12127805;
  /* 121277cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121277cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121277d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121277d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 121277d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121277db jne 0x12127805 */
  if (!C.zf) goto L_12127805;
  /* 121277dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121277e0 push ecx */
  push32((uint32_t)(ECX));
  /* 121277e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121277e4 push edx */
  push32((uint32_t)(EDX));
  /* 121277e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121277e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121277ea push ecx */
  push32((uint32_t)(ECX));
  /* 121277eb call 0x12127820 */
  push32(0x121277f0u); f_12127820();
  /* 121277f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121277f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121277f5 jne 0x12127805 */
  if (!C.zf) goto L_12127805;
  /* 121277f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121277fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121277fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121277ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12127803 jmp 0x12127812 */
  goto L_12127812;
L_12127805:;
  /* 12127805 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127808 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212780b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1212780e jmp 0x121277b1 */
  goto L_121277b1;
L_12127810:;
  /* 12127810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12127812:;
  /* 12127812 mov esp, ebp */
  ESP = (EBP);
  /* 12127814 pop ebp */
  EBP = (pop32());
  /* 12127815 ret  */
  ESPCHK(0x12127750u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12127820 (79 bytes, 32 insns) */
void f_12127820(void) {
  FTRACE(0x12127820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127820 push ebp */
  push32((uint32_t)(EBP));
  /* 12127821 mov ebp, esp */
  EBP = (ESP);
  /* 12127823 push ecx */
  push32((uint32_t)(ECX));
  /* 12127824 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127828 jne 0x1212782e */
  if (!C.zf) goto L_1212782e;
  /* 1212782a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212782c jmp 0x1212786b */
  goto L_1212786b;
L_1212782e:;
  /* 1212782e mov eax, dword ptr [0x12144ec4] */
  EAX = (r32((uint32_t)(0x12144ec4)));
  /* 12127833 push eax */
  push32((uint32_t)(EAX));
  /* 12127834 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127837 push ecx */
  push32((uint32_t)(ECX));
  /* 12127838 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212783b push edx */
  push32((uint32_t)(EDX));
  /* 1212783c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212783f push eax */
  push32((uint32_t)(EAX));
  /* 12127840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127843 push ecx */
  push32((uint32_t)(ECX));
  /* 12127844 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127846 mov edx, dword ptr [0x12145164] */
  EDX = (r32((uint32_t)(0x12145164)));
  /* 1212784c push edx */
  push32((uint32_t)(EDX));
  /* 1212784d call 0x12127920 */
  push32(0x12127852u); f_12127920();
  /* 12127852 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12127858 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212785c jne 0x12127865 */
  if (!C.zf) goto L_12127865;
  /* 1212785e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12127863 jmp 0x1212786b */
  goto L_1212786b;
L_12127865:;
  /* 12127865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127868 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1212786b:;
  /* 1212786b mov esp, ebp */
  ESP = (EBP);
  /* 1212786d pop ebp */
  EBP = (pop32());
  /* 1212786e ret  */
  ESPCHK(0x12127820u, _esp0);
  ESP += 4; return;
}

/* FUN_10017870 @ 0x12127870 (174 bytes, 66 insns) */
void f_12127870(void) {
  FTRACE(0x12127870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127870 push ebp */
  push32((uint32_t)(EBP));
  /* 12127871 mov ebp, esp */
  EBP = (ESP);
  /* 12127873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127876 mov eax, dword ptr [0x1214380c] */
  EAX = (r32((uint32_t)(0x1214380c)));
  /* 1212787b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1212787e:;
  /* 1212787e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127881 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127884 je 0x12127918 */
  if (C.zf) goto L_12127918;
  /* 1212788a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212788c push 0 */
  push32((uint32_t)(0x0u));
  /* 1212788e push 0 */
  push32((uint32_t)(0x0u));
  /* 12127890 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127892 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12127894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127897 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12127899 push eax */
  push32((uint32_t)(EAX));
  /* 1212789a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212789c push 1 */
  push32((uint32_t)(0x1u));
  /* 1212789e call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121278a4u);
  /* 121278a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121278a7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121278ab jne 0x121278b2 */
  if (!C.zf) goto L_121278b2;
  /* 121278ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121278b0 jmp 0x1212791a */
  goto L_1212791a;
L_121278b2:;
  /* 121278b2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121278b4 push 0x1213fdcc */
  push32((uint32_t)(0x1213fdccu));
  /* 121278b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121278bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121278be push ecx */
  push32((uint32_t)(ECX));
  /* 121278bf call 0x12117d70 */
  push32(0x121278c4u); f_12117d70();
  /* 121278c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121278c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121278ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121278ce jne 0x121278d5 */
  if (!C.zf) goto L_121278d5;
  /* 121278d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121278d3 jmp 0x1212791a */
  goto L_1212791a;
L_121278d5:;
  /* 121278d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121278d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121278d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121278dc push edx */
  push32((uint32_t)(EDX));
  /* 121278dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121278e0 push eax */
  push32((uint32_t)(EAX));
  /* 121278e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121278e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121278e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121278e8 push edx */
  push32((uint32_t)(EDX));
  /* 121278e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121278eb push 1 */
  push32((uint32_t)(0x1u));
  /* 121278ed call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x121278f3u);
  /* 121278f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121278f5 jne 0x121278fc */
  if (!C.zf) goto L_121278fc;
  /* 121278f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121278fa jmp 0x1212791a */
  goto L_1212791a;
L_121278fc:;
  /* 121278fc push 0 */
  push32((uint32_t)(0x0u));
  /* 121278fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127901 push eax */
  push32((uint32_t)(EAX));
  /* 12127902 call 0x12127d70 */
  push32(0x12127907u); f_12127d70();
  /* 12127907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212790a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212790d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127910 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12127913 jmp 0x1212787e */
  goto L_1212787e;
L_12127918:;
  /* 12127918 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1212791a:;
  /* 1212791a mov esp, ebp */
  ESP = (EBP);
  /* 1212791c pop ebp */
  EBP = (pop32());
  /* 1212791d ret  */
  ESPCHK(0x12127870u, _esp0);
  ESP += 4; return;
}

/* FUN_10017920 @ 0x12127920 (970 bytes, 340 insns) */
void f_12127920(void) {
  FTRACE(0x12127920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127920 push ebp */
  push32((uint32_t)(EBP));
  /* 12127921 mov ebp, esp */
  EBP = (ESP);
  /* 12127923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12127925 push 0x1213fe20 */
  push32((uint32_t)(0x1213fe20u));
  /* 1212792a push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 1212792f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12127935 push eax */
  push32((uint32_t)(EAX));
  /* 12127936 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1212793d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127940 push ebx */
  push32((uint32_t)(EBX));
  /* 12127941 push esi */
  push32((uint32_t)(ESI));
  /* 12127942 push edi */
  push32((uint32_t)(EDI));
  /* 12127943 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12127946 cmp dword ptr [0x12143b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212794d jne 0x121279a6 */
  if (!C.zf) goto L_121279a6;
  /* 1212794f push 1 */
  push32((uint32_t)(0x1u));
  /* 12127951 push 0x1213f47c */
  push32((uint32_t)(0x1213f47cu));
  /* 12127956 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127958 push 0x1213f47c */
  push32((uint32_t)(0x1213f47cu));
  /* 1212795d push 0 */
  push32((uint32_t)(0x0u));
  /* 1212795f push 0 */
  push32((uint32_t)(0x0u));
  /* 12127961 call dword ptr [0x121462ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462ec))), 0x12127967u);
  /* 12127967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127969 je 0x12127977 */
  if (C.zf) goto L_12127977;
  /* 1212796b mov dword ptr [0x12143b4c], 1 */
  w32((uint32_t)(0x12143b4c), (0x1u));
  /* 12127975 jmp 0x121279a6 */
  goto L_121279a6;
L_12127977:;
  /* 12127977 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127979 push 0x1213f478 */
  push32((uint32_t)(0x1213f478u));
  /* 1212797e push 1 */
  push32((uint32_t)(0x1u));
  /* 12127980 push 0x1213f478 */
  push32((uint32_t)(0x1213f478u));
  /* 12127985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127989 call dword ptr [0x121462f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f8))), 0x1212798fu);
  /* 1212798f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127991 je 0x1212799f */
  if (C.zf) goto L_1212799f;
  /* 12127993 mov dword ptr [0x12143b4c], 2 */
  w32((uint32_t)(0x12143b4c), (0x2u));
  /* 1212799d jmp 0x121279a6 */
  goto L_121279a6;
L_1212799f:;
  /* 1212799f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121279a1 jmp 0x12127d04 */
  goto L_12127d04;
L_121279a6:;
  /* 121279a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121279aa jle 0x121279bf */
  if ((C.zf||C.sf!=C.of)) goto L_121279bf;
  /* 121279ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121279af push eax */
  push32((uint32_t)(EAX));
  /* 121279b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121279b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121279b4 call 0x12127d20 */
  push32(0x121279b9u); f_12127d20();
  /* 121279b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121279bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121279bf:;
  /* 121279bf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121279c3 jle 0x121279d8 */
  if ((C.zf||C.sf!=C.of)) goto L_121279d8;
  /* 121279c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121279c8 push edx */
  push32((uint32_t)(EDX));
  /* 121279c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121279cc push eax */
  push32((uint32_t)(EAX));
  /* 121279cd call 0x12127d20 */
  push32(0x121279d2u); f_12127d20();
  /* 121279d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121279d5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_121279d8:;
  /* 121279d8 cmp dword ptr [0x12143b4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143b4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121279df jne 0x12127a04 */
  if (!C.zf) goto L_12127a04;
  /* 121279e1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121279e4 push ecx */
  push32((uint32_t)(ECX));
  /* 121279e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121279e8 push edx */
  push32((uint32_t)(EDX));
  /* 121279e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121279ec push eax */
  push32((uint32_t)(EAX));
  /* 121279ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121279f0 push ecx */
  push32((uint32_t)(ECX));
  /* 121279f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121279f4 push edx */
  push32((uint32_t)(EDX));
  /* 121279f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121279f8 push eax */
  push32((uint32_t)(EAX));
  /* 121279f9 call dword ptr [0x121462f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462f8))), 0x121279ffu);
  /* 121279ff jmp 0x12127d04 */
  goto L_12127d04;
L_12127a04:;
  /* 12127a04 cmp dword ptr [0x12143b4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143b4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a0b jne 0x12127d02 */
  if (!C.zf) goto L_12127d02;
  /* 12127a11 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a15 jne 0x12127a20 */
  if (!C.zf) goto L_12127a20;
  /* 12127a17 mov ecx, dword ptr [0x121439f8] */
  ECX = (r32((uint32_t)(0x121439f8)));
  /* 12127a1d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12127a20:;
  /* 12127a20 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a24 je 0x12127a30 */
  if (C.zf) goto L_12127a30;
  /* 12127a26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a2a jne 0x12127bac */
  if (!C.zf) goto L_12127bac;
L_12127a30:;
  /* 12127a30 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127a33 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a36 jne 0x12127a42 */
  if (!C.zf) goto L_12127a42;
  /* 12127a38 mov eax, 2 */
  EAX = (0x2u);
  /* 12127a3d jmp 0x12127d04 */
  goto L_12127d04;
L_12127a42:;
  /* 12127a42 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a46 jle 0x12127a52 */
  if ((C.zf||C.sf!=C.of)) goto L_12127a52;
  /* 12127a48 mov eax, 1 */
  EAX = (0x1u);
  /* 12127a4d jmp 0x12127d04 */
  goto L_12127d04;
L_12127a52:;
  /* 12127a52 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a56 jle 0x12127a62 */
  if ((C.zf||C.sf!=C.of)) goto L_12127a62;
  /* 12127a58 mov eax, 3 */
  EAX = (0x3u);
  /* 12127a5d jmp 0x12127d04 */
  goto L_12127d04;
L_12127a62:;
  /* 12127a62 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12127a65 push eax */
  push32((uint32_t)(EAX));
  /* 12127a66 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12127a69 push ecx */
  push32((uint32_t)(ECX));
  /* 12127a6a call dword ptr [0x12146344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146344))), 0x12127a70u);
  /* 12127a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127a72 jne 0x12127a7b */
  if (!C.zf) goto L_12127a7b;
  /* 12127a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127a76 jmp 0x12127d04 */
  goto L_12127d04;
L_12127a7b:;
  /* 12127a7b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a7f jne 0x12127a87 */
  if (!C.zf) goto L_12127a87;
  /* 12127a81 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a85 je 0x12127ab4 */
  if (C.zf) goto L_12127ab4;
L_12127a87:;
  /* 12127a87 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a8b jne 0x12127a93 */
  if (!C.zf) goto L_12127a93;
  /* 12127a8d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127a91 je 0x12127ab4 */
  if (C.zf) goto L_12127ab4;
L_12127a93:;
  /* 12127a93 push 0x1213fde0 */
  push32((uint32_t)(0x1213fde0u));
  /* 12127a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12127a9a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12127a9f push 0x1213fdd8 */
  push32((uint32_t)(0x1213fdd8u));
  /* 12127aa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12127aa6 call 0x12116e30 */
  push32(0x12127aabu); f_12116e30();
  /* 12127aab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127aae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ab1 jne 0x12127ab4 */
  if (!C.zf) goto L_12127ab4;
  /* 12127ab3 int3  */
  x86_unimpl("int3 @ 0x12127ab3");
L_12127ab4:;
  /* 12127ab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12127ab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127ab8 jne 0x12127a7b */
  if (!C.zf) goto L_12127a7b;
  /* 12127aba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127abe jle 0x12127b33 */
  if ((C.zf||C.sf!=C.of)) goto L_12127b33;
  /* 12127ac0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ac4 jae 0x12127ad0 */
  if (!C.cf) goto L_12127ad0;
  /* 12127ac6 mov eax, 3 */
  EAX = (0x3u);
  /* 12127acb jmp 0x12127d04 */
  goto L_12127d04;
L_12127ad0:;
  /* 12127ad0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12127ad3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12127ad6 jmp 0x12127ae1 */
  goto L_12127ae1;
L_12127ad8:;
  /* 12127ad8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127adb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127ade mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12127ae1:;
  /* 12127ae1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127ae6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12127ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127aea je 0x12127b29 */
  if (C.zf) goto L_12127b29;
  /* 12127aec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127aef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12127af1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12127af4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127af6 je 0x12127b29 */
  if (C.zf) goto L_12127b29;
  /* 12127af8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127afb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12127afd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12127aff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127b04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12127b06 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b08 jl 0x12127b27 */
  if ((C.sf!=C.of)) goto L_12127b27;
  /* 12127b0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12127b0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12127b11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12127b16 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12127b19 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b1b jg 0x12127b27 */
  if ((!C.zf&&C.sf==C.of)) goto L_12127b27;
  /* 12127b1d mov eax, 2 */
  EAX = (0x2u);
  /* 12127b22 jmp 0x12127d04 */
  goto L_12127d04;
L_12127b27:;
  /* 12127b27 jmp 0x12127ad8 */
  goto L_12127ad8;
L_12127b29:;
  /* 12127b29 mov eax, 3 */
  EAX = (0x3u);
  /* 12127b2e jmp 0x12127d04 */
  goto L_12127d04;
L_12127b33:;
  /* 12127b33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b37 jle 0x12127bac */
  if ((C.zf||C.sf!=C.of)) goto L_12127bac;
  /* 12127b39 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b3d jae 0x12127b49 */
  if (!C.cf) goto L_12127b49;
  /* 12127b3f mov eax, 1 */
  EAX = (0x1u);
  /* 12127b44 jmp 0x12127d04 */
  goto L_12127d04;
L_12127b49:;
  /* 12127b49 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12127b4c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12127b4f jmp 0x12127b5a */
  goto L_12127b5a;
L_12127b51:;
  /* 12127b51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b54 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127b57 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12127b5a:;
  /* 12127b5a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12127b5f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12127b61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127b63 je 0x12127ba2 */
  if (C.zf) goto L_12127ba2;
  /* 12127b65 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12127b6a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12127b6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12127b6f je 0x12127ba2 */
  if (C.zf) goto L_12127ba2;
  /* 12127b71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127b76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12127b78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12127b7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12127b7f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b81 jl 0x12127ba0 */
  if ((C.sf!=C.of)) goto L_12127ba0;
  /* 12127b83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127b86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12127b88 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12127b8a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12127b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127b8f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12127b92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127b94 jg 0x12127ba0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12127ba0;
  /* 12127b96 mov eax, 2 */
  EAX = (0x2u);
  /* 12127b9b jmp 0x12127d04 */
  goto L_12127d04;
L_12127ba0:;
  /* 12127ba0 jmp 0x12127b51 */
  goto L_12127b51;
L_12127ba2:;
  /* 12127ba2 mov eax, 1 */
  EAX = (0x1u);
  /* 12127ba7 jmp 0x12127d04 */
  goto L_12127d04;
L_12127bac:;
  /* 12127bac push 0 */
  push32((uint32_t)(0x0u));
  /* 12127bae push 0 */
  push32((uint32_t)(0x0u));
  /* 12127bb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12127bb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127bb7 push edx */
  push32((uint32_t)(EDX));
  /* 12127bb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12127bba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12127bbd push eax */
  push32((uint32_t)(EAX));
  /* 12127bbe call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127bc4u);
  /* 12127bc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12127bc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127bcb jne 0x12127bd4 */
  if (!C.zf) goto L_12127bd4;
  /* 12127bcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127bcf jmp 0x12127d04 */
  goto L_12127d04;
L_12127bd4:;
  /* 12127bd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12127bdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12127bde shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12127be0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127be3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12127be5 call 0x1211af10 */
  push32(0x12127beau); f_1211af10();
  /* 12127bea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12127bed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12127bf0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12127bf3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12127bf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12127bfd jmp 0x12127c16 */
  goto L_12127c16;
  /* 12127bff mov eax, 1 */
  EAX = (0x1u);
  /* 12127c04 ret  */
  ESPCHK(0x12127920u, _esp0);
  ESP += 4; return;
  /* 12127c05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12127c08 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12127c0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12127c16:;
  /* 12127c16 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127c1a jne 0x12127c23 */
  if (!C.zf) goto L_12127c23;
  /* 12127c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127c1e jmp 0x12127d04 */
  goto L_12127d04;
L_12127c23:;
  /* 12127c23 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12127c26 push edx */
  push32((uint32_t)(EDX));
  /* 12127c27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12127c2a push eax */
  push32((uint32_t)(EAX));
  /* 12127c2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12127c2e push ecx */
  push32((uint32_t)(ECX));
  /* 12127c2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12127c32 push edx */
  push32((uint32_t)(EDX));
  /* 12127c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12127c35 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12127c38 push eax */
  push32((uint32_t)(EAX));
  /* 12127c39 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127c3fu);
  /* 12127c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127c41 jne 0x12127c4a */
  if (!C.zf) goto L_12127c4a;
  /* 12127c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127c45 jmp 0x12127d04 */
  goto L_12127d04;
L_12127c4a:;
  /* 12127c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12127c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12127c4e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12127c51 push ecx */
  push32((uint32_t)(ECX));
  /* 12127c52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127c55 push edx */
  push32((uint32_t)(EDX));
  /* 12127c56 push 9 */
  push32((uint32_t)(0x9u));
  /* 12127c58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12127c5b push eax */
  push32((uint32_t)(EAX));
  /* 12127c5c call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127c62u);
  /* 12127c62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12127c65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127c69 jne 0x12127c72 */
  if (!C.zf) goto L_12127c72;
  /* 12127c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127c6d jmp 0x12127d04 */
  goto L_12127d04;
L_12127c72:;
  /* 12127c72 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12127c79 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12127c7c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12127c7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127c81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12127c83 call 0x1211af10 */
  push32(0x12127c88u); f_1211af10();
  /* 12127c88 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12127c8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12127c8e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12127c91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12127c94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12127c9b jmp 0x12127cb4 */
  goto L_12127cb4;
  /* 12127c9d mov eax, 1 */
  EAX = (0x1u);
  /* 12127ca2 ret  */
  ESPCHK(0x12127920u, _esp0);
  ESP += 4; return;
  /* 12127ca3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12127ca6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12127cad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12127cb4:;
  /* 12127cb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127cb8 jne 0x12127cbe */
  if (!C.zf) goto L_12127cbe;
  /* 12127cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127cbc jmp 0x12127d04 */
  goto L_12127d04;
L_12127cbe:;
  /* 12127cbe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12127cc1 push edx */
  push32((uint32_t)(EDX));
  /* 12127cc2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12127cc5 push eax */
  push32((uint32_t)(EAX));
  /* 12127cc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12127cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12127cca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12127ccd push edx */
  push32((uint32_t)(EDX));
  /* 12127cce push 1 */
  push32((uint32_t)(0x1u));
  /* 12127cd0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12127cd3 push eax */
  push32((uint32_t)(EAX));
  /* 12127cd4 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12127cdau);
  /* 12127cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127cdc jne 0x12127ce2 */
  if (!C.zf) goto L_12127ce2;
  /* 12127cde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127ce0 jmp 0x12127d04 */
  goto L_12127d04;
L_12127ce2:;
  /* 12127ce2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12127ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 12127ce6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12127ce9 push edx */
  push32((uint32_t)(EDX));
  /* 12127cea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12127ced push eax */
  push32((uint32_t)(EAX));
  /* 12127cee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12127cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 12127cf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12127cf5 push edx */
  push32((uint32_t)(EDX));
  /* 12127cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12127cfa call dword ptr [0x121462ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462ec))), 0x12127d00u);
  /* 12127d00 jmp 0x12127d04 */
  goto L_12127d04;
L_12127d02:;
  /* 12127d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12127d04:;
  /* 12127d04 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12127d07 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12127d0a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12127d11 pop edi */
  EDI = (pop32());
  /* 12127d12 pop esi */
  ESI = (pop32());
  /* 12127d13 pop ebx */
  EBX = (pop32());
  /* 12127d14 mov esp, ebp */
  ESP = (EBP);
  /* 12127d16 pop ebp */
  EBP = (pop32());
  /* 12127d17 ret  */
  ESPCHK(0x12127920u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d20 @ 0x12127d20 (80 bytes, 32 insns) */
void f_12127d20(void) {
  FTRACE(0x12127d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12127d21 mov ebp, esp */
  EBP = (ESP);
  /* 12127d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127d26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12127d29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12127d2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127d2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12127d32:;
  /* 12127d32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127d35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127d38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127d3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12127d3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127d40 je 0x12127d57 */
  if (C.zf) goto L_12127d57;
  /* 12127d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127d45 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12127d48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127d4a je 0x12127d57 */
  if (C.zf) goto L_12127d57;
  /* 12127d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127d4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127d52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12127d55 jmp 0x12127d32 */
  goto L_12127d32;
L_12127d57:;
  /* 12127d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127d5a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12127d5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12127d5f jne 0x12127d69 */
  if (!C.zf) goto L_12127d69;
  /* 12127d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12127d64 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127d67 jmp 0x12127d6c */
  goto L_12127d6c;
L_12127d69:;
  /* 12127d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12127d6c:;
  /* 12127d6c mov esp, ebp */
  ESP = (EBP);
  /* 12127d6e pop ebp */
  EBP = (pop32());
  /* 12127d6f ret  */
  ESPCHK(0x12127d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d70 @ 0x12127d70 (736 bytes, 224 insns) */
void f_12127d70(void) {
  FTRACE(0x12127d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12127d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12127d71 mov ebp, esp */
  EBP = (ESP);
  /* 12127d73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127d76 push esi */
  push32((uint32_t)(ESI));
  /* 12127d77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127d7b je 0x12127d9c */
  if (C.zf) goto L_12127d9c;
  /* 12127d7d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12127d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127d82 push eax */
  push32((uint32_t)(EAX));
  /* 12127d83 call 0x121281c0 */
  push32(0x12127d88u); f_121281c0();
  /* 12127d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127d8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12127d8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127d92 je 0x12127d9c */
  if (C.zf) goto L_12127d9c;
  /* 12127d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127d97 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127d9a jne 0x12127da4 */
  if (!C.zf) goto L_12127da4;
L_12127d9c:;
  /* 12127d9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12127d9f jmp 0x1212804b */
  goto L_1212804b;
L_12127da4:;
  /* 12127da4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12127da7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12127dab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12127dad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127daf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12127db0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12127db3 mov ecx, dword ptr [0x12143804] */
  ECX = (r32((uint32_t)(0x12143804)));
  /* 12127db9 cmp ecx, dword ptr [0x12143808] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12143808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127dbf jne 0x12127dd5 */
  if (!C.zf) goto L_12127dd5;
  /* 12127dc1 mov edx, dword ptr [0x12143804] */
  EDX = (r32((uint32_t)(0x12143804)));
  /* 12127dc7 push edx */
  push32((uint32_t)(EDX));
  /* 12127dc8 call 0x121280d0 */
  push32(0x12127dcdu); f_121280d0();
  /* 12127dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127dd0 mov dword ptr [0x12143804], eax */
  w32((uint32_t)(0x12143804), (EAX));
L_12127dd5:;
  /* 12127dd5 cmp dword ptr [0x12143804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ddc jne 0x12127e95 */
  if (!C.zf) goto L_12127e95;
  /* 12127de2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127de6 je 0x12127e07 */
  if (C.zf) goto L_12127e07;
  /* 12127de8 cmp dword ptr [0x1214380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127def je 0x12127e07 */
  if (C.zf) goto L_12127e07;
  /* 12127df1 call 0x12127870 */
  push32(0x12127df6u); f_12127870();
  /* 12127df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12127df8 je 0x12127e02 */
  if (C.zf) goto L_12127e02;
  /* 12127dfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12127dfd jmp 0x1212804b */
  goto L_1212804b;
L_12127e02:;
  /* 12127e02 jmp 0x12127e95 */
  goto L_12127e95;
L_12127e07:;
  /* 12127e07 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127e0b je 0x12127e14 */
  if (C.zf) goto L_12127e14;
  /* 12127e0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127e0f jmp 0x1212804b */
  goto L_1212804b;
L_12127e14:;
  /* 12127e14 cmp dword ptr [0x12143804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127e1b jne 0x12127e54 */
  if (!C.zf) goto L_12127e54;
  /* 12127e1d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12127e22 push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12127e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12127e29 push 4 */
  push32((uint32_t)(0x4u));
  /* 12127e2b call 0x12117d70 */
  push32(0x12127e30u); f_12117d70();
  /* 12127e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127e33 mov dword ptr [0x12143804], eax */
  w32((uint32_t)(0x12143804), (EAX));
  /* 12127e38 cmp dword ptr [0x12143804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127e3f jne 0x12127e49 */
  if (!C.zf) goto L_12127e49;
  /* 12127e41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12127e44 jmp 0x1212804b */
  goto L_1212804b;
L_12127e49:;
  /* 12127e49 mov eax, dword ptr [0x12143804] */
  EAX = (r32((uint32_t)(0x12143804)));
  /* 12127e4e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12127e54:;
  /* 12127e54 cmp dword ptr [0x1214380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127e5b jne 0x12127e95 */
  if (!C.zf) goto L_12127e95;
  /* 12127e5d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12127e62 push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12127e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12127e69 push 4 */
  push32((uint32_t)(0x4u));
  /* 12127e6b call 0x12117d70 */
  push32(0x12127e70u); f_12117d70();
  /* 12127e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127e73 mov dword ptr [0x1214380c], eax */
  w32((uint32_t)(0x1214380c), (EAX));
  /* 12127e78 cmp dword ptr [0x1214380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127e7f jne 0x12127e89 */
  if (!C.zf) goto L_12127e89;
  /* 12127e81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12127e84 jmp 0x1212804b */
  goto L_1212804b;
L_12127e89:;
  /* 12127e89 mov ecx, dword ptr [0x1214380c] */
  ECX = (r32((uint32_t)(0x1214380c)));
  /* 12127e8f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12127e95:;
  /* 12127e95 mov edx, dword ptr [0x12143804] */
  EDX = (r32((uint32_t)(0x12143804)));
  /* 12127e9b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12127e9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12127ea1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12127ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12127ea5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 12127ea9 call 0x12128050 */
  push32(0x12127eaeu); f_12128050();
  /* 12127eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127eb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12127eb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127eb8 jl 0x12127f51 */
  if ((C.sf!=C.of)) goto L_12127f51;
  /* 12127ebe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127ec1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ec4 je 0x12127f51 */
  if (C.zf) goto L_12127f51;
  /* 12127eca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ece je 0x12127f43 */
  if (C.zf) goto L_12127f43;
  /* 12127ed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12127ed2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127ed8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12127edb push edx */
  push32((uint32_t)(EDX));
  /* 12127edc call 0x12118800 */
  push32(0x12127ee1u); f_12118800();
  /* 12127ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127ee4 jmp 0x12127eef */
  goto L_12127eef;
L_12127ee6:;
  /* 12127ee6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127ee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127eec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12127eef:;
  /* 12127eef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127ef2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127ef5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ef9 je 0x12127f10 */
  if (C.zf) goto L_12127f10;
  /* 12127efb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127efe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f04 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f07 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12127f0b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12127f0e jmp 0x12127ee6 */
  goto L_12127ee6;
L_12127f10:;
  /* 12127f10 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12127f15 push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12127f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12127f1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f1f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12127f22 push eax */
  push32((uint32_t)(EAX));
  /* 12127f23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f26 push ecx */
  push32((uint32_t)(ECX));
  /* 12127f27 call 0x12118200 */
  push32(0x12127f2cu); f_12118200();
  /* 12127f2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127f2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12127f32 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127f36 je 0x12127f41 */
  if (C.zf) goto L_12127f41;
  /* 12127f38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f3b mov dword ptr [0x12143804], edx */
  w32((uint32_t)(0x12143804), (EDX));
L_12127f41:;
  /* 12127f41 jmp 0x12127f4f */
  goto L_12127f4f;
L_12127f43:;
  /* 12127f43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127f4c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12127f4f:;
  /* 12127f4f jmp 0x12127fc4 */
  goto L_12127fc4;
L_12127f51:;
  /* 12127f51 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127f55 jne 0x12127fbd */
  if (!C.zf) goto L_12127fbd;
  /* 12127f57 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127f5b jge 0x12127f65 */
  if ((C.sf==C.of)) goto L_12127f65;
  /* 12127f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f60 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12127f62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12127f65:;
  /* 12127f65 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12127f6a push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12127f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12127f71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f74 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12127f7b push edx */
  push32((uint32_t)(EDX));
  /* 12127f7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f7f push eax */
  push32((uint32_t)(EAX));
  /* 12127f80 call 0x12118200 */
  push32(0x12127f85u); f_12118200();
  /* 12127f85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127f88 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12127f8b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127f8f jne 0x12127f99 */
  if (!C.zf) goto L_12127f99;
  /* 12127f91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12127f94 jmp 0x1212804b */
  goto L_1212804b;
L_12127f99:;
  /* 12127f99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127f9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127fa2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12127fa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12127fa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127fab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12127fb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12127fb6 mov dword ptr [0x12143804], eax */
  w32((uint32_t)(0x12143804), (EAX));
  /* 12127fbb jmp 0x12127fc4 */
  goto L_12127fc4;
L_12127fbd:;
  /* 12127fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12127fbf jmp 0x1212804b */
  goto L_1212804b;
L_12127fc4:;
  /* 12127fc4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127fc8 je 0x12128049 */
  if (C.zf) goto L_12128049;
  /* 12127fca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12127fcf push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12127fd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12127fd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12127fda call 0x1211aba0 */
  push32(0x12127fdfu); f_1211aba0();
  /* 12127fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127fe2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12127fe5 push eax */
  push32((uint32_t)(EAX));
  /* 12127fe6 call 0x12117d70 */
  push32(0x12127febu); f_12117d70();
  /* 12127feb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12127fee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12127ff1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12127ff5 je 0x12128049 */
  if (C.zf) goto L_12128049;
  /* 12127ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12127ffa push edx */
  push32((uint32_t)(EDX));
  /* 12127ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12127ffe push eax */
  push32((uint32_t)(EAX));
  /* 12127fff call 0x1211ad20 */
  push32(0x12128004u); f_1211ad20();
  /* 12128004 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12128007 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1212800a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212800d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12128010 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128012 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12128015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128018 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1212801b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212801e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128021 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12128024 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12128027 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12128029 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212802b not edx */
  EDX = (~(EDX));
  /* 1212802d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12128030 push edx */
  push32((uint32_t)(EDX));
  /* 12128031 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12128034 push eax */
  push32((uint32_t)(EAX));
  /* 12128035 call dword ptr [0x121462e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e8))), 0x1212803bu);
  /* 1212803b push 2 */
  push32((uint32_t)(0x2u));
  /* 1212803d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12128040 push ecx */
  push32((uint32_t)(ECX));
  /* 12128041 call 0x12118800 */
  push32(0x12128046u); f_12118800();
  /* 12128046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12128049:;
  /* 12128049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1212804b:;
  /* 1212804b pop esi */
  ESI = (pop32());
  /* 1212804c mov esp, ebp */
  ESP = (EBP);
  /* 1212804e pop ebp */
  EBP = (pop32());
  /* 1212804f ret  */
  ESPCHK(0x12127d70u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12128050 (124 bytes, 47 insns) */
void f_12128050(void) {
  FTRACE(0x12128050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12128050 push ebp */
  push32((uint32_t)(EBP));
  /* 12128051 mov ebp, esp */
  EBP = (ESP);
  /* 12128053 push ecx */
  push32((uint32_t)(ECX));
  /* 12128054 mov eax, dword ptr [0x12143804] */
  EAX = (r32((uint32_t)(0x12143804)));
  /* 12128059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212805c jmp 0x12128067 */
  goto L_12128067;
L_1212805e:;
  /* 1212805e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128061 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128064 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12128067:;
  /* 12128067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212806a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212806d je 0x121280ba */
  if (C.zf) goto L_121280ba;
  /* 1212806f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12128072 push eax */
  push32((uint32_t)(EAX));
  /* 12128073 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128076 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12128078 push edx */
  push32((uint32_t)(EDX));
  /* 12128079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212807c push eax */
  push32((uint32_t)(EAX));
  /* 1212807d call 0x12127820 */
  push32(0x12128082u); f_12127820();
  /* 12128082 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12128085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12128087 jne 0x121280b8 */
  if (!C.zf) goto L_121280b8;
  /* 12128089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212808c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1212808e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12128091 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12128095 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128098 je 0x121280aa */
  if (C.zf) goto L_121280aa;
  /* 1212809a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212809d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1212809f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121280a2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 121280a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121280a8 jne 0x121280b8 */
  if (!C.zf) goto L_121280b8;
L_121280aa:;
  /* 121280aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121280ad sub eax, dword ptr [0x12143804] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143804))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121280b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121280b6 jmp 0x121280c8 */
  goto L_121280c8;
L_121280b8:;
  /* 121280b8 jmp 0x1212805e */
  goto L_1212805e;
L_121280ba:;
  /* 121280ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121280bd sub eax, dword ptr [0x12143804] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143804))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121280c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121280c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_121280c8:;
  /* 121280c8 mov esp, ebp */
  ESP = (EBP);
  /* 121280ca pop ebp */
  EBP = (pop32());
  /* 121280cb ret  */
  ESPCHK(0x12128050u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x121280d0 (238 bytes, 80 insns) */
void f_121280d0(void) {
  FTRACE(0x121280d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121280d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121280d1 mov ebp, esp */
  EBP = (ESP);
  /* 121280d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121280d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121280dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121280e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121280e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121280e7 jne 0x121280f0 */
  if (!C.zf) goto L_121280f0;
  /* 121280e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121280eb jmp 0x121281ba */
  goto L_121281ba;
L_121280f0:;
  /* 121280f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121280f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121280f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121280f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121280fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121280fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12128100 je 0x1212810d */
  if (C.zf) goto L_1212810d;
  /* 12128102 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12128105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128108 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1212810b jmp 0x121280f0 */
  goto L_121280f0;
L_1212810d:;
  /* 1212810d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12128112 push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 12128117 push 2 */
  push32((uint32_t)(0x2u));
  /* 12128119 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1212811c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12128123 push eax */
  push32((uint32_t)(EAX));
  /* 12128124 call 0x12117d70 */
  push32(0x12128129u); f_12117d70();
  /* 12128129 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212812c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1212812f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12128132 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12128135 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128139 jne 0x12128145 */
  if (!C.zf) goto L_12128145;
  /* 1212813b push 9 */
  push32((uint32_t)(0x9u));
  /* 1212813d call 0x12116ce0 */
  push32(0x12128142u); f_12116ce0();
  /* 12128142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12128145:;
  /* 12128145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12128148 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1212814b:;
  /* 1212814b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212814e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128151 je 0x121281ae */
  if (C.zf) goto L_121281ae;
  /* 12128153 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12128158 push 0x1213fe38 */
  push32((uint32_t)(0x1213fe38u));
  /* 1212815d push 2 */
  push32((uint32_t)(0x2u));
  /* 1212815f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12128162 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12128164 push edx */
  push32((uint32_t)(EDX));
  /* 12128165 call 0x1211aba0 */
  push32(0x1212816au); f_1211aba0();
  /* 1212816a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212816d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128170 push eax */
  push32((uint32_t)(EAX));
  /* 12128171 call 0x12117d70 */
  push32(0x12128176u); f_12117d70();
  /* 12128176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12128179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212817c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1212817e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12128181 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128184 je 0x1212819a */
  if (C.zf) goto L_1212819a;
  /* 12128186 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12128189 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1212818b push ecx */
  push32((uint32_t)(ECX));
  /* 1212818c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212818f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12128191 push eax */
  push32((uint32_t)(EAX));
  /* 12128192 call 0x1211ad20 */
  push32(0x12128197u); f_1211ad20();
  /* 12128197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1212819a:;
  /* 1212819a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212819d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121281a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121281a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121281a6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121281a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121281ac jmp 0x1212814b */
  goto L_1212814b;
L_121281ae:;
  /* 121281ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121281b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121281b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121281ba:;
  /* 121281ba mov esp, ebp */
  ESP = (EBP);
  /* 121281bc pop ebp */
  EBP = (pop32());
  /* 121281bd ret  */
  ESPCHK(0x121280d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100181c0 @ 0x121281c0 (237 bytes, 81 insns) */
void f_121281c0(void) {
  FTRACE(0x121281c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121281c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121281c1 mov ebp, esp */
  EBP = (ESP);
  /* 121281c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121281c4 cmp dword ptr [0x12144f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12144f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121281cb jne 0x121281e2 */
  if (!C.zf) goto L_121281e2;
  /* 121281cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121281d0 push eax */
  push32((uint32_t)(EAX));
  /* 121281d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121281d4 push ecx */
  push32((uint32_t)(ECX));
  /* 121281d5 call 0x121282c0 */
  push32(0x121281dau); f_121282c0();
  /* 121281da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121281dd jmp 0x121282a9 */
  goto L_121282a9;
L_121281e2:;
  /* 121281e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121281e4 call 0x1211b770 */
  push32(0x121281e9u); f_1211b770();
  /* 121281e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121281ec jmp 0x121281f7 */
  goto L_121281f7;
L_121281ee:;
  /* 121281ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121281f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121281f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121281f7:;
  /* 121281f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121281fa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 121281fe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12128202 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128205 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1212820b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1212820d je 0x1212828b */
  if (C.zf) goto L_1212828b;
  /* 1212820f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128212 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12128217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12128219 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1212821f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12128222 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12128224 je 0x12128276 */
  if (C.zf) goto L_12128276;
  /* 12128226 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12128229 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212822c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1212822f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12128232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12128234 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12128236 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12128238 jne 0x12128248 */
  if (!C.zf) goto L_12128248;
  /* 1212823a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1212823c call 0x1211b810 */
  push32(0x12128241u); f_1211b810();
  /* 12128241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12128244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12128246 jmp 0x121282a9 */
  goto L_121282a9;
L_12128248:;
  /* 12128248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212824b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12128251 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12128254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12128257 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12128259 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1212825b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1212825d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128260 jne 0x12128274 */
  if (!C.zf) goto L_12128274;
  /* 12128262 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12128264 call 0x1211b810 */
  push32(0x12128269u); f_1211b810();
  /* 12128269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212826c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212826f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12128272 jmp 0x121282a9 */
  goto L_121282a9;
L_12128274:;
  /* 12128274 jmp 0x12128286 */
  goto L_12128286;
L_12128276:;
  /* 12128276 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128279 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1212827f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12128282 jne 0x12128286 */
  if (!C.zf) goto L_12128286;
  /* 12128284 jmp 0x1212828b */
  goto L_1212828b;
L_12128286:;
  /* 12128286 jmp 0x121281ee */
  goto L_121281ee;
L_1212828b:;
  /* 1212828b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1212828d call 0x1211b810 */
  push32(0x12128292u); f_1211b810();
  /* 12128292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12128295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12128298 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212829d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121282a0 jne 0x121282a7 */
  if (!C.zf) goto L_121282a7;
  /* 121282a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121282a5 jmp 0x121282a9 */
  goto L_121282a9;
L_121282a7:;
  /* 121282a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121282a9:;
  /* 121282a9 mov esp, ebp */
  ESP = (EBP);
  /* 121282ab pop ebp */
  EBP = (pop32());
  /* 121282ac ret  */
  ESPCHK(0x121281c0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x121282c0 (193 bytes, 87 insns) */
void f_121282c0(void) {
  FTRACE(0x121282c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121282c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121282c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 121282c6 push ebx */
  push32((uint32_t)(EBX));
  /* 121282c7 mov ebx, eax */
  EBX = (EAX);
  /* 121282c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 121282cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 121282d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121282d6 je 0x121282eb */
  if (C.zf) goto L_121282eb;
L_121282d8:;
  /* 121282d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 121282da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121282db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121282dd je 0x121282b0 */
  if (C.zf) { jmp_ind(0x121282b0u); return; }
  /* 121282df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 121282e1 je 0x12128334 */
  if (C.zf) goto L_12128334;
  /* 121282e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121282e9 jne 0x121282d8 */
  if (!C.zf) goto L_121282d8;
L_121282eb:;
  /* 121282eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 121282ed push edi */
  push32((uint32_t)(EDI));
  /* 121282ee mov eax, ebx */
  EAX = (EBX);
  /* 121282f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 121282f3 push esi */
  push32((uint32_t)(ESI));
  /* 121282f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_121282f6:;
  /* 121282f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121282f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 121282fd mov eax, ecx */
  EAX = (ECX);
  /* 121282ff mov esi, edi */
  ESI = (EDI);
  /* 12128301 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12128303 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12128305 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12128307 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1212830a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212830d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1212830f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12128311 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12128314 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1212831a jne 0x12128338 */
  if (!C.zf) goto L_12128338;
  /* 1212831c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12128321 je 0x121282f6 */
  if (C.zf) goto L_121282f6;
  /* 12128323 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12128328 jne 0x12128332 */
  if (!C.zf) goto L_12128332;
  /* 1212832a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12128330 jne 0x121282f6 */
  if (!C.zf) goto L_121282f6;
L_12128332:;
  /* 12128332 pop esi */
  ESI = (pop32());
  /* 12128333 pop edi */
  EDI = (pop32());
L_12128334:;
  /* 12128334 pop ebx */
  EBX = (pop32());
  /* 12128335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12128337 ret  */
  ESPCHK(0x121282c0u, _esp0);
  ESP += 4; return;
L_12128338:;
  /* 12128338 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1212833b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1212833d je 0x12128375 */
  if (C.zf) goto L_12128375;
  /* 1212833f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12128341 je 0x12128332 */
  if (C.zf) goto L_12128332;
  /* 12128343 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12128345 je 0x1212836e */
  if (C.zf) goto L_1212836e;
  /* 12128347 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12128349 je 0x12128332 */
  if (C.zf) goto L_12128332;
  /* 1212834b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1212834e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12128350 je 0x12128367 */
  if (C.zf) goto L_12128367;
  /* 12128352 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12128354 je 0x12128332 */
  if (C.zf) goto L_12128332;
  /* 12128356 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12128358 je 0x12128360 */
  if (C.zf) goto L_12128360;
  /* 1212835a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1212835c je 0x12128332 */
  if (C.zf) goto L_12128332;
  /* 1212835e jmp 0x121282f6 */
  goto L_121282f6;
L_12128360:;
  /* 12128360 pop esi */
  ESI = (pop32());
  /* 12128361 pop edi */
  EDI = (pop32());
  /* 12128362 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12128365 pop ebx */
  EBX = (pop32());
  /* 12128366 ret  */
  ESPCHK(0x121282c0u, _esp0);
  ESP += 4; return;
L_12128367:;
  /* 12128367 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1212836a pop esi */
  ESI = (pop32());
  /* 1212836b pop edi */
  EDI = (pop32());
  /* 1212836c pop ebx */
  EBX = (pop32());
  /* 1212836d ret  */
  ESPCHK(0x121282c0u, _esp0);
  ESP += 4; return;
L_1212836e:;
  /* 1212836e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12128371 pop esi */
  ESI = (pop32());
  /* 12128372 pop edi */
  EDI = (pop32());
  /* 12128373 pop ebx */
  EBX = (pop32());
  /* 12128374 ret  */
  ESPCHK(0x121282c0u, _esp0);
  ESP += 4; return;
L_12128375:;
  /* 12128375 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12128378 pop esi */
  ESI = (pop32());
  /* 12128379 pop edi */
  EDI = (pop32());
  /* 1212837a pop ebx */
  EBX = (pop32());
  /* 1212837b ret  */
  ESPCHK(0x121282c0u, _esp0);
  ESP += 4; return;
  /* 1212837c jmp dword ptr [0x121463ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x121463ac)))); return;
}

/* RtlUnwind @ 0x121284cc (6 bytes, 1 insns) */
void f_121284cc(void) {
  FTRACE(0x121284ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121284cc jmp dword ptr [0x12146320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12146320)))); return;
}

