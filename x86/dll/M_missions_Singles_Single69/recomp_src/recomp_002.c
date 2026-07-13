#include "recomp.h"

/* __mbsnbicoll @ 0x11b440e0 (79 bytes, 32 insns) */
void f_11b440e0(void) {
  FTRACE(0x11b440e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b440e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b440e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b440e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b440e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b440e8 jne 0x11b440ee */
  if (!C.zf) goto L_11b440ee;
  /* 11b440ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b440ec jmp 0x11b4412b */
  goto L_11b4412b;
L_11b440ee:;
  /* 11b440ee mov eax, dword ptr [0x11b691f8] */
  EAX = (r32((uint32_t)(0x11b691f8)));
  /* 11b440f3 push eax */
  push32((uint32_t)(EAX));
  /* 11b440f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b440f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b440f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b440fb push edx */
  push32((uint32_t)(EDX));
  /* 11b440fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b440ff push eax */
  push32((uint32_t)(EAX));
  /* 11b44100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44103 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44104 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44106 mov edx, dword ptr [0x11b69484] */
  EDX = (r32((uint32_t)(0x11b69484)));
  /* 11b4410c push edx */
  push32((uint32_t)(EDX));
  /* 11b4410d call 0x11b474a0 */
  push32(0x11b44112u); f_11b474a0();
  /* 11b44112 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b44118 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4411c jne 0x11b44125 */
  if (!C.zf) goto L_11b44125;
  /* 11b4411e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11b44123 jmp 0x11b4412b */
  goto L_11b4412b;
L_11b44125:;
  /* 11b44125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44128 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b4412b:;
  /* 11b4412b mov esp, ebp */
  ESP = (EBP);
  /* 11b4412d pop ebp */
  EBP = (pop32());
  /* 11b4412e ret  */
  ESPCHK(0x11b440e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014130 @ 0x11b44130 (174 bytes, 66 insns) */
void f_11b44130(void) {
  FTRACE(0x11b44130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44130 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44131 mov ebp, esp */
  EBP = (ESP);
  /* 11b44133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44136 mov eax, dword ptr [0x11b67b38] */
  EAX = (r32((uint32_t)(0x11b67b38)));
  /* 11b4413b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b4413e:;
  /* 11b4413e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44141 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44144 je 0x11b441d8 */
  if (C.zf) goto L_11b441d8;
  /* 11b4414a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4414c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4414e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44150 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44152 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b44154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44157 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b44159 push eax */
  push32((uint32_t)(EAX));
  /* 11b4415a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4415c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4415e call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b44164u);
  /* 11b44164 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b44167 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4416b jne 0x11b44172 */
  if (!C.zf) goto L_11b44172;
  /* 11b4416d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44170 jmp 0x11b441da */
  goto L_11b441da;
L_11b44172:;
  /* 11b44172 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b44174 push 0x11b63570 */
  push32((uint32_t)(0x11b63570u));
  /* 11b44179 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4417b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4417e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4417f call 0x11b37ce0 */
  push32(0x11b44184u); f_11b37ce0();
  /* 11b44184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44187 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b4418a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4418e jne 0x11b44195 */
  if (!C.zf) goto L_11b44195;
  /* 11b44190 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44193 jmp 0x11b441da */
  goto L_11b441da;
L_11b44195:;
  /* 11b44195 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44197 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44199 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4419c push edx */
  push32((uint32_t)(EDX));
  /* 11b4419d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b441a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b441a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b441a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b441a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b441a8 push edx */
  push32((uint32_t)(EDX));
  /* 11b441a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b441ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11b441ad call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b441b3u);
  /* 11b441b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b441b5 jne 0x11b441bc */
  if (!C.zf) goto L_11b441bc;
  /* 11b441b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b441ba jmp 0x11b441da */
  goto L_11b441da;
L_11b441bc:;
  /* 11b441bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b441be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b441c1 push eax */
  push32((uint32_t)(EAX));
  /* 11b441c2 call 0x11b478f0 */
  push32(0x11b441c7u); f_11b478f0();
  /* 11b441c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b441ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b441cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b441d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b441d3 jmp 0x11b4413e */
  goto L_11b4413e;
L_11b441d8:;
  /* 11b441d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b441da:;
  /* 11b441da mov esp, ebp */
  ESP = (EBP);
  /* 11b441dc pop ebp */
  EBP = (pop32());
  /* 11b441dd ret  */
  ESPCHK(0x11b44130u, _esp0);
  ESP += 4; return;
}

/* FUN_100141e0 @ 0x11b441e0 (130 bytes, 43 insns) */
void f_11b441e0(void) {
  FTRACE(0x11b441e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b441e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b441e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b441e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b441e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b441e7 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b441ed jae 0x11b44211 */
  if (!C.cf) goto L_11b44211;
  /* 11b441ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b441f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b441f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b441f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b441fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b441fe mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44205 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4420a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4420d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4420f jne 0x11b4422c */
  if (!C.zf) goto L_11b4422c;
L_11b44211:;
  /* 11b44211 call 0x11b41d70 */
  push32(0x11b44216u); f_11b41d70();
  /* 11b44216 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b4421c call 0x11b41d80 */
  push32(0x11b44221u); f_11b41d80();
  /* 11b44221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b44227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4422a jmp 0x11b4425e */
  goto L_11b4425e;
L_11b4422c:;
  /* 11b4422c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4422f push edx */
  push32((uint32_t)(EDX));
  /* 11b44230 call 0x11b48250 */
  push32(0x11b44235u); f_11b48250();
  /* 11b44235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4423b push eax */
  push32((uint32_t)(EAX));
  /* 11b4423c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4423f push ecx */
  push32((uint32_t)(ECX));
  /* 11b44240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44243 push edx */
  push32((uint32_t)(EDX));
  /* 11b44244 call 0x11b44270 */
  push32(0x11b44249u); f_11b44270();
  /* 11b44249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4424c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4424f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44252 push eax */
  push32((uint32_t)(EAX));
  /* 11b44253 call 0x11b482e0 */
  push32(0x11b44258u); f_11b482e0();
  /* 11b44258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4425b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b4425e:;
  /* 11b4425e mov esp, ebp */
  ESP = (EBP);
  /* 11b44260 pop ebp */
  EBP = (pop32());
  /* 11b44261 ret  */
  ESPCHK(0x11b441e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014270 @ 0x11b44270 (178 bytes, 56 insns) */
void f_11b44270(void) {
  FTRACE(0x11b44270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44270 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44271 mov ebp, esp */
  EBP = (ESP);
  /* 11b44273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44279 push eax */
  push32((uint32_t)(EAX));
  /* 11b4427a call 0x11b480d0 */
  push32(0x11b4427fu); f_11b480d0();
  /* 11b4427f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b44285 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44289 jne 0x11b4429e */
  if (!C.zf) goto L_11b4429e;
  /* 11b4428b call 0x11b41d70 */
  push32(0x11b44290u); f_11b41d70();
  /* 11b44290 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b44296 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44299 jmp 0x11b4431e */
  goto L_11b4431e;
L_11b4429e:;
  /* 11b4429e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b442a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b442a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b442a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b442a7 push edx */
  push32((uint32_t)(EDX));
  /* 11b442a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b442ab push eax */
  push32((uint32_t)(EAX));
  /* 11b442ac call dword ptr [0x11b6a328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a328))), 0x11b442b2u);
  /* 11b442b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b442b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b442b9 jne 0x11b442c6 */
  if (!C.zf) goto L_11b442c6;
  /* 11b442bb call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b442c1u);
  /* 11b442c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b442c4 jmp 0x11b442cd */
  goto L_11b442cd;
L_11b442c6:;
  /* 11b442c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b442cd:;
  /* 11b442cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b442d1 je 0x11b442e4 */
  if (C.zf) goto L_11b442e4;
  /* 11b442d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b442d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b442d7 call 0x11b41cd0 */
  push32(0x11b442dcu); f_11b41cd0();
  /* 11b442dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b442df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b442e2 jmp 0x11b4431e */
  goto L_11b4431e;
L_11b442e4:;
  /* 11b442e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b442e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b442ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b442ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b442f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b442f3 mov ecx, dword ptr [edx*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b442fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11b442fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11b44301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b44307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4430a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b4430d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b44310 mov eax, dword ptr [eax*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b44317 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11b4431b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b4431e:;
  /* 11b4431e mov esp, ebp */
  ESP = (EBP);
  /* 11b44320 pop ebp */
  EBP = (pop32());
  /* 11b44321 ret  */
  ESPCHK(0x11b44270u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x11b44330 (130 bytes, 43 insns) */
void f_11b44330(void) {
  FTRACE(0x11b44330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44330 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44331 mov ebp, esp */
  EBP = (ESP);
  /* 11b44333 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44337 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4433d jae 0x11b44361 */
  if (!C.cf) goto L_11b44361;
  /* 11b4433f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44342 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b44345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44348 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4434b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4434e mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44355 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4435a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4435d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4435f jne 0x11b4437c */
  if (!C.zf) goto L_11b4437c;
L_11b44361:;
  /* 11b44361 call 0x11b41d70 */
  push32(0x11b44366u); f_11b41d70();
  /* 11b44366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b4436c call 0x11b41d80 */
  push32(0x11b44371u); f_11b41d80();
  /* 11b44371 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b44377 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4437a jmp 0x11b443ae */
  goto L_11b443ae;
L_11b4437c:;
  /* 11b4437c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4437f push edx */
  push32((uint32_t)(EDX));
  /* 11b44380 call 0x11b48250 */
  push32(0x11b44385u); f_11b48250();
  /* 11b44385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4438b push eax */
  push32((uint32_t)(EAX));
  /* 11b4438c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4438f push ecx */
  push32((uint32_t)(ECX));
  /* 11b44390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44393 push edx */
  push32((uint32_t)(EDX));
  /* 11b44394 call 0x11b443c0 */
  push32(0x11b44399u); f_11b443c0();
  /* 11b44399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4439c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4439f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b443a2 push eax */
  push32((uint32_t)(EAX));
  /* 11b443a3 call 0x11b482e0 */
  push32(0x11b443a8u); f_11b482e0();
  /* 11b443a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b443ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b443ae:;
  /* 11b443ae mov esp, ebp */
  ESP = (EBP);
  /* 11b443b0 pop ebp */
  EBP = (pop32());
  /* 11b443b1 ret  */
  ESPCHK(0x11b44330u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x11b443c0 (627 bytes, 182 insns) */
void f_11b443c0(void) {
  FTRACE(0x11b443c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b443c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b443c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b443c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b443c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b443d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b443d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11b443d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b443dd jne 0x11b443e6 */
  if (!C.zf) goto L_11b443e6;
  /* 11b443df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b443e1 jmp 0x11b4462f */
  goto L_11b4462f;
L_11b443e6:;
  /* 11b443e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b443e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b443ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b443ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b443f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b443f5 mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b443fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b44401 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11b44404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b44406 je 0x11b44418 */
  if (C.zf) goto L_11b44418;
  /* 11b44408 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4440a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4440c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4440f push edx */
  push32((uint32_t)(EDX));
  /* 11b44410 call 0x11b44270 */
  push32(0x11b44415u); f_11b44270();
  /* 11b44415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b44418:;
  /* 11b44418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4441b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b4441e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44421 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b44424 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b44427 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b4442e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11b44433 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11b44438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4443a je 0x11b4454c */
  if (C.zf) goto L_11b4454c;
  /* 11b44440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b44443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b44446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11b4444d:;
  /* 11b4444d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44450 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44453 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44456 jae 0x11b4454a */
  if (!C.cf) goto L_11b4454a;
  /* 11b4445c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11b44462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b44465:;
  /* 11b44465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b44468 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11b4446e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44470 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44476 jge 0x11b444d7 */
  if ((C.sf==C.of)) goto L_11b444d7;
  /* 11b44478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4447b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4447e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44481 jae 0x11b444d7 */
  if (!C.cf) goto L_11b444d7;
  /* 11b44483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b44488 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11b4448e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b44497 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11b4449e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b444a1 jne 0x11b444c1 */
  if (!C.zf) goto L_11b444c1;
  /* 11b444a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11b444a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b444ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11b444b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b444b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11b444b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b444bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b444be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b444c1:;
  /* 11b444c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b444c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11b444ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b444cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b444cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b444d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b444d5 jmp 0x11b44465 */
  goto L_11b44465;
L_11b444d7:;
  /* 11b444d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b444d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11b444df push edx */
  push32((uint32_t)(EDX));
  /* 11b444e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b444e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11b444e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b444eb push eax */
  push32((uint32_t)(EAX));
  /* 11b444ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11b444f2 push edx */
  push32((uint32_t)(EDX));
  /* 11b444f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b444f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b444f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b444fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b444ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b44502 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b44509 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11b4450c push eax */
  push32((uint32_t)(EAX));
  /* 11b4450d call dword ptr [0x11b6a3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3dc))), 0x11b44513u);
  /* 11b44513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b44515 je 0x11b4453a */
  if (C.zf) goto L_11b4453a;
  /* 11b44517 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4451a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44520 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b44523 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b44526 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11b4452c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4452e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44534 jge 0x11b44538 */
  if ((C.sf==C.of)) goto L_11b44538;
  /* 11b44536 jmp 0x11b4454a */
  goto L_11b4454a;
L_11b44538:;
  /* 11b44538 jmp 0x11b44545 */
  goto L_11b44545;
L_11b4453a:;
  /* 11b4453a call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b44540u);
  /* 11b44540 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b44543 jmp 0x11b4454a */
  goto L_11b4454a;
L_11b44545:;
  /* 11b44545 jmp 0x11b4444d */
  goto L_11b4444d;
L_11b4454a:;
  /* 11b4454a jmp 0x11b4459c */
  goto L_11b4459c;
L_11b4454c:;
  /* 11b4454c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4454e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11b44554 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b44558 push edx */
  push32((uint32_t)(EDX));
  /* 11b44559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4455c push eax */
  push32((uint32_t)(EAX));
  /* 11b4455d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44560 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b44563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44566 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b44569 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4456c mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44573 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11b44576 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44577 call dword ptr [0x11b6a3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3dc))), 0x11b4457du);
  /* 11b4457d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4457f je 0x11b44593 */
  if (C.zf) goto L_11b44593;
  /* 11b44581 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b44588 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11b4458e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b44591 jmp 0x11b4459c */
  goto L_11b4459c;
L_11b44593:;
  /* 11b44593 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b44599u);
  /* 11b44599 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b4459c:;
  /* 11b4459c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b445a0 jne 0x11b44626 */
  if (!C.zf) goto L_11b44626;
  /* 11b445a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b445aa je 0x11b445da */
  if (C.zf) goto L_11b445da;
  /* 11b445ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b445b0 jne 0x11b445c9 */
  if (!C.zf) goto L_11b445c9;
  /* 11b445b2 call 0x11b41d70 */
  push32(0x11b445b7u); f_11b41d70();
  /* 11b445b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b445bd call 0x11b41d80 */
  push32(0x11b445c2u); f_11b41d80();
  /* 11b445c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b445c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b445c7 jmp 0x11b445d5 */
  goto L_11b445d5;
L_11b445c9:;
  /* 11b445c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b445cc push edx */
  push32((uint32_t)(EDX));
  /* 11b445cd call 0x11b41cd0 */
  push32(0x11b445d2u); f_11b41cd0();
  /* 11b445d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b445d5:;
  /* 11b445d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b445d8 jmp 0x11b4462f */
  goto L_11b4462f;
L_11b445da:;
  /* 11b445da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b445dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b445e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b445e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b445e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b445e9 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b445f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11b445f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b445f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b445fa je 0x11b4460b */
  if (C.zf) goto L_11b4460b;
  /* 11b445fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b445ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b44602 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44605 jne 0x11b4460b */
  if (!C.zf) goto L_11b4460b;
  /* 11b44607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b44609 jmp 0x11b4462f */
  goto L_11b4462f;
L_11b4460b:;
  /* 11b4460b call 0x11b41d70 */
  push32(0x11b44610u); f_11b41d70();
  /* 11b44610 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11b44616 call 0x11b41d80 */
  push32(0x11b4461bu); f_11b41d80();
  /* 11b4461b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b44621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44624 jmp 0x11b4462f */
  goto L_11b4462f;
L_11b44626:;
  /* 11b44626 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b44629 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b4462f:;
  /* 11b4462f mov esp, ebp */
  ESP = (EBP);
  /* 11b44631 pop ebp */
  EBP = (pop32());
  /* 11b44632 ret  */
  ESPCHK(0x11b443c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x11b44640 (199 bytes, 68 insns) */
void f_11b44640(void) {
  FTRACE(0x11b44640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44640 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44641 mov ebp, esp */
  EBP = (ESP);
  /* 11b44643 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44644 push ebx */
  push32((uint32_t)(EBX));
  /* 11b44645 push esi */
  push32((uint32_t)(ESI));
  /* 11b44646 push edi */
  push32((uint32_t)(EDI));
L_11b44647:;
  /* 11b44647 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4464b jne 0x11b4466b */
  if (!C.zf) goto L_11b4466b;
  /* 11b4464d push 0x11b63424 */
  push32((uint32_t)(0x11b63424u));
  /* 11b44652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44654 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11b44656 push 0x11b6357c */
  push32((uint32_t)(0x11b6357cu));
  /* 11b4465b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4465d call 0x11b36850 */
  push32(0x11b44662u); f_11b36850();
  /* 11b44662 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44665 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44668 jne 0x11b4466b */
  if (!C.zf) goto L_11b4466b;
  /* 11b4466a int3  */
  x86_unimpl("int3 @ 0x11b4466a");
L_11b4466b:;
  /* 11b4466b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4466f jne 0x11b44647 */
  if (!C.zf) goto L_11b44647;
  /* 11b44671 mov ecx, dword ptr [0x11b67df4] */
  ECX = (r32((uint32_t)(0x11b67df4)));
  /* 11b44677 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4467a mov dword ptr [0x11b67df4], ecx */
  w32((uint32_t)(0x11b67df4), (ECX));
  /* 11b44680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b44686 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b44688 push 0x11b6357c */
  push32((uint32_t)(0x11b6357cu));
  /* 11b4468d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4468f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b44694 call 0x11b37ce0 */
  push32(0x11b44699u); f_11b37ce0();
  /* 11b44699 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4469c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4469f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b446a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b446a9 je 0x11b446c6 */
  if (C.zf) goto L_11b446c6;
  /* 11b446ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b446b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b446b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11b446ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11b446c4 jmp 0x11b446eb */
  goto L_11b446eb;
L_11b446c6:;
  /* 11b446c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b446cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b446cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b446d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b446db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b446e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11b446eb:;
  /* 11b446eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b446f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b446f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b446f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b44700 pop edi */
  EDI = (pop32());
  /* 11b44701 pop esi */
  ESI = (pop32());
  /* 11b44702 pop ebx */
  EBX = (pop32());
  /* 11b44703 mov esp, ebp */
  ESP = (EBP);
  /* 11b44705 pop ebp */
  EBP = (pop32());
  /* 11b44706 ret  */
  ESPCHK(0x11b44640u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11b44710 (50 bytes, 17 insns) */
void f_11b44710(void) {
  FTRACE(0x11b44710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44710 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44711 mov ebp, esp */
  EBP = (ESP);
  /* 11b44713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44716 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4471c jb 0x11b44722 */
  if (C.cf) goto L_11b44722;
  /* 11b4471e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b44720 jmp 0x11b44740 */
  goto L_11b44740;
L_11b44722:;
  /* 11b44722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44725 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b44728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4472b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4472e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b44731 mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44738 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4473d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11b44740:;
  /* 11b44740 pop ebp */
  EBP = (pop32());
  /* 11b44741 ret  */
  ESPCHK(0x11b44710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x11b44750 (300 bytes, 80 insns) */
void f_11b44750(void) {
  FTRACE(0x11b44750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44750 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44751 mov ebp, esp */
  EBP = (ESP);
  /* 11b44753 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44754 cmp dword ptr [0x11b691e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4475b jne 0x11b44769 */
  if (!C.zf) goto L_11b44769;
  /* 11b4475d mov dword ptr [0x11b691e0], 0x200 */
  w32((uint32_t)(0x11b691e0), (0x200u));
  /* 11b44767 jmp 0x11b4477c */
  goto L_11b4477c;
L_11b44769:;
  /* 11b44769 cmp dword ptr [0x11b691e0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44770 jge 0x11b4477c */
  if ((C.sf==C.of)) goto L_11b4477c;
  /* 11b44772 mov dword ptr [0x11b691e0], 0x14 */
  w32((uint32_t)(0x11b691e0), (0x14u));
L_11b4477c:;
  /* 11b4477c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11b44781 push 0x11b63588 */
  push32((uint32_t)(0x11b63588u));
  /* 11b44786 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b44788 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b4478a mov eax, dword ptr [0x11b691e0] */
  EAX = (r32((uint32_t)(0x11b691e0)));
  /* 11b4478f push eax */
  push32((uint32_t)(EAX));
  /* 11b44790 call 0x11b380f0 */
  push32(0x11b44795u); f_11b380f0();
  /* 11b44795 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44798 mov dword ptr [0x11b67e8c], eax */
  w32((uint32_t)(0x11b67e8c), (EAX));
  /* 11b4479d cmp dword ptr [0x11b67e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b447a4 jne 0x11b447e5 */
  if (!C.zf) goto L_11b447e5;
  /* 11b447a6 mov dword ptr [0x11b691e0], 0x14 */
  w32((uint32_t)(0x11b691e0), (0x14u));
  /* 11b447b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11b447b5 push 0x11b63588 */
  push32((uint32_t)(0x11b63588u));
  /* 11b447ba push 2 */
  push32((uint32_t)(0x2u));
  /* 11b447bc push 4 */
  push32((uint32_t)(0x4u));
  /* 11b447be mov ecx, dword ptr [0x11b691e0] */
  ECX = (r32((uint32_t)(0x11b691e0)));
  /* 11b447c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b447c5 call 0x11b380f0 */
  push32(0x11b447cau); f_11b380f0();
  /* 11b447ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b447cd mov dword ptr [0x11b67e8c], eax */
  w32((uint32_t)(0x11b67e8c), (EAX));
  /* 11b447d2 cmp dword ptr [0x11b67e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b447d9 jne 0x11b447e5 */
  if (!C.zf) goto L_11b447e5;
  /* 11b447db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11b447dd call 0x11b36360 */
  push32(0x11b447e2u); f_11b36360();
  /* 11b447e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b447e5:;
  /* 11b447e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b447ec jmp 0x11b447f7 */
  goto L_11b447f7;
L_11b447ee:;
  /* 11b447ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b447f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b447f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b447f7:;
  /* 11b447f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b447fb jge 0x11b44816 */
  if ((C.sf==C.of)) goto L_11b44816;
  /* 11b447fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44800 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b44803 add eax, 0x11b66400 */
  { uint32_t _a=(EAX),_b=(0x11b66400u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4480b mov edx, dword ptr [0x11b67e8c] */
  EDX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b44811 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11b44814 jmp 0x11b447ee */
  goto L_11b447ee;
L_11b44816:;
  /* 11b44816 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4481d jmp 0x11b44828 */
  goto L_11b44828;
L_11b4481f:;
  /* 11b4481f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b44828:;
  /* 11b44828 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4482c jge 0x11b44878 */
  if ((C.sf==C.of)) goto L_11b44878;
  /* 11b4482e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44831 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b44834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44837 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4483a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4483d mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44844 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44848 je 0x11b44866 */
  if (C.zf) goto L_11b44866;
  /* 11b4484a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4484d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b44850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44853 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b44856 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b44859 mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b44860 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44864 jne 0x11b44876 */
  if (!C.zf) goto L_11b44876;
L_11b44866:;
  /* 11b44866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44869 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b4486c mov dword ptr [ecx + 0x11b66410], 0xffffffff */
  w32((uint32_t)(ECX + 0x11b66410), (0xffffffffu));
L_11b44876:;
  /* 11b44876 jmp 0x11b4481f */
  goto L_11b4481f;
L_11b44878:;
  /* 11b44878 mov esp, ebp */
  ESP = (EBP);
  /* 11b4487a pop ebp */
  EBP = (pop32());
  /* 11b4487b ret  */
  ESPCHK(0x11b44750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014880 @ 0x11b44880 (26 bytes, 9 insns) */
void f_11b44880(void) {
  FTRACE(0x11b44880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44881 mov ebp, esp */
  EBP = (ESP);
  /* 11b44883 call 0x11b48550 */
  push32(0x11b44888u); f_11b48550();
  /* 11b44888 movsx eax, byte ptr [0x11b67b48] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b67b48))));
  /* 11b4488f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b44891 je 0x11b44898 */
  if (C.zf) goto L_11b44898;
  /* 11b44893 call 0x11b48310 */
  push32(0x11b44898u); f_11b48310();
L_11b44898:;
  /* 11b44898 pop ebp */
  EBP = (pop32());
  /* 11b44899 ret  */
  ESPCHK(0x11b44880u, _esp0);
  ESP += 4; return;
}

/* FUN_100148a0 @ 0x11b448a0 (61 bytes, 20 insns) */
void f_11b448a0(void) {
  FTRACE(0x11b448a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b448a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b448a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b448a3 cmp dword ptr [ebp + 8], 0x11b66400 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11b66400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b448aa jb 0x11b448ce */
  if (C.cf) goto L_11b448ce;
  /* 11b448ac cmp dword ptr [ebp + 8], 0x11b66660 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11b66660u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b448b3 ja 0x11b448ce */
  if ((!C.cf&&!C.zf)) goto L_11b448ce;
  /* 11b448b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b448b8 sub eax, 0x11b66400 */
  { uint32_t _a=(EAX),_b=(0x11b66400u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b448bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b448c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b448c3 push eax */
  push32((uint32_t)(EAX));
  /* 11b448c4 call 0x11b3a900 */
  push32(0x11b448c9u); f_11b3a900();
  /* 11b448c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b448cc jmp 0x11b448db */
  goto L_11b448db;
L_11b448ce:;
  /* 11b448ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b448d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b448d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b448d5 call dword ptr [0x11b6a360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a360))), 0x11b448dbu);
L_11b448db:;
  /* 11b448db pop ebp */
  EBP = (pop32());
  /* 11b448dc ret  */
  ESPCHK(0x11b448a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148e0 @ 0x11b448e0 (41 bytes, 16 insns) */
void f_11b448e0(void) {
  FTRACE(0x11b448e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b448e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b448e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b448e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b448e7 jge 0x11b448fa */
  if ((C.sf==C.of)) goto L_11b448fa;
  /* 11b448e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b448ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b448ef push eax */
  push32((uint32_t)(EAX));
  /* 11b448f0 call 0x11b3a900 */
  push32(0x11b448f5u); f_11b3a900();
  /* 11b448f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b448f8 jmp 0x11b44907 */
  goto L_11b44907;
L_11b448fa:;
  /* 11b448fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b448fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44900 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44901 call dword ptr [0x11b6a360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a360))), 0x11b44907u);
L_11b44907:;
  /* 11b44907 pop ebp */
  EBP = (pop32());
  /* 11b44908 ret  */
  ESPCHK(0x11b448e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014910 @ 0x11b44910 (61 bytes, 20 insns) */
void f_11b44910(void) {
  FTRACE(0x11b44910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44910 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44911 mov ebp, esp */
  EBP = (ESP);
  /* 11b44913 cmp dword ptr [ebp + 8], 0x11b66400 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11b66400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4491a jb 0x11b4493e */
  if (C.cf) goto L_11b4493e;
  /* 11b4491c cmp dword ptr [ebp + 8], 0x11b66660 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11b66660u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44923 ja 0x11b4493e */
  if ((!C.cf&&!C.zf)) goto L_11b4493e;
  /* 11b44925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44928 sub eax, 0x11b66400 */
  { uint32_t _a=(EAX),_b=(0x11b66400u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4492d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b44930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44933 push eax */
  push32((uint32_t)(EAX));
  /* 11b44934 call 0x11b3a9a0 */
  push32(0x11b44939u); f_11b3a9a0();
  /* 11b44939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4493c jmp 0x11b4494b */
  goto L_11b4494b;
L_11b4493e:;
  /* 11b4493e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44944 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44945 call dword ptr [0x11b6a35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a35c))), 0x11b4494bu);
L_11b4494b:;
  /* 11b4494b pop ebp */
  EBP = (pop32());
  /* 11b4494c ret  */
  ESPCHK(0x11b44910u, _esp0);
  ESP += 4; return;
}

/* FUN_10014950 @ 0x11b44950 (41 bytes, 16 insns) */
void f_11b44950(void) {
  FTRACE(0x11b44950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44950 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44951 mov ebp, esp */
  EBP = (ESP);
  /* 11b44953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44957 jge 0x11b4496a */
  if ((C.sf==C.of)) goto L_11b4496a;
  /* 11b44959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4495c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4495f push eax */
  push32((uint32_t)(EAX));
  /* 11b44960 call 0x11b3a9a0 */
  push32(0x11b44965u); f_11b3a9a0();
  /* 11b44965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44968 jmp 0x11b44977 */
  goto L_11b44977;
L_11b4496a:;
  /* 11b4496a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4496d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44970 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44971 call dword ptr [0x11b6a35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a35c))), 0x11b44977u);
L_11b44977:;
  /* 11b44977 pop ebp */
  EBP = (pop32());
  /* 11b44978 ret  */
  ESPCHK(0x11b44950u, _esp0);
  ESP += 4; return;
}

/* FUN_10014980 @ 0x11b44980 (119 bytes, 34 insns) */
void f_11b44980(void) {
  FTRACE(0x11b44980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44980 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44981 mov ebp, esp */
  EBP = (ESP);
  /* 11b44983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44986 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b4498b call dword ptr [0x11b6a3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d4))), 0x11b44991u);
  /* 11b44991 cmp dword ptr [0x11b691e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44998 je 0x11b449b8 */
  if (C.zf) goto L_11b449b8;
  /* 11b4499a push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b4499f call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b449a5u);
  /* 11b449a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b449a7 call 0x11b3a900 */
  push32(0x11b449acu); f_11b3a900();
  /* 11b449ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b449af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b449b6 jmp 0x11b449bf */
  goto L_11b449bf;
L_11b449b8:;
  /* 11b449b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b449bf:;
  /* 11b449bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11b449c3 push eax */
  push32((uint32_t)(EAX));
  /* 11b449c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b449c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b449c8 call 0x11b44a00 */
  push32(0x11b449cdu); f_11b44a00();
  /* 11b449cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b449d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b449d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b449d7 je 0x11b449e5 */
  if (C.zf) goto L_11b449e5;
  /* 11b449d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b449db call 0x11b3a9a0 */
  push32(0x11b449e0u); f_11b3a9a0();
  /* 11b449e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b449e3 jmp 0x11b449f0 */
  goto L_11b449f0;
L_11b449e5:;
  /* 11b449e5 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b449ea call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b449f0u);
L_11b449f0:;
  /* 11b449f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b449f3 mov esp, ebp */
  ESP = (EBP);
  /* 11b449f5 pop ebp */
  EBP = (pop32());
  /* 11b449f6 ret  */
  ESPCHK(0x11b44980u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a00 @ 0x11b44a00 (160 bytes, 50 insns) */
void f_11b44a00(void) {
  FTRACE(0x11b44a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44a01 mov ebp, esp */
  EBP = (ESP);
  /* 11b44a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44a06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44a0a jne 0x11b44a13 */
  if (!C.zf) goto L_11b44a13;
  /* 11b44a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b44a0e jmp 0x11b44a9c */
  goto L_11b44a9c;
L_11b44a13:;
  /* 11b44a13 cmp dword ptr [0x11b67dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44a1a jne 0x11b44a4a */
  if (!C.zf) goto L_11b44a4a;
  /* 11b44a1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b44a1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44a24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44a29 jle 0x11b44a3b */
  if ((C.zf||C.sf!=C.of)) goto L_11b44a3b;
  /* 11b44a2b call 0x11b41d70 */
  push32(0x11b44a30u); f_11b41d70();
  /* 11b44a30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11b44a36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44a39 jmp 0x11b44a9c */
  goto L_11b44a9c;
L_11b44a3b:;
  /* 11b44a3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44a3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11b44a41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b44a43 mov eax, 1 */
  EAX = (0x1u);
  /* 11b44a48 jmp 0x11b44a9c */
  goto L_11b44a9c;
L_11b44a4a:;
  /* 11b44a4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b44a51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b44a54 push eax */
  push32((uint32_t)(EAX));
  /* 11b44a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44a57 mov ecx, dword ptr [0x11b65de0] */
  ECX = (r32((uint32_t)(0x11b65de0)));
  /* 11b44a5d push ecx */
  push32((uint32_t)(ECX));
  /* 11b44a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44a61 push edx */
  push32((uint32_t)(EDX));
  /* 11b44a62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44a64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11b44a67 push eax */
  push32((uint32_t)(EAX));
  /* 11b44a68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b44a6d mov ecx, dword ptr [0x11b67dd8] */
  ECX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b44a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44a74 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b44a7au);
  /* 11b44a7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b44a7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44a81 je 0x11b44a89 */
  if (C.zf) goto L_11b44a89;
  /* 11b44a83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44a87 je 0x11b44a99 */
  if (C.zf) goto L_11b44a99;
L_11b44a89:;
  /* 11b44a89 call 0x11b41d70 */
  push32(0x11b44a8eu); f_11b41d70();
  /* 11b44a8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11b44a94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44a97 jmp 0x11b44a9c */
  goto L_11b44a9c;
L_11b44a99:;
  /* 11b44a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b44a9c:;
  /* 11b44a9c mov esp, ebp */
  ESP = (EBP);
  /* 11b44a9e pop ebp */
  EBP = (pop32());
  /* 11b44a9f ret  */
  ESPCHK(0x11b44a00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11b44aa0 (32 bytes, 18 insns) */
void f_11b44aa0(void) {
  FTRACE(0x11b44aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11b44aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b44aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11b44aa5 push edi */
  push32((uint32_t)(EDI));
  /* 11b44aa6 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b44aab push 0x11b44ab8 */
  push32((uint32_t)(0x11b44ab8u));
  /* 11b44ab0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b44ab3 call 0x11b4ac70 */
  push32(0x11b44ab8u); f_11b4ac70();
  /* 11b44ab8 pop ebp */
  EBP = (pop32());
  /* 11b44ab9 pop edi */
  EDI = (pop32());
  /* 11b44aba pop esi */
  ESI = (pop32());
  /* 11b44abb pop ebx */
  EBX = (pop32());
  /* 11b44abc mov esp, ebp */
  ESP = (EBP);
  /* 11b44abe pop ebp */
  EBP = (pop32());
  /* 11b44abf ret  */
  ESPCHK(0x11b44aa0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11b44ae2 (104 bytes, 33 insns) */
void f_11b44ae2(void) {
  FTRACE(0x11b44ae2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b44ae3 push esi */
  push32((uint32_t)(ESI));
  /* 11b44ae4 push edi */
  push32((uint32_t)(EDI));
  /* 11b44ae5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b44ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11b44aea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11b44aec push 0x11b44ac0 */
  push32((uint32_t)(0x11b44ac0u));
  /* 11b44af1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11b44af8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11b44aff:;
  /* 11b44aff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11b44b03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b44b06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b44b09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44b0c je 0x11b44b3c */
  if (C.zf) goto L_11b44b3c;
  /* 11b44b0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44b12 je 0x11b44b3c */
  if (C.zf) goto L_11b44b3c;
  /* 11b44b14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11b44b17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11b44b1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11b44b1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b44b21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44b26 jne 0x11b44b3a */
  if (!C.zf) goto L_11b44b3a;
  /* 11b44b28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b44b2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11b44b31 call 0x11b44b76 */
  push32(0x11b44b36u); f_11b44b76();
  /* 11b44b36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11b44b3au);
L_11b44b3a:;
  /* 11b44b3a jmp 0x11b44aff */
  goto L_11b44aff;
L_11b44b3c:;
  /* 11b44b3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11b44b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44b46 pop edi */
  EDI = (pop32());
  /* 11b44b47 pop esi */
  ESI = (pop32());
  /* 11b44b48 pop ebx */
  EBX = (pop32());
  /* 11b44b49 ret  */
  ESPCHK(0x11b44ae2u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b76 @ 0x11b44b76 (24 bytes, 10 insns) */
void f_11b44b76(void) {
  FTRACE(0x11b44b76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11b44b77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44b78 mov ebx, 0x11b66680 */
  EBX = (0x11b66680u);
  /* 11b44b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44b80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b44b83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b44b86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11b44b89 pop ecx */
  ECX = (pop32());
  /* 11b44b8a pop ebx */
  EBX = (pop32());
  /* 11b44b8b ret 4 */
  ESPCHK(0x11b44b76u, _esp0);
  ESP += 8; return;
}

/* FUN_10014c55 @ 0x11b44c55 (27 bytes, 11 insns) */
void f_11b44c55(void) {
  FTRACE(0x11b44c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44c55 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44c56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b44c5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11b44c5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b44c5f push eax */
  push32((uint32_t)(EAX));
  /* 11b44c60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b44c63 push eax */
  push32((uint32_t)(EAX));
  /* 11b44c64 call 0x11b44ae2 */
  push32(0x11b44c69u); f_11b44ae2();
  /* 11b44c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44c6c pop ebp */
  EBP = (pop32());
  /* 11b44c6d ret 4 */
  ESPCHK(0x11b44c55u, _esp0);
  ESP += 8; return;
}

/* ___init_time @ 0x11b44c70 (219 bytes, 64 insns) */
void f_11b44c70(void) {
  FTRACE(0x11b44c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44c71 mov ebp, esp */
  EBP = (ESP);
  /* 11b44c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44c74 cmp dword ptr [0x11b67dd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44c7b je 0x11b44d11 */
  if (C.zf) goto L_11b44d11;
  /* 11b44c81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b44c83 push 0x11b63590 */
  push32((uint32_t)(0x11b63590u));
  /* 11b44c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b44c8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11b44c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44c91 call 0x11b380f0 */
  push32(0x11b44c96u); f_11b380f0();
  /* 11b44c96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b44c9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44ca0 jne 0x11b44cac */
  if (!C.zf) goto L_11b44cac;
  /* 11b44ca2 mov eax, 1 */
  EAX = (0x1u);
  /* 11b44ca7 jmp 0x11b44d47 */
  goto L_11b44d47;
L_11b44cac:;
  /* 11b44cac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44caf push eax */
  push32((uint32_t)(EAX));
  /* 11b44cb0 call 0x11b44d50 */
  push32(0x11b44cb5u); f_11b44d50();
  /* 11b44cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b44cba je 0x11b44cdd */
  if (C.zf) goto L_11b44cdd;
  /* 11b44cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44cbf push ecx */
  push32((uint32_t)(ECX));
  /* 11b44cc0 call 0x11b452e0 */
  push32(0x11b44cc5u); f_11b452e0();
  /* 11b44cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b44cca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ccd push edx */
  push32((uint32_t)(EDX));
  /* 11b44cce call 0x11b38770 */
  push32(0x11b44cd3u); f_11b38770();
  /* 11b44cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44cd6 mov eax, 1 */
  EAX = (0x1u);
  /* 11b44cdb jmp 0x11b44d47 */
  goto L_11b44d47;
L_11b44cdd:;
  /* 11b44cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ce0 mov dword ptr [0x11b66e08], eax */
  w32((uint32_t)(0x11b66e08), (EAX));
  /* 11b44ce5 mov ecx, dword ptr [0x11b67df8] */
  ECX = (r32((uint32_t)(0x11b67df8)));
  /* 11b44ceb push ecx */
  push32((uint32_t)(ECX));
  /* 11b44cec call 0x11b452e0 */
  push32(0x11b44cf1u); f_11b452e0();
  /* 11b44cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44cf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b44cf6 mov edx, dword ptr [0x11b67df8] */
  EDX = (r32((uint32_t)(0x11b67df8)));
  /* 11b44cfc push edx */
  push32((uint32_t)(EDX));
  /* 11b44cfd call 0x11b38770 */
  push32(0x11b44d02u); f_11b38770();
  /* 11b44d02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44d08 mov dword ptr [0x11b67df8], eax */
  w32((uint32_t)(0x11b67df8), (EAX));
  /* 11b44d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b44d0f jmp 0x11b44d47 */
  goto L_11b44d47;
L_11b44d11:;
  /* 11b44d11 mov dword ptr [0x11b66e08], 0x11b66e10 */
  w32((uint32_t)(0x11b66e08), (0x11b66e10u));
  /* 11b44d1b mov ecx, dword ptr [0x11b67df8] */
  ECX = (r32((uint32_t)(0x11b67df8)));
  /* 11b44d21 push ecx */
  push32((uint32_t)(ECX));
  /* 11b44d22 call 0x11b452e0 */
  push32(0x11b44d27u); f_11b452e0();
  /* 11b44d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b44d2c mov edx, dword ptr [0x11b67df8] */
  EDX = (r32((uint32_t)(0x11b67df8)));
  /* 11b44d32 push edx */
  push32((uint32_t)(EDX));
  /* 11b44d33 call 0x11b38770 */
  push32(0x11b44d38u); f_11b38770();
  /* 11b44d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44d3b mov dword ptr [0x11b67df8], 0 */
  w32((uint32_t)(0x11b67df8), (0x0u));
  /* 11b44d45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b44d47:;
  /* 11b44d47 mov esp, ebp */
  ESP = (EBP);
  /* 11b44d49 pop ebp */
  EBP = (pop32());
  /* 11b44d4a ret  */
  ESPCHK(0x11b44c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d50 @ 0x11b44d50 (1423 bytes, 533 insns) */
void f_11b44d50(void) {
  FTRACE(0x11b44d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b44d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b44d51 mov ebp, esp */
  EBP = (ESP);
  /* 11b44d53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44d56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b44d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b44d5f mov ax, word ptr [0x11b67e32] */
  AX = (r16((uint32_t)(0x11b67e32)));
  /* 11b44d65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b44d68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44d6a mov cx, word ptr [0x11b67e34] */
  CX = (r16((uint32_t)(0x11b67e34)));
  /* 11b44d71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b44d74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44d78 jne 0x11b44d82 */
  if (!C.zf) goto L_11b44d82;
  /* 11b44d7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b44d7d jmp 0x11b452db */
  goto L_11b452db;
L_11b44d82:;
  /* 11b44d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44d85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44d88 push edx */
  push32((uint32_t)(EDX));
  /* 11b44d89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11b44d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44d8e push eax */
  push32((uint32_t)(EAX));
  /* 11b44d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44d91 call 0x11b49b10 */
  push32(0x11b44d96u); f_11b49b10();
  /* 11b44d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44d99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44d9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44d9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44da1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44da4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44da7 push edx */
  push32((uint32_t)(EDX));
  /* 11b44da8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11b44daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44dad push eax */
  push32((uint32_t)(EAX));
  /* 11b44dae push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44db0 call 0x11b49b10 */
  push32(0x11b44db5u); f_11b49b10();
  /* 11b44db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44db8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44dbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44dbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44dc6 push edx */
  push32((uint32_t)(EDX));
  /* 11b44dc7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11b44dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44dcc push eax */
  push32((uint32_t)(EAX));
  /* 11b44dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44dcf call 0x11b49b10 */
  push32(0x11b44dd4u); f_11b49b10();
  /* 11b44dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44dda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44ddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44de2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44de5 push edx */
  push32((uint32_t)(EDX));
  /* 11b44de6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11b44de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44deb push eax */
  push32((uint32_t)(EAX));
  /* 11b44dec push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44dee call 0x11b49b10 */
  push32(0x11b44df3u); f_11b49b10();
  /* 11b44df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44df9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44dfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e04 push edx */
  push32((uint32_t)(EDX));
  /* 11b44e05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11b44e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44e0a push eax */
  push32((uint32_t)(EAX));
  /* 11b44e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44e0d call 0x11b49b10 */
  push32(0x11b44e12u); f_11b49b10();
  /* 11b44e12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44e18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44e1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e23 push edx */
  push32((uint32_t)(EDX));
  /* 11b44e24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11b44e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44e29 push eax */
  push32((uint32_t)(EAX));
  /* 11b44e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44e2c call 0x11b49b10 */
  push32(0x11b44e31u); f_11b49b10();
  /* 11b44e31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44e37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44e39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e3f push edx */
  push32((uint32_t)(EDX));
  /* 11b44e40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11b44e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44e45 push eax */
  push32((uint32_t)(EAX));
  /* 11b44e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44e48 call 0x11b49b10 */
  push32(0x11b44e4du); f_11b49b10();
  /* 11b44e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44e53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44e55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e5e push edx */
  push32((uint32_t)(EDX));
  /* 11b44e5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11b44e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44e64 push eax */
  push32((uint32_t)(EAX));
  /* 11b44e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44e67 call 0x11b49b10 */
  push32(0x11b44e6cu); f_11b49b10();
  /* 11b44e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44e72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44e74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e7d push edx */
  push32((uint32_t)(EDX));
  /* 11b44e7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11b44e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44e83 push eax */
  push32((uint32_t)(EAX));
  /* 11b44e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44e86 call 0x11b49b10 */
  push32(0x11b44e8bu); f_11b49b10();
  /* 11b44e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44e91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44e93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44e96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44e99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44e9c push edx */
  push32((uint32_t)(EDX));
  /* 11b44e9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11b44e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ea2 push eax */
  push32((uint32_t)(EAX));
  /* 11b44ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44ea5 call 0x11b49b10 */
  push32(0x11b44eaau); f_11b49b10();
  /* 11b44eaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44ead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44eb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44eb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44eb8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44ebb push edx */
  push32((uint32_t)(EDX));
  /* 11b44ebc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11b44ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11b44ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44ec4 call 0x11b49b10 */
  push32(0x11b44ec9u); f_11b49b10();
  /* 11b44ec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44ecc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44ecf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44ed1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44ed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44ed7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44eda push edx */
  push32((uint32_t)(EDX));
  /* 11b44edb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11b44edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11b44ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44ee3 call 0x11b49b10 */
  push32(0x11b44ee8u); f_11b49b10();
  /* 11b44ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44eeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44eee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44ef0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44ef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44ef6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44ef9 push edx */
  push32((uint32_t)(EDX));
  /* 11b44efa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11b44efc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44eff push eax */
  push32((uint32_t)(EAX));
  /* 11b44f00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f02 call 0x11b49b10 */
  push32(0x11b44f07u); f_11b49b10();
  /* 11b44f07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44f0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44f0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44f12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44f15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f18 push edx */
  push32((uint32_t)(EDX));
  /* 11b44f19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b44f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44f1e push eax */
  push32((uint32_t)(EAX));
  /* 11b44f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f21 call 0x11b49b10 */
  push32(0x11b44f26u); f_11b49b10();
  /* 11b44f26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44f2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44f2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44f34 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f37 push edx */
  push32((uint32_t)(EDX));
  /* 11b44f38 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b44f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44f3d push eax */
  push32((uint32_t)(EAX));
  /* 11b44f3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f40 call 0x11b49b10 */
  push32(0x11b44f45u); f_11b49b10();
  /* 11b44f45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44f4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44f4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44f50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44f53 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f56 push edx */
  push32((uint32_t)(EDX));
  /* 11b44f57 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b44f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44f5c push eax */
  push32((uint32_t)(EAX));
  /* 11b44f5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f5f call 0x11b49b10 */
  push32(0x11b44f64u); f_11b49b10();
  /* 11b44f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44f6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44f6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44f6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44f72 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f75 push edx */
  push32((uint32_t)(EDX));
  /* 11b44f76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b44f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44f7b push eax */
  push32((uint32_t)(EAX));
  /* 11b44f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f7e call 0x11b49b10 */
  push32(0x11b44f83u); f_11b49b10();
  /* 11b44f83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44f89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44f8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44f91 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44f94 push edx */
  push32((uint32_t)(EDX));
  /* 11b44f95 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b44f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44f9a push eax */
  push32((uint32_t)(EAX));
  /* 11b44f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44f9d call 0x11b49b10 */
  push32(0x11b44fa2u); f_11b49b10();
  /* 11b44fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44fa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44faa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44fb0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44fb3 push edx */
  push32((uint32_t)(EDX));
  /* 11b44fb4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b44fb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11b44fba push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44fbc call 0x11b49b10 */
  push32(0x11b44fc1u); f_11b49b10();
  /* 11b44fc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44fc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44fc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44fc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44fcf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44fd2 push edx */
  push32((uint32_t)(EDX));
  /* 11b44fd3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11b44fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11b44fd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44fdb call 0x11b49b10 */
  push32(0x11b44fe0u); f_11b49b10();
  /* 11b44fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44fe3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b44fe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b44fe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b44feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b44fee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44ff1 push edx */
  push32((uint32_t)(EDX));
  /* 11b44ff2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11b44ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44ff7 push eax */
  push32((uint32_t)(EAX));
  /* 11b44ff8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b44ffa call 0x11b49b10 */
  push32(0x11b44fffu); f_11b49b10();
  /* 11b44fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45002 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45005 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45007 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b4500a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4500d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45010 push edx */
  push32((uint32_t)(EDX));
  /* 11b45011 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11b45013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45016 push eax */
  push32((uint32_t)(EAX));
  /* 11b45017 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45019 call 0x11b49b10 */
  push32(0x11b4501eu); f_11b49b10();
  /* 11b4501e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45021 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45026 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4502c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4502f push edx */
  push32((uint32_t)(EDX));
  /* 11b45030 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b45032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45035 push eax */
  push32((uint32_t)(EAX));
  /* 11b45036 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45038 call 0x11b49b10 */
  push32(0x11b4503du); f_11b49b10();
  /* 11b4503d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4504b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4504e push edx */
  push32((uint32_t)(EDX));
  /* 11b4504f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11b45051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45054 push eax */
  push32((uint32_t)(EAX));
  /* 11b45055 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45057 call 0x11b49b10 */
  push32(0x11b4505cu); f_11b49b10();
  /* 11b4505c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4505f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45064 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4506a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4506d push edx */
  push32((uint32_t)(EDX));
  /* 11b4506e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b45070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45073 push eax */
  push32((uint32_t)(EAX));
  /* 11b45074 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45076 call 0x11b49b10 */
  push32(0x11b4507bu); f_11b49b10();
  /* 11b4507b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4507e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45086 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45089 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4508c push edx */
  push32((uint32_t)(EDX));
  /* 11b4508d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11b4508f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45092 push eax */
  push32((uint32_t)(EAX));
  /* 11b45093 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45095 call 0x11b49b10 */
  push32(0x11b4509au); f_11b49b10();
  /* 11b4509a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4509d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b450a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b450a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b450a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b450a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450ab push edx */
  push32((uint32_t)(EDX));
  /* 11b450ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11b450ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b450b1 push eax */
  push32((uint32_t)(EAX));
  /* 11b450b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b450b4 call 0x11b49b10 */
  push32(0x11b450b9u); f_11b49b10();
  /* 11b450b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b450bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b450c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b450c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b450c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450ca push edx */
  push32((uint32_t)(EDX));
  /* 11b450cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b450cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b450d0 push eax */
  push32((uint32_t)(EAX));
  /* 11b450d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b450d3 call 0x11b49b10 */
  push32(0x11b450d8u); f_11b49b10();
  /* 11b450d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b450de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b450e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b450e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b450e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450e9 push edx */
  push32((uint32_t)(EDX));
  /* 11b450ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11b450ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b450ef push eax */
  push32((uint32_t)(EAX));
  /* 11b450f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b450f2 call 0x11b49b10 */
  push32(0x11b450f7u); f_11b49b10();
  /* 11b450f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b450fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b450fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b450ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45105 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45108 push edx */
  push32((uint32_t)(EDX));
  /* 11b45109 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b4510b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4510e push eax */
  push32((uint32_t)(EAX));
  /* 11b4510f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45111 call 0x11b49b10 */
  push32(0x11b45116u); f_11b49b10();
  /* 11b45116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45119 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4511c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4511e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45124 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45127 push edx */
  push32((uint32_t)(EDX));
  /* 11b45128 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b4512a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4512d push eax */
  push32((uint32_t)(EAX));
  /* 11b4512e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45130 call 0x11b49b10 */
  push32(0x11b45135u); f_11b49b10();
  /* 11b45135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4513b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4513d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45143 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45146 push edx */
  push32((uint32_t)(EDX));
  /* 11b45147 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b45149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4514c push eax */
  push32((uint32_t)(EAX));
  /* 11b4514d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4514f call 0x11b49b10 */
  push32(0x11b45154u); f_11b49b10();
  /* 11b45154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4515a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4515c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b4515f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45162 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45168 push edx */
  push32((uint32_t)(EDX));
  /* 11b45169 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11b4516b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4516e push eax */
  push32((uint32_t)(EAX));
  /* 11b4516f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45171 call 0x11b49b10 */
  push32(0x11b45176u); f_11b49b10();
  /* 11b45176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45179 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4517c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4517e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45184 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4518a push edx */
  push32((uint32_t)(EDX));
  /* 11b4518b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b4518d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45190 push eax */
  push32((uint32_t)(EAX));
  /* 11b45191 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45193 call 0x11b49b10 */
  push32(0x11b45198u); f_11b49b10();
  /* 11b45198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4519b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4519e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b451a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b451a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b451a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b451ac push edx */
  push32((uint32_t)(EDX));
  /* 11b451ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b451af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b451b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b451b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b451b5 call 0x11b49b10 */
  push32(0x11b451bau); f_11b49b10();
  /* 11b451ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b451bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b451c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b451c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b451c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b451c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b451ce push edx */
  push32((uint32_t)(EDX));
  /* 11b451cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b451d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b451d4 push eax */
  push32((uint32_t)(EAX));
  /* 11b451d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b451d7 call 0x11b49b10 */
  push32(0x11b451dcu); f_11b49b10();
  /* 11b451dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b451df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b451e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b451e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b451e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b451ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b451f0 push edx */
  push32((uint32_t)(EDX));
  /* 11b451f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b451f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b451f6 push eax */
  push32((uint32_t)(EAX));
  /* 11b451f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b451f9 call 0x11b49b10 */
  push32(0x11b451feu); f_11b49b10();
  /* 11b451fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45201 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45204 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4520c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45212 push edx */
  push32((uint32_t)(EDX));
  /* 11b45213 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b45215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45218 push eax */
  push32((uint32_t)(EAX));
  /* 11b45219 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4521b call 0x11b49b10 */
  push32(0x11b45220u); f_11b49b10();
  /* 11b45220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b4522b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4522e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45234 push edx */
  push32((uint32_t)(EDX));
  /* 11b45235 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11b45237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4523a push eax */
  push32((uint32_t)(EAX));
  /* 11b4523b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4523d call 0x11b49b10 */
  push32(0x11b45242u); f_11b49b10();
  /* 11b45242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b45248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4524a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b4524d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45250 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45256 push edx */
  push32((uint32_t)(EDX));
  /* 11b45257 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11b45259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4525c push eax */
  push32((uint32_t)(EAX));
  /* 11b4525d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4525f call 0x11b49b10 */
  push32(0x11b45264u); f_11b49b10();
  /* 11b45264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4526a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4526c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b4526f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45272 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45278 push edx */
  push32((uint32_t)(EDX));
  /* 11b45279 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b4527b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4527e push eax */
  push32((uint32_t)(EAX));
  /* 11b4527f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45281 call 0x11b49b10 */
  push32(0x11b45286u); f_11b49b10();
  /* 11b45286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45289 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4528c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4528e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b45291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45294 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4529a push edx */
  push32((uint32_t)(EDX));
  /* 11b4529b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b4529d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b452a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b452a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b452a3 call 0x11b49b10 */
  push32(0x11b452a8u); f_11b49b10();
  /* 11b452a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b452ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b452ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b452b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b452b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b452b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b452bc push edx */
  push32((uint32_t)(EDX));
  /* 11b452bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11b452c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b452c5 push eax */
  push32((uint32_t)(EAX));
  /* 11b452c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b452c8 call 0x11b49b10 */
  push32(0x11b452cdu); f_11b49b10();
  /* 11b452cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b452d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b452d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b452d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b452d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11b452db:;
  /* 11b452db mov esp, ebp */
  ESP = (EBP);
  /* 11b452dd pop ebp */
  EBP = (pop32());
  /* 11b452de ret  */
  ESPCHK(0x11b44d50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11b452e0 (779 bytes, 265 insns) */
void f_11b452e0(void) {
  FTRACE(0x11b452e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b452e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b452e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b452e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b452e7 jne 0x11b452ee */
  if (!C.zf) goto L_11b452ee;
  /* 11b452e9 jmp 0x11b455e9 */
  goto L_11b455e9;
L_11b452ee:;
  /* 11b452ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11b452f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b452f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b452f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b452f7 call 0x11b38770 */
  push32(0x11b452fcu); f_11b38770();
  /* 11b452fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b452ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45304 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b45307 push eax */
  push32((uint32_t)(EAX));
  /* 11b45308 call 0x11b38770 */
  push32(0x11b4530du); f_11b38770();
  /* 11b4530d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45310 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45315 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b45318 push edx */
  push32((uint32_t)(EDX));
  /* 11b45319 call 0x11b38770 */
  push32(0x11b4531eu); f_11b38770();
  /* 11b4531e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45321 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45326 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b45329 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4532a call 0x11b38770 */
  push32(0x11b4532fu); f_11b38770();
  /* 11b4532f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45332 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45337 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b4533a push eax */
  push32((uint32_t)(EAX));
  /* 11b4533b call 0x11b38770 */
  push32(0x11b45340u); f_11b38770();
  /* 11b45340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45343 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45345 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45348 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b4534b push edx */
  push32((uint32_t)(EDX));
  /* 11b4534c call 0x11b38770 */
  push32(0x11b45351u); f_11b38770();
  /* 11b45351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45354 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45359 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4535b push ecx */
  push32((uint32_t)(ECX));
  /* 11b4535c call 0x11b38770 */
  push32(0x11b45361u); f_11b38770();
  /* 11b45361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45364 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45369 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11b4536c push eax */
  push32((uint32_t)(EAX));
  /* 11b4536d call 0x11b38770 */
  push32(0x11b45372u); f_11b38770();
  /* 11b45372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45375 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4537a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11b4537d push edx */
  push32((uint32_t)(EDX));
  /* 11b4537e call 0x11b38770 */
  push32(0x11b45383u); f_11b38770();
  /* 11b45383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45386 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4538b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11b4538e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4538f call 0x11b38770 */
  push32(0x11b45394u); f_11b38770();
  /* 11b45394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45397 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4539c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11b4539f push eax */
  push32((uint32_t)(EAX));
  /* 11b453a0 call 0x11b38770 */
  push32(0x11b453a5u); f_11b38770();
  /* 11b453a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b453ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11b453b0 push edx */
  push32((uint32_t)(EDX));
  /* 11b453b1 call 0x11b38770 */
  push32(0x11b453b6u); f_11b38770();
  /* 11b453b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b453be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11b453c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b453c2 call 0x11b38770 */
  push32(0x11b453c7u); f_11b38770();
  /* 11b453c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b453cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b453d2 push eax */
  push32((uint32_t)(EAX));
  /* 11b453d3 call 0x11b38770 */
  push32(0x11b453d8u); f_11b38770();
  /* 11b453d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453db push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b453e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11b453e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b453e4 call 0x11b38770 */
  push32(0x11b453e9u); f_11b38770();
  /* 11b453e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b453f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11b453f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b453f5 call 0x11b38770 */
  push32(0x11b453fau); f_11b38770();
  /* 11b453fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b453fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b453ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45402 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11b45405 push eax */
  push32((uint32_t)(EAX));
  /* 11b45406 call 0x11b38770 */
  push32(0x11b4540bu); f_11b38770();
  /* 11b4540b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4540e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45413 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11b45416 push edx */
  push32((uint32_t)(EDX));
  /* 11b45417 call 0x11b38770 */
  push32(0x11b4541cu); f_11b38770();
  /* 11b4541c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4541f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45424 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11b45427 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45428 call 0x11b38770 */
  push32(0x11b4542du); f_11b38770();
  /* 11b4542d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45430 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45435 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11b45438 push eax */
  push32((uint32_t)(EAX));
  /* 11b45439 call 0x11b38770 */
  push32(0x11b4543eu); f_11b38770();
  /* 11b4543e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45441 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45446 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11b45449 push edx */
  push32((uint32_t)(EDX));
  /* 11b4544a call 0x11b38770 */
  push32(0x11b4544fu); f_11b38770();
  /* 11b4544f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45452 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45457 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11b4545a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4545b call 0x11b38770 */
  push32(0x11b45460u); f_11b38770();
  /* 11b45460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45463 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45468 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11b4546b push eax */
  push32((uint32_t)(EAX));
  /* 11b4546c call 0x11b38770 */
  push32(0x11b45471u); f_11b38770();
  /* 11b45471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45474 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45479 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11b4547c push edx */
  push32((uint32_t)(EDX));
  /* 11b4547d call 0x11b38770 */
  push32(0x11b45482u); f_11b38770();
  /* 11b45482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4548a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11b4548d push ecx */
  push32((uint32_t)(ECX));
  /* 11b4548e call 0x11b38770 */
  push32(0x11b45493u); f_11b38770();
  /* 11b45493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45496 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4549b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11b4549e push eax */
  push32((uint32_t)(EAX));
  /* 11b4549f call 0x11b38770 */
  push32(0x11b454a4u); f_11b38770();
  /* 11b454a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b454ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11b454af push edx */
  push32((uint32_t)(EDX));
  /* 11b454b0 call 0x11b38770 */
  push32(0x11b454b5u); f_11b38770();
  /* 11b454b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b454bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11b454c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b454c1 call 0x11b38770 */
  push32(0x11b454c6u); f_11b38770();
  /* 11b454c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b454ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11b454d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b454d2 call 0x11b38770 */
  push32(0x11b454d7u); f_11b38770();
  /* 11b454d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454da push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b454df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11b454e2 push edx */
  push32((uint32_t)(EDX));
  /* 11b454e3 call 0x11b38770 */
  push32(0x11b454e8u); f_11b38770();
  /* 11b454e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b454f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11b454f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b454f4 call 0x11b38770 */
  push32(0x11b454f9u); f_11b38770();
  /* 11b454f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b454fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b454fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45501 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11b45504 push eax */
  push32((uint32_t)(EAX));
  /* 11b45505 call 0x11b38770 */
  push32(0x11b4550au); f_11b38770();
  /* 11b4550a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4550d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4550f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45512 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11b45518 push edx */
  push32((uint32_t)(EDX));
  /* 11b45519 call 0x11b38770 */
  push32(0x11b4551eu); f_11b38770();
  /* 11b4551e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45521 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45526 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11b4552c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4552d call 0x11b38770 */
  push32(0x11b45532u); f_11b38770();
  /* 11b45532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45535 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4553a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11b45540 push eax */
  push32((uint32_t)(EAX));
  /* 11b45541 call 0x11b38770 */
  push32(0x11b45546u); f_11b38770();
  /* 11b45546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45549 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4554b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4554e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11b45554 push edx */
  push32((uint32_t)(EDX));
  /* 11b45555 call 0x11b38770 */
  push32(0x11b4555au); f_11b38770();
  /* 11b4555a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4555d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4555f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45562 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11b45568 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45569 call 0x11b38770 */
  push32(0x11b4556eu); f_11b38770();
  /* 11b4556e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45571 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45576 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11b4557c push eax */
  push32((uint32_t)(EAX));
  /* 11b4557d call 0x11b38770 */
  push32(0x11b45582u); f_11b38770();
  /* 11b45582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45585 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4558a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11b45590 push edx */
  push32((uint32_t)(EDX));
  /* 11b45591 call 0x11b38770 */
  push32(0x11b45596u); f_11b38770();
  /* 11b45596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45599 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4559b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4559e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11b455a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b455a5 call 0x11b38770 */
  push32(0x11b455aau); f_11b38770();
  /* 11b455aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b455ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11b455af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b455b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11b455b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b455b9 call 0x11b38770 */
  push32(0x11b455beu); f_11b38770();
  /* 11b455be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b455c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b455c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b455c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11b455cc push edx */
  push32((uint32_t)(EDX));
  /* 11b455cd call 0x11b38770 */
  push32(0x11b455d2u); f_11b38770();
  /* 11b455d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b455d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b455d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b455da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11b455e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b455e1 call 0x11b38770 */
  push32(0x11b455e6u); f_11b38770();
  /* 11b455e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b455e9:;
  /* 11b455e9 pop ebp */
  EBP = (pop32());
  /* 11b455ea ret  */
  ESPCHK(0x11b452e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155f0 @ 0x11b455f0 (678 bytes, 180 insns) */
void f_11b455f0(void) {
  FTRACE(0x11b455f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b455f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b455f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b455f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b455f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b455fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b455ff mov ax, word ptr [0x11b67e2e] */
  AX = (r16((uint32_t)(0x11b67e2e)));
  /* 11b45605 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b45608 cmp dword ptr [0x11b67dd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4560f je 0x11b4576a */
  if (C.zf) goto L_11b4576a;
  /* 11b45615 push 0x11b67dfc */
  push32((uint32_t)(0x11b67dfcu));
  /* 11b4561a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b4561c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4561f push ecx */
  push32((uint32_t)(ECX));
  /* 11b45620 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45622 call 0x11b49b10 */
  push32(0x11b45627u); f_11b49b10();
  /* 11b45627 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4562a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4562d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b4562f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b45632 push 0x11b67e00 */
  push32((uint32_t)(0x11b67e00u));
  /* 11b45637 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b45639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4563c push eax */
  push32((uint32_t)(EAX));
  /* 11b4563d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4563f call 0x11b49b10 */
  push32(0x11b45644u); f_11b49b10();
  /* 11b45644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4564a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4564c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b4564f push 0x11b67e04 */
  push32((uint32_t)(0x11b67e04u));
  /* 11b45654 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b45656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45659 push edx */
  push32((uint32_t)(EDX));
  /* 11b4565a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4565c call 0x11b49b10 */
  push32(0x11b45661u); f_11b49b10();
  /* 11b45661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45664 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45669 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b4566c mov edx, dword ptr [0x11b67e04] */
  EDX = (r32((uint32_t)(0x11b67e04)));
  /* 11b45672 push edx */
  push32((uint32_t)(EDX));
  /* 11b45673 call 0x11b458a0 */
  push32(0x11b45678u); f_11b458a0();
  /* 11b45678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4567b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4567f je 0x11b456d9 */
  if (C.zf) goto L_11b456d9;
  /* 11b45681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45683 mov eax, dword ptr [0x11b67dfc] */
  EAX = (r32((uint32_t)(0x11b67dfc)));
  /* 11b45688 push eax */
  push32((uint32_t)(EAX));
  /* 11b45689 call 0x11b38770 */
  push32(0x11b4568eu); f_11b38770();
  /* 11b4568e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45691 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45693 mov ecx, dword ptr [0x11b67e00] */
  ECX = (r32((uint32_t)(0x11b67e00)));
  /* 11b45699 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4569a call 0x11b38770 */
  push32(0x11b4569fu); f_11b38770();
  /* 11b4569f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b456a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b456a4 mov edx, dword ptr [0x11b67e04] */
  EDX = (r32((uint32_t)(0x11b67e04)));
  /* 11b456aa push edx */
  push32((uint32_t)(EDX));
  /* 11b456ab call 0x11b38770 */
  push32(0x11b456b0u); f_11b38770();
  /* 11b456b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b456b3 mov dword ptr [0x11b67dfc], 0 */
  w32((uint32_t)(0x11b67dfc), (0x0u));
  /* 11b456bd mov dword ptr [0x11b67e00], 0 */
  w32((uint32_t)(0x11b67e00), (0x0u));
  /* 11b456c7 mov dword ptr [0x11b67e04], 0 */
  w32((uint32_t)(0x11b67e04), (0x0u));
  /* 11b456d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b456d4 jmp 0x11b45892 */
  goto L_11b45892;
L_11b456d9:;
  /* 11b456d9 mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b456de cmp dword ptr [eax], 0x11b66ec0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11b66ec0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b456e4 je 0x11b45720 */
  if (C.zf) goto L_11b45720;
  /* 11b456e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b456e8 mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b456ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b456f0 push edx */
  push32((uint32_t)(EDX));
  /* 11b456f1 call 0x11b38770 */
  push32(0x11b456f6u); f_11b38770();
  /* 11b456f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b456f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b456fb mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45700 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b45703 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45704 call 0x11b38770 */
  push32(0x11b45709u); f_11b38770();
  /* 11b45709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4570c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4570e mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b45717 push eax */
  push32((uint32_t)(EAX));
  /* 11b45718 call 0x11b38770 */
  push32(0x11b4571du); f_11b38770();
  /* 11b4571d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b45720:;
  /* 11b45720 mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45726 mov edx, dword ptr [0x11b67dfc] */
  EDX = (r32((uint32_t)(0x11b67dfc)));
  /* 11b4572c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b4572e mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45733 mov ecx, dword ptr [0x11b67e00] */
  ECX = (r32((uint32_t)(0x11b67e00)));
  /* 11b45739 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b4573c mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45742 mov eax, dword ptr [0x11b67e04] */
  EAX = (r32((uint32_t)(0x11b67e04)));
  /* 11b45747 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b4574a mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45750 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b45752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b45754 mov byte ptr [0x11b65de4], al */
  w8((uint32_t)(0x11b65de4), (AL));
  /* 11b45759 mov dword ptr [0x11b65de8], 1 */
  w32((uint32_t)(0x11b65de8), (0x1u));
  /* 11b45763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45765 jmp 0x11b45892 */
  goto L_11b45892;
L_11b4576a:;
  /* 11b4576a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4576c mov ecx, dword ptr [0x11b67dfc] */
  ECX = (r32((uint32_t)(0x11b67dfc)));
  /* 11b45772 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45773 call 0x11b38770 */
  push32(0x11b45778u); f_11b38770();
  /* 11b45778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4577b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4577d mov edx, dword ptr [0x11b67e00] */
  EDX = (r32((uint32_t)(0x11b67e00)));
  /* 11b45783 push edx */
  push32((uint32_t)(EDX));
  /* 11b45784 call 0x11b38770 */
  push32(0x11b45789u); f_11b38770();
  /* 11b45789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4578c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4578e mov eax, dword ptr [0x11b67e04] */
  EAX = (r32((uint32_t)(0x11b67e04)));
  /* 11b45793 push eax */
  push32((uint32_t)(EAX));
  /* 11b45794 call 0x11b38770 */
  push32(0x11b45799u); f_11b38770();
  /* 11b45799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4579c mov dword ptr [0x11b67dfc], 0 */
  w32((uint32_t)(0x11b67dfc), (0x0u));
  /* 11b457a6 mov dword ptr [0x11b67e00], 0 */
  w32((uint32_t)(0x11b67e00), (0x0u));
  /* 11b457b0 mov dword ptr [0x11b67e04], 0 */
  w32((uint32_t)(0x11b67e04), (0x0u));
  /* 11b457ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11b457bf push 0x11b6359c */
  push32((uint32_t)(0x11b6359cu));
  /* 11b457c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b457c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b457c8 call 0x11b37ce0 */
  push32(0x11b457cdu); f_11b37ce0();
  /* 11b457cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b457d0 mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b457d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b457d8 mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b457de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b457e1 jne 0x11b457eb */
  if (!C.zf) goto L_11b457eb;
  /* 11b457e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b457e6 jmp 0x11b45892 */
  goto L_11b45892;
L_11b457eb:;
  /* 11b457eb push 0x11b63530 */
  push32((uint32_t)(0x11b63530u));
  /* 11b457f0 mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b457f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b457f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b457f8 call 0x11b3b9b0 */
  push32(0x11b457fdu); f_11b3b9b0();
  /* 11b457fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45800 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11b45805 push 0x11b6359c */
  push32((uint32_t)(0x11b6359cu));
  /* 11b4580a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4580c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4580e call 0x11b37ce0 */
  push32(0x11b45813u); f_11b37ce0();
  /* 11b45813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45816 mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b4581c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11b4581f mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45824 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45828 jne 0x11b4582f */
  if (!C.zf) goto L_11b4582f;
  /* 11b4582a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4582d jmp 0x11b45892 */
  goto L_11b45892;
L_11b4582f:;
  /* 11b4582f mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45835 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b45838 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b4583b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11b45840 push 0x11b6359c */
  push32((uint32_t)(0x11b6359cu));
  /* 11b45845 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45847 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45849 call 0x11b37ce0 */
  push32(0x11b4584eu); f_11b37ce0();
  /* 11b4584e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45851 mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45857 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b4585a mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45860 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45864 jne 0x11b4586b */
  if (!C.zf) goto L_11b4586b;
  /* 11b45866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b45869 jmp 0x11b45892 */
  goto L_11b45892;
L_11b4586b:;
  /* 11b4586b mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45870 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b45873 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b45876 mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b4587c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b4587e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b45880 mov byte ptr [0x11b65de4], cl */
  w8((uint32_t)(0x11b65de4), (CL));
  /* 11b45886 mov dword ptr [0x11b65de8], 1 */
  w32((uint32_t)(0x11b65de8), (0x1u));
  /* 11b45890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b45892:;
  /* 11b45892 mov esp, ebp */
  ESP = (EBP);
  /* 11b45894 pop ebp */
  EBP = (pop32());
  /* 11b45895 ret  */
  ESPCHK(0x11b455f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11b458a0 (125 bytes, 49 insns) */
void f_11b458a0(void) {
  FTRACE(0x11b458a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b458a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b458a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b458a3 push ecx */
  push32((uint32_t)(ECX));
L_11b458a4:;
  /* 11b458a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b458aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b458ac je 0x11b45919 */
  if (C.zf) goto L_11b45919;
  /* 11b458ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b458b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b458b7 jl 0x11b458dd */
  if ((C.sf!=C.of)) goto L_11b458dd;
  /* 11b458b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b458bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b458c2 jg 0x11b458dd */
  if ((!C.zf&&C.sf==C.of)) goto L_11b458dd;
  /* 11b458c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b458ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b458cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b458d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b458d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b458db jmp 0x11b45917 */
  goto L_11b45917;
L_11b458dd:;
  /* 11b458dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b458e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b458e6 jne 0x11b4590e */
  if (!C.zf) goto L_11b4590e;
  /* 11b458e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b458eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b458ee:;
  /* 11b458ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b458f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b458f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b458f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b458f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b458fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b458ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b45902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45905 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b45908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4590a jne 0x11b458ee */
  if (!C.zf) goto L_11b458ee;
  /* 11b4590c jmp 0x11b45917 */
  goto L_11b45917;
L_11b4590e:;
  /* 11b4590e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45914 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b45917:;
  /* 11b45917 jmp 0x11b458a4 */
  goto L_11b458a4;
L_11b45919:;
  /* 11b45919 mov esp, ebp */
  ESP = (EBP);
  /* 11b4591b pop ebp */
  EBP = (pop32());
  /* 11b4591c ret  */
  ESPCHK(0x11b458a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015920 @ 0x11b45920 (304 bytes, 85 insns) */
void f_11b45920(void) {
  FTRACE(0x11b45920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b45920 push ebp */
  push32((uint32_t)(EBP));
  /* 11b45921 mov ebp, esp */
  EBP = (ESP);
  /* 11b45923 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45924 cmp dword ptr [0x11b67dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4592b je 0x11b459ec */
  if (C.zf) goto L_11b459ec;
  /* 11b45931 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11b45933 push 0x11b635a8 */
  push32((uint32_t)(0x11b635a8u));
  /* 11b45938 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4593a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b4593c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4593e call 0x11b380f0 */
  push32(0x11b45943u); f_11b380f0();
  /* 11b45943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b45949 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4594d jne 0x11b45959 */
  if (!C.zf) goto L_11b45959;
  /* 11b4594f mov eax, 1 */
  EAX = (0x1u);
  /* 11b45954 jmp 0x11b45a4c */
  goto L_11b45a4c;
L_11b45959:;
  /* 11b45959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4595c push eax */
  push32((uint32_t)(EAX));
  /* 11b4595d call 0x11b45a50 */
  push32(0x11b45962u); f_11b45a50();
  /* 11b45962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45967 je 0x11b4598d */
  if (C.zf) goto L_11b4598d;
  /* 11b45969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4596c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4596d call 0x11b45ce0 */
  push32(0x11b45972u); f_11b45ce0();
  /* 11b45972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45975 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45977 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4597a push edx */
  push32((uint32_t)(EDX));
  /* 11b4597b call 0x11b38770 */
  push32(0x11b45980u); f_11b38770();
  /* 11b45980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45983 mov eax, 1 */
  EAX = (0x1u);
  /* 11b45988 jmp 0x11b45a4c */
  goto L_11b45a4c;
L_11b4598d:;
  /* 11b4598d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45990 mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b45998 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b4599a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4599d mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b459a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b459a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b459a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b459ac mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b459b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b459b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b459b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b459bb mov dword ptr [0x11b66ef8], eax */
  w32((uint32_t)(0x11b66ef8), (EAX));
  /* 11b459c0 mov ecx, dword ptr [0x11b67e08] */
  ECX = (r32((uint32_t)(0x11b67e08)));
  /* 11b459c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b459c7 call 0x11b45ce0 */
  push32(0x11b459ccu); f_11b45ce0();
  /* 11b459cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b459cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11b459d1 mov edx, dword ptr [0x11b67e08] */
  EDX = (r32((uint32_t)(0x11b67e08)));
  /* 11b459d7 push edx */
  push32((uint32_t)(EDX));
  /* 11b459d8 call 0x11b38770 */
  push32(0x11b459ddu); f_11b38770();
  /* 11b459dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b459e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b459e3 mov dword ptr [0x11b67e08], eax */
  w32((uint32_t)(0x11b67e08), (EAX));
  /* 11b459e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b459ea jmp 0x11b45a4c */
  goto L_11b45a4c;
L_11b459ec:;
  /* 11b459ec mov ecx, dword ptr [0x11b66ef8] */
  ECX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b459f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b459f4 mov dword ptr [0x11b66ec8], edx */
  w32((uint32_t)(0x11b66ec8), (EDX));
  /* 11b459fa mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b459ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b45a02 mov dword ptr [0x11b66ecc], ecx */
  w32((uint32_t)(0x11b66ecc), (ECX));
  /* 11b45a08 mov edx, dword ptr [0x11b66ef8] */
  EDX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b45a0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b45a11 mov dword ptr [0x11b66ed0], eax */
  w32((uint32_t)(0x11b66ed0), (EAX));
  /* 11b45a16 mov dword ptr [0x11b66ef8], 0x11b66ec8 */
  w32((uint32_t)(0x11b66ef8), (0x11b66ec8u));
  /* 11b45a20 mov ecx, dword ptr [0x11b67e08] */
  ECX = (r32((uint32_t)(0x11b67e08)));
  /* 11b45a26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45a27 call 0x11b45ce0 */
  push32(0x11b45a2cu); f_11b45ce0();
  /* 11b45a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45a2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45a31 mov edx, dword ptr [0x11b67e08] */
  EDX = (r32((uint32_t)(0x11b67e08)));
  /* 11b45a37 push edx */
  push32((uint32_t)(EDX));
  /* 11b45a38 call 0x11b38770 */
  push32(0x11b45a3du); f_11b38770();
  /* 11b45a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45a40 mov dword ptr [0x11b67e08], 0 */
  w32((uint32_t)(0x11b67e08), (0x0u));
  /* 11b45a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b45a4c:;
  /* 11b45a4c mov esp, ebp */
  ESP = (EBP);
  /* 11b45a4e pop ebp */
  EBP = (pop32());
  /* 11b45a4f ret  */
  ESPCHK(0x11b45920u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a50 @ 0x11b45a50 (525 bytes, 200 insns) */
void f_11b45a50(void) {
  FTRACE(0x11b45a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b45a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b45a51 mov ebp, esp */
  EBP = (ESP);
  /* 11b45a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b45a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b45a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45a5f mov ax, word ptr [0x11b67e28] */
  AX = (r16((uint32_t)(0x11b67e28)));
  /* 11b45a65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b45a68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45a6c jne 0x11b45a76 */
  if (!C.zf) goto L_11b45a76;
  /* 11b45a6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b45a71 jmp 0x11b45c59 */
  goto L_11b45c59;
L_11b45a76:;
  /* 11b45a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45a79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45a7c push ecx */
  push32((uint32_t)(ECX));
  /* 11b45a7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b45a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45a82 push edx */
  push32((uint32_t)(EDX));
  /* 11b45a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45a85 call 0x11b49b10 */
  push32(0x11b45a8au); f_11b49b10();
  /* 11b45a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45a8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45a90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45a92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45a98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45a9b push edx */
  push32((uint32_t)(EDX));
  /* 11b45a9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b45a9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11b45aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45aa4 call 0x11b49b10 */
  push32(0x11b45aa9u); f_11b49b10();
  /* 11b45aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45aac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45aaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45ab1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45ab7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45aba push edx */
  push32((uint32_t)(EDX));
  /* 11b45abb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b45abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11b45ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45ac3 call 0x11b49b10 */
  push32(0x11b45ac8u); f_11b49b10();
  /* 11b45ac8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45ace or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45ad0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45ad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45ad6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45ad9 push edx */
  push32((uint32_t)(EDX));
  /* 11b45ada push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b45adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45adf push eax */
  push32((uint32_t)(EAX));
  /* 11b45ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45ae2 call 0x11b49b10 */
  push32(0x11b45ae7u); f_11b49b10();
  /* 11b45ae7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45aea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45aed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45aef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45af2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45af5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45af8 push edx */
  push32((uint32_t)(EDX));
  /* 11b45af9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b45afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45afe push eax */
  push32((uint32_t)(EAX));
  /* 11b45aff push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45b01 call 0x11b49b10 */
  push32(0x11b45b06u); f_11b49b10();
  /* 11b45b06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45b0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45b0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b45b17 push eax */
  push32((uint32_t)(EAX));
  /* 11b45b18 call 0x11b45c60 */
  push32(0x11b45b1du); f_11b45c60();
  /* 11b45b1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45b27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b45b29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45b2c push edx */
  push32((uint32_t)(EDX));
  /* 11b45b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45b2f call 0x11b49b10 */
  push32(0x11b45b34u); f_11b49b10();
  /* 11b45b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45b3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45b3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b45 push edx */
  push32((uint32_t)(EDX));
  /* 11b45b46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11b45b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45b4b push eax */
  push32((uint32_t)(EAX));
  /* 11b45b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45b4e call 0x11b49b10 */
  push32(0x11b45b53u); f_11b49b10();
  /* 11b45b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45b59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45b5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b64 push edx */
  push32((uint32_t)(EDX));
  /* 11b45b65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11b45b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45b6a push eax */
  push32((uint32_t)(EAX));
  /* 11b45b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45b6d call 0x11b49b10 */
  push32(0x11b45b72u); f_11b49b10();
  /* 11b45b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45b78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45b7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45b7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b83 push edx */
  push32((uint32_t)(EDX));
  /* 11b45b84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b45b86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45b89 push eax */
  push32((uint32_t)(EAX));
  /* 11b45b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45b8c call 0x11b49b10 */
  push32(0x11b45b91u); f_11b49b10();
  /* 11b45b91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45b97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45b99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45b9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45ba2 push edx */
  push32((uint32_t)(EDX));
  /* 11b45ba3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11b45ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45ba8 push eax */
  push32((uint32_t)(EAX));
  /* 11b45ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45bab call 0x11b49b10 */
  push32(0x11b45bb0u); f_11b49b10();
  /* 11b45bb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45bb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45bb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45bbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45bc1 push edx */
  push32((uint32_t)(EDX));
  /* 11b45bc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11b45bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11b45bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45bca call 0x11b49b10 */
  push32(0x11b45bcfu); f_11b49b10();
  /* 11b45bcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45bd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45bd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45bd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45bdd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45be0 push edx */
  push32((uint32_t)(EDX));
  /* 11b45be1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11b45be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45be6 push eax */
  push32((uint32_t)(EAX));
  /* 11b45be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45be9 call 0x11b49b10 */
  push32(0x11b45beeu); f_11b49b10();
  /* 11b45bee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45bf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45bf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45bf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45bf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45bfc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45bff push edx */
  push32((uint32_t)(EDX));
  /* 11b45c00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11b45c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45c05 push eax */
  push32((uint32_t)(EAX));
  /* 11b45c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45c08 call 0x11b49b10 */
  push32(0x11b45c0du); f_11b49b10();
  /* 11b45c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45c13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45c15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45c18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c1e push edx */
  push32((uint32_t)(EDX));
  /* 11b45c1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11b45c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45c24 push eax */
  push32((uint32_t)(EAX));
  /* 11b45c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45c27 call 0x11b49b10 */
  push32(0x11b45c2cu); f_11b49b10();
  /* 11b45c2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45c32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45c34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c3d push edx */
  push32((uint32_t)(EDX));
  /* 11b45c3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11b45c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45c43 push eax */
  push32((uint32_t)(EAX));
  /* 11b45c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45c46 call 0x11b49b10 */
  push32(0x11b45c4bu); f_11b49b10();
  /* 11b45c4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b45c51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45c53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b45c56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b45c59:;
  /* 11b45c59 mov esp, ebp */
  ESP = (EBP);
  /* 11b45c5b pop ebp */
  EBP = (pop32());
  /* 11b45c5c ret  */
  ESPCHK(0x11b45a50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11b45c60 (125 bytes, 49 insns) */
void f_11b45c60(void) {
  FTRACE(0x11b45c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b45c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b45c61 mov ebp, esp */
  EBP = (ESP);
  /* 11b45c63 push ecx */
  push32((uint32_t)(ECX));
L_11b45c64:;
  /* 11b45c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b45c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b45c6c je 0x11b45cd9 */
  if (C.zf) goto L_11b45cd9;
  /* 11b45c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b45c74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45c77 jl 0x11b45c9d */
  if ((C.sf!=C.of)) goto L_11b45c9d;
  /* 11b45c79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b45c7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45c82 jg 0x11b45c9d */
  if ((!C.zf&&C.sf==C.of)) goto L_11b45c9d;
  /* 11b45c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b45c8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b45c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b45c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45c95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45c98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b45c9b jmp 0x11b45cd7 */
  goto L_11b45cd7;
L_11b45c9d:;
  /* 11b45c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45ca0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b45ca3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45ca6 jne 0x11b45cce */
  if (!C.zf) goto L_11b45cce;
  /* 11b45ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45cab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b45cae:;
  /* 11b45cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45cb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b45cb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b45cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b45cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b45cc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b45cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45cca jne 0x11b45cae */
  if (!C.zf) goto L_11b45cae;
  /* 11b45ccc jmp 0x11b45cd7 */
  goto L_11b45cd7;
L_11b45cce:;
  /* 11b45cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b45cd7:;
  /* 11b45cd7 jmp 0x11b45c64 */
  goto L_11b45c64;
L_11b45cd9:;
  /* 11b45cd9 mov esp, ebp */
  ESP = (EBP);
  /* 11b45cdb pop ebp */
  EBP = (pop32());
  /* 11b45cdc ret  */
  ESPCHK(0x11b45c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ce0 @ 0x11b45ce0 (147 bytes, 52 insns) */
void f_11b45ce0(void) {
  FTRACE(0x11b45ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b45ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b45ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11b45ce3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45ce7 jne 0x11b45cee */
  if (!C.zf) goto L_11b45cee;
  /* 11b45ce9 jmp 0x11b45d71 */
  goto L_11b45d71;
L_11b45cee:;
  /* 11b45cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45cf1 cmp dword ptr [eax + 0xc], 0x11b67e68 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11b67e68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45cf8 je 0x11b45d71 */
  if (C.zf) goto L_11b45d71;
  /* 11b45cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45cff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b45d02 push edx */
  push32((uint32_t)(EDX));
  /* 11b45d03 call 0x11b38770 */
  push32(0x11b45d08u); f_11b38770();
  /* 11b45d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b45d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45d14 call 0x11b38770 */
  push32(0x11b45d19u); f_11b38770();
  /* 11b45d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b45d24 push eax */
  push32((uint32_t)(EAX));
  /* 11b45d25 call 0x11b38770 */
  push32(0x11b45d2au); f_11b38770();
  /* 11b45d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b45d35 push edx */
  push32((uint32_t)(EDX));
  /* 11b45d36 call 0x11b38770 */
  push32(0x11b45d3bu); f_11b38770();
  /* 11b45d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b45d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11b45d47 call 0x11b38770 */
  push32(0x11b45d4cu); f_11b38770();
  /* 11b45d4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11b45d57 push eax */
  push32((uint32_t)(EAX));
  /* 11b45d58 call 0x11b38770 */
  push32(0x11b45d5du); f_11b38770();
  /* 11b45d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b45d65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11b45d68 push edx */
  push32((uint32_t)(EDX));
  /* 11b45d69 call 0x11b38770 */
  push32(0x11b45d6eu); f_11b38770();
  /* 11b45d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b45d71:;
  /* 11b45d71 pop ebp */
  EBP = (pop32());
  /* 11b45d72 ret  */
  ESPCHK(0x11b45ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d80 @ 0x11b45d80 (928 bytes, 284 insns) */
void f_11b45d80(void) {
  FTRACE(0x11b45d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b45d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b45d81 mov ebp, esp */
  EBP = (ESP);
  /* 11b45d83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b45d86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11b45d8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11b45d94 cmp dword ptr [0x11b67dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45d9b je 0x11b460d1 */
  if (C.zf) goto L_11b460d1;
  /* 11b45da1 cmp dword ptr [0x11b67dd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45da8 jne 0x11b45dd0 */
  if (!C.zf) goto L_11b45dd0;
  /* 11b45daa push 0x11b67dd8 */
  push32((uint32_t)(0x11b67dd8u));
  /* 11b45daf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11b45db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45db6 mov ax, word ptr [0x11b67e20] */
  AX = (r16((uint32_t)(0x11b67e20)));
  /* 11b45dbc push eax */
  push32((uint32_t)(EAX));
  /* 11b45dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45dbf call 0x11b49b10 */
  push32(0x11b45dc4u); f_11b49b10();
  /* 11b45dc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45dc9 je 0x11b45dd0 */
  if (C.zf) goto L_11b45dd0;
  /* 11b45dcb jmp 0x11b46092 */
  goto L_11b46092;
L_11b45dd0:;
  /* 11b45dd0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11b45dd2 push 0x11b635b4 */
  push32((uint32_t)(0x11b635b4u));
  /* 11b45dd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45dd9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11b45dde call 0x11b37ce0 */
  push32(0x11b45de3u); f_11b37ce0();
  /* 11b45de3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45de6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11b45de9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11b45deb push 0x11b635b4 */
  push32((uint32_t)(0x11b635b4u));
  /* 11b45df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45df2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11b45df7 call 0x11b37ce0 */
  push32(0x11b45dfcu); f_11b37ce0();
  /* 11b45dfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45dff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b45e02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b45e04 push 0x11b635b4 */
  push32((uint32_t)(0x11b635b4u));
  /* 11b45e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45e0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b45e10 call 0x11b37ce0 */
  push32(0x11b45e15u); f_11b37ce0();
  /* 11b45e15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45e18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b45e1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11b45e1d push 0x11b635b4 */
  push32((uint32_t)(0x11b635b4u));
  /* 11b45e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b45e24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11b45e29 call 0x11b37ce0 */
  push32(0x11b45e2eu); f_11b37ce0();
  /* 11b45e2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45e31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b45e34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45e38 je 0x11b45e4c */
  if (C.zf) goto L_11b45e4c;
  /* 11b45e3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45e3e je 0x11b45e4c */
  if (C.zf) goto L_11b45e4c;
  /* 11b45e40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45e44 je 0x11b45e4c */
  if (C.zf) goto L_11b45e4c;
  /* 11b45e46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45e4a jne 0x11b45e51 */
  if (!C.zf) goto L_11b45e51;
L_11b45e4c:;
  /* 11b45e4c jmp 0x11b46092 */
  goto L_11b46092;
L_11b45e51:;
  /* 11b45e51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b45e54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b45e57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b45e5e jmp 0x11b45e69 */
  goto L_11b45e69;
L_11b45e60:;
  /* 11b45e60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b45e63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45e66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11b45e69:;
  /* 11b45e69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45e70 jge 0x11b45e85 */
  if ((C.sf==C.of)) goto L_11b45e85;
  /* 11b45e72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45e75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11b45e78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b45e7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45e7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45e80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b45e83 jmp 0x11b45e60 */
  goto L_11b45e60;
L_11b45e85:;
  /* 11b45e85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b45e88 push eax */
  push32((uint32_t)(EAX));
  /* 11b45e89 mov ecx, dword ptr [0x11b67dd8] */
  ECX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b45e8f push ecx */
  push32((uint32_t)(ECX));
  /* 11b45e90 call dword ptr [0x11b6a34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a34c))), 0x11b45e96u);
  /* 11b45e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45e98 jne 0x11b45e9f */
  if (!C.zf) goto L_11b45e9f;
  /* 11b45e9a jmp 0x11b46092 */
  goto L_11b46092;
L_11b45e9f:;
  /* 11b45e9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45ea3 jbe 0x11b45eaa */
  if ((C.cf||C.zf)) goto L_11b45eaa;
  /* 11b45ea5 jmp 0x11b46092 */
  goto L_11b46092;
L_11b45eaa:;
  /* 11b45eaa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b45ead and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b45eb3 mov dword ptr [0x11b65de0], edx */
  w32((uint32_t)(0x11b65de0), (EDX));
  /* 11b45eb9 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45ec0 jle 0x11b45f19 */
  if ((C.zf||C.sf!=C.of)) goto L_11b45f19;
  /* 11b45ec2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11b45ec5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b45ec8 jmp 0x11b45ed3 */
  goto L_11b45ed3;
L_11b45eca:;
  /* 11b45eca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45ecd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45ed0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11b45ed3:;
  /* 11b45ed3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45ed8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b45eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45edc je 0x11b45f19 */
  if (C.zf) goto L_11b45f19;
  /* 11b45ede mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45ee1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b45ee3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b45ee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b45ee8 je 0x11b45f19 */
  if (C.zf) goto L_11b45f19;
  /* 11b45eea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45eed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45eef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b45ef1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b45ef4 jmp 0x11b45eff */
  goto L_11b45eff;
L_11b45ef6:;
  /* 11b45ef6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b45ef9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45efc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11b45eff:;
  /* 11b45eff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45f02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45f04 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b45f07 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45f0a jg 0x11b45f17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b45f17;
  /* 11b45f0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b45f0f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f12 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b45f15 jmp 0x11b45ef6 */
  goto L_11b45ef6;
L_11b45f17:;
  /* 11b45f17 jmp 0x11b45eca */
  goto L_11b45eca;
L_11b45f19:;
  /* 11b45f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45f1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b45f22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f25 push eax */
  push32((uint32_t)(EAX));
  /* 11b45f26 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b45f2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b45f2e push ecx */
  push32((uint32_t)(ECX));
  /* 11b45f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45f31 call 0x11b41d90 */
  push32(0x11b45f36u); f_11b41d90();
  /* 11b45f36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45f3b jne 0x11b45f42 */
  if (!C.zf) goto L_11b45f42;
  /* 11b45f3d jmp 0x11b46092 */
  goto L_11b46092;
L_11b45f42:;
  /* 11b45f42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b45f45 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11b45f4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b45f4d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b45f50 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b45f57 jmp 0x11b45f62 */
  goto L_11b45f62;
L_11b45f59:;
  /* 11b45f59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b45f5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b45f62:;
  /* 11b45f62 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45f69 jge 0x11b45f80 */
  if ((C.sf==C.of)) goto L_11b45f80;
  /* 11b45f6b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b45f6e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11b45f72 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11b45f75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b45f78 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f7b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b45f7e jmp 0x11b45f59 */
  goto L_11b45f59;
L_11b45f80:;
  /* 11b45f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b45f84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b45f87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f8a push edx */
  push32((uint32_t)(EDX));
  /* 11b45f8b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b45f90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b45f93 push eax */
  push32((uint32_t)(EAX));
  /* 11b45f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b45f96 call 0x11b49db0 */
  push32(0x11b45f9bu); f_11b49db0();
  /* 11b45f9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b45fa0 jne 0x11b45fa7 */
  if (!C.zf) goto L_11b45fa7;
  /* 11b45fa2 jmp 0x11b46092 */
  goto L_11b46092;
L_11b45fa7:;
  /* 11b45fa7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b45faa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11b45faf cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b45fb6 jle 0x11b46013 */
  if ((C.zf||C.sf!=C.of)) goto L_11b46013;
  /* 11b45fb8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11b45fbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b45fbe jmp 0x11b45fc9 */
  goto L_11b45fc9;
L_11b45fc0:;
  /* 11b45fc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45fc3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45fc6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11b45fc9:;
  /* 11b45fc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45fcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b45fce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b45fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b45fd2 je 0x11b46013 */
  if (C.zf) goto L_11b46013;
  /* 11b45fd4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45fd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b45fd9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b45fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b45fde je 0x11b46013 */
  if (C.zf) goto L_11b46013;
  /* 11b45fe0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45fe5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b45fe7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b45fea jmp 0x11b45ff5 */
  goto L_11b45ff5;
L_11b45fec:;
  /* 11b45fec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b45fef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b45ff2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b45ff5:;
  /* 11b45ff5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b45ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b45ffa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b45ffd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46000 jg 0x11b46011 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b46011;
  /* 11b46002 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b46005 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b46008 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11b4600f jmp 0x11b45fec */
  goto L_11b45fec;
L_11b46011:;
  /* 11b46011 jmp 0x11b45fc0 */
  goto L_11b45fc0;
L_11b46013:;
  /* 11b46013 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b46016 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46019 mov dword ptr [0x11b65dec], eax */
  w32((uint32_t)(0x11b65dec), (EAX));
  /* 11b4601e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b46021 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46024 mov dword ptr [0x11b65df0], ecx */
  w32((uint32_t)(0x11b65df0), (ECX));
  /* 11b4602a cmp dword ptr [0x11b67e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46031 je 0x11b46044 */
  if (C.zf) goto L_11b46044;
  /* 11b46033 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b46035 mov edx, dword ptr [0x11b67e0c] */
  EDX = (r32((uint32_t)(0x11b67e0c)));
  /* 11b4603b push edx */
  push32((uint32_t)(EDX));
  /* 11b4603c call 0x11b38770 */
  push32(0x11b46041u); f_11b38770();
  /* 11b46041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b46044:;
  /* 11b46044 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b46047 mov dword ptr [0x11b67e0c], eax */
  w32((uint32_t)(0x11b67e0c), (EAX));
  /* 11b4604c cmp dword ptr [0x11b67e10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46053 je 0x11b46066 */
  if (C.zf) goto L_11b46066;
  /* 11b46055 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b46057 mov ecx, dword ptr [0x11b67e10] */
  ECX = (r32((uint32_t)(0x11b67e10)));
  /* 11b4605d push ecx */
  push32((uint32_t)(ECX));
  /* 11b4605e call 0x11b38770 */
  push32(0x11b46063u); f_11b38770();
  /* 11b46063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b46066:;
  /* 11b46066 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b46069 mov dword ptr [0x11b67e10], edx */
  w32((uint32_t)(0x11b67e10), (EDX));
  /* 11b4606f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b46071 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b46074 push eax */
  push32((uint32_t)(EAX));
  /* 11b46075 call 0x11b38770 */
  push32(0x11b4607au); f_11b38770();
  /* 11b4607a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4607d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4607f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b46082 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46083 call 0x11b38770 */
  push32(0x11b46088u); f_11b38770();
  /* 11b46088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4608b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4608d jmp 0x11b4611c */
  goto L_11b4611c;
L_11b46092:;
  /* 11b46092 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b46094 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b46097 push edx */
  push32((uint32_t)(EDX));
  /* 11b46098 call 0x11b38770 */
  push32(0x11b4609du); f_11b38770();
  /* 11b4609d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b460a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b460a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b460a5 push eax */
  push32((uint32_t)(EAX));
  /* 11b460a6 call 0x11b38770 */
  push32(0x11b460abu); f_11b38770();
  /* 11b460ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b460ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11b460b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b460b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b460b4 call 0x11b38770 */
  push32(0x11b460b9u); f_11b38770();
  /* 11b460b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b460bc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b460be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b460c1 push edx */
  push32((uint32_t)(EDX));
  /* 11b460c2 call 0x11b38770 */
  push32(0x11b460c7u); f_11b38770();
  /* 11b460c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b460ca mov eax, 1 */
  EAX = (0x1u);
  /* 11b460cf jmp 0x11b4611c */
  goto L_11b4611c;
L_11b460d1:;
  /* 11b460d1 mov dword ptr [0x11b65dec], 0x11b65df6 */
  w32((uint32_t)(0x11b65dec), (0x11b65df6u));
  /* 11b460db mov dword ptr [0x11b65df0], 0x11b65df6 */
  w32((uint32_t)(0x11b65df0), (0x11b65df6u));
  /* 11b460e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b460e7 mov eax, dword ptr [0x11b67e0c] */
  EAX = (r32((uint32_t)(0x11b67e0c)));
  /* 11b460ec push eax */
  push32((uint32_t)(EAX));
  /* 11b460ed call 0x11b38770 */
  push32(0x11b460f2u); f_11b38770();
  /* 11b460f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b460f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b460f7 mov ecx, dword ptr [0x11b67e10] */
  ECX = (r32((uint32_t)(0x11b67e10)));
  /* 11b460fd push ecx */
  push32((uint32_t)(ECX));
  /* 11b460fe call 0x11b38770 */
  push32(0x11b46103u); f_11b38770();
  /* 11b46103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46106 mov dword ptr [0x11b67e0c], 0 */
  w32((uint32_t)(0x11b67e0c), (0x0u));
  /* 11b46110 mov dword ptr [0x11b67e10], 0 */
  w32((uint32_t)(0x11b67e10), (0x0u));
  /* 11b4611a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4611c:;
  /* 11b4611c mov esp, ebp */
  ESP = (EBP);
  /* 11b4611e pop ebp */
  EBP = (pop32());
  /* 11b4611f ret  */
  ESPCHK(0x11b45d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016120 @ 0x11b46120 (7 bytes, 5 insns) */
void f_11b46120(void) {
  FTRACE(0x11b46120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46120 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46121 mov ebp, esp */
  EBP = (ESP);
  /* 11b46123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46125 pop ebp */
  EBP = (pop32());
  /* 11b46126 ret  */
  ESPCHK(0x11b46120u, _esp0);
  ESP += 4; return;
}

/* FUN_10016130 @ 0x11b46130 (62 bytes, 35 insns) */
void f_11b46130(void) {
  FTRACE(0x11b46130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46130 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46131 mov ebp, esp */
  EBP = (ESP);
  /* 11b46133 push esi */
  push32((uint32_t)(ESI));
  /* 11b46134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46136 push eax */
  push32((uint32_t)(EAX));
  /* 11b46137 push eax */
  push32((uint32_t)(EAX));
  /* 11b46138 push eax */
  push32((uint32_t)(EAX));
  /* 11b46139 push eax */
  push32((uint32_t)(EAX));
  /* 11b4613a push eax */
  push32((uint32_t)(EAX));
  /* 11b4613b push eax */
  push32((uint32_t)(EAX));
  /* 11b4613c push eax */
  push32((uint32_t)(EAX));
  /* 11b4613d push eax */
  push32((uint32_t)(EAX));
  /* 11b4613e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46141 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b46144:;
  /* 11b46144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b46146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b46148 je 0x11b46151 */
  if (C.zf) goto L_11b46151;
  /* 11b4614a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b4614b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b4614b");
  /* 11b4614f jmp 0x11b46144 */
  goto L_11b46144;
L_11b46151:;
  /* 11b46151 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46154 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b46157 nop  */
  /* nop */
L_11b46158:;
  /* 11b46158 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b46159 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b4615b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4615d je 0x11b46166 */
  if (C.zf) goto L_11b46166;
  /* 11b4615f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b46160 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b46160");
  /* 11b46164 jae 0x11b46158 */
  if (!C.cf) goto L_11b46158;
L_11b46166:;
  /* 11b46166 mov eax, ecx */
  EAX = (ECX);
  /* 11b46168 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4616b pop esi */
  ESI = (pop32());
  /* 11b4616c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b4616d ret  */
  ESPCHK(0x11b46130u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11b46170 (56 bytes, 31 insns) */
void f_11b46170(void) {
  FTRACE(0x11b46170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46170 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46171 mov ebp, esp */
  EBP = (ESP);
  /* 11b46173 push edi */
  push32((uint32_t)(EDI));
  /* 11b46174 push esi */
  push32((uint32_t)(ESI));
  /* 11b46175 push ebx */
  push32((uint32_t)(EBX));
  /* 11b46176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b46179 jecxz 0x11b461a1 */
  x86_unimpl("jecxz @ 0x11b46179");
  /* 11b4617b mov ebx, ecx */
  EBX = (ECX);
  /* 11b4617d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46180 mov esi, edi */
  ESI = (EDI);
  /* 11b46182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46184 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11b46186 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46188 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4618a mov edi, esi */
  EDI = (ESI);
  /* 11b4618c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4618f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11b46191 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11b46194 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46196 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b46199 ja 0x11b4619f */
  if ((!C.cf&&!C.zf)) goto L_11b4619f;
  /* 11b4619b je 0x11b461a1 */
  if (C.zf) goto L_11b461a1;
  /* 11b4619d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b4619e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11b4619f:;
  /* 11b4619f not ecx */
  ECX = (~(ECX));
L_11b461a1:;
  /* 11b461a1 mov eax, ecx */
  EAX = (ECX);
  /* 11b461a3 pop ebx */
  EBX = (pop32());
  /* 11b461a4 pop esi */
  ESI = (pop32());
  /* 11b461a5 pop edi */
  EDI = (pop32());
  /* 11b461a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b461a7 ret  */
  ESPCHK(0x11b46170u, _esp0);
  ESP += 4; return;
}

/* FUN_100161b0 @ 0x11b461b0 (58 bytes, 32 insns) */
void f_11b461b0(void) {
  FTRACE(0x11b461b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b461b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b461b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b461b3 push esi */
  push32((uint32_t)(ESI));
  /* 11b461b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b461b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b461b7 push eax */
  push32((uint32_t)(EAX));
  /* 11b461b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b461b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b461ba push eax */
  push32((uint32_t)(EAX));
  /* 11b461bb push eax */
  push32((uint32_t)(EAX));
  /* 11b461bc push eax */
  push32((uint32_t)(EAX));
  /* 11b461bd push eax */
  push32((uint32_t)(EAX));
  /* 11b461be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b461c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b461c4:;
  /* 11b461c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b461c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b461c8 je 0x11b461d1 */
  if (C.zf) goto L_11b461d1;
  /* 11b461ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b461cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b461cb");
  /* 11b461cf jmp 0x11b461c4 */
  goto L_11b461c4;
L_11b461d1:;
  /* 11b461d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11b461d4:;
  /* 11b461d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b461d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b461d8 je 0x11b461e4 */
  if (C.zf) goto L_11b461e4;
  /* 11b461da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b461db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b461db");
  /* 11b461df jae 0x11b461d4 */
  if (!C.cf) goto L_11b461d4;
  /* 11b461e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11b461e4:;
  /* 11b461e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b461e7 pop esi */
  ESI = (pop32());
  /* 11b461e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b461e9 ret  */
  ESPCHK(0x11b461b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161f0 @ 0x11b461f0 (512 bytes, 147 insns) */
void f_11b461f0(void) {
  FTRACE(0x11b461f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b461f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b461f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b461f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b461f6 cmp dword ptr [0x11b67e58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b461fd jne 0x11b46222 */
  if (!C.zf) goto L_11b46222;
  /* 11b461ff call 0x11b46cc0 */
  push32(0x11b46204u); f_11b46cc0();
  /* 11b46204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46206 je 0x11b46212 */
  if (C.zf) goto L_11b46212;
  /* 11b46208 mov eax, dword ptr [0x11b6a30c] */
  EAX = (r32((uint32_t)(0x11b6a30c)));
  /* 11b4620d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b46210 jmp 0x11b46219 */
  goto L_11b46219;
L_11b46212:;
  /* 11b46212 mov dword ptr [ebp - 8], 0x11b46d10 */
  w32((uint32_t)(EBP + -0x8), (0x11b46d10u));
L_11b46219:;
  /* 11b46219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4621c mov dword ptr [0x11b67e58], ecx */
  w32((uint32_t)(0x11b67e58), (ECX));
L_11b46222:;
  /* 11b46222 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46226 jne 0x11b46232 */
  if (!C.zf) goto L_11b46232;
  /* 11b46228 call 0x11b46b10 */
  push32(0x11b4622du); f_11b46b10();
  /* 11b4622d jmp 0x11b462fe */
  goto L_11b462fe;
L_11b46232:;
  /* 11b46232 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46235 mov dword ptr [0x11b67e48], edx */
  w32((uint32_t)(0x11b67e48), (EDX));
  /* 11b4623b cmp dword ptr [0x11b67e48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46242 je 0x11b46264 */
  if (C.zf) goto L_11b46264;
  /* 11b46244 mov eax, dword ptr [0x11b67e48] */
  EAX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46249 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b4624c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4624e je 0x11b46264 */
  if (C.zf) goto L_11b46264;
  /* 11b46250 push 0x11b67e48 */
  push32((uint32_t)(0x11b67e48u));
  /* 11b46255 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b46257 push 0x11b66c00 */
  push32((uint32_t)(0x11b66c00u));
  /* 11b4625c call 0x11b463f0 */
  push32(0x11b46261u); f_11b463f0();
  /* 11b46261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b46264:;
  /* 11b46264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46267 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4626a mov dword ptr [0x11b67e4c], edx */
  w32((uint32_t)(0x11b67e4c), (EDX));
  /* 11b46270 cmp dword ptr [0x11b67e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46277 je 0x11b46299 */
  if (C.zf) goto L_11b46299;
  /* 11b46279 mov eax, dword ptr [0x11b67e4c] */
  EAX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b4627e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b46281 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b46283 je 0x11b46299 */
  if (C.zf) goto L_11b46299;
  /* 11b46285 push 0x11b67e4c */
  push32((uint32_t)(0x11b67e4cu));
  /* 11b4628a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b4628c push 0x11b66b48 */
  push32((uint32_t)(0x11b66b48u));
  /* 11b46291 call 0x11b463f0 */
  push32(0x11b46296u); f_11b463f0();
  /* 11b46296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b46299:;
  /* 11b46299 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b462a3 cmp dword ptr [0x11b67e48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b462aa je 0x11b462dd */
  if (C.zf) goto L_11b462dd;
  /* 11b462ac mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b462b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b462b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b462b7 je 0x11b462dd */
  if (C.zf) goto L_11b462dd;
  /* 11b462b9 cmp dword ptr [0x11b67e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b462c0 je 0x11b462d6 */
  if (C.zf) goto L_11b462d6;
  /* 11b462c2 mov ecx, dword ptr [0x11b67e4c] */
  ECX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b462c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b462cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b462cd je 0x11b462d6 */
  if (C.zf) goto L_11b462d6;
  /* 11b462cf call 0x11b46480 */
  push32(0x11b462d4u); f_11b46480();
  /* 11b462d4 jmp 0x11b462db */
  goto L_11b462db;
L_11b462d6:;
  /* 11b462d6 call 0x11b46870 */
  push32(0x11b462dbu); f_11b46870();
L_11b462db:;
  /* 11b462db jmp 0x11b462fe */
  goto L_11b462fe;
L_11b462dd:;
  /* 11b462dd cmp dword ptr [0x11b67e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b462e4 je 0x11b462f9 */
  if (C.zf) goto L_11b462f9;
  /* 11b462e6 mov eax, dword ptr [0x11b67e4c] */
  EAX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b462eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b462ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b462f0 je 0x11b462f9 */
  if (C.zf) goto L_11b462f9;
  /* 11b462f2 call 0x11b46a10 */
  push32(0x11b462f7u); f_11b46a10();
  /* 11b462f7 jmp 0x11b462fe */
  goto L_11b462fe;
L_11b462f9:;
  /* 11b462f9 call 0x11b46b10 */
  push32(0x11b462feu); f_11b46b10();
L_11b462fe:;
  /* 11b462fe cmp dword ptr [0x11b67e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46305 jne 0x11b4630e */
  if (!C.zf) goto L_11b4630e;
  /* 11b46307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46309 jmp 0x11b463ec */
  goto L_11b463ec;
L_11b4630e:;
  /* 11b4630e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46311 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46317 push edx */
  push32((uint32_t)(EDX));
  /* 11b46318 call 0x11b46b40 */
  push32(0x11b4631du); f_11b46b40();
  /* 11b4631d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b46323 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46327 je 0x11b4633c */
  if (C.zf) goto L_11b4633c;
  /* 11b46329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4632c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b46331 push eax */
  push32((uint32_t)(EAX));
  /* 11b46332 call dword ptr [0x11b6a31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a31c))), 0x11b46338u);
  /* 11b46338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4633a jne 0x11b46343 */
  if (!C.zf) goto L_11b46343;
L_11b4633c:;
  /* 11b4633c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4633e jmp 0x11b463ec */
  goto L_11b463ec;
L_11b46343:;
  /* 11b46343 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b46345 mov ecx, dword ptr [0x11b67e38] */
  ECX = (r32((uint32_t)(0x11b67e38)));
  /* 11b4634b push ecx */
  push32((uint32_t)(ECX));
  /* 11b4634c call dword ptr [0x11b6a314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a314))), 0x11b46352u);
  /* 11b46352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46354 jne 0x11b4635d */
  if (!C.zf) goto L_11b4635d;
  /* 11b46356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46358 jmp 0x11b463ec */
  goto L_11b463ec;
L_11b4635d:;
  /* 11b4635d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46361 je 0x11b46388 */
  if (C.zf) goto L_11b46388;
  /* 11b46363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46366 mov ax, word ptr [0x11b67e38] */
  AX = (r16((uint32_t)(0x11b67e38)));
  /* 11b4636c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11b4636f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46372 mov dx, word ptr [0x11b67e54] */
  DX = (r16((uint32_t)(0x11b67e54)));
  /* 11b46379 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11b4637d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46380 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b46384 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11b46388:;
  /* 11b46388 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4638c je 0x11b463e7 */
  if (C.zf) goto L_11b463e7;
  /* 11b4638e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b46390 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b46393 push edx */
  push32((uint32_t)(EDX));
  /* 11b46394 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11b46399 mov eax, dword ptr [0x11b67e38] */
  EAX = (r32((uint32_t)(0x11b67e38)));
  /* 11b4639e push eax */
  push32((uint32_t)(EAX));
  /* 11b4639f call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b463a5u);
  /* 11b463a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b463a7 jne 0x11b463ad */
  if (!C.zf) goto L_11b463ad;
  /* 11b463a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b463ab jmp 0x11b463ec */
  goto L_11b463ec;
L_11b463ad:;
  /* 11b463ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b463af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b463b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b463b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b463b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11b463bb mov edx, dword ptr [0x11b67e54] */
  EDX = (r32((uint32_t)(0x11b67e54)));
  /* 11b463c1 push edx */
  push32((uint32_t)(EDX));
  /* 11b463c2 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b463c8u);
  /* 11b463c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b463ca jne 0x11b463d0 */
  if (!C.zf) goto L_11b463d0;
  /* 11b463cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b463ce jmp 0x11b463ec */
  goto L_11b463ec;
L_11b463d0:;
  /* 11b463d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b463d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b463d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b463da push eax */
  push32((uint32_t)(EAX));
  /* 11b463db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b463de push ecx */
  push32((uint32_t)(ECX));
  /* 11b463df call 0x11b3b540 */
  push32(0x11b463e4u); f_11b3b540();
  /* 11b463e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b463e7:;
  /* 11b463e7 mov eax, 1 */
  EAX = (0x1u);
L_11b463ec:;
  /* 11b463ec mov esp, ebp */
  ESP = (EBP);
  /* 11b463ee pop ebp */
  EBP = (pop32());
  /* 11b463ef ret  */
  ESPCHK(0x11b461f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163f0 @ 0x11b463f0 (130 bytes, 47 insns) */
void f_11b463f0(void) {
  FTRACE(0x11b463f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b463f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b463f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b463f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b463f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b463fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11b46404:;
  /* 11b46404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46407 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4640a jg 0x11b4646e */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4646e;
  /* 11b4640c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46410 je 0x11b4646e */
  if (C.zf) goto L_11b4646e;
  /* 11b46412 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46415 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46418 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b46419 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4641b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b4641d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b46420 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46426 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11b46429 push eax */
  push32((uint32_t)(EAX));
  /* 11b4642a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4642d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b4642f push edx */
  push32((uint32_t)(EDX));
  /* 11b46430 call 0x11b4a020 */
  push32(0x11b46435u); f_11b4a020();
  /* 11b46435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46438 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b4643b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4643f jne 0x11b46452 */
  if (!C.zf) goto L_11b46452;
  /* 11b46441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46444 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46447 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11b4644b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4644e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b46450 jmp 0x11b4646c */
  goto L_11b4646c;
L_11b46452:;
  /* 11b46452 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46456 jge 0x11b46463 */
  if ((C.sf==C.of)) goto L_11b46463;
  /* 11b46458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4645b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4645e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b46461 jmp 0x11b4646c */
  goto L_11b4646c;
L_11b46463:;
  /* 11b46463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46469 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b4646c:;
  /* 11b4646c jmp 0x11b46404 */
  goto L_11b46404;
L_11b4646e:;
  /* 11b4646e mov esp, ebp */
  ESP = (EBP);
  /* 11b46470 pop ebp */
  EBP = (pop32());
  /* 11b46471 ret  */
  ESPCHK(0x11b463f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016480 @ 0x11b46480 (186 bytes, 50 insns) */
void f_11b46480(void) {
  FTRACE(0x11b46480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46480 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46481 mov ebp, esp */
  EBP = (ESP);
  /* 11b46483 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46484 mov eax, dword ptr [0x11b67e48] */
  EAX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46489 push eax */
  push32((uint32_t)(EAX));
  /* 11b4648a call 0x11b3b830 */
  push32(0x11b4648fu); f_11b3b830();
  /* 11b4648f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46492 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46494 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46497 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b4649a mov dword ptr [0x11b67e44], ecx */
  w32((uint32_t)(0x11b67e44), (ECX));
  /* 11b464a0 mov edx, dword ptr [0x11b67e4c] */
  EDX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b464a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b464a7 call 0x11b3b830 */
  push32(0x11b464acu); f_11b3b830();
  /* 11b464ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b464af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b464b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b464b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b464b7 mov dword ptr [0x11b67e3c], ecx */
  w32((uint32_t)(0x11b67e3c), (ECX));
  /* 11b464bd mov dword ptr [0x11b67e38], 0 */
  w32((uint32_t)(0x11b67e38), (0x0u));
  /* 11b464c7 cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b464ce je 0x11b464d9 */
  if (C.zf) goto L_11b464d9;
  /* 11b464d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11b464d7 jmp 0x11b464eb */
  goto L_11b464eb;
L_11b464d9:;
  /* 11b464d9 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b464df push edx */
  push32((uint32_t)(EDX));
  /* 11b464e0 call 0x11b46f20 */
  push32(0x11b464e5u); f_11b46f20();
  /* 11b464e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b464e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b464eb:;
  /* 11b464eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b464ee mov dword ptr [0x11b67e40], eax */
  w32((uint32_t)(0x11b67e40), (EAX));
  /* 11b464f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b464f5 push 0x11b46540 */
  push32((uint32_t)(0x11b46540u));
  /* 11b464fa call dword ptr [0x11b6a308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a308))), 0x11b46500u);
  /* 11b46500 mov ecx, dword ptr [0x11b67e50] */
  ECX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46506 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4650c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4650e je 0x11b4652c */
  if (C.zf) goto L_11b4652c;
  /* 11b46510 mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46516 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4651c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4651e je 0x11b4652c */
  if (C.zf) goto L_11b4652c;
  /* 11b46520 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46525 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11b46528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4652a jne 0x11b46536 */
  if (!C.zf) goto L_11b46536;
L_11b4652c:;
  /* 11b4652c mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
L_11b46536:;
  /* 11b46536 mov esp, ebp */
  ESP = (EBP);
  /* 11b46538 pop ebp */
  EBP = (pop32());
  /* 11b46539 ret  */
  ESPCHK(0x11b46480u, _esp0);
  ESP += 4; return;
}

/* FUN_10016540 @ 0x11b46540 (804 bytes, 220 insns) */
void f_11b46540(void) {
  FTRACE(0x11b46540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46540 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46541 mov ebp, esp */
  EBP = (ESP);
  /* 11b46543 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46549 push eax */
  push32((uint32_t)(EAX));
  /* 11b4654a call 0x11b46ea0 */
  push32(0x11b4654fu); f_11b46ea0();
  /* 11b4654f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46552 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11b46555 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b46557 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b4655a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4655b mov edx, dword ptr [0x11b67e3c] */
  EDX = (r32((uint32_t)(0x11b67e3c)));
  /* 11b46561 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46563 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46565 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4656b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46571 push edx */
  push32((uint32_t)(EDX));
  /* 11b46572 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46575 push eax */
  push32((uint32_t)(EAX));
  /* 11b46576 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b4657cu);
  /* 11b4657c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4657e jne 0x11b46594 */
  if (!C.zf) goto L_11b46594;
  /* 11b46580 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b4658a mov eax, 1 */
  EAX = (0x1u);
  /* 11b4658f jmp 0x11b4685e */
  goto L_11b4685e;
L_11b46594:;
  /* 11b46594 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b46597 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46598 mov edx, dword ptr [0x11b67e4c] */
  EDX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b4659e push edx */
  push32((uint32_t)(EDX));
  /* 11b4659f call 0x11b4a020 */
  push32(0x11b465a4u); f_11b4a020();
  /* 11b465a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b465a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b465a9 jne 0x11b466cf */
  if (!C.zf) goto L_11b466cf;
  /* 11b465af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b465b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11b465b4 push eax */
  push32((uint32_t)(EAX));
  /* 11b465b5 mov ecx, dword ptr [0x11b67e44] */
  ECX = (r32((uint32_t)(0x11b67e44)));
  /* 11b465bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b465bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b465bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11b465c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b465cb push ecx */
  push32((uint32_t)(ECX));
  /* 11b465cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b465cf push edx */
  push32((uint32_t)(EDX));
  /* 11b465d0 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b465d6u);
  /* 11b465d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b465d8 jne 0x11b465ee */
  if (!C.zf) goto L_11b465ee;
  /* 11b465da mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b465e4 mov eax, 1 */
  EAX = (0x1u);
  /* 11b465e9 jmp 0x11b4685e */
  goto L_11b4685e;
L_11b465ee:;
  /* 11b465ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11b465f1 push eax */
  push32((uint32_t)(EAX));
  /* 11b465f2 mov ecx, dword ptr [0x11b67e48] */
  ECX = (r32((uint32_t)(0x11b67e48)));
  /* 11b465f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b465f9 call 0x11b4a020 */
  push32(0x11b465feu); f_11b4a020();
  /* 11b465fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46603 jne 0x11b46630 */
  if (!C.zf) goto L_11b46630;
  /* 11b46605 mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b4660b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11b46611 mov dword ptr [0x11b67e50], edx */
  w32((uint32_t)(0x11b67e50), (EDX));
  /* 11b46617 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b4661a mov dword ptr [0x11b67e54], eax */
  w32((uint32_t)(0x11b67e54), (EAX));
  /* 11b4661f mov ecx, dword ptr [0x11b67e54] */
  ECX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46625 mov dword ptr [0x11b67e38], ecx */
  w32((uint32_t)(0x11b67e38), (ECX));
  /* 11b4662b jmp 0x11b466cf */
  goto L_11b466cf;
L_11b46630:;
  /* 11b46630 mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46636 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b46639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4663b jne 0x11b466cf */
  if (!C.zf) goto L_11b466cf;
  /* 11b46641 cmp dword ptr [0x11b67e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46648 je 0x11b4669d */
  if (C.zf) goto L_11b4669d;
  /* 11b4664a mov eax, dword ptr [0x11b67e40] */
  EAX = (r32((uint32_t)(0x11b67e40)));
  /* 11b4664f push eax */
  push32((uint32_t)(EAX));
  /* 11b46650 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b46653 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46654 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b4665a push edx */
  push32((uint32_t)(EDX));
  /* 11b4665b call 0x11b4a0f0 */
  push32(0x11b46660u); f_11b4a0f0();
  /* 11b46660 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46665 jne 0x11b4669d */
  if (!C.zf) goto L_11b4669d;
  /* 11b46667 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b4666c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11b4666e mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b46673 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46676 mov dword ptr [0x11b67e54], ecx */
  w32((uint32_t)(0x11b67e54), (ECX));
  /* 11b4667c mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46682 push edx */
  push32((uint32_t)(EDX));
  /* 11b46683 call 0x11b3b830 */
  push32(0x11b46688u); f_11b3b830();
  /* 11b46688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4668b cmp eax, dword ptr [0x11b67e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46691 jne 0x11b4669b */
  if (!C.zf) goto L_11b4669b;
  /* 11b46693 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46696 mov dword ptr [0x11b67e38], eax */
  w32((uint32_t)(0x11b67e38), (EAX));
L_11b4669b:;
  /* 11b4669b jmp 0x11b466cf */
  goto L_11b466cf;
L_11b4669d:;
  /* 11b4669d mov ecx, dword ptr [0x11b67e50] */
  ECX = (r32((uint32_t)(0x11b67e50)));
  /* 11b466a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b466a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b466a8 jne 0x11b466cf */
  if (!C.zf) goto L_11b466cf;
  /* 11b466aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b466ad push edx */
  push32((uint32_t)(EDX));
  /* 11b466ae call 0x11b46be0 */
  push32(0x11b466b3u); f_11b46be0();
  /* 11b466b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b466b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b466b8 je 0x11b466cf */
  if (C.zf) goto L_11b466cf;
  /* 11b466ba mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b466bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11b466c1 mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b466c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b466c9 mov dword ptr [0x11b67e54], ecx */
  w32((uint32_t)(0x11b67e54), (ECX));
L_11b466cf:;
  /* 11b466cf mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b466d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11b466db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b466e1 je 0x11b46851 */
  if (C.zf) goto L_11b46851;
  /* 11b466e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b466e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11b466ec push eax */
  push32((uint32_t)(EAX));
  /* 11b466ed mov ecx, dword ptr [0x11b67e44] */
  ECX = (r32((uint32_t)(0x11b67e44)));
  /* 11b466f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b466f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b466f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11b466fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46703 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46704 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46707 push edx */
  push32((uint32_t)(EDX));
  /* 11b46708 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b4670eu);
  /* 11b4670e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46710 jne 0x11b46726 */
  if (!C.zf) goto L_11b46726;
  /* 11b46712 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b4671c mov eax, 1 */
  EAX = (0x1u);
  /* 11b46721 jmp 0x11b4685e */
  goto L_11b4685e;
L_11b46726:;
  /* 11b46726 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11b46729 push eax */
  push32((uint32_t)(EAX));
  /* 11b4672a mov ecx, dword ptr [0x11b67e48] */
  ECX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46730 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46731 call 0x11b4a020 */
  push32(0x11b46736u); f_11b4a020();
  /* 11b46736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4673b jne 0x11b467f0 */
  if (!C.zf) goto L_11b467f0;
  /* 11b46741 mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46747 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b4674a mov dword ptr [0x11b67e50], edx */
  w32((uint32_t)(0x11b67e50), (EDX));
  /* 11b46750 cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46757 je 0x11b4677a */
  if (C.zf) goto L_11b4677a;
  /* 11b46759 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b4675e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11b46761 mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b46766 cmp dword ptr [0x11b67e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4676d jne 0x11b46778 */
  if (!C.zf) goto L_11b46778;
  /* 11b4676f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46772 mov dword ptr [0x11b67e38], ecx */
  w32((uint32_t)(0x11b67e38), (ECX));
L_11b46778:;
  /* 11b46778 jmp 0x11b467ee */
  goto L_11b467ee;
L_11b4677a:;
  /* 11b4677a cmp dword ptr [0x11b67e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46781 je 0x11b467cf */
  if (C.zf) goto L_11b467cf;
  /* 11b46783 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46789 push edx */
  push32((uint32_t)(EDX));
  /* 11b4678a call 0x11b3b830 */
  push32(0x11b4678fu); f_11b3b830();
  /* 11b4678f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46792 cmp eax, dword ptr [0x11b67e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46798 jne 0x11b467cf */
  if (!C.zf) goto L_11b467cf;
  /* 11b4679a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4679c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b4679f push eax */
  push32((uint32_t)(EAX));
  /* 11b467a0 call 0x11b46c30 */
  push32(0x11b467a5u); f_11b46c30();
  /* 11b467a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b467a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b467aa je 0x11b467cd */
  if (C.zf) goto L_11b467cd;
  /* 11b467ac mov ecx, dword ptr [0x11b67e50] */
  ECX = (r32((uint32_t)(0x11b67e50)));
  /* 11b467b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b467b5 mov dword ptr [0x11b67e50], ecx */
  w32((uint32_t)(0x11b67e50), (ECX));
  /* 11b467bb cmp dword ptr [0x11b67e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b467c2 jne 0x11b467cd */
  if (!C.zf) goto L_11b467cd;
  /* 11b467c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b467c7 mov dword ptr [0x11b67e38], edx */
  w32((uint32_t)(0x11b67e38), (EDX));
L_11b467cd:;
  /* 11b467cd jmp 0x11b467ee */
  goto L_11b467ee;
L_11b467cf:;
  /* 11b467cf mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b467d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11b467d7 mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b467dc cmp dword ptr [0x11b67e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b467e3 jne 0x11b467ee */
  if (!C.zf) goto L_11b467ee;
  /* 11b467e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b467e8 mov dword ptr [0x11b67e38], ecx */
  w32((uint32_t)(0x11b67e38), (ECX));
L_11b467ee:;
  /* 11b467ee jmp 0x11b46851 */
  goto L_11b46851;
L_11b467f0:;
  /* 11b467f0 cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b467f7 jne 0x11b46851 */
  if (!C.zf) goto L_11b46851;
  /* 11b467f9 cmp dword ptr [0x11b67e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46800 je 0x11b46851 */
  if (C.zf) goto L_11b46851;
  /* 11b46802 mov edx, dword ptr [0x11b67e40] */
  EDX = (r32((uint32_t)(0x11b67e40)));
  /* 11b46808 push edx */
  push32((uint32_t)(EDX));
  /* 11b46809 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11b4680c push eax */
  push32((uint32_t)(EAX));
  /* 11b4680d mov ecx, dword ptr [0x11b67e48] */
  ECX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46813 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46814 call 0x11b4a0f0 */
  push32(0x11b46819u); f_11b4a0f0();
  /* 11b46819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4681c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4681e jne 0x11b46851 */
  if (!C.zf) goto L_11b46851;
  /* 11b46820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b46822 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46825 push edx */
  push32((uint32_t)(EDX));
  /* 11b46826 call 0x11b46c30 */
  push32(0x11b4682bu); f_11b46c30();
  /* 11b4682b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4682e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46830 je 0x11b46851 */
  if (C.zf) goto L_11b46851;
  /* 11b46832 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46837 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11b4683a mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b4683f cmp dword ptr [0x11b67e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46846 jne 0x11b46851 */
  if (!C.zf) goto L_11b46851;
  /* 11b46848 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b4684b mov dword ptr [0x11b67e38], ecx */
  w32((uint32_t)(0x11b67e38), (ECX));
L_11b46851:;
  /* 11b46851 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46856 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b46859 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4685b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4685d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b4685e:;
  /* 11b4685e mov esp, ebp */
  ESP = (EBP);
  /* 11b46860 pop ebp */
  EBP = (pop32());
  /* 11b46861 ret 4 */
  ESPCHK(0x11b46540u, _esp0);
  ESP += 8; return;
}

/* FUN_10016870 @ 0x11b46870 (116 bytes, 33 insns) */
void f_11b46870(void) {
  FTRACE(0x11b46870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46870 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46871 mov ebp, esp */
  EBP = (ESP);
  /* 11b46873 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46874 mov eax, dword ptr [0x11b67e48] */
  EAX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46879 push eax */
  push32((uint32_t)(EAX));
  /* 11b4687a call 0x11b3b830 */
  push32(0x11b4687fu); f_11b3b830();
  /* 11b4687f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46884 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46887 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b4688a mov dword ptr [0x11b67e44], ecx */
  w32((uint32_t)(0x11b67e44), (ECX));
  /* 11b46890 cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46897 je 0x11b468a2 */
  if (C.zf) goto L_11b468a2;
  /* 11b46899 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11b468a0 jmp 0x11b468b4 */
  goto L_11b468b4;
L_11b468a2:;
  /* 11b468a2 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b468a8 push edx */
  push32((uint32_t)(EDX));
  /* 11b468a9 call 0x11b46f20 */
  push32(0x11b468aeu); f_11b46f20();
  /* 11b468ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b468b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b468b4:;
  /* 11b468b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b468b7 mov dword ptr [0x11b67e40], eax */
  w32((uint32_t)(0x11b67e40), (EAX));
  /* 11b468bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b468be push 0x11b468f0 */
  push32((uint32_t)(0x11b468f0u));
  /* 11b468c3 call dword ptr [0x11b6a308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a308))), 0x11b468c9u);
  /* 11b468c9 mov ecx, dword ptr [0x11b67e50] */
  ECX = (r32((uint32_t)(0x11b67e50)));
  /* 11b468cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b468d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b468d4 jne 0x11b468e0 */
  if (!C.zf) goto L_11b468e0;
  /* 11b468d6 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
L_11b468e0:;
  /* 11b468e0 mov esp, ebp */
  ESP = (EBP);
  /* 11b468e2 pop ebp */
  EBP = (pop32());
  /* 11b468e3 ret  */
  ESPCHK(0x11b46870u, _esp0);
  ESP += 4; return;
}

/* FUN_100168f0 @ 0x11b468f0 (287 bytes, 86 insns) */
void f_11b468f0(void) {
  FTRACE(0x11b468f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b468f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b468f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b468f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b468f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b468f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b468fa call 0x11b46ea0 */
  push32(0x11b468ffu); f_11b46ea0();
  /* 11b468ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46902 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11b46905 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b46907 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b4690a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4690b mov edx, dword ptr [0x11b67e44] */
  EDX = (r32((uint32_t)(0x11b67e44)));
  /* 11b46911 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46913 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46915 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4691b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46921 push edx */
  push32((uint32_t)(EDX));
  /* 11b46922 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46925 push eax */
  push32((uint32_t)(EAX));
  /* 11b46926 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b4692cu);
  /* 11b4692c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4692e jne 0x11b46944 */
  if (!C.zf) goto L_11b46944;
  /* 11b46930 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b4693a mov eax, 1 */
  EAX = (0x1u);
  /* 11b4693f jmp 0x11b46a09 */
  goto L_11b46a09;
L_11b46944:;
  /* 11b46944 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b46947 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46948 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b4694e push edx */
  push32((uint32_t)(EDX));
  /* 11b4694f call 0x11b4a020 */
  push32(0x11b46954u); f_11b4a020();
  /* 11b46954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46959 jne 0x11b46999 */
  if (!C.zf) goto L_11b46999;
  /* 11b4695b cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46962 jne 0x11b46976 */
  if (!C.zf) goto L_11b46976;
  /* 11b46964 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b46966 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46969 push eax */
  push32((uint32_t)(EAX));
  /* 11b4696a call 0x11b46c30 */
  push32(0x11b4696fu); f_11b46c30();
  /* 11b4696f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46974 je 0x11b46997 */
  if (C.zf) goto L_11b46997;
L_11b46976:;
  /* 11b46976 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46979 mov dword ptr [0x11b67e54], ecx */
  w32((uint32_t)(0x11b67e54), (ECX));
  /* 11b4697f mov edx, dword ptr [0x11b67e54] */
  EDX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46985 mov dword ptr [0x11b67e38], edx */
  w32((uint32_t)(0x11b67e38), (EDX));
  /* 11b4698b mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46990 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11b46992 mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
L_11b46997:;
  /* 11b46997 jmp 0x11b469fc */
  goto L_11b469fc;
L_11b46999:;
  /* 11b46999 cmp dword ptr [0x11b67e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b469a0 jne 0x11b469fc */
  if (!C.zf) goto L_11b469fc;
  /* 11b469a2 cmp dword ptr [0x11b67e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b469a9 je 0x11b469fc */
  if (C.zf) goto L_11b469fc;
  /* 11b469ab mov ecx, dword ptr [0x11b67e40] */
  ECX = (r32((uint32_t)(0x11b67e40)));
  /* 11b469b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b469b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11b469b5 push edx */
  push32((uint32_t)(EDX));
  /* 11b469b6 mov eax, dword ptr [0x11b67e48] */
  EAX = (r32((uint32_t)(0x11b67e48)));
  /* 11b469bb push eax */
  push32((uint32_t)(EAX));
  /* 11b469bc call 0x11b4a0f0 */
  push32(0x11b469c1u); f_11b4a0f0();
  /* 11b469c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b469c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b469c6 jne 0x11b469fc */
  if (!C.zf) goto L_11b469fc;
  /* 11b469c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b469ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b469cd push ecx */
  push32((uint32_t)(ECX));
  /* 11b469ce call 0x11b46c30 */
  push32(0x11b469d3u); f_11b46c30();
  /* 11b469d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b469d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b469d8 je 0x11b469fc */
  if (C.zf) goto L_11b469fc;
  /* 11b469da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b469dd mov dword ptr [0x11b67e54], edx */
  w32((uint32_t)(0x11b67e54), (EDX));
  /* 11b469e3 mov eax, dword ptr [0x11b67e54] */
  EAX = (r32((uint32_t)(0x11b67e54)));
  /* 11b469e8 mov dword ptr [0x11b67e38], eax */
  w32((uint32_t)(0x11b67e38), (EAX));
  /* 11b469ed mov ecx, dword ptr [0x11b67e50] */
  ECX = (r32((uint32_t)(0x11b67e50)));
  /* 11b469f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b469f6 mov dword ptr [0x11b67e50], ecx */
  w32((uint32_t)(0x11b67e50), (ECX));
L_11b469fc:;
  /* 11b469fc mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46a01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b46a04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46a06 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46a08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b46a09:;
  /* 11b46a09 mov esp, ebp */
  ESP = (EBP);
  /* 11b46a0b pop ebp */
  EBP = (pop32());
  /* 11b46a0c ret 4 */
  ESPCHK(0x11b468f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016a10 @ 0x11b46a10 (69 bytes, 20 insns) */
void f_11b46a10(void) {
  FTRACE(0x11b46a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46a11 mov ebp, esp */
  EBP = (ESP);
  /* 11b46a13 mov eax, dword ptr [0x11b67e4c] */
  EAX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b46a18 push eax */
  push32((uint32_t)(EAX));
  /* 11b46a19 call 0x11b3b830 */
  push32(0x11b46a1eu); f_11b3b830();
  /* 11b46a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46a21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46a23 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46a26 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b46a29 mov dword ptr [0x11b67e3c], ecx */
  w32((uint32_t)(0x11b67e3c), (ECX));
  /* 11b46a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b46a31 push 0x11b46a60 */
  push32((uint32_t)(0x11b46a60u));
  /* 11b46a36 call dword ptr [0x11b6a308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a308))), 0x11b46a3cu);
  /* 11b46a3c mov edx, dword ptr [0x11b67e50] */
  EDX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46a42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b46a45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b46a47 jne 0x11b46a53 */
  if (!C.zf) goto L_11b46a53;
  /* 11b46a49 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
L_11b46a53:;
  /* 11b46a53 pop ebp */
  EBP = (pop32());
  /* 11b46a54 ret  */
  ESPCHK(0x11b46a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a60 @ 0x11b46a60 (172 bytes, 54 insns) */
void f_11b46a60(void) {
  FTRACE(0x11b46a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46a61 mov ebp, esp */
  EBP = (ESP);
  /* 11b46a63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46a69 push eax */
  push32((uint32_t)(EAX));
  /* 11b46a6a call 0x11b46ea0 */
  push32(0x11b46a6fu); f_11b46ea0();
  /* 11b46a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46a72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11b46a75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b46a77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b46a7a push ecx */
  push32((uint32_t)(ECX));
  /* 11b46a7b mov edx, dword ptr [0x11b67e3c] */
  EDX = (r32((uint32_t)(0x11b67e3c)));
  /* 11b46a81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46a83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46a85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11b46a8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46a91 push edx */
  push32((uint32_t)(EDX));
  /* 11b46a92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46a95 push eax */
  push32((uint32_t)(EAX));
  /* 11b46a96 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b46a9cu);
  /* 11b46a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46a9e jne 0x11b46ab1 */
  if (!C.zf) goto L_11b46ab1;
  /* 11b46aa0 mov dword ptr [0x11b67e50], 0 */
  w32((uint32_t)(0x11b67e50), (0x0u));
  /* 11b46aaa mov eax, 1 */
  EAX = (0x1u);
  /* 11b46aaf jmp 0x11b46b06 */
  goto L_11b46b06;
L_11b46ab1:;
  /* 11b46ab1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11b46ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46ab5 mov edx, dword ptr [0x11b67e4c] */
  EDX = (r32((uint32_t)(0x11b67e4c)));
  /* 11b46abb push edx */
  push32((uint32_t)(EDX));
  /* 11b46abc call 0x11b4a020 */
  push32(0x11b46ac1u); f_11b4a020();
  /* 11b46ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46ac6 jne 0x11b46af9 */
  if (!C.zf) goto L_11b46af9;
  /* 11b46ac8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46acb push eax */
  push32((uint32_t)(EAX));
  /* 11b46acc call 0x11b46be0 */
  push32(0x11b46ad1u); f_11b46be0();
  /* 11b46ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46ad6 je 0x11b46af9 */
  if (C.zf) goto L_11b46af9;
  /* 11b46ad8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b46adb mov dword ptr [0x11b67e54], ecx */
  w32((uint32_t)(0x11b67e54), (ECX));
  /* 11b46ae1 mov edx, dword ptr [0x11b67e54] */
  EDX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46ae7 mov dword ptr [0x11b67e38], edx */
  w32((uint32_t)(0x11b67e38), (EDX));
  /* 11b46aed mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46af2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11b46af4 mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
L_11b46af9:;
  /* 11b46af9 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46afe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b46b01 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b46b03 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46b05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b46b06:;
  /* 11b46b06 mov esp, ebp */
  ESP = (EBP);
  /* 11b46b08 pop ebp */
  EBP = (pop32());
  /* 11b46b09 ret 4 */
  ESPCHK(0x11b46a60u, _esp0);
  ESP += 8; return;
}

/* FUN_10016b10 @ 0x11b46b10 (43 bytes, 11 insns) */
void f_11b46b10(void) {
  FTRACE(0x11b46b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46b11 mov ebp, esp */
  EBP = (ESP);
  /* 11b46b13 mov eax, dword ptr [0x11b67e50] */
  EAX = (r32((uint32_t)(0x11b67e50)));
  /* 11b46b18 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11b46b1d mov dword ptr [0x11b67e50], eax */
  w32((uint32_t)(0x11b67e50), (EAX));
  /* 11b46b22 call dword ptr [0x11b6a310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a310))), 0x11b46b28u);
  /* 11b46b28 mov dword ptr [0x11b67e54], eax */
  w32((uint32_t)(0x11b67e54), (EAX));
  /* 11b46b2d mov ecx, dword ptr [0x11b67e54] */
  ECX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46b33 mov dword ptr [0x11b67e38], ecx */
  w32((uint32_t)(0x11b67e38), (ECX));
  /* 11b46b39 pop ebp */
  EBP = (pop32());
  /* 11b46b3a ret  */
  ESPCHK(0x11b46b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b40 @ 0x11b46b40 (155 bytes, 57 insns) */
void f_11b46b40(void) {
  FTRACE(0x11b46b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46b41 mov ebp, esp */
  EBP = (ESP);
  /* 11b46b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46b46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46b4a je 0x11b46b6b */
  if (C.zf) goto L_11b46b6b;
  /* 11b46b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46b4f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b46b52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b46b54 je 0x11b46b6b */
  if (C.zf) goto L_11b46b6b;
  /* 11b46b56 push 0x11b63c44 */
  push32((uint32_t)(0x11b63c44u));
  /* 11b46b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46b5e push edx */
  push32((uint32_t)(EDX));
  /* 11b46b5f call 0x11b40930 */
  push32(0x11b46b64u); f_11b40930();
  /* 11b46b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46b69 jne 0x11b46b93 */
  if (!C.zf) goto L_11b46b93;
L_11b46b6b:;
  /* 11b46b6b push 8 */
  push32((uint32_t)(0x8u));
  /* 11b46b6d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b46b70 push eax */
  push32((uint32_t)(EAX));
  /* 11b46b71 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11b46b76 mov ecx, dword ptr [0x11b67e54] */
  ECX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46b7c push ecx */
  push32((uint32_t)(ECX));
  /* 11b46b7d call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b46b83u);
  /* 11b46b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46b85 jne 0x11b46b8b */
  if (!C.zf) goto L_11b46b8b;
  /* 11b46b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46b89 jmp 0x11b46bd7 */
  goto L_11b46bd7;
L_11b46b8b:;
  /* 11b46b8b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11b46b8e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b46b91 jmp 0x11b46bcb */
  goto L_11b46bcb;
L_11b46b93:;
  /* 11b46b93 push 0x11b63c40 */
  push32((uint32_t)(0x11b63c40u));
  /* 11b46b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46b9b push eax */
  push32((uint32_t)(EAX));
  /* 11b46b9c call 0x11b40930 */
  push32(0x11b46ba1u); f_11b40930();
  /* 11b46ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46ba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46ba6 jne 0x11b46bcb */
  if (!C.zf) goto L_11b46bcb;
  /* 11b46ba8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b46baa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11b46bad push ecx */
  push32((uint32_t)(ECX));
  /* 11b46bae push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b46bb0 mov edx, dword ptr [0x11b67e54] */
  EDX = (r32((uint32_t)(0x11b67e54)));
  /* 11b46bb6 push edx */
  push32((uint32_t)(EDX));
  /* 11b46bb7 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b46bbdu);
  /* 11b46bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46bbf jne 0x11b46bc5 */
  if (!C.zf) goto L_11b46bc5;
  /* 11b46bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46bc3 jmp 0x11b46bd7 */
  goto L_11b46bd7;
L_11b46bc5:;
  /* 11b46bc5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b46bc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b46bcb:;
  /* 11b46bcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46bce push ecx */
  push32((uint32_t)(ECX));
  /* 11b46bcf call 0x11b406e0 */
  push32(0x11b46bd4u); f_11b406e0();
  /* 11b46bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b46bd7:;
  /* 11b46bd7 mov esp, ebp */
  ESP = (EBP);
  /* 11b46bd9 pop ebp */
  EBP = (pop32());
  /* 11b46bda ret  */
  ESPCHK(0x11b46b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016be0 @ 0x11b46be0 (79 bytes, 26 insns) */
void f_11b46be0(void) {
  FTRACE(0x11b46be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46be1 mov ebp, esp */
  EBP = (ESP);
  /* 11b46be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46be6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11b46bea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b46bee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b46bf5 jmp 0x11b46c00 */
  goto L_11b46c00;
L_11b46bf7:;
  /* 11b46bf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b46bfa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46bfd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b46c00:;
  /* 11b46c00 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46c04 jae 0x11b46c26 */
  if (!C.cf) goto L_11b46c26;
  /* 11b46c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46c09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b46c0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b46c12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46c14 mov cx, word ptr [eax*2 + 0x11b66b34] */
  CX = (r16((uint32_t)(EAX*2 + 0x11b66b34)));
  /* 11b46c1c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46c1e jne 0x11b46c24 */
  if (!C.zf) goto L_11b46c24;
  /* 11b46c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c22 jmp 0x11b46c2b */
  goto L_11b46c2b;
L_11b46c24:;
  /* 11b46c24 jmp 0x11b46bf7 */
  goto L_11b46bf7;
L_11b46c26:;
  /* 11b46c26 mov eax, 1 */
  EAX = (0x1u);
L_11b46c2b:;
  /* 11b46c2b mov esp, ebp */
  ESP = (EBP);
  /* 11b46c2d pop ebp */
  EBP = (pop32());
  /* 11b46c2e ret  */
  ESPCHK(0x11b46be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c30 @ 0x11b46c30 (135 bytes, 48 insns) */
void f_11b46c30(void) {
  FTRACE(0x11b46c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46c31 mov ebp, esp */
  EBP = (ESP);
  /* 11b46c33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46c36 push esi */
  push32((uint32_t)(ESI));
  /* 11b46c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46c3a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c3f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c49 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11b46c4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b46c54 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b46c56 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11b46c59 push ecx */
  push32((uint32_t)(ECX));
  /* 11b46c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b46c5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46c5f push edx */
  push32((uint32_t)(EDX));
  /* 11b46c60 call dword ptr [0x11b67e58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67e58))), 0x11b46c66u);
  /* 11b46c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46c68 jne 0x11b46c6e */
  if (!C.zf) goto L_11b46c6e;
  /* 11b46c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46c6c jmp 0x11b46cb2 */
  goto L_11b46cb2;
L_11b46c6e:;
  /* 11b46c6e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11b46c71 push eax */
  push32((uint32_t)(EAX));
  /* 11b46c72 call 0x11b46ea0 */
  push32(0x11b46c77u); f_11b46ea0();
  /* 11b46c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46c7a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46c7d je 0x11b46cad */
  if (C.zf) goto L_11b46cad;
  /* 11b46c7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46c83 je 0x11b46cad */
  if (C.zf) goto L_11b46cad;
  /* 11b46c85 mov ecx, dword ptr [0x11b67e48] */
  ECX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11b46c8c call 0x11b46f20 */
  push32(0x11b46c91u); f_11b46f20();
  /* 11b46c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46c94 mov esi, eax */
  ESI = (EAX);
  /* 11b46c96 mov edx, dword ptr [0x11b67e48] */
  EDX = (r32((uint32_t)(0x11b67e48)));
  /* 11b46c9c push edx */
  push32((uint32_t)(EDX));
  /* 11b46c9d call 0x11b3b830 */
  push32(0x11b46ca2u); f_11b3b830();
  /* 11b46ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46ca5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ca7 jne 0x11b46cad */
  if (!C.zf) goto L_11b46cad;
  /* 11b46ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b46cab jmp 0x11b46cb2 */
  goto L_11b46cb2;
L_11b46cad:;
  /* 11b46cad mov eax, 1 */
  EAX = (0x1u);
L_11b46cb2:;
  /* 11b46cb2 pop esi */
  ESI = (pop32());
  /* 11b46cb3 mov esp, ebp */
  ESP = (EBP);
  /* 11b46cb5 pop ebp */
  EBP = (pop32());
  /* 11b46cb6 ret  */
  ESPCHK(0x11b46c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cc0 @ 0x11b46cc0 (77 bytes, 18 insns) */
void f_11b46cc0(void) {
  FTRACE(0x11b46cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b46cc3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46cc9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11b46cd3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11b46cd9 push eax */
  push32((uint32_t)(EAX));
  /* 11b46cda call dword ptr [0x11b6a300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a300))), 0x11b46ce0u);
  /* 11b46ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b46ce2 je 0x11b46cf9 */
  if (C.zf) goto L_11b46cf9;
  /* 11b46ce4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ceb jne 0x11b46cf9 */
  if (!C.zf) goto L_11b46cf9;
  /* 11b46ced mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11b46cf7 jmp 0x11b46d03 */
  goto L_11b46d03;
L_11b46cf9:;
  /* 11b46cf9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11b46d03:;
  /* 11b46d03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11b46d09 mov esp, ebp */
  ESP = (EBP);
  /* 11b46d0b pop ebp */
  EBP = (pop32());
  /* 11b46d0c ret  */
  ESPCHK(0x11b46cc0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11b46d10 (388 bytes, 118 insns) */
void f_11b46d10(void) {
  FTRACE(0x11b46d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46d11 mov ebp, esp */
  EBP = (ESP);
  /* 11b46d13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46d16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b46d1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11b46d24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b46d2b:;
  /* 11b46d2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b46d2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d31 jg 0x11b46e78 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b46e78;
  /* 11b46d37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b46d3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46d3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b46d3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46d40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b46d42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b46d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46d48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46d4e cmp edx, dword ptr [ecx + 0x11b66690] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11b66690))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d54 jne 0x11b46e4e */
  if (!C.zf) goto L_11b46e4e;
  /* 11b46d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46d5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b46d60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d64 ja 0x11b46d87 */
  if ((!C.cf&&!C.zf)) goto L_11b46d87;
  /* 11b46d66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d6a je 0x11b46df9 */
  if (C.zf) goto L_11b46df9;
  /* 11b46d70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d74 je 0x11b46da4 */
  if (C.zf) goto L_11b46da4;
  /* 11b46d76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d7a je 0x11b46dc6 */
  if (C.zf) goto L_11b46dc6;
  /* 11b46d7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d80 je 0x11b46de8 */
  if (C.zf) goto L_11b46de8;
  /* 11b46d82 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46d87:;
  /* 11b46d87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d8e je 0x11b46db5 */
  if (C.zf) goto L_11b46db5;
  /* 11b46d90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46d97 je 0x11b46dd7 */
  if (C.zf) goto L_11b46dd7;
  /* 11b46d99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46da0 je 0x11b46e0a */
  if (C.zf) goto L_11b46e0a;
  /* 11b46da2 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46da4:;
  /* 11b46da4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46da7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46daa add ecx, 0x11b66694 */
  { uint32_t _a=(ECX),_b=(0x11b66694u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46db0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b46db3 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46db5:;
  /* 11b46db5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46db8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46dbb mov eax, dword ptr [edx + 0x11b6669c] */
  EAX = (r32((uint32_t)(EDX + 0x11b6669c)));
  /* 11b46dc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b46dc4 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46dc6:;
  /* 11b46dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46dc9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46dcc add ecx, 0x11b666a0 */
  { uint32_t _a=(ECX),_b=(0x11b666a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46dd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b46dd5 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46dd7:;
  /* 11b46dd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46dda imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46ddd mov eax, dword ptr [edx + 0x11b666a4] */
  EAX = (r32((uint32_t)(EDX + 0x11b666a4)));
  /* 11b46de3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b46de6 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46de8:;
  /* 11b46de8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46deb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46dee add ecx, 0x11b666a8 */
  { uint32_t _a=(ECX),_b=(0x11b666a8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46df4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b46df7 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46df9:;
  /* 11b46df9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46dfc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46dff add edx, 0x11b666ac */
  { uint32_t _a=(EDX),_b=(0x11b666acu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46e05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b46e08 jmp 0x11b46e18 */
  goto L_11b46e18;
L_11b46e0a:;
  /* 11b46e0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46e0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46e10 add eax, 0x11b666b4 */
  { uint32_t _a=(EAX),_b=(0x11b666b4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b46e18:;
  /* 11b46e18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46e1c je 0x11b46e24 */
  if (C.zf) goto L_11b46e24;
  /* 11b46e1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46e22 jge 0x11b46e26 */
  if ((C.sf==C.of)) goto L_11b46e26;
L_11b46e24:;
  /* 11b46e24 jmp 0x11b46e78 */
  goto L_11b46e78;
L_11b46e26:;
  /* 11b46e26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b46e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46e2c push ecx */
  push32((uint32_t)(ECX));
  /* 11b46e2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b46e30 push edx */
  push32((uint32_t)(EDX));
  /* 11b46e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b46e34 push eax */
  push32((uint32_t)(EAX));
  /* 11b46e35 call 0x11b3c220 */
  push32(0x11b46e3au); f_11b3c220();
  /* 11b46e3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46e3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b46e40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46e43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11b46e47 mov eax, 1 */
  EAX = (0x1u);
  /* 11b46e4c jmp 0x11b46e8e */
  goto L_11b46e8e;
L_11b46e4e:;
  /* 11b46e4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46e51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b46e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46e57 cmp eax, dword ptr [edx + 0x11b66690] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11b66690))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46e5d jae 0x11b46e6a */
  if (!C.cf) goto L_11b46e6a;
  /* 11b46e5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46e62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46e65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b46e68 jmp 0x11b46e73 */
  goto L_11b46e73;
L_11b46e6a:;
  /* 11b46e6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b46e6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46e70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b46e73:;
  /* 11b46e73 jmp 0x11b46d2b */
  goto L_11b46d2b;
L_11b46e78:;
  /* 11b46e78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b46e7b push eax */
  push32((uint32_t)(EAX));
  /* 11b46e7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b46e7f push ecx */
  push32((uint32_t)(ECX));
  /* 11b46e80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46e83 push edx */
  push32((uint32_t)(EDX));
  /* 11b46e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46e87 push eax */
  push32((uint32_t)(EAX));
  /* 11b46e88 call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b46e8eu);
L_11b46e8e:;
  /* 11b46e8e mov esp, ebp */
  ESP = (EBP);
  /* 11b46e90 pop ebp */
  EBP = (pop32());
  /* 11b46e91 ret 0x10 */
  ESPCHK(0x11b46d10u, _esp0);
  ESP += 20; return;
}

/* FUN_10016ea0 @ 0x11b46ea0 (118 bytes, 42 insns) */
void f_11b46ea0(void) {
  FTRACE(0x11b46ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11b46ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46ea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b46ead:;
  /* 11b46ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46eb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b46eb2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11b46eb5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46ebc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46ebf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b46ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b46ec4 je 0x11b46f0f */
  if (C.zf) goto L_11b46f0f;
  /* 11b46ec6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46eca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ecd jl 0x11b46ee2 */
  if ((C.sf!=C.of)) goto L_11b46ee2;
  /* 11b46ecf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46ed3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ed6 jg 0x11b46ee2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b46ee2;
  /* 11b46ed8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b46edb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b46edd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11b46ee0 jmp 0x11b46efc */
  goto L_11b46efc;
L_11b46ee2:;
  /* 11b46ee2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46ee6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ee9 jl 0x11b46efc */
  if ((C.sf!=C.of)) goto L_11b46efc;
  /* 11b46eeb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46eef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46ef2 jg 0x11b46efc */
  if ((!C.zf&&C.sf==C.of)) goto L_11b46efc;
  /* 11b46ef4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b46ef7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b46ef9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11b46efc:;
  /* 11b46efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46eff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b46f02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b46f06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11b46f0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b46f0d jmp 0x11b46ead */
  goto L_11b46ead;
L_11b46f0f:;
  /* 11b46f0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b46f12 mov esp, ebp */
  ESP = (EBP);
  /* 11b46f14 pop ebp */
  EBP = (pop32());
  /* 11b46f15 ret  */
  ESPCHK(0x11b46ea0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11b46f20 (101 bytes, 36 insns) */
void f_11b46f20(void) {
  FTRACE(0x11b46f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46f21 mov ebp, esp */
  EBP = (ESP);
  /* 11b46f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46f26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b46f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46f30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b46f32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11b46f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46f38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46f3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11b46f3e:;
  /* 11b46f3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b46f42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46f45 jl 0x11b46f50 */
  if ((C.sf!=C.of)) goto L_11b46f50;
  /* 11b46f47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b46f4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46f4e jle 0x11b46f62 */
  if ((C.zf||C.sf!=C.of)) goto L_11b46f62;
L_11b46f50:;
  /* 11b46f50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b46f54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46f57 jl 0x11b46f7e */
  if ((C.sf!=C.of)) goto L_11b46f7e;
  /* 11b46f59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b46f5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b46f60 jg 0x11b46f7e */
  if ((!C.zf&&C.sf==C.of)) goto L_11b46f7e;
L_11b46f62:;
  /* 11b46f62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b46f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46f68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b46f6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46f6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b46f70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11b46f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46f76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b46f79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b46f7c jmp 0x11b46f3e */
  goto L_11b46f3e;
L_11b46f7e:;
  /* 11b46f7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b46f81 mov esp, ebp */
  ESP = (EBP);
  /* 11b46f83 pop ebp */
  EBP = (pop32());
  /* 11b46f84 ret  */
  ESPCHK(0x11b46f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f90 @ 0x11b46f90 (1085 bytes, 299 insns) */
void f_11b46f90(void) {
  FTRACE(0x11b46f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b46f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b46f91 mov ebp, esp */
  EBP = (ESP);
  /* 11b46f93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b46f96 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11b46f9c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b46fa3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b46faa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b46fb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b46fb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b46fbb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11b46fbf mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11b46fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b46fc6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11b46fca mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11b46fce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b46fd1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b46fd7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b46fda and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b46fe0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b46fe2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b46fe8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11b46fec mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11b46ff0 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11b46ff4 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11b46ff8 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11b46ffc and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11b47001 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11b47005 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47008 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4700e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b47011 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b47016 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47018 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11b4701c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b4701f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47025 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4702b jge 0x11b4704d */
  if ((C.sf==C.of)) goto L_11b4704d;
  /* 11b4702d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b47030 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b47036 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4703c jge 0x11b4704d */
  if ((C.sf==C.of)) goto L_11b4704d;
  /* 11b4703e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b47041 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b47046 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4704b jle 0x11b47084 */
  if ((C.zf||C.sf!=C.of)) goto L_11b47084;
L_11b4704d:;
  /* 11b4704d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b47050 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47056 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b47058 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4705a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b47060 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47066 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47069 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b4706c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4706f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b47076 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47079 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11b4707f jmp 0x11b473c9 */
  goto L_11b473c9;
L_11b47084:;
  /* 11b47084 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b47087 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4708d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47093 jg 0x11b470b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b470b7;
  /* 11b47095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47098 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b4709f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470a2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b470a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470ac mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11b470b2 jmp 0x11b473c9 */
  goto L_11b473c9;
L_11b470b7:;
  /* 11b470b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b470ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b470bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b470c1 jne 0x11b470fd */
  if (!C.zf) goto L_11b470fd;
  /* 11b470c3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b470c7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b470cb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11b470cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b470d5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b470da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b470dc jne 0x11b470fd */
  if (!C.zf) goto L_11b470fd;
  /* 11b470de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470e1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b470e5 jne 0x11b470fd */
  if (!C.zf) goto L_11b470fd;
  /* 11b470e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b470ed jne 0x11b470fd */
  if (!C.zf) goto L_11b470fd;
  /* 11b470ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b470f2 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11b470f8 jmp 0x11b473c9 */
  goto L_11b473c9;
L_11b470fd:;
  /* 11b470fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b47100 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b47108 jne 0x11b47159 */
  if (!C.zf) goto L_11b47159;
  /* 11b4710a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b4710e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b47112 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11b47116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47119 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b4711c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b47124 jne 0x11b47159 */
  if (!C.zf) goto L_11b47159;
  /* 11b47126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47129 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4712d jne 0x11b47159 */
  if (!C.zf) goto L_11b47159;
  /* 11b4712f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47132 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47135 jne 0x11b47159 */
  if (!C.zf) goto L_11b47159;
  /* 11b47137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4713a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11b47141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47144 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11b4714b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4714e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b47154 jmp 0x11b473c9 */
  goto L_11b473c9;
L_11b47159:;
  /* 11b47159 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11b47160 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b47167 jmp 0x11b47172 */
  goto L_11b47172;
L_11b47169:;
  /* 11b47169 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4716c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4716f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11b47172:;
  /* 11b47172 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47176 jge 0x11b47231 */
  if ((C.sf==C.of)) goto L_11b47231;
  /* 11b4717c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4717f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b47181 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b47184 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11b4718b mov eax, 5 */
  EAX = (0x5u);
  /* 11b47190 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47193 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11b47196 jmp 0x11b471a1 */
  goto L_11b471a1;
L_11b47198:;
  /* 11b47198 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b4719b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4719e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11b471a1:;
  /* 11b471a1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b471a5 jle 0x11b47223 */
  if ((C.zf||C.sf!=C.of)) goto L_11b47223;
  /* 11b471a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b471aa add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b471ad mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11b471b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b471b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b471b6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11b471b9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b471bc lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11b471c0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11b471c3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b471c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b471c8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11b471cb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b471ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b471d0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b471d3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b471d6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11b471d9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b471dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b471dd mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b471e0 push edx */
  push32((uint32_t)(EDX));
  /* 11b471e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b471e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b471e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b471e7 call 0x11b42d00 */
  push32(0x11b471ecu); f_11b42d00();
  /* 11b471ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b471ef mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11b471f2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b471f6 je 0x11b4720c */
  if (C.zf) goto L_11b4720c;
  /* 11b471f8 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b471fb mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11b47200 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b47204 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b47207 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11b4720c:;
  /* 11b4720c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b4720f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47212 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b47215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47218 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4721b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b4721e jmp 0x11b47198 */
  goto L_11b47198;
L_11b47223:;
  /* 11b47223 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b47226 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47229 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11b4722c jmp 0x11b47169 */
  goto L_11b47169;
L_11b47231:;
  /* 11b47231 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b47235 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b4723a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11b4723e:;
  /* 11b4723e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11b47242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b47244 jle 0x11b4726d */
  if ((C.zf||C.sf!=C.of)) goto L_11b4726d;
  /* 11b47246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47249 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4724f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b47251 jne 0x11b4726d */
  if (!C.zf) goto L_11b4726d;
  /* 11b47253 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b47256 push edx */
  push32((uint32_t)(EDX));
  /* 11b47257 call 0x11b42df0 */
  push32(0x11b4725cu); f_11b42df0();
  /* 11b4725c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4725f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b47263 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b47267 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11b4726b jmp 0x11b4723e */
  goto L_11b4723e;
L_11b4726d:;
  /* 11b4726d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11b47271 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b47273 jg 0x11b472cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11b472cd;
  /* 11b47275 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b47279 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b4727d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11b47281:;
  /* 11b47281 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11b47285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b47287 jge 0x11b472bc */
  if ((C.sf==C.of)) goto L_11b472bc;
  /* 11b47289 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4728c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47292 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b47295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b47297 je 0x11b472a2 */
  if (C.zf) goto L_11b472a2;
  /* 11b47299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4729c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4729f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b472a2:;
  /* 11b472a2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b472a5 push eax */
  push32((uint32_t)(EAX));
  /* 11b472a6 call 0x11b42e50 */
  push32(0x11b472abu); f_11b42e50();
  /* 11b472ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b472ae mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b472b2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b472b6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11b472ba jmp 0x11b47281 */
  goto L_11b47281;
L_11b472bc:;
  /* 11b472bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b472c0 je 0x11b472cd */
  if (C.zf) goto L_11b472cd;
  /* 11b472c2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11b472c6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11b472c9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11b472cd:;
  /* 11b472cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b472d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b472d5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b472da jg 0x11b472ed */
  if ((!C.zf&&C.sf==C.of)) goto L_11b472ed;
  /* 11b472dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b472df and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b472e5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b472eb jne 0x11b4734e */
  if (!C.zf) goto L_11b4734e;
L_11b472ed:;
  /* 11b472ed cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b472f1 jne 0x11b47345 */
  if (!C.zf) goto L_11b47345;
  /* 11b472f3 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11b472fa cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b472fe jne 0x11b4733a */
  if (!C.zf) goto L_11b4733a;
  /* 11b47300 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11b47307 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11b4730a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b47310 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47316 jne 0x11b4732c */
  if (!C.zf) goto L_11b4732c;
  /* 11b47318 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11b4731e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11b47322 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b47326 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11b4732a jmp 0x11b47338 */
  goto L_11b47338;
L_11b4732c:;
  /* 11b4732c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11b47330 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b47334 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11b47338:;
  /* 11b47338 jmp 0x11b47343 */
  goto L_11b47343;
L_11b4733a:;
  /* 11b4733a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11b4733d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47340 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11b47343:;
  /* 11b47343 jmp 0x11b4734e */
  goto L_11b4734e;
L_11b47345:;
  /* 11b47345 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11b47348 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4734b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11b4734e:;
  /* 11b4734e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b47351 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b47357 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4735d jl 0x11b47393 */
  if ((C.sf!=C.of)) goto L_11b47393;
  /* 11b4735f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b47362 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b47368 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4736a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4736c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b47372 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4737b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b4737e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47381 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b47388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4738b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11b47391 jmp 0x11b473c9 */
  goto L_11b473c9;
L_11b47393:;
  /* 11b47393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47396 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11b4739a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11b4739d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b473a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b473a3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11b473a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b473a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b473ac mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11b473af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b473b2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b473b7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b473ba and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b473c0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b473c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b473c5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11b473c9:;
  /* 11b473c9 mov esp, ebp */
  ESP = (EBP);
  /* 11b473cb pop ebp */
  EBP = (pop32());
  /* 11b473cc ret  */
  ESPCHK(0x11b46f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x11b473d0 (195 bytes, 67 insns) */
void f_11b473d0(void) {
  FTRACE(0x11b473d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b473d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b473d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b473d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b473d6 mov eax, 0x11b66f00 */
  EAX = (0x11b66f00u);
  /* 11b473db sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b473de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b473e1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b473e5 jne 0x11b473ec */
  if (!C.zf) goto L_11b473ec;
  /* 11b473e7 jmp 0x11b4748f */
  goto L_11b4748f;
L_11b473ec:;
  /* 11b473ec cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b473f0 jge 0x11b47405 */
  if ((C.sf==C.of)) goto L_11b47405;
  /* 11b473f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b473f5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b473f7 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b473fa mov edx, 0x11b67060 */
  EDX = (0x11b67060u);
  /* 11b473ff sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b47405:;
  /* 11b47405 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47409 jne 0x11b47413 */
  if (!C.zf) goto L_11b47413;
  /* 11b4740b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4740e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11b47413:;
  /* 11b47413 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47417 je 0x11b4748f */
  if (C.zf) goto L_11b4748f;
  /* 11b47419 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4741c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4741f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b47422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47425 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11b47428 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b4742b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4742e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b47431 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b47434 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47438 jne 0x11b4743c */
  if (!C.zf) goto L_11b4743c;
  /* 11b4743a jmp 0x11b47413 */
  goto L_11b47413;
L_11b4743c:;
  /* 11b4743c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b4743f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b47442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47445 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47447 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b4744a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4744d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4744f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11b47452 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47458 jl 0x11b4747d */
  if ((C.sf!=C.of)) goto L_11b4747d;
  /* 11b4745a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4745d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b4745f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b47462 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b47465 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b47468 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b4746b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b4746e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11b47471 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47474 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11b47477 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11b4747a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b4747d:;
  /* 11b4747d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47480 push edx */
  push32((uint32_t)(EDX));
  /* 11b47481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47484 push eax */
  push32((uint32_t)(EAX));
  /* 11b47485 call 0x11b46f90 */
  push32(0x11b4748au); f_11b46f90();
  /* 11b4748a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4748d jmp 0x11b47413 */
  goto L_11b47413;
L_11b4748f:;
  /* 11b4748f mov esp, ebp */
  ESP = (EBP);
  /* 11b47491 pop ebp */
  EBP = (pop32());
  /* 11b47492 ret  */
  ESPCHK(0x11b473d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100174a0 @ 0x11b474a0 (970 bytes, 340 insns) */
void f_11b474a0(void) {
  FTRACE(0x11b474a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b474a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b474a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b474a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b474a5 push 0x11b63c90 */
  push32((uint32_t)(0x11b63c90u));
  /* 11b474aa push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b474af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b474b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b474b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b474bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b474c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b474c1 push esi */
  push32((uint32_t)(ESI));
  /* 11b474c2 push edi */
  push32((uint32_t)(EDI));
  /* 11b474c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b474c6 cmp dword ptr [0x11b67e5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b474cd jne 0x11b47526 */
  if (!C.zf) goto L_11b47526;
  /* 11b474cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b474d1 push 0x11b634c4 */
  push32((uint32_t)(0x11b634c4u));
  /* 11b474d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b474d8 push 0x11b634c4 */
  push32((uint32_t)(0x11b634c4u));
  /* 11b474dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b474df push 0 */
  push32((uint32_t)(0x0u));
  /* 11b474e1 call dword ptr [0x11b6a304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a304))), 0x11b474e7u);
  /* 11b474e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b474e9 je 0x11b474f7 */
  if (C.zf) goto L_11b474f7;
  /* 11b474eb mov dword ptr [0x11b67e5c], 1 */
  w32((uint32_t)(0x11b67e5c), (0x1u));
  /* 11b474f5 jmp 0x11b47526 */
  goto L_11b47526;
L_11b474f7:;
  /* 11b474f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b474f9 push 0x11b634c0 */
  push32((uint32_t)(0x11b634c0u));
  /* 11b474fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11b47500 push 0x11b634c0 */
  push32((uint32_t)(0x11b634c0u));
  /* 11b47505 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b47507 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b47509 call dword ptr [0x11b6a2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2fc))), 0x11b4750fu);
  /* 11b4750f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b47511 je 0x11b4751f */
  if (C.zf) goto L_11b4751f;
  /* 11b47513 mov dword ptr [0x11b67e5c], 2 */
  w32((uint32_t)(0x11b67e5c), (0x2u));
  /* 11b4751d jmp 0x11b47526 */
  goto L_11b47526;
L_11b4751f:;
  /* 11b4751f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47521 jmp 0x11b47884 */
  goto L_11b47884;
L_11b47526:;
  /* 11b47526 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4752a jle 0x11b4753f */
  if ((C.zf||C.sf!=C.of)) goto L_11b4753f;
  /* 11b4752c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4752f push eax */
  push32((uint32_t)(EAX));
  /* 11b47530 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b47533 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47534 call 0x11b478a0 */
  push32(0x11b47539u); f_11b478a0();
  /* 11b47539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4753c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11b4753f:;
  /* 11b4753f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47543 jle 0x11b47558 */
  if ((C.zf||C.sf!=C.of)) goto L_11b47558;
  /* 11b47545 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b47548 push edx */
  push32((uint32_t)(EDX));
  /* 11b47549 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4754c push eax */
  push32((uint32_t)(EAX));
  /* 11b4754d call 0x11b478a0 */
  push32(0x11b47552u); f_11b478a0();
  /* 11b47552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47555 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11b47558:;
  /* 11b47558 cmp dword ptr [0x11b67e5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4755f jne 0x11b47584 */
  if (!C.zf) goto L_11b47584;
  /* 11b47561 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b47564 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47565 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b47568 push edx */
  push32((uint32_t)(EDX));
  /* 11b47569 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4756c push eax */
  push32((uint32_t)(EAX));
  /* 11b4756d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b47570 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47574 push edx */
  push32((uint32_t)(EDX));
  /* 11b47575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47578 push eax */
  push32((uint32_t)(EAX));
  /* 11b47579 call dword ptr [0x11b6a2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2fc))), 0x11b4757fu);
  /* 11b4757f jmp 0x11b47884 */
  goto L_11b47884;
L_11b47584:;
  /* 11b47584 cmp dword ptr [0x11b67e5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4758b jne 0x11b47882 */
  if (!C.zf) goto L_11b47882;
  /* 11b47591 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47595 jne 0x11b475a0 */
  if (!C.zf) goto L_11b475a0;
  /* 11b47597 mov ecx, dword ptr [0x11b67dd8] */
  ECX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b4759d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11b475a0:;
  /* 11b475a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475a4 je 0x11b475b0 */
  if (C.zf) goto L_11b475b0;
  /* 11b475a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475aa jne 0x11b4772c */
  if (!C.zf) goto L_11b4772c;
L_11b475b0:;
  /* 11b475b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b475b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475b6 jne 0x11b475c2 */
  if (!C.zf) goto L_11b475c2;
  /* 11b475b8 mov eax, 2 */
  EAX = (0x2u);
  /* 11b475bd jmp 0x11b47884 */
  goto L_11b47884;
L_11b475c2:;
  /* 11b475c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475c6 jle 0x11b475d2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b475d2;
  /* 11b475c8 mov eax, 1 */
  EAX = (0x1u);
  /* 11b475cd jmp 0x11b47884 */
  goto L_11b47884;
L_11b475d2:;
  /* 11b475d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475d6 jle 0x11b475e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b475e2;
  /* 11b475d8 mov eax, 3 */
  EAX = (0x3u);
  /* 11b475dd jmp 0x11b47884 */
  goto L_11b47884;
L_11b475e2:;
  /* 11b475e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11b475e5 push eax */
  push32((uint32_t)(EAX));
  /* 11b475e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b475e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b475ea call dword ptr [0x11b6a34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a34c))), 0x11b475f0u);
  /* 11b475f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b475f2 jne 0x11b475fb */
  if (!C.zf) goto L_11b475fb;
  /* 11b475f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b475f6 jmp 0x11b47884 */
  goto L_11b47884;
L_11b475fb:;
  /* 11b475fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b475ff jne 0x11b47607 */
  if (!C.zf) goto L_11b47607;
  /* 11b47601 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47605 je 0x11b47634 */
  if (C.zf) goto L_11b47634;
L_11b47607:;
  /* 11b47607 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4760b jne 0x11b47613 */
  if (!C.zf) goto L_11b47613;
  /* 11b4760d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47611 je 0x11b47634 */
  if (C.zf) goto L_11b47634;
L_11b47613:;
  /* 11b47613 push 0x11b63c50 */
  push32((uint32_t)(0x11b63c50u));
  /* 11b47618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4761a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11b4761f push 0x11b63c48 */
  push32((uint32_t)(0x11b63c48u));
  /* 11b47624 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47626 call 0x11b36850 */
  push32(0x11b4762bu); f_11b36850();
  /* 11b4762b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4762e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47631 jne 0x11b47634 */
  if (!C.zf) goto L_11b47634;
  /* 11b47633 int3  */
  x86_unimpl("int3 @ 0x11b47633");
L_11b47634:;
  /* 11b47634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b47636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47638 jne 0x11b475fb */
  if (!C.zf) goto L_11b475fb;
  /* 11b4763a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4763e jle 0x11b476b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11b476b3;
  /* 11b47640 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47644 jae 0x11b47650 */
  if (!C.cf) goto L_11b47650;
  /* 11b47646 mov eax, 3 */
  EAX = (0x3u);
  /* 11b4764b jmp 0x11b47884 */
  goto L_11b47884;
L_11b47650:;
  /* 11b47650 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11b47653 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11b47656 jmp 0x11b47661 */
  goto L_11b47661;
L_11b47658:;
  /* 11b47658 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b4765b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4765e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11b47661:;
  /* 11b47661 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b47664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47666 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b47668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4766a je 0x11b476a9 */
  if (C.zf) goto L_11b476a9;
  /* 11b4766c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b4766f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b47671 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b47674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47676 je 0x11b476a9 */
  if (C.zf) goto L_11b476a9;
  /* 11b47678 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4767b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4767d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b4767f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b47682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47684 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b47686 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47688 jl 0x11b476a7 */
  if ((C.sf!=C.of)) goto L_11b476a7;
  /* 11b4768a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4768d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b4768f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b47691 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b47694 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b47696 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b47699 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4769b jg 0x11b476a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b476a7;
  /* 11b4769d mov eax, 2 */
  EAX = (0x2u);
  /* 11b476a2 jmp 0x11b47884 */
  goto L_11b47884;
L_11b476a7:;
  /* 11b476a7 jmp 0x11b47658 */
  goto L_11b47658;
L_11b476a9:;
  /* 11b476a9 mov eax, 3 */
  EAX = (0x3u);
  /* 11b476ae jmp 0x11b47884 */
  goto L_11b47884;
L_11b476b3:;
  /* 11b476b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b476b7 jle 0x11b4772c */
  if ((C.zf||C.sf!=C.of)) goto L_11b4772c;
  /* 11b476b9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b476bd jae 0x11b476c9 */
  if (!C.cf) goto L_11b476c9;
  /* 11b476bf mov eax, 1 */
  EAX = (0x1u);
  /* 11b476c4 jmp 0x11b47884 */
  goto L_11b47884;
L_11b476c9:;
  /* 11b476c9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11b476cc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11b476cf jmp 0x11b476da */
  goto L_11b476da;
L_11b476d1:;
  /* 11b476d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b476d4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b476d7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11b476da:;
  /* 11b476da mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b476dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b476df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b476e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b476e3 je 0x11b47722 */
  if (C.zf) goto L_11b47722;
  /* 11b476e5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b476e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b476ea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b476ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b476ef je 0x11b47722 */
  if (C.zf) goto L_11b47722;
  /* 11b476f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b476f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b476f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b476f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b476fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b476fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b476ff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47701 jl 0x11b47720 */
  if ((C.sf!=C.of)) goto L_11b47720;
  /* 11b47703 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b47706 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b47708 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b4770a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b4770d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4770f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b47712 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47714 jg 0x11b47720 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b47720;
  /* 11b47716 mov eax, 2 */
  EAX = (0x2u);
  /* 11b4771b jmp 0x11b47884 */
  goto L_11b47884;
L_11b47720:;
  /* 11b47720 jmp 0x11b476d1 */
  goto L_11b476d1;
L_11b47722:;
  /* 11b47722 mov eax, 1 */
  EAX = (0x1u);
  /* 11b47727 jmp 0x11b47884 */
  goto L_11b47884;
L_11b4772c:;
  /* 11b4772c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4772e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b47730 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b47733 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47734 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b47737 push edx */
  push32((uint32_t)(EDX));
  /* 11b47738 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b4773a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b4773d push eax */
  push32((uint32_t)(EAX));
  /* 11b4773e call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b47744u);
  /* 11b47744 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b47747 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4774b jne 0x11b47754 */
  if (!C.zf) goto L_11b47754;
  /* 11b4774d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4774f jmp 0x11b47884 */
  goto L_11b47884;
L_11b47754:;
  /* 11b47754 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4775b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4775e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b47760 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47763 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b47765 call 0x11b3bba0 */
  push32(0x11b4776au); f_11b3bba0();
  /* 11b4776a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11b4776d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b47770 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b47773 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b47776 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4777d jmp 0x11b47796 */
  goto L_11b47796;
  /* 11b4777f mov eax, 1 */
  EAX = (0x1u);
  /* 11b47784 ret  */
  ESPCHK(0x11b474a0u, _esp0);
  ESP += 4; return;
  /* 11b47785 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47788 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b4778f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b47796:;
  /* 11b47796 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4779a jne 0x11b477a3 */
  if (!C.zf) goto L_11b477a3;
  /* 11b4779c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4779e jmp 0x11b47884 */
  goto L_11b47884;
L_11b477a3:;
  /* 11b477a3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b477a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b477a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b477aa push eax */
  push32((uint32_t)(EAX));
  /* 11b477ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b477ae push ecx */
  push32((uint32_t)(ECX));
  /* 11b477af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b477b2 push edx */
  push32((uint32_t)(EDX));
  /* 11b477b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b477b5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b477b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b477b9 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b477bfu);
  /* 11b477bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b477c1 jne 0x11b477ca */
  if (!C.zf) goto L_11b477ca;
  /* 11b477c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b477c5 jmp 0x11b47884 */
  goto L_11b47884;
L_11b477ca:;
  /* 11b477ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b477cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b477ce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b477d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b477d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b477d5 push edx */
  push32((uint32_t)(EDX));
  /* 11b477d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b477d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b477db push eax */
  push32((uint32_t)(EAX));
  /* 11b477dc call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b477e2u);
  /* 11b477e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b477e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b477e9 jne 0x11b477f2 */
  if (!C.zf) goto L_11b477f2;
  /* 11b477eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b477ed jmp 0x11b47884 */
  goto L_11b47884;
L_11b477f2:;
  /* 11b477f2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b477f9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b477fc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b477fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47801 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b47803 call 0x11b3bba0 */
  push32(0x11b47808u); f_11b3bba0();
  /* 11b47808 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11b4780b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b4780e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b47811 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11b47814 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4781b jmp 0x11b47834 */
  goto L_11b47834;
  /* 11b4781d mov eax, 1 */
  EAX = (0x1u);
  /* 11b47822 ret  */
  ESPCHK(0x11b474a0u, _esp0);
  ESP += 4; return;
  /* 11b47823 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47826 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11b4782d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b47834:;
  /* 11b47834 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47838 jne 0x11b4783e */
  if (!C.zf) goto L_11b4783e;
  /* 11b4783a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4783c jmp 0x11b47884 */
  goto L_11b47884;
L_11b4783e:;
  /* 11b4783e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b47841 push edx */
  push32((uint32_t)(EDX));
  /* 11b47842 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b47845 push eax */
  push32((uint32_t)(EAX));
  /* 11b47846 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b47849 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4784a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4784d push edx */
  push32((uint32_t)(EDX));
  /* 11b4784e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b47850 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b47853 push eax */
  push32((uint32_t)(EAX));
  /* 11b47854 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b4785au);
  /* 11b4785a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4785c jne 0x11b47862 */
  if (!C.zf) goto L_11b47862;
  /* 11b4785e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47860 jmp 0x11b47884 */
  goto L_11b47884;
L_11b47862:;
  /* 11b47862 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b47865 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47866 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b47869 push edx */
  push32((uint32_t)(EDX));
  /* 11b4786a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4786d push eax */
  push32((uint32_t)(EAX));
  /* 11b4786e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b47871 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47875 push edx */
  push32((uint32_t)(EDX));
  /* 11b47876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47879 push eax */
  push32((uint32_t)(EAX));
  /* 11b4787a call dword ptr [0x11b6a304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a304))), 0x11b47880u);
  /* 11b47880 jmp 0x11b47884 */
  goto L_11b47884;
L_11b47882:;
  /* 11b47882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b47884:;
  /* 11b47884 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11b47887 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4788a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b47891 pop edi */
  EDI = (pop32());
  /* 11b47892 pop esi */
  ESI = (pop32());
  /* 11b47893 pop ebx */
  EBX = (pop32());
  /* 11b47894 mov esp, ebp */
  ESP = (EBP);
  /* 11b47896 pop ebp */
  EBP = (pop32());
  /* 11b47897 ret  */
  ESPCHK(0x11b474a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178a0 @ 0x11b478a0 (80 bytes, 32 insns) */
void f_11b478a0(void) {
  FTRACE(0x11b478a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b478a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b478a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b478a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b478a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b478a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b478ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b478af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b478b2:;
  /* 11b478b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b478b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b478b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b478bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b478be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b478c0 je 0x11b478d7 */
  if (C.zf) goto L_11b478d7;
  /* 11b478c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b478c5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b478c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b478ca je 0x11b478d7 */
  if (C.zf) goto L_11b478d7;
  /* 11b478cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b478cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b478d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b478d5 jmp 0x11b478b2 */
  goto L_11b478b2;
L_11b478d7:;
  /* 11b478d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b478da movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b478dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b478df jne 0x11b478e9 */
  if (!C.zf) goto L_11b478e9;
  /* 11b478e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b478e4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b478e7 jmp 0x11b478ec */
  goto L_11b478ec;
L_11b478e9:;
  /* 11b478e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b478ec:;
  /* 11b478ec mov esp, ebp */
  ESP = (EBP);
  /* 11b478ee pop ebp */
  EBP = (pop32());
  /* 11b478ef ret  */
  ESPCHK(0x11b478a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178f0 @ 0x11b478f0 (736 bytes, 224 insns) */
void f_11b478f0(void) {
  FTRACE(0x11b478f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b478f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b478f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b478f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b478f6 push esi */
  push32((uint32_t)(ESI));
  /* 11b478f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b478fb je 0x11b4791c */
  if (C.zf) goto L_11b4791c;
  /* 11b478fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b478ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47902 push eax */
  push32((uint32_t)(EAX));
  /* 11b47903 call 0x11b4a200 */
  push32(0x11b47908u); f_11b4a200();
  /* 11b47908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4790b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b4790e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47912 je 0x11b4791c */
  if (C.zf) goto L_11b4791c;
  /* 11b47914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47917 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4791a jne 0x11b47924 */
  if (!C.zf) goto L_11b47924;
L_11b4791c:;
  /* 11b4791c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4791f jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47924:;
  /* 11b47924 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47927 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b4792b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4792d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4792f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b47930 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b47933 mov ecx, dword ptr [0x11b67b30] */
  ECX = (r32((uint32_t)(0x11b67b30)));
  /* 11b47939 cmp ecx, dword ptr [0x11b67b34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b67b34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4793f jne 0x11b47955 */
  if (!C.zf) goto L_11b47955;
  /* 11b47941 mov edx, dword ptr [0x11b67b30] */
  EDX = (r32((uint32_t)(0x11b67b30)));
  /* 11b47947 push edx */
  push32((uint32_t)(EDX));
  /* 11b47948 call 0x11b47c50 */
  push32(0x11b4794du); f_11b47c50();
  /* 11b4794d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47950 mov dword ptr [0x11b67b30], eax */
  w32((uint32_t)(0x11b67b30), (EAX));
L_11b47955:;
  /* 11b47955 cmp dword ptr [0x11b67b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4795c jne 0x11b47a15 */
  if (!C.zf) goto L_11b47a15;
  /* 11b47962 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47966 je 0x11b47987 */
  if (C.zf) goto L_11b47987;
  /* 11b47968 cmp dword ptr [0x11b67b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4796f je 0x11b47987 */
  if (C.zf) goto L_11b47987;
  /* 11b47971 call 0x11b44130 */
  push32(0x11b47976u); f_11b44130();
  /* 11b47976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b47978 je 0x11b47982 */
  if (C.zf) goto L_11b47982;
  /* 11b4797a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4797d jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47982:;
  /* 11b47982 jmp 0x11b47a15 */
  goto L_11b47a15;
L_11b47987:;
  /* 11b47987 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4798b je 0x11b47994 */
  if (C.zf) goto L_11b47994;
  /* 11b4798d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4798f jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47994:;
  /* 11b47994 cmp dword ptr [0x11b67b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4799b jne 0x11b479d4 */
  if (!C.zf) goto L_11b479d4;
  /* 11b4799d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11b479a2 push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b479a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b479a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b479ab call 0x11b37ce0 */
  push32(0x11b479b0u); f_11b37ce0();
  /* 11b479b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b479b3 mov dword ptr [0x11b67b30], eax */
  w32((uint32_t)(0x11b67b30), (EAX));
  /* 11b479b8 cmp dword ptr [0x11b67b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b479bf jne 0x11b479c9 */
  if (!C.zf) goto L_11b479c9;
  /* 11b479c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b479c4 jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b479c9:;
  /* 11b479c9 mov eax, dword ptr [0x11b67b30] */
  EAX = (r32((uint32_t)(0x11b67b30)));
  /* 11b479ce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11b479d4:;
  /* 11b479d4 cmp dword ptr [0x11b67b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b479db jne 0x11b47a15 */
  if (!C.zf) goto L_11b47a15;
  /* 11b479dd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11b479e2 push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b479e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b479e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b479eb call 0x11b37ce0 */
  push32(0x11b479f0u); f_11b37ce0();
  /* 11b479f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b479f3 mov dword ptr [0x11b67b38], eax */
  w32((uint32_t)(0x11b67b38), (EAX));
  /* 11b479f8 cmp dword ptr [0x11b67b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b479ff jne 0x11b47a09 */
  if (!C.zf) goto L_11b47a09;
  /* 11b47a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b47a04 jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47a09:;
  /* 11b47a09 mov ecx, dword ptr [0x11b67b38] */
  ECX = (r32((uint32_t)(0x11b67b38)));
  /* 11b47a0f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11b47a15:;
  /* 11b47a15 mov edx, dword ptr [0x11b67b30] */
  EDX = (r32((uint32_t)(0x11b67b30)));
  /* 11b47a1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b47a1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47a21 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47a24 push eax */
  push32((uint32_t)(EAX));
  /* 11b47a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47a28 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47a29 call 0x11b47bd0 */
  push32(0x11b47a2eu); f_11b47bd0();
  /* 11b47a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47a31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b47a34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47a38 jl 0x11b47ad1 */
  if ((C.sf!=C.of)) goto L_11b47ad1;
  /* 11b47a3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47a41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47a44 je 0x11b47ad1 */
  if (C.zf) goto L_11b47ad1;
  /* 11b47a4a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47a4e je 0x11b47ac3 */
  if (C.zf) goto L_11b47ac3;
  /* 11b47a50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47a58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b47a5b push edx */
  push32((uint32_t)(EDX));
  /* 11b47a5c call 0x11b38770 */
  push32(0x11b47a61u); f_11b38770();
  /* 11b47a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47a64 jmp 0x11b47a6f */
  goto L_11b47a6f;
L_11b47a66:;
  /* 11b47a66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47a6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b47a6f:;
  /* 11b47a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47a75 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47a79 je 0x11b47a90 */
  if (C.zf) goto L_11b47a90;
  /* 11b47a7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47a81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47a87 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11b47a8b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11b47a8e jmp 0x11b47a66 */
  goto L_11b47a66;
L_11b47a90:;
  /* 11b47a90 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11b47a95 push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b47a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47a9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47a9f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b47aa2 push eax */
  push32((uint32_t)(EAX));
  /* 11b47aa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47aa7 call 0x11b38170 */
  push32(0x11b47aacu); f_11b38170();
  /* 11b47aac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47aaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b47ab2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47ab6 je 0x11b47ac1 */
  if (C.zf) goto L_11b47ac1;
  /* 11b47ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47abb mov dword ptr [0x11b67b30], edx */
  w32((uint32_t)(0x11b67b30), (EDX));
L_11b47ac1:;
  /* 11b47ac1 jmp 0x11b47acf */
  goto L_11b47acf;
L_11b47ac3:;
  /* 11b47ac3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47ac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47acc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11b47acf:;
  /* 11b47acf jmp 0x11b47b44 */
  goto L_11b47b44;
L_11b47ad1:;
  /* 11b47ad1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47ad5 jne 0x11b47b3d */
  if (!C.zf) goto L_11b47b3d;
  /* 11b47ad7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47adb jge 0x11b47ae5 */
  if ((C.sf==C.of)) goto L_11b47ae5;
  /* 11b47add mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47ae0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b47ae2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b47ae5:;
  /* 11b47ae5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11b47aea push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b47aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47af1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47af4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11b47afb push edx */
  push32((uint32_t)(EDX));
  /* 11b47afc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47aff push eax */
  push32((uint32_t)(EAX));
  /* 11b47b00 call 0x11b38170 */
  push32(0x11b47b05u); f_11b38170();
  /* 11b47b05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b08 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b47b0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47b0f jne 0x11b47b19 */
  if (!C.zf) goto L_11b47b19;
  /* 11b47b11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b47b14 jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47b19:;
  /* 11b47b19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47b1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47b22 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11b47b25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47b28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47b2b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11b47b33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47b36 mov dword ptr [0x11b67b30], eax */
  w32((uint32_t)(0x11b67b30), (EAX));
  /* 11b47b3b jmp 0x11b47b44 */
  goto L_11b47b44;
L_11b47b3d:;
  /* 11b47b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47b3f jmp 0x11b47bcb */
  goto L_11b47bcb;
L_11b47b44:;
  /* 11b47b44 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47b48 je 0x11b47bc9 */
  if (C.zf) goto L_11b47bc9;
  /* 11b47b4a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11b47b4f push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b47b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47b56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47b5a call 0x11b3b830 */
  push32(0x11b47b5fu); f_11b3b830();
  /* 11b47b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b62 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b65 push eax */
  push32((uint32_t)(EAX));
  /* 11b47b66 call 0x11b37ce0 */
  push32(0x11b47b6bu); f_11b37ce0();
  /* 11b47b6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b6e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b47b71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47b75 je 0x11b47bc9 */
  if (C.zf) goto L_11b47bc9;
  /* 11b47b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47b7a push edx */
  push32((uint32_t)(EDX));
  /* 11b47b7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47b7e push eax */
  push32((uint32_t)(EAX));
  /* 11b47b7f call 0x11b3b9b0 */
  push32(0x11b47b84u); f_11b3b9b0();
  /* 11b47b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b47b8a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47b8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47b90 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47b92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b47b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47b98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b47b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47ba1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b47ba4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b47ba7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b47ba9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47bab not edx */
  EDX = (~(EDX));
  /* 11b47bad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11b47bb0 push edx */
  push32((uint32_t)(EDX));
  /* 11b47bb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11b47bb5 call dword ptr [0x11b6a2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f4))), 0x11b47bbbu);
  /* 11b47bbb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47bbd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47bc1 call 0x11b38770 */
  push32(0x11b47bc6u); f_11b38770();
  /* 11b47bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b47bc9:;
  /* 11b47bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b47bcb:;
  /* 11b47bcb pop esi */
  ESI = (pop32());
  /* 11b47bcc mov esp, ebp */
  ESP = (EBP);
  /* 11b47bce pop ebp */
  EBP = (pop32());
  /* 11b47bcf ret  */
  ESPCHK(0x11b478f0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11b47bd0 (124 bytes, 47 insns) */
void f_11b47bd0(void) {
  FTRACE(0x11b47bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b47bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b47bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b47bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47bd4 mov eax, dword ptr [0x11b67b30] */
  EAX = (r32((uint32_t)(0x11b67b30)));
  /* 11b47bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b47bdc jmp 0x11b47be7 */
  goto L_11b47be7;
L_11b47bde:;
  /* 11b47bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47be1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47be4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b47be7:;
  /* 11b47be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47bea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47bed je 0x11b47c3a */
  if (C.zf) goto L_11b47c3a;
  /* 11b47bef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11b47bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47bf6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b47bf8 push edx */
  push32((uint32_t)(EDX));
  /* 11b47bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47bfc push eax */
  push32((uint32_t)(EAX));
  /* 11b47bfd call 0x11b440e0 */
  push32(0x11b47c02u); f_11b440e0();
  /* 11b47c02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b47c07 jne 0x11b47c38 */
  if (!C.zf) goto L_11b47c38;
  /* 11b47c09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47c0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b47c0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47c11 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11b47c15 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47c18 je 0x11b47c2a */
  if (C.zf) goto L_11b47c2a;
  /* 11b47c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47c1d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b47c1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47c22 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11b47c26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47c28 jne 0x11b47c38 */
  if (!C.zf) goto L_11b47c38;
L_11b47c2a:;
  /* 11b47c2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47c2d sub eax, dword ptr [0x11b67b30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67b30))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47c33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b47c36 jmp 0x11b47c48 */
  goto L_11b47c48;
L_11b47c38:;
  /* 11b47c38 jmp 0x11b47bde */
  goto L_11b47bde;
L_11b47c3a:;
  /* 11b47c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47c3d sub eax, dword ptr [0x11b67b30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67b30))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47c43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b47c46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11b47c48:;
  /* 11b47c48 mov esp, ebp */
  ESP = (EBP);
  /* 11b47c4a pop ebp */
  EBP = (pop32());
  /* 11b47c4b ret  */
  ESPCHK(0x11b47bd0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11b47c50 (238 bytes, 80 insns) */
void f_11b47c50(void) {
  FTRACE(0x11b47c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b47c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b47c51 mov ebp, esp */
  EBP = (ESP);
  /* 11b47c53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47c56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b47c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47c60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b47c63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47c67 jne 0x11b47c70 */
  if (!C.zf) goto L_11b47c70;
  /* 11b47c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47c6b jmp 0x11b47d3a */
  goto L_11b47d3a;
L_11b47c70:;
  /* 11b47c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47c73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b47c75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47c78 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47c7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b47c7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47c80 je 0x11b47c8d */
  if (C.zf) goto L_11b47c8d;
  /* 11b47c82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47c88 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b47c8b jmp 0x11b47c70 */
  goto L_11b47c70;
L_11b47c8d:;
  /* 11b47c8d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11b47c92 push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b47c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47c99 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b47c9c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11b47ca3 push eax */
  push32((uint32_t)(EAX));
  /* 11b47ca4 call 0x11b37ce0 */
  push32(0x11b47ca9u); f_11b37ce0();
  /* 11b47ca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47cac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b47caf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47cb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b47cb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47cb9 jne 0x11b47cc5 */
  if (!C.zf) goto L_11b47cc5;
  /* 11b47cbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11b47cbd call 0x11b36360 */
  push32(0x11b47cc2u); f_11b36360();
  /* 11b47cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b47cc5:;
  /* 11b47cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47cc8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b47ccb:;
  /* 11b47ccb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47cce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47cd1 je 0x11b47d2e */
  if (C.zf) goto L_11b47d2e;
  /* 11b47cd3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11b47cd8 push 0x11b63ca8 */
  push32((uint32_t)(0x11b63ca8u));
  /* 11b47cdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47cdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47ce2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b47ce4 push edx */
  push32((uint32_t)(EDX));
  /* 11b47ce5 call 0x11b3b830 */
  push32(0x11b47ceau); f_11b3b830();
  /* 11b47cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47ced add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11b47cf1 call 0x11b37ce0 */
  push32(0x11b47cf6u); f_11b37ce0();
  /* 11b47cf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47cf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47cfc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b47cfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47d01 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47d04 je 0x11b47d1a */
  if (C.zf) goto L_11b47d1a;
  /* 11b47d06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47d09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b47d0b push ecx */
  push32((uint32_t)(ECX));
  /* 11b47d0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47d0f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b47d11 push eax */
  push32((uint32_t)(EAX));
  /* 11b47d12 call 0x11b3b9b0 */
  push32(0x11b47d17u); f_11b3b9b0();
  /* 11b47d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b47d1a:;
  /* 11b47d1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47d1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47d20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b47d23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47d26 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47d29 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b47d2c jmp 0x11b47ccb */
  goto L_11b47ccb;
L_11b47d2e:;
  /* 11b47d2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47d31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b47d37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b47d3a:;
  /* 11b47d3a mov esp, ebp */
  ESP = (EBP);
  /* 11b47d3c pop ebp */
  EBP = (pop32());
  /* 11b47d3d ret  */
  ESPCHK(0x11b47c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d40 @ 0x11b47d40 (482 bytes, 138 insns) */
void f_11b47d40(void) {
  FTRACE(0x11b47d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b47d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b47d41 mov ebp, esp */
  EBP = (ESP);
  /* 11b47d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47d46 push esi */
  push32((uint32_t)(ESI));
  /* 11b47d47 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11b47d4e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b47d50 call 0x11b3a900 */
  push32(0x11b47d55u); f_11b3a900();
  /* 11b47d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47d58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b47d5f jmp 0x11b47d6a */
  goto L_11b47d6a;
L_11b47d61:;
  /* 11b47d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47d67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b47d6a:;
  /* 11b47d6a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47d6e jge 0x11b47f10 */
  if ((C.sf==C.of)) goto L_11b47f10;
  /* 11b47d74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47d77 cmp dword ptr [ecx*4 + 0x11b694e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11b694e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47d7f je 0x11b47e76 */
  if (C.zf) goto L_11b47e76;
  /* 11b47d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47d88 mov eax, dword ptr [edx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b47d8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b47d92 jmp 0x11b47d9d */
  goto L_11b47d9d;
L_11b47d94:;
  /* 11b47d94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47d97 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47d9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b47d9d:;
  /* 11b47d9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47da0 mov eax, dword ptr [edx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b47da7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47dac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47daf jae 0x11b47e66 */
  if (!C.cf) goto L_11b47e66;
  /* 11b47db5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47db8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b47dbc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b47dbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47dc1 jne 0x11b47e61 */
  if (!C.zf) goto L_11b47e61;
  /* 11b47dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47dca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47dce jne 0x11b47e09 */
  if (!C.zf) goto L_11b47e09;
  /* 11b47dd0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b47dd2 call 0x11b3a900 */
  push32(0x11b47dd7u); f_11b3a900();
  /* 11b47dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47ddd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47de1 jne 0x11b47dff */
  if (!C.zf) goto L_11b47dff;
  /* 11b47de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47de6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47de9 push edx */
  push32((uint32_t)(EDX));
  /* 11b47dea call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b47df0u);
  /* 11b47df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47df3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b47df6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47dfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11b47dff:;
  /* 11b47dff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b47e01 call 0x11b3a9a0 */
  push32(0x11b47e06u); f_11b3a9a0();
  /* 11b47e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b47e09:;
  /* 11b47e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47e0f push eax */
  push32((uint32_t)(EAX));
  /* 11b47e10 call dword ptr [0x11b6a360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a360))), 0x11b47e16u);
  /* 11b47e16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e19 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b47e1d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b47e20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b47e22 je 0x11b47e36 */
  if (C.zf) goto L_11b47e36;
  /* 11b47e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47e2a push eax */
  push32((uint32_t)(EAX));
  /* 11b47e2b call dword ptr [0x11b6a35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a35c))), 0x11b47e31u);
  /* 11b47e31 jmp 0x11b47d94 */
  goto L_11b47d94;
L_11b47e36:;
  /* 11b47e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e39 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b47e3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47e42 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b47e45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47e48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e4b sub eax, dword ptr [edx*4 + 0x11b694e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11b694e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b47e52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b47e53 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11b47e58 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b47e5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47e5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b47e5f jmp 0x11b47e66 */
  goto L_11b47e66;
L_11b47e61:;
  /* 11b47e61 jmp 0x11b47d94 */
  goto L_11b47d94;
L_11b47e66:;
  /* 11b47e66 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47e6a je 0x11b47e71 */
  if (C.zf) goto L_11b47e71;
  /* 11b47e6c jmp 0x11b47f10 */
  goto L_11b47f10;
L_11b47e71:;
  /* 11b47e71 jmp 0x11b47f0b */
  goto L_11b47f0b;
L_11b47e76:;
  /* 11b47e76 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11b47e78 push 0x11b63cb4 */
  push32((uint32_t)(0x11b63cb4u));
  /* 11b47e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b47e7f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b47e84 call 0x11b37ce0 */
  push32(0x11b47e89u); f_11b37ce0();
  /* 11b47e89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b47e8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47e93 je 0x11b47f09 */
  if (C.zf) goto L_11b47f09;
  /* 11b47e95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47e98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47e9b mov dword ptr [eax*4 + 0x11b694e0], ecx */
  w32((uint32_t)(EAX*4 + 0x11b694e0), (ECX));
  /* 11b47ea2 mov edx, dword ptr [0x11b6961c] */
  EDX = (r32((uint32_t)(0x11b6961c)));
  /* 11b47ea8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47eab mov dword ptr [0x11b6961c], edx */
  w32((uint32_t)(0x11b6961c), (EDX));
  /* 11b47eb1 jmp 0x11b47ebc */
  goto L_11b47ebc;
L_11b47eb3:;
  /* 11b47eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47eb6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47eb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b47ebc:;
  /* 11b47ebc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47ebf mov edx, dword ptr [ecx*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b47ec6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47ecc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47ecf jae 0x11b47ef4 */
  if (!C.cf) goto L_11b47ef4;
  /* 11b47ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47ed4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b47ed8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47edb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b47ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47ee4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11b47ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b47eeb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b47ef2 jmp 0x11b47eb3 */
  goto L_11b47eb3;
L_11b47ef4:;
  /* 11b47ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b47ef7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b47efa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b47efd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47f00 push edx */
  push32((uint32_t)(EDX));
  /* 11b47f01 call 0x11b48250 */
  push32(0x11b47f06u); f_11b48250();
  /* 11b47f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b47f09:;
  /* 11b47f09 jmp 0x11b47f10 */
  goto L_11b47f10;
L_11b47f0b:;
  /* 11b47f0b jmp 0x11b47d61 */
  goto L_11b47d61;
L_11b47f10:;
  /* 11b47f10 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b47f12 call 0x11b3a9a0 */
  push32(0x11b47f17u); f_11b3a9a0();
  /* 11b47f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b47f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b47f1d pop esi */
  ESI = (pop32());
  /* 11b47f1e mov esp, ebp */
  ESP = (EBP);
  /* 11b47f20 pop ebp */
  EBP = (pop32());
  /* 11b47f21 ret  */
  ESPCHK(0x11b47d40u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11b47f30 (183 bytes, 57 insns) */
void f_11b47f30(void) {
  FTRACE(0x11b47f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b47f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b47f31 mov ebp, esp */
  EBP = (ESP);
  /* 11b47f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47f37 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f3d jae 0x11b47fca */
  if (!C.cf) goto L_11b47fca;
  /* 11b47f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47f46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b47f49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47f4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b47f4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b47f52 mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b47f59 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f5d jne 0x11b47fca */
  if (!C.zf) goto L_11b47fca;
  /* 11b47f5f cmp dword ptr [0x11b67b08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f66 jne 0x11b47faa */
  if (!C.zf) goto L_11b47faa;
  /* 11b47f68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47f6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b47f6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f72 je 0x11b47f82 */
  if (C.zf) goto L_11b47f82;
  /* 11b47f74 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f78 je 0x11b47f90 */
  if (C.zf) goto L_11b47f90;
  /* 11b47f7a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47f7e je 0x11b47f9e */
  if (C.zf) goto L_11b47f9e;
  /* 11b47f80 jmp 0x11b47faa */
  goto L_11b47faa;
L_11b47f82:;
  /* 11b47f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47f85 push edx */
  push32((uint32_t)(EDX));
  /* 11b47f86 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11b47f88 call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b47f8eu);
  /* 11b47f8e jmp 0x11b47faa */
  goto L_11b47faa;
L_11b47f90:;
  /* 11b47f90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47f93 push eax */
  push32((uint32_t)(EAX));
  /* 11b47f94 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11b47f96 call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b47f9cu);
  /* 11b47f9c jmp 0x11b47faa */
  goto L_11b47faa;
L_11b47f9e:;
  /* 11b47f9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47fa2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b47fa4 call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b47faau);
L_11b47faa:;
  /* 11b47faa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47fad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b47fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47fb3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b47fb6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b47fb9 mov ecx, dword ptr [edx*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b47fc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b47fc3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11b47fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b47fc8 jmp 0x11b47fe3 */
  goto L_11b47fe3;
L_11b47fca:;
  /* 11b47fca call 0x11b41d70 */
  push32(0x11b47fcfu); f_11b41d70();
  /* 11b47fcf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b47fd5 call 0x11b41d80 */
  push32(0x11b47fdau); f_11b41d80();
  /* 11b47fda mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b47fe0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b47fe3:;
  /* 11b47fe3 mov esp, ebp */
  ESP = (EBP);
  /* 11b47fe5 pop ebp */
  EBP = (pop32());
  /* 11b47fe6 ret  */
  ESPCHK(0x11b47f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ff0 @ 0x11b47ff0 (216 bytes, 63 insns) */
void f_11b47ff0(void) {
  FTRACE(0x11b47ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b47ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b47ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11b47ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b47ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b47ff7 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b47ffd jae 0x11b480ab */
  if (!C.cf) goto L_11b480ab;
  /* 11b48003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48006 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b48009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4800c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4800f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b48012 mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b48019 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4801e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b48021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b48023 je 0x11b480ab */
  if (C.zf) goto L_11b480ab;
  /* 11b48029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4802c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b4802f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48032 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b48035 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b48038 mov ecx, dword ptr [edx*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b4803f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48043 je 0x11b480ab */
  if (C.zf) goto L_11b480ab;
  /* 11b48045 cmp dword ptr [0x11b67b08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4804c jne 0x11b4808a */
  if (!C.zf) goto L_11b4808a;
  /* 11b4804e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48051 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b48054 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48058 je 0x11b48068 */
  if (C.zf) goto L_11b48068;
  /* 11b4805a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4805e je 0x11b48074 */
  if (C.zf) goto L_11b48074;
  /* 11b48060 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48064 je 0x11b48080 */
  if (C.zf) goto L_11b48080;
  /* 11b48066 jmp 0x11b4808a */
  goto L_11b4808a;
L_11b48068:;
  /* 11b48068 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4806a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11b4806c call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b48072u);
  /* 11b48072 jmp 0x11b4808a */
  goto L_11b4808a;
L_11b48074:;
  /* 11b48074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b48076 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11b48078 call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b4807eu);
  /* 11b4807e jmp 0x11b4808a */
  goto L_11b4808a;
L_11b48080:;
  /* 11b48080 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b48082 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b48084 call dword ptr [0x11b6a2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f0))), 0x11b4808au);
L_11b4808a:;
  /* 11b4808a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4808d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b48090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48093 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b48096 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b48099 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b480a0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11b480a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b480a9 jmp 0x11b480c4 */
  goto L_11b480c4;
L_11b480ab:;
  /* 11b480ab call 0x11b41d70 */
  push32(0x11b480b0u); f_11b41d70();
  /* 11b480b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b480b6 call 0x11b41d80 */
  push32(0x11b480bbu); f_11b41d80();
  /* 11b480bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b480c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b480c4:;
  /* 11b480c4 mov esp, ebp */
  ESP = (EBP);
  /* 11b480c6 pop ebp */
  EBP = (pop32());
  /* 11b480c7 ret  */
  ESPCHK(0x11b47ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100180d0 @ 0x11b480d0 (102 bytes, 30 insns) */
void f_11b480d0(void) {
  FTRACE(0x11b480d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b480d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b480d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b480d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b480d6 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b480dc jae 0x11b4811b */
  if (!C.cf) goto L_11b4811b;
  /* 11b480de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b480e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b480e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b480e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b480ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b480ed mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b480f4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b480f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b480fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b480fe je 0x11b4811b */
  if (C.zf) goto L_11b4811b;
  /* 11b48100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48103 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b48106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48109 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4810c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4810f mov ecx, dword ptr [edx*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b48116 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11b48119 jmp 0x11b48134 */
  goto L_11b48134;
L_11b4811b:;
  /* 11b4811b call 0x11b41d70 */
  push32(0x11b48120u); f_11b41d70();
  /* 11b48120 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b48126 call 0x11b41d80 */
  push32(0x11b4812bu); f_11b41d80();
  /* 11b4812b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b48131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b48134:;
  /* 11b48134 pop ebp */
  EBP = (pop32());
  /* 11b48135 ret  */
  ESPCHK(0x11b480d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018140 @ 0x11b48140 (260 bytes, 83 insns) */
void f_11b48140(void) {
  FTRACE(0x11b48140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48140 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48141 mov ebp, esp */
  EBP = (ESP);
  /* 11b48143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48146 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b4814a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4814d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b48150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b48152 je 0x11b4815d */
  if (C.zf) goto L_11b4815d;
  /* 11b48154 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b48157 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b4815a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11b4815d:;
  /* 11b4815d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48160 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b48166 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b48168 je 0x11b48172 */
  if (C.zf) goto L_11b48172;
  /* 11b4816a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b4816d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11b4816f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11b48172:;
  /* 11b48172 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48175 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4817b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4817d je 0x11b48188 */
  if (C.zf) goto L_11b48188;
  /* 11b4817f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b48182 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11b48185 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11b48188:;
  /* 11b48188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4818b push eax */
  push32((uint32_t)(EAX));
  /* 11b4818c call dword ptr [0x11b6a408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a408))), 0x11b48192u);
  /* 11b48192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b48195 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48199 jne 0x11b481b2 */
  if (!C.zf) goto L_11b481b2;
  /* 11b4819b call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b481a1u);
  /* 11b481a1 push eax */
  push32((uint32_t)(EAX));
  /* 11b481a2 call 0x11b41cd0 */
  push32(0x11b481a7u); f_11b41cd0();
  /* 11b481a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b481aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b481ad jmp 0x11b48240 */
  goto L_11b48240;
L_11b481b2:;
  /* 11b481b2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b481b6 jne 0x11b481c3 */
  if (!C.zf) goto L_11b481c3;
  /* 11b481b8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b481bb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11b481be mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11b481c1 jmp 0x11b481d2 */
  goto L_11b481d2;
L_11b481c3:;
  /* 11b481c3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b481c7 jne 0x11b481d2 */
  if (!C.zf) goto L_11b481d2;
  /* 11b481c9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b481cc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11b481cf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11b481d2:;
  /* 11b481d2 call 0x11b47d40 */
  push32(0x11b481d7u); f_11b47d40();
  /* 11b481d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b481da cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b481de jne 0x11b481fb */
  if (!C.zf) goto L_11b481fb;
  /* 11b481e0 call 0x11b41d70 */
  push32(0x11b481e5u); f_11b41d70();
  /* 11b481e5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11b481eb call 0x11b41d80 */
  push32(0x11b481f0u); f_11b41d80();
  /* 11b481f0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b481f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b481f9 jmp 0x11b48240 */
  goto L_11b48240;
L_11b481fb:;
  /* 11b481fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b481fe push eax */
  push32((uint32_t)(EAX));
  /* 11b481ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48202 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48203 call 0x11b47f30 */
  push32(0x11b48208u); f_11b47f30();
  /* 11b48208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4820b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b4820e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11b48211 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11b48214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48217 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b4821a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4821d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b48220 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b48223 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b4822a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b4822d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11b48231 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48234 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48235 call 0x11b482e0 */
  push32(0x11b4823au); f_11b482e0();
  /* 11b4823a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4823d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b48240:;
  /* 11b48240 mov esp, ebp */
  ESP = (EBP);
  /* 11b48242 pop ebp */
  EBP = (pop32());
  /* 11b48243 ret  */
  ESPCHK(0x11b48140u, _esp0);
  ESP += 4; return;
}

/* FUN_10018250 @ 0x11b48250 (134 bytes, 44 insns) */
void f_11b48250(void) {
  FTRACE(0x11b48250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48250 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48251 mov ebp, esp */
  EBP = (ESP);
  /* 11b48253 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48257 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b4825a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4825d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b48260 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b48263 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b4826a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4826c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4826f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48272 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48276 jne 0x11b482b1 */
  if (!C.zf) goto L_11b482b1;
  /* 11b48278 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b4827a call 0x11b3a900 */
  push32(0x11b4827fu); f_11b3a900();
  /* 11b4827f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48285 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48289 jne 0x11b482a7 */
  if (!C.zf) goto L_11b482a7;
  /* 11b4828b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4828e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48291 push edx */
  push32((uint32_t)(EDX));
  /* 11b48292 call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b48298u);
  /* 11b48298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4829b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b4829e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b482a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b482a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11b482a7:;
  /* 11b482a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b482a9 call 0x11b3a9a0 */
  push32(0x11b482aeu); f_11b3a9a0();
  /* 11b482ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b482b1:;
  /* 11b482b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b482b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b482b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b482ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b482bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b482c0 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b482c7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11b482cb push eax */
  push32((uint32_t)(EAX));
  /* 11b482cc call dword ptr [0x11b6a360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a360))), 0x11b482d2u);
  /* 11b482d2 mov esp, ebp */
  ESP = (EBP);
  /* 11b482d4 pop ebp */
  EBP = (pop32());
  /* 11b482d5 ret  */
  ESPCHK(0x11b48250u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11b482e0 (38 bytes, 13 insns) */
void f_11b482e0(void) {
  FTRACE(0x11b482e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b482e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b482e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b482e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b482e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b482e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b482ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b482ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b482f2 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b482f9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11b482fd push eax */
  push32((uint32_t)(EAX));
  /* 11b482fe call dword ptr [0x11b6a35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a35c))), 0x11b48304u);
  /* 11b48304 pop ebp */
  EBP = (pop32());
  /* 11b48305 ret  */
  ESPCHK(0x11b482e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018310 @ 0x11b48310 (218 bytes, 63 insns) */
void f_11b48310(void) {
  FTRACE(0x11b48310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48310 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48311 mov ebp, esp */
  EBP = (ESP);
  /* 11b48313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48316 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4831d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4831f call 0x11b3a900 */
  push32(0x11b48324u); f_11b3a900();
  /* 11b48324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48327 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11b4832e jmp 0x11b48339 */
  goto L_11b48339;
L_11b48330:;
  /* 11b48330 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48333 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48336 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b48339:;
  /* 11b48339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4833c cmp ecx, dword ptr [0x11b691e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b691e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48342 jge 0x11b483d9 */
  if ((C.sf==C.of)) goto L_11b483d9;
  /* 11b48348 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4834b mov eax, dword ptr [0x11b67e8c] */
  EAX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b48350 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48354 je 0x11b483d4 */
  if (C.zf) goto L_11b483d4;
  /* 11b48356 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48359 mov edx, dword ptr [0x11b67e8c] */
  EDX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b4835f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b48362 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b48365 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4836b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4836d je 0x11b48391 */
  if (C.zf) goto L_11b48391;
  /* 11b4836f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48372 mov eax, dword ptr [0x11b67e8c] */
  EAX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b48377 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b4837a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4837b call 0x11b4a2f0 */
  push32(0x11b48380u); f_11b4a2f0();
  /* 11b48380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48383 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48386 je 0x11b48391 */
  if (C.zf) goto L_11b48391;
  /* 11b48388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4838b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4838e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b48391:;
  /* 11b48391 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48395 jl 0x11b483d4 */
  if ((C.sf!=C.of)) goto L_11b483d4;
  /* 11b48397 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4839a mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b483a0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b483a3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b483a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b483a7 call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b483adu);
  /* 11b483ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11b483af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b483b2 mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b483b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b483bb push edx */
  push32((uint32_t)(EDX));
  /* 11b483bc call 0x11b38770 */
  push32(0x11b483c1u); f_11b38770();
  /* 11b483c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b483c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b483c7 mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b483cd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11b483d4:;
  /* 11b483d4 jmp 0x11b48330 */
  goto L_11b48330;
L_11b483d9:;
  /* 11b483d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b483db call 0x11b3a9a0 */
  push32(0x11b483e0u); f_11b3a9a0();
  /* 11b483e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b483e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b483e6 mov esp, ebp */
  ESP = (EBP);
  /* 11b483e8 pop ebp */
  EBP = (pop32());
  /* 11b483e9 ret  */
  ESPCHK(0x11b48310u, _esp0);
  ESP += 4; return;
}

/* FUN_100183f0 @ 0x11b483f0 (68 bytes, 26 insns) */
void f_11b483f0(void) {
  FTRACE(0x11b483f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b483f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b483f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b483f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b483f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b483f8 jne 0x11b48406 */
  if (!C.zf) goto L_11b48406;
  /* 11b483fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b483fc call 0x11b48560 */
  push32(0x11b48401u); f_11b48560();
  /* 11b48401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48404 jmp 0x11b48430 */
  goto L_11b48430;
L_11b48406:;
  /* 11b48406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48409 push eax */
  push32((uint32_t)(EAX));
  /* 11b4840a call 0x11b448a0 */
  push32(0x11b4840fu); f_11b448a0();
  /* 11b4840f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48415 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48416 call 0x11b48440 */
  push32(0x11b4841bu); f_11b48440();
  /* 11b4841b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4841e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b48421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48424 push edx */
  push32((uint32_t)(EDX));
  /* 11b48425 call 0x11b44910 */
  push32(0x11b4842au); f_11b44910();
  /* 11b4842a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4842d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b48430:;
  /* 11b48430 mov esp, ebp */
  ESP = (EBP);
  /* 11b48432 pop ebp */
  EBP = (pop32());
  /* 11b48433 ret  */
  ESPCHK(0x11b483f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018440 @ 0x11b48440 (65 bytes, 26 insns) */
void f_11b48440(void) {
  FTRACE(0x11b48440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48440 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48441 mov ebp, esp */
  EBP = (ESP);
  /* 11b48443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48446 push eax */
  push32((uint32_t)(EAX));
  /* 11b48447 call 0x11b48490 */
  push32(0x11b4844cu); f_11b48490();
  /* 11b4844c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4844f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b48451 je 0x11b48458 */
  if (C.zf) goto L_11b48458;
  /* 11b48453 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b48456 jmp 0x11b4847f */
  goto L_11b4847f;
L_11b48458:;
  /* 11b48458 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4845b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b4845e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b48464 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b48466 je 0x11b4847d */
  if (C.zf) goto L_11b4847d;
  /* 11b48468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4846b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b4846e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4846f call 0x11b4a440 */
  push32(0x11b48474u); f_11b4a440();
  /* 11b48474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48477 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b48479 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4847b jmp 0x11b4847f */
  goto L_11b4847f;
L_11b4847d:;
  /* 11b4847d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4847f:;
  /* 11b4847f pop ebp */
  EBP = (pop32());
  /* 11b48480 ret  */
  ESPCHK(0x11b48440u, _esp0);
  ESP += 4; return;
}

/* FUN_10018490 @ 0x11b48490 (183 bytes, 62 insns) */
void f_11b48490(void) {
  FTRACE(0x11b48490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48490 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48491 mov ebp, esp */
  EBP = (ESP);
  /* 11b48493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4849d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b484a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b484a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484a6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b484a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b484ac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b484af jne 0x11b4852b */
  if (!C.zf) goto L_11b4852b;
  /* 11b484b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b484b7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11b484bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b484bf je 0x11b4852b */
  if (C.zf) goto L_11b4852b;
  /* 11b484c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b484c9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b484cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b484cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b484d3 jle 0x11b4852b */
  if ((C.zf||C.sf!=C.of)) goto L_11b4852b;
  /* 11b484d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b484d8 push edx */
  push32((uint32_t)(EDX));
  /* 11b484d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b484df push ecx */
  push32((uint32_t)(ECX));
  /* 11b484e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b484e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b484e7 call 0x11b44330 */
  push32(0x11b484ecu); f_11b44330();
  /* 11b484ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b484ef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b484f2 jne 0x11b48515 */
  if (!C.zf) goto L_11b48515;
  /* 11b484f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b484f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b484fa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11b48500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b48502 je 0x11b48513 */
  if (C.zf) goto L_11b48513;
  /* 11b48504 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48507 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b4850a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11b4850d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48510 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11b48513:;
  /* 11b48513 jmp 0x11b4852b */
  goto L_11b4852b;
L_11b48515:;
  /* 11b48515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48518 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b4851b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4851e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48521 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11b48524 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b4852b:;
  /* 11b4852b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4852e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48531 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b48534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b48536 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48539 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b48540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48543 mov esp, ebp */
  ESP = (EBP);
  /* 11b48545 pop ebp */
  EBP = (pop32());
  /* 11b48546 ret  */
  ESPCHK(0x11b48490u, _esp0);
  ESP += 4; return;
}

/* FUN_10018550 @ 0x11b48550 (15 bytes, 7 insns) */
void f_11b48550(void) {
  FTRACE(0x11b48550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48550 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48551 mov ebp, esp */
  EBP = (ESP);
  /* 11b48553 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b48555 call 0x11b48560 */
  push32(0x11b4855au); f_11b48560();
  /* 11b4855a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4855d pop ebp */
  EBP = (pop32());
  /* 11b4855e ret  */
  ESPCHK(0x11b48550u, _esp0);
  ESP += 4; return;
}

/* FUN_10018560 @ 0x11b48560 (319 bytes, 94 insns) */
void f_11b48560(void) {
  FTRACE(0x11b48560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48560 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48561 mov ebp, esp */
  EBP = (ESP);
  /* 11b48563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48566 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4856d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b48574 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b48576 call 0x11b3a900 */
  push32(0x11b4857bu); f_11b3a900();
  /* 11b4857b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4857e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b48585 jmp 0x11b48590 */
  goto L_11b48590;
L_11b48587:;
  /* 11b48587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4858a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4858d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b48590:;
  /* 11b48590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48593 cmp ecx, dword ptr [0x11b691e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b691e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48599 jge 0x11b48683 */
  if ((C.sf==C.of)) goto L_11b48683;
  /* 11b4859f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b485a2 mov eax, dword ptr [0x11b67e8c] */
  EAX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b485a7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b485ab je 0x11b4867e */
  if (C.zf) goto L_11b4867e;
  /* 11b485b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b485b4 mov edx, dword ptr [0x11b67e8c] */
  EDX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b485ba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b485bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b485c0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11b485c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b485c8 je 0x11b4867e */
  if (C.zf) goto L_11b4867e;
  /* 11b485ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b485d1 mov eax, dword ptr [0x11b67e8c] */
  EAX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b485d6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b485d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b485da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b485dd push edx */
  push32((uint32_t)(EDX));
  /* 11b485de call 0x11b448e0 */
  push32(0x11b485e3u); f_11b448e0();
  /* 11b485e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b485e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b485e9 mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b485ef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b485f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b485f5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11b485fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b485fc je 0x11b48665 */
  if (C.zf) goto L_11b48665;
  /* 11b485fe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48602 jne 0x11b48629 */
  if (!C.zf) goto L_11b48629;
  /* 11b48604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48607 mov edx, dword ptr [0x11b67e8c] */
  EDX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b4860d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b48610 push eax */
  push32((uint32_t)(EAX));
  /* 11b48611 call 0x11b48440 */
  push32(0x11b48616u); f_11b48440();
  /* 11b48616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48619 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4861c je 0x11b48627 */
  if (C.zf) goto L_11b48627;
  /* 11b4861e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48624 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b48627:;
  /* 11b48627 jmp 0x11b48665 */
  goto L_11b48665;
L_11b48629:;
  /* 11b48629 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4862d jne 0x11b48665 */
  if (!C.zf) goto L_11b48665;
  /* 11b4862f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48632 mov eax, dword ptr [0x11b67e8c] */
  EAX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b48637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b4863a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b4863d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b48640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b48642 je 0x11b48665 */
  if (C.zf) goto L_11b48665;
  /* 11b48644 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48647 mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b4864d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b48650 push edx */
  push32((uint32_t)(EDX));
  /* 11b48651 call 0x11b48440 */
  push32(0x11b48656u); f_11b48440();
  /* 11b48656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48659 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4865c jne 0x11b48665 */
  if (!C.zf) goto L_11b48665;
  /* 11b4865e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11b48665:;
  /* 11b48665 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48668 mov ecx, dword ptr [0x11b67e8c] */
  ECX = (r32((uint32_t)(0x11b67e8c)));
  /* 11b4866e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b48671 push edx */
  push32((uint32_t)(EDX));
  /* 11b48672 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48675 push eax */
  push32((uint32_t)(EAX));
  /* 11b48676 call 0x11b44950 */
  push32(0x11b4867bu); f_11b44950();
  /* 11b4867b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b4867e:;
  /* 11b4867e jmp 0x11b48587 */
  goto L_11b48587;
L_11b48683:;
  /* 11b48683 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b48685 call 0x11b3a9a0 */
  push32(0x11b4868au); f_11b3a9a0();
  /* 11b4868a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4868d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48691 jne 0x11b48698 */
  if (!C.zf) goto L_11b48698;
  /* 11b48693 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48696 jmp 0x11b4869b */
  goto L_11b4869b;
L_11b48698:;
  /* 11b48698 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b4869b:;
  /* 11b4869b mov esp, ebp */
  ESP = (EBP);
  /* 11b4869d pop ebp */
  EBP = (pop32());
  /* 11b4869e ret  */
  ESPCHK(0x11b48560u, _esp0);
  ESP += 4; return;
}

/* FUN_100186a0 @ 0x11b486a0 (289 bytes, 97 insns) */
void f_11b486a0(void) {
  FTRACE(0x11b486a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b486a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b486a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b486a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b486a6 push esi */
  push32((uint32_t)(ESI));
  /* 11b486a7 mov eax, dword ptr [0x11b66e08] */
  EAX = (r32((uint32_t)(0x11b66e08)));
  /* 11b486ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b486af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b486b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b486bd jmp 0x11b486c8 */
  goto L_11b486c8;
L_11b486bf:;
  /* 11b486bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b486c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b486c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b486c8:;
  /* 11b486c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b486cc jae 0x11b48701 */
  if (!C.cf) goto L_11b48701;
  /* 11b486ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b486d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b486d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b486d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b486d8 call 0x11b3b830 */
  push32(0x11b486ddu); f_11b3b830();
  /* 11b486dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b486e0 mov esi, eax */
  ESI = (EAX);
  /* 11b486e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b486e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b486e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11b486ec push ecx */
  push32((uint32_t)(ECX));
  /* 11b486ed call 0x11b3b830 */
  push32(0x11b486f2u); f_11b3b830();
  /* 11b486f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b486f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b486f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11b486fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b486ff jmp 0x11b486bf */
  goto L_11b486bf;
L_11b48701:;
  /* 11b48701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48707 push eax */
  push32((uint32_t)(EAX));
  /* 11b48708 call 0x11b37cc0 */
  push32(0x11b4870du); f_11b37cc0();
  /* 11b4870d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48710 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b48713 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48717 je 0x11b487b9 */
  if (C.zf) goto L_11b487b9;
  /* 11b4871d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48720 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b48723 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b4872a jmp 0x11b48735 */
  goto L_11b48735;
L_11b4872c:;
  /* 11b4872c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4872f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48732 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b48735:;
  /* 11b48735 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48739 jae 0x11b487aa */
  if (!C.cf) goto L_11b487aa;
  /* 11b4873b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4873e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11b48741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48744 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48747 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b4874a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4874d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48750 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b48753 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48754 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48757 push edx */
  push32((uint32_t)(EDX));
  /* 11b48758 call 0x11b3b9b0 */
  push32(0x11b4875du); f_11b3b9b0();
  /* 11b4875d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48760 push eax */
  push32((uint32_t)(EAX));
  /* 11b48761 call 0x11b3b830 */
  push32(0x11b48766u); f_11b3b830();
  /* 11b48766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48769 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4876c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4876e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b48771 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48774 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11b48777 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4877a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4877d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b48780 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48783 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48786 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11b4878a push eax */
  push32((uint32_t)(EAX));
  /* 11b4878b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4878e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4878f call 0x11b3b9b0 */
  push32(0x11b48794u); f_11b3b9b0();
  /* 11b48794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48797 push eax */
  push32((uint32_t)(EAX));
  /* 11b48798 call 0x11b3b830 */
  push32(0x11b4879du); f_11b3b830();
  /* 11b4879d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b487a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b487a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b487a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b487a8 jmp 0x11b4872c */
  goto L_11b4872c;
L_11b487aa:;
  /* 11b487aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b487ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b487b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b487b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b487b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b487b9:;
  /* 11b487b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b487bc pop esi */
  ESI = (pop32());
  /* 11b487bd mov esp, ebp */
  ESP = (EBP);
  /* 11b487bf pop ebp */
  EBP = (pop32());
  /* 11b487c0 ret  */
  ESPCHK(0x11b486a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100187d0 @ 0x11b487d0 (291 bytes, 97 insns) */
void f_11b487d0(void) {
  FTRACE(0x11b487d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b487d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b487d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b487d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b487d6 push esi */
  push32((uint32_t)(ESI));
  /* 11b487d7 mov eax, dword ptr [0x11b66e08] */
  EAX = (r32((uint32_t)(0x11b66e08)));
  /* 11b487dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b487df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b487e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b487ed jmp 0x11b487f8 */
  goto L_11b487f8;
L_11b487ef:;
  /* 11b487ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b487f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b487f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b487f8:;
  /* 11b487f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b487fc jae 0x11b48832 */
  if (!C.cf) goto L_11b48832;
  /* 11b487fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48804 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11b48808 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48809 call 0x11b3b830 */
  push32(0x11b4880eu); f_11b3b830();
  /* 11b4880e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48811 mov esi, eax */
  ESI = (EAX);
  /* 11b48813 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48816 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48819 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11b4881d push ecx */
  push32((uint32_t)(ECX));
  /* 11b4881e call 0x11b3b830 */
  push32(0x11b48823u); f_11b3b830();
  /* 11b48823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48826 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48829 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11b4882d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b48830 jmp 0x11b487ef */
  goto L_11b487ef;
L_11b48832:;
  /* 11b48832 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48835 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48838 push eax */
  push32((uint32_t)(EAX));
  /* 11b48839 call 0x11b37cc0 */
  push32(0x11b4883eu); f_11b37cc0();
  /* 11b4883e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48841 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b48844 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48848 je 0x11b488eb */
  if (C.zf) goto L_11b488eb;
  /* 11b4884e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48851 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b48854 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b4885b jmp 0x11b48866 */
  goto L_11b48866;
L_11b4885d:;
  /* 11b4885d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48860 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b48866:;
  /* 11b48866 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4886a jae 0x11b488dc */
  if (!C.cf) goto L_11b488dc;
  /* 11b4886c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4886f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11b48872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48878 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b4887b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4887e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48881 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11b48885 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48886 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48889 push edx */
  push32((uint32_t)(EDX));
  /* 11b4888a call 0x11b3b9b0 */
  push32(0x11b4888fu); f_11b3b9b0();
  /* 11b4888f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48892 push eax */
  push32((uint32_t)(EAX));
  /* 11b48893 call 0x11b3b830 */
  push32(0x11b48898u); f_11b3b830();
  /* 11b48898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4889b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4889e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b488a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488a6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11b488a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b488b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b488b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b488b8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11b488bc push eax */
  push32((uint32_t)(EAX));
  /* 11b488bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b488c1 call 0x11b3b9b0 */
  push32(0x11b488c6u); f_11b3b9b0();
  /* 11b488c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488c9 push eax */
  push32((uint32_t)(EAX));
  /* 11b488ca call 0x11b3b830 */
  push32(0x11b488cfu); f_11b3b830();
  /* 11b488cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488d5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488d7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b488da jmp 0x11b4885d */
  goto L_11b4885d;
L_11b488dc:;
  /* 11b488dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488df mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b488e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b488e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b488e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b488eb:;
  /* 11b488eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b488ee pop esi */
  ESI = (pop32());
  /* 11b488ef mov esp, ebp */
  ESP = (EBP);
  /* 11b488f1 pop ebp */
  EBP = (pop32());
  /* 11b488f2 ret  */
  ESPCHK(0x11b487d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018900 @ 0x11b48900 (878 bytes, 273 insns) */
void f_11b48900(void) {
  FTRACE(0x11b48900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48900 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48901 mov ebp, esp */
  EBP = (ESP);
  /* 11b48903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48906 push esi */
  push32((uint32_t)(ESI));
  /* 11b48907 mov eax, dword ptr [0x11b66e08] */
  EAX = (r32((uint32_t)(0x11b66e08)));
  /* 11b4890c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b4890f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b48916 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b4891d jmp 0x11b48928 */
  goto L_11b48928;
L_11b4891f:;
  /* 11b4891f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48925 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b48928:;
  /* 11b48928 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4892c jae 0x11b48961 */
  if (!C.cf) goto L_11b48961;
  /* 11b4892e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48931 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48934 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11b48937 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48938 call 0x11b3b830 */
  push32(0x11b4893du); f_11b3b830();
  /* 11b4893d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48940 mov esi, eax */
  ESI = (EAX);
  /* 11b48942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48948 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11b4894c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4894d call 0x11b3b830 */
  push32(0x11b48952u); f_11b3b830();
  /* 11b48952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48955 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48958 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11b4895c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b4895f jmp 0x11b4891f */
  goto L_11b4891f;
L_11b48961:;
  /* 11b48961 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b48968 jmp 0x11b48973 */
  goto L_11b48973;
L_11b4896a:;
  /* 11b4896a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4896d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48970 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b48973:;
  /* 11b48973 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48977 jae 0x11b489ad */
  if (!C.cf) goto L_11b489ad;
  /* 11b48979 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4897c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4897f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11b48983 push eax */
  push32((uint32_t)(EAX));
  /* 11b48984 call 0x11b3b830 */
  push32(0x11b48989u); f_11b3b830();
  /* 11b48989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4898c mov esi, eax */
  ESI = (EAX);
  /* 11b4898e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48991 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48994 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11b48998 push eax */
  push32((uint32_t)(EAX));
  /* 11b48999 call 0x11b3b830 */
  push32(0x11b4899eu); f_11b3b830();
  /* 11b4899e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489a1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489a4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11b489a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b489ab jmp 0x11b4896a */
  goto L_11b4896a;
L_11b489ad:;
  /* 11b489ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b489b0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11b489b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b489b7 call 0x11b3b830 */
  push32(0x11b489bcu); f_11b3b830();
  /* 11b489bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489bf mov esi, eax */
  ESI = (EAX);
  /* 11b489c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b489c4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11b489ca push edx */
  push32((uint32_t)(EDX));
  /* 11b489cb call 0x11b3b830 */
  push32(0x11b489d0u); f_11b3b830();
  /* 11b489d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489d3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489d6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11b489da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b489dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b489e0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11b489e6 push edx */
  push32((uint32_t)(EDX));
  /* 11b489e7 call 0x11b3b830 */
  push32(0x11b489ecu); f_11b3b830();
  /* 11b489ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b489ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b489f2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b489f6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b489f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b489fc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11b48a02 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48a03 call 0x11b3b830 */
  push32(0x11b48a08u); f_11b3b830();
  /* 11b48a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48a0e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11b48a12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b48a15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48a18 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11b48a1e push edx */
  push32((uint32_t)(EDX));
  /* 11b48a1f call 0x11b3b830 */
  push32(0x11b48a24u); f_11b3b830();
  /* 11b48a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48a2a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b48a2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b48a31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b48a34 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a39 push eax */
  push32((uint32_t)(EAX));
  /* 11b48a3a call 0x11b37cc0 */
  push32(0x11b48a3fu); f_11b37cc0();
  /* 11b48a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b48a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48a49 je 0x11b48c66 */
  if (C.zf) goto L_11b48c66;
  /* 11b48a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48a52 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b48a55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48a58 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a5e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b48a61 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11b48a66 mov eax, dword ptr [0x11b66e08] */
  EAX = (r32((uint32_t)(0x11b66e08)));
  /* 11b48a6b push eax */
  push32((uint32_t)(EAX));
  /* 11b48a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48a6f push ecx */
  push32((uint32_t)(ECX));
  /* 11b48a70 call 0x11b403a0 */
  push32(0x11b48a75u); f_11b403a0();
  /* 11b48a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b48a7f jmp 0x11b48a8a */
  goto L_11b48a8a;
L_11b48a81:;
  /* 11b48a81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48a84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48a87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b48a8a:;
  /* 11b48a8a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48a8e jae 0x11b48afe */
  if (!C.cf) goto L_11b48afe;
  /* 11b48a90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48a93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48a96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48a99 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11b48a9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48a9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48aa2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b48aa5 push edx */
  push32((uint32_t)(EDX));
  /* 11b48aa6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48aa9 push eax */
  push32((uint32_t)(EAX));
  /* 11b48aaa call 0x11b3b9b0 */
  push32(0x11b48aafu); f_11b3b9b0();
  /* 11b48aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11b48ab3 call 0x11b3b830 */
  push32(0x11b48ab8u); f_11b3b830();
  /* 11b48ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48abb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48abe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b48ac2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b48ac5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48ac8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48acb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48ace mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11b48ad2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48ad5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48ad8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11b48adc push edx */
  push32((uint32_t)(EDX));
  /* 11b48add mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11b48ae1 call 0x11b3b9b0 */
  push32(0x11b48ae6u); f_11b3b9b0();
  /* 11b48ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11b48aea call 0x11b3b830 */
  push32(0x11b48aefu); f_11b3b830();
  /* 11b48aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48af2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48af5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b48af9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b48afc jmp 0x11b48a81 */
  goto L_11b48a81;
L_11b48afe:;
  /* 11b48afe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b48b05 jmp 0x11b48b10 */
  goto L_11b48b10;
L_11b48b07:;
  /* 11b48b07 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48b0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48b0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b48b10:;
  /* 11b48b10 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48b14 jae 0x11b48b86 */
  if (!C.cf) goto L_11b48b86;
  /* 11b48b16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48b19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48b1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b1f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11b48b23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48b26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48b29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11b48b2d push eax */
  push32((uint32_t)(EAX));
  /* 11b48b2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b31 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48b32 call 0x11b3b9b0 */
  push32(0x11b48b37u); f_11b3b9b0();
  /* 11b48b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48b3a push eax */
  push32((uint32_t)(EAX));
  /* 11b48b3b call 0x11b3b830 */
  push32(0x11b48b40u); f_11b3b830();
  /* 11b48b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48b43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b46 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11b48b4a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b48b4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48b50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48b53 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b56 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11b48b5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48b5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48b60 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11b48b64 push eax */
  push32((uint32_t)(EAX));
  /* 11b48b65 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b68 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48b69 call 0x11b3b9b0 */
  push32(0x11b48b6eu); f_11b3b9b0();
  /* 11b48b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48b71 push eax */
  push32((uint32_t)(EAX));
  /* 11b48b72 call 0x11b3b830 */
  push32(0x11b48b77u); f_11b3b830();
  /* 11b48b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48b7a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b7d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11b48b81 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b48b84 jmp 0x11b48b07 */
  goto L_11b48b07;
L_11b48b86:;
  /* 11b48b86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48b89 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b8c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11b48b92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48b95 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11b48b9b push ecx */
  push32((uint32_t)(ECX));
  /* 11b48b9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48b9f push edx */
  push32((uint32_t)(EDX));
  /* 11b48ba0 call 0x11b3b9b0 */
  push32(0x11b48ba5u); f_11b3b9b0();
  /* 11b48ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48ba8 push eax */
  push32((uint32_t)(EAX));
  /* 11b48ba9 call 0x11b3b830 */
  push32(0x11b48baeu); f_11b3b830();
  /* 11b48bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48bb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48bb4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b48bb8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b48bbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48bbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48bc1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11b48bc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48bca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11b48bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11b48bd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48bd5 call 0x11b3b9b0 */
  push32(0x11b48bdau); f_11b3b9b0();
  /* 11b48bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48bdd push eax */
  push32((uint32_t)(EAX));
  /* 11b48bde call 0x11b3b830 */
  push32(0x11b48be3u); f_11b3b830();
  /* 11b48be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48be6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48be9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11b48bed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b48bf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48bf3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48bf6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11b48bfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48bff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11b48c05 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48c06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c09 push edx */
  push32((uint32_t)(EDX));
  /* 11b48c0a call 0x11b3b9b0 */
  push32(0x11b48c0fu); f_11b3b9b0();
  /* 11b48c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48c12 push eax */
  push32((uint32_t)(EAX));
  /* 11b48c13 call 0x11b3b830 */
  push32(0x11b48c18u); f_11b3b830();
  /* 11b48c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48c1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b48c22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b48c25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48c28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c2b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11b48c31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48c34 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11b48c3a push eax */
  push32((uint32_t)(EAX));
  /* 11b48c3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c3e push ecx */
  push32((uint32_t)(ECX));
  /* 11b48c3f call 0x11b3b9b0 */
  push32(0x11b48c44u); f_11b3b9b0();
  /* 11b48c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48c47 push eax */
  push32((uint32_t)(EAX));
  /* 11b48c48 call 0x11b3b830 */
  push32(0x11b48c4du); f_11b3b830();
  /* 11b48c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48c50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c53 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11b48c57 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b48c5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b48c5d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b48c60 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11b48c66:;
  /* 11b48c66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48c69 pop esi */
  ESI = (pop32());
  /* 11b48c6a mov esp, ebp */
  ESP = (EBP);
  /* 11b48c6c pop ebp */
  EBP = (pop32());
  /* 11b48c6d ret  */
  ESPCHK(0x11b48900u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c70 @ 0x11b48c70 (31 bytes, 15 insns) */
void f_11b48c70(void) {
  FTRACE(0x11b48c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48c71 mov ebp, esp */
  EBP = (ESP);
  /* 11b48c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b48c75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48c78 push eax */
  push32((uint32_t)(EAX));
  /* 11b48c79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11b48c7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48c80 push edx */
  push32((uint32_t)(EDX));
  /* 11b48c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48c84 push eax */
  push32((uint32_t)(EAX));
  /* 11b48c85 call 0x11b48c90 */
  push32(0x11b48c8au); f_11b48c90();
  /* 11b48c8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48c8d pop ebp */
  EBP = (pop32());
  /* 11b48c8e ret  */
  ESPCHK(0x11b48c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c90 @ 0x11b48c90 (393 bytes, 123 insns) */
void f_11b48c90(void) {
  FTRACE(0x11b48c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48c91 mov ebp, esp */
  EBP = (ESP);
  /* 11b48c93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48c96 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48c9a jne 0x11b48ca6 */
  if (!C.zf) goto L_11b48ca6;
  /* 11b48c9c mov eax, dword ptr [0x11b66e08] */
  EAX = (r32((uint32_t)(0x11b66e08)));
  /* 11b48ca1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b48ca4 jmp 0x11b48cac */
  goto L_11b48cac;
L_11b48ca6:;
  /* 11b48ca6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48ca9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b48cac:;
  /* 11b48cac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b48caf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b48cb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48cb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b48cb8 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b48cbd call dword ptr [0x11b6a3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d4))), 0x11b48cc3u);
  /* 11b48cc3 cmp dword ptr [0x11b691e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48cca je 0x11b48cea */
  if (C.zf) goto L_11b48cea;
  /* 11b48ccc push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b48cd1 call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b48cd7u);
  /* 11b48cd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b48cd9 call 0x11b3a900 */
  push32(0x11b48cdeu); f_11b3a900();
  /* 11b48cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48ce1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b48ce8 jmp 0x11b48cf1 */
  goto L_11b48cf1;
L_11b48cea:;
  /* 11b48cea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b48cf1:;
  /* 11b48cf1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48cf5 jbe 0x11b48de2 */
  if ((C.cf||C.zf)) goto L_11b48de2;
  /* 11b48cfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48cfe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b48d00 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11b48d03 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b48d07 je 0x11b48d11 */
  if (C.zf) goto L_11b48d11;
  /* 11b48d09 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b48d0d je 0x11b48d16 */
  if (C.zf) goto L_11b48d16;
  /* 11b48d0f jmp 0x11b48d70 */
  goto L_11b48d70;
L_11b48d11:;
  /* 11b48d11 jmp 0x11b48de2 */
  goto L_11b48de2;
L_11b48d16:;
  /* 11b48d16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48d1c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11b48d1f mov dword ptr [0x11b67e78], 0 */
  w32((uint32_t)(0x11b67e78), (0x0u));
  /* 11b48d29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b48d2f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48d32 jne 0x11b48d47 */
  if (!C.zf) goto L_11b48d47;
  /* 11b48d34 mov dword ptr [0x11b67e78], 1 */
  w32((uint32_t)(0x11b67e78), (0x1u));
  /* 11b48d3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48d44 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b48d47:;
  /* 11b48d47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b48d4a push ecx */
  push32((uint32_t)(ECX));
  /* 11b48d4b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b48d4e push edx */
  push32((uint32_t)(EDX));
  /* 11b48d4f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b48d52 push eax */
  push32((uint32_t)(EAX));
  /* 11b48d53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48d57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b48d5c push eax */
  push32((uint32_t)(EAX));
  /* 11b48d5d call 0x11b48e20 */
  push32(0x11b48d62u); f_11b48e20();
  /* 11b48d62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48d65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48d6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b48d6e jmp 0x11b48ddd */
  goto L_11b48ddd;
L_11b48d70:;
  /* 11b48d70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b48d75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b48d77 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b48d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b48d7f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b48d83 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b48d89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b48d8b je 0x11b48db8 */
  if (C.zf) goto L_11b48db8;
  /* 11b48d8d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48d91 jbe 0x11b48db8 */
  if ((C.cf||C.zf)) goto L_11b48db8;
  /* 11b48d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48d96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48d99 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b48d9b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b48d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48da0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48da3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b48da6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48da9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48dac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b48daf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48db2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48db5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b48db8:;
  /* 11b48db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48dbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48dbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b48dc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b48dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48dc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48dc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b48dcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48dce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48dd1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b48dd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48dd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48dda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b48ddd:;
  /* 11b48ddd jmp 0x11b48cf1 */
  goto L_11b48cf1;
L_11b48de2:;
  /* 11b48de2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48de6 je 0x11b48df4 */
  if (C.zf) goto L_11b48df4;
  /* 11b48de8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b48dea call 0x11b3a9a0 */
  push32(0x11b48defu); f_11b3a9a0();
  /* 11b48def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48df2 jmp 0x11b48dff */
  goto L_11b48dff;
L_11b48df4:;
  /* 11b48df4 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b48df9 call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b48dffu);
L_11b48dff:;
  /* 11b48dff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48e03 jbe 0x11b48e13 */
  if ((C.cf||C.zf)) goto L_11b48e13;
  /* 11b48e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b48e08 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b48e0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48e0e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48e11 jmp 0x11b48e15 */
  goto L_11b48e15;
L_11b48e13:;
  /* 11b48e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b48e15:;
  /* 11b48e15 mov esp, ebp */
  ESP = (EBP);
  /* 11b48e17 pop ebp */
  EBP = (pop32());
  /* 11b48e18 ret  */
  ESPCHK(0x11b48c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e20 @ 0x11b48e20 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11b48e20(void) {
  FTRACE(0x11b48e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b48e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b48e21 mov ebp, esp */
  EBP = (ESP);
  /* 11b48e23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48e26 push esi */
  push32((uint32_t)(ESI));
  /* 11b48e27 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11b48e2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b48e2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48e31 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48e34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b48e37 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48e3b ja 0x11b49388 */
  if ((!C.cf&&!C.zf)) goto L_11b49388;
  /* 11b48e41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b48e44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b48e46 mov dl, byte ptr [eax + 0x11b493e9] */
  DL = (r8((uint32_t)(EAX + 0x11b493e9)));
  /* 11b48e4c jmp dword ptr [edx*4 + 0x11b4938d] */
  switch (EDX) {
    case 0: goto L_11b49366;
    case 1: goto L_11b48e75;
    case 2: goto L_11b48ebb;
    case 3: goto L_11b49008;
    case 4: goto L_11b49030;
    case 5: goto L_11b490cf;
    case 6: goto L_11b4913b;
    case 7: goto L_11b49164;
    case 8: goto L_11b491a5;
    case 9: goto L_11b49287;
    case 10: goto L_11b492ee;
    case 11: goto L_11b4933b;
    case 12: goto L_11b48e53;
    case 13: goto L_11b48e98;
    case 14: goto L_11b48ede;
    case 15: goto L_11b48fde;
    case 16: goto L_11b49075;
    case 17: goto L_11b490a2;
    case 18: goto L_11b490f7;
    case 19: goto L_11b4917b;
    case 20: goto L_11b49229;
    case 21: goto L_11b492b8;
    case 22: goto L_11b49388;
    default: x86_unimpl("switch@0x11b48e4c out of table"); return;
  }
L_11b48e53:;
  /* 11b48e53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48e56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48e57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48e5a push edx */
  push32((uint32_t)(EDX));
  /* 11b48e5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48e5e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b48e61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48e64 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b48e67 push eax */
  push32((uint32_t)(EAX));
  /* 11b48e68 call 0x11b49440 */
  push32(0x11b48e6du); f_11b49440();
  /* 11b48e6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48e70 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48e75:;
  /* 11b48e75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48e78 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48e79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48e7c push edx */
  push32((uint32_t)(EDX));
  /* 11b48e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48e80 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b48e83 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48e86 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11b48e8a push eax */
  push32((uint32_t)(EAX));
  /* 11b48e8b call 0x11b49440 */
  push32(0x11b48e90u); f_11b49440();
  /* 11b48e90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48e93 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48e98:;
  /* 11b48e98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48e9b push ecx */
  push32((uint32_t)(ECX));
  /* 11b48e9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48e9f push edx */
  push32((uint32_t)(EDX));
  /* 11b48ea0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48ea3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b48ea6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48ea9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11b48ead push eax */
  push32((uint32_t)(EAX));
  /* 11b48eae call 0x11b49440 */
  push32(0x11b48eb3u); f_11b49440();
  /* 11b48eb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48eb6 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48ebb:;
  /* 11b48ebb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48ebe push ecx */
  push32((uint32_t)(ECX));
  /* 11b48ebf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48ec2 push edx */
  push32((uint32_t)(EDX));
  /* 11b48ec3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48ec6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b48ec9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48ecc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11b48ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11b48ed1 call 0x11b49440 */
  push32(0x11b48ed6u); f_11b49440();
  /* 11b48ed6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48ed9 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48ede:;
  /* 11b48ede cmp dword ptr [0x11b67e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48ee5 je 0x11b48f66 */
  if (C.zf) goto L_11b48f66;
  /* 11b48ee7 mov dword ptr [0x11b67e78], 0 */
  w32((uint32_t)(0x11b67e78), (0x0u));
  /* 11b48ef1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48ef5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48ef8 push edx */
  push32((uint32_t)(EDX));
  /* 11b48ef9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48efc push eax */
  push32((uint32_t)(EAX));
  /* 11b48efd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48f00 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48f01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48f04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11b48f0a push eax */
  push32((uint32_t)(EAX));
  /* 11b48f0b call 0x11b495f0 */
  push32(0x11b48f10u); f_11b495f0();
  /* 11b48f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48f13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48f19 jne 0x11b48f20 */
  if (!C.zf) goto L_11b48f20;
  /* 11b48f1b jmp 0x11b49388 */
  goto L_11b49388;
L_11b48f20:;
  /* 11b48f20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b48f25 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11b48f28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b48f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48f30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b48f35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b48f3a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48f3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b48f42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48f45 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48f46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f49 push edx */
  push32((uint32_t)(EDX));
  /* 11b48f4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f4d push eax */
  push32((uint32_t)(EAX));
  /* 11b48f4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48f51 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48f52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48f55 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11b48f5b push eax */
  push32((uint32_t)(EAX));
  /* 11b48f5c call 0x11b495f0 */
  push32(0x11b48f61u); f_11b495f0();
  /* 11b48f61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48f64 jmp 0x11b48fd9 */
  goto L_11b48fd9;
L_11b48f66:;
  /* 11b48f66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48f6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f6d push edx */
  push32((uint32_t)(EDX));
  /* 11b48f6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f71 push eax */
  push32((uint32_t)(EAX));
  /* 11b48f72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48f75 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48f76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48f79 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11b48f7f push eax */
  push32((uint32_t)(EAX));
  /* 11b48f80 call 0x11b495f0 */
  push32(0x11b48f85u); f_11b495f0();
  /* 11b48f85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48f88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48f8b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b48f8e jne 0x11b48f95 */
  if (!C.zf) goto L_11b48f95;
  /* 11b48f90 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48f95:;
  /* 11b48f95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48f98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b48f9a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11b48f9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48fa0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b48fa2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b48fa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48fa8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b48faa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48fad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b48faf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b48fb2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48fb5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b48fb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48fba push ecx */
  push32((uint32_t)(ECX));
  /* 11b48fbb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48fbe push edx */
  push32((uint32_t)(EDX));
  /* 11b48fbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48fc2 push eax */
  push32((uint32_t)(EAX));
  /* 11b48fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b48fc7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b48fca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11b48fd0 push eax */
  push32((uint32_t)(EAX));
  /* 11b48fd1 call 0x11b495f0 */
  push32(0x11b48fd6u); f_11b495f0();
  /* 11b48fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b48fd9:;
  /* 11b48fd9 jmp 0x11b49388 */
  goto L_11b49388;
L_11b48fde:;
  /* 11b48fde mov ecx, dword ptr [0x11b67e78] */
  ECX = (r32((uint32_t)(0x11b67e78)));
  /* 11b48fe4 mov dword ptr [0x11b67e88], ecx */
  w32((uint32_t)(0x11b67e88), (ECX));
  /* 11b48fea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b48fed push edx */
  push32((uint32_t)(EDX));
  /* 11b48fee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b48ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11b48ff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b48ff4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b48ff7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b48ffa push edx */
  push32((uint32_t)(EDX));
  /* 11b48ffb call 0x11b49490 */
  push32(0x11b49000u); f_11b49490();
  /* 11b49000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49003 jmp 0x11b49388 */
  goto L_11b49388;
L_11b49008:;
  /* 11b49008 mov eax, dword ptr [0x11b67e78] */
  EAX = (r32((uint32_t)(0x11b67e78)));
  /* 11b4900d mov dword ptr [0x11b67e88], eax */
  w32((uint32_t)(0x11b67e88), (EAX));
  /* 11b49012 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49015 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49016 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49019 push edx */
  push32((uint32_t)(EDX));
  /* 11b4901a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4901c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4901f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b49022 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49023 call 0x11b49490 */
  push32(0x11b49028u); f_11b49490();
  /* 11b49028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4902b jmp 0x11b49388 */
  goto L_11b49388;
L_11b49030:;
  /* 11b49030 mov edx, dword ptr [0x11b67e78] */
  EDX = (r32((uint32_t)(0x11b67e78)));
  /* 11b49036 mov dword ptr [0x11b67e88], edx */
  w32((uint32_t)(0x11b67e88), (EDX));
  /* 11b4903c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4903f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b49042 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b49043 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11b49048 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b4904a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4904d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49051 jne 0x11b4905a */
  if (!C.zf) goto L_11b4905a;
  /* 11b49053 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11b4905a:;
  /* 11b4905a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4905d push edx */
  push32((uint32_t)(EDX));
  /* 11b4905e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49061 push eax */
  push32((uint32_t)(EAX));
  /* 11b49062 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49067 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49068 call 0x11b49490 */
  push32(0x11b4906du); f_11b49490();
  /* 11b4906d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49070 jmp 0x11b49388 */
  goto L_11b49388;
L_11b49075:;
  /* 11b49075 mov edx, dword ptr [0x11b67e78] */
  EDX = (r32((uint32_t)(0x11b67e78)));
  /* 11b4907b mov dword ptr [0x11b67e88], edx */
  w32((uint32_t)(0x11b67e88), (EDX));
  /* 11b49081 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49084 push eax */
  push32((uint32_t)(EAX));
  /* 11b49085 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49088 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49089 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b4908b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4908e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b49091 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49094 push eax */
  push32((uint32_t)(EAX));
  /* 11b49095 call 0x11b49490 */
  push32(0x11b4909au); f_11b49490();
  /* 11b4909a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4909d jmp 0x11b49388 */
  goto L_11b49388;
L_11b490a2:;
  /* 11b490a2 mov ecx, dword ptr [0x11b67e78] */
  ECX = (r32((uint32_t)(0x11b67e78)));
  /* 11b490a8 mov dword ptr [0x11b67e88], ecx */
  w32((uint32_t)(0x11b67e88), (ECX));
  /* 11b490ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b490b1 push edx */
  push32((uint32_t)(EDX));
  /* 11b490b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b490b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b490b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b490b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b490bb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b490be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b490c1 push edx */
  push32((uint32_t)(EDX));
  /* 11b490c2 call 0x11b49490 */
  push32(0x11b490c7u); f_11b49490();
  /* 11b490c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b490ca jmp 0x11b49388 */
  goto L_11b49388;
L_11b490cf:;
  /* 11b490cf mov eax, dword ptr [0x11b67e78] */
  EAX = (r32((uint32_t)(0x11b67e78)));
  /* 11b490d4 mov dword ptr [0x11b67e88], eax */
  w32((uint32_t)(0x11b67e88), (EAX));
  /* 11b490d9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b490dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b490dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b490e0 push edx */
  push32((uint32_t)(EDX));
  /* 11b490e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b490e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b490e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b490e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b490ea call 0x11b49490 */
  push32(0x11b490efu); f_11b49490();
  /* 11b490ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b490f2 jmp 0x11b49388 */
  goto L_11b49388;
L_11b490f7:;
  /* 11b490f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b490fa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b490fe jg 0x11b4911c */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4911c;
  /* 11b49100 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49103 push eax */
  push32((uint32_t)(EAX));
  /* 11b49104 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49107 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49108 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4910b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11b49111 push eax */
  push32((uint32_t)(EAX));
  /* 11b49112 call 0x11b49440 */
  push32(0x11b49117u); f_11b49440();
  /* 11b49117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4911a jmp 0x11b49136 */
  goto L_11b49136;
L_11b4911c:;
  /* 11b4911c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4911f push ecx */
  push32((uint32_t)(ECX));
  /* 11b49120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49123 push edx */
  push32((uint32_t)(EDX));
  /* 11b49124 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49127 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11b4912d push ecx */
  push32((uint32_t)(ECX));
  /* 11b4912e call 0x11b49440 */
  push32(0x11b49133u); f_11b49440();
  /* 11b49133 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b49136:;
  /* 11b49136 jmp 0x11b49388 */
  goto L_11b49388;
L_11b4913b:;
  /* 11b4913b mov edx, dword ptr [0x11b67e78] */
  EDX = (r32((uint32_t)(0x11b67e78)));
  /* 11b49141 mov dword ptr [0x11b67e88], edx */
  w32((uint32_t)(0x11b67e88), (EDX));
  /* 11b49147 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4914a push eax */
  push32((uint32_t)(EAX));
  /* 11b4914b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4914e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4914f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49151 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49154 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49156 push eax */
  push32((uint32_t)(EAX));
  /* 11b49157 call 0x11b49490 */
  push32(0x11b4915cu); f_11b49490();
  /* 11b4915c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4915f jmp 0x11b49388 */
  goto L_11b49388;
L_11b49164:;
  /* 11b49164 mov ecx, dword ptr [0x11b67e78] */
  ECX = (r32((uint32_t)(0x11b67e78)));
  /* 11b4916a mov dword ptr [0x11b67e88], ecx */
  w32((uint32_t)(0x11b67e88), (ECX));
  /* 11b49170 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49173 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b49176 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b49179 jmp 0x11b491cd */
  goto L_11b491cd;
L_11b4917b:;
  /* 11b4917b mov ecx, dword ptr [0x11b67e78] */
  ECX = (r32((uint32_t)(0x11b67e78)));
  /* 11b49181 mov dword ptr [0x11b67e88], ecx */
  w32((uint32_t)(0x11b67e88), (ECX));
  /* 11b49187 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4918a push edx */
  push32((uint32_t)(EDX));
  /* 11b4918b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4918e push eax */
  push32((uint32_t)(EAX));
  /* 11b4918f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b49191 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49194 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b49197 push edx */
  push32((uint32_t)(EDX));
  /* 11b49198 call 0x11b49490 */
  push32(0x11b4919du); f_11b49490();
  /* 11b4919d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b491a0 jmp 0x11b49388 */
  goto L_11b49388;
L_11b491a5:;
  /* 11b491a5 mov eax, dword ptr [0x11b67e78] */
  EAX = (r32((uint32_t)(0x11b67e78)));
  /* 11b491aa mov dword ptr [0x11b67e88], eax */
  w32((uint32_t)(0x11b67e88), (EAX));
  /* 11b491af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b491b2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b491b6 jne 0x11b491c1 */
  if (!C.zf) goto L_11b491c1;
  /* 11b491b8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11b491bf jmp 0x11b491cd */
  goto L_11b491cd;
L_11b491c1:;
  /* 11b491c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b491c4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b491c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b491ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b491cd:;
  /* 11b491cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b491d0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b491d3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b491d6 jge 0x11b491e1 */
  if ((C.sf==C.of)) goto L_11b491e1;
  /* 11b491d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b491df jmp 0x11b4920e */
  goto L_11b4920e;
L_11b491e1:;
  /* 11b491e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b491e4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b491e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b491e8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11b491ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b491ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b491f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b491f5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b491f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b491f9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11b491fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b49200 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49203 jl 0x11b4920e */
  if ((C.sf!=C.of)) goto L_11b4920e;
  /* 11b49205 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4920b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b4920e:;
  /* 11b4920e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49211 push eax */
  push32((uint32_t)(EAX));
  /* 11b49212 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49215 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49216 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4921b push edx */
  push32((uint32_t)(EDX));
  /* 11b4921c call 0x11b49490 */
  push32(0x11b49221u); f_11b49490();
  /* 11b49221 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49224 jmp 0x11b49388 */
  goto L_11b49388;
L_11b49229:;
  /* 11b49229 cmp dword ptr [0x11b67e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49230 je 0x11b49260 */
  if (C.zf) goto L_11b49260;
  /* 11b49232 mov dword ptr [0x11b67e78], 0 */
  w32((uint32_t)(0x11b67e78), (0x0u));
  /* 11b4923c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4923f push eax */
  push32((uint32_t)(EAX));
  /* 11b49240 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49243 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49244 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49247 push edx */
  push32((uint32_t)(EDX));
  /* 11b49248 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4924b push eax */
  push32((uint32_t)(EAX));
  /* 11b4924c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4924f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11b49255 push edx */
  push32((uint32_t)(EDX));
  /* 11b49256 call 0x11b495f0 */
  push32(0x11b4925bu); f_11b495f0();
  /* 11b4925b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4925e jmp 0x11b49282 */
  goto L_11b49282;
L_11b49260:;
  /* 11b49260 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49263 push eax */
  push32((uint32_t)(EAX));
  /* 11b49264 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49267 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49268 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4926b push edx */
  push32((uint32_t)(EDX));
  /* 11b4926c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4926f push eax */
  push32((uint32_t)(EAX));
  /* 11b49270 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49273 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11b49279 push edx */
  push32((uint32_t)(EDX));
  /* 11b4927a call 0x11b495f0 */
  push32(0x11b4927fu); f_11b495f0();
  /* 11b4927f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b49282:;
  /* 11b49282 jmp 0x11b49388 */
  goto L_11b49388;
L_11b49287:;
  /* 11b49287 mov dword ptr [0x11b67e78], 0 */
  w32((uint32_t)(0x11b67e78), (0x0u));
  /* 11b49291 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49294 push eax */
  push32((uint32_t)(EAX));
  /* 11b49295 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49298 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49299 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4929c push edx */
  push32((uint32_t)(EDX));
  /* 11b4929d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b492a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b492a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b492a4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11b492aa push edx */
  push32((uint32_t)(EDX));
  /* 11b492ab call 0x11b495f0 */
  push32(0x11b492b0u); f_11b495f0();
  /* 11b492b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b492b3 jmp 0x11b49388 */
  goto L_11b49388;
L_11b492b8:;
  /* 11b492b8 mov eax, dword ptr [0x11b67e78] */
  EAX = (r32((uint32_t)(0x11b67e78)));
  /* 11b492bd mov dword ptr [0x11b67e88], eax */
  w32((uint32_t)(0x11b67e88), (EAX));
  /* 11b492c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b492c5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b492c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b492c9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b492ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b492d0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b492d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b492d6 push edx */
  push32((uint32_t)(EDX));
  /* 11b492d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b492da push eax */
  push32((uint32_t)(EAX));
  /* 11b492db push 2 */
  push32((uint32_t)(0x2u));
  /* 11b492dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b492e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b492e1 call 0x11b49490 */
  push32(0x11b492e6u); f_11b49490();
  /* 11b492e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b492e9 jmp 0x11b49388 */
  goto L_11b49388;
L_11b492ee:;
  /* 11b492ee mov edx, dword ptr [0x11b67e78] */
  EDX = (r32((uint32_t)(0x11b67e78)));
  /* 11b492f4 mov dword ptr [0x11b67e88], edx */
  w32((uint32_t)(0x11b67e88), (EDX));
  /* 11b492fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b492fd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b49300 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b49301 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b49306 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b49308 mov ecx, eax */
  ECX = (EAX);
  /* 11b4930a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4930d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b49310 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49313 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b49316 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b49317 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11b4931c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b4931e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49320 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b49323 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49326 push eax */
  push32((uint32_t)(EAX));
  /* 11b49327 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4932a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4932b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b4932d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49330 push edx */
  push32((uint32_t)(EDX));
  /* 11b49331 call 0x11b49490 */
  push32(0x11b49336u); f_11b49490();
  /* 11b49336 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49339 jmp 0x11b49388 */
  goto L_11b49388;
L_11b4933b:;
  /* 11b4933b call 0x11b3ac00 */
  push32(0x11b49340u); f_11b3ac00();
  /* 11b49340 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49343 push eax */
  push32((uint32_t)(EAX));
  /* 11b49344 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49347 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49348 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4934b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4934d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49351 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11b49354 mov ecx, dword ptr [eax*4 + 0x11b65d44] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65d44)));
  /* 11b4935b push ecx */
  push32((uint32_t)(ECX));
  /* 11b4935c call 0x11b49440 */
  push32(0x11b49361u); f_11b49440();
  /* 11b49361 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49364 jmp 0x11b49388 */
  goto L_11b49388;
L_11b49366:;
  /* 11b49366 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49369 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b4936b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11b4936e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49371 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49373 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49376 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49379 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b4937b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4937e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49380 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49386 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b49388:;
  /* 11b49388 pop esi */
  ESI = (pop32());
  /* 11b49389 mov esp, ebp */
  ESP = (EBP);
  /* 11b4938b pop ebp */
  EBP = (pop32());
  /* 11b4938c ret  */
  ESPCHK(0x11b48e20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11b49440 (72 bytes, 30 insns) */
void f_11b49440(void) {
  FTRACE(0x11b49440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49440 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49441 mov ebp, esp */
  EBP = (ESP);
L_11b49443:;
  /* 11b49443 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49446 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49449 je 0x11b49486 */
  if (C.zf) goto L_11b49486;
  /* 11b4944b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4944e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b49451 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b49453 je 0x11b49486 */
  if (C.zf) goto L_11b49486;
  /* 11b49455 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49458 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4945a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4945d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4945f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b49461 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49464 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49469 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4946c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b4946e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49474 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b49477 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4947a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b4947c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4947f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49482 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b49484 jmp 0x11b49443 */
  goto L_11b49443;
L_11b49486:;
  /* 11b49486 pop ebp */
  EBP = (pop32());
  /* 11b49487 ret  */
  ESPCHK(0x11b49440u, _esp0);
  ESP += 4; return;
}

/* FUN_10019490 @ 0x11b49490 (173 bytes, 64 insns) */
void f_11b49490(void) {
  FTRACE(0x11b49490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49490 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49491 mov ebp, esp */
  EBP = (ESP);
  /* 11b49493 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4949b cmp dword ptr [0x11b67e88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b494a2 je 0x11b494ba */
  if (C.zf) goto L_11b494ba;
  /* 11b494a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b494a7 push eax */
  push32((uint32_t)(EAX));
  /* 11b494a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b494ab push ecx */
  push32((uint32_t)(ECX));
  /* 11b494ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b494af push edx */
  push32((uint32_t)(EDX));
  /* 11b494b0 call 0x11b49540 */
  push32(0x11b494b5u); f_11b49540();
  /* 11b494b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b494b8 jmp 0x11b49539 */
  goto L_11b49539;
L_11b494ba:;
  /* 11b494ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b494bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b494c0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b494c2 jae 0x11b49530 */
  if (!C.cf) goto L_11b49530;
  /* 11b494c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b494c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b494ca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11b494cd jmp 0x11b494d8 */
  goto L_11b494d8;
L_11b494cf:;
  /* 11b494cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b494d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b494d5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11b494d8:;
  /* 11b494d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b494db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b494de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b494e0 je 0x11b49514 */
  if (C.zf) goto L_11b49514;
  /* 11b494e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b494e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b494e6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b494eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b494ed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b494f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b494f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b494f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b494f8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11b494fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b494fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b494ff mov ecx, 0xa */
  ECX = (0xau);
  /* 11b49504 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b49506 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b49509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4950c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4950f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b49512 jmp 0x11b494cf */
  goto L_11b494cf;
L_11b49514:;
  /* 11b49514 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49517 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b49519 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4951c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4951f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b49521 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49524 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b49526 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49529 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4952c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b4952e jmp 0x11b49539 */
  goto L_11b49539;
L_11b49530:;
  /* 11b49530 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49533 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11b49539:;
  /* 11b49539 mov esp, ebp */
  ESP = (EBP);
  /* 11b4953b pop ebp */
  EBP = (pop32());
  /* 11b4953c ret  */
  ESPCHK(0x11b49490u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11b49540 (172 bytes, 65 insns) */
void f_11b49540(void) {
  FTRACE(0x11b49540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49540 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49541 mov ebp, esp */
  EBP = (ESP);
  /* 11b49543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49546 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49549 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4954b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b4954e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49551 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49554 jbe 0x11b4959b */
  if ((C.cf||C.zf)) goto L_11b4959b;
L_11b49556:;
  /* 11b49556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49559 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b4955a mov ecx, 0xa */
  ECX = (0xau);
  /* 11b4955f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b49561 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49567 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b49569 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4956c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4956f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b49572 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49575 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49577 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4957a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4957d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b4957f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49582 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b49583 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b49588 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b4958a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b4958d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49591 jle 0x11b4959b */
  if ((C.zf||C.sf!=C.of)) goto L_11b4959b;
  /* 11b49593 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49596 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49599 ja 0x11b49556 */
  if ((!C.cf&&!C.zf)) goto L_11b49556;
L_11b4959b:;
  /* 11b4959b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4959e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b495a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b495a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b495a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b495a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b495ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b495ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b495b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b495b4:;
  /* 11b495b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b495b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b495b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11b495bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b495bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b495c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b495c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b495c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b495c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b495cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b495cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b495d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b495d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b495d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b495da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b495dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b495e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b495e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b495e6 jb 0x11b495b4 */
  if (C.cf) goto L_11b495b4;
  /* 11b495e8 mov esp, ebp */
  ESP = (EBP);
  /* 11b495ea pop ebp */
  EBP = (pop32());
  /* 11b495eb ret  */
  ESPCHK(0x11b49540u, _esp0);
  ESP += 4; return;
}

/* FUN_100195f0 @ 0x11b495f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11b495f0(void) {
  FTRACE(0x11b495f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b495f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b495f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b495f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11b495f6:;
  /* 11b495f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b495f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b495fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b495fe je 0x11b49a6c */
  if (C.zf) goto L_11b49a6c;
  /* 11b49604 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49607 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4960a je 0x11b49a6c */
  if (C.zf) goto L_11b49a6c;
  /* 11b49610 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b49614 mov dword ptr [0x11b67e88], 0 */
  w32((uint32_t)(0x11b67e88), (0x0u));
  /* 11b4961e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b49625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49628 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4962b jmp 0x11b49636 */
  goto L_11b49636;
L_11b4962d:;
  /* 11b4962d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49630 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49633 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b49636:;
  /* 11b49636 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49639 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b4963c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4963f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b49642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49645 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49648 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b4964b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4964d jne 0x11b49651 */
  if (!C.zf) goto L_11b49651;
  /* 11b4964f jmp 0x11b4962d */
  goto L_11b4962d;
L_11b49651:;
  /* 11b49651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b49654 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49657 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4965a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4965d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b49660 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b49663 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b49666 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49669 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b4966c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49670 ja 0x11b499c0 */
  if ((!C.cf&&!C.zf)) goto L_11b499c0;
  /* 11b49676 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b49679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4967b mov al, byte ptr [ecx + 0x11b49a9c] */
  AL = (r8((uint32_t)(ECX + 0x11b49a9c)));
  /* 11b49681 jmp dword ptr [eax*4 + 0x11b49a70] */
  switch (EAX) {
    case 0: goto L_11b498df;
    case 1: goto L_11b497c3;
    case 2: goto L_11b4974e;
    case 3: goto L_11b49688;
    case 4: goto L_11b496c6;
    case 5: goto L_11b49727;
    case 6: goto L_11b49775;
    case 7: goto L_11b4979c;
    case 8: goto L_11b4980a;
    case 9: goto L_11b49704;
    case 10: goto L_11b499c0;
    default: x86_unimpl("switch@0x11b49681 out of table"); return;
  }
L_11b49688:;
  /* 11b49688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4968b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b4968e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b49691 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49694 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b49697 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4969b ja 0x11b496c1 */
  if ((!C.cf&&!C.zf)) goto L_11b496c1;
  /* 11b4969d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b496a0 jmp dword ptr [ecx*4 + 0x11b49aef] */
  switch (ECX) {
    case 0: goto L_11b496a7;
    case 1: goto L_11b496b1;
    case 2: goto L_11b496b7;
    case 3: goto L_11b496bd;
    case 4: goto L_11b496e5;
    case 5: goto L_11b496ef;
    case 6: goto L_11b496f5;
    case 7: goto L_11b496fb;
    default: x86_unimpl("switch@0x11b496a0 out of table"); return;
  }
L_11b496a7:;
  /* 11b496a7 mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b496b1:;
  /* 11b496b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11b496b5 jmp 0x11b496c1 */
  goto L_11b496c1;
L_11b496b7:;
  /* 11b496b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11b496bb jmp 0x11b496c1 */
  goto L_11b496c1;
L_11b496bd:;
  /* 11b496bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11b496c1:;
  /* 11b496c1 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b496c6:;
  /* 11b496c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b496c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b496cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b496cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b496d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b496d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b496d9 ja 0x11b496ff */
  if ((!C.cf&&!C.zf)) goto L_11b496ff;
  /* 11b496db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b496de jmp dword ptr [ecx*4 + 0x11b49aff] */
  switch (ECX) {
    case 0: goto L_11b496e5;
    case 1: goto L_11b496ef;
    case 2: goto L_11b496f5;
    case 3: goto L_11b496fb;
    default: x86_unimpl("switch@0x11b496de out of table"); return;
  }
L_11b496e5:;
  /* 11b496e5 mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b496ef:;
  /* 11b496ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11b496f3 jmp 0x11b496ff */
  goto L_11b496ff;
L_11b496f5:;
  /* 11b496f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11b496f9 jmp 0x11b496ff */
  goto L_11b496ff;
L_11b496fb:;
  /* 11b496fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11b496ff:;
  /* 11b496ff jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b49704:;
  /* 11b49704 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49707 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b4970a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4970e je 0x11b49718 */
  if (C.zf) goto L_11b49718;
  /* 11b49710 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49714 je 0x11b4971e */
  if (C.zf) goto L_11b4971e;
  /* 11b49716 jmp 0x11b49722 */
  goto L_11b49722;
L_11b49718:;
  /* 11b49718 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11b4971c jmp 0x11b49722 */
  goto L_11b49722;
L_11b4971e:;
  /* 11b4971e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11b49722:;
  /* 11b49722 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b49727:;
  /* 11b49727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4972a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b4972d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49731 je 0x11b4973b */
  if (C.zf) goto L_11b4973b;
  /* 11b49733 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49737 je 0x11b49745 */
  if (C.zf) goto L_11b49745;
  /* 11b49739 jmp 0x11b49749 */
  goto L_11b49749;
L_11b4973b:;
  /* 11b4973b mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b49745:;
  /* 11b49745 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11b49749:;
  /* 11b49749 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b4974e:;
  /* 11b4974e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49751 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11b49754 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49758 je 0x11b49762 */
  if (C.zf) goto L_11b49762;
  /* 11b4975a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4975e je 0x11b4976c */
  if (C.zf) goto L_11b4976c;
  /* 11b49760 jmp 0x11b49770 */
  goto L_11b49770;
L_11b49762:;
  /* 11b49762 mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b4976c:;
  /* 11b4976c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11b49770:;
  /* 11b49770 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b49775:;
  /* 11b49775 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49778 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11b4977b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4977f je 0x11b49789 */
  if (C.zf) goto L_11b49789;
  /* 11b49781 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49785 je 0x11b49793 */
  if (C.zf) goto L_11b49793;
  /* 11b49787 jmp 0x11b49797 */
  goto L_11b49797;
L_11b49789:;
  /* 11b49789 mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b49793:;
  /* 11b49793 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11b49797:;
  /* 11b49797 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b4979c:;
  /* 11b4979c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4979f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11b497a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b497a6 je 0x11b497b0 */
  if (C.zf) goto L_11b497b0;
  /* 11b497a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b497ac je 0x11b497ba */
  if (C.zf) goto L_11b497ba;
  /* 11b497ae jmp 0x11b497be */
  goto L_11b497be;
L_11b497b0:;
  /* 11b497b0 mov dword ptr [0x11b67e88], 1 */
  w32((uint32_t)(0x11b67e88), (0x1u));
L_11b497ba:;
  /* 11b497ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11b497be:;
  /* 11b497be jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b497c3:;
  /* 11b497c3 push 0x11b63de8 */
  push32((uint32_t)(0x11b63de8u));
  /* 11b497c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b497cb push ecx */
  push32((uint32_t)(ECX));
  /* 11b497cc call 0x11b4a020 */
  push32(0x11b497d1u); f_11b4a020();
  /* 11b497d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b497d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b497d6 jne 0x11b497e3 */
  if (!C.zf) goto L_11b497e3;
  /* 11b497d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b497db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b497de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b497e1 jmp 0x11b49801 */
  goto L_11b49801;
L_11b497e3:;
  /* 11b497e3 push 0x11b63de4 */
  push32((uint32_t)(0x11b63de4u));
  /* 11b497e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b497eb push eax */
  push32((uint32_t)(EAX));
  /* 11b497ec call 0x11b4a020 */
  push32(0x11b497f1u); f_11b4a020();
  /* 11b497f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b497f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b497f6 jne 0x11b49801 */
  if (!C.zf) goto L_11b49801;
  /* 11b497f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b497fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b497fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b49801:;
  /* 11b49801 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11b49805 jmp 0x11b499c0 */
  goto L_11b499c0;
L_11b4980a:;
  /* 11b4980a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4980d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49811 jg 0x11b49821 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b49821;
  /* 11b49813 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49816 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11b4981c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b4981f jmp 0x11b4982d */
  goto L_11b4982d;
L_11b49821:;
  /* 11b49821 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49824 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11b4982a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b4982d:;
  /* 11b4982d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49831 jle 0x11b498d4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b498d4;
  /* 11b49837 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4983a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4983d jbe 0x11b498d4 */
  if ((C.cf||C.zf)) goto L_11b498d4;
  /* 11b49843 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b49846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49848 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4984a mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b49850 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b49852 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b49856 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4985c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4985e je 0x11b49897 */
  if (C.zf) goto L_11b49897;
  /* 11b49860 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49863 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49866 jbe 0x11b49897 */
  if ((C.cf||C.zf)) goto L_11b49897;
  /* 11b49868 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4986b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b4986d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b49870 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b49872 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b49874 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49877 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4987c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4987f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b49881 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b49884 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49887 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b4988a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4988d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4988f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49892 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49895 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b49897:;
  /* 11b49897 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4989a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4989c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4989f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b498a1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b498a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b498a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b498a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b498ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b498ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b498b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b498b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b498b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b498b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b498bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b498be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b498c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b498c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b498c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b498c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b498cc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b498cf jmp 0x11b4982d */
  goto L_11b4982d;
L_11b498d4:;
  /* 11b498d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b498d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b498da jmp 0x11b495f6 */
  goto L_11b495f6;
L_11b498df:;
  /* 11b498df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b498e2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b498e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b498e7 je 0x11b499b2 */
  if (C.zf) goto L_11b499b2;
  /* 11b498ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b498f0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b498f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11b498f6:;
  /* 11b498f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b498f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b498fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b498fe je 0x11b499b0 */
  if (C.zf) goto L_11b499b0;
  /* 11b49904 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49907 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4990a je 0x11b499b0 */
  if (C.zf) goto L_11b499b0;
  /* 11b49910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49913 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b49916 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49919 jne 0x11b49929 */
  if (!C.zf) goto L_11b49929;
  /* 11b4991b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4991e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49921 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b49924 jmp 0x11b499b0 */
  goto L_11b499b0;
L_11b49929:;
  /* 11b49929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4992c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4992e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b49930 mov edx, dword ptr [0x11b65dec] */
  EDX = (r32((uint32_t)(0x11b65dec)));
  /* 11b49936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49938 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11b4993c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b49941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b49943 je 0x11b4997c */
  if (C.zf) goto L_11b4997c;
  /* 11b49945 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49948 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4994b jbe 0x11b4997c */
  if ((C.cf||C.zf)) goto L_11b4997c;
  /* 11b4994d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49950 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49952 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49955 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b49957 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b49959 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4995c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b4995e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49961 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49964 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b49966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49969 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4996c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b4996f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49972 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49974 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49977 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4997a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b4997c:;
  /* 11b4997c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4997f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49981 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49984 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b49986 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b49988 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4998b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b4998d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49990 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49993 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b49995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4999b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b4999e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b499a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b499a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b499a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b499a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b499ab jmp 0x11b498f6 */
  goto L_11b498f6;
L_11b499b0:;
  /* 11b499b0 jmp 0x11b499bb */
  goto L_11b499bb;
L_11b499b2:;
  /* 11b499b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b499b5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b499b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b499bb:;
  /* 11b499bb jmp 0x11b495f6 */
  goto L_11b495f6;
L_11b499c0:;
  /* 11b499c0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b499c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b499c6 je 0x11b499ec */
  if (C.zf) goto L_11b499ec;
  /* 11b499c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b499cb push edx */
  push32((uint32_t)(EDX));
  /* 11b499cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b499cf push eax */
  push32((uint32_t)(EAX));
  /* 11b499d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b499d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b499d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b499d7 push edx */
  push32((uint32_t)(EDX));
  /* 11b499d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b499db push eax */
  push32((uint32_t)(EAX));
  /* 11b499dc call 0x11b48e20 */
  push32(0x11b499e1u); f_11b48e20();
  /* 11b499e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b499e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b499e7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b499ea jmp 0x11b49a67 */
  goto L_11b49a67;
L_11b499ec:;
  /* 11b499ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b499ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b499f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b499f3 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b499f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b499fb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b499ff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b49a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b49a07 je 0x11b49a38 */
  if (C.zf) goto L_11b49a38;
  /* 11b49a09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b49a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49a11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b49a13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b49a15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49a1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49a1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b49a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49a28 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b49a2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49a2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49a30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49a33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49a36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b49a38:;
  /* 11b49a38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b49a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49a40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b49a42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b49a44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b49a49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49a4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49a4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b49a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49a54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49a57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b49a5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49a5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b49a5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49a62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49a65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b49a67:;
  /* 11b49a67 jmp 0x11b495f6 */
  goto L_11b495f6;
L_11b49a6c:;
  /* 11b49a6c mov esp, ebp */
  ESP = (EBP);
  /* 11b49a6e pop ebp */
  EBP = (pop32());
  /* 11b49a6f ret  */
  ESPCHK(0x11b495f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b10 @ 0x11b49b10 (650 bytes, 178 insns) */
void f_11b49b10(void) {
  FTRACE(0x11b49b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49b11 mov ebp, esp */
  EBP = (ESP);
  /* 11b49b13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b49b19 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49b1d jne 0x11b49c79 */
  if (!C.zf) goto L_11b49c79;
  /* 11b49b23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49b26 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11b49b2c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11b49b32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b49b35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b49b3c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11b49b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49b48 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11b49b4e push edx */
  push32((uint32_t)(EDX));
  /* 11b49b4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49b52 push eax */
  push32((uint32_t)(EAX));
  /* 11b49b53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49b56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49b57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49b5a push edx */
  push32((uint32_t)(EDX));
  /* 11b49b5b call 0x11b4a6c0 */
  push32(0x11b49b60u); f_11b4a6c0();
  /* 11b49b60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49b63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b49b66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49b6a jne 0x11b49bff */
  if (!C.zf) goto L_11b49bff;
  /* 11b49b70 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b49b76u);
  /* 11b49b76 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49b79 je 0x11b49b80 */
  if (C.zf) goto L_11b49b80;
  /* 11b49b7b jmp 0x11b49c5d */
  goto L_11b49c5d;
L_11b49b80:;
  /* 11b49b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49b86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49b89 push eax */
  push32((uint32_t)(EAX));
  /* 11b49b8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49b8d push ecx */
  push32((uint32_t)(ECX));
  /* 11b49b8e call 0x11b4a6c0 */
  push32(0x11b49b93u); f_11b4a6c0();
  /* 11b49b93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49b96 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11b49b9c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49ba3 jne 0x11b49baa */
  if (!C.zf) goto L_11b49baa;
  /* 11b49ba5 jmp 0x11b49c5d */
  goto L_11b49c5d;
L_11b49baa:;
  /* 11b49baa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11b49bac push 0x11b63df0 */
  push32((uint32_t)(0x11b63df0u));
  /* 11b49bb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49bb3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11b49bb9 push edx */
  push32((uint32_t)(EDX));
  /* 11b49bba call 0x11b37ce0 */
  push32(0x11b49bbfu); f_11b37ce0();
  /* 11b49bbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49bc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b49bc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49bc9 jne 0x11b49bd0 */
  if (!C.zf) goto L_11b49bd0;
  /* 11b49bcb jmp 0x11b49c5d */
  goto L_11b49c5d;
L_11b49bd0:;
  /* 11b49bd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b49bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49bd9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11b49bdf push eax */
  push32((uint32_t)(EAX));
  /* 11b49be0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49be4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49be7 push edx */
  push32((uint32_t)(EDX));
  /* 11b49be8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49beb push eax */
  push32((uint32_t)(EAX));
  /* 11b49bec call 0x11b4a6c0 */
  push32(0x11b49bf1u); f_11b4a6c0();
  /* 11b49bf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49bf4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b49bf7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49bfb jne 0x11b49bff */
  if (!C.zf) goto L_11b49bff;
  /* 11b49bfd jmp 0x11b49c5d */
  goto L_11b49c5d;
L_11b49bff:;
  /* 11b49bff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11b49c01 push 0x11b63df0 */
  push32((uint32_t)(0x11b63df0u));
  /* 11b49c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49c08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b49c0b push ecx */
  push32((uint32_t)(ECX));
  /* 11b49c0c call 0x11b37ce0 */
  push32(0x11b49c11u); f_11b37ce0();
  /* 11b49c11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49c14 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11b49c1a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b49c1c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11b49c22 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49c25 jne 0x11b49c29 */
  if (!C.zf) goto L_11b49c29;
  /* 11b49c27 jmp 0x11b49c5d */
  goto L_11b49c5d;
L_11b49c29:;
  /* 11b49c29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b49c2c push ecx */
  push32((uint32_t)(ECX));
  /* 11b49c2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49c30 push edx */
  push32((uint32_t)(EDX));
  /* 11b49c31 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11b49c37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b49c39 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49c3a call 0x11b3c220 */
  push32(0x11b49c3fu); f_11b3c220();
  /* 11b49c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49c42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49c46 je 0x11b49c56 */
  if (C.zf) goto L_11b49c56;
  /* 11b49c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49c4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49c4d push edx */
  push32((uint32_t)(EDX));
  /* 11b49c4e call 0x11b38770 */
  push32(0x11b49c53u); f_11b38770();
  /* 11b49c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b49c56:;
  /* 11b49c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49c58 jmp 0x11b49d96 */
  goto L_11b49d96;
L_11b49c5d:;
  /* 11b49c5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49c61 je 0x11b49c71 */
  if (C.zf) goto L_11b49c71;
  /* 11b49c63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b49c65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b49c68 push eax */
  push32((uint32_t)(EAX));
  /* 11b49c69 call 0x11b38770 */
  push32(0x11b49c6eu); f_11b38770();
  /* 11b49c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b49c71:;
  /* 11b49c71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b49c74 jmp 0x11b49d96 */
  goto L_11b49d96;
L_11b49c79:;
  /* 11b49c79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49c7d jne 0x11b49d93 */
  if (!C.zf) goto L_11b49d93;
  /* 11b49c83 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11b49c8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49c90 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11b49c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49c98 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11b49c9e push edx */
  push32((uint32_t)(EDX));
  /* 11b49c9f push 0x11b67e60 */
  push32((uint32_t)(0x11b67e60u));
  /* 11b49ca4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49ca7 push eax */
  push32((uint32_t)(EAX));
  /* 11b49ca8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49cab push ecx */
  push32((uint32_t)(ECX));
  /* 11b49cac call 0x11b4a520 */
  push32(0x11b49cb1u); f_11b4a520();
  /* 11b49cb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b49cb6 jne 0x11b49cc0 */
  if (!C.zf) goto L_11b49cc0;
  /* 11b49cb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b49cbb jmp 0x11b49d96 */
  goto L_11b49d96;
L_11b49cc0:;
  /* 11b49cc0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b49cc6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b49cc9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11b49cd3 jmp 0x11b49ce4 */
  goto L_11b49ce4;
L_11b49cd5:;
  /* 11b49cd5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b49cdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49cde mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11b49ce4:;
  /* 11b49ce4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49ceb jge 0x11b49d8f */
  if ((C.sf==C.of)) goto L_11b49d8f;
  /* 11b49cf1 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49cf8 jle 0x11b49d2b */
  if ((C.zf||C.sf!=C.of)) goto L_11b49d2b;
  /* 11b49cfa push 4 */
  push32((uint32_t)(0x4u));
  /* 11b49cfc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b49d02 mov dl, byte ptr [ecx*2 + 0x11b67e60] */
  DL = (r8((uint32_t)(ECX*2 + 0x11b67e60)));
  /* 11b49d09 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11b49d0f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11b49d15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b49d1a push eax */
  push32((uint32_t)(EAX));
  /* 11b49d1b call 0x11b3c7c0 */
  push32(0x11b49d20u); f_11b3c7c0();
  /* 11b49d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49d23 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11b49d29 jmp 0x11b49d5e */
  goto L_11b49d5e;
L_11b49d2b:;
  /* 11b49d2b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b49d31 mov dl, byte ptr [ecx*2 + 0x11b67e60] */
  DL = (r8((uint32_t)(ECX*2 + 0x11b67e60)));
  /* 11b49d38 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11b49d3e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11b49d44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b49d49 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b49d4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b49d51 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b49d55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b49d58 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11b49d5e:;
  /* 11b49d5e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49d65 je 0x11b49d88 */
  if (C.zf) goto L_11b49d88;
  /* 11b49d67 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b49d6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b49d70 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b49d73 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11b49d7a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11b49d7e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b49d84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b49d86 jmp 0x11b49d8a */
  goto L_11b49d8a;
L_11b49d88:;
  /* 11b49d88 jmp 0x11b49d8f */
  goto L_11b49d8f;
L_11b49d8a:;
  /* 11b49d8a jmp 0x11b49cd5 */
  goto L_11b49cd5;
L_11b49d8f:;
  /* 11b49d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49d91 jmp 0x11b49d96 */
  goto L_11b49d96;
L_11b49d93:;
  /* 11b49d93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b49d96:;
  /* 11b49d96 mov esp, ebp */
  ESP = (EBP);
  /* 11b49d98 pop ebp */
  EBP = (pop32());
  /* 11b49d99 ret  */
  ESPCHK(0x11b49b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10019da0 @ 0x11b49da0 (10 bytes, 5 insns) */
void f_11b49da0(void) {
  FTRACE(0x11b49da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49da1 mov ebp, esp */
  EBP = (ESP);
  /* 11b49da3 mov eax, dword ptr [0x11b66ef8] */
  EAX = (r32((uint32_t)(0x11b66ef8)));
  /* 11b49da8 pop ebp */
  EBP = (pop32());
  /* 11b49da9 ret  */
  ESPCHK(0x11b49da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019db0 @ 0x11b49db0 (575 bytes, 196 insns) */
void f_11b49db0(void) {
  FTRACE(0x11b49db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b49db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b49db1 mov ebp, esp */
  EBP = (ESP);
  /* 11b49db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b49db5 push 0x11b63e00 */
  push32((uint32_t)(0x11b63e00u));
  /* 11b49dba push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b49dbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b49dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11b49dc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b49dcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b49dd1 push esi */
  push32((uint32_t)(ESI));
  /* 11b49dd2 push edi */
  push32((uint32_t)(EDI));
  /* 11b49dd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b49dd6 cmp dword ptr [0x11b67e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49ddd jne 0x11b49e2e */
  if (!C.zf) goto L_11b49e2e;
  /* 11b49ddf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b49de2 push eax */
  push32((uint32_t)(EAX));
  /* 11b49de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b49de5 push 0x11b634c4 */
  push32((uint32_t)(0x11b634c4u));
  /* 11b49dea push 1 */
  push32((uint32_t)(0x1u));
  /* 11b49dec call dword ptr [0x11b6a32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a32c))), 0x11b49df2u);
  /* 11b49df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b49df4 je 0x11b49e02 */
  if (C.zf) goto L_11b49e02;
  /* 11b49df6 mov dword ptr [0x11b67e6c], 1 */
  w32((uint32_t)(0x11b67e6c), (0x1u));
  /* 11b49e00 jmp 0x11b49e2e */
  goto L_11b49e2e;
L_11b49e02:;
  /* 11b49e02 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11b49e05 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b49e08 push 0x11b634c0 */
  push32((uint32_t)(0x11b634c0u));
  /* 11b49e0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b49e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49e11 call dword ptr [0x11b6a330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a330))), 0x11b49e17u);
  /* 11b49e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b49e19 je 0x11b49e27 */
  if (C.zf) goto L_11b49e27;
  /* 11b49e1b mov dword ptr [0x11b67e6c], 2 */
  w32((uint32_t)(0x11b67e6c), (0x2u));
  /* 11b49e25 jmp 0x11b49e2e */
  goto L_11b49e2e;
L_11b49e27:;
  /* 11b49e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49e29 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49e2e:;
  /* 11b49e2e cmp dword ptr [0x11b67e6c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e6c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49e35 jne 0x11b49e52 */
  if (!C.zf) goto L_11b49e52;
  /* 11b49e37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49e3a push edx */
  push32((uint32_t)(EDX));
  /* 11b49e3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49e3e push eax */
  push32((uint32_t)(EAX));
  /* 11b49e3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49e42 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49e43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49e46 push edx */
  push32((uint32_t)(EDX));
  /* 11b49e47 call dword ptr [0x11b6a32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a32c))), 0x11b49e4du);
  /* 11b49e4d jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49e52:;
  /* 11b49e52 cmp dword ptr [0x11b67e6c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e6c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49e59 jne 0x11b4a007 */
  if (!C.zf) goto L_11b4a007;
  /* 11b49e5f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49e63 jne 0x11b49e6d */
  if (!C.zf) goto L_11b49e6d;
  /* 11b49e65 mov eax, dword ptr [0x11b67dd8] */
  EAX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b49e6a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11b49e6d:;
  /* 11b49e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49e78 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49e79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49e7c push edx */
  push32((uint32_t)(EDX));
  /* 11b49e7d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b49e82 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49e85 push eax */
  push32((uint32_t)(EAX));
  /* 11b49e86 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b49e8cu);
  /* 11b49e8c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b49e8f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49e93 jne 0x11b49e9c */
  if (!C.zf) goto L_11b49e9c;
  /* 11b49e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49e97 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49e9c:;
  /* 11b49e9c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b49ea3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b49ea6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49ea9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b49eab call 0x11b3bba0 */
  push32(0x11b49eb0u); f_11b3bba0();
  /* 11b49eb0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11b49eb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b49eb6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b49eb9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b49ebc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b49ebf push edx */
  push32((uint32_t)(EDX));
  /* 11b49ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49ec2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b49ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11b49ec6 call 0x11b3d530 */
  push32(0x11b49ecbu); f_11b3d530();
  /* 11b49ecb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49ece mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b49ed5 jmp 0x11b49eee */
  goto L_11b49eee;
  /* 11b49ed7 mov eax, 1 */
  EAX = (0x1u);
  /* 11b49edc ret  */
  ESPCHK(0x11b49db0u, _esp0);
  ESP += 4; return;
  /* 11b49edd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b49ee0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11b49ee7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b49eee:;
  /* 11b49eee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49ef2 jne 0x11b49efb */
  if (!C.zf) goto L_11b49efb;
  /* 11b49ef4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49ef6 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49efb:;
  /* 11b49efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b49eff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b49f02 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49f03 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b49f06 push edx */
  push32((uint32_t)(EDX));
  /* 11b49f07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49f0a push eax */
  push32((uint32_t)(EAX));
  /* 11b49f0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b49f0e push ecx */
  push32((uint32_t)(ECX));
  /* 11b49f0f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b49f14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b49f17 push edx */
  push32((uint32_t)(EDX));
  /* 11b49f18 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b49f1eu);
  /* 11b49f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b49f20 jne 0x11b49f29 */
  if (!C.zf) goto L_11b49f29;
  /* 11b49f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49f24 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49f29:;
  /* 11b49f29 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b49f30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b49f33 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11b49f37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b49f3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b49f3c call 0x11b3bba0 */
  push32(0x11b49f41u); f_11b3bba0();
  /* 11b49f41 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11b49f44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b49f47 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b49f4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b49f4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b49f54 jmp 0x11b49f6d */
  goto L_11b49f6d;
  /* 11b49f56 mov eax, 1 */
  EAX = (0x1u);
  /* 11b49f5b ret  */
  ESPCHK(0x11b49db0u, _esp0);
  ESP += 4; return;
  /* 11b49f5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b49f5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b49f66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b49f6d:;
  /* 11b49f6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49f71 jne 0x11b49f7a */
  if (!C.zf) goto L_11b49f7a;
  /* 11b49f73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49f75 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49f7a:;
  /* 11b49f7a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49f7e jne 0x11b49f89 */
  if (!C.zf) goto L_11b49f89;
  /* 11b49f80 mov edx, dword ptr [0x11b67dc8] */
  EDX = (r32((uint32_t)(0x11b67dc8)));
  /* 11b49f86 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11b49f89:;
  /* 11b49f89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49f8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49f8f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11b49f95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49f9b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11b49fa2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49fa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b49fa9 push edx */
  push32((uint32_t)(EDX));
  /* 11b49faa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b49fad push eax */
  push32((uint32_t)(EAX));
  /* 11b49fae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b49fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49fb2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b49fb5 push edx */
  push32((uint32_t)(EDX));
  /* 11b49fb6 call dword ptr [0x11b6a330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a330))), 0x11b49fbcu);
  /* 11b49fbc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b49fbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49fc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49fc5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b49fc7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11b49fcc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49fd2 je 0x11b49fe8 */
  if (C.zf) goto L_11b49fe8;
  /* 11b49fd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49fd7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49fda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b49fdc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b49fe0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b49fe6 je 0x11b49fec */
  if (C.zf) goto L_11b49fec;
L_11b49fe8:;
  /* 11b49fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b49fea jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b49fec:;
  /* 11b49fec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b49fef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b49ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11b49ff2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b49ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b49ff6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b49ff9 push edx */
  push32((uint32_t)(EDX));
  /* 11b49ffa call 0x11b3d590 */
  push32(0x11b49fffu); f_11b3d590();
  /* 11b49fff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a002 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a005 jmp 0x11b4a009 */
  goto L_11b4a009;
L_11b4a007:;
  /* 11b4a007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4a009:;
  /* 11b4a009 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11b4a00c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4a00f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b4a016 pop edi */
  EDI = (pop32());
  /* 11b4a017 pop esi */
  ESI = (pop32());
  /* 11b4a018 pop ebx */
  EBX = (pop32());
  /* 11b4a019 mov esp, ebp */
  ESP = (EBP);
  /* 11b4a01b pop ebp */
  EBP = (pop32());
  /* 11b4a01c ret  */
  ESPCHK(0x11b49db0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a020 @ 0x11b4a020 (208 bytes, 85 insns) */
void f_11b4a020(void) {
  FTRACE(0x11b4a020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a020 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a021 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a023 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a024 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a025 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a026 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a029 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a02c lea eax, [0x11b67dc0] */
  EAX = ((uint32_t)(0x11b67dc0));
  /* 11b4a032 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a036 jne 0x11b4a073 */
  if (!C.zf) goto L_11b4a073;
  /* 11b4a038 mov al, 0xff */
  AL = (0xffu);
  /* 11b4a03a mov edi, edi */
  EDI = (EDI);
L_11b4a03c:;
  /* 11b4a03c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4a03e je 0x11b4a06e */
  if (C.zf) goto L_11b4a06e;
  /* 11b4a040 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b4a042 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b4a043 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11b4a045 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b4a046 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a048 je 0x11b4a03c */
  if (C.zf) goto L_11b4a03c;
  /* 11b4a04a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b4a04c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a04e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b4a050 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b4a053 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4a055 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4a057 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11b4a059 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b4a05b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a05d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b4a05f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b4a062 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4a064 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4a066 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a068 je 0x11b4a03c */
  if (C.zf) goto L_11b4a03c;
  /* 11b4a06a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b4a06c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11b4a06e:;
  /* 11b4a06e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11b4a071 jmp 0x11b4a0eb */
  goto L_11b4a0eb;
L_11b4a073:;
  /* 11b4a073 lock inc dword ptr [0x11b691f4] */
  x86_unimpl("lock inc @ 0x11b4a073");
  /* 11b4a07a cmp dword ptr [0x11b691e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a081 jg 0x11b4a087 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4a087;
  /* 11b4a083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a085 jmp 0x11b4a09c */
  goto L_11b4a09c;
L_11b4a087:;
  /* 11b4a087 lock dec dword ptr [0x11b691f4] */
  x86_unimpl("lock dec @ 0x11b4a087");
  /* 11b4a08e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b4a090 call 0x11b3a900 */
  push32(0x11b4a095u); f_11b3a900();
  /* 11b4a095 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11b4a09c:;
  /* 11b4a09c mov eax, 0xff */
  EAX = (0xffu);
  /* 11b4a0a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b4a0a3 nop  */
  /* nop */
L_11b4a0a4:;
  /* 11b4a0a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4a0a6 je 0x11b4a0cf */
  if (C.zf) goto L_11b4a0cf;
  /* 11b4a0a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b4a0aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b4a0ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b4a0ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b4a0ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a0b0 je 0x11b4a0a4 */
  if (C.zf) goto L_11b4a0a4;
  /* 11b4a0b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a0b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a0b4 call 0x11b3c930 */
  push32(0x11b4a0b9u); f_11b3c930();
  /* 11b4a0b9 mov ebx, eax */
  EBX = (EAX);
  /* 11b4a0bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a0be call 0x11b3c930 */
  push32(0x11b4a0c3u); f_11b3c930();
  /* 11b4a0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a0c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a0c8 je 0x11b4a0a4 */
  if (C.zf) goto L_11b4a0a4;
  /* 11b4a0ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4a0cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b4a0cf:;
  /* 11b4a0cf mov ebx, eax */
  EBX = (EAX);
  /* 11b4a0d1 pop eax */
  EAX = (pop32());
  /* 11b4a0d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a0d4 jne 0x11b4a0df */
  if (!C.zf) goto L_11b4a0df;
  /* 11b4a0d6 lock dec dword ptr [0x11b691f4] */
  x86_unimpl("lock dec @ 0x11b4a0d6");
  /* 11b4a0dd jmp 0x11b4a0e9 */
  goto L_11b4a0e9;
L_11b4a0df:;
  /* 11b4a0df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b4a0e1 call 0x11b3a9a0 */
  push32(0x11b4a0e6u); f_11b3a9a0();
  /* 11b4a0e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b4a0e9:;
  /* 11b4a0e9 mov eax, ebx */
  EAX = (EBX);
L_11b4a0eb:;
  /* 11b4a0eb pop ebx */
  EBX = (pop32());
  /* 11b4a0ec pop esi */
  ESI = (pop32());
  /* 11b4a0ed pop edi */
  EDI = (pop32());
  /* 11b4a0ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b4a0ef ret  */
  ESPCHK(0x11b4a020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a0f0 @ 0x11b4a0f0 (257 bytes, 103 insns) */
void f_11b4a0f0(void) {
  FTRACE(0x11b4a0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a0f3 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a0f4 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a0f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a0f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4a0f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a0fb je 0x11b4a1ea */
  if (C.zf) goto L_11b4a1ea;
  /* 11b4a101 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a104 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a107 lea eax, [0x11b67dc0] */
  EAX = ((uint32_t)(0x11b67dc0));
  /* 11b4a10d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a111 jne 0x11b4a161 */
  if (!C.zf) goto L_11b4a161;
  /* 11b4a113 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11b4a115 mov bl, 0x5a */
  BL = (0x5au);
  /* 11b4a117 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11b4a119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b4a11c:;
  /* 11b4a11c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11b4a11e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b4a120 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b4a122 je 0x11b4a145 */
  if (C.zf) goto L_11b4a145;
  /* 11b4a124 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4a126 je 0x11b4a145 */
  if (C.zf) goto L_11b4a145;
  /* 11b4a128 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b4a129 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b4a12a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a12c jb 0x11b4a134 */
  if (C.cf) goto L_11b4a134;
  /* 11b4a12e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a130 ja 0x11b4a134 */
  if ((!C.cf&&!C.zf)) goto L_11b4a134;
  /* 11b4a132 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11b4a134:;
  /* 11b4a134 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a136 jb 0x11b4a13e */
  if (C.cf) goto L_11b4a13e;
  /* 11b4a138 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a13a ja 0x11b4a13e */
  if ((!C.cf&&!C.zf)) goto L_11b4a13e;
  /* 11b4a13c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11b4a13e:;
  /* 11b4a13e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a140 jne 0x11b4a14f */
  if (!C.zf) goto L_11b4a14f;
  /* 11b4a142 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b4a143 jne 0x11b4a11c */
  if (!C.zf) goto L_11b4a11c;
L_11b4a145:;
  /* 11b4a145 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a147 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a149 je 0x11b4a1ea */
  if (C.zf) goto L_11b4a1ea;
L_11b4a14f:;
  /* 11b4a14f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b4a154 jb 0x11b4a1ea */
  if (C.cf) goto L_11b4a1ea;
  /* 11b4a15a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4a15c jmp 0x11b4a1ea */
  goto L_11b4a1ea;
L_11b4a161:;
  /* 11b4a161 lock inc dword ptr [0x11b691f4] */
  x86_unimpl("lock inc @ 0x11b4a161");
  /* 11b4a168 cmp dword ptr [0x11b691e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a16f jg 0x11b4a175 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4a175;
  /* 11b4a171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a173 jmp 0x11b4a18e */
  goto L_11b4a18e;
L_11b4a175:;
  /* 11b4a175 lock dec dword ptr [0x11b691f4] */
  x86_unimpl("lock dec @ 0x11b4a175");
  /* 11b4a17c mov ebx, ecx */
  EBX = (ECX);
  /* 11b4a17e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b4a180 call 0x11b3a900 */
  push32(0x11b4a185u); f_11b3a900();
  /* 11b4a185 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11b4a18c mov ecx, ebx */
  ECX = (EBX);
L_11b4a18e:;
  /* 11b4a18e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a190 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b4a192 mov edi, edi */
  EDI = (EDI);
L_11b4a194:;
  /* 11b4a194 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b4a196 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a198 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b4a19a je 0x11b4a1bf */
  if (C.zf) goto L_11b4a1bf;
  /* 11b4a19c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b4a19e je 0x11b4a1bf */
  if (C.zf) goto L_11b4a1bf;
  /* 11b4a1a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b4a1a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b4a1a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a1a3 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a1a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a1a5 call 0x11b3c930 */
  push32(0x11b4a1aau); f_11b3c930();
  /* 11b4a1aa mov ebx, eax */
  EBX = (EAX);
  /* 11b4a1ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a1af call 0x11b3c930 */
  push32(0x11b4a1b4u); f_11b3c930();
  /* 11b4a1b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a1b7 pop ecx */
  ECX = (pop32());
  /* 11b4a1b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a1ba jne 0x11b4a1c5 */
  if (!C.zf) goto L_11b4a1c5;
  /* 11b4a1bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b4a1bd jne 0x11b4a194 */
  if (!C.zf) goto L_11b4a194;
L_11b4a1bf:;
  /* 11b4a1bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a1c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a1c3 je 0x11b4a1ce */
  if (C.zf) goto L_11b4a1ce;
L_11b4a1c5:;
  /* 11b4a1c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b4a1ca jb 0x11b4a1ce */
  if (C.cf) goto L_11b4a1ce;
  /* 11b4a1cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11b4a1ce:;
  /* 11b4a1ce pop eax */
  EAX = (pop32());
  /* 11b4a1cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a1d1 jne 0x11b4a1dc */
  if (!C.zf) goto L_11b4a1dc;
  /* 11b4a1d3 lock dec dword ptr [0x11b691f4] */
  x86_unimpl("lock dec @ 0x11b4a1d3");
  /* 11b4a1da jmp 0x11b4a1ea */
  goto L_11b4a1ea;
L_11b4a1dc:;
  /* 11b4a1dc mov ebx, ecx */
  EBX = (ECX);
  /* 11b4a1de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b4a1e0 call 0x11b3a9a0 */
  push32(0x11b4a1e5u); f_11b3a9a0();
  /* 11b4a1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a1e8 mov ecx, ebx */
  ECX = (EBX);
L_11b4a1ea:;
  /* 11b4a1ea mov eax, ecx */
  EAX = (ECX);
  /* 11b4a1ec pop ebx */
  EBX = (pop32());
  /* 11b4a1ed pop esi */
  ESI = (pop32());
  /* 11b4a1ee pop edi */
  EDI = (pop32());
  /* 11b4a1ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b4a1f0 ret  */
  ESPCHK(0x11b4a0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a200 @ 0x11b4a200 (237 bytes, 81 insns) */
void f_11b4a200(void) {
  FTRACE(0x11b4a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a200 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a201 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a203 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a204 cmp dword ptr [0x11b6927c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b6927c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a20b jne 0x11b4a222 */
  if (!C.zf) goto L_11b4a222;
  /* 11b4a20d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a210 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a214 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a215 call 0x11b4a880 */
  push32(0x11b4a21au); f_11b4a880();
  /* 11b4a21a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a21d jmp 0x11b4a2e9 */
  goto L_11b4a2e9;
L_11b4a222:;
  /* 11b4a222 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b4a224 call 0x11b3a900 */
  push32(0x11b4a229u); f_11b3a900();
  /* 11b4a229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a22c jmp 0x11b4a237 */
  goto L_11b4a237;
L_11b4a22e:;
  /* 11b4a22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a231 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a234 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11b4a237:;
  /* 11b4a237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a23a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11b4a23e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11b4a242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a245 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a24b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4a24d je 0x11b4a2cb */
  if (C.zf) goto L_11b4a2cb;
  /* 11b4a24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a252 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a257 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a259 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b4a25f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a262 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4a264 je 0x11b4a2b6 */
  if (C.zf) goto L_11b4a2b6;
  /* 11b4a266 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a269 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a26c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b4a26f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a272 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a274 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b4a276 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4a278 jne 0x11b4a288 */
  if (!C.zf) goto L_11b4a288;
  /* 11b4a27a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b4a27c call 0x11b3a9a0 */
  push32(0x11b4a281u); f_11b3a9a0();
  /* 11b4a281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a286 jmp 0x11b4a2e9 */
  goto L_11b4a2e9;
L_11b4a288:;
  /* 11b4a288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a28b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a291 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b4a294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a297 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a299 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b4a29b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a29d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a2a0 jne 0x11b4a2b4 */
  if (!C.zf) goto L_11b4a2b4;
  /* 11b4a2a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b4a2a4 call 0x11b3a9a0 */
  push32(0x11b4a2a9u); f_11b3a9a0();
  /* 11b4a2a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a2ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a2af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4a2b2 jmp 0x11b4a2e9 */
  goto L_11b4a2e9;
L_11b4a2b4:;
  /* 11b4a2b4 jmp 0x11b4a2c6 */
  goto L_11b4a2c6;
L_11b4a2b6:;
  /* 11b4a2b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a2b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a2bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a2c2 jne 0x11b4a2c6 */
  if (!C.zf) goto L_11b4a2c6;
  /* 11b4a2c4 jmp 0x11b4a2cb */
  goto L_11b4a2cb;
L_11b4a2c6:;
  /* 11b4a2c6 jmp 0x11b4a22e */
  goto L_11b4a22e;
L_11b4a2cb:;
  /* 11b4a2cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b4a2cd call 0x11b3a9a0 */
  push32(0x11b4a2d2u); f_11b3a9a0();
  /* 11b4a2d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a2d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a2dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a2e0 jne 0x11b4a2e7 */
  if (!C.zf) goto L_11b4a2e7;
  /* 11b4a2e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a2e5 jmp 0x11b4a2e9 */
  goto L_11b4a2e9;
L_11b4a2e7:;
  /* 11b4a2e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4a2e9:;
  /* 11b4a2e9 mov esp, ebp */
  ESP = (EBP);
  /* 11b4a2eb pop ebp */
  EBP = (pop32());
  /* 11b4a2ec ret  */
  ESPCHK(0x11b4a200u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2f0 @ 0x11b4a2f0 (130 bytes, 50 insns) */
void f_11b4a2f0(void) {
  FTRACE(0x11b4a2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a2f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a2f5 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a2f6 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a2f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b4a2fe:;
  /* 11b4a2fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a302 jne 0x11b4a322 */
  if (!C.zf) goto L_11b4a322;
  /* 11b4a304 push 0x11b63e24 */
  push32((uint32_t)(0x11b63e24u));
  /* 11b4a309 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a30b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11b4a30d push 0x11b63e18 */
  push32((uint32_t)(0x11b63e18u));
  /* 11b4a312 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4a314 call 0x11b36850 */
  push32(0x11b4a319u); f_11b36850();
  /* 11b4a319 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a31c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a31f jne 0x11b4a322 */
  if (!C.zf) goto L_11b4a322;
  /* 11b4a321 int3  */
  x86_unimpl("int3 @ 0x11b4a321");
L_11b4a322:;
  /* 11b4a322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a326 jne 0x11b4a2fe */
  if (!C.zf) goto L_11b4a2fe;
  /* 11b4a328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a32b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b4a32e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4a333 je 0x11b4a341 */
  if (C.zf) goto L_11b4a341;
  /* 11b4a335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a338 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11b4a33f jmp 0x11b4a368 */
  goto L_11b4a368;
L_11b4a341:;
  /* 11b4a341 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a344 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a345 call 0x11b448a0 */
  push32(0x11b4a34au); f_11b448a0();
  /* 11b4a34a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a34d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a350 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a351 call 0x11b4a380 */
  push32(0x11b4a356u); f_11b4a380();
  /* 11b4a356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4a35c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a35f push eax */
  push32((uint32_t)(EAX));
  /* 11b4a360 call 0x11b44910 */
  push32(0x11b4a365u); f_11b44910();
  /* 11b4a365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b4a368:;
  /* 11b4a368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a36b pop edi */
  EDI = (pop32());
  /* 11b4a36c pop esi */
  ESI = (pop32());
  /* 11b4a36d pop ebx */
  EBX = (pop32());
  /* 11b4a36e mov esp, ebp */
  ESP = (EBP);
  /* 11b4a370 pop ebp */
  EBP = (pop32());
  /* 11b4a371 ret  */
  ESPCHK(0x11b4a2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a380 @ 0x11b4a380 (190 bytes, 67 insns) */
void f_11b4a380(void) {
  FTRACE(0x11b4a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a380 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a381 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4a386 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a387 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a388 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a389 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4a390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a393 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b4a396:;
  /* 11b4a396 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a39a jne 0x11b4a3ba */
  if (!C.zf) goto L_11b4a3ba;
  /* 11b4a39c push 0x11b63424 */
  push32((uint32_t)(0x11b63424u));
  /* 11b4a3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a3a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11b4a3a5 push 0x11b63e18 */
  push32((uint32_t)(0x11b63e18u));
  /* 11b4a3aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4a3ac call 0x11b36850 */
  push32(0x11b4a3b1u); f_11b36850();
  /* 11b4a3b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a3b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a3b7 jne 0x11b4a3ba */
  if (!C.zf) goto L_11b4a3ba;
  /* 11b4a3b9 int3  */
  x86_unimpl("int3 @ 0x11b4a3b9");
L_11b4a3ba:;
  /* 11b4a3ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4a3be jne 0x11b4a396 */
  if (!C.zf) goto L_11b4a396;
  /* 11b4a3c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a3c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b4a3c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a3cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a3cd je 0x11b4a42a */
  if (C.zf) goto L_11b4a42a;
  /* 11b4a3cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a3d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a3d3 call 0x11b48490 */
  push32(0x11b4a3d8u); f_11b48490();
  /* 11b4a3d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a3db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4a3de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a3e1 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a3e2 call 0x11b4aa70 */
  push32(0x11b4a3e7u); f_11b4aa70();
  /* 11b4a3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a3ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a3ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b4a3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a3f1 call 0x11b4a940 */
  push32(0x11b4a3f6u); f_11b4a940();
  /* 11b4a3f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a3f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a3fb jge 0x11b4a406 */
  if ((C.sf==C.of)) goto L_11b4a406;
  /* 11b4a3fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4a404 jmp 0x11b4a42a */
  goto L_11b4a42a;
L_11b4a406:;
  /* 11b4a406 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a409 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a40d je 0x11b4a42a */
  if (C.zf) goto L_11b4a42a;
  /* 11b4a40f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4a411 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a414 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b4a417 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a418 call 0x11b38770 */
  push32(0x11b4a41du); f_11b38770();
  /* 11b4a41d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a420 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a423 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11b4a42a:;
  /* 11b4a42a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b4a42d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11b4a434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a437 pop edi */
  EDI = (pop32());
  /* 11b4a438 pop esi */
  ESI = (pop32());
  /* 11b4a439 pop ebx */
  EBX = (pop32());
  /* 11b4a43a mov esp, ebp */
  ESP = (EBP);
  /* 11b4a43c pop ebp */
  EBP = (pop32());
  /* 11b4a43d ret  */
  ESPCHK(0x11b4a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a440 @ 0x11b4a440 (210 bytes, 63 insns) */
void f_11b4a440(void) {
  FTRACE(0x11b4a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a440 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a441 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a443 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a447 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a44d jae 0x11b4a471 */
  if (!C.cf) goto L_11b4a471;
  /* 11b4a44f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a452 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b4a455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a458 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a45b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4a45e mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b4a465 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4a46a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a46d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4a46f jne 0x11b4a484 */
  if (!C.zf) goto L_11b4a484;
L_11b4a471:;
  /* 11b4a471 call 0x11b41d70 */
  push32(0x11b4a476u); f_11b41d70();
  /* 11b4a476 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b4a47c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a47f jmp 0x11b4a50e */
  goto L_11b4a50e;
L_11b4a484:;
  /* 11b4a484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a487 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a488 call 0x11b48250 */
  push32(0x11b4a48du); f_11b48250();
  /* 11b4a48d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a493 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b4a496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a499 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a49c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4a49f mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b4a4a6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11b4a4ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a4b0 je 0x11b4a4ed */
  if (C.zf) goto L_11b4a4ed;
  /* 11b4a4b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a4b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a4b6 call 0x11b480d0 */
  push32(0x11b4a4bbu); f_11b480d0();
  /* 11b4a4bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a4be push eax */
  push32((uint32_t)(EAX));
  /* 11b4a4bf call dword ptr [0x11b6a2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2f8))), 0x11b4a4c5u);
  /* 11b4a4c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a4c7 jne 0x11b4a4d4 */
  if (!C.zf) goto L_11b4a4d4;
  /* 11b4a4c9 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b4a4cfu);
  /* 11b4a4cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4a4d2 jmp 0x11b4a4db */
  goto L_11b4a4db;
L_11b4a4d4:;
  /* 11b4a4d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b4a4db:;
  /* 11b4a4db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a4df jne 0x11b4a4e3 */
  if (!C.zf) goto L_11b4a4e3;
  /* 11b4a4e1 jmp 0x11b4a4ff */
  goto L_11b4a4ff;
L_11b4a4e3:;
  /* 11b4a4e3 call 0x11b41d80 */
  push32(0x11b4a4e8u); f_11b41d80();
  /* 11b4a4e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4a4eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b4a4ed:;
  /* 11b4a4ed call 0x11b41d70 */
  push32(0x11b4a4f2u); f_11b41d70();
  /* 11b4a4f2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b4a4f8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b4a4ff:;
  /* 11b4a4ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a502 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a503 call 0x11b482e0 */
  push32(0x11b4a508u); f_11b482e0();
  /* 11b4a508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b4a50e:;
  /* 11b4a50e mov esp, ebp */
  ESP = (EBP);
  /* 11b4a510 pop ebp */
  EBP = (pop32());
  /* 11b4a511 ret  */
  ESPCHK(0x11b4a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a520 @ 0x11b4a520 (382 bytes, 135 insns) */
void f_11b4a520(void) {
  FTRACE(0x11b4a520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a520 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a521 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a525 push 0x11b63e38 */
  push32((uint32_t)(0x11b63e38u));
  /* 11b4a52a push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b4a52f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b4a535 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b4a53d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a540 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a541 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a542 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b4a546 cmp dword ptr [0x11b67e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a54d jne 0x11b4a592 */
  if (!C.zf) goto L_11b4a592;
  /* 11b4a54f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a553 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a557 call dword ptr [0x11b6a2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2ec))), 0x11b4a55du);
  /* 11b4a55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a55f je 0x11b4a56d */
  if (C.zf) goto L_11b4a56d;
  /* 11b4a561 mov dword ptr [0x11b67e70], 1 */
  w32((uint32_t)(0x11b67e70), (0x1u));
  /* 11b4a56b jmp 0x11b4a592 */
  goto L_11b4a592;
L_11b4a56d:;
  /* 11b4a56d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a56f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a571 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a575 call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b4a57bu);
  /* 11b4a57b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a57d je 0x11b4a58b */
  if (C.zf) goto L_11b4a58b;
  /* 11b4a57f mov dword ptr [0x11b67e70], 2 */
  w32((uint32_t)(0x11b67e70), (0x2u));
  /* 11b4a589 jmp 0x11b4a592 */
  goto L_11b4a592;
L_11b4a58b:;
  /* 11b4a58b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a58d jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a592:;
  /* 11b4a592 cmp dword ptr [0x11b67e70], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e70))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a599 jne 0x11b4a5b6 */
  if (!C.zf) goto L_11b4a5b6;
  /* 11b4a59b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4a59e push eax */
  push32((uint32_t)(EAX));
  /* 11b4a59f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4a5a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a5a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a5a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a5a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a5aa push eax */
  push32((uint32_t)(EAX));
  /* 11b4a5ab call dword ptr [0x11b6a2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2ec))), 0x11b4a5b1u);
  /* 11b4a5b1 jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a5b6:;
  /* 11b4a5b6 cmp dword ptr [0x11b67e70], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e70))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a5bd jne 0x11b4a69f */
  if (!C.zf) goto L_11b4a69f;
  /* 11b4a5c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a5c7 jne 0x11b4a5d2 */
  if (!C.zf) goto L_11b4a5d2;
  /* 11b4a5c9 mov ecx, dword ptr [0x11b67dd8] */
  ECX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b4a5cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11b4a5d2:;
  /* 11b4a5d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a5d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a5d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a5d9 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a5dd push eax */
  push32((uint32_t)(EAX));
  /* 11b4a5de call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b4a5e4u);
  /* 11b4a5e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b4a5e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a5eb jne 0x11b4a5f4 */
  if (!C.zf) goto L_11b4a5f4;
  /* 11b4a5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a5ef jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a5f4:;
  /* 11b4a5f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4a5fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4a5fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a601 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b4a603 call 0x11b3bba0 */
  push32(0x11b4a608u); f_11b3bba0();
  /* 11b4a608 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11b4a60b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b4a60e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b4a611 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b4a614 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4a61b jmp 0x11b4a634 */
  goto L_11b4a634;
  /* 11b4a61d mov eax, 1 */
  EAX = (0x1u);
  /* 11b4a622 ret  */
  ESPCHK(0x11b4a520u, _esp0);
  ESP += 4; return;
  /* 11b4a623 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b4a626 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b4a62d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b4a634:;
  /* 11b4a634 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a638 jne 0x11b4a63e */
  if (!C.zf) goto L_11b4a63e;
  /* 11b4a63a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a63c jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a63e:;
  /* 11b4a63e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4a641 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a642 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a645 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a646 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a649 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a64a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a64d push edx */
  push32((uint32_t)(EDX));
  /* 11b4a64e call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b4a654u);
  /* 11b4a654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a656 jne 0x11b4a65c */
  if (!C.zf) goto L_11b4a65c;
  /* 11b4a658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a65a jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a65c:;
  /* 11b4a65c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a660 jne 0x11b4a67d */
  if (!C.zf) goto L_11b4a67d;
  /* 11b4a662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a666 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a668 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a66b push eax */
  push32((uint32_t)(EAX));
  /* 11b4a66c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a66e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4a671 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a672 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b4a678u);
  /* 11b4a678 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b4a67b jmp 0x11b4a69a */
  goto L_11b4a69a;
L_11b4a67d:;
  /* 11b4a67d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4a680 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a681 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4a684 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a685 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a687 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a68a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a68b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a68d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4a690 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a691 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b4a697u);
  /* 11b4a697 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b4a69a:;
  /* 11b4a69a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b4a69d jmp 0x11b4a6a1 */
  goto L_11b4a6a1;
L_11b4a69f:;
  /* 11b4a69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4a6a1:;
  /* 11b4a6a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11b4a6a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4a6a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b4a6ae pop edi */
  EDI = (pop32());
  /* 11b4a6af pop esi */
  ESI = (pop32());
  /* 11b4a6b0 pop ebx */
  EBX = (pop32());
  /* 11b4a6b1 mov esp, ebp */
  ESP = (EBP);
  /* 11b4a6b3 pop ebp */
  EBP = (pop32());
  /* 11b4a6b4 ret  */
  ESPCHK(0x11b4a520u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6c0 @ 0x11b4a6c0 (398 bytes, 140 insns) */
void f_11b4a6c0(void) {
  FTRACE(0x11b4a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a6c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a6c5 push 0x11b63e48 */
  push32((uint32_t)(0x11b63e48u));
  /* 11b4a6ca push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b4a6cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b4a6d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a6d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b4a6dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a6e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a6e1 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a6e2 push edi */
  push32((uint32_t)(EDI));
  /* 11b4a6e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b4a6e6 cmp dword ptr [0x11b67e74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a6ed jne 0x11b4a732 */
  if (!C.zf) goto L_11b4a732;
  /* 11b4a6ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a6f7 call dword ptr [0x11b6a2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2ec))), 0x11b4a6fdu);
  /* 11b4a6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a6ff je 0x11b4a70d */
  if (C.zf) goto L_11b4a70d;
  /* 11b4a701 mov dword ptr [0x11b67e74], 1 */
  w32((uint32_t)(0x11b67e74), (0x1u));
  /* 11b4a70b jmp 0x11b4a732 */
  goto L_11b4a732;
L_11b4a70d:;
  /* 11b4a70d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a70f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a711 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a713 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a715 call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b4a71bu);
  /* 11b4a71b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a71d je 0x11b4a72b */
  if (C.zf) goto L_11b4a72b;
  /* 11b4a71f mov dword ptr [0x11b67e74], 2 */
  w32((uint32_t)(0x11b67e74), (0x2u));
  /* 11b4a729 jmp 0x11b4a732 */
  goto L_11b4a732;
L_11b4a72b:;
  /* 11b4a72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a72d jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a732:;
  /* 11b4a732 cmp dword ptr [0x11b67e74], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e74))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a739 jne 0x11b4a756 */
  if (!C.zf) goto L_11b4a756;
  /* 11b4a73b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4a73e push eax */
  push32((uint32_t)(EAX));
  /* 11b4a73f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4a742 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a743 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a746 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a747 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a74a push eax */
  push32((uint32_t)(EAX));
  /* 11b4a74b call dword ptr [0x11b6a30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a30c))), 0x11b4a751u);
  /* 11b4a751 jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a756:;
  /* 11b4a756 cmp dword ptr [0x11b67e74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67e74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a75d jne 0x11b4a84f */
  if (!C.zf) goto L_11b4a84f;
  /* 11b4a763 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a767 jne 0x11b4a772 */
  if (!C.zf) goto L_11b4a772;
  /* 11b4a769 mov ecx, dword ptr [0x11b67dd8] */
  ECX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b4a76f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11b4a772:;
  /* 11b4a772 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a776 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a779 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a77d push eax */
  push32((uint32_t)(EAX));
  /* 11b4a77e call dword ptr [0x11b6a2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2ec))), 0x11b4a784u);
  /* 11b4a784 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b4a787 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a78b jne 0x11b4a794 */
  if (!C.zf) goto L_11b4a794;
  /* 11b4a78d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a78f jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a794:;
  /* 11b4a794 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4a79b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4a79e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b4a7a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a7a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b4a7a5 call 0x11b3bba0 */
  push32(0x11b4a7aau); f_11b3bba0();
  /* 11b4a7aa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11b4a7ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b4a7b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b4a7b3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b4a7b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b4a7bd jmp 0x11b4a7d6 */
  goto L_11b4a7d6;
  /* 11b4a7bf mov eax, 1 */
  EAX = (0x1u);
  /* 11b4a7c4 ret  */
  ESPCHK(0x11b4a6c0u, _esp0);
  ESP += 4; return;
  /* 11b4a7c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b4a7c8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b4a7cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b4a7d6:;
  /* 11b4a7d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a7da jne 0x11b4a7e0 */
  if (!C.zf) goto L_11b4a7e0;
  /* 11b4a7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a7de jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a7e0:;
  /* 11b4a7e0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b4a7e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a7e4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a7e7 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a7e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4a7eb push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a7ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a7ef push edx */
  push32((uint32_t)(EDX));
  /* 11b4a7f0 call dword ptr [0x11b6a2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2ec))), 0x11b4a7f6u);
  /* 11b4a7f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4a7f8 jne 0x11b4a7fe */
  if (!C.zf) goto L_11b4a7fe;
  /* 11b4a7fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a7fc jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a7fe:;
  /* 11b4a7fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a802 jne 0x11b4a826 */
  if (!C.zf) goto L_11b4a826;
  /* 11b4a804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a808 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a80a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a80c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a80e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a811 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a812 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b4a817 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4a81a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a81b call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b4a821u);
  /* 11b4a821 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b4a824 jmp 0x11b4a84a */
  goto L_11b4a84a;
L_11b4a826:;
  /* 11b4a826 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a828 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4a82a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4a82d push edx */
  push32((uint32_t)(EDX));
  /* 11b4a82e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4a831 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a832 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b4a834 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4a837 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a838 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b4a83d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b4a840 push edx */
  push32((uint32_t)(EDX));
  /* 11b4a841 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b4a847u);
  /* 11b4a847 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b4a84a:;
  /* 11b4a84a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b4a84d jmp 0x11b4a851 */
  goto L_11b4a851;
L_11b4a84f:;
  /* 11b4a84f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4a851:;
  /* 11b4a851 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11b4a854 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4a857 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b4a85e pop edi */
  EDI = (pop32());
  /* 11b4a85f pop esi */
  ESI = (pop32());
  /* 11b4a860 pop ebx */
  EBX = (pop32());
  /* 11b4a861 mov esp, ebp */
  ESP = (EBP);
  /* 11b4a863 pop ebp */
  EBP = (pop32());
  /* 11b4a864 ret  */
  ESPCHK(0x11b4a6c0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11b4a880 (193 bytes, 91 insns) */
void f_11b4a880(void) {
  FTRACE(0x11b4a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a882 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b4a886 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4a887 mov ebx, eax */
  EBX = (EAX);
  /* 11b4a889 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b4a88c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b4a890 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b4a896 je 0x11b4a8ab */
  if (C.zf) goto L_11b4a8ab;
L_11b4a898:;
  /* 11b4a898 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b4a89a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b4a89b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a89d je 0x11b4a870 */
  if (C.zf) { jmp_ind(0x11b4a870u); return; }
  /* 11b4a89f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11b4a8a1 je 0x11b4a8f4 */
  if (C.zf) goto L_11b4a8f4;
  /* 11b4a8a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b4a8a9 jne 0x11b4a898 */
  if (!C.zf) goto L_11b4a898;
L_11b4a8ab:;
  /* 11b4a8ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11b4a8ad push edi */
  push32((uint32_t)(EDI));
  /* 11b4a8ae mov eax, ebx */
  EAX = (EBX);
  /* 11b4a8b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11b4a8b3 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a8b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11b4a8b6:;
  /* 11b4a8b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b4a8b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11b4a8bd mov eax, ecx */
  EAX = (ECX);
  /* 11b4a8bf mov esi, edi */
  ESI = (EDI);
  /* 11b4a8c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a8c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a8c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a8c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a8ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a8cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a8cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a8d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a8d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a8da jne 0x11b4a8f8 */
  if (!C.zf) goto L_11b4a8f8;
  /* 11b4a8dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a8e1 je 0x11b4a8b6 */
  if (C.zf) goto L_11b4a8b6;
  /* 11b4a8e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a8e8 jne 0x11b4a8f2 */
  if (!C.zf) goto L_11b4a8f2;
  /* 11b4a8ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11b4a8f0 jne 0x11b4a8b6 */
  if (!C.zf) goto L_11b4a8b6;
L_11b4a8f2:;
  /* 11b4a8f2 pop esi */
  ESI = (pop32());
  /* 11b4a8f3 pop edi */
  EDI = (pop32());
L_11b4a8f4:;
  /* 11b4a8f4 pop ebx */
  EBX = (pop32());
  /* 11b4a8f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a8f7 ret  */
  ESPCHK(0x11b4a880u, _esp0);
  ESP += 4; return;
L_11b4a8f8:;
  /* 11b4a8f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11b4a8fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a8fd je 0x11b4a935 */
  if (C.zf) goto L_11b4a935;
  /* 11b4a8ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b4a901 je 0x11b4a8f2 */
  if (C.zf) goto L_11b4a8f2;
  /* 11b4a903 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a905 je 0x11b4a92e */
  if (C.zf) goto L_11b4a92e;
  /* 11b4a907 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b4a909 je 0x11b4a8f2 */
  if (C.zf) goto L_11b4a8f2;
  /* 11b4a90b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b4a90e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a910 je 0x11b4a927 */
  if (C.zf) goto L_11b4a927;
  /* 11b4a912 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b4a914 je 0x11b4a8f2 */
  if (C.zf) goto L_11b4a8f2;
  /* 11b4a916 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4a918 je 0x11b4a920 */
  if (C.zf) goto L_11b4a920;
  /* 11b4a91a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b4a91c je 0x11b4a8f2 */
  if (C.zf) goto L_11b4a8f2;
  /* 11b4a91e jmp 0x11b4a8b6 */
  goto L_11b4a8b6;
L_11b4a920:;
  /* 11b4a920 pop esi */
  ESI = (pop32());
  /* 11b4a921 pop edi */
  EDI = (pop32());
  /* 11b4a922 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11b4a925 pop ebx */
  EBX = (pop32());
  /* 11b4a926 ret  */
  ESPCHK(0x11b4a880u, _esp0);
  ESP += 4; return;
L_11b4a927:;
  /* 11b4a927 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11b4a92a pop esi */
  ESI = (pop32());
  /* 11b4a92b pop edi */
  EDI = (pop32());
  /* 11b4a92c pop ebx */
  EBX = (pop32());
  /* 11b4a92d ret  */
  ESPCHK(0x11b4a880u, _esp0);
  ESP += 4; return;
L_11b4a92e:;
  /* 11b4a92e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11b4a931 pop esi */
  ESI = (pop32());
  /* 11b4a932 pop edi */
  EDI = (pop32());
  /* 11b4a933 pop ebx */
  EBX = (pop32());
  /* 11b4a934 ret  */
  ESPCHK(0x11b4a880u, _esp0);
  ESP += 4; return;
L_11b4a935:;
  /* 11b4a935 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11b4a938 pop esi */
  ESI = (pop32());
  /* 11b4a939 pop edi */
  EDI = (pop32());
  /* 11b4a93a pop ebx */
  EBX = (pop32());
  /* 11b4a93b ret  */
  ESPCHK(0x11b4a880u, _esp0);
  ESP += 4; return;
  /* 11b4a93c int3  */
  x86_unimpl("int3 @ 0x11b4a93c");
  /* 11b4a93d int3  */
  x86_unimpl("int3 @ 0x11b4a93d");
  /* 11b4a93e int3  */
  x86_unimpl("int3 @ 0x11b4a93e");
  /* 11b4a93f int3  */
  x86_unimpl("int3 @ 0x11b4a93f");
  /* 11b4a940 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_1001a940 @ 0x11b4a940 (122 bytes, 39 insns) */
void f_11b4a940(void) {
  FTRACE(0x11b4a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a940 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a941 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a943 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a947 cmp eax, dword ptr [0x11b6961c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b6961c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a94d jae 0x11b4a971 */
  if (!C.cf) goto L_11b4a971;
  /* 11b4a94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a952 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b4a955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a958 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4a95b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4a95e mov eax, dword ptr [ecx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b4a965 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11b4a96a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4a96d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4a96f jne 0x11b4a98c */
  if (!C.zf) goto L_11b4a98c;
L_11b4a971:;
  /* 11b4a971 call 0x11b41d70 */
  push32(0x11b4a976u); f_11b41d70();
  /* 11b4a976 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11b4a97c call 0x11b41d80 */
  push32(0x11b4a981u); f_11b41d80();
  /* 11b4a981 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b4a987 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4a98a jmp 0x11b4a9b6 */
  goto L_11b4a9b6;
L_11b4a98c:;
  /* 11b4a98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a98f push edx */
  push32((uint32_t)(EDX));
  /* 11b4a990 call 0x11b48250 */
  push32(0x11b4a995u); f_11b48250();
  /* 11b4a995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a99b push eax */
  push32((uint32_t)(EAX));
  /* 11b4a99c call 0x11b4a9c0 */
  push32(0x11b4a9a1u); f_11b4a9c0();
  /* 11b4a9a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a9a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4a9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a9aa push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a9ab call 0x11b482e0 */
  push32(0x11b4a9b0u); f_11b482e0();
  /* 11b4a9b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a9b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b4a9b6:;
  /* 11b4a9b6 mov esp, ebp */
  ESP = (EBP);
  /* 11b4a9b8 pop ebp */
  EBP = (pop32());
  /* 11b4a9b9 ret  */
  ESPCHK(0x11b4a940u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11b4a9c0 (170 bytes, 59 insns) */
void f_11b4a9c0(void) {
  FTRACE(0x11b4a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b4a9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4a9c4 push esi */
  push32((uint32_t)(ESI));
  /* 11b4a9c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a9c8 push eax */
  push32((uint32_t)(EAX));
  /* 11b4a9c9 call 0x11b480d0 */
  push32(0x11b4a9ceu); f_11b480d0();
  /* 11b4a9ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a9d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a9d4 je 0x11b4aa13 */
  if (C.zf) goto L_11b4aa13;
  /* 11b4a9d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a9da je 0x11b4a9e2 */
  if (C.zf) goto L_11b4a9e2;
  /* 11b4a9dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a9e0 jne 0x11b4a9fc */
  if (!C.zf) goto L_11b4a9fc;
L_11b4a9e2:;
  /* 11b4a9e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4a9e4 call 0x11b480d0 */
  push32(0x11b4a9e9u); f_11b480d0();
  /* 11b4a9e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a9ec mov esi, eax */
  ESI = (EAX);
  /* 11b4a9ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4a9f0 call 0x11b480d0 */
  push32(0x11b4a9f5u); f_11b480d0();
  /* 11b4a9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4a9f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4a9fa je 0x11b4aa13 */
  if (C.zf) goto L_11b4aa13;
L_11b4a9fc:;
  /* 11b4a9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4a9ff push ecx */
  push32((uint32_t)(ECX));
  /* 11b4aa00 call 0x11b480d0 */
  push32(0x11b4aa05u); f_11b480d0();
  /* 11b4aa05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4aa08 push eax */
  push32((uint32_t)(EAX));
  /* 11b4aa09 call dword ptr [0x11b6a2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e8))), 0x11b4aa0fu);
  /* 11b4aa0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4aa11 je 0x11b4aa1c */
  if (C.zf) goto L_11b4aa1c;
L_11b4aa13:;
  /* 11b4aa13 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b4aa1a jmp 0x11b4aa25 */
  goto L_11b4aa25;
L_11b4aa1c:;
  /* 11b4aa1c call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b4aa22u);
  /* 11b4aa22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b4aa25:;
  /* 11b4aa25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aa28 push edx */
  push32((uint32_t)(EDX));
  /* 11b4aa29 call 0x11b47ff0 */
  push32(0x11b4aa2eu); f_11b47ff0();
  /* 11b4aa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4aa31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aa34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b4aa37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aa3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b4aa3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4aa40 mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b4aa47 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11b4aa4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4aa50 je 0x11b4aa63 */
  if (C.zf) goto L_11b4aa63;
  /* 11b4aa52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4aa55 push eax */
  push32((uint32_t)(EAX));
  /* 11b4aa56 call 0x11b41cd0 */
  push32(0x11b4aa5bu); f_11b41cd0();
  /* 11b4aa5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4aa5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4aa61 jmp 0x11b4aa65 */
  goto L_11b4aa65;
L_11b4aa63:;
  /* 11b4aa63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b4aa65:;
  /* 11b4aa65 pop esi */
  ESI = (pop32());
  /* 11b4aa66 mov esp, ebp */
  ESP = (EBP);
  /* 11b4aa68 pop ebp */
  EBP = (pop32());
  /* 11b4aa69 ret  */
  ESPCHK(0x11b4a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa70 @ 0x11b4aa70 (146 bytes, 52 insns) */
void f_11b4aa70(void) {
  FTRACE(0x11b4aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4aa70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b4aa71 mov ebp, esp */
  EBP = (ESP);
  /* 11b4aa73 push ebx */
  push32((uint32_t)(EBX));
  /* 11b4aa74 push esi */
  push32((uint32_t)(ESI));
  /* 11b4aa75 push edi */
  push32((uint32_t)(EDI));
L_11b4aa76:;
  /* 11b4aa76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4aa7a jne 0x11b4aa9a */
  if (!C.zf) goto L_11b4aa9a;
  /* 11b4aa7c push 0x11b63e24 */
  push32((uint32_t)(0x11b63e24u));
  /* 11b4aa81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4aa83 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b4aa85 push 0x11b63e54 */
  push32((uint32_t)(0x11b63e54u));
  /* 11b4aa8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4aa8c call 0x11b36850 */
  push32(0x11b4aa91u); f_11b36850();
  /* 11b4aa91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4aa94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4aa97 jne 0x11b4aa9a */
  if (!C.zf) goto L_11b4aa9a;
  /* 11b4aa99 int3  */
  x86_unimpl("int3 @ 0x11b4aa99");
L_11b4aa9a:;
  /* 11b4aa9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4aa9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4aa9e jne 0x11b4aa76 */
  if (!C.zf) goto L_11b4aa76;
  /* 11b4aaa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aaa3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b4aaa6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4aaac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4aaae je 0x11b4aafd */
  if (C.zf) goto L_11b4aafd;
  /* 11b4aab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aab3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b4aab6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4aab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4aabb je 0x11b4aafd */
  if (C.zf) goto L_11b4aafd;
  /* 11b4aabd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4aabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aac2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b4aac5 push eax */
  push32((uint32_t)(EAX));
  /* 11b4aac6 call 0x11b38770 */
  push32(0x11b4aacbu); f_11b38770();
  /* 11b4aacb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4aace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aad1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b4aad4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4aada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aadd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b4aae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aae3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11b4aae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aaec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b4aaf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4aaf6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11b4aafd:;
  /* 11b4aafd pop edi */
  EDI = (pop32());
  /* 11b4aafe pop esi */
  ESI = (pop32());
  /* 11b4aaff pop ebx */
  EBX = (pop32());
  /* 11b4ab00 pop ebp */
  EBP = (pop32());
  /* 11b4ab01 ret  */
  ESPCHK(0x11b4aa70u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11b4ac70 (6 bytes, 1 insns) */
void f_11b4ac70(void) {
  FTRACE(0x11b4ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b4ac70 jmp dword ptr [0x11b6a318] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b6a318)))); return;
}

