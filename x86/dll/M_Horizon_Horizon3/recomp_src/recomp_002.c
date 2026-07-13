#include "recomp.h"

/* FUN_10012040 @ 0x12772040 (393 bytes, 123 insns) */
void f_12772040(void) {
  FTRACE(0x12772040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12772040 push ebp */
  push32((uint32_t)(EBP));
  /* 12772041 mov ebp, esp */
  EBP = (ESP);
  /* 12772043 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772046 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277204a jne 0x12772056 */
  if (!C.zf) goto L_12772056;
  /* 1277204c mov eax, dword ptr [0x1278fc98] */
  EAX = (r32((uint32_t)(0x1278fc98)));
  /* 12772051 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12772054 jmp 0x1277205c */
  goto L_1277205c;
L_12772056:;
  /* 12772056 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772059 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1277205c:;
  /* 1277205c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1277205f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12772062 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772065 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12772068 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 1277206d call dword ptr [0x12793360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793360))), 0x12772073u);
  /* 12772073 cmp dword ptr [0x127909dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277207a je 0x1277209a */
  if (C.zf) goto L_1277209a;
  /* 1277207c push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 12772081 call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x12772087u);
  /* 12772087 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12772089 call 0x12768700 */
  push32(0x1277208eu); f_12768700();
  /* 1277208e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772091 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12772098 jmp 0x127720a1 */
  goto L_127720a1;
L_1277209a:;
  /* 1277209a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127720a1:;
  /* 127720a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127720a5 jbe 0x12772192 */
  if ((C.cf||C.zf)) goto L_12772192;
  /* 127720ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127720ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127720b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 127720b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127720b7 je 0x127720c1 */
  if (C.zf) goto L_127720c1;
  /* 127720b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127720bd je 0x127720c6 */
  if (C.zf) goto L_127720c6;
  /* 127720bf jmp 0x12772120 */
  goto L_12772120;
L_127720c1:;
  /* 127720c1 jmp 0x12772192 */
  goto L_12772192;
L_127720c6:;
  /* 127720c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127720c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127720cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 127720cf mov dword ptr [0x127909c8], 0 */
  w32((uint32_t)(0x127909c8), (0x0u));
  /* 127720d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127720dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127720df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127720e2 jne 0x127720f7 */
  if (!C.zf) goto L_127720f7;
  /* 127720e4 mov dword ptr [0x127909c8], 1 */
  w32((uint32_t)(0x127909c8), (0x1u));
  /* 127720ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127720f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127720f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127720f7:;
  /* 127720f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127720fa push ecx */
  push32((uint32_t)(ECX));
  /* 127720fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127720fe push edx */
  push32((uint32_t)(EDX));
  /* 127720ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12772102 push eax */
  push32((uint32_t)(EAX));
  /* 12772103 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772106 push ecx */
  push32((uint32_t)(ECX));
  /* 12772107 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277210a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1277210c push eax */
  push32((uint32_t)(EAX));
  /* 1277210d call 0x127721d0 */
  push32(0x12772112u); f_127721d0();
  /* 12772112 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772115 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772118 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277211b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1277211e jmp 0x1277218d */
  goto L_1277218d;
L_12772120:;
  /* 12772120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12772125 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772127 mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 1277212d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1277212f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12772133 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12772139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1277213b je 0x12772168 */
  if (C.zf) goto L_12772168;
  /* 1277213d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772141 jbe 0x12772168 */
  if ((C.cf||C.zf)) goto L_12772168;
  /* 12772143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772146 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772149 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1277214b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1277214d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772150 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772153 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12772156 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772159 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277215c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1277215f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772162 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772165 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12772168:;
  /* 12772168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277216b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277216e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12772170 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12772172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772175 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772178 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1277217b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277217e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772181 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12772184 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772187 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277218a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1277218d:;
  /* 1277218d jmp 0x127720a1 */
  goto L_127720a1;
L_12772192:;
  /* 12772192 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772196 je 0x127721a4 */
  if (C.zf) goto L_127721a4;
  /* 12772198 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1277219a call 0x127687a0 */
  push32(0x1277219fu); f_127687a0();
  /* 1277219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127721a2 jmp 0x127721af */
  goto L_127721af;
L_127721a4:;
  /* 127721a4 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 127721a9 call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x127721afu);
L_127721af:;
  /* 127721af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127721b3 jbe 0x127721c3 */
  if ((C.cf||C.zf)) goto L_127721c3;
  /* 127721b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127721b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127721bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127721be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127721c1 jmp 0x127721c5 */
  goto L_127721c5;
L_127721c3:;
  /* 127721c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127721c5:;
  /* 127721c5 mov esp, ebp */
  ESP = (EBP);
  /* 127721c7 pop ebp */
  EBP = (pop32());
  /* 127721c8 ret  */
  ESPCHK(0x12772040u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x127721d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_127721d0(void) {
  FTRACE(0x127721d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127721d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127721d1 mov ebp, esp */
  EBP = (ESP);
  /* 127721d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127721d6 push esi */
  push32((uint32_t)(ESI));
  /* 127721d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 127721db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127721de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127721e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127721e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127721e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127721eb ja 0x12772738 */
  if ((!C.cf&&!C.zf)) goto L_12772738;
  /* 127721f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127721f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127721f6 mov dl, byte ptr [eax + 0x12772799] */
  DL = (r8((uint32_t)(EAX + 0x12772799)));
  /* 127721fc jmp dword ptr [edx*4 + 0x1277273d] */
  switch (EDX) {
    case 0: goto L_12772716;
    case 1: goto L_12772225;
    case 2: goto L_1277226b;
    case 3: goto L_127723b8;
    case 4: goto L_127723e0;
    case 5: goto L_1277247f;
    case 6: goto L_127724eb;
    case 7: goto L_12772514;
    case 8: goto L_12772555;
    case 9: goto L_12772637;
    case 10: goto L_1277269e;
    case 11: goto L_127726eb;
    case 12: goto L_12772203;
    case 13: goto L_12772248;
    case 14: goto L_1277228e;
    case 15: goto L_1277238e;
    case 16: goto L_12772425;
    case 17: goto L_12772452;
    case 18: goto L_127724a7;
    case 19: goto L_1277252b;
    case 20: goto L_127725d9;
    case 21: goto L_12772668;
    case 22: goto L_12772738;
    default: x86_unimpl("switch@0x127721fc out of table"); return;
  }
L_12772203:;
  /* 12772203 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772206 push ecx */
  push32((uint32_t)(ECX));
  /* 12772207 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277220a push edx */
  push32((uint32_t)(EDX));
  /* 1277220b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277220e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12772211 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772214 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12772217 push eax */
  push32((uint32_t)(EAX));
  /* 12772218 call 0x127727f0 */
  push32(0x1277221du); f_127727f0();
  /* 1277221d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772220 jmp 0x12772738 */
  goto L_12772738;
L_12772225:;
  /* 12772225 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772228 push ecx */
  push32((uint32_t)(ECX));
  /* 12772229 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277222c push edx */
  push32((uint32_t)(EDX));
  /* 1277222d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772230 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12772233 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772236 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1277223a push eax */
  push32((uint32_t)(EAX));
  /* 1277223b call 0x127727f0 */
  push32(0x12772240u); f_127727f0();
  /* 12772240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772243 jmp 0x12772738 */
  goto L_12772738;
L_12772248:;
  /* 12772248 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277224b push ecx */
  push32((uint32_t)(ECX));
  /* 1277224c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277224f push edx */
  push32((uint32_t)(EDX));
  /* 12772250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772253 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12772256 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772259 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1277225d push eax */
  push32((uint32_t)(EAX));
  /* 1277225e call 0x127727f0 */
  push32(0x12772263u); f_127727f0();
  /* 12772263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772266 jmp 0x12772738 */
  goto L_12772738;
L_1277226b:;
  /* 1277226b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277226e push ecx */
  push32((uint32_t)(ECX));
  /* 1277226f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772272 push edx */
  push32((uint32_t)(EDX));
  /* 12772273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772276 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12772279 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1277227c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12772280 push eax */
  push32((uint32_t)(EAX));
  /* 12772281 call 0x127727f0 */
  push32(0x12772286u); f_127727f0();
  /* 12772286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772289 jmp 0x12772738 */
  goto L_12772738;
L_1277228e:;
  /* 1277228e cmp dword ptr [0x127909c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772295 je 0x12772316 */
  if (C.zf) goto L_12772316;
  /* 12772297 mov dword ptr [0x127909c8], 0 */
  w32((uint32_t)(0x127909c8), (0x0u));
  /* 127722a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127722a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127722a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127722a8 push edx */
  push32((uint32_t)(EDX));
  /* 127722a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127722ac push eax */
  push32((uint32_t)(EAX));
  /* 127722ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127722b0 push ecx */
  push32((uint32_t)(ECX));
  /* 127722b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127722b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 127722ba push eax */
  push32((uint32_t)(EAX));
  /* 127722bb call 0x127729a0 */
  push32(0x127722c0u); f_127729a0();
  /* 127722c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127722c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127722c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127722c9 jne 0x127722d0 */
  if (!C.zf) goto L_127722d0;
  /* 127722cb jmp 0x12772738 */
  goto L_12772738;
L_127722d0:;
  /* 127722d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127722d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127722d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 127722d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127722db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127722dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127722e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127722e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127722e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127722e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127722ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127722ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127722f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127722f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127722f5 push ecx */
  push32((uint32_t)(ECX));
  /* 127722f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127722f9 push edx */
  push32((uint32_t)(EDX));
  /* 127722fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127722fd push eax */
  push32((uint32_t)(EAX));
  /* 127722fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772301 push ecx */
  push32((uint32_t)(ECX));
  /* 12772302 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772305 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1277230b push eax */
  push32((uint32_t)(EAX));
  /* 1277230c call 0x127729a0 */
  push32(0x12772311u); f_127729a0();
  /* 12772311 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772314 jmp 0x12772389 */
  goto L_12772389;
L_12772316:;
  /* 12772316 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772319 push ecx */
  push32((uint32_t)(ECX));
  /* 1277231a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277231d push edx */
  push32((uint32_t)(EDX));
  /* 1277231e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772321 push eax */
  push32((uint32_t)(EAX));
  /* 12772322 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772325 push ecx */
  push32((uint32_t)(ECX));
  /* 12772326 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772329 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1277232f push eax */
  push32((uint32_t)(EAX));
  /* 12772330 call 0x127729a0 */
  push32(0x12772335u); f_127729a0();
  /* 12772335 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772338 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277233b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277233e jne 0x12772345 */
  if (!C.zf) goto L_12772345;
  /* 12772340 jmp 0x12772738 */
  goto L_12772738;
L_12772345:;
  /* 12772345 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772348 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1277234a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1277234d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772350 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772352 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772355 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772358 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1277235a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277235d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1277235f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772362 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772365 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12772367 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1277236a push ecx */
  push32((uint32_t)(ECX));
  /* 1277236b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277236e push edx */
  push32((uint32_t)(EDX));
  /* 1277236f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772372 push eax */
  push32((uint32_t)(EAX));
  /* 12772373 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772376 push ecx */
  push32((uint32_t)(ECX));
  /* 12772377 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1277237a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12772380 push eax */
  push32((uint32_t)(EAX));
  /* 12772381 call 0x127729a0 */
  push32(0x12772386u); f_127729a0();
  /* 12772386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12772389:;
  /* 12772389 jmp 0x12772738 */
  goto L_12772738;
L_1277238e:;
  /* 1277238e mov ecx, dword ptr [0x127909c8] */
  ECX = (r32((uint32_t)(0x127909c8)));
  /* 12772394 mov dword ptr [0x127909d8], ecx */
  w32((uint32_t)(0x127909d8), (ECX));
  /* 1277239a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277239d push edx */
  push32((uint32_t)(EDX));
  /* 1277239e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127723a1 push eax */
  push32((uint32_t)(EAX));
  /* 127723a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127723a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127723a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127723aa push edx */
  push32((uint32_t)(EDX));
  /* 127723ab call 0x12772840 */
  push32(0x127723b0u); f_12772840();
  /* 127723b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127723b3 jmp 0x12772738 */
  goto L_12772738;
L_127723b8:;
  /* 127723b8 mov eax, dword ptr [0x127909c8] */
  EAX = (r32((uint32_t)(0x127909c8)));
  /* 127723bd mov dword ptr [0x127909d8], eax */
  w32((uint32_t)(0x127909d8), (EAX));
  /* 127723c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127723c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127723c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127723c9 push edx */
  push32((uint32_t)(EDX));
  /* 127723ca push 2 */
  push32((uint32_t)(0x2u));
  /* 127723cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127723cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127723d2 push ecx */
  push32((uint32_t)(ECX));
  /* 127723d3 call 0x12772840 */
  push32(0x127723d8u); f_12772840();
  /* 127723d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127723db jmp 0x12772738 */
  goto L_12772738;
L_127723e0:;
  /* 127723e0 mov edx, dword ptr [0x127909c8] */
  EDX = (r32((uint32_t)(0x127909c8)));
  /* 127723e6 mov dword ptr [0x127909d8], edx */
  w32((uint32_t)(0x127909d8), (EDX));
  /* 127723ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127723ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 127723f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127723f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 127723f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127723fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127723fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772401 jne 0x1277240a */
  if (!C.zf) goto L_1277240a;
  /* 12772403 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1277240a:;
  /* 1277240a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277240d push edx */
  push32((uint32_t)(EDX));
  /* 1277240e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772411 push eax */
  push32((uint32_t)(EAX));
  /* 12772412 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772417 push ecx */
  push32((uint32_t)(ECX));
  /* 12772418 call 0x12772840 */
  push32(0x1277241du); f_12772840();
  /* 1277241d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772420 jmp 0x12772738 */
  goto L_12772738;
L_12772425:;
  /* 12772425 mov edx, dword ptr [0x127909c8] */
  EDX = (r32((uint32_t)(0x127909c8)));
  /* 1277242b mov dword ptr [0x127909d8], edx */
  w32((uint32_t)(0x127909d8), (EDX));
  /* 12772431 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772434 push eax */
  push32((uint32_t)(EAX));
  /* 12772435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772438 push ecx */
  push32((uint32_t)(ECX));
  /* 12772439 push 3 */
  push32((uint32_t)(0x3u));
  /* 1277243b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277243e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12772441 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772444 push eax */
  push32((uint32_t)(EAX));
  /* 12772445 call 0x12772840 */
  push32(0x1277244au); f_12772840();
  /* 1277244a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277244d jmp 0x12772738 */
  goto L_12772738;
L_12772452:;
  /* 12772452 mov ecx, dword ptr [0x127909c8] */
  ECX = (r32((uint32_t)(0x127909c8)));
  /* 12772458 mov dword ptr [0x127909d8], ecx */
  w32((uint32_t)(0x127909d8), (ECX));
  /* 1277245e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772461 push edx */
  push32((uint32_t)(EDX));
  /* 12772462 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772465 push eax */
  push32((uint32_t)(EAX));
  /* 12772466 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772468 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277246b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1277246e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772471 push edx */
  push32((uint32_t)(EDX));
  /* 12772472 call 0x12772840 */
  push32(0x12772477u); f_12772840();
  /* 12772477 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277247a jmp 0x12772738 */
  goto L_12772738;
L_1277247f:;
  /* 1277247f mov eax, dword ptr [0x127909c8] */
  EAX = (r32((uint32_t)(0x127909c8)));
  /* 12772484 mov dword ptr [0x127909d8], eax */
  w32((uint32_t)(0x127909d8), (EAX));
  /* 12772489 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277248c push ecx */
  push32((uint32_t)(ECX));
  /* 1277248d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772490 push edx */
  push32((uint32_t)(EDX));
  /* 12772491 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772493 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772496 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12772499 push ecx */
  push32((uint32_t)(ECX));
  /* 1277249a call 0x12772840 */
  push32(0x1277249fu); f_12772840();
  /* 1277249f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127724a2 jmp 0x12772738 */
  goto L_12772738;
L_127724a7:;
  /* 127724a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127724aa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127724ae jg 0x127724cc */
  if ((!C.zf&&C.sf==C.of)) goto L_127724cc;
  /* 127724b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127724b3 push eax */
  push32((uint32_t)(EAX));
  /* 127724b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127724b7 push ecx */
  push32((uint32_t)(ECX));
  /* 127724b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127724bb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 127724c1 push eax */
  push32((uint32_t)(EAX));
  /* 127724c2 call 0x127727f0 */
  push32(0x127724c7u); f_127727f0();
  /* 127724c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127724ca jmp 0x127724e6 */
  goto L_127724e6;
L_127724cc:;
  /* 127724cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127724cf push ecx */
  push32((uint32_t)(ECX));
  /* 127724d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127724d3 push edx */
  push32((uint32_t)(EDX));
  /* 127724d4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127724d7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127724dd push ecx */
  push32((uint32_t)(ECX));
  /* 127724de call 0x127727f0 */
  push32(0x127724e3u); f_127727f0();
  /* 127724e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127724e6:;
  /* 127724e6 jmp 0x12772738 */
  goto L_12772738;
L_127724eb:;
  /* 127724eb mov edx, dword ptr [0x127909c8] */
  EDX = (r32((uint32_t)(0x127909c8)));
  /* 127724f1 mov dword ptr [0x127909d8], edx */
  w32((uint32_t)(0x127909d8), (EDX));
  /* 127724f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127724fa push eax */
  push32((uint32_t)(EAX));
  /* 127724fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127724fe push ecx */
  push32((uint32_t)(ECX));
  /* 127724ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12772501 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772504 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772506 push eax */
  push32((uint32_t)(EAX));
  /* 12772507 call 0x12772840 */
  push32(0x1277250cu); f_12772840();
  /* 1277250c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277250f jmp 0x12772738 */
  goto L_12772738;
L_12772514:;
  /* 12772514 mov ecx, dword ptr [0x127909c8] */
  ECX = (r32((uint32_t)(0x127909c8)));
  /* 1277251a mov dword ptr [0x127909d8], ecx */
  w32((uint32_t)(0x127909d8), (ECX));
  /* 12772520 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772523 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12772526 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12772529 jmp 0x1277257d */
  goto L_1277257d;
L_1277252b:;
  /* 1277252b mov ecx, dword ptr [0x127909c8] */
  ECX = (r32((uint32_t)(0x127909c8)));
  /* 12772531 mov dword ptr [0x127909d8], ecx */
  w32((uint32_t)(0x127909d8), (ECX));
  /* 12772537 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277253a push edx */
  push32((uint32_t)(EDX));
  /* 1277253b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277253e push eax */
  push32((uint32_t)(EAX));
  /* 1277253f push 1 */
  push32((uint32_t)(0x1u));
  /* 12772541 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772544 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12772547 push edx */
  push32((uint32_t)(EDX));
  /* 12772548 call 0x12772840 */
  push32(0x1277254du); f_12772840();
  /* 1277254d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772550 jmp 0x12772738 */
  goto L_12772738;
L_12772555:;
  /* 12772555 mov eax, dword ptr [0x127909c8] */
  EAX = (r32((uint32_t)(0x127909c8)));
  /* 1277255a mov dword ptr [0x127909d8], eax */
  w32((uint32_t)(0x127909d8), (EAX));
  /* 1277255f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772562 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772566 jne 0x12772571 */
  if (!C.zf) goto L_12772571;
  /* 12772568 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1277256f jmp 0x1277257d */
  goto L_1277257d;
L_12772571:;
  /* 12772571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772574 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12772577 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277257a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1277257d:;
  /* 1277257d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772580 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12772583 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772586 jge 0x12772591 */
  if ((C.sf==C.of)) goto L_12772591;
  /* 12772588 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1277258f jmp 0x127725be */
  goto L_127725be;
L_12772591:;
  /* 12772591 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772594 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12772597 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12772598 mov ecx, 7 */
  ECX = (0x7u);
  /* 1277259d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1277259f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127725a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127725a5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127725a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127725a9 mov ecx, 7 */
  ECX = (0x7u);
  /* 127725ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127725b0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127725b3 jl 0x127725be */
  if ((C.sf!=C.of)) goto L_127725be;
  /* 127725b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127725b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127725bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127725be:;
  /* 127725be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127725c1 push eax */
  push32((uint32_t)(EAX));
  /* 127725c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127725c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127725c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127725c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127725cb push edx */
  push32((uint32_t)(EDX));
  /* 127725cc call 0x12772840 */
  push32(0x127725d1u); f_12772840();
  /* 127725d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127725d4 jmp 0x12772738 */
  goto L_12772738;
L_127725d9:;
  /* 127725d9 cmp dword ptr [0x127909c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127725e0 je 0x12772610 */
  if (C.zf) goto L_12772610;
  /* 127725e2 mov dword ptr [0x127909c8], 0 */
  w32((uint32_t)(0x127909c8), (0x0u));
  /* 127725ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127725ef push eax */
  push32((uint32_t)(EAX));
  /* 127725f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127725f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127725f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127725f7 push edx */
  push32((uint32_t)(EDX));
  /* 127725f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127725fb push eax */
  push32((uint32_t)(EAX));
  /* 127725fc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127725ff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12772605 push edx */
  push32((uint32_t)(EDX));
  /* 12772606 call 0x127729a0 */
  push32(0x1277260bu); f_127729a0();
  /* 1277260b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277260e jmp 0x12772632 */
  goto L_12772632;
L_12772610:;
  /* 12772610 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772613 push eax */
  push32((uint32_t)(EAX));
  /* 12772614 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772617 push ecx */
  push32((uint32_t)(ECX));
  /* 12772618 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277261b push edx */
  push32((uint32_t)(EDX));
  /* 1277261c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277261f push eax */
  push32((uint32_t)(EAX));
  /* 12772620 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772623 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12772629 push edx */
  push32((uint32_t)(EDX));
  /* 1277262a call 0x127729a0 */
  push32(0x1277262fu); f_127729a0();
  /* 1277262f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12772632:;
  /* 12772632 jmp 0x12772738 */
  goto L_12772738;
L_12772637:;
  /* 12772637 mov dword ptr [0x127909c8], 0 */
  w32((uint32_t)(0x127909c8), (0x0u));
  /* 12772641 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772644 push eax */
  push32((uint32_t)(EAX));
  /* 12772645 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772648 push ecx */
  push32((uint32_t)(ECX));
  /* 12772649 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277264c push edx */
  push32((uint32_t)(EDX));
  /* 1277264d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772650 push eax */
  push32((uint32_t)(EAX));
  /* 12772651 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772654 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1277265a push edx */
  push32((uint32_t)(EDX));
  /* 1277265b call 0x127729a0 */
  push32(0x12772660u); f_127729a0();
  /* 12772660 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772663 jmp 0x12772738 */
  goto L_12772738;
L_12772668:;
  /* 12772668 mov eax, dword ptr [0x127909c8] */
  EAX = (r32((uint32_t)(0x127909c8)));
  /* 1277266d mov dword ptr [0x127909d8], eax */
  w32((uint32_t)(0x127909d8), (EAX));
  /* 12772672 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772675 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12772678 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12772679 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1277267e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12772680 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12772683 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772686 push edx */
  push32((uint32_t)(EDX));
  /* 12772687 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277268a push eax */
  push32((uint32_t)(EAX));
  /* 1277268b push 2 */
  push32((uint32_t)(0x2u));
  /* 1277268d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772690 push ecx */
  push32((uint32_t)(ECX));
  /* 12772691 call 0x12772840 */
  push32(0x12772696u); f_12772840();
  /* 12772696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772699 jmp 0x12772738 */
  goto L_12772738;
L_1277269e:;
  /* 1277269e mov edx, dword ptr [0x127909c8] */
  EDX = (r32((uint32_t)(0x127909c8)));
  /* 127726a4 mov dword ptr [0x127909d8], edx */
  w32((uint32_t)(0x127909d8), (EDX));
  /* 127726aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127726ad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 127726b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127726b1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 127726b6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127726b8 mov ecx, eax */
  ECX = (EAX);
  /* 127726ba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127726bd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127726c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127726c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127726c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127726c7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 127726cc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127726ce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127726d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127726d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127726d6 push eax */
  push32((uint32_t)(EAX));
  /* 127726d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127726da push ecx */
  push32((uint32_t)(ECX));
  /* 127726db push 4 */
  push32((uint32_t)(0x4u));
  /* 127726dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127726e0 push edx */
  push32((uint32_t)(EDX));
  /* 127726e1 call 0x12772840 */
  push32(0x127726e6u); f_12772840();
  /* 127726e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127726e9 jmp 0x12772738 */
  goto L_12772738;
L_127726eb:;
  /* 127726eb call 0x12773800 */
  push32(0x127726f0u); f_12773800();
  /* 127726f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127726f3 push eax */
  push32((uint32_t)(EAX));
  /* 127726f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127726f7 push ecx */
  push32((uint32_t)(ECX));
  /* 127726f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127726fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127726fd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772701 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12772704 mov ecx, dword ptr [eax*4 + 0x1278fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278fe1c)));
  /* 1277270b push ecx */
  push32((uint32_t)(ECX));
  /* 1277270c call 0x127727f0 */
  push32(0x12772711u); f_127727f0();
  /* 12772711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772714 jmp 0x12772738 */
  goto L_12772738;
L_12772716:;
  /* 12772716 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772719 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1277271b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1277271e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772721 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772723 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772726 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772729 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1277272b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277272e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772730 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772733 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772736 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12772738:;
  /* 12772738 pop esi */
  ESI = (pop32());
  /* 12772739 mov esp, ebp */
  ESP = (EBP);
  /* 1277273b pop ebp */
  EBP = (pop32());
  /* 1277273c ret  */
  ESPCHK(0x127721d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x127727f0 (72 bytes, 30 insns) */
void f_127727f0(void) {
  FTRACE(0x127727f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127727f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127727f1 mov ebp, esp */
  EBP = (ESP);
L_127727f3:;
  /* 127727f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127727f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127727f9 je 0x12772836 */
  if (C.zf) goto L_12772836;
  /* 127727fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127727fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12772801 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12772803 je 0x12772836 */
  if (C.zf) goto L_12772836;
  /* 12772805 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772808 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1277280a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277280d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1277280f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12772811 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772814 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772816 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277281c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1277281e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772824 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12772827 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277282a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1277282c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277282f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772832 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12772834 jmp 0x127727f3 */
  goto L_127727f3;
L_12772836:;
  /* 12772836 pop ebp */
  EBP = (pop32());
  /* 12772837 ret  */
  ESPCHK(0x127727f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012840 @ 0x12772840 (173 bytes, 64 insns) */
void f_12772840(void) {
  FTRACE(0x12772840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12772840 push ebp */
  push32((uint32_t)(EBP));
  /* 12772841 mov ebp, esp */
  EBP = (ESP);
  /* 12772843 push ecx */
  push32((uint32_t)(ECX));
  /* 12772844 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1277284b cmp dword ptr [0x127909d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772852 je 0x1277286a */
  if (C.zf) goto L_1277286a;
  /* 12772854 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772857 push eax */
  push32((uint32_t)(EAX));
  /* 12772858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277285b push ecx */
  push32((uint32_t)(ECX));
  /* 1277285c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277285f push edx */
  push32((uint32_t)(EDX));
  /* 12772860 call 0x127728f0 */
  push32(0x12772865u); f_127728f0();
  /* 12772865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772868 jmp 0x127728e9 */
  goto L_127728e9;
L_1277286a:;
  /* 1277286a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277286d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772870 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772872 jae 0x127728e0 */
  if (!C.cf) goto L_127728e0;
  /* 12772874 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772877 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277287a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1277287d jmp 0x12772888 */
  goto L_12772888;
L_1277287f:;
  /* 1277287f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772882 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772885 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12772888:;
  /* 12772888 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277288b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277288e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12772890 je 0x127728c4 */
  if (C.zf) goto L_127728c4;
  /* 12772892 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772895 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12772896 mov ecx, 0xa */
  ECX = (0xau);
  /* 1277289b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1277289d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127728a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127728a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127728a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127728a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 127728ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127728ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127728af mov ecx, 0xa */
  ECX = (0xau);
  /* 127728b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127728b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127728b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127728bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127728bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127728c2 jmp 0x1277287f */
  goto L_1277287f;
L_127728c4:;
  /* 127728c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127728c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127728c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127728cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127728cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127728d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127728d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127728d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127728d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127728dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127728de jmp 0x127728e9 */
  goto L_127728e9;
L_127728e0:;
  /* 127728e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127728e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127728e9:;
  /* 127728e9 mov esp, ebp */
  ESP = (EBP);
  /* 127728eb pop ebp */
  EBP = (pop32());
  /* 127728ec ret  */
  ESPCHK(0x12772840u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x127728f0 (172 bytes, 65 insns) */
void f_127728f0(void) {
  FTRACE(0x127728f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127728f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127728f1 mov ebp, esp */
  EBP = (ESP);
  /* 127728f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127728f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127728f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127728fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127728fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772901 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772904 jbe 0x1277294b */
  if ((C.cf||C.zf)) goto L_1277294b;
L_12772906:;
  /* 12772906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772909 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1277290a mov ecx, 0xa */
  ECX = (0xau);
  /* 1277290f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12772911 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772914 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772917 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12772919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277291c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277291f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12772922 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772925 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772927 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277292a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277292d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1277292f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772932 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12772933 mov ecx, 0xa */
  ECX = (0xau);
  /* 12772938 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1277293a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1277293d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772941 jle 0x1277294b */
  if ((C.zf||C.sf!=C.of)) goto L_1277294b;
  /* 12772943 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772946 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772949 ja 0x12772906 */
  if ((!C.cf&&!C.zf)) goto L_12772906;
L_1277294b:;
  /* 1277294b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277294e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772950 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12772953 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772959 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1277295b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277295e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772961 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12772964:;
  /* 12772964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772967 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772969 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1277296c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277296f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12772972 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772974 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12772976 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772979 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277297c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1277297f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12772982 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12772985 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12772987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277298a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277298d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12772990 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12772993 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772996 jb 0x12772964 */
  if (C.cf) goto L_12772964;
  /* 12772998 mov esp, ebp */
  ESP = (EBP);
  /* 1277299a pop ebp */
  EBP = (pop32());
  /* 1277299b ret  */
  ESPCHK(0x127728f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x127729a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_127729a0(void) {
  FTRACE(0x127729a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127729a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127729a1 mov ebp, esp */
  EBP = (ESP);
  /* 127729a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127729a6:;
  /* 127729a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127729a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127729ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127729ae je 0x12772e1c */
  if (C.zf) goto L_12772e1c;
  /* 127729b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127729b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127729ba je 0x12772e1c */
  if (C.zf) goto L_12772e1c;
  /* 127729c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 127729c4 mov dword ptr [0x127909d8], 0 */
  w32((uint32_t)(0x127909d8), (0x0u));
  /* 127729ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127729d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127729d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127729db jmp 0x127729e6 */
  goto L_127729e6;
L_127729dd:;
  /* 127729dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127729e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127729e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127729e6:;
  /* 127729e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127729e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127729ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127729ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127729f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127729f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127729f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127729fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127729fd jne 0x12772a01 */
  if (!C.zf) goto L_12772a01;
  /* 127729ff jmp 0x127729dd */
  goto L_127729dd;
L_12772a01:;
  /* 12772a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772a04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772a07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12772a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772a0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12772a10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12772a13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12772a16 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772a19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12772a1c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772a20 ja 0x12772d70 */
  if ((!C.cf&&!C.zf)) goto L_12772d70;
  /* 12772a26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12772a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12772a2b mov al, byte ptr [ecx + 0x12772e4c] */
  AL = (r8((uint32_t)(ECX + 0x12772e4c)));
  /* 12772a31 jmp dword ptr [eax*4 + 0x12772e20] */
  switch (EAX) {
    case 0: goto L_12772c8f;
    case 1: goto L_12772b73;
    case 2: goto L_12772afe;
    case 3: goto L_12772a38;
    case 4: goto L_12772a76;
    case 5: goto L_12772ad7;
    case 6: goto L_12772b25;
    case 7: goto L_12772b4c;
    case 8: goto L_12772bba;
    case 9: goto L_12772ab4;
    case 10: goto L_12772d70;
    default: x86_unimpl("switch@0x12772a31 out of table"); return;
  }
L_12772a38:;
  /* 12772a38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772a3b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12772a3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12772a41 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772a44 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12772a47 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772a4b ja 0x12772a71 */
  if ((!C.cf&&!C.zf)) goto L_12772a71;
  /* 12772a4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12772a50 jmp dword ptr [ecx*4 + 0x12772e9f] */
  switch (ECX) {
    case 0: goto L_12772a57;
    case 1: goto L_12772a61;
    case 2: goto L_12772a67;
    case 3: goto L_12772a6d;
    case 4: goto L_12772a95;
    case 5: goto L_12772a9f;
    case 6: goto L_12772aa5;
    case 7: goto L_12772aab;
    default: x86_unimpl("switch@0x12772a50 out of table"); return;
  }
L_12772a57:;
  /* 12772a57 mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772a61:;
  /* 12772a61 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12772a65 jmp 0x12772a71 */
  goto L_12772a71;
L_12772a67:;
  /* 12772a67 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12772a6b jmp 0x12772a71 */
  goto L_12772a71;
L_12772a6d:;
  /* 12772a6d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12772a71:;
  /* 12772a71 jmp 0x12772d70 */
  goto L_12772d70;
L_12772a76:;
  /* 12772a76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772a79 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12772a7c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12772a7f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772a82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12772a85 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772a89 ja 0x12772aaf */
  if ((!C.cf&&!C.zf)) goto L_12772aaf;
  /* 12772a8b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12772a8e jmp dword ptr [ecx*4 + 0x12772eaf] */
  switch (ECX) {
    case 0: goto L_12772a95;
    case 1: goto L_12772a9f;
    case 2: goto L_12772aa5;
    case 3: goto L_12772aab;
    default: x86_unimpl("switch@0x12772a8e out of table"); return;
  }
L_12772a95:;
  /* 12772a95 mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772a9f:;
  /* 12772a9f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12772aa3 jmp 0x12772aaf */
  goto L_12772aaf;
L_12772aa5:;
  /* 12772aa5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12772aa9 jmp 0x12772aaf */
  goto L_12772aaf;
L_12772aab:;
  /* 12772aab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12772aaf:;
  /* 12772aaf jmp 0x12772d70 */
  goto L_12772d70;
L_12772ab4:;
  /* 12772ab4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772ab7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12772aba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772abe je 0x12772ac8 */
  if (C.zf) goto L_12772ac8;
  /* 12772ac0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772ac4 je 0x12772ace */
  if (C.zf) goto L_12772ace;
  /* 12772ac6 jmp 0x12772ad2 */
  goto L_12772ad2;
L_12772ac8:;
  /* 12772ac8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12772acc jmp 0x12772ad2 */
  goto L_12772ad2;
L_12772ace:;
  /* 12772ace mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12772ad2:;
  /* 12772ad2 jmp 0x12772d70 */
  goto L_12772d70;
L_12772ad7:;
  /* 12772ad7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772ada mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12772add cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772ae1 je 0x12772aeb */
  if (C.zf) goto L_12772aeb;
  /* 12772ae3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772ae7 je 0x12772af5 */
  if (C.zf) goto L_12772af5;
  /* 12772ae9 jmp 0x12772af9 */
  goto L_12772af9;
L_12772aeb:;
  /* 12772aeb mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772af5:;
  /* 12772af5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12772af9:;
  /* 12772af9 jmp 0x12772d70 */
  goto L_12772d70;
L_12772afe:;
  /* 12772afe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772b01 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12772b04 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b08 je 0x12772b12 */
  if (C.zf) goto L_12772b12;
  /* 12772b0a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b0e je 0x12772b1c */
  if (C.zf) goto L_12772b1c;
  /* 12772b10 jmp 0x12772b20 */
  goto L_12772b20;
L_12772b12:;
  /* 12772b12 mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772b1c:;
  /* 12772b1c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12772b20:;
  /* 12772b20 jmp 0x12772d70 */
  goto L_12772d70;
L_12772b25:;
  /* 12772b25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772b28 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12772b2b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b2f je 0x12772b39 */
  if (C.zf) goto L_12772b39;
  /* 12772b31 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b35 je 0x12772b43 */
  if (C.zf) goto L_12772b43;
  /* 12772b37 jmp 0x12772b47 */
  goto L_12772b47;
L_12772b39:;
  /* 12772b39 mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772b43:;
  /* 12772b43 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12772b47:;
  /* 12772b47 jmp 0x12772d70 */
  goto L_12772d70;
L_12772b4c:;
  /* 12772b4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772b4f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12772b52 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b56 je 0x12772b60 */
  if (C.zf) goto L_12772b60;
  /* 12772b58 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772b5c je 0x12772b6a */
  if (C.zf) goto L_12772b6a;
  /* 12772b5e jmp 0x12772b6e */
  goto L_12772b6e;
L_12772b60:;
  /* 12772b60 mov dword ptr [0x127909d8], 1 */
  w32((uint32_t)(0x127909d8), (0x1u));
L_12772b6a:;
  /* 12772b6a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12772b6e:;
  /* 12772b6e jmp 0x12772d70 */
  goto L_12772d70;
L_12772b73:;
  /* 12772b73 push 0x1278cb04 */
  push32((uint32_t)(0x1278cb04u));
  /* 12772b78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772b7b push ecx */
  push32((uint32_t)(ECX));
  /* 12772b7c call 0x127733d0 */
  push32(0x12772b81u); f_127733d0();
  /* 12772b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12772b86 jne 0x12772b93 */
  if (!C.zf) goto L_12772b93;
  /* 12772b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772b8b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772b8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12772b91 jmp 0x12772bb1 */
  goto L_12772bb1;
L_12772b93:;
  /* 12772b93 push 0x1278cb00 */
  push32((uint32_t)(0x1278cb00u));
  /* 12772b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772b9b push eax */
  push32((uint32_t)(EAX));
  /* 12772b9c call 0x127733d0 */
  push32(0x12772ba1u); f_127733d0();
  /* 12772ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772ba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12772ba6 jne 0x12772bb1 */
  if (!C.zf) goto L_12772bb1;
  /* 12772ba8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772bab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772bae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12772bb1:;
  /* 12772bb1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12772bb5 jmp 0x12772d70 */
  goto L_12772d70;
L_12772bba:;
  /* 12772bba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772bbd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772bc1 jg 0x12772bd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12772bd1;
  /* 12772bc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772bc6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12772bcc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12772bcf jmp 0x12772bdd */
  goto L_12772bdd;
L_12772bd1:;
  /* 12772bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772bd4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12772bda mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12772bdd:;
  /* 12772bdd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772be1 jle 0x12772c84 */
  if ((C.zf||C.sf!=C.of)) goto L_12772c84;
  /* 12772be7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772bea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772bed jbe 0x12772c84 */
  if ((C.cf||C.zf)) goto L_12772c84;
  /* 12772bf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12772bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12772bf8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772bfa mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 12772c00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12772c02 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12772c06 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12772c0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12772c0e je 0x12772c47 */
  if (C.zf) goto L_12772c47;
  /* 12772c10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772c13 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772c16 jbe 0x12772c47 */
  if ((C.cf||C.zf)) goto L_12772c47;
  /* 12772c18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772c1d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12772c20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12772c22 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12772c24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772c2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12772c31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12772c34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772c37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12772c3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772c3d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772c3f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772c42 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772c45 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12772c47:;
  /* 12772c47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772c4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12772c4f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772c51 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12772c53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772c58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772c5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772c5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12772c60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12772c63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772c66 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12772c69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772c6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772c6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772c71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772c74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12772c76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772c79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772c7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12772c7f jmp 0x12772bdd */
  goto L_12772bdd;
L_12772c84:;
  /* 12772c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772c87 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12772c8a jmp 0x127729a6 */
  goto L_127729a6;
L_12772c8f:;
  /* 12772c8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772c92 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12772c95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12772c97 je 0x12772d62 */
  if (C.zf) goto L_12772d62;
  /* 12772c9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772ca0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772ca3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12772ca6:;
  /* 12772ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772ca9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12772cac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12772cae je 0x12772d60 */
  if (C.zf) goto L_12772d60;
  /* 12772cb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772cb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772cba je 0x12772d60 */
  if (C.zf) goto L_12772d60;
  /* 12772cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772cc3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12772cc6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772cc9 jne 0x12772cd9 */
  if (!C.zf) goto L_12772cd9;
  /* 12772ccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772cce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772cd1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12772cd4 jmp 0x12772d60 */
  goto L_12772d60;
L_12772cd9:;
  /* 12772cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772cdc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12772cde mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12772ce0 mov edx, dword ptr [0x1278ec98] */
  EDX = (r32((uint32_t)(0x1278ec98)));
  /* 12772ce6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12772ce8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12772cec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12772cf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12772cf3 je 0x12772d2c */
  if (C.zf) goto L_12772d2c;
  /* 12772cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772cf8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772cfb jbe 0x12772d2c */
  if ((C.cf||C.zf)) goto L_12772d2c;
  /* 12772cfd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12772d07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12772d09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772d0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d11 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12772d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12772d1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772d22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772d24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772d27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772d2a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12772d2c:;
  /* 12772d2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772d31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12772d36 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12772d38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772d3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d43 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12772d45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12772d4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772d51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772d53 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772d56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772d59 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12772d5b jmp 0x12772ca6 */
  goto L_12772ca6;
L_12772d60:;
  /* 12772d60 jmp 0x12772d6b */
  goto L_12772d6b;
L_12772d62:;
  /* 12772d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d65 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12772d6b:;
  /* 12772d6b jmp 0x127729a6 */
  goto L_127729a6;
L_12772d70:;
  /* 12772d70 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12772d74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12772d76 je 0x12772d9c */
  if (C.zf) goto L_12772d9c;
  /* 12772d78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12772d7b push edx */
  push32((uint32_t)(EDX));
  /* 12772d7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772d7f push eax */
  push32((uint32_t)(EAX));
  /* 12772d80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12772d84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772d87 push edx */
  push32((uint32_t)(EDX));
  /* 12772d88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12772d8b push eax */
  push32((uint32_t)(EAX));
  /* 12772d8c call 0x127721d0 */
  push32(0x12772d91u); f_127721d0();
  /* 12772d91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772d94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12772d97 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12772d9a jmp 0x12772e17 */
  goto L_12772e17;
L_12772d9c:;
  /* 12772d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12772da1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772da3 mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 12772da9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12772dab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12772daf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12772db5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12772db7 je 0x12772de8 */
  if (C.zf) goto L_12772de8;
  /* 12772db9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772dbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772dc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12772dc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12772dc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772dc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772dca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772dcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772dd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12772dd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772dd8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12772ddb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772dde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772de0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772de3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772de6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12772de8:;
  /* 12772de8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772deb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12772ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772df0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12772df2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12772df4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772df7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772df9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772dfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772dff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12772e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12772e04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12772e07 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12772e0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772e0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12772e0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772e12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772e15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12772e17:;
  /* 12772e17 jmp 0x127729a6 */
  goto L_127729a6;
L_12772e1c:;
  /* 12772e1c mov esp, ebp */
  ESP = (EBP);
  /* 12772e1e pop ebp */
  EBP = (pop32());
  /* 12772e1f ret  */
  ESPCHK(0x127729a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x12772ec0 (650 bytes, 178 insns) */
void f_12772ec0(void) {
  FTRACE(0x12772ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12772ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12772ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12772ec3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12772ec9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772ecd jne 0x12773029 */
  if (!C.zf) goto L_12773029;
  /* 12772ed3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12772ed6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12772edc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12772ee2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12772ee5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12772eec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12772ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772ef8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12772efe push edx */
  push32((uint32_t)(EDX));
  /* 12772eff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772f02 push eax */
  push32((uint32_t)(EAX));
  /* 12772f03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772f06 push ecx */
  push32((uint32_t)(ECX));
  /* 12772f07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772f0a push edx */
  push32((uint32_t)(EDX));
  /* 12772f0b call 0x127742e0 */
  push32(0x12772f10u); f_127742e0();
  /* 12772f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772f13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12772f16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772f1a jne 0x12772faf */
  if (!C.zf) goto L_12772faf;
  /* 12772f20 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x12772f26u);
  /* 12772f26 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772f29 je 0x12772f30 */
  if (C.zf) goto L_12772f30;
  /* 12772f2b jmp 0x1277300d */
  goto L_1277300d;
L_12772f30:;
  /* 12772f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772f36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772f39 push eax */
  push32((uint32_t)(EAX));
  /* 12772f3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772f3d push ecx */
  push32((uint32_t)(ECX));
  /* 12772f3e call 0x127742e0 */
  push32(0x12772f43u); f_127742e0();
  /* 12772f43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772f46 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12772f4c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772f53 jne 0x12772f5a */
  if (!C.zf) goto L_12772f5a;
  /* 12772f55 jmp 0x1277300d */
  goto L_1277300d;
L_12772f5a:;
  /* 12772f5a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12772f5c push 0x1278cb0c */
  push32((uint32_t)(0x1278cb0cu));
  /* 12772f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772f63 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12772f69 push edx */
  push32((uint32_t)(EDX));
  /* 12772f6a call 0x12764d00 */
  push32(0x12772f6fu); f_12764d00();
  /* 12772f6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772f72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12772f75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772f79 jne 0x12772f80 */
  if (!C.zf) goto L_12772f80;
  /* 12772f7b jmp 0x1277300d */
  goto L_1277300d;
L_12772f80:;
  /* 12772f80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12772f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12772f89 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12772f8f push eax */
  push32((uint32_t)(EAX));
  /* 12772f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12772f94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12772f97 push edx */
  push32((uint32_t)(EDX));
  /* 12772f98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12772f9b push eax */
  push32((uint32_t)(EAX));
  /* 12772f9c call 0x127742e0 */
  push32(0x12772fa1u); f_127742e0();
  /* 12772fa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772fa4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12772fa7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772fab jne 0x12772faf */
  if (!C.zf) goto L_12772faf;
  /* 12772fad jmp 0x1277300d */
  goto L_1277300d;
L_12772faf:;
  /* 12772faf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12772fb1 push 0x1278cb0c */
  push32((uint32_t)(0x1278cb0cu));
  /* 12772fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772fb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12772fbb push ecx */
  push32((uint32_t)(ECX));
  /* 12772fbc call 0x12764d00 */
  push32(0x12772fc1u); f_12764d00();
  /* 12772fc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772fc4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12772fca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12772fcc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12772fd2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772fd5 jne 0x12772fd9 */
  if (!C.zf) goto L_12772fd9;
  /* 12772fd7 jmp 0x1277300d */
  goto L_1277300d;
L_12772fd9:;
  /* 12772fd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12772fdc push ecx */
  push32((uint32_t)(ECX));
  /* 12772fdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772fe0 push edx */
  push32((uint32_t)(EDX));
  /* 12772fe1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12772fe7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12772fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12772fea call 0x12768520 */
  push32(0x12772fefu); f_12768520();
  /* 12772fef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12772ff2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12772ff6 je 0x12773006 */
  if (C.zf) goto L_12773006;
  /* 12772ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12772ffa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12772ffd push edx */
  push32((uint32_t)(EDX));
  /* 12772ffe call 0x12765790 */
  push32(0x12773003u); f_12765790();
  /* 12773003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773006:;
  /* 12773006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773008 jmp 0x12773146 */
  goto L_12773146;
L_1277300d:;
  /* 1277300d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773011 je 0x12773021 */
  if (C.zf) goto L_12773021;
  /* 12773013 push 2 */
  push32((uint32_t)(0x2u));
  /* 12773015 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773018 push eax */
  push32((uint32_t)(EAX));
  /* 12773019 call 0x12765790 */
  push32(0x1277301eu); f_12765790();
  /* 1277301e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773021:;
  /* 12773021 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12773024 jmp 0x12773146 */
  goto L_12773146;
L_12773029:;
  /* 12773029 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277302d jne 0x12773143 */
  if (!C.zf) goto L_12773143;
  /* 12773033 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1277303d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12773040 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12773046 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773048 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1277304e push edx */
  push32((uint32_t)(EDX));
  /* 1277304f push 0x127908f0 */
  push32((uint32_t)(0x127908f0u));
  /* 12773054 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773057 push eax */
  push32((uint32_t)(EAX));
  /* 12773058 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277305b push ecx */
  push32((uint32_t)(ECX));
  /* 1277305c call 0x12774140 */
  push32(0x12773061u); f_12774140();
  /* 12773061 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12773066 jne 0x12773070 */
  if (!C.zf) goto L_12773070;
  /* 12773068 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277306b jmp 0x12773146 */
  goto L_12773146;
L_12773070:;
  /* 12773070 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12773076 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12773079 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12773083 jmp 0x12773094 */
  goto L_12773094;
L_12773085:;
  /* 12773085 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1277308b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277308e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12773094:;
  /* 12773094 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277309b jge 0x1277313f */
  if ((C.sf==C.of)) goto L_1277313f;
  /* 127730a1 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127730a8 jle 0x127730db */
  if ((C.zf||C.sf!=C.of)) goto L_127730db;
  /* 127730aa push 4 */
  push32((uint32_t)(0x4u));
  /* 127730ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127730b2 mov dl, byte ptr [ecx*2 + 0x127908f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x127908f0)));
  /* 127730b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127730bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127730c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127730ca push eax */
  push32((uint32_t)(EAX));
  /* 127730cb call 0x1276ad10 */
  push32(0x127730d0u); f_1276ad10();
  /* 127730d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127730d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 127730d9 jmp 0x1277310e */
  goto L_1277310e;
L_127730db:;
  /* 127730db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127730e1 mov dl, byte ptr [ecx*2 + 0x127908f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x127908f0)));
  /* 127730e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127730ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127730f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127730f9 mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 127730ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773101 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12773105 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12773108 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1277310e:;
  /* 1277310e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773115 je 0x12773138 */
  if (C.zf) goto L_12773138;
  /* 12773117 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1277311d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12773120 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773123 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1277312a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1277312e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12773134 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12773136 jmp 0x1277313a */
  goto L_1277313a;
L_12773138:;
  /* 12773138 jmp 0x1277313f */
  goto L_1277313f;
L_1277313a:;
  /* 1277313a jmp 0x12773085 */
  goto L_12773085;
L_1277313f:;
  /* 1277313f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773141 jmp 0x12773146 */
  goto L_12773146;
L_12773143:;
  /* 12773143 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12773146:;
  /* 12773146 mov esp, ebp */
  ESP = (EBP);
  /* 12773148 pop ebp */
  EBP = (pop32());
  /* 12773149 ret  */
  ESPCHK(0x12772ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x12773150 (10 bytes, 5 insns) */
void f_12773150(void) {
  FTRACE(0x12773150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773150 push ebp */
  push32((uint32_t)(EBP));
  /* 12773151 mov ebp, esp */
  EBP = (ESP);
  /* 12773153 mov eax, dword ptr [0x1278fd88] */
  EAX = (r32((uint32_t)(0x1278fd88)));
  /* 12773158 pop ebp */
  EBP = (pop32());
  /* 12773159 ret  */
  ESPCHK(0x12773150u, _esp0);
  ESP += 4; return;
}

/* FUN_10013160 @ 0x12773160 (575 bytes, 196 insns) */
void f_12773160(void) {
  FTRACE(0x12773160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773160 push ebp */
  push32((uint32_t)(EBP));
  /* 12773161 mov ebp, esp */
  EBP = (ESP);
  /* 12773163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12773165 push 0x1278cb18 */
  push32((uint32_t)(0x1278cb18u));
  /* 1277316a push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 1277316f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12773175 push eax */
  push32((uint32_t)(EAX));
  /* 12773176 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1277317d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773180 push ebx */
  push32((uint32_t)(EBX));
  /* 12773181 push esi */
  push32((uint32_t)(ESI));
  /* 12773182 push edi */
  push32((uint32_t)(EDI));
  /* 12773183 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12773186 cmp dword ptr [0x127908fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127908fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277318d jne 0x127731de */
  if (!C.zf) goto L_127731de;
  /* 1277318f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12773192 push eax */
  push32((uint32_t)(EAX));
  /* 12773193 push 1 */
  push32((uint32_t)(0x1u));
  /* 12773195 push 0x1278c24c */
  push32((uint32_t)(0x1278c24cu));
  /* 1277319a push 1 */
  push32((uint32_t)(0x1u));
  /* 1277319c call dword ptr [0x127932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f0))), 0x127731a2u);
  /* 127731a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127731a4 je 0x127731b2 */
  if (C.zf) goto L_127731b2;
  /* 127731a6 mov dword ptr [0x127908fc], 1 */
  w32((uint32_t)(0x127908fc), (0x1u));
  /* 127731b0 jmp 0x127731de */
  goto L_127731de;
L_127731b2:;
  /* 127731b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 127731b5 push ecx */
  push32((uint32_t)(ECX));
  /* 127731b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127731b8 push 0x1278c248 */
  push32((uint32_t)(0x1278c248u));
  /* 127731bd push 1 */
  push32((uint32_t)(0x1u));
  /* 127731bf push 0 */
  push32((uint32_t)(0x0u));
  /* 127731c1 call dword ptr [0x127932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f4))), 0x127731c7u);
  /* 127731c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127731c9 je 0x127731d7 */
  if (C.zf) goto L_127731d7;
  /* 127731cb mov dword ptr [0x127908fc], 2 */
  w32((uint32_t)(0x127908fc), (0x2u));
  /* 127731d5 jmp 0x127731de */
  goto L_127731de;
L_127731d7:;
  /* 127731d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127731d9 jmp 0x127733b9 */
  goto L_127733b9;
L_127731de:;
  /* 127731de cmp dword ptr [0x127908fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127908fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127731e5 jne 0x12773202 */
  if (!C.zf) goto L_12773202;
  /* 127731e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127731ea push edx */
  push32((uint32_t)(EDX));
  /* 127731eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127731ee push eax */
  push32((uint32_t)(EAX));
  /* 127731ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127731f2 push ecx */
  push32((uint32_t)(ECX));
  /* 127731f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127731f6 push edx */
  push32((uint32_t)(EDX));
  /* 127731f7 call dword ptr [0x127932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f0))), 0x127731fdu);
  /* 127731fd jmp 0x127733b9 */
  goto L_127733b9;
L_12773202:;
  /* 12773202 cmp dword ptr [0x127908fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127908fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773209 jne 0x127733b7 */
  if (!C.zf) goto L_127733b7;
  /* 1277320f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773213 jne 0x1277321d */
  if (!C.zf) goto L_1277321d;
  /* 12773215 mov eax, dword ptr [0x12790870] */
  EAX = (r32((uint32_t)(0x12790870)));
  /* 1277321a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1277321d:;
  /* 1277321d push 0 */
  push32((uint32_t)(0x0u));
  /* 1277321f push 0 */
  push32((uint32_t)(0x0u));
  /* 12773221 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773223 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773225 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773228 push ecx */
  push32((uint32_t)(ECX));
  /* 12773229 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277322c push edx */
  push32((uint32_t)(EDX));
  /* 1277322d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12773232 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12773235 push eax */
  push32((uint32_t)(EAX));
  /* 12773236 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x1277323cu);
  /* 1277323c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1277323f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773243 jne 0x1277324c */
  if (!C.zf) goto L_1277324c;
  /* 12773245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773247 jmp 0x127733b9 */
  goto L_127733b9;
L_1277324c:;
  /* 1277324c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12773253 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12773256 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773259 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1277325b call 0x12767ea0 */
  push32(0x12773260u); f_12767ea0();
  /* 12773260 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12773263 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12773266 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12773269 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1277326c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1277326f push edx */
  push32((uint32_t)(EDX));
  /* 12773270 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773272 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12773275 push eax */
  push32((uint32_t)(EAX));
  /* 12773276 call 0x12768a70 */
  push32(0x1277327bu); f_12768a70();
  /* 1277327b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277327e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12773285 jmp 0x1277329e */
  goto L_1277329e;
  /* 12773287 mov eax, 1 */
  EAX = (0x1u);
  /* 1277328c ret  */
  ESPCHK(0x12773160u, _esp0);
  ESP += 4; return;
  /* 1277328d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12773290 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12773297 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1277329e:;
  /* 1277329e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127732a2 jne 0x127732ab */
  if (!C.zf) goto L_127732ab;
  /* 127732a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127732a6 jmp 0x127733b9 */
  goto L_127733b9;
L_127732ab:;
  /* 127732ab push 0 */
  push32((uint32_t)(0x0u));
  /* 127732ad push 0 */
  push32((uint32_t)(0x0u));
  /* 127732af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127732b2 push ecx */
  push32((uint32_t)(ECX));
  /* 127732b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127732b6 push edx */
  push32((uint32_t)(EDX));
  /* 127732b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127732ba push eax */
  push32((uint32_t)(EAX));
  /* 127732bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127732be push ecx */
  push32((uint32_t)(ECX));
  /* 127732bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127732c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127732c7 push edx */
  push32((uint32_t)(EDX));
  /* 127732c8 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x127732ceu);
  /* 127732ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127732d0 jne 0x127732d9 */
  if (!C.zf) goto L_127732d9;
  /* 127732d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127732d4 jmp 0x127733b9 */
  goto L_127733b9;
L_127732d9:;
  /* 127732d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127732e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127732e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 127732e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127732ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127732ec call 0x12767ea0 */
  push32(0x127732f1u); f_12767ea0();
  /* 127732f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 127732f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127732f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127732fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127732fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12773304 jmp 0x1277331d */
  goto L_1277331d;
  /* 12773306 mov eax, 1 */
  EAX = (0x1u);
  /* 1277330b ret  */
  ESPCHK(0x12773160u, _esp0);
  ESP += 4; return;
  /* 1277330c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1277330f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12773316 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1277331d:;
  /* 1277331d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773321 jne 0x1277332a */
  if (!C.zf) goto L_1277332a;
  /* 12773323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773325 jmp 0x127733b9 */
  goto L_127733b9;
L_1277332a:;
  /* 1277332a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277332e jne 0x12773339 */
  if (!C.zf) goto L_12773339;
  /* 12773330 mov edx, dword ptr [0x12790860] */
  EDX = (r32((uint32_t)(0x12790860)));
  /* 12773336 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12773339:;
  /* 12773339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277333c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1277333f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12773345 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773348 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1277334b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12773352 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12773355 push ecx */
  push32((uint32_t)(ECX));
  /* 12773356 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12773359 push edx */
  push32((uint32_t)(EDX));
  /* 1277335a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1277335d push eax */
  push32((uint32_t)(EAX));
  /* 1277335e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773361 push ecx */
  push32((uint32_t)(ECX));
  /* 12773362 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12773365 push edx */
  push32((uint32_t)(EDX));
  /* 12773366 call dword ptr [0x127932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f4))), 0x1277336cu);
  /* 1277336c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1277336f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773372 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12773375 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773377 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1277337c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773382 je 0x12773398 */
  if (C.zf) goto L_12773398;
  /* 12773384 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773387 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1277338a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1277338c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12773390 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773396 je 0x1277339c */
  if (C.zf) goto L_1277339c;
L_12773398:;
  /* 12773398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277339a jmp 0x127733b9 */
  goto L_127733b9;
L_1277339c:;
  /* 1277339c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277339f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127733a1 push eax */
  push32((uint32_t)(EAX));
  /* 127733a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127733a5 push ecx */
  push32((uint32_t)(ECX));
  /* 127733a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127733a9 push edx */
  push32((uint32_t)(EDX));
  /* 127733aa call 0x1276cbf0 */
  push32(0x127733afu); f_1276cbf0();
  /* 127733af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127733b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127733b5 jmp 0x127733b9 */
  goto L_127733b9;
L_127733b7:;
  /* 127733b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127733b9:;
  /* 127733b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 127733bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127733bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127733c6 pop edi */
  EDI = (pop32());
  /* 127733c7 pop esi */
  ESI = (pop32());
  /* 127733c8 pop ebx */
  EBX = (pop32());
  /* 127733c9 mov esp, ebp */
  ESP = (EBP);
  /* 127733cb pop ebp */
  EBP = (pop32());
  /* 127733cc ret  */
  ESPCHK(0x12773160u, _esp0);
  ESP += 4; return;
}

/* FUN_100133d0 @ 0x127733d0 (208 bytes, 85 insns) */
void f_127733d0(void) {
  FTRACE(0x127733d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127733d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127733d1 mov ebp, esp */
  EBP = (ESP);
  /* 127733d3 push edi */
  push32((uint32_t)(EDI));
  /* 127733d4 push esi */
  push32((uint32_t)(ESI));
  /* 127733d5 push ebx */
  push32((uint32_t)(EBX));
  /* 127733d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127733d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127733dc lea eax, [0x12790858] */
  EAX = ((uint32_t)(0x12790858));
  /* 127733e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127733e6 jne 0x12773423 */
  if (!C.zf) goto L_12773423;
  /* 127733e8 mov al, 0xff */
  AL = (0xffu);
  /* 127733ea mov edi, edi */
  EDI = (EDI);
L_127733ec:;
  /* 127733ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127733ee je 0x1277341e */
  if (C.zf) goto L_1277341e;
  /* 127733f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127733f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127733f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 127733f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127733f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127733f8 je 0x127733ec */
  if (C.zf) goto L_127733ec;
  /* 127733fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127733fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127733fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12773400 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12773403 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12773405 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12773407 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12773409 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1277340b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1277340d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1277340f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12773412 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12773414 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12773416 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12773418 je 0x127733ec */
  if (C.zf) goto L_127733ec;
  /* 1277341a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1277341c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1277341e:;
  /* 1277341e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12773421 jmp 0x1277349b */
  goto L_1277349b;
L_12773423:;
  /* 12773423 lock inc dword ptr [0x127909ec] */
  x86_unimpl("lock inc @ 0x12773423");
  /* 1277342a cmp dword ptr [0x127909dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773431 jg 0x12773437 */
  if ((!C.zf&&C.sf==C.of)) goto L_12773437;
  /* 12773433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773435 jmp 0x1277344c */
  goto L_1277344c;
L_12773437:;
  /* 12773437 lock dec dword ptr [0x127909ec] */
  x86_unimpl("lock dec @ 0x12773437");
  /* 1277343e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12773440 call 0x12768700 */
  push32(0x12773445u); f_12768700();
  /* 12773445 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1277344c:;
  /* 1277344c mov eax, 0xff */
  EAX = (0xffu);
  /* 12773451 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12773453 nop  */
  /* nop */
L_12773454:;
  /* 12773454 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12773456 je 0x1277347f */
  if (C.zf) goto L_1277347f;
  /* 12773458 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1277345a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1277345b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1277345d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1277345e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12773460 je 0x12773454 */
  if (C.zf) goto L_12773454;
  /* 12773462 push eax */
  push32((uint32_t)(EAX));
  /* 12773463 push ebx */
  push32((uint32_t)(EBX));
  /* 12773464 call 0x12774540 */
  push32(0x12773469u); f_12774540();
  /* 12773469 mov ebx, eax */
  EBX = (EAX);
  /* 1277346b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277346e call 0x12774540 */
  push32(0x12773473u); f_12774540();
  /* 12773473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773476 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12773478 je 0x12773454 */
  if (C.zf) goto L_12773454;
  /* 1277347a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1277347c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1277347f:;
  /* 1277347f mov ebx, eax */
  EBX = (EAX);
  /* 12773481 pop eax */
  EAX = (pop32());
  /* 12773482 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773484 jne 0x1277348f */
  if (!C.zf) goto L_1277348f;
  /* 12773486 lock dec dword ptr [0x127909ec] */
  x86_unimpl("lock dec @ 0x12773486");
  /* 1277348d jmp 0x12773499 */
  goto L_12773499;
L_1277348f:;
  /* 1277348f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12773491 call 0x127687a0 */
  push32(0x12773496u); f_127687a0();
  /* 12773496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773499:;
  /* 12773499 mov eax, ebx */
  EAX = (EBX);
L_1277349b:;
  /* 1277349b pop ebx */
  EBX = (pop32());
  /* 1277349c pop esi */
  ESI = (pop32());
  /* 1277349d pop edi */
  EDI = (pop32());
  /* 1277349e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1277349f ret  */
  ESPCHK(0x127733d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x127734a0 (257 bytes, 103 insns) */
void f_127734a0(void) {
  FTRACE(0x127734a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127734a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127734a1 mov ebp, esp */
  EBP = (ESP);
  /* 127734a3 push edi */
  push32((uint32_t)(EDI));
  /* 127734a4 push esi */
  push32((uint32_t)(ESI));
  /* 127734a5 push ebx */
  push32((uint32_t)(EBX));
  /* 127734a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127734a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127734ab je 0x1277359a */
  if (C.zf) goto L_1277359a;
  /* 127734b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127734b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 127734b7 lea eax, [0x12790858] */
  EAX = ((uint32_t)(0x12790858));
  /* 127734bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127734c1 jne 0x12773511 */
  if (!C.zf) goto L_12773511;
  /* 127734c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 127734c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 127734c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 127734c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127734cc:;
  /* 127734cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 127734ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127734d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 127734d2 je 0x127734f5 */
  if (C.zf) goto L_127734f5;
  /* 127734d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127734d6 je 0x127734f5 */
  if (C.zf) goto L_127734f5;
  /* 127734d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127734d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127734da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734dc jb 0x127734e4 */
  if (C.cf) goto L_127734e4;
  /* 127734de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734e0 ja 0x127734e4 */
  if ((!C.cf&&!C.zf)) goto L_127734e4;
  /* 127734e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_127734e4:;
  /* 127734e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734e6 jb 0x127734ee */
  if (C.cf) goto L_127734ee;
  /* 127734e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734ea ja 0x127734ee */
  if ((!C.cf&&!C.zf)) goto L_127734ee;
  /* 127734ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_127734ee:;
  /* 127734ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734f0 jne 0x127734ff */
  if (!C.zf) goto L_127734ff;
  /* 127734f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127734f3 jne 0x127734cc */
  if (!C.zf) goto L_127734cc;
L_127734f5:;
  /* 127734f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127734f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127734f9 je 0x1277359a */
  if (C.zf) goto L_1277359a;
L_127734ff:;
  /* 127734ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12773504 jb 0x1277359a */
  if (C.cf) goto L_1277359a;
  /* 1277350a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1277350c jmp 0x1277359a */
  goto L_1277359a;
L_12773511:;
  /* 12773511 lock inc dword ptr [0x127909ec] */
  x86_unimpl("lock inc @ 0x12773511");
  /* 12773518 cmp dword ptr [0x127909dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277351f jg 0x12773525 */
  if ((!C.zf&&C.sf==C.of)) goto L_12773525;
  /* 12773521 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773523 jmp 0x1277353e */
  goto L_1277353e;
L_12773525:;
  /* 12773525 lock dec dword ptr [0x127909ec] */
  x86_unimpl("lock dec @ 0x12773525");
  /* 1277352c mov ebx, ecx */
  EBX = (ECX);
  /* 1277352e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12773530 call 0x12768700 */
  push32(0x12773535u); f_12768700();
  /* 12773535 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1277353c mov ecx, ebx */
  ECX = (EBX);
L_1277353e:;
  /* 1277353e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773540 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12773542 mov edi, edi */
  EDI = (EDI);
L_12773544:;
  /* 12773544 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12773546 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773548 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1277354a je 0x1277356f */
  if (C.zf) goto L_1277356f;
  /* 1277354c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1277354e je 0x1277356f */
  if (C.zf) goto L_1277356f;
  /* 12773550 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12773551 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12773552 push ecx */
  push32((uint32_t)(ECX));
  /* 12773553 push eax */
  push32((uint32_t)(EAX));
  /* 12773554 push ebx */
  push32((uint32_t)(EBX));
  /* 12773555 call 0x12774540 */
  push32(0x1277355au); f_12774540();
  /* 1277355a mov ebx, eax */
  EBX = (EAX);
  /* 1277355c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277355f call 0x12774540 */
  push32(0x12773564u); f_12774540();
  /* 12773564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773567 pop ecx */
  ECX = (pop32());
  /* 12773568 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277356a jne 0x12773575 */
  if (!C.zf) goto L_12773575;
  /* 1277356c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1277356d jne 0x12773544 */
  if (!C.zf) goto L_12773544;
L_1277356f:;
  /* 1277356f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773571 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773573 je 0x1277357e */
  if (C.zf) goto L_1277357e;
L_12773575:;
  /* 12773575 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1277357a jb 0x1277357e */
  if (C.cf) goto L_1277357e;
  /* 1277357c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1277357e:;
  /* 1277357e pop eax */
  EAX = (pop32());
  /* 1277357f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773581 jne 0x1277358c */
  if (!C.zf) goto L_1277358c;
  /* 12773583 lock dec dword ptr [0x127909ec] */
  x86_unimpl("lock dec @ 0x12773583");
  /* 1277358a jmp 0x1277359a */
  goto L_1277359a;
L_1277358c:;
  /* 1277358c mov ebx, ecx */
  EBX = (ECX);
  /* 1277358e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12773590 call 0x127687a0 */
  push32(0x12773595u); f_127687a0();
  /* 12773595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773598 mov ecx, ebx */
  ECX = (EBX);
L_1277359a:;
  /* 1277359a mov eax, ecx */
  EAX = (ECX);
  /* 1277359c pop ebx */
  EBX = (pop32());
  /* 1277359d pop esi */
  ESI = (pop32());
  /* 1277359e pop edi */
  EDI = (pop32());
  /* 1277359f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127735a0 ret  */
  ESPCHK(0x127734a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x127735b0 (255 bytes, 88 insns) */
void f_127735b0(void) {
  FTRACE(0x127735b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127735b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127735b1 mov ebp, esp */
  EBP = (ESP);
  /* 127735b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127735b6:;
  /* 127735b6 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127735bd jle 0x127735d6 */
  if ((C.zf||C.sf!=C.of)) goto L_127735d6;
  /* 127735bf push 8 */
  push32((uint32_t)(0x8u));
  /* 127735c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127735c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127735c6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127735c8 push ecx */
  push32((uint32_t)(ECX));
  /* 127735c9 call 0x1276ad10 */
  push32(0x127735ceu); f_1276ad10();
  /* 127735ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127735d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127735d4 jmp 0x127735ef */
  goto L_127735ef;
L_127735d6:;
  /* 127735d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127735d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127735db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127735dd mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 127735e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127735e5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127735e9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127735ec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127735ef:;
  /* 127735ef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127735f3 je 0x12773600 */
  if (C.zf) goto L_12773600;
  /* 127735f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127735f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127735fb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127735fe jmp 0x127735b6 */
  goto L_127735b6;
L_12773600:;
  /* 12773600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773603 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773605 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12773607 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1277360a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277360d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773610 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12773613 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12773619 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277361d je 0x12773625 */
  if (C.zf) goto L_12773625;
  /* 1277361f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773623 jne 0x12773638 */
  if (!C.zf) goto L_12773638;
L_12773625:;
  /* 12773625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277362a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1277362c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1277362f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773635 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12773638:;
  /* 12773638 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1277363f:;
  /* 1277363f cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773646 jle 0x1277365b */
  if ((C.zf||C.sf!=C.of)) goto L_1277365b;
  /* 12773648 push 4 */
  push32((uint32_t)(0x4u));
  /* 1277364a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277364d push edx */
  push32((uint32_t)(EDX));
  /* 1277364e call 0x1276ad10 */
  push32(0x12773653u); f_1276ad10();
  /* 12773653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773656 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12773659 jmp 0x12773670 */
  goto L_12773670;
L_1277365b:;
  /* 1277365b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277365e mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 12773664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773666 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1277366a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1277366d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12773670:;
  /* 12773670 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773674 je 0x1277369b */
  if (C.zf) goto L_1277369b;
  /* 12773676 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12773679 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277367c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277367f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12773683 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12773686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773689 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1277368b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1277368d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12773690 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773693 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773696 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12773699 jmp 0x1277363f */
  goto L_1277363f;
L_1277369b:;
  /* 1277369b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277369f jne 0x127736a8 */
  if (!C.zf) goto L_127736a8;
  /* 127736a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127736a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127736a6 jmp 0x127736ab */
  goto L_127736ab;
L_127736a8:;
  /* 127736a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127736ab:;
  /* 127736ab mov esp, ebp */
  ESP = (EBP);
  /* 127736ad pop ebp */
  EBP = (pop32());
  /* 127736ae ret  */
  ESPCHK(0x127735b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x127736b0 (17 bytes, 8 insns) */
void f_127736b0(void) {
  FTRACE(0x127736b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127736b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127736b1 mov ebp, esp */
  EBP = (ESP);
  /* 127736b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127736b6 push eax */
  push32((uint32_t)(EAX));
  /* 127736b7 call 0x127735b0 */
  push32(0x127736bcu); f_127735b0();
  /* 127736bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127736bf pop ebp */
  EBP = (pop32());
  /* 127736c0 ret  */
  ESPCHK(0x127736b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136d0 @ 0x127736d0 (297 bytes, 106 insns) */
void f_127736d0(void) {
  FTRACE(0x127736d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127736d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127736d1 mov ebp, esp */
  EBP = (ESP);
  /* 127736d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127736d6 push esi */
  push32((uint32_t)(ESI));
L_127736d7:;
  /* 127736d7 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127736de jle 0x127736f7 */
  if ((C.zf||C.sf!=C.of)) goto L_127736f7;
  /* 127736e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 127736e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127736e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127736e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127736e9 push ecx */
  push32((uint32_t)(ECX));
  /* 127736ea call 0x1276ad10 */
  push32(0x127736efu); f_1276ad10();
  /* 127736ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127736f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127736f5 jmp 0x12773710 */
  goto L_12773710;
L_127736f7:;
  /* 127736f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127736fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127736fc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127736fe mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 12773704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773706 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1277370a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1277370d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12773710:;
  /* 12773710 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773714 je 0x12773721 */
  if (C.zf) goto L_12773721;
  /* 12773716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277371c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1277371f jmp 0x127736d7 */
  goto L_127736d7;
L_12773721:;
  /* 12773721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12773728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1277372b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277372e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773731 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12773734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773737 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1277373a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277373e je 0x12773746 */
  if (C.zf) goto L_12773746;
  /* 12773740 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773744 jne 0x12773759 */
  if (!C.zf) goto L_12773759;
L_12773746:;
  /* 12773746 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277374b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1277374d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12773750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773753 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773756 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12773759:;
  /* 12773759 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12773760 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12773767:;
  /* 12773767 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277376e jle 0x12773783 */
  if ((C.zf||C.sf!=C.of)) goto L_12773783;
  /* 12773770 push 4 */
  push32((uint32_t)(0x4u));
  /* 12773772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773775 push edx */
  push32((uint32_t)(EDX));
  /* 12773776 call 0x1276ad10 */
  push32(0x1277377bu); f_1276ad10();
  /* 1277377b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277377e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12773781 jmp 0x12773798 */
  goto L_12773798;
L_12773783:;
  /* 12773783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773786 mov ecx, dword ptr [0x1278ec98] */
  ECX = (r32((uint32_t)(0x1278ec98)));
  /* 1277378c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1277378e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12773792 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12773795 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12773798:;
  /* 12773798 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277379c je 0x127737d9 */
  if (C.zf) goto L_127737d9;
  /* 1277379e push 0 */
  push32((uint32_t)(0x0u));
  /* 127737a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 127737a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127737a5 push eax */
  push32((uint32_t)(EAX));
  /* 127737a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127737a9 push ecx */
  push32((uint32_t)(ECX));
  /* 127737aa call 0x12774670 */
  push32(0x127737afu); f_12774670();
  /* 127737af mov ecx, eax */
  ECX = (EAX);
  /* 127737b1 mov esi, edx */
  ESI = (EDX);
  /* 127737b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127737b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127737b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127737ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127737bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127737be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127737c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 127737c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127737c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127737c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127737cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127737ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127737d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127737d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127737d7 jmp 0x12773767 */
  goto L_12773767;
L_127737d9:;
  /* 127737d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127737dd jne 0x127737ee */
  if (!C.zf) goto L_127737ee;
  /* 127737df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127737e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127737e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127737e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127737ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127737ec jmp 0x127737f4 */
  goto L_127737f4;
L_127737ee:;
  /* 127737ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127737f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_127737f4:;
  /* 127737f4 pop esi */
  ESI = (pop32());
  /* 127737f5 mov esp, ebp */
  ESP = (EBP);
  /* 127737f7 pop ebp */
  EBP = (pop32());
  /* 127737f8 ret  */
  ESPCHK(0x127736d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x12773800 (61 bytes, 18 insns) */
void f_12773800(void) {
  FTRACE(0x12773800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773800 push ebp */
  push32((uint32_t)(EBP));
  /* 12773801 mov ebp, esp */
  EBP = (ESP);
  /* 12773803 cmp dword ptr [0x127909b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277380a jne 0x1277383b */
  if (!C.zf) goto L_1277383b;
  /* 1277380c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1277380e call 0x12768700 */
  push32(0x12773813u); f_12768700();
  /* 12773813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773816 cmp dword ptr [0x127909b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277381d jne 0x12773831 */
  if (!C.zf) goto L_12773831;
  /* 1277381f call 0x12773860 */
  push32(0x12773824u); f_12773860();
  /* 12773824 mov eax, dword ptr [0x127909b8] */
  EAX = (r32((uint32_t)(0x127909b8)));
  /* 12773829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277382c mov dword ptr [0x127909b8], eax */
  w32((uint32_t)(0x127909b8), (EAX));
L_12773831:;
  /* 12773831 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12773833 call 0x127687a0 */
  push32(0x12773838u); f_127687a0();
  /* 12773838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1277383b:;
  /* 1277383b pop ebp */
  EBP = (pop32());
  /* 1277383c ret  */
  ESPCHK(0x12773800u, _esp0);
  ESP += 4; return;
}

/* FUN_10013840 @ 0x12773840 (30 bytes, 11 insns) */
void f_12773840(void) {
  FTRACE(0x12773840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773840 push ebp */
  push32((uint32_t)(EBP));
  /* 12773841 mov ebp, esp */
  EBP = (ESP);
  /* 12773843 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12773845 call 0x12768700 */
  push32(0x1277384au); f_12768700();
  /* 1277384a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277384d call 0x12773860 */
  push32(0x12773852u); f_12773860();
  /* 12773852 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12773854 call 0x127687a0 */
  push32(0x12773859u); f_127687a0();
  /* 12773859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277385c pop ebp */
  EBP = (pop32());
  /* 1277385d ret  */
  ESPCHK(0x12773840u, _esp0);
  ESP += 4; return;
}

/* FUN_10013860 @ 0x12773860 (939 bytes, 266 insns) */
void f_12773860(void) {
  FTRACE(0x12773860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773860 push ebp */
  push32((uint32_t)(EBP));
  /* 12773861 mov ebp, esp */
  EBP = (ESP);
  /* 12773863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1277386d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1277386f call 0x12768700 */
  push32(0x12773874u); f_12768700();
  /* 12773874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773877 mov dword ptr [0x12790900], 0 */
  w32((uint32_t)(0x12790900), (0x0u));
  /* 12773881 mov dword ptr [0x1278fe38], 0xffffffff */
  w32((uint32_t)(0x1278fe38), (0xffffffffu));
  /* 1277388b mov eax, dword ptr [0x1278fe38] */
  EAX = (r32((uint32_t)(0x1278fe38)));
  /* 12773890 mov dword ptr [0x1278fe28], eax */
  w32((uint32_t)(0x1278fe28), (EAX));
  /* 12773895 push 0x1278cb78 */
  push32((uint32_t)(0x1278cb78u));
  /* 1277389a call 0x127746e0 */
  push32(0x1277389fu); f_127746e0();
  /* 1277389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127738a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127738a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127738a9 jne 0x127739e3 */
  if (!C.zf) goto L_127739e3;
  /* 127738af push 0xc */
  push32((uint32_t)(0xcu));
  /* 127738b1 call 0x127687a0 */
  push32(0x127738b6u); f_127687a0();
  /* 127738b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127738b9 push 0x12790908 */
  push32((uint32_t)(0x12790908u));
  /* 127738be call dword ptr [0x127932b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b4))), 0x127738c4u);
  /* 127738c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127738c7 je 0x127739de */
  if (C.zf) goto L_127739de;
  /* 127738cd mov dword ptr [0x12790900], 1 */
  w32((uint32_t)(0x12790900), (0x1u));
  /* 127738d7 mov ecx, dword ptr [0x12790908] */
  ECX = (r32((uint32_t)(0x12790908)));
  /* 127738dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127738e0 mov dword ptr [0x1278fd90], ecx */
  w32((uint32_t)(0x1278fd90), (ECX));
  /* 127738e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127738e8 mov dx, word ptr [0x1279094e] */
  DX = (r16((uint32_t)(0x1279094e)));
  /* 127738ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127738f1 je 0x12773909 */
  if (C.zf) goto L_12773909;
  /* 127738f3 mov eax, dword ptr [0x1279095c] */
  EAX = (r32((uint32_t)(0x1279095c)));
  /* 127738f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127738fb mov ecx, dword ptr [0x1278fd90] */
  ECX = (r32((uint32_t)(0x1278fd90)));
  /* 12773901 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773903 mov dword ptr [0x1278fd90], ecx */
  w32((uint32_t)(0x1278fd90), (ECX));
L_12773909:;
  /* 12773909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1277390b mov dx, word ptr [0x127909a2] */
  DX = (r16((uint32_t)(0x127909a2)));
  /* 12773912 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12773914 je 0x1277393e */
  if (C.zf) goto L_1277393e;
  /* 12773916 cmp dword ptr [0x127909b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277391d je 0x1277393e */
  if (C.zf) goto L_1277393e;
  /* 1277391f mov dword ptr [0x1278fd94], 1 */
  w32((uint32_t)(0x1278fd94), (0x1u));
  /* 12773929 mov eax, dword ptr [0x127909b0] */
  EAX = (r32((uint32_t)(0x127909b0)));
  /* 1277392e sub eax, dword ptr [0x1279095c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279095c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773934 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773937 mov dword ptr [0x1278fd98], eax */
  w32((uint32_t)(0x1278fd98), (EAX));
  /* 1277393c jmp 0x12773952 */
  goto L_12773952;
L_1277393e:;
  /* 1277393e mov dword ptr [0x1278fd94], 0 */
  w32((uint32_t)(0x1278fd94), (0x0u));
  /* 12773948 mov dword ptr [0x1278fd98], 0 */
  w32((uint32_t)(0x1278fd98), (0x0u));
L_12773952:;
  /* 12773952 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12773955 push ecx */
  push32((uint32_t)(ECX));
  /* 12773956 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773958 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1277395a mov edx, dword ptr [0x1278fe1c] */
  EDX = (r32((uint32_t)(0x1278fe1c)));
  /* 12773960 push edx */
  push32((uint32_t)(EDX));
  /* 12773961 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12773963 push 0x1279090c */
  push32((uint32_t)(0x1279090cu));
  /* 12773968 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1277396d mov eax, dword ptr [0x12790870] */
  EAX = (r32((uint32_t)(0x12790870)));
  /* 12773972 push eax */
  push32((uint32_t)(EAX));
  /* 12773973 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12773979u);
  /* 12773979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277397b je 0x1277398f */
  if (C.zf) goto L_1277398f;
  /* 1277397d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773981 jne 0x1277398f */
  if (!C.zf) goto L_1277398f;
  /* 12773983 mov ecx, dword ptr [0x1278fe1c] */
  ECX = (r32((uint32_t)(0x1278fe1c)));
  /* 12773989 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1277398d jmp 0x12773998 */
  goto L_12773998;
L_1277398f:;
  /* 1277398f mov edx, dword ptr [0x1278fe1c] */
  EDX = (r32((uint32_t)(0x1278fe1c)));
  /* 12773995 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12773998:;
  /* 12773998 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1277399b push eax */
  push32((uint32_t)(EAX));
  /* 1277399c push 0 */
  push32((uint32_t)(0x0u));
  /* 1277399e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127739a0 mov ecx, dword ptr [0x1278fe20] */
  ECX = (r32((uint32_t)(0x1278fe20)));
  /* 127739a6 push ecx */
  push32((uint32_t)(ECX));
  /* 127739a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127739a9 push 0x12790960 */
  push32((uint32_t)(0x12790960u));
  /* 127739ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127739b3 mov edx, dword ptr [0x12790870] */
  EDX = (r32((uint32_t)(0x12790870)));
  /* 127739b9 push edx */
  push32((uint32_t)(EDX));
  /* 127739ba call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x127739c0u);
  /* 127739c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127739c2 je 0x127739d5 */
  if (C.zf) goto L_127739d5;
  /* 127739c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127739c8 jne 0x127739d5 */
  if (!C.zf) goto L_127739d5;
  /* 127739ca mov eax, dword ptr [0x1278fe20] */
  EAX = (r32((uint32_t)(0x1278fe20)));
  /* 127739cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 127739d3 jmp 0x127739de */
  goto L_127739de;
L_127739d5:;
  /* 127739d5 mov ecx, dword ptr [0x1278fe20] */
  ECX = (r32((uint32_t)(0x1278fe20)));
  /* 127739db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_127739de:;
  /* 127739de jmp 0x12773c07 */
  goto L_12773c07;
L_127739e3:;
  /* 127739e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127739e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127739e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127739eb je 0x12773a0d */
  if (C.zf) goto L_12773a0d;
  /* 127739ed cmp dword ptr [0x127909b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127739f4 je 0x12773a1c */
  if (C.zf) goto L_12773a1c;
  /* 127739f6 mov ecx, dword ptr [0x127909b4] */
  ECX = (r32((uint32_t)(0x127909b4)));
  /* 127739fc push ecx */
  push32((uint32_t)(ECX));
  /* 127739fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773a00 push edx */
  push32((uint32_t)(EDX));
  /* 12773a01 call 0x12770990 */
  push32(0x12773a06u); f_12770990();
  /* 12773a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12773a0b jne 0x12773a1c */
  if (!C.zf) goto L_12773a1c;
L_12773a0d:;
  /* 12773a0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12773a0f call 0x127687a0 */
  push32(0x12773a14u); f_127687a0();
  /* 12773a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a17 jmp 0x12773c07 */
  goto L_12773c07;
L_12773a1c:;
  /* 12773a1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12773a1e mov eax, dword ptr [0x127909b4] */
  EAX = (r32((uint32_t)(0x127909b4)));
  /* 12773a23 push eax */
  push32((uint32_t)(EAX));
  /* 12773a24 call 0x12765790 */
  push32(0x12773a29u); f_12765790();
  /* 12773a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a2c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12773a31 push 0x1278cb70 */
  push32((uint32_t)(0x1278cb70u));
  /* 12773a36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12773a38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773a3b push ecx */
  push32((uint32_t)(ECX));
  /* 12773a3c call 0x12767b30 */
  push32(0x12773a41u); f_12767b30();
  /* 12773a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a47 push eax */
  push32((uint32_t)(EAX));
  /* 12773a48 call 0x12764d00 */
  push32(0x12773a4du); f_12764d00();
  /* 12773a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a50 mov dword ptr [0x127909b4], eax */
  w32((uint32_t)(0x127909b4), (EAX));
  /* 12773a55 cmp dword ptr [0x127909b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773a5c jne 0x12773a6d */
  if (!C.zf) goto L_12773a6d;
  /* 12773a5e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12773a60 call 0x127687a0 */
  push32(0x12773a65u); f_127687a0();
  /* 12773a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a68 jmp 0x12773c07 */
  goto L_12773c07;
L_12773a6d:;
  /* 12773a6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773a70 push edx */
  push32((uint32_t)(EDX));
  /* 12773a71 mov eax, dword ptr [0x127909b4] */
  EAX = (r32((uint32_t)(0x127909b4)));
  /* 12773a76 push eax */
  push32((uint32_t)(EAX));
  /* 12773a77 call 0x12767cb0 */
  push32(0x12773a7cu); f_12767cb0();
  /* 12773a7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12773a81 call 0x127687a0 */
  push32(0x12773a86u); f_127687a0();
  /* 12773a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a89 push 3 */
  push32((uint32_t)(0x3u));
  /* 12773a8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773a8e push ecx */
  push32((uint32_t)(ECX));
  /* 12773a8f mov edx, dword ptr [0x1278fe1c] */
  EDX = (r32((uint32_t)(0x1278fe1c)));
  /* 12773a95 push edx */
  push32((uint32_t)(EDX));
  /* 12773a96 call 0x12768520 */
  push32(0x12773a9bu); f_12768520();
  /* 12773a9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773a9e mov eax, dword ptr [0x1278fe1c] */
  EAX = (r32((uint32_t)(0x1278fe1c)));
  /* 12773aa3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12773aa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773aaa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773aad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12773ab0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773ab3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12773ab6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773ab9 jne 0x12773acd */
  if (!C.zf) goto L_12773acd;
  /* 12773abb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773abe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773ac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12773ac4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773ac7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773aca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12773acd:;
  /* 12773acd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12773ad1 call 0x127735b0 */
  push32(0x12773ad6u); f_127735b0();
  /* 12773ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773ad9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773adf mov dword ptr [0x1278fd90], eax */
  w32((uint32_t)(0x1278fd90), (EAX));
L_12773ae4:;
  /* 12773ae4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773ae7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12773aea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773aed je 0x12773b05 */
  if (C.zf) goto L_12773b05;
  /* 12773aef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773af2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12773af5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773af8 jl 0x12773b10 */
  if ((C.sf!=C.of)) goto L_12773b10;
  /* 12773afa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773afd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12773b00 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b03 jg 0x12773b10 */
  if ((!C.zf&&C.sf==C.of)) goto L_12773b10;
L_12773b05:;
  /* 12773b05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12773b0e jmp 0x12773ae4 */
  goto L_12773ae4;
L_12773b10:;
  /* 12773b10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b13 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12773b16 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b19 jne 0x12773bb5 */
  if (!C.zf) goto L_12773bb5;
  /* 12773b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12773b28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b2b push edx */
  push32((uint32_t)(EDX));
  /* 12773b2c call 0x127735b0 */
  push32(0x12773b31u); f_127735b0();
  /* 12773b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773b37 mov ecx, dword ptr [0x1278fd90] */
  ECX = (r32((uint32_t)(0x1278fd90)));
  /* 12773b3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b3f mov dword ptr [0x1278fd90], ecx */
  w32((uint32_t)(0x1278fd90), (ECX));
L_12773b45:;
  /* 12773b45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b48 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12773b4b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b4e jl 0x12773b66 */
  if ((C.sf!=C.of)) goto L_12773b66;
  /* 12773b50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12773b56 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b59 jg 0x12773b66 */
  if ((!C.zf&&C.sf==C.of)) goto L_12773b66;
  /* 12773b5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b61 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12773b64 jmp 0x12773b45 */
  goto L_12773b45;
L_12773b66:;
  /* 12773b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b69 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12773b6c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b6f jne 0x12773bb5 */
  if (!C.zf) goto L_12773bb5;
  /* 12773b71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b77 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12773b7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12773b7e call 0x127735b0 */
  push32(0x12773b83u); f_127735b0();
  /* 12773b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b86 mov edx, dword ptr [0x1278fd90] */
  EDX = (r32((uint32_t)(0x1278fd90)));
  /* 12773b8c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773b8e mov dword ptr [0x1278fd90], edx */
  w32((uint32_t)(0x1278fd90), (EDX));
L_12773b94:;
  /* 12773b94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773b97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12773b9a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773b9d jl 0x12773bb5 */
  if ((C.sf!=C.of)) goto L_12773bb5;
  /* 12773b9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773ba2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12773ba5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773ba8 jg 0x12773bb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12773bb5;
  /* 12773baa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773bad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773bb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12773bb3 jmp 0x12773b94 */
  goto L_12773b94;
L_12773bb5:;
  /* 12773bb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773bb9 je 0x12773bc9 */
  if (C.zf) goto L_12773bc9;
  /* 12773bbb mov edx, dword ptr [0x1278fd90] */
  EDX = (r32((uint32_t)(0x1278fd90)));
  /* 12773bc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12773bc3 mov dword ptr [0x1278fd90], edx */
  w32((uint32_t)(0x1278fd90), (EDX));
L_12773bc9:;
  /* 12773bc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773bcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12773bcf mov dword ptr [0x1278fd94], ecx */
  w32((uint32_t)(0x1278fd94), (ECX));
  /* 12773bd5 cmp dword ptr [0x1278fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1278fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773bdc je 0x12773bfe */
  if (C.zf) goto L_12773bfe;
  /* 12773bde push 3 */
  push32((uint32_t)(0x3u));
  /* 12773be0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773be3 push edx */
  push32((uint32_t)(EDX));
  /* 12773be4 mov eax, dword ptr [0x1278fe20] */
  EAX = (r32((uint32_t)(0x1278fe20)));
  /* 12773be9 push eax */
  push32((uint32_t)(EAX));
  /* 12773bea call 0x12768520 */
  push32(0x12773befu); f_12768520();
  /* 12773bef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773bf2 mov ecx, dword ptr [0x1278fe20] */
  ECX = (r32((uint32_t)(0x1278fe20)));
  /* 12773bf8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12773bfc jmp 0x12773c07 */
  goto L_12773c07;
L_12773bfe:;
  /* 12773bfe mov edx, dword ptr [0x1278fe20] */
  EDX = (r32((uint32_t)(0x1278fe20)));
  /* 12773c04 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12773c07:;
  /* 12773c07 mov esp, ebp */
  ESP = (EBP);
  /* 12773c09 pop ebp */
  EBP = (pop32());
  /* 12773c0a ret  */
  ESPCHK(0x12773860u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x12773c10 (46 bytes, 18 insns) */
void f_12773c10(void) {
  FTRACE(0x12773c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12773c11 mov ebp, esp */
  EBP = (ESP);
  /* 12773c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12773c14 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12773c16 call 0x12768700 */
  push32(0x12773c1bu); f_12768700();
  /* 12773c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773c21 push eax */
  push32((uint32_t)(EAX));
  /* 12773c22 call 0x12773c40 */
  push32(0x12773c27u); f_12773c40();
  /* 12773c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12773c2d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12773c2f call 0x127687a0 */
  push32(0x12773c34u); f_127687a0();
  /* 12773c34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773c37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773c3a mov esp, ebp */
  ESP = (EBP);
  /* 12773c3c pop ebp */
  EBP = (pop32());
  /* 12773c3d ret  */
  ESPCHK(0x12773c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x12773c40 (762 bytes, 246 insns) */
void f_12773c40(void) {
  FTRACE(0x12773c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12773c41 mov ebp, esp */
  EBP = (ESP);
  /* 12773c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12773c44 cmp dword ptr [0x1278fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1278fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773c4b jne 0x12773c54 */
  if (!C.zf) goto L_12773c54;
  /* 12773c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773c4f jmp 0x12773f36 */
  goto L_12773f36;
L_12773c54:;
  /* 12773c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773c57 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12773c5a cmp ecx, dword ptr [0x1278fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773c60 jne 0x12773c74 */
  if (!C.zf) goto L_12773c74;
  /* 12773c62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773c65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12773c68 cmp eax, dword ptr [0x1278fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773c6e je 0x12773e3b */
  if (C.zf) goto L_12773e3b;
L_12773c74:;
  /* 12773c74 cmp dword ptr [0x12790900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773c7b je 0x12773df5 */
  if (C.zf) goto L_12773df5;
  /* 12773c81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773c83 mov cx, word ptr [0x127909a0] */
  CX = (r16((uint32_t)(0x127909a0)));
  /* 12773c8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12773c8c jne 0x12773ce9 */
  if (!C.zf) goto L_12773ce9;
  /* 12773c8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773c90 mov dx, word ptr [0x127909ae] */
  DX = (r16((uint32_t)(0x127909ae)));
  /* 12773c97 push edx */
  push32((uint32_t)(EDX));
  /* 12773c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773c9a mov ax, word ptr [0x127909ac] */
  AX = (r16((uint32_t)(0x127909ac)));
  /* 12773ca0 push eax */
  push32((uint32_t)(EAX));
  /* 12773ca1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773ca3 mov cx, word ptr [0x127909aa] */
  CX = (r16((uint32_t)(0x127909aa)));
  /* 12773caa push ecx */
  push32((uint32_t)(ECX));
  /* 12773cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773cad mov dx, word ptr [0x127909a8] */
  DX = (r16((uint32_t)(0x127909a8)));
  /* 12773cb4 push edx */
  push32((uint32_t)(EDX));
  /* 12773cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773cb9 mov ax, word ptr [0x127909a4] */
  AX = (r16((uint32_t)(0x127909a4)));
  /* 12773cbf push eax */
  push32((uint32_t)(EAX));
  /* 12773cc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773cc2 mov cx, word ptr [0x127909a6] */
  CX = (r16((uint32_t)(0x127909a6)));
  /* 12773cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12773cca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773ccc mov dx, word ptr [0x127909a2] */
  DX = (r16((uint32_t)(0x127909a2)));
  /* 12773cd3 push edx */
  push32((uint32_t)(EDX));
  /* 12773cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773cd7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12773cda push ecx */
  push32((uint32_t)(ECX));
  /* 12773cdb push 1 */
  push32((uint32_t)(0x1u));
  /* 12773cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12773cdf call 0x12773f40 */
  push32(0x12773ce4u); f_12773f40();
  /* 12773ce4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773ce7 jmp 0x12773d3a */
  goto L_12773d3a;
L_12773ce9:;
  /* 12773ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773ceb mov dx, word ptr [0x127909ae] */
  DX = (r16((uint32_t)(0x127909ae)));
  /* 12773cf2 push edx */
  push32((uint32_t)(EDX));
  /* 12773cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773cf5 mov ax, word ptr [0x127909ac] */
  AX = (r16((uint32_t)(0x127909ac)));
  /* 12773cfb push eax */
  push32((uint32_t)(EAX));
  /* 12773cfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773cfe mov cx, word ptr [0x127909aa] */
  CX = (r16((uint32_t)(0x127909aa)));
  /* 12773d05 push ecx */
  push32((uint32_t)(ECX));
  /* 12773d06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773d08 mov dx, word ptr [0x127909a8] */
  DX = (r16((uint32_t)(0x127909a8)));
  /* 12773d0f push edx */
  push32((uint32_t)(EDX));
  /* 12773d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773d12 mov ax, word ptr [0x127909a6] */
  AX = (r16((uint32_t)(0x127909a6)));
  /* 12773d18 push eax */
  push32((uint32_t)(EAX));
  /* 12773d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12773d1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773d1f mov cx, word ptr [0x127909a2] */
  CX = (r16((uint32_t)(0x127909a2)));
  /* 12773d26 push ecx */
  push32((uint32_t)(ECX));
  /* 12773d27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773d2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12773d2d push eax */
  push32((uint32_t)(EAX));
  /* 12773d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12773d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12773d32 call 0x12773f40 */
  push32(0x12773d37u); f_12773f40();
  /* 12773d37 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773d3a:;
  /* 12773d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773d3c mov cx, word ptr [0x1279094c] */
  CX = (r16((uint32_t)(0x1279094c)));
  /* 12773d43 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12773d45 jne 0x12773da2 */
  if (!C.zf) goto L_12773da2;
  /* 12773d47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773d49 mov dx, word ptr [0x1279095a] */
  DX = (r16((uint32_t)(0x1279095a)));
  /* 12773d50 push edx */
  push32((uint32_t)(EDX));
  /* 12773d51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773d53 mov ax, word ptr [0x12790958] */
  AX = (r16((uint32_t)(0x12790958)));
  /* 12773d59 push eax */
  push32((uint32_t)(EAX));
  /* 12773d5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773d5c mov cx, word ptr [0x12790956] */
  CX = (r16((uint32_t)(0x12790956)));
  /* 12773d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12773d64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773d66 mov dx, word ptr [0x12790954] */
  DX = (r16((uint32_t)(0x12790954)));
  /* 12773d6d push edx */
  push32((uint32_t)(EDX));
  /* 12773d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12773d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773d72 mov ax, word ptr [0x12790950] */
  AX = (r16((uint32_t)(0x12790950)));
  /* 12773d78 push eax */
  push32((uint32_t)(EAX));
  /* 12773d79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773d7b mov cx, word ptr [0x12790952] */
  CX = (r16((uint32_t)(0x12790952)));
  /* 12773d82 push ecx */
  push32((uint32_t)(ECX));
  /* 12773d83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773d85 mov dx, word ptr [0x1279094e] */
  DX = (r16((uint32_t)(0x1279094e)));
  /* 12773d8c push edx */
  push32((uint32_t)(EDX));
  /* 12773d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773d90 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12773d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12773d94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12773d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773d98 call 0x12773f40 */
  push32(0x12773d9du); f_12773f40();
  /* 12773d9d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773da0 jmp 0x12773df3 */
  goto L_12773df3;
L_12773da2:;
  /* 12773da2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773da4 mov dx, word ptr [0x1279095a] */
  DX = (r16((uint32_t)(0x1279095a)));
  /* 12773dab push edx */
  push32((uint32_t)(EDX));
  /* 12773dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773dae mov ax, word ptr [0x12790958] */
  AX = (r16((uint32_t)(0x12790958)));
  /* 12773db4 push eax */
  push32((uint32_t)(EAX));
  /* 12773db5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773db7 mov cx, word ptr [0x12790956] */
  CX = (r16((uint32_t)(0x12790956)));
  /* 12773dbe push ecx */
  push32((uint32_t)(ECX));
  /* 12773dbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12773dc1 mov dx, word ptr [0x12790954] */
  DX = (r16((uint32_t)(0x12790954)));
  /* 12773dc8 push edx */
  push32((uint32_t)(EDX));
  /* 12773dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773dcb mov ax, word ptr [0x12790952] */
  AX = (r16((uint32_t)(0x12790952)));
  /* 12773dd1 push eax */
  push32((uint32_t)(EAX));
  /* 12773dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773dd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12773dd8 mov cx, word ptr [0x1279094e] */
  CX = (r16((uint32_t)(0x1279094e)));
  /* 12773ddf push ecx */
  push32((uint32_t)(ECX));
  /* 12773de0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773de3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12773de6 push eax */
  push32((uint32_t)(EAX));
  /* 12773de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773deb call 0x12773f40 */
  push32(0x12773df0u); f_12773f40();
  /* 12773df0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773df3:;
  /* 12773df3 jmp 0x12773e3b */
  goto L_12773e3b;
L_12773df5:;
  /* 12773df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773dfb push 2 */
  push32((uint32_t)(0x2u));
  /* 12773dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12773dff push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12773e03 push 4 */
  push32((uint32_t)(0x4u));
  /* 12773e05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12773e0b push edx */
  push32((uint32_t)(EDX));
  /* 12773e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 12773e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12773e10 call 0x12773f40 */
  push32(0x12773e15u); f_12773f40();
  /* 12773e15 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12773e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12773e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e24 push 5 */
  push32((uint32_t)(0x5u));
  /* 12773e26 push 0xa */
  push32((uint32_t)(0xau));
  /* 12773e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e2b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12773e2e push ecx */
  push32((uint32_t)(ECX));
  /* 12773e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12773e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12773e33 call 0x12773f40 */
  push32(0x12773e38u); f_12773f40();
  /* 12773e38 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12773e3b:;
  /* 12773e3b mov edx, dword ptr [0x1278fe2c] */
  EDX = (r32((uint32_t)(0x1278fe2c)));
  /* 12773e41 cmp edx, dword ptr [0x1278fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773e47 jge 0x12773e94 */
  if ((C.sf==C.of)) goto L_12773e94;
  /* 12773e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e4c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12773e4f cmp ecx, dword ptr [0x1278fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773e55 jl 0x12773e65 */
  if ((C.sf!=C.of)) goto L_12773e65;
  /* 12773e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e5a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12773e5d cmp eax, dword ptr [0x1278fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773e63 jle 0x12773e6c */
  if ((C.zf||C.sf!=C.of)) goto L_12773e6c;
L_12773e65:;
  /* 12773e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773e67 jmp 0x12773f36 */
  goto L_12773f36;
L_12773e6c:;
  /* 12773e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e6f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12773e72 cmp edx, dword ptr [0x1278fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773e78 jle 0x12773e92 */
  if ((C.zf||C.sf!=C.of)) goto L_12773e92;
  /* 12773e7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e7d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12773e80 cmp ecx, dword ptr [0x1278fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773e86 jge 0x12773e92 */
  if ((C.sf==C.of)) goto L_12773e92;
  /* 12773e88 mov eax, 1 */
  EAX = (0x1u);
  /* 12773e8d jmp 0x12773f36 */
  goto L_12773f36;
L_12773e92:;
  /* 12773e92 jmp 0x12773ed7 */
  goto L_12773ed7;
L_12773e94:;
  /* 12773e94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773e97 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12773e9a cmp eax, dword ptr [0x1278fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773ea0 jl 0x12773eb0 */
  if ((C.sf!=C.of)) goto L_12773eb0;
  /* 12773ea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773ea5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12773ea8 cmp edx, dword ptr [0x1278fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773eae jle 0x12773eb7 */
  if ((C.zf||C.sf!=C.of)) goto L_12773eb7;
L_12773eb0:;
  /* 12773eb0 mov eax, 1 */
  EAX = (0x1u);
  /* 12773eb5 jmp 0x12773f36 */
  goto L_12773f36;
L_12773eb7:;
  /* 12773eb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773eba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12773ebd cmp ecx, dword ptr [0x1278fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773ec3 jle 0x12773ed7 */
  if ((C.zf||C.sf!=C.of)) goto L_12773ed7;
  /* 12773ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773ec8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12773ecb cmp eax, dword ptr [0x1278fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773ed1 jge 0x12773ed7 */
  if ((C.sf==C.of)) goto L_12773ed7;
  /* 12773ed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773ed5 jmp 0x12773f36 */
  goto L_12773f36;
L_12773ed7:;
  /* 12773ed7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773eda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12773edd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773ee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773ee3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12773ee5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773ee7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773eea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12773eed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773ef3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773ef5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773efb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12773efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12773f01 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12773f04 cmp edx, dword ptr [0x1278fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773f0a jne 0x12773f22 */
  if (!C.zf) goto L_12773f22;
  /* 12773f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773f0f cmp eax, dword ptr [0x1278fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773f15 jl 0x12773f1e */
  if ((C.sf!=C.of)) goto L_12773f1e;
  /* 12773f17 mov eax, 1 */
  EAX = (0x1u);
  /* 12773f1c jmp 0x12773f36 */
  goto L_12773f36;
L_12773f1e:;
  /* 12773f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12773f20 jmp 0x12773f36 */
  goto L_12773f36;
L_12773f22:;
  /* 12773f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773f25 cmp ecx, dword ptr [0x1278fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773f2b jge 0x12773f34 */
  if ((C.sf==C.of)) goto L_12773f34;
  /* 12773f2d mov eax, 1 */
  EAX = (0x1u);
  /* 12773f32 jmp 0x12773f36 */
  goto L_12773f36;
L_12773f34:;
  /* 12773f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12773f36:;
  /* 12773f36 mov esp, ebp */
  ESP = (EBP);
  /* 12773f38 pop ebp */
  EBP = (pop32());
  /* 12773f39 ret  */
  ESPCHK(0x12773c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x12773f40 (504 bytes, 145 insns) */
void f_12773f40(void) {
  FTRACE(0x12773f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12773f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12773f41 mov ebp, esp */
  EBP = (ESP);
  /* 12773f43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773f46 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773f4a jne 0x1277401c */
  if (!C.zf) goto L_1277401c;
  /* 12773f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773f53 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12773f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12773f58 jne 0x12773f69 */
  if (!C.zf) goto L_12773f69;
  /* 12773f5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12773f5d mov edx, dword ptr [ecx*4 + 0x1278fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278fe4c)));
  /* 12773f64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12773f67 jmp 0x12773f76 */
  goto L_12773f76;
L_12773f69:;
  /* 12773f69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12773f6c mov ecx, dword ptr [eax*4 + 0x1278fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278fe80)));
  /* 12773f73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12773f76:;
  /* 12773f76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12773f79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773f7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12773f7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773f82 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773f85 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12773f8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773f90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773f93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773f96 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12773f99 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12773f9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12773f9e mov ecx, 7 */
  ECX = (0x7u);
  /* 12773fa3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12773fa5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12773fa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12773fab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773fae jge 0x12773fc9 */
  if ((C.sf==C.of)) goto L_12773fc9;
  /* 12773fb0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12773fb3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773fb6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12773fb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773fbc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773fbf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773fc2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773fc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12773fc7 jmp 0x12773fdd */
  goto L_12773fdd;
L_12773fc9:;
  /* 12773fc9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12773fcc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12773fcf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12773fd2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12773fd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773fd8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12773fda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12773fdd:;
  /* 12773fdd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12773fe1 jne 0x1277401a */
  if (!C.zf) goto L_1277401a;
  /* 12773fe3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12773fe6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12773fe9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12773feb jne 0x12773ffc */
  if (!C.zf) goto L_12773ffc;
  /* 12773fed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12773ff0 mov eax, dword ptr [edx*4 + 0x1278fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1278fe50)));
  /* 12773ff7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12773ffa jmp 0x12774009 */
  goto L_12774009;
L_12773ffc:;
  /* 12773ffc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12773fff mov edx, dword ptr [ecx*4 + 0x1278fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278fe84)));
  /* 12774006 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12774009:;
  /* 12774009 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277400c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277400f jle 0x1277401a */
  if ((C.zf||C.sf!=C.of)) goto L_1277401a;
  /* 12774011 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774014 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774017 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1277401a:;
  /* 1277401a jmp 0x12774051 */
  goto L_12774051;
L_1277401c:;
  /* 1277401c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277401f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12774022 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774024 jne 0x12774035 */
  if (!C.zf) goto L_12774035;
  /* 12774026 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12774029 mov ecx, dword ptr [eax*4 + 0x1278fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278fe4c)));
  /* 12774030 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12774033 jmp 0x12774042 */
  goto L_12774042;
L_12774035:;
  /* 12774035 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12774038 mov eax, dword ptr [edx*4 + 0x1278fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1278fe80)));
  /* 1277403f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12774042:;
  /* 12774042 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12774045 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12774048 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277404b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277404e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12774051:;
  /* 12774051 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774055 jne 0x12774091 */
  if (!C.zf) goto L_12774091;
  /* 12774057 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277405a mov dword ptr [0x1278fe2c], eax */
  w32((uint32_t)(0x1278fe2c), (EAX));
  /* 1277405f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12774062 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12774065 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12774068 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277406a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277406d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12774070 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774072 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12774078 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1277407b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277407d mov dword ptr [0x1278fe30], ecx */
  w32((uint32_t)(0x1278fe30), (ECX));
  /* 12774083 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774086 mov dword ptr [0x1278fe28], edx */
  w32((uint32_t)(0x1278fe28), (EDX));
  /* 1277408c jmp 0x12774134 */
  goto L_12774134;
L_12774091:;
  /* 12774091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774094 mov dword ptr [0x1278fe3c], eax */
  w32((uint32_t)(0x1278fe3c), (EAX));
  /* 12774099 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1277409c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1277409f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 127740a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127740a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127740a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 127740aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127740ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127740b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 127740b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127740b7 mov dword ptr [0x1278fe40], ecx */
  w32((uint32_t)(0x1278fe40), (ECX));
  /* 127740bd mov edx, dword ptr [0x1278fd98] */
  EDX = (r32((uint32_t)(0x1278fd98)));
  /* 127740c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127740c9 mov eax, dword ptr [0x1278fe40] */
  EAX = (r32((uint32_t)(0x1278fe40)));
  /* 127740ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127740d0 mov dword ptr [0x1278fe40], eax */
  w32((uint32_t)(0x1278fe40), (EAX));
  /* 127740d5 cmp dword ptr [0x1278fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1278fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127740dc jge 0x12774101 */
  if ((C.sf==C.of)) goto L_12774101;
  /* 127740de mov ecx, dword ptr [0x1278fe40] */
  ECX = (r32((uint32_t)(0x1278fe40)));
  /* 127740e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127740ea mov dword ptr [0x1278fe40], ecx */
  w32((uint32_t)(0x1278fe40), (ECX));
  /* 127740f0 mov edx, dword ptr [0x1278fe3c] */
  EDX = (r32((uint32_t)(0x1278fe3c)));
  /* 127740f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127740f9 mov dword ptr [0x1278fe3c], edx */
  w32((uint32_t)(0x1278fe3c), (EDX));
  /* 127740ff jmp 0x1277412b */
  goto L_1277412b;
L_12774101:;
  /* 12774101 cmp dword ptr [0x1278fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1278fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277410b jl 0x1277412b */
  if ((C.sf!=C.of)) goto L_1277412b;
  /* 1277410d mov eax, dword ptr [0x1278fe40] */
  EAX = (r32((uint32_t)(0x1278fe40)));
  /* 12774112 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774117 mov dword ptr [0x1278fe40], eax */
  w32((uint32_t)(0x1278fe40), (EAX));
  /* 1277411c mov ecx, dword ptr [0x1278fe3c] */
  ECX = (r32((uint32_t)(0x1278fe3c)));
  /* 12774122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774125 mov dword ptr [0x1278fe3c], ecx */
  w32((uint32_t)(0x1278fe3c), (ECX));
L_1277412b:;
  /* 1277412b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1277412e mov dword ptr [0x1278fe38], edx */
  w32((uint32_t)(0x1278fe38), (EDX));
L_12774134:;
  /* 12774134 mov esp, ebp */
  ESP = (EBP);
  /* 12774136 pop ebp */
  EBP = (pop32());
  /* 12774137 ret  */
  ESPCHK(0x12773f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014140 @ 0x12774140 (382 bytes, 135 insns) */
void f_12774140(void) {
  FTRACE(0x12774140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774140 push ebp */
  push32((uint32_t)(EBP));
  /* 12774141 mov ebp, esp */
  EBP = (ESP);
  /* 12774143 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12774145 push 0x1278cb80 */
  push32((uint32_t)(0x1278cb80u));
  /* 1277414a push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 1277414f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12774155 push eax */
  push32((uint32_t)(EAX));
  /* 12774156 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1277415d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774160 push ebx */
  push32((uint32_t)(EBX));
  /* 12774161 push esi */
  push32((uint32_t)(ESI));
  /* 12774162 push edi */
  push32((uint32_t)(EDI));
  /* 12774163 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12774166 cmp dword ptr [0x127909bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277416d jne 0x127741b2 */
  if (!C.zf) goto L_127741b2;
  /* 1277416f push 0 */
  push32((uint32_t)(0x0u));
  /* 12774171 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774173 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774177 call dword ptr [0x127932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b0))), 0x1277417du);
  /* 1277417d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277417f je 0x1277418d */
  if (C.zf) goto L_1277418d;
  /* 12774181 mov dword ptr [0x127909bc], 1 */
  w32((uint32_t)(0x127909bc), (0x1u));
  /* 1277418b jmp 0x127741b2 */
  goto L_127741b2;
L_1277418d:;
  /* 1277418d push 0 */
  push32((uint32_t)(0x0u));
  /* 1277418f push 0 */
  push32((uint32_t)(0x0u));
  /* 12774191 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774193 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774195 call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x1277419bu);
  /* 1277419b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277419d je 0x127741ab */
  if (C.zf) goto L_127741ab;
  /* 1277419f mov dword ptr [0x127909bc], 2 */
  w32((uint32_t)(0x127909bc), (0x2u));
  /* 127741a9 jmp 0x127741b2 */
  goto L_127741b2;
L_127741ab:;
  /* 127741ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127741ad jmp 0x127742c1 */
  goto L_127742c1;
L_127741b2:;
  /* 127741b2 cmp dword ptr [0x127909bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127909bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127741b9 jne 0x127741d6 */
  if (!C.zf) goto L_127741d6;
  /* 127741bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127741be push eax */
  push32((uint32_t)(EAX));
  /* 127741bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127741c2 push ecx */
  push32((uint32_t)(ECX));
  /* 127741c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127741c6 push edx */
  push32((uint32_t)(EDX));
  /* 127741c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127741ca push eax */
  push32((uint32_t)(EAX));
  /* 127741cb call dword ptr [0x127932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b0))), 0x127741d1u);
  /* 127741d1 jmp 0x127742c1 */
  goto L_127742c1;
L_127741d6:;
  /* 127741d6 cmp dword ptr [0x127909bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127909bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127741dd jne 0x127742bf */
  if (!C.zf) goto L_127742bf;
  /* 127741e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127741e7 jne 0x127741f2 */
  if (!C.zf) goto L_127741f2;
  /* 127741e9 mov ecx, dword ptr [0x12790870] */
  ECX = (r32((uint32_t)(0x12790870)));
  /* 127741ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127741f2:;
  /* 127741f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127741f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127741f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127741f9 push edx */
  push32((uint32_t)(EDX));
  /* 127741fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127741fd push eax */
  push32((uint32_t)(EAX));
  /* 127741fe call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x12774204u);
  /* 12774204 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12774207 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277420b jne 0x12774214 */
  if (!C.zf) goto L_12774214;
  /* 1277420d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277420f jmp 0x127742c1 */
  goto L_127742c1;
L_12774214:;
  /* 12774214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1277421b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1277421e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774221 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12774223 call 0x12767ea0 */
  push32(0x12774228u); f_12767ea0();
  /* 12774228 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1277422b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1277422e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12774231 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12774234 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1277423b jmp 0x12774254 */
  goto L_12774254;
  /* 1277423d mov eax, 1 */
  EAX = (0x1u);
  /* 12774242 ret  */
  ESPCHK(0x12774140u, _esp0);
  ESP += 4; return;
  /* 12774243 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12774246 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1277424d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12774254:;
  /* 12774254 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774258 jne 0x1277425e */
  if (!C.zf) goto L_1277425e;
  /* 1277425a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277425c jmp 0x127742c1 */
  goto L_127742c1;
L_1277425e:;
  /* 1277425e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12774261 push edx */
  push32((uint32_t)(EDX));
  /* 12774262 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774265 push eax */
  push32((uint32_t)(EAX));
  /* 12774266 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774269 push ecx */
  push32((uint32_t)(ECX));
  /* 1277426a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277426d push edx */
  push32((uint32_t)(EDX));
  /* 1277426e call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x12774274u);
  /* 12774274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774276 jne 0x1277427c */
  if (!C.zf) goto L_1277427c;
  /* 12774278 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277427a jmp 0x127742c1 */
  goto L_127742c1;
L_1277427c:;
  /* 1277427c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774280 jne 0x1277429d */
  if (!C.zf) goto L_1277429d;
  /* 12774282 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774284 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774286 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12774288 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1277428b push eax */
  push32((uint32_t)(EAX));
  /* 1277428c push 1 */
  push32((uint32_t)(0x1u));
  /* 1277428e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774291 push ecx */
  push32((uint32_t)(ECX));
  /* 12774292 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x12774298u);
  /* 12774298 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1277429b jmp 0x127742ba */
  goto L_127742ba;
L_1277429d:;
  /* 1277429d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127742a0 push edx */
  push32((uint32_t)(EDX));
  /* 127742a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127742a4 push eax */
  push32((uint32_t)(EAX));
  /* 127742a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127742a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127742aa push ecx */
  push32((uint32_t)(ECX));
  /* 127742ab push 1 */
  push32((uint32_t)(0x1u));
  /* 127742ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127742b0 push edx */
  push32((uint32_t)(EDX));
  /* 127742b1 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x127742b7u);
  /* 127742b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127742ba:;
  /* 127742ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127742bd jmp 0x127742c1 */
  goto L_127742c1;
L_127742bf:;
  /* 127742bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127742c1:;
  /* 127742c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 127742c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127742c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127742ce pop edi */
  EDI = (pop32());
  /* 127742cf pop esi */
  ESI = (pop32());
  /* 127742d0 pop ebx */
  EBX = (pop32());
  /* 127742d1 mov esp, ebp */
  ESP = (EBP);
  /* 127742d3 pop ebp */
  EBP = (pop32());
  /* 127742d4 ret  */
  ESPCHK(0x12774140u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x127742e0 (398 bytes, 140 insns) */
void f_127742e0(void) {
  FTRACE(0x127742e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127742e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127742e1 mov ebp, esp */
  EBP = (ESP);
  /* 127742e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127742e5 push 0x1278cb90 */
  push32((uint32_t)(0x1278cb90u));
  /* 127742ea push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 127742ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127742f5 push eax */
  push32((uint32_t)(EAX));
  /* 127742f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127742fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774300 push ebx */
  push32((uint32_t)(EBX));
  /* 12774301 push esi */
  push32((uint32_t)(ESI));
  /* 12774302 push edi */
  push32((uint32_t)(EDI));
  /* 12774303 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12774306 cmp dword ptr [0x127909c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277430d jne 0x12774352 */
  if (!C.zf) goto L_12774352;
  /* 1277430f push 0 */
  push32((uint32_t)(0x0u));
  /* 12774311 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774315 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774317 call dword ptr [0x127932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b0))), 0x1277431du);
  /* 1277431d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277431f je 0x1277432d */
  if (C.zf) goto L_1277432d;
  /* 12774321 mov dword ptr [0x127909c0], 1 */
  w32((uint32_t)(0x127909c0), (0x1u));
  /* 1277432b jmp 0x12774352 */
  goto L_12774352;
L_1277432d:;
  /* 1277432d push 0 */
  push32((uint32_t)(0x0u));
  /* 1277432f push 0 */
  push32((uint32_t)(0x0u));
  /* 12774331 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774333 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774335 call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x1277433bu);
  /* 1277433b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1277433d je 0x1277434b */
  if (C.zf) goto L_1277434b;
  /* 1277433f mov dword ptr [0x127909c0], 2 */
  w32((uint32_t)(0x127909c0), (0x2u));
  /* 12774349 jmp 0x12774352 */
  goto L_12774352;
L_1277434b:;
  /* 1277434b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277434d jmp 0x12774471 */
  goto L_12774471;
L_12774352:;
  /* 12774352 cmp dword ptr [0x127909c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127909c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774359 jne 0x12774376 */
  if (!C.zf) goto L_12774376;
  /* 1277435b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277435e push eax */
  push32((uint32_t)(EAX));
  /* 1277435f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774362 push ecx */
  push32((uint32_t)(ECX));
  /* 12774363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774366 push edx */
  push32((uint32_t)(EDX));
  /* 12774367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277436a push eax */
  push32((uint32_t)(EAX));
  /* 1277436b call dword ptr [0x127932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932c8))), 0x12774371u);
  /* 12774371 jmp 0x12774471 */
  goto L_12774471;
L_12774376:;
  /* 12774376 cmp dword ptr [0x127909c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127909c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277437d jne 0x1277446f */
  if (!C.zf) goto L_1277446f;
  /* 12774383 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774387 jne 0x12774392 */
  if (!C.zf) goto L_12774392;
  /* 12774389 mov ecx, dword ptr [0x12790870] */
  ECX = (r32((uint32_t)(0x12790870)));
  /* 1277438f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12774392:;
  /* 12774392 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774394 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774399 push edx */
  push32((uint32_t)(EDX));
  /* 1277439a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277439d push eax */
  push32((uint32_t)(EAX));
  /* 1277439e call dword ptr [0x127932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b0))), 0x127743a4u);
  /* 127743a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127743a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127743ab jne 0x127743b4 */
  if (!C.zf) goto L_127743b4;
  /* 127743ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127743af jmp 0x12774471 */
  goto L_12774471;
L_127743b4:;
  /* 127743b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127743bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127743be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127743c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127743c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127743c5 call 0x12767ea0 */
  push32(0x127743cau); f_12767ea0();
  /* 127743ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127743cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127743d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127743d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127743d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127743dd jmp 0x127743f6 */
  goto L_127743f6;
  /* 127743df mov eax, 1 */
  EAX = (0x1u);
  /* 127743e4 ret  */
  ESPCHK(0x127742e0u, _esp0);
  ESP += 4; return;
  /* 127743e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127743e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127743ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127743f6:;
  /* 127743f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127743fa jne 0x12774400 */
  if (!C.zf) goto L_12774400;
  /* 127743fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127743fe jmp 0x12774471 */
  goto L_12774471;
L_12774400:;
  /* 12774400 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12774403 push edx */
  push32((uint32_t)(EDX));
  /* 12774404 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774407 push eax */
  push32((uint32_t)(EAX));
  /* 12774408 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1277440b push ecx */
  push32((uint32_t)(ECX));
  /* 1277440c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277440f push edx */
  push32((uint32_t)(EDX));
  /* 12774410 call dword ptr [0x127932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932b0))), 0x12774416u);
  /* 12774416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774418 jne 0x1277441e */
  if (!C.zf) goto L_1277441e;
  /* 1277441a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277441c jmp 0x12774471 */
  goto L_12774471;
L_1277441e:;
  /* 1277441e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774422 jne 0x12774446 */
  if (!C.zf) goto L_12774446;
  /* 12774424 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774426 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277442a push 0 */
  push32((uint32_t)(0x0u));
  /* 1277442c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1277442e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774431 push eax */
  push32((uint32_t)(EAX));
  /* 12774432 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12774437 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1277443a push ecx */
  push32((uint32_t)(ECX));
  /* 1277443b call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12774441u);
  /* 12774441 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12774444 jmp 0x1277446a */
  goto L_1277446a;
L_12774446:;
  /* 12774446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277444a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277444d push edx */
  push32((uint32_t)(EDX));
  /* 1277444e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774451 push eax */
  push32((uint32_t)(EAX));
  /* 12774452 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12774454 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774457 push ecx */
  push32((uint32_t)(ECX));
  /* 12774458 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1277445d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774460 push edx */
  push32((uint32_t)(EDX));
  /* 12774461 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12774467u);
  /* 12774467 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1277446a:;
  /* 1277446a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1277446d jmp 0x12774471 */
  goto L_12774471;
L_1277446f:;
  /* 1277446f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12774471:;
  /* 12774471 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12774474 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774477 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1277447e pop edi */
  EDI = (pop32());
  /* 1277447f pop esi */
  ESI = (pop32());
  /* 12774480 pop ebx */
  EBX = (pop32());
  /* 12774481 mov esp, ebp */
  ESP = (EBP);
  /* 12774483 pop ebp */
  EBP = (pop32());
  /* 12774484 ret  */
  ESPCHK(0x127742e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014490 @ 0x12774490 (11 bytes, 6 insns) */
void f_12774490(void) {
  FTRACE(0x12774490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774490 push ebp */
  push32((uint32_t)(EBP));
  /* 12774491 mov ebp, esp */
  EBP = (ESP);
  /* 12774493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774496 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774499 pop ebp */
  EBP = (pop32());
  /* 1277449a ret  */
  ESPCHK(0x12774490u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x127744a0 (147 bytes, 43 insns) */
void f_127744a0(void) {
  FTRACE(0x127744a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127744a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127744a1 mov ebp, esp */
  EBP = (ESP);
  /* 127744a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127744a4 cmp dword ptr [0x12790860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127744ab jne 0x127744c7 */
  if (!C.zf) goto L_127744c7;
  /* 127744ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127744b1 jl 0x127744c2 */
  if ((C.sf!=C.of)) goto L_127744c2;
  /* 127744b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127744b7 jg 0x127744c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_127744c2;
  /* 127744b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127744bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127744bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127744c2:;
  /* 127744c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127744c5 jmp 0x1277452f */
  goto L_1277452f;
L_127744c7:;
  /* 127744c7 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 127744cc call dword ptr [0x12793360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793360))), 0x127744d2u);
  /* 127744d2 cmp dword ptr [0x127909dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127744d9 je 0x127744f9 */
  if (C.zf) goto L_127744f9;
  /* 127744db push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 127744e0 call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x127744e6u);
  /* 127744e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127744e8 call 0x12768700 */
  push32(0x127744edu); f_12768700();
  /* 127744ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127744f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127744f7 jmp 0x12774500 */
  goto L_12774500;
L_127744f9:;
  /* 127744f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12774500:;
  /* 12774500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774503 push ecx */
  push32((uint32_t)(ECX));
  /* 12774504 call 0x12774540 */
  push32(0x12774509u); f_12774540();
  /* 12774509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277450c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1277450f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774513 je 0x12774521 */
  if (C.zf) goto L_12774521;
  /* 12774515 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12774517 call 0x127687a0 */
  push32(0x1277451cu); f_127687a0();
  /* 1277451c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277451f jmp 0x1277452c */
  goto L_1277452c;
L_12774521:;
  /* 12774521 push 0x127909ec */
  push32((uint32_t)(0x127909ecu));
  /* 12774526 call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x1277452cu);
L_1277452c:;
  /* 1277452c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1277452f:;
  /* 1277452f mov esp, ebp */
  ESP = (EBP);
  /* 12774531 pop ebp */
  EBP = (pop32());
  /* 12774532 ret  */
  ESPCHK(0x127744a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014540 @ 0x12774540 (299 bytes, 91 insns) */
void f_12774540(void) {
  FTRACE(0x12774540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774540 push ebp */
  push32((uint32_t)(EBP));
  /* 12774541 mov ebp, esp */
  EBP = (ESP);
  /* 12774543 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774546 cmp dword ptr [0x12790860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277454d jne 0x1277456c */
  if (!C.zf) goto L_1277456c;
  /* 1277454f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774553 jl 0x12774564 */
  if ((C.sf!=C.of)) goto L_12774564;
  /* 12774555 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774559 jg 0x12774564 */
  if ((!C.zf&&C.sf==C.of)) goto L_12774564;
  /* 1277455b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277455e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774561 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12774564:;
  /* 12774564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774567 jmp 0x12774667 */
  goto L_12774667;
L_1277456c:;
  /* 1277456c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774573 jge 0x127745b3 */
  if ((C.sf==C.of)) goto L_127745b3;
  /* 12774575 cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277457c jle 0x12774591 */
  if ((C.zf||C.sf!=C.of)) goto L_12774591;
  /* 1277457e push 1 */
  push32((uint32_t)(0x1u));
  /* 12774580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774583 push ecx */
  push32((uint32_t)(ECX));
  /* 12774584 call 0x1276ad10 */
  push32(0x12774589u); f_1276ad10();
  /* 12774589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277458c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1277458f jmp 0x127745a5 */
  goto L_127745a5;
L_12774591:;
  /* 12774591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774594 mov eax, dword ptr [0x1278ec98] */
  EAX = (r32((uint32_t)(0x1278ec98)));
  /* 12774599 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1277459b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1277459f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127745a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127745a5:;
  /* 127745a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127745a9 jne 0x127745b3 */
  if (!C.zf) goto L_127745b3;
  /* 127745ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127745ae jmp 0x12774667 */
  goto L_12774667;
L_127745b3:;
  /* 127745b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127745b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127745b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127745bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127745c5 mov eax, dword ptr [0x1278ec98] */
  EAX = (r32((uint32_t)(0x1278ec98)));
  /* 127745ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127745cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127745d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127745d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127745d8 je 0x127745fc */
  if (C.zf) goto L_127745fc;
  /* 127745da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127745dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127745e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127745e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 127745e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127745ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 127745ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 127745f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127745fa jmp 0x1277460d */
  goto L_1277460d;
L_127745fc:;
  /* 127745fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 127745ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12774602 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12774606 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1277460d:;
  /* 1277460d push 1 */
  push32((uint32_t)(0x1u));
  /* 1277460f push 0 */
  push32((uint32_t)(0x0u));
  /* 12774611 push 3 */
  push32((uint32_t)(0x3u));
  /* 12774613 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12774616 push edx */
  push32((uint32_t)(EDX));
  /* 12774617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277461a push eax */
  push32((uint32_t)(EAX));
  /* 1277461b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1277461e push ecx */
  push32((uint32_t)(ECX));
  /* 1277461f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12774624 mov edx, dword ptr [0x12790860] */
  EDX = (r32((uint32_t)(0x12790860)));
  /* 1277462a push edx */
  push32((uint32_t)(EDX));
  /* 1277462b call 0x1276d0f0 */
  push32(0x12774630u); f_1276d0f0();
  /* 12774630 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774633 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12774636 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277463a jne 0x12774641 */
  if (!C.zf) goto L_12774641;
  /* 1277463c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277463f jmp 0x12774667 */
  goto L_12774667;
L_12774641:;
  /* 12774641 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774645 jne 0x12774651 */
  if (!C.zf) goto L_12774651;
  /* 12774647 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1277464a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277464f jmp 0x12774667 */
  goto L_12774667;
L_12774651:;
  /* 12774651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774654 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774659 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1277465c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12774662 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12774665 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12774667:;
  /* 12774667 mov esp, ebp */
  ESP = (EBP);
  /* 12774669 pop ebp */
  EBP = (pop32());
  /* 1277466a ret  */
  ESPCHK(0x12774540u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12774670 (52 bytes, 19 insns) */
void f_12774670(void) {
  FTRACE(0x12774670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774670 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12774674 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12774678 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1277467a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1277467e jne 0x12774689 */
  if (!C.zf) goto L_12774689;
  /* 12774680 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12774684 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12774686 ret 0x10 */
  ESPCHK(0x12774670u, _esp0);
  ESP += 20; return;
L_12774689:;
  /* 12774689 push ebx */
  push32((uint32_t)(EBX));
  /* 1277468a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1277468c mov ebx, eax */
  EBX = (EAX);
  /* 1277468e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12774692 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12774696 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774698 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1277469c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1277469e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127746a0 pop ebx */
  EBX = (pop32());
  /* 127746a1 ret 0x10 */
  ESPCHK(0x12774670u, _esp0);
  ESP += 20; return;
}

/* FUN_100146b0 @ 0x127746b0 (46 bytes, 18 insns) */
void f_127746b0(void) {
  FTRACE(0x127746b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127746b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127746b1 mov ebp, esp */
  EBP = (ESP);
  /* 127746b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127746b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 127746b6 call 0x12768700 */
  push32(0x127746bbu); f_12768700();
  /* 127746bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127746be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127746c1 push eax */
  push32((uint32_t)(EAX));
  /* 127746c2 call 0x127746e0 */
  push32(0x127746c7u); f_127746e0();
  /* 127746c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127746ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127746cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 127746cf call 0x127687a0 */
  push32(0x127746d4u); f_127687a0();
  /* 127746d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127746d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127746da mov esp, ebp */
  ESP = (EBP);
  /* 127746dc pop ebp */
  EBP = (pop32());
  /* 127746dd ret  */
  ESPCHK(0x127746b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x127746e0 (198 bytes, 69 insns) */
void f_127746e0(void) {
  FTRACE(0x127746e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127746e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127746e1 mov ebp, esp */
  EBP = (ESP);
  /* 127746e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127746e6 mov eax, dword ptr [0x1279067c] */
  EAX = (r32((uint32_t)(0x1279067c)));
  /* 127746eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127746ee cmp dword ptr [0x12792180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127746f5 jne 0x127746fe */
  if (!C.zf) goto L_127746fe;
  /* 127746f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127746f9 jmp 0x127747a2 */
  goto L_127747a2;
L_127746fe:;
  /* 127746fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774702 jne 0x12774726 */
  if (!C.zf) goto L_12774726;
  /* 12774704 cmp dword ptr [0x12790684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277470b je 0x12774726 */
  if (C.zf) goto L_12774726;
  /* 1277470d call 0x12774800 */
  push32(0x12774712u); f_12774800();
  /* 12774712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774714 je 0x1277471d */
  if (C.zf) goto L_1277471d;
  /* 12774716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774718 jmp 0x127747a2 */
  goto L_127747a2;
L_1277471d:;
  /* 1277471d mov ecx, dword ptr [0x1279067c] */
  ECX = (r32((uint32_t)(0x1279067c)));
  /* 12774723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12774726:;
  /* 12774726 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277472a je 0x127747a0 */
  if (C.zf) goto L_127747a0;
  /* 1277472c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774730 je 0x127747a0 */
  if (C.zf) goto L_127747a0;
  /* 12774732 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774735 push edx */
  push32((uint32_t)(EDX));
  /* 12774736 call 0x12767b30 */
  push32(0x1277473bu); f_12767b30();
  /* 1277473b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277473e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12774741:;
  /* 12774741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774744 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774747 je 0x127747a0 */
  if (C.zf) goto L_127747a0;
  /* 12774749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277474c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1277474e push edx */
  push32((uint32_t)(EDX));
  /* 1277474f call 0x12767b30 */
  push32(0x12774754u); f_12767b30();
  /* 12774754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774757 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277475a jbe 0x12774795 */
  if ((C.cf||C.zf)) goto L_12774795;
  /* 1277475c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277475f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12774761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774764 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12774768 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277476b jne 0x12774795 */
  if (!C.zf) goto L_12774795;
  /* 1277476d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774770 push ecx */
  push32((uint32_t)(ECX));
  /* 12774771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774774 push edx */
  push32((uint32_t)(EDX));
  /* 12774775 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774778 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1277477a push ecx */
  push32((uint32_t)(ECX));
  /* 1277477b call 0x127747b0 */
  push32(0x12774780u); f_127747b0();
  /* 12774780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774785 jne 0x12774795 */
  if (!C.zf) goto L_12774795;
  /* 12774787 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277478a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1277478c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277478f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12774793 jmp 0x127747a2 */
  goto L_127747a2;
L_12774795:;
  /* 12774795 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774798 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277479b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1277479e jmp 0x12774741 */
  goto L_12774741;
L_127747a0:;
  /* 127747a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127747a2:;
  /* 127747a2 mov esp, ebp */
  ESP = (EBP);
  /* 127747a4 pop ebp */
  EBP = (pop32());
  /* 127747a5 ret  */
  ESPCHK(0x127746e0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x127747b0 (79 bytes, 32 insns) */
void f_127747b0(void) {
  FTRACE(0x127747b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127747b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127747b1 mov ebp, esp */
  EBP = (ESP);
  /* 127747b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127747b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127747b8 jne 0x127747be */
  if (!C.zf) goto L_127747be;
  /* 127747ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127747bc jmp 0x127747fb */
  goto L_127747fb;
L_127747be:;
  /* 127747be mov eax, dword ptr [0x12791d44] */
  EAX = (r32((uint32_t)(0x12791d44)));
  /* 127747c3 push eax */
  push32((uint32_t)(EAX));
  /* 127747c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127747c7 push ecx */
  push32((uint32_t)(ECX));
  /* 127747c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127747cb push edx */
  push32((uint32_t)(EDX));
  /* 127747cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127747cf push eax */
  push32((uint32_t)(EAX));
  /* 127747d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127747d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127747d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127747d6 mov edx, dword ptr [0x12791fe4] */
  EDX = (r32((uint32_t)(0x12791fe4)));
  /* 127747dc push edx */
  push32((uint32_t)(EDX));
  /* 127747dd call 0x127748b0 */
  push32(0x127747e2u); f_127748b0();
  /* 127747e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127747e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127747e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127747ec jne 0x127747f5 */
  if (!C.zf) goto L_127747f5;
  /* 127747ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 127747f3 jmp 0x127747fb */
  goto L_127747fb;
L_127747f5:;
  /* 127747f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127747f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127747fb:;
  /* 127747fb mov esp, ebp */
  ESP = (EBP);
  /* 127747fd pop ebp */
  EBP = (pop32());
  /* 127747fe ret  */
  ESPCHK(0x127747b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014800 @ 0x12774800 (174 bytes, 66 insns) */
void f_12774800(void) {
  FTRACE(0x12774800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774800 push ebp */
  push32((uint32_t)(EBP));
  /* 12774801 mov ebp, esp */
  EBP = (ESP);
  /* 12774803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774806 mov eax, dword ptr [0x12790684] */
  EAX = (r32((uint32_t)(0x12790684)));
  /* 1277480b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1277480e:;
  /* 1277480e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774811 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774814 je 0x127748a8 */
  if (C.zf) goto L_127748a8;
  /* 1277481a push 0 */
  push32((uint32_t)(0x0u));
  /* 1277481c push 0 */
  push32((uint32_t)(0x0u));
  /* 1277481e push 0 */
  push32((uint32_t)(0x0u));
  /* 12774820 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774822 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12774824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774827 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12774829 push eax */
  push32((uint32_t)(EAX));
  /* 1277482a push 0 */
  push32((uint32_t)(0x0u));
  /* 1277482c push 1 */
  push32((uint32_t)(0x1u));
  /* 1277482e call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12774834u);
  /* 12774834 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12774837 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277483b jne 0x12774842 */
  if (!C.zf) goto L_12774842;
  /* 1277483d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774840 jmp 0x127748aa */
  goto L_127748aa;
L_12774842:;
  /* 12774842 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12774844 push 0x1278cb9c */
  push32((uint32_t)(0x1278cb9cu));
  /* 12774849 push 2 */
  push32((uint32_t)(0x2u));
  /* 1277484b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1277484e push ecx */
  push32((uint32_t)(ECX));
  /* 1277484f call 0x12764d00 */
  push32(0x12774854u); f_12764d00();
  /* 12774854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774857 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1277485a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277485e jne 0x12774865 */
  if (!C.zf) goto L_12774865;
  /* 12774860 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774863 jmp 0x127748aa */
  goto L_127748aa;
L_12774865:;
  /* 12774865 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774869 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1277486c push edx */
  push32((uint32_t)(EDX));
  /* 1277486d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774870 push eax */
  push32((uint32_t)(EAX));
  /* 12774871 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12774873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774876 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12774878 push edx */
  push32((uint32_t)(EDX));
  /* 12774879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1277487b push 1 */
  push32((uint32_t)(0x1u));
  /* 1277487d call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12774883u);
  /* 12774883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774885 jne 0x1277488c */
  if (!C.zf) goto L_1277488c;
  /* 12774887 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277488a jmp 0x127748aa */
  goto L_127748aa;
L_1277488c:;
  /* 1277488c push 0 */
  push32((uint32_t)(0x0u));
  /* 1277488e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774891 push eax */
  push32((uint32_t)(EAX));
  /* 12774892 call 0x12774d00 */
  push32(0x12774897u); f_12774d00();
  /* 12774897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277489a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277489d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127748a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127748a3 jmp 0x1277480e */
  goto L_1277480e;
L_127748a8:;
  /* 127748a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127748aa:;
  /* 127748aa mov esp, ebp */
  ESP = (EBP);
  /* 127748ac pop ebp */
  EBP = (pop32());
  /* 127748ad ret  */
  ESPCHK(0x12774800u, _esp0);
  ESP += 4; return;
}

/* FUN_100148b0 @ 0x127748b0 (970 bytes, 340 insns) */
void f_127748b0(void) {
  FTRACE(0x127748b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127748b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127748b1 mov ebp, esp */
  EBP = (ESP);
  /* 127748b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127748b5 push 0x1278cbf0 */
  push32((uint32_t)(0x1278cbf0u));
  /* 127748ba push 0x1276de08 */
  push32((uint32_t)(0x1276de08u));
  /* 127748bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127748c5 push eax */
  push32((uint32_t)(EAX));
  /* 127748c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127748cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127748d0 push ebx */
  push32((uint32_t)(EBX));
  /* 127748d1 push esi */
  push32((uint32_t)(ESI));
  /* 127748d2 push edi */
  push32((uint32_t)(EDI));
  /* 127748d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127748d6 cmp dword ptr [0x127909c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127909c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127748dd jne 0x12774936 */
  if (!C.zf) goto L_12774936;
  /* 127748df push 1 */
  push32((uint32_t)(0x1u));
  /* 127748e1 push 0x1278c24c */
  push32((uint32_t)(0x1278c24cu));
  /* 127748e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127748e8 push 0x1278c24c */
  push32((uint32_t)(0x1278c24cu));
  /* 127748ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127748ef push 0 */
  push32((uint32_t)(0x0u));
  /* 127748f1 call dword ptr [0x127932a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932a8))), 0x127748f7u);
  /* 127748f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127748f9 je 0x12774907 */
  if (C.zf) goto L_12774907;
  /* 127748fb mov dword ptr [0x127909c4], 1 */
  w32((uint32_t)(0x127909c4), (0x1u));
  /* 12774905 jmp 0x12774936 */
  goto L_12774936;
L_12774907:;
  /* 12774907 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774909 push 0x1278c248 */
  push32((uint32_t)(0x1278c248u));
  /* 1277490e push 1 */
  push32((uint32_t)(0x1u));
  /* 12774910 push 0x1278c248 */
  push32((uint32_t)(0x1278c248u));
  /* 12774915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774917 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774919 call dword ptr [0x127932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932ac))), 0x1277491fu);
  /* 1277491f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774921 je 0x1277492f */
  if (C.zf) goto L_1277492f;
  /* 12774923 mov dword ptr [0x127909c4], 2 */
  w32((uint32_t)(0x127909c4), (0x2u));
  /* 1277492d jmp 0x12774936 */
  goto L_12774936;
L_1277492f:;
  /* 1277492f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774931 jmp 0x12774c94 */
  goto L_12774c94;
L_12774936:;
  /* 12774936 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277493a jle 0x1277494f */
  if ((C.zf||C.sf!=C.of)) goto L_1277494f;
  /* 1277493c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277493f push eax */
  push32((uint32_t)(EAX));
  /* 12774940 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774943 push ecx */
  push32((uint32_t)(ECX));
  /* 12774944 call 0x12774cb0 */
  push32(0x12774949u); f_12774cb0();
  /* 12774949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277494c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1277494f:;
  /* 1277494f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774953 jle 0x12774968 */
  if ((C.zf||C.sf!=C.of)) goto L_12774968;
  /* 12774955 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12774958 push edx */
  push32((uint32_t)(EDX));
  /* 12774959 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1277495c push eax */
  push32((uint32_t)(EAX));
  /* 1277495d call 0x12774cb0 */
  push32(0x12774962u); f_12774cb0();
  /* 12774962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774965 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12774968:;
  /* 12774968 cmp dword ptr [0x127909c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127909c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277496f jne 0x12774994 */
  if (!C.zf) goto L_12774994;
  /* 12774971 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12774974 push ecx */
  push32((uint32_t)(ECX));
  /* 12774975 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774978 push edx */
  push32((uint32_t)(EDX));
  /* 12774979 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1277497c push eax */
  push32((uint32_t)(EAX));
  /* 1277497d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774980 push ecx */
  push32((uint32_t)(ECX));
  /* 12774981 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774984 push edx */
  push32((uint32_t)(EDX));
  /* 12774985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774988 push eax */
  push32((uint32_t)(EAX));
  /* 12774989 call dword ptr [0x127932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932ac))), 0x1277498fu);
  /* 1277498f jmp 0x12774c94 */
  goto L_12774c94;
L_12774994:;
  /* 12774994 cmp dword ptr [0x127909c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127909c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277499b jne 0x12774c92 */
  if (!C.zf) goto L_12774c92;
  /* 127749a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749a5 jne 0x127749b0 */
  if (!C.zf) goto L_127749b0;
  /* 127749a7 mov ecx, dword ptr [0x12790870] */
  ECX = (r32((uint32_t)(0x12790870)));
  /* 127749ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_127749b0:;
  /* 127749b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749b4 je 0x127749c0 */
  if (C.zf) goto L_127749c0;
  /* 127749b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749ba jne 0x12774b3c */
  if (!C.zf) goto L_12774b3c;
L_127749c0:;
  /* 127749c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127749c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749c6 jne 0x127749d2 */
  if (!C.zf) goto L_127749d2;
  /* 127749c8 mov eax, 2 */
  EAX = (0x2u);
  /* 127749cd jmp 0x12774c94 */
  goto L_12774c94;
L_127749d2:;
  /* 127749d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749d6 jle 0x127749e2 */
  if ((C.zf||C.sf!=C.of)) goto L_127749e2;
  /* 127749d8 mov eax, 1 */
  EAX = (0x1u);
  /* 127749dd jmp 0x12774c94 */
  goto L_12774c94;
L_127749e2:;
  /* 127749e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127749e6 jle 0x127749f2 */
  if ((C.zf||C.sf!=C.of)) goto L_127749f2;
  /* 127749e8 mov eax, 3 */
  EAX = (0x3u);
  /* 127749ed jmp 0x12774c94 */
  goto L_12774c94;
L_127749f2:;
  /* 127749f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 127749f5 push eax */
  push32((uint32_t)(EAX));
  /* 127749f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127749f9 push ecx */
  push32((uint32_t)(ECX));
  /* 127749fa call dword ptr [0x12793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793304))), 0x12774a00u);
  /* 12774a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774a02 jne 0x12774a0b */
  if (!C.zf) goto L_12774a0b;
  /* 12774a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774a06 jmp 0x12774c94 */
  goto L_12774c94;
L_12774a0b:;
  /* 12774a0b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a0f jne 0x12774a17 */
  if (!C.zf) goto L_12774a17;
  /* 12774a11 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a15 je 0x12774a44 */
  if (C.zf) goto L_12774a44;
L_12774a17:;
  /* 12774a17 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a1b jne 0x12774a23 */
  if (!C.zf) goto L_12774a23;
  /* 12774a1d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a21 je 0x12774a44 */
  if (C.zf) goto L_12774a44;
L_12774a23:;
  /* 12774a23 push 0x1278cbb0 */
  push32((uint32_t)(0x1278cbb0u));
  /* 12774a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12774a2a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12774a2f push 0x1278cba8 */
  push32((uint32_t)(0x1278cba8u));
  /* 12774a34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12774a36 call 0x12763dc0 */
  push32(0x12774a3bu); f_12763dc0();
  /* 12774a3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774a3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a41 jne 0x12774a44 */
  if (!C.zf) goto L_12774a44;
  /* 12774a43 int3  */
  x86_unimpl("int3 @ 0x12774a43");
L_12774a44:;
  /* 12774a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12774a46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774a48 jne 0x12774a0b */
  if (!C.zf) goto L_12774a0b;
  /* 12774a4a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a4e jle 0x12774ac3 */
  if ((C.zf||C.sf!=C.of)) goto L_12774ac3;
  /* 12774a50 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a54 jae 0x12774a60 */
  if (!C.cf) goto L_12774a60;
  /* 12774a56 mov eax, 3 */
  EAX = (0x3u);
  /* 12774a5b jmp 0x12774c94 */
  goto L_12774c94;
L_12774a60:;
  /* 12774a60 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12774a63 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12774a66 jmp 0x12774a71 */
  goto L_12774a71;
L_12774a68:;
  /* 12774a68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774a6b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774a6e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12774a71:;
  /* 12774a71 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774a76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12774a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774a7a je 0x12774ab9 */
  if (C.zf) goto L_12774ab9;
  /* 12774a7c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774a7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12774a81 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12774a84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774a86 je 0x12774ab9 */
  if (C.zf) goto L_12774ab9;
  /* 12774a88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774a8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12774a8d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12774a8f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774a94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12774a96 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774a98 jl 0x12774ab7 */
  if ((C.sf!=C.of)) goto L_12774ab7;
  /* 12774a9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774a9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12774a9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12774aa1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774aa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12774aa6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12774aa9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774aab jg 0x12774ab7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12774ab7;
  /* 12774aad mov eax, 2 */
  EAX = (0x2u);
  /* 12774ab2 jmp 0x12774c94 */
  goto L_12774c94;
L_12774ab7:;
  /* 12774ab7 jmp 0x12774a68 */
  goto L_12774a68;
L_12774ab9:;
  /* 12774ab9 mov eax, 3 */
  EAX = (0x3u);
  /* 12774abe jmp 0x12774c94 */
  goto L_12774c94;
L_12774ac3:;
  /* 12774ac3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774ac7 jle 0x12774b3c */
  if ((C.zf||C.sf!=C.of)) goto L_12774b3c;
  /* 12774ac9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774acd jae 0x12774ad9 */
  if (!C.cf) goto L_12774ad9;
  /* 12774acf mov eax, 1 */
  EAX = (0x1u);
  /* 12774ad4 jmp 0x12774c94 */
  goto L_12774c94;
L_12774ad9:;
  /* 12774ad9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12774adc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12774adf jmp 0x12774aea */
  goto L_12774aea;
L_12774ae1:;
  /* 12774ae1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774ae4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774ae7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12774aea:;
  /* 12774aea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774aed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12774aef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12774af1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774af3 je 0x12774b32 */
  if (C.zf) goto L_12774b32;
  /* 12774af5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774af8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12774afa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12774afd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12774aff je 0x12774b32 */
  if (C.zf) goto L_12774b32;
  /* 12774b01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774b06 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12774b08 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774b0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12774b0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12774b0f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774b11 jl 0x12774b30 */
  if ((C.sf!=C.of)) goto L_12774b30;
  /* 12774b13 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774b16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12774b18 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12774b1a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12774b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774b1f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12774b22 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774b24 jg 0x12774b30 */
  if ((!C.zf&&C.sf==C.of)) goto L_12774b30;
  /* 12774b26 mov eax, 2 */
  EAX = (0x2u);
  /* 12774b2b jmp 0x12774c94 */
  goto L_12774c94;
L_12774b30:;
  /* 12774b30 jmp 0x12774ae1 */
  goto L_12774ae1;
L_12774b32:;
  /* 12774b32 mov eax, 1 */
  EAX = (0x1u);
  /* 12774b37 jmp 0x12774c94 */
  goto L_12774c94;
L_12774b3c:;
  /* 12774b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12774b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12774b40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12774b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12774b44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774b47 push edx */
  push32((uint32_t)(EDX));
  /* 12774b48 push 9 */
  push32((uint32_t)(0x9u));
  /* 12774b4a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12774b4d push eax */
  push32((uint32_t)(EAX));
  /* 12774b4e call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x12774b54u);
  /* 12774b54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12774b57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774b5b jne 0x12774b64 */
  if (!C.zf) goto L_12774b64;
  /* 12774b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774b5f jmp 0x12774c94 */
  goto L_12774c94;
L_12774b64:;
  /* 12774b64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12774b6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12774b6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12774b70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774b73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12774b75 call 0x12767ea0 */
  push32(0x12774b7au); f_12767ea0();
  /* 12774b7a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12774b7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12774b80 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12774b83 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12774b86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12774b8d jmp 0x12774ba6 */
  goto L_12774ba6;
  /* 12774b8f mov eax, 1 */
  EAX = (0x1u);
  /* 12774b94 ret  */
  ESPCHK(0x127748b0u, _esp0);
  ESP += 4; return;
  /* 12774b95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12774b98 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12774b9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12774ba6:;
  /* 12774ba6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774baa jne 0x12774bb3 */
  if (!C.zf) goto L_12774bb3;
  /* 12774bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774bae jmp 0x12774c94 */
  goto L_12774c94;
L_12774bb3:;
  /* 12774bb3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12774bb6 push edx */
  push32((uint32_t)(EDX));
  /* 12774bb7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12774bba push eax */
  push32((uint32_t)(EAX));
  /* 12774bbb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12774bbe push ecx */
  push32((uint32_t)(ECX));
  /* 12774bbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12774bc2 push edx */
  push32((uint32_t)(EDX));
  /* 12774bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12774bc5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12774bc8 push eax */
  push32((uint32_t)(EAX));
  /* 12774bc9 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x12774bcfu);
  /* 12774bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774bd1 jne 0x12774bda */
  if (!C.zf) goto L_12774bda;
  /* 12774bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774bd5 jmp 0x12774c94 */
  goto L_12774c94;
L_12774bda:;
  /* 12774bda push 0 */
  push32((uint32_t)(0x0u));
  /* 12774bdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12774bde mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12774be1 push ecx */
  push32((uint32_t)(ECX));
  /* 12774be2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774be5 push edx */
  push32((uint32_t)(EDX));
  /* 12774be6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12774be8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12774beb push eax */
  push32((uint32_t)(EAX));
  /* 12774bec call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x12774bf2u);
  /* 12774bf2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12774bf5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774bf9 jne 0x12774c02 */
  if (!C.zf) goto L_12774c02;
  /* 12774bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774bfd jmp 0x12774c94 */
  goto L_12774c94;
L_12774c02:;
  /* 12774c02 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12774c09 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774c0c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12774c0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774c11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12774c13 call 0x12767ea0 */
  push32(0x12774c18u); f_12767ea0();
  /* 12774c18 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12774c1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12774c1e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12774c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12774c24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12774c2b jmp 0x12774c44 */
  goto L_12774c44;
  /* 12774c2d mov eax, 1 */
  EAX = (0x1u);
  /* 12774c32 ret  */
  ESPCHK(0x127748b0u, _esp0);
  ESP += 4; return;
  /* 12774c33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12774c36 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12774c3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12774c44:;
  /* 12774c44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774c48 jne 0x12774c4e */
  if (!C.zf) goto L_12774c4e;
  /* 12774c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774c4c jmp 0x12774c94 */
  goto L_12774c94;
L_12774c4e:;
  /* 12774c4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774c51 push edx */
  push32((uint32_t)(EDX));
  /* 12774c52 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12774c55 push eax */
  push32((uint32_t)(EAX));
  /* 12774c56 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12774c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12774c5a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12774c5d push edx */
  push32((uint32_t)(EDX));
  /* 12774c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12774c60 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12774c63 push eax */
  push32((uint32_t)(EAX));
  /* 12774c64 call dword ptr [0x127932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932f8))), 0x12774c6au);
  /* 12774c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774c6c jne 0x12774c72 */
  if (!C.zf) goto L_12774c72;
  /* 12774c6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774c70 jmp 0x12774c94 */
  goto L_12774c94;
L_12774c72:;
  /* 12774c72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12774c75 push ecx */
  push32((uint32_t)(ECX));
  /* 12774c76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12774c79 push edx */
  push32((uint32_t)(EDX));
  /* 12774c7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12774c7d push eax */
  push32((uint32_t)(EAX));
  /* 12774c7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12774c81 push ecx */
  push32((uint32_t)(ECX));
  /* 12774c82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774c85 push edx */
  push32((uint32_t)(EDX));
  /* 12774c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774c89 push eax */
  push32((uint32_t)(EAX));
  /* 12774c8a call dword ptr [0x127932a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932a8))), 0x12774c90u);
  /* 12774c90 jmp 0x12774c94 */
  goto L_12774c94;
L_12774c92:;
  /* 12774c92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12774c94:;
  /* 12774c94 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12774c97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774c9a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12774ca1 pop edi */
  EDI = (pop32());
  /* 12774ca2 pop esi */
  ESI = (pop32());
  /* 12774ca3 pop ebx */
  EBX = (pop32());
  /* 12774ca4 mov esp, ebp */
  ESP = (EBP);
  /* 12774ca6 pop ebp */
  EBP = (pop32());
  /* 12774ca7 ret  */
  ESPCHK(0x127748b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cb0 @ 0x12774cb0 (80 bytes, 32 insns) */
void f_12774cb0(void) {
  FTRACE(0x12774cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12774cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12774cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12774cb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12774cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12774cc2:;
  /* 12774cc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774cc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774ccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12774cce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774cd0 je 0x12774ce7 */
  if (C.zf) goto L_12774ce7;
  /* 12774cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774cd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12774cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774cda je 0x12774ce7 */
  if (C.zf) goto L_12774ce7;
  /* 12774cdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774cdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12774ce5 jmp 0x12774cc2 */
  goto L_12774cc2;
L_12774ce7:;
  /* 12774ce7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774cea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12774ced test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12774cef jne 0x12774cf9 */
  if (!C.zf) goto L_12774cf9;
  /* 12774cf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774cf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774cf7 jmp 0x12774cfc */
  goto L_12774cfc;
L_12774cf9:;
  /* 12774cf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12774cfc:;
  /* 12774cfc mov esp, ebp */
  ESP = (EBP);
  /* 12774cfe pop ebp */
  EBP = (pop32());
  /* 12774cff ret  */
  ESPCHK(0x12774cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d00 @ 0x12774d00 (736 bytes, 224 insns) */
void f_12774d00(void) {
  FTRACE(0x12774d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12774d01 mov ebp, esp */
  EBP = (ESP);
  /* 12774d03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774d06 push esi */
  push32((uint32_t)(ESI));
  /* 12774d07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d0b je 0x12774d2c */
  if (C.zf) goto L_12774d2c;
  /* 12774d0d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12774d0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774d12 push eax */
  push32((uint32_t)(EAX));
  /* 12774d13 call 0x12775150 */
  push32(0x12774d18u); f_12775150();
  /* 12774d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774d1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12774d1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d22 je 0x12774d2c */
  if (C.zf) goto L_12774d2c;
  /* 12774d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774d27 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d2a jne 0x12774d34 */
  if (!C.zf) goto L_12774d34;
L_12774d2c:;
  /* 12774d2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774d2f jmp 0x12774fdb */
  goto L_12774fdb;
L_12774d34:;
  /* 12774d34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12774d37 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12774d3b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12774d3d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774d3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12774d40 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12774d43 mov ecx, dword ptr [0x1279067c] */
  ECX = (r32((uint32_t)(0x1279067c)));
  /* 12774d49 cmp ecx, dword ptr [0x12790680] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12790680))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d4f jne 0x12774d65 */
  if (!C.zf) goto L_12774d65;
  /* 12774d51 mov edx, dword ptr [0x1279067c] */
  EDX = (r32((uint32_t)(0x1279067c)));
  /* 12774d57 push edx */
  push32((uint32_t)(EDX));
  /* 12774d58 call 0x12775060 */
  push32(0x12774d5du); f_12775060();
  /* 12774d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774d60 mov dword ptr [0x1279067c], eax */
  w32((uint32_t)(0x1279067c), (EAX));
L_12774d65:;
  /* 12774d65 cmp dword ptr [0x1279067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d6c jne 0x12774e25 */
  if (!C.zf) goto L_12774e25;
  /* 12774d72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d76 je 0x12774d97 */
  if (C.zf) goto L_12774d97;
  /* 12774d78 cmp dword ptr [0x12790684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d7f je 0x12774d97 */
  if (C.zf) goto L_12774d97;
  /* 12774d81 call 0x12774800 */
  push32(0x12774d86u); f_12774800();
  /* 12774d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12774d88 je 0x12774d92 */
  if (C.zf) goto L_12774d92;
  /* 12774d8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774d8d jmp 0x12774fdb */
  goto L_12774fdb;
L_12774d92:;
  /* 12774d92 jmp 0x12774e25 */
  goto L_12774e25;
L_12774d97:;
  /* 12774d97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774d9b je 0x12774da4 */
  if (C.zf) goto L_12774da4;
  /* 12774d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774d9f jmp 0x12774fdb */
  goto L_12774fdb;
L_12774da4:;
  /* 12774da4 cmp dword ptr [0x1279067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774dab jne 0x12774de4 */
  if (!C.zf) goto L_12774de4;
  /* 12774dad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12774db2 push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 12774db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12774db9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12774dbb call 0x12764d00 */
  push32(0x12774dc0u); f_12764d00();
  /* 12774dc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774dc3 mov dword ptr [0x1279067c], eax */
  w32((uint32_t)(0x1279067c), (EAX));
  /* 12774dc8 cmp dword ptr [0x1279067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774dcf jne 0x12774dd9 */
  if (!C.zf) goto L_12774dd9;
  /* 12774dd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774dd4 jmp 0x12774fdb */
  goto L_12774fdb;
L_12774dd9:;
  /* 12774dd9 mov eax, dword ptr [0x1279067c] */
  EAX = (r32((uint32_t)(0x1279067c)));
  /* 12774dde mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12774de4:;
  /* 12774de4 cmp dword ptr [0x12790684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774deb jne 0x12774e25 */
  if (!C.zf) goto L_12774e25;
  /* 12774ded push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12774df2 push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 12774df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12774df9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12774dfb call 0x12764d00 */
  push32(0x12774e00u); f_12764d00();
  /* 12774e00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774e03 mov dword ptr [0x12790684], eax */
  w32((uint32_t)(0x12790684), (EAX));
  /* 12774e08 cmp dword ptr [0x12790684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774e0f jne 0x12774e19 */
  if (!C.zf) goto L_12774e19;
  /* 12774e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774e14 jmp 0x12774fdb */
  goto L_12774fdb;
L_12774e19:;
  /* 12774e19 mov ecx, dword ptr [0x12790684] */
  ECX = (r32((uint32_t)(0x12790684)));
  /* 12774e1f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12774e25:;
  /* 12774e25 mov edx, dword ptr [0x1279067c] */
  EDX = (r32((uint32_t)(0x1279067c)));
  /* 12774e2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12774e2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12774e31 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774e34 push eax */
  push32((uint32_t)(EAX));
  /* 12774e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774e38 push ecx */
  push32((uint32_t)(ECX));
  /* 12774e39 call 0x12774fe0 */
  push32(0x12774e3eu); f_12774fe0();
  /* 12774e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12774e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774e48 jl 0x12774ee1 */
  if ((C.sf!=C.of)) goto L_12774ee1;
  /* 12774e4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774e51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774e54 je 0x12774ee1 */
  if (C.zf) goto L_12774ee1;
  /* 12774e5a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774e5e je 0x12774ed3 */
  if (C.zf) goto L_12774ed3;
  /* 12774e60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12774e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774e65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774e68 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12774e6b push edx */
  push32((uint32_t)(EDX));
  /* 12774e6c call 0x12765790 */
  push32(0x12774e71u); f_12765790();
  /* 12774e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774e74 jmp 0x12774e7f */
  goto L_12774e7f;
L_12774e76:;
  /* 12774e76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774e79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774e7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12774e7f:;
  /* 12774e7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774e82 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774e85 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774e89 je 0x12774ea0 */
  if (C.zf) goto L_12774ea0;
  /* 12774e8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774e8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774e91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774e94 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12774e97 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12774e9b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12774e9e jmp 0x12774e76 */
  goto L_12774e76;
L_12774ea0:;
  /* 12774ea0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12774ea5 push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 12774eaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12774eac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774eaf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12774eb2 push eax */
  push32((uint32_t)(EAX));
  /* 12774eb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12774eb7 call 0x12765190 */
  push32(0x12774ebcu); f_12765190();
  /* 12774ebc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774ebf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12774ec2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774ec6 je 0x12774ed1 */
  if (C.zf) goto L_12774ed1;
  /* 12774ec8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774ecb mov dword ptr [0x1279067c], edx */
  w32((uint32_t)(0x1279067c), (EDX));
L_12774ed1:;
  /* 12774ed1 jmp 0x12774edf */
  goto L_12774edf;
L_12774ed3:;
  /* 12774ed3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774ed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774edc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12774edf:;
  /* 12774edf jmp 0x12774f54 */
  goto L_12774f54;
L_12774ee1:;
  /* 12774ee1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774ee5 jne 0x12774f4d */
  if (!C.zf) goto L_12774f4d;
  /* 12774ee7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774eeb jge 0x12774ef5 */
  if ((C.sf==C.of)) goto L_12774ef5;
  /* 12774eed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774ef0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12774ef2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12774ef5:;
  /* 12774ef5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12774efa push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 12774eff push 2 */
  push32((uint32_t)(0x2u));
  /* 12774f01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774f04 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12774f0b push edx */
  push32((uint32_t)(EDX));
  /* 12774f0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774f0f push eax */
  push32((uint32_t)(EAX));
  /* 12774f10 call 0x12765190 */
  push32(0x12774f15u); f_12765190();
  /* 12774f15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774f18 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12774f1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774f1f jne 0x12774f29 */
  if (!C.zf) goto L_12774f29;
  /* 12774f21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12774f24 jmp 0x12774fdb */
  goto L_12774fdb;
L_12774f29:;
  /* 12774f29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774f2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774f2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774f32 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12774f35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12774f38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774f3b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12774f43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12774f46 mov dword ptr [0x1279067c], eax */
  w32((uint32_t)(0x1279067c), (EAX));
  /* 12774f4b jmp 0x12774f54 */
  goto L_12774f54;
L_12774f4d:;
  /* 12774f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12774f4f jmp 0x12774fdb */
  goto L_12774fdb;
L_12774f54:;
  /* 12774f54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774f58 je 0x12774fd9 */
  if (C.zf) goto L_12774fd9;
  /* 12774f5a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12774f5f push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 12774f64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12774f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774f69 push ecx */
  push32((uint32_t)(ECX));
  /* 12774f6a call 0x12767b30 */
  push32(0x12774f6fu); f_12767b30();
  /* 12774f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774f72 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774f75 push eax */
  push32((uint32_t)(EAX));
  /* 12774f76 call 0x12764d00 */
  push32(0x12774f7bu); f_12764d00();
  /* 12774f7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774f7e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12774f81 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774f85 je 0x12774fd9 */
  if (C.zf) goto L_12774fd9;
  /* 12774f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12774f8a push edx */
  push32((uint32_t)(EDX));
  /* 12774f8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774f8e push eax */
  push32((uint32_t)(EAX));
  /* 12774f8f call 0x12767cb0 */
  push32(0x12774f94u); f_12767cb0();
  /* 12774f94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12774f97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12774f9a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774f9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774fa0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774fa2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12774fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774fa8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12774fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774fae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774fb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12774fb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12774fb7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12774fb9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12774fbb not edx */
  EDX = (~(EDX));
  /* 12774fbd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12774fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12774fc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774fc4 push eax */
  push32((uint32_t)(EAX));
  /* 12774fc5 call dword ptr [0x127932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932a4))), 0x12774fcbu);
  /* 12774fcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12774fcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12774fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12774fd1 call 0x12765790 */
  push32(0x12774fd6u); f_12765790();
  /* 12774fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12774fd9:;
  /* 12774fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12774fdb:;
  /* 12774fdb pop esi */
  ESI = (pop32());
  /* 12774fdc mov esp, ebp */
  ESP = (EBP);
  /* 12774fde pop ebp */
  EBP = (pop32());
  /* 12774fdf ret  */
  ESPCHK(0x12774d00u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12774fe0 (124 bytes, 47 insns) */
void f_12774fe0(void) {
  FTRACE(0x12774fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12774fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12774fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12774fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12774fe4 mov eax, dword ptr [0x1279067c] */
  EAX = (r32((uint32_t)(0x1279067c)));
  /* 12774fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12774fec jmp 0x12774ff7 */
  goto L_12774ff7;
L_12774fee:;
  /* 12774fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774ff1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12774ff4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12774ff7:;
  /* 12774ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12774ffa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12774ffd je 0x1277504a */
  if (C.zf) goto L_1277504a;
  /* 12774fff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12775002 push eax */
  push32((uint32_t)(EAX));
  /* 12775003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12775006 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12775008 push edx */
  push32((uint32_t)(EDX));
  /* 12775009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277500c push eax */
  push32((uint32_t)(EAX));
  /* 1277500d call 0x127747b0 */
  push32(0x12775012u); f_127747b0();
  /* 12775012 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12775015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12775017 jne 0x12775048 */
  if (!C.zf) goto L_12775048;
  /* 12775019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277501c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1277501e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12775021 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12775025 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12775028 je 0x1277503a */
  if (C.zf) goto L_1277503a;
  /* 1277502a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277502d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1277502f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12775032 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12775036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12775038 jne 0x12775048 */
  if (!C.zf) goto L_12775048;
L_1277503a:;
  /* 1277503a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277503d sub eax, dword ptr [0x1279067c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279067c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12775043 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12775046 jmp 0x12775058 */
  goto L_12775058;
L_12775048:;
  /* 12775048 jmp 0x12774fee */
  goto L_12774fee;
L_1277504a:;
  /* 1277504a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1277504d sub eax, dword ptr [0x1279067c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1279067c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12775053 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12775056 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12775058:;
  /* 12775058 mov esp, ebp */
  ESP = (EBP);
  /* 1277505a pop ebp */
  EBP = (pop32());
  /* 1277505b ret  */
  ESPCHK(0x12774fe0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12775060 (238 bytes, 80 insns) */
void f_12775060(void) {
  FTRACE(0x12775060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12775060 push ebp */
  push32((uint32_t)(EBP));
  /* 12775061 mov ebp, esp */
  EBP = (ESP);
  /* 12775063 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12775066 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1277506d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12775070 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12775073 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12775077 jne 0x12775080 */
  if (!C.zf) goto L_12775080;
  /* 12775079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1277507b jmp 0x1277514a */
  goto L_1277514a;
L_12775080:;
  /* 12775080 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12775083 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12775085 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12775088 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1277508b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1277508e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12775090 je 0x1277509d */
  if (C.zf) goto L_1277509d;
  /* 12775092 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12775095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12775098 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1277509b jmp 0x12775080 */
  goto L_12775080;
L_1277509d:;
  /* 1277509d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 127750a2 push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 127750a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127750a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127750ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 127750b3 push eax */
  push32((uint32_t)(EAX));
  /* 127750b4 call 0x12764d00 */
  push32(0x127750b9u); f_12764d00();
  /* 127750b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127750bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127750bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127750c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127750c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127750c9 jne 0x127750d5 */
  if (!C.zf) goto L_127750d5;
  /* 127750cb push 9 */
  push32((uint32_t)(0x9u));
  /* 127750cd call 0x12763c70 */
  push32(0x127750d2u); f_12763c70();
  /* 127750d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127750d5:;
  /* 127750d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127750d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127750db:;
  /* 127750db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127750de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127750e1 je 0x1277513e */
  if (C.zf) goto L_1277513e;
  /* 127750e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 127750e8 push 0x1278cc08 */
  push32((uint32_t)(0x1278cc08u));
  /* 127750ed push 2 */
  push32((uint32_t)(0x2u));
  /* 127750ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127750f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127750f4 push edx */
  push32((uint32_t)(EDX));
  /* 127750f5 call 0x12767b30 */
  push32(0x127750fau); f_12767b30();
  /* 127750fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127750fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12775100 push eax */
  push32((uint32_t)(EAX));
  /* 12775101 call 0x12764d00 */
  push32(0x12775106u); f_12764d00();
  /* 12775106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12775109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277510c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1277510e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12775111 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12775114 je 0x1277512a */
  if (C.zf) goto L_1277512a;
  /* 12775116 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12775119 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1277511b push ecx */
  push32((uint32_t)(ECX));
  /* 1277511c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1277511f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12775121 push eax */
  push32((uint32_t)(EAX));
  /* 12775122 call 0x12767cb0 */
  push32(0x12775127u); f_12767cb0();
  /* 12775127 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1277512a:;
  /* 1277512a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1277512d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12775130 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12775133 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12775136 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12775139 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1277513c jmp 0x127750db */
  goto L_127750db;
L_1277513e:;
  /* 1277513e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12775141 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12775147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1277514a:;
  /* 1277514a mov esp, ebp */
  ESP = (EBP);
  /* 1277514c pop ebp */
  EBP = (pop32());
  /* 1277514d ret  */
  ESPCHK(0x12775060u, _esp0);
  ESP += 4; return;
}

/* FUN_10015150 @ 0x12775150 (237 bytes, 81 insns) */
void f_12775150(void) {
  FTRACE(0x12775150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12775150 push ebp */
  push32((uint32_t)(EBP));
  /* 12775151 mov ebp, esp */
  EBP = (ESP);
  /* 12775153 push ecx */
  push32((uint32_t)(ECX));
  /* 12775154 cmp dword ptr [0x12791dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12791dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1277515b jne 0x12775172 */
  if (!C.zf) goto L_12775172;
  /* 1277515d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12775160 push eax */
  push32((uint32_t)(EAX));
  /* 12775161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12775164 push ecx */
  push32((uint32_t)(ECX));
  /* 12775165 call 0x12775250 */
  push32(0x1277516au); f_12775250();
  /* 1277516a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277516d jmp 0x12775239 */
  goto L_12775239;
L_12775172:;
  /* 12775172 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12775174 call 0x12768700 */
  push32(0x12775179u); f_12768700();
  /* 12775179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1277517c jmp 0x12775187 */
  goto L_12775187;
L_1277517e:;
  /* 1277517e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12775181 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12775184 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12775187:;
  /* 12775187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1277518a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1277518e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12775192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12775195 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1277519b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1277519d je 0x1277521b */
  if (C.zf) goto L_1277521b;
  /* 1277519f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127751a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127751a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127751a9 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 127751af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127751b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127751b4 je 0x12775206 */
  if (C.zf) goto L_12775206;
  /* 127751b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127751b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127751bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127751bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127751c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127751c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127751c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127751c8 jne 0x127751d8 */
  if (!C.zf) goto L_127751d8;
  /* 127751ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127751cc call 0x127687a0 */
  push32(0x127751d1u); f_127687a0();
  /* 127751d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127751d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127751d6 jmp 0x12775239 */
  goto L_12775239;
L_127751d8:;
  /* 127751d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127751db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127751e1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127751e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127751e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127751e9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127751eb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127751ed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127751f0 jne 0x12775204 */
  if (!C.zf) goto L_12775204;
  /* 127751f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127751f4 call 0x127687a0 */
  push32(0x127751f9u); f_127687a0();
  /* 127751f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127751fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127751ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12775202 jmp 0x12775239 */
  goto L_12775239;
L_12775204:;
  /* 12775204 jmp 0x12775216 */
  goto L_12775216;
L_12775206:;
  /* 12775206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12775209 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1277520f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12775212 jne 0x12775216 */
  if (!C.zf) goto L_12775216;
  /* 12775214 jmp 0x1277521b */
  goto L_1277521b;
L_12775216:;
  /* 12775216 jmp 0x1277517e */
  goto L_1277517e;
L_1277521b:;
  /* 1277521b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1277521d call 0x127687a0 */
  push32(0x12775222u); f_127687a0();
  /* 12775222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12775225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12775228 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277522d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12775230 jne 0x12775237 */
  if (!C.zf) goto L_12775237;
  /* 12775232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12775235 jmp 0x12775239 */
  goto L_12775239;
L_12775237:;
  /* 12775237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12775239:;
  /* 12775239 mov esp, ebp */
  ESP = (EBP);
  /* 1277523b pop ebp */
  EBP = (pop32());
  /* 1277523c ret  */
  ESPCHK(0x12775150u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12775250 (193 bytes, 87 insns) */
void f_12775250(void) {
  FTRACE(0x12775250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12775250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12775252 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12775256 push ebx */
  push32((uint32_t)(EBX));
  /* 12775257 mov ebx, eax */
  EBX = (EAX);
  /* 12775259 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1277525c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12775260 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12775266 je 0x1277527b */
  if (C.zf) goto L_1277527b;
L_12775268:;
  /* 12775268 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1277526a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1277526b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1277526d je 0x12775240 */
  if (C.zf) { jmp_ind(0x12775240u); return; }
  /* 1277526f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12775271 je 0x127752c4 */
  if (C.zf) goto L_127752c4;
  /* 12775273 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12775279 jne 0x12775268 */
  if (!C.zf) goto L_12775268;
L_1277527b:;
  /* 1277527b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1277527d push edi */
  push32((uint32_t)(EDI));
  /* 1277527e mov eax, ebx */
  EAX = (EBX);
  /* 12775280 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12775283 push esi */
  push32((uint32_t)(ESI));
  /* 12775284 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12775286:;
  /* 12775286 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12775288 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1277528d mov eax, ecx */
  EAX = (ECX);
  /* 1277528f mov esi, edi */
  ESI = (EDI);
  /* 12775291 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12775293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12775295 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12775297 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1277529a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1277529d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1277529f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 127752a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127752a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 127752aa jne 0x127752c8 */
  if (!C.zf) goto L_127752c8;
  /* 127752ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127752b1 je 0x12775286 */
  if (C.zf) goto L_12775286;
  /* 127752b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127752b8 jne 0x127752c2 */
  if (!C.zf) goto L_127752c2;
  /* 127752ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 127752c0 jne 0x12775286 */
  if (!C.zf) goto L_12775286;
L_127752c2:;
  /* 127752c2 pop esi */
  ESI = (pop32());
  /* 127752c3 pop edi */
  EDI = (pop32());
L_127752c4:;
  /* 127752c4 pop ebx */
  EBX = (pop32());
  /* 127752c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127752c7 ret  */
  ESPCHK(0x12775250u, _esp0);
  ESP += 4; return;
L_127752c8:;
  /* 127752c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127752cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127752cd je 0x12775305 */
  if (C.zf) goto L_12775305;
  /* 127752cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127752d1 je 0x127752c2 */
  if (C.zf) goto L_127752c2;
  /* 127752d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127752d5 je 0x127752fe */
  if (C.zf) goto L_127752fe;
  /* 127752d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127752d9 je 0x127752c2 */
  if (C.zf) goto L_127752c2;
  /* 127752db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127752de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127752e0 je 0x127752f7 */
  if (C.zf) goto L_127752f7;
  /* 127752e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127752e4 je 0x127752c2 */
  if (C.zf) goto L_127752c2;
  /* 127752e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127752e8 je 0x127752f0 */
  if (C.zf) goto L_127752f0;
  /* 127752ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127752ec je 0x127752c2 */
  if (C.zf) goto L_127752c2;
  /* 127752ee jmp 0x12775286 */
  goto L_12775286;
L_127752f0:;
  /* 127752f0 pop esi */
  ESI = (pop32());
  /* 127752f1 pop edi */
  EDI = (pop32());
  /* 127752f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 127752f5 pop ebx */
  EBX = (pop32());
  /* 127752f6 ret  */
  ESPCHK(0x12775250u, _esp0);
  ESP += 4; return;
L_127752f7:;
  /* 127752f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 127752fa pop esi */
  ESI = (pop32());
  /* 127752fb pop edi */
  EDI = (pop32());
  /* 127752fc pop ebx */
  EBX = (pop32());
  /* 127752fd ret  */
  ESPCHK(0x12775250u, _esp0);
  ESP += 4; return;
L_127752fe:;
  /* 127752fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12775301 pop esi */
  ESI = (pop32());
  /* 12775302 pop edi */
  EDI = (pop32());
  /* 12775303 pop ebx */
  EBX = (pop32());
  /* 12775304 ret  */
  ESPCHK(0x12775250u, _esp0);
  ESP += 4; return;
L_12775305:;
  /* 12775305 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12775308 pop esi */
  ESI = (pop32());
  /* 12775309 pop edi */
  EDI = (pop32());
  /* 1277530a pop ebx */
  EBX = (pop32());
  /* 1277530b ret  */
  ESPCHK(0x12775250u, _esp0);
  ESP += 4; return;
  /* 1277530c jmp dword ptr [0x1279333c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1279333c)))); return;
}

/* RtlUnwind @ 0x1277545c (6 bytes, 1 insns) */
void f_1277545c(void) {
  FTRACE(0x1277545cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1277545c jmp dword ptr [0x127932e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x127932e0)))); return;
}

