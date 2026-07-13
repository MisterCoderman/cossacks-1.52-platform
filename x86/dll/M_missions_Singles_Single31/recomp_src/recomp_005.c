#include "recomp.h"

/* FUN_1001f0d0 @ 0x114df0d0 (173 bytes, 64 insns) */
void f_114df0d0(void) {
  FTRACE(0x114df0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114df0d1 mov ebp, esp */
  EBP = (ESP);
  /* 114df0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114df0d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114df0db cmp dword ptr [0x114ff4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df0e2 je 0x114df0fa */
  if (C.zf) goto L_114df0fa;
  /* 114df0e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df0e7 push eax */
  push32((uint32_t)(EAX));
  /* 114df0e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df0eb push ecx */
  push32((uint32_t)(ECX));
  /* 114df0ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df0ef push edx */
  push32((uint32_t)(EDX));
  /* 114df0f0 call 0x114df180 */
  push32(0x114df0f5u); f_114df180();
  /* 114df0f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df0f8 jmp 0x114df179 */
  goto L_114df179;
L_114df0fa:;
  /* 114df0fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df0fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df100 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df102 jae 0x114df170 */
  if (!C.cf) goto L_114df170;
  /* 114df104 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df107 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df10a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 114df10d jmp 0x114df118 */
  goto L_114df118;
L_114df10f:;
  /* 114df10f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df112 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df115 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_114df118:;
  /* 114df118 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df11b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df11e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114df120 je 0x114df154 */
  if (C.zf) goto L_114df154;
  /* 114df122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df125 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114df126 mov ecx, 0xa */
  ECX = (0xau);
  /* 114df12b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114df12d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df130 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df133 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df135 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df138 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 114df13b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df13e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114df13f mov ecx, 0xa */
  ECX = (0xau);
  /* 114df144 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114df146 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114df149 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df14c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df14f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114df152 jmp 0x114df10f */
  goto L_114df10f;
L_114df154:;
  /* 114df154 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df157 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df159 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df15c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df15f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114df161 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df164 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df166 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df169 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df16c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114df16e jmp 0x114df179 */
  goto L_114df179;
L_114df170:;
  /* 114df170 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df173 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114df179:;
  /* 114df179 mov esp, ebp */
  ESP = (EBP);
  /* 114df17b pop ebp */
  EBP = (pop32());
  /* 114df17c ret  */
  ESPCHK(0x114df0d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x114df180 (172 bytes, 65 insns) */
void f_114df180(void) {
  FTRACE(0x114df180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df180 push ebp */
  push32((uint32_t)(EBP));
  /* 114df181 mov ebp, esp */
  EBP = (ESP);
  /* 114df183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df186 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df189 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df18b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114df18e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df191 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df194 jbe 0x114df1db */
  if ((C.cf||C.zf)) goto L_114df1db;
L_114df196:;
  /* 114df196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df199 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114df19a mov ecx, 0xa */
  ECX = (0xau);
  /* 114df19f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114df1a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df1a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114df1a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df1af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114df1b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df1b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df1b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df1ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df1bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114df1bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df1c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114df1c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 114df1c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114df1ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114df1cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df1d1 jle 0x114df1db */
  if ((C.zf||C.sf!=C.of)) goto L_114df1db;
  /* 114df1d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df1d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df1d9 ja 0x114df196 */
  if ((!C.cf&&!C.zf)) goto L_114df196;
L_114df1db:;
  /* 114df1db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df1de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df1e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114df1e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df1e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114df1eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df1f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114df1f4:;
  /* 114df1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df1f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 114df1fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df1ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df202 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df204 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114df206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df209 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df20c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114df20f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df212 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114df215 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 114df217 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df21a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df21d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114df220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df223 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df226 jb 0x114df1f4 */
  if (C.cf) goto L_114df1f4;
  /* 114df228 mov esp, ebp */
  ESP = (EBP);
  /* 114df22a pop ebp */
  EBP = (pop32());
  /* 114df22b ret  */
  ESPCHK(0x114df180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f230 @ 0x114df230 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_114df230(void) {
  FTRACE(0x114df230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df230 push ebp */
  push32((uint32_t)(EBP));
  /* 114df231 mov ebp, esp */
  EBP = (ESP);
  /* 114df233 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_114df236:;
  /* 114df236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df239 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114df23c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114df23e je 0x114df6ac */
  if (C.zf) goto L_114df6ac;
  /* 114df244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df247 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df24a je 0x114df6ac */
  if (C.zf) goto L_114df6ac;
  /* 114df250 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114df254 mov dword ptr [0x114ff4b4], 0 */
  w32((uint32_t)(0x114ff4b4), (0x0u));
  /* 114df25e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114df265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df268 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114df26b jmp 0x114df276 */
  goto L_114df276;
L_114df26d:;
  /* 114df26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df270 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df273 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114df276:;
  /* 114df276 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df279 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114df27c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df27f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114df282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df288 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114df28b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df28d jne 0x114df291 */
  if (!C.zf) goto L_114df291;
  /* 114df28f jmp 0x114df26d */
  goto L_114df26d;
L_114df291:;
  /* 114df291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df294 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df297 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114df29a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df29d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114df2a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114df2a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114df2a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df2a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114df2ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df2b0 ja 0x114df600 */
  if ((!C.cf&&!C.zf)) goto L_114df600;
  /* 114df2b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114df2b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df2bb mov al, byte ptr [ecx + 0x114df6dc] */
  AL = (r8((uint32_t)(ECX + 0x114df6dc)));
  /* 114df2c1 jmp dword ptr [eax*4 + 0x114df6b0] */
  switch (EAX) {
    case 0: goto L_114df51f;
    case 1: goto L_114df403;
    case 2: goto L_114df38e;
    case 3: goto L_114df2c8;
    case 4: goto L_114df306;
    case 5: goto L_114df367;
    case 6: goto L_114df3b5;
    case 7: goto L_114df3dc;
    case 8: goto L_114df44a;
    case 9: goto L_114df344;
    case 10: goto L_114df600;
    default: x86_unimpl("switch@0x114df2c1 out of table"); return;
  }
L_114df2c8:;
  /* 114df2c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df2cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114df2ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114df2d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df2d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114df2d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df2db ja 0x114df301 */
  if ((!C.cf&&!C.zf)) goto L_114df301;
  /* 114df2dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114df2e0 jmp dword ptr [ecx*4 + 0x114df72f] */
  switch (ECX) {
    case 0: goto L_114df2e7;
    case 1: goto L_114df2f1;
    case 2: goto L_114df2f7;
    case 3: goto L_114df2fd;
    case 4: goto L_114df325;
    case 5: goto L_114df32f;
    case 6: goto L_114df335;
    case 7: goto L_114df33b;
    default: x86_unimpl("switch@0x114df2e0 out of table"); return;
  }
L_114df2e7:;
  /* 114df2e7 mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df2f1:;
  /* 114df2f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 114df2f5 jmp 0x114df301 */
  goto L_114df301;
L_114df2f7:;
  /* 114df2f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 114df2fb jmp 0x114df301 */
  goto L_114df301;
L_114df2fd:;
  /* 114df2fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_114df301:;
  /* 114df301 jmp 0x114df600 */
  goto L_114df600;
L_114df306:;
  /* 114df306 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df309 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114df30c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114df30f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df312 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114df315 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df319 ja 0x114df33f */
  if ((!C.cf&&!C.zf)) goto L_114df33f;
  /* 114df31b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114df31e jmp dword ptr [ecx*4 + 0x114df73f] */
  switch (ECX) {
    case 0: goto L_114df325;
    case 1: goto L_114df32f;
    case 2: goto L_114df335;
    case 3: goto L_114df33b;
    default: x86_unimpl("switch@0x114df31e out of table"); return;
  }
L_114df325:;
  /* 114df325 mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df32f:;
  /* 114df32f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 114df333 jmp 0x114df33f */
  goto L_114df33f;
L_114df335:;
  /* 114df335 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 114df339 jmp 0x114df33f */
  goto L_114df33f;
L_114df33b:;
  /* 114df33b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_114df33f:;
  /* 114df33f jmp 0x114df600 */
  goto L_114df600;
L_114df344:;
  /* 114df344 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df347 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114df34a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df34e je 0x114df358 */
  if (C.zf) goto L_114df358;
  /* 114df350 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df354 je 0x114df35e */
  if (C.zf) goto L_114df35e;
  /* 114df356 jmp 0x114df362 */
  goto L_114df362;
L_114df358:;
  /* 114df358 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 114df35c jmp 0x114df362 */
  goto L_114df362;
L_114df35e:;
  /* 114df35e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_114df362:;
  /* 114df362 jmp 0x114df600 */
  goto L_114df600;
L_114df367:;
  /* 114df367 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df36a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114df36d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df371 je 0x114df37b */
  if (C.zf) goto L_114df37b;
  /* 114df373 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df377 je 0x114df385 */
  if (C.zf) goto L_114df385;
  /* 114df379 jmp 0x114df389 */
  goto L_114df389;
L_114df37b:;
  /* 114df37b mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df385:;
  /* 114df385 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_114df389:;
  /* 114df389 jmp 0x114df600 */
  goto L_114df600;
L_114df38e:;
  /* 114df38e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df391 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114df394 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df398 je 0x114df3a2 */
  if (C.zf) goto L_114df3a2;
  /* 114df39a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df39e je 0x114df3ac */
  if (C.zf) goto L_114df3ac;
  /* 114df3a0 jmp 0x114df3b0 */
  goto L_114df3b0;
L_114df3a2:;
  /* 114df3a2 mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df3ac:;
  /* 114df3ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_114df3b0:;
  /* 114df3b0 jmp 0x114df600 */
  goto L_114df600;
L_114df3b5:;
  /* 114df3b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df3b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 114df3bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df3bf je 0x114df3c9 */
  if (C.zf) goto L_114df3c9;
  /* 114df3c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df3c5 je 0x114df3d3 */
  if (C.zf) goto L_114df3d3;
  /* 114df3c7 jmp 0x114df3d7 */
  goto L_114df3d7;
L_114df3c9:;
  /* 114df3c9 mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df3d3:;
  /* 114df3d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_114df3d7:;
  /* 114df3d7 jmp 0x114df600 */
  goto L_114df600;
L_114df3dc:;
  /* 114df3dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df3df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 114df3e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df3e6 je 0x114df3f0 */
  if (C.zf) goto L_114df3f0;
  /* 114df3e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df3ec je 0x114df3fa */
  if (C.zf) goto L_114df3fa;
  /* 114df3ee jmp 0x114df3fe */
  goto L_114df3fe;
L_114df3f0:;
  /* 114df3f0 mov dword ptr [0x114ff4b4], 1 */
  w32((uint32_t)(0x114ff4b4), (0x1u));
L_114df3fa:;
  /* 114df3fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_114df3fe:;
  /* 114df3fe jmp 0x114df600 */
  goto L_114df600;
L_114df403:;
  /* 114df403 push 0x114faccc */
  push32((uint32_t)(0x114facccu));
  /* 114df408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df40b push ecx */
  push32((uint32_t)(ECX));
  /* 114df40c call 0x114dfc60 */
  push32(0x114df411u); f_114dfc60();
  /* 114df411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114df416 jne 0x114df423 */
  if (!C.zf) goto L_114df423;
  /* 114df418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df41b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df41e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114df421 jmp 0x114df441 */
  goto L_114df441;
L_114df423:;
  /* 114df423 push 0x114facc8 */
  push32((uint32_t)(0x114facc8u));
  /* 114df428 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df42b push eax */
  push32((uint32_t)(EAX));
  /* 114df42c call 0x114dfc60 */
  push32(0x114df431u); f_114dfc60();
  /* 114df431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114df436 jne 0x114df441 */
  if (!C.zf) goto L_114df441;
  /* 114df438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df43b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df43e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114df441:;
  /* 114df441 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 114df445 jmp 0x114df600 */
  goto L_114df600;
L_114df44a:;
  /* 114df44a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df44d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df451 jg 0x114df461 */
  if ((!C.zf&&C.sf==C.of)) goto L_114df461;
  /* 114df453 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114df456 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 114df45c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114df45f jmp 0x114df46d */
  goto L_114df46d;
L_114df461:;
  /* 114df461 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114df464 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 114df46a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114df46d:;
  /* 114df46d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df471 jle 0x114df514 */
  if ((C.zf||C.sf!=C.of)) goto L_114df514;
  /* 114df477 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df47a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df47d jbe 0x114df514 */
  if ((C.cf||C.zf)) goto L_114df514;
  /* 114df483 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114df486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df488 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df48a mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114df490 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114df492 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114df496 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 114df49c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114df49e je 0x114df4d7 */
  if (C.zf) goto L_114df4d7;
  /* 114df4a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df4a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df4a6 jbe 0x114df4d7 */
  if ((C.cf||C.zf)) goto L_114df4d7;
  /* 114df4a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df4ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114df4b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114df4b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114df4b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df4b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df4bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114df4c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114df4c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df4c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114df4ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df4cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df4cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df4d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df4d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114df4d7:;
  /* 114df4d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df4dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114df4df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df4e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114df4e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df4eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df4ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114df4f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114df4f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df4f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114df4f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df4fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df4fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df501 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df504 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114df506 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df509 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df50c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114df50f jmp 0x114df46d */
  goto L_114df46d;
L_114df514:;
  /* 114df514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df517 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114df51a jmp 0x114df236 */
  goto L_114df236;
L_114df51f:;
  /* 114df51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df522 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114df525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114df527 je 0x114df5f2 */
  if (C.zf) goto L_114df5f2;
  /* 114df52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df530 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df533 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_114df536:;
  /* 114df536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df539 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114df53c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114df53e je 0x114df5f0 */
  if (C.zf) goto L_114df5f0;
  /* 114df544 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df547 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df54a je 0x114df5f0 */
  if (C.zf) goto L_114df5f0;
  /* 114df550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df553 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114df556 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df559 jne 0x114df569 */
  if (!C.zf) goto L_114df569;
  /* 114df55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df55e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df561 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114df564 jmp 0x114df5f0 */
  goto L_114df5f0;
L_114df569:;
  /* 114df569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df56c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114df56e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114df570 mov edx, dword ptr [0x114fd04c] */
  EDX = (r32((uint32_t)(0x114fd04c)));
  /* 114df576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df578 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 114df57c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114df581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114df583 je 0x114df5bc */
  if (C.zf) goto L_114df5bc;
  /* 114df585 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df588 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df58b jbe 0x114df5bc */
  if ((C.cf||C.zf)) goto L_114df5bc;
  /* 114df58d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df590 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df595 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114df597 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114df599 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df59c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df59e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df5a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df5a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114df5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df5a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df5ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114df5af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df5b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df5b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df5b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df5ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114df5bc:;
  /* 114df5bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df5bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df5c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df5c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114df5c6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114df5c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df5cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df5cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df5d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df5d3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114df5d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df5d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df5db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114df5de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df5e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df5e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df5e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df5e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114df5eb jmp 0x114df536 */
  goto L_114df536;
L_114df5f0:;
  /* 114df5f0 jmp 0x114df5fb */
  goto L_114df5fb;
L_114df5f2:;
  /* 114df5f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df5f5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df5f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114df5fb:;
  /* 114df5fb jmp 0x114df236 */
  goto L_114df236;
L_114df600:;
  /* 114df600 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114df604 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114df606 je 0x114df62c */
  if (C.zf) goto L_114df62c;
  /* 114df608 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114df60b push edx */
  push32((uint32_t)(EDX));
  /* 114df60c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df60f push eax */
  push32((uint32_t)(EAX));
  /* 114df610 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df613 push ecx */
  push32((uint32_t)(ECX));
  /* 114df614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df617 push edx */
  push32((uint32_t)(EDX));
  /* 114df618 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114df61b push eax */
  push32((uint32_t)(EAX));
  /* 114df61c call 0x114dea60 */
  push32(0x114df621u); f_114dea60();
  /* 114df621 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114df627 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114df62a jmp 0x114df6a7 */
  goto L_114df6a7;
L_114df62c:;
  /* 114df62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df62f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df631 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df633 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114df639 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114df63b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114df63f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 114df645 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114df647 je 0x114df678 */
  if (C.zf) goto L_114df678;
  /* 114df649 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df64c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df64e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df651 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df653 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114df655 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df658 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df65a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df65d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df660 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114df662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df668 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114df66b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df66e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df670 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df673 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df676 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114df678:;
  /* 114df678 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df67b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df67d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df680 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114df682 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114df684 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df687 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df689 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df68c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df68f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114df691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df697 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114df69a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df69d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df69f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df6a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df6a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114df6a7:;
  /* 114df6a7 jmp 0x114df236 */
  goto L_114df236;
L_114df6ac:;
  /* 114df6ac mov esp, ebp */
  ESP = (EBP);
  /* 114df6ae pop ebp */
  EBP = (pop32());
  /* 114df6af ret  */
  ESPCHK(0x114df230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f750 @ 0x114df750 (650 bytes, 178 insns) */
void f_114df750(void) {
  FTRACE(0x114df750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df750 push ebp */
  push32((uint32_t)(EBP));
  /* 114df751 mov ebp, esp */
  EBP = (ESP);
  /* 114df753 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df759 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df75d jne 0x114df8b9 */
  if (!C.zf) goto L_114df8b9;
  /* 114df763 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df766 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 114df76c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 114df772 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114df775 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114df77c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 114df786 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df788 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 114df78e push edx */
  push32((uint32_t)(EDX));
  /* 114df78f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df792 push eax */
  push32((uint32_t)(EAX));
  /* 114df793 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df796 push ecx */
  push32((uint32_t)(ECX));
  /* 114df797 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df79a push edx */
  push32((uint32_t)(EDX));
  /* 114df79b call 0x114e0a50 */
  push32(0x114df7a0u); f_114e0a50();
  /* 114df7a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df7a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114df7a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df7aa jne 0x114df83f */
  if (!C.zf) goto L_114df83f;
  /* 114df7b0 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114df7b6u);
  /* 114df7b6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df7b9 je 0x114df7c0 */
  if (C.zf) goto L_114df7c0;
  /* 114df7bb jmp 0x114df89d */
  goto L_114df89d;
L_114df7c0:;
  /* 114df7c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df7c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df7c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df7c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df7c9 push eax */
  push32((uint32_t)(EAX));
  /* 114df7ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df7cd push ecx */
  push32((uint32_t)(ECX));
  /* 114df7ce call 0x114e0a50 */
  push32(0x114df7d3u); f_114e0a50();
  /* 114df7d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df7d6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 114df7dc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df7e3 jne 0x114df7ea */
  if (!C.zf) goto L_114df7ea;
  /* 114df7e5 jmp 0x114df89d */
  goto L_114df89d;
L_114df7ea:;
  /* 114df7ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 114df7ec push 0x114facd4 */
  push32((uint32_t)(0x114facd4u));
  /* 114df7f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114df7f3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 114df7f9 push edx */
  push32((uint32_t)(EDX));
  /* 114df7fa call 0x114cb900 */
  push32(0x114df7ffu); f_114cb900();
  /* 114df7ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df802 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114df805 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df809 jne 0x114df810 */
  if (!C.zf) goto L_114df810;
  /* 114df80b jmp 0x114df89d */
  goto L_114df89d;
L_114df810:;
  /* 114df810 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114df817 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df819 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 114df81f push eax */
  push32((uint32_t)(EAX));
  /* 114df820 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df823 push ecx */
  push32((uint32_t)(ECX));
  /* 114df824 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df827 push edx */
  push32((uint32_t)(EDX));
  /* 114df828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df82b push eax */
  push32((uint32_t)(EAX));
  /* 114df82c call 0x114e0a50 */
  push32(0x114df831u); f_114e0a50();
  /* 114df831 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df834 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114df837 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df83b jne 0x114df83f */
  if (!C.zf) goto L_114df83f;
  /* 114df83d jmp 0x114df89d */
  goto L_114df89d;
L_114df83f:;
  /* 114df83f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 114df841 push 0x114facd4 */
  push32((uint32_t)(0x114facd4u));
  /* 114df846 push 2 */
  push32((uint32_t)(0x2u));
  /* 114df848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df84b push ecx */
  push32((uint32_t)(ECX));
  /* 114df84c call 0x114cb900 */
  push32(0x114df851u); f_114cb900();
  /* 114df851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df854 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 114df85a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114df85c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 114df862 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df865 jne 0x114df869 */
  if (!C.zf) goto L_114df869;
  /* 114df867 jmp 0x114df89d */
  goto L_114df89d;
L_114df869:;
  /* 114df869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114df86c push ecx */
  push32((uint32_t)(ECX));
  /* 114df86d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df870 push edx */
  push32((uint32_t)(EDX));
  /* 114df871 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 114df877 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df879 push ecx */
  push32((uint32_t)(ECX));
  /* 114df87a call 0x114d19a0 */
  push32(0x114df87fu); f_114d19a0();
  /* 114df87f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df882 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df886 je 0x114df896 */
  if (C.zf) goto L_114df896;
  /* 114df888 push 2 */
  push32((uint32_t)(0x2u));
  /* 114df88a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df88d push edx */
  push32((uint32_t)(EDX));
  /* 114df88e call 0x114cc390 */
  push32(0x114df893u); f_114cc390();
  /* 114df893 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114df896:;
  /* 114df896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df898 jmp 0x114df9d6 */
  goto L_114df9d6;
L_114df89d:;
  /* 114df89d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df8a1 je 0x114df8b1 */
  if (C.zf) goto L_114df8b1;
  /* 114df8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114df8a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114df8a8 push eax */
  push32((uint32_t)(EAX));
  /* 114df8a9 call 0x114cc390 */
  push32(0x114df8aeu); f_114cc390();
  /* 114df8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114df8b1:;
  /* 114df8b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114df8b4 jmp 0x114df9d6 */
  goto L_114df9d6;
L_114df8b9:;
  /* 114df8b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df8bd jne 0x114df9d3 */
  if (!C.zf) goto L_114df9d3;
  /* 114df8c3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 114df8cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114df8d0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 114df8d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114df8d8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 114df8de push edx */
  push32((uint32_t)(EDX));
  /* 114df8df push 0x114ff488 */
  push32((uint32_t)(0x114ff488u));
  /* 114df8e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df8e7 push eax */
  push32((uint32_t)(EAX));
  /* 114df8e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df8eb push ecx */
  push32((uint32_t)(ECX));
  /* 114df8ec call 0x114e08b0 */
  push32(0x114df8f1u); f_114e08b0();
  /* 114df8f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df8f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114df8f6 jne 0x114df900 */
  if (!C.zf) goto L_114df900;
  /* 114df8f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114df8fb jmp 0x114df9d6 */
  goto L_114df9d6;
L_114df900:;
  /* 114df900 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114df906 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114df909 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 114df913 jmp 0x114df924 */
  goto L_114df924;
L_114df915:;
  /* 114df915 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114df91b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df91e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_114df924:;
  /* 114df924 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df92b jge 0x114df9cf */
  if ((C.sf==C.of)) goto L_114df9cf;
  /* 114df931 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df938 jle 0x114df96b */
  if ((C.zf||C.sf!=C.of)) goto L_114df96b;
  /* 114df93a push 4 */
  push32((uint32_t)(0x4u));
  /* 114df93c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114df942 mov dl, byte ptr [ecx*2 + 0x114ff488] */
  DL = (r8((uint32_t)(ECX*2 + 0x114ff488)));
  /* 114df949 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 114df94f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 114df955 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114df95a push eax */
  push32((uint32_t)(EAX));
  /* 114df95b call 0x114d20c0 */
  push32(0x114df960u); f_114d20c0();
  /* 114df960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114df963 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 114df969 jmp 0x114df99e */
  goto L_114df99e;
L_114df96b:;
  /* 114df96b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114df971 mov dl, byte ptr [ecx*2 + 0x114ff488] */
  DL = (r8((uint32_t)(ECX*2 + 0x114ff488)));
  /* 114df978 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 114df97e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 114df984 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114df989 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114df98f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114df991 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114df995 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114df998 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_114df99e:;
  /* 114df99e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df9a5 je 0x114df9c8 */
  if (C.zf) goto L_114df9c8;
  /* 114df9a7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114df9ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114df9b0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114df9b3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 114df9ba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 114df9be mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114df9c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114df9c6 jmp 0x114df9ca */
  goto L_114df9ca;
L_114df9c8:;
  /* 114df9c8 jmp 0x114df9cf */
  goto L_114df9cf;
L_114df9ca:;
  /* 114df9ca jmp 0x114df915 */
  goto L_114df915;
L_114df9cf:;
  /* 114df9cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114df9d1 jmp 0x114df9d6 */
  goto L_114df9d6;
L_114df9d3:;
  /* 114df9d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114df9d6:;
  /* 114df9d6 mov esp, ebp */
  ESP = (EBP);
  /* 114df9d8 pop ebp */
  EBP = (pop32());
  /* 114df9d9 ret  */
  ESPCHK(0x114df750u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f9e0 @ 0x114df9e0 (10 bytes, 5 insns) */
void f_114df9e0(void) {
  FTRACE(0x114df9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114df9e1 mov ebp, esp */
  EBP = (ESP);
  /* 114df9e3 mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114df9e8 pop ebp */
  EBP = (pop32());
  /* 114df9e9 ret  */
  ESPCHK(0x114df9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f9f0 @ 0x114df9f0 (575 bytes, 196 insns) */
void f_114df9f0(void) {
  FTRACE(0x114df9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114df9f1 mov ebp, esp */
  EBP = (ESP);
  /* 114df9f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114df9f5 push 0x114face0 */
  push32((uint32_t)(0x114face0u));
  /* 114df9fa push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114df9ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114dfa05 push eax */
  push32((uint32_t)(EAX));
  /* 114dfa06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114dfa0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfa10 push ebx */
  push32((uint32_t)(EBX));
  /* 114dfa11 push esi */
  push32((uint32_t)(ESI));
  /* 114dfa12 push edi */
  push32((uint32_t)(EDI));
  /* 114dfa13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114dfa16 cmp dword ptr [0x114ff494], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff494))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfa1d jne 0x114dfa6e */
  if (!C.zf) goto L_114dfa6e;
  /* 114dfa1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 114dfa22 push eax */
  push32((uint32_t)(EAX));
  /* 114dfa23 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dfa25 push 0x114fa40c */
  push32((uint32_t)(0x114fa40cu));
  /* 114dfa2a push 1 */
  push32((uint32_t)(0x1u));
  /* 114dfa2c call dword ptr [0x1150135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150135c))), 0x114dfa32u);
  /* 114dfa32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dfa34 je 0x114dfa42 */
  if (C.zf) goto L_114dfa42;
  /* 114dfa36 mov dword ptr [0x114ff494], 1 */
  w32((uint32_t)(0x114ff494), (0x1u));
  /* 114dfa40 jmp 0x114dfa6e */
  goto L_114dfa6e;
L_114dfa42:;
  /* 114dfa42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 114dfa45 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfa46 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dfa48 push 0x114fa408 */
  push32((uint32_t)(0x114fa408u));
  /* 114dfa4d push 1 */
  push32((uint32_t)(0x1u));
  /* 114dfa4f push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfa51 call dword ptr [0x1150136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150136c))), 0x114dfa57u);
  /* 114dfa57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dfa59 je 0x114dfa67 */
  if (C.zf) goto L_114dfa67;
  /* 114dfa5b mov dword ptr [0x114ff494], 2 */
  w32((uint32_t)(0x114ff494), (0x2u));
  /* 114dfa65 jmp 0x114dfa6e */
  goto L_114dfa6e;
L_114dfa67:;
  /* 114dfa67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfa69 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfa6e:;
  /* 114dfa6e cmp dword ptr [0x114ff494], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff494))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfa75 jne 0x114dfa92 */
  if (!C.zf) goto L_114dfa92;
  /* 114dfa77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dfa7a push edx */
  push32((uint32_t)(EDX));
  /* 114dfa7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfa7e push eax */
  push32((uint32_t)(EAX));
  /* 114dfa7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dfa82 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfa83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfa86 push edx */
  push32((uint32_t)(EDX));
  /* 114dfa87 call dword ptr [0x1150135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150135c))), 0x114dfa8du);
  /* 114dfa8d jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfa92:;
  /* 114dfa92 cmp dword ptr [0x114ff494], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff494))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfa99 jne 0x114dfc47 */
  if (!C.zf) goto L_114dfc47;
  /* 114dfa9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfaa3 jne 0x114dfaad */
  if (!C.zf) goto L_114dfaad;
  /* 114dfaa5 mov eax, dword ptr [0x114ff418] */
  EAX = (r32((uint32_t)(0x114ff418)));
  /* 114dfaaa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_114dfaad:;
  /* 114dfaad push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfaaf push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfab8 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfab9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dfabc push edx */
  push32((uint32_t)(EDX));
  /* 114dfabd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114dfac2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114dfac5 push eax */
  push32((uint32_t)(EAX));
  /* 114dfac6 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114dfaccu);
  /* 114dfacc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114dfacf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfad3 jne 0x114dfadc */
  if (!C.zf) goto L_114dfadc;
  /* 114dfad5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfad7 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfadc:;
  /* 114dfadc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114dfae3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dfae6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfae9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114dfaeb call 0x114d1320 */
  push32(0x114dfaf0u); f_114d1320();
  /* 114dfaf0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 114dfaf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114dfaf6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dfaf9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114dfafc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dfaff push edx */
  push32((uint32_t)(EDX));
  /* 114dfb00 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfb02 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dfb05 push eax */
  push32((uint32_t)(EAX));
  /* 114dfb06 call 0x114d2e30 */
  push32(0x114dfb0bu); f_114d2e30();
  /* 114dfb0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfb0e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114dfb15 jmp 0x114dfb2e */
  goto L_114dfb2e;
  /* 114dfb17 mov eax, 1 */
  EAX = (0x1u);
  /* 114dfb1c ret  */
  ESPCHK(0x114df9f0u, _esp0);
  ESP += 4; return;
  /* 114dfb1d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114dfb20 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114dfb27 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114dfb2e:;
  /* 114dfb2e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfb32 jne 0x114dfb3b */
  if (!C.zf) goto L_114dfb3b;
  /* 114dfb34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfb36 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfb3b:;
  /* 114dfb3b push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfb3d push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfb3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dfb42 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfb43 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dfb46 push edx */
  push32((uint32_t)(EDX));
  /* 114dfb47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfb4a push eax */
  push32((uint32_t)(EAX));
  /* 114dfb4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dfb4e push ecx */
  push32((uint32_t)(ECX));
  /* 114dfb4f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114dfb54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114dfb57 push edx */
  push32((uint32_t)(EDX));
  /* 114dfb58 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114dfb5eu);
  /* 114dfb5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dfb60 jne 0x114dfb69 */
  if (!C.zf) goto L_114dfb69;
  /* 114dfb62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfb64 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfb69:;
  /* 114dfb69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114dfb70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dfb73 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 114dfb77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfb7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114dfb7c call 0x114d1320 */
  push32(0x114dfb81u); f_114d1320();
  /* 114dfb81 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 114dfb84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114dfb87 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114dfb8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114dfb8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114dfb94 jmp 0x114dfbad */
  goto L_114dfbad;
  /* 114dfb96 mov eax, 1 */
  EAX = (0x1u);
  /* 114dfb9b ret  */
  ESPCHK(0x114df9f0u, _esp0);
  ESP += 4; return;
  /* 114dfb9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114dfb9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114dfba6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114dfbad:;
  /* 114dfbad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfbb1 jne 0x114dfbba */
  if (!C.zf) goto L_114dfbba;
  /* 114dfbb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfbb5 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfbba:;
  /* 114dfbba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfbbe jne 0x114dfbc9 */
  if (!C.zf) goto L_114dfbc9;
  /* 114dfbc0 mov edx, dword ptr [0x114ff408] */
  EDX = (r32((uint32_t)(0x114ff408)));
  /* 114dfbc6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_114dfbc9:;
  /* 114dfbc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfbcc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfbcf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 114dfbd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfbd8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfbdb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 114dfbe2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfbe5 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfbe6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dfbe9 push edx */
  push32((uint32_t)(EDX));
  /* 114dfbea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dfbed push eax */
  push32((uint32_t)(EAX));
  /* 114dfbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfbf1 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfbf2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114dfbf5 push edx */
  push32((uint32_t)(EDX));
  /* 114dfbf6 call dword ptr [0x1150136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150136c))), 0x114dfbfcu);
  /* 114dfbfc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114dfbff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfc02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfc05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114dfc07 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 114dfc0c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfc12 je 0x114dfc28 */
  if (C.zf) goto L_114dfc28;
  /* 114dfc14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfc17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfc1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114dfc1c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114dfc20 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfc26 je 0x114dfc2c */
  if (C.zf) goto L_114dfc2c;
L_114dfc28:;
  /* 114dfc28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfc2a jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfc2c:;
  /* 114dfc2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfc2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114dfc31 push eax */
  push32((uint32_t)(EAX));
  /* 114dfc32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dfc35 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfc36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dfc39 push edx */
  push32((uint32_t)(EDX));
  /* 114dfc3a call 0x114d2e90 */
  push32(0x114dfc3fu); f_114d2e90();
  /* 114dfc3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfc42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dfc45 jmp 0x114dfc49 */
  goto L_114dfc49;
L_114dfc47:;
  /* 114dfc47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dfc49:;
  /* 114dfc49 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 114dfc4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114dfc4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114dfc56 pop edi */
  EDI = (pop32());
  /* 114dfc57 pop esi */
  ESI = (pop32());
  /* 114dfc58 pop ebx */
  EBX = (pop32());
  /* 114dfc59 mov esp, ebp */
  ESP = (EBP);
  /* 114dfc5b pop ebp */
  EBP = (pop32());
  /* 114dfc5c ret  */
  ESPCHK(0x114df9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fc60 @ 0x114dfc60 (208 bytes, 85 insns) */
void f_114dfc60(void) {
  FTRACE(0x114dfc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dfc60 push ebp */
  push32((uint32_t)(EBP));
  /* 114dfc61 mov ebp, esp */
  EBP = (ESP);
  /* 114dfc63 push edi */
  push32((uint32_t)(EDI));
  /* 114dfc64 push esi */
  push32((uint32_t)(ESI));
  /* 114dfc65 push ebx */
  push32((uint32_t)(EBX));
  /* 114dfc66 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114dfc69 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfc6c lea eax, [0x114ff400] */
  EAX = ((uint32_t)(0x114ff400));
  /* 114dfc72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfc76 jne 0x114dfcb3 */
  if (!C.zf) goto L_114dfcb3;
  /* 114dfc78 mov al, 0xff */
  AL = (0xffu);
  /* 114dfc7a mov edi, edi */
  EDI = (EDI);
L_114dfc7c:;
  /* 114dfc7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dfc7e je 0x114dfcae */
  if (C.zf) goto L_114dfcae;
  /* 114dfc80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114dfc82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dfc83 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 114dfc85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114dfc86 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfc88 je 0x114dfc7c */
  if (C.zf) goto L_114dfc7c;
  /* 114dfc8a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114dfc8c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfc8e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114dfc90 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 114dfc93 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dfc95 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dfc97 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 114dfc99 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114dfc9b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfc9d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114dfc9f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 114dfca2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dfca4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dfca6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfca8 je 0x114dfc7c */
  if (C.zf) goto L_114dfc7c;
  /* 114dfcaa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114dfcac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_114dfcae:;
  /* 114dfcae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 114dfcb1 jmp 0x114dfd2b */
  goto L_114dfd2b;
L_114dfcb3:;
  /* 114dfcb3 lock inc dword ptr [0x114ff4c8] */
  x86_unimpl("lock inc @ 0x114dfcb3");
  /* 114dfcba cmp dword ptr [0x114ff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfcc1 jg 0x114dfcc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dfcc7;
  /* 114dfcc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfcc5 jmp 0x114dfcdc */
  goto L_114dfcdc;
L_114dfcc7:;
  /* 114dfcc7 lock dec dword ptr [0x114ff4c8] */
  x86_unimpl("lock dec @ 0x114dfcc7");
  /* 114dfcce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114dfcd0 call 0x114cb800 */
  push32(0x114dfcd5u); f_114cb800();
  /* 114dfcd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_114dfcdc:;
  /* 114dfcdc mov eax, 0xff */
  EAX = (0xffu);
  /* 114dfce1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114dfce3 nop  */
  /* nop */
L_114dfce4:;
  /* 114dfce4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dfce6 je 0x114dfd0f */
  if (C.zf) goto L_114dfd0f;
  /* 114dfce8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114dfcea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dfceb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 114dfced inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114dfcee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfcf0 je 0x114dfce4 */
  if (C.zf) goto L_114dfce4;
  /* 114dfcf2 push eax */
  push32((uint32_t)(EAX));
  /* 114dfcf3 push ebx */
  push32((uint32_t)(EBX));
  /* 114dfcf4 call 0x114d2230 */
  push32(0x114dfcf9u); f_114d2230();
  /* 114dfcf9 mov ebx, eax */
  EBX = (EAX);
  /* 114dfcfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfcfe call 0x114d2230 */
  push32(0x114dfd03u); f_114d2230();
  /* 114dfd03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfd06 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd08 je 0x114dfce4 */
  if (C.zf) goto L_114dfce4;
  /* 114dfd0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dfd0c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_114dfd0f:;
  /* 114dfd0f mov ebx, eax */
  EBX = (EAX);
  /* 114dfd11 pop eax */
  EAX = (pop32());
  /* 114dfd12 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfd14 jne 0x114dfd1f */
  if (!C.zf) goto L_114dfd1f;
  /* 114dfd16 lock dec dword ptr [0x114ff4c8] */
  x86_unimpl("lock dec @ 0x114dfd16");
  /* 114dfd1d jmp 0x114dfd29 */
  goto L_114dfd29;
L_114dfd1f:;
  /* 114dfd1f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114dfd21 call 0x114cb8a0 */
  push32(0x114dfd26u); f_114cb8a0();
  /* 114dfd26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dfd29:;
  /* 114dfd29 mov eax, ebx */
  EAX = (EBX);
L_114dfd2b:;
  /* 114dfd2b pop ebx */
  EBX = (pop32());
  /* 114dfd2c pop esi */
  ESI = (pop32());
  /* 114dfd2d pop edi */
  EDI = (pop32());
  /* 114dfd2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114dfd2f ret  */
  ESPCHK(0x114dfc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fd30 @ 0x114dfd30 (257 bytes, 103 insns) */
void f_114dfd30(void) {
  FTRACE(0x114dfd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dfd30 push ebp */
  push32((uint32_t)(EBP));
  /* 114dfd31 mov ebp, esp */
  EBP = (ESP);
  /* 114dfd33 push edi */
  push32((uint32_t)(EDI));
  /* 114dfd34 push esi */
  push32((uint32_t)(ESI));
  /* 114dfd35 push ebx */
  push32((uint32_t)(EBX));
  /* 114dfd36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dfd39 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dfd3b je 0x114dfe2a */
  if (C.zf) goto L_114dfe2a;
  /* 114dfd41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfd44 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 114dfd47 lea eax, [0x114ff400] */
  EAX = ((uint32_t)(0x114ff400));
  /* 114dfd4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfd51 jne 0x114dfda1 */
  if (!C.zf) goto L_114dfda1;
  /* 114dfd53 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 114dfd55 mov bl, 0x5a */
  BL = (0x5au);
  /* 114dfd57 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 114dfd59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114dfd5c:;
  /* 114dfd5c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 114dfd5e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 114dfd60 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 114dfd62 je 0x114dfd85 */
  if (C.zf) goto L_114dfd85;
  /* 114dfd64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dfd66 je 0x114dfd85 */
  if (C.zf) goto L_114dfd85;
  /* 114dfd68 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dfd69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114dfd6a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd6c jb 0x114dfd74 */
  if (C.cf) goto L_114dfd74;
  /* 114dfd6e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd70 ja 0x114dfd74 */
  if ((!C.cf&&!C.zf)) goto L_114dfd74;
  /* 114dfd72 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_114dfd74:;
  /* 114dfd74 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd76 jb 0x114dfd7e */
  if (C.cf) goto L_114dfd7e;
  /* 114dfd78 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd7a ja 0x114dfd7e */
  if ((!C.cf&&!C.zf)) goto L_114dfd7e;
  /* 114dfd7c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_114dfd7e:;
  /* 114dfd7e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd80 jne 0x114dfd8f */
  if (!C.zf) goto L_114dfd8f;
  /* 114dfd82 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114dfd83 jne 0x114dfd5c */
  if (!C.zf) goto L_114dfd5c;
L_114dfd85:;
  /* 114dfd85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dfd87 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dfd89 je 0x114dfe2a */
  if (C.zf) goto L_114dfe2a;
L_114dfd8f:;
  /* 114dfd8f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 114dfd94 jb 0x114dfe2a */
  if (C.cf) goto L_114dfe2a;
  /* 114dfd9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dfd9c jmp 0x114dfe2a */
  goto L_114dfe2a;
L_114dfda1:;
  /* 114dfda1 lock inc dword ptr [0x114ff4c8] */
  x86_unimpl("lock inc @ 0x114dfda1");
  /* 114dfda8 cmp dword ptr [0x114ff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfdaf jg 0x114dfdb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dfdb5;
  /* 114dfdb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dfdb3 jmp 0x114dfdce */
  goto L_114dfdce;
L_114dfdb5:;
  /* 114dfdb5 lock dec dword ptr [0x114ff4c8] */
  x86_unimpl("lock dec @ 0x114dfdb5");
  /* 114dfdbc mov ebx, ecx */
  EBX = (ECX);
  /* 114dfdbe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114dfdc0 call 0x114cb800 */
  push32(0x114dfdc5u); f_114cb800();
  /* 114dfdc5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 114dfdcc mov ecx, ebx */
  ECX = (EBX);
L_114dfdce:;
  /* 114dfdce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfdd0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114dfdd2 mov edi, edi */
  EDI = (EDI);
L_114dfdd4:;
  /* 114dfdd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114dfdd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfdd8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 114dfdda je 0x114dfdff */
  if (C.zf) goto L_114dfdff;
  /* 114dfddc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114dfdde je 0x114dfdff */
  if (C.zf) goto L_114dfdff;
  /* 114dfde0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dfde1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114dfde2 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfde3 push eax */
  push32((uint32_t)(EAX));
  /* 114dfde4 push ebx */
  push32((uint32_t)(EBX));
  /* 114dfde5 call 0x114d2230 */
  push32(0x114dfdeau); f_114d2230();
  /* 114dfdea mov ebx, eax */
  EBX = (EAX);
  /* 114dfdec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfdef call 0x114d2230 */
  push32(0x114dfdf4u); f_114d2230();
  /* 114dfdf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfdf7 pop ecx */
  ECX = (pop32());
  /* 114dfdf8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfdfa jne 0x114dfe05 */
  if (!C.zf) goto L_114dfe05;
  /* 114dfdfc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114dfdfd jne 0x114dfdd4 */
  if (!C.zf) goto L_114dfdd4;
L_114dfdff:;
  /* 114dfdff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dfe01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfe03 je 0x114dfe0e */
  if (C.zf) goto L_114dfe0e;
L_114dfe05:;
  /* 114dfe05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 114dfe0a jb 0x114dfe0e */
  if (C.cf) goto L_114dfe0e;
  /* 114dfe0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_114dfe0e:;
  /* 114dfe0e pop eax */
  EAX = (pop32());
  /* 114dfe0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dfe11 jne 0x114dfe1c */
  if (!C.zf) goto L_114dfe1c;
  /* 114dfe13 lock dec dword ptr [0x114ff4c8] */
  x86_unimpl("lock dec @ 0x114dfe13");
  /* 114dfe1a jmp 0x114dfe2a */
  goto L_114dfe2a;
L_114dfe1c:;
  /* 114dfe1c mov ebx, ecx */
  EBX = (ECX);
  /* 114dfe1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114dfe20 call 0x114cb8a0 */
  push32(0x114dfe25u); f_114cb8a0();
  /* 114dfe25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfe28 mov ecx, ebx */
  ECX = (EBX);
L_114dfe2a:;
  /* 114dfe2a mov eax, ecx */
  EAX = (ECX);
  /* 114dfe2c pop ebx */
  EBX = (pop32());
  /* 114dfe2d pop esi */
  ESI = (pop32());
  /* 114dfe2e pop edi */
  EDI = (pop32());
  /* 114dfe2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114dfe30 ret  */
  ESPCHK(0x114dfd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fe40 @ 0x114dfe40 (122 bytes, 39 insns) */
void f_114dfe40(void) {
  FTRACE(0x114dfe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dfe40 push ebp */
  push32((uint32_t)(EBP));
  /* 114dfe41 mov ebp, esp */
  EBP = (ESP);
  /* 114dfe43 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfe44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfe47 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfe4d jae 0x114dfe71 */
  if (!C.cf) goto L_114dfe71;
  /* 114dfe4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfe52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114dfe55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfe58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114dfe5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dfe5e mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114dfe65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114dfe6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114dfe6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dfe6f jne 0x114dfe8c */
  if (!C.zf) goto L_114dfe8c;
L_114dfe71:;
  /* 114dfe71 call 0x114d7750 */
  push32(0x114dfe76u); f_114d7750();
  /* 114dfe76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114dfe7c call 0x114d7760 */
  push32(0x114dfe81u); f_114d7760();
  /* 114dfe81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114dfe87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dfe8a jmp 0x114dfeb6 */
  goto L_114dfeb6;
L_114dfe8c:;
  /* 114dfe8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfe8f push edx */
  push32((uint32_t)(EDX));
  /* 114dfe90 call 0x114dacf0 */
  push32(0x114dfe95u); f_114dacf0();
  /* 114dfe95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfe98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfe9b push eax */
  push32((uint32_t)(EAX));
  /* 114dfe9c call 0x114dfec0 */
  push32(0x114dfea1u); f_114dfec0();
  /* 114dfea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfea4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dfea7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfeaa push ecx */
  push32((uint32_t)(ECX));
  /* 114dfeab call 0x114dad80 */
  push32(0x114dfeb0u); f_114dad80();
  /* 114dfeb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfeb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114dfeb6:;
  /* 114dfeb6 mov esp, ebp */
  ESP = (EBP);
  /* 114dfeb8 pop ebp */
  EBP = (pop32());
  /* 114dfeb9 ret  */
  ESPCHK(0x114dfe40u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x114dfec0 (170 bytes, 59 insns) */
void f_114dfec0(void) {
  FTRACE(0x114dfec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dfec0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dfec1 mov ebp, esp */
  EBP = (ESP);
  /* 114dfec3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dfec4 push esi */
  push32((uint32_t)(ESI));
  /* 114dfec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfec8 push eax */
  push32((uint32_t)(EAX));
  /* 114dfec9 call 0x114dab70 */
  push32(0x114dfeceu); f_114dab70();
  /* 114dfece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfed1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfed4 je 0x114dff13 */
  if (C.zf) goto L_114dff13;
  /* 114dfed6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfeda je 0x114dfee2 */
  if (C.zf) goto L_114dfee2;
  /* 114dfedc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfee0 jne 0x114dfefc */
  if (!C.zf) goto L_114dfefc;
L_114dfee2:;
  /* 114dfee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dfee4 call 0x114dab70 */
  push32(0x114dfee9u); f_114dab70();
  /* 114dfee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfeec mov esi, eax */
  ESI = (EAX);
  /* 114dfeee push 2 */
  push32((uint32_t)(0x2u));
  /* 114dfef0 call 0x114dab70 */
  push32(0x114dfef5u); f_114dab70();
  /* 114dfef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dfef8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dfefa je 0x114dff13 */
  if (C.zf) goto L_114dff13;
L_114dfefc:;
  /* 114dfefc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfeff push ecx */
  push32((uint32_t)(ECX));
  /* 114dff00 call 0x114dab70 */
  push32(0x114dff05u); f_114dab70();
  /* 114dff05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dff08 push eax */
  push32((uint32_t)(EAX));
  /* 114dff09 call dword ptr [0x1150132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150132c))), 0x114dff0fu);
  /* 114dff0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dff11 je 0x114dff1c */
  if (C.zf) goto L_114dff1c;
L_114dff13:;
  /* 114dff13 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114dff1a jmp 0x114dff25 */
  goto L_114dff25;
L_114dff1c:;
  /* 114dff1c call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114dff22u);
  /* 114dff22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114dff25:;
  /* 114dff25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dff28 push edx */
  push32((uint32_t)(EDX));
  /* 114dff29 call 0x114daa90 */
  push32(0x114dff2eu); f_114daa90();
  /* 114dff2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dff31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dff34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dff37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dff3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dff3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dff40 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dff47 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 114dff4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dff50 je 0x114dff63 */
  if (C.zf) goto L_114dff63;
  /* 114dff52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dff55 push eax */
  push32((uint32_t)(EAX));
  /* 114dff56 call 0x114d76b0 */
  push32(0x114dff5bu); f_114d76b0();
  /* 114dff5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dff5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dff61 jmp 0x114dff65 */
  goto L_114dff65;
L_114dff63:;
  /* 114dff63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dff65:;
  /* 114dff65 pop esi */
  ESI = (pop32());
  /* 114dff66 mov esp, ebp */
  ESP = (EBP);
  /* 114dff68 pop ebp */
  EBP = (pop32());
  /* 114dff69 ret  */
  ESPCHK(0x114dfec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ff70 @ 0x114dff70 (146 bytes, 52 insns) */
void f_114dff70(void) {
  FTRACE(0x114dff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dff70 push ebp */
  push32((uint32_t)(EBP));
  /* 114dff71 mov ebp, esp */
  EBP = (ESP);
  /* 114dff73 push ebx */
  push32((uint32_t)(EBX));
  /* 114dff74 push esi */
  push32((uint32_t)(ESI));
  /* 114dff75 push edi */
  push32((uint32_t)(EDI));
L_114dff76:;
  /* 114dff76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dff7a jne 0x114dff9a */
  if (!C.zf) goto L_114dff9a;
  /* 114dff7c push 0x114fab88 */
  push32((uint32_t)(0x114fab88u));
  /* 114dff81 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dff83 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114dff85 push 0x114facf8 */
  push32((uint32_t)(0x114facf8u));
  /* 114dff8a push 2 */
  push32((uint32_t)(0x2u));
  /* 114dff8c call 0x114ca4c0 */
  push32(0x114dff91u); f_114ca4c0();
  /* 114dff91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dff94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dff97 jne 0x114dff9a */
  if (!C.zf) goto L_114dff9a;
  /* 114dff99 int3  */
  x86_unimpl("int3 @ 0x114dff99");
L_114dff9a:;
  /* 114dff9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dff9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dff9e jne 0x114dff76 */
  if (!C.zf) goto L_114dff76;
  /* 114dffa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffa3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114dffa6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 114dffac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dffae je 0x114dfffd */
  if (C.zf) goto L_114dfffd;
  /* 114dffb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffb3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114dffb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114dffb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dffbb je 0x114dfffd */
  if (C.zf) goto L_114dfffd;
  /* 114dffbd push 2 */
  push32((uint32_t)(0x2u));
  /* 114dffbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffc2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114dffc5 push eax */
  push32((uint32_t)(EAX));
  /* 114dffc6 call 0x114cc390 */
  push32(0x114dffcbu); f_114cc390();
  /* 114dffcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dffce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffd1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114dffd4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 114dffda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffdd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114dffe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffe3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 114dffe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dffec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 114dfff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dfff6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_114dfffd:;
  /* 114dfffd pop edi */
  EDI = (pop32());
  /* 114dfffe pop esi */
  ESI = (pop32());
  /* 114dffff pop ebx */
  EBX = (pop32());
  /* 114e0000 pop ebp */
  EBP = (pop32());
  /* 114e0001 ret  */
  ESPCHK(0x114dff70u, _esp0);
  ESP += 4; return;
}

/* FUN_10020010 @ 0x114e0010 (970 bytes, 340 insns) */
void f_114e0010(void) {
  FTRACE(0x114e0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0010 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0011 mov ebp, esp */
  EBP = (ESP);
  /* 114e0013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e0015 push 0x114fad50 */
  push32((uint32_t)(0x114fad50u));
  /* 114e001a push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114e001f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114e0025 push eax */
  push32((uint32_t)(EAX));
  /* 114e0026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114e002d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0030 push ebx */
  push32((uint32_t)(EBX));
  /* 114e0031 push esi */
  push32((uint32_t)(ESI));
  /* 114e0032 push edi */
  push32((uint32_t)(EDI));
  /* 114e0033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e0036 cmp dword ptr [0x114ff498], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff498))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e003d jne 0x114e0096 */
  if (!C.zf) goto L_114e0096;
  /* 114e003f push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0041 push 0x114fa40c */
  push32((uint32_t)(0x114fa40cu));
  /* 114e0046 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0048 push 0x114fa40c */
  push32((uint32_t)(0x114fa40cu));
  /* 114e004d push 0 */
  push32((uint32_t)(0x0u));
  /* 114e004f push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0051 call dword ptr [0x11501330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501330))), 0x114e0057u);
  /* 114e0057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0059 je 0x114e0067 */
  if (C.zf) goto L_114e0067;
  /* 114e005b mov dword ptr [0x114ff498], 1 */
  w32((uint32_t)(0x114ff498), (0x1u));
  /* 114e0065 jmp 0x114e0096 */
  goto L_114e0096;
L_114e0067:;
  /* 114e0067 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0069 push 0x114fa408 */
  push32((uint32_t)(0x114fa408u));
  /* 114e006e push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0070 push 0x114fa408 */
  push32((uint32_t)(0x114fa408u));
  /* 114e0075 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0077 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0079 call dword ptr [0x11501328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501328))), 0x114e007fu);
  /* 114e007f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0081 je 0x114e008f */
  if (C.zf) goto L_114e008f;
  /* 114e0083 mov dword ptr [0x114ff498], 2 */
  w32((uint32_t)(0x114ff498), (0x2u));
  /* 114e008d jmp 0x114e0096 */
  goto L_114e0096;
L_114e008f:;
  /* 114e008f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0091 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0096:;
  /* 114e0096 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e009a jle 0x114e00af */
  if ((C.zf||C.sf!=C.of)) goto L_114e00af;
  /* 114e009c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e009f push eax */
  push32((uint32_t)(EAX));
  /* 114e00a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e00a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114e00a4 call 0x114e0410 */
  push32(0x114e00a9u); f_114e0410();
  /* 114e00a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e00ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_114e00af:;
  /* 114e00af cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e00b3 jle 0x114e00c8 */
  if ((C.zf||C.sf!=C.of)) goto L_114e00c8;
  /* 114e00b5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114e00b8 push edx */
  push32((uint32_t)(EDX));
  /* 114e00b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e00bc push eax */
  push32((uint32_t)(EAX));
  /* 114e00bd call 0x114e0410 */
  push32(0x114e00c2u); f_114e0410();
  /* 114e00c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e00c5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_114e00c8:;
  /* 114e00c8 cmp dword ptr [0x114ff498], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff498))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e00cf jne 0x114e00f4 */
  if (!C.zf) goto L_114e00f4;
  /* 114e00d1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114e00d4 push ecx */
  push32((uint32_t)(ECX));
  /* 114e00d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e00d8 push edx */
  push32((uint32_t)(EDX));
  /* 114e00d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e00dc push eax */
  push32((uint32_t)(EAX));
  /* 114e00dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e00e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114e00e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e00e4 push edx */
  push32((uint32_t)(EDX));
  /* 114e00e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e00e8 push eax */
  push32((uint32_t)(EAX));
  /* 114e00e9 call dword ptr [0x11501328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501328))), 0x114e00efu);
  /* 114e00ef jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e00f4:;
  /* 114e00f4 cmp dword ptr [0x114ff498], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff498))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e00fb jne 0x114e03f2 */
  if (!C.zf) goto L_114e03f2;
  /* 114e0101 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0105 jne 0x114e0110 */
  if (!C.zf) goto L_114e0110;
  /* 114e0107 mov ecx, dword ptr [0x114ff418] */
  ECX = (r32((uint32_t)(0x114ff418)));
  /* 114e010d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_114e0110:;
  /* 114e0110 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0114 je 0x114e0120 */
  if (C.zf) goto L_114e0120;
  /* 114e0116 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e011a jne 0x114e029c */
  if (!C.zf) goto L_114e029c;
L_114e0120:;
  /* 114e0120 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e0123 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0126 jne 0x114e0132 */
  if (!C.zf) goto L_114e0132;
  /* 114e0128 mov eax, 2 */
  EAX = (0x2u);
  /* 114e012d jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0132:;
  /* 114e0132 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0136 jle 0x114e0142 */
  if ((C.zf||C.sf!=C.of)) goto L_114e0142;
  /* 114e0138 mov eax, 1 */
  EAX = (0x1u);
  /* 114e013d jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0142:;
  /* 114e0142 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0146 jle 0x114e0152 */
  if ((C.zf||C.sf!=C.of)) goto L_114e0152;
  /* 114e0148 mov eax, 3 */
  EAX = (0x3u);
  /* 114e014d jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0152:;
  /* 114e0152 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 114e0155 push eax */
  push32((uint32_t)(EAX));
  /* 114e0156 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114e0159 push ecx */
  push32((uint32_t)(ECX));
  /* 114e015a call dword ptr [0x11501374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501374))), 0x114e0160u);
  /* 114e0160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0162 jne 0x114e016b */
  if (!C.zf) goto L_114e016b;
  /* 114e0164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0166 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e016b:;
  /* 114e016b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e016f jne 0x114e0177 */
  if (!C.zf) goto L_114e0177;
  /* 114e0171 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0175 je 0x114e01a4 */
  if (C.zf) goto L_114e01a4;
L_114e0177:;
  /* 114e0177 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e017b jne 0x114e0183 */
  if (!C.zf) goto L_114e0183;
  /* 114e017d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0181 je 0x114e01a4 */
  if (C.zf) goto L_114e01a4;
L_114e0183:;
  /* 114e0183 push 0x114fad0c */
  push32((uint32_t)(0x114fad0cu));
  /* 114e0188 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e018a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 114e018f push 0x114fad04 */
  push32((uint32_t)(0x114fad04u));
  /* 114e0194 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e0196 call 0x114ca4c0 */
  push32(0x114e019bu); f_114ca4c0();
  /* 114e019b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e019e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e01a1 jne 0x114e01a4 */
  if (!C.zf) goto L_114e01a4;
  /* 114e01a3 int3  */
  x86_unimpl("int3 @ 0x114e01a3");
L_114e01a4:;
  /* 114e01a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114e01a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e01a8 jne 0x114e016b */
  if (!C.zf) goto L_114e016b;
  /* 114e01aa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e01ae jle 0x114e0223 */
  if ((C.zf||C.sf!=C.of)) goto L_114e0223;
  /* 114e01b0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e01b4 jae 0x114e01c0 */
  if (!C.cf) goto L_114e01c0;
  /* 114e01b6 mov eax, 3 */
  EAX = (0x3u);
  /* 114e01bb jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e01c0:;
  /* 114e01c0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 114e01c3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 114e01c6 jmp 0x114e01d1 */
  goto L_114e01d1;
L_114e01c8:;
  /* 114e01c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e01cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e01ce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_114e01d1:;
  /* 114e01d1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e01d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e01d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114e01d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e01da je 0x114e0219 */
  if (C.zf) goto L_114e0219;
  /* 114e01dc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e01df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114e01e1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 114e01e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e01e6 je 0x114e0219 */
  if (C.zf) goto L_114e0219;
  /* 114e01e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e01eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e01ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114e01ef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e01f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e01f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114e01f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e01f8 jl 0x114e0217 */
  if ((C.sf!=C.of)) goto L_114e0217;
  /* 114e01fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e01fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114e01ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114e0201 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e0204 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0206 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114e0209 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e020b jg 0x114e0217 */
  if ((!C.zf&&C.sf==C.of)) goto L_114e0217;
  /* 114e020d mov eax, 2 */
  EAX = (0x2u);
  /* 114e0212 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0217:;
  /* 114e0217 jmp 0x114e01c8 */
  goto L_114e01c8;
L_114e0219:;
  /* 114e0219 mov eax, 3 */
  EAX = (0x3u);
  /* 114e021e jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0223:;
  /* 114e0223 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0227 jle 0x114e029c */
  if ((C.zf||C.sf!=C.of)) goto L_114e029c;
  /* 114e0229 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e022d jae 0x114e0239 */
  if (!C.cf) goto L_114e0239;
  /* 114e022f mov eax, 1 */
  EAX = (0x1u);
  /* 114e0234 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0239:;
  /* 114e0239 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 114e023c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 114e023f jmp 0x114e024a */
  goto L_114e024a;
L_114e0241:;
  /* 114e0241 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e0244 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0247 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_114e024a:;
  /* 114e024a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e024d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114e024f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114e0251 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e0253 je 0x114e0292 */
  if (C.zf) goto L_114e0292;
  /* 114e0255 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e0258 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e025a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114e025d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114e025f je 0x114e0292 */
  if (C.zf) goto L_114e0292;
  /* 114e0261 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0266 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114e0268 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e026b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114e026d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114e026f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0271 jl 0x114e0290 */
  if ((C.sf!=C.of)) goto L_114e0290;
  /* 114e0273 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0276 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0278 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114e027a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114e027d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e027f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114e0282 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0284 jg 0x114e0290 */
  if ((!C.zf&&C.sf==C.of)) goto L_114e0290;
  /* 114e0286 mov eax, 2 */
  EAX = (0x2u);
  /* 114e028b jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0290:;
  /* 114e0290 jmp 0x114e0241 */
  goto L_114e0241;
L_114e0292:;
  /* 114e0292 mov eax, 1 */
  EAX = (0x1u);
  /* 114e0297 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e029c:;
  /* 114e029c push 0 */
  push32((uint32_t)(0x0u));
  /* 114e029e push 0 */
  push32((uint32_t)(0x0u));
  /* 114e02a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e02a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114e02a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e02a7 push edx */
  push32((uint32_t)(EDX));
  /* 114e02a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 114e02aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114e02ad push eax */
  push32((uint32_t)(EAX));
  /* 114e02ae call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e02b4u);
  /* 114e02b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114e02b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e02bb jne 0x114e02c4 */
  if (!C.zf) goto L_114e02c4;
  /* 114e02bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e02bf jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e02c4:;
  /* 114e02c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114e02cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e02ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114e02d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e02d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114e02d5 call 0x114d1320 */
  push32(0x114e02dau); f_114d1320();
  /* 114e02da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 114e02dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e02e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114e02e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114e02e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114e02ed jmp 0x114e0306 */
  goto L_114e0306;
  /* 114e02ef mov eax, 1 */
  EAX = (0x1u);
  /* 114e02f4 ret  */
  ESPCHK(0x114e0010u, _esp0);
  ESP += 4; return;
  /* 114e02f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114e02f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114e02ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114e0306:;
  /* 114e0306 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e030a jne 0x114e0313 */
  if (!C.zf) goto L_114e0313;
  /* 114e030c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e030e jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0313:;
  /* 114e0313 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e0316 push edx */
  push32((uint32_t)(EDX));
  /* 114e0317 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114e031a push eax */
  push32((uint32_t)(EAX));
  /* 114e031b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e031e push ecx */
  push32((uint32_t)(ECX));
  /* 114e031f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e0322 push edx */
  push32((uint32_t)(EDX));
  /* 114e0323 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0325 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114e0328 push eax */
  push32((uint32_t)(EAX));
  /* 114e0329 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e032fu);
  /* 114e032f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0331 jne 0x114e033a */
  if (!C.zf) goto L_114e033a;
  /* 114e0333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0335 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e033a:;
  /* 114e033a push 0 */
  push32((uint32_t)(0x0u));
  /* 114e033c push 0 */
  push32((uint32_t)(0x0u));
  /* 114e033e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114e0341 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0342 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0345 push edx */
  push32((uint32_t)(EDX));
  /* 114e0346 push 9 */
  push32((uint32_t)(0x9u));
  /* 114e0348 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114e034b push eax */
  push32((uint32_t)(EAX));
  /* 114e034c call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e0352u);
  /* 114e0352 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114e0355 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0359 jne 0x114e0362 */
  if (!C.zf) goto L_114e0362;
  /* 114e035b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e035d jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e0362:;
  /* 114e0362 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114e0369 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e036c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114e036e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0371 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114e0373 call 0x114d1320 */
  push32(0x114e0378u); f_114d1320();
  /* 114e0378 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 114e037b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e037e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114e0381 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114e0384 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114e038b jmp 0x114e03a4 */
  goto L_114e03a4;
  /* 114e038d mov eax, 1 */
  EAX = (0x1u);
  /* 114e0392 ret  */
  ESPCHK(0x114e0010u, _esp0);
  ESP += 4; return;
  /* 114e0393 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114e0396 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114e039d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114e03a4:;
  /* 114e03a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e03a8 jne 0x114e03ae */
  if (!C.zf) goto L_114e03ae;
  /* 114e03aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e03ac jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e03ae:;
  /* 114e03ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e03b1 push edx */
  push32((uint32_t)(EDX));
  /* 114e03b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114e03b5 push eax */
  push32((uint32_t)(EAX));
  /* 114e03b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114e03b9 push ecx */
  push32((uint32_t)(ECX));
  /* 114e03ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e03bd push edx */
  push32((uint32_t)(EDX));
  /* 114e03be push 1 */
  push32((uint32_t)(0x1u));
  /* 114e03c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114e03c3 push eax */
  push32((uint32_t)(EAX));
  /* 114e03c4 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e03cau);
  /* 114e03ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e03cc jne 0x114e03d2 */
  if (!C.zf) goto L_114e03d2;
  /* 114e03ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e03d0 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e03d2:;
  /* 114e03d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e03d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114e03d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114e03d9 push edx */
  push32((uint32_t)(EDX));
  /* 114e03da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e03dd push eax */
  push32((uint32_t)(EAX));
  /* 114e03de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114e03e1 push ecx */
  push32((uint32_t)(ECX));
  /* 114e03e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e03e5 push edx */
  push32((uint32_t)(EDX));
  /* 114e03e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e03e9 push eax */
  push32((uint32_t)(EAX));
  /* 114e03ea call dword ptr [0x11501330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501330))), 0x114e03f0u);
  /* 114e03f0 jmp 0x114e03f4 */
  goto L_114e03f4;
L_114e03f2:;
  /* 114e03f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114e03f4:;
  /* 114e03f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 114e03f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e03fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114e0401 pop edi */
  EDI = (pop32());
  /* 114e0402 pop esi */
  ESI = (pop32());
  /* 114e0403 pop ebx */
  EBX = (pop32());
  /* 114e0404 mov esp, ebp */
  ESP = (EBP);
  /* 114e0406 pop ebp */
  EBP = (pop32());
  /* 114e0407 ret  */
  ESPCHK(0x114e0010u, _esp0);
  ESP += 4; return;
}

/* FUN_10020410 @ 0x114e0410 (80 bytes, 32 insns) */
void f_114e0410(void) {
  FTRACE(0x114e0410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0410 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0411 mov ebp, esp */
  EBP = (ESP);
  /* 114e0413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e0416 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0419 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114e041c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e041f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114e0422:;
  /* 114e0422 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0425 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0428 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e042b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114e042e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e0430 je 0x114e0447 */
  if (C.zf) goto L_114e0447;
  /* 114e0432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0435 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114e0438 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e043a je 0x114e0447 */
  if (C.zf) goto L_114e0447;
  /* 114e043c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e043f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0442 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114e0445 jmp 0x114e0422 */
  goto L_114e0422;
L_114e0447:;
  /* 114e0447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e044a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114e044d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e044f jne 0x114e0459 */
  if (!C.zf) goto L_114e0459;
  /* 114e0451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0454 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e0457 jmp 0x114e045c */
  goto L_114e045c;
L_114e0459:;
  /* 114e0459 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_114e045c:;
  /* 114e045c mov esp, ebp */
  ESP = (EBP);
  /* 114e045e pop ebp */
  EBP = (pop32());
  /* 114e045f ret  */
  ESPCHK(0x114e0410u, _esp0);
  ESP += 4; return;
}

/* FUN_10020460 @ 0x114e0460 (736 bytes, 224 insns) */
void f_114e0460(void) {
  FTRACE(0x114e0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0460 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0461 mov ebp, esp */
  EBP = (ESP);
  /* 114e0463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e0466 push esi */
  push32((uint32_t)(ESI));
  /* 114e0467 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e046b je 0x114e048c */
  if (C.zf) goto L_114e048c;
  /* 114e046d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 114e046f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0472 push eax */
  push32((uint32_t)(EAX));
  /* 114e0473 call 0x114e0c00 */
  push32(0x114e0478u); f_114e0c00();
  /* 114e0478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e047b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114e047e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0482 je 0x114e048c */
  if (C.zf) goto L_114e048c;
  /* 114e0484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0487 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e048a jne 0x114e0494 */
  if (!C.zf) goto L_114e0494;
L_114e048c:;
  /* 114e048c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e048f jmp 0x114e073b */
  goto L_114e073b;
L_114e0494:;
  /* 114e0494 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114e0497 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114e049b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114e049d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e049f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114e04a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114e04a3 mov ecx, dword ptr [0x114ff1cc] */
  ECX = (r32((uint32_t)(0x114ff1cc)));
  /* 114e04a9 cmp ecx, dword ptr [0x114ff1d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114ff1d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e04af jne 0x114e04c5 */
  if (!C.zf) goto L_114e04c5;
  /* 114e04b1 mov edx, dword ptr [0x114ff1cc] */
  EDX = (r32((uint32_t)(0x114ff1cc)));
  /* 114e04b7 push edx */
  push32((uint32_t)(EDX));
  /* 114e04b8 call 0x114e07c0 */
  push32(0x114e04bdu); f_114e07c0();
  /* 114e04bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e04c0 mov dword ptr [0x114ff1cc], eax */
  w32((uint32_t)(0x114ff1cc), (EAX));
L_114e04c5:;
  /* 114e04c5 cmp dword ptr [0x114ff1cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e04cc jne 0x114e0585 */
  if (!C.zf) goto L_114e0585;
  /* 114e04d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e04d6 je 0x114e04f7 */
  if (C.zf) goto L_114e04f7;
  /* 114e04d8 cmp dword ptr [0x114ff1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e04df je 0x114e04f7 */
  if (C.zf) goto L_114e04f7;
  /* 114e04e1 call 0x114de230 */
  push32(0x114e04e6u); f_114de230();
  /* 114e04e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e04e8 je 0x114e04f2 */
  if (C.zf) goto L_114e04f2;
  /* 114e04ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e04ed jmp 0x114e073b */
  goto L_114e073b;
L_114e04f2:;
  /* 114e04f2 jmp 0x114e0585 */
  goto L_114e0585;
L_114e04f7:;
  /* 114e04f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e04fb je 0x114e0504 */
  if (C.zf) goto L_114e0504;
  /* 114e04fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e04ff jmp 0x114e073b */
  goto L_114e073b;
L_114e0504:;
  /* 114e0504 cmp dword ptr [0x114ff1cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e050b jne 0x114e0544 */
  if (!C.zf) goto L_114e0544;
  /* 114e050d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 114e0512 push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e0517 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e0519 push 4 */
  push32((uint32_t)(0x4u));
  /* 114e051b call 0x114cb900 */
  push32(0x114e0520u); f_114cb900();
  /* 114e0520 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0523 mov dword ptr [0x114ff1cc], eax */
  w32((uint32_t)(0x114ff1cc), (EAX));
  /* 114e0528 cmp dword ptr [0x114ff1cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e052f jne 0x114e0539 */
  if (!C.zf) goto L_114e0539;
  /* 114e0531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0534 jmp 0x114e073b */
  goto L_114e073b;
L_114e0539:;
  /* 114e0539 mov eax, dword ptr [0x114ff1cc] */
  EAX = (r32((uint32_t)(0x114ff1cc)));
  /* 114e053e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114e0544:;
  /* 114e0544 cmp dword ptr [0x114ff1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e054b jne 0x114e0585 */
  if (!C.zf) goto L_114e0585;
  /* 114e054d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 114e0552 push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e0557 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e0559 push 4 */
  push32((uint32_t)(0x4u));
  /* 114e055b call 0x114cb900 */
  push32(0x114e0560u); f_114cb900();
  /* 114e0560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0563 mov dword ptr [0x114ff1d4], eax */
  w32((uint32_t)(0x114ff1d4), (EAX));
  /* 114e0568 cmp dword ptr [0x114ff1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e056f jne 0x114e0579 */
  if (!C.zf) goto L_114e0579;
  /* 114e0571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0574 jmp 0x114e073b */
  goto L_114e073b;
L_114e0579:;
  /* 114e0579 mov ecx, dword ptr [0x114ff1d4] */
  ECX = (r32((uint32_t)(0x114ff1d4)));
  /* 114e057f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_114e0585:;
  /* 114e0585 mov edx, dword ptr [0x114ff1cc] */
  EDX = (r32((uint32_t)(0x114ff1cc)));
  /* 114e058b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114e058e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114e0591 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e0594 push eax */
  push32((uint32_t)(EAX));
  /* 114e0595 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0598 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0599 call 0x114e0740 */
  push32(0x114e059eu); f_114e0740();
  /* 114e059e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e05a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114e05a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e05a8 jl 0x114e0641 */
  if ((C.sf!=C.of)) goto L_114e0641;
  /* 114e05ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e05b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e05b4 je 0x114e0641 */
  if (C.zf) goto L_114e0641;
  /* 114e05ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e05be je 0x114e0633 */
  if (C.zf) goto L_114e0633;
  /* 114e05c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e05c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e05c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e05c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114e05cb push edx */
  push32((uint32_t)(EDX));
  /* 114e05cc call 0x114cc390 */
  push32(0x114e05d1u); f_114cc390();
  /* 114e05d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e05d4 jmp 0x114e05df */
  goto L_114e05df;
L_114e05d6:;
  /* 114e05d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e05d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e05dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114e05df:;
  /* 114e05df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e05e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e05e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e05e9 je 0x114e0600 */
  if (C.zf) goto L_114e0600;
  /* 114e05eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e05ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e05f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e05f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 114e05f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 114e05fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 114e05fe jmp 0x114e05d6 */
  goto L_114e05d6;
L_114e0600:;
  /* 114e0600 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 114e0605 push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e060a push 2 */
  push32((uint32_t)(0x2u));
  /* 114e060c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e060f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114e0612 push eax */
  push32((uint32_t)(EAX));
  /* 114e0613 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e0616 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0617 call 0x114cbd90 */
  push32(0x114e061cu); f_114cbd90();
  /* 114e061c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e061f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114e0622 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0626 je 0x114e0631 */
  if (C.zf) goto L_114e0631;
  /* 114e0628 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e062b mov dword ptr [0x114ff1cc], edx */
  w32((uint32_t)(0x114ff1cc), (EDX));
L_114e0631:;
  /* 114e0631 jmp 0x114e063f */
  goto L_114e063f;
L_114e0633:;
  /* 114e0633 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e0639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e063c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_114e063f:;
  /* 114e063f jmp 0x114e06b4 */
  goto L_114e06b4;
L_114e0641:;
  /* 114e0641 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0645 jne 0x114e06ad */
  if (!C.zf) goto L_114e06ad;
  /* 114e0647 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e064b jge 0x114e0655 */
  if ((C.sf==C.of)) goto L_114e0655;
  /* 114e064d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0650 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114e0652 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114e0655:;
  /* 114e0655 push 0xce */
  push32((uint32_t)(0xceu));
  /* 114e065a push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e065f push 2 */
  push32((uint32_t)(0x2u));
  /* 114e0661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0664 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 114e066b push edx */
  push32((uint32_t)(EDX));
  /* 114e066c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e066f push eax */
  push32((uint32_t)(EAX));
  /* 114e0670 call 0x114cbd90 */
  push32(0x114e0675u); f_114cbd90();
  /* 114e0675 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0678 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114e067b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e067f jne 0x114e0689 */
  if (!C.zf) goto L_114e0689;
  /* 114e0681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0684 jmp 0x114e073b */
  goto L_114e073b;
L_114e0689:;
  /* 114e0689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e068c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e068f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0692 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114e0695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0698 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e069b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 114e06a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e06a6 mov dword ptr [0x114ff1cc], eax */
  w32((uint32_t)(0x114ff1cc), (EAX));
  /* 114e06ab jmp 0x114e06b4 */
  goto L_114e06b4;
L_114e06ad:;
  /* 114e06ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e06af jmp 0x114e073b */
  goto L_114e073b;
L_114e06b4:;
  /* 114e06b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e06b8 je 0x114e0739 */
  if (C.zf) goto L_114e0739;
  /* 114e06ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 114e06bf push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e06c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e06c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e06c9 push ecx */
  push32((uint32_t)(ECX));
  /* 114e06ca call 0x114d0fb0 */
  push32(0x114e06cfu); f_114d0fb0();
  /* 114e06cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e06d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e06d5 push eax */
  push32((uint32_t)(EAX));
  /* 114e06d6 call 0x114cb900 */
  push32(0x114e06dbu); f_114cb900();
  /* 114e06db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e06de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114e06e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e06e5 je 0x114e0739 */
  if (C.zf) goto L_114e0739;
  /* 114e06e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e06ea push edx */
  push32((uint32_t)(EDX));
  /* 114e06eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e06ee push eax */
  push32((uint32_t)(EAX));
  /* 114e06ef call 0x114d1130 */
  push32(0x114e06f4u); f_114d1130();
  /* 114e06f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e06f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114e06fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e06fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e0700 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0702 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114e0705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0708 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114e070b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e070e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0711 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114e0714 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114e0717 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114e0719 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e071b not edx */
  EDX = (~(EDX));
  /* 114e071d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 114e0720 push edx */
  push32((uint32_t)(EDX));
  /* 114e0721 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e0724 push eax */
  push32((uint32_t)(EAX));
  /* 114e0725 call dword ptr [0x11501324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501324))), 0x114e072bu);
  /* 114e072b push 2 */
  push32((uint32_t)(0x2u));
  /* 114e072d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e0730 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0731 call 0x114cc390 */
  push32(0x114e0736u); f_114cc390();
  /* 114e0736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114e0739:;
  /* 114e0739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114e073b:;
  /* 114e073b pop esi */
  ESI = (pop32());
  /* 114e073c mov esp, ebp */
  ESP = (EBP);
  /* 114e073e pop ebp */
  EBP = (pop32());
  /* 114e073f ret  */
  ESPCHK(0x114e0460u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x114e0740 (124 bytes, 47 insns) */
void f_114e0740(void) {
  FTRACE(0x114e0740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0740 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0741 mov ebp, esp */
  EBP = (ESP);
  /* 114e0743 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0744 mov eax, dword ptr [0x114ff1cc] */
  EAX = (r32((uint32_t)(0x114ff1cc)));
  /* 114e0749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114e074c jmp 0x114e0757 */
  goto L_114e0757;
L_114e074e:;
  /* 114e074e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0751 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0754 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114e0757:;
  /* 114e0757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e075a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e075d je 0x114e07aa */
  if (C.zf) goto L_114e07aa;
  /* 114e075f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0762 push eax */
  push32((uint32_t)(EAX));
  /* 114e0763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0766 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114e0768 push edx */
  push32((uint32_t)(EDX));
  /* 114e0769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e076c push eax */
  push32((uint32_t)(EAX));
  /* 114e076d call 0x114de1e0 */
  push32(0x114e0772u); f_114de1e0();
  /* 114e0772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0777 jne 0x114e07a8 */
  if (!C.zf) goto L_114e07a8;
  /* 114e0779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e077c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114e077e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0781 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 114e0785 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0788 je 0x114e079a */
  if (C.zf) goto L_114e079a;
  /* 114e078a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e078d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114e078f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0792 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 114e0796 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e0798 jne 0x114e07a8 */
  if (!C.zf) goto L_114e07a8;
L_114e079a:;
  /* 114e079a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e079d sub eax, dword ptr [0x114ff1cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114ff1cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e07a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114e07a6 jmp 0x114e07b8 */
  goto L_114e07b8;
L_114e07a8:;
  /* 114e07a8 jmp 0x114e074e */
  goto L_114e074e;
L_114e07aa:;
  /* 114e07aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e07ad sub eax, dword ptr [0x114ff1cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114ff1cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e07b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114e07b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_114e07b8:;
  /* 114e07b8 mov esp, ebp */
  ESP = (EBP);
  /* 114e07ba pop ebp */
  EBP = (pop32());
  /* 114e07bb ret  */
  ESPCHK(0x114e0740u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x114e07c0 (238 bytes, 80 insns) */
void f_114e07c0(void) {
  FTRACE(0x114e07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114e07c1 mov ebp, esp */
  EBP = (ESP);
  /* 114e07c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e07c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114e07cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e07d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114e07d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e07d7 jne 0x114e07e0 */
  if (!C.zf) goto L_114e07e0;
  /* 114e07d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e07db jmp 0x114e08aa */
  goto L_114e08aa;
L_114e07e0:;
  /* 114e07e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e07e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114e07e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e07e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e07eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114e07ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e07f0 je 0x114e07fd */
  if (C.zf) goto L_114e07fd;
  /* 114e07f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e07f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e07f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114e07fb jmp 0x114e07e0 */
  goto L_114e07e0;
L_114e07fd:;
  /* 114e07fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 114e0802 push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e0807 push 2 */
  push32((uint32_t)(0x2u));
  /* 114e0809 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e080c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 114e0813 push eax */
  push32((uint32_t)(EAX));
  /* 114e0814 call 0x114cb900 */
  push32(0x114e0819u); f_114cb900();
  /* 114e0819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e081c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114e081f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114e0825 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0829 jne 0x114e0835 */
  if (!C.zf) goto L_114e0835;
  /* 114e082b push 9 */
  push32((uint32_t)(0x9u));
  /* 114e082d call 0x114ca370 */
  push32(0x114e0832u); f_114ca370();
  /* 114e0832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114e0835:;
  /* 114e0835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0838 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114e083b:;
  /* 114e083b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e083e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0841 je 0x114e089e */
  if (C.zf) goto L_114e089e;
  /* 114e0843 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 114e0848 push 0x114fad68 */
  push32((uint32_t)(0x114fad68u));
  /* 114e084d push 2 */
  push32((uint32_t)(0x2u));
  /* 114e084f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e0852 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114e0854 push edx */
  push32((uint32_t)(EDX));
  /* 114e0855 call 0x114d0fb0 */
  push32(0x114e085au); f_114d0fb0();
  /* 114e085a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e085d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0860 push eax */
  push32((uint32_t)(EAX));
  /* 114e0861 call 0x114cb900 */
  push32(0x114e0866u); f_114cb900();
  /* 114e0866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e086c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114e086e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0871 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0874 je 0x114e088a */
  if (C.zf) goto L_114e088a;
  /* 114e0876 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e0879 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114e087b push ecx */
  push32((uint32_t)(ECX));
  /* 114e087c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e087f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114e0881 push eax */
  push32((uint32_t)(EAX));
  /* 114e0882 call 0x114d1130 */
  push32(0x114e0887u); f_114d1130();
  /* 114e0887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114e088a:;
  /* 114e088a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114e088d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114e0893 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e0896 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0899 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114e089c jmp 0x114e083b */
  goto L_114e083b;
L_114e089e:;
  /* 114e089e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114e08a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114e08a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114e08aa:;
  /* 114e08aa mov esp, ebp */
  ESP = (EBP);
  /* 114e08ac pop ebp */
  EBP = (pop32());
  /* 114e08ad ret  */
  ESPCHK(0x114e07c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100208b0 @ 0x114e08b0 (382 bytes, 135 insns) */
void f_114e08b0(void) {
  FTRACE(0x114e08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114e08b1 mov ebp, esp */
  EBP = (ESP);
  /* 114e08b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e08b5 push 0x114fad78 */
  push32((uint32_t)(0x114fad78u));
  /* 114e08ba push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114e08bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114e08c5 push eax */
  push32((uint32_t)(EAX));
  /* 114e08c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114e08cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e08d0 push ebx */
  push32((uint32_t)(EBX));
  /* 114e08d1 push esi */
  push32((uint32_t)(ESI));
  /* 114e08d2 push edi */
  push32((uint32_t)(EDI));
  /* 114e08d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e08d6 cmp dword ptr [0x114ff49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e08dd jne 0x114e0922 */
  if (!C.zf) goto L_114e0922;
  /* 114e08df push 0 */
  push32((uint32_t)(0x0u));
  /* 114e08e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e08e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e08e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e08e7 call dword ptr [0x11501320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501320))), 0x114e08edu);
  /* 114e08ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e08ef je 0x114e08fd */
  if (C.zf) goto L_114e08fd;
  /* 114e08f1 mov dword ptr [0x114ff49c], 1 */
  w32((uint32_t)(0x114ff49c), (0x1u));
  /* 114e08fb jmp 0x114e0922 */
  goto L_114e0922;
L_114e08fd:;
  /* 114e08fd push 0 */
  push32((uint32_t)(0x0u));
  /* 114e08ff push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0901 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0903 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0905 call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114e090bu);
  /* 114e090b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e090d je 0x114e091b */
  if (C.zf) goto L_114e091b;
  /* 114e090f mov dword ptr [0x114ff49c], 2 */
  w32((uint32_t)(0x114ff49c), (0x2u));
  /* 114e0919 jmp 0x114e0922 */
  goto L_114e0922;
L_114e091b:;
  /* 114e091b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e091d jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e0922:;
  /* 114e0922 cmp dword ptr [0x114ff49c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff49c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0929 jne 0x114e0946 */
  if (!C.zf) goto L_114e0946;
  /* 114e092b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e092e push eax */
  push32((uint32_t)(EAX));
  /* 114e092f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e0932 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0933 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0936 push edx */
  push32((uint32_t)(EDX));
  /* 114e0937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e093a push eax */
  push32((uint32_t)(EAX));
  /* 114e093b call dword ptr [0x11501320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501320))), 0x114e0941u);
  /* 114e0941 jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e0946:;
  /* 114e0946 cmp dword ptr [0x114ff49c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff49c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e094d jne 0x114e0a2f */
  if (!C.zf) goto L_114e0a2f;
  /* 114e0953 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0957 jne 0x114e0962 */
  if (!C.zf) goto L_114e0962;
  /* 114e0959 mov ecx, dword ptr [0x114ff418] */
  ECX = (r32((uint32_t)(0x114ff418)));
  /* 114e095f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_114e0962:;
  /* 114e0962 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0964 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0966 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0969 push edx */
  push32((uint32_t)(EDX));
  /* 114e096a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e096d push eax */
  push32((uint32_t)(EAX));
  /* 114e096e call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114e0974u);
  /* 114e0974 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114e0977 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e097b jne 0x114e0984 */
  if (!C.zf) goto L_114e0984;
  /* 114e097d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e097f jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e0984:;
  /* 114e0984 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114e098b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e098e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0991 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114e0993 call 0x114d1320 */
  push32(0x114e0998u); f_114d1320();
  /* 114e0998 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 114e099b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e099e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114e09a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114e09a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114e09ab jmp 0x114e09c4 */
  goto L_114e09c4;
  /* 114e09ad mov eax, 1 */
  EAX = (0x1u);
  /* 114e09b2 ret  */
  ESPCHK(0x114e08b0u, _esp0);
  ESP += 4; return;
  /* 114e09b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114e09b6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114e09bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114e09c4:;
  /* 114e09c4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e09c8 jne 0x114e09ce */
  if (!C.zf) goto L_114e09ce;
  /* 114e09ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e09cc jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e09ce:;
  /* 114e09ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e09d1 push edx */
  push32((uint32_t)(EDX));
  /* 114e09d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e09d5 push eax */
  push32((uint32_t)(EAX));
  /* 114e09d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e09d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114e09da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e09dd push edx */
  push32((uint32_t)(EDX));
  /* 114e09de call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114e09e4u);
  /* 114e09e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e09e6 jne 0x114e09ec */
  if (!C.zf) goto L_114e09ec;
  /* 114e09e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e09ea jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e09ec:;
  /* 114e09ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e09f0 jne 0x114e0a0d */
  if (!C.zf) goto L_114e0a0d;
  /* 114e09f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e09f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e09f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e09f8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e09fb push eax */
  push32((uint32_t)(EAX));
  /* 114e09fc push 1 */
  push32((uint32_t)(0x1u));
  /* 114e09fe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0a01 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0a02 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e0a08u);
  /* 114e0a08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114e0a0b jmp 0x114e0a2a */
  goto L_114e0a2a;
L_114e0a0d:;
  /* 114e0a0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e0a10 push edx */
  push32((uint32_t)(EDX));
  /* 114e0a11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e0a14 push eax */
  push32((uint32_t)(EAX));
  /* 114e0a15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e0a17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e0a1a push ecx */
  push32((uint32_t)(ECX));
  /* 114e0a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0a1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0a20 push edx */
  push32((uint32_t)(EDX));
  /* 114e0a21 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114e0a27u);
  /* 114e0a27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114e0a2a:;
  /* 114e0a2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114e0a2d jmp 0x114e0a31 */
  goto L_114e0a31;
L_114e0a2f:;
  /* 114e0a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114e0a31:;
  /* 114e0a31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 114e0a34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e0a37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114e0a3e pop edi */
  EDI = (pop32());
  /* 114e0a3f pop esi */
  ESI = (pop32());
  /* 114e0a40 pop ebx */
  EBX = (pop32());
  /* 114e0a41 mov esp, ebp */
  ESP = (EBP);
  /* 114e0a43 pop ebp */
  EBP = (pop32());
  /* 114e0a44 ret  */
  ESPCHK(0x114e08b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020a50 @ 0x114e0a50 (398 bytes, 140 insns) */
void f_114e0a50(void) {
  FTRACE(0x114e0a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0a50 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0a51 mov ebp, esp */
  EBP = (ESP);
  /* 114e0a53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e0a55 push 0x114fad88 */
  push32((uint32_t)(0x114fad88u));
  /* 114e0a5a push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114e0a5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114e0a65 push eax */
  push32((uint32_t)(EAX));
  /* 114e0a66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114e0a6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0a70 push ebx */
  push32((uint32_t)(EBX));
  /* 114e0a71 push esi */
  push32((uint32_t)(ESI));
  /* 114e0a72 push edi */
  push32((uint32_t)(EDI));
  /* 114e0a73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e0a76 cmp dword ptr [0x114ff4a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0a7d jne 0x114e0ac2 */
  if (!C.zf) goto L_114e0ac2;
  /* 114e0a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0a87 call dword ptr [0x11501320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501320))), 0x114e0a8du);
  /* 114e0a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0a8f je 0x114e0a9d */
  if (C.zf) goto L_114e0a9d;
  /* 114e0a91 mov dword ptr [0x114ff4a0], 1 */
  w32((uint32_t)(0x114ff4a0), (0x1u));
  /* 114e0a9b jmp 0x114e0ac2 */
  goto L_114e0ac2;
L_114e0a9d:;
  /* 114e0a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114e0aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0aa5 call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114e0aabu);
  /* 114e0aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0aad je 0x114e0abb */
  if (C.zf) goto L_114e0abb;
  /* 114e0aaf mov dword ptr [0x114ff4a0], 2 */
  w32((uint32_t)(0x114ff4a0), (0x2u));
  /* 114e0ab9 jmp 0x114e0ac2 */
  goto L_114e0ac2;
L_114e0abb:;
  /* 114e0abb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0abd jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0ac2:;
  /* 114e0ac2 cmp dword ptr [0x114ff4a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0ac9 jne 0x114e0ae6 */
  if (!C.zf) goto L_114e0ae6;
  /* 114e0acb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e0ace push eax */
  push32((uint32_t)(EAX));
  /* 114e0acf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e0ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0ad3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0ad6 push edx */
  push32((uint32_t)(EDX));
  /* 114e0ad7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0ada push eax */
  push32((uint32_t)(EAX));
  /* 114e0adb call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114e0ae1u);
  /* 114e0ae1 jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0ae6:;
  /* 114e0ae6 cmp dword ptr [0x114ff4a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0aed jne 0x114e0bdf */
  if (!C.zf) goto L_114e0bdf;
  /* 114e0af3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0af7 jne 0x114e0b02 */
  if (!C.zf) goto L_114e0b02;
  /* 114e0af9 mov ecx, dword ptr [0x114ff418] */
  ECX = (r32((uint32_t)(0x114ff418)));
  /* 114e0aff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_114e0b02:;
  /* 114e0b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0b09 push edx */
  push32((uint32_t)(EDX));
  /* 114e0b0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0b0d push eax */
  push32((uint32_t)(EAX));
  /* 114e0b0e call dword ptr [0x11501320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501320))), 0x114e0b14u);
  /* 114e0b14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114e0b17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0b1b jne 0x114e0b24 */
  if (!C.zf) goto L_114e0b24;
  /* 114e0b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0b1f jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0b24:;
  /* 114e0b24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114e0b2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e0b2e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114e0b30 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0b33 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114e0b35 call 0x114d1320 */
  push32(0x114e0b3au); f_114d1320();
  /* 114e0b3a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 114e0b3d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114e0b40 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114e0b43 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114e0b46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114e0b4d jmp 0x114e0b66 */
  goto L_114e0b66;
  /* 114e0b4f mov eax, 1 */
  EAX = (0x1u);
  /* 114e0b54 ret  */
  ESPCHK(0x114e0a50u, _esp0);
  ESP += 4; return;
  /* 114e0b55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114e0b58 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114e0b5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114e0b66:;
  /* 114e0b66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0b6a jne 0x114e0b70 */
  if (!C.zf) goto L_114e0b70;
  /* 114e0b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0b6e jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0b70:;
  /* 114e0b70 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114e0b73 push edx */
  push32((uint32_t)(EDX));
  /* 114e0b74 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e0b77 push eax */
  push32((uint32_t)(EAX));
  /* 114e0b78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0b7b push ecx */
  push32((uint32_t)(ECX));
  /* 114e0b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0b7f push edx */
  push32((uint32_t)(EDX));
  /* 114e0b80 call dword ptr [0x11501320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501320))), 0x114e0b86u);
  /* 114e0b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114e0b88 jne 0x114e0b8e */
  if (!C.zf) goto L_114e0b8e;
  /* 114e0b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0b8c jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0b8e:;
  /* 114e0b8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0b92 jne 0x114e0bb6 */
  if (!C.zf) goto L_114e0bb6;
  /* 114e0b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0b9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e0b9e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e0ba1 push eax */
  push32((uint32_t)(EAX));
  /* 114e0ba2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114e0ba7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0baa push ecx */
  push32((uint32_t)(ECX));
  /* 114e0bab call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114e0bb1u);
  /* 114e0bb1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114e0bb4 jmp 0x114e0bda */
  goto L_114e0bda;
L_114e0bb6:;
  /* 114e0bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114e0bba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114e0bbd push edx */
  push32((uint32_t)(EDX));
  /* 114e0bbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114e0bc1 push eax */
  push32((uint32_t)(EAX));
  /* 114e0bc2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114e0bc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114e0bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0bc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114e0bcd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114e0bd0 push edx */
  push32((uint32_t)(EDX));
  /* 114e0bd1 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114e0bd7u);
  /* 114e0bd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114e0bda:;
  /* 114e0bda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114e0bdd jmp 0x114e0be1 */
  goto L_114e0be1;
L_114e0bdf:;
  /* 114e0bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114e0be1:;
  /* 114e0be1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 114e0be4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114e0be7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114e0bee pop edi */
  EDI = (pop32());
  /* 114e0bef pop esi */
  ESI = (pop32());
  /* 114e0bf0 pop ebx */
  EBX = (pop32());
  /* 114e0bf1 mov esp, ebp */
  ESP = (EBP);
  /* 114e0bf3 pop ebp */
  EBP = (pop32());
  /* 114e0bf4 ret  */
  ESPCHK(0x114e0a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10020c00 @ 0x114e0c00 (237 bytes, 81 insns) */
void f_114e0c00(void) {
  FTRACE(0x114e0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 114e0c01 mov ebp, esp */
  EBP = (ESP);
  /* 114e0c03 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0c04 cmp dword ptr [0x114ff55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0c0b jne 0x114e0c22 */
  if (!C.zf) goto L_114e0c22;
  /* 114e0c0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114e0c10 push eax */
  push32((uint32_t)(EAX));
  /* 114e0c11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c14 push ecx */
  push32((uint32_t)(ECX));
  /* 114e0c15 call 0x114e0d00 */
  push32(0x114e0c1au); f_114e0d00();
  /* 114e0c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0c1d jmp 0x114e0ce9 */
  goto L_114e0ce9;
L_114e0c22:;
  /* 114e0c22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114e0c24 call 0x114cb800 */
  push32(0x114e0c29u); f_114cb800();
  /* 114e0c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0c2c jmp 0x114e0c37 */
  goto L_114e0c37;
L_114e0c2e:;
  /* 114e0c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0c34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_114e0c37:;
  /* 114e0c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c3a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 114e0c3e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114e0c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0c45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114e0c4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114e0c4d je 0x114e0ccb */
  if (C.zf) goto L_114e0ccb;
  /* 114e0c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0c52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0c57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0c59 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114e0c5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114e0c62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114e0c64 je 0x114e0cb6 */
  if (C.zf) goto L_114e0cb6;
  /* 114e0c66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0c6c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114e0c6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0c74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114e0c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114e0c78 jne 0x114e0c88 */
  if (!C.zf) goto L_114e0c88;
  /* 114e0c7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114e0c7c call 0x114cb8a0 */
  push32(0x114e0c81u); f_114cb8a0();
  /* 114e0c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0c86 jmp 0x114e0ce9 */
  goto L_114e0ce9;
L_114e0c88:;
  /* 114e0c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0c8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114e0c91 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 114e0c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0c97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0c99 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114e0c9b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114e0c9d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0ca0 jne 0x114e0cb4 */
  if (!C.zf) goto L_114e0cb4;
  /* 114e0ca2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114e0ca4 call 0x114cb8a0 */
  push32(0x114e0ca9u); f_114cb8a0();
  /* 114e0ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0caf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114e0cb2 jmp 0x114e0ce9 */
  goto L_114e0ce9;
L_114e0cb4:;
  /* 114e0cb4 jmp 0x114e0cc6 */
  goto L_114e0cc6;
L_114e0cb6:;
  /* 114e0cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0cb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114e0cbf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0cc2 jne 0x114e0cc6 */
  if (!C.zf) goto L_114e0cc6;
  /* 114e0cc4 jmp 0x114e0ccb */
  goto L_114e0ccb;
L_114e0cc6:;
  /* 114e0cc6 jmp 0x114e0c2e */
  goto L_114e0c2e;
L_114e0ccb:;
  /* 114e0ccb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114e0ccd call 0x114cb8a0 */
  push32(0x114e0cd2u); f_114cb8a0();
  /* 114e0cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114e0cd8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0cdd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114e0ce0 jne 0x114e0ce7 */
  if (!C.zf) goto L_114e0ce7;
  /* 114e0ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114e0ce5 jmp 0x114e0ce9 */
  goto L_114e0ce9;
L_114e0ce7:;
  /* 114e0ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114e0ce9:;
  /* 114e0ce9 mov esp, ebp */
  ESP = (EBP);
  /* 114e0ceb pop ebp */
  EBP = (pop32());
  /* 114e0cec ret  */
  ESPCHK(0x114e0c00u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x114e0d00 (193 bytes, 88 insns) */
void f_114e0d00(void) {
  FTRACE(0x114e0d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d02 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 114e0d06 push ebx */
  push32((uint32_t)(EBX));
  /* 114e0d07 mov ebx, eax */
  EBX = (EAX);
  /* 114e0d09 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 114e0d0c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114e0d10 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114e0d16 je 0x114e0d2b */
  if (C.zf) goto L_114e0d2b;
L_114e0d18:;
  /* 114e0d18 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 114e0d1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114e0d1b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114e0d1d je 0x114e0cf0 */
  if (C.zf) { jmp_ind(0x114e0cf0u); return; }
  /* 114e0d1f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 114e0d21 je 0x114e0d74 */
  if (C.zf) goto L_114e0d74;
  /* 114e0d23 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114e0d29 jne 0x114e0d18 */
  if (!C.zf) goto L_114e0d18;
L_114e0d2b:;
  /* 114e0d2b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 114e0d2d push edi */
  push32((uint32_t)(EDI));
  /* 114e0d2e mov eax, ebx */
  EAX = (EBX);
  /* 114e0d30 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 114e0d33 push esi */
  push32((uint32_t)(ESI));
  /* 114e0d34 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_114e0d36:;
  /* 114e0d36 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 114e0d38 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 114e0d3d mov eax, ecx */
  EAX = (ECX);
  /* 114e0d3f mov esi, edi */
  ESI = (EDI);
  /* 114e0d41 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 114e0d43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0d45 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0d47 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114e0d4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d4d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 114e0d4f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d51 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114e0d54 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 114e0d5a jne 0x114e0d78 */
  if (!C.zf) goto L_114e0d78;
  /* 114e0d5c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d61 je 0x114e0d36 */
  if (C.zf) goto L_114e0d36;
  /* 114e0d63 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d68 jne 0x114e0d72 */
  if (!C.zf) goto L_114e0d72;
  /* 114e0d6a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 114e0d70 jne 0x114e0d36 */
  if (!C.zf) goto L_114e0d36;
L_114e0d72:;
  /* 114e0d72 pop esi */
  ESI = (pop32());
  /* 114e0d73 pop edi */
  EDI = (pop32());
L_114e0d74:;
  /* 114e0d74 pop ebx */
  EBX = (pop32());
  /* 114e0d75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114e0d77 ret  */
  ESPCHK(0x114e0d00u, _esp0);
  ESP += 4; return;
L_114e0d78:;
  /* 114e0d78 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 114e0d7b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114e0d7d je 0x114e0db5 */
  if (C.zf) goto L_114e0db5;
  /* 114e0d7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114e0d81 je 0x114e0d72 */
  if (C.zf) goto L_114e0d72;
  /* 114e0d83 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114e0d85 je 0x114e0dae */
  if (C.zf) goto L_114e0dae;
  /* 114e0d87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114e0d89 je 0x114e0d72 */
  if (C.zf) goto L_114e0d72;
  /* 114e0d8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114e0d8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114e0d90 je 0x114e0da7 */
  if (C.zf) goto L_114e0da7;
  /* 114e0d92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114e0d94 je 0x114e0d72 */
  if (C.zf) goto L_114e0d72;
  /* 114e0d96 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114e0d98 je 0x114e0da0 */
  if (C.zf) goto L_114e0da0;
  /* 114e0d9a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114e0d9c je 0x114e0d72 */
  if (C.zf) goto L_114e0d72;
  /* 114e0d9e jmp 0x114e0d36 */
  goto L_114e0d36;
L_114e0da0:;
  /* 114e0da0 pop esi */
  ESI = (pop32());
  /* 114e0da1 pop edi */
  EDI = (pop32());
  /* 114e0da2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 114e0da5 pop ebx */
  EBX = (pop32());
  /* 114e0da6 ret  */
  ESPCHK(0x114e0d00u, _esp0);
  ESP += 4; return;
L_114e0da7:;
  /* 114e0da7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 114e0daa pop esi */
  ESI = (pop32());
  /* 114e0dab pop edi */
  EDI = (pop32());
  /* 114e0dac pop ebx */
  EBX = (pop32());
  /* 114e0dad ret  */
  ESPCHK(0x114e0d00u, _esp0);
  ESP += 4; return;
L_114e0dae:;
  /* 114e0dae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 114e0db1 pop esi */
  ESI = (pop32());
  /* 114e0db2 pop edi */
  EDI = (pop32());
  /* 114e0db3 pop ebx */
  EBX = (pop32());
  /* 114e0db4 ret  */
  ESPCHK(0x114e0d00u, _esp0);
  ESP += 4; return;
L_114e0db5:;
  /* 114e0db5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 114e0db8 pop esi */
  ESI = (pop32());
  /* 114e0db9 pop edi */
  EDI = (pop32());
  /* 114e0dba pop ebx */
  EBX = (pop32());
  /* 114e0dbb ret  */
  ESPCHK(0x114e0d00u, _esp0);
  ESP += 4; return;
  /* 114e0dbe cld  */
  C.df=0;
  /* 114e0dc0 push eax */
  push32((uint32_t)(EAX));
}

/* RtlUnwind @ 0x114e0dbc (6 bytes, 1 insns) */
void f_114e0dbc(void) {
  FTRACE(0x114e0dbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e0dbc jmp dword ptr [0x115013fc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115013fc)))); return;
}

/* Unwind@10027e10 @ 0x114e7e10 (11 bytes, 5 insns) */
void f_114e7e10(void) {
  FTRACE(0x114e7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114e7e10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114e7e13 push eax */
  push32((uint32_t)(EAX));
  /* 114e7e14 call 0x114c9780 */
  push32(0x114e7e19u); f_114c9780();
  /* 114e7e19 pop ecx */
  ECX = (pop32());
  /* 114e7e1a ret  */
  ESPCHK(0x114e7e10u, _esp0);
  ESP += 4; return;
}

