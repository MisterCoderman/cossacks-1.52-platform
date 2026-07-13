#include "recomp.h"

/* FUN_100170f0 @ 0x125770f0 (289 bytes, 97 insns) */
void f_125770f0(void) {
  FTRACE(0x125770f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125770f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125770f1 mov ebp, esp */
  EBP = (ESP);
  /* 125770f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125770f6 push esi */
  push32((uint32_t)(ESI));
  /* 125770f7 mov eax, dword ptr [0x12595c98] */
  EAX = (r32((uint32_t)(0x12595c98)));
  /* 125770fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125770ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12577106 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1257710d jmp 0x12577118 */
  goto L_12577118;
L_1257710f:;
  /* 1257710f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577112 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577115 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12577118:;
  /* 12577118 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257711c jae 0x12577151 */
  if (!C.cf) goto L_12577151;
  /* 1257711e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577121 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577124 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12577127 push ecx */
  push32((uint32_t)(ECX));
  /* 12577128 call 0x1256d1d0 */
  push32(0x1257712du); f_1256d1d0();
  /* 1257712d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577130 mov esi, eax */
  ESI = (EAX);
  /* 12577132 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577138 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1257713c push ecx */
  push32((uint32_t)(ECX));
  /* 1257713d call 0x1256d1d0 */
  push32(0x12577142u); f_1256d1d0();
  /* 12577142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577145 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577148 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1257714c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1257714f jmp 0x1257710f */
  goto L_1257710f;
L_12577151:;
  /* 12577151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12577154 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577157 push eax */
  push32((uint32_t)(EAX));
  /* 12577158 call 0x1256a380 */
  push32(0x1257715du); f_1256a380();
  /* 1257715d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577160 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12577163 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577167 je 0x12577209 */
  if (C.zf) goto L_12577209;
  /* 1257716d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577170 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12577173 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1257717a jmp 0x12577185 */
  goto L_12577185;
L_1257717c:;
  /* 1257717c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257717f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577182 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12577185:;
  /* 12577185 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577189 jae 0x125771fa */
  if (!C.cf) goto L_125771fa;
  /* 1257718b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257718e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12577191 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577194 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577197 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1257719a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257719d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125771a0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125771a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125771a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771a7 push edx */
  push32((uint32_t)(EDX));
  /* 125771a8 call 0x1256d350 */
  push32(0x125771adu); f_1256d350();
  /* 125771ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125771b0 push eax */
  push32((uint32_t)(EAX));
  /* 125771b1 call 0x1256d1d0 */
  push32(0x125771b6u); f_1256d1d0();
  /* 125771b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125771b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771bc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125771be mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125771c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771c4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125771c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125771cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125771d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125771d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125771d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125771da push eax */
  push32((uint32_t)(EAX));
  /* 125771db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771de push ecx */
  push32((uint32_t)(ECX));
  /* 125771df call 0x1256d350 */
  push32(0x125771e4u); f_1256d350();
  /* 125771e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125771e7 push eax */
  push32((uint32_t)(EAX));
  /* 125771e8 call 0x1256d1d0 */
  push32(0x125771edu); f_1256d1d0();
  /* 125771ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125771f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125771f5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125771f8 jmp 0x1257717c */
  goto L_1257717c;
L_125771fa:;
  /* 125771fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125771fd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12577200 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577203 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577206 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12577209:;
  /* 12577209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257720c pop esi */
  ESI = (pop32());
  /* 1257720d mov esp, ebp */
  ESP = (EBP);
  /* 1257720f pop ebp */
  EBP = (pop32());
  /* 12577210 ret  */
  ESPCHK(0x125770f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017220 @ 0x12577220 (291 bytes, 97 insns) */
void f_12577220(void) {
  FTRACE(0x12577220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577220 push ebp */
  push32((uint32_t)(EBP));
  /* 12577221 mov ebp, esp */
  EBP = (ESP);
  /* 12577223 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577226 push esi */
  push32((uint32_t)(ESI));
  /* 12577227 mov eax, dword ptr [0x12595c98] */
  EAX = (r32((uint32_t)(0x12595c98)));
  /* 1257722c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257722f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12577236 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1257723d jmp 0x12577248 */
  goto L_12577248;
L_1257723f:;
  /* 1257723f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577245 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12577248:;
  /* 12577248 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257724c jae 0x12577282 */
  if (!C.cf) goto L_12577282;
  /* 1257724e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577251 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577254 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12577258 push ecx */
  push32((uint32_t)(ECX));
  /* 12577259 call 0x1256d1d0 */
  push32(0x1257725eu); f_1256d1d0();
  /* 1257725e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577261 mov esi, eax */
  ESI = (EAX);
  /* 12577263 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577266 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577269 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1257726d push ecx */
  push32((uint32_t)(ECX));
  /* 1257726e call 0x1256d1d0 */
  push32(0x12577273u); f_1256d1d0();
  /* 12577273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577276 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577279 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1257727d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12577280 jmp 0x1257723f */
  goto L_1257723f;
L_12577282:;
  /* 12577282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12577285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577288 push eax */
  push32((uint32_t)(EAX));
  /* 12577289 call 0x1256a380 */
  push32(0x1257728eu); f_1256a380();
  /* 1257728e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577291 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12577294 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577298 je 0x1257733b */
  if (C.zf) goto L_1257733b;
  /* 1257729e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125772a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125772a4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125772ab jmp 0x125772b6 */
  goto L_125772b6;
L_125772ad:;
  /* 125772ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125772b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125772b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125772b6:;
  /* 125772b6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125772ba jae 0x1257732c */
  if (!C.cf) goto L_1257732c;
  /* 125772bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772bf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125772c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125772c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125772cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125772ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125772d1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125772d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125772d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772d9 push edx */
  push32((uint32_t)(EDX));
  /* 125772da call 0x1256d350 */
  push32(0x125772dfu); f_1256d350();
  /* 125772df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125772e2 push eax */
  push32((uint32_t)(EAX));
  /* 125772e3 call 0x1256d1d0 */
  push32(0x125772e8u); f_1256d1d0();
  /* 125772e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125772eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125772f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125772f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772f6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125772f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125772fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125772ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12577302 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577305 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577308 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1257730c push eax */
  push32((uint32_t)(EAX));
  /* 1257730d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577310 push ecx */
  push32((uint32_t)(ECX));
  /* 12577311 call 0x1256d350 */
  push32(0x12577316u); f_1256d350();
  /* 12577316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577319 push eax */
  push32((uint32_t)(EAX));
  /* 1257731a call 0x1256d1d0 */
  push32(0x1257731fu); f_1256d1d0();
  /* 1257731f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577322 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577325 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577327 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1257732a jmp 0x125772ad */
  goto L_125772ad;
L_1257732c:;
  /* 1257732c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257732f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12577332 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577335 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577338 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1257733b:;
  /* 1257733b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257733e pop esi */
  ESI = (pop32());
  /* 1257733f mov esp, ebp */
  ESP = (EBP);
  /* 12577341 pop ebp */
  EBP = (pop32());
  /* 12577342 ret  */
  ESPCHK(0x12577220u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x12577350 (878 bytes, 273 insns) */
void f_12577350(void) {
  FTRACE(0x12577350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577350 push ebp */
  push32((uint32_t)(EBP));
  /* 12577351 mov ebp, esp */
  EBP = (ESP);
  /* 12577353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577356 push esi */
  push32((uint32_t)(ESI));
  /* 12577357 mov eax, dword ptr [0x12595c98] */
  EAX = (r32((uint32_t)(0x12595c98)));
  /* 1257735c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257735f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12577366 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1257736d jmp 0x12577378 */
  goto L_12577378;
L_1257736f:;
  /* 1257736f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577375 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12577378:;
  /* 12577378 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257737c jae 0x125773b1 */
  if (!C.cf) goto L_125773b1;
  /* 1257737e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577381 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577384 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12577387 push ecx */
  push32((uint32_t)(ECX));
  /* 12577388 call 0x1256d1d0 */
  push32(0x1257738du); f_1256d1d0();
  /* 1257738d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577390 mov esi, eax */
  ESI = (EAX);
  /* 12577392 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577395 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577398 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1257739c push ecx */
  push32((uint32_t)(ECX));
  /* 1257739d call 0x1256d1d0 */
  push32(0x125773a2u); f_1256d1d0();
  /* 125773a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125773a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125773a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125773ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125773af jmp 0x1257736f */
  goto L_1257736f;
L_125773b1:;
  /* 125773b1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125773b8 jmp 0x125773c3 */
  goto L_125773c3;
L_125773ba:;
  /* 125773ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125773bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125773c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125773c3:;
  /* 125773c3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125773c7 jae 0x125773fd */
  if (!C.cf) goto L_125773fd;
  /* 125773c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125773cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125773cf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125773d3 push eax */
  push32((uint32_t)(EAX));
  /* 125773d4 call 0x1256d1d0 */
  push32(0x125773d9u); f_1256d1d0();
  /* 125773d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125773dc mov esi, eax */
  ESI = (EAX);
  /* 125773de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125773e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125773e4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125773e8 push eax */
  push32((uint32_t)(EAX));
  /* 125773e9 call 0x1256d1d0 */
  push32(0x125773eeu); f_1256d1d0();
  /* 125773ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125773f1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125773f4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125773f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125773fb jmp 0x125773ba */
  goto L_125773ba;
L_125773fd:;
  /* 125773fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577400 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12577406 push eax */
  push32((uint32_t)(EAX));
  /* 12577407 call 0x1256d1d0 */
  push32(0x1257740cu); f_1256d1d0();
  /* 1257740c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257740f mov esi, eax */
  ESI = (EAX);
  /* 12577411 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577414 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1257741a push edx */
  push32((uint32_t)(EDX));
  /* 1257741b call 0x1256d1d0 */
  push32(0x12577420u); f_1256d1d0();
  /* 12577420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577423 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577426 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1257742a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257742d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577430 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12577436 push edx */
  push32((uint32_t)(EDX));
  /* 12577437 call 0x1256d1d0 */
  push32(0x1257743cu); f_1256d1d0();
  /* 1257743c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257743f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12577442 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12577446 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12577449 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257744c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12577452 push ecx */
  push32((uint32_t)(ECX));
  /* 12577453 call 0x1256d1d0 */
  push32(0x12577458u); f_1256d1d0();
  /* 12577458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257745b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257745e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12577462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12577465 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577468 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1257746e push edx */
  push32((uint32_t)(EDX));
  /* 1257746f call 0x1256d1d0 */
  push32(0x12577474u); f_1256d1d0();
  /* 12577474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577477 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257747a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1257747e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12577481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12577484 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577489 push eax */
  push32((uint32_t)(EAX));
  /* 1257748a call 0x1256a380 */
  push32(0x1257748fu); f_1256a380();
  /* 1257748f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12577495 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577499 je 0x125776b6 */
  if (C.zf) goto L_125776b6;
  /* 1257749f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125774a2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125774a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125774a8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125774ae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125774b1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 125774b6 mov eax, dword ptr [0x12595c98] */
  EAX = (r32((uint32_t)(0x12595c98)));
  /* 125774bb push eax */
  push32((uint32_t)(EAX));
  /* 125774bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125774bf push ecx */
  push32((uint32_t)(ECX));
  /* 125774c0 call 0x12570c80 */
  push32(0x125774c5u); f_12570c80();
  /* 125774c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125774c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125774cf jmp 0x125774da */
  goto L_125774da;
L_125774d1:;
  /* 125774d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125774d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125774d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125774da:;
  /* 125774da cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125774de jae 0x1257754e */
  if (!C.cf) goto L_1257754e;
  /* 125774e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125774e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125774e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125774e9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125774ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125774ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125774f2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125774f5 push edx */
  push32((uint32_t)(EDX));
  /* 125774f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125774f9 push eax */
  push32((uint32_t)(EAX));
  /* 125774fa call 0x1256d350 */
  push32(0x125774ffu); f_1256d350();
  /* 125774ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577502 push eax */
  push32((uint32_t)(EAX));
  /* 12577503 call 0x1256d1d0 */
  push32(0x12577508u); f_1256d1d0();
  /* 12577508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257750b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257750e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12577512 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12577515 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577518 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257751b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257751e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12577522 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577528 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1257752c push edx */
  push32((uint32_t)(EDX));
  /* 1257752d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577530 push eax */
  push32((uint32_t)(EAX));
  /* 12577531 call 0x1256d350 */
  push32(0x12577536u); f_1256d350();
  /* 12577536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577539 push eax */
  push32((uint32_t)(EAX));
  /* 1257753a call 0x1256d1d0 */
  push32(0x1257753fu); f_1256d1d0();
  /* 1257753f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577542 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577545 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12577549 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1257754c jmp 0x125774d1 */
  goto L_125774d1;
L_1257754e:;
  /* 1257754e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12577555 jmp 0x12577560 */
  goto L_12577560;
L_12577557:;
  /* 12577557 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257755a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257755d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12577560:;
  /* 12577560 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577564 jae 0x125775d6 */
  if (!C.cf) goto L_125775d6;
  /* 12577566 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577569 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257756c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257756f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12577573 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12577576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577579 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1257757d push eax */
  push32((uint32_t)(EAX));
  /* 1257757e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577581 push ecx */
  push32((uint32_t)(ECX));
  /* 12577582 call 0x1256d350 */
  push32(0x12577587u); f_1256d350();
  /* 12577587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257758a push eax */
  push32((uint32_t)(EAX));
  /* 1257758b call 0x1256d1d0 */
  push32(0x12577590u); f_1256d1d0();
  /* 12577590 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577593 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577596 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1257759a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1257759d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125775a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125775a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125775a6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 125775aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125775ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125775b0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125775b4 push eax */
  push32((uint32_t)(EAX));
  /* 125775b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125775b8 push ecx */
  push32((uint32_t)(ECX));
  /* 125775b9 call 0x1256d350 */
  push32(0x125775beu); f_1256d350();
  /* 125775be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125775c1 push eax */
  push32((uint32_t)(EAX));
  /* 125775c2 call 0x1256d1d0 */
  push32(0x125775c7u); f_1256d1d0();
  /* 125775c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125775ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125775cd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125775d1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125775d4 jmp 0x12577557 */
  goto L_12577557;
L_125775d6:;
  /* 125775d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125775d9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125775dc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 125775e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125775e5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125775eb push ecx */
  push32((uint32_t)(ECX));
  /* 125775ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125775ef push edx */
  push32((uint32_t)(EDX));
  /* 125775f0 call 0x1256d350 */
  push32(0x125775f5u); f_1256d350();
  /* 125775f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125775f8 push eax */
  push32((uint32_t)(EAX));
  /* 125775f9 call 0x1256d1d0 */
  push32(0x125775feu); f_1256d1d0();
  /* 125775fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577601 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577604 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12577608 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1257760b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257760e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577611 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12577617 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257761a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12577620 push eax */
  push32((uint32_t)(EAX));
  /* 12577621 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577624 push ecx */
  push32((uint32_t)(ECX));
  /* 12577625 call 0x1256d350 */
  push32(0x1257762au); f_1256d350();
  /* 1257762a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257762d push eax */
  push32((uint32_t)(EAX));
  /* 1257762e call 0x1256d1d0 */
  push32(0x12577633u); f_1256d1d0();
  /* 12577633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577639 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1257763d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12577640 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12577643 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577646 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1257764c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257764f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12577655 push ecx */
  push32((uint32_t)(ECX));
  /* 12577656 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12577659 push edx */
  push32((uint32_t)(EDX));
  /* 1257765a call 0x1256d350 */
  push32(0x1257765fu); f_1256d350();
  /* 1257765f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577662 push eax */
  push32((uint32_t)(EAX));
  /* 12577663 call 0x1256d1d0 */
  push32(0x12577668u); f_1256d1d0();
  /* 12577668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257766b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257766e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12577672 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12577675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12577678 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257767b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12577681 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577684 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1257768a push eax */
  push32((uint32_t)(EAX));
  /* 1257768b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257768e push ecx */
  push32((uint32_t)(ECX));
  /* 1257768f call 0x1256d350 */
  push32(0x12577694u); f_1256d350();
  /* 12577694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577697 push eax */
  push32((uint32_t)(EAX));
  /* 12577698 call 0x1256d1d0 */
  push32(0x1257769du); f_1256d1d0();
  /* 1257769d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125776a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125776a3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125776a7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125776aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125776ad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125776b0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_125776b6:;
  /* 125776b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125776b9 pop esi */
  ESI = (pop32());
  /* 125776ba mov esp, ebp */
  ESP = (EBP);
  /* 125776bc pop ebp */
  EBP = (pop32());
  /* 125776bd ret  */
  ESPCHK(0x12577350u, _esp0);
  ESP += 4; return;
}

/* FUN_100176c0 @ 0x125776c0 (31 bytes, 15 insns) */
void f_125776c0(void) {
  FTRACE(0x125776c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125776c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125776c1 mov ebp, esp */
  EBP = (ESP);
  /* 125776c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125776c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125776c8 push eax */
  push32((uint32_t)(EAX));
  /* 125776c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125776cc push ecx */
  push32((uint32_t)(ECX));
  /* 125776cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125776d0 push edx */
  push32((uint32_t)(EDX));
  /* 125776d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125776d4 push eax */
  push32((uint32_t)(EAX));
  /* 125776d5 call 0x125776e0 */
  push32(0x125776dau); f_125776e0();
  /* 125776da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125776dd pop ebp */
  EBP = (pop32());
  /* 125776de ret  */
  ESPCHK(0x125776c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100176e0 @ 0x125776e0 (394 bytes, 123 insns) */
void f_125776e0(void) {
  FTRACE(0x125776e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125776e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125776e1 mov ebp, esp */
  EBP = (ESP);
  /* 125776e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125776e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125776e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125776ec push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 125776f1 call dword ptr [0x125993bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993bc))), 0x125776f7u);
  /* 125776f7 cmp dword ptr [0x12596d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125776fe je 0x1257771e */
  if (C.zf) goto L_1257771e;
  /* 12577700 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 12577705 call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x1257770bu);
  /* 1257770b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1257770d call 0x1256dda0 */
  push32(0x12577712u); f_1256dda0();
  /* 12577712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577715 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1257771c jmp 0x12577725 */
  goto L_12577725;
L_1257771e:;
  /* 1257771e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12577725:;
  /* 12577725 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577729 jne 0x12577736 */
  if (!C.zf) goto L_12577736;
  /* 1257772b mov ecx, dword ptr [0x12595c98] */
  ECX = (r32((uint32_t)(0x12595c98)));
  /* 12577731 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12577734 jmp 0x1257773c */
  goto L_1257773c;
L_12577736:;
  /* 12577736 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577739 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1257773c:;
  /* 1257773c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257773f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12577742:;
  /* 12577742 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577746 jbe 0x12577833 */
  if ((C.cf||C.zf)) goto L_12577833;
  /* 1257774c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257774f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12577751 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12577754 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12577758 je 0x12577762 */
  if (C.zf) goto L_12577762;
  /* 1257775a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257775e je 0x12577767 */
  if (C.zf) goto L_12577767;
  /* 12577760 jmp 0x125777c1 */
  goto L_125777c1;
L_12577762:;
  /* 12577762 jmp 0x12577833 */
  goto L_12577833;
L_12577767:;
  /* 12577767 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257776a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257776d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12577770 mov dword ptr [0x12596d38], 0 */
  w32((uint32_t)(0x12596d38), (0x0u));
  /* 1257777a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257777d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12577780 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577783 jne 0x12577798 */
  if (!C.zf) goto L_12577798;
  /* 12577785 mov dword ptr [0x12596d38], 1 */
  w32((uint32_t)(0x12596d38), (0x1u));
  /* 1257778f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577792 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577795 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12577798:;
  /* 12577798 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257779b push ecx */
  push32((uint32_t)(ECX));
  /* 1257779c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1257779f push edx */
  push32((uint32_t)(EDX));
  /* 125777a0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125777a3 push eax */
  push32((uint32_t)(EAX));
  /* 125777a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125777a7 push ecx */
  push32((uint32_t)(ECX));
  /* 125777a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125777ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125777ad push eax */
  push32((uint32_t)(EAX));
  /* 125777ae call 0x12577870 */
  push32(0x125777b3u); f_12577870();
  /* 125777b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125777b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125777b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125777bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125777bf jmp 0x1257782e */
  goto L_1257782e;
L_125777c1:;
  /* 125777c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125777c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125777c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125777c8 mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 125777ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125777d0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125777d4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125777da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125777dc je 0x12577809 */
  if (C.zf) goto L_12577809;
  /* 125777de cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125777e2 jbe 0x12577809 */
  if ((C.cf||C.zf)) goto L_12577809;
  /* 125777e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125777e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125777ea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125777ec mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125777ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125777f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125777f4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125777f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125777fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125777fd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12577800 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577803 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577806 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12577809:;
  /* 12577809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257780c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257780f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12577811 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12577813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577816 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577819 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1257781c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257781f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577822 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12577825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577828 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257782b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1257782e:;
  /* 1257782e jmp 0x12577742 */
  goto L_12577742;
L_12577833:;
  /* 12577833 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577837 je 0x12577845 */
  if (C.zf) goto L_12577845;
  /* 12577839 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1257783b call 0x1256de40 */
  push32(0x12577840u); f_1256de40();
  /* 12577840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577843 jmp 0x12577850 */
  goto L_12577850;
L_12577845:;
  /* 12577845 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 1257784a call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x12577850u);
L_12577850:;
  /* 12577850 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577854 jbe 0x12577864 */
  if ((C.cf||C.zf)) goto L_12577864;
  /* 12577856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577859 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1257785c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257785f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577862 jmp 0x12577866 */
  goto L_12577866;
L_12577864:;
  /* 12577864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12577866:;
  /* 12577866 mov esp, ebp */
  ESP = (EBP);
  /* 12577868 pop ebp */
  EBP = (pop32());
  /* 12577869 ret  */
  ESPCHK(0x125776e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017870 @ 0x12577870 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12577870(void) {
  FTRACE(0x12577870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577870 push ebp */
  push32((uint32_t)(EBP));
  /* 12577871 mov ebp, esp */
  EBP = (ESP);
  /* 12577873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577876 push esi */
  push32((uint32_t)(ESI));
  /* 12577877 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1257787b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257787e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577881 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577884 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12577887 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257788b ja 0x12577dd8 */
  if ((!C.cf&&!C.zf)) goto L_12577dd8;
  /* 12577891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12577894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12577896 mov dl, byte ptr [eax + 0x12577e39] */
  DL = (r8((uint32_t)(EAX + 0x12577e39)));
  /* 1257789c jmp dword ptr [edx*4 + 0x12577ddd] */
  switch (EDX) {
    case 0: goto L_12577db6;
    case 1: goto L_125778c5;
    case 2: goto L_1257790b;
    case 3: goto L_12577a58;
    case 4: goto L_12577a80;
    case 5: goto L_12577b1f;
    case 6: goto L_12577b8b;
    case 7: goto L_12577bb4;
    case 8: goto L_12577bf5;
    case 9: goto L_12577cd7;
    case 10: goto L_12577d3e;
    case 11: goto L_12577d8b;
    case 12: goto L_125778a3;
    case 13: goto L_125778e8;
    case 14: goto L_1257792e;
    case 15: goto L_12577a2e;
    case 16: goto L_12577ac5;
    case 17: goto L_12577af2;
    case 18: goto L_12577b47;
    case 19: goto L_12577bcb;
    case 20: goto L_12577c79;
    case 21: goto L_12577d08;
    case 22: goto L_12577dd8;
    default: x86_unimpl("switch@0x1257789c out of table"); return;
  }
L_125778a3:;
  /* 125778a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125778a6 push ecx */
  push32((uint32_t)(ECX));
  /* 125778a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125778aa push edx */
  push32((uint32_t)(EDX));
  /* 125778ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125778ae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125778b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125778b4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125778b7 push eax */
  push32((uint32_t)(EAX));
  /* 125778b8 call 0x12577e90 */
  push32(0x125778bdu); f_12577e90();
  /* 125778bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125778c0 jmp 0x12577dd8 */
  goto L_12577dd8;
L_125778c5:;
  /* 125778c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125778c8 push ecx */
  push32((uint32_t)(ECX));
  /* 125778c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125778cc push edx */
  push32((uint32_t)(EDX));
  /* 125778cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125778d0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125778d3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125778d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125778da push eax */
  push32((uint32_t)(EAX));
  /* 125778db call 0x12577e90 */
  push32(0x125778e0u); f_12577e90();
  /* 125778e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125778e3 jmp 0x12577dd8 */
  goto L_12577dd8;
L_125778e8:;
  /* 125778e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125778eb push ecx */
  push32((uint32_t)(ECX));
  /* 125778ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125778ef push edx */
  push32((uint32_t)(EDX));
  /* 125778f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125778f3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125778f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125778f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125778fd push eax */
  push32((uint32_t)(EAX));
  /* 125778fe call 0x12577e90 */
  push32(0x12577903u); f_12577e90();
  /* 12577903 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577906 jmp 0x12577dd8 */
  goto L_12577dd8;
L_1257790b:;
  /* 1257790b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257790e push ecx */
  push32((uint32_t)(ECX));
  /* 1257790f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577912 push edx */
  push32((uint32_t)(EDX));
  /* 12577913 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577916 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12577919 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257791c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12577920 push eax */
  push32((uint32_t)(EAX));
  /* 12577921 call 0x12577e90 */
  push32(0x12577926u); f_12577e90();
  /* 12577926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577929 jmp 0x12577dd8 */
  goto L_12577dd8;
L_1257792e:;
  /* 1257792e cmp dword ptr [0x12596d38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577935 je 0x125779b6 */
  if (C.zf) goto L_125779b6;
  /* 12577937 mov dword ptr [0x12596d38], 0 */
  w32((uint32_t)(0x12596d38), (0x0u));
  /* 12577941 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577944 push ecx */
  push32((uint32_t)(ECX));
  /* 12577945 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577948 push edx */
  push32((uint32_t)(EDX));
  /* 12577949 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257794c push eax */
  push32((uint32_t)(EAX));
  /* 1257794d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577950 push ecx */
  push32((uint32_t)(ECX));
  /* 12577951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577954 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1257795a push eax */
  push32((uint32_t)(EAX));
  /* 1257795b call 0x12578040 */
  push32(0x12577960u); f_12578040();
  /* 12577960 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577963 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577966 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577969 jne 0x12577970 */
  if (!C.zf) goto L_12577970;
  /* 1257796b jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577970:;
  /* 12577970 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577973 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12577975 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12577978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257797b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257797d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577980 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577983 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12577985 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577988 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257798a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257798d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577990 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12577992 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577995 push ecx */
  push32((uint32_t)(ECX));
  /* 12577996 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577999 push edx */
  push32((uint32_t)(EDX));
  /* 1257799a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257799d push eax */
  push32((uint32_t)(EAX));
  /* 1257799e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125779a1 push ecx */
  push32((uint32_t)(ECX));
  /* 125779a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125779a5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 125779ab push eax */
  push32((uint32_t)(EAX));
  /* 125779ac call 0x12578040 */
  push32(0x125779b1u); f_12578040();
  /* 125779b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125779b4 jmp 0x12577a29 */
  goto L_12577a29;
L_125779b6:;
  /* 125779b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125779b9 push ecx */
  push32((uint32_t)(ECX));
  /* 125779ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125779bd push edx */
  push32((uint32_t)(EDX));
  /* 125779be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125779c1 push eax */
  push32((uint32_t)(EAX));
  /* 125779c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125779c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125779c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125779c9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125779cf push eax */
  push32((uint32_t)(EAX));
  /* 125779d0 call 0x12578040 */
  push32(0x125779d5u); f_12578040();
  /* 125779d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125779d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125779db cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125779de jne 0x125779e5 */
  if (!C.zf) goto L_125779e5;
  /* 125779e0 jmp 0x12577dd8 */
  goto L_12577dd8;
L_125779e5:;
  /* 125779e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125779e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125779ea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 125779ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125779f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125779f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125779f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125779f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125779fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125779fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125779ff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577a02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577a05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12577a07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577a0a push ecx */
  push32((uint32_t)(ECX));
  /* 12577a0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577a0e push edx */
  push32((uint32_t)(EDX));
  /* 12577a0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577a12 push eax */
  push32((uint32_t)(EAX));
  /* 12577a13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12577a17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577a1a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12577a20 push eax */
  push32((uint32_t)(EAX));
  /* 12577a21 call 0x12578040 */
  push32(0x12577a26u); f_12578040();
  /* 12577a26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12577a29:;
  /* 12577a29 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577a2e:;
  /* 12577a2e mov ecx, dword ptr [0x12596d38] */
  ECX = (r32((uint32_t)(0x12596d38)));
  /* 12577a34 mov dword ptr [0x12596d48], ecx */
  w32((uint32_t)(0x12596d48), (ECX));
  /* 12577a3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577a3d push edx */
  push32((uint32_t)(EDX));
  /* 12577a3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577a41 push eax */
  push32((uint32_t)(EAX));
  /* 12577a42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12577a44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577a47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12577a4a push edx */
  push32((uint32_t)(EDX));
  /* 12577a4b call 0x12577ee0 */
  push32(0x12577a50u); f_12577ee0();
  /* 12577a50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577a53 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577a58:;
  /* 12577a58 mov eax, dword ptr [0x12596d38] */
  EAX = (r32((uint32_t)(0x12596d38)));
  /* 12577a5d mov dword ptr [0x12596d48], eax */
  w32((uint32_t)(0x12596d48), (EAX));
  /* 12577a62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12577a66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577a69 push edx */
  push32((uint32_t)(EDX));
  /* 12577a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 12577a6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577a6f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12577a72 push ecx */
  push32((uint32_t)(ECX));
  /* 12577a73 call 0x12577ee0 */
  push32(0x12577a78u); f_12577ee0();
  /* 12577a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577a7b jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577a80:;
  /* 12577a80 mov edx, dword ptr [0x12596d38] */
  EDX = (r32((uint32_t)(0x12596d38)));
  /* 12577a86 mov dword ptr [0x12596d48], edx */
  w32((uint32_t)(0x12596d48), (EDX));
  /* 12577a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577a8f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12577a92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577a93 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12577a98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577a9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12577a9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577aa1 jne 0x12577aaa */
  if (!C.zf) goto L_12577aaa;
  /* 12577aa3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12577aaa:;
  /* 12577aaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577aad push edx */
  push32((uint32_t)(EDX));
  /* 12577aae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577ab1 push eax */
  push32((uint32_t)(EAX));
  /* 12577ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12577ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 12577ab8 call 0x12577ee0 */
  push32(0x12577abdu); f_12577ee0();
  /* 12577abd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577ac0 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577ac5:;
  /* 12577ac5 mov edx, dword ptr [0x12596d38] */
  EDX = (r32((uint32_t)(0x12596d38)));
  /* 12577acb mov dword ptr [0x12596d48], edx */
  w32((uint32_t)(0x12596d48), (EDX));
  /* 12577ad1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12577ad5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 12577ad9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12577adb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577ade mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12577ae1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12577ae5 call 0x12577ee0 */
  push32(0x12577aeau); f_12577ee0();
  /* 12577aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577aed jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577af2:;
  /* 12577af2 mov ecx, dword ptr [0x12596d38] */
  ECX = (r32((uint32_t)(0x12596d38)));
  /* 12577af8 mov dword ptr [0x12596d48], ecx */
  w32((uint32_t)(0x12596d48), (ECX));
  /* 12577afe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577b01 push edx */
  push32((uint32_t)(EDX));
  /* 12577b02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577b05 push eax */
  push32((uint32_t)(EAX));
  /* 12577b06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12577b08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577b0b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12577b0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577b11 push edx */
  push32((uint32_t)(EDX));
  /* 12577b12 call 0x12577ee0 */
  push32(0x12577b17u); f_12577ee0();
  /* 12577b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577b1a jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577b1f:;
  /* 12577b1f mov eax, dword ptr [0x12596d38] */
  EAX = (r32((uint32_t)(0x12596d38)));
  /* 12577b24 mov dword ptr [0x12596d48], eax */
  w32((uint32_t)(0x12596d48), (EAX));
  /* 12577b29 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577b2c push ecx */
  push32((uint32_t)(ECX));
  /* 12577b2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577b30 push edx */
  push32((uint32_t)(EDX));
  /* 12577b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12577b33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577b36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12577b39 push ecx */
  push32((uint32_t)(ECX));
  /* 12577b3a call 0x12577ee0 */
  push32(0x12577b3fu); f_12577ee0();
  /* 12577b3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577b42 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577b47:;
  /* 12577b47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577b4a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577b4e jg 0x12577b6c */
  if ((!C.zf&&C.sf==C.of)) goto L_12577b6c;
  /* 12577b50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577b53 push eax */
  push32((uint32_t)(EAX));
  /* 12577b54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577b57 push ecx */
  push32((uint32_t)(ECX));
  /* 12577b58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577b5b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12577b61 push eax */
  push32((uint32_t)(EAX));
  /* 12577b62 call 0x12577e90 */
  push32(0x12577b67u); f_12577e90();
  /* 12577b67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577b6a jmp 0x12577b86 */
  goto L_12577b86;
L_12577b6c:;
  /* 12577b6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577b6f push ecx */
  push32((uint32_t)(ECX));
  /* 12577b70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577b73 push edx */
  push32((uint32_t)(EDX));
  /* 12577b74 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577b77 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12577b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12577b7e call 0x12577e90 */
  push32(0x12577b83u); f_12577e90();
  /* 12577b83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12577b86:;
  /* 12577b86 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577b8b:;
  /* 12577b8b mov edx, dword ptr [0x12596d38] */
  EDX = (r32((uint32_t)(0x12596d38)));
  /* 12577b91 mov dword ptr [0x12596d48], edx */
  w32((uint32_t)(0x12596d48), (EDX));
  /* 12577b97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577b9a push eax */
  push32((uint32_t)(EAX));
  /* 12577b9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577b9e push ecx */
  push32((uint32_t)(ECX));
  /* 12577b9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12577ba1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577ba4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12577ba6 push eax */
  push32((uint32_t)(EAX));
  /* 12577ba7 call 0x12577ee0 */
  push32(0x12577bacu); f_12577ee0();
  /* 12577bac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577baf jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577bb4:;
  /* 12577bb4 mov ecx, dword ptr [0x12596d38] */
  ECX = (r32((uint32_t)(0x12596d38)));
  /* 12577bba mov dword ptr [0x12596d48], ecx */
  w32((uint32_t)(0x12596d48), (ECX));
  /* 12577bc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577bc3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12577bc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12577bc9 jmp 0x12577c1d */
  goto L_12577c1d;
L_12577bcb:;
  /* 12577bcb mov ecx, dword ptr [0x12596d38] */
  ECX = (r32((uint32_t)(0x12596d38)));
  /* 12577bd1 mov dword ptr [0x12596d48], ecx */
  w32((uint32_t)(0x12596d48), (ECX));
  /* 12577bd7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577bda push edx */
  push32((uint32_t)(EDX));
  /* 12577bdb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577bde push eax */
  push32((uint32_t)(EAX));
  /* 12577bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 12577be1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577be4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12577be7 push edx */
  push32((uint32_t)(EDX));
  /* 12577be8 call 0x12577ee0 */
  push32(0x12577bedu); f_12577ee0();
  /* 12577bed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577bf0 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577bf5:;
  /* 12577bf5 mov eax, dword ptr [0x12596d38] */
  EAX = (r32((uint32_t)(0x12596d38)));
  /* 12577bfa mov dword ptr [0x12596d48], eax */
  w32((uint32_t)(0x12596d48), (EAX));
  /* 12577bff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c02 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577c06 jne 0x12577c11 */
  if (!C.zf) goto L_12577c11;
  /* 12577c08 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12577c0f jmp 0x12577c1d */
  goto L_12577c1d;
L_12577c11:;
  /* 12577c11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c14 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12577c17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577c1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12577c1d:;
  /* 12577c1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c20 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12577c23 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577c26 jge 0x12577c31 */
  if ((C.sf==C.of)) goto L_12577c31;
  /* 12577c28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12577c2f jmp 0x12577c5e */
  goto L_12577c5e;
L_12577c31:;
  /* 12577c31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c34 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12577c37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577c38 mov ecx, 7 */
  ECX = (0x7u);
  /* 12577c3d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577c3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12577c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c45 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12577c48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577c49 mov ecx, 7 */
  ECX = (0x7u);
  /* 12577c4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577c50 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577c53 jl 0x12577c5e */
  if ((C.sf!=C.of)) goto L_12577c5e;
  /* 12577c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577c58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577c5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12577c5e:;
  /* 12577c5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577c61 push eax */
  push32((uint32_t)(EAX));
  /* 12577c62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577c65 push ecx */
  push32((uint32_t)(ECX));
  /* 12577c66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12577c68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577c6b push edx */
  push32((uint32_t)(EDX));
  /* 12577c6c call 0x12577ee0 */
  push32(0x12577c71u); f_12577ee0();
  /* 12577c71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577c74 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577c79:;
  /* 12577c79 cmp dword ptr [0x12596d38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577c80 je 0x12577cb0 */
  if (C.zf) goto L_12577cb0;
  /* 12577c82 mov dword ptr [0x12596d38], 0 */
  w32((uint32_t)(0x12596d38), (0x0u));
  /* 12577c8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577c8f push eax */
  push32((uint32_t)(EAX));
  /* 12577c90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12577c94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577c97 push edx */
  push32((uint32_t)(EDX));
  /* 12577c98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577c9b push eax */
  push32((uint32_t)(EAX));
  /* 12577c9c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577c9f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12577ca5 push edx */
  push32((uint32_t)(EDX));
  /* 12577ca6 call 0x12578040 */
  push32(0x12577cabu); f_12578040();
  /* 12577cab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577cae jmp 0x12577cd2 */
  goto L_12577cd2;
L_12577cb0:;
  /* 12577cb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12577cb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12577cb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577cbb push edx */
  push32((uint32_t)(EDX));
  /* 12577cbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577cbf push eax */
  push32((uint32_t)(EAX));
  /* 12577cc0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577cc3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12577cc9 push edx */
  push32((uint32_t)(EDX));
  /* 12577cca call 0x12578040 */
  push32(0x12577ccfu); f_12578040();
  /* 12577ccf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12577cd2:;
  /* 12577cd2 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577cd7:;
  /* 12577cd7 mov dword ptr [0x12596d38], 0 */
  w32((uint32_t)(0x12596d38), (0x0u));
  /* 12577ce1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577ce4 push eax */
  push32((uint32_t)(EAX));
  /* 12577ce5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 12577ce9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577cec push edx */
  push32((uint32_t)(EDX));
  /* 12577ced mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12577cf1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12577cf4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12577cfa push edx */
  push32((uint32_t)(EDX));
  /* 12577cfb call 0x12578040 */
  push32(0x12577d00u); f_12578040();
  /* 12577d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577d03 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577d08:;
  /* 12577d08 mov eax, dword ptr [0x12596d38] */
  EAX = (r32((uint32_t)(0x12596d38)));
  /* 12577d0d mov dword ptr [0x12596d48], eax */
  w32((uint32_t)(0x12596d48), (EAX));
  /* 12577d12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577d15 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12577d18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577d19 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12577d1e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577d20 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12577d23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577d26 push edx */
  push32((uint32_t)(EDX));
  /* 12577d27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577d2a push eax */
  push32((uint32_t)(EAX));
  /* 12577d2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12577d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577d30 push ecx */
  push32((uint32_t)(ECX));
  /* 12577d31 call 0x12577ee0 */
  push32(0x12577d36u); f_12577ee0();
  /* 12577d36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577d39 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577d3e:;
  /* 12577d3e mov edx, dword ptr [0x12596d38] */
  EDX = (r32((uint32_t)(0x12596d38)));
  /* 12577d44 mov dword ptr [0x12596d48], edx */
  w32((uint32_t)(0x12596d48), (EDX));
  /* 12577d4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577d4d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12577d50 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577d51 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12577d56 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577d58 mov ecx, eax */
  ECX = (EAX);
  /* 12577d5a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577d5d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12577d60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577d63 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12577d66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577d67 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12577d6c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577d6e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577d70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12577d73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577d76 push eax */
  push32((uint32_t)(EAX));
  /* 12577d77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577d7a push ecx */
  push32((uint32_t)(ECX));
  /* 12577d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 12577d7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577d80 push edx */
  push32((uint32_t)(EDX));
  /* 12577d81 call 0x12577ee0 */
  push32(0x12577d86u); f_12577ee0();
  /* 12577d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577d89 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577d8b:;
  /* 12577d8b call 0x12578ea0 */
  push32(0x12577d90u); f_12578ea0();
  /* 12577d90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577d93 push eax */
  push32((uint32_t)(EAX));
  /* 12577d94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577d97 push ecx */
  push32((uint32_t)(ECX));
  /* 12577d98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12577d9d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577da1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12577da4 mov ecx, dword ptr [eax*4 + 0x12595e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12595e1c)));
  /* 12577dab push ecx */
  push32((uint32_t)(ECX));
  /* 12577dac call 0x12577e90 */
  push32(0x12577db1u); f_12577e90();
  /* 12577db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577db4 jmp 0x12577dd8 */
  goto L_12577dd8;
L_12577db6:;
  /* 12577db6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577db9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12577dbb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12577dbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577dc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12577dc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577dc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577dc9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12577dcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577dce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12577dd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577dd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577dd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12577dd8:;
  /* 12577dd8 pop esi */
  ESI = (pop32());
  /* 12577dd9 mov esp, ebp */
  ESP = (EBP);
  /* 12577ddb pop ebp */
  EBP = (pop32());
  /* 12577ddc ret  */
  ESPCHK(0x12577870u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12577e90 (72 bytes, 30 insns) */
void f_12577e90(void) {
  FTRACE(0x12577e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12577e91 mov ebp, esp */
  EBP = (ESP);
L_12577e93:;
  /* 12577e93 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577e96 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577e99 je 0x12577ed6 */
  if (C.zf) goto L_12577ed6;
  /* 12577e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577e9e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12577ea1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12577ea3 je 0x12577ed6 */
  if (C.zf) goto L_12577ed6;
  /* 12577ea5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577ea8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577ead mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12577eaf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12577eb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577eb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12577eb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577eb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577ebc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12577ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577ec1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577ec4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12577ec7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577eca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12577ecc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577ecf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577ed2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12577ed4 jmp 0x12577e93 */
  goto L_12577e93;
L_12577ed6:;
  /* 12577ed6 pop ebp */
  EBP = (pop32());
  /* 12577ed7 ret  */
  ESPCHK(0x12577e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ee0 @ 0x12577ee0 (173 bytes, 64 insns) */
void f_12577ee0(void) {
  FTRACE(0x12577ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12577ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12577ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12577ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12577eeb cmp dword ptr [0x12596d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577ef2 je 0x12577f0a */
  if (C.zf) goto L_12577f0a;
  /* 12577ef4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577ef7 push eax */
  push32((uint32_t)(EAX));
  /* 12577ef8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577efb push ecx */
  push32((uint32_t)(ECX));
  /* 12577efc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577eff push edx */
  push32((uint32_t)(EDX));
  /* 12577f00 call 0x12577f90 */
  push32(0x12577f05u); f_12577f90();
  /* 12577f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577f08 jmp 0x12577f89 */
  goto L_12577f89;
L_12577f0a:;
  /* 12577f0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577f0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f10 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577f12 jae 0x12577f80 */
  if (!C.cf) goto L_12577f80;
  /* 12577f14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577f1a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12577f1d jmp 0x12577f28 */
  goto L_12577f28;
L_12577f1f:;
  /* 12577f1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f22 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577f25 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12577f28:;
  /* 12577f28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12577f30 je 0x12577f64 */
  if (C.zf) goto L_12577f64;
  /* 12577f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577f35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577f36 mov ecx, 0xa */
  ECX = (0xau);
  /* 12577f3b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577f3d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577f40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577f43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577f45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f48 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12577f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577f4e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577f4f mov ecx, 0xa */
  ECX = (0xau);
  /* 12577f54 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577f56 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12577f59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577f5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577f5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12577f62 jmp 0x12577f1f */
  goto L_12577f1f;
L_12577f64:;
  /* 12577f64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577f67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577f69 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577f6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577f6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12577f71 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577f74 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577f76 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577f79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577f7c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12577f7e jmp 0x12577f89 */
  goto L_12577f89;
L_12577f80:;
  /* 12577f80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12577f83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12577f89:;
  /* 12577f89 mov esp, ebp */
  ESP = (EBP);
  /* 12577f8b pop ebp */
  EBP = (pop32());
  /* 12577f8c ret  */
  ESPCHK(0x12577ee0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12577f90 (172 bytes, 65 insns) */
void f_12577f90(void) {
  FTRACE(0x12577f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12577f91 mov ebp, esp */
  EBP = (ESP);
  /* 12577f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577f96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577f99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577f9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12577f9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577fa1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577fa4 jbe 0x12577feb */
  if ((C.cf||C.zf)) goto L_12577feb;
L_12577fa6:;
  /* 12577fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577fa9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577faa mov ecx, 0xa */
  ECX = (0xau);
  /* 12577faf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577fb1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577fb7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12577fb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577fbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12577fbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12577fc2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577fc5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12577fc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12577fca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577fcd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12577fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577fd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12577fd3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12577fd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12577fda mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12577fdd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577fe1 jle 0x12577feb */
  if ((C.zf||C.sf!=C.of)) goto L_12577feb;
  /* 12577fe3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12577fe6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577fe9 ja 0x12577fa6 */
  if ((!C.cf&&!C.zf)) goto L_12577fa6;
L_12577feb:;
  /* 12577feb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577fee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12577ff0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12577ff3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12577ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577ff9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12577ffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577ffe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578001 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12578004:;
  /* 12578004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578007 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578009 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1257800c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257800f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578012 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578014 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12578016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257801c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1257801f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578022 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12578025 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12578027 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257802a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257802d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12578030 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578033 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578036 jb 0x12578004 */
  if (C.cf) goto L_12578004;
  /* 12578038 mov esp, ebp */
  ESP = (EBP);
  /* 1257803a pop ebp */
  EBP = (pop32());
  /* 1257803b ret  */
  ESPCHK(0x12577f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018040 @ 0x12578040 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12578040(void) {
  FTRACE(0x12578040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578040 push ebp */
  push32((uint32_t)(EBP));
  /* 12578041 mov ebp, esp */
  EBP = (ESP);
  /* 12578043 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12578046:;
  /* 12578046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578049 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257804c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257804e je 0x125784bc */
  if (C.zf) goto L_125784bc;
  /* 12578054 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578057 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257805a je 0x125784bc */
  if (C.zf) goto L_125784bc;
  /* 12578060 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12578064 mov dword ptr [0x12596d48], 0 */
  w32((uint32_t)(0x12596d48), (0x0u));
  /* 1257806e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12578075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578078 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257807b jmp 0x12578086 */
  goto L_12578086;
L_1257807d:;
  /* 1257807d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578080 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12578086:;
  /* 12578086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578089 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1257808c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257808f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12578092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578098 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1257809b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257809d jne 0x125780a1 */
  if (!C.zf) goto L_125780a1;
  /* 1257809f jmp 0x1257807d */
  goto L_1257807d;
L_125780a1:;
  /* 125780a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125780a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125780a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125780aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125780ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125780b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125780b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125780b6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125780b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125780bc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125780c0 ja 0x12578410 */
  if ((!C.cf&&!C.zf)) goto L_12578410;
  /* 125780c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125780c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125780cb mov al, byte ptr [ecx + 0x125784ec] */
  AL = (r8((uint32_t)(ECX + 0x125784ec)));
  /* 125780d1 jmp dword ptr [eax*4 + 0x125784c0] */
  switch (EAX) {
    case 0: goto L_1257832f;
    case 1: goto L_12578213;
    case 2: goto L_1257819e;
    case 3: goto L_125780d8;
    case 4: goto L_12578116;
    case 5: goto L_12578177;
    case 6: goto L_125781c5;
    case 7: goto L_125781ec;
    case 8: goto L_1257825a;
    case 9: goto L_12578154;
    case 10: goto L_12578410;
    default: x86_unimpl("switch@0x125780d1 out of table"); return;
  }
L_125780d8:;
  /* 125780d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125780db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125780de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125780e1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125780e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125780e7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125780eb ja 0x12578111 */
  if ((!C.cf&&!C.zf)) goto L_12578111;
  /* 125780ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125780f0 jmp dword ptr [ecx*4 + 0x1257853f] */
  switch (ECX) {
    case 0: goto L_125780f7;
    case 1: goto L_12578101;
    case 2: goto L_12578107;
    case 3: goto L_1257810d;
    case 4: goto L_12578135;
    case 5: goto L_1257813f;
    case 6: goto L_12578145;
    case 7: goto L_1257814b;
    default: x86_unimpl("switch@0x125780f0 out of table"); return;
  }
L_125780f7:;
  /* 125780f7 mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_12578101:;
  /* 12578101 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12578105 jmp 0x12578111 */
  goto L_12578111;
L_12578107:;
  /* 12578107 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1257810b jmp 0x12578111 */
  goto L_12578111;
L_1257810d:;
  /* 1257810d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12578111:;
  /* 12578111 jmp 0x12578410 */
  goto L_12578410;
L_12578116:;
  /* 12578116 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578119 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1257811c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1257811f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578122 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12578125 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578129 ja 0x1257814f */
  if ((!C.cf&&!C.zf)) goto L_1257814f;
  /* 1257812b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1257812e jmp dword ptr [ecx*4 + 0x1257854f] */
  switch (ECX) {
    case 0: goto L_12578135;
    case 1: goto L_1257813f;
    case 2: goto L_12578145;
    case 3: goto L_1257814b;
    default: x86_unimpl("switch@0x1257812e out of table"); return;
  }
L_12578135:;
  /* 12578135 mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_1257813f:;
  /* 1257813f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12578143 jmp 0x1257814f */
  goto L_1257814f;
L_12578145:;
  /* 12578145 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12578149 jmp 0x1257814f */
  goto L_1257814f;
L_1257814b:;
  /* 1257814b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1257814f:;
  /* 1257814f jmp 0x12578410 */
  goto L_12578410;
L_12578154:;
  /* 12578154 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578157 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1257815a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257815e je 0x12578168 */
  if (C.zf) goto L_12578168;
  /* 12578160 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578164 je 0x1257816e */
  if (C.zf) goto L_1257816e;
  /* 12578166 jmp 0x12578172 */
  goto L_12578172;
L_12578168:;
  /* 12578168 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1257816c jmp 0x12578172 */
  goto L_12578172;
L_1257816e:;
  /* 1257816e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12578172:;
  /* 12578172 jmp 0x12578410 */
  goto L_12578410;
L_12578177:;
  /* 12578177 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257817a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1257817d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578181 je 0x1257818b */
  if (C.zf) goto L_1257818b;
  /* 12578183 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578187 je 0x12578195 */
  if (C.zf) goto L_12578195;
  /* 12578189 jmp 0x12578199 */
  goto L_12578199;
L_1257818b:;
  /* 1257818b mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_12578195:;
  /* 12578195 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12578199:;
  /* 12578199 jmp 0x12578410 */
  goto L_12578410;
L_1257819e:;
  /* 1257819e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125781a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125781a4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781a8 je 0x125781b2 */
  if (C.zf) goto L_125781b2;
  /* 125781aa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781ae je 0x125781bc */
  if (C.zf) goto L_125781bc;
  /* 125781b0 jmp 0x125781c0 */
  goto L_125781c0;
L_125781b2:;
  /* 125781b2 mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_125781bc:;
  /* 125781bc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_125781c0:;
  /* 125781c0 jmp 0x12578410 */
  goto L_12578410;
L_125781c5:;
  /* 125781c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125781c8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 125781cb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781cf je 0x125781d9 */
  if (C.zf) goto L_125781d9;
  /* 125781d1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781d5 je 0x125781e3 */
  if (C.zf) goto L_125781e3;
  /* 125781d7 jmp 0x125781e7 */
  goto L_125781e7;
L_125781d9:;
  /* 125781d9 mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_125781e3:;
  /* 125781e3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_125781e7:;
  /* 125781e7 jmp 0x12578410 */
  goto L_12578410;
L_125781ec:;
  /* 125781ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125781ef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125781f2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781f6 je 0x12578200 */
  if (C.zf) goto L_12578200;
  /* 125781f8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125781fc je 0x1257820a */
  if (C.zf) goto L_1257820a;
  /* 125781fe jmp 0x1257820e */
  goto L_1257820e;
L_12578200:;
  /* 12578200 mov dword ptr [0x12596d48], 1 */
  w32((uint32_t)(0x12596d48), (0x1u));
L_1257820a:;
  /* 1257820a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1257820e:;
  /* 1257820e jmp 0x12578410 */
  goto L_12578410;
L_12578213:;
  /* 12578213 push 0x12592ecc */
  push32((uint32_t)(0x12592eccu));
  /* 12578218 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257821b push ecx */
  push32((uint32_t)(ECX));
  /* 1257821c call 0x12578a70 */
  push32(0x12578221u); f_12578a70();
  /* 12578221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578226 jne 0x12578233 */
  if (!C.zf) goto L_12578233;
  /* 12578228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257822b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257822e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12578231 jmp 0x12578251 */
  goto L_12578251;
L_12578233:;
  /* 12578233 push 0x12592ec8 */
  push32((uint32_t)(0x12592ec8u));
  /* 12578238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257823b push eax */
  push32((uint32_t)(EAX));
  /* 1257823c call 0x12578a70 */
  push32(0x12578241u); f_12578a70();
  /* 12578241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578246 jne 0x12578251 */
  if (!C.zf) goto L_12578251;
  /* 12578248 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257824b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257824e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12578251:;
  /* 12578251 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12578255 jmp 0x12578410 */
  goto L_12578410;
L_1257825a:;
  /* 1257825a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257825d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578261 jg 0x12578271 */
  if ((!C.zf&&C.sf==C.of)) goto L_12578271;
  /* 12578263 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12578266 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1257826c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1257826f jmp 0x1257827d */
  goto L_1257827d;
L_12578271:;
  /* 12578271 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12578274 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1257827a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1257827d:;
  /* 1257827d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578281 jle 0x12578324 */
  if ((C.zf||C.sf!=C.of)) goto L_12578324;
  /* 12578287 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257828a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257828d jbe 0x12578324 */
  if ((C.cf||C.zf)) goto L_12578324;
  /* 12578293 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12578296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578298 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1257829a mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 125782a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125782a2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125782a6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125782ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125782ae je 0x125782e7 */
  if (C.zf) goto L_125782e7;
  /* 125782b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125782b3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125782b6 jbe 0x125782e7 */
  if ((C.cf||C.zf)) goto L_125782e7;
  /* 125782b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125782bd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125782c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125782c2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125782c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125782c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125782cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125782d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125782d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125782d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125782da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125782dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125782df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125782e2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125782e5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125782e7:;
  /* 125782e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125782ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125782ef mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125782f1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125782f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125782f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125782fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125782fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12578300 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12578303 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578306 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12578309 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257830c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1257830e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578311 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578314 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12578316 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578319 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257831c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1257831f jmp 0x1257827d */
  goto L_1257827d;
L_12578324:;
  /* 12578324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578327 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1257832a jmp 0x12578046 */
  goto L_12578046;
L_1257832f:;
  /* 1257832f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578332 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12578335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12578337 je 0x12578402 */
  if (C.zf) goto L_12578402;
  /* 1257833d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578340 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578343 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12578346:;
  /* 12578346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578349 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257834c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257834e je 0x12578400 */
  if (C.zf) goto L_12578400;
  /* 12578354 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578357 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257835a je 0x12578400 */
  if (C.zf) goto L_12578400;
  /* 12578360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578363 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12578366 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578369 jne 0x12578379 */
  if (!C.zf) goto L_12578379;
  /* 1257836b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257836e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578371 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12578374 jmp 0x12578400 */
  goto L_12578400;
L_12578379:;
  /* 12578379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257837c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257837e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12578380 mov edx, dword ptr [0x12594c98] */
  EDX = (r32((uint32_t)(0x12594c98)));
  /* 12578386 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578388 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1257838c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12578391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578393 je 0x125783cc */
  if (C.zf) goto L_125783cc;
  /* 12578395 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578398 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257839b jbe 0x125783cc */
  if ((C.cf||C.zf)) goto L_125783cc;
  /* 1257839d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125783a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125783a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125783a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125783a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125783ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125783b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125783b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125783b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125783bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125783bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125783c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125783c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125783c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125783ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125783cc:;
  /* 125783cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125783d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125783d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125783d6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125783d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125783dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125783e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125783e3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125783e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125783e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125783eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125783ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125783f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125783f3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125783f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125783f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125783fb jmp 0x12578346 */
  goto L_12578346;
L_12578400:;
  /* 12578400 jmp 0x1257840b */
  goto L_1257840b;
L_12578402:;
  /* 12578402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578405 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578408 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1257840b:;
  /* 1257840b jmp 0x12578046 */
  goto L_12578046;
L_12578410:;
  /* 12578410 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12578414 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12578416 je 0x1257843c */
  if (C.zf) goto L_1257843c;
  /* 12578418 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257841b push edx */
  push32((uint32_t)(EDX));
  /* 1257841c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257841f push eax */
  push32((uint32_t)(EAX));
  /* 12578420 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578423 push ecx */
  push32((uint32_t)(ECX));
  /* 12578424 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12578427 push edx */
  push32((uint32_t)(EDX));
  /* 12578428 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1257842b push eax */
  push32((uint32_t)(EAX));
  /* 1257842c call 0x12577870 */
  push32(0x12578431u); f_12577870();
  /* 12578431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578437 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1257843a jmp 0x125784b7 */
  goto L_125784b7;
L_1257843c:;
  /* 1257843c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257843f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578441 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578443 mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 12578449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257844b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1257844f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12578455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12578457 je 0x12578488 */
  if (C.zf) goto L_12578488;
  /* 12578459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257845c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1257845e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578461 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578463 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12578465 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578468 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257846a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257846d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578470 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12578472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578478 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1257847b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257847e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12578480 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578483 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578486 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12578488:;
  /* 12578488 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257848b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1257848d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578490 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12578492 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12578494 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12578499 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257849c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257849f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125784a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125784a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125784a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125784aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125784ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125784af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125784b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125784b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125784b7:;
  /* 125784b7 jmp 0x12578046 */
  goto L_12578046;
L_125784bc:;
  /* 125784bc mov esp, ebp */
  ESP = (EBP);
  /* 125784be pop ebp */
  EBP = (pop32());
  /* 125784bf ret  */
  ESPCHK(0x12578040u, _esp0);
  ESP += 4; return;
}

/* FUN_10018560 @ 0x12578560 (650 bytes, 178 insns) */
void f_12578560(void) {
  FTRACE(0x12578560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578560 push ebp */
  push32((uint32_t)(EBP));
  /* 12578561 mov ebp, esp */
  EBP = (ESP);
  /* 12578563 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578569 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257856d jne 0x125786c9 */
  if (!C.zf) goto L_125786c9;
  /* 12578573 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578576 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1257857c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12578582 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12578585 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1257858c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12578596 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578598 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1257859e push edx */
  push32((uint32_t)(EDX));
  /* 1257859f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125785a2 push eax */
  push32((uint32_t)(EAX));
  /* 125785a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125785a6 push ecx */
  push32((uint32_t)(ECX));
  /* 125785a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125785aa push edx */
  push32((uint32_t)(EDX));
  /* 125785ab call 0x12579980 */
  push32(0x125785b0u); f_12579980();
  /* 125785b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125785b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125785b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125785ba jne 0x1257864f */
  if (!C.zf) goto L_1257864f;
  /* 125785c0 call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x125785c6u);
  /* 125785c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125785c9 je 0x125785d0 */
  if (C.zf) goto L_125785d0;
  /* 125785cb jmp 0x125786ad */
  goto L_125786ad;
L_125785d0:;
  /* 125785d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125785d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125785d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125785d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125785d9 push eax */
  push32((uint32_t)(EAX));
  /* 125785da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125785dd push ecx */
  push32((uint32_t)(ECX));
  /* 125785de call 0x12579980 */
  push32(0x125785e3u); f_12579980();
  /* 125785e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125785e6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 125785ec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125785f3 jne 0x125785fa */
  if (!C.zf) goto L_125785fa;
  /* 125785f5 jmp 0x125786ad */
  goto L_125786ad;
L_125785fa:;
  /* 125785fa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125785fc push 0x12592ed4 */
  push32((uint32_t)(0x12592ed4u));
  /* 12578601 push 2 */
  push32((uint32_t)(0x2u));
  /* 12578603 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12578609 push edx */
  push32((uint32_t)(EDX));
  /* 1257860a call 0x1256a3a0 */
  push32(0x1257860fu); f_1256a3a0();
  /* 1257860f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12578615 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578619 jne 0x12578620 */
  if (!C.zf) goto L_12578620;
  /* 1257861b jmp 0x125786ad */
  goto L_125786ad;
L_12578620:;
  /* 12578620 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12578627 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578629 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1257862f push eax */
  push32((uint32_t)(EAX));
  /* 12578630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578633 push ecx */
  push32((uint32_t)(ECX));
  /* 12578634 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578637 push edx */
  push32((uint32_t)(EDX));
  /* 12578638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257863b push eax */
  push32((uint32_t)(EAX));
  /* 1257863c call 0x12579980 */
  push32(0x12578641u); f_12579980();
  /* 12578641 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578644 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12578647 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257864b jne 0x1257864f */
  if (!C.zf) goto L_1257864f;
  /* 1257864d jmp 0x125786ad */
  goto L_125786ad;
L_1257864f:;
  /* 1257864f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12578651 push 0x12592ed4 */
  push32((uint32_t)(0x12592ed4u));
  /* 12578656 push 2 */
  push32((uint32_t)(0x2u));
  /* 12578658 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257865b push ecx */
  push32((uint32_t)(ECX));
  /* 1257865c call 0x1256a3a0 */
  push32(0x12578661u); f_1256a3a0();
  /* 12578661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578664 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1257866a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1257866c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12578672 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578675 jne 0x12578679 */
  if (!C.zf) goto L_12578679;
  /* 12578677 jmp 0x125786ad */
  goto L_125786ad;
L_12578679:;
  /* 12578679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257867c push ecx */
  push32((uint32_t)(ECX));
  /* 1257867d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578680 push edx */
  push32((uint32_t)(EDX));
  /* 12578681 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12578687 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12578689 push ecx */
  push32((uint32_t)(ECX));
  /* 1257868a call 0x1256dbc0 */
  push32(0x1257868fu); f_1256dbc0();
  /* 1257868f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578692 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578696 je 0x125786a6 */
  if (C.zf) goto L_125786a6;
  /* 12578698 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257869a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257869d push edx */
  push32((uint32_t)(EDX));
  /* 1257869e call 0x1256ae30 */
  push32(0x125786a3u); f_1256ae30();
  /* 125786a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125786a6:;
  /* 125786a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125786a8 jmp 0x125787e6 */
  goto L_125787e6;
L_125786ad:;
  /* 125786ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125786b1 je 0x125786c1 */
  if (C.zf) goto L_125786c1;
  /* 125786b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125786b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125786b8 push eax */
  push32((uint32_t)(EAX));
  /* 125786b9 call 0x1256ae30 */
  push32(0x125786beu); f_1256ae30();
  /* 125786be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125786c1:;
  /* 125786c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125786c4 jmp 0x125787e6 */
  goto L_125787e6;
L_125786c9:;
  /* 125786c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125786cd jne 0x125787e3 */
  if (!C.zf) goto L_125787e3;
  /* 125786d3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 125786dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125786e0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125786e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125786e8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125786ee push edx */
  push32((uint32_t)(EDX));
  /* 125786ef push 0x12596c60 */
  push32((uint32_t)(0x12596c60u));
  /* 125786f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125786f7 push eax */
  push32((uint32_t)(EAX));
  /* 125786f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125786fb push ecx */
  push32((uint32_t)(ECX));
  /* 125786fc call 0x125797e0 */
  push32(0x12578701u); f_125797e0();
  /* 12578701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578706 jne 0x12578710 */
  if (!C.zf) goto L_12578710;
  /* 12578708 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257870b jmp 0x125787e6 */
  goto L_125787e6;
L_12578710:;
  /* 12578710 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12578716 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12578719 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12578723 jmp 0x12578734 */
  goto L_12578734;
L_12578725:;
  /* 12578725 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1257872b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257872e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12578734:;
  /* 12578734 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257873b jge 0x125787df */
  if ((C.sf==C.of)) goto L_125787df;
  /* 12578741 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578748 jle 0x1257877b */
  if ((C.zf||C.sf!=C.of)) goto L_1257877b;
  /* 1257874a push 4 */
  push32((uint32_t)(0x4u));
  /* 1257874c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12578752 mov dl, byte ptr [ecx*2 + 0x12596c60] */
  DL = (r8((uint32_t)(ECX*2 + 0x12596c60)));
  /* 12578759 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1257875f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12578765 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257876a push eax */
  push32((uint32_t)(EAX));
  /* 1257876b call 0x125703b0 */
  push32(0x12578770u); f_125703b0();
  /* 12578770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578773 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12578779 jmp 0x125787ae */
  goto L_125787ae;
L_1257877b:;
  /* 1257877b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12578781 mov dl, byte ptr [ecx*2 + 0x12596c60] */
  DL = (r8((uint32_t)(ECX*2 + 0x12596c60)));
  /* 12578788 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1257878e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12578794 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12578799 mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 1257879f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125787a1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125787a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125787a8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_125787ae:;
  /* 125787ae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125787b5 je 0x125787d8 */
  if (C.zf) goto L_125787d8;
  /* 125787b7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125787bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125787c0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125787c3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 125787ca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125787ce mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125787d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125787d6 jmp 0x125787da */
  goto L_125787da;
L_125787d8:;
  /* 125787d8 jmp 0x125787df */
  goto L_125787df;
L_125787da:;
  /* 125787da jmp 0x12578725 */
  goto L_12578725;
L_125787df:;
  /* 125787df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125787e1 jmp 0x125787e6 */
  goto L_125787e6;
L_125787e3:;
  /* 125787e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125787e6:;
  /* 125787e6 mov esp, ebp */
  ESP = (EBP);
  /* 125787e8 pop ebp */
  EBP = (pop32());
  /* 125787e9 ret  */
  ESPCHK(0x12578560u, _esp0);
  ESP += 4; return;
}

/* FUN_100187f0 @ 0x125787f0 (10 bytes, 5 insns) */
void f_125787f0(void) {
  FTRACE(0x125787f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125787f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125787f1 mov ebp, esp */
  EBP = (ESP);
  /* 125787f3 mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 125787f8 pop ebp */
  EBP = (pop32());
  /* 125787f9 ret  */
  ESPCHK(0x125787f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018800 @ 0x12578800 (575 bytes, 196 insns) */
void f_12578800(void) {
  FTRACE(0x12578800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578800 push ebp */
  push32((uint32_t)(EBP));
  /* 12578801 mov ebp, esp */
  EBP = (ESP);
  /* 12578803 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12578805 push 0x12592ee0 */
  push32((uint32_t)(0x12592ee0u));
  /* 1257880a push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 1257880f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12578815 push eax */
  push32((uint32_t)(EAX));
  /* 12578816 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1257881d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578820 push ebx */
  push32((uint32_t)(EBX));
  /* 12578821 push esi */
  push32((uint32_t)(ESI));
  /* 12578822 push edi */
  push32((uint32_t)(EDI));
  /* 12578823 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12578826 cmp dword ptr [0x12596c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257882d jne 0x1257887e */
  if (!C.zf) goto L_1257887e;
  /* 1257882f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12578832 push eax */
  push32((uint32_t)(EAX));
  /* 12578833 push 1 */
  push32((uint32_t)(0x1u));
  /* 12578835 push 0x12592614 */
  push32((uint32_t)(0x12592614u));
  /* 1257883a push 1 */
  push32((uint32_t)(0x1u));
  /* 1257883c call dword ptr [0x12599324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599324))), 0x12578842u);
  /* 12578842 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578844 je 0x12578852 */
  if (C.zf) goto L_12578852;
  /* 12578846 mov dword ptr [0x12596c6c], 1 */
  w32((uint32_t)(0x12596c6c), (0x1u));
  /* 12578850 jmp 0x1257887e */
  goto L_1257887e;
L_12578852:;
  /* 12578852 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12578855 push ecx */
  push32((uint32_t)(ECX));
  /* 12578856 push 1 */
  push32((uint32_t)(0x1u));
  /* 12578858 push 0x12592610 */
  push32((uint32_t)(0x12592610u));
  /* 1257885d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257885f push 0 */
  push32((uint32_t)(0x0u));
  /* 12578861 call dword ptr [0x12599334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599334))), 0x12578867u);
  /* 12578867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578869 je 0x12578877 */
  if (C.zf) goto L_12578877;
  /* 1257886b mov dword ptr [0x12596c6c], 2 */
  w32((uint32_t)(0x12596c6c), (0x2u));
  /* 12578875 jmp 0x1257887e */
  goto L_1257887e;
L_12578877:;
  /* 12578877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578879 jmp 0x12578a59 */
  goto L_12578a59;
L_1257887e:;
  /* 1257887e cmp dword ptr [0x12596c6c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596c6c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578885 jne 0x125788a2 */
  if (!C.zf) goto L_125788a2;
  /* 12578887 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257888a push edx */
  push32((uint32_t)(EDX));
  /* 1257888b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257888e push eax */
  push32((uint32_t)(EAX));
  /* 1257888f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12578892 push ecx */
  push32((uint32_t)(ECX));
  /* 12578893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578896 push edx */
  push32((uint32_t)(EDX));
  /* 12578897 call dword ptr [0x12599324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599324))), 0x1257889du);
  /* 1257889d jmp 0x12578a59 */
  goto L_12578a59;
L_125788a2:;
  /* 125788a2 cmp dword ptr [0x12596c6c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596c6c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125788a9 jne 0x12578a57 */
  if (!C.zf) goto L_12578a57;
  /* 125788af cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125788b3 jne 0x125788bd */
  if (!C.zf) goto L_125788bd;
  /* 125788b5 mov eax, dword ptr [0x12596be0] */
  EAX = (r32((uint32_t)(0x12596be0)));
  /* 125788ba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_125788bd:;
  /* 125788bd push 0 */
  push32((uint32_t)(0x0u));
  /* 125788bf push 0 */
  push32((uint32_t)(0x0u));
  /* 125788c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125788c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125788c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125788c8 push ecx */
  push32((uint32_t)(ECX));
  /* 125788c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125788cc push edx */
  push32((uint32_t)(EDX));
  /* 125788cd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125788d2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125788d5 push eax */
  push32((uint32_t)(EAX));
  /* 125788d6 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x125788dcu);
  /* 125788dc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125788df cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125788e3 jne 0x125788ec */
  if (!C.zf) goto L_125788ec;
  /* 125788e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125788e7 jmp 0x12578a59 */
  goto L_12578a59;
L_125788ec:;
  /* 125788ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125788f3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125788f6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125788f9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125788fb call 0x1256d540 */
  push32(0x12578900u); f_1256d540();
  /* 12578900 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12578903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12578906 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12578909 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1257890c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1257890f push edx */
  push32((uint32_t)(EDX));
  /* 12578910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578912 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12578915 push eax */
  push32((uint32_t)(EAX));
  /* 12578916 call 0x1256e110 */
  push32(0x1257891bu); f_1256e110();
  /* 1257891b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257891e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12578925 jmp 0x1257893e */
  goto L_1257893e;
  /* 12578927 mov eax, 1 */
  EAX = (0x1u);
  /* 1257892c ret  */
  ESPCHK(0x12578800u, _esp0);
  ESP += 4; return;
  /* 1257892d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12578930 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12578937 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1257893e:;
  /* 1257893e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578942 jne 0x1257894b */
  if (!C.zf) goto L_1257894b;
  /* 12578944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578946 jmp 0x12578a59 */
  goto L_12578a59;
L_1257894b:;
  /* 1257894b push 0 */
  push32((uint32_t)(0x0u));
  /* 1257894d push 0 */
  push32((uint32_t)(0x0u));
  /* 1257894f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12578952 push ecx */
  push32((uint32_t)(ECX));
  /* 12578953 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12578956 push edx */
  push32((uint32_t)(EDX));
  /* 12578957 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257895a push eax */
  push32((uint32_t)(EAX));
  /* 1257895b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257895e push ecx */
  push32((uint32_t)(ECX));
  /* 1257895f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12578964 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12578967 push edx */
  push32((uint32_t)(EDX));
  /* 12578968 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x1257896eu);
  /* 1257896e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12578970 jne 0x12578979 */
  if (!C.zf) goto L_12578979;
  /* 12578972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578974 jmp 0x12578a59 */
  goto L_12578a59;
L_12578979:;
  /* 12578979 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12578980 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12578983 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12578987 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257898a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1257898c call 0x1256d540 */
  push32(0x12578991u); f_1256d540();
  /* 12578991 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12578994 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12578997 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1257899a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1257899d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125789a4 jmp 0x125789bd */
  goto L_125789bd;
  /* 125789a6 mov eax, 1 */
  EAX = (0x1u);
  /* 125789ab ret  */
  ESPCHK(0x12578800u, _esp0);
  ESP += 4; return;
  /* 125789ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125789af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125789b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125789bd:;
  /* 125789bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125789c1 jne 0x125789ca */
  if (!C.zf) goto L_125789ca;
  /* 125789c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125789c5 jmp 0x12578a59 */
  goto L_12578a59;
L_125789ca:;
  /* 125789ca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125789ce jne 0x125789d9 */
  if (!C.zf) goto L_125789d9;
  /* 125789d0 mov edx, dword ptr [0x12596bd0] */
  EDX = (r32((uint32_t)(0x12596bd0)));
  /* 125789d6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_125789d9:;
  /* 125789d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125789dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125789df mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 125789e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125789e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125789eb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 125789f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125789f5 push ecx */
  push32((uint32_t)(ECX));
  /* 125789f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125789f9 push edx */
  push32((uint32_t)(EDX));
  /* 125789fa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125789fd push eax */
  push32((uint32_t)(EAX));
  /* 125789fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578a01 push ecx */
  push32((uint32_t)(ECX));
  /* 12578a02 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12578a05 push edx */
  push32((uint32_t)(EDX));
  /* 12578a06 call dword ptr [0x12599334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599334))), 0x12578a0cu);
  /* 12578a0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12578a0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578a12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12578a15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578a17 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12578a1c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578a22 je 0x12578a38 */
  if (C.zf) goto L_12578a38;
  /* 12578a24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578a27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12578a2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578a2c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12578a30 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578a36 je 0x12578a3c */
  if (C.zf) goto L_12578a3c;
L_12578a38:;
  /* 12578a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578a3a jmp 0x12578a59 */
  goto L_12578a59;
L_12578a3c:;
  /* 12578a3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578a3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12578a41 push eax */
  push32((uint32_t)(EAX));
  /* 12578a42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12578a45 push ecx */
  push32((uint32_t)(ECX));
  /* 12578a46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12578a49 push edx */
  push32((uint32_t)(EDX));
  /* 12578a4a call 0x12572290 */
  push32(0x12578a4fu); f_12572290();
  /* 12578a4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578a52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12578a55 jmp 0x12578a59 */
  goto L_12578a59;
L_12578a57:;
  /* 12578a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12578a59:;
  /* 12578a59 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12578a5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12578a5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12578a66 pop edi */
  EDI = (pop32());
  /* 12578a67 pop esi */
  ESI = (pop32());
  /* 12578a68 pop ebx */
  EBX = (pop32());
  /* 12578a69 mov esp, ebp */
  ESP = (EBP);
  /* 12578a6b pop ebp */
  EBP = (pop32());
  /* 12578a6c ret  */
  ESPCHK(0x12578800u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a70 @ 0x12578a70 (208 bytes, 85 insns) */
void f_12578a70(void) {
  FTRACE(0x12578a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12578a71 mov ebp, esp */
  EBP = (ESP);
  /* 12578a73 push edi */
  push32((uint32_t)(EDI));
  /* 12578a74 push esi */
  push32((uint32_t)(ESI));
  /* 12578a75 push ebx */
  push32((uint32_t)(EBX));
  /* 12578a76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12578a79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12578a7c lea eax, [0x12596bc8] */
  EAX = ((uint32_t)(0x12596bc8));
  /* 12578a82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578a86 jne 0x12578ac3 */
  if (!C.zf) goto L_12578ac3;
  /* 12578a88 mov al, 0xff */
  AL = (0xffu);
  /* 12578a8a mov edi, edi */
  EDI = (EDI);
L_12578a8c:;
  /* 12578a8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12578a8e je 0x12578abe */
  if (C.zf) goto L_12578abe;
  /* 12578a90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12578a92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12578a93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12578a95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12578a96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578a98 je 0x12578a8c */
  if (C.zf) goto L_12578a8c;
  /* 12578a9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12578a9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578a9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12578aa0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12578aa3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12578aa5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12578aa7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12578aa9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12578aab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578aad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12578aaf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12578ab2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12578ab4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12578ab6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578ab8 je 0x12578a8c */
  if (C.zf) goto L_12578a8c;
  /* 12578aba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12578abc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12578abe:;
  /* 12578abe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12578ac1 jmp 0x12578b3b */
  goto L_12578b3b;
L_12578ac3:;
  /* 12578ac3 lock inc dword ptr [0x12596d5c] */
  x86_unimpl("lock inc @ 0x12578ac3");
  /* 12578aca cmp dword ptr [0x12596d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578ad1 jg 0x12578ad7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12578ad7;
  /* 12578ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578ad5 jmp 0x12578aec */
  goto L_12578aec;
L_12578ad7:;
  /* 12578ad7 lock dec dword ptr [0x12596d5c] */
  x86_unimpl("lock dec @ 0x12578ad7");
  /* 12578ade push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12578ae0 call 0x1256dda0 */
  push32(0x12578ae5u); f_1256dda0();
  /* 12578ae5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12578aec:;
  /* 12578aec mov eax, 0xff */
  EAX = (0xffu);
  /* 12578af1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12578af3 nop  */
  /* nop */
L_12578af4:;
  /* 12578af4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12578af6 je 0x12578b1f */
  if (C.zf) goto L_12578b1f;
  /* 12578af8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12578afa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12578afb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12578afd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12578afe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b00 je 0x12578af4 */
  if (C.zf) goto L_12578af4;
  /* 12578b02 push eax */
  push32((uint32_t)(EAX));
  /* 12578b03 push ebx */
  push32((uint32_t)(EBX));
  /* 12578b04 call 0x12579be0 */
  push32(0x12578b09u); f_12579be0();
  /* 12578b09 mov ebx, eax */
  EBX = (EAX);
  /* 12578b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578b0e call 0x12579be0 */
  push32(0x12578b13u); f_12579be0();
  /* 12578b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578b16 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b18 je 0x12578af4 */
  if (C.zf) goto L_12578af4;
  /* 12578b1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578b1c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12578b1f:;
  /* 12578b1f mov ebx, eax */
  EBX = (EAX);
  /* 12578b21 pop eax */
  EAX = (pop32());
  /* 12578b22 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578b24 jne 0x12578b2f */
  if (!C.zf) goto L_12578b2f;
  /* 12578b26 lock dec dword ptr [0x12596d5c] */
  x86_unimpl("lock dec @ 0x12578b26");
  /* 12578b2d jmp 0x12578b39 */
  goto L_12578b39;
L_12578b2f:;
  /* 12578b2f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12578b31 call 0x1256de40 */
  push32(0x12578b36u); f_1256de40();
  /* 12578b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12578b39:;
  /* 12578b39 mov eax, ebx */
  EAX = (EBX);
L_12578b3b:;
  /* 12578b3b pop ebx */
  EBX = (pop32());
  /* 12578b3c pop esi */
  ESI = (pop32());
  /* 12578b3d pop edi */
  EDI = (pop32());
  /* 12578b3e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12578b3f ret  */
  ESPCHK(0x12578a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b40 @ 0x12578b40 (257 bytes, 103 insns) */
void f_12578b40(void) {
  FTRACE(0x12578b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12578b41 mov ebp, esp */
  EBP = (ESP);
  /* 12578b43 push edi */
  push32((uint32_t)(EDI));
  /* 12578b44 push esi */
  push32((uint32_t)(ESI));
  /* 12578b45 push ebx */
  push32((uint32_t)(EBX));
  /* 12578b46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12578b49 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578b4b je 0x12578c3a */
  if (C.zf) goto L_12578c3a;
  /* 12578b51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12578b54 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12578b57 lea eax, [0x12596bc8] */
  EAX = ((uint32_t)(0x12596bc8));
  /* 12578b5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578b61 jne 0x12578bb1 */
  if (!C.zf) goto L_12578bb1;
  /* 12578b63 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12578b65 mov bl, 0x5a */
  BL = (0x5au);
  /* 12578b67 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12578b69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12578b6c:;
  /* 12578b6c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12578b6e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12578b70 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12578b72 je 0x12578b95 */
  if (C.zf) goto L_12578b95;
  /* 12578b74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12578b76 je 0x12578b95 */
  if (C.zf) goto L_12578b95;
  /* 12578b78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12578b79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12578b7a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b7c jb 0x12578b84 */
  if (C.cf) goto L_12578b84;
  /* 12578b7e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b80 ja 0x12578b84 */
  if ((!C.cf&&!C.zf)) goto L_12578b84;
  /* 12578b82 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12578b84:;
  /* 12578b84 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b86 jb 0x12578b8e */
  if (C.cf) goto L_12578b8e;
  /* 12578b88 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b8a ja 0x12578b8e */
  if ((!C.cf&&!C.zf)) goto L_12578b8e;
  /* 12578b8c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12578b8e:;
  /* 12578b8e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b90 jne 0x12578b9f */
  if (!C.zf) goto L_12578b9f;
  /* 12578b92 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12578b93 jne 0x12578b6c */
  if (!C.zf) goto L_12578b6c;
L_12578b95:;
  /* 12578b95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578b97 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12578b99 je 0x12578c3a */
  if (C.zf) goto L_12578c3a;
L_12578b9f:;
  /* 12578b9f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12578ba4 jb 0x12578c3a */
  if (C.cf) goto L_12578c3a;
  /* 12578baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12578bac jmp 0x12578c3a */
  goto L_12578c3a;
L_12578bb1:;
  /* 12578bb1 lock inc dword ptr [0x12596d5c] */
  x86_unimpl("lock inc @ 0x12578bb1");
  /* 12578bb8 cmp dword ptr [0x12596d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578bbf jg 0x12578bc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12578bc5;
  /* 12578bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578bc3 jmp 0x12578bde */
  goto L_12578bde;
L_12578bc5:;
  /* 12578bc5 lock dec dword ptr [0x12596d5c] */
  x86_unimpl("lock dec @ 0x12578bc5");
  /* 12578bcc mov ebx, ecx */
  EBX = (ECX);
  /* 12578bce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12578bd0 call 0x1256dda0 */
  push32(0x12578bd5u); f_1256dda0();
  /* 12578bd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12578bdc mov ecx, ebx */
  ECX = (EBX);
L_12578bde:;
  /* 12578bde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578be0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12578be2 mov edi, edi */
  EDI = (EDI);
L_12578be4:;
  /* 12578be4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12578be6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578be8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12578bea je 0x12578c0f */
  if (C.zf) goto L_12578c0f;
  /* 12578bec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12578bee je 0x12578c0f */
  if (C.zf) goto L_12578c0f;
  /* 12578bf0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12578bf1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12578bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12578bf3 push eax */
  push32((uint32_t)(EAX));
  /* 12578bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 12578bf5 call 0x12579be0 */
  push32(0x12578bfau); f_12579be0();
  /* 12578bfa mov ebx, eax */
  EBX = (EAX);
  /* 12578bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578bff call 0x12579be0 */
  push32(0x12578c04u); f_12579be0();
  /* 12578c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578c07 pop ecx */
  ECX = (pop32());
  /* 12578c08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578c0a jne 0x12578c15 */
  if (!C.zf) goto L_12578c15;
  /* 12578c0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12578c0d jne 0x12578be4 */
  if (!C.zf) goto L_12578be4;
L_12578c0f:;
  /* 12578c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578c11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578c13 je 0x12578c1e */
  if (C.zf) goto L_12578c1e;
L_12578c15:;
  /* 12578c15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12578c1a jb 0x12578c1e */
  if (C.cf) goto L_12578c1e;
  /* 12578c1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12578c1e:;
  /* 12578c1e pop eax */
  EAX = (pop32());
  /* 12578c1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578c21 jne 0x12578c2c */
  if (!C.zf) goto L_12578c2c;
  /* 12578c23 lock dec dword ptr [0x12596d5c] */
  x86_unimpl("lock dec @ 0x12578c23");
  /* 12578c2a jmp 0x12578c3a */
  goto L_12578c3a;
L_12578c2c:;
  /* 12578c2c mov ebx, ecx */
  EBX = (ECX);
  /* 12578c2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12578c30 call 0x1256de40 */
  push32(0x12578c35u); f_1256de40();
  /* 12578c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578c38 mov ecx, ebx */
  ECX = (EBX);
L_12578c3a:;
  /* 12578c3a mov eax, ecx */
  EAX = (ECX);
  /* 12578c3c pop ebx */
  EBX = (pop32());
  /* 12578c3d pop esi */
  ESI = (pop32());
  /* 12578c3e pop edi */
  EDI = (pop32());
  /* 12578c3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12578c40 ret  */
  ESPCHK(0x12578b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c50 @ 0x12578c50 (255 bytes, 88 insns) */
void f_12578c50(void) {
  FTRACE(0x12578c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12578c51 mov ebp, esp */
  EBP = (ESP);
  /* 12578c53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12578c56:;
  /* 12578c56 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578c5d jle 0x12578c76 */
  if ((C.zf||C.sf!=C.of)) goto L_12578c76;
  /* 12578c5f push 8 */
  push32((uint32_t)(0x8u));
  /* 12578c61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578c64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578c66 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12578c68 push ecx */
  push32((uint32_t)(ECX));
  /* 12578c69 call 0x125703b0 */
  push32(0x12578c6eu); f_125703b0();
  /* 12578c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578c71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12578c74 jmp 0x12578c8f */
  goto L_12578c8f;
L_12578c76:;
  /* 12578c76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578c7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578c7d mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 12578c83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578c85 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12578c89 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12578c8c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12578c8f:;
  /* 12578c8f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578c93 je 0x12578ca0 */
  if (C.zf) goto L_12578ca0;
  /* 12578c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578c98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578c9b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12578c9e jmp 0x12578c56 */
  goto L_12578c56;
L_12578ca0:;
  /* 12578ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578ca3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578ca5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12578ca7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12578caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578cad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578cb0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12578cb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578cb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12578cb9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578cbd je 0x12578cc5 */
  if (C.zf) goto L_12578cc5;
  /* 12578cbf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578cc3 jne 0x12578cd8 */
  if (!C.zf) goto L_12578cd8;
L_12578cc5:;
  /* 12578cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578cca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578ccc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12578ccf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578cd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578cd5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12578cd8:;
  /* 12578cd8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12578cdf:;
  /* 12578cdf cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578ce6 jle 0x12578cfb */
  if ((C.zf||C.sf!=C.of)) goto L_12578cfb;
  /* 12578ce8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12578cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578ced push edx */
  push32((uint32_t)(EDX));
  /* 12578cee call 0x125703b0 */
  push32(0x12578cf3u); f_125703b0();
  /* 12578cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578cf6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12578cf9 jmp 0x12578d10 */
  goto L_12578d10;
L_12578cfb:;
  /* 12578cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578cfe mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 12578d04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578d06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12578d0a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12578d0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12578d10:;
  /* 12578d10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578d14 je 0x12578d3b */
  if (C.zf) goto L_12578d3b;
  /* 12578d16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578d19 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12578d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578d1f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12578d23 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12578d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578d29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578d2b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12578d2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12578d30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578d33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578d36 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12578d39 jmp 0x12578cdf */
  goto L_12578cdf;
L_12578d3b:;
  /* 12578d3b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578d3f jne 0x12578d48 */
  if (!C.zf) goto L_12578d48;
  /* 12578d41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578d44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12578d46 jmp 0x12578d4b */
  goto L_12578d4b;
L_12578d48:;
  /* 12578d48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12578d4b:;
  /* 12578d4b mov esp, ebp */
  ESP = (EBP);
  /* 12578d4d pop ebp */
  EBP = (pop32());
  /* 12578d4e ret  */
  ESPCHK(0x12578c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018d50 @ 0x12578d50 (17 bytes, 8 insns) */
void f_12578d50(void) {
  FTRACE(0x12578d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12578d51 mov ebp, esp */
  EBP = (ESP);
  /* 12578d53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578d56 push eax */
  push32((uint32_t)(EAX));
  /* 12578d57 call 0x12578c50 */
  push32(0x12578d5cu); f_12578c50();
  /* 12578d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578d5f pop ebp */
  EBP = (pop32());
  /* 12578d60 ret  */
  ESPCHK(0x12578d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018d70 @ 0x12578d70 (297 bytes, 106 insns) */
void f_12578d70(void) {
  FTRACE(0x12578d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12578d71 mov ebp, esp */
  EBP = (ESP);
  /* 12578d73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578d76 push esi */
  push32((uint32_t)(ESI));
L_12578d77:;
  /* 12578d77 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578d7e jle 0x12578d97 */
  if ((C.zf||C.sf!=C.of)) goto L_12578d97;
  /* 12578d80 push 8 */
  push32((uint32_t)(0x8u));
  /* 12578d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578d85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12578d87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12578d89 push ecx */
  push32((uint32_t)(ECX));
  /* 12578d8a call 0x125703b0 */
  push32(0x12578d8fu); f_125703b0();
  /* 12578d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578d92 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12578d95 jmp 0x12578db0 */
  goto L_12578db0;
L_12578d97:;
  /* 12578d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578d9c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578d9e mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 12578da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578da6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12578daa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12578dad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12578db0:;
  /* 12578db0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578db4 je 0x12578dc1 */
  if (C.zf) goto L_12578dc1;
  /* 12578db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578dbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12578dbf jmp 0x12578d77 */
  goto L_12578d77;
L_12578dc1:;
  /* 12578dc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578dc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578dc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12578dc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12578dcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578dce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578dd1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12578dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578dd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12578dda cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578dde je 0x12578de6 */
  if (C.zf) goto L_12578de6;
  /* 12578de0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578de4 jne 0x12578df9 */
  if (!C.zf) goto L_12578df9;
L_12578de6:;
  /* 12578de6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578deb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578ded mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12578df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578df3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578df6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12578df9:;
  /* 12578df9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12578e00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12578e07:;
  /* 12578e07 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578e0e jle 0x12578e23 */
  if ((C.zf||C.sf!=C.of)) goto L_12578e23;
  /* 12578e10 push 4 */
  push32((uint32_t)(0x4u));
  /* 12578e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578e15 push edx */
  push32((uint32_t)(EDX));
  /* 12578e16 call 0x125703b0 */
  push32(0x12578e1bu); f_125703b0();
  /* 12578e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578e1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12578e21 jmp 0x12578e38 */
  goto L_12578e38;
L_12578e23:;
  /* 12578e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578e26 mov ecx, dword ptr [0x12594c98] */
  ECX = (r32((uint32_t)(0x12594c98)));
  /* 12578e2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578e2e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12578e32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12578e35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12578e38:;
  /* 12578e38 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578e3c je 0x12578e79 */
  if (C.zf) goto L_12578e79;
  /* 12578e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12578e40 push 0xa */
  push32((uint32_t)(0xau));
  /* 12578e42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578e45 push eax */
  push32((uint32_t)(EAX));
  /* 12578e46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578e49 push ecx */
  push32((uint32_t)(ECX));
  /* 12578e4a call 0x12579d10 */
  push32(0x12578e4fu); f_12579d10();
  /* 12578e4f mov ecx, eax */
  ECX = (EAX);
  /* 12578e51 mov esi, edx */
  ESI = (EDX);
  /* 12578e53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12578e56 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578e59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12578e5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578e5c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12578e5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12578e61 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12578e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12578e69 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12578e6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12578e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12578e71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578e74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12578e77 jmp 0x12578e07 */
  goto L_12578e07;
L_12578e79:;
  /* 12578e79 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578e7d jne 0x12578e8e */
  if (!C.zf) goto L_12578e8e;
  /* 12578e7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578e82 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12578e84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12578e87 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578e8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12578e8c jmp 0x12578e94 */
  goto L_12578e94;
L_12578e8e:;
  /* 12578e8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12578e91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12578e94:;
  /* 12578e94 pop esi */
  ESI = (pop32());
  /* 12578e95 mov esp, ebp */
  ESP = (EBP);
  /* 12578e97 pop ebp */
  EBP = (pop32());
  /* 12578e98 ret  */
  ESPCHK(0x12578d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ea0 @ 0x12578ea0 (61 bytes, 18 insns) */
void f_12578ea0(void) {
  FTRACE(0x12578ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12578ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12578ea3 cmp dword ptr [0x12596d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578eaa jne 0x12578edb */
  if (!C.zf) goto L_12578edb;
  /* 12578eac push 0xb */
  push32((uint32_t)(0xbu));
  /* 12578eae call 0x1256dda0 */
  push32(0x12578eb3u); f_1256dda0();
  /* 12578eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578eb6 cmp dword ptr [0x12596d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578ebd jne 0x12578ed1 */
  if (!C.zf) goto L_12578ed1;
  /* 12578ebf call 0x12578f00 */
  push32(0x12578ec4u); f_12578f00();
  /* 12578ec4 mov eax, dword ptr [0x12596d28] */
  EAX = (r32((uint32_t)(0x12596d28)));
  /* 12578ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578ecc mov dword ptr [0x12596d28], eax */
  w32((uint32_t)(0x12596d28), (EAX));
L_12578ed1:;
  /* 12578ed1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12578ed3 call 0x1256de40 */
  push32(0x12578ed8u); f_1256de40();
  /* 12578ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12578edb:;
  /* 12578edb pop ebp */
  EBP = (pop32());
  /* 12578edc ret  */
  ESPCHK(0x12578ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ee0 @ 0x12578ee0 (30 bytes, 11 insns) */
void f_12578ee0(void) {
  FTRACE(0x12578ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12578ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12578ee3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12578ee5 call 0x1256dda0 */
  push32(0x12578eeau); f_1256dda0();
  /* 12578eea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578eed call 0x12578f00 */
  push32(0x12578ef2u); f_12578f00();
  /* 12578ef2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12578ef4 call 0x1256de40 */
  push32(0x12578ef9u); f_1256de40();
  /* 12578ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578efc pop ebp */
  EBP = (pop32());
  /* 12578efd ret  */
  ESPCHK(0x12578ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f00 @ 0x12578f00 (939 bytes, 266 insns) */
void f_12578f00(void) {
  FTRACE(0x12578f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12578f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12578f01 mov ebp, esp */
  EBP = (ESP);
  /* 12578f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578f06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12578f0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12578f0f call 0x1256dda0 */
  push32(0x12578f14u); f_1256dda0();
  /* 12578f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578f17 mov dword ptr [0x12596c70], 0 */
  w32((uint32_t)(0x12596c70), (0x0u));
  /* 12578f21 mov dword ptr [0x12595e38], 0xffffffff */
  w32((uint32_t)(0x12595e38), (0xffffffffu));
  /* 12578f2b mov eax, dword ptr [0x12595e38] */
  EAX = (r32((uint32_t)(0x12595e38)));
  /* 12578f30 mov dword ptr [0x12595e28], eax */
  w32((uint32_t)(0x12595e28), (EAX));
  /* 12578f35 push 0x12592f40 */
  push32((uint32_t)(0x12592f40u));
  /* 12578f3a call 0x12579d80 */
  push32(0x12578f3fu); f_12579d80();
  /* 12578f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578f42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12578f45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578f49 jne 0x12579083 */
  if (!C.zf) goto L_12579083;
  /* 12578f4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12578f51 call 0x1256de40 */
  push32(0x12578f56u); f_1256de40();
  /* 12578f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12578f59 push 0x12596c78 */
  push32((uint32_t)(0x12596c78u));
  /* 12578f5e call dword ptr [0x125992e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e8))), 0x12578f64u);
  /* 12578f64 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578f67 je 0x1257907e */
  if (C.zf) goto L_1257907e;
  /* 12578f6d mov dword ptr [0x12596c70], 1 */
  w32((uint32_t)(0x12596c70), (0x1u));
  /* 12578f77 mov ecx, dword ptr [0x12596c78] */
  ECX = (r32((uint32_t)(0x12596c78)));
  /* 12578f7d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12578f80 mov dword ptr [0x12595d90], ecx */
  w32((uint32_t)(0x12595d90), (ECX));
  /* 12578f86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578f88 mov dx, word ptr [0x12596cbe] */
  DX = (r16((uint32_t)(0x12596cbe)));
  /* 12578f8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12578f91 je 0x12578fa9 */
  if (C.zf) goto L_12578fa9;
  /* 12578f93 mov eax, dword ptr [0x12596ccc] */
  EAX = (r32((uint32_t)(0x12596ccc)));
  /* 12578f98 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12578f9b mov ecx, dword ptr [0x12595d90] */
  ECX = (r32((uint32_t)(0x12595d90)));
  /* 12578fa1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12578fa3 mov dword ptr [0x12595d90], ecx */
  w32((uint32_t)(0x12595d90), (ECX));
L_12578fa9:;
  /* 12578fa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12578fab mov dx, word ptr [0x12596d12] */
  DX = (r16((uint32_t)(0x12596d12)));
  /* 12578fb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12578fb4 je 0x12578fde */
  if (C.zf) goto L_12578fde;
  /* 12578fb6 cmp dword ptr [0x12596d20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12578fbd je 0x12578fde */
  if (C.zf) goto L_12578fde;
  /* 12578fbf mov dword ptr [0x12595d94], 1 */
  w32((uint32_t)(0x12595d94), (0x1u));
  /* 12578fc9 mov eax, dword ptr [0x12596d20] */
  EAX = (r32((uint32_t)(0x12596d20)));
  /* 12578fce sub eax, dword ptr [0x12596ccc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12596ccc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12578fd4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12578fd7 mov dword ptr [0x12595d98], eax */
  w32((uint32_t)(0x12595d98), (EAX));
  /* 12578fdc jmp 0x12578ff2 */
  goto L_12578ff2;
L_12578fde:;
  /* 12578fde mov dword ptr [0x12595d94], 0 */
  w32((uint32_t)(0x12595d94), (0x0u));
  /* 12578fe8 mov dword ptr [0x12595d98], 0 */
  w32((uint32_t)(0x12595d98), (0x0u));
L_12578ff2:;
  /* 12578ff2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12578ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 12578ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12578ff8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12578ffa mov edx, dword ptr [0x12595e1c] */
  EDX = (r32((uint32_t)(0x12595e1c)));
  /* 12579000 push edx */
  push32((uint32_t)(EDX));
  /* 12579001 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579003 push 0x12596c7c */
  push32((uint32_t)(0x12596c7cu));
  /* 12579008 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1257900d mov eax, dword ptr [0x12596be0] */
  EAX = (r32((uint32_t)(0x12596be0)));
  /* 12579012 push eax */
  push32((uint32_t)(EAX));
  /* 12579013 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579019u);
  /* 12579019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257901b je 0x1257902f */
  if (C.zf) goto L_1257902f;
  /* 1257901d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579021 jne 0x1257902f */
  if (!C.zf) goto L_1257902f;
  /* 12579023 mov ecx, dword ptr [0x12595e1c] */
  ECX = (r32((uint32_t)(0x12595e1c)));
  /* 12579029 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1257902d jmp 0x12579038 */
  goto L_12579038;
L_1257902f:;
  /* 1257902f mov edx, dword ptr [0x12595e1c] */
  EDX = (r32((uint32_t)(0x12595e1c)));
  /* 12579035 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12579038:;
  /* 12579038 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1257903b push eax */
  push32((uint32_t)(EAX));
  /* 1257903c push 0 */
  push32((uint32_t)(0x0u));
  /* 1257903e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12579040 mov ecx, dword ptr [0x12595e20] */
  ECX = (r32((uint32_t)(0x12595e20)));
  /* 12579046 push ecx */
  push32((uint32_t)(ECX));
  /* 12579047 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579049 push 0x12596cd0 */
  push32((uint32_t)(0x12596cd0u));
  /* 1257904e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12579053 mov edx, dword ptr [0x12596be0] */
  EDX = (r32((uint32_t)(0x12596be0)));
  /* 12579059 push edx */
  push32((uint32_t)(EDX));
  /* 1257905a call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579060u);
  /* 12579060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579062 je 0x12579075 */
  if (C.zf) goto L_12579075;
  /* 12579064 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579068 jne 0x12579075 */
  if (!C.zf) goto L_12579075;
  /* 1257906a mov eax, dword ptr [0x12595e20] */
  EAX = (r32((uint32_t)(0x12595e20)));
  /* 1257906f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12579073 jmp 0x1257907e */
  goto L_1257907e;
L_12579075:;
  /* 12579075 mov ecx, dword ptr [0x12595e20] */
  ECX = (r32((uint32_t)(0x12595e20)));
  /* 1257907b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1257907e:;
  /* 1257907e jmp 0x125792a7 */
  goto L_125792a7;
L_12579083:;
  /* 12579083 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579086 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12579089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257908b je 0x125790ad */
  if (C.zf) goto L_125790ad;
  /* 1257908d cmp dword ptr [0x12596d24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579094 je 0x125790bc */
  if (C.zf) goto L_125790bc;
  /* 12579096 mov ecx, dword ptr [0x12596d24] */
  ECX = (r32((uint32_t)(0x12596d24)));
  /* 1257909c push ecx */
  push32((uint32_t)(ECX));
  /* 1257909d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125790a0 push edx */
  push32((uint32_t)(EDX));
  /* 125790a1 call 0x12576030 */
  push32(0x125790a6u); f_12576030();
  /* 125790a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125790a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125790ab jne 0x125790bc */
  if (!C.zf) goto L_125790bc;
L_125790ad:;
  /* 125790ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 125790af call 0x1256de40 */
  push32(0x125790b4u); f_1256de40();
  /* 125790b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125790b7 jmp 0x125792a7 */
  goto L_125792a7;
L_125790bc:;
  /* 125790bc push 2 */
  push32((uint32_t)(0x2u));
  /* 125790be mov eax, dword ptr [0x12596d24] */
  EAX = (r32((uint32_t)(0x12596d24)));
  /* 125790c3 push eax */
  push32((uint32_t)(EAX));
  /* 125790c4 call 0x1256ae30 */
  push32(0x125790c9u); f_1256ae30();
  /* 125790c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125790cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 125790d1 push 0x12592f38 */
  push32((uint32_t)(0x12592f38u));
  /* 125790d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125790d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125790db push ecx */
  push32((uint32_t)(ECX));
  /* 125790dc call 0x1256d1d0 */
  push32(0x125790e1u); f_1256d1d0();
  /* 125790e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125790e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125790e7 push eax */
  push32((uint32_t)(EAX));
  /* 125790e8 call 0x1256a3a0 */
  push32(0x125790edu); f_1256a3a0();
  /* 125790ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125790f0 mov dword ptr [0x12596d24], eax */
  w32((uint32_t)(0x12596d24), (EAX));
  /* 125790f5 cmp dword ptr [0x12596d24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125790fc jne 0x1257910d */
  if (!C.zf) goto L_1257910d;
  /* 125790fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 12579100 call 0x1256de40 */
  push32(0x12579105u); f_1256de40();
  /* 12579105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579108 jmp 0x125792a7 */
  goto L_125792a7;
L_1257910d:;
  /* 1257910d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579110 push edx */
  push32((uint32_t)(EDX));
  /* 12579111 mov eax, dword ptr [0x12596d24] */
  EAX = (r32((uint32_t)(0x12596d24)));
  /* 12579116 push eax */
  push32((uint32_t)(EAX));
  /* 12579117 call 0x1256d350 */
  push32(0x1257911cu); f_1256d350();
  /* 1257911c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257911f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12579121 call 0x1256de40 */
  push32(0x12579126u); f_1256de40();
  /* 12579126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579129 push 3 */
  push32((uint32_t)(0x3u));
  /* 1257912b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257912e push ecx */
  push32((uint32_t)(ECX));
  /* 1257912f mov edx, dword ptr [0x12595e1c] */
  EDX = (r32((uint32_t)(0x12595e1c)));
  /* 12579135 push edx */
  push32((uint32_t)(EDX));
  /* 12579136 call 0x1256dbc0 */
  push32(0x1257913bu); f_1256dbc0();
  /* 1257913b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257913e mov eax, dword ptr [0x12595e1c] */
  EAX = (r32((uint32_t)(0x12595e1c)));
  /* 12579143 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12579147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257914a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257914d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12579150 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579153 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12579156 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579159 jne 0x1257916d */
  if (!C.zf) goto L_1257916d;
  /* 1257915b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257915e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579161 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12579164 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257916a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1257916d:;
  /* 1257916d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579170 push eax */
  push32((uint32_t)(EAX));
  /* 12579171 call 0x12578c50 */
  push32(0x12579176u); f_12578c50();
  /* 12579176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579179 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257917f mov dword ptr [0x12595d90], eax */
  w32((uint32_t)(0x12595d90), (EAX));
L_12579184:;
  /* 12579184 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579187 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257918a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257918d je 0x125791a5 */
  if (C.zf) goto L_125791a5;
  /* 1257918f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579192 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12579195 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579198 jl 0x125791b0 */
  if ((C.sf!=C.of)) goto L_125791b0;
  /* 1257919a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257919d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125791a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125791a3 jg 0x125791b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125791b0;
L_125791a5:;
  /* 125791a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125791ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125791ae jmp 0x12579184 */
  goto L_12579184;
L_125791b0:;
  /* 125791b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125791b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125791b9 jne 0x12579255 */
  if (!C.zf) goto L_12579255;
  /* 125791bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125791c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125791c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791cb push edx */
  push32((uint32_t)(EDX));
  /* 125791cc call 0x12578c50 */
  push32(0x125791d1u); f_12578c50();
  /* 125791d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125791d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125791d7 mov ecx, dword ptr [0x12595d90] */
  ECX = (r32((uint32_t)(0x12595d90)));
  /* 125791dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125791df mov dword ptr [0x12595d90], ecx */
  w32((uint32_t)(0x12595d90), (ECX));
L_125791e5:;
  /* 125791e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125791eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125791ee jl 0x12579206 */
  if ((C.sf!=C.of)) goto L_12579206;
  /* 125791f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125791f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125791f9 jg 0x12579206 */
  if ((!C.zf&&C.sf==C.of)) goto L_12579206;
  /* 125791fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125791fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579201 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12579204 jmp 0x125791e5 */
  goto L_125791e5;
L_12579206:;
  /* 12579206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579209 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257920c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257920f jne 0x12579255 */
  if (!C.zf) goto L_12579255;
  /* 12579211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257921a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257921d push ecx */
  push32((uint32_t)(ECX));
  /* 1257921e call 0x12578c50 */
  push32(0x12579223u); f_12578c50();
  /* 12579223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579226 mov edx, dword ptr [0x12595d90] */
  EDX = (r32((uint32_t)(0x12595d90)));
  /* 1257922c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257922e mov dword ptr [0x12595d90], edx */
  w32((uint32_t)(0x12595d90), (EDX));
L_12579234:;
  /* 12579234 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579237 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257923a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257923d jl 0x12579255 */
  if ((C.sf!=C.of)) goto L_12579255;
  /* 1257923f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579242 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12579245 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579248 jg 0x12579255 */
  if ((!C.zf&&C.sf==C.of)) goto L_12579255;
  /* 1257924a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257924d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12579253 jmp 0x12579234 */
  goto L_12579234;
L_12579255:;
  /* 12579255 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579259 je 0x12579269 */
  if (C.zf) goto L_12579269;
  /* 1257925b mov edx, dword ptr [0x12595d90] */
  EDX = (r32((uint32_t)(0x12595d90)));
  /* 12579261 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12579263 mov dword ptr [0x12595d90], edx */
  w32((uint32_t)(0x12595d90), (EDX));
L_12579269:;
  /* 12579269 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257926c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257926f mov dword ptr [0x12595d94], ecx */
  w32((uint32_t)(0x12595d94), (ECX));
  /* 12579275 cmp dword ptr [0x12595d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12595d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257927c je 0x1257929e */
  if (C.zf) goto L_1257929e;
  /* 1257927e push 3 */
  push32((uint32_t)(0x3u));
  /* 12579280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579283 push edx */
  push32((uint32_t)(EDX));
  /* 12579284 mov eax, dword ptr [0x12595e20] */
  EAX = (r32((uint32_t)(0x12595e20)));
  /* 12579289 push eax */
  push32((uint32_t)(EAX));
  /* 1257928a call 0x1256dbc0 */
  push32(0x1257928fu); f_1256dbc0();
  /* 1257928f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579292 mov ecx, dword ptr [0x12595e20] */
  ECX = (r32((uint32_t)(0x12595e20)));
  /* 12579298 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1257929c jmp 0x125792a7 */
  goto L_125792a7;
L_1257929e:;
  /* 1257929e mov edx, dword ptr [0x12595e20] */
  EDX = (r32((uint32_t)(0x12595e20)));
  /* 125792a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125792a7:;
  /* 125792a7 mov esp, ebp */
  ESP = (EBP);
  /* 125792a9 pop ebp */
  EBP = (pop32());
  /* 125792aa ret  */
  ESPCHK(0x12578f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100192b0 @ 0x125792b0 (46 bytes, 18 insns) */
void f_125792b0(void) {
  FTRACE(0x125792b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125792b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125792b1 mov ebp, esp */
  EBP = (ESP);
  /* 125792b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125792b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125792b6 call 0x1256dda0 */
  push32(0x125792bbu); f_1256dda0();
  /* 125792bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125792be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125792c1 push eax */
  push32((uint32_t)(EAX));
  /* 125792c2 call 0x125792e0 */
  push32(0x125792c7u); f_125792e0();
  /* 125792c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125792ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125792cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 125792cf call 0x1256de40 */
  push32(0x125792d4u); f_1256de40();
  /* 125792d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125792d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125792da mov esp, ebp */
  ESP = (EBP);
  /* 125792dc pop ebp */
  EBP = (pop32());
  /* 125792dd ret  */
  ESPCHK(0x125792b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100192e0 @ 0x125792e0 (762 bytes, 246 insns) */
void f_125792e0(void) {
  FTRACE(0x125792e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125792e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125792e1 mov ebp, esp */
  EBP = (ESP);
  /* 125792e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125792e4 cmp dword ptr [0x12595d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12595d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125792eb jne 0x125792f4 */
  if (!C.zf) goto L_125792f4;
  /* 125792ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125792ef jmp 0x125795d6 */
  goto L_125795d6;
L_125792f4:;
  /* 125792f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125792f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125792fa cmp ecx, dword ptr [0x12595e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12595e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579300 jne 0x12579314 */
  if (!C.zf) goto L_12579314;
  /* 12579302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579305 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12579308 cmp eax, dword ptr [0x12595e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12595e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257930e je 0x125794db */
  if (C.zf) goto L_125794db;
L_12579314:;
  /* 12579314 cmp dword ptr [0x12596c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257931b je 0x12579495 */
  if (C.zf) goto L_12579495;
  /* 12579321 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579323 mov cx, word ptr [0x12596d10] */
  CX = (r16((uint32_t)(0x12596d10)));
  /* 1257932a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257932c jne 0x12579389 */
  if (!C.zf) goto L_12579389;
  /* 1257932e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12579330 mov dx, word ptr [0x12596d1e] */
  DX = (r16((uint32_t)(0x12596d1e)));
  /* 12579337 push edx */
  push32((uint32_t)(EDX));
  /* 12579338 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257933a mov ax, word ptr [0x12596d1c] */
  AX = (r16((uint32_t)(0x12596d1c)));
  /* 12579340 push eax */
  push32((uint32_t)(EAX));
  /* 12579341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579343 mov cx, word ptr [0x12596d1a] */
  CX = (r16((uint32_t)(0x12596d1a)));
  /* 1257934a push ecx */
  push32((uint32_t)(ECX));
  /* 1257934b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257934d mov dx, word ptr [0x12596d18] */
  DX = (r16((uint32_t)(0x12596d18)));
  /* 12579354 push edx */
  push32((uint32_t)(EDX));
  /* 12579355 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579359 mov ax, word ptr [0x12596d14] */
  AX = (r16((uint32_t)(0x12596d14)));
  /* 1257935f push eax */
  push32((uint32_t)(EAX));
  /* 12579360 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579362 mov cx, word ptr [0x12596d16] */
  CX = (r16((uint32_t)(0x12596d16)));
  /* 12579369 push ecx */
  push32((uint32_t)(ECX));
  /* 1257936a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257936c mov dx, word ptr [0x12596d12] */
  DX = (r16((uint32_t)(0x12596d12)));
  /* 12579373 push edx */
  push32((uint32_t)(EDX));
  /* 12579374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579377 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1257937a push ecx */
  push32((uint32_t)(ECX));
  /* 1257937b push 1 */
  push32((uint32_t)(0x1u));
  /* 1257937d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257937f call 0x125795e0 */
  push32(0x12579384u); f_125795e0();
  /* 12579384 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579387 jmp 0x125793da */
  goto L_125793da;
L_12579389:;
  /* 12579389 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257938b mov dx, word ptr [0x12596d1e] */
  DX = (r16((uint32_t)(0x12596d1e)));
  /* 12579392 push edx */
  push32((uint32_t)(EDX));
  /* 12579393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579395 mov ax, word ptr [0x12596d1c] */
  AX = (r16((uint32_t)(0x12596d1c)));
  /* 1257939b push eax */
  push32((uint32_t)(EAX));
  /* 1257939c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257939e mov cx, word ptr [0x12596d1a] */
  CX = (r16((uint32_t)(0x12596d1a)));
  /* 125793a5 push ecx */
  push32((uint32_t)(ECX));
  /* 125793a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125793a8 mov dx, word ptr [0x12596d18] */
  DX = (r16((uint32_t)(0x12596d18)));
  /* 125793af push edx */
  push32((uint32_t)(EDX));
  /* 125793b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125793b2 mov ax, word ptr [0x12596d16] */
  AX = (r16((uint32_t)(0x12596d16)));
  /* 125793b8 push eax */
  push32((uint32_t)(EAX));
  /* 125793b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125793bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125793bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125793bf mov cx, word ptr [0x12596d12] */
  CX = (r16((uint32_t)(0x12596d12)));
  /* 125793c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125793c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125793ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125793cd push eax */
  push32((uint32_t)(EAX));
  /* 125793ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125793d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125793d2 call 0x125795e0 */
  push32(0x125793d7u); f_125795e0();
  /* 125793d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125793da:;
  /* 125793da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125793dc mov cx, word ptr [0x12596cbc] */
  CX = (r16((uint32_t)(0x12596cbc)));
  /* 125793e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125793e5 jne 0x12579442 */
  if (!C.zf) goto L_12579442;
  /* 125793e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125793e9 mov dx, word ptr [0x12596cca] */
  DX = (r16((uint32_t)(0x12596cca)));
  /* 125793f0 push edx */
  push32((uint32_t)(EDX));
  /* 125793f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125793f3 mov ax, word ptr [0x12596cc8] */
  AX = (r16((uint32_t)(0x12596cc8)));
  /* 125793f9 push eax */
  push32((uint32_t)(EAX));
  /* 125793fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125793fc mov cx, word ptr [0x12596cc6] */
  CX = (r16((uint32_t)(0x12596cc6)));
  /* 12579403 push ecx */
  push32((uint32_t)(ECX));
  /* 12579404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12579406 mov dx, word ptr [0x12596cc4] */
  DX = (r16((uint32_t)(0x12596cc4)));
  /* 1257940d push edx */
  push32((uint32_t)(EDX));
  /* 1257940e push 0 */
  push32((uint32_t)(0x0u));
  /* 12579410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579412 mov ax, word ptr [0x12596cc0] */
  AX = (r16((uint32_t)(0x12596cc0)));
  /* 12579418 push eax */
  push32((uint32_t)(EAX));
  /* 12579419 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257941b mov cx, word ptr [0x12596cc2] */
  CX = (r16((uint32_t)(0x12596cc2)));
  /* 12579422 push ecx */
  push32((uint32_t)(ECX));
  /* 12579423 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12579425 mov dx, word ptr [0x12596cbe] */
  DX = (r16((uint32_t)(0x12596cbe)));
  /* 1257942c push edx */
  push32((uint32_t)(EDX));
  /* 1257942d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579430 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12579433 push ecx */
  push32((uint32_t)(ECX));
  /* 12579434 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579438 call 0x125795e0 */
  push32(0x1257943du); f_125795e0();
  /* 1257943d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579440 jmp 0x12579493 */
  goto L_12579493;
L_12579442:;
  /* 12579442 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12579444 mov dx, word ptr [0x12596cca] */
  DX = (r16((uint32_t)(0x12596cca)));
  /* 1257944b push edx */
  push32((uint32_t)(EDX));
  /* 1257944c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257944e mov ax, word ptr [0x12596cc8] */
  AX = (r16((uint32_t)(0x12596cc8)));
  /* 12579454 push eax */
  push32((uint32_t)(EAX));
  /* 12579455 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579457 mov cx, word ptr [0x12596cc6] */
  CX = (r16((uint32_t)(0x12596cc6)));
  /* 1257945e push ecx */
  push32((uint32_t)(ECX));
  /* 1257945f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12579461 mov dx, word ptr [0x12596cc4] */
  DX = (r16((uint32_t)(0x12596cc4)));
  /* 12579468 push edx */
  push32((uint32_t)(EDX));
  /* 12579469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257946b mov ax, word ptr [0x12596cc2] */
  AX = (r16((uint32_t)(0x12596cc2)));
  /* 12579471 push eax */
  push32((uint32_t)(EAX));
  /* 12579472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579474 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579478 mov cx, word ptr [0x12596cbe] */
  CX = (r16((uint32_t)(0x12596cbe)));
  /* 1257947f push ecx */
  push32((uint32_t)(ECX));
  /* 12579480 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579483 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12579486 push eax */
  push32((uint32_t)(EAX));
  /* 12579487 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257948b call 0x125795e0 */
  push32(0x12579490u); f_125795e0();
  /* 12579490 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12579493:;
  /* 12579493 jmp 0x125794db */
  goto L_125794db;
L_12579495:;
  /* 12579495 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579497 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579499 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257949b push 2 */
  push32((uint32_t)(0x2u));
  /* 1257949d push 0 */
  push32((uint32_t)(0x0u));
  /* 1257949f push 0 */
  push32((uint32_t)(0x0u));
  /* 125794a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125794a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 125794a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125794a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125794ab push edx */
  push32((uint32_t)(EDX));
  /* 125794ac push 1 */
  push32((uint32_t)(0x1u));
  /* 125794ae push 1 */
  push32((uint32_t)(0x1u));
  /* 125794b0 call 0x125795e0 */
  push32(0x125794b5u); f_125795e0();
  /* 125794b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125794b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125794ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125794bc push 0 */
  push32((uint32_t)(0x0u));
  /* 125794be push 2 */
  push32((uint32_t)(0x2u));
  /* 125794c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125794c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125794c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 125794c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 125794c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125794cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125794ce push ecx */
  push32((uint32_t)(ECX));
  /* 125794cf push 1 */
  push32((uint32_t)(0x1u));
  /* 125794d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125794d3 call 0x125795e0 */
  push32(0x125794d8u); f_125795e0();
  /* 125794d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125794db:;
  /* 125794db mov edx, dword ptr [0x12595e2c] */
  EDX = (r32((uint32_t)(0x12595e2c)));
  /* 125794e1 cmp edx, dword ptr [0x12595e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12595e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125794e7 jge 0x12579534 */
  if ((C.sf==C.of)) goto L_12579534;
  /* 125794e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125794ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125794ef cmp ecx, dword ptr [0x12595e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12595e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125794f5 jl 0x12579505 */
  if ((C.sf!=C.of)) goto L_12579505;
  /* 125794f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125794fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125794fd cmp eax, dword ptr [0x12595e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12595e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579503 jle 0x1257950c */
  if ((C.zf||C.sf!=C.of)) goto L_1257950c;
L_12579505:;
  /* 12579505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579507 jmp 0x125795d6 */
  goto L_125795d6;
L_1257950c:;
  /* 1257950c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257950f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12579512 cmp edx, dword ptr [0x12595e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12595e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579518 jle 0x12579532 */
  if ((C.zf||C.sf!=C.of)) goto L_12579532;
  /* 1257951a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257951d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12579520 cmp ecx, dword ptr [0x12595e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12595e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579526 jge 0x12579532 */
  if ((C.sf==C.of)) goto L_12579532;
  /* 12579528 mov eax, 1 */
  EAX = (0x1u);
  /* 1257952d jmp 0x125795d6 */
  goto L_125795d6;
L_12579532:;
  /* 12579532 jmp 0x12579577 */
  goto L_12579577;
L_12579534:;
  /* 12579534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579537 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1257953a cmp eax, dword ptr [0x12595e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12595e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579540 jl 0x12579550 */
  if ((C.sf!=C.of)) goto L_12579550;
  /* 12579542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579545 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12579548 cmp edx, dword ptr [0x12595e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12595e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257954e jle 0x12579557 */
  if ((C.zf||C.sf!=C.of)) goto L_12579557;
L_12579550:;
  /* 12579550 mov eax, 1 */
  EAX = (0x1u);
  /* 12579555 jmp 0x125795d6 */
  goto L_125795d6;
L_12579557:;
  /* 12579557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257955a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1257955d cmp ecx, dword ptr [0x12595e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12595e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579563 jle 0x12579577 */
  if ((C.zf||C.sf!=C.of)) goto L_12579577;
  /* 12579565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579568 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1257956b cmp eax, dword ptr [0x12595e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12595e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579571 jge 0x12579577 */
  if ((C.sf==C.of)) goto L_12579577;
  /* 12579573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579575 jmp 0x125795d6 */
  goto L_125795d6;
L_12579577:;
  /* 12579577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257957a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1257957d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579583 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12579585 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257958a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1257958d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579593 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579595 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257959b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1257959e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125795a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125795a4 cmp edx, dword ptr [0x12595e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12595e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125795aa jne 0x125795c2 */
  if (!C.zf) goto L_125795c2;
  /* 125795ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125795af cmp eax, dword ptr [0x12595e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12595e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125795b5 jl 0x125795be */
  if ((C.sf!=C.of)) goto L_125795be;
  /* 125795b7 mov eax, 1 */
  EAX = (0x1u);
  /* 125795bc jmp 0x125795d6 */
  goto L_125795d6;
L_125795be:;
  /* 125795be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125795c0 jmp 0x125795d6 */
  goto L_125795d6;
L_125795c2:;
  /* 125795c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125795c5 cmp ecx, dword ptr [0x12595e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12595e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125795cb jge 0x125795d4 */
  if ((C.sf==C.of)) goto L_125795d4;
  /* 125795cd mov eax, 1 */
  EAX = (0x1u);
  /* 125795d2 jmp 0x125795d6 */
  goto L_125795d6;
L_125795d4:;
  /* 125795d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125795d6:;
  /* 125795d6 mov esp, ebp */
  ESP = (EBP);
  /* 125795d8 pop ebp */
  EBP = (pop32());
  /* 125795d9 ret  */
  ESPCHK(0x125792e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100195e0 @ 0x125795e0 (504 bytes, 145 insns) */
void f_125795e0(void) {
  FTRACE(0x125795e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125795e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125795e1 mov ebp, esp */
  EBP = (ESP);
  /* 125795e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125795e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125795ea jne 0x125796bc */
  if (!C.zf) goto L_125796bc;
  /* 125795f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125795f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125795f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125795f8 jne 0x12579609 */
  if (!C.zf) goto L_12579609;
  /* 125795fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125795fd mov edx, dword ptr [ecx*4 + 0x12595e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12595e4c)));
  /* 12579604 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12579607 jmp 0x12579616 */
  goto L_12579616;
L_12579609:;
  /* 12579609 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257960c mov ecx, dword ptr [eax*4 + 0x12595e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12595e80)));
  /* 12579613 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12579616:;
  /* 12579616 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579619 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257961c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1257961f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579622 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579625 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257962b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257962e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579633 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579636 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12579639 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1257963d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1257963e mov ecx, 7 */
  ECX = (0x7u);
  /* 12579643 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12579645 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12579648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257964b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257964e jg 0x12579669 */
  if ((!C.zf&&C.sf==C.of)) goto L_12579669;
  /* 12579650 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12579653 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579656 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579659 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257965c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257965f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579662 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579664 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12579667 jmp 0x1257967d */
  goto L_1257967d;
L_12579669:;
  /* 12579669 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1257966c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257966f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579672 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579675 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579678 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257967a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1257967d:;
  /* 1257967d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579681 jne 0x125796ba */
  if (!C.zf) goto L_125796ba;
  /* 12579683 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579686 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12579689 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257968b jne 0x1257969c */
  if (!C.zf) goto L_1257969c;
  /* 1257968d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12579690 mov eax, dword ptr [edx*4 + 0x12595e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12595e50)));
  /* 12579697 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1257969a jmp 0x125796a9 */
  goto L_125796a9;
L_1257969c:;
  /* 1257969c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257969f mov edx, dword ptr [ecx*4 + 0x12595e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12595e84)));
  /* 125796a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125796a9:;
  /* 125796a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125796ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125796af jle 0x125796ba */
  if ((C.zf||C.sf!=C.of)) goto L_125796ba;
  /* 125796b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125796b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125796b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125796ba:;
  /* 125796ba jmp 0x125796f1 */
  goto L_125796f1;
L_125796bc:;
  /* 125796bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125796bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125796c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125796c4 jne 0x125796d5 */
  if (!C.zf) goto L_125796d5;
  /* 125796c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125796c9 mov ecx, dword ptr [eax*4 + 0x12595e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12595e4c)));
  /* 125796d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125796d3 jmp 0x125796e2 */
  goto L_125796e2;
L_125796d5:;
  /* 125796d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125796d8 mov eax, dword ptr [edx*4 + 0x12595e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12595e80)));
  /* 125796df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_125796e2:;
  /* 125796e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125796e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125796e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125796eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125796ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125796f1:;
  /* 125796f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125796f5 jne 0x12579731 */
  if (!C.zf) goto L_12579731;
  /* 125796f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125796fa mov dword ptr [0x12595e2c], eax */
  w32((uint32_t)(0x12595e2c), (EAX));
  /* 125796ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12579702 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579705 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12579708 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257970a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257970d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12579710 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579712 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579718 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1257971b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257971d mov dword ptr [0x12595e30], ecx */
  w32((uint32_t)(0x12595e30), (ECX));
  /* 12579723 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579726 mov dword ptr [0x12595e28], edx */
  w32((uint32_t)(0x12595e28), (EDX));
  /* 1257972c jmp 0x125797d4 */
  goto L_125797d4;
L_12579731:;
  /* 12579731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579734 mov dword ptr [0x12595e3c], eax */
  w32((uint32_t)(0x12595e3c), (EAX));
  /* 12579739 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1257973c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257973f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12579742 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579744 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579747 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1257974a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257974c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579752 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12579755 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579757 mov dword ptr [0x12595e40], ecx */
  w32((uint32_t)(0x12595e40), (ECX));
  /* 1257975d mov edx, dword ptr [0x12595d98] */
  EDX = (r32((uint32_t)(0x12595d98)));
  /* 12579763 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12579769 mov eax, dword ptr [0x12595e40] */
  EAX = (r32((uint32_t)(0x12595e40)));
  /* 1257976e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579770 mov dword ptr [0x12595e40], eax */
  w32((uint32_t)(0x12595e40), (EAX));
  /* 12579775 cmp dword ptr [0x12595e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12595e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257977c jge 0x125797a1 */
  if ((C.sf==C.of)) goto L_125797a1;
  /* 1257977e mov ecx, dword ptr [0x12595e40] */
  ECX = (r32((uint32_t)(0x12595e40)));
  /* 12579784 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257978a mov dword ptr [0x12595e40], ecx */
  w32((uint32_t)(0x12595e40), (ECX));
  /* 12579790 mov edx, dword ptr [0x12595e3c] */
  EDX = (r32((uint32_t)(0x12595e3c)));
  /* 12579796 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579799 mov dword ptr [0x12595e3c], edx */
  w32((uint32_t)(0x12595e3c), (EDX));
  /* 1257979f jmp 0x125797cb */
  goto L_125797cb;
L_125797a1:;
  /* 125797a1 cmp dword ptr [0x12595e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12595e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125797ab jl 0x125797cb */
  if ((C.sf!=C.of)) goto L_125797cb;
  /* 125797ad mov eax, dword ptr [0x12595e40] */
  EAX = (r32((uint32_t)(0x12595e40)));
  /* 125797b2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125797b7 mov dword ptr [0x12595e40], eax */
  w32((uint32_t)(0x12595e40), (EAX));
  /* 125797bc mov ecx, dword ptr [0x12595e3c] */
  ECX = (r32((uint32_t)(0x12595e3c)));
  /* 125797c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125797c5 mov dword ptr [0x12595e3c], ecx */
  w32((uint32_t)(0x12595e3c), (ECX));
L_125797cb:;
  /* 125797cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125797ce mov dword ptr [0x12595e38], edx */
  w32((uint32_t)(0x12595e38), (EDX));
L_125797d4:;
  /* 125797d4 mov esp, ebp */
  ESP = (EBP);
  /* 125797d6 pop ebp */
  EBP = (pop32());
  /* 125797d7 ret  */
  ESPCHK(0x125795e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100197e0 @ 0x125797e0 (382 bytes, 135 insns) */
void f_125797e0(void) {
  FTRACE(0x125797e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125797e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125797e1 mov ebp, esp */
  EBP = (ESP);
  /* 125797e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125797e5 push 0x12592f48 */
  push32((uint32_t)(0x12592f48u));
  /* 125797ea push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 125797ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125797f5 push eax */
  push32((uint32_t)(EAX));
  /* 125797f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125797fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579800 push ebx */
  push32((uint32_t)(EBX));
  /* 12579801 push esi */
  push32((uint32_t)(ESI));
  /* 12579802 push edi */
  push32((uint32_t)(EDI));
  /* 12579803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12579806 cmp dword ptr [0x12596d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257980d jne 0x12579852 */
  if (!C.zf) goto L_12579852;
  /* 1257980f push 0 */
  push32((uint32_t)(0x0u));
  /* 12579811 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579813 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579817 call dword ptr [0x125992e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e4))), 0x1257981du);
  /* 1257981d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257981f je 0x1257982d */
  if (C.zf) goto L_1257982d;
  /* 12579821 mov dword ptr [0x12596d2c], 1 */
  w32((uint32_t)(0x12596d2c), (0x1u));
  /* 1257982b jmp 0x12579852 */
  goto L_12579852;
L_1257982d:;
  /* 1257982d push 0 */
  push32((uint32_t)(0x0u));
  /* 1257982f push 0 */
  push32((uint32_t)(0x0u));
  /* 12579831 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579833 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579835 call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x1257983bu);
  /* 1257983b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257983d je 0x1257984b */
  if (C.zf) goto L_1257984b;
  /* 1257983f mov dword ptr [0x12596d2c], 2 */
  w32((uint32_t)(0x12596d2c), (0x2u));
  /* 12579849 jmp 0x12579852 */
  goto L_12579852;
L_1257984b:;
  /* 1257984b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257984d jmp 0x12579961 */
  goto L_12579961;
L_12579852:;
  /* 12579852 cmp dword ptr [0x12596d2c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596d2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579859 jne 0x12579876 */
  if (!C.zf) goto L_12579876;
  /* 1257985b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257985e push eax */
  push32((uint32_t)(EAX));
  /* 1257985f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579862 push ecx */
  push32((uint32_t)(ECX));
  /* 12579863 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579866 push edx */
  push32((uint32_t)(EDX));
  /* 12579867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257986a push eax */
  push32((uint32_t)(EAX));
  /* 1257986b call dword ptr [0x125992e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e4))), 0x12579871u);
  /* 12579871 jmp 0x12579961 */
  goto L_12579961;
L_12579876:;
  /* 12579876 cmp dword ptr [0x12596d2c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596d2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257987d jne 0x1257995f */
  if (!C.zf) goto L_1257995f;
  /* 12579883 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579887 jne 0x12579892 */
  if (!C.zf) goto L_12579892;
  /* 12579889 mov ecx, dword ptr [0x12596be0] */
  ECX = (r32((uint32_t)(0x12596be0)));
  /* 1257988f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12579892:;
  /* 12579892 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579896 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579899 push edx */
  push32((uint32_t)(EDX));
  /* 1257989a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257989d push eax */
  push32((uint32_t)(EAX));
  /* 1257989e call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x125798a4u);
  /* 125798a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125798a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125798ab jne 0x125798b4 */
  if (!C.zf) goto L_125798b4;
  /* 125798ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125798af jmp 0x12579961 */
  goto L_12579961;
L_125798b4:;
  /* 125798b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125798bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125798be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125798c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125798c3 call 0x1256d540 */
  push32(0x125798c8u); f_1256d540();
  /* 125798c8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 125798cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125798ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125798d1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125798d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125798db jmp 0x125798f4 */
  goto L_125798f4;
  /* 125798dd mov eax, 1 */
  EAX = (0x1u);
  /* 125798e2 ret  */
  ESPCHK(0x125797e0u, _esp0);
  ESP += 4; return;
  /* 125798e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125798e6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125798ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125798f4:;
  /* 125798f4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125798f8 jne 0x125798fe */
  if (!C.zf) goto L_125798fe;
  /* 125798fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125798fc jmp 0x12579961 */
  goto L_12579961;
L_125798fe:;
  /* 125798fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12579901 push edx */
  push32((uint32_t)(EDX));
  /* 12579902 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12579905 push eax */
  push32((uint32_t)(EAX));
  /* 12579906 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579909 push ecx */
  push32((uint32_t)(ECX));
  /* 1257990a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257990d push edx */
  push32((uint32_t)(EDX));
  /* 1257990e call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x12579914u);
  /* 12579914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579916 jne 0x1257991c */
  if (!C.zf) goto L_1257991c;
  /* 12579918 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257991a jmp 0x12579961 */
  goto L_12579961;
L_1257991c:;
  /* 1257991c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579920 jne 0x1257993d */
  if (!C.zf) goto L_1257993d;
  /* 12579922 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579924 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579926 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579928 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257992b push eax */
  push32((uint32_t)(EAX));
  /* 1257992c push 1 */
  push32((uint32_t)(0x1u));
  /* 1257992e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579931 push ecx */
  push32((uint32_t)(ECX));
  /* 12579932 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x12579938u);
  /* 12579938 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1257993b jmp 0x1257995a */
  goto L_1257995a;
L_1257993d:;
  /* 1257993d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12579940 push edx */
  push32((uint32_t)(EDX));
  /* 12579941 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579944 push eax */
  push32((uint32_t)(EAX));
  /* 12579945 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579947 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257994a push ecx */
  push32((uint32_t)(ECX));
  /* 1257994b push 1 */
  push32((uint32_t)(0x1u));
  /* 1257994d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579950 push edx */
  push32((uint32_t)(EDX));
  /* 12579951 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x12579957u);
  /* 12579957 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1257995a:;
  /* 1257995a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257995d jmp 0x12579961 */
  goto L_12579961;
L_1257995f:;
  /* 1257995f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12579961:;
  /* 12579961 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12579964 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12579967 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1257996e pop edi */
  EDI = (pop32());
  /* 1257996f pop esi */
  ESI = (pop32());
  /* 12579970 pop ebx */
  EBX = (pop32());
  /* 12579971 mov esp, ebp */
  ESP = (EBP);
  /* 12579973 pop ebp */
  EBP = (pop32());
  /* 12579974 ret  */
  ESPCHK(0x125797e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019980 @ 0x12579980 (398 bytes, 140 insns) */
void f_12579980(void) {
  FTRACE(0x12579980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579980 push ebp */
  push32((uint32_t)(EBP));
  /* 12579981 mov ebp, esp */
  EBP = (ESP);
  /* 12579983 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579985 push 0x12592f58 */
  push32((uint32_t)(0x12592f58u));
  /* 1257998a push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 1257998f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12579995 push eax */
  push32((uint32_t)(EAX));
  /* 12579996 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1257999d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125799a0 push ebx */
  push32((uint32_t)(EBX));
  /* 125799a1 push esi */
  push32((uint32_t)(ESI));
  /* 125799a2 push edi */
  push32((uint32_t)(EDI));
  /* 125799a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125799a6 cmp dword ptr [0x12596d30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125799ad jne 0x125799f2 */
  if (!C.zf) goto L_125799f2;
  /* 125799af push 0 */
  push32((uint32_t)(0x0u));
  /* 125799b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125799b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125799b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125799b7 call dword ptr [0x125992e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e4))), 0x125799bdu);
  /* 125799bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125799bf je 0x125799cd */
  if (C.zf) goto L_125799cd;
  /* 125799c1 mov dword ptr [0x12596d30], 1 */
  w32((uint32_t)(0x12596d30), (0x1u));
  /* 125799cb jmp 0x125799f2 */
  goto L_125799f2;
L_125799cd:;
  /* 125799cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125799cf push 0 */
  push32((uint32_t)(0x0u));
  /* 125799d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125799d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125799d5 call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x125799dbu);
  /* 125799db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125799dd je 0x125799eb */
  if (C.zf) goto L_125799eb;
  /* 125799df mov dword ptr [0x12596d30], 2 */
  w32((uint32_t)(0x12596d30), (0x2u));
  /* 125799e9 jmp 0x125799f2 */
  goto L_125799f2;
L_125799eb:;
  /* 125799eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125799ed jmp 0x12579b11 */
  goto L_12579b11;
L_125799f2:;
  /* 125799f2 cmp dword ptr [0x12596d30], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596d30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125799f9 jne 0x12579a16 */
  if (!C.zf) goto L_12579a16;
  /* 125799fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125799fe push eax */
  push32((uint32_t)(EAX));
  /* 125799ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12579a03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579a06 push edx */
  push32((uint32_t)(EDX));
  /* 12579a07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579a0a push eax */
  push32((uint32_t)(EAX));
  /* 12579a0b call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x12579a11u);
  /* 12579a11 jmp 0x12579b11 */
  goto L_12579b11;
L_12579a16:;
  /* 12579a16 cmp dword ptr [0x12596d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579a1d jne 0x12579b0f */
  if (!C.zf) goto L_12579b0f;
  /* 12579a23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579a27 jne 0x12579a32 */
  if (!C.zf) goto L_12579a32;
  /* 12579a29 mov ecx, dword ptr [0x12596be0] */
  ECX = (r32((uint32_t)(0x12596be0)));
  /* 12579a2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12579a32:;
  /* 12579a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579a36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579a39 push edx */
  push32((uint32_t)(EDX));
  /* 12579a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579a3d push eax */
  push32((uint32_t)(EAX));
  /* 12579a3e call dword ptr [0x125992e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e4))), 0x12579a44u);
  /* 12579a44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12579a47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579a4b jne 0x12579a54 */
  if (!C.zf) goto L_12579a54;
  /* 12579a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579a4f jmp 0x12579b11 */
  goto L_12579b11;
L_12579a54:;
  /* 12579a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12579a5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12579a5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12579a60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579a63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12579a65 call 0x1256d540 */
  push32(0x12579a6au); f_1256d540();
  /* 12579a6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12579a6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12579a70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12579a73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12579a76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12579a7d jmp 0x12579a96 */
  goto L_12579a96;
  /* 12579a7f mov eax, 1 */
  EAX = (0x1u);
  /* 12579a84 ret  */
  ESPCHK(0x12579980u, _esp0);
  ESP += 4; return;
  /* 12579a85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12579a88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12579a8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12579a96:;
  /* 12579a96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579a9a jne 0x12579aa0 */
  if (!C.zf) goto L_12579aa0;
  /* 12579a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579a9e jmp 0x12579b11 */
  goto L_12579b11;
L_12579aa0:;
  /* 12579aa0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12579aa3 push edx */
  push32((uint32_t)(EDX));
  /* 12579aa4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12579aa7 push eax */
  push32((uint32_t)(EAX));
  /* 12579aa8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579aab push ecx */
  push32((uint32_t)(ECX));
  /* 12579aac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579aaf push edx */
  push32((uint32_t)(EDX));
  /* 12579ab0 call dword ptr [0x125992e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e4))), 0x12579ab6u);
  /* 12579ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579ab8 jne 0x12579abe */
  if (!C.zf) goto L_12579abe;
  /* 12579aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579abc jmp 0x12579b11 */
  goto L_12579b11;
L_12579abe:;
  /* 12579abe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579ac2 jne 0x12579ae6 */
  if (!C.zf) goto L_12579ae6;
  /* 12579ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12579acc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579ace mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12579ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12579ad2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12579ad7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579ada push ecx */
  push32((uint32_t)(ECX));
  /* 12579adb call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579ae1u);
  /* 12579ae1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12579ae4 jmp 0x12579b0a */
  goto L_12579b0a;
L_12579ae6:;
  /* 12579ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579aea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12579aed push edx */
  push32((uint32_t)(EDX));
  /* 12579aee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579af1 push eax */
  push32((uint32_t)(EAX));
  /* 12579af2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579af4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12579af7 push ecx */
  push32((uint32_t)(ECX));
  /* 12579af8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12579afd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579b00 push edx */
  push32((uint32_t)(EDX));
  /* 12579b01 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579b07u);
  /* 12579b07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12579b0a:;
  /* 12579b0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12579b0d jmp 0x12579b11 */
  goto L_12579b11;
L_12579b0f:;
  /* 12579b0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12579b11:;
  /* 12579b11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12579b14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12579b17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12579b1e pop edi */
  EDI = (pop32());
  /* 12579b1f pop esi */
  ESI = (pop32());
  /* 12579b20 pop ebx */
  EBX = (pop32());
  /* 12579b21 mov esp, ebp */
  ESP = (EBP);
  /* 12579b23 pop ebp */
  EBP = (pop32());
  /* 12579b24 ret  */
  ESPCHK(0x12579980u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b30 @ 0x12579b30 (11 bytes, 6 insns) */
void f_12579b30(void) {
  FTRACE(0x12579b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12579b31 mov ebp, esp */
  EBP = (ESP);
  /* 12579b33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579b36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579b39 pop ebp */
  EBP = (pop32());
  /* 12579b3a ret  */
  ESPCHK(0x12579b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b40 @ 0x12579b40 (147 bytes, 43 insns) */
void f_12579b40(void) {
  FTRACE(0x12579b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12579b41 mov ebp, esp */
  EBP = (ESP);
  /* 12579b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12579b44 cmp dword ptr [0x12596bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579b4b jne 0x12579b67 */
  if (!C.zf) goto L_12579b67;
  /* 12579b4d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579b51 jl 0x12579b62 */
  if ((C.sf!=C.of)) goto L_12579b62;
  /* 12579b53 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579b57 jg 0x12579b62 */
  if ((!C.zf&&C.sf==C.of)) goto L_12579b62;
  /* 12579b59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579b5c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579b5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12579b62:;
  /* 12579b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579b65 jmp 0x12579bcf */
  goto L_12579bcf;
L_12579b67:;
  /* 12579b67 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 12579b6c call dword ptr [0x125993bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993bc))), 0x12579b72u);
  /* 12579b72 cmp dword ptr [0x12596d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579b79 je 0x12579b99 */
  if (C.zf) goto L_12579b99;
  /* 12579b7b push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 12579b80 call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x12579b86u);
  /* 12579b86 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12579b88 call 0x1256dda0 */
  push32(0x12579b8du); f_1256dda0();
  /* 12579b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579b90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12579b97 jmp 0x12579ba0 */
  goto L_12579ba0;
L_12579b99:;
  /* 12579b99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12579ba0:;
  /* 12579ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12579ba4 call 0x12579be0 */
  push32(0x12579ba9u); f_12579be0();
  /* 12579ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579bac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12579baf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579bb3 je 0x12579bc1 */
  if (C.zf) goto L_12579bc1;
  /* 12579bb5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12579bb7 call 0x1256de40 */
  push32(0x12579bbcu); f_1256de40();
  /* 12579bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579bbf jmp 0x12579bcc */
  goto L_12579bcc;
L_12579bc1:;
  /* 12579bc1 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 12579bc6 call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x12579bccu);
L_12579bcc:;
  /* 12579bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12579bcf:;
  /* 12579bcf mov esp, ebp */
  ESP = (EBP);
  /* 12579bd1 pop ebp */
  EBP = (pop32());
  /* 12579bd2 ret  */
  ESPCHK(0x12579b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019be0 @ 0x12579be0 (299 bytes, 91 insns) */
void f_12579be0(void) {
  FTRACE(0x12579be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12579be1 mov ebp, esp */
  EBP = (ESP);
  /* 12579be3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579be6 cmp dword ptr [0x12596bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579bed jne 0x12579c0c */
  if (!C.zf) goto L_12579c0c;
  /* 12579bef cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579bf3 jl 0x12579c04 */
  if ((C.sf!=C.of)) goto L_12579c04;
  /* 12579bf5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579bf9 jg 0x12579c04 */
  if ((!C.zf&&C.sf==C.of)) goto L_12579c04;
  /* 12579bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579bfe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579c01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12579c04:;
  /* 12579c04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c07 jmp 0x12579d07 */
  goto L_12579d07;
L_12579c0c:;
  /* 12579c0c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579c13 jge 0x12579c53 */
  if ((C.sf==C.of)) goto L_12579c53;
  /* 12579c15 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579c1c jle 0x12579c31 */
  if ((C.zf||C.sf!=C.of)) goto L_12579c31;
  /* 12579c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12579c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12579c24 call 0x125703b0 */
  push32(0x12579c29u); f_125703b0();
  /* 12579c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579c2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12579c2f jmp 0x12579c45 */
  goto L_12579c45;
L_12579c31:;
  /* 12579c31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c34 mov eax, dword ptr [0x12594c98] */
  EAX = (r32((uint32_t)(0x12594c98)));
  /* 12579c39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579c3b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12579c3f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12579c42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12579c45:;
  /* 12579c45 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579c49 jne 0x12579c53 */
  if (!C.zf) goto L_12579c53;
  /* 12579c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c4e jmp 0x12579d07 */
  goto L_12579d07;
L_12579c53:;
  /* 12579c53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c56 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12579c59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12579c5f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12579c65 mov eax, dword ptr [0x12594c98] */
  EAX = (r32((uint32_t)(0x12594c98)));
  /* 12579c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12579c6c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12579c70 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12579c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12579c78 je 0x12579c9c */
  if (C.zf) goto L_12579c9c;
  /* 12579c7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579c7d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12579c80 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12579c86 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12579c89 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12579c8c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12579c8f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12579c93 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12579c9a jmp 0x12579cad */
  goto L_12579cad;
L_12579c9c:;
  /* 12579c9c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12579c9f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12579ca2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12579ca6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12579cad:;
  /* 12579cad push 1 */
  push32((uint32_t)(0x1u));
  /* 12579caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12579cb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12579cb3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12579cb6 push edx */
  push32((uint32_t)(EDX));
  /* 12579cb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579cba push eax */
  push32((uint32_t)(EAX));
  /* 12579cbb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12579cbe push ecx */
  push32((uint32_t)(ECX));
  /* 12579cbf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12579cc4 mov edx, dword ptr [0x12596bd0] */
  EDX = (r32((uint32_t)(0x12596bd0)));
  /* 12579cca push edx */
  push32((uint32_t)(EDX));
  /* 12579ccb call 0x12572790 */
  push32(0x12579cd0u); f_12572790();
  /* 12579cd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579cd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12579cd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579cda jne 0x12579ce1 */
  if (!C.zf) goto L_12579ce1;
  /* 12579cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579cdf jmp 0x12579d07 */
  goto L_12579d07;
L_12579ce1:;
  /* 12579ce1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579ce5 jne 0x12579cf1 */
  if (!C.zf) goto L_12579cf1;
  /* 12579ce7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579cea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12579cef jmp 0x12579d07 */
  goto L_12579d07;
L_12579cf1:;
  /* 12579cf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579cf4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12579cf9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12579cfc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12579d02 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12579d05 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12579d07:;
  /* 12579d07 mov esp, ebp */
  ESP = (EBP);
  /* 12579d09 pop ebp */
  EBP = (pop32());
  /* 12579d0a ret  */
  ESPCHK(0x12579be0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12579d10 (52 bytes, 19 insns) */
void f_12579d10(void) {
  FTRACE(0x12579d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579d10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12579d14 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12579d18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12579d1a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12579d1e jne 0x12579d29 */
  if (!C.zf) goto L_12579d29;
  /* 12579d20 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12579d24 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12579d26 ret 0x10 */
  ESPCHK(0x12579d10u, _esp0);
  ESP += 20; return;
L_12579d29:;
  /* 12579d29 push ebx */
  push32((uint32_t)(EBX));
  /* 12579d2a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12579d2c mov ebx, eax */
  EBX = (EAX);
  /* 12579d2e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12579d32 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12579d36 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579d38 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12579d3c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12579d3e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579d40 pop ebx */
  EBX = (pop32());
  /* 12579d41 ret 0x10 */
  ESPCHK(0x12579d10u, _esp0);
  ESP += 20; return;
}

/* FUN_10019d50 @ 0x12579d50 (46 bytes, 18 insns) */
void f_12579d50(void) {
  FTRACE(0x12579d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12579d51 mov ebp, esp */
  EBP = (ESP);
  /* 12579d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12579d54 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12579d56 call 0x1256dda0 */
  push32(0x12579d5bu); f_1256dda0();
  /* 12579d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579d5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579d61 push eax */
  push32((uint32_t)(EAX));
  /* 12579d62 call 0x12579d80 */
  push32(0x12579d67u); f_12579d80();
  /* 12579d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579d6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12579d6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12579d6f call 0x1256de40 */
  push32(0x12579d74u); f_1256de40();
  /* 12579d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579d7a mov esp, ebp */
  ESP = (EBP);
  /* 12579d7c pop ebp */
  EBP = (pop32());
  /* 12579d7d ret  */
  ESPCHK(0x12579d50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12579d80 (198 bytes, 69 insns) */
void f_12579d80(void) {
  FTRACE(0x12579d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12579d81 mov ebp, esp */
  EBP = (ESP);
  /* 12579d83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579d86 mov eax, dword ptr [0x125969ec] */
  EAX = (r32((uint32_t)(0x125969ec)));
  /* 12579d8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12579d8e cmp dword ptr [0x125984e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125984e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579d95 jne 0x12579d9e */
  if (!C.zf) goto L_12579d9e;
  /* 12579d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579d99 jmp 0x12579e42 */
  goto L_12579e42;
L_12579d9e:;
  /* 12579d9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579da2 jne 0x12579dc6 */
  if (!C.zf) goto L_12579dc6;
  /* 12579da4 cmp dword ptr [0x125969f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579dab je 0x12579dc6 */
  if (C.zf) goto L_12579dc6;
  /* 12579dad call 0x12579ea0 */
  push32(0x12579db2u); f_12579ea0();
  /* 12579db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579db4 je 0x12579dbd */
  if (C.zf) goto L_12579dbd;
  /* 12579db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579db8 jmp 0x12579e42 */
  goto L_12579e42;
L_12579dbd:;
  /* 12579dbd mov ecx, dword ptr [0x125969ec] */
  ECX = (r32((uint32_t)(0x125969ec)));
  /* 12579dc3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12579dc6:;
  /* 12579dc6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579dca je 0x12579e40 */
  if (C.zf) goto L_12579e40;
  /* 12579dcc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579dd0 je 0x12579e40 */
  if (C.zf) goto L_12579e40;
  /* 12579dd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579dd5 push edx */
  push32((uint32_t)(EDX));
  /* 12579dd6 call 0x1256d1d0 */
  push32(0x12579ddbu); f_1256d1d0();
  /* 12579ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12579de1:;
  /* 12579de1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579de4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579de7 je 0x12579e40 */
  if (C.zf) goto L_12579e40;
  /* 12579de9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579dec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12579dee push edx */
  push32((uint32_t)(EDX));
  /* 12579def call 0x1256d1d0 */
  push32(0x12579df4u); f_1256d1d0();
  /* 12579df4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579df7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579dfa jbe 0x12579e35 */
  if ((C.cf||C.zf)) goto L_12579e35;
  /* 12579dfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12579e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579e04 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12579e08 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579e0b jne 0x12579e35 */
  if (!C.zf) goto L_12579e35;
  /* 12579e0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579e10 push ecx */
  push32((uint32_t)(ECX));
  /* 12579e11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579e14 push edx */
  push32((uint32_t)(EDX));
  /* 12579e15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579e18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12579e1a push ecx */
  push32((uint32_t)(ECX));
  /* 12579e1b call 0x12579e50 */
  push32(0x12579e20u); f_12579e50();
  /* 12579e20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579e23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579e25 jne 0x12579e35 */
  if (!C.zf) goto L_12579e35;
  /* 12579e27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579e2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12579e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579e2f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12579e33 jmp 0x12579e42 */
  goto L_12579e42;
L_12579e35:;
  /* 12579e35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579e38 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579e3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12579e3e jmp 0x12579de1 */
  goto L_12579de1;
L_12579e40:;
  /* 12579e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12579e42:;
  /* 12579e42 mov esp, ebp */
  ESP = (EBP);
  /* 12579e44 pop ebp */
  EBP = (pop32());
  /* 12579e45 ret  */
  ESPCHK(0x12579d80u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12579e50 (79 bytes, 32 insns) */
void f_12579e50(void) {
  FTRACE(0x12579e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12579e51 mov ebp, esp */
  EBP = (ESP);
  /* 12579e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12579e54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579e58 jne 0x12579e5e */
  if (!C.zf) goto L_12579e5e;
  /* 12579e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579e5c jmp 0x12579e9b */
  goto L_12579e9b;
L_12579e5e:;
  /* 12579e5e mov eax, dword ptr [0x125980a4] */
  EAX = (r32((uint32_t)(0x125980a4)));
  /* 12579e63 push eax */
  push32((uint32_t)(EAX));
  /* 12579e64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579e67 push ecx */
  push32((uint32_t)(ECX));
  /* 12579e68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12579e6b push edx */
  push32((uint32_t)(EDX));
  /* 12579e6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579e6f push eax */
  push32((uint32_t)(EAX));
  /* 12579e70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12579e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12579e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579e76 mov edx, dword ptr [0x12598344] */
  EDX = (r32((uint32_t)(0x12598344)));
  /* 12579e7c push edx */
  push32((uint32_t)(EDX));
  /* 12579e7d call 0x12579f50 */
  push32(0x12579e82u); f_12579f50();
  /* 12579e82 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579e85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12579e88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579e8c jne 0x12579e95 */
  if (!C.zf) goto L_12579e95;
  /* 12579e8e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12579e93 jmp 0x12579e9b */
  goto L_12579e9b;
L_12579e95:;
  /* 12579e95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579e98 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12579e9b:;
  /* 12579e9b mov esp, ebp */
  ESP = (EBP);
  /* 12579e9d pop ebp */
  EBP = (pop32());
  /* 12579e9e ret  */
  ESPCHK(0x12579e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ea0 @ 0x12579ea0 (174 bytes, 66 insns) */
void f_12579ea0(void) {
  FTRACE(0x12579ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12579ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12579ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12579ea6 mov eax, dword ptr [0x125969f4] */
  EAX = (r32((uint32_t)(0x125969f4)));
  /* 12579eab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12579eae:;
  /* 12579eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579eb1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579eb4 je 0x12579f48 */
  if (C.zf) goto L_12579f48;
  /* 12579eba push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ec2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579ec7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12579ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12579eca push 0 */
  push32((uint32_t)(0x0u));
  /* 12579ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 12579ece call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579ed4u);
  /* 12579ed4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12579ed7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579edb jne 0x12579ee2 */
  if (!C.zf) goto L_12579ee2;
  /* 12579edd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12579ee0 jmp 0x12579f4a */
  goto L_12579f4a;
L_12579ee2:;
  /* 12579ee2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12579ee4 push 0x12592f64 */
  push32((uint32_t)(0x12592f64u));
  /* 12579ee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12579eeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579eee push ecx */
  push32((uint32_t)(ECX));
  /* 12579eef call 0x1256a3a0 */
  push32(0x12579ef4u); f_1256a3a0();
  /* 12579ef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579ef7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12579efa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579efe jne 0x12579f05 */
  if (!C.zf) goto L_12579f05;
  /* 12579f00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12579f03 jmp 0x12579f4a */
  goto L_12579f4a;
L_12579f05:;
  /* 12579f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12579f0c push edx */
  push32((uint32_t)(EDX));
  /* 12579f0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579f10 push eax */
  push32((uint32_t)(EAX));
  /* 12579f11 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579f16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12579f18 push edx */
  push32((uint32_t)(EDX));
  /* 12579f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12579f1d call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12579f23u);
  /* 12579f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579f25 jne 0x12579f2c */
  if (!C.zf) goto L_12579f2c;
  /* 12579f27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12579f2a jmp 0x12579f4a */
  goto L_12579f4a;
L_12579f2c:;
  /* 12579f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12579f31 push eax */
  push32((uint32_t)(EAX));
  /* 12579f32 call 0x1257a3a0 */
  push32(0x12579f37u); f_1257a3a0();
  /* 12579f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12579f3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12579f40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12579f43 jmp 0x12579eae */
  goto L_12579eae;
L_12579f48:;
  /* 12579f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12579f4a:;
  /* 12579f4a mov esp, ebp */
  ESP = (EBP);
  /* 12579f4c pop ebp */
  EBP = (pop32());
  /* 12579f4d ret  */
  ESPCHK(0x12579ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f50 @ 0x12579f50 (970 bytes, 340 insns) */
void f_12579f50(void) {
  FTRACE(0x12579f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12579f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12579f51 mov ebp, esp */
  EBP = (ESP);
  /* 12579f53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12579f55 push 0x12592fb8 */
  push32((uint32_t)(0x12592fb8u));
  /* 12579f5a push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 12579f5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12579f65 push eax */
  push32((uint32_t)(EAX));
  /* 12579f66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12579f6d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579f70 push ebx */
  push32((uint32_t)(EBX));
  /* 12579f71 push esi */
  push32((uint32_t)(ESI));
  /* 12579f72 push edi */
  push32((uint32_t)(EDI));
  /* 12579f73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12579f76 cmp dword ptr [0x12596d34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579f7d jne 0x12579fd6 */
  if (!C.zf) goto L_12579fd6;
  /* 12579f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12579f81 push 0x12592614 */
  push32((uint32_t)(0x12592614u));
  /* 12579f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579f88 push 0x12592614 */
  push32((uint32_t)(0x12592614u));
  /* 12579f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12579f91 call dword ptr [0x125992e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e0))), 0x12579f97u);
  /* 12579f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579f99 je 0x12579fa7 */
  if (C.zf) goto L_12579fa7;
  /* 12579f9b mov dword ptr [0x12596d34], 1 */
  w32((uint32_t)(0x12596d34), (0x1u));
  /* 12579fa5 jmp 0x12579fd6 */
  goto L_12579fd6;
L_12579fa7:;
  /* 12579fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12579fa9 push 0x12592610 */
  push32((uint32_t)(0x12592610u));
  /* 12579fae push 1 */
  push32((uint32_t)(0x1u));
  /* 12579fb0 push 0x12592610 */
  push32((uint32_t)(0x12592610u));
  /* 12579fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12579fb9 call dword ptr [0x125992ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992ec))), 0x12579fbfu);
  /* 12579fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12579fc1 je 0x12579fcf */
  if (C.zf) goto L_12579fcf;
  /* 12579fc3 mov dword ptr [0x12596d34], 2 */
  w32((uint32_t)(0x12596d34), (0x2u));
  /* 12579fcd jmp 0x12579fd6 */
  goto L_12579fd6;
L_12579fcf:;
  /* 12579fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12579fd1 jmp 0x1257a334 */
  goto L_1257a334;
L_12579fd6:;
  /* 12579fd6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579fda jle 0x12579fef */
  if ((C.zf||C.sf!=C.of)) goto L_12579fef;
  /* 12579fdc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12579fdf push eax */
  push32((uint32_t)(EAX));
  /* 12579fe0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12579fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12579fe4 call 0x1257a350 */
  push32(0x12579fe9u); f_1257a350();
  /* 12579fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12579fec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12579fef:;
  /* 12579fef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12579ff3 jle 0x1257a008 */
  if ((C.zf||C.sf!=C.of)) goto L_1257a008;
  /* 12579ff5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12579ff8 push edx */
  push32((uint32_t)(EDX));
  /* 12579ff9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12579ffc push eax */
  push32((uint32_t)(EAX));
  /* 12579ffd call 0x1257a350 */
  push32(0x1257a002u); f_1257a350();
  /* 1257a002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a005 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_1257a008:;
  /* 1257a008 cmp dword ptr [0x12596d34], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596d34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a00f jne 0x1257a034 */
  if (!C.zf) goto L_1257a034;
  /* 1257a011 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1257a014 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a015 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257a018 push edx */
  push32((uint32_t)(EDX));
  /* 1257a019 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257a01c push eax */
  push32((uint32_t)(EAX));
  /* 1257a01d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257a020 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a021 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a024 push edx */
  push32((uint32_t)(EDX));
  /* 1257a025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a028 push eax */
  push32((uint32_t)(EAX));
  /* 1257a029 call dword ptr [0x125992ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992ec))), 0x1257a02fu);
  /* 1257a02f jmp 0x1257a334 */
  goto L_1257a334;
L_1257a034:;
  /* 1257a034 cmp dword ptr [0x12596d34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596d34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a03b jne 0x1257a332 */
  if (!C.zf) goto L_1257a332;
  /* 1257a041 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a045 jne 0x1257a050 */
  if (!C.zf) goto L_1257a050;
  /* 1257a047 mov ecx, dword ptr [0x12596be0] */
  ECX = (r32((uint32_t)(0x12596be0)));
  /* 1257a04d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_1257a050:;
  /* 1257a050 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a054 je 0x1257a060 */
  if (C.zf) goto L_1257a060;
  /* 1257a056 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a05a jne 0x1257a1dc */
  if (!C.zf) goto L_1257a1dc;
L_1257a060:;
  /* 1257a060 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257a063 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a066 jne 0x1257a072 */
  if (!C.zf) goto L_1257a072;
  /* 1257a068 mov eax, 2 */
  EAX = (0x2u);
  /* 1257a06d jmp 0x1257a334 */
  goto L_1257a334;
L_1257a072:;
  /* 1257a072 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a076 jle 0x1257a082 */
  if ((C.zf||C.sf!=C.of)) goto L_1257a082;
  /* 1257a078 mov eax, 1 */
  EAX = (0x1u);
  /* 1257a07d jmp 0x1257a334 */
  goto L_1257a334;
L_1257a082:;
  /* 1257a082 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a086 jle 0x1257a092 */
  if ((C.zf||C.sf!=C.of)) goto L_1257a092;
  /* 1257a088 mov eax, 3 */
  EAX = (0x3u);
  /* 1257a08d jmp 0x1257a334 */
  goto L_1257a334;
L_1257a092:;
  /* 1257a092 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 1257a095 push eax */
  push32((uint32_t)(EAX));
  /* 1257a096 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257a099 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a09a call dword ptr [0x12599338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599338))), 0x1257a0a0u);
  /* 1257a0a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a0a2 jne 0x1257a0ab */
  if (!C.zf) goto L_1257a0ab;
  /* 1257a0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a0a6 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a0ab:;
  /* 1257a0ab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0af jne 0x1257a0b7 */
  if (!C.zf) goto L_1257a0b7;
  /* 1257a0b1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0b5 je 0x1257a0e4 */
  if (C.zf) goto L_1257a0e4;
L_1257a0b7:;
  /* 1257a0b7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0bb jne 0x1257a0c3 */
  if (!C.zf) goto L_1257a0c3;
  /* 1257a0bd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0c1 je 0x1257a0e4 */
  if (C.zf) goto L_1257a0e4;
L_1257a0c3:;
  /* 1257a0c3 push 0x12592f78 */
  push32((uint32_t)(0x12592f78u));
  /* 1257a0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257a0ca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1257a0cf push 0x12592f70 */
  push32((uint32_t)(0x12592f70u));
  /* 1257a0d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a0d6 call 0x12569460 */
  push32(0x1257a0dbu); f_12569460();
  /* 1257a0db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a0de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0e1 jne 0x1257a0e4 */
  if (!C.zf) goto L_1257a0e4;
  /* 1257a0e3 int3  */
  x86_unimpl("int3 @ 0x1257a0e3");
L_1257a0e4:;
  /* 1257a0e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a0e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a0e8 jne 0x1257a0ab */
  if (!C.zf) goto L_1257a0ab;
  /* 1257a0ea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0ee jle 0x1257a163 */
  if ((C.zf||C.sf!=C.of)) goto L_1257a163;
  /* 1257a0f0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a0f4 jae 0x1257a100 */
  if (!C.cf) goto L_1257a100;
  /* 1257a0f6 mov eax, 3 */
  EAX = (0x3u);
  /* 1257a0fb jmp 0x1257a334 */
  goto L_1257a334;
L_1257a100:;
  /* 1257a100 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 1257a103 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1257a106 jmp 0x1257a111 */
  goto L_1257a111;
L_1257a108:;
  /* 1257a108 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a10b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a10e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_1257a111:;
  /* 1257a111 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a116 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1257a118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a11a je 0x1257a159 */
  if (C.zf) goto L_1257a159;
  /* 1257a11c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a11f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a121 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1257a124 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a126 je 0x1257a159 */
  if (C.zf) goto L_1257a159;
  /* 1257a128 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257a12b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a12d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1257a12f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a134 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1257a136 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a138 jl 0x1257a157 */
  if ((C.sf!=C.of)) goto L_1257a157;
  /* 1257a13a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257a13d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a13f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1257a141 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a144 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a146 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1257a149 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a14b jg 0x1257a157 */
  if ((!C.zf&&C.sf==C.of)) goto L_1257a157;
  /* 1257a14d mov eax, 2 */
  EAX = (0x2u);
  /* 1257a152 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a157:;
  /* 1257a157 jmp 0x1257a108 */
  goto L_1257a108;
L_1257a159:;
  /* 1257a159 mov eax, 3 */
  EAX = (0x3u);
  /* 1257a15e jmp 0x1257a334 */
  goto L_1257a334;
L_1257a163:;
  /* 1257a163 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a167 jle 0x1257a1dc */
  if ((C.zf||C.sf!=C.of)) goto L_1257a1dc;
  /* 1257a169 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a16d jae 0x1257a179 */
  if (!C.cf) goto L_1257a179;
  /* 1257a16f mov eax, 1 */
  EAX = (0x1u);
  /* 1257a174 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a179:;
  /* 1257a179 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1257a17c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1257a17f jmp 0x1257a18a */
  goto L_1257a18a;
L_1257a181:;
  /* 1257a181 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a184 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a187 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1257a18a:;
  /* 1257a18a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a18d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a18f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1257a191 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a193 je 0x1257a1d2 */
  if (C.zf) goto L_1257a1d2;
  /* 1257a195 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a198 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a19a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1257a19d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257a19f je 0x1257a1d2 */
  if (C.zf) goto L_1257a1d2;
  /* 1257a1a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257a1a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a1a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1257a1a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a1ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a1ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1257a1af cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a1b1 jl 0x1257a1d0 */
  if ((C.sf!=C.of)) goto L_1257a1d0;
  /* 1257a1b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257a1b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a1b8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1257a1ba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1257a1bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a1bf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1257a1c2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a1c4 jg 0x1257a1d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1257a1d0;
  /* 1257a1c6 mov eax, 2 */
  EAX = (0x2u);
  /* 1257a1cb jmp 0x1257a334 */
  goto L_1257a334;
L_1257a1d0:;
  /* 1257a1d0 jmp 0x1257a181 */
  goto L_1257a181;
L_1257a1d2:;
  /* 1257a1d2 mov eax, 1 */
  EAX = (0x1u);
  /* 1257a1d7 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a1dc:;
  /* 1257a1dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1257a1de push 0 */
  push32((uint32_t)(0x0u));
  /* 1257a1e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257a1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a1e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257a1e7 push edx */
  push32((uint32_t)(EDX));
  /* 1257a1e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1257a1ea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257a1ed push eax */
  push32((uint32_t)(EAX));
  /* 1257a1ee call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x1257a1f4u);
  /* 1257a1f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1257a1f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a1fb jne 0x1257a204 */
  if (!C.zf) goto L_1257a204;
  /* 1257a1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a1ff jmp 0x1257a334 */
  goto L_1257a334;
L_1257a204:;
  /* 1257a204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1257a20b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1257a20e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1257a210 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a213 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1257a215 call 0x1256d540 */
  push32(0x1257a21au); f_1256d540();
  /* 1257a21a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1257a21d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1257a220 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1257a223 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1257a226 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1257a22d jmp 0x1257a246 */
  goto L_1257a246;
  /* 1257a22f mov eax, 1 */
  EAX = (0x1u);
  /* 1257a234 ret  */
  ESPCHK(0x12579f50u, _esp0);
  ESP += 4; return;
  /* 1257a235 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1257a238 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1257a23f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1257a246:;
  /* 1257a246 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a24a jne 0x1257a253 */
  if (!C.zf) goto L_1257a253;
  /* 1257a24c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a24e jmp 0x1257a334 */
  goto L_1257a334;
L_1257a253:;
  /* 1257a253 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1257a256 push edx */
  push32((uint32_t)(EDX));
  /* 1257a257 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257a25a push eax */
  push32((uint32_t)(EAX));
  /* 1257a25b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257a25e push ecx */
  push32((uint32_t)(ECX));
  /* 1257a25f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257a262 push edx */
  push32((uint32_t)(EDX));
  /* 1257a263 push 1 */
  push32((uint32_t)(0x1u));
  /* 1257a265 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257a268 push eax */
  push32((uint32_t)(EAX));
  /* 1257a269 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x1257a26fu);
  /* 1257a26f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a271 jne 0x1257a27a */
  if (!C.zf) goto L_1257a27a;
  /* 1257a273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a275 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a27a:;
  /* 1257a27a push 0 */
  push32((uint32_t)(0x0u));
  /* 1257a27c push 0 */
  push32((uint32_t)(0x0u));
  /* 1257a27e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1257a281 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a282 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257a285 push edx */
  push32((uint32_t)(EDX));
  /* 1257a286 push 9 */
  push32((uint32_t)(0x9u));
  /* 1257a288 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257a28b push eax */
  push32((uint32_t)(EAX));
  /* 1257a28c call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x1257a292u);
  /* 1257a292 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1257a295 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a299 jne 0x1257a2a2 */
  if (!C.zf) goto L_1257a2a2;
  /* 1257a29b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a29d jmp 0x1257a334 */
  goto L_1257a334;
L_1257a2a2:;
  /* 1257a2a2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1257a2a9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257a2ac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1257a2ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a2b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1257a2b3 call 0x1256d540 */
  push32(0x1257a2b8u); f_1256d540();
  /* 1257a2b8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1257a2bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1257a2be mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 1257a2c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1257a2c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1257a2cb jmp 0x1257a2e4 */
  goto L_1257a2e4;
  /* 1257a2cd mov eax, 1 */
  EAX = (0x1u);
  /* 1257a2d2 ret  */
  ESPCHK(0x12579f50u, _esp0);
  ESP += 4; return;
  /* 1257a2d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1257a2d6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1257a2dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1257a2e4:;
  /* 1257a2e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a2e8 jne 0x1257a2ee */
  if (!C.zf) goto L_1257a2ee;
  /* 1257a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a2ec jmp 0x1257a334 */
  goto L_1257a334;
L_1257a2ee:;
  /* 1257a2ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257a2f1 push edx */
  push32((uint32_t)(EDX));
  /* 1257a2f2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1257a2f5 push eax */
  push32((uint32_t)(EAX));
  /* 1257a2f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1257a2f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a2fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257a2fd push edx */
  push32((uint32_t)(EDX));
  /* 1257a2fe push 1 */
  push32((uint32_t)(0x1u));
  /* 1257a300 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257a303 push eax */
  push32((uint32_t)(EAX));
  /* 1257a304 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x1257a30au);
  /* 1257a30a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a30c jne 0x1257a312 */
  if (!C.zf) goto L_1257a312;
  /* 1257a30e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a310 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a312:;
  /* 1257a312 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257a315 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a316 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1257a319 push edx */
  push32((uint32_t)(EDX));
  /* 1257a31a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1257a31d push eax */
  push32((uint32_t)(EAX));
  /* 1257a31e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257a321 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a322 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a325 push edx */
  push32((uint32_t)(EDX));
  /* 1257a326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a329 push eax */
  push32((uint32_t)(EAX));
  /* 1257a32a call dword ptr [0x125992e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992e0))), 0x1257a330u);
  /* 1257a330 jmp 0x1257a334 */
  goto L_1257a334;
L_1257a332:;
  /* 1257a332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257a334:;
  /* 1257a334 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 1257a337 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a33a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1257a341 pop edi */
  EDI = (pop32());
  /* 1257a342 pop esi */
  ESI = (pop32());
  /* 1257a343 pop ebx */
  EBX = (pop32());
  /* 1257a344 mov esp, ebp */
  ESP = (EBP);
  /* 1257a346 pop ebp */
  EBP = (pop32());
  /* 1257a347 ret  */
  ESPCHK(0x12579f50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a350 @ 0x1257a350 (80 bytes, 32 insns) */
void f_1257a350(void) {
  FTRACE(0x1257a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a350 push ebp */
  push32((uint32_t)(EBP));
  /* 1257a351 mov ebp, esp */
  EBP = (ESP);
  /* 1257a353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a356 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a359 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257a35c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a35f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1257a362:;
  /* 1257a362 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a368 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a36b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257a36e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a370 je 0x1257a387 */
  if (C.zf) goto L_1257a387;
  /* 1257a372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a375 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257a378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a37a je 0x1257a387 */
  if (C.zf) goto L_1257a387;
  /* 1257a37c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a37f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257a385 jmp 0x1257a362 */
  goto L_1257a362;
L_1257a387:;
  /* 1257a387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a38a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257a38d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a38f jne 0x1257a399 */
  if (!C.zf) goto L_1257a399;
  /* 1257a391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a394 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a397 jmp 0x1257a39c */
  goto L_1257a39c;
L_1257a399:;
  /* 1257a399 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1257a39c:;
  /* 1257a39c mov esp, ebp */
  ESP = (EBP);
  /* 1257a39e pop ebp */
  EBP = (pop32());
  /* 1257a39f ret  */
  ESPCHK(0x1257a350u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3a0 @ 0x1257a3a0 (736 bytes, 224 insns) */
void f_1257a3a0(void) {
  FTRACE(0x1257a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1257a3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1257a3a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1257a3a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a3ab je 0x1257a3cc */
  if (C.zf) goto L_1257a3cc;
  /* 1257a3ad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1257a3af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a3b2 push eax */
  push32((uint32_t)(EAX));
  /* 1257a3b3 call 0x1257a7f0 */
  push32(0x1257a3b8u); f_1257a7f0();
  /* 1257a3b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a3bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1257a3be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a3c2 je 0x1257a3cc */
  if (C.zf) goto L_1257a3cc;
  /* 1257a3c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a3c7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a3ca jne 0x1257a3d4 */
  if (!C.zf) goto L_1257a3d4;
L_1257a3cc:;
  /* 1257a3cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a3cf jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a3d4:;
  /* 1257a3d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257a3d7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1257a3db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257a3dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a3df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1257a3e0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1257a3e3 mov ecx, dword ptr [0x125969ec] */
  ECX = (r32((uint32_t)(0x125969ec)));
  /* 1257a3e9 cmp ecx, dword ptr [0x125969f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125969f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a3ef jne 0x1257a405 */
  if (!C.zf) goto L_1257a405;
  /* 1257a3f1 mov edx, dword ptr [0x125969ec] */
  EDX = (r32((uint32_t)(0x125969ec)));
  /* 1257a3f7 push edx */
  push32((uint32_t)(EDX));
  /* 1257a3f8 call 0x1257a700 */
  push32(0x1257a3fdu); f_1257a700();
  /* 1257a3fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a400 mov dword ptr [0x125969ec], eax */
  w32((uint32_t)(0x125969ec), (EAX));
L_1257a405:;
  /* 1257a405 cmp dword ptr [0x125969ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a40c jne 0x1257a4c5 */
  if (!C.zf) goto L_1257a4c5;
  /* 1257a412 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a416 je 0x1257a437 */
  if (C.zf) goto L_1257a437;
  /* 1257a418 cmp dword ptr [0x125969f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a41f je 0x1257a437 */
  if (C.zf) goto L_1257a437;
  /* 1257a421 call 0x12579ea0 */
  push32(0x1257a426u); f_12579ea0();
  /* 1257a426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a428 je 0x1257a432 */
  if (C.zf) goto L_1257a432;
  /* 1257a42a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a42d jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a432:;
  /* 1257a432 jmp 0x1257a4c5 */
  goto L_1257a4c5;
L_1257a437:;
  /* 1257a437 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a43b je 0x1257a444 */
  if (C.zf) goto L_1257a444;
  /* 1257a43d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a43f jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a444:;
  /* 1257a444 cmp dword ptr [0x125969ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a44b jne 0x1257a484 */
  if (!C.zf) goto L_1257a484;
  /* 1257a44d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 1257a452 push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a457 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a459 push 4 */
  push32((uint32_t)(0x4u));
  /* 1257a45b call 0x1256a3a0 */
  push32(0x1257a460u); f_1256a3a0();
  /* 1257a460 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a463 mov dword ptr [0x125969ec], eax */
  w32((uint32_t)(0x125969ec), (EAX));
  /* 1257a468 cmp dword ptr [0x125969ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a46f jne 0x1257a479 */
  if (!C.zf) goto L_1257a479;
  /* 1257a471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a474 jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a479:;
  /* 1257a479 mov eax, dword ptr [0x125969ec] */
  EAX = (r32((uint32_t)(0x125969ec)));
  /* 1257a47e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1257a484:;
  /* 1257a484 cmp dword ptr [0x125969f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a48b jne 0x1257a4c5 */
  if (!C.zf) goto L_1257a4c5;
  /* 1257a48d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 1257a492 push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a497 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a499 push 4 */
  push32((uint32_t)(0x4u));
  /* 1257a49b call 0x1256a3a0 */
  push32(0x1257a4a0u); f_1256a3a0();
  /* 1257a4a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a4a3 mov dword ptr [0x125969f4], eax */
  w32((uint32_t)(0x125969f4), (EAX));
  /* 1257a4a8 cmp dword ptr [0x125969f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125969f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a4af jne 0x1257a4b9 */
  if (!C.zf) goto L_1257a4b9;
  /* 1257a4b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a4b4 jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a4b9:;
  /* 1257a4b9 mov ecx, dword ptr [0x125969f4] */
  ECX = (r32((uint32_t)(0x125969f4)));
  /* 1257a4bf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_1257a4c5:;
  /* 1257a4c5 mov edx, dword ptr [0x125969ec] */
  EDX = (r32((uint32_t)(0x125969ec)));
  /* 1257a4cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1257a4ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257a4d1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a4d4 push eax */
  push32((uint32_t)(EAX));
  /* 1257a4d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a4d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a4d9 call 0x1257a680 */
  push32(0x1257a4deu); f_1257a680();
  /* 1257a4de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a4e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257a4e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a4e8 jl 0x1257a581 */
  if ((C.sf!=C.of)) goto L_1257a581;
  /* 1257a4ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a4f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a4f4 je 0x1257a581 */
  if (C.zf) goto L_1257a581;
  /* 1257a4fa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a4fe je 0x1257a573 */
  if (C.zf) goto L_1257a573;
  /* 1257a500 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a508 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1257a50b push edx */
  push32((uint32_t)(EDX));
  /* 1257a50c call 0x1256ae30 */
  push32(0x1257a511u); f_1256ae30();
  /* 1257a511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a514 jmp 0x1257a51f */
  goto L_1257a51f;
L_1257a516:;
  /* 1257a516 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a51c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1257a51f:;
  /* 1257a51f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a522 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a525 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a529 je 0x1257a540 */
  if (C.zf) goto L_1257a540;
  /* 1257a52b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a52e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a534 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a537 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1257a53b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1257a53e jmp 0x1257a516 */
  goto L_1257a516;
L_1257a540:;
  /* 1257a540 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 1257a545 push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a54a push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a54c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a54f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1257a552 push eax */
  push32((uint32_t)(EAX));
  /* 1257a553 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a556 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a557 call 0x1256a830 */
  push32(0x1257a55cu); f_1256a830();
  /* 1257a55c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a55f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257a562 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a566 je 0x1257a571 */
  if (C.zf) goto L_1257a571;
  /* 1257a568 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a56b mov dword ptr [0x125969ec], edx */
  w32((uint32_t)(0x125969ec), (EDX));
L_1257a571:;
  /* 1257a571 jmp 0x1257a57f */
  goto L_1257a57f;
L_1257a573:;
  /* 1257a573 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a57c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1257a57f:;
  /* 1257a57f jmp 0x1257a5f4 */
  goto L_1257a5f4;
L_1257a581:;
  /* 1257a581 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a585 jne 0x1257a5ed */
  if (!C.zf) goto L_1257a5ed;
  /* 1257a587 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a58b jge 0x1257a595 */
  if ((C.sf==C.of)) goto L_1257a595;
  /* 1257a58d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a590 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257a592 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1257a595:;
  /* 1257a595 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1257a59a push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a59f push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a5a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a5a4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1257a5ab push edx */
  push32((uint32_t)(EDX));
  /* 1257a5ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a5af push eax */
  push32((uint32_t)(EAX));
  /* 1257a5b0 call 0x1256a830 */
  push32(0x1257a5b5u); f_1256a830();
  /* 1257a5b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a5b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257a5bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a5bf jne 0x1257a5c9 */
  if (!C.zf) goto L_1257a5c9;
  /* 1257a5c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a5c4 jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a5c9:;
  /* 1257a5c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a5cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a5d2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1257a5d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a5d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a5db mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 1257a5e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a5e6 mov dword ptr [0x125969ec], eax */
  w32((uint32_t)(0x125969ec), (EAX));
  /* 1257a5eb jmp 0x1257a5f4 */
  goto L_1257a5f4;
L_1257a5ed:;
  /* 1257a5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a5ef jmp 0x1257a67b */
  goto L_1257a67b;
L_1257a5f4:;
  /* 1257a5f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a5f8 je 0x1257a679 */
  if (C.zf) goto L_1257a679;
  /* 1257a5fa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1257a5ff push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a604 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a609 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a60a call 0x1256d1d0 */
  push32(0x1257a60fu); f_1256d1d0();
  /* 1257a60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a612 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a615 push eax */
  push32((uint32_t)(EAX));
  /* 1257a616 call 0x1256a3a0 */
  push32(0x1257a61bu); f_1256a3a0();
  /* 1257a61b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a61e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1257a621 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a625 je 0x1257a679 */
  if (C.zf) goto L_1257a679;
  /* 1257a627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a62a push edx */
  push32((uint32_t)(EDX));
  /* 1257a62b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a62e push eax */
  push32((uint32_t)(EAX));
  /* 1257a62f call 0x1256d350 */
  push32(0x1257a634u); f_1256d350();
  /* 1257a634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a637 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1257a63a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a63d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a640 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a642 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1257a645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a648 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1257a64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a64e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1257a654 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257a657 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257a659 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a65b not edx */
  EDX = (~(EDX));
  /* 1257a65d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1257a660 push edx */
  push32((uint32_t)(EDX));
  /* 1257a661 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a664 push eax */
  push32((uint32_t)(EAX));
  /* 1257a665 call dword ptr [0x125992dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992dc))), 0x1257a66bu);
  /* 1257a66b push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a66d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a670 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a671 call 0x1256ae30 */
  push32(0x1257a676u); f_1256ae30();
  /* 1257a676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1257a679:;
  /* 1257a679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257a67b:;
  /* 1257a67b pop esi */
  ESI = (pop32());
  /* 1257a67c mov esp, ebp */
  ESP = (EBP);
  /* 1257a67e pop ebp */
  EBP = (pop32());
  /* 1257a67f ret  */
  ESPCHK(0x1257a3a0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x1257a680 (124 bytes, 47 insns) */
void f_1257a680(void) {
  FTRACE(0x1257a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a680 push ebp */
  push32((uint32_t)(EBP));
  /* 1257a681 mov ebp, esp */
  EBP = (ESP);
  /* 1257a683 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a684 mov eax, dword ptr [0x125969ec] */
  EAX = (r32((uint32_t)(0x125969ec)));
  /* 1257a689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257a68c jmp 0x1257a697 */
  goto L_1257a697;
L_1257a68e:;
  /* 1257a68e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a691 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a694 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1257a697:;
  /* 1257a697 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a69a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a69d je 0x1257a6ea */
  if (C.zf) goto L_1257a6ea;
  /* 1257a69f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a6a2 push eax */
  push32((uint32_t)(EAX));
  /* 1257a6a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a6a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257a6a8 push edx */
  push32((uint32_t)(EDX));
  /* 1257a6a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a6ac push eax */
  push32((uint32_t)(EAX));
  /* 1257a6ad call 0x12579e50 */
  push32(0x1257a6b2u); f_12579e50();
  /* 1257a6b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a6b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257a6b7 jne 0x1257a6e8 */
  if (!C.zf) goto L_1257a6e8;
  /* 1257a6b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a6bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257a6be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a6c1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 1257a6c5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a6c8 je 0x1257a6da */
  if (C.zf) goto L_1257a6da;
  /* 1257a6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a6cd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1257a6cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a6d2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 1257a6d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a6d8 jne 0x1257a6e8 */
  if (!C.zf) goto L_1257a6e8;
L_1257a6da:;
  /* 1257a6da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a6dd sub eax, dword ptr [0x125969ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125969ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a6e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1257a6e6 jmp 0x1257a6f8 */
  goto L_1257a6f8;
L_1257a6e8:;
  /* 1257a6e8 jmp 0x1257a68e */
  goto L_1257a68e;
L_1257a6ea:;
  /* 1257a6ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a6ed sub eax, dword ptr [0x125969ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125969ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a6f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1257a6f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1257a6f8:;
  /* 1257a6f8 mov esp, ebp */
  ESP = (EBP);
  /* 1257a6fa pop ebp */
  EBP = (pop32());
  /* 1257a6fb ret  */
  ESPCHK(0x1257a680u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x1257a700 (238 bytes, 80 insns) */
void f_1257a700(void) {
  FTRACE(0x1257a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a700 push ebp */
  push32((uint32_t)(EBP));
  /* 1257a701 mov ebp, esp */
  EBP = (ESP);
  /* 1257a703 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a706 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1257a70d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a710 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257a713 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a717 jne 0x1257a720 */
  if (!C.zf) goto L_1257a720;
  /* 1257a719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a71b jmp 0x1257a7ea */
  goto L_1257a7ea;
L_1257a720:;
  /* 1257a720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a723 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257a725 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a728 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a72b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1257a72e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a730 je 0x1257a73d */
  if (C.zf) goto L_1257a73d;
  /* 1257a732 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a735 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a738 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1257a73b jmp 0x1257a720 */
  goto L_1257a720;
L_1257a73d:;
  /* 1257a73d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 1257a742 push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a747 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a749 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257a74c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 1257a753 push eax */
  push32((uint32_t)(EAX));
  /* 1257a754 call 0x1256a3a0 */
  push32(0x1257a759u); f_1256a3a0();
  /* 1257a759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a75c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257a75f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a762 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1257a765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a769 jne 0x1257a775 */
  if (!C.zf) goto L_1257a775;
  /* 1257a76b push 9 */
  push32((uint32_t)(0x9u));
  /* 1257a76d call 0x12569310 */
  push32(0x1257a772u); f_12569310();
  /* 1257a772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1257a775:;
  /* 1257a775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a778 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1257a77b:;
  /* 1257a77b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a77e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a781 je 0x1257a7de */
  if (C.zf) goto L_1257a7de;
  /* 1257a783 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 1257a788 push 0x12592fd0 */
  push32((uint32_t)(0x12592fd0u));
  /* 1257a78d push 2 */
  push32((uint32_t)(0x2u));
  /* 1257a78f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a792 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1257a794 push edx */
  push32((uint32_t)(EDX));
  /* 1257a795 call 0x1256d1d0 */
  push32(0x1257a79au); f_1256d1d0();
  /* 1257a79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a79d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a7a0 push eax */
  push32((uint32_t)(EAX));
  /* 1257a7a1 call 0x1256a3a0 */
  push32(0x1257a7a6u); f_1256a3a0();
  /* 1257a7a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a7a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a7ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1257a7ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a7b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a7b4 je 0x1257a7ca */
  if (C.zf) goto L_1257a7ca;
  /* 1257a7b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a7b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1257a7bb push ecx */
  push32((uint32_t)(ECX));
  /* 1257a7bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a7bf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1257a7c1 push eax */
  push32((uint32_t)(EAX));
  /* 1257a7c2 call 0x1256d350 */
  push32(0x1257a7c7u); f_1256d350();
  /* 1257a7c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1257a7ca:;
  /* 1257a7ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257a7cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a7d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257a7d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a7d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a7d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1257a7dc jmp 0x1257a77b */
  goto L_1257a77b;
L_1257a7de:;
  /* 1257a7de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257a7e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1257a7e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1257a7ea:;
  /* 1257a7ea mov esp, ebp */
  ESP = (EBP);
  /* 1257a7ec pop ebp */
  EBP = (pop32());
  /* 1257a7ed ret  */
  ESPCHK(0x1257a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a7f0 @ 0x1257a7f0 (237 bytes, 81 insns) */
void f_1257a7f0(void) {
  FTRACE(0x1257a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1257a7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1257a7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a7f4 cmp dword ptr [0x1259812c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1259812c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a7fb jne 0x1257a812 */
  if (!C.zf) goto L_1257a812;
  /* 1257a7fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257a800 push eax */
  push32((uint32_t)(EAX));
  /* 1257a801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a804 push ecx */
  push32((uint32_t)(ECX));
  /* 1257a805 call 0x1257a8f0 */
  push32(0x1257a80au); f_1257a8f0();
  /* 1257a80a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a80d jmp 0x1257a8d9 */
  goto L_1257a8d9;
L_1257a812:;
  /* 1257a812 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257a814 call 0x1256dda0 */
  push32(0x1257a819u); f_1256dda0();
  /* 1257a819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a81c jmp 0x1257a827 */
  goto L_1257a827;
L_1257a81e:;
  /* 1257a81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a824 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1257a827:;
  /* 1257a827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a82a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1257a82e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1257a832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a835 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1257a83b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257a83d je 0x1257a8bb */
  if (C.zf) goto L_1257a8bb;
  /* 1257a83f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a842 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a847 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a849 mov cl, byte ptr [eax + 0x12598241] */
  CL = (r8((uint32_t)(EAX + 0x12598241)));
  /* 1257a84f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1257a852 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257a854 je 0x1257a8a6 */
  if (C.zf) goto L_1257a8a6;
  /* 1257a856 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a859 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a85c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1257a85f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a862 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a864 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1257a866 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257a868 jne 0x1257a878 */
  if (!C.zf) goto L_1257a878;
  /* 1257a86a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257a86c call 0x1256de40 */
  push32(0x1257a871u); f_1256de40();
  /* 1257a871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a876 jmp 0x1257a8d9 */
  goto L_1257a8d9;
L_1257a878:;
  /* 1257a878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a87b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1257a881 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1257a884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a887 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a889 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1257a88b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1257a88d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a890 jne 0x1257a8a4 */
  if (!C.zf) goto L_1257a8a4;
  /* 1257a892 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257a894 call 0x1256de40 */
  push32(0x1257a899u); f_1256de40();
  /* 1257a899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a89c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a89f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257a8a2 jmp 0x1257a8d9 */
  goto L_1257a8d9;
L_1257a8a4:;
  /* 1257a8a4 jmp 0x1257a8b6 */
  goto L_1257a8b6;
L_1257a8a6:;
  /* 1257a8a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a8a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1257a8af cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a8b2 jne 0x1257a8b6 */
  if (!C.zf) goto L_1257a8b6;
  /* 1257a8b4 jmp 0x1257a8bb */
  goto L_1257a8bb;
L_1257a8b6:;
  /* 1257a8b6 jmp 0x1257a81e */
  goto L_1257a81e;
L_1257a8bb:;
  /* 1257a8bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257a8bd call 0x1256de40 */
  push32(0x1257a8c2u); f_1256de40();
  /* 1257a8c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257a8c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a8cd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257a8d0 jne 0x1257a8d7 */
  if (!C.zf) goto L_1257a8d7;
  /* 1257a8d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257a8d5 jmp 0x1257a8d9 */
  goto L_1257a8d9;
L_1257a8d7:;
  /* 1257a8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257a8d9:;
  /* 1257a8d9 mov esp, ebp */
  ESP = (EBP);
  /* 1257a8db pop ebp */
  EBP = (pop32());
  /* 1257a8dc ret  */
  ESPCHK(0x1257a7f0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1257a8f0 (193 bytes, 87 insns) */
void f_1257a8f0(void) {
  FTRACE(0x1257a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257a8f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a8f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1257a8f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1257a8f7 mov ebx, eax */
  EBX = (EAX);
  /* 1257a8f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1257a8fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1257a900 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1257a906 je 0x1257a91b */
  if (C.zf) goto L_1257a91b;
L_1257a908:;
  /* 1257a908 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1257a90a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1257a90b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257a90d je 0x1257a8e0 */
  if (C.zf) { jmp_ind(0x1257a8e0u); return; }
  /* 1257a90f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1257a911 je 0x1257a964 */
  if (C.zf) goto L_1257a964;
  /* 1257a913 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1257a919 jne 0x1257a908 */
  if (!C.zf) goto L_1257a908;
L_1257a91b:;
  /* 1257a91b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1257a91d push edi */
  push32((uint32_t)(EDI));
  /* 1257a91e mov eax, ebx */
  EAX = (EBX);
  /* 1257a920 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1257a923 push esi */
  push32((uint32_t)(ESI));
  /* 1257a924 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1257a926:;
  /* 1257a926 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1257a928 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1257a92d mov eax, ecx */
  EAX = (ECX);
  /* 1257a92f mov esi, edi */
  ESI = (EDI);
  /* 1257a931 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1257a933 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a935 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a937 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1257a93a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257a93d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1257a93f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1257a941 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257a944 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1257a94a jne 0x1257a968 */
  if (!C.zf) goto L_1257a968;
  /* 1257a94c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1257a951 je 0x1257a926 */
  if (C.zf) goto L_1257a926;
  /* 1257a953 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1257a958 jne 0x1257a962 */
  if (!C.zf) goto L_1257a962;
  /* 1257a95a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1257a960 jne 0x1257a926 */
  if (!C.zf) goto L_1257a926;
L_1257a962:;
  /* 1257a962 pop esi */
  ESI = (pop32());
  /* 1257a963 pop edi */
  EDI = (pop32());
L_1257a964:;
  /* 1257a964 pop ebx */
  EBX = (pop32());
  /* 1257a965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257a967 ret  */
  ESPCHK(0x1257a8f0u, _esp0);
  ESP += 4; return;
L_1257a968:;
  /* 1257a968 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1257a96b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257a96d je 0x1257a9a5 */
  if (C.zf) goto L_1257a9a5;
  /* 1257a96f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1257a971 je 0x1257a962 */
  if (C.zf) goto L_1257a962;
  /* 1257a973 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257a975 je 0x1257a99e */
  if (C.zf) goto L_1257a99e;
  /* 1257a977 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1257a979 je 0x1257a962 */
  if (C.zf) goto L_1257a962;
  /* 1257a97b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1257a97e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257a980 je 0x1257a997 */
  if (C.zf) goto L_1257a997;
  /* 1257a982 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1257a984 je 0x1257a962 */
  if (C.zf) goto L_1257a962;
  /* 1257a986 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257a988 je 0x1257a990 */
  if (C.zf) goto L_1257a990;
  /* 1257a98a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1257a98c je 0x1257a962 */
  if (C.zf) goto L_1257a962;
  /* 1257a98e jmp 0x1257a926 */
  goto L_1257a926;
L_1257a990:;
  /* 1257a990 pop esi */
  ESI = (pop32());
  /* 1257a991 pop edi */
  EDI = (pop32());
  /* 1257a992 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1257a995 pop ebx */
  EBX = (pop32());
  /* 1257a996 ret  */
  ESPCHK(0x1257a8f0u, _esp0);
  ESP += 4; return;
L_1257a997:;
  /* 1257a997 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1257a99a pop esi */
  ESI = (pop32());
  /* 1257a99b pop edi */
  EDI = (pop32());
  /* 1257a99c pop ebx */
  EBX = (pop32());
  /* 1257a99d ret  */
  ESPCHK(0x1257a8f0u, _esp0);
  ESP += 4; return;
L_1257a99e:;
  /* 1257a99e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1257a9a1 pop esi */
  ESI = (pop32());
  /* 1257a9a2 pop edi */
  EDI = (pop32());
  /* 1257a9a3 pop ebx */
  EBX = (pop32());
  /* 1257a9a4 ret  */
  ESPCHK(0x1257a8f0u, _esp0);
  ESP += 4; return;
L_1257a9a5:;
  /* 1257a9a5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1257a9a8 pop esi */
  ESI = (pop32());
  /* 1257a9a9 pop edi */
  EDI = (pop32());
  /* 1257a9aa pop ebx */
  EBX = (pop32());
  /* 1257a9ab ret  */
  ESPCHK(0x1257a8f0u, _esp0);
  ESP += 4; return;
  /* 1257a9ac jmp dword ptr [0x12599398] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12599398)))); return;
}

/* RtlUnwind @ 0x1257aafc (6 bytes, 1 insns) */
void f_1257aafc(void) {
  FTRACE(0x1257aafcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1257aafc jmp dword ptr [0x12599314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12599314)))); return;
}

