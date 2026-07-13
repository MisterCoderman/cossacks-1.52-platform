#include "recomp.h"

/* FUN_10007170 @ 0x10e97170 (116 bytes, 34 insns) */
void f_10e97170(void) {
  FTRACE(0x10e97170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97170 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97171 mov ebp, esp */
  EBP = (ESP);
  /* 10e97173 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97174 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10e9717b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9717d call 0x10e96990 */
  push32(0x10e97182u); f_10e96990();
  /* 10e97182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97185 call 0x10e98880 */
  push32(0x10e9718au); f_10e98880();
  /* 10e9718a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9718c jge 0x10e97195 */
  if ((C.sf==C.of)) goto L_10e97195;
  /* 10e9718e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e97195:;
  /* 10e97195 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e97197 call 0x10e96a30 */
  push32(0x10e9719cu); f_10e96a30();
  /* 10e9719c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9719f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e971a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e971a3 mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e971a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e971a9 call dword ptr [0x10ec0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0350))), 0x10e971afu);
  /* 10e971af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e971b1 jne 0x10e971dd */
  if (!C.zf) goto L_10e971dd;
  /* 10e971b3 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e971b9u);
  /* 10e971b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e971bc jne 0x10e971d6 */
  if (!C.zf) goto L_10e971d6;
  /* 10e971be call 0x10e9ae70 */
  push32(0x10e971c3u); f_10e9ae70();
  /* 10e971c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10e971c9 call 0x10e9ae60 */
  push32(0x10e971ceu); f_10e9ae60();
  /* 10e971ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10e971d4 jmp 0x10e971dd */
  goto L_10e971dd;
L_10e971d6:;
  /* 10e971d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e971dd:;
  /* 10e971dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e971e0 mov esp, ebp */
  ESP = (EBP);
  /* 10e971e2 pop ebp */
  EBP = (pop32());
  /* 10e971e3 ret  */
  ESPCHK(0x10e97170u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x10e971f0 (10 bytes, 5 insns) */
void f_10e971f0(void) {
  FTRACE(0x10e971f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e971f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e971f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e971f3 call 0x10e97170 */
  push32(0x10e971f8u); f_10e97170();
  /* 10e971f8 pop ebp */
  EBP = (pop32());
  /* 10e971f9 ret  */
  ESPCHK(0x10e971f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x10e97200 (10 bytes, 5 insns) */
void f_10e97200(void) {
  FTRACE(0x10e97200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97200 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97201 mov ebp, esp */
  EBP = (ESP);
  /* 10e97203 mov eax, dword ptr [0x10ebcca4] */
  EAX = (r32((uint32_t)(0x10ebcca4)));
  /* 10e97208 pop ebp */
  EBP = (pop32());
  /* 10e97209 ret  */
  ESPCHK(0x10e97200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007210 @ 0x10e97210 (31 bytes, 11 insns) */
void f_10e97210(void) {
  FTRACE(0x10e97210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97210 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97211 mov ebp, esp */
  EBP = (ESP);
  /* 10e97213 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9721a jbe 0x10e97220 */
  if ((C.cf||C.zf)) goto L_10e97220;
  /* 10e9721c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9721e jmp 0x10e9722d */
  goto L_10e9722d;
L_10e97220:;
  /* 10e97220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97223 mov dword ptr [0x10ebcca4], eax */
  w32((uint32_t)(0x10ebcca4), (EAX));
  /* 10e97228 mov eax, 1 */
  EAX = (0x1u);
L_10e9722d:;
  /* 10e9722d pop ebp */
  EBP = (pop32());
  /* 10e9722e ret  */
  ESPCHK(0x10e97210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x10e97230 (89 bytes, 20 insns) */
void f_10e97230(void) {
  FTRACE(0x10e97230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97230 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97231 mov ebp, esp */
  EBP = (ESP);
  /* 10e97233 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10e97238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9723a mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e9723f push eax */
  push32((uint32_t)(EAX));
  /* 10e97240 call dword ptr [0x10ec038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec038c))), 0x10e97246u);
  /* 10e97246 mov dword ptr [0x10ebfe28], eax */
  w32((uint32_t)(0x10ebfe28), (EAX));
  /* 10e9724b cmp dword ptr [0x10ebfe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97252 jne 0x10e97258 */
  if (!C.zf) goto L_10e97258;
  /* 10e97254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97256 jmp 0x10e97287 */
  goto L_10e97287;
L_10e97258:;
  /* 10e97258 mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e9725e mov dword ptr [0x10ebfe1c], ecx */
  w32((uint32_t)(0x10ebfe1c), (ECX));
  /* 10e97264 mov dword ptr [0x10ebfe20], 0 */
  w32((uint32_t)(0x10ebfe20), (0x0u));
  /* 10e9726e mov dword ptr [0x10ebfe24], 0 */
  w32((uint32_t)(0x10ebfe24), (0x0u));
  /* 10e97278 mov dword ptr [0x10ebfe08], 0x10 */
  w32((uint32_t)(0x10ebfe08), (0x10u));
  /* 10e97282 mov eax, 1 */
  EAX = (0x1u);
L_10e97287:;
  /* 10e97287 pop ebp */
  EBP = (pop32());
  /* 10e97288 ret  */
  ESPCHK(0x10e97230u, _esp0);
  ESP += 4; return;
}

/* FUN_10007290 @ 0x10e97290 (85 bytes, 29 insns) */
void f_10e97290(void) {
  FTRACE(0x10e97290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97290 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97291 mov ebp, esp */
  EBP = (ESP);
  /* 10e97293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97296 mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e9729b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9729e mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e972a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e972a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e972a9 mov edx, dword ptr [0x10ebfe28] */
  EDX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e972af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e972b2:;
  /* 10e972b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e972b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e972b8 jae 0x10e972df */
  if (!C.cf) goto L_10e972df;
  /* 10e972ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e972bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e972c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e972c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e972c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e972cd jae 0x10e972d4 */
  if (!C.cf) goto L_10e972d4;
  /* 10e972cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e972d2 jmp 0x10e972e1 */
  goto L_10e972e1;
L_10e972d4:;
  /* 10e972d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e972d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e972da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e972dd jmp 0x10e972b2 */
  goto L_10e972b2;
L_10e972df:;
  /* 10e972df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e972e1:;
  /* 10e972e1 mov esp, ebp */
  ESP = (EBP);
  /* 10e972e3 pop ebp */
  EBP = (pop32());
  /* 10e972e4 ret  */
  ESPCHK(0x10e97290u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x10e972f0 (95 bytes, 33 insns) */
void f_10e972f0(void) {
  FTRACE(0x10e972f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e972f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e972f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e972f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e972f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e972f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e972fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e972ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e97302 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97305 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e97308 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9730b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97310 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97313 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97315 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97318 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e9731b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9731d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9731f jne 0x10e97341 */
  if (!C.zf) goto L_10e97341;
  /* 10e97321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97324 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e97327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e97329 jne 0x10e97341 */
  if (!C.zf) goto L_10e97341;
  /* 10e9732b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9732e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e97334 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97336 je 0x10e97341 */
  if (C.zf) goto L_10e97341;
  /* 10e97338 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10e9733f jmp 0x10e97348 */
  goto L_10e97348;
L_10e97341:;
  /* 10e97341 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e97348:;
  /* 10e97348 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9734b mov esp, ebp */
  ESP = (EBP);
  /* 10e9734d pop ebp */
  EBP = (pop32());
  /* 10e9734e ret  */
  ESPCHK(0x10e972f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x10e97350 (1485 bytes, 453 insns) */
void f_10e97350(void) {
  FTRACE(0x10e97350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97350 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97351 mov ebp, esp */
  EBP = (ESP);
  /* 10e97353 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97359 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9735c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10e9735f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97362 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e97365 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97368 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e9736b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9736e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10e97371 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e97374 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97377 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9737d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97380 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10e97387 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9738a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9738d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97390 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e97393 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e97396 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e97398 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9739b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e9739e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e973a1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e973a4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10e973a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e973aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e973ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e973af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e973b2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10e973b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e973b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e973bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e973be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e973c0 jne 0x10e974e8 */
  if (!C.zf) goto L_10e974e8;
  /* 10e973c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e973c9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e973cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e973cf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e973d2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e973d6 jbe 0x10e973df */
  if ((C.cf||C.zf)) goto L_10e973df;
  /* 10e973d8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e973df:;
  /* 10e973df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e973e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e973e5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e973e8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e973eb jne 0x10e974c1 */
  if (!C.zf) goto L_10e974c1;
  /* 10e973f1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e973f5 jae 0x10e97456 */
  if (!C.cf) goto L_10e97456;
  /* 10e973f7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e973fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e973ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97401 not eax */
  EAX = (~(EAX));
  /* 10e97403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97406 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97409 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e9740d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9740f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97412 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97415 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e97419 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9741c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9741f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e97422 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e97425 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97428 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9742b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e9742e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97431 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97434 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e97438 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9743a jne 0x10e97454 */
  if (!C.zf) goto L_10e97454;
  /* 10e9743c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97441 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97444 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97446 not eax */
  EAX = (~(EAX));
  /* 10e97448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9744b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9744d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9744f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97452 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e97454:;
  /* 10e97454 jmp 0x10e974c1 */
  goto L_10e974c1;
L_10e97456:;
  /* 10e97456 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97459 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9745c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97461 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97463 not edx */
  EDX = (~(EDX));
  /* 10e97465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97468 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9746b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e97472 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97477 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9747a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e97481 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97484 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97487 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e9748a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e9748d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97490 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97493 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e97496 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97499 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9749c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e974a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e974a2 jne 0x10e974c1 */
  if (!C.zf) goto L_10e974c1;
  /* 10e974a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e974a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e974aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e974af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e974b1 not edx */
  EDX = (~(EDX));
  /* 10e974b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e974b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e974b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e974bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e974be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e974c1:;
  /* 10e974c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e974c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e974c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e974ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e974cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e974d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e974d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e974d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e974d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e974dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e974df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e974e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e974e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10e974e8:;
  /* 10e974e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e974eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e974ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e974f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e974f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e974f8 jbe 0x10e97501 */
  if ((C.cf||C.zf)) goto L_10e97501;
  /* 10e974fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e97501:;
  /* 10e97501 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97504 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e97507 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97509 jne 0x10e97665 */
  if (!C.zf) goto L_10e97665;
  /* 10e9750f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e97512 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97515 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10e97518 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9751b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e9751e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97521 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e97524 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97528 jbe 0x10e97531 */
  if ((C.cf||C.zf)) goto L_10e97531;
  /* 10e9752a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10e97531:;
  /* 10e97531 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97534 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97537 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e9753a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9753d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e97540 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97543 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e97546 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9754a jbe 0x10e97553 */
  if ((C.cf||C.zf)) goto L_10e97553;
  /* 10e9754c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e97553:;
  /* 10e97553 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e97556 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97559 je 0x10e9765f */
  if (C.zf) goto L_10e9765f;
  /* 10e9755f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97562 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97565 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e97568 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9756b jne 0x10e97641 */
  if (!C.zf) goto L_10e97641;
  /* 10e97571 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97575 jae 0x10e975d6 */
  if (!C.cf) goto L_10e975d6;
  /* 10e97577 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e9757c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9757f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97581 not edx */
  EDX = (~(EDX));
  /* 10e97583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97586 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97589 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e9758d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9758f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97592 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97595 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e97599 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9759c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9759f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e975a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e975a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e975a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e975ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e975ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e975b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e975b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e975b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e975ba jne 0x10e975d4 */
  if (!C.zf) goto L_10e975d4;
  /* 10e975bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e975c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e975c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e975c6 not edx */
  EDX = (~(EDX));
  /* 10e975c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e975cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e975cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e975cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e975d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e975d4:;
  /* 10e975d4 jmp 0x10e97641 */
  goto L_10e97641;
L_10e975d6:;
  /* 10e975d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e975d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e975dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e975e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e975e3 not eax */
  EAX = (~(EAX));
  /* 10e975e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e975e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e975eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e975f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e975f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e975f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e975fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e97601 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97604 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97607 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e9760a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e9760d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97610 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97613 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e97616 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97619 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9761c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e97620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e97622 jne 0x10e97641 */
  if (!C.zf) goto L_10e97641;
  /* 10e97624 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e97627 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9762a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e9762f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97631 not eax */
  EAX = (~(EAX));
  /* 10e97633 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97636 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e97639 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9763b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9763e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e97641:;
  /* 10e97641 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97644 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e97647 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e9764a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9764d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e97650 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97653 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e97656 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97659 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e9765c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10e9765f:;
  /* 10e9765f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97662 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10e97665:;
  /* 10e97665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97668 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9766b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9766d jne 0x10e9767b */
  if (!C.zf) goto L_10e9767b;
  /* 10e9766f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e97672 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97675 je 0x10e9778b */
  if (C.zf) goto L_10e9778b;
L_10e9767b:;
  /* 10e9767b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9767e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97681 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e97684 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e97687 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9768a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9768d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e97690 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e97693 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e97696 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97699 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e9769c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9769f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e976a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e976a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e976a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e976ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e976ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e976b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e976b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e976b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e976ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e976bd jne 0x10e9778b */
  if (!C.zf) goto L_10e9778b;
  /* 10e976c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e976c7 jae 0x10e97724 */
  if (!C.cf) goto L_10e97724;
  /* 10e976c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e976cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e976cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e976d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e976d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e976d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e976dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e976df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e976e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e976e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e976e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e976ea jne 0x10e97702 */
  if (!C.zf) goto L_10e97702;
  /* 10e976ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e976f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e976f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e976f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e976f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e976fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e976fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97700 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e97702:;
  /* 10e97702 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97707 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9770a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e9770c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9770f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97712 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e97716 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e97718 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9771b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9771e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e97722 jmp 0x10e9778b */
  goto L_10e9778b;
L_10e97724:;
  /* 10e97724 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97727 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9772a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e9772e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97731 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97734 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e97737 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e9773a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e9773d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97740 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e97743 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e97745 jne 0x10e97762 */
  if (!C.zf) goto L_10e97762;
  /* 10e97747 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9774a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9774d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97752 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97757 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9775a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9775c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9775f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e97762:;
  /* 10e97762 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97765 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97768 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e9776d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e9776f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97772 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97775 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e9777c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9777e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97781 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e97784 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e9778b:;
  /* 10e9778b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9778e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97791 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e97793 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e97796 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97799 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9779c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10e9779f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e977a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e977a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e977a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e977aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e977ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e977af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e977b2 jne 0x10e97919 */
  if (!C.zf) goto L_10e97919;
  /* 10e977b8 cmp dword ptr [0x10ebfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e977bf je 0x10e97908 */
  if (C.zf) goto L_10e97908;
  /* 10e977c5 mov eax, dword ptr [0x10ebfe18] */
  EAX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e977ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e977cd mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e977d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e977d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e977d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e977db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e977e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e977e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e977e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e977e9 call dword ptr [0x10ec0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0374))), 0x10e977efu);
  /* 10e977ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e977f4 mov ecx, dword ptr [0x10ebfe18] */
  ECX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e977fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e977fc mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97801 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e97804 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e97806 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9780c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e9780f mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97814 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97817 mov edx, dword ptr [0x10ebfe18] */
  EDX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e9781d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e97828 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9782d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97830 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e97833 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e97836 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9783b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9783e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e97841 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97847 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e9784a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e9784e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97850 jne 0x10e97866 */
  if (!C.zf) goto L_10e97866;
  /* 10e97852 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97858 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e9785b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e9785d mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97863 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e97866:;
  /* 10e97866 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9786c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97870 jne 0x10e97908 */
  if (!C.zf) goto L_10e97908;
  /* 10e97876 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e9787b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9787d mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97882 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e97885 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97886 call dword ptr [0x10ec0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0374))), 0x10e9788cu);
  /* 10e9788c mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e97892 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e97895 push eax */
  push32((uint32_t)(EAX));
  /* 10e97896 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97898 mov ecx, dword ptr [0x10ebfe2c] */
  ECX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e9789e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9789f call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e978a5u);
  /* 10e978a5 mov edx, dword ptr [0x10ebfe24] */
  EDX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e978ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e978ae mov eax, dword ptr [0x10ebfe28] */
  EAX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e978b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e978b5 mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e978bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e978be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e978c0 push eax */
  push32((uint32_t)(EAX));
  /* 10e978c1 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e978c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e978ca push edx */
  push32((uint32_t)(EDX));
  /* 10e978cb mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e978d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e978d1 call 0x10e9ae80 */
  push32(0x10e978d6u); f_10e9ae80();
  /* 10e978d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e978d9 mov ecx, dword ptr [0x10ebfe24] */
  ECX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e978df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e978e2 mov dword ptr [0x10ebfe24], ecx */
  w32((uint32_t)(0x10ebfe24), (ECX));
  /* 10e978e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e978eb cmp edx, dword ptr [0x10ebfe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e978f1 jbe 0x10e978fc */
  if ((C.cf||C.zf)) goto L_10e978fc;
  /* 10e978f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e978f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e978f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e978fc:;
  /* 10e978fc mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e97902 mov dword ptr [0x10ebfe1c], ecx */
  w32((uint32_t)(0x10ebfe1c), (ECX));
L_10e97908:;
  /* 10e97908 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9790b mov dword ptr [0x10ebfe20], edx */
  w32((uint32_t)(0x10ebfe20), (EDX));
  /* 10e97911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97914 mov dword ptr [0x10ebfe18], eax */
  w32((uint32_t)(0x10ebfe18), (EAX));
L_10e97919:;
  /* 10e97919 mov esp, ebp */
  ESP = (EBP);
  /* 10e9791b pop ebp */
  EBP = (pop32());
  /* 10e9791c ret  */
  ESPCHK(0x10e97350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x10e97920 (1334 bytes, 427 insns) */
void f_10e97920(void) {
  FTRACE(0x10e97920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97920 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97921 mov ebp, esp */
  EBP = (ESP);
  /* 10e97923 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97926 push esi */
  push32((uint32_t)(ESI));
  /* 10e97927 mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e9792c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9792f mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e97935 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97937 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e9793a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9793d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97940 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e97943 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e97946 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97949 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e9794c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9794f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e97952 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97956 jge 0x10e9796c */
  if ((C.sf==C.of)) goto L_10e9796c;
  /* 10e97958 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9795b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9795e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97960 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e97963 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10e9796a jmp 0x10e97981 */
  goto L_10e97981;
L_10e9796c:;
  /* 10e9796c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e97973 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97976 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97979 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9797c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e9797e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10e97981:;
  /* 10e97981 mov ecx, dword ptr [0x10ebfe1c] */
  ECX = (r32((uint32_t)(0x10ebfe1c)));
  /* 10e97987 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e9798a:;
  /* 10e9798a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9798d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97990 jae 0x10e979b6 */
  if (!C.cf) goto L_10e979b6;
  /* 10e97992 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97995 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97998 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10e9799a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9799d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e979a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10e979a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e979a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e979a7 je 0x10e979ab */
  if (C.zf) goto L_10e979ab;
  /* 10e979a9 jmp 0x10e979b6 */
  goto L_10e979b6;
L_10e979ab:;
  /* 10e979ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e979b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e979b4 jmp 0x10e9798a */
  goto L_10e9798a;
L_10e979b6:;
  /* 10e979b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e979bc jne 0x10e97a9d */
  if (!C.zf) goto L_10e97a9d;
  /* 10e979c2 mov eax, dword ptr [0x10ebfe28] */
  EAX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e979c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e979ca:;
  /* 10e979ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979cd cmp ecx, dword ptr [0x10ebfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e979d3 jae 0x10e979f9 */
  if (!C.cf) goto L_10e979f9;
  /* 10e979d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e979db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10e979dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e979e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e979e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e979e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e979ea je 0x10e979ee */
  if (C.zf) goto L_10e979ee;
  /* 10e979ec jmp 0x10e979f9 */
  goto L_10e979f9;
L_10e979ee:;
  /* 10e979ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e979f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e979f7 jmp 0x10e979ca */
  goto L_10e979ca;
L_10e979f9:;
  /* 10e979f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e979fc cmp ecx, dword ptr [0x10ebfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a02 jne 0x10e97a9d */
  if (!C.zf) goto L_10e97a9d;
L_10e97a08:;
  /* 10e97a08 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a0b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a0e jae 0x10e97a26 */
  if (!C.cf) goto L_10e97a26;
  /* 10e97a10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a17 je 0x10e97a1b */
  if (C.zf) goto L_10e97a1b;
  /* 10e97a19 jmp 0x10e97a26 */
  goto L_10e97a26;
L_10e97a1b:;
  /* 10e97a1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97a21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e97a24 jmp 0x10e97a08 */
  goto L_10e97a08;
L_10e97a26:;
  /* 10e97a26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a2c jne 0x10e97a77 */
  if (!C.zf) goto L_10e97a77;
  /* 10e97a2e mov eax, dword ptr [0x10ebfe28] */
  EAX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e97a33 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e97a36:;
  /* 10e97a36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a39 cmp ecx, dword ptr [0x10ebfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a3f jae 0x10e97a57 */
  if (!C.cf) goto L_10e97a57;
  /* 10e97a41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a44 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a48 je 0x10e97a4c */
  if (C.zf) goto L_10e97a4c;
  /* 10e97a4a jmp 0x10e97a57 */
  goto L_10e97a57;
L_10e97a4c:;
  /* 10e97a4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a4f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97a52 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e97a55 jmp 0x10e97a36 */
  goto L_10e97a36;
L_10e97a57:;
  /* 10e97a57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a5a cmp ecx, dword ptr [0x10ebfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a60 jne 0x10e97a77 */
  if (!C.zf) goto L_10e97a77;
  /* 10e97a62 call 0x10e97e60 */
  push32(0x10e97a67u); f_10e97e60();
  /* 10e97a67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e97a6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a6e jne 0x10e97a77 */
  if (!C.zf) goto L_10e97a77;
  /* 10e97a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97a72 jmp 0x10e97e51 */
  goto L_10e97e51;
L_10e97a77:;
  /* 10e97a77 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a7a push edx */
  push32((uint32_t)(EDX));
  /* 10e97a7b call 0x10e97f70 */
  push32(0x10e97a80u); f_10e97f70();
  /* 10e97a80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97a83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a86 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e97a89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e97a8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97a8e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97a91 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97a94 jne 0x10e97a9d */
  if (!C.zf) goto L_10e97a9d;
  /* 10e97a96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97a98 jmp 0x10e97e51 */
  goto L_10e97e51;
L_10e97a9d:;
  /* 10e97a9d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97aa0 mov dword ptr [0x10ebfe1c], edx */
  w32((uint32_t)(0x10ebfe1c), (EDX));
  /* 10e97aa6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97aa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97aac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10e97aaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97ab2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e97ab4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e97ab7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97abb je 0x10e97ae0 */
  if (C.zf) goto L_10e97ae0;
  /* 10e97abd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97ac0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97ac3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97ac6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10e97aca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97acd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97ad0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97ad3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e97ada or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10e97adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e97ade jne 0x10e97b15 */
  if (!C.zf) goto L_10e97b15;
L_10e97ae0:;
  /* 10e97ae0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10e97ae7:;
  /* 10e97ae7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97aea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97aed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97af0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e97af4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97af7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97afa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97afd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e97b04 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10e97b06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e97b08 jne 0x10e97b15 */
  if (!C.zf) goto L_10e97b15;
  /* 10e97b0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97b0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97b10 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e97b13 jmp 0x10e97ae7 */
  goto L_10e97ae7;
L_10e97b15:;
  /* 10e97b15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97b18 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e97b1e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97b21 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e97b28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e97b2b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e97b32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97b35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97b38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e97b3b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e97b3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e97b42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97b46 jne 0x10e97b62 */
  if (!C.zf) goto L_10e97b62;
  /* 10e97b48 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10e97b4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97b52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97b55 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e97b58 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e97b5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10e97b62:;
  /* 10e97b62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97b66 jl 0x10e97b7b */
  if ((C.sf!=C.of)) goto L_10e97b7b;
  /* 10e97b68 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e97b6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e97b6d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e97b70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97b73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97b76 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e97b79 jmp 0x10e97b62 */
  goto L_10e97b62;
L_10e97b7b:;
  /* 10e97b7b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97b81 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10e97b85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e97b88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97b8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e97b8d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97b90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e97b93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97b96 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e97b99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97b9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e97b9f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97ba3 jle 0x10e97bac */
  if ((C.zf||C.sf!=C.of)) goto L_10e97bac;
  /* 10e97ba5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10e97bac:;
  /* 10e97bac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97baf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97bb2 je 0x10e97dd0 */
  if (C.zf) goto L_10e97dd0;
  /* 10e97bb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97bbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97bbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e97bc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97bc4 jne 0x10e97c9a */
  if (!C.zf) goto L_10e97c9a;
  /* 10e97bca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97bce jge 0x10e97c2f */
  if ((C.sf==C.of)) goto L_10e97c2f;
  /* 10e97bd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97bd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97bd8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97bda not eax */
  EAX = (~(EAX));
  /* 10e97bdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97bdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97be2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e97be6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e97be8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97beb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97bee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e97bf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97bf5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97bf8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e97bfb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e97bfe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c01 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97c04 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e97c07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c0a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97c0d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e97c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e97c13 jne 0x10e97c2d */
  if (!C.zf) goto L_10e97c2d;
  /* 10e97c15 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97c1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97c1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97c1f not eax */
  EAX = (~(EAX));
  /* 10e97c21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e97c26 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e97c28 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97c2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e97c2d:;
  /* 10e97c2d jmp 0x10e97c9a */
  goto L_10e97c9a;
L_10e97c2f:;
  /* 10e97c2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97c32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97c35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97c3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97c3c not edx */
  EDX = (~(EDX));
  /* 10e97c3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97c41 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c44 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e97c4b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97c4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97c50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c53 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e97c5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97c60 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e97c63 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e97c66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c69 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97c6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e97c6f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97c72 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97c75 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e97c79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97c7b jne 0x10e97c9a */
  if (!C.zf) goto L_10e97c9a;
  /* 10e97c7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97c80 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97c83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97c88 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97c8a not edx */
  EDX = (~(EDX));
  /* 10e97c8c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97c8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e97c92 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e97c94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97c97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e97c9a:;
  /* 10e97c9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97c9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e97ca0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97ca3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e97ca6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e97ca9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e97caf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cb2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e97cb5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e97cb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97cbc je 0x10e97dd0 */
  if (C.zf) goto L_10e97dd0;
  /* 10e97cc2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97cc8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e97ccb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e97cce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97cd4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e97cd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e97cda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97ce0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e97ce3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97ce6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97ce9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e97cec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e97cf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cf5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e97cf8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97cfe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e97d01 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97d04 jne 0x10e97dd0 */
  if (!C.zf) goto L_10e97dd0;
  /* 10e97d0a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97d0e jge 0x10e97d6a */
  if ((C.sf==C.of)) goto L_10e97d6a;
  /* 10e97d10 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d13 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d16 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e97d1a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d1d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d20 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e97d23 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e97d25 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d28 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d2b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e97d2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97d30 jne 0x10e97d48 */
  if (!C.zf) goto L_10e97d48;
  /* 10e97d32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97d37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97d3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97d3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97d3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e97d41 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e97d43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97d46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e97d48:;
  /* 10e97d48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97d4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97d50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97d52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97d55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e97d5c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97d5e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97d61 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e97d68 jmp 0x10e97dd0 */
  goto L_10e97dd0;
L_10e97d6a:;
  /* 10e97d6a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d6d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d70 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e97d74 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d77 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d7a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e97d7d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e97d7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97d82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97d85 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e97d88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97d8a jne 0x10e97da7 */
  if (!C.zf) goto L_10e97da7;
  /* 10e97d8c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97d8f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97d92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e97d97 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e97d99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97d9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e97d9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e97da1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97da4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e97da7:;
  /* 10e97da7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e97daa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97dad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e97db2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e97db4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97db7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97dba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e97dc1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97dc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97dc6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97dc9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e97dd0:;
  /* 10e97dd0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97dd4 je 0x10e97dea */
  if (C.zf) goto L_10e97dea;
  /* 10e97dd6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97ddc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e97dde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97de1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97de4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97de7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e97dea:;
  /* 10e97dea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97ded add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97df0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e97df3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97df6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97df9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97dfc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e97dfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97e04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97e07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97e0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e97e0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97e10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e97e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97e15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e97e17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97e1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97e1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e97e1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e97e21 jne 0x10e97e43 */
  if (!C.zf) goto L_10e97e43;
  /* 10e97e23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97e26 cmp eax, dword ptr [0x10ebfe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97e2c jne 0x10e97e43 */
  if (!C.zf) goto L_10e97e43;
  /* 10e97e2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97e31 cmp ecx, dword ptr [0x10ebfe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97e37 jne 0x10e97e43 */
  if (!C.zf) goto L_10e97e43;
  /* 10e97e39 mov dword ptr [0x10ebfe20], 0 */
  w32((uint32_t)(0x10ebfe20), (0x0u));
L_10e97e43:;
  /* 10e97e43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e97e46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e97e49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e97e4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e97e4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e97e51:;
  /* 10e97e51 pop esi */
  ESI = (pop32());
  /* 10e97e52 mov esp, ebp */
  ESP = (EBP);
  /* 10e97e54 pop ebp */
  EBP = (pop32());
  /* 10e97e55 ret  */
  ESPCHK(0x10e97920u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10e97e60 (271 bytes, 78 insns) */
void f_10e97e60(void) {
  FTRACE(0x10e97e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e97e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97e64 mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e97e69 cmp eax, dword ptr [0x10ebfe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebfe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97e6f jne 0x10e97ebb */
  if (!C.zf) goto L_10e97ebb;
  /* 10e97e71 mov ecx, dword ptr [0x10ebfe08] */
  ECX = (r32((uint32_t)(0x10ebfe08)));
  /* 10e97e77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97e7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e97e7d push ecx */
  push32((uint32_t)(ECX));
  /* 10e97e7e mov edx, dword ptr [0x10ebfe28] */
  EDX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e97e84 push edx */
  push32((uint32_t)(EDX));
  /* 10e97e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97e87 mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e97e8c push eax */
  push32((uint32_t)(EAX));
  /* 10e97e8d call dword ptr [0x10ec0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0334))), 0x10e97e93u);
  /* 10e97e93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e97e96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97e9a jne 0x10e97ea3 */
  if (!C.zf) goto L_10e97ea3;
  /* 10e97e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97e9e jmp 0x10e97f6b */
  goto L_10e97f6b;
L_10e97ea3:;
  /* 10e97ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97ea6 mov dword ptr [0x10ebfe28], ecx */
  w32((uint32_t)(0x10ebfe28), (ECX));
  /* 10e97eac mov edx, dword ptr [0x10ebfe08] */
  EDX = (r32((uint32_t)(0x10ebfe08)));
  /* 10e97eb2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97eb5 mov dword ptr [0x10ebfe08], edx */
  w32((uint32_t)(0x10ebfe08), (EDX));
L_10e97ebb:;
  /* 10e97ebb mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e97ec0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e97ec3 mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e97ec9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97ecb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e97ece push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e97ed3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e97ed5 mov edx, dword ptr [0x10ebfe2c] */
  EDX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e97edb push edx */
  push32((uint32_t)(EDX));
  /* 10e97edc call dword ptr [0x10ec038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec038c))), 0x10e97ee2u);
  /* 10e97ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97ee5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10e97ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97eeb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97eef jne 0x10e97ef5 */
  if (!C.zf) goto L_10e97ef5;
  /* 10e97ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97ef3 jmp 0x10e97f6b */
  goto L_10e97f6b;
L_10e97ef5:;
  /* 10e97ef5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e97ef7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10e97efc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e97f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97f03 call dword ptr [0x10ec02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02dc))), 0x10e97f09u);
  /* 10e97f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e97f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97f16 jne 0x10e97f32 */
  if (!C.zf) goto L_10e97f32;
  /* 10e97f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97f1e push ecx */
  push32((uint32_t)(ECX));
  /* 10e97f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97f21 mov edx, dword ptr [0x10ebfe2c] */
  EDX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e97f27 push edx */
  push32((uint32_t)(EDX));
  /* 10e97f28 call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e97f2eu);
  /* 10e97f2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e97f30 jmp 0x10e97f6b */
  goto L_10e97f6b;
L_10e97f32:;
  /* 10e97f32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e97f3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e97f45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10e97f4f mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e97f54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97f57 mov dword ptr [0x10ebfe24], eax */
  w32((uint32_t)(0x10ebfe24), (EAX));
  /* 10e97f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97f5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e97f62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10e97f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e97f6b:;
  /* 10e97f6b mov esp, ebp */
  ESP = (EBP);
  /* 10e97f6d pop ebp */
  EBP = (pop32());
  /* 10e97f6e ret  */
  ESPCHK(0x10e97e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x10e97f70 (494 bytes, 149 insns) */
void f_10e97f70(void) {
  FTRACE(0x10e97f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97f71 mov ebp, esp */
  EBP = (ESP);
  /* 10e97f73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97f79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e97f7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e97f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97f82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e97f85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e97f88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10e97f8f:;
  /* 10e97f8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97f93 jl 0x10e97fa8 */
  if ((C.sf!=C.of)) goto L_10e97fa8;
  /* 10e97f95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97f98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e97f9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e97f9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97fa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97fa3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e97fa6 jmp 0x10e97f8f */
  goto L_10e97f8f;
L_10e97fa8:;
  /* 10e97fa8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97fab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e97fb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e97fb4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e97fbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e97fbe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e97fc5 jmp 0x10e97fd0 */
  goto L_10e97fd0;
L_10e97fc7:;
  /* 10e97fc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97fca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97fcd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e97fd0:;
  /* 10e97fd0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97fd4 jge 0x10e97ff6 */
  if ((C.sf==C.of)) goto L_10e97ff6;
  /* 10e97fd6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e97fd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97fdc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10e97fdf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e97fe2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97fe5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97fe8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e97feb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97fee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e97ff1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e97ff4 jmp 0x10e97fc7 */
  goto L_10e97fc7;
L_10e97ff6:;
  /* 10e97ff6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e97ff9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e97ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97fff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e98002 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98004 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e98007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e98009 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e9800e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e98013 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98016 push edx */
  push32((uint32_t)(EDX));
  /* 10e98017 call dword ptr [0x10ec02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02dc))), 0x10e9801du);
  /* 10e9801d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9801f jne 0x10e98029 */
  if (!C.zf) goto L_10e98029;
  /* 10e98021 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e98024 jmp 0x10e9815a */
  goto L_10e9815a;
L_10e98029:;
  /* 10e98029 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9802c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98031 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e98034 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98037 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9803a jmp 0x10e98048 */
  goto L_10e98048;
L_10e9803c:;
  /* 10e9803c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9803f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98045 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e98048:;
  /* 10e98048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9804b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9804e ja 0x10e980ad */
  if ((!C.cf&&!C.zf)) goto L_10e980ad;
  /* 10e98050 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98053 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10e9805a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9805d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10e98067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9806a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9806d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e98070 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98073 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e98079 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9807c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98082 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98085 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e98088 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9808b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98091 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98094 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e98097 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9809a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9809f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e980a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e980a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e980ab jmp 0x10e9803c */
  goto L_10e9803c;
L_10e980ad:;
  /* 10e980ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e980b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e980b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e980b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e980bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e980bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e980c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e980cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e980ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e980d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e980d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e980da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e980dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e980e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e980e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e980ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e980ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e980f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e980f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e980f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e980fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10e98103 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e98106 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98109 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10e98114 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98117 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10e9811b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9811e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10e98121 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e98124 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98127 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10e9812a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9812c jne 0x10e9813d */
  if (!C.zf) goto L_10e9813d;
  /* 10e9812e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98131 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98134 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e98137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9813a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e9813d:;
  /* 10e9813d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98142 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e98145 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98147 not edx */
  EDX = (~(EDX));
  /* 10e98149 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9814c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9814f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e98151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98154 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e98157 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10e9815a:;
  /* 10e9815a mov esp, ebp */
  ESP = (EBP);
  /* 10e9815c pop ebp */
  EBP = (pop32());
  /* 10e9815d ret  */
  ESPCHK(0x10e97f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008160 @ 0x10e98160 (1515 bytes, 489 insns) */
void f_10e98160(void) {
  FTRACE(0x10e98160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e98160 push ebp */
  push32((uint32_t)(EBP));
  /* 10e98161 mov ebp, esp */
  EBP = (ESP);
  /* 10e98163 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98166 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e98169 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9816c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e9816e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e98171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98174 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e98177 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e9817a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9817d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e98180 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98183 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e98186 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e98189 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e9818c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9818f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98192 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e98198 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9819b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e981a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e981a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e981a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e981ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e981ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e981b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e981b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e981b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e981b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e981bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e981bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e981c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e981c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e981c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e981ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e981cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e981d0 jle 0x10e98486 */
  if ((C.zf||C.sf!=C.of)) goto L_10e98486;
  /* 10e981d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e981d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e981dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e981de jne 0x10e981eb */
  if (!C.zf) goto L_10e981eb;
  /* 10e981e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e981e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e981e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e981e9 jle 0x10e981f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e981f2;
L_10e981eb:;
  /* 10e981eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e981ed jmp 0x10e98747 */
  goto L_10e98747;
L_10e981f2:;
  /* 10e981f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e981f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e981f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e981fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e981fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98202 jbe 0x10e9820b */
  if ((C.cf||C.zf)) goto L_10e9820b;
  /* 10e98204 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e9820b:;
  /* 10e9820b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9820e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98211 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98214 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98217 jne 0x10e982ed */
  if (!C.zf) goto L_10e982ed;
  /* 10e9821d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98221 jae 0x10e98282 */
  if (!C.cf) goto L_10e98282;
  /* 10e98223 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98228 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9822b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e9822d not edx */
  EDX = (~(EDX));
  /* 10e9822f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98232 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98235 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e98239 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9823b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9823e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98241 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e98245 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98248 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9824b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e9824e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e98251 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98254 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98257 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e9825a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9825d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98260 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e98264 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e98266 jne 0x10e98280 */
  if (!C.zf) goto L_10e98280;
  /* 10e98268 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e9826d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98270 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98272 not edx */
  EDX = (~(EDX));
  /* 10e98274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98277 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e98279 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9827b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9827e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e98280:;
  /* 10e98280 jmp 0x10e982ed */
  goto L_10e982ed;
L_10e98282:;
  /* 10e98282 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98285 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98288 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e9828d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e9828f not eax */
  EAX = (~(EAX));
  /* 10e98291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98294 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98297 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e9829e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e982a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e982a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e982a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e982ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e982b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e982b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e982b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e982b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e982bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e982bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e982c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e982c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e982c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e982cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e982ce jne 0x10e982ed */
  if (!C.zf) goto L_10e982ed;
  /* 10e982d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e982d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e982d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e982db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e982dd not eax */
  EAX = (~(EAX));
  /* 10e982df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e982e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e982e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e982e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e982ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e982ed:;
  /* 10e982ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e982f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e982f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e982f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e982f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e982fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e982ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e98302 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98305 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e98308 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e9830b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9830e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98311 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98314 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e98317 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9831b jle 0x10e98467 */
  if ((C.zf||C.sf!=C.of)) goto L_10e98467;
  /* 10e98321 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98324 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98327 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e9832a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9832d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e98330 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98333 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e98336 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9833a jbe 0x10e98343 */
  if ((C.cf||C.zf)) goto L_10e98343;
  /* 10e9833c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e98343:;
  /* 10e98343 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98346 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e98349 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e9834c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e9834f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98352 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98355 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98358 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e9835b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9835e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98361 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e98364 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98367 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9836a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e9836d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98370 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98373 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98376 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e98379 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9837c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9837f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98382 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98385 jne 0x10e98453 */
  if (!C.zf) goto L_10e98453;
  /* 10e9838b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9838f jae 0x10e983ec */
  if (!C.cf) goto L_10e983ec;
  /* 10e98391 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98394 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98397 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e9839b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9839e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e983a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e983a4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e983a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e983aa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e983ad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e983b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e983b2 jne 0x10e983ca */
  if (!C.zf) goto L_10e983ca;
  /* 10e983b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e983b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e983bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e983be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e983c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e983c3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e983c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e983c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e983ca:;
  /* 10e983ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e983cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e983d2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e983d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e983d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e983da mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e983de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e983e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e983e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e983e6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e983ea jmp 0x10e98453 */
  goto L_10e98453;
L_10e983ec:;
  /* 10e983ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e983ef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e983f2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e983f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e983f9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e983fc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e983ff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e98402 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98405 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98408 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e9840b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9840d jne 0x10e9842a */
  if (!C.zf) goto L_10e9842a;
  /* 10e9840f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98412 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98415 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e9841a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e9841c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9841f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e98422 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e98424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e9842a:;
  /* 10e9842a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9842d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98430 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e98435 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e98437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9843a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9843d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e98444 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e98446 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98449 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9844c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e98453:;
  /* 10e98453 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98456 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98459 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e9845b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9845e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98461 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98464 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10e98467:;
  /* 10e98467 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9846a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9846d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98470 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e98472 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e98475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98478 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9847b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9847e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e98481 jmp 0x10e98742 */
  goto L_10e98742;
L_10e98486:;
  /* 10e98486 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e98489 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9848c jge 0x10e98742 */
  if ((C.sf==C.of)) goto L_10e98742;
  /* 10e98492 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e98495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98498 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9849b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e9849d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e984a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e984a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e984a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e984a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10e984ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e984af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e984b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e984b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e984b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e984bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e984be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e984c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e984c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e984c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e984ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e984ce jbe 0x10e984d7 */
  if ((C.cf||C.zf)) goto L_10e984d7;
  /* 10e984d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e984d7:;
  /* 10e984d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e984da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e984dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e984df jne 0x10e98620 */
  if (!C.zf) goto L_10e98620;
  /* 10e984e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e984e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e984eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e984ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e984f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e984f5 jbe 0x10e984fe */
  if ((C.cf||C.zf)) goto L_10e984fe;
  /* 10e984f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e984fe:;
  /* 10e984fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98501 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98504 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98507 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9850a jne 0x10e985e0 */
  if (!C.zf) goto L_10e985e0;
  /* 10e98510 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98514 jae 0x10e98575 */
  if (!C.cf) goto L_10e98575;
  /* 10e98516 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e9851b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9851e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98520 not edx */
  EDX = (~(EDX));
  /* 10e98522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98525 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98528 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e9852c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9852e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98531 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98534 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e98538 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9853b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9853e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e98541 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e98544 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98547 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9854a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e9854d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98550 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98553 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e98557 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e98559 jne 0x10e98573 */
  if (!C.zf) goto L_10e98573;
  /* 10e9855b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98560 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98563 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98565 not edx */
  EDX = (~(EDX));
  /* 10e98567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9856a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9856c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9856e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98571 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e98573:;
  /* 10e98573 jmp 0x10e985e0 */
  goto L_10e985e0;
L_10e98575:;
  /* 10e98575 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e98578 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9857b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e98580 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e98582 not eax */
  EAX = (~(EAX));
  /* 10e98584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98587 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9858a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e98591 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e98593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98599 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e985a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e985a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e985a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e985a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e985ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e985af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e985b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e985b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e985b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e985bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e985bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e985c1 jne 0x10e985e0 */
  if (!C.zf) goto L_10e985e0;
  /* 10e985c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e985c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e985c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e985ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e985d0 not eax */
  EAX = (~(EAX));
  /* 10e985d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e985d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e985d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e985da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e985dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e985e0:;
  /* 10e985e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e985e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e985e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e985e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e985ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e985ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e985f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e985f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e985f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e985fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e985fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e98601 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98604 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e98607 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9860a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e9860d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98610 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e98613 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98617 jbe 0x10e98620 */
  if ((C.cf||C.zf)) goto L_10e98620;
  /* 10e98619 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e98620:;
  /* 10e98620 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98623 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e98626 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e98629 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e9862c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9862f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98632 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e98635 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e98638 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9863b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9863e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e98641 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98644 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98647 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e9864a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9864d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e98650 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98653 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e98656 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98659 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9865c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9865f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98662 jne 0x10e9872e */
  if (!C.zf) goto L_10e9872e;
  /* 10e98668 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9866c jae 0x10e986c8 */
  if (!C.cf) goto L_10e986c8;
  /* 10e9866e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98671 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98674 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e98678 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9867b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9867e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e98681 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e98683 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98686 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98689 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e9868c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9868e jne 0x10e986a6 */
  if (!C.zf) goto L_10e986a6;
  /* 10e98690 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e98695 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98698 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e9869a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9869d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9869f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e986a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e986a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e986a6:;
  /* 10e986a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e986ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e986ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e986b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e986b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e986b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e986ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e986bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e986bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e986c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e986c6 jmp 0x10e9872e */
  goto L_10e9872e;
L_10e986c8:;
  /* 10e986c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e986cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e986ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e986d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e986d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e986d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e986db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e986dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e986e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e986e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e986e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e986e8 jne 0x10e98705 */
  if (!C.zf) goto L_10e98705;
  /* 10e986ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e986ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e986f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e986f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e986f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e986fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e986fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e986ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98702 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e98705:;
  /* 10e98705 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98708 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9870b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98710 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98715 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98718 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e9871f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98721 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98724 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e98727 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e9872e:;
  /* 10e9872e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98731 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e98734 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e98736 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98739 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9873c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9873f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e98742:;
  /* 10e98742 mov eax, 1 */
  EAX = (0x1u);
L_10e98747:;
  /* 10e98747 mov esp, ebp */
  ESP = (EBP);
  /* 10e98749 pop ebp */
  EBP = (pop32());
  /* 10e9874a ret  */
  ESPCHK(0x10e98160u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x10e98750 (304 bytes, 79 insns) */
void f_10e98750(void) {
  FTRACE(0x10e98750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e98750 push ebp */
  push32((uint32_t)(EBP));
  /* 10e98751 mov ebp, esp */
  EBP = (ESP);
  /* 10e98753 push ecx */
  push32((uint32_t)(ECX));
  /* 10e98754 cmp dword ptr [0x10ebfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9875b je 0x10e9887c */
  if (C.zf) goto L_10e9887c;
  /* 10e98761 mov eax, dword ptr [0x10ebfe18] */
  EAX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e98766 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e98769 mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9876f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e98772 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98774 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e98777 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e9877c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e98781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98784 push eax */
  push32((uint32_t)(EAX));
  /* 10e98785 call dword ptr [0x10ec0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0374))), 0x10e9878bu);
  /* 10e9878b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98790 mov ecx, dword ptr [0x10ebfe18] */
  ECX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e98796 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98798 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9879d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e987a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e987a2 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e987ab mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e987b3 mov edx, dword ptr [0x10ebfe18] */
  EDX = (r32((uint32_t)(0x10ebfe18)));
  /* 10e987b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e987c4 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e987cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e987cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e987d2 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e987da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e987dd mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e987e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e987ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e987ec jne 0x10e98802 */
  if (!C.zf) goto L_10e98802;
  /* 10e987ee mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e987f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e987f9 mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e987ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e98802:;
  /* 10e98802 mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e98808 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9880c jne 0x10e98872 */
  if (!C.zf) goto L_10e98872;
  /* 10e9880e cmp dword ptr [0x10ebfe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98815 jle 0x10e98872 */
  if ((C.zf||C.sf!=C.of)) goto L_10e98872;
  /* 10e98817 mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9881c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9881f push ecx */
  push32((uint32_t)(ECX));
  /* 10e98820 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e98822 mov edx, dword ptr [0x10ebfe2c] */
  EDX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e98828 push edx */
  push32((uint32_t)(EDX));
  /* 10e98829 call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e9882fu);
  /* 10e9882f mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e98834 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e98837 mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e9883d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9883f mov edx, dword ptr [0x10ebfe20] */
  EDX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e98845 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98848 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9884a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9884b mov eax, dword ptr [0x10ebfe20] */
  EAX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e98850 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98853 push eax */
  push32((uint32_t)(EAX));
  /* 10e98854 mov ecx, dword ptr [0x10ebfe20] */
  ECX = (r32((uint32_t)(0x10ebfe20)));
  /* 10e9885a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9885b call 0x10e9ae80 */
  push32(0x10e98860u); f_10e9ae80();
  /* 10e98860 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98863 mov edx, dword ptr [0x10ebfe24] */
  EDX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e98869 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9886c mov dword ptr [0x10ebfe24], edx */
  w32((uint32_t)(0x10ebfe24), (EDX));
L_10e98872:;
  /* 10e98872 mov dword ptr [0x10ebfe20], 0 */
  w32((uint32_t)(0x10ebfe20), (0x0u));
L_10e9887c:;
  /* 10e9887c mov esp, ebp */
  ESP = (EBP);
  /* 10e9887e pop ebp */
  EBP = (pop32());
  /* 10e9887f ret  */
  ESPCHK(0x10e98750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x10e98880 (1565 bytes, 343 insns) */
void f_10e98880(void) {
  FTRACE(0x10e98880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e98880 push ebp */
  push32((uint32_t)(EBP));
  /* 10e98881 mov ebp, esp */
  EBP = (ESP);
  /* 10e98883 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98889 mov eax, dword ptr [0x10ebfe24] */
  EAX = (r32((uint32_t)(0x10ebfe24)));
  /* 10e9888e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e98891 push eax */
  push32((uint32_t)(EAX));
  /* 10e98892 mov ecx, dword ptr [0x10ebfe28] */
  ECX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e98898 push ecx */
  push32((uint32_t)(ECX));
  /* 10e98899 call dword ptr [0x10ec0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0348))), 0x10e9889fu);
  /* 10e9889f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e988a1 je 0x10e988ab */
  if (C.zf) goto L_10e988ab;
  /* 10e988a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e988a6 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e988ab:;
  /* 10e988ab mov edx, dword ptr [0x10ebfe28] */
  EDX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e988b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10e988b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10e988c1 jmp 0x10e988d2 */
  goto L_10e988d2;
L_10e988c3:;
  /* 10e988c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e988c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e988cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10e988d2:;
  /* 10e988d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e988d8 cmp ecx, dword ptr [0x10ebfe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e988de jge 0x10e98e97 */
  if ((C.sf==C.of)) goto L_10e98e97;
  /* 10e988e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e988ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e988ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10e988f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e988f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e988fe push ecx */
  push32((uint32_t)(ECX));
  /* 10e988ff call dword ptr [0x10ec0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0348))), 0x10e98905u);
  /* 10e98905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e98907 je 0x10e98913 */
  if (C.zf) goto L_10e98913;
  /* 10e98909 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e9890e jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98913:;
  /* 10e98913 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e98919 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e9891c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10e98922 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e98928 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9892e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e98931 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e98937 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9893a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9893d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10e98947 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10e98951 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e98958 jmp 0x10e98963 */
  goto L_10e98963;
L_10e9895a:;
  /* 10e9895a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9895d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e98963:;
  /* 10e98963 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98967 jge 0x10e98e5b */
  if ((C.sf==C.of)) goto L_10e98e5b;
  /* 10e9896d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10e98977 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10e98981 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10e9898b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10e98995 jmp 0x10e989a6 */
  goto L_10e989a6;
L_10e98997:;
  /* 10e98997 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e9899d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e989a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10e989a6:;
  /* 10e989a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e989ad jge 0x10e989c2 */
  if ((C.sf==C.of)) goto L_10e989c2;
  /* 10e989af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e989b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10e989c0 jmp 0x10e98997 */
  goto L_10e98997;
L_10e989c2:;
  /* 10e989c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e989c6 jl 0x10e98dfd */
  if ((C.sf!=C.of)) goto L_10e98dfd;
  /* 10e989cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e989d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e989d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e989d8 call dword ptr [0x10ec0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0348))), 0x10e989deu);
  /* 10e989de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e989e0 je 0x10e989ec */
  if (C.zf) goto L_10e989ec;
  /* 10e989e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10e989e7 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e989ec:;
  /* 10e989ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e989f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e989f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10e989ff jmp 0x10e98a10 */
  goto L_10e98a10;
L_10e98a01:;
  /* 10e98a01 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10e98a07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98a0a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10e98a10:;
  /* 10e98a10 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98a17 jge 0x10e98b94 */
  if ((C.sf==C.of)) goto L_10e98b94;
  /* 10e98a1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e98a20 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98a23 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10e98a29 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98a2f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98a35 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10e98a3b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98a41 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98a45 jne 0x10e98a52 */
  if (!C.zf) goto L_10e98a52;
  /* 10e98a47 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10e98a4d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98a50 je 0x10e98a5c */
  if (C.zf) goto L_10e98a5c;
L_10e98a52:;
  /* 10e98a52 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10e98a57 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98a5c:;
  /* 10e98a5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98a62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e98a64 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e98a6a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e98a70 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10e98a76 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10e98a7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e98a7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e98a81 je 0x10e98ab9 */
  if (C.zf) goto L_10e98ab9;
  /* 10e98a83 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e98a89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98a8c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e98a92 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98a9c jle 0x10e98aa8 */
  if ((C.zf||C.sf!=C.of)) goto L_10e98aa8;
  /* 10e98a9e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10e98aa3 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98aa8:;
  /* 10e98aa8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10e98aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98ab1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10e98ab7 jmp 0x10e98afb */
  goto L_10e98afb;
L_10e98ab9:;
  /* 10e98ab9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e98abf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e98ac2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98ac5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e98acb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ad2 jle 0x10e98ade */
  if ((C.zf||C.sf!=C.of)) goto L_10e98ade;
  /* 10e98ad4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e98ade:;
  /* 10e98ade mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e98ae4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10e98aeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98aee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e98af4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10e98afb:;
  /* 10e98afb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b02 jl 0x10e98b1d */
  if ((C.sf!=C.of)) goto L_10e98b1d;
  /* 10e98b04 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e98b0a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e98b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e98b0f jne 0x10e98b1d */
  if (!C.zf) goto L_10e98b1d;
  /* 10e98b11 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b1b jle 0x10e98b27 */
  if ((C.zf||C.sf!=C.of)) goto L_10e98b27;
L_10e98b1d:;
  /* 10e98b1d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10e98b22 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98b27:;
  /* 10e98b27 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98b2d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98b33 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e98b36 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b3c je 0x10e98b48 */
  if (C.zf) goto L_10e98b48;
  /* 10e98b3e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e98b43 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98b48:;
  /* 10e98b48 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98b4e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98b54 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e98b5a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98b60 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b66 jb 0x10e98a5c */
  if (C.cf) goto L_10e98a5c;
  /* 10e98b6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98b72 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b78 je 0x10e98b84 */
  if (C.zf) goto L_10e98b84;
  /* 10e98b7a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e98b7f jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98b84:;
  /* 10e98b84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e98b87 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98b8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e98b8f jmp 0x10e98a01 */
  goto L_10e98a01;
L_10e98b94:;
  /* 10e98b94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98b97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e98b99 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98b9f je 0x10e98bab */
  if (C.zf) goto L_10e98bab;
  /* 10e98ba1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10e98ba6 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98bab:;
  /* 10e98bab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98bae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10e98bb4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e98bbb jmp 0x10e98bc6 */
  goto L_10e98bc6;
L_10e98bbd:;
  /* 10e98bbd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98bc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98bc3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e98bc6:;
  /* 10e98bc6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98bca jge 0x10e98dfd */
  if ((C.sf==C.of)) goto L_10e98dfd;
  /* 10e98bd0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10e98bda mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e98be0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10e98be6:;
  /* 10e98be6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98bec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e98bef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10e98bf5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98bfb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c01 je 0x10e98d2a */
  if (C.zf) goto L_10e98d2a;
  /* 10e98c07 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98c0a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e98c10 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c17 je 0x10e98d2a */
  if (C.zf) goto L_10e98d2a;
  /* 10e98c1d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98c23 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c29 jb 0x10e98c3e */
  if (C.cf) goto L_10e98c3e;
  /* 10e98c2b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e98c31 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98c36 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c3c jb 0x10e98c48 */
  if (C.cf) goto L_10e98c48;
L_10e98c3e:;
  /* 10e98c3e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10e98c43 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98c48:;
  /* 10e98c48 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98c4e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e98c54 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10e98c5a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10e98c60 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98c63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e98c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98c69 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98c6e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10e98c74:;
  /* 10e98c74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98c77 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c7d je 0x10e98c9e */
  if (C.zf) goto L_10e98c9e;
  /* 10e98c7f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98c82 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98c88 jne 0x10e98c8c */
  if (!C.zf) goto L_10e98c8c;
  /* 10e98c8a jmp 0x10e98c9e */
  goto L_10e98c9e;
L_10e98c8c:;
  /* 10e98c8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98c8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e98c91 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10e98c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98c97 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98c99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e98c9c jmp 0x10e98c74 */
  goto L_10e98c74;
L_10e98c9e:;
  /* 10e98c9e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e98ca1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ca7 jne 0x10e98cb3 */
  if (!C.zf) goto L_10e98cb3;
  /* 10e98ca9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10e98cae jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98cb3:;
  /* 10e98cb3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98cb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e98cbb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e98cbe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98cc1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e98cc7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98cce jle 0x10e98cda */
  if ((C.zf||C.sf!=C.of)) goto L_10e98cda;
  /* 10e98cd0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e98cda:;
  /* 10e98cda mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e98ce0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ce3 je 0x10e98cef */
  if (C.zf) goto L_10e98cef;
  /* 10e98ce5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10e98cea jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98cef:;
  /* 10e98cef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98cf5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e98cf8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98cfe je 0x10e98d0a */
  if (C.zf) goto L_10e98d0a;
  /* 10e98d00 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10e98d05 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98d0a:;
  /* 10e98d0a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e98d10 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e98d16 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e98d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98d1f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10e98d25 jmp 0x10e98be6 */
  goto L_10e98be6;
L_10e98d2a:;
  /* 10e98d2a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98d31 je 0x10e98da1 */
  if (C.zf) goto L_10e98da1;
  /* 10e98d33 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98d37 jge 0x10e98d6b */
  if ((C.sf==C.of)) goto L_10e98d6b;
  /* 10e98d39 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98d3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98d41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98d43 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e98d49 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98d4b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10e98d51 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98d56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98d59 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98d5b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e98d61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98d63 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10e98d69 jmp 0x10e98da1 */
  goto L_10e98da1;
L_10e98d6b:;
  /* 10e98d6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98d6e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98d71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98d76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98d78 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e98d7e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98d80 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10e98d86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98d89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98d8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e98d91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e98d93 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e98d99 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98d9b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10e98da1:;
  /* 10e98da1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e98da7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98daa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98db0 jne 0x10e98dc4 */
  if (!C.zf) goto L_10e98dc4;
  /* 10e98db2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e98db5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e98dbb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98dc2 je 0x10e98dce */
  if (C.zf) goto L_10e98dce;
L_10e98dc4:;
  /* 10e98dc4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10e98dc9 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98dce:;
  /* 10e98dce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e98dd4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e98dd7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ddd je 0x10e98de9 */
  if (C.zf) goto L_10e98de9;
  /* 10e98ddf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10e98de4 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98de9:;
  /* 10e98de9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e98def add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98df2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10e98df8 jmp 0x10e98bbd */
  goto L_10e98bbd;
L_10e98dfd:;
  /* 10e98dfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e98e00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e98e06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e98e0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98e10 jne 0x10e98e2a */
  if (!C.zf) goto L_10e98e2a;
  /* 10e98e12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e98e15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e98e1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e98e21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98e28 je 0x10e98e31 */
  if (C.zf) goto L_10e98e31;
L_10e98e2a:;
  /* 10e98e2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10e98e2f jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98e31:;
  /* 10e98e31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e98e37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98e3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10e98e43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e98e46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98e4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e98e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e98e51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e98e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e98e56 jmp 0x10e9895a */
  goto L_10e9895a;
L_10e98e5b:;
  /* 10e98e5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e98e61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e98e67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98e69 jne 0x10e98e7c */
  if (!C.zf) goto L_10e98e7c;
  /* 10e98e6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e98e71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e98e77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98e7a je 0x10e98e83 */
  if (C.zf) goto L_10e98e83;
L_10e98e7c:;
  /* 10e98e7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10e98e81 jmp 0x10e98e99 */
  goto L_10e98e99;
L_10e98e83:;
  /* 10e98e83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e98e89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98e8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10e98e92 jmp 0x10e988c3 */
  goto L_10e988c3;
L_10e98e97:;
  /* 10e98e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e98e99:;
  /* 10e98e99 mov esp, ebp */
  ESP = (EBP);
  /* 10e98e9b pop ebp */
  EBP = (pop32());
  /* 10e98e9c ret  */
  ESPCHK(0x10e98880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea0 @ 0x10e98ea0 (250 bytes, 92 insns) */
void f_10e98ea0(void) {
  FTRACE(0x10e98ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e98ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e98ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10e98ea3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e98ea7 push esi */
  push32((uint32_t)(ESI));
  /* 10e98ea8 push edi */
  push32((uint32_t)(EDI));
  /* 10e98ea9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e98eac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e98eaf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e98eb2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e98eb5:;
  /* 10e98eb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98eb9 jne 0x10e98ed9 */
  if (!C.zf) goto L_10e98ed9;
  /* 10e98ebb push 0x10eb9e2c */
  push32((uint32_t)(0x10eb9e2cu));
  /* 10e98ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e98ec2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e98ec4 push 0x10eb9e20 */
  push32((uint32_t)(0x10eb9e20u));
  /* 10e98ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e98ecb call 0x10e92050 */
  push32(0x10e98ed0u); f_10e92050();
  /* 10e98ed0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98ed3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ed6 jne 0x10e98ed9 */
  if (!C.zf) goto L_10e98ed9;
  /* 10e98ed8 int3  */
  x86_unimpl("int3 @ 0x10e98ed8");
L_10e98ed9:;
  /* 10e98ed9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e98edb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e98edd jne 0x10e98eb5 */
  if (!C.zf) goto L_10e98eb5;
L_10e98edf:;
  /* 10e98edf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98ee3 jne 0x10e98f03 */
  if (!C.zf) goto L_10e98f03;
  /* 10e98ee5 push 0x10eb9e10 */
  push32((uint32_t)(0x10eb9e10u));
  /* 10e98eea push 0 */
  push32((uint32_t)(0x0u));
  /* 10e98eec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e98eee push 0x10eb9e20 */
  push32((uint32_t)(0x10eb9e20u));
  /* 10e98ef3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e98ef5 call 0x10e92050 */
  push32(0x10e98efau); f_10e92050();
  /* 10e98efa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98efd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98f00 jne 0x10e98f03 */
  if (!C.zf) goto L_10e98f03;
  /* 10e98f02 int3  */
  x86_unimpl("int3 @ 0x10e98f02");
L_10e98f03:;
  /* 10e98f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e98f07 jne 0x10e98edf */
  if (!C.zf) goto L_10e98edf;
  /* 10e98f09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e98f13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98f19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e98f1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98f22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e98f24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10e98f2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e98f31 push ecx */
  push32((uint32_t)(ECX));
  /* 10e98f32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e98f35 push edx */
  push32((uint32_t)(EDX));
  /* 10e98f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f39 push eax */
  push32((uint32_t)(EAX));
  /* 10e98f3a call 0x10e99f20 */
  push32(0x10e98f3fu); f_10e99f20();
  /* 10e98f3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98f42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e98f45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e98f4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98f4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e98f54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98f5b jl 0x10e98f7f */
  if ((C.sf!=C.of)) goto L_10e98f7f;
  /* 10e98f5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e98f62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e98f65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e98f67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e98f6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e98f70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e98f75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98f78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e98f7d jmp 0x10e98f90 */
  goto L_10e98f90;
L_10e98f7f:;
  /* 10e98f7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e98f82 push edx */
  push32((uint32_t)(EDX));
  /* 10e98f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e98f85 call 0x10e99ca0 */
  push32(0x10e98f8au); f_10e99ca0();
  /* 10e98f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98f8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e98f90:;
  /* 10e98f90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e98f93 pop edi */
  EDI = (pop32());
  /* 10e98f94 pop esi */
  ESI = (pop32());
  /* 10e98f95 pop ebx */
  EBX = (pop32());
  /* 10e98f96 mov esp, ebp */
  ESP = (EBP);
  /* 10e98f98 pop ebp */
  EBP = (pop32());
  /* 10e98f99 ret  */
  ESPCHK(0x10e98ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x10e98fa0 (183 bytes, 58 insns) */
void f_10e98fa0(void) {
  FTRACE(0x10e98fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e98fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e98fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10e98fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e98fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e98fac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e98fb1 ja 0x10e98fca */
  if ((!C.cf&&!C.zf)) goto L_10e98fca;
  /* 10e98fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98fb6 mov edx, dword ptr [0x10ebcca8] */
  EDX = (r32((uint32_t)(0x10ebcca8)));
  /* 10e98fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98fbe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e98fc2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10e98fc5 jmp 0x10e99053 */
  goto L_10e99053;
L_10e98fca:;
  /* 10e98fca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98fcd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e98fd0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e98fd6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e98fdc mov edx, dword ptr [0x10ebcca8] */
  EDX = (r32((uint32_t)(0x10ebcca8)));
  /* 10e98fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e98fe4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e98fe8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e98fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e98fef je 0x10e99013 */
  if (C.zf) goto L_10e99013;
  /* 10e98ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e98ff4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e98ff7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e98ffd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e99000 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e99003 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10e99006 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10e9900a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10e99011 jmp 0x10e99024 */
  goto L_10e99024;
L_10e99013:;
  /* 10e99013 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e99016 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10e99019 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10e9901d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e99024:;
  /* 10e99024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e99026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e99028 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9902a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e9902d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9902e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99031 push edx */
  push32((uint32_t)(EDX));
  /* 10e99032 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e99035 push eax */
  push32((uint32_t)(EAX));
  /* 10e99036 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e99038 call 0x10e9b1c0 */
  push32(0x10e9903du); f_10e9b1c0();
  /* 10e9903d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99042 jne 0x10e99048 */
  if (!C.zf) goto L_10e99048;
  /* 10e99044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99046 jmp 0x10e99053 */
  goto L_10e99053;
L_10e99048:;
  /* 10e99048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9904b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e99050 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10e99053:;
  /* 10e99053 mov esp, ebp */
  ESP = (EBP);
  /* 10e99055 pop ebp */
  EBP = (pop32());
  /* 10e99056 ret  */
  ESPCHK(0x10e98fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x10e99060 (836 bytes, 238 insns) */
void f_10e99060(void) {
  FTRACE(0x10e99060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99060 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99061 mov ebp, esp */
  EBP = (ESP);
  /* 10e99063 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99066 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e99068 call 0x10e96990 */
  push32(0x10e9906du); f_10e96990();
  /* 10e9906d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99073 push eax */
  push32((uint32_t)(EAX));
  /* 10e99074 call 0x10e993b0 */
  push32(0x10e99079u); f_10e993b0();
  /* 10e99079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9907c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e9907f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99082 cmp ecx, dword ptr [0x10ebfb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99088 jne 0x10e9909b */
  if (!C.zf) goto L_10e9909b;
  /* 10e9908a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e9908c call 0x10e96a30 */
  push32(0x10e99091u); f_10e96a30();
  /* 10e99091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99096 jmp 0x10e993a0 */
  goto L_10e993a0;
L_10e9909b:;
  /* 10e9909b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9909f jne 0x10e990bc */
  if (!C.zf) goto L_10e990bc;
  /* 10e990a1 call 0x10e99490 */
  push32(0x10e990a6u); f_10e99490();
  /* 10e990a6 call 0x10e99510 */
  push32(0x10e990abu); f_10e99510();
  /* 10e990ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e990ad call 0x10e96a30 */
  push32(0x10e990b2u); f_10e96a30();
  /* 10e990b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e990b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e990b7 jmp 0x10e993a0 */
  goto L_10e993a0;
L_10e990bc:;
  /* 10e990bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e990c3 jmp 0x10e990ce */
  goto L_10e990ce;
L_10e990c5:;
  /* 10e990c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e990c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e990cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e990ce:;
  /* 10e990ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e990d2 jae 0x10e9921f */
  if (!C.cf) goto L_10e9921f;
  /* 10e990d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e990db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e990de mov ecx, dword ptr [eax + 0x10ebcec8] */
  ECX = (r32((uint32_t)(EAX + 0x10ebcec8)));
  /* 10e990e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e990e7 jne 0x10e9921a */
  if (!C.zf) goto L_10e9921a;
  /* 10e990ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e990f4 jmp 0x10e990ff */
  goto L_10e990ff;
L_10e990f6:;
  /* 10e990f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e990f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e990fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e990ff:;
  /* 10e990ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99106 jae 0x10e99114 */
  if (!C.cf) goto L_10e99114;
  /* 10e99108 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9910b mov byte ptr [eax + 0x10ebfd00], 0 */
  w8((uint32_t)(EAX + 0x10ebfd00), (0x0u));
  /* 10e99112 jmp 0x10e990f6 */
  goto L_10e990f6;
L_10e99114:;
  /* 10e99114 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9911b jmp 0x10e99126 */
  goto L_10e99126;
L_10e9911d:;
  /* 10e9911d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99120 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99123 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e99126:;
  /* 10e99126 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9912a jae 0x10e991a7 */
  if (!C.cf) goto L_10e991a7;
  /* 10e9912c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9912f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e99132 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99135 lea ecx, [edx + eax*8 + 0x10ebced8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10ebced8));
  /* 10e9913c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9913f jmp 0x10e9914a */
  goto L_10e9914a;
L_10e99141:;
  /* 10e99141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99144 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99147 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e9914a:;
  /* 10e9914a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9914d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9914f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e99151 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e99153 je 0x10e991a2 */
  if (C.zf) goto L_10e991a2;
  /* 10e99155 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9915a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e9915d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9915f je 0x10e991a2 */
  if (C.zf) goto L_10e991a2;
  /* 10e99161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99164 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e99168 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e9916b jmp 0x10e99176 */
  goto L_10e99176;
L_10e9916d:;
  /* 10e9916d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99170 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99173 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e99176:;
  /* 10e99176 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99179 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9917b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e9917e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99181 ja 0x10e991a0 */
  if ((!C.cf&&!C.zf)) goto L_10e991a0;
  /* 10e99183 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99189 mov dl, byte ptr [eax + 0x10ebfd01] */
  DL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e9918f or dl, byte ptr [ecx + 0x10ebcec0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10ebcec0))); DL = (_r); fl_logic(_r,8); }
  /* 10e99195 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99198 mov byte ptr [eax + 0x10ebfd01], dl */
  w8((uint32_t)(EAX + 0x10ebfd01), (DL));
  /* 10e9919e jmp 0x10e9916d */
  goto L_10e9916d;
L_10e991a0:;
  /* 10e991a0 jmp 0x10e99141 */
  goto L_10e99141;
L_10e991a2:;
  /* 10e991a2 jmp 0x10e9911d */
  goto L_10e9911d;
L_10e991a7:;
  /* 10e991a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e991aa mov dword ptr [0x10ebfb64], ecx */
  w32((uint32_t)(0x10ebfb64), (ECX));
  /* 10e991b0 mov dword ptr [0x10ebfbec], 1 */
  w32((uint32_t)(0x10ebfbec), (0x1u));
  /* 10e991ba mov edx, dword ptr [0x10ebfb64] */
  EDX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e991c0 push edx */
  push32((uint32_t)(EDX));
  /* 10e991c1 call 0x10e99410 */
  push32(0x10e991c6u); f_10e99410();
  /* 10e991c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e991c9 mov dword ptr [0x10ebfe04], eax */
  w32((uint32_t)(0x10ebfe04), (EAX));
  /* 10e991ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e991d5 jmp 0x10e991e0 */
  goto L_10e991e0;
L_10e991d7:;
  /* 10e991d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e991da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e991dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e991e0:;
  /* 10e991e0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e991e4 jae 0x10e99204 */
  if (!C.cf) goto L_10e99204;
  /* 10e991e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e991e9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e991ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e991ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e991f2 mov cx, word ptr [ecx + eax*2 + 0x10ebcecc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10ebcecc)));
  /* 10e991fa mov word ptr [edx*2 + 0x10ebfbe0], cx */
  w16((uint32_t)(EDX*2 + 0x10ebfbe0), (CX));
  /* 10e99202 jmp 0x10e991d7 */
  goto L_10e991d7;
L_10e99204:;
  /* 10e99204 call 0x10e99510 */
  push32(0x10e99209u); f_10e99510();
  /* 10e99209 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e9920b call 0x10e96a30 */
  push32(0x10e99210u); f_10e96a30();
  /* 10e99210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99215 jmp 0x10e993a0 */
  goto L_10e993a0;
L_10e9921a:;
  /* 10e9921a jmp 0x10e990c5 */
  goto L_10e990c5;
L_10e9921f:;
  /* 10e9921f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10e99222 push edx */
  push32((uint32_t)(EDX));
  /* 10e99223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99226 push eax */
  push32((uint32_t)(EAX));
  /* 10e99227 call dword ptr [0x10ec02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d8))), 0x10e9922du);
  /* 10e9922d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99230 jne 0x10e99372 */
  if (!C.zf) goto L_10e99372;
  /* 10e99236 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e9923d jmp 0x10e99248 */
  goto L_10e99248;
L_10e9923f:;
  /* 10e9923f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99245 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e99248:;
  /* 10e99248 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9924f jae 0x10e9925d */
  if (!C.cf) goto L_10e9925d;
  /* 10e99251 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99254 mov byte ptr [edx + 0x10ebfd00], 0 */
  w8((uint32_t)(EDX + 0x10ebfd00), (0x0u));
  /* 10e9925b jmp 0x10e9923f */
  goto L_10e9923f;
L_10e9925d:;
  /* 10e9925d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99260 mov dword ptr [0x10ebfb64], eax */
  w32((uint32_t)(0x10ebfb64), (EAX));
  /* 10e99265 mov dword ptr [0x10ebfe04], 0 */
  w32((uint32_t)(0x10ebfe04), (0x0u));
  /* 10e9926f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99273 jbe 0x10e9932e */
  if ((C.cf||C.zf)) goto L_10e9932e;
  /* 10e99279 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10e9927c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e9927f jmp 0x10e9928a */
  goto L_10e9928a;
L_10e99281:;
  /* 10e99281 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e99284 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99287 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10e9928a:;
  /* 10e9928a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9928d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9928f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e99291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e99293 je 0x10e992dc */
  if (C.zf) goto L_10e992dc;
  /* 10e99295 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e99298 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9929a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e9929d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9929f je 0x10e992dc */
  if (C.zf) goto L_10e992dc;
  /* 10e992a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e992a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e992a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e992a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e992ab jmp 0x10e992b6 */
  goto L_10e992b6;
L_10e992ad:;
  /* 10e992ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e992b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e992b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e992b6:;
  /* 10e992b6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e992b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e992bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e992be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e992c1 ja 0x10e992da */
  if ((!C.cf&&!C.zf)) goto L_10e992da;
  /* 10e992c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e992c6 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e992cc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10e992cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e992d2 mov byte ptr [edx + 0x10ebfd01], cl */
  w8((uint32_t)(EDX + 0x10ebfd01), (CL));
  /* 10e992d8 jmp 0x10e992ad */
  goto L_10e992ad;
L_10e992da:;
  /* 10e992da jmp 0x10e99281 */
  goto L_10e99281;
L_10e992dc:;
  /* 10e992dc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10e992e3 jmp 0x10e992ee */
  goto L_10e992ee;
L_10e992e5:;
  /* 10e992e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e992e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e992eb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e992ee:;
  /* 10e992ee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e992f5 jae 0x10e9930e */
  if (!C.cf) goto L_10e9930e;
  /* 10e992f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e992fa mov dl, byte ptr [ecx + 0x10ebfd01] */
  DL = (r8((uint32_t)(ECX + 0x10ebfd01)));
  /* 10e99300 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e99303 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e99306 mov byte ptr [eax + 0x10ebfd01], dl */
  w8((uint32_t)(EAX + 0x10ebfd01), (DL));
  /* 10e9930c jmp 0x10e992e5 */
  goto L_10e992e5;
L_10e9930e:;
  /* 10e9930e mov ecx, dword ptr [0x10ebfb64] */
  ECX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e99314 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99315 call 0x10e99410 */
  push32(0x10e9931au); f_10e99410();
  /* 10e9931a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9931d mov dword ptr [0x10ebfe04], eax */
  w32((uint32_t)(0x10ebfe04), (EAX));
  /* 10e99322 mov dword ptr [0x10ebfbec], 1 */
  w32((uint32_t)(0x10ebfbec), (0x1u));
  /* 10e9932c jmp 0x10e99338 */
  goto L_10e99338;
L_10e9932e:;
  /* 10e9932e mov dword ptr [0x10ebfbec], 0 */
  w32((uint32_t)(0x10ebfbec), (0x0u));
L_10e99338:;
  /* 10e99338 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9933f jmp 0x10e9934a */
  goto L_10e9934a;
L_10e99341:;
  /* 10e99341 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99344 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99347 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e9934a:;
  /* 10e9934a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9934e jae 0x10e9935f */
  if (!C.cf) goto L_10e9935f;
  /* 10e99350 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99353 mov word ptr [eax*2 + 0x10ebfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x10ebfbe0), (0x0u));
  /* 10e9935d jmp 0x10e99341 */
  goto L_10e99341;
L_10e9935f:;
  /* 10e9935f call 0x10e99510 */
  push32(0x10e99364u); f_10e99510();
  /* 10e99364 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e99366 call 0x10e96a30 */
  push32(0x10e9936bu); f_10e96a30();
  /* 10e9936b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9936e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99370 jmp 0x10e993a0 */
  goto L_10e993a0;
L_10e99372:;
  /* 10e99372 cmp dword ptr [0x10ebe670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99379 je 0x10e99393 */
  if (C.zf) goto L_10e99393;
  /* 10e9937b call 0x10e99490 */
  push32(0x10e99380u); f_10e99490();
  /* 10e99380 call 0x10e99510 */
  push32(0x10e99385u); f_10e99510();
  /* 10e99385 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e99387 call 0x10e96a30 */
  push32(0x10e9938cu); f_10e96a30();
  /* 10e9938c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9938f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99391 jmp 0x10e993a0 */
  goto L_10e993a0;
L_10e99393:;
  /* 10e99393 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e99395 call 0x10e96a30 */
  push32(0x10e9939au); f_10e96a30();
  /* 10e9939a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9939d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e993a0:;
  /* 10e993a0 mov esp, ebp */
  ESP = (EBP);
  /* 10e993a2 pop ebp */
  EBP = (pop32());
  /* 10e993a3 ret  */
  ESPCHK(0x10e99060u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10e993b0 (89 bytes, 21 insns) */
void f_10e993b0(void) {
  FTRACE(0x10e993b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e993b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e993b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e993b3 mov dword ptr [0x10ebe670], 0 */
  w32((uint32_t)(0x10ebe670), (0x0u));
  /* 10e993bd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e993c1 jne 0x10e993d5 */
  if (!C.zf) goto L_10e993d5;
  /* 10e993c3 mov dword ptr [0x10ebe670], 1 */
  w32((uint32_t)(0x10ebe670), (0x1u));
  /* 10e993cd call dword ptr [0x10ec02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d0))), 0x10e993d3u);
  /* 10e993d3 jmp 0x10e99407 */
  goto L_10e99407;
L_10e993d5:;
  /* 10e993d5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e993d9 jne 0x10e993ed */
  if (!C.zf) goto L_10e993ed;
  /* 10e993db mov dword ptr [0x10ebe670], 1 */
  w32((uint32_t)(0x10ebe670), (0x1u));
  /* 10e993e5 call dword ptr [0x10ec02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d4))), 0x10e993ebu);
  /* 10e993eb jmp 0x10e99407 */
  goto L_10e99407;
L_10e993ed:;
  /* 10e993ed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e993f1 jne 0x10e99404 */
  if (!C.zf) goto L_10e99404;
  /* 10e993f3 mov dword ptr [0x10ebe670], 1 */
  w32((uint32_t)(0x10ebe670), (0x1u));
  /* 10e993fd mov eax, dword ptr [0x10ebe690] */
  EAX = (r32((uint32_t)(0x10ebe690)));
  /* 10e99402 jmp 0x10e99407 */
  goto L_10e99407;
L_10e99404:;
  /* 10e99404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10e99407:;
  /* 10e99407 pop ebp */
  EBP = (pop32());
  /* 10e99408 ret  */
  ESPCHK(0x10e993b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009410 @ 0x10e99410 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10e99410(void) {
  FTRACE(0x10e99410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99411 mov ebp, esp */
  EBP = (ESP);
  /* 10e99413 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99417 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9941a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9941d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99423 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e99426 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9942a ja 0x10e9945a */
  if ((!C.cf&&!C.zf)) goto L_10e9945a;
  /* 10e9942c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9942f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99431 mov dl, byte ptr [eax + 0x10e99474] */
  DL = (r8((uint32_t)(EAX + 0x10e99474)));
  /* 10e99437 jmp dword ptr [edx*4 + 0x10e99460] */
  switch (EDX) {
    case 0: goto L_10e9943e;
    case 1: goto L_10e99445;
    case 2: goto L_10e9944c;
    case 3: goto L_10e99453;
    case 4: goto L_10e9945a;
    default: x86_unimpl("switch@0x10e99437 out of table"); return;
  }
L_10e9943e:;
  /* 10e9943e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10e99443 jmp 0x10e9945c */
  goto L_10e9945c;
L_10e99445:;
  /* 10e99445 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10e9944a jmp 0x10e9945c */
  goto L_10e9945c;
L_10e9944c:;
  /* 10e9944c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10e99451 jmp 0x10e9945c */
  goto L_10e9945c;
L_10e99453:;
  /* 10e99453 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10e99458 jmp 0x10e9945c */
  goto L_10e9945c;
L_10e9945a:;
  /* 10e9945a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9945c:;
  /* 10e9945c mov esp, ebp */
  ESP = (EBP);
  /* 10e9945e pop ebp */
  EBP = (pop32());
  /* 10e9945f ret  */
  ESPCHK(0x10e99410u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10e99490 (116 bytes, 29 insns) */
void f_10e99490(void) {
  FTRACE(0x10e99490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99490 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99491 mov ebp, esp */
  EBP = (ESP);
  /* 10e99493 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9949b jmp 0x10e994a6 */
  goto L_10e994a6;
L_10e9949d:;
  /* 10e9949d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e994a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e994a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e994a6:;
  /* 10e994a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e994ad jge 0x10e994bb */
  if ((C.sf==C.of)) goto L_10e994bb;
  /* 10e994af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e994b2 mov byte ptr [ecx + 0x10ebfd00], 0 */
  w8((uint32_t)(ECX + 0x10ebfd00), (0x0u));
  /* 10e994b9 jmp 0x10e9949d */
  goto L_10e9949d;
L_10e994bb:;
  /* 10e994bb mov dword ptr [0x10ebfb64], 0 */
  w32((uint32_t)(0x10ebfb64), (0x0u));
  /* 10e994c5 mov dword ptr [0x10ebfbec], 0 */
  w32((uint32_t)(0x10ebfbec), (0x0u));
  /* 10e994cf mov dword ptr [0x10ebfe04], 0 */
  w32((uint32_t)(0x10ebfe04), (0x0u));
  /* 10e994d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e994e0 jmp 0x10e994eb */
  goto L_10e994eb;
L_10e994e2:;
  /* 10e994e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e994e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e994e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e994eb:;
  /* 10e994eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e994ef jge 0x10e99500 */
  if ((C.sf==C.of)) goto L_10e99500;
  /* 10e994f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e994f4 mov word ptr [eax*2 + 0x10ebfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x10ebfbe0), (0x0u));
  /* 10e994fe jmp 0x10e994e2 */
  goto L_10e994e2;
L_10e99500:;
  /* 10e99500 mov esp, ebp */
  ESP = (EBP);
  /* 10e99502 pop ebp */
  EBP = (pop32());
  /* 10e99503 ret  */
  ESPCHK(0x10e99490u, _esp0);
  ESP += 4; return;
}

/* FUN_10009510 @ 0x10e99510 (770 bytes, 175 insns) */
void f_10e99510(void) {
  FTRACE(0x10e99510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99510 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99511 mov ebp, esp */
  EBP = (ESP);
  /* 10e99513 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99519 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10e9951f push eax */
  push32((uint32_t)(EAX));
  /* 10e99520 mov ecx, dword ptr [0x10ebfb64] */
  ECX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e99526 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99527 call dword ptr [0x10ec02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d8))), 0x10e9952du);
  /* 10e9952d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99530 jne 0x10e99749 */
  if (!C.zf) goto L_10e99749;
  /* 10e99536 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e99540 jmp 0x10e99551 */
  goto L_10e99551;
L_10e99542:;
  /* 10e99542 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99548 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9954b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e99551:;
  /* 10e99551 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9955b jae 0x10e99572 */
  if (!C.cf) goto L_10e99572;
  /* 10e9955d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99563 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10e99569 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10e99570 jmp 0x10e99542 */
  goto L_10e99542;
L_10e99572:;
  /* 10e99572 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10e99579 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10e9957f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e99582 jmp 0x10e9958d */
  goto L_10e9958d;
L_10e99584:;
  /* 10e99584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e99587 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9958a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9958d:;
  /* 10e9958d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e99590 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99592 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e99594 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e99596 je 0x10e995d8 */
  if (C.zf) goto L_10e995d8;
  /* 10e99598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9959b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9959d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e9959f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10e995a5 jmp 0x10e995b6 */
  goto L_10e995b6;
L_10e995a7:;
  /* 10e995a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e995ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e995b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e995b6:;
  /* 10e995b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e995b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e995bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e995be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e995c4 ja 0x10e995d6 */
  if ((!C.cf&&!C.zf)) goto L_10e995d6;
  /* 10e995c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e995cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10e995d4 jmp 0x10e995a7 */
  goto L_10e995a7;
L_10e995d6:;
  /* 10e995d6 jmp 0x10e99584 */
  goto L_10e99584;
L_10e995d8:;
  /* 10e995d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e995da mov eax, dword ptr [0x10ebfe04] */
  EAX = (r32((uint32_t)(0x10ebfe04)));
  /* 10e995df push eax */
  push32((uint32_t)(EAX));
  /* 10e995e0 mov ecx, dword ptr [0x10ebfb64] */
  ECX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e995e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e995e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10e995ed push edx */
  push32((uint32_t)(EDX));
  /* 10e995ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e995f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e995f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e995fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e995fc call 0x10e9b1c0 */
  push32(0x10e99601u); f_10e9b1c0();
  /* 10e99601 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e99606 mov ecx, dword ptr [0x10ebfb64] */
  ECX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e9960c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9960d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e99612 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e99618 push edx */
  push32((uint32_t)(EDX));
  /* 10e99619 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9961e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e99624 push eax */
  push32((uint32_t)(EAX));
  /* 10e99625 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9962a mov ecx, dword ptr [0x10ebfe04] */
  ECX = (r32((uint32_t)(0x10ebfe04)));
  /* 10e99630 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99631 call 0x10e9b380 */
  push32(0x10e99636u); f_10e9b380();
  /* 10e99636 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99639 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9963b mov edx, dword ptr [0x10ebfb64] */
  EDX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e99641 push edx */
  push32((uint32_t)(EDX));
  /* 10e99642 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e99647 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10e9964d push eax */
  push32((uint32_t)(EAX));
  /* 10e9964e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e99653 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10e99659 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9965a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10e9965f mov edx, dword ptr [0x10ebfe04] */
  EDX = (r32((uint32_t)(0x10ebfe04)));
  /* 10e99665 push edx */
  push32((uint32_t)(EDX));
  /* 10e99666 call 0x10e9b380 */
  push32(0x10e9966bu); f_10e9b380();
  /* 10e9966b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9966e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e99678 jmp 0x10e99689 */
  goto L_10e99689;
L_10e9967a:;
  /* 10e9967a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99680 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99683 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e99689:;
  /* 10e99689 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99693 jae 0x10e99744 */
  if (!C.cf) goto L_10e99744;
  /* 10e99699 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e9969f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e996a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10e996a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e996ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e996ae je 0x10e996e6 */
  if (C.zf) goto L_10e996e6;
  /* 10e996b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e996b6 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e996bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10e996bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e996c5 mov byte ptr [edx + 0x10ebfd01], cl */
  w8((uint32_t)(EDX + 0x10ebfd01), (CL));
  /* 10e996cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e996d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e996d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10e996de mov byte ptr [eax + 0x10ebfc00], dl */
  w8((uint32_t)(EAX + 0x10ebfc00), (DL));
  /* 10e996e4 jmp 0x10e9973f */
  goto L_10e9973f;
L_10e996e6:;
  /* 10e996e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e996ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e996ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10e996f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e996f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e996fb je 0x10e99732 */
  if (C.zf) goto L_10e99732;
  /* 10e996fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99703 mov al, byte ptr [edx + 0x10ebfd01] */
  AL = (r8((uint32_t)(EDX + 0x10ebfd01)));
  /* 10e99709 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e9970b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99711 mov byte ptr [ecx + 0x10ebfd01], al */
  w8((uint32_t)(ECX + 0x10ebfd01), (AL));
  /* 10e99717 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e9971d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99723 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10e9972a mov byte ptr [edx + 0x10ebfc00], cl */
  w8((uint32_t)(EDX + 0x10ebfc00), (CL));
  /* 10e99730 jmp 0x10e9973f */
  goto L_10e9973f;
L_10e99732:;
  /* 10e99732 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99738 mov byte ptr [edx + 0x10ebfc00], 0 */
  w8((uint32_t)(EDX + 0x10ebfc00), (0x0u));
L_10e9973f:;
  /* 10e9973f jmp 0x10e9967a */
  goto L_10e9967a;
L_10e99744:;
  /* 10e99744 jmp 0x10e9980e */
  goto L_10e9980e;
L_10e99749:;
  /* 10e99749 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e99753 jmp 0x10e99764 */
  goto L_10e99764;
L_10e99755:;
  /* 10e99755 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e9975b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9975e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e99764:;
  /* 10e99764 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9976e jae 0x10e9980e */
  if (!C.cf) goto L_10e9980e;
  /* 10e99774 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9977b jb 0x10e997b8 */
  if (C.cf) goto L_10e997b8;
  /* 10e9977d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99784 ja 0x10e997b8 */
  if ((!C.cf&&!C.zf)) goto L_10e997b8;
  /* 10e99786 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e9978c mov dl, byte ptr [ecx + 0x10ebfd01] */
  DL = (r8((uint32_t)(ECX + 0x10ebfd01)));
  /* 10e99792 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e99795 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e9979b mov byte ptr [eax + 0x10ebfd01], dl */
  w8((uint32_t)(EAX + 0x10ebfd01), (DL));
  /* 10e997a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e997aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997b0 mov byte ptr [edx + 0x10ebfc00], cl */
  w8((uint32_t)(EDX + 0x10ebfc00), (CL));
  /* 10e997b6 jmp 0x10e99809 */
  goto L_10e99809;
L_10e997b8:;
  /* 10e997b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e997bf jb 0x10e997fc */
  if (C.cf) goto L_10e997fc;
  /* 10e997c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e997c8 ja 0x10e997fc */
  if ((!C.cf&&!C.zf)) goto L_10e997fc;
  /* 10e997ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997d0 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e997d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e997d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997df mov byte ptr [edx + 0x10ebfd01], cl */
  w8((uint32_t)(EDX + 0x10ebfd01), (CL));
  /* 10e997e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e997ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e997f4 mov byte ptr [ecx + 0x10ebfc00], al */
  w8((uint32_t)(ECX + 0x10ebfc00), (AL));
  /* 10e997fa jmp 0x10e99809 */
  goto L_10e99809;
L_10e997fc:;
  /* 10e997fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e99802 mov byte ptr [edx + 0x10ebfc00], 0 */
  w8((uint32_t)(EDX + 0x10ebfc00), (0x0u));
L_10e99809:;
  /* 10e99809 jmp 0x10e99755 */
  goto L_10e99755;
L_10e9980e:;
  /* 10e9980e mov esp, ebp */
  ESP = (EBP);
  /* 10e99810 pop ebp */
  EBP = (pop32());
  /* 10e99811 ret  */
  ESPCHK(0x10e99510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009820 @ 0x10e99820 (23 bytes, 9 insns) */
void f_10e99820(void) {
  FTRACE(0x10e99820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99820 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99821 mov ebp, esp */
  EBP = (ESP);
  /* 10e99823 cmp dword ptr [0x10ebfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9982a je 0x10e99833 */
  if (C.zf) goto L_10e99833;
  /* 10e9982c mov eax, dword ptr [0x10ebfb64] */
  EAX = (r32((uint32_t)(0x10ebfb64)));
  /* 10e99831 jmp 0x10e99835 */
  goto L_10e99835;
L_10e99833:;
  /* 10e99833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e99835:;
  /* 10e99835 pop ebp */
  EBP = (pop32());
  /* 10e99836 ret  */
  ESPCHK(0x10e99820u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x10e99840 (34 bytes, 10 insns) */
void f_10e99840(void) {
  FTRACE(0x10e99840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99840 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99841 mov ebp, esp */
  EBP = (ESP);
  /* 10e99843 cmp dword ptr [0x10ebffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9984a jne 0x10e99860 */
  if (!C.zf) goto L_10e99860;
  /* 10e9984c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10e9984e call 0x10e99060 */
  push32(0x10e99853u); f_10e99060();
  /* 10e99853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99856 mov dword ptr [0x10ebffb0], 1 */
  w32((uint32_t)(0x10ebffb0), (0x1u));
L_10e99860:;
  /* 10e99860 pop ebp */
  EBP = (pop32());
  /* 10e99861 ret  */
  ESPCHK(0x10e99840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009870 @ 0x10e99870 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10e99870(void) {
  FTRACE(0x10e99870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99870 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99871 mov ebp, esp */
  EBP = (ESP);
  /* 10e99873 push edi */
  push32((uint32_t)(EDI));
  /* 10e99874 push esi */
  push32((uint32_t)(ESI));
  /* 10e99875 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e99878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9987b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9987e mov eax, ecx */
  EAX = (ECX);
  /* 10e99880 mov edx, ecx */
  EDX = (ECX);
  /* 10e99882 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99884 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99886 jbe 0x10e99890 */
  if ((C.cf||C.zf)) goto L_10e99890;
  /* 10e99888 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9988a jb 0x10e99a08 */
  if (C.cf) goto L_10e99a08;
L_10e99890:;
  /* 10e99890 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e99896 jne 0x10e998ac */
  if (!C.zf) goto L_10e998ac;
  /* 10e99898 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9989b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9989e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e998a1 jb 0x10e998cc */
  if (C.cf) goto L_10e998cc;
  /* 10e998a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e998a5 jmp dword ptr [edx*4 + 0x10e999b8] */
  switch (EDX) {
    case 0: goto L_10e999c8;
    case 1: goto L_10e999d0;
    case 2: goto L_10e999dc;
    case 3: goto L_10e999f0;
    default: x86_unimpl("switch@0x10e998a5 out of table"); return;
  }
L_10e998ac:;
  /* 10e998ac mov eax, edi */
  EAX = (EDI);
  /* 10e998ae mov edx, 3 */
  EDX = (0x3u);
  /* 10e998b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e998b6 jb 0x10e998c4 */
  if (C.cf) goto L_10e998c4;
  /* 10e998b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e998bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e998bd jmp dword ptr [eax*4 + 0x10e998d0] */
  switch (EAX) {
    case 1: goto L_10e998e0;
    case 2: goto L_10e9990c;
    case 3: goto L_10e99930;
    default: x86_unimpl("switch@0x10e998bd out of table"); return;
  }
L_10e998c4:;
  /* 10e998c4 jmp dword ptr [ecx*4 + 0x10e999c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e999c8)))); return;
  /* 10e998cb nop  */
  /* nop */
L_10e998cc:;
  /* 10e998cc jmp dword ptr [ecx*4 + 0x10e9994c] */
  switch (ECX) {
    case 0: goto L_10e999af;
    case 1: goto L_10e9999c;
    case 2: goto L_10e99994;
    case 3: goto L_10e9998c;
    case 4: goto L_10e99984;
    case 5: goto L_10e9997c;
    case 6: goto L_10e99974;
    case 7: goto L_10e9996c;
    default: x86_unimpl("switch@0x10e998cc out of table"); return;
  }
  /* 10e998d3 nop  */
  /* nop */
L_10e998e0:;
  /* 10e998e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e998e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e998e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e998e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e998e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e998ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e998ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e998f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e998f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e998f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e998fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e998fe jb 0x10e998cc */
  if (C.cf) goto L_10e998cc;
  /* 10e99900 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99902 jmp dword ptr [edx*4 + 0x10e999b8] */
  switch (EDX) {
    case 0: goto L_10e999c8;
    case 1: goto L_10e999d0;
    case 2: goto L_10e999dc;
    case 3: goto L_10e999f0;
    default: x86_unimpl("switch@0x10e99902 out of table"); return;
  }
  /* 10e99909 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9990c:;
  /* 10e9990c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9990e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e99910 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e99912 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e99915 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e99918 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9991b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9991e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99921 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99924 jb 0x10e998cc */
  if (C.cf) goto L_10e998cc;
  /* 10e99926 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99928 jmp dword ptr [edx*4 + 0x10e999b8] */
  switch (EDX) {
    case 0: goto L_10e999c8;
    case 1: goto L_10e999d0;
    case 2: goto L_10e999dc;
    case 3: goto L_10e999f0;
    default: x86_unimpl("switch@0x10e99928 out of table"); return;
  }
  /* 10e9992f nop  */
  /* nop */
L_10e99930:;
  /* 10e99930 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99932 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e99934 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e99936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e99937 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9993a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e9993b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9993e jb 0x10e998cc */
  if (C.cf) goto L_10e998cc;
  /* 10e99940 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99942 jmp dword ptr [edx*4 + 0x10e999b8] */
  switch (EDX) {
    case 0: goto L_10e999c8;
    case 1: goto L_10e999d0;
    case 2: goto L_10e999dc;
    case 3: goto L_10e999f0;
    default: x86_unimpl("switch@0x10e99942 out of table"); return;
  }
  /* 10e99949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9996c:;
  /* 10e9996c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e99970 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e99974:;
  /* 10e99974 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e99978 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e9997c:;
  /* 10e9997c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e99980 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e99984:;
  /* 10e99984 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e99988 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e9998c:;
  /* 10e9998c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e99990 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e99994:;
  /* 10e99994 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e99998 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e9999c:;
  /* 10e9999c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e999a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e999a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e999ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e999ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e999af:;
  /* 10e999af jmp dword ptr [edx*4 + 0x10e999b8] */
  switch (EDX) {
    case 0: goto L_10e999c8;
    case 1: goto L_10e999d0;
    case 2: goto L_10e999dc;
    case 3: goto L_10e999f0;
    default: x86_unimpl("switch@0x10e999af out of table"); return;
  }
  /* 10e999b6 mov edi, edi */
  EDI = (EDI);
L_10e999c8:;
  /* 10e999c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e999cb pop esi */
  ESI = (pop32());
  /* 10e999cc pop edi */
  EDI = (pop32());
  /* 10e999cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e999ce ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e999cf nop  */
  /* nop */
L_10e999d0:;
  /* 10e999d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e999d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e999d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e999d7 pop esi */
  ESI = (pop32());
  /* 10e999d8 pop edi */
  EDI = (pop32());
  /* 10e999d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e999da ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e999db nop  */
  /* nop */
L_10e999dc:;
  /* 10e999dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e999de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e999e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e999e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e999e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e999e9 pop esi */
  ESI = (pop32());
  /* 10e999ea pop edi */
  EDI = (pop32());
  /* 10e999eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e999ec ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e999ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e999f0:;
  /* 10e999f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e999f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e999f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e999f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e999fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e999fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e99a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99a03 pop esi */
  ESI = (pop32());
  /* 10e99a04 pop edi */
  EDI = (pop32());
  /* 10e99a05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e99a06 ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e99a07 nop  */
  /* nop */
L_10e99a08:;
  /* 10e99a08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e99a0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e99a10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e99a16 jne 0x10e99a3c */
  if (!C.zf) goto L_10e99a3c;
  /* 10e99a18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e99a1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e99a1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99a21 jb 0x10e99a30 */
  if (C.cf) goto L_10e99a30;
  /* 10e99a23 std  */
  C.df=1;
  /* 10e99a24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99a26 cld  */
  C.df=0;
  /* 10e99a27 jmp dword ptr [edx*4 + 0x10e99b50] */
  switch (EDX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99a27 out of table"); return;
  }
  /* 10e99a2e mov edi, edi */
  EDI = (EDI);
L_10e99a30:;
  /* 10e99a30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e99a32 jmp dword ptr [ecx*4 + 0x10e99b00] */
  switch (ECX) {
    case 0: goto L_10e99b47;
    default: x86_unimpl("switch@0x10e99a32 out of table"); return;
  }
  /* 10e99a39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e99a3c:;
  /* 10e99a3c mov eax, edi */
  EAX = (EDI);
  /* 10e99a3e mov edx, 3 */
  EDX = (0x3u);
  /* 10e99a43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99a46 jb 0x10e99a54 */
  if (C.cf) goto L_10e99a54;
  /* 10e99a48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e99a4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99a4d jmp dword ptr [eax*4 + 0x10e99a58] */
  switch (EAX) {
    case 1: goto L_10e99a68;
    case 2: goto L_10e99a88;
    case 3: goto L_10e99ab0;
    default: x86_unimpl("switch@0x10e99a4d out of table"); return;
  }
L_10e99a54:;
  /* 10e99a54 jmp dword ptr [ecx*4 + 0x10e99b50] */
  switch (ECX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99a54 out of table"); return;
  }
  /* 10e99a5b nop  */
  /* nop */
L_10e99a68:;
  /* 10e99a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99a6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99a6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99a70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e99a71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e99a74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e99a75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99a78 jb 0x10e99a30 */
  if (C.cf) goto L_10e99a30;
  /* 10e99a7a std  */
  C.df=1;
  /* 10e99a7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99a7d cld  */
  C.df=0;
  /* 10e99a7e jmp dword ptr [edx*4 + 0x10e99b50] */
  switch (EDX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99a7e out of table"); return;
  }
  /* 10e99a85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e99a88:;
  /* 10e99a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99a8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99a8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99a90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e99a93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e99a96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e99a99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99a9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99a9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99aa2 jb 0x10e99a30 */
  if (C.cf) goto L_10e99a30;
  /* 10e99aa4 std  */
  C.df=1;
  /* 10e99aa5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99aa7 cld  */
  C.df=0;
  /* 10e99aa8 jmp dword ptr [edx*4 + 0x10e99b50] */
  switch (EDX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99aa8 out of table"); return;
  }
  /* 10e99aaf nop  */
  /* nop */
L_10e99ab0:;
  /* 10e99ab0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99ab3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99ab5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99ab8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e99abb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e99abe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e99ac1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e99ac4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e99ac7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99aca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99acd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99ad0 jb 0x10e99a30 */
  if (C.cf) goto L_10e99a30;
  /* 10e99ad6 std  */
  C.df=1;
  /* 10e99ad7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e99ad9 cld  */
  C.df=0;
  /* 10e99ada jmp dword ptr [edx*4 + 0x10e99b50] */
  switch (EDX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99ada out of table"); return;
  }
  /* 10e99ae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e99ae4 add al, 0x9b */
  { uint32_t _a=(AL),_b=(0x9bu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e99ae6 jmp 0xfa84a6fb */
  jmp_ind(0xfa84a6fbu); return;
  /* 10e99aeb adc byte ptr [ebx + ebx*4], dl */
  { uint32_t _a=(r8((uint32_t)(EBX + EBX*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e99aee jmp 0xfa84b703 */
  jmp_ind(0xfa84b703u); return;
  /* 10e99af3 adc byte ptr [ebx + ebx*4], ah */
  { uint32_t _a=(r8((uint32_t)(EBX + EBX*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e99af6 jmp 0xfa84c70b */
  jmp_ind(0xfa84c70bu); return;
  /* 10e99afb adc byte ptr [ebx + ebx*4], dh */
  { uint32_t _a=(r8((uint32_t)(EBX + EBX*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e99b04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e99b08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e99b0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e99b10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e99b14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e99b18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e99b1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e99b20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e99b24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e99b28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e99b2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e99b30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e99b34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e99b38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e99b3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e99b43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99b45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e99b47:;
  /* 10e99b47 jmp dword ptr [edx*4 + 0x10e99b50] */
  switch (EDX) {
    case 0: goto L_10e99b60;
    case 1: goto L_10e99b68;
    case 2: goto L_10e99b78;
    case 3: goto L_10e99b8c;
    default: x86_unimpl("switch@0x10e99b47 out of table"); return;
  }
  /* 10e99b4e mov edi, edi */
  EDI = (EDI);
L_10e99b60:;
  /* 10e99b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99b63 pop esi */
  ESI = (pop32());
  /* 10e99b64 pop edi */
  EDI = (pop32());
  /* 10e99b65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e99b66 ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e99b67 nop  */
  /* nop */
L_10e99b68:;
  /* 10e99b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99b6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99b71 pop esi */
  ESI = (pop32());
  /* 10e99b72 pop edi */
  EDI = (pop32());
  /* 10e99b73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e99b74 ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e99b75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e99b78:;
  /* 10e99b78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99b7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99b7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e99b81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e99b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99b87 pop esi */
  ESI = (pop32());
  /* 10e99b88 pop edi */
  EDI = (pop32());
  /* 10e99b89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e99b8a ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
  /* 10e99b8b nop  */
  /* nop */
L_10e99b8c:;
  /* 10e99b8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e99b8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e99b92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e99b95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e99b98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e99b9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e99b9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99ba1 pop esi */
  ESI = (pop32());
  /* 10e99ba2 pop edi */
  EDI = (pop32());
  /* 10e99ba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e99ba4 ret  */
  ESPCHK(0x10e99870u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10e99bb0 (104 bytes, 43 insns) */
void f_10e99bb0(void) {
  FTRACE(0x10e99bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e99bb1 push esi */
  push32((uint32_t)(ESI));
  /* 10e99bb2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10e99bb6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99bb8 jne 0x10e99bd2 */
  if (!C.zf) goto L_10e99bd2;
  /* 10e99bba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e99bbe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e99bc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99bc4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99bc6 mov ebx, eax */
  EBX = (EAX);
  /* 10e99bc8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e99bcc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99bce mov edx, ebx */
  EDX = (EBX);
  /* 10e99bd0 jmp 0x10e99c13 */
  goto L_10e99c13;
L_10e99bd2:;
  /* 10e99bd2 mov ecx, eax */
  ECX = (EAX);
  /* 10e99bd4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e99bd8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e99bdc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10e99be0:;
  /* 10e99be0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e99be2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e99be4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e99be6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e99be8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e99bea jne 0x10e99be0 */
  if (!C.zf) goto L_10e99be0;
  /* 10e99bec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99bee mov esi, eax */
  ESI = (EAX);
  /* 10e99bf0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e99bf4 mov ecx, eax */
  ECX = (EAX);
  /* 10e99bf6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e99bfa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e99bfc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99bfe jb 0x10e99c0e */
  if (C.cf) goto L_10e99c0e;
  /* 10e99c00 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99c04 ja 0x10e99c0e */
  if ((!C.cf&&!C.zf)) goto L_10e99c0e;
  /* 10e99c06 jb 0x10e99c0f */
  if (C.cf) goto L_10e99c0f;
  /* 10e99c08 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99c0c jbe 0x10e99c0f */
  if ((C.cf||C.zf)) goto L_10e99c0f;
L_10e99c0e:;
  /* 10e99c0e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10e99c0f:;
  /* 10e99c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99c11 mov eax, esi */
  EAX = (ESI);
L_10e99c13:;
  /* 10e99c13 pop esi */
  ESI = (pop32());
  /* 10e99c14 pop ebx */
  EBX = (pop32());
  /* 10e99c15 ret 0x10 */
  ESPCHK(0x10e99bb0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10e99c20 (117 bytes, 44 insns) */
void f_10e99c20(void) {
  FTRACE(0x10e99c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99c20 push ebx */
  push32((uint32_t)(EBX));
  /* 10e99c21 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e99c25 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99c27 jne 0x10e99c41 */
  if (!C.zf) goto L_10e99c41;
  /* 10e99c29 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e99c2d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e99c31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99c33 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99c35 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e99c39 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99c3b mov eax, edx */
  EAX = (EDX);
  /* 10e99c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e99c3f jmp 0x10e99c91 */
  goto L_10e99c91;
L_10e99c41:;
  /* 10e99c41 mov ecx, eax */
  ECX = (EAX);
  /* 10e99c43 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e99c47 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e99c4b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10e99c4f:;
  /* 10e99c4f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e99c51 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e99c53 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e99c55 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e99c57 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e99c59 jne 0x10e99c4f */
  if (!C.zf) goto L_10e99c4f;
  /* 10e99c5b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e99c5d mov ecx, eax */
  ECX = (EAX);
  /* 10e99c5f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e99c63 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10e99c64 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e99c68 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99c6a jb 0x10e99c7a */
  if (C.cf) goto L_10e99c7a;
  /* 10e99c6c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99c70 ja 0x10e99c7a */
  if ((!C.cf&&!C.zf)) goto L_10e99c7a;
  /* 10e99c72 jb 0x10e99c82 */
  if (C.cf) goto L_10e99c82;
  /* 10e99c74 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99c78 jbe 0x10e99c82 */
  if ((C.cf||C.zf)) goto L_10e99c82;
L_10e99c7a:;
  /* 10e99c7a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99c7e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e99c82:;
  /* 10e99c82 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99c86 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99c8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e99c8c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e99c8e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e99c91:;
  /* 10e99c91 pop ebx */
  EBX = (pop32());
  /* 10e99c92 ret 0x10 */
  ESPCHK(0x10e99c20u, _esp0);
  ESP += 20; return;
}

/* FUN_10009ca0 @ 0x10e99ca0 (628 bytes, 214 insns) */
void f_10e99ca0(void) {
  FTRACE(0x10e99ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10e99ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e99ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10e99ca8 push edi */
  push32((uint32_t)(EDI));
L_10e99ca9:;
  /* 10e99ca9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99cad jne 0x10e99ccd */
  if (!C.zf) goto L_10e99ccd;
  /* 10e99caf push 0x10eb9ed8 */
  push32((uint32_t)(0x10eb9ed8u));
  /* 10e99cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e99cb6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10e99cb8 push 0x10eb9ecc */
  push32((uint32_t)(0x10eb9eccu));
  /* 10e99cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e99cbf call 0x10e92050 */
  push32(0x10e99cc4u); f_10e92050();
  /* 10e99cc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99cc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99cca jne 0x10e99ccd */
  if (!C.zf) goto L_10e99ccd;
  /* 10e99ccc int3  */
  x86_unimpl("int3 @ 0x10e99ccc");
L_10e99ccd:;
  /* 10e99ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99cd1 jne 0x10e99ca9 */
  if (!C.zf) goto L_10e99ca9;
  /* 10e99cd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e99cd6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e99cd9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99cdc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e99cdf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e99ce2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99ce5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99ce8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10e99cee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e99cf0 je 0x10e99cff */
  if (C.zf) goto L_10e99cff;
  /* 10e99cf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99cf5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e99cf8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e99cfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e99cfd je 0x10e99d15 */
  if (C.zf) goto L_10e99d15;
L_10e99cff:;
  /* 10e99cff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d02 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e99d05 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e99d07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d0a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e99d0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e99d10 jmp 0x10e99f0d */
  goto L_10e99f0d;
L_10e99d15:;
  /* 10e99d15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d18 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e99d1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e99d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99d20 je 0x10e99d6c */
  if (C.zf) goto L_10e99d6c;
  /* 10e99d22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d25 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e99d2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d2f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e99d32 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e99d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99d37 je 0x10e99d55 */
  if (C.zf) goto L_10e99d55;
  /* 10e99d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d3f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e99d42 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e99d44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99d4a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10e99d4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d50 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e99d53 jmp 0x10e99d6c */
  goto L_10e99d6c;
L_10e99d55:;
  /* 10e99d55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d58 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99d5b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e99d5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d61 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e99d64 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e99d67 jmp 0x10e99f0d */
  goto L_10e99f0d;
L_10e99d6c:;
  /* 10e99d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99d72 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e99d75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d78 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e99d7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d7e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99d81 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10e99d84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d87 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e99d8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99d8d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e99d94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e99d9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e99d9e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e99da1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99da4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e99da7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10e99dad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e99daf jne 0x10e99ddf */
  if (!C.zf) goto L_10e99ddf;
  /* 10e99db1 cmp dword ptr [ebp - 8], 0x10ebd150 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10ebd150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99db8 je 0x10e99dc3 */
  if (C.zf) goto L_10e99dc3;
  /* 10e99dba cmp dword ptr [ebp - 8], 0x10ebd170 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10ebd170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99dc1 jne 0x10e99dd3 */
  if (!C.zf) goto L_10e99dd3;
L_10e99dc3:;
  /* 10e99dc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99dc6 push edx */
  push32((uint32_t)(EDX));
  /* 10e99dc7 call 0x10e9bc10 */
  push32(0x10e99dccu); f_10e9bc10();
  /* 10e99dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99dd1 jne 0x10e99ddf */
  if (!C.zf) goto L_10e99ddf;
L_10e99dd3:;
  /* 10e99dd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10e99dd7 call 0x10e9bb40 */
  push32(0x10e99ddcu); f_10e9bb40();
  /* 10e99ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e99ddf:;
  /* 10e99ddf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99de2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e99de5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10e99deb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e99ded je 0x10e99ecb */
  if (C.zf) goto L_10e99ecb;
L_10e99df3:;
  /* 10e99df3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99df9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10e99dfb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99dfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e99e00 jge 0x10e99e23 */
  if ((C.sf==C.of)) goto L_10e99e23;
  /* 10e99e02 push 0x10eb9e8c */
  push32((uint32_t)(0x10eb9e8cu));
  /* 10e99e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e99e09 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10e99e0e push 0x10eb9ecc */
  push32((uint32_t)(0x10eb9eccu));
  /* 10e99e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e99e15 call 0x10e92050 */
  push32(0x10e99e1au); f_10e92050();
  /* 10e99e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99e20 jne 0x10e99e23 */
  if (!C.zf) goto L_10e99e23;
  /* 10e99e22 int3  */
  x86_unimpl("int3 @ 0x10e99e22");
L_10e99e23:;
  /* 10e99e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e99e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99e27 jne 0x10e99df3 */
  if (!C.zf) goto L_10e99df3;
  /* 10e99e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e2f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e99e31 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99e34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e99e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e3a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e99e3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e99e45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e48 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e99e4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99e4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e99e54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99e58 jle 0x10e99e76 */
  if ((C.zf||C.sf!=C.of)) goto L_10e99e76;
  /* 10e99e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e99e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10e99e5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99e61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e99e64 push eax */
  push32((uint32_t)(EAX));
  /* 10e99e65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99e69 call 0x10e9b830 */
  push32(0x10e99e6eu); f_10e9b830();
  /* 10e99e6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99e71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e99e74 jmp 0x10e99ebe */
  goto L_10e99ebe;
L_10e99e76:;
  /* 10e99e76 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99e7a je 0x10e99e99 */
  if (C.zf) goto L_10e99e99;
  /* 10e99e7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99e7f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e99e82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99e85 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e99e88 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e99e8b mov ecx, dword ptr [edx*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e99e92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99e94 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e99e97 jmp 0x10e99ea0 */
  goto L_10e99ea0;
L_10e99e99:;
  /* 10e99e99 mov dword ptr [ebp - 0x14], 0x10ebca68 */
  w32((uint32_t)(EBP + -0x14), (0x10ebca68u));
L_10e99ea0:;
  /* 10e99ea0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e99ea3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10e99ea7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e99eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e99eac je 0x10e99ebe */
  if (C.zf) goto L_10e99ebe;
  /* 10e99eae push 2 */
  push32((uint32_t)(0x2u));
  /* 10e99eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e99eb2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e99eb6 call 0x10e9b6e0 */
  push32(0x10e99ebbu); f_10e9b6e0();
  /* 10e99ebb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e99ebe:;
  /* 10e99ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99ec1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e99ec4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e99ec7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e99ec9 jmp 0x10e99ee9 */
  goto L_10e99ee9;
L_10e99ecb:;
  /* 10e99ecb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e99ed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e99ed5 push edx */
  push32((uint32_t)(EDX));
  /* 10e99ed6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10e99ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10e99eda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e99edd push ecx */
  push32((uint32_t)(ECX));
  /* 10e99ede call 0x10e9b830 */
  push32(0x10e99ee3u); f_10e9b830();
  /* 10e99ee3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99ee6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e99ee9:;
  /* 10e99ee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99eec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99eef je 0x10e99f05 */
  if (C.zf) goto L_10e99f05;
  /* 10e99ef1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99ef4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e99ef7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e99efa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e99efd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e99f00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e99f03 jmp 0x10e99f0d */
  goto L_10e99f0d;
L_10e99f05:;
  /* 10e99f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e99f08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10e99f0d:;
  /* 10e99f0d pop edi */
  EDI = (pop32());
  /* 10e99f0e pop esi */
  ESI = (pop32());
  /* 10e99f0f pop ebx */
  EBX = (pop32());
  /* 10e99f10 mov esp, ebp */
  ESP = (EBP);
  /* 10e99f12 pop ebp */
  EBP = (pop32());
  /* 10e99f13 ret  */
  ESPCHK(0x10e99ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f20 @ 0x10e99f20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10e99f20(void) {
  FTRACE(0x10e99f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e99f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e99f21 mov ebp, esp */
  EBP = (ESP);
  /* 10e99f23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e99f29 push ebx */
  push32((uint32_t)(EBX));
  /* 10e99f2a push esi */
  push32((uint32_t)(ESI));
  /* 10e99f2b push edi */
  push32((uint32_t)(EDI));
  /* 10e99f2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e99f33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10e99f3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e99f44:;
  /* 10e99f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e99f47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e99f49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10e99f4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e99f50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e99f53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e99f56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e99f59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e99f5b je 0x10e9ab37 */
  if (C.zf) goto L_10e9ab37;
  /* 10e99f61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99f68 jl 0x10e9ab37 */
  if ((C.sf!=C.of)) goto L_10e9ab37;
  /* 10e99f6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e99f72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99f75 jl 0x10e99f96 */
  if ((C.sf!=C.of)) goto L_10e99f96;
  /* 10e99f77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e99f7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99f7e jg 0x10e99f96 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e99f96;
  /* 10e99f80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e99f84 movsx ecx, byte ptr [eax + 0x10eb9ec4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10eb9ec4))));
  /* 10e99f8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10e99f8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10e99f94 jmp 0x10e99fa0 */
  goto L_10e99fa0;
L_10e99f96:;
  /* 10e99f96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10e99fa0:;
  /* 10e99fa0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10e99fa6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e99fa9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e99fac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e99faf movsx edx, byte ptr [ecx + eax*8 + 0x10eb9ee4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10eb9ee4))));
  /* 10e99fb7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e99fba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e99fbd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e99fc0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10e99fc6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e99fcd ja 0x10e9ab32 */
  if ((!C.cf&&!C.zf)) goto L_10e9ab32;
  /* 10e99fd3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10e99fd9 jmp dword ptr [ecx*4 + 0x10e9ab44] */
  switch (ECX) {
    case 0: goto L_10e99fe0;
    case 1: goto L_10e9a07a;
    case 2: goto L_10e9a0bc;
    case 3: goto L_10e9a12b;
    case 4: goto L_10e9a183;
    case 5: goto L_10e9a192;
    case 6: goto L_10e9a1de;
    case 7: goto L_10e9a271;
    case 8: goto L_10e9a108;
    case 9: goto L_10e9a113;
    case 10: goto L_10e9a0fe;
    case 11: goto L_10e9a0f3;
    case 12: goto L_10e9a11e;
    case 13: goto L_10e9a126;
    default: x86_unimpl("switch@0x10e99fd9 out of table"); return;
  }
L_10e99fe0:;
  /* 10e99fe0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e99fe7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e99fea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e99ff0 mov eax, dword ptr [0x10ebcca8] */
  EAX = (r32((uint32_t)(0x10ebcca8)));
  /* 10e99ff5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e99ff7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e99ffb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a001 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a003 je 0x10e9a05d */
  if (C.zf) goto L_10e9a05d;
  /* 10e9a005 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10e9a00b push edx */
  push32((uint32_t)(EDX));
  /* 10e9a00c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9a00f push eax */
  push32((uint32_t)(EAX));
  /* 10e9a010 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a014 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a015 call 0x10e9ac50 */
  push32(0x10e9a01au); f_10e9ac50();
  /* 10e9a01a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a01d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9a020 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9a022 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10e9a025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9a028 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a02b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e9a02e:;
  /* 10e9a02e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a034 jne 0x10e9a057 */
  if (!C.zf) goto L_10e9a057;
  /* 10e9a036 push 0x10eb9f64 */
  push32((uint32_t)(0x10eb9f64u));
  /* 10e9a03b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9a03d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10e9a042 push 0x10eb9f58 */
  push32((uint32_t)(0x10eb9f58u));
  /* 10e9a047 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9a049 call 0x10e92050 */
  push32(0x10e9a04eu); f_10e92050();
  /* 10e9a04e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a051 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a054 jne 0x10e9a057 */
  if (!C.zf) goto L_10e9a057;
  /* 10e9a056 int3  */
  x86_unimpl("int3 @ 0x10e9a056");
L_10e9a057:;
  /* 10e9a057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a05b jne 0x10e9a02e */
  if (!C.zf) goto L_10e9a02e;
L_10e9a05d:;
  /* 10e9a05d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e9a063 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9a067 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a068 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a06c push eax */
  push32((uint32_t)(EAX));
  /* 10e9a06d call 0x10e9ac50 */
  push32(0x10e9a072u); f_10e9ac50();
  /* 10e9a072 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a075 jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a07a:;
  /* 10e9a07a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9a081 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9a084 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10e9a08a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10e9a090 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10e9a096 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e9a09c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e9a09f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9a0a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10e9a0b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e9a0b7 jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a0bc:;
  /* 10e9a0bc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a0c0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10e9a0c6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e9a0cc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a0cf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10e9a0d5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a0dc ja 0x10e9a126 */
  if ((!C.cf&&!C.zf)) goto L_10e9a126;
  /* 10e9a0de mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e9a0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a0e6 mov al, byte ptr [ecx + 0x10e9ab7c] */
  AL = (r8((uint32_t)(ECX + 0x10e9ab7c)));
  /* 10e9a0ec jmp dword ptr [eax*4 + 0x10e9ab64] */
  switch (EAX) {
    case 0: goto L_10e9a108;
    case 1: goto L_10e9a113;
    case 2: goto L_10e9a0fe;
    case 3: goto L_10e9a0f3;
    case 4: goto L_10e9a11e;
    case 5: goto L_10e9a126;
    default: x86_unimpl("switch@0x10e9a0ec out of table"); return;
  }
L_10e9a0f3:;
  /* 10e9a0f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a0f6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a0f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9a0fc jmp 0x10e9a126 */
  goto L_10e9a126;
L_10e9a0fe:;
  /* 10e9a0fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a101 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e9a103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9a106 jmp 0x10e9a126 */
  goto L_10e9a126;
L_10e9a108:;
  /* 10e9a108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a10b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a10e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9a111 jmp 0x10e9a126 */
  goto L_10e9a126;
L_10e9a113:;
  /* 10e9a113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a116 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10e9a119 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9a11c jmp 0x10e9a126 */
  goto L_10e9a126;
L_10e9a11e:;
  /* 10e9a11e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a121 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10e9a123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9a126:;
  /* 10e9a126 jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a12b:;
  /* 10e9a12b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a12f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a132 jne 0x10e9a167 */
  if (!C.zf) goto L_10e9a167;
  /* 10e9a134 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e9a137 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a138 call 0x10e9ad60 */
  push32(0x10e9a13du); f_10e9ad60();
  /* 10e9a13d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a140 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10e9a146 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a14d jge 0x10e9a165 */
  if ((C.sf==C.of)) goto L_10e9a165;
  /* 10e9a14f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a152 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e9a154 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9a157 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e9a15d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9a15f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e9a165:;
  /* 10e9a165 jmp 0x10e9a17e */
  goto L_10e9a17e;
L_10e9a167:;
  /* 10e9a167 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e9a16d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9a170 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a174 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10e9a178 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e9a17e:;
  /* 10e9a17e jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a183:;
  /* 10e9a183 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10e9a18d jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a192:;
  /* 10e9a192 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a196 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a199 jne 0x10e9a1c2 */
  if (!C.zf) goto L_10e9a1c2;
  /* 10e9a19b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e9a19e push eax */
  push32((uint32_t)(EAX));
  /* 10e9a19f call 0x10e9ad60 */
  push32(0x10e9a1a4u); f_10e9ad60();
  /* 10e9a1a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a1a7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e9a1ad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a1b4 jge 0x10e9a1c0 */
  if ((C.sf==C.of)) goto L_10e9a1c0;
  /* 10e9a1b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10e9a1c0:;
  /* 10e9a1c0 jmp 0x10e9a1d9 */
  goto L_10e9a1d9;
L_10e9a1c2:;
  /* 10e9a1c2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e9a1c8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9a1cb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a1cf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e9a1d3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10e9a1d9:;
  /* 10e9a1d9 jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a1de:;
  /* 10e9a1de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a1e2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10e9a1e8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e9a1ee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a1f1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10e9a1f7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a1fe ja 0x10e9a26c */
  if ((!C.cf&&!C.zf)) goto L_10e9a26c;
  /* 10e9a200 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e9a206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a208 mov al, byte ptr [ecx + 0x10e9aba1] */
  AL = (r8((uint32_t)(ECX + 0x10e9aba1)));
  /* 10e9a20e jmp dword ptr [eax*4 + 0x10e9ab8d] */
  switch (EAX) {
    case 0: goto L_10e9a220;
    case 1: goto L_10e9a259;
    case 2: goto L_10e9a215;
    case 3: goto L_10e9a263;
    case 4: goto L_10e9a26c;
    default: x86_unimpl("switch@0x10e9a20e out of table"); return;
  }
L_10e9a215:;
  /* 10e9a215 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a218 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a21b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9a21e jmp 0x10e9a26c */
  goto L_10e9a26c;
L_10e9a220:;
  /* 10e9a220 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9a223 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9a226 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a229 jne 0x10e9a24b */
  if (!C.zf) goto L_10e9a24b;
  /* 10e9a22b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9a22e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e9a232 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a235 jne 0x10e9a24b */
  if (!C.zf) goto L_10e9a24b;
  /* 10e9a237 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9a23a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a23d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e9a240 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a243 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a246 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9a249 jmp 0x10e9a257 */
  goto L_10e9a257;
L_10e9a24b:;
  /* 10e9a24b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e9a252 jmp 0x10e99fe0 */
  goto L_10e99fe0;
L_10e9a257:;
  /* 10e9a257 jmp 0x10e9a26c */
  goto L_10e9a26c;
L_10e9a259:;
  /* 10e9a259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a25c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e9a25e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9a261 jmp 0x10e9a26c */
  goto L_10e9a26c;
L_10e9a263:;
  /* 10e9a263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a266 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a269 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9a26c:;
  /* 10e9a26c jmp 0x10e9ab32 */
  goto L_10e9ab32;
L_10e9a271:;
  /* 10e9a271 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a275 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10e9a27b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e9a281 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a284 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10e9a28a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a291 ja 0x10e9a957 */
  if ((!C.cf&&!C.zf)) goto L_10e9a957;
  /* 10e9a297 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e9a29d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a29f mov cl, byte ptr [edx + 0x10e9ac0c] */
  CL = (r8((uint32_t)(EDX + 0x10e9ac0c)));
  /* 10e9a2a5 jmp dword ptr [ecx*4 + 0x10e9abd0] */
  switch (ECX) {
    case 0: goto L_10e9a2ac;
    case 1: goto L_10e9a540;
    case 2: goto L_10e9a3d0;
    case 3: goto L_10e9a679;
    case 4: goto L_10e9a33b;
    case 5: goto L_10e9a2c1;
    case 6: goto L_10e9a64b;
    case 7: goto L_10e9a550;
    case 8: goto L_10e9a4f5;
    case 9: goto L_10e9a6c5;
    case 10: goto L_10e9a66f;
    case 11: goto L_10e9a3e6;
    case 12: goto L_10e9a663;
    case 13: goto L_10e9a685;
    case 14: goto L_10e9a957;
    default: x86_unimpl("switch@0x10e9a2a5 out of table"); return;
  }
L_10e9a2ac:;
  /* 10e9a2ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a2af and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a2b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a2b6 jne 0x10e9a2c1 */
  if (!C.zf) goto L_10e9a2c1;
  /* 10e9a2b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a2bb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a2be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9a2c1:;
  /* 10e9a2c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a2c4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a2ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a2cc je 0x10e9a307 */
  if (C.zf) goto L_10e9a307;
  /* 10e9a2ce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e9a2d1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9a2d2 call 0x10e9ada0 */
  push32(0x10e9a2d7u); f_10e9ada0();
  /* 10e9a2d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a2da mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10e9a2de mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10e9a2e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a2e3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e9a2e9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a2ea call 0x10e9be80 */
  push32(0x10e9a2efu); f_10e9be80();
  /* 10e9a2ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a2f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e9a2f5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a2f9 jge 0x10e9a305 */
  if ((C.sf==C.of)) goto L_10e9a305;
  /* 10e9a2fb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10e9a305:;
  /* 10e9a305 jmp 0x10e9a32d */
  goto L_10e9a32d;
L_10e9a307:;
  /* 10e9a307 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e9a30a push eax */
  push32((uint32_t)(EAX));
  /* 10e9a30b call 0x10e9ad60 */
  push32(0x10e9a310u); f_10e9ad60();
  /* 10e9a310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a313 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10e9a31a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10e9a320 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10e9a326 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10e9a32d:;
  /* 10e9a32d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e9a333 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e9a336 jmp 0x10e9a957 */
  goto L_10e9a957;
L_10e9a33b:;
  /* 10e9a33b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e9a33e push eax */
  push32((uint32_t)(EAX));
  /* 10e9a33f call 0x10e9ad60 */
  push32(0x10e9a344u); f_10e9ad60();
  /* 10e9a344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a347 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10e9a34d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a354 je 0x10e9a362 */
  if (C.zf) goto L_10e9a362;
  /* 10e9a356 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e9a35c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a360 jne 0x10e9a37c */
  if (!C.zf) goto L_10e9a37c;
L_10e9a362:;
  /* 10e9a362 mov edx, dword ptr [0x10ebcfc0] */
  EDX = (r32((uint32_t)(0x10ebcfc0)));
  /* 10e9a368 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e9a36b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a36e push eax */
  push32((uint32_t)(EAX));
  /* 10e9a36f call 0x10e95dc0 */
  push32(0x10e9a374u); f_10e95dc0();
  /* 10e9a374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a377 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e9a37a jmp 0x10e9a3cb */
  goto L_10e9a3cb;
L_10e9a37c:;
  /* 10e9a37c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a37f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a387 je 0x10e9a3ac */
  if (C.zf) goto L_10e9a3ac;
  /* 10e9a389 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e9a38f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e9a392 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9a395 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e9a39b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10e9a39e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e9a3a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e9a3a3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e9a3aa jmp 0x10e9a3cb */
  goto L_10e9a3cb;
L_10e9a3ac:;
  /* 10e9a3ac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e9a3b3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e9a3b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9a3bc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e9a3bf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e9a3c5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10e9a3c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e9a3cb:;
  /* 10e9a3cb jmp 0x10e9a957 */
  goto L_10e9a957;
L_10e9a3d0:;
  /* 10e9a3d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a3d3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a3d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a3db jne 0x10e9a3e6 */
  if (!C.zf) goto L_10e9a3e6;
  /* 10e9a3dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a3e0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a3e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9a3e6:;
  /* 10e9a3e6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a3ed jne 0x10e9a3fb */
  if (!C.zf) goto L_10e9a3fb;
  /* 10e9a3ef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10e9a3f9 jmp 0x10e9a407 */
  goto L_10e9a407;
L_10e9a3fb:;
  /* 10e9a3fb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e9a401 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10e9a407:;
  /* 10e9a407 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10e9a40d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e9a413 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e9a416 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a417 call 0x10e9ad60 */
  push32(0x10e9a41cu); f_10e9ad60();
  /* 10e9a41c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a41f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9a422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a425 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a42c je 0x10e9a496 */
  if (C.zf) goto L_10e9a496;
  /* 10e9a42e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a432 jne 0x10e9a43d */
  if (!C.zf) goto L_10e9a43d;
  /* 10e9a434 mov ecx, dword ptr [0x10ebcfc4] */
  ECX = (r32((uint32_t)(0x10ebcfc4)));
  /* 10e9a43a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e9a43d:;
  /* 10e9a43d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e9a444 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a447 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10e9a44d:;
  /* 10e9a44d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e9a453 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e9a459 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a45c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e9a462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a464 je 0x10e9a486 */
  if (C.zf) goto L_10e9a486;
  /* 10e9a466 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e9a46c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a46e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e9a471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a473 je 0x10e9a486 */
  if (C.zf) goto L_10e9a486;
  /* 10e9a475 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e9a47b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a47e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10e9a484 jmp 0x10e9a44d */
  goto L_10e9a44d;
L_10e9a486:;
  /* 10e9a486 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e9a48c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a48f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e9a491 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e9a494 jmp 0x10e9a4f0 */
  goto L_10e9a4f0;
L_10e9a496:;
  /* 10e9a496 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a49a jne 0x10e9a4a4 */
  if (!C.zf) goto L_10e9a4a4;
  /* 10e9a49c mov eax, dword ptr [0x10ebcfc0] */
  EAX = (r32((uint32_t)(0x10ebcfc0)));
  /* 10e9a4a1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e9a4a4:;
  /* 10e9a4a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a4a7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10e9a4ad:;
  /* 10e9a4ad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e9a4b3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e9a4b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a4bc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10e9a4c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a4c4 je 0x10e9a4e4 */
  if (C.zf) goto L_10e9a4e4;
  /* 10e9a4c6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e9a4cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9a4cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a4d1 je 0x10e9a4e4 */
  if (C.zf) goto L_10e9a4e4;
  /* 10e9a4d3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e9a4d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a4dc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10e9a4e2 jmp 0x10e9a4ad */
  goto L_10e9a4ad;
L_10e9a4e4:;
  /* 10e9a4e4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e9a4ea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a4ed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e9a4f0:;
  /* 10e9a4f0 jmp 0x10e9a957 */
  goto L_10e9a957;
L_10e9a4f5:;
  /* 10e9a4f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e9a4f8 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a4f9 call 0x10e9ad60 */
  push32(0x10e9a4feu); f_10e9ad60();
  /* 10e9a4fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a501 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10e9a507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a50a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a50f je 0x10e9a523 */
  if (C.zf) goto L_10e9a523;
  /* 10e9a511 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e9a517 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10e9a51e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10e9a521 jmp 0x10e9a531 */
  goto L_10e9a531;
L_10e9a523:;
  /* 10e9a523 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e9a529 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e9a52f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10e9a531:;
  /* 10e9a531 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10e9a53b jmp 0x10e9a957 */
  goto L_10e9a957;
L_10e9a540:;
  /* 10e9a540 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e9a547 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10e9a54a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e9a54d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10e9a550:;
  /* 10e9a550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a553 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e9a555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9a558 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10e9a55e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e9a561 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a568 jge 0x10e9a576 */
  if ((C.sf==C.of)) goto L_10e9a576;
  /* 10e9a56a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10e9a574 jmp 0x10e9a592 */
  goto L_10e9a592;
L_10e9a576:;
  /* 10e9a576 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a57d jne 0x10e9a592 */
  if (!C.zf) goto L_10e9a592;
  /* 10e9a57f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a583 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a586 jne 0x10e9a592 */
  if (!C.zf) goto L_10e9a592;
  /* 10e9a588 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10e9a592:;
  /* 10e9a592 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9a595 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a598 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10e9a59b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9a59e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a5a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9a5a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e9a5a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10e9a5ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10e9a5b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9a5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a5b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e9a5bc push edx */
  push32((uint32_t)(EDX));
  /* 10e9a5bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a5c1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9a5c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a5c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10e9a5cc push edx */
  push32((uint32_t)(EDX));
  /* 10e9a5cd call dword ptr [0x10ebd3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebd3b0))), 0x10e9a5d3u);
  /* 10e9a5d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a5d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a5d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a5e0 je 0x10e9a5f8 */
  if (C.zf) goto L_10e9a5f8;
  /* 10e9a5e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a5e9 jne 0x10e9a5f8 */
  if (!C.zf) goto L_10e9a5f8;
  /* 10e9a5eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a5ee push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a5ef call dword ptr [0x10ebd3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebd3bc))), 0x10e9a5f5u);
  /* 10e9a5f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9a5f8:;
  /* 10e9a5f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e9a5fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a5ff jne 0x10e9a61a */
  if (!C.zf) goto L_10e9a61a;
  /* 10e9a601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a604 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a60b jne 0x10e9a61a */
  if (!C.zf) goto L_10e9a61a;
  /* 10e9a60d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a610 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a611 call dword ptr [0x10ebd3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebd3b4))), 0x10e9a617u);
  /* 10e9a617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9a61a:;
  /* 10e9a61a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a61d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9a620 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a623 jne 0x10e9a637 */
  if (!C.zf) goto L_10e9a637;
  /* 10e9a625 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a628 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a62b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9a62e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a631 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a634 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e9a637:;
  /* 10e9a637 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a63a push eax */
  push32((uint32_t)(EAX));
  /* 10e9a63b call 0x10e95dc0 */
  push32(0x10e9a640u); f_10e95dc0();
  /* 10e9a640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a643 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e9a646 jmp 0x10e9a957 */
  goto L_10e9a957;
L_10e9a64b:;
  /* 10e9a64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a64e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9a654 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e9a65e jmp 0x10e9a6e5 */
  goto L_10e9a6e5;
L_10e9a663:;
  /* 10e9a663 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e9a66d jmp 0x10e9a6e5 */
  goto L_10e9a6e5;
L_10e9a66f:;
  /* 10e9a66f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10e9a679:;
  /* 10e9a679 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10e9a683 jmp 0x10e9a68f */
  goto L_10e9a68f;
L_10e9a685:;
  /* 10e9a685 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10e9a68f:;
  /* 10e9a68f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10e9a699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a69c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a6a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a6a4 je 0x10e9a6c3 */
  if (C.zf) goto L_10e9a6c3;
  /* 10e9a6a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10e9a6ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10e9a6b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a6b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10e9a6bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10e9a6c3:;
  /* 10e9a6c3 jmp 0x10e9a6e5 */
  goto L_10e9a6e5;
L_10e9a6c5:;
  /* 10e9a6c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10e9a6cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a6d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a6d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a6da je 0x10e9a6e5 */
  if (C.zf) goto L_10e9a6e5;
  /* 10e9a6dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a6df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a6e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9a6e5:;
  /* 10e9a6e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a6e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a6ef je 0x10e9a70e */
  if (C.zf) goto L_10e9a70e;
  /* 10e9a6f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e9a6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a6f5 call 0x10e9ad80 */
  push32(0x10e9a6fau); f_10e9ad80();
  /* 10e9a6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a6fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e9a703 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e9a709 jmp 0x10e9a79f */
  goto L_10e9a79f;
L_10e9a70e:;
  /* 10e9a70e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a711 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a714 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a716 je 0x10e9a760 */
  if (C.zf) goto L_10e9a760;
  /* 10e9a718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a71b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a71e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a720 je 0x10e9a740 */
  if (C.zf) goto L_10e9a740;
  /* 10e9a722 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e9a725 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a726 call 0x10e9ad60 */
  push32(0x10e9a72bu); f_10e9ad60();
  /* 10e9a72b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a72e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10e9a731 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9a732 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e9a738 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e9a73e jmp 0x10e9a75e */
  goto L_10e9a75e;
L_10e9a740:;
  /* 10e9a740 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e9a743 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a744 call 0x10e9ad60 */
  push32(0x10e9a749u); f_10e9ad60();
  /* 10e9a749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a74c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a751 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9a752 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e9a758 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10e9a75e:;
  /* 10e9a75e jmp 0x10e9a79f */
  goto L_10e9a79f;
L_10e9a760:;
  /* 10e9a760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a763 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a768 je 0x10e9a785 */
  if (C.zf) goto L_10e9a785;
  /* 10e9a76a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e9a76d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a76e call 0x10e9ad60 */
  push32(0x10e9a773u); f_10e9ad60();
  /* 10e9a773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a776 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9a777 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e9a77d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e9a783 jmp 0x10e9a79f */
  goto L_10e9a79f;
L_10e9a785:;
  /* 10e9a785 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e9a788 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a789 call 0x10e9ad60 */
  push32(0x10e9a78eu); f_10e9ad60();
  /* 10e9a78e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a791 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a793 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e9a799 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10e9a79f:;
  /* 10e9a79f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a7a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a7a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a7a7 je 0x10e9a7e7 */
  if (C.zf) goto L_10e9a7e7;
  /* 10e9a7a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a7b0 jg 0x10e9a7e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9a7e7;
  /* 10e9a7b2 jl 0x10e9a7bd */
  if ((C.sf!=C.of)) goto L_10e9a7bd;
  /* 10e9a7b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a7bb jae 0x10e9a7e7 */
  if (!C.cf) goto L_10e9a7e7;
L_10e9a7bd:;
  /* 10e9a7bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e9a7c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9a7c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e9a7cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a7ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9a7d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e9a7d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10e9a7dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a7df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e9a7e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9a7e5 jmp 0x10e9a7ff */
  goto L_10e9a7ff;
L_10e9a7e7:;
  /* 10e9a7e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e9a7ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e9a7f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e9a7f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e9a7ff:;
  /* 10e9a7ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a802 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a808 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a80a jne 0x10e9a827 */
  if (!C.zf) goto L_10e9a827;
  /* 10e9a80c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e9a812 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e9a818 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a81b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e9a821 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e9a827:;
  /* 10e9a827 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a82e jge 0x10e9a83c */
  if ((C.sf==C.of)) goto L_10e9a83c;
  /* 10e9a830 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10e9a83a jmp 0x10e9a845 */
  goto L_10e9a845;
L_10e9a83c:;
  /* 10e9a83c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a83f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a842 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9a845:;
  /* 10e9a845 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e9a84b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a853 jne 0x10e9a85c */
  if (!C.zf) goto L_10e9a85c;
  /* 10e9a855 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e9a85c:;
  /* 10e9a85c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e9a85f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e9a862:;
  /* 10e9a862 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e9a868 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e9a86e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a871 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e9a877 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a879 jg 0x10e9a88f */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9a88f;
  /* 10e9a87b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e9a881 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a887 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a889 je 0x10e9a910 */
  if (C.zf) goto L_10e9a910;
L_10e9a88f:;
  /* 10e9a88f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e9a895 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9a896 push edx */
  push32((uint32_t)(EDX));
  /* 10e9a897 push eax */
  push32((uint32_t)(EAX));
  /* 10e9a898 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e9a89e push edx */
  push32((uint32_t)(EDX));
  /* 10e9a89f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e9a8a5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9a8a6 call 0x10e99c20 */
  push32(0x10e9a8abu); f_10e99c20();
  /* 10e9a8ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a8ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10e9a8b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e9a8ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9a8bb push edx */
  push32((uint32_t)(EDX));
  /* 10e9a8bc push eax */
  push32((uint32_t)(EAX));
  /* 10e9a8bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e9a8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a8c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e9a8ca push edx */
  push32((uint32_t)(EDX));
  /* 10e9a8cb call 0x10e99bb0 */
  push32(0x10e9a8d0u); f_10e99bb0();
  /* 10e9a8d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e9a8d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10e9a8dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a8e3 jle 0x10e9a8f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9a8f7;
  /* 10e9a8e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10e9a8eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a8f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10e9a8f7:;
  /* 10e9a8f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a8fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10e9a900 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e9a902 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a908 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9a90b jmp 0x10e9a862 */
  goto L_10e9a862;
L_10e9a910:;
  /* 10e9a910 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e9a913 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a916 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e9a919 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a91c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a91f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e9a922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a925 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a92a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a92c je 0x10e9a957 */
  if (C.zf) goto L_10e9a957;
  /* 10e9a92e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a931 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9a934 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a937 jne 0x10e9a93f */
  if (!C.zf) goto L_10e9a93f;
  /* 10e9a939 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a93d jne 0x10e9a957 */
  if (!C.zf) goto L_10e9a957;
L_10e9a93f:;
  /* 10e9a93f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a942 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a945 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9a948 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9a94b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10e9a94e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9a951 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9a954 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e9a957:;
  /* 10e9a957 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9a95e jne 0x10e9ab32 */
  if (!C.zf) goto L_10e9ab32;
  /* 10e9a964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a967 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a96a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a96c je 0x10e9a9bd */
  if (C.zf) goto L_10e9a9bd;
  /* 10e9a96e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a971 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9a977 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9a979 je 0x10e9a98b */
  if (C.zf) goto L_10e9a98b;
  /* 10e9a97b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10e9a982 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e9a989 jmp 0x10e9a9bd */
  goto L_10e9a9bd;
L_10e9a98b:;
  /* 10e9a98b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a98e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a991 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a993 je 0x10e9a9a5 */
  if (C.zf) goto L_10e9a9a5;
  /* 10e9a995 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10e9a99c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e9a9a3 jmp 0x10e9a9bd */
  goto L_10e9a9bd;
L_10e9a9a5:;
  /* 10e9a9a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a9a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9a9ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9a9ad je 0x10e9a9bd */
  if (C.zf) goto L_10e9a9bd;
  /* 10e9a9af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10e9a9b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10e9a9bd:;
  /* 10e9a9bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e9a9c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a9c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9a9c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10e9a9cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9a9d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9a9d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9a9d7 jne 0x10e9a9f5 */
  if (!C.zf) goto L_10e9a9f5;
  /* 10e9a9d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e9a9df push eax */
  push32((uint32_t)(EAX));
  /* 10e9a9e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9a9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9a9e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e9a9ea push edx */
  push32((uint32_t)(EDX));
  /* 10e9a9eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e9a9ed call 0x10e9acd0 */
  push32(0x10e9a9f2u); f_10e9acd0();
  /* 10e9a9f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9a9f5:;
  /* 10e9a9f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e9a9fb push eax */
  push32((uint32_t)(EAX));
  /* 10e9a9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9a9ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e9aa00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9aa03 push edx */
  push32((uint32_t)(EDX));
  /* 10e9aa04 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10e9aa0a push eax */
  push32((uint32_t)(EAX));
  /* 10e9aa0b call 0x10e9ad10 */
  push32(0x10e9aa10u); f_10e9ad10();
  /* 10e9aa10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aa13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9aa16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9aa19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9aa1b je 0x10e9aa43 */
  if (C.zf) goto L_10e9aa43;
  /* 10e9aa1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9aa20 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9aa23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9aa25 jne 0x10e9aa43 */
  if (!C.zf) goto L_10e9aa43;
  /* 10e9aa27 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e9aa2d push eax */
  push32((uint32_t)(EAX));
  /* 10e9aa2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9aa31 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9aa32 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e9aa38 push edx */
  push32((uint32_t)(EDX));
  /* 10e9aa39 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e9aa3b call 0x10e9acd0 */
  push32(0x10e9aa40u); f_10e9acd0();
  /* 10e9aa40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9aa43:;
  /* 10e9aa43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9aa47 je 0x10e9aaf1 */
  if (C.zf) goto L_10e9aaf1;
  /* 10e9aa4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9aa51 jle 0x10e9aaf1 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9aaf1;
  /* 10e9aa57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9aa5a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10e9aa60 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9aa63 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10e9aa69:;
  /* 10e9aa69 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e9aa6f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e9aa75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9aa78 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10e9aa7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9aa80 je 0x10e9aaef */
  if (C.zf) goto L_10e9aaef;
  /* 10e9aa82 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e9aa88 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e9aa8b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10e9aa92 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10e9aa99 push eax */
  push32((uint32_t)(EAX));
  /* 10e9aa9a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10e9aaa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9aaa1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e9aaa7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aaaa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10e9aab0 call 0x10e9be80 */
  push32(0x10e9aab5u); f_10e9be80();
  /* 10e9aab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aab8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10e9aabe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9aac5 jg 0x10e9aac9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9aac9;
  /* 10e9aac7 jmp 0x10e9aaef */
  goto L_10e9aaef;
L_10e9aac9:;
  /* 10e9aac9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e9aacf push eax */
  push32((uint32_t)(EAX));
  /* 10e9aad0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9aad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9aad4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10e9aada push edx */
  push32((uint32_t)(EDX));
  /* 10e9aadb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10e9aae1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9aae2 call 0x10e9ad10 */
  push32(0x10e9aae7u); f_10e9ad10();
  /* 10e9aae7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aaea jmp 0x10e9aa69 */
  goto L_10e9aa69;
L_10e9aaef:;
  /* 10e9aaef jmp 0x10e9ab0c */
  goto L_10e9ab0c;
L_10e9aaf1:;
  /* 10e9aaf1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e9aaf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9aaf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9aafb push edx */
  push32((uint32_t)(EDX));
  /* 10e9aafc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9aaff push eax */
  push32((uint32_t)(EAX));
  /* 10e9ab00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9ab03 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ab04 call 0x10e9ad10 */
  push32(0x10e9ab09u); f_10e9ad10();
  /* 10e9ab09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9ab0c:;
  /* 10e9ab0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ab0f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9ab12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9ab14 je 0x10e9ab32 */
  if (C.zf) goto L_10e9ab32;
  /* 10e9ab16 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e9ab1c push eax */
  push32((uint32_t)(EAX));
  /* 10e9ab1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ab20 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ab21 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e9ab27 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ab28 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e9ab2a call 0x10e9acd0 */
  push32(0x10e9ab2fu); f_10e9acd0();
  /* 10e9ab2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9ab32:;
  /* 10e9ab32 jmp 0x10e99f44 */
  goto L_10e99f44;
L_10e9ab37:;
  /* 10e9ab37 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e9ab3d pop edi */
  EDI = (pop32());
  /* 10e9ab3e pop esi */
  ESI = (pop32());
  /* 10e9ab3f pop ebx */
  EBX = (pop32());
  /* 10e9ab40 mov esp, ebp */
  ESP = (EBP);
  /* 10e9ab42 pop ebp */
  EBP = (pop32());
  /* 10e9ab43 ret  */
  ESPCHK(0x10e99f20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x10e9ac50 (119 bytes, 44 insns) */
void f_10e9ac50(void) {
  FTRACE(0x10e9ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ac51 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ac54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac57 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9ac5a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ac5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac60 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e9ac63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac66 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ac6a jl 0x10e9ac92 */
  if ((C.sf!=C.of)) goto L_10e9ac92;
  /* 10e9ac6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9ac71 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e9ac74 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e9ac76 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10e9ac7a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9ac80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9ac83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac86 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e9ac88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ac8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e9ac90 jmp 0x10e9aca5 */
  goto L_10e9aca5;
L_10e9ac92:;
  /* 10e9ac92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ac95 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ac96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ac99 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ac9a call 0x10e99ca0 */
  push32(0x10e9ac9fu); f_10e99ca0();
  /* 10e9ac9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9aca5:;
  /* 10e9aca5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9aca9 jne 0x10e9acb6 */
  if (!C.zf) goto L_10e9acb6;
  /* 10e9acab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9acae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e9acb4 jmp 0x10e9acc3 */
  goto L_10e9acc3;
L_10e9acb6:;
  /* 10e9acb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9acb9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e9acbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9acbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9acc1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e9acc3:;
  /* 10e9acc3 mov esp, ebp */
  ESP = (EBP);
  /* 10e9acc5 pop ebp */
  EBP = (pop32());
  /* 10e9acc6 ret  */
  ESPCHK(0x10e9ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acd0 @ 0x10e9acd0 (53 bytes, 23 insns) */
void f_10e9acd0(void) {
  FTRACE(0x10e9acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9acd1 mov ebp, esp */
  EBP = (ESP);
L_10e9acd3:;
  /* 10e9acd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9acd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9acd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9acdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e9acdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ace1 jle 0x10e9ad03 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9ad03;
  /* 10e9ace3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9ace6 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ace7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9acea push eax */
  push32((uint32_t)(EAX));
  /* 10e9aceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9acee push ecx */
  push32((uint32_t)(ECX));
  /* 10e9acef call 0x10e9ac50 */
  push32(0x10e9acf4u); f_10e9ac50();
  /* 10e9acf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9acf7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9acfa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9acfd jne 0x10e9ad01 */
  if (!C.zf) goto L_10e9ad01;
  /* 10e9acff jmp 0x10e9ad03 */
  goto L_10e9ad03;
L_10e9ad01:;
  /* 10e9ad01 jmp 0x10e9acd3 */
  goto L_10e9acd3;
L_10e9ad03:;
  /* 10e9ad03 pop ebp */
  EBP = (pop32());
  /* 10e9ad04 ret  */
  ESPCHK(0x10e9acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x10e9ad10 (74 bytes, 31 insns) */
void f_10e9ad10(void) {
  FTRACE(0x10e9ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ad11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ad13 push ecx */
  push32((uint32_t)(ECX));
L_10e9ad14:;
  /* 10e9ad14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ad17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ad1a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ad1d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e9ad20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ad22 jle 0x10e9ad56 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9ad56;
  /* 10e9ad24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9ad27 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ad28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ad2b push eax */
  push32((uint32_t)(EAX));
  /* 10e9ad2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad2f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9ad32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9ad35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ad38 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ad39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ad3f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e9ad42 call 0x10e9ac50 */
  push32(0x10e9ad47u); f_10e9ac50();
  /* 10e9ad47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ad4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9ad4d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ad50 jne 0x10e9ad54 */
  if (!C.zf) goto L_10e9ad54;
  /* 10e9ad52 jmp 0x10e9ad56 */
  goto L_10e9ad56;
L_10e9ad54:;
  /* 10e9ad54 jmp 0x10e9ad14 */
  goto L_10e9ad14;
L_10e9ad56:;
  /* 10e9ad56 mov esp, ebp */
  ESP = (EBP);
  /* 10e9ad58 pop ebp */
  EBP = (pop32());
  /* 10e9ad59 ret  */
  ESPCHK(0x10e9ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad60 @ 0x10e9ad60 (26 bytes, 12 insns) */
void f_10e9ad60(void) {
  FTRACE(0x10e9ad60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ad60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ad61 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ad63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9ad68 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ad6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e9ad70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9ad75 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e9ad78 pop ebp */
  EBP = (pop32());
  /* 10e9ad79 ret  */
  ESPCHK(0x10e9ad60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad80 @ 0x10e9ad80 (31 bytes, 14 insns) */
void f_10e9ad80(void) {
  FTRACE(0x10e9ad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ad80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ad81 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ad83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9ad88 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ad8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e9ad90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ad93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9ad95 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ad98 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e9ad9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e9ad9d pop ebp */
  EBP = (pop32());
  /* 10e9ad9e ret  */
  ESPCHK(0x10e9ad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x10e9ada0 (27 bytes, 12 insns) */
void f_10e9ada0(void) {
  FTRACE(0x10e9ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ada1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ada3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ada6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9ada8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9adab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9adae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e9adb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9adb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9adb5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10e9adb9 pop ebp */
  EBP = (pop32());
  /* 10e9adba ret  */
  ESPCHK(0x10e9ada0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10e9adc0 (145 bytes, 42 insns) */
void f_10e9adc0(void) {
  FTRACE(0x10e9adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9adc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9adc4 call 0x10e9ae70 */
  push32(0x10e9adc9u); f_10e9ae70();
  /* 10e9adc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9adcc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e9adce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9add5 jmp 0x10e9ade0 */
  goto L_10e9ade0;
L_10e9add7:;
  /* 10e9add7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9adda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9addd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9ade0:;
  /* 10e9ade0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ade4 jae 0x10e9ae0a */
  if (!C.cf) goto L_10e9ae0a;
  /* 10e9ade6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ade9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9adec cmp ecx, dword ptr [eax*8 + 0x10ebcfc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10ebcfc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9adf3 jne 0x10e9ae08 */
  if (!C.zf) goto L_10e9ae08;
  /* 10e9adf5 call 0x10e9ae60 */
  push32(0x10e9adfau); f_10e9ae60();
  /* 10e9adfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9adfd mov ecx, dword ptr [edx*8 + 0x10ebcfcc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10ebcfcc)));
  /* 10e9ae04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e9ae06 jmp 0x10e9ae4d */
  goto L_10e9ae4d;
L_10e9ae08:;
  /* 10e9ae08 jmp 0x10e9add7 */
  goto L_10e9add7;
L_10e9ae0a:;
  /* 10e9ae0a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae0e jb 0x10e9ae23 */
  if (C.cf) goto L_10e9ae23;
  /* 10e9ae10 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae14 ja 0x10e9ae23 */
  if ((!C.cf&&!C.zf)) goto L_10e9ae23;
  /* 10e9ae16 call 0x10e9ae60 */
  push32(0x10e9ae1bu); f_10e9ae60();
  /* 10e9ae1b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10e9ae21 jmp 0x10e9ae4d */
  goto L_10e9ae4d;
L_10e9ae23:;
  /* 10e9ae23 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae2a jb 0x10e9ae42 */
  if (C.cf) goto L_10e9ae42;
  /* 10e9ae2c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae33 ja 0x10e9ae42 */
  if ((!C.cf&&!C.zf)) goto L_10e9ae42;
  /* 10e9ae35 call 0x10e9ae60 */
  push32(0x10e9ae3au); f_10e9ae60();
  /* 10e9ae3a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10e9ae40 jmp 0x10e9ae4d */
  goto L_10e9ae4d;
L_10e9ae42:;
  /* 10e9ae42 call 0x10e9ae60 */
  push32(0x10e9ae47u); f_10e9ae60();
  /* 10e9ae47 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10e9ae4d:;
  /* 10e9ae4d mov esp, ebp */
  ESP = (EBP);
  /* 10e9ae4f pop ebp */
  EBP = (pop32());
  /* 10e9ae50 ret  */
  ESPCHK(0x10e9adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae60 @ 0x10e9ae60 (13 bytes, 6 insns) */
void f_10e9ae60(void) {
  FTRACE(0x10e9ae60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ae60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ae61 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ae63 call 0x10e929d0 */
  push32(0x10e9ae68u); f_10e929d0();
  /* 10e9ae68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ae6b pop ebp */
  EBP = (pop32());
  /* 10e9ae6c ret  */
  ESPCHK(0x10e9ae60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x10e9ae70 (13 bytes, 6 insns) */
void f_10e9ae70(void) {
  FTRACE(0x10e9ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ae71 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ae73 call 0x10e929d0 */
  push32(0x10e9ae78u); f_10e929d0();
  /* 10e9ae78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ae7b pop ebp */
  EBP = (pop32());
  /* 10e9ae7c ret  */
  ESPCHK(0x10e9ae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x10e9ae80 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10e9ae80(void) {
  FTRACE(0x10e9ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ae81 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ae83 push edi */
  push32((uint32_t)(EDI));
  /* 10e9ae84 push esi */
  push32((uint32_t)(ESI));
  /* 10e9ae85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ae88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ae8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ae8e mov eax, ecx */
  EAX = (ECX);
  /* 10e9ae90 mov edx, ecx */
  EDX = (ECX);
  /* 10e9ae92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ae94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae96 jbe 0x10e9aea0 */
  if ((C.cf||C.zf)) goto L_10e9aea0;
  /* 10e9ae98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ae9a jb 0x10e9b018 */
  if (C.cf) goto L_10e9b018;
L_10e9aea0:;
  /* 10e9aea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e9aea6 jne 0x10e9aebc */
  if (!C.zf) goto L_10e9aebc;
  /* 10e9aea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9aeab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9aeae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9aeb1 jb 0x10e9aedc */
  if (C.cf) goto L_10e9aedc;
  /* 10e9aeb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9aeb5 jmp dword ptr [edx*4 + 0x10e9afc8] */
  switch (EDX) {
    case 0: goto L_10e9afd8;
    case 1: goto L_10e9afe0;
    case 2: goto L_10e9afec;
    case 3: goto L_10e9b000;
    default: x86_unimpl("switch@0x10e9aeb5 out of table"); return;
  }
L_10e9aebc:;
  /* 10e9aebc mov eax, edi */
  EAX = (EDI);
  /* 10e9aebe mov edx, 3 */
  EDX = (0x3u);
  /* 10e9aec3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9aec6 jb 0x10e9aed4 */
  if (C.cf) goto L_10e9aed4;
  /* 10e9aec8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9aecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9aecd jmp dword ptr [eax*4 + 0x10e9aee0] */
  switch (EAX) {
    case 1: goto L_10e9aef0;
    case 2: goto L_10e9af1c;
    case 3: goto L_10e9af40;
    default: x86_unimpl("switch@0x10e9aecd out of table"); return;
  }
L_10e9aed4:;
  /* 10e9aed4 jmp dword ptr [ecx*4 + 0x10e9afd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e9afd8)))); return;
  /* 10e9aedb nop  */
  /* nop */
L_10e9aedc:;
  /* 10e9aedc jmp dword ptr [ecx*4 + 0x10e9af5c] */
  switch (ECX) {
    case 0: goto L_10e9afbf;
    case 1: goto L_10e9afac;
    case 2: goto L_10e9afa4;
    case 3: goto L_10e9af9c;
    case 4: goto L_10e9af94;
    case 5: goto L_10e9af8c;
    case 6: goto L_10e9af84;
    case 7: goto L_10e9af7c;
    default: x86_unimpl("switch@0x10e9aedc out of table"); return;
  }
  /* 10e9aee3 nop  */
  /* nop */
L_10e9aef0:;
  /* 10e9aef0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9aef2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9aef4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9aef6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9aef9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9aefc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9aeff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9af02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9af05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9af08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9af0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9af0e jb 0x10e9aedc */
  if (C.cf) goto L_10e9aedc;
  /* 10e9af10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9af12 jmp dword ptr [edx*4 + 0x10e9afc8] */
  switch (EDX) {
    case 0: goto L_10e9afd8;
    case 1: goto L_10e9afe0;
    case 2: goto L_10e9afec;
    case 3: goto L_10e9b000;
    default: x86_unimpl("switch@0x10e9af12 out of table"); return;
  }
  /* 10e9af19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9af1c:;
  /* 10e9af1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9af1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9af20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9af22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9af25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9af28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9af2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9af2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9af31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9af34 jb 0x10e9aedc */
  if (C.cf) goto L_10e9aedc;
  /* 10e9af36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9af38 jmp dword ptr [edx*4 + 0x10e9afc8] */
  switch (EDX) {
    case 0: goto L_10e9afd8;
    case 1: goto L_10e9afe0;
    case 2: goto L_10e9afec;
    case 3: goto L_10e9b000;
    default: x86_unimpl("switch@0x10e9af38 out of table"); return;
  }
  /* 10e9af3f nop  */
  /* nop */
L_10e9af40:;
  /* 10e9af40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9af42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9af44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9af46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e9af47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9af4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e9af4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9af4e jb 0x10e9aedc */
  if (C.cf) goto L_10e9aedc;
  /* 10e9af50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9af52 jmp dword ptr [edx*4 + 0x10e9afc8] */
  switch (EDX) {
    case 0: goto L_10e9afd8;
    case 1: goto L_10e9afe0;
    case 2: goto L_10e9afec;
    case 3: goto L_10e9b000;
    default: x86_unimpl("switch@0x10e9af52 out of table"); return;
  }
  /* 10e9af59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9af7c:;
  /* 10e9af7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e9af80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e9af84:;
  /* 10e9af84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e9af88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e9af8c:;
  /* 10e9af8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e9af90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e9af94:;
  /* 10e9af94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e9af98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e9af9c:;
  /* 10e9af9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e9afa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e9afa4:;
  /* 10e9afa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e9afa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e9afac:;
  /* 10e9afac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e9afb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e9afb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e9afbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9afbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e9afbf:;
  /* 10e9afbf jmp dword ptr [edx*4 + 0x10e9afc8] */
  switch (EDX) {
    case 0: goto L_10e9afd8;
    case 1: goto L_10e9afe0;
    case 2: goto L_10e9afec;
    case 3: goto L_10e9b000;
    default: x86_unimpl("switch@0x10e9afbf out of table"); return;
  }
  /* 10e9afc6 mov edi, edi */
  EDI = (EDI);
L_10e9afd8:;
  /* 10e9afd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9afdb pop esi */
  ESI = (pop32());
  /* 10e9afdc pop edi */
  EDI = (pop32());
  /* 10e9afdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9afde ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9afdf nop  */
  /* nop */
L_10e9afe0:;
  /* 10e9afe0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9afe2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9afe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9afe7 pop esi */
  ESI = (pop32());
  /* 10e9afe8 pop edi */
  EDI = (pop32());
  /* 10e9afe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9afea ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9afeb nop  */
  /* nop */
L_10e9afec:;
  /* 10e9afec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9afee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9aff0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9aff3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9aff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9aff9 pop esi */
  ESI = (pop32());
  /* 10e9affa pop edi */
  EDI = (pop32());
  /* 10e9affb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9affc ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9affd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9b000:;
  /* 10e9b000 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9b002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9b004 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9b007 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9b00a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9b00d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9b010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b013 pop esi */
  ESI = (pop32());
  /* 10e9b014 pop edi */
  EDI = (pop32());
  /* 10e9b015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9b016 ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9b017 nop  */
  /* nop */
L_10e9b018:;
  /* 10e9b018 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e9b01c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e9b020 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e9b026 jne 0x10e9b04c */
  if (!C.zf) goto L_10e9b04c;
  /* 10e9b028 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9b02b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b02e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b031 jb 0x10e9b040 */
  if (C.cf) goto L_10e9b040;
  /* 10e9b033 std  */
  C.df=1;
  /* 10e9b034 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9b036 cld  */
  C.df=0;
  /* 10e9b037 jmp dword ptr [edx*4 + 0x10e9b160] */
  switch (EDX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b037 out of table"); return;
  }
  /* 10e9b03e mov edi, edi */
  EDI = (EDI);
L_10e9b040:;
  /* 10e9b040 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9b042 jmp dword ptr [ecx*4 + 0x10e9b110] */
  switch (ECX) {
    case 0: goto L_10e9b157;
    default: x86_unimpl("switch@0x10e9b042 out of table"); return;
  }
  /* 10e9b049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9b04c:;
  /* 10e9b04c mov eax, edi */
  EAX = (EDI);
  /* 10e9b04e mov edx, 3 */
  EDX = (0x3u);
  /* 10e9b053 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b056 jb 0x10e9b064 */
  if (C.cf) goto L_10e9b064;
  /* 10e9b058 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b05b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b05d jmp dword ptr [eax*4 + 0x10e9b068] */
  switch (EAX) {
    case 1: goto L_10e9b078;
    case 2: goto L_10e9b098;
    case 3: goto L_10e9b0c0;
    default: x86_unimpl("switch@0x10e9b05d out of table"); return;
  }
L_10e9b064:;
  /* 10e9b064 jmp dword ptr [ecx*4 + 0x10e9b160] */
  switch (ECX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b064 out of table"); return;
  }
  /* 10e9b06b nop  */
  /* nop */
L_10e9b078:;
  /* 10e9b078 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b07b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b07d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b080 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e9b081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9b084 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e9b085 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b088 jb 0x10e9b040 */
  if (C.cf) goto L_10e9b040;
  /* 10e9b08a std  */
  C.df=1;
  /* 10e9b08b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9b08d cld  */
  C.df=0;
  /* 10e9b08e jmp dword ptr [edx*4 + 0x10e9b160] */
  switch (EDX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b08e out of table"); return;
  }
  /* 10e9b095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9b098:;
  /* 10e9b098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b09b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b09d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b0a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9b0a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9b0a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9b0a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b0ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b0af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b0b2 jb 0x10e9b040 */
  if (C.cf) goto L_10e9b040;
  /* 10e9b0b4 std  */
  C.df=1;
  /* 10e9b0b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9b0b7 cld  */
  C.df=0;
  /* 10e9b0b8 jmp dword ptr [edx*4 + 0x10e9b160] */
  switch (EDX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b0b8 out of table"); return;
  }
  /* 10e9b0bf nop  */
  /* nop */
L_10e9b0c0:;
  /* 10e9b0c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b0c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b0c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b0c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9b0cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9b0ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9b0d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e9b0d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9b0d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b0da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b0dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b0e0 jb 0x10e9b040 */
  if (C.cf) goto L_10e9b040;
  /* 10e9b0e6 std  */
  C.df=1;
  /* 10e9b0e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e9b0e9 cld  */
  C.df=0;
  /* 10e9b0ea jmp dword ptr [edx*4 + 0x10e9b160] */
  switch (EDX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b0ea out of table"); return;
  }
  /* 10e9b0f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e9b0f4 adc al, 0xb1 */
  { uint32_t _a=(AL),_b=(0xb1u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e9b0f6 jmp 0xfa9acd0b */
  jmp_ind(0xfa9acd0bu); return;
  /* 10e9b0fb adc byte ptr [ecx + esi*4], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + ESI*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e9b0fe jmp 0xfa9add13 */
  jmp_ind(0xfa9add13u); return;
  /* 10e9b103 adc byte ptr [ecx + esi*4], dh */
  { uint32_t _a=(r8((uint32_t)(ECX + ESI*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e9b106 jmp 0xfa9aed1b */
  jmp_ind(0xfa9aed1bu); return;
  /* 10e9b10b adc byte ptr [ecx + esi*4 - 0x17], al */
  { uint32_t _a=(r8((uint32_t)(ECX + ESI*4 + -0x17))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ESI*4 + -0x17), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e9b114 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e9b118 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e9b11c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e9b120 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e9b124 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e9b128 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e9b12c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e9b130 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e9b134 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e9b138 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e9b13c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e9b140 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e9b144 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e9b148 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e9b14c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e9b153 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b155 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e9b157:;
  /* 10e9b157 jmp dword ptr [edx*4 + 0x10e9b160] */
  switch (EDX) {
    case 0: goto L_10e9b170;
    case 1: goto L_10e9b178;
    case 2: goto L_10e9b188;
    case 3: goto L_10e9b19c;
    default: x86_unimpl("switch@0x10e9b157 out of table"); return;
  }
  /* 10e9b15e mov edi, edi */
  EDI = (EDI);
L_10e9b170:;
  /* 10e9b170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b173 pop esi */
  ESI = (pop32());
  /* 10e9b174 pop edi */
  EDI = (pop32());
  /* 10e9b175 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9b176 ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9b177 nop  */
  /* nop */
L_10e9b178:;
  /* 10e9b178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b17b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b17e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b181 pop esi */
  ESI = (pop32());
  /* 10e9b182 pop edi */
  EDI = (pop32());
  /* 10e9b183 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9b184 ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9b185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9b188:;
  /* 10e9b188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b18b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b18e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9b191 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9b194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b197 pop esi */
  ESI = (pop32());
  /* 10e9b198 pop edi */
  EDI = (pop32());
  /* 10e9b199 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9b19a ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
  /* 10e9b19b nop  */
  /* nop */
L_10e9b19c:;
  /* 10e9b19c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e9b19f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e9b1a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e9b1a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e9b1a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e9b1ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e9b1ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b1b1 pop esi */
  ESI = (pop32());
  /* 10e9b1b2 pop edi */
  EDI = (pop32());
  /* 10e9b1b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9b1b4 ret  */
  ESPCHK(0x10e9ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x10e9b1c0 (421 bytes, 148 insns) */
void f_10e9b1c0(void) {
  FTRACE(0x10e9b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b1c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e9b1c5 push 0x10eb9f80 */
  push32((uint32_t)(0x10eb9f80u));
  /* 10e9b1ca push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10e9b1cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e9b1d5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b1d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e9b1dd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b1e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9b1e1 push esi */
  push32((uint32_t)(ESI));
  /* 10e9b1e2 push edi */
  push32((uint32_t)(EDI));
  /* 10e9b1e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e9b1e6 cmp dword ptr [0x10ebe674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b1ed jne 0x10e9b23e */
  if (!C.zf) goto L_10e9b23e;
  /* 10e9b1ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10e9b1f2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b1f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b1f5 push 0x10eb9f78 */
  push32((uint32_t)(0x10eb9f78u));
  /* 10e9b1fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b1fc call dword ptr [0x10ec02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c4))), 0x10e9b202u);
  /* 10e9b202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b204 je 0x10e9b212 */
  if (C.zf) goto L_10e9b212;
  /* 10e9b206 mov dword ptr [0x10ebe674], 1 */
  w32((uint32_t)(0x10ebe674), (0x1u));
  /* 10e9b210 jmp 0x10e9b23e */
  goto L_10e9b23e;
L_10e9b212:;
  /* 10e9b212 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10e9b215 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b216 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b218 push 0x10eb9f74 */
  push32((uint32_t)(0x10eb9f74u));
  /* 10e9b21d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b21f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b221 call dword ptr [0x10ec02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c8))), 0x10e9b227u);
  /* 10e9b227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b229 je 0x10e9b237 */
  if (C.zf) goto L_10e9b237;
  /* 10e9b22b mov dword ptr [0x10ebe674], 2 */
  w32((uint32_t)(0x10ebe674), (0x2u));
  /* 10e9b235 jmp 0x10e9b23e */
  goto L_10e9b23e;
L_10e9b237:;
  /* 10e9b237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b239 jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b23e:;
  /* 10e9b23e cmp dword ptr [0x10ebe674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b245 jne 0x10e9b275 */
  if (!C.zf) goto L_10e9b275;
  /* 10e9b247 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b24b jne 0x10e9b256 */
  if (!C.zf) goto L_10e9b256;
  /* 10e9b24d mov edx, dword ptr [0x10ebe680] */
  EDX = (r32((uint32_t)(0x10ebe680)));
  /* 10e9b253 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10e9b256:;
  /* 10e9b256 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b259 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b25a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b25d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b25e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b261 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b265 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b266 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e9b269 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b26a call dword ptr [0x10ec02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c8))), 0x10e9b270u);
  /* 10e9b270 jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b275:;
  /* 10e9b275 cmp dword ptr [0x10ebe674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b27c jne 0x10e9b366 */
  if (!C.zf) goto L_10e9b366;
  /* 10e9b282 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b286 jne 0x10e9b291 */
  if (!C.zf) goto L_10e9b291;
  /* 10e9b288 mov edx, dword ptr [0x10ebe690] */
  EDX = (r32((uint32_t)(0x10ebe690)));
  /* 10e9b28e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10e9b291:;
  /* 10e9b291 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b295 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b298 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b299 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b29c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b29d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e9b2a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9b2a2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b2a4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b2a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b2aa push edx */
  push32((uint32_t)(EDX));
  /* 10e9b2ab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9b2ae push eax */
  push32((uint32_t)(EAX));
  /* 10e9b2af call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10e9b2b5u);
  /* 10e9b2b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9b2b8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b2bc jne 0x10e9b2c5 */
  if (!C.zf) goto L_10e9b2c5;
  /* 10e9b2be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b2c0 jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b2c5:;
  /* 10e9b2c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9b2cc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b2cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9b2d1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b2d4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e9b2d6 call 0x10e96130 */
  push32(0x10e9b2dbu); f_10e96130();
  /* 10e9b2db mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10e9b2de mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e9b2e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9b2e4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e9b2e7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b2ea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e9b2ec push edx */
  push32((uint32_t)(EDX));
  /* 10e9b2ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b2ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b2f2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b2f3 call 0x10e96d00 */
  push32(0x10e9b2f8u); f_10e96d00();
  /* 10e9b2f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b2fb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e9b302 jmp 0x10e9b31b */
  goto L_10e9b31b;
  /* 10e9b304 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9b309 ret  */
  ESPCHK(0x10e9b1c0u, _esp0);
  ESP += 4; return;
  /* 10e9b30a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9b30d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e9b314 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9b31b:;
  /* 10e9b31b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b31f jne 0x10e9b325 */
  if (!C.zf) goto L_10e9b325;
  /* 10e9b321 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b323 jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b325:;
  /* 10e9b325 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b328 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b329 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b32c push edx */
  push32((uint32_t)(EDX));
  /* 10e9b32d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b330 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b331 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b334 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b335 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b337 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9b33a push edx */
  push32((uint32_t)(EDX));
  /* 10e9b33b call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10e9b341u);
  /* 10e9b341 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e9b344 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b348 jne 0x10e9b34e */
  if (!C.zf) goto L_10e9b34e;
  /* 10e9b34a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b34c jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b34e:;
  /* 10e9b34e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b351 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b352 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9b355 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b356 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b359 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b35a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b35d push eax */
  push32((uint32_t)(EAX));
  /* 10e9b35e call dword ptr [0x10ec02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c4))), 0x10e9b364u);
  /* 10e9b364 jmp 0x10e9b368 */
  goto L_10e9b368;
L_10e9b366:;
  /* 10e9b366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9b368:;
  /* 10e9b368 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10e9b36b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9b36e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e9b375 pop edi */
  EDI = (pop32());
  /* 10e9b376 pop esi */
  ESI = (pop32());
  /* 10e9b377 pop ebx */
  EBX = (pop32());
  /* 10e9b378 mov esp, ebp */
  ESP = (EBP);
  /* 10e9b37a pop ebp */
  EBP = (pop32());
  /* 10e9b37b ret  */
  ESPCHK(0x10e9b1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b380 @ 0x10e9b380 (727 bytes, 263 insns) */
void f_10e9b380(void) {
  FTRACE(0x10e9b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b380 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b381 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b383 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e9b385 push 0x10eb9f90 */
  push32((uint32_t)(0x10eb9f90u));
  /* 10e9b38a push 0x10e9c098 */
  push32((uint32_t)(0x10e9c098u));
  /* 10e9b38f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e9b395 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b396 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e9b39d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b3a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9b3a1 push esi */
  push32((uint32_t)(ESI));
  /* 10e9b3a2 push edi */
  push32((uint32_t)(EDI));
  /* 10e9b3a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e9b3a6 cmp dword ptr [0x10ebe698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b3ad jne 0x10e9b406 */
  if (!C.zf) goto L_10e9b406;
  /* 10e9b3af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b3b5 push 0x10eb9f78 */
  push32((uint32_t)(0x10eb9f78u));
  /* 10e9b3ba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9b3bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3c1 call dword ptr [0x10ec02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02bc))), 0x10e9b3c7u);
  /* 10e9b3c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b3c9 je 0x10e9b3d7 */
  if (C.zf) goto L_10e9b3d7;
  /* 10e9b3cb mov dword ptr [0x10ebe698], 1 */
  w32((uint32_t)(0x10ebe698), (0x1u));
  /* 10e9b3d5 jmp 0x10e9b406 */
  goto L_10e9b406;
L_10e9b3d7:;
  /* 10e9b3d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3db push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b3dd push 0x10eb9f74 */
  push32((uint32_t)(0x10eb9f74u));
  /* 10e9b3e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9b3e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b3e9 call dword ptr [0x10ec02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c0))), 0x10e9b3efu);
  /* 10e9b3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b3f1 je 0x10e9b3ff */
  if (C.zf) goto L_10e9b3ff;
  /* 10e9b3f3 mov dword ptr [0x10ebe698], 2 */
  w32((uint32_t)(0x10ebe698), (0x2u));
  /* 10e9b3fd jmp 0x10e9b406 */
  goto L_10e9b406;
L_10e9b3ff:;
  /* 10e9b3ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b401 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b406:;
  /* 10e9b406 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b40a jle 0x10e9b41f */
  if ((C.zf||C.sf!=C.of)) goto L_10e9b41f;
  /* 10e9b40c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b40f push eax */
  push32((uint32_t)(EAX));
  /* 10e9b410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b413 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b414 call 0x10e9b690 */
  push32(0x10e9b419u); f_10e9b690();
  /* 10e9b419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b41c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10e9b41f:;
  /* 10e9b41f cmp dword ptr [0x10ebe698], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe698))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b426 jne 0x10e9b44b */
  if (!C.zf) goto L_10e9b44b;
  /* 10e9b428 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e9b42b push edx */
  push32((uint32_t)(EDX));
  /* 10e9b42c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9b42f push eax */
  push32((uint32_t)(EAX));
  /* 10e9b430 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b433 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b434 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b437 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b438 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b43b push eax */
  push32((uint32_t)(EAX));
  /* 10e9b43c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b43f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b440 call dword ptr [0x10ec02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02c0))), 0x10e9b446u);
  /* 10e9b446 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b44b:;
  /* 10e9b44b cmp dword ptr [0x10ebe698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b452 jne 0x10e9b66f */
  if (!C.zf) goto L_10e9b66f;
  /* 10e9b458 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b45c jne 0x10e9b467 */
  if (!C.zf) goto L_10e9b467;
  /* 10e9b45e mov edx, dword ptr [0x10ebe690] */
  EDX = (r32((uint32_t)(0x10ebe690)));
  /* 10e9b464 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10e9b467:;
  /* 10e9b467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b469 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b46b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b46e push eax */
  push32((uint32_t)(EAX));
  /* 10e9b46f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b472 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b473 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e9b476 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9b478 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b47a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b47d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b480 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b481 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e9b484 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b485 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10e9b48bu);
  /* 10e9b48b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e9b48e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b492 jne 0x10e9b49b */
  if (!C.zf) goto L_10e9b49b;
  /* 10e9b494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b496 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b49b:;
  /* 10e9b49b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9b4a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9b4a5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9b4a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b4aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e9b4ac call 0x10e96130 */
  push32(0x10e9b4b1u); f_10e96130();
  /* 10e9b4b1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10e9b4b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e9b4b7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9b4ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e9b4bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e9b4c4 jmp 0x10e9b4dd */
  goto L_10e9b4dd;
  /* 10e9b4c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9b4cb ret  */
  ESPCHK(0x10e9b380u, _esp0);
  ESP += 4; return;
  /* 10e9b4cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9b4cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e9b4d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9b4dd:;
  /* 10e9b4dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b4e1 jne 0x10e9b4ea */
  if (!C.zf) goto L_10e9b4ea;
  /* 10e9b4e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b4e5 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b4ea:;
  /* 10e9b4ea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9b4ed push edx */
  push32((uint32_t)(EDX));
  /* 10e9b4ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b4f1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b4f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9b4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b4f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b4f9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b4fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9b4fc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e9b4ff push eax */
  push32((uint32_t)(EAX));
  /* 10e9b500 call dword ptr [0x10ec02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02cc))), 0x10e9b506u);
  /* 10e9b506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b508 jne 0x10e9b511 */
  if (!C.zf) goto L_10e9b511;
  /* 10e9b50a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b50c jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b511:;
  /* 10e9b511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b515 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9b518 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b519 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b51c push edx */
  push32((uint32_t)(EDX));
  /* 10e9b51d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b520 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b524 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b525 call dword ptr [0x10ec02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02bc))), 0x10e9b52bu);
  /* 10e9b52b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e9b52e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b532 jne 0x10e9b53b */
  if (!C.zf) goto L_10e9b53b;
  /* 10e9b534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b536 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b53b:;
  /* 10e9b53b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b53e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b544 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9b546 je 0x10e9b58b */
  if (C.zf) goto L_10e9b58b;
  /* 10e9b548 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b54c je 0x10e9b586 */
  if (C.zf) goto L_10e9b586;
  /* 10e9b54e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9b551 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b554 jle 0x10e9b55d */
  if ((C.zf||C.sf!=C.of)) goto L_10e9b55d;
  /* 10e9b556 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b558 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b55d:;
  /* 10e9b55d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e9b560 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b561 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9b564 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b565 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9b568 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b569 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b56c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b56d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b570 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b574 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b575 call dword ptr [0x10ec02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02bc))), 0x10e9b57bu);
  /* 10e9b57b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b57d jne 0x10e9b586 */
  if (!C.zf) goto L_10e9b586;
  /* 10e9b57f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b581 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b586:;
  /* 10e9b586 jmp 0x10e9b66a */
  goto L_10e9b66a;
L_10e9b58b:;
  /* 10e9b58b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9b58e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e9b591 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e9b598 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9b59b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9b59d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b5a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e9b5a2 call 0x10e96130 */
  push32(0x10e9b5a7u); f_10e96130();
  /* 10e9b5a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10e9b5aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e9b5ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e9b5b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e9b5b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e9b5ba jmp 0x10e9b5d3 */
  goto L_10e9b5d3;
  /* 10e9b5bc mov eax, 1 */
  EAX = (0x1u);
  /* 10e9b5c1 ret  */
  ESPCHK(0x10e9b380u, _esp0);
  ESP += 4; return;
  /* 10e9b5c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9b5c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e9b5cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9b5d3:;
  /* 10e9b5d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b5d7 jne 0x10e9b5e0 */
  if (!C.zf) goto L_10e9b5e0;
  /* 10e9b5d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b5db jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b5e0:;
  /* 10e9b5e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9b5e3 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b5e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b5e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b5e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9b5eb push edx */
  push32((uint32_t)(EDX));
  /* 10e9b5ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9b5ef push eax */
  push32((uint32_t)(EAX));
  /* 10e9b5f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b5f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b5f7 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b5f8 call dword ptr [0x10ec02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02bc))), 0x10e9b5feu);
  /* 10e9b5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b600 jne 0x10e9b606 */
  if (!C.zf) goto L_10e9b606;
  /* 10e9b602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b604 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b606:;
  /* 10e9b606 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b60a jne 0x10e9b63a */
  if (!C.zf) goto L_10e9b63a;
  /* 10e9b60c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b60e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b614 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9b617 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b618 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b61b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b61c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e9b621 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e9b624 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b625 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10e9b62bu);
  /* 10e9b62b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e9b62e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b632 jne 0x10e9b638 */
  if (!C.zf) goto L_10e9b638;
  /* 10e9b634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b636 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b638:;
  /* 10e9b638 jmp 0x10e9b66a */
  goto L_10e9b66a;
L_10e9b63a:;
  /* 10e9b63a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b63c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b63e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e9b641 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b642 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9b645 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b646 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9b649 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b64a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9b64d push eax */
  push32((uint32_t)(EAX));
  /* 10e9b64e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e9b653 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e9b656 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b657 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10e9b65du);
  /* 10e9b65d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e9b660 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b664 jne 0x10e9b66a */
  if (!C.zf) goto L_10e9b66a;
  /* 10e9b666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b668 jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b66a:;
  /* 10e9b66a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9b66d jmp 0x10e9b671 */
  goto L_10e9b671;
L_10e9b66f:;
  /* 10e9b66f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9b671:;
  /* 10e9b671 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10e9b674 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9b677 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e9b67e pop edi */
  EDI = (pop32());
  /* 10e9b67f pop esi */
  ESI = (pop32());
  /* 10e9b680 pop ebx */
  EBX = (pop32());
  /* 10e9b681 mov esp, ebp */
  ESP = (EBP);
  /* 10e9b683 pop ebp */
  EBP = (pop32());
  /* 10e9b684 ret  */
  ESPCHK(0x10e9b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x10e9b690 (80 bytes, 32 insns) */
void f_10e9b690(void) {
  FTRACE(0x10e9b690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b691 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b699 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9b69c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b69f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9b6a2:;
  /* 10e9b6a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b6a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b6a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b6ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9b6ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9b6b0 je 0x10e9b6c7 */
  if (C.zf) goto L_10e9b6c7;
  /* 10e9b6b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b6b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9b6b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9b6ba je 0x10e9b6c7 */
  if (C.zf) goto L_10e9b6c7;
  /* 10e9b6bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b6bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b6c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9b6c5 jmp 0x10e9b6a2 */
  goto L_10e9b6a2;
L_10e9b6c7:;
  /* 10e9b6c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b6ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9b6cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9b6cf jne 0x10e9b6d9 */
  if (!C.zf) goto L_10e9b6d9;
  /* 10e9b6d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b6d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b6d7 jmp 0x10e9b6dc */
  goto L_10e9b6dc;
L_10e9b6d9:;
  /* 10e9b6d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10e9b6dc:;
  /* 10e9b6dc mov esp, ebp */
  ESP = (EBP);
  /* 10e9b6de pop ebp */
  EBP = (pop32());
  /* 10e9b6df ret  */
  ESPCHK(0x10e9b690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x10e9b6e0 (130 bytes, 43 insns) */
void f_10e9b6e0(void) {
  FTRACE(0x10e9b6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b6e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b6e7 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b6ed jae 0x10e9b711 */
  if (!C.cf) goto L_10e9b711;
  /* 10e9b6ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b6f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9b6f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b6f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b6fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b6fe mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9b705 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9b70a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b70d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9b70f jne 0x10e9b72c */
  if (!C.zf) goto L_10e9b72c;
L_10e9b711:;
  /* 10e9b711 call 0x10e9ae60 */
  push32(0x10e9b716u); f_10e9ae60();
  /* 10e9b716 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9b71c call 0x10e9ae70 */
  push32(0x10e9b721u); f_10e9ae70();
  /* 10e9b721 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9b727 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b72a jmp 0x10e9b75e */
  goto L_10e9b75e;
L_10e9b72c:;
  /* 10e9b72c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b72f push edx */
  push32((uint32_t)(EDX));
  /* 10e9b730 call 0x10e9c680 */
  push32(0x10e9b735u); f_10e9c680();
  /* 10e9b735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b738 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b73b push eax */
  push32((uint32_t)(EAX));
  /* 10e9b73c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b73f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b743 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b744 call 0x10e9b770 */
  push32(0x10e9b749u); f_10e9b770();
  /* 10e9b749 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b74c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9b74f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b752 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b753 call 0x10e9c710 */
  push32(0x10e9b758u); f_10e9c710();
  /* 10e9b758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9b75e:;
  /* 10e9b75e mov esp, ebp */
  ESP = (EBP);
  /* 10e9b760 pop ebp */
  EBP = (pop32());
  /* 10e9b761 ret  */
  ESPCHK(0x10e9b6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x10e9b770 (178 bytes, 56 insns) */
void f_10e9b770(void) {
  FTRACE(0x10e9b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b770 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b771 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b779 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b77a call 0x10e9c500 */
  push32(0x10e9b77fu); f_10e9c500();
  /* 10e9b77f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b782 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9b785 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b789 jne 0x10e9b79e */
  if (!C.zf) goto L_10e9b79e;
  /* 10e9b78b call 0x10e9ae60 */
  push32(0x10e9b790u); f_10e9ae60();
  /* 10e9b790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9b796 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b799 jmp 0x10e9b81e */
  goto L_10e9b81e;
L_10e9b79e:;
  /* 10e9b79e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b7a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b7a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b7a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b7a7 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b7a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9b7ab push eax */
  push32((uint32_t)(EAX));
  /* 10e9b7ac call dword ptr [0x10ec02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b8))), 0x10e9b7b2u);
  /* 10e9b7b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9b7b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b7b9 jne 0x10e9b7c6 */
  if (!C.zf) goto L_10e9b7c6;
  /* 10e9b7bb call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9b7c1u);
  /* 10e9b7c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9b7c4 jmp 0x10e9b7cd */
  goto L_10e9b7cd;
L_10e9b7c6:;
  /* 10e9b7c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e9b7cd:;
  /* 10e9b7cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b7d1 je 0x10e9b7e4 */
  if (C.zf) goto L_10e9b7e4;
  /* 10e9b7d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b7d7 call 0x10e9adc0 */
  push32(0x10e9b7dcu); f_10e9adc0();
  /* 10e9b7dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b7df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b7e2 jmp 0x10e9b81e */
  goto L_10e9b81e;
L_10e9b7e4:;
  /* 10e9b7e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b7e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e9b7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b7ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b7f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b7f3 mov ecx, dword ptr [edx*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9b7fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10e9b7fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10e9b801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b804 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9b807 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b80a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b80d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b810 mov eax, dword ptr [eax*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9b817 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10e9b81b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e9b81e:;
  /* 10e9b81e mov esp, ebp */
  ESP = (EBP);
  /* 10e9b820 pop ebp */
  EBP = (pop32());
  /* 10e9b821 ret  */
  ESPCHK(0x10e9b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b830 @ 0x10e9b830 (130 bytes, 43 insns) */
void f_10e9b830(void) {
  FTRACE(0x10e9b830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b830 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b831 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b833 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b837 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b83d jae 0x10e9b861 */
  if (!C.cf) goto L_10e9b861;
  /* 10e9b83f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b842 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9b845 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b848 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b84b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b84e mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9b855 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9b85a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b85d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9b85f jne 0x10e9b87c */
  if (!C.zf) goto L_10e9b87c;
L_10e9b861:;
  /* 10e9b861 call 0x10e9ae60 */
  push32(0x10e9b866u); f_10e9ae60();
  /* 10e9b866 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9b86c call 0x10e9ae70 */
  push32(0x10e9b871u); f_10e9ae70();
  /* 10e9b871 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9b877 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b87a jmp 0x10e9b8ae */
  goto L_10e9b8ae;
L_10e9b87c:;
  /* 10e9b87c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b87f push edx */
  push32((uint32_t)(EDX));
  /* 10e9b880 call 0x10e9c680 */
  push32(0x10e9b885u); f_10e9c680();
  /* 10e9b885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b888 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9b88b push eax */
  push32((uint32_t)(EAX));
  /* 10e9b88c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b88f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9b890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b893 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b894 call 0x10e9b8c0 */
  push32(0x10e9b899u); f_10e9b8c0();
  /* 10e9b899 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b89c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9b89f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b8a2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9b8a3 call 0x10e9c710 */
  push32(0x10e9b8a8u); f_10e9c710();
  /* 10e9b8a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b8ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9b8ae:;
  /* 10e9b8ae mov esp, ebp */
  ESP = (EBP);
  /* 10e9b8b0 pop ebp */
  EBP = (pop32());
  /* 10e9b8b1 ret  */
  ESPCHK(0x10e9b830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x10e9b8c0 (627 bytes, 182 insns) */
void f_10e9b8c0(void) {
  FTRACE(0x10e9b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9b8c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b8c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9b8d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9b8d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10e9b8d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b8dd jne 0x10e9b8e6 */
  if (!C.zf) goto L_10e9b8e6;
  /* 10e9b8df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b8e1 jmp 0x10e9bb2f */
  goto L_10e9bb2f;
L_10e9b8e6:;
  /* 10e9b8e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b8e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9b8ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b8ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9b8f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b8f5 mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9b8fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9b901 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b904 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9b906 je 0x10e9b918 */
  if (C.zf) goto L_10e9b918;
  /* 10e9b908 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9b90a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b90f push edx */
  push32((uint32_t)(EDX));
  /* 10e9b910 call 0x10e9b770 */
  push32(0x10e9b915u); f_10e9b770();
  /* 10e9b915 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9b918:;
  /* 10e9b918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b91b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9b91e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b921 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b924 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9b927 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9b92e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e9b933 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9b938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9b93a je 0x10e9ba4c */
  if (C.zf) goto L_10e9ba4c;
  /* 10e9b940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9b943 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9b946 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e9b94d:;
  /* 10e9b94d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b950 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b953 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b956 jae 0x10e9ba4a */
  if (!C.cf) goto L_10e9ba4a;
  /* 10e9b95c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e9b962 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e9b965:;
  /* 10e9b965 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b968 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e9b96e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b970 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b976 jge 0x10e9b9d7 */
  if ((C.sf==C.of)) goto L_10e9b9d7;
  /* 10e9b978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b97b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b97e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b981 jae 0x10e9b9d7 */
  if (!C.cf) goto L_10e9b9d7;
  /* 10e9b983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e9b988 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10e9b98e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9b991 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b994 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9b997 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10e9b99e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9b9a1 jne 0x10e9b9c1 */
  if (!C.zf) goto L_10e9b9c1;
  /* 10e9b9a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10e9b9a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b9ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10e9b9b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b9b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10e9b9b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b9bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b9be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e9b9c1:;
  /* 10e9b9c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b9c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10e9b9ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e9b9cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b9cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9b9d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9b9d5 jmp 0x10e9b965 */
  goto L_10e9b965;
L_10e9b9d7:;
  /* 10e9b9d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9b9d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e9b9df push edx */
  push32((uint32_t)(EDX));
  /* 10e9b9e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9b9e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10e9b9e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9b9eb push eax */
  push32((uint32_t)(EAX));
  /* 10e9b9ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e9b9f2 push edx */
  push32((uint32_t)(EDX));
  /* 10e9b9f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b9f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9b9f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9b9fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9b9ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9ba02 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9ba09 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10e9ba0c push eax */
  push32((uint32_t)(EAX));
  /* 10e9ba0d call dword ptr [0x10ec02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f0))), 0x10e9ba13u);
  /* 10e9ba13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ba15 je 0x10e9ba3a */
  if (C.zf) goto L_10e9ba3a;
  /* 10e9ba17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ba1a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ba20 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e9ba23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9ba26 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e9ba2c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ba2e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ba34 jge 0x10e9ba38 */
  if ((C.sf==C.of)) goto L_10e9ba38;
  /* 10e9ba36 jmp 0x10e9ba4a */
  goto L_10e9ba4a;
L_10e9ba38:;
  /* 10e9ba38 jmp 0x10e9ba45 */
  goto L_10e9ba45;
L_10e9ba3a:;
  /* 10e9ba3a call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9ba40u);
  /* 10e9ba40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9ba43 jmp 0x10e9ba4a */
  goto L_10e9ba4a;
L_10e9ba45:;
  /* 10e9ba45 jmp 0x10e9b94d */
  goto L_10e9b94d;
L_10e9ba4a:;
  /* 10e9ba4a jmp 0x10e9ba9c */
  goto L_10e9ba9c;
L_10e9ba4c:;
  /* 10e9ba4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ba4e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10e9ba54 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ba55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ba58 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ba59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ba5c push eax */
  push32((uint32_t)(EAX));
  /* 10e9ba5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ba60 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9ba63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ba66 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9ba69 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9ba6c mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9ba73 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10e9ba76 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ba77 call dword ptr [0x10ec02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f0))), 0x10e9ba7du);
  /* 10e9ba7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ba7f je 0x10e9ba93 */
  if (C.zf) goto L_10e9ba93;
  /* 10e9ba81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9ba88 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10e9ba8e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e9ba91 jmp 0x10e9ba9c */
  goto L_10e9ba9c;
L_10e9ba93:;
  /* 10e9ba93 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9ba99u);
  /* 10e9ba99 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e9ba9c:;
  /* 10e9ba9c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9baa0 jne 0x10e9bb26 */
  if (!C.zf) goto L_10e9bb26;
  /* 10e9baa6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9baaa je 0x10e9bada */
  if (C.zf) goto L_10e9bada;
  /* 10e9baac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bab0 jne 0x10e9bac9 */
  if (!C.zf) goto L_10e9bac9;
  /* 10e9bab2 call 0x10e9ae60 */
  push32(0x10e9bab7u); f_10e9ae60();
  /* 10e9bab7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9babd call 0x10e9ae70 */
  push32(0x10e9bac2u); f_10e9ae70();
  /* 10e9bac2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9bac5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e9bac7 jmp 0x10e9bad5 */
  goto L_10e9bad5;
L_10e9bac9:;
  /* 10e9bac9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9bacc push edx */
  push32((uint32_t)(EDX));
  /* 10e9bacd call 0x10e9adc0 */
  push32(0x10e9bad2u); f_10e9adc0();
  /* 10e9bad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9bad5:;
  /* 10e9bad5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bad8 jmp 0x10e9bb2f */
  goto L_10e9bb2f;
L_10e9bada:;
  /* 10e9bada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9badd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9bae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bae3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9bae6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9bae9 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9baf0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e9baf5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9baf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9bafa je 0x10e9bb0b */
  if (C.zf) goto L_10e9bb0b;
  /* 10e9bafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9baff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9bb02 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bb05 jne 0x10e9bb0b */
  if (!C.zf) goto L_10e9bb0b;
  /* 10e9bb07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bb09 jmp 0x10e9bb2f */
  goto L_10e9bb2f;
L_10e9bb0b:;
  /* 10e9bb0b call 0x10e9ae60 */
  push32(0x10e9bb10u); f_10e9ae60();
  /* 10e9bb10 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10e9bb16 call 0x10e9ae70 */
  push32(0x10e9bb1bu); f_10e9ae70();
  /* 10e9bb1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9bb21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bb24 jmp 0x10e9bb2f */
  goto L_10e9bb2f;
L_10e9bb26:;
  /* 10e9bb26 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9bb29 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e9bb2f:;
  /* 10e9bb2f mov esp, ebp */
  ESP = (EBP);
  /* 10e9bb31 pop ebp */
  EBP = (pop32());
  /* 10e9bb32 ret  */
  ESPCHK(0x10e9b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x10e9bb40 (199 bytes, 68 insns) */
void f_10e9bb40(void) {
  FTRACE(0x10e9bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bb41 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bb43 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bb44 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9bb45 push esi */
  push32((uint32_t)(ESI));
  /* 10e9bb46 push edi */
  push32((uint32_t)(EDI));
L_10e9bb47:;
  /* 10e9bb47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bb4b jne 0x10e9bb6b */
  if (!C.zf) goto L_10e9bb6b;
  /* 10e9bb4d push 0x10eb9ed8 */
  push32((uint32_t)(0x10eb9ed8u));
  /* 10e9bb52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9bb54 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e9bb56 push 0x10eb9fa8 */
  push32((uint32_t)(0x10eb9fa8u));
  /* 10e9bb5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9bb5d call 0x10e92050 */
  push32(0x10e9bb62u); f_10e92050();
  /* 10e9bb62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bb65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bb68 jne 0x10e9bb6b */
  if (!C.zf) goto L_10e9bb6b;
  /* 10e9bb6a int3  */
  x86_unimpl("int3 @ 0x10e9bb6a");
L_10e9bb6b:;
  /* 10e9bb6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bb6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9bb6f jne 0x10e9bb47 */
  if (!C.zf) goto L_10e9bb47;
  /* 10e9bb71 mov ecx, dword ptr [0x10ebe69c] */
  ECX = (r32((uint32_t)(0x10ebe69c)));
  /* 10e9bb77 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bb7a mov dword ptr [0x10ebe69c], ecx */
  w32((uint32_t)(0x10ebe69c), (ECX));
  /* 10e9bb80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bb83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9bb86 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e9bb88 push 0x10eb9fa8 */
  push32((uint32_t)(0x10eb9fa8u));
  /* 10e9bb8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9bb8f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e9bb94 call 0x10e92f90 */
  push32(0x10e9bb99u); f_10e92f90();
  /* 10e9bb99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bb9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bb9f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e9bba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bba5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bba9 je 0x10e9bbc6 */
  if (C.zf) goto L_10e9bbc6;
  /* 10e9bbab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9bbb1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9bbb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbb7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e9bbba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbbd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10e9bbc4 jmp 0x10e9bbeb */
  goto L_10e9bbeb;
L_10e9bbc6:;
  /* 10e9bbc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbc9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9bbcc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9bbcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbd2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e9bbd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbd8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bbdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbde mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e9bbe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbe4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10e9bbeb:;
  /* 10e9bbeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9bbf4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e9bbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bbf9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e9bc00 pop edi */
  EDI = (pop32());
  /* 10e9bc01 pop esi */
  ESI = (pop32());
  /* 10e9bc02 pop ebx */
  EBX = (pop32());
  /* 10e9bc03 mov esp, ebp */
  ESP = (EBP);
  /* 10e9bc05 pop ebp */
  EBP = (pop32());
  /* 10e9bc06 ret  */
  ESPCHK(0x10e9bb40u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10e9bc10 (50 bytes, 17 insns) */
void f_10e9bc10(void) {
  FTRACE(0x10e9bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bc11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bc16 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bc1c jb 0x10e9bc22 */
  if (C.cf) goto L_10e9bc22;
  /* 10e9bc1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bc20 jmp 0x10e9bc40 */
  goto L_10e9bc40;
L_10e9bc22:;
  /* 10e9bc22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bc25 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9bc28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bc2b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9bc2e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9bc31 mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9bc38 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9bc3d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10e9bc40:;
  /* 10e9bc40 pop ebp */
  EBP = (pop32());
  /* 10e9bc41 ret  */
  ESPCHK(0x10e9bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x10e9bc50 (300 bytes, 80 insns) */
void f_10e9bc50(void) {
  FTRACE(0x10e9bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bc51 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bc54 cmp dword ptr [0x10ebfb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bc5b jne 0x10e9bc69 */
  if (!C.zf) goto L_10e9bc69;
  /* 10e9bc5d mov dword ptr [0x10ebfb60], 0x200 */
  w32((uint32_t)(0x10ebfb60), (0x200u));
  /* 10e9bc67 jmp 0x10e9bc7c */
  goto L_10e9bc7c;
L_10e9bc69:;
  /* 10e9bc69 cmp dword ptr [0x10ebfb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bc70 jge 0x10e9bc7c */
  if ((C.sf==C.of)) goto L_10e9bc7c;
  /* 10e9bc72 mov dword ptr [0x10ebfb60], 0x14 */
  w32((uint32_t)(0x10ebfb60), (0x14u));
L_10e9bc7c:;
  /* 10e9bc7c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10e9bc81 push 0x10eb9fb4 */
  push32((uint32_t)(0x10eb9fb4u));
  /* 10e9bc86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9bc88 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e9bc8a mov eax, dword ptr [0x10ebfb60] */
  EAX = (r32((uint32_t)(0x10ebfb60)));
  /* 10e9bc8f push eax */
  push32((uint32_t)(EAX));
  /* 10e9bc90 call 0x10e933a0 */
  push32(0x10e9bc95u); f_10e933a0();
  /* 10e9bc95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bc98 mov dword ptr [0x10ebe810], eax */
  w32((uint32_t)(0x10ebe810), (EAX));
  /* 10e9bc9d cmp dword ptr [0x10ebe810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bca4 jne 0x10e9bce5 */
  if (!C.zf) goto L_10e9bce5;
  /* 10e9bca6 mov dword ptr [0x10ebfb60], 0x14 */
  w32((uint32_t)(0x10ebfb60), (0x14u));
  /* 10e9bcb0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10e9bcb5 push 0x10eb9fb4 */
  push32((uint32_t)(0x10eb9fb4u));
  /* 10e9bcba push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9bcbc push 4 */
  push32((uint32_t)(0x4u));
  /* 10e9bcbe mov ecx, dword ptr [0x10ebfb60] */
  ECX = (r32((uint32_t)(0x10ebfb60)));
  /* 10e9bcc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bcc5 call 0x10e933a0 */
  push32(0x10e9bccau); f_10e933a0();
  /* 10e9bcca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bccd mov dword ptr [0x10ebe810], eax */
  w32((uint32_t)(0x10ebe810), (EAX));
  /* 10e9bcd2 cmp dword ptr [0x10ebe810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bcd9 jne 0x10e9bce5 */
  if (!C.zf) goto L_10e9bce5;
  /* 10e9bcdb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e9bcdd call 0x10e91f00 */
  push32(0x10e9bce2u); f_10e91f00();
  /* 10e9bce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9bce5:;
  /* 10e9bce5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9bcec jmp 0x10e9bcf7 */
  goto L_10e9bcf7;
L_10e9bcee:;
  /* 10e9bcee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bcf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bcf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9bcf7:;
  /* 10e9bcf7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bcfb jge 0x10e9bd16 */
  if ((C.sf==C.of)) goto L_10e9bd16;
  /* 10e9bcfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd00 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9bd03 add eax, 0x10ebd130 */
  { uint32_t _a=(EAX),_b=(0x10ebd130u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bd08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd0b mov edx, dword ptr [0x10ebe810] */
  EDX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9bd11 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10e9bd14 jmp 0x10e9bcee */
  goto L_10e9bcee;
L_10e9bd16:;
  /* 10e9bd16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9bd1d jmp 0x10e9bd28 */
  goto L_10e9bd28;
L_10e9bd1f:;
  /* 10e9bd1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bd25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9bd28:;
  /* 10e9bd28 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bd2c jge 0x10e9bd78 */
  if ((C.sf==C.of)) goto L_10e9bd78;
  /* 10e9bd2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9bd34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9bd3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9bd3d mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9bd44 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bd48 je 0x10e9bd66 */
  if (C.zf) goto L_10e9bd66;
  /* 10e9bd4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd4d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9bd50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd53 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9bd56 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9bd59 mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9bd60 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bd64 jne 0x10e9bd76 */
  if (!C.zf) goto L_10e9bd76;
L_10e9bd66:;
  /* 10e9bd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9bd69 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9bd6c mov dword ptr [ecx + 0x10ebd140], 0xffffffff */
  w32((uint32_t)(ECX + 0x10ebd140), (0xffffffffu));
L_10e9bd76:;
  /* 10e9bd76 jmp 0x10e9bd1f */
  goto L_10e9bd1f;
L_10e9bd78:;
  /* 10e9bd78 mov esp, ebp */
  ESP = (EBP);
  /* 10e9bd7a pop ebp */
  EBP = (pop32());
  /* 10e9bd7b ret  */
  ESPCHK(0x10e9bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x10e9bd80 (26 bytes, 9 insns) */
void f_10e9bd80(void) {
  FTRACE(0x10e9bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bd81 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bd83 call 0x10e9c980 */
  push32(0x10e9bd88u); f_10e9c980();
  /* 10e9bd88 movsx eax, byte ptr [0x10ebe4b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10ebe4b4))));
  /* 10e9bd8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9bd91 je 0x10e9bd98 */
  if (C.zf) goto L_10e9bd98;
  /* 10e9bd93 call 0x10e9c740 */
  push32(0x10e9bd98u); f_10e9c740();
L_10e9bd98:;
  /* 10e9bd98 pop ebp */
  EBP = (pop32());
  /* 10e9bd99 ret  */
  ESPCHK(0x10e9bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x10e9bda0 (61 bytes, 20 insns) */
void f_10e9bda0(void) {
  FTRACE(0x10e9bda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bda0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bda1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bda3 cmp dword ptr [ebp + 8], 0x10ebd130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10ebd130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bdaa jb 0x10e9bdce */
  if (C.cf) goto L_10e9bdce;
  /* 10e9bdac cmp dword ptr [ebp + 8], 0x10ebd390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10ebd390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bdb3 ja 0x10e9bdce */
  if ((!C.cf&&!C.zf)) goto L_10e9bdce;
  /* 10e9bdb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bdb8 sub eax, 0x10ebd130 */
  { uint32_t _a=(EAX),_b=(0x10ebd130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9bdbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9bdc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bdc3 push eax */
  push32((uint32_t)(EAX));
  /* 10e9bdc4 call 0x10e96990 */
  push32(0x10e9bdc9u); f_10e96990();
  /* 10e9bdc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bdcc jmp 0x10e9bddb */
  goto L_10e9bddb;
L_10e9bdce:;
  /* 10e9bdce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bdd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bdd5 call dword ptr [0x10ec037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec037c))), 0x10e9bddbu);
L_10e9bddb:;
  /* 10e9bddb pop ebp */
  EBP = (pop32());
  /* 10e9bddc ret  */
  ESPCHK(0x10e9bda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bde0 @ 0x10e9bde0 (41 bytes, 16 insns) */
void f_10e9bde0(void) {
  FTRACE(0x10e9bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bde0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bde1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bde3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bde7 jge 0x10e9bdfa */
  if ((C.sf==C.of)) goto L_10e9bdfa;
  /* 10e9bde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bdec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bdef push eax */
  push32((uint32_t)(EAX));
  /* 10e9bdf0 call 0x10e96990 */
  push32(0x10e9bdf5u); f_10e96990();
  /* 10e9bdf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bdf8 jmp 0x10e9be07 */
  goto L_10e9be07;
L_10e9bdfa:;
  /* 10e9bdfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9bdfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9be01 call dword ptr [0x10ec037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec037c))), 0x10e9be07u);
L_10e9be07:;
  /* 10e9be07 pop ebp */
  EBP = (pop32());
  /* 10e9be08 ret  */
  ESPCHK(0x10e9bde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x10e9be10 (61 bytes, 20 insns) */
void f_10e9be10(void) {
  FTRACE(0x10e9be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9be10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9be11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9be13 cmp dword ptr [ebp + 8], 0x10ebd130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10ebd130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9be1a jb 0x10e9be3e */
  if (C.cf) goto L_10e9be3e;
  /* 10e9be1c cmp dword ptr [ebp + 8], 0x10ebd390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10ebd390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9be23 ja 0x10e9be3e */
  if ((!C.cf&&!C.zf)) goto L_10e9be3e;
  /* 10e9be25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9be28 sub eax, 0x10ebd130 */
  { uint32_t _a=(EAX),_b=(0x10ebd130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9be2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9be30 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be33 push eax */
  push32((uint32_t)(EAX));
  /* 10e9be34 call 0x10e96a30 */
  push32(0x10e9be39u); f_10e96a30();
  /* 10e9be39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be3c jmp 0x10e9be4b */
  goto L_10e9be4b;
L_10e9be3e:;
  /* 10e9be3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9be41 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be44 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9be45 call dword ptr [0x10ec0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0380))), 0x10e9be4bu);
L_10e9be4b:;
  /* 10e9be4b pop ebp */
  EBP = (pop32());
  /* 10e9be4c ret  */
  ESPCHK(0x10e9be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be50 @ 0x10e9be50 (41 bytes, 16 insns) */
void f_10e9be50(void) {
  FTRACE(0x10e9be50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9be50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9be51 mov ebp, esp */
  EBP = (ESP);
  /* 10e9be53 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9be57 jge 0x10e9be6a */
  if ((C.sf==C.of)) goto L_10e9be6a;
  /* 10e9be59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9be5c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be5f push eax */
  push32((uint32_t)(EAX));
  /* 10e9be60 call 0x10e96a30 */
  push32(0x10e9be65u); f_10e96a30();
  /* 10e9be65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be68 jmp 0x10e9be77 */
  goto L_10e9be77;
L_10e9be6a:;
  /* 10e9be6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9be6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9be70 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9be71 call dword ptr [0x10ec0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0380))), 0x10e9be77u);
L_10e9be77:;
  /* 10e9be77 pop ebp */
  EBP = (pop32());
  /* 10e9be78 ret  */
  ESPCHK(0x10e9be50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x10e9be80 (119 bytes, 34 insns) */
void f_10e9be80(void) {
  FTRACE(0x10e9be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9be80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9be81 mov ebp, esp */
  EBP = (ESP);
  /* 10e9be83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9be86 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10e9be8b call dword ptr [0x10ec0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0304))), 0x10e9be91u);
  /* 10e9be91 cmp dword ptr [0x10ebe7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9be98 je 0x10e9beb8 */
  if (C.zf) goto L_10e9beb8;
  /* 10e9be9a push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10e9be9f call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e9bea5u);
  /* 10e9bea5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9bea7 call 0x10e96990 */
  push32(0x10e9beacu); f_10e96990();
  /* 10e9beac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9beaf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e9beb6 jmp 0x10e9bebf */
  goto L_10e9bebf;
L_10e9beb8:;
  /* 10e9beb8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e9bebf:;
  /* 10e9bebf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10e9bec3 push eax */
  push32((uint32_t)(EAX));
  /* 10e9bec4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bec7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bec8 call 0x10e9bf00 */
  push32(0x10e9becdu); f_10e9bf00();
  /* 10e9becd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bed0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9bed3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bed7 je 0x10e9bee5 */
  if (C.zf) goto L_10e9bee5;
  /* 10e9bed9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9bedb call 0x10e96a30 */
  push32(0x10e9bee0u); f_10e96a30();
  /* 10e9bee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9bee3 jmp 0x10e9bef0 */
  goto L_10e9bef0;
L_10e9bee5:;
  /* 10e9bee5 push 0x10ebe80c */
  push32((uint32_t)(0x10ebe80cu));
  /* 10e9beea call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e9bef0u);
L_10e9bef0:;
  /* 10e9bef0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9bef3 mov esp, ebp */
  ESP = (EBP);
  /* 10e9bef5 pop ebp */
  EBP = (pop32());
  /* 10e9bef6 ret  */
  ESPCHK(0x10e9be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x10e9bf00 (160 bytes, 50 insns) */
void f_10e9bf00(void) {
  FTRACE(0x10e9bf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bf00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bf01 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9bf06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bf0a jne 0x10e9bf13 */
  if (!C.zf) goto L_10e9bf13;
  /* 10e9bf0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bf0e jmp 0x10e9bf9c */
  goto L_10e9bf9c;
L_10e9bf13:;
  /* 10e9bf13 cmp dword ptr [0x10ebe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bf1a jne 0x10e9bf4a */
  if (!C.zf) goto L_10e9bf4a;
  /* 10e9bf1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9bf1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bf24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bf29 jle 0x10e9bf3b */
  if ((C.zf||C.sf!=C.of)) goto L_10e9bf3b;
  /* 10e9bf2b call 0x10e9ae60 */
  push32(0x10e9bf30u); f_10e9ae60();
  /* 10e9bf30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e9bf36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bf39 jmp 0x10e9bf9c */
  goto L_10e9bf9c;
L_10e9bf3b:;
  /* 10e9bf3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bf3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e9bf41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e9bf43 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9bf48 jmp 0x10e9bf9c */
  goto L_10e9bf9c;
L_10e9bf4a:;
  /* 10e9bf4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9bf51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e9bf54 push eax */
  push32((uint32_t)(EAX));
  /* 10e9bf55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9bf57 mov ecx, dword ptr [0x10ebceb4] */
  ECX = (r32((uint32_t)(0x10ebceb4)));
  /* 10e9bf5d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bf5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9bf61 push edx */
  push32((uint32_t)(EDX));
  /* 10e9bf62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9bf64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10e9bf67 push eax */
  push32((uint32_t)(EAX));
  /* 10e9bf68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e9bf6d mov ecx, dword ptr [0x10ebe690] */
  ECX = (r32((uint32_t)(0x10ebe690)));
  /* 10e9bf73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9bf74 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10e9bf7au);
  /* 10e9bf7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9bf7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bf81 je 0x10e9bf89 */
  if (C.zf) goto L_10e9bf89;
  /* 10e9bf83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9bf87 je 0x10e9bf99 */
  if (C.zf) goto L_10e9bf99;
L_10e9bf89:;
  /* 10e9bf89 call 0x10e9ae60 */
  push32(0x10e9bf8eu); f_10e9ae60();
  /* 10e9bf8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e9bf94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9bf97 jmp 0x10e9bf9c */
  goto L_10e9bf9c;
L_10e9bf99:;
  /* 10e9bf99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9bf9c:;
  /* 10e9bf9c mov esp, ebp */
  ESP = (EBP);
  /* 10e9bf9e pop ebp */
  EBP = (pop32());
  /* 10e9bf9f ret  */
  ESPCHK(0x10e9bf00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10e9bfa0 (32 bytes, 18 insns) */
void f_10e9bfa0(void) {
  FTRACE(0x10e9bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9bfa3 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9bfa4 push esi */
  push32((uint32_t)(ESI));
  /* 10e9bfa5 push edi */
  push32((uint32_t)(EDI));
  /* 10e9bfa6 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9bfa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9bfa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9bfab push 0x10e9bfb8 */
  push32((uint32_t)(0x10e9bfb8u));
  /* 10e9bfb0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10e9bfb3 call 0x10ea36ec */
  push32(0x10e9bfb8u); f_10ea36ec();
  /* 10e9bfb8 pop ebp */
  EBP = (pop32());
  /* 10e9bfb9 pop edi */
  EDI = (pop32());
  /* 10e9bfba pop esi */
  ESI = (pop32());
  /* 10e9bfbb pop ebx */
  EBX = (pop32());
  /* 10e9bfbc mov esp, ebp */
  ESP = (EBP);
  /* 10e9bfbe pop ebp */
  EBP = (pop32());
  /* 10e9bfbf ret  */
  ESPCHK(0x10e9bfa0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10e9bfe2 (104 bytes, 33 insns) */
void f_10e9bfe2(void) {
  FTRACE(0x10e9bfe2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9bfe2 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9bfe3 push esi */
  push32((uint32_t)(ESI));
  /* 10e9bfe4 push edi */
  push32((uint32_t)(EDI));
  /* 10e9bfe5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e9bfe9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9bfea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10e9bfec push 0x10e9bfc0 */
  push32((uint32_t)(0x10e9bfc0u));
  /* 10e9bff1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10e9bff8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10e9bfff:;
  /* 10e9bfff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10e9c003 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9c006 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c009 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c00c je 0x10e9c03c */
  if (C.zf) goto L_10e9c03c;
  /* 10e9c00e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c012 je 0x10e9c03c */
  if (C.zf) goto L_10e9c03c;
  /* 10e9c014 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10e9c017 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10e9c01a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10e9c01e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10e9c021 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c026 jne 0x10e9c03a */
  if (!C.zf) goto L_10e9c03a;
  /* 10e9c028 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e9c02d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10e9c031 call 0x10e9c076 */
  push32(0x10e9c036u); f_10e9c076();
  /* 10e9c036 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10e9c03au);
L_10e9c03a:;
  /* 10e9c03a jmp 0x10e9bfff */
  goto L_10e9bfff;
L_10e9c03c:;
  /* 10e9c03c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10e9c043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c046 pop edi */
  EDI = (pop32());
  /* 10e9c047 pop esi */
  ESI = (pop32());
  /* 10e9c048 pop ebx */
  EBX = (pop32());
  /* 10e9c049 ret  */
  ESPCHK(0x10e9bfe2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c076 @ 0x10e9c076 (24 bytes, 10 insns) */
void f_10e9c076(void) {
  FTRACE(0x10e9c076u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c076 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9c077 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c078 mov ebx, 0x10ebd3c8 */
  EBX = (0x10ebd3c8u);
  /* 10e9c07d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c080 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10e9c083 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10e9c086 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10e9c089 pop ecx */
  ECX = (pop32());
  /* 10e9c08a pop ebx */
  EBX = (pop32());
  /* 10e9c08b ret 4 */
  ESPCHK(0x10e9c076u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c155 @ 0x10e9c155 (27 bytes, 11 insns) */
void f_10e9c155(void) {
  FTRACE(0x10e9c155u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c155 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c156 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e9c15a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10e9c15c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e9c15f push eax */
  push32((uint32_t)(EAX));
  /* 10e9c160 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e9c163 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c164 call 0x10e9bfe2 */
  push32(0x10e9c169u); f_10e9bfe2();
  /* 10e9c169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c16c pop ebp */
  EBP = (pop32());
  /* 10e9c16d ret 4 */
  ESPCHK(0x10e9c155u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c170 @ 0x10e9c170 (482 bytes, 138 insns) */
void f_10e9c170(void) {
  FTRACE(0x10e9c170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c170 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c171 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c176 push esi */
  push32((uint32_t)(ESI));
  /* 10e9c177 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10e9c17e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e9c180 call 0x10e96990 */
  push32(0x10e9c185u); f_10e96990();
  /* 10e9c185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c188 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9c18f jmp 0x10e9c19a */
  goto L_10e9c19a;
L_10e9c191:;
  /* 10e9c191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c194 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c197 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e9c19a:;
  /* 10e9c19a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c19e jge 0x10e9c340 */
  if ((C.sf==C.of)) goto L_10e9c340;
  /* 10e9c1a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c1a7 cmp dword ptr [ecx*4 + 0x10ebfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ebfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c1af je 0x10e9c2a6 */
  if (C.zf) goto L_10e9c2a6;
  /* 10e9c1b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c1b8 mov eax, dword ptr [edx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9c1bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9c1c2 jmp 0x10e9c1cd */
  goto L_10e9c1cd;
L_10e9c1c4:;
  /* 10e9c1c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c1c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c1ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9c1cd:;
  /* 10e9c1cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c1d0 mov eax, dword ptr [edx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9c1d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c1dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c1df jae 0x10e9c296 */
  if (!C.cf) goto L_10e9c296;
  /* 10e9c1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c1e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e9c1ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c1ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9c1f1 jne 0x10e9c291 */
  if (!C.zf) goto L_10e9c291;
  /* 10e9c1f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c1fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c1fe jne 0x10e9c239 */
  if (!C.zf) goto L_10e9c239;
  /* 10e9c200 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e9c202 call 0x10e96990 */
  push32(0x10e9c207u); f_10e96990();
  /* 10e9c207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c20a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c20d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c211 jne 0x10e9c22f */
  if (!C.zf) goto L_10e9c22f;
  /* 10e9c213 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c216 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c219 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c21a call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e9c220u);
  /* 10e9c220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c223 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9c226 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c22c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e9c22f:;
  /* 10e9c22f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e9c231 call 0x10e96a30 */
  push32(0x10e9c236u); f_10e96a30();
  /* 10e9c236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9c239:;
  /* 10e9c239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c23c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c23f push eax */
  push32((uint32_t)(EAX));
  /* 10e9c240 call dword ptr [0x10ec037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec037c))), 0x10e9c246u);
  /* 10e9c246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c249 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e9c24d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9c252 je 0x10e9c266 */
  if (C.zf) goto L_10e9c266;
  /* 10e9c254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c257 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c25a push eax */
  push32((uint32_t)(EAX));
  /* 10e9c25b call dword ptr [0x10ec0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0380))), 0x10e9c261u);
  /* 10e9c261 jmp 0x10e9c1c4 */
  goto L_10e9c1c4;
L_10e9c266:;
  /* 10e9c266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c269 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e9c26f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c272 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9c275 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c27b sub eax, dword ptr [edx*4 + 0x10ebfe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10ebfe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c282 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9c283 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10e9c288 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e9c28a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c28c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9c28f jmp 0x10e9c296 */
  goto L_10e9c296;
L_10e9c291:;
  /* 10e9c291 jmp 0x10e9c1c4 */
  goto L_10e9c1c4;
L_10e9c296:;
  /* 10e9c296 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c29a je 0x10e9c2a1 */
  if (C.zf) goto L_10e9c2a1;
  /* 10e9c29c jmp 0x10e9c340 */
  goto L_10e9c340;
L_10e9c2a1:;
  /* 10e9c2a1 jmp 0x10e9c33b */
  goto L_10e9c33b;
L_10e9c2a6:;
  /* 10e9c2a6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e9c2a8 push 0x10eb9fbc */
  push32((uint32_t)(0x10eb9fbcu));
  /* 10e9c2ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9c2af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e9c2b4 call 0x10e92f90 */
  push32(0x10e9c2b9u); f_10e92f90();
  /* 10e9c2b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9c2bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c2c3 je 0x10e9c339 */
  if (C.zf) goto L_10e9c339;
  /* 10e9c2c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c2c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c2cb mov dword ptr [eax*4 + 0x10ebfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x10ebfe60), (ECX));
  /* 10e9c2d2 mov edx, dword ptr [0x10ebff9c] */
  EDX = (r32((uint32_t)(0x10ebff9c)));
  /* 10e9c2d8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c2db mov dword ptr [0x10ebff9c], edx */
  w32((uint32_t)(0x10ebff9c), (EDX));
  /* 10e9c2e1 jmp 0x10e9c2ec */
  goto L_10e9c2ec;
L_10e9c2e3:;
  /* 10e9c2e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c2e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c2e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9c2ec:;
  /* 10e9c2ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c2ef mov edx, dword ptr [ecx*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9c2f6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c2fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c2ff jae 0x10e9c324 */
  if (!C.cf) goto L_10e9c324;
  /* 10e9c301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c304 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e9c308 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c30b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e9c311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c314 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e9c318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c31b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e9c322 jmp 0x10e9c2e3 */
  goto L_10e9c2e3;
L_10e9c324:;
  /* 10e9c324 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c327 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9c32a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9c32d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c330 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c331 call 0x10e9c680 */
  push32(0x10e9c336u); f_10e9c680();
  /* 10e9c336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9c339:;
  /* 10e9c339 jmp 0x10e9c340 */
  goto L_10e9c340;
L_10e9c33b:;
  /* 10e9c33b jmp 0x10e9c191 */
  goto L_10e9c191;
L_10e9c340:;
  /* 10e9c340 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e9c342 call 0x10e96a30 */
  push32(0x10e9c347u); f_10e96a30();
  /* 10e9c347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c34a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c34d pop esi */
  ESI = (pop32());
  /* 10e9c34e mov esp, ebp */
  ESP = (EBP);
  /* 10e9c350 pop ebp */
  EBP = (pop32());
  /* 10e9c351 ret  */
  ESPCHK(0x10e9c170u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10e9c360 (183 bytes, 57 insns) */
void f_10e9c360(void) {
  FTRACE(0x10e9c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c360 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c361 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c363 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c367 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c36d jae 0x10e9c3fa */
  if (!C.cf) goto L_10e9c3fa;
  /* 10e9c373 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c376 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9c379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c37c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c37f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c382 mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9c389 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c38d jne 0x10e9c3fa */
  if (!C.zf) goto L_10e9c3fa;
  /* 10e9c38f cmp dword ptr [0x10ebe474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c396 jne 0x10e9c3da */
  if (!C.zf) goto L_10e9c3da;
  /* 10e9c398 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c39b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9c39e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c3a2 je 0x10e9c3b2 */
  if (C.zf) goto L_10e9c3b2;
  /* 10e9c3a4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c3a8 je 0x10e9c3c0 */
  if (C.zf) goto L_10e9c3c0;
  /* 10e9c3aa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c3ae je 0x10e9c3ce */
  if (C.zf) goto L_10e9c3ce;
  /* 10e9c3b0 jmp 0x10e9c3da */
  goto L_10e9c3da;
L_10e9c3b2:;
  /* 10e9c3b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c3b5 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c3b6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e9c3b8 call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c3beu);
  /* 10e9c3be jmp 0x10e9c3da */
  goto L_10e9c3da;
L_10e9c3c0:;
  /* 10e9c3c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c3c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c3c4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e9c3c6 call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c3ccu);
  /* 10e9c3cc jmp 0x10e9c3da */
  goto L_10e9c3da;
L_10e9c3ce:;
  /* 10e9c3ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c3d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e9c3d4 call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c3dau);
L_10e9c3da:;
  /* 10e9c3da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c3dd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e9c3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c3e3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c3e6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c3e9 mov ecx, dword ptr [edx*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9c3f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c3f3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10e9c3f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c3f8 jmp 0x10e9c413 */
  goto L_10e9c413;
L_10e9c3fa:;
  /* 10e9c3fa call 0x10e9ae60 */
  push32(0x10e9c3ffu); f_10e9ae60();
  /* 10e9c3ff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9c405 call 0x10e9ae70 */
  push32(0x10e9c40au); f_10e9ae70();
  /* 10e9c40a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9c410 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e9c413:;
  /* 10e9c413 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c415 pop ebp */
  EBP = (pop32());
  /* 10e9c416 ret  */
  ESPCHK(0x10e9c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x10e9c420 (216 bytes, 63 insns) */
void f_10e9c420(void) {
  FTRACE(0x10e9c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c421 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c423 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c427 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c42d jae 0x10e9c4db */
  if (!C.cf) goto L_10e9c4db;
  /* 10e9c433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c436 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9c439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c43c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c43f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c442 mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9c449 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9c44e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c453 je 0x10e9c4db */
  if (C.zf) goto L_10e9c4db;
  /* 10e9c459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c45c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e9c45f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c462 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c465 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c468 mov ecx, dword ptr [edx*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9c46f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c473 je 0x10e9c4db */
  if (C.zf) goto L_10e9c4db;
  /* 10e9c475 cmp dword ptr [0x10ebe474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c47c jne 0x10e9c4ba */
  if (!C.zf) goto L_10e9c4ba;
  /* 10e9c47e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c481 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9c484 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c488 je 0x10e9c498 */
  if (C.zf) goto L_10e9c498;
  /* 10e9c48a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c48e je 0x10e9c4a4 */
  if (C.zf) goto L_10e9c4a4;
  /* 10e9c490 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c494 je 0x10e9c4b0 */
  if (C.zf) goto L_10e9c4b0;
  /* 10e9c496 jmp 0x10e9c4ba */
  goto L_10e9c4ba;
L_10e9c498:;
  /* 10e9c498 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9c49a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e9c49c call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c4a2u);
  /* 10e9c4a2 jmp 0x10e9c4ba */
  goto L_10e9c4ba;
L_10e9c4a4:;
  /* 10e9c4a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9c4a6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e9c4a8 call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c4aeu);
  /* 10e9c4ae jmp 0x10e9c4ba */
  goto L_10e9c4ba;
L_10e9c4b0:;
  /* 10e9c4b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9c4b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e9c4b4 call dword ptr [0x10ec02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02b0))), 0x10e9c4bau);
L_10e9c4ba:;
  /* 10e9c4ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c4bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9c4c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c4c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c4c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c4c9 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9c4d0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10e9c4d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c4d9 jmp 0x10e9c4f4 */
  goto L_10e9c4f4;
L_10e9c4db:;
  /* 10e9c4db call 0x10e9ae60 */
  push32(0x10e9c4e0u); f_10e9ae60();
  /* 10e9c4e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9c4e6 call 0x10e9ae70 */
  push32(0x10e9c4ebu); f_10e9ae70();
  /* 10e9c4eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9c4f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e9c4f4:;
  /* 10e9c4f4 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c4f6 pop ebp */
  EBP = (pop32());
  /* 10e9c4f7 ret  */
  ESPCHK(0x10e9c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x10e9c500 (102 bytes, 30 insns) */
void f_10e9c500(void) {
  FTRACE(0x10e9c500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c500 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c501 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c506 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c50c jae 0x10e9c54b */
  if (!C.cf) goto L_10e9c54b;
  /* 10e9c50e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c511 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9c514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c517 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c51a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c51d mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9c524 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9c529 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c52c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c52e je 0x10e9c54b */
  if (C.zf) goto L_10e9c54b;
  /* 10e9c530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c533 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e9c536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c539 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c53c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c53f mov ecx, dword ptr [edx*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e9c546 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10e9c549 jmp 0x10e9c564 */
  goto L_10e9c564;
L_10e9c54b:;
  /* 10e9c54b call 0x10e9ae60 */
  push32(0x10e9c550u); f_10e9ae60();
  /* 10e9c550 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9c556 call 0x10e9ae70 */
  push32(0x10e9c55bu); f_10e9ae70();
  /* 10e9c55b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9c561 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e9c564:;
  /* 10e9c564 pop ebp */
  EBP = (pop32());
  /* 10e9c565 ret  */
  ESPCHK(0x10e9c500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c570 @ 0x10e9c570 (260 bytes, 83 insns) */
void f_10e9c570(void) {
  FTRACE(0x10e9c570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c570 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c571 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c576 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9c57a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c57d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9c582 je 0x10e9c58d */
  if (C.zf) goto L_10e9c58d;
  /* 10e9c584 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c587 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e9c58a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10e9c58d:;
  /* 10e9c58d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c590 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9c598 je 0x10e9c5a2 */
  if (C.zf) goto L_10e9c5a2;
  /* 10e9c59a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c59d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10e9c59f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10e9c5a2:;
  /* 10e9c5a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9c5a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c5ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c5ad je 0x10e9c5b8 */
  if (C.zf) goto L_10e9c5b8;
  /* 10e9c5af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c5b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e9c5b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e9c5b8:;
  /* 10e9c5b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c5bb push eax */
  push32((uint32_t)(EAX));
  /* 10e9c5bc call dword ptr [0x10ec033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec033c))), 0x10e9c5c2u);
  /* 10e9c5c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9c5c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c5c9 jne 0x10e9c5e2 */
  if (!C.zf) goto L_10e9c5e2;
  /* 10e9c5cb call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9c5d1u);
  /* 10e9c5d1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c5d2 call 0x10e9adc0 */
  push32(0x10e9c5d7u); f_10e9adc0();
  /* 10e9c5d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c5da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c5dd jmp 0x10e9c670 */
  goto L_10e9c670;
L_10e9c5e2:;
  /* 10e9c5e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c5e6 jne 0x10e9c5f3 */
  if (!C.zf) goto L_10e9c5f3;
  /* 10e9c5e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c5eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e9c5ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e9c5f1 jmp 0x10e9c602 */
  goto L_10e9c602;
L_10e9c5f3:;
  /* 10e9c5f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c5f7 jne 0x10e9c602 */
  if (!C.zf) goto L_10e9c602;
  /* 10e9c5f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c5fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e9c5ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e9c602:;
  /* 10e9c602 call 0x10e9c170 */
  push32(0x10e9c607u); f_10e9c170();
  /* 10e9c607 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9c60a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c60e jne 0x10e9c62b */
  if (!C.zf) goto L_10e9c62b;
  /* 10e9c610 call 0x10e9ae60 */
  push32(0x10e9c615u); f_10e9ae60();
  /* 10e9c615 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10e9c61b call 0x10e9ae70 */
  push32(0x10e9c620u); f_10e9ae70();
  /* 10e9c620 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9c626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c629 jmp 0x10e9c670 */
  goto L_10e9c670;
L_10e9c62b:;
  /* 10e9c62b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c62e push eax */
  push32((uint32_t)(EAX));
  /* 10e9c62f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c632 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c633 call 0x10e9c360 */
  push32(0x10e9c638u); f_10e9c360();
  /* 10e9c638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c63b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c63e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10e9c641 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e9c644 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c647 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9c64a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c64d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c650 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c653 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9c65a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e9c65d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10e9c661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c664 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c665 call 0x10e9c710 */
  push32(0x10e9c66au); f_10e9c710();
  /* 10e9c66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c66d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e9c670:;
  /* 10e9c670 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c672 pop ebp */
  EBP = (pop32());
  /* 10e9c673 ret  */
  ESPCHK(0x10e9c570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c680 @ 0x10e9c680 (134 bytes, 44 insns) */
void f_10e9c680(void) {
  FTRACE(0x10e9c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c680 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c681 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c683 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c687 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9c68a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c68d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c690 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c693 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9c69a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c69c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9c69f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c6a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c6a6 jne 0x10e9c6e1 */
  if (!C.zf) goto L_10e9c6e1;
  /* 10e9c6a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e9c6aa call 0x10e96990 */
  push32(0x10e9c6afu); f_10e96990();
  /* 10e9c6af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c6b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c6b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c6b9 jne 0x10e9c6d7 */
  if (!C.zf) goto L_10e9c6d7;
  /* 10e9c6bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c6be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c6c1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c6c2 call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e9c6c8u);
  /* 10e9c6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c6cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9c6ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c6d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c6d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e9c6d7:;
  /* 10e9c6d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e9c6d9 call 0x10e96a30 */
  push32(0x10e9c6deu); f_10e96a30();
  /* 10e9c6de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9c6e1:;
  /* 10e9c6e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c6e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9c6e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c6ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c6ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c6f0 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9c6f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e9c6fb push eax */
  push32((uint32_t)(EAX));
  /* 10e9c6fc call dword ptr [0x10ec037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec037c))), 0x10e9c702u);
  /* 10e9c702 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c704 pop ebp */
  EBP = (pop32());
  /* 10e9c705 ret  */
  ESPCHK(0x10e9c680u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10e9c710 (38 bytes, 13 insns) */
void f_10e9c710(void) {
  FTRACE(0x10e9c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c710 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c711 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c716 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9c719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c71c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c71f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9c722 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9c729 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e9c72d push eax */
  push32((uint32_t)(EAX));
  /* 10e9c72e call dword ptr [0x10ec0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0380))), 0x10e9c734u);
  /* 10e9c734 pop ebp */
  EBP = (pop32());
  /* 10e9c735 ret  */
  ESPCHK(0x10e9c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c740 @ 0x10e9c740 (218 bytes, 63 insns) */
void f_10e9c740(void) {
  FTRACE(0x10e9c740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c740 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c741 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c746 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9c74d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9c74f call 0x10e96990 */
  push32(0x10e9c754u); f_10e96990();
  /* 10e9c754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c757 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10e9c75e jmp 0x10e9c769 */
  goto L_10e9c769;
L_10e9c760:;
  /* 10e9c760 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c763 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c766 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e9c769:;
  /* 10e9c769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c76c cmp ecx, dword ptr [0x10ebfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c772 jge 0x10e9c809 */
  if ((C.sf==C.of)) goto L_10e9c809;
  /* 10e9c778 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c77b mov eax, dword ptr [0x10ebe810] */
  EAX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c780 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c784 je 0x10e9c804 */
  if (C.zf) goto L_10e9c804;
  /* 10e9c786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c789 mov edx, dword ptr [0x10ebe810] */
  EDX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c78f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e9c792 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c795 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c79b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c79d je 0x10e9c7c1 */
  if (C.zf) goto L_10e9c7c1;
  /* 10e9c79f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c7a2 mov eax, dword ptr [0x10ebe810] */
  EAX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c7a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9c7aa push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c7ab call 0x10e9d530 */
  push32(0x10e9c7b0u); f_10e9d530();
  /* 10e9c7b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c7b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c7b6 je 0x10e9c7c1 */
  if (C.zf) goto L_10e9c7c1;
  /* 10e9c7b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c7bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c7be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e9c7c1:;
  /* 10e9c7c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c7c5 jl 0x10e9c804 */
  if ((C.sf!=C.of)) goto L_10e9c804;
  /* 10e9c7c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c7ca mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c7d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e9c7d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c7d6 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c7d7 call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e9c7ddu);
  /* 10e9c7dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9c7df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c7e2 mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c7e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e9c7eb push edx */
  push32((uint32_t)(EDX));
  /* 10e9c7ec call 0x10e93a20 */
  push32(0x10e9c7f1u); f_10e93a20();
  /* 10e9c7f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c7f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c7f7 mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c7fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10e9c804:;
  /* 10e9c804 jmp 0x10e9c760 */
  goto L_10e9c760;
L_10e9c809:;
  /* 10e9c809 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9c80b call 0x10e96a30 */
  push32(0x10e9c810u); f_10e96a30();
  /* 10e9c810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c813 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c816 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c818 pop ebp */
  EBP = (pop32());
  /* 10e9c819 ret  */
  ESPCHK(0x10e9c740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x10e9c820 (68 bytes, 26 insns) */
void f_10e9c820(void) {
  FTRACE(0x10e9c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c820 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c821 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c823 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c824 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c828 jne 0x10e9c836 */
  if (!C.zf) goto L_10e9c836;
  /* 10e9c82a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9c82c call 0x10e9c990 */
  push32(0x10e9c831u); f_10e9c990();
  /* 10e9c831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c834 jmp 0x10e9c860 */
  goto L_10e9c860;
L_10e9c836:;
  /* 10e9c836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c839 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c83a call 0x10e9bda0 */
  push32(0x10e9c83fu); f_10e9bda0();
  /* 10e9c83f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c845 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c846 call 0x10e9c870 */
  push32(0x10e9c84bu); f_10e9c870();
  /* 10e9c84b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c84e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9c851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c854 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c855 call 0x10e9be10 */
  push32(0x10e9c85au); f_10e9be10();
  /* 10e9c85a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9c860:;
  /* 10e9c860 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c862 pop ebp */
  EBP = (pop32());
  /* 10e9c863 ret  */
  ESPCHK(0x10e9c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x10e9c870 (65 bytes, 26 insns) */
void f_10e9c870(void) {
  FTRACE(0x10e9c870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c870 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c871 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c876 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c877 call 0x10e9c8c0 */
  push32(0x10e9c87cu); f_10e9c8c0();
  /* 10e9c87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c87f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9c881 je 0x10e9c888 */
  if (C.zf) goto L_10e9c888;
  /* 10e9c883 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9c886 jmp 0x10e9c8af */
  goto L_10e9c8af;
L_10e9c888:;
  /* 10e9c888 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c88b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9c88e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c894 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9c896 je 0x10e9c8ad */
  if (C.zf) goto L_10e9c8ad;
  /* 10e9c898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c89b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9c89e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c89f call 0x10e9d680 */
  push32(0x10e9c8a4u); f_10e9d680();
  /* 10e9c8a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c8a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9c8a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c8ab jmp 0x10e9c8af */
  goto L_10e9c8af;
L_10e9c8ad:;
  /* 10e9c8ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9c8af:;
  /* 10e9c8af pop ebp */
  EBP = (pop32());
  /* 10e9c8b0 ret  */
  ESPCHK(0x10e9c870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x10e9c8c0 (183 bytes, 62 insns) */
void f_10e9c8c0(void) {
  FTRACE(0x10e9c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c8c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9c8cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9c8d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9c8d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c8d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9c8d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c8dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c8df jne 0x10e9c95b */
  if (!C.zf) goto L_10e9c95b;
  /* 10e9c8e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c8e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c8e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c8ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c8ef je 0x10e9c95b */
  if (C.zf) goto L_10e9c95b;
  /* 10e9c8f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c8f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10e9c8f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c8fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9c8ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c903 jle 0x10e9c95b */
  if ((C.zf||C.sf!=C.of)) goto L_10e9c95b;
  /* 10e9c905 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c908 push edx */
  push32((uint32_t)(EDX));
  /* 10e9c909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c90c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9c90f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9c910 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c913 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e9c916 push eax */
  push32((uint32_t)(EAX));
  /* 10e9c917 call 0x10e9b830 */
  push32(0x10e9c91cu); f_10e9b830();
  /* 10e9c91c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c91f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c922 jne 0x10e9c945 */
  if (!C.zf) goto L_10e9c945;
  /* 10e9c924 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c927 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9c92a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9c930 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9c932 je 0x10e9c943 */
  if (C.zf) goto L_10e9c943;
  /* 10e9c934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c937 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c93a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c93d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c940 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10e9c943:;
  /* 10e9c943 jmp 0x10e9c95b */
  goto L_10e9c95b;
L_10e9c945:;
  /* 10e9c945 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c948 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c94b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c94e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c951 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e9c954 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9c95b:;
  /* 10e9c95b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c95e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c961 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e9c964 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e9c966 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9c969 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e9c970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9c973 mov esp, ebp */
  ESP = (EBP);
  /* 10e9c975 pop ebp */
  EBP = (pop32());
  /* 10e9c976 ret  */
  ESPCHK(0x10e9c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x10e9c980 (15 bytes, 7 insns) */
void f_10e9c980(void) {
  FTRACE(0x10e9c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c981 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9c985 call 0x10e9c990 */
  push32(0x10e9c98au); f_10e9c990();
  /* 10e9c98a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c98d pop ebp */
  EBP = (pop32());
  /* 10e9c98e ret  */
  ESPCHK(0x10e9c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x10e9c990 (319 bytes, 94 insns) */
void f_10e9c990(void) {
  FTRACE(0x10e9c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9c990 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9c991 mov ebp, esp */
  EBP = (ESP);
  /* 10e9c993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9c996 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9c99d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9c9a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9c9a6 call 0x10e96990 */
  push32(0x10e9c9abu); f_10e96990();
  /* 10e9c9ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c9ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9c9b5 jmp 0x10e9c9c0 */
  goto L_10e9c9c0;
L_10e9c9b7:;
  /* 10e9c9b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c9ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9c9bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e9c9c0:;
  /* 10e9c9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c9c3 cmp ecx, dword ptr [0x10ebfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c9c9 jge 0x10e9cab3 */
  if ((C.sf==C.of)) goto L_10e9cab3;
  /* 10e9c9cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c9d2 mov eax, dword ptr [0x10ebe810] */
  EAX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c9d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9c9db je 0x10e9caae */
  if (C.zf) goto L_10e9caae;
  /* 10e9c9e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9c9e4 mov edx, dword ptr [0x10ebe810] */
  EDX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9c9ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e9c9ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9c9f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9c9f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9c9f8 je 0x10e9caae */
  if (C.zf) goto L_10e9caae;
  /* 10e9c9fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca01 mov eax, dword ptr [0x10ebe810] */
  EAX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca06 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9ca09 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ca0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca0d push edx */
  push32((uint32_t)(EDX));
  /* 10e9ca0e call 0x10e9bde0 */
  push32(0x10e9ca13u); f_10e9bde0();
  /* 10e9ca13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ca16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca19 mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca1f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e9ca22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e9ca25 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ca2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ca2c je 0x10e9ca95 */
  if (C.zf) goto L_10e9ca95;
  /* 10e9ca2e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ca32 jne 0x10e9ca59 */
  if (!C.zf) goto L_10e9ca59;
  /* 10e9ca34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca37 mov edx, dword ptr [0x10ebe810] */
  EDX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca3d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e9ca40 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ca41 call 0x10e9c870 */
  push32(0x10e9ca46u); f_10e9c870();
  /* 10e9ca46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ca49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ca4c je 0x10e9ca57 */
  if (C.zf) goto L_10e9ca57;
  /* 10e9ca4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ca51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ca54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9ca57:;
  /* 10e9ca57 jmp 0x10e9ca95 */
  goto L_10e9ca95;
L_10e9ca59:;
  /* 10e9ca59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ca5d jne 0x10e9ca95 */
  if (!C.zf) goto L_10e9ca95;
  /* 10e9ca5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca62 mov eax, dword ptr [0x10ebe810] */
  EAX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9ca6a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9ca6d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9ca70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9ca72 je 0x10e9ca95 */
  if (C.zf) goto L_10e9ca95;
  /* 10e9ca74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca77 mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca7d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e9ca80 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ca81 call 0x10e9c870 */
  push32(0x10e9ca86u); f_10e9c870();
  /* 10e9ca86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ca89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ca8c jne 0x10e9ca95 */
  if (!C.zf) goto L_10e9ca95;
  /* 10e9ca8e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10e9ca95:;
  /* 10e9ca95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ca98 mov ecx, dword ptr [0x10ebe810] */
  ECX = (r32((uint32_t)(0x10ebe810)));
  /* 10e9ca9e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e9caa1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9caa2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9caa5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9caa6 call 0x10e9be50 */
  push32(0x10e9caabu); f_10e9be50();
  /* 10e9caab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9caae:;
  /* 10e9caae jmp 0x10e9c9b7 */
  goto L_10e9c9b7;
L_10e9cab3:;
  /* 10e9cab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9cab5 call 0x10e96a30 */
  push32(0x10e9cabau); f_10e96a30();
  /* 10e9caba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cabd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cac1 jne 0x10e9cac8 */
  if (!C.zf) goto L_10e9cac8;
  /* 10e9cac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9cac6 jmp 0x10e9cacb */
  goto L_10e9cacb;
L_10e9cac8:;
  /* 10e9cac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e9cacb:;
  /* 10e9cacb mov esp, ebp */
  ESP = (EBP);
  /* 10e9cacd pop ebp */
  EBP = (pop32());
  /* 10e9cace ret  */
  ESPCHK(0x10e9c990u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10e9cad0 (15 bytes, 7 insns) */
void f_10e9cad0(void) {
  FTRACE(0x10e9cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9cad1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9cad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9cad5 call 0x10e91f00 */
  push32(0x10e9cadau); f_10e91f00();
  /* 10e9cada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cadd pop ebp */
  EBP = (pop32());
  /* 10e9cade ret  */
  ESPCHK(0x10e9cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x10e9cae0 (1007 bytes, 269 insns) */
void f_10e9cae0(void) {
  FTRACE(0x10e9cae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9cae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9cae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9cae3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9cae9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9caed jl 0x10e9caf5 */
  if ((C.sf!=C.of)) goto L_10e9caf5;
  /* 10e9caef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9caf3 jle 0x10e9cafc */
  if ((C.zf||C.sf!=C.of)) goto L_10e9cafc;
L_10e9caf5:;
  /* 10e9caf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9caf7 jmp 0x10e9cecb */
  goto L_10e9cecb;
L_10e9cafc:;
  /* 10e9cafc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9cafe call 0x10e96990 */
  push32(0x10e9cb03u); f_10e96990();
  /* 10e9cb03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cb06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e9cb0d mov eax, dword ptr [0x10ebe7fc] */
  EAX = (r32((uint32_t)(0x10ebe7fc)));
  /* 10e9cb12 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cb15 mov dword ptr [0x10ebe7fc], eax */
  w32((uint32_t)(0x10ebe7fc), (EAX));
L_10e9cb1a:;
  /* 10e9cb1a cmp dword ptr [0x10ebe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cb21 je 0x10e9cb2d */
  if (C.zf) goto L_10e9cb2d;
  /* 10e9cb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9cb25 call dword ptr [0x10ec02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02ac))), 0x10e9cb2bu);
  /* 10e9cb2b jmp 0x10e9cb1a */
  goto L_10e9cb1a;
L_10e9cb2d:;
  /* 10e9cb2d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cb31 je 0x10e9cb71 */
  if (C.zf) goto L_10e9cb71;
  /* 10e9cb33 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cb37 je 0x10e9cb51 */
  if (C.zf) goto L_10e9cb51;
  /* 10e9cb39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cb3c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cb3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cb40 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cb41 call 0x10e9ced0 */
  push32(0x10e9cb46u); f_10e9ced0();
  /* 10e9cb46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cb49 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10e9cb4f jmp 0x10e9cb63 */
  goto L_10e9cb63;
L_10e9cb51:;
  /* 10e9cb51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cb54 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cb57 mov ecx, dword ptr [eax + 0x10ebd4ec] */
  ECX = (r32((uint32_t)(EAX + 0x10ebd4ec)));
  /* 10e9cb5d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10e9cb63:;
  /* 10e9cb63 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e9cb69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9cb6c jmp 0x10e9ceab */
  goto L_10e9ceab;
L_10e9cb71:;
  /* 10e9cb71 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10e9cb78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9cb7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cb83 je 0x10e9cea3 */
  if (C.zf) goto L_10e9cea3;
  /* 10e9cb89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cb8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9cb8f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cb92 jne 0x10e9cdb4 */
  if (!C.zf) goto L_10e9cdb4;
  /* 10e9cb98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cb9b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e9cb9f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cba2 jne 0x10e9cdb4 */
  if (!C.zf) goto L_10e9cdb4;
  /* 10e9cba8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cbab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10e9cbaf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cbb2 jne 0x10e9cdb4 */
  if (!C.zf) goto L_10e9cdb4;
  /* 10e9cbb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cbbb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10e9cbc1:;
  /* 10e9cbc1 push 0x10eba00c */
  push32((uint32_t)(0x10eba00cu));
  /* 10e9cbc6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e9cbcc push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cbcd call 0x10e9ed30 */
  push32(0x10e9cbd2u); f_10e9ed30();
  /* 10e9cbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cbd5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10e9cbdb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cbe2 je 0x10e9cc0d */
  if (C.zf) goto L_10e9cc0d;
  /* 10e9cbe4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cbea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9cbf0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10e9cbf6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cbfd je 0x10e9cc0d */
  if (C.zf) goto L_10e9cc0d;
  /* 10e9cbff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cc05 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9cc08 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cc0b jne 0x10e9cc33 */
  if (!C.zf) goto L_10e9cc33;
L_10e9cc0d:;
  /* 10e9cc0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cc11 je 0x10e9cc2c */
  if (C.zf) goto L_10e9cc2c;
  /* 10e9cc13 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9cc15 call 0x10e96a30 */
  push32(0x10e9cc1au); f_10e96a30();
  /* 10e9cc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cc1d mov edx, dword ptr [0x10ebe7fc] */
  EDX = (r32((uint32_t)(0x10ebe7fc)));
  /* 10e9cc23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9cc26 mov dword ptr [0x10ebe7fc], edx */
  w32((uint32_t)(0x10ebe7fc), (EDX));
L_10e9cc2c:;
  /* 10e9cc2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9cc2e jmp 0x10e9cecb */
  goto L_10e9cecb;
L_10e9cc33:;
  /* 10e9cc33 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e9cc3a jmp 0x10e9cc45 */
  goto L_10e9cc45;
L_10e9cc3c:;
  /* 10e9cc3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cc3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cc42 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e9cc45:;
  /* 10e9cc45 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cc49 jg 0x10e9cc93 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9cc93;
  /* 10e9cc4b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e9cc51 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cc52 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e9cc58 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cc59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cc5c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cc5f mov ecx, dword ptr [eax + 0x10ebd4e8] */
  ECX = (r32((uint32_t)(EAX + 0x10ebd4e8)));
  /* 10e9cc65 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cc66 call 0x10e9ecf0 */
  push32(0x10e9cc6bu); f_10e9ecf0();
  /* 10e9cc6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cc6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9cc70 jne 0x10e9cc91 */
  if (!C.zf) goto L_10e9cc91;
  /* 10e9cc72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cc75 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cc78 mov eax, dword ptr [edx + 0x10ebd4e8] */
  EAX = (r32((uint32_t)(EDX + 0x10ebd4e8)));
  /* 10e9cc7e push eax */
  push32((uint32_t)(EAX));
  /* 10e9cc7f call 0x10e95dc0 */
  push32(0x10e9cc84u); f_10e95dc0();
  /* 10e9cc84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cc87 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cc8d jne 0x10e9cc91 */
  if (!C.zf) goto L_10e9cc91;
  /* 10e9cc8f jmp 0x10e9cc93 */
  goto L_10e9cc93;
L_10e9cc91:;
  /* 10e9cc91 jmp 0x10e9cc3c */
  goto L_10e9cc3c;
L_10e9cc93:;
  /* 10e9cc93 push 0x10eba008 */
  push32((uint32_t)(0x10eba008u));
  /* 10e9cc98 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cc9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cca1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10e9cca7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9ccad push edx */
  push32((uint32_t)(EDX));
  /* 10e9ccae call 0x10e9ecb0 */
  push32(0x10e9ccb3u); f_10e9ecb0();
  /* 10e9ccb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ccb6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10e9ccbc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ccc3 jne 0x10e9ccf9 */
  if (!C.zf) goto L_10e9ccf9;
  /* 10e9ccc5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cccb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9ccce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ccd1 je 0x10e9ccf9 */
  if (C.zf) goto L_10e9ccf9;
  /* 10e9ccd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ccd7 je 0x10e9ccf2 */
  if (C.zf) goto L_10e9ccf2;
  /* 10e9ccd9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9ccdb call 0x10e96a30 */
  push32(0x10e9cce0u); f_10e96a30();
  /* 10e9cce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cce3 mov edx, dword ptr [0x10ebe7fc] */
  EDX = (r32((uint32_t)(0x10ebe7fc)));
  /* 10e9cce9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ccec mov dword ptr [0x10ebe7fc], edx */
  w32((uint32_t)(0x10ebe7fc), (EDX));
L_10e9ccf2:;
  /* 10e9ccf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ccf4 jmp 0x10e9cecb */
  goto L_10e9cecb;
L_10e9ccf9:;
  /* 10e9ccf9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ccfd jg 0x10e9cd4a */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9cd4a;
  /* 10e9ccff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e9cd05 push eax */
  push32((uint32_t)(EAX));
  /* 10e9cd06 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cd0c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cd0d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e9cd13 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cd14 call 0x10e967b0 */
  push32(0x10e9cd19u); f_10e967b0();
  /* 10e9cd19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cd1c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e9cd22 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10e9cd2a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10e9cd30 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cd31 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cd34 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cd35 call 0x10e9ced0 */
  push32(0x10e9cd3au); f_10e9ced0();
  /* 10e9cd3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cd3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9cd3f je 0x10e9cd4a */
  if (C.zf) goto L_10e9cd4a;
  /* 10e9cd41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9cd44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cd47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e9cd4a:;
  /* 10e9cd4a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cd50 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cd56 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10e9cd5c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e9cd62 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9cd65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9cd67 je 0x10e9cd78 */
  if (C.zf) goto L_10e9cd78;
  /* 10e9cd69 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e9cd6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cd72 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10e9cd78:;
  /* 10e9cd78 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e9cd7e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9cd81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9cd83 jne 0x10e9cbc1 */
  if (!C.zf) goto L_10e9cbc1;
  /* 10e9cd89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cd8d je 0x10e9cd9c */
  if (C.zf) goto L_10e9cd9c;
  /* 10e9cd8f call 0x10e9d070 */
  push32(0x10e9cd94u); f_10e9d070();
  /* 10e9cd94 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10e9cd9a jmp 0x10e9cda6 */
  goto L_10e9cda6;
L_10e9cd9c:;
  /* 10e9cd9c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10e9cda6:;
  /* 10e9cda6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10e9cdac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9cdaf jmp 0x10e9cea1 */
  goto L_10e9cea1;
L_10e9cdb4:;
  /* 10e9cdb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cdb7 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cdb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9cdba push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9cdbc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e9cdc2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9cdc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cdc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cdc7 call 0x10e9d170 */
  push32(0x10e9cdccu); f_10e9d170();
  /* 10e9cdcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cdcf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9cdd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cdd6 je 0x10e9cea1 */
  if (C.zf) goto L_10e9cea1;
  /* 10e9cddc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9cde3 jmp 0x10e9cdee */
  goto L_10e9cdee;
L_10e9cde5:;
  /* 10e9cde5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cde8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cdeb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e9cdee:;
  /* 10e9cdee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cdf2 jg 0x10e9ce50 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9ce50;
  /* 10e9cdf4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cdf8 je 0x10e9ce4e */
  if (C.zf) goto L_10e9ce4e;
  /* 10e9cdfa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9cdfd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9ce00 mov ecx, dword ptr [eax + 0x10ebd4ec] */
  ECX = (r32((uint32_t)(EAX + 0x10ebd4ec)));
  /* 10e9ce06 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ce07 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e9ce0d push edx */
  push32((uint32_t)(EDX));
  /* 10e9ce0e call 0x10e9ec20 */
  push32(0x10e9ce13u); f_10e9ec20();
  /* 10e9ce13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ce16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ce18 je 0x10e9ce45 */
  if (C.zf) goto L_10e9ce45;
  /* 10e9ce1a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e9ce20 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ce21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9ce24 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ce25 call 0x10e9ced0 */
  push32(0x10e9ce2au); f_10e9ced0();
  /* 10e9ce2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ce2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ce2f je 0x10e9ce3c */
  if (C.zf) goto L_10e9ce3c;
  /* 10e9ce31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ce34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ce37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e9ce3a jmp 0x10e9ce43 */
  goto L_10e9ce43;
L_10e9ce3c:;
  /* 10e9ce3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e9ce43:;
  /* 10e9ce43 jmp 0x10e9ce4e */
  goto L_10e9ce4e;
L_10e9ce45:;
  /* 10e9ce45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ce48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ce4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e9ce4e:;
  /* 10e9ce4e jmp 0x10e9cde5 */
  goto L_10e9cde5;
L_10e9ce50:;
  /* 10e9ce50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ce54 je 0x10e9ce7b */
  if (C.zf) goto L_10e9ce7b;
  /* 10e9ce56 call 0x10e9d070 */
  push32(0x10e9ce5bu); f_10e9d070();
  /* 10e9ce5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9ce5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9ce60 mov ecx, dword ptr [0x10ebd4ec] */
  ECX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9ce66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ce67 call 0x10e93a20 */
  push32(0x10e9ce6cu); f_10e93a20();
  /* 10e9ce6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ce6f mov dword ptr [0x10ebd4ec], 0 */
  w32((uint32_t)(0x10ebd4ec), (0x0u));
  /* 10e9ce79 jmp 0x10e9cea1 */
  goto L_10e9cea1;
L_10e9ce7b:;
  /* 10e9ce7b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ce7f je 0x10e9ce8e */
  if (C.zf) goto L_10e9ce8e;
  /* 10e9ce81 call 0x10e9d070 */
  push32(0x10e9ce86u); f_10e9d070();
  /* 10e9ce86 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10e9ce8c jmp 0x10e9ce98 */
  goto L_10e9ce98;
L_10e9ce8e:;
  /* 10e9ce8e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10e9ce98:;
  /* 10e9ce98 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10e9ce9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e9cea1:;
  /* 10e9cea1 jmp 0x10e9ceab */
  goto L_10e9ceab;
L_10e9cea3:;
  /* 10e9cea3 call 0x10e9d070 */
  push32(0x10e9cea8u); f_10e9d070();
  /* 10e9cea8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e9ceab:;
  /* 10e9ceab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ceaf je 0x10e9cec8 */
  if (C.zf) goto L_10e9cec8;
  /* 10e9ceb1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e9ceb3 call 0x10e96a30 */
  push32(0x10e9ceb8u); f_10e96a30();
  /* 10e9ceb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cebb mov eax, dword ptr [0x10ebe7fc] */
  EAX = (r32((uint32_t)(0x10ebe7fc)));
  /* 10e9cec0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9cec3 mov dword ptr [0x10ebe7fc], eax */
  w32((uint32_t)(0x10ebe7fc), (EAX));
L_10e9cec8:;
  /* 10e9cec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e9cecb:;
  /* 10e9cecb mov esp, ebp */
  ESP = (EBP);
  /* 10e9cecd pop ebp */
  EBP = (pop32());
  /* 10e9cece ret  */
  ESPCHK(0x10e9cae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x10e9ced0 (403 bytes, 117 insns) */
void f_10e9ced0(void) {
  FTRACE(0x10e9ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ced1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ced3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ced9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cedc push eax */
  push32((uint32_t)(EAX));
  /* 10e9cedd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10e9cee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cee4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10e9ceea push edx */
  push32((uint32_t)(EDX));
  /* 10e9ceeb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10e9cef1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9cef2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9cef5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cef6 call 0x10e9d170 */
  push32(0x10e9cefbu); f_10e9d170();
  /* 10e9cefb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cefe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9cf00 jne 0x10e9cf09 */
  if (!C.zf) goto L_10e9cf09;
  /* 10e9cf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9cf04 jmp 0x10e9d05f */
  goto L_10e9d05f;
L_10e9cf09:;
  /* 10e9cf09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10e9cf0e push 0x10eba010 */
  push32((uint32_t)(0x10eba010u));
  /* 10e9cf13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9cf15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10e9cf1b push edx */
  push32((uint32_t)(EDX));
  /* 10e9cf1c call 0x10e95dc0 */
  push32(0x10e9cf21u); f_10e95dc0();
  /* 10e9cf21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf27 push eax */
  push32((uint32_t)(EAX));
  /* 10e9cf28 call 0x10e92f90 */
  push32(0x10e9cf2du); f_10e92f90();
  /* 10e9cf2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9cf33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cf37 jne 0x10e9cf40 */
  if (!C.zf) goto L_10e9cf40;
  /* 10e9cf39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9cf3b jmp 0x10e9d05f */
  goto L_10e9d05f;
L_10e9cf40:;
  /* 10e9cf40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cf43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cf46 mov ecx, dword ptr [eax + 0x10ebd4ec] */
  ECX = (r32((uint32_t)(EAX + 0x10ebd4ec)));
  /* 10e9cf4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9cf4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cf52 mov eax, dword ptr [edx*4 + 0x10ebe678] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebe678)));
  /* 10e9cf59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9cf5c push 6 */
  push32((uint32_t)(0x6u));
  /* 10e9cf5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cf61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cf64 add ecx, 0x10ebe6c8 */
  { uint32_t _a=(ECX),_b=(0x10ebe6c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf6a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cf6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10e9cf6e push edx */
  push32((uint32_t)(EDX));
  /* 10e9cf6f call 0x10e99870 */
  push32(0x10e9cf74u); f_10e99870();
  /* 10e9cf74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf77 mov eax, dword ptr [0x10ebe690] */
  EAX = (r32((uint32_t)(0x10ebe690)));
  /* 10e9cf7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e9cf7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10e9cf85 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cf86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9cf89 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cf8a call 0x10e95f40 */
  push32(0x10e9cf8fu); f_10e95f40();
  /* 10e9cf8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cf92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cf95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cf98 mov dword ptr [ecx + 0x10ebd4ec], eax */
  w32((uint32_t)(ECX + 0x10ebd4ec), (EAX));
  /* 10e9cf9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e9cfa4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9cfaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cfad mov dword ptr [eax*4 + 0x10ebe678], edx */
  w32((uint32_t)(EAX*4 + 0x10ebe678), (EDX));
  /* 10e9cfb4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10e9cfb6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10e9cfbc push ecx */
  push32((uint32_t)(ECX));
  /* 10e9cfbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cfc0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cfc3 add edx, 0x10ebe6c8 */
  { uint32_t _a=(EDX),_b=(0x10ebe6c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cfc9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9cfca call 0x10e99870 */
  push32(0x10e9cfcfu); f_10e99870();
  /* 10e9cfcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9cfd2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cfd6 jne 0x10e9cfe3 */
  if (!C.zf) goto L_10e9cfe3;
  /* 10e9cfd8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cfde mov dword ptr [0x10ebe690], eax */
  w32((uint32_t)(0x10ebe690), (EAX));
L_10e9cfe3:;
  /* 10e9cfe3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9cfe7 jne 0x10e9cff5 */
  if (!C.zf) goto L_10e9cff5;
  /* 10e9cfe9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e9cfef mov dword ptr [0x10ebe694], ecx */
  w32((uint32_t)(0x10ebe694), (ECX));
L_10e9cff5:;
  /* 10e9cff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9cff8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9cffb call dword ptr [edx + 0x10ebd4f0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10ebd4f0))), 0x10e9d001u);
  /* 10e9d001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d003 je 0x10e9d03c */
  if (C.zf) goto L_10e9d03c;
  /* 10e9d005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d008 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d00b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d00e mov dword ptr [eax + 0x10ebd4ec], ecx */
  w32((uint32_t)(EAX + 0x10ebd4ec), (ECX));
  /* 10e9d014 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d016 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d019 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d01a call 0x10e93a20 */
  push32(0x10e9d01fu); f_10e93a20();
  /* 10e9d01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d028 mov dword ptr [eax*4 + 0x10ebe678], ecx */
  w32((uint32_t)(EAX*4 + 0x10ebe678), (ECX));
  /* 10e9d02f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9d032 mov dword ptr [0x10ebe690], edx */
  w32((uint32_t)(0x10ebe690), (EDX));
  /* 10e9d038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d03a jmp 0x10e9d05f */
  goto L_10e9d05f;
L_10e9d03c:;
  /* 10e9d03c cmp dword ptr [ebp - 0xc], 0x10ebd3d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10ebd3d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d043 je 0x10e9d053 */
  if (C.zf) goto L_10e9d053;
  /* 10e9d045 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d047 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d04a push eax */
  push32((uint32_t)(EAX));
  /* 10e9d04b call 0x10e93a20 */
  push32(0x10e9d050u); f_10e93a20();
  /* 10e9d050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d053:;
  /* 10e9d053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d056 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d059 mov eax, dword ptr [ecx + 0x10ebd4ec] */
  EAX = (r32((uint32_t)(ECX + 0x10ebd4ec)));
L_10e9d05f:;
  /* 10e9d05f mov esp, ebp */
  ESP = (EBP);
  /* 10e9d061 pop ebp */
  EBP = (pop32());
  /* 10e9d062 ret  */
  ESPCHK(0x10e9ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x10e9d070 (256 bytes, 72 insns) */
void f_10e9d070(void) {
  FTRACE(0x10e9d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d070 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d071 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d076 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e9d07d cmp dword ptr [0x10ebd4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebd4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d084 jne 0x10e9d0a4 */
  if (!C.zf) goto L_10e9d0a4;
  /* 10e9d086 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10e9d08b push 0x10eba010 */
  push32((uint32_t)(0x10eba010u));
  /* 10e9d090 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d092 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10e9d097 call 0x10e92f90 */
  push32(0x10e9d09cu); f_10e92f90();
  /* 10e9d09c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d09f mov dword ptr [0x10ebd4ec], eax */
  w32((uint32_t)(0x10ebd4ec), (EAX));
L_10e9d0a4:;
  /* 10e9d0a4 mov eax, dword ptr [0x10ebd4ec] */
  EAX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9d0a9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e9d0ac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e9d0b3 jmp 0x10e9d0be */
  goto L_10e9d0be;
L_10e9d0b5:;
  /* 10e9d0b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d0b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d0bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9d0be:;
  /* 10e9d0be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d0c1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d0c4 mov eax, dword ptr [edx + 0x10ebd4ec] */
  EAX = (r32((uint32_t)(EDX + 0x10ebd4ec)));
  /* 10e9d0ca push eax */
  push32((uint32_t)(EAX));
  /* 10e9d0cb push 0x10eba01c */
  push32((uint32_t)(0x10eba01cu));
  /* 10e9d0d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d0d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d0d6 mov edx, dword ptr [ecx + 0x10ebd4e8] */
  EDX = (r32((uint32_t)(ECX + 0x10ebd4e8)));
  /* 10e9d0dc push edx */
  push32((uint32_t)(EDX));
  /* 10e9d0dd push 3 */
  push32((uint32_t)(0x3u));
  /* 10e9d0df mov eax, dword ptr [0x10ebd4ec] */
  EAX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9d0e4 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d0e5 call 0x10e9d310 */
  push32(0x10e9d0eau); f_10e9d310();
  /* 10e9d0ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d0ed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d0f1 jge 0x10e9d139 */
  if ((C.sf==C.of)) goto L_10e9d139;
  /* 10e9d0f3 push 0x10eba008 */
  push32((uint32_t)(0x10eba008u));
  /* 10e9d0f8 mov ecx, dword ptr [0x10ebd4ec] */
  ECX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9d0fe push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d0ff call 0x10e95f50 */
  push32(0x10e9d104u); f_10e95f50();
  /* 10e9d104 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d107 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d10a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d10d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d110 mov eax, dword ptr [edx + 0x10ebd4ec] */
  EAX = (r32((uint32_t)(EDX + 0x10ebd4ec)));
  /* 10e9d116 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d11a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d11d mov edx, dword ptr [ecx + 0x10ebd4ec] */
  EDX = (r32((uint32_t)(ECX + 0x10ebd4ec)));
  /* 10e9d123 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d124 call 0x10e9ec20 */
  push32(0x10e9d129u); f_10e9ec20();
  /* 10e9d129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d12c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d12e je 0x10e9d137 */
  if (C.zf) goto L_10e9d137;
  /* 10e9d130 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e9d137:;
  /* 10e9d137 jmp 0x10e9d167 */
  goto L_10e9d167;
L_10e9d139:;
  /* 10e9d139 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d13d jne 0x10e9d146 */
  if (!C.zf) goto L_10e9d146;
  /* 10e9d13f mov eax, dword ptr [0x10ebd4ec] */
  EAX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9d144 jmp 0x10e9d16c */
  goto L_10e9d16c;
L_10e9d146:;
  /* 10e9d146 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d148 mov eax, dword ptr [0x10ebd4ec] */
  EAX = (r32((uint32_t)(0x10ebd4ec)));
  /* 10e9d14d push eax */
  push32((uint32_t)(EAX));
  /* 10e9d14e call 0x10e93a20 */
  push32(0x10e9d153u); f_10e93a20();
  /* 10e9d153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d156 mov dword ptr [0x10ebd4ec], 0 */
  w32((uint32_t)(0x10ebd4ec), (0x0u));
  /* 10e9d160 mov eax, dword ptr [0x10ebd504] */
  EAX = (r32((uint32_t)(0x10ebd504)));
  /* 10e9d165 jmp 0x10e9d16c */
  goto L_10e9d16c;
L_10e9d167:;
  /* 10e9d167 jmp 0x10e9d0b5 */
  goto L_10e9d0b5;
L_10e9d16c:;
  /* 10e9d16c mov esp, ebp */
  ESP = (EBP);
  /* 10e9d16e pop ebp */
  EBP = (pop32());
  /* 10e9d16f ret  */
  ESPCHK(0x10e9d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x10e9d170 (388 bytes, 115 insns) */
void f_10e9d170(void) {
  FTRACE(0x10e9d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d170 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d171 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d173 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d179 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d17d jne 0x10e9d186 */
  if (!C.zf) goto L_10e9d186;
  /* 10e9d17f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d181 jmp 0x10e9d2f0 */
  goto L_10e9d2f0;
L_10e9d186:;
  /* 10e9d186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d189 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9d18c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d18f jne 0x10e9d1e0 */
  if (!C.zf) goto L_10e9d1e0;
  /* 10e9d191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d194 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e9d198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d19a jne 0x10e9d1e0 */
  if (!C.zf) goto L_10e9d1e0;
  /* 10e9d19c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d19f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10e9d1a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d1a5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10e9d1a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d1ad je 0x10e9d1c9 */
  if (C.zf) goto L_10e9d1c9;
  /* 10e9d1af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9d1b2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10e9d1b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9d1ba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10e9d1c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9d1c3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10e9d1c9:;
  /* 10e9d1c9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d1cd je 0x10e9d1d8 */
  if (C.zf) goto L_10e9d1d8;
  /* 10e9d1cf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9d1d2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e9d1d8:;
  /* 10e9d1d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d1db jmp 0x10e9d2f0 */
  goto L_10e9d2f0;
L_10e9d1e0:;
  /* 10e9d1e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d1e4 push 0x10ebd460 */
  push32((uint32_t)(0x10ebd460u));
  /* 10e9d1e9 call 0x10e9ec20 */
  push32(0x10e9d1eeu); f_10e9ec20();
  /* 10e9d1ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d1f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d1f3 je 0x10e9d2a8 */
  if (C.zf) goto L_10e9d2a8;
  /* 10e9d1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d1fc push edx */
  push32((uint32_t)(EDX));
  /* 10e9d1fd push 0x10ebd3dc */
  push32((uint32_t)(0x10ebd3dcu));
  /* 10e9d202 call 0x10e9ec20 */
  push32(0x10e9d207u); f_10e9ec20();
  /* 10e9d207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d20a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d20c je 0x10e9d2a8 */
  if (C.zf) goto L_10e9d2a8;
  /* 10e9d212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d215 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d216 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10e9d21c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d21d call 0x10e9d360 */
  push32(0x10e9d222u); f_10e9d360();
  /* 10e9d222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d227 je 0x10e9d230 */
  if (C.zf) goto L_10e9d230;
  /* 10e9d229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d22b jmp 0x10e9d2f0 */
  goto L_10e9d2f0;
L_10e9d230:;
  /* 10e9d230 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e9d236 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d237 push 0x10ebe6a0 */
  push32((uint32_t)(0x10ebe6a0u));
  /* 10e9d23c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10e9d242 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d243 call 0x10e9ed70 */
  push32(0x10e9d248u); f_10e9ed70();
  /* 10e9d248 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d24b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d24d jne 0x10e9d256 */
  if (!C.zf) goto L_10e9d256;
  /* 10e9d24f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d251 jmp 0x10e9d2f0 */
  goto L_10e9d2f0;
L_10e9d256:;
  /* 10e9d256 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d258 mov cx, word ptr [0x10ebe6a4] */
  CX = (r16((uint32_t)(0x10ebe6a4)));
  /* 10e9d25f mov dword ptr [0x10ebe6a8], ecx */
  w32((uint32_t)(0x10ebe6a8), (ECX));
  /* 10e9d265 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e9d26b push edx */
  push32((uint32_t)(EDX));
  /* 10e9d26c push 0x10ebd460 */
  push32((uint32_t)(0x10ebd460u));
  /* 10e9d271 call 0x10e9d4c0 */
  push32(0x10e9d276u); f_10e9d4c0();
  /* 10e9d276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d27c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9d27f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9d281 je 0x10e9d296 */
  if (C.zf) goto L_10e9d296;
  /* 10e9d283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d286 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d287 push 0x10ebd3dc */
  push32((uint32_t)(0x10ebd3dcu));
  /* 10e9d28c call 0x10e95f40 */
  push32(0x10e9d291u); f_10e95f40();
  /* 10e9d291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d294 jmp 0x10e9d2a8 */
  goto L_10e9d2a8;
L_10e9d296:;
  /* 10e9d296 push 0x10ebd460 */
  push32((uint32_t)(0x10ebd460u));
  /* 10e9d29b push 0x10ebd3dc */
  push32((uint32_t)(0x10ebd3dcu));
  /* 10e9d2a0 call 0x10e95f40 */
  push32(0x10e9d2a5u); f_10e95f40();
  /* 10e9d2a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d2a8:;
  /* 10e9d2a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d2ac je 0x10e9d2c1 */
  if (C.zf) goto L_10e9d2c1;
  /* 10e9d2ae push 6 */
  push32((uint32_t)(0x6u));
  /* 10e9d2b0 push 0x10ebe6a0 */
  push32((uint32_t)(0x10ebe6a0u));
  /* 10e9d2b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9d2b8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d2b9 call 0x10e99870 */
  push32(0x10e9d2beu); f_10e99870();
  /* 10e9d2be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d2c1:;
  /* 10e9d2c1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d2c5 je 0x10e9d2da */
  if (C.zf) goto L_10e9d2da;
  /* 10e9d2c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e9d2c9 push 0x10ebe6a8 */
  push32((uint32_t)(0x10ebe6a8u));
  /* 10e9d2ce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9d2d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d2d2 call 0x10e99870 */
  push32(0x10e9d2d7u); f_10e99870();
  /* 10e9d2d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d2da:;
  /* 10e9d2da push 0x10ebd460 */
  push32((uint32_t)(0x10ebd460u));
  /* 10e9d2df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d2e2 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d2e3 call 0x10e95f40 */
  push32(0x10e9d2e8u); f_10e95f40();
  /* 10e9d2e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d2eb mov eax, 0x10ebd460 */
  EAX = (0x10ebd460u);
L_10e9d2f0:;
  /* 10e9d2f0 mov esp, ebp */
  ESP = (EBP);
  /* 10e9d2f2 pop ebp */
  EBP = (pop32());
  /* 10e9d2f3 ret  */
  ESPCHK(0x10e9d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x10e9d300 (7 bytes, 5 insns) */
void f_10e9d300(void) {
  FTRACE(0x10e9d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d300 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d301 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d305 pop ebp */
  EBP = (pop32());
  /* 10e9d306 ret  */
  ESPCHK(0x10e9d300u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10e9d310 (79 bytes, 28 insns) */
void f_10e9d310(void) {
  FTRACE(0x10e9d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d310 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d311 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d316 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e9d319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d31c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9d323 jmp 0x10e9d32e */
  goto L_10e9d32e;
L_10e9d325:;
  /* 10e9d325 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d328 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d32b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e9d32e:;
  /* 10e9d32e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d331 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d334 jge 0x10e9d354 */
  if ((C.sf==C.of)) goto L_10e9d354;
  /* 10e9d336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d339 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d33c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d33f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d342 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e9d345 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d349 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d34a call 0x10e95f50 */
  push32(0x10e9d34fu); f_10e95f50();
  /* 10e9d34f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d352 jmp 0x10e9d325 */
  goto L_10e9d325;
L_10e9d354:;
  /* 10e9d354 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9d35b mov esp, ebp */
  ESP = (EBP);
  /* 10e9d35d pop ebp */
  EBP = (pop32());
  /* 10e9d35e ret  */
  ESPCHK(0x10e9d310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x10e9d360 (349 bytes, 122 insns) */
void f_10e9d360(void) {
  FTRACE(0x10e9d360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d360 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d361 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d366 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e9d36b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9d36d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d370 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d371 call 0x10e96d00 */
  push32(0x10e9d376u); f_10e96d00();
  /* 10e9d376 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d379 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d37c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9d37f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9d381 jne 0x10e9d38a */
  if (!C.zf) goto L_10e9d38a;
  /* 10e9d383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d385 jmp 0x10e9d4b9 */
  goto L_10e9d4b9;
L_10e9d38a:;
  /* 10e9d38a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d38d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9d390 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d393 jne 0x10e9d3c0 */
  if (!C.zf) goto L_10e9d3c0;
  /* 10e9d395 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d398 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e9d39c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d39e je 0x10e9d3c0 */
  if (C.zf) goto L_10e9d3c0;
  /* 10e9d3a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d3a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d3aa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3b0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d3b1 call 0x10e95f40 */
  push32(0x10e9d3b6u); f_10e95f40();
  /* 10e9d3b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d3bb jmp 0x10e9d4b9 */
  goto L_10e9d4b9;
L_10e9d3c0:;
  /* 10e9d3c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9d3c7 jmp 0x10e9d3d2 */
  goto L_10e9d3d2;
L_10e9d3c9:;
  /* 10e9d3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d3cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9d3d2:;
  /* 10e9d3d2 push 0x10eba020 */
  push32((uint32_t)(0x10eba020u));
  /* 10e9d3d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d3da push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d3db call 0x10e9ecb0 */
  push32(0x10e9d3e0u); f_10e9ecb0();
  /* 10e9d3e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3e3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9d3e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d3ea jne 0x10e9d3f4 */
  if (!C.zf) goto L_10e9d3f4;
  /* 10e9d3ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d3ef jmp 0x10e9d4b9 */
  goto L_10e9d4b9;
L_10e9d3f4:;
  /* 10e9d3f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d3f7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d3fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9d3fc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e9d3ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d403 jne 0x10e9d42a */
  if (!C.zf) goto L_10e9d42a;
  /* 10e9d405 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d409 jge 0x10e9d42a */
  if ((C.sf==C.of)) goto L_10e9d42a;
  /* 10e9d40b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d40f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d412 je 0x10e9d42a */
  if (C.zf) goto L_10e9d42a;
  /* 10e9d414 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d417 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d418 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d41b push eax */
  push32((uint32_t)(EAX));
  /* 10e9d41c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d41f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d420 call 0x10e967b0 */
  push32(0x10e9d425u); f_10e967b0();
  /* 10e9d425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d428 jmp 0x10e9d490 */
  goto L_10e9d490;
L_10e9d42a:;
  /* 10e9d42a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d42e jne 0x10e9d458 */
  if (!C.zf) goto L_10e9d458;
  /* 10e9d430 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d434 jge 0x10e9d458 */
  if ((C.sf==C.of)) goto L_10e9d458;
  /* 10e9d436 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d43a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d43d je 0x10e9d458 */
  if (C.zf) goto L_10e9d458;
  /* 10e9d43f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d442 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d443 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d446 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d44a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d44d push edx */
  push32((uint32_t)(EDX));
  /* 10e9d44e call 0x10e967b0 */
  push32(0x10e9d453u); f_10e967b0();
  /* 10e9d453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d456 jmp 0x10e9d490 */
  goto L_10e9d490;
L_10e9d458:;
  /* 10e9d458 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d45c jne 0x10e9d48b */
  if (!C.zf) goto L_10e9d48b;
  /* 10e9d45e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d464 je 0x10e9d46f */
  if (C.zf) goto L_10e9d46f;
  /* 10e9d466 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d46a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d46d jne 0x10e9d48b */
  if (!C.zf) goto L_10e9d48b;
L_10e9d46f:;
  /* 10e9d46f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d472 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d476 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d47a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d480 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d481 call 0x10e967b0 */
  push32(0x10e9d486u); f_10e967b0();
  /* 10e9d486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d489 jmp 0x10e9d490 */
  goto L_10e9d490;
L_10e9d48b:;
  /* 10e9d48b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d48e jmp 0x10e9d4b9 */
  goto L_10e9d4b9;
L_10e9d490:;
  /* 10e9d490 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d494 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d497 jne 0x10e9d49b */
  if (!C.zf) goto L_10e9d49b;
  /* 10e9d499 jmp 0x10e9d4b7 */
  goto L_10e9d4b7;
L_10e9d49b:;
  /* 10e9d49b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9d49f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d4a1 jne 0x10e9d4a5 */
  if (!C.zf) goto L_10e9d4a5;
  /* 10e9d4a3 jmp 0x10e9d4b7 */
  goto L_10e9d4b7;
L_10e9d4a5:;
  /* 10e9d4a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d4a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d4ab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10e9d4af mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e9d4b2 jmp 0x10e9d3c9 */
  goto L_10e9d3c9;
L_10e9d4b7:;
  /* 10e9d4b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9d4b9:;
  /* 10e9d4b9 mov esp, ebp */
  ESP = (EBP);
  /* 10e9d4bb pop ebp */
  EBP = (pop32());
  /* 10e9d4bc ret  */
  ESPCHK(0x10e9d360u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10e9d4c0 (101 bytes, 36 insns) */
void f_10e9d4c0(void) {
  FTRACE(0x10e9d4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d4c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d4c6 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d4c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d4ca push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d4cb call 0x10e95f40 */
  push32(0x10e9d4d0u); f_10e95f40();
  /* 10e9d4d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d4d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d4d6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10e9d4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d4dc je 0x10e9d4f8 */
  if (C.zf) goto L_10e9d4f8;
  /* 10e9d4de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d4e1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d4e5 push 0x10eba028 */
  push32((uint32_t)(0x10eba028u));
  /* 10e9d4ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d4ef push edx */
  push32((uint32_t)(EDX));
  /* 10e9d4f0 call 0x10e9d310 */
  push32(0x10e9d4f5u); f_10e9d310();
  /* 10e9d4f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d4f8:;
  /* 10e9d4f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d4fb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10e9d502 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9d504 je 0x10e9d523 */
  if (C.zf) goto L_10e9d523;
  /* 10e9d506 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9d509 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d50f push edx */
  push32((uint32_t)(EDX));
  /* 10e9d510 push 0x10eba024 */
  push32((uint32_t)(0x10eba024u));
  /* 10e9d515 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d51a push eax */
  push32((uint32_t)(EAX));
  /* 10e9d51b call 0x10e9d310 */
  push32(0x10e9d520u); f_10e9d310();
  /* 10e9d520 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d523:;
  /* 10e9d523 pop ebp */
  EBP = (pop32());
  /* 10e9d524 ret  */
  ESPCHK(0x10e9d4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d530 @ 0x10e9d530 (130 bytes, 50 insns) */
void f_10e9d530(void) {
  FTRACE(0x10e9d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d530 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d531 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d533 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d534 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9d535 push esi */
  push32((uint32_t)(ESI));
  /* 10e9d536 push edi */
  push32((uint32_t)(EDI));
  /* 10e9d537 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9d53e:;
  /* 10e9d53e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d542 jne 0x10e9d562 */
  if (!C.zf) goto L_10e9d562;
  /* 10e9d544 push 0x10eba038 */
  push32((uint32_t)(0x10eba038u));
  /* 10e9d549 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9d54b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e9d54d push 0x10eba02c */
  push32((uint32_t)(0x10eba02cu));
  /* 10e9d552 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d554 call 0x10e92050 */
  push32(0x10e9d559u); f_10e92050();
  /* 10e9d559 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d55c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d55f jne 0x10e9d562 */
  if (!C.zf) goto L_10e9d562;
  /* 10e9d561 int3  */
  x86_unimpl("int3 @ 0x10e9d561");
L_10e9d562:;
  /* 10e9d562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d566 jne 0x10e9d53e */
  if (!C.zf) goto L_10e9d53e;
  /* 10e9d568 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d56b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9d56e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9d571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9d573 je 0x10e9d581 */
  if (C.zf) goto L_10e9d581;
  /* 10e9d575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d578 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e9d57f jmp 0x10e9d5a8 */
  goto L_10e9d5a8;
L_10e9d581:;
  /* 10e9d581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d584 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d585 call 0x10e9bda0 */
  push32(0x10e9d58au); f_10e9bda0();
  /* 10e9d58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d58d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d590 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d591 call 0x10e9d5c0 */
  push32(0x10e9d596u); f_10e9d5c0();
  /* 10e9d596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d59c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d59f push eax */
  push32((uint32_t)(EAX));
  /* 10e9d5a0 call 0x10e9be10 */
  push32(0x10e9d5a5u); f_10e9be10();
  /* 10e9d5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9d5a8:;
  /* 10e9d5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d5ab pop edi */
  EDI = (pop32());
  /* 10e9d5ac pop esi */
  ESI = (pop32());
  /* 10e9d5ad pop ebx */
  EBX = (pop32());
  /* 10e9d5ae mov esp, ebp */
  ESP = (EBP);
  /* 10e9d5b0 pop ebp */
  EBP = (pop32());
  /* 10e9d5b1 ret  */
  ESPCHK(0x10e9d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x10e9d5c0 (190 bytes, 67 insns) */
void f_10e9d5c0(void) {
  FTRACE(0x10e9d5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d5c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d5c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9d5c7 push esi */
  push32((uint32_t)(ESI));
  /* 10e9d5c8 push edi */
  push32((uint32_t)(EDI));
  /* 10e9d5c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e9d5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d5d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e9d5d6:;
  /* 10e9d5d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d5da jne 0x10e9d5fa */
  if (!C.zf) goto L_10e9d5fa;
  /* 10e9d5dc push 0x10eb9ed8 */
  push32((uint32_t)(0x10eb9ed8u));
  /* 10e9d5e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9d5e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10e9d5e5 push 0x10eba02c */
  push32((uint32_t)(0x10eba02cu));
  /* 10e9d5ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d5ec call 0x10e92050 */
  push32(0x10e9d5f1u); f_10e92050();
  /* 10e9d5f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d5f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d5f7 jne 0x10e9d5fa */
  if (!C.zf) goto L_10e9d5fa;
  /* 10e9d5f9 int3  */
  x86_unimpl("int3 @ 0x10e9d5f9");
L_10e9d5fa:;
  /* 10e9d5fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d5fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9d5fe jne 0x10e9d5d6 */
  if (!C.zf) goto L_10e9d5d6;
  /* 10e9d600 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d603 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e9d606 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d60b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d60d je 0x10e9d66a */
  if (C.zf) goto L_10e9d66a;
  /* 10e9d60f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d612 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d613 call 0x10e9c8c0 */
  push32(0x10e9d618u); f_10e9c8c0();
  /* 10e9d618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d61b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d61e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d621 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d622 call 0x10e9fc40 */
  push32(0x10e9d627u); f_10e9fc40();
  /* 10e9d627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d62a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d62d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9d630 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d631 call 0x10e9fb10 */
  push32(0x10e9d636u); f_10e9fb10();
  /* 10e9d636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d63b jge 0x10e9d646 */
  if ((C.sf==C.of)) goto L_10e9d646;
  /* 10e9d63d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e9d644 jmp 0x10e9d66a */
  goto L_10e9d66a;
L_10e9d646:;
  /* 10e9d646 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d649 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d64d je 0x10e9d66a */
  if (C.zf) goto L_10e9d66a;
  /* 10e9d64f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d654 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e9d657 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d658 call 0x10e93a20 */
  push32(0x10e9d65du); f_10e93a20();
  /* 10e9d65d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d660 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d663 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10e9d66a:;
  /* 10e9d66a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9d66d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e9d674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d677 pop edi */
  EDI = (pop32());
  /* 10e9d678 pop esi */
  ESI = (pop32());
  /* 10e9d679 pop ebx */
  EBX = (pop32());
  /* 10e9d67a mov esp, ebp */
  ESP = (EBP);
  /* 10e9d67c pop ebp */
  EBP = (pop32());
  /* 10e9d67d ret  */
  ESPCHK(0x10e9d5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x10e9d680 (210 bytes, 63 insns) */
void f_10e9d680(void) {
  FTRACE(0x10e9d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d680 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d681 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d683 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d687 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d68d jae 0x10e9d6b1 */
  if (!C.cf) goto L_10e9d6b1;
  /* 10e9d68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9d695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9d69b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d69e mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9d6a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9d6aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d6ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9d6af jne 0x10e9d6c4 */
  if (!C.zf) goto L_10e9d6c4;
L_10e9d6b1:;
  /* 10e9d6b1 call 0x10e9ae60 */
  push32(0x10e9d6b6u); f_10e9ae60();
  /* 10e9d6b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9d6bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d6bf jmp 0x10e9d74e */
  goto L_10e9d74e;
L_10e9d6c4:;
  /* 10e9d6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d6c7 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d6c8 call 0x10e9c680 */
  push32(0x10e9d6cdu); f_10e9c680();
  /* 10e9d6cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d6d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9d6d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d6d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d6dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9d6df mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9d6e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e9d6eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d6ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d6f0 je 0x10e9d72d */
  if (C.zf) goto L_10e9d72d;
  /* 10e9d6f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d6f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d6f6 call 0x10e9c500 */
  push32(0x10e9d6fbu); f_10e9c500();
  /* 10e9d6fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d6fe push eax */
  push32((uint32_t)(EAX));
  /* 10e9d6ff call dword ptr [0x10ec02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02a8))), 0x10e9d705u);
  /* 10e9d705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d707 jne 0x10e9d714 */
  if (!C.zf) goto L_10e9d714;
  /* 10e9d709 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9d70fu);
  /* 10e9d70f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d712 jmp 0x10e9d71b */
  goto L_10e9d71b;
L_10e9d714:;
  /* 10e9d714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e9d71b:;
  /* 10e9d71b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d71f jne 0x10e9d723 */
  if (!C.zf) goto L_10e9d723;
  /* 10e9d721 jmp 0x10e9d73f */
  goto L_10e9d73f;
L_10e9d723:;
  /* 10e9d723 call 0x10e9ae70 */
  push32(0x10e9d728u); f_10e9ae70();
  /* 10e9d728 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d72b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e9d72d:;
  /* 10e9d72d call 0x10e9ae60 */
  push32(0x10e9d732u); f_10e9ae60();
  /* 10e9d732 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9d738 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e9d73f:;
  /* 10e9d73f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d742 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d743 call 0x10e9c710 */
  push32(0x10e9d748u); f_10e9c710();
  /* 10e9d748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d74b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9d74e:;
  /* 10e9d74e mov esp, ebp */
  ESP = (EBP);
  /* 10e9d750 pop ebp */
  EBP = (pop32());
  /* 10e9d751 ret  */
  ESPCHK(0x10e9d680u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10e9d760 (219 bytes, 64 insns) */
void f_10e9d760(void) {
  FTRACE(0x10e9d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d760 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d761 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d763 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d764 cmp dword ptr [0x10ebe68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d76b je 0x10e9d801 */
  if (C.zf) goto L_10e9d801;
  /* 10e9d771 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e9d773 push 0x10eba048 */
  push32((uint32_t)(0x10eba048u));
  /* 10e9d778 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d77a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10e9d77f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d781 call 0x10e933a0 */
  push32(0x10e9d786u); f_10e933a0();
  /* 10e9d786 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d78c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d790 jne 0x10e9d79c */
  if (!C.zf) goto L_10e9d79c;
  /* 10e9d792 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9d797 jmp 0x10e9d837 */
  goto L_10e9d837;
L_10e9d79c:;
  /* 10e9d79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d79f push eax */
  push32((uint32_t)(EAX));
  /* 10e9d7a0 call 0x10e9d840 */
  push32(0x10e9d7a5u); f_10e9d840();
  /* 10e9d7a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d7a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9d7aa je 0x10e9d7cd */
  if (C.zf) goto L_10e9d7cd;
  /* 10e9d7ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d7af push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d7b0 call 0x10e9ddd0 */
  push32(0x10e9d7b5u); f_10e9ddd0();
  /* 10e9d7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d7b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d7ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d7bd push edx */
  push32((uint32_t)(EDX));
  /* 10e9d7be call 0x10e93a20 */
  push32(0x10e9d7c3u); f_10e93a20();
  /* 10e9d7c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d7c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9d7cb jmp 0x10e9d837 */
  goto L_10e9d837;
L_10e9d7cd:;
  /* 10e9d7cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d7d0 mov dword ptr [0x10ebdca8], eax */
  w32((uint32_t)(0x10ebdca8), (EAX));
  /* 10e9d7d5 mov ecx, dword ptr [0x10ebe6ac] */
  ECX = (r32((uint32_t)(0x10ebe6ac)));
  /* 10e9d7db push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d7dc call 0x10e9ddd0 */
  push32(0x10e9d7e1u); f_10e9ddd0();
  /* 10e9d7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d7e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d7e6 mov edx, dword ptr [0x10ebe6ac] */
  EDX = (r32((uint32_t)(0x10ebe6ac)));
  /* 10e9d7ec push edx */
  push32((uint32_t)(EDX));
  /* 10e9d7ed call 0x10e93a20 */
  push32(0x10e9d7f2u); f_10e93a20();
  /* 10e9d7f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d7f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d7f8 mov dword ptr [0x10ebe6ac], eax */
  w32((uint32_t)(0x10ebe6ac), (EAX));
  /* 10e9d7fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d7ff jmp 0x10e9d837 */
  goto L_10e9d837;
L_10e9d801:;
  /* 10e9d801 mov dword ptr [0x10ebdca8], 0x10ebdcb0 */
  w32((uint32_t)(0x10ebdca8), (0x10ebdcb0u));
  /* 10e9d80b mov ecx, dword ptr [0x10ebe6ac] */
  ECX = (r32((uint32_t)(0x10ebe6ac)));
  /* 10e9d811 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9d812 call 0x10e9ddd0 */
  push32(0x10e9d817u); f_10e9ddd0();
  /* 10e9d817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d81a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9d81c mov edx, dword ptr [0x10ebe6ac] */
  EDX = (r32((uint32_t)(0x10ebe6ac)));
  /* 10e9d822 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d823 call 0x10e93a20 */
  push32(0x10e9d828u); f_10e93a20();
  /* 10e9d828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d82b mov dword ptr [0x10ebe6ac], 0 */
  w32((uint32_t)(0x10ebe6ac), (0x0u));
  /* 10e9d835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9d837:;
  /* 10e9d837 mov esp, ebp */
  ESP = (EBP);
  /* 10e9d839 pop ebp */
  EBP = (pop32());
  /* 10e9d83a ret  */
  ESPCHK(0x10e9d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x10e9d840 (1423 bytes, 533 insns) */
void f_10e9d840(void) {
  FTRACE(0x10e9d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9d840 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9d841 mov ebp, esp */
  EBP = (ESP);
  /* 10e9d843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9d846 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9d84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d84f mov ax, word ptr [0x10ebe6e6] */
  AX = (r16((uint32_t)(0x10ebe6e6)));
  /* 10e9d855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9d858 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d85a mov cx, word ptr [0x10ebe6e8] */
  CX = (r16((uint32_t)(0x10ebe6e8)));
  /* 10e9d861 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9d864 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9d868 jne 0x10e9d872 */
  if (!C.zf) goto L_10e9d872;
  /* 10e9d86a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9d86d jmp 0x10e9ddcb */
  goto L_10e9ddcb;
L_10e9d872:;
  /* 10e9d872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d875 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d878 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d879 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10e9d87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d87e push eax */
  push32((uint32_t)(EAX));
  /* 10e9d87f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d881 call 0x10ea1150 */
  push32(0x10e9d886u); f_10ea1150();
  /* 10e9d886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d889 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d88c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d88e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d894 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d897 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d898 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10e9d89a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d89d push eax */
  push32((uint32_t)(EAX));
  /* 10e9d89e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d8a0 call 0x10ea1150 */
  push32(0x10e9d8a5u); f_10ea1150();
  /* 10e9d8a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d8ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d8ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d8b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d8b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8b6 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d8b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10e9d8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d8bc push eax */
  push32((uint32_t)(EAX));
  /* 10e9d8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d8bf call 0x10ea1150 */
  push32(0x10e9d8c4u); f_10ea1150();
  /* 10e9d8c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d8ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d8cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d8d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8d5 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d8d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10e9d8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d8db push eax */
  push32((uint32_t)(EAX));
  /* 10e9d8dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d8de call 0x10ea1150 */
  push32(0x10e9d8e3u); f_10ea1150();
  /* 10e9d8e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d8e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d8eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d8ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d8f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d8f4 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d8f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10e9d8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d8fa push eax */
  push32((uint32_t)(EAX));
  /* 10e9d8fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d8fd call 0x10ea1150 */
  push32(0x10e9d902u); f_10ea1150();
  /* 10e9d902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d908 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d90a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d90d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d910 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d913 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d914 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10e9d916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d919 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d91a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d91c call 0x10ea1150 */
  push32(0x10e9d921u); f_10ea1150();
  /* 10e9d921 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d927 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d929 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d92c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d92f push edx */
  push32((uint32_t)(EDX));
  /* 10e9d930 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10e9d932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d935 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d938 call 0x10ea1150 */
  push32(0x10e9d93du); f_10ea1150();
  /* 10e9d93d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d943 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d945 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d94b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d94e push edx */
  push32((uint32_t)(EDX));
  /* 10e9d94f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e9d951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d954 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d955 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d957 call 0x10ea1150 */
  push32(0x10e9d95cu); f_10ea1150();
  /* 10e9d95c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d95f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d962 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d964 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d96a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d96d push edx */
  push32((uint32_t)(EDX));
  /* 10e9d96e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10e9d970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d973 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d976 call 0x10ea1150 */
  push32(0x10e9d97bu); f_10ea1150();
  /* 10e9d97b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d97e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d981 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d983 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d986 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d989 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d98c push edx */
  push32((uint32_t)(EDX));
  /* 10e9d98d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10e9d98f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d992 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d995 call 0x10ea1150 */
  push32(0x10e9d99au); f_10ea1150();
  /* 10e9d99a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d99d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d9a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d9a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d9a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d9a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9ab push edx */
  push32((uint32_t)(EDX));
  /* 10e9d9ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10e9d9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d9b1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d9b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d9b4 call 0x10ea1150 */
  push32(0x10e9d9b9u); f_10ea1150();
  /* 10e9d9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d9bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d9c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d9c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d9c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9ca push edx */
  push32((uint32_t)(EDX));
  /* 10e9d9cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e9d9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d9d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e9d9d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d9d3 call 0x10ea1150 */
  push32(0x10e9d9d8u); f_10ea1150();
  /* 10e9d9d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d9de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d9e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9d9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9d9e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9e9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9d9ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10e9d9ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9d9ef push eax */
  push32((uint32_t)(EAX));
  /* 10e9d9f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9d9f2 call 0x10ea1150 */
  push32(0x10e9d9f7u); f_10ea1150();
  /* 10e9d9f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9d9fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9d9fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9d9ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9da05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da08 push edx */
  push32((uint32_t)(EDX));
  /* 10e9da09 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e9da0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9da0e push eax */
  push32((uint32_t)(EAX));
  /* 10e9da0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9da11 call 0x10ea1150 */
  push32(0x10e9da16u); f_10ea1150();
  /* 10e9da16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9da1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9da1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9da24 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da27 push edx */
  push32((uint32_t)(EDX));
  /* 10e9da28 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e9da2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9da2d push eax */
  push32((uint32_t)(EAX));
  /* 10e9da2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9da30 call 0x10ea1150 */
  push32(0x10e9da35u); f_10ea1150();
  /* 10e9da35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9da3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9da3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9da43 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da46 push edx */
  push32((uint32_t)(EDX));
  /* 10e9da47 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10e9da49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9da4c push eax */
  push32((uint32_t)(EAX));
  /* 10e9da4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9da4f call 0x10ea1150 */
  push32(0x10e9da54u); f_10ea1150();
  /* 10e9da54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9da5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9da5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9da62 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da65 push edx */
  push32((uint32_t)(EDX));
  /* 10e9da66 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10e9da68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9da6b push eax */
  push32((uint32_t)(EAX));
  /* 10e9da6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9da6e call 0x10ea1150 */
  push32(0x10e9da73u); f_10ea1150();
  /* 10e9da73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9da79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9da7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9da81 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da84 push edx */
  push32((uint32_t)(EDX));
  /* 10e9da85 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10e9da87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9da8a push eax */
  push32((uint32_t)(EAX));
  /* 10e9da8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9da8d call 0x10ea1150 */
  push32(0x10e9da92u); f_10ea1150();
  /* 10e9da92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9da95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9da98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9da9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9da9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9daa0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9daa3 push edx */
  push32((uint32_t)(EDX));
  /* 10e9daa4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e9daa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9daa9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9daaa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9daac call 0x10ea1150 */
  push32(0x10e9dab1u); f_10ea1150();
  /* 10e9dab1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dab4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dab7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dab9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dabc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dabf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dac2 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dac3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10e9dac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dac8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dac9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dacb call 0x10ea1150 */
  push32(0x10e9dad0u); f_10ea1150();
  /* 10e9dad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dad3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dad6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dad8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dadb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dade add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dae1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dae2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e9dae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dae7 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dae8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9daea call 0x10ea1150 */
  push32(0x10e9daefu); f_10ea1150();
  /* 10e9daef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9daf2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9daf5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9daf7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dafa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dafd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db00 push edx */
  push32((uint32_t)(EDX));
  /* 10e9db01 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10e9db03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9db06 push eax */
  push32((uint32_t)(EAX));
  /* 10e9db07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9db09 call 0x10ea1150 */
  push32(0x10e9db0eu); f_10ea1150();
  /* 10e9db0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9db14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9db16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9db19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9db1c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db1f push edx */
  push32((uint32_t)(EDX));
  /* 10e9db20 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10e9db22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9db25 push eax */
  push32((uint32_t)(EAX));
  /* 10e9db26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9db28 call 0x10ea1150 */
  push32(0x10e9db2du); f_10ea1150();
  /* 10e9db2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9db33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9db35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9db38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9db3b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db3e push edx */
  push32((uint32_t)(EDX));
  /* 10e9db3f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10e9db41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9db44 push eax */
  push32((uint32_t)(EAX));
  /* 10e9db45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9db47 call 0x10ea1150 */
  push32(0x10e9db4cu); f_10ea1150();
  /* 10e9db4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9db52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9db54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9db57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9db5a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db5d push edx */
  push32((uint32_t)(EDX));
  /* 10e9db5e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10e9db60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9db63 push eax */
  push32((uint32_t)(EAX));
  /* 10e9db64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9db66 call 0x10ea1150 */
  push32(0x10e9db6bu); f_10ea1150();
  /* 10e9db6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9db71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9db73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9db76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9db79 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db7c push edx */
  push32((uint32_t)(EDX));
  /* 10e9db7d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10e9db7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9db82 push eax */
  push32((uint32_t)(EAX));
  /* 10e9db83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9db85 call 0x10ea1150 */
  push32(0x10e9db8au); f_10ea1150();
  /* 10e9db8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9db90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9db92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9db95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9db98 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9db9b push edx */
  push32((uint32_t)(EDX));
  /* 10e9db9c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10e9db9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dba1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dba4 call 0x10ea1150 */
  push32(0x10e9dba9u); f_10ea1150();
  /* 10e9dba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dbaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dbb1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dbb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dbb7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbba push edx */
  push32((uint32_t)(EDX));
  /* 10e9dbbb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10e9dbbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dbc0 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dbc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dbc3 call 0x10ea1150 */
  push32(0x10e9dbc8u); f_10ea1150();
  /* 10e9dbc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dbce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dbd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dbd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dbd6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbd9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dbda push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e9dbdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dbdf push eax */
  push32((uint32_t)(EAX));
  /* 10e9dbe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dbe2 call 0x10ea1150 */
  push32(0x10e9dbe7u); f_10ea1150();
  /* 10e9dbe7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dbed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dbef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dbf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dbf5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dbf9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e9dbfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dbfe push eax */
  push32((uint32_t)(EAX));
  /* 10e9dbff push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dc01 call 0x10ea1150 */
  push32(0x10e9dc06u); f_10ea1150();
  /* 10e9dc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dc0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dc14 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc17 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dc18 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10e9dc1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dc1d push eax */
  push32((uint32_t)(EAX));
  /* 10e9dc1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dc20 call 0x10ea1150 */
  push32(0x10e9dc25u); f_10ea1150();
  /* 10e9dc25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dc2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dc2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dc30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dc33 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc36 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dc37 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e9dc39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dc3c push eax */
  push32((uint32_t)(EAX));
  /* 10e9dc3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dc3f call 0x10ea1150 */
  push32(0x10e9dc44u); f_10ea1150();
  /* 10e9dc44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dc4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dc4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dc4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dc52 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc58 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dc59 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10e9dc5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dc5e push eax */
  push32((uint32_t)(EAX));
  /* 10e9dc5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dc61 call 0x10ea1150 */
  push32(0x10e9dc66u); f_10ea1150();
  /* 10e9dc66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dc6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dc6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dc71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dc74 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc7a push edx */
  push32((uint32_t)(EDX));
  /* 10e9dc7b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e9dc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dc80 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dc81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dc83 call 0x10ea1150 */
  push32(0x10e9dc88u); f_10ea1150();
  /* 10e9dc88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dc8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dc90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dc93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dc96 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dc9c push edx */
  push32((uint32_t)(EDX));
  /* 10e9dc9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e9dc9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dca2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dca5 call 0x10ea1150 */
  push32(0x10e9dcaau); f_10ea1150();
  /* 10e9dcaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dcad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dcb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dcb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dcb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dcb8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dcbe push edx */
  push32((uint32_t)(EDX));
  /* 10e9dcbf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10e9dcc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dcc4 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dcc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dcc7 call 0x10ea1150 */
  push32(0x10e9dcccu); f_10ea1150();
  /* 10e9dccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dccf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dcd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dcd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dcd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dcda add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dce0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dce1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10e9dce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dce6 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dce9 call 0x10ea1150 */
  push32(0x10e9dceeu); f_10ea1150();
  /* 10e9dcee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dcf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dcf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dcf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dcfc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd02 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dd03 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e9dd05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dd08 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dd09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dd0b call 0x10ea1150 */
  push32(0x10e9dd10u); f_10ea1150();
  /* 10e9dd10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dd16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dd18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dd1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dd1e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd24 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dd25 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10e9dd27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dd2a push eax */
  push32((uint32_t)(EAX));
  /* 10e9dd2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dd2d call 0x10ea1150 */
  push32(0x10e9dd32u); f_10ea1150();
  /* 10e9dd32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dd38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dd3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dd3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dd40 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd46 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dd47 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10e9dd49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9dd4c push eax */
  push32((uint32_t)(EAX));
  /* 10e9dd4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dd4f call 0x10ea1150 */
  push32(0x10e9dd54u); f_10ea1150();
  /* 10e9dd54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dd5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dd5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dd5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dd62 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd68 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dd69 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10e9dd6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9dd6e push eax */
  push32((uint32_t)(EAX));
  /* 10e9dd6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dd71 call 0x10ea1150 */
  push32(0x10e9dd76u); f_10ea1150();
  /* 10e9dd76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dd7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dd7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dd81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dd84 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd8a push edx */
  push32((uint32_t)(EDX));
  /* 10e9dd8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e9dd8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9dd90 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dd91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9dd93 call 0x10ea1150 */
  push32(0x10e9dd98u); f_10ea1150();
  /* 10e9dd98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dd9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9dd9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9dda0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9dda3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dda6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ddac push edx */
  push32((uint32_t)(EDX));
  /* 10e9ddad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10e9ddb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9ddb5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ddb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9ddb8 call 0x10ea1150 */
  push32(0x10e9ddbdu); f_10ea1150();
  /* 10e9ddbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ddc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ddc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9ddc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9ddc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10e9ddcb:;
  /* 10e9ddcb mov esp, ebp */
  ESP = (EBP);
  /* 10e9ddcd pop ebp */
  EBP = (pop32());
  /* 10e9ddce ret  */
  ESPCHK(0x10e9d840u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10e9ddd0 (779 bytes, 265 insns) */
void f_10e9ddd0(void) {
  FTRACE(0x10e9ddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ddd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ddd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ddd7 jne 0x10e9ddde */
  if (!C.zf) goto L_10e9ddde;
  /* 10e9ddd9 jmp 0x10e9e0d9 */
  goto L_10e9e0d9;
L_10e9ddde:;
  /* 10e9ddde push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dde0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dde3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9dde6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9dde7 call 0x10e93a20 */
  push32(0x10e9ddecu); f_10e93a20();
  /* 10e9ddec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ddef push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9ddf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ddf4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9ddf7 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ddf8 call 0x10e93a20 */
  push32(0x10e9ddfdu); f_10e93a20();
  /* 10e9ddfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9de08 push edx */
  push32((uint32_t)(EDX));
  /* 10e9de09 call 0x10e93a20 */
  push32(0x10e9de0eu); f_10e93a20();
  /* 10e9de0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9de19 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9de1a call 0x10e93a20 */
  push32(0x10e9de1fu); f_10e93a20();
  /* 10e9de1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de27 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e9de2a push eax */
  push32((uint32_t)(EAX));
  /* 10e9de2b call 0x10e93a20 */
  push32(0x10e9de30u); f_10e93a20();
  /* 10e9de30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de38 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e9de3b push edx */
  push32((uint32_t)(EDX));
  /* 10e9de3c call 0x10e93a20 */
  push32(0x10e9de41u); f_10e93a20();
  /* 10e9de41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9de4b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9de4c call 0x10e93a20 */
  push32(0x10e9de51u); f_10e93a20();
  /* 10e9de51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de59 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e9de5c push eax */
  push32((uint32_t)(EAX));
  /* 10e9de5d call 0x10e93a20 */
  push32(0x10e9de62u); f_10e93a20();
  /* 10e9de62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de6a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e9de6d push edx */
  push32((uint32_t)(EDX));
  /* 10e9de6e call 0x10e93a20 */
  push32(0x10e9de73u); f_10e93a20();
  /* 10e9de73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de7b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10e9de7e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9de7f call 0x10e93a20 */
  push32(0x10e9de84u); f_10e93a20();
  /* 10e9de84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de8c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10e9de8f push eax */
  push32((uint32_t)(EAX));
  /* 10e9de90 call 0x10e93a20 */
  push32(0x10e9de95u); f_10e93a20();
  /* 10e9de95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9de98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9de9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9de9d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e9dea0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dea1 call 0x10e93a20 */
  push32(0x10e9dea6u); f_10e93a20();
  /* 10e9dea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dea9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9deab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9deae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10e9deb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9deb2 call 0x10e93a20 */
  push32(0x10e9deb7u); f_10e93a20();
  /* 10e9deb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9deba push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9debc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9debf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e9dec2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dec3 call 0x10e93a20 */
  push32(0x10e9dec8u); f_10e93a20();
  /* 10e9dec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9decb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9decd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ded0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10e9ded3 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ded4 call 0x10e93a20 */
  push32(0x10e9ded9u); f_10e93a20();
  /* 10e9ded9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dedc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dee1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10e9dee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9dee5 call 0x10e93a20 */
  push32(0x10e9deeau); f_10e93a20();
  /* 10e9deea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9deed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9deef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9def2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e9def5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9def6 call 0x10e93a20 */
  push32(0x10e9defbu); f_10e93a20();
  /* 10e9defb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9defe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10e9df06 push edx */
  push32((uint32_t)(EDX));
  /* 10e9df07 call 0x10e93a20 */
  push32(0x10e9df0cu); f_10e93a20();
  /* 10e9df0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10e9df17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9df18 call 0x10e93a20 */
  push32(0x10e9df1du); f_10e93a20();
  /* 10e9df1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10e9df28 push eax */
  push32((uint32_t)(EAX));
  /* 10e9df29 call 0x10e93a20 */
  push32(0x10e9df2eu); f_10e93a20();
  /* 10e9df2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e9df39 push edx */
  push32((uint32_t)(EDX));
  /* 10e9df3a call 0x10e93a20 */
  push32(0x10e9df3fu); f_10e93a20();
  /* 10e9df3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e9df4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9df4b call 0x10e93a20 */
  push32(0x10e9df50u); f_10e93a20();
  /* 10e9df50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10e9df5b push eax */
  push32((uint32_t)(EAX));
  /* 10e9df5c call 0x10e93a20 */
  push32(0x10e9df61u); f_10e93a20();
  /* 10e9df61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10e9df6c push edx */
  push32((uint32_t)(EDX));
  /* 10e9df6d call 0x10e93a20 */
  push32(0x10e9df72u); f_10e93a20();
  /* 10e9df72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10e9df7d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9df7e call 0x10e93a20 */
  push32(0x10e9df83u); f_10e93a20();
  /* 10e9df83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10e9df8e push eax */
  push32((uint32_t)(EAX));
  /* 10e9df8f call 0x10e93a20 */
  push32(0x10e9df94u); f_10e93a20();
  /* 10e9df94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9df97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9df99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9df9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10e9df9f push edx */
  push32((uint32_t)(EDX));
  /* 10e9dfa0 call 0x10e93a20 */
  push32(0x10e9dfa5u); f_10e93a20();
  /* 10e9dfa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dfa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dfad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10e9dfb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9dfb1 call 0x10e93a20 */
  push32(0x10e9dfb6u); f_10e93a20();
  /* 10e9dfb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dfb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dfbe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10e9dfc1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dfc2 call 0x10e93a20 */
  push32(0x10e9dfc7u); f_10e93a20();
  /* 10e9dfc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dfca push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dfcf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10e9dfd2 push edx */
  push32((uint32_t)(EDX));
  /* 10e9dfd3 call 0x10e93a20 */
  push32(0x10e9dfd8u); f_10e93a20();
  /* 10e9dfd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dfdb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dfe0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10e9dfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9dfe4 call 0x10e93a20 */
  push32(0x10e9dfe9u); f_10e93a20();
  /* 10e9dfe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dfec push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9dff1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10e9dff4 push eax */
  push32((uint32_t)(EAX));
  /* 10e9dff5 call 0x10e93a20 */
  push32(0x10e9dffau); f_10e93a20();
  /* 10e9dffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9dffd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9dfff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e002 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10e9e008 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e009 call 0x10e93a20 */
  push32(0x10e9e00eu); f_10e93a20();
  /* 10e9e00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e011 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e016 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10e9e01c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e01d call 0x10e93a20 */
  push32(0x10e9e022u); f_10e93a20();
  /* 10e9e022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e025 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e027 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e02a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10e9e030 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e031 call 0x10e93a20 */
  push32(0x10e9e036u); f_10e93a20();
  /* 10e9e036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e039 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e03b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e03e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10e9e044 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e045 call 0x10e93a20 */
  push32(0x10e9e04au); f_10e93a20();
  /* 10e9e04a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e04d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e052 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10e9e058 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e059 call 0x10e93a20 */
  push32(0x10e9e05eu); f_10e93a20();
  /* 10e9e05e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e061 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e066 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10e9e06c push eax */
  push32((uint32_t)(EAX));
  /* 10e9e06d call 0x10e93a20 */
  push32(0x10e9e072u); f_10e93a20();
  /* 10e9e072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e075 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e07a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10e9e080 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e081 call 0x10e93a20 */
  push32(0x10e9e086u); f_10e93a20();
  /* 10e9e086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e089 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e08b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e08e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10e9e094 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e095 call 0x10e93a20 */
  push32(0x10e9e09au); f_10e93a20();
  /* 10e9e09a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e09d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e09f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e0a2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10e9e0a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e0a9 call 0x10e93a20 */
  push32(0x10e9e0aeu); f_10e93a20();
  /* 10e9e0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e0b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e0b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e0b6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10e9e0bc push edx */
  push32((uint32_t)(EDX));
  /* 10e9e0bd call 0x10e93a20 */
  push32(0x10e9e0c2u); f_10e93a20();
  /* 10e9e0c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e0c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e0ca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10e9e0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e0d1 call 0x10e93a20 */
  push32(0x10e9e0d6u); f_10e93a20();
  /* 10e9e0d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9e0d9:;
  /* 10e9e0d9 pop ebp */
  EBP = (pop32());
  /* 10e9e0da ret  */
  ESPCHK(0x10e9ddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0e0 @ 0x10e9e0e0 (678 bytes, 180 insns) */
void f_10e9e0e0(void) {
  FTRACE(0x10e9e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e0e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9e0e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9e0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e0ef mov ax, word ptr [0x10ebe6e2] */
  AX = (r16((uint32_t)(0x10ebe6e2)));
  /* 10e9e0f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9e0f8 cmp dword ptr [0x10ebe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e0ff je 0x10e9e25a */
  if (C.zf) goto L_10e9e25a;
  /* 10e9e105 push 0x10ebe6b0 */
  push32((uint32_t)(0x10ebe6b0u));
  /* 10e9e10a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10e9e10c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e10f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e110 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e112 call 0x10ea1150 */
  push32(0x10e9e117u); f_10ea1150();
  /* 10e9e117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e11a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e11d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9e11f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9e122 push 0x10ebe6b4 */
  push32((uint32_t)(0x10ebe6b4u));
  /* 10e9e127 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10e9e129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e12c push eax */
  push32((uint32_t)(EAX));
  /* 10e9e12d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e12f call 0x10ea1150 */
  push32(0x10e9e134u); f_10ea1150();
  /* 10e9e134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e13a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e13c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e13f push 0x10ebe6b8 */
  push32((uint32_t)(0x10ebe6b8u));
  /* 10e9e144 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e9e146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e149 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e14a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e14c call 0x10ea1150 */
  push32(0x10e9e151u); f_10ea1150();
  /* 10e9e151 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e154 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e157 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e159 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e15c mov edx, dword ptr [0x10ebe6b8] */
  EDX = (r32((uint32_t)(0x10ebe6b8)));
  /* 10e9e162 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e163 call 0x10e9e390 */
  push32(0x10e9e168u); f_10e9e390();
  /* 10e9e168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e16b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e16f je 0x10e9e1c9 */
  if (C.zf) goto L_10e9e1c9;
  /* 10e9e171 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e173 mov eax, dword ptr [0x10ebe6b0] */
  EAX = (r32((uint32_t)(0x10ebe6b0)));
  /* 10e9e178 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e179 call 0x10e93a20 */
  push32(0x10e9e17eu); f_10e93a20();
  /* 10e9e17e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e181 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e183 mov ecx, dword ptr [0x10ebe6b4] */
  ECX = (r32((uint32_t)(0x10ebe6b4)));
  /* 10e9e189 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e18a call 0x10e93a20 */
  push32(0x10e9e18fu); f_10e93a20();
  /* 10e9e18f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e192 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e194 mov edx, dword ptr [0x10ebe6b8] */
  EDX = (r32((uint32_t)(0x10ebe6b8)));
  /* 10e9e19a push edx */
  push32((uint32_t)(EDX));
  /* 10e9e19b call 0x10e93a20 */
  push32(0x10e9e1a0u); f_10e93a20();
  /* 10e9e1a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e1a3 mov dword ptr [0x10ebe6b0], 0 */
  w32((uint32_t)(0x10ebe6b0), (0x0u));
  /* 10e9e1ad mov dword ptr [0x10ebe6b4], 0 */
  w32((uint32_t)(0x10ebe6b4), (0x0u));
  /* 10e9e1b7 mov dword ptr [0x10ebe6b8], 0 */
  w32((uint32_t)(0x10ebe6b8), (0x0u));
  /* 10e9e1c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e1c4 jmp 0x10e9e382 */
  goto L_10e9e382;
L_10e9e1c9:;
  /* 10e9e1c9 mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e1ce cmp dword ptr [eax], 0x10ebdd60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10ebdd60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e1d4 je 0x10e9e210 */
  if (C.zf) goto L_10e9e210;
  /* 10e9e1d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e1d8 mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e1de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9e1e0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e1e1 call 0x10e93a20 */
  push32(0x10e9e1e6u); f_10e93a20();
  /* 10e9e1e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e1e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e1eb mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e1f0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9e1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e1f4 call 0x10e93a20 */
  push32(0x10e9e1f9u); f_10e93a20();
  /* 10e9e1f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e1fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e1fe mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e204 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9e207 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e208 call 0x10e93a20 */
  push32(0x10e9e20du); f_10e93a20();
  /* 10e9e20d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9e210:;
  /* 10e9e210 mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e216 mov edx, dword ptr [0x10ebe6b0] */
  EDX = (r32((uint32_t)(0x10ebe6b0)));
  /* 10e9e21c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e9e21e mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e223 mov ecx, dword ptr [0x10ebe6b4] */
  ECX = (r32((uint32_t)(0x10ebe6b4)));
  /* 10e9e229 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e9e22c mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e232 mov eax, dword ptr [0x10ebe6b8] */
  EAX = (r32((uint32_t)(0x10ebe6b8)));
  /* 10e9e237 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e9e23a mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e240 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9e242 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9e244 mov byte ptr [0x10ebceb8], al */
  w8((uint32_t)(0x10ebceb8), (AL));
  /* 10e9e249 mov dword ptr [0x10ebcebc], 1 */
  w32((uint32_t)(0x10ebcebc), (0x1u));
  /* 10e9e253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e255 jmp 0x10e9e382 */
  goto L_10e9e382;
L_10e9e25a:;
  /* 10e9e25a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e25c mov ecx, dword ptr [0x10ebe6b0] */
  ECX = (r32((uint32_t)(0x10ebe6b0)));
  /* 10e9e262 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e263 call 0x10e93a20 */
  push32(0x10e9e268u); f_10e93a20();
  /* 10e9e268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e26b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e26d mov edx, dword ptr [0x10ebe6b4] */
  EDX = (r32((uint32_t)(0x10ebe6b4)));
  /* 10e9e273 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e274 call 0x10e93a20 */
  push32(0x10e9e279u); f_10e93a20();
  /* 10e9e279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e27c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e27e mov eax, dword ptr [0x10ebe6b8] */
  EAX = (r32((uint32_t)(0x10ebe6b8)));
  /* 10e9e283 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e284 call 0x10e93a20 */
  push32(0x10e9e289u); f_10e93a20();
  /* 10e9e289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e28c mov dword ptr [0x10ebe6b0], 0 */
  w32((uint32_t)(0x10ebe6b0), (0x0u));
  /* 10e9e296 mov dword ptr [0x10ebe6b4], 0 */
  w32((uint32_t)(0x10ebe6b4), (0x0u));
  /* 10e9e2a0 mov dword ptr [0x10ebe6b8], 0 */
  w32((uint32_t)(0x10ebe6b8), (0x0u));
  /* 10e9e2aa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e9e2af push 0x10eba054 */
  push32((uint32_t)(0x10eba054u));
  /* 10e9e2b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e2b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e2b8 call 0x10e92f90 */
  push32(0x10e9e2bdu); f_10e92f90();
  /* 10e9e2bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e2c0 mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e2c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e9e2c8 mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e2ce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e2d1 jne 0x10e9e2db */
  if (!C.zf) goto L_10e9e2db;
  /* 10e9e2d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e2d6 jmp 0x10e9e382 */
  goto L_10e9e382;
L_10e9e2db:;
  /* 10e9e2db push 0x10eba024 */
  push32((uint32_t)(0x10eba024u));
  /* 10e9e2e0 mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e2e5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9e2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e2e8 call 0x10e95f40 */
  push32(0x10e9e2edu); f_10e95f40();
  /* 10e9e2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e2f0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10e9e2f5 push 0x10eba054 */
  push32((uint32_t)(0x10eba054u));
  /* 10e9e2fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e2fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e2fe call 0x10e92f90 */
  push32(0x10e9e303u); f_10e92f90();
  /* 10e9e303 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e306 mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e30c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e9e30f mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e314 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e318 jne 0x10e9e31f */
  if (!C.zf) goto L_10e9e31f;
  /* 10e9e31a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e31d jmp 0x10e9e382 */
  goto L_10e9e382;
L_10e9e31f:;
  /* 10e9e31f mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e325 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e9e328 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e9e32b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10e9e330 push 0x10eba054 */
  push32((uint32_t)(0x10eba054u));
  /* 10e9e335 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e337 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e339 call 0x10e92f90 */
  push32(0x10e9e33eu); f_10e92f90();
  /* 10e9e33e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e341 mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e347 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e9e34a mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e350 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e354 jne 0x10e9e35b */
  if (!C.zf) goto L_10e9e35b;
  /* 10e9e356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e359 jmp 0x10e9e382 */
  goto L_10e9e382;
L_10e9e35b:;
  /* 10e9e35b mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e360 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e9e363 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e9e366 mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e36c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e9e36e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e9e370 mov byte ptr [0x10ebceb8], cl */
  w8((uint32_t)(0x10ebceb8), (CL));
  /* 10e9e376 mov dword ptr [0x10ebcebc], 1 */
  w32((uint32_t)(0x10ebcebc), (0x1u));
  /* 10e9e380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9e382:;
  /* 10e9e382 mov esp, ebp */
  ESP = (EBP);
  /* 10e9e384 pop ebp */
  EBP = (pop32());
  /* 10e9e385 ret  */
  ESPCHK(0x10e9e0e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e9e390 (125 bytes, 49 insns) */
void f_10e9e390(void) {
  FTRACE(0x10e9e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e390 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e391 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e393 push ecx */
  push32((uint32_t)(ECX));
L_10e9e394:;
  /* 10e9e394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e397 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9e39a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9e39c je 0x10e9e409 */
  if (C.zf) goto L_10e9e409;
  /* 10e9e39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9e3a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e3a7 jl 0x10e9e3cd */
  if ((C.sf!=C.of)) goto L_10e9e3cd;
  /* 10e9e3a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9e3af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e3b2 jg 0x10e9e3cd */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9e3cd;
  /* 10e9e3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9e3ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9e3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e9e3c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e3c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e9e3cb jmp 0x10e9e407 */
  goto L_10e9e407;
L_10e9e3cd:;
  /* 10e9e3cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9e3d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e3d6 jne 0x10e9e3fe */
  if (!C.zf) goto L_10e9e3fe;
  /* 10e9e3d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e3db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9e3de:;
  /* 10e9e3de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e3e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e3e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e9e3e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e9e3e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e3ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e3ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9e3f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e3f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9e3f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e3fa jne 0x10e9e3de */
  if (!C.zf) goto L_10e9e3de;
  /* 10e9e3fc jmp 0x10e9e407 */
  goto L_10e9e407;
L_10e9e3fe:;
  /* 10e9e3fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e401 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e404 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e9e407:;
  /* 10e9e407 jmp 0x10e9e394 */
  goto L_10e9e394;
L_10e9e409:;
  /* 10e9e409 mov esp, ebp */
  ESP = (EBP);
  /* 10e9e40b pop ebp */
  EBP = (pop32());
  /* 10e9e40c ret  */
  ESPCHK(0x10e9e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e410 @ 0x10e9e410 (304 bytes, 85 insns) */
void f_10e9e410(void) {
  FTRACE(0x10e9e410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e411 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e413 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e414 cmp dword ptr [0x10ebe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e41b je 0x10e9e4dc */
  if (C.zf) goto L_10e9e4dc;
  /* 10e9e421 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e9e423 push 0x10eba060 */
  push32((uint32_t)(0x10eba060u));
  /* 10e9e428 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e42a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e9e42c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e42e call 0x10e933a0 */
  push32(0x10e9e433u); f_10e933a0();
  /* 10e9e433 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e436 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9e439 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e43d jne 0x10e9e449 */
  if (!C.zf) goto L_10e9e449;
  /* 10e9e43f mov eax, 1 */
  EAX = (0x1u);
  /* 10e9e444 jmp 0x10e9e53c */
  goto L_10e9e53c;
L_10e9e449:;
  /* 10e9e449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e44c push eax */
  push32((uint32_t)(EAX));
  /* 10e9e44d call 0x10e9e540 */
  push32(0x10e9e452u); f_10e9e540();
  /* 10e9e452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e457 je 0x10e9e47d */
  if (C.zf) goto L_10e9e47d;
  /* 10e9e459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e45c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e45d call 0x10e9e7d0 */
  push32(0x10e9e462u); f_10e9e7d0();
  /* 10e9e462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e465 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e467 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e46a push edx */
  push32((uint32_t)(EDX));
  /* 10e9e46b call 0x10e93a20 */
  push32(0x10e9e470u); f_10e93a20();
  /* 10e9e470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e473 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9e478 jmp 0x10e9e53c */
  goto L_10e9e53c;
L_10e9e47d:;
  /* 10e9e47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e480 mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e486 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9e488 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e9e48a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e48d mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e493 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e9e496 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e9e499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e49c mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e4a2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e9e4a5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e9e4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e4ab mov dword ptr [0x10ebdd98], eax */
  w32((uint32_t)(0x10ebdd98), (EAX));
  /* 10e9e4b0 mov ecx, dword ptr [0x10ebe6bc] */
  ECX = (r32((uint32_t)(0x10ebe6bc)));
  /* 10e9e4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e4b7 call 0x10e9e7d0 */
  push32(0x10e9e4bcu); f_10e9e7d0();
  /* 10e9e4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e4bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e4c1 mov edx, dword ptr [0x10ebe6bc] */
  EDX = (r32((uint32_t)(0x10ebe6bc)));
  /* 10e9e4c7 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e4c8 call 0x10e93a20 */
  push32(0x10e9e4cdu); f_10e93a20();
  /* 10e9e4cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e4d3 mov dword ptr [0x10ebe6bc], eax */
  w32((uint32_t)(0x10ebe6bc), (EAX));
  /* 10e9e4d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e4da jmp 0x10e9e53c */
  goto L_10e9e53c;
L_10e9e4dc:;
  /* 10e9e4dc mov ecx, dword ptr [0x10ebdd98] */
  ECX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e4e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9e4e4 mov dword ptr [0x10ebdd68], edx */
  w32((uint32_t)(0x10ebdd68), (EDX));
  /* 10e9e4ea mov eax, dword ptr [0x10ebdd98] */
  EAX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e4ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9e4f2 mov dword ptr [0x10ebdd6c], ecx */
  w32((uint32_t)(0x10ebdd6c), (ECX));
  /* 10e9e4f8 mov edx, dword ptr [0x10ebdd98] */
  EDX = (r32((uint32_t)(0x10ebdd98)));
  /* 10e9e4fe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9e501 mov dword ptr [0x10ebdd70], eax */
  w32((uint32_t)(0x10ebdd70), (EAX));
  /* 10e9e506 mov dword ptr [0x10ebdd98], 0x10ebdd68 */
  w32((uint32_t)(0x10ebdd98), (0x10ebdd68u));
  /* 10e9e510 mov ecx, dword ptr [0x10ebe6bc] */
  ECX = (r32((uint32_t)(0x10ebe6bc)));
  /* 10e9e516 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e517 call 0x10e9e7d0 */
  push32(0x10e9e51cu); f_10e9e7d0();
  /* 10e9e51c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e51f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e521 mov edx, dword ptr [0x10ebe6bc] */
  EDX = (r32((uint32_t)(0x10ebe6bc)));
  /* 10e9e527 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e528 call 0x10e93a20 */
  push32(0x10e9e52du); f_10e93a20();
  /* 10e9e52d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e530 mov dword ptr [0x10ebe6bc], 0 */
  w32((uint32_t)(0x10ebe6bc), (0x0u));
  /* 10e9e53a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9e53c:;
  /* 10e9e53c mov esp, ebp */
  ESP = (EBP);
  /* 10e9e53e pop ebp */
  EBP = (pop32());
  /* 10e9e53f ret  */
  ESPCHK(0x10e9e410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e540 @ 0x10e9e540 (525 bytes, 200 insns) */
void f_10e9e540(void) {
  FTRACE(0x10e9e540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e540 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e541 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9e546 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9e54d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e54f mov ax, word ptr [0x10ebe6dc] */
  AX = (r16((uint32_t)(0x10ebe6dc)));
  /* 10e9e555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9e558 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e55c jne 0x10e9e566 */
  if (!C.zf) goto L_10e9e566;
  /* 10e9e55e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e561 jmp 0x10e9e749 */
  goto L_10e9e749;
L_10e9e566:;
  /* 10e9e566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e569 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e56c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e56d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10e9e56f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e572 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e573 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e575 call 0x10ea1150 */
  push32(0x10e9e57au); f_10ea1150();
  /* 10e9e57a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e57d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e580 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e582 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e588 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e58b push edx */
  push32((uint32_t)(EDX));
  /* 10e9e58c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10e9e58e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e591 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e592 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e594 call 0x10ea1150 */
  push32(0x10e9e599u); f_10ea1150();
  /* 10e9e599 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e59c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e59f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e5a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e5a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e5a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5aa push edx */
  push32((uint32_t)(EDX));
  /* 10e9e5ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e9e5ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e5b0 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e5b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e5b3 call 0x10ea1150 */
  push32(0x10e9e5b8u); f_10ea1150();
  /* 10e9e5b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e5be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e5c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e5c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e5c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5c9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e5ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10e9e5cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e5cf push eax */
  push32((uint32_t)(EAX));
  /* 10e9e5d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e5d2 call 0x10ea1150 */
  push32(0x10e9e5d7u); f_10ea1150();
  /* 10e9e5d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e5dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e5df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e5e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e5e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5e8 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e5e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e9e5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e5ee push eax */
  push32((uint32_t)(EAX));
  /* 10e9e5ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e5f1 call 0x10ea1150 */
  push32(0x10e9e5f6u); f_10ea1150();
  /* 10e9e5f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e5fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e5fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e604 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e9e607 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e608 call 0x10e9e750 */
  push32(0x10e9e60du); f_10e9e750();
  /* 10e9e60d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e613 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e616 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e617 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10e9e619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e61c push edx */
  push32((uint32_t)(EDX));
  /* 10e9e61d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e61f call 0x10ea1150 */
  push32(0x10e9e624u); f_10ea1150();
  /* 10e9e624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e627 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e62a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e62c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e632 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e635 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e636 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10e9e638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e63b push eax */
  push32((uint32_t)(EAX));
  /* 10e9e63c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9e63e call 0x10ea1150 */
  push32(0x10e9e643u); f_10ea1150();
  /* 10e9e643 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e646 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e649 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e64b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e64e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e651 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e654 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e655 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e9e657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e65a push eax */
  push32((uint32_t)(EAX));
  /* 10e9e65b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e65d call 0x10ea1150 */
  push32(0x10e9e662u); f_10ea1150();
  /* 10e9e662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e665 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e668 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e66a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e66d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e670 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e673 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e674 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e9e676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e679 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e67a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e67c call 0x10ea1150 */
  push32(0x10e9e681u); f_10ea1150();
  /* 10e9e681 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e687 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e689 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e68f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e692 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e693 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10e9e695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e698 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e699 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e69b call 0x10ea1150 */
  push32(0x10e9e6a0u); f_10ea1150();
  /* 10e9e6a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e6a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e6a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e6ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6b1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e6b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10e9e6b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e6b7 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e6b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e6ba call 0x10ea1150 */
  push32(0x10e9e6bfu); f_10ea1150();
  /* 10e9e6bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e6c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e6c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e6ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e6cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6d0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e6d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10e9e6d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e6d6 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e6d9 call 0x10ea1150 */
  push32(0x10e9e6deu); f_10ea1150();
  /* 10e9e6de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e6e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e6e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e6ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e6ef push edx */
  push32((uint32_t)(EDX));
  /* 10e9e6f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10e9e6f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e6f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e6f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e6f8 call 0x10ea1150 */
  push32(0x10e9e6fdu); f_10ea1150();
  /* 10e9e6fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e700 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e703 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e705 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e708 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e70b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e70e push edx */
  push32((uint32_t)(EDX));
  /* 10e9e70f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10e9e711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e714 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e717 call 0x10ea1150 */
  push32(0x10e9e71cu); f_10ea1150();
  /* 10e9e71c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e71f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e722 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e724 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e72a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e72d push edx */
  push32((uint32_t)(EDX));
  /* 10e9e72e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10e9e730 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e733 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e734 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e736 call 0x10ea1150 */
  push32(0x10e9e73bu); f_10ea1150();
  /* 10e9e73b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e73e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9e741 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e743 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9e746 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e9e749:;
  /* 10e9e749 mov esp, ebp */
  ESP = (EBP);
  /* 10e9e74b pop ebp */
  EBP = (pop32());
  /* 10e9e74c ret  */
  ESPCHK(0x10e9e540u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e9e750 (125 bytes, 49 insns) */
void f_10e9e750(void) {
  FTRACE(0x10e9e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e750 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e751 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e753 push ecx */
  push32((uint32_t)(ECX));
L_10e9e754:;
  /* 10e9e754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e757 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9e75a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9e75c je 0x10e9e7c9 */
  if (C.zf) goto L_10e9e7c9;
  /* 10e9e75e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e761 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9e764 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e767 jl 0x10e9e78d */
  if ((C.sf!=C.of)) goto L_10e9e78d;
  /* 10e9e769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e76c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9e76f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e772 jg 0x10e9e78d */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9e78d;
  /* 10e9e774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e777 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9e77a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9e77d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e780 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e9e782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e785 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e788 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e9e78b jmp 0x10e9e7c7 */
  goto L_10e9e7c7;
L_10e9e78d:;
  /* 10e9e78d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e790 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9e793 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e796 jne 0x10e9e7be */
  if (!C.zf) goto L_10e9e7be;
  /* 10e9e798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e79b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9e79e:;
  /* 10e9e79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e7a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e7a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e9e7a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e9e7a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e7ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e7af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9e7b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9e7b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9e7b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e7ba jne 0x10e9e79e */
  if (!C.zf) goto L_10e9e79e;
  /* 10e9e7bc jmp 0x10e9e7c7 */
  goto L_10e9e7c7;
L_10e9e7be:;
  /* 10e9e7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e7c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e7c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e9e7c7:;
  /* 10e9e7c7 jmp 0x10e9e754 */
  goto L_10e9e754;
L_10e9e7c9:;
  /* 10e9e7c9 mov esp, ebp */
  ESP = (EBP);
  /* 10e9e7cb pop ebp */
  EBP = (pop32());
  /* 10e9e7cc ret  */
  ESPCHK(0x10e9e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x10e9e7d0 (147 bytes, 52 insns) */
void f_10e9e7d0(void) {
  FTRACE(0x10e9e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e7d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e7d7 jne 0x10e9e7de */
  if (!C.zf) goto L_10e9e7de;
  /* 10e9e7d9 jmp 0x10e9e861 */
  goto L_10e9e861;
L_10e9e7de:;
  /* 10e9e7de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e7e1 cmp dword ptr [eax + 0xc], 0x10ebe718 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10ebe718u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e7e8 je 0x10e9e861 */
  if (C.zf) goto L_10e9e861;
  /* 10e9e7ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e7ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e7ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9e7f2 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e7f3 call 0x10e93a20 */
  push32(0x10e9e7f8u); f_10e93a20();
  /* 10e9e7f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e7fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e7fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e800 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e9e803 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e804 call 0x10e93a20 */
  push32(0x10e9e809u); f_10e93a20();
  /* 10e9e809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e80c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e80e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e811 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e9e814 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e815 call 0x10e93a20 */
  push32(0x10e9e81au); f_10e93a20();
  /* 10e9e81a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e81d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e81f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e822 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e9e825 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e826 call 0x10e93a20 */
  push32(0x10e9e82bu); f_10e93a20();
  /* 10e9e82b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e82e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e833 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e9e836 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e837 call 0x10e93a20 */
  push32(0x10e9e83cu); f_10e93a20();
  /* 10e9e83c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e83f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e844 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e9e847 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e848 call 0x10e93a20 */
  push32(0x10e9e84du); f_10e93a20();
  /* 10e9e84d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e850 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9e855 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e9e858 push edx */
  push32((uint32_t)(EDX));
  /* 10e9e859 call 0x10e93a20 */
  push32(0x10e9e85eu); f_10e93a20();
  /* 10e9e85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9e861:;
  /* 10e9e861 pop ebp */
  EBP = (pop32());
  /* 10e9e862 ret  */
  ESPCHK(0x10e9e7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e870 @ 0x10e9e870 (928 bytes, 284 insns) */
void f_10e9e870(void) {
  FTRACE(0x10e9e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9e870 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9e871 mov ebp, esp */
  EBP = (ESP);
  /* 10e9e873 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9e876 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10e9e87d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10e9e884 cmp dword ptr [0x10ebe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e88b je 0x10e9ebc1 */
  if (C.zf) goto L_10e9ebc1;
  /* 10e9e891 cmp dword ptr [0x10ebe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e898 jne 0x10e9e8c0 */
  if (!C.zf) goto L_10e9e8c0;
  /* 10e9e89a push 0x10ebe690 */
  push32((uint32_t)(0x10ebe690u));
  /* 10e9e89f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e9e8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e8a6 mov ax, word ptr [0x10ebe6d4] */
  AX = (r16((uint32_t)(0x10ebe6d4)));
  /* 10e9e8ac push eax */
  push32((uint32_t)(EAX));
  /* 10e9e8ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9e8af call 0x10ea1150 */
  push32(0x10e9e8b4u); f_10ea1150();
  /* 10e9e8b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e8b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e8b9 je 0x10e9e8c0 */
  if (C.zf) goto L_10e9e8c0;
  /* 10e9e8bb jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9e8c0:;
  /* 10e9e8c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e9e8c2 push 0x10eba06c */
  push32((uint32_t)(0x10eba06cu));
  /* 10e9e8c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e8c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e9e8ce call 0x10e92f90 */
  push32(0x10e9e8d3u); f_10e92f90();
  /* 10e9e8d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e8d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e9e8d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e9e8db push 0x10eba06c */
  push32((uint32_t)(0x10eba06cu));
  /* 10e9e8e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e8e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e9e8e7 call 0x10e92f90 */
  push32(0x10e9e8ecu); f_10e92f90();
  /* 10e9e8ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e8ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e9e8f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10e9e8f4 push 0x10eba06c */
  push32((uint32_t)(0x10eba06cu));
  /* 10e9e8f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e8fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e9e900 call 0x10e92f90 */
  push32(0x10e9e905u); f_10e92f90();
  /* 10e9e905 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e908 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e9e90b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10e9e90d push 0x10eba06c */
  push32((uint32_t)(0x10eba06cu));
  /* 10e9e912 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9e914 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e9e919 call 0x10e92f90 */
  push32(0x10e9e91eu); f_10e92f90();
  /* 10e9e91e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e921 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e9e924 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e928 je 0x10e9e93c */
  if (C.zf) goto L_10e9e93c;
  /* 10e9e92a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e92e je 0x10e9e93c */
  if (C.zf) goto L_10e9e93c;
  /* 10e9e930 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e934 je 0x10e9e93c */
  if (C.zf) goto L_10e9e93c;
  /* 10e9e936 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e93a jne 0x10e9e941 */
  if (!C.zf) goto L_10e9e941;
L_10e9e93c:;
  /* 10e9e93c jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9e941:;
  /* 10e9e941 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9e944 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e9e947 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e9e94e jmp 0x10e9e959 */
  goto L_10e9e959;
L_10e9e950:;
  /* 10e9e950 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9e953 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e956 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e9e959:;
  /* 10e9e959 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e960 jge 0x10e9e975 */
  if ((C.sf==C.of)) goto L_10e9e975;
  /* 10e9e962 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e965 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10e9e968 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e9e96a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e96d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e970 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e9e973 jmp 0x10e9e950 */
  goto L_10e9e950;
L_10e9e975:;
  /* 10e9e975 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10e9e978 push eax */
  push32((uint32_t)(EAX));
  /* 10e9e979 mov ecx, dword ptr [0x10ebe690] */
  ECX = (r32((uint32_t)(0x10ebe690)));
  /* 10e9e97f push ecx */
  push32((uint32_t)(ECX));
  /* 10e9e980 call dword ptr [0x10ec02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02d8))), 0x10e9e986u);
  /* 10e9e986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e988 jne 0x10e9e98f */
  if (!C.zf) goto L_10e9e98f;
  /* 10e9e98a jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9e98f:;
  /* 10e9e98f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e993 jbe 0x10e9e99a */
  if ((C.cf||C.zf)) goto L_10e9e99a;
  /* 10e9e995 jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9e99a:;
  /* 10e9e99a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9e99d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9e9a3 mov dword ptr [0x10ebceb4], edx */
  w32((uint32_t)(0x10ebceb4), (EDX));
  /* 10e9e9a9 cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e9b0 jle 0x10e9ea09 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9ea09;
  /* 10e9e9b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10e9e9b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e9e9b8 jmp 0x10e9e9c3 */
  goto L_10e9e9c3;
L_10e9e9ba:;
  /* 10e9e9ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e9bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e9c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e9e9c3:;
  /* 10e9e9c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e9c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9e9c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9e9ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9e9cc je 0x10e9ea09 */
  if (C.zf) goto L_10e9ea09;
  /* 10e9e9ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e9d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9e9d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e9e9d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9e9d8 je 0x10e9ea09 */
  if (C.zf) goto L_10e9ea09;
  /* 10e9e9da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e9dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e9df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e9e9e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e9e9e4 jmp 0x10e9e9ef */
  goto L_10e9e9ef;
L_10e9e9e6:;
  /* 10e9e9e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9e9e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9e9ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e9e9ef:;
  /* 10e9e9ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9e9f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9e9f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e9e9f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9e9fa jg 0x10e9ea07 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9ea07;
  /* 10e9e9fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9e9ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea02 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e9ea05 jmp 0x10e9e9e6 */
  goto L_10e9e9e6;
L_10e9ea07:;
  /* 10e9ea07 jmp 0x10e9e9ba */
  goto L_10e9e9ba;
L_10e9ea09:;
  /* 10e9ea09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ea0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ea0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ea0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9ea12 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea15 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ea16 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9ea1b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9ea1e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ea1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9ea21 call 0x10e9b1c0 */
  push32(0x10e9ea26u); f_10e9b1c0();
  /* 10e9ea26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ea2b jne 0x10e9ea32 */
  if (!C.zf) goto L_10e9ea32;
  /* 10e9ea2d jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9ea32:;
  /* 10e9ea32 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9ea35 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10e9ea3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9ea3d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e9ea40 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e9ea47 jmp 0x10e9ea52 */
  goto L_10e9ea52;
L_10e9ea49:;
  /* 10e9ea49 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9ea4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e9ea52:;
  /* 10e9ea52 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ea59 jge 0x10e9ea70 */
  if ((C.sf==C.of)) goto L_10e9ea70;
  /* 10e9ea5b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9ea5e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10e9ea62 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e9ea65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9ea68 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea6b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e9ea6e jmp 0x10e9ea49 */
  goto L_10e9ea49;
L_10e9ea70:;
  /* 10e9ea70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ea72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9ea74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9ea77 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea7a push edx */
  push32((uint32_t)(EDX));
  /* 10e9ea7b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e9ea80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9ea83 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ea84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9ea86 call 0x10ea13f0 */
  push32(0x10e9ea8bu); f_10ea13f0();
  /* 10e9ea8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ea8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ea90 jne 0x10e9ea97 */
  if (!C.zf) goto L_10e9ea97;
  /* 10e9ea92 jmp 0x10e9eb82 */
  goto L_10e9eb82;
L_10e9ea97:;
  /* 10e9ea97 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9ea9a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10e9ea9f cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eaa6 jle 0x10e9eb03 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9eb03;
  /* 10e9eaa8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10e9eaab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e9eaae jmp 0x10e9eab9 */
  goto L_10e9eab9;
L_10e9eab0:;
  /* 10e9eab0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9eab3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eab6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e9eab9:;
  /* 10e9eab9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9eabc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9eabe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e9eac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9eac2 je 0x10e9eb03 */
  if (C.zf) goto L_10e9eb03;
  /* 10e9eac4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9eac7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9eac9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e9eacc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9eace je 0x10e9eb03 */
  if (C.zf) goto L_10e9eb03;
  /* 10e9ead0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9ead3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ead5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9ead7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e9eada jmp 0x10e9eae5 */
  goto L_10e9eae5;
L_10e9eadc:;
  /* 10e9eadc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9eadf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eae2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e9eae5:;
  /* 10e9eae5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9eae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9eaea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e9eaed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eaf0 jg 0x10e9eb01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9eb01;
  /* 10e9eaf2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e9eaf5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9eaf8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10e9eaff jmp 0x10e9eadc */
  goto L_10e9eadc;
L_10e9eb01:;
  /* 10e9eb01 jmp 0x10e9eab0 */
  goto L_10e9eab0;
L_10e9eb03:;
  /* 10e9eb03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9eb06 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb09 mov dword ptr [0x10ebcca8], eax */
  w32((uint32_t)(0x10ebcca8), (EAX));
  /* 10e9eb0e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9eb11 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb14 mov dword ptr [0x10ebccac], ecx */
  w32((uint32_t)(0x10ebccac), (ECX));
  /* 10e9eb1a cmp dword ptr [0x10ebe6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eb21 je 0x10e9eb34 */
  if (C.zf) goto L_10e9eb34;
  /* 10e9eb23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb25 mov edx, dword ptr [0x10ebe6c0] */
  EDX = (r32((uint32_t)(0x10ebe6c0)));
  /* 10e9eb2b push edx */
  push32((uint32_t)(EDX));
  /* 10e9eb2c call 0x10e93a20 */
  push32(0x10e9eb31u); f_10e93a20();
  /* 10e9eb31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9eb34:;
  /* 10e9eb34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9eb37 mov dword ptr [0x10ebe6c0], eax */
  w32((uint32_t)(0x10ebe6c0), (EAX));
  /* 10e9eb3c cmp dword ptr [0x10ebe6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eb43 je 0x10e9eb56 */
  if (C.zf) goto L_10e9eb56;
  /* 10e9eb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb47 mov ecx, dword ptr [0x10ebe6c4] */
  ECX = (r32((uint32_t)(0x10ebe6c4)));
  /* 10e9eb4d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9eb4e call 0x10e93a20 */
  push32(0x10e9eb53u); f_10e93a20();
  /* 10e9eb53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9eb56:;
  /* 10e9eb56 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9eb59 mov dword ptr [0x10ebe6c4], edx */
  w32((uint32_t)(0x10ebe6c4), (EDX));
  /* 10e9eb5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb61 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9eb64 push eax */
  push32((uint32_t)(EAX));
  /* 10e9eb65 call 0x10e93a20 */
  push32(0x10e9eb6au); f_10e93a20();
  /* 10e9eb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9eb72 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9eb73 call 0x10e93a20 */
  push32(0x10e9eb78u); f_10e93a20();
  /* 10e9eb78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9eb7d jmp 0x10e9ec0c */
  goto L_10e9ec0c;
L_10e9eb82:;
  /* 10e9eb82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e9eb87 push edx */
  push32((uint32_t)(EDX));
  /* 10e9eb88 call 0x10e93a20 */
  push32(0x10e9eb8du); f_10e93a20();
  /* 10e9eb8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eb92 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e9eb95 push eax */
  push32((uint32_t)(EAX));
  /* 10e9eb96 call 0x10e93a20 */
  push32(0x10e9eb9bu); f_10e93a20();
  /* 10e9eb9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eb9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9eba0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e9eba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9eba4 call 0x10e93a20 */
  push32(0x10e9eba9u); f_10e93a20();
  /* 10e9eba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ebac push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9ebae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9ebb1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ebb2 call 0x10e93a20 */
  push32(0x10e9ebb7u); f_10e93a20();
  /* 10e9ebb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ebba mov eax, 1 */
  EAX = (0x1u);
  /* 10e9ebbf jmp 0x10e9ec0c */
  goto L_10e9ec0c;
L_10e9ebc1:;
  /* 10e9ebc1 mov dword ptr [0x10ebcca8], 0x10ebccb2 */
  w32((uint32_t)(0x10ebcca8), (0x10ebccb2u));
  /* 10e9ebcb mov dword ptr [0x10ebccac], 0x10ebccb2 */
  w32((uint32_t)(0x10ebccac), (0x10ebccb2u));
  /* 10e9ebd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9ebd7 mov eax, dword ptr [0x10ebe6c0] */
  EAX = (r32((uint32_t)(0x10ebe6c0)));
  /* 10e9ebdc push eax */
  push32((uint32_t)(EAX));
  /* 10e9ebdd call 0x10e93a20 */
  push32(0x10e9ebe2u); f_10e93a20();
  /* 10e9ebe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ebe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9ebe7 mov ecx, dword ptr [0x10ebe6c4] */
  ECX = (r32((uint32_t)(0x10ebe6c4)));
  /* 10e9ebed push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ebee call 0x10e93a20 */
  push32(0x10e9ebf3u); f_10e93a20();
  /* 10e9ebf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ebf6 mov dword ptr [0x10ebe6c0], 0 */
  w32((uint32_t)(0x10ebe6c0), (0x0u));
  /* 10e9ec00 mov dword ptr [0x10ebe6c4], 0 */
  w32((uint32_t)(0x10ebe6c4), (0x0u));
  /* 10e9ec0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9ec0c:;
  /* 10e9ec0c mov esp, ebp */
  ESP = (EBP);
  /* 10e9ec0e pop ebp */
  EBP = (pop32());
  /* 10e9ec0f ret  */
  ESPCHK(0x10e9e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x10e9ec10 (7 bytes, 5 insns) */
void f_10e9ec10(void) {
  FTRACE(0x10e9ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ec11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ec13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ec15 pop ebp */
  EBP = (pop32());
  /* 10e9ec16 ret  */
  ESPCHK(0x10e9ec10u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10e9ec20 (129 bytes, 56 insns) */
void f_10e9ec20(void) {
  FTRACE(0x10e9ec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ec20 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e9ec24 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e9ec28 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e9ec2e jne 0x10e9ec6c */
  if (!C.zf) goto L_10e9ec6c;
L_10e9ec30:;
  /* 10e9ec30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e9ec32 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec34 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ec38 je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec3a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec3d jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec3f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e9ec41 je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec43 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e9ec46 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec49 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec4b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ec4d je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec4f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec52 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec54 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ec57 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ec5a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e9ec5c jne 0x10e9ec30 */
  if (!C.zf) goto L_10e9ec30;
  /* 10e9ec5e mov edi, edi */
  EDI = (EDI);
L_10e9ec60:;
  /* 10e9ec60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ec62 ret  */
  ESPCHK(0x10e9ec20u, _esp0);
  ESP += 4; return;
  /* 10e9ec63 nop  */
  /* nop */
L_10e9ec64:;
  /* 10e9ec64 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ec66 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9ec68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10e9ec69 ret  */
  ESPCHK(0x10e9ec20u, _esp0);
  ESP += 4; return;
  /* 10e9ec6a mov edi, edi */
  EDI = (EDI);
L_10e9ec6c:;
  /* 10e9ec6c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10e9ec72 je 0x10e9ec88 */
  if (C.zf) goto L_10e9ec88;
  /* 10e9ec74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9ec76 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e9ec77 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec79 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec7b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e9ec7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ec7e je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec80 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10e9ec86 je 0x10e9ec30 */
  if (C.zf) goto L_10e9ec30;
L_10e9ec88:;
  /* 10e9ec88 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e9ec8b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ec8e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec90 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec92 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ec94 je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec96 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ec99 jne 0x10e9ec64 */
  if (!C.zf) goto L_10e9ec64;
  /* 10e9ec9b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e9ec9d je 0x10e9ec60 */
  if (C.zf) goto L_10e9ec60;
  /* 10e9ec9f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eca2 jmp 0x10e9ec30 */
  goto L_10e9ec30;
}

/* FUN_1000ecb0 @ 0x10e9ecb0 (62 bytes, 35 insns) */
void f_10e9ecb0(void) {
  FTRACE(0x10e9ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ecb3 push esi */
  push32((uint32_t)(ESI));
  /* 10e9ecb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ecb6 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecb7 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecb8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecb9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecba push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecbb push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecbc push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecbd push eax */
  push32((uint32_t)(EAX));
  /* 10e9ecbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ecc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9ecc4:;
  /* 10e9ecc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9ecc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ecc8 je 0x10e9ecd1 */
  if (C.zf) goto L_10e9ecd1;
  /* 10e9ecca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e9eccb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e9eccb");
  /* 10e9eccf jmp 0x10e9ecc4 */
  goto L_10e9ecc4;
L_10e9ecd1:;
  /* 10e9ecd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ecd4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9ecd7 nop  */
  /* nop */
L_10e9ecd8:;
  /* 10e9ecd8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e9ecd9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9ecdb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ecdd je 0x10e9ece6 */
  if (C.zf) goto L_10e9ece6;
  /* 10e9ecdf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e9ece0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e9ece0");
  /* 10e9ece4 jae 0x10e9ecd8 */
  if (!C.cf) goto L_10e9ecd8;
L_10e9ece6:;
  /* 10e9ece6 mov eax, ecx */
  EAX = (ECX);
  /* 10e9ece8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eceb pop esi */
  ESI = (pop32());
  /* 10e9ecec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9eced ret  */
  ESPCHK(0x10e9ecb0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10e9ecf0 (56 bytes, 31 insns) */
void f_10e9ecf0(void) {
  FTRACE(0x10e9ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ecf3 push edi */
  push32((uint32_t)(EDI));
  /* 10e9ecf4 push esi */
  push32((uint32_t)(ESI));
  /* 10e9ecf5 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9ecf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ecf9 jecxz 0x10e9ed21 */
  x86_unimpl("jecxz @ 0x10e9ecf9");
  /* 10e9ecfb mov ebx, ecx */
  EBX = (ECX);
  /* 10e9ecfd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ed00 mov esi, edi */
  ESI = (EDI);
  /* 10e9ed02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ed04 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10e9ed06 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9ed08 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ed0a mov edi, esi */
  EDI = (ESI);
  /* 10e9ed0c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ed0f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10e9ed11 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10e9ed14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9ed16 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e9ed19 ja 0x10e9ed1f */
  if ((!C.cf&&!C.zf)) goto L_10e9ed1f;
  /* 10e9ed1b je 0x10e9ed21 */
  if (C.zf) goto L_10e9ed21;
  /* 10e9ed1d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e9ed1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10e9ed1f:;
  /* 10e9ed1f not ecx */
  ECX = (~(ECX));
L_10e9ed21:;
  /* 10e9ed21 mov eax, ecx */
  EAX = (ECX);
  /* 10e9ed23 pop ebx */
  EBX = (pop32());
  /* 10e9ed24 pop esi */
  ESI = (pop32());
  /* 10e9ed25 pop edi */
  EDI = (pop32());
  /* 10e9ed26 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9ed27 ret  */
  ESPCHK(0x10e9ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x10e9ed30 (58 bytes, 32 insns) */
void f_10e9ed30(void) {
  FTRACE(0x10e9ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ed31 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ed33 push esi */
  push32((uint32_t)(ESI));
  /* 10e9ed34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ed36 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed37 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed38 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed39 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed3a push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed3b push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed3c push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed3d push eax */
  push32((uint32_t)(EAX));
  /* 10e9ed3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ed41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e9ed44:;
  /* 10e9ed44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9ed46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ed48 je 0x10e9ed51 */
  if (C.zf) goto L_10e9ed51;
  /* 10e9ed4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e9ed4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e9ed4b");
  /* 10e9ed4f jmp 0x10e9ed44 */
  goto L_10e9ed44;
L_10e9ed51:;
  /* 10e9ed51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10e9ed54:;
  /* 10e9ed54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e9ed56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e9ed58 je 0x10e9ed64 */
  if (C.zf) goto L_10e9ed64;
  /* 10e9ed5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e9ed5b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e9ed5b");
  /* 10e9ed5f jae 0x10e9ed54 */
  if (!C.cf) goto L_10e9ed54;
  /* 10e9ed61 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10e9ed64:;
  /* 10e9ed64 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ed67 pop esi */
  ESI = (pop32());
  /* 10e9ed68 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e9ed69 ret  */
  ESPCHK(0x10e9ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x10e9ed70 (512 bytes, 147 insns) */
void f_10e9ed70(void) {
  FTRACE(0x10e9ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ed71 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ed73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ed76 cmp dword ptr [0x10ebe70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ed7d jne 0x10e9eda2 */
  if (!C.zf) goto L_10e9eda2;
  /* 10e9ed7f call 0x10e9f840 */
  push32(0x10e9ed84u); f_10e9f840();
  /* 10e9ed84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ed86 je 0x10e9ed92 */
  if (C.zf) goto L_10e9ed92;
  /* 10e9ed88 mov eax, dword ptr [0x10ec029c] */
  EAX = (r32((uint32_t)(0x10ec029c)));
  /* 10e9ed8d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9ed90 jmp 0x10e9ed99 */
  goto L_10e9ed99;
L_10e9ed92:;
  /* 10e9ed92 mov dword ptr [ebp - 8], 0x10e9f890 */
  w32((uint32_t)(EBP + -0x8), (0x10e9f890u));
L_10e9ed99:;
  /* 10e9ed99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9ed9c mov dword ptr [0x10ebe70c], ecx */
  w32((uint32_t)(0x10ebe70c), (ECX));
L_10e9eda2:;
  /* 10e9eda2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eda6 jne 0x10e9edb2 */
  if (!C.zf) goto L_10e9edb2;
  /* 10e9eda8 call 0x10e9f690 */
  push32(0x10e9edadu); f_10e9f690();
  /* 10e9edad jmp 0x10e9ee7e */
  goto L_10e9ee7e;
L_10e9edb2:;
  /* 10e9edb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9edb5 mov dword ptr [0x10ebe6fc], edx */
  w32((uint32_t)(0x10ebe6fc), (EDX));
  /* 10e9edbb cmp dword ptr [0x10ebe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9edc2 je 0x10e9ede4 */
  if (C.zf) goto L_10e9ede4;
  /* 10e9edc4 mov eax, dword ptr [0x10ebe6fc] */
  EAX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9edc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9edcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9edce je 0x10e9ede4 */
  if (C.zf) goto L_10e9ede4;
  /* 10e9edd0 push 0x10ebe6fc */
  push32((uint32_t)(0x10ebe6fcu));
  /* 10e9edd5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e9edd7 push 0x10ebdaa0 */
  push32((uint32_t)(0x10ebdaa0u));
  /* 10e9eddc call 0x10e9ef70 */
  push32(0x10e9ede1u); f_10e9ef70();
  /* 10e9ede1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9ede4:;
  /* 10e9ede4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ede7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9edea mov dword ptr [0x10ebe700], edx */
  w32((uint32_t)(0x10ebe700), (EDX));
  /* 10e9edf0 cmp dword ptr [0x10ebe700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9edf7 je 0x10e9ee19 */
  if (C.zf) goto L_10e9ee19;
  /* 10e9edf9 mov eax, dword ptr [0x10ebe700] */
  EAX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9edfe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9ee01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9ee03 je 0x10e9ee19 */
  if (C.zf) goto L_10e9ee19;
  /* 10e9ee05 push 0x10ebe700 */
  push32((uint32_t)(0x10ebe700u));
  /* 10e9ee0a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e9ee0c push 0x10ebd9e8 */
  push32((uint32_t)(0x10ebd9e8u));
  /* 10e9ee11 call 0x10e9ef70 */
  push32(0x10e9ee16u); f_10e9ef70();
  /* 10e9ee16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9ee19:;
  /* 10e9ee19 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9ee23 cmp dword ptr [0x10ebe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ee2a je 0x10e9ee5d */
  if (C.zf) goto L_10e9ee5d;
  /* 10e9ee2c mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9ee32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9ee35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ee37 je 0x10e9ee5d */
  if (C.zf) goto L_10e9ee5d;
  /* 10e9ee39 cmp dword ptr [0x10ebe700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ee40 je 0x10e9ee56 */
  if (C.zf) goto L_10e9ee56;
  /* 10e9ee42 mov ecx, dword ptr [0x10ebe700] */
  ECX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9ee48 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9ee4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9ee4d je 0x10e9ee56 */
  if (C.zf) goto L_10e9ee56;
  /* 10e9ee4f call 0x10e9f000 */
  push32(0x10e9ee54u); f_10e9f000();
  /* 10e9ee54 jmp 0x10e9ee5b */
  goto L_10e9ee5b;
L_10e9ee56:;
  /* 10e9ee56 call 0x10e9f3f0 */
  push32(0x10e9ee5bu); f_10e9f3f0();
L_10e9ee5b:;
  /* 10e9ee5b jmp 0x10e9ee7e */
  goto L_10e9ee7e;
L_10e9ee5d:;
  /* 10e9ee5d cmp dword ptr [0x10ebe700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ee64 je 0x10e9ee79 */
  if (C.zf) goto L_10e9ee79;
  /* 10e9ee66 mov eax, dword ptr [0x10ebe700] */
  EAX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9ee6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9ee6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9ee70 je 0x10e9ee79 */
  if (C.zf) goto L_10e9ee79;
  /* 10e9ee72 call 0x10e9f590 */
  push32(0x10e9ee77u); f_10e9f590();
  /* 10e9ee77 jmp 0x10e9ee7e */
  goto L_10e9ee7e;
L_10e9ee79:;
  /* 10e9ee79 call 0x10e9f690 */
  push32(0x10e9ee7eu); f_10e9f690();
L_10e9ee7e:;
  /* 10e9ee7e cmp dword ptr [0x10ebe704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ee85 jne 0x10e9ee8e */
  if (!C.zf) goto L_10e9ee8e;
  /* 10e9ee87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ee89 jmp 0x10e9ef6c */
  goto L_10e9ef6c;
L_10e9ee8e:;
  /* 10e9ee8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9ee91 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ee97 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ee98 call 0x10e9f6c0 */
  push32(0x10e9ee9du); f_10e9f6c0();
  /* 10e9ee9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9eea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9eea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eea7 je 0x10e9eebc */
  if (C.zf) goto L_10e9eebc;
  /* 10e9eea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9eeac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9eeb1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9eeb2 call dword ptr [0x10ec02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02a0))), 0x10e9eeb8u);
  /* 10e9eeb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9eeba jne 0x10e9eec3 */
  if (!C.zf) goto L_10e9eec3;
L_10e9eebc:;
  /* 10e9eebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9eebe jmp 0x10e9ef6c */
  goto L_10e9ef6c;
L_10e9eec3:;
  /* 10e9eec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9eec5 mov ecx, dword ptr [0x10ebe6ec] */
  ECX = (r32((uint32_t)(0x10ebe6ec)));
  /* 10e9eecb push ecx */
  push32((uint32_t)(ECX));
  /* 10e9eecc call dword ptr [0x10ec02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02a4))), 0x10e9eed2u);
  /* 10e9eed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9eed4 jne 0x10e9eedd */
  if (!C.zf) goto L_10e9eedd;
  /* 10e9eed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9eed8 jmp 0x10e9ef6c */
  goto L_10e9ef6c;
L_10e9eedd:;
  /* 10e9eedd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9eee1 je 0x10e9ef08 */
  if (C.zf) goto L_10e9ef08;
  /* 10e9eee3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9eee6 mov ax, word ptr [0x10ebe6ec] */
  AX = (r16((uint32_t)(0x10ebe6ec)));
  /* 10e9eeec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e9eeef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9eef2 mov dx, word ptr [0x10ebe708] */
  DX = (r16((uint32_t)(0x10ebe708)));
  /* 10e9eef9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10e9eefd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9ef00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10e9ef04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10e9ef08:;
  /* 10e9ef08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ef0c je 0x10e9ef67 */
  if (C.zf) goto L_10e9ef67;
  /* 10e9ef0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e9ef10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ef13 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ef14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10e9ef19 mov eax, dword ptr [0x10ebe6ec] */
  EAX = (r32((uint32_t)(0x10ebe6ec)));
  /* 10e9ef1e push eax */
  push32((uint32_t)(EAX));
  /* 10e9ef1f call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9ef25u);
  /* 10e9ef25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ef27 jne 0x10e9ef2d */
  if (!C.zf) goto L_10e9ef2d;
  /* 10e9ef29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ef2b jmp 0x10e9ef6c */
  goto L_10e9ef6c;
L_10e9ef2d:;
  /* 10e9ef2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e9ef2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ef32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ef35 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ef36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10e9ef3b mov edx, dword ptr [0x10ebe708] */
  EDX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9ef41 push edx */
  push32((uint32_t)(EDX));
  /* 10e9ef42 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9ef48u);
  /* 10e9ef48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9ef4a jne 0x10e9ef50 */
  if (!C.zf) goto L_10e9ef50;
  /* 10e9ef4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9ef4e jmp 0x10e9ef6c */
  goto L_10e9ef6c;
L_10e9ef50:;
  /* 10e9ef50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e9ef52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9ef55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ef5a push eax */
  push32((uint32_t)(EAX));
  /* 10e9ef5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ef5e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ef5f call 0x10e95ad0 */
  push32(0x10e9ef64u); f_10e95ad0();
  /* 10e9ef64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9ef67:;
  /* 10e9ef67 mov eax, 1 */
  EAX = (0x1u);
L_10e9ef6c:;
  /* 10e9ef6c mov esp, ebp */
  ESP = (EBP);
  /* 10e9ef6e pop ebp */
  EBP = (pop32());
  /* 10e9ef6f ret  */
  ESPCHK(0x10e9ed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x10e9ef70 (130 bytes, 47 insns) */
void f_10e9ef70(void) {
  FTRACE(0x10e9ef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9ef70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9ef71 mov ebp, esp */
  EBP = (ESP);
  /* 10e9ef73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ef76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e9ef7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e9ef84:;
  /* 10e9ef84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ef87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ef8a jg 0x10e9efee */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9efee;
  /* 10e9ef8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9ef90 je 0x10e9efee */
  if (C.zf) goto L_10e9efee;
  /* 10e9ef92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9ef95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ef98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9ef99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9ef9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9ef9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9efa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9efa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9efa6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10e9efa9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9efaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9efad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e9efaf push edx */
  push32((uint32_t)(EDX));
  /* 10e9efb0 call 0x10ea1660 */
  push32(0x10e9efb5u); f_10ea1660();
  /* 10e9efb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9efb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9efbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9efbf jne 0x10e9efd2 */
  if (!C.zf) goto L_10e9efd2;
  /* 10e9efc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9efc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9efc7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10e9efcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9efce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e9efd0 jmp 0x10e9efec */
  goto L_10e9efec;
L_10e9efd2:;
  /* 10e9efd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9efd6 jge 0x10e9efe3 */
  if ((C.sf==C.of)) goto L_10e9efe3;
  /* 10e9efd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9efdb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9efde mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e9efe1 jmp 0x10e9efec */
  goto L_10e9efec;
L_10e9efe3:;
  /* 10e9efe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9efe6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9efe9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e9efec:;
  /* 10e9efec jmp 0x10e9ef84 */
  goto L_10e9ef84;
L_10e9efee:;
  /* 10e9efee mov esp, ebp */
  ESP = (EBP);
  /* 10e9eff0 pop ebp */
  EBP = (pop32());
  /* 10e9eff1 ret  */
  ESPCHK(0x10e9ef70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x10e9f000 (186 bytes, 50 insns) */
void f_10e9f000(void) {
  FTRACE(0x10e9f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f000 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f001 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f003 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f004 mov eax, dword ptr [0x10ebe6fc] */
  EAX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f009 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f00a call 0x10e95dc0 */
  push32(0x10e9f00fu); f_10e95dc0();
  /* 10e9f00f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f014 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f017 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e9f01a mov dword ptr [0x10ebe6f8], ecx */
  w32((uint32_t)(0x10ebe6f8), (ECX));
  /* 10e9f020 mov edx, dword ptr [0x10ebe700] */
  EDX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9f026 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f027 call 0x10e95dc0 */
  push32(0x10e9f02cu); f_10e95dc0();
  /* 10e9f02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f02f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f031 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f034 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e9f037 mov dword ptr [0x10ebe6f0], ecx */
  w32((uint32_t)(0x10ebe6f0), (ECX));
  /* 10e9f03d mov dword ptr [0x10ebe6ec], 0 */
  w32((uint32_t)(0x10ebe6ec), (0x0u));
  /* 10e9f047 cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f04e je 0x10e9f059 */
  if (C.zf) goto L_10e9f059;
  /* 10e9f050 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e9f057 jmp 0x10e9f06b */
  goto L_10e9f06b;
L_10e9f059:;
  /* 10e9f059 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f05f push edx */
  push32((uint32_t)(EDX));
  /* 10e9f060 call 0x10e9faa0 */
  push32(0x10e9f065u); f_10e9faa0();
  /* 10e9f065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f068 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9f06b:;
  /* 10e9f06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9f06e mov dword ptr [0x10ebe6f4], eax */
  w32((uint32_t)(0x10ebe6f4), (EAX));
  /* 10e9f073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f075 push 0x10e9f0c0 */
  push32((uint32_t)(0x10e9f0c0u));
  /* 10e9f07a call dword ptr [0x10ec0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0298))), 0x10e9f080u);
  /* 10e9f080 mov ecx, dword ptr [0x10ebe704] */
  ECX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f086 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f08c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9f08e je 0x10e9f0ac */
  if (C.zf) goto L_10e9f0ac;
  /* 10e9f090 mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f096 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f09c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9f09e je 0x10e9f0ac */
  if (C.zf) goto L_10e9f0ac;
  /* 10e9f0a0 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f0a5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f0a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f0aa jne 0x10e9f0b6 */
  if (!C.zf) goto L_10e9f0b6;
L_10e9f0ac:;
  /* 10e9f0ac mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
L_10e9f0b6:;
  /* 10e9f0b6 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f0b8 pop ebp */
  EBP = (pop32());
  /* 10e9f0b9 ret  */
  ESPCHK(0x10e9f000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0c0 @ 0x10e9f0c0 (804 bytes, 220 insns) */
void f_10e9f0c0(void) {
  FTRACE(0x10e9f0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f0c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f0c9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f0ca call 0x10e9fa20 */
  push32(0x10e9f0cfu); f_10e9fa20();
  /* 10e9f0cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f0d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e9f0d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f0d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f0da push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f0db mov edx, dword ptr [0x10ebe6f0] */
  EDX = (r32((uint32_t)(0x10ebe6f0)));
  /* 10e9f0e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f0e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f0e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f0eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f0f1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f0f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f0f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f0f6 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f0fcu);
  /* 10e9f0fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f0fe jne 0x10e9f114 */
  if (!C.zf) goto L_10e9f114;
  /* 10e9f100 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9f10a mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f10f jmp 0x10e9f3de */
  goto L_10e9f3de;
L_10e9f114:;
  /* 10e9f114 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f117 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f118 mov edx, dword ptr [0x10ebe700] */
  EDX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9f11e push edx */
  push32((uint32_t)(EDX));
  /* 10e9f11f call 0x10ea1660 */
  push32(0x10e9f124u); f_10ea1660();
  /* 10e9f124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f129 jne 0x10e9f24f */
  if (!C.zf) goto L_10e9f24f;
  /* 10e9f12f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f131 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e9f134 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f135 mov ecx, dword ptr [0x10ebe6f8] */
  ECX = (r32((uint32_t)(0x10ebe6f8)));
  /* 10e9f13b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f13d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f13f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f145 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f14b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f14c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f14f push edx */
  push32((uint32_t)(EDX));
  /* 10e9f150 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f156u);
  /* 10e9f156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f158 jne 0x10e9f16e */
  if (!C.zf) goto L_10e9f16e;
  /* 10e9f15a mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9f164 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f169 jmp 0x10e9f3de */
  goto L_10e9f3de;
L_10e9f16e:;
  /* 10e9f16e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e9f171 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f172 mov ecx, dword ptr [0x10ebe6fc] */
  ECX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f178 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f179 call 0x10ea1660 */
  push32(0x10e9f17eu); f_10ea1660();
  /* 10e9f17e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f183 jne 0x10e9f1b0 */
  if (!C.zf) goto L_10e9f1b0;
  /* 10e9f185 mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f18b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f191 mov dword ptr [0x10ebe704], edx */
  w32((uint32_t)(0x10ebe704), (EDX));
  /* 10e9f197 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f19a mov dword ptr [0x10ebe708], eax */
  w32((uint32_t)(0x10ebe708), (EAX));
  /* 10e9f19f mov ecx, dword ptr [0x10ebe708] */
  ECX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f1a5 mov dword ptr [0x10ebe6ec], ecx */
  w32((uint32_t)(0x10ebe6ec), (ECX));
  /* 10e9f1ab jmp 0x10e9f24f */
  goto L_10e9f24f;
L_10e9f1b0:;
  /* 10e9f1b0 mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f1b6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f1b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9f1bb jne 0x10e9f24f */
  if (!C.zf) goto L_10e9f24f;
  /* 10e9f1c1 cmp dword ptr [0x10ebe6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f1c8 je 0x10e9f21d */
  if (C.zf) goto L_10e9f21d;
  /* 10e9f1ca mov eax, dword ptr [0x10ebe6f4] */
  EAX = (r32((uint32_t)(0x10ebe6f4)));
  /* 10e9f1cf push eax */
  push32((uint32_t)(EAX));
  /* 10e9f1d0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f1d4 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f1da push edx */
  push32((uint32_t)(EDX));
  /* 10e9f1db call 0x10ea1730 */
  push32(0x10e9f1e0u); f_10ea1730();
  /* 10e9f1e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f1e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f1e5 jne 0x10e9f21d */
  if (!C.zf) goto L_10e9f21d;
  /* 10e9f1e7 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f1ec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10e9f1ee mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f1f3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f1f6 mov dword ptr [0x10ebe708], ecx */
  w32((uint32_t)(0x10ebe708), (ECX));
  /* 10e9f1fc mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f202 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f203 call 0x10e95dc0 */
  push32(0x10e9f208u); f_10e95dc0();
  /* 10e9f208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f20b cmp eax, dword ptr [0x10ebe6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebe6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f211 jne 0x10e9f21b */
  if (!C.zf) goto L_10e9f21b;
  /* 10e9f213 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f216 mov dword ptr [0x10ebe6ec], eax */
  w32((uint32_t)(0x10ebe6ec), (EAX));
L_10e9f21b:;
  /* 10e9f21b jmp 0x10e9f24f */
  goto L_10e9f24f;
L_10e9f21d:;
  /* 10e9f21d mov ecx, dword ptr [0x10ebe704] */
  ECX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f223 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9f228 jne 0x10e9f24f */
  if (!C.zf) goto L_10e9f24f;
  /* 10e9f22a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f22d push edx */
  push32((uint32_t)(EDX));
  /* 10e9f22e call 0x10e9f760 */
  push32(0x10e9f233u); f_10e9f760();
  /* 10e9f233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f238 je 0x10e9f24f */
  if (C.zf) goto L_10e9f24f;
  /* 10e9f23a mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f23f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e9f241 mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f246 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f249 mov dword ptr [0x10ebe708], ecx */
  w32((uint32_t)(0x10ebe708), (ECX));
L_10e9f24f:;
  /* 10e9f24f mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f255 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f25b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f261 je 0x10e9f3d1 */
  if (C.zf) goto L_10e9f3d1;
  /* 10e9f267 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f269 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e9f26c push eax */
  push32((uint32_t)(EAX));
  /* 10e9f26d mov ecx, dword ptr [0x10ebe6f8] */
  ECX = (r32((uint32_t)(0x10ebe6f8)));
  /* 10e9f273 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f275 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f277 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f27d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f283 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f284 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f287 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f288 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f28eu);
  /* 10e9f28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f290 jne 0x10e9f2a6 */
  if (!C.zf) goto L_10e9f2a6;
  /* 10e9f292 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9f29c mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f2a1 jmp 0x10e9f3de */
  goto L_10e9f3de;
L_10e9f2a6:;
  /* 10e9f2a6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e9f2a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f2aa mov ecx, dword ptr [0x10ebe6fc] */
  ECX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f2b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f2b1 call 0x10ea1660 */
  push32(0x10e9f2b6u); f_10ea1660();
  /* 10e9f2b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f2b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f2bb jne 0x10e9f370 */
  if (!C.zf) goto L_10e9f370;
  /* 10e9f2c1 mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f2c7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e9f2ca mov dword ptr [0x10ebe704], edx */
  w32((uint32_t)(0x10ebe704), (EDX));
  /* 10e9f2d0 cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f2d7 je 0x10e9f2fa */
  if (C.zf) goto L_10e9f2fa;
  /* 10e9f2d9 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f2de or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e9f2e1 mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f2e6 cmp dword ptr [0x10ebe6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f2ed jne 0x10e9f2f8 */
  if (!C.zf) goto L_10e9f2f8;
  /* 10e9f2ef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f2f2 mov dword ptr [0x10ebe6ec], ecx */
  w32((uint32_t)(0x10ebe6ec), (ECX));
L_10e9f2f8:;
  /* 10e9f2f8 jmp 0x10e9f36e */
  goto L_10e9f36e;
L_10e9f2fa:;
  /* 10e9f2fa cmp dword ptr [0x10ebe6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f301 je 0x10e9f34f */
  if (C.zf) goto L_10e9f34f;
  /* 10e9f303 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f309 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f30a call 0x10e95dc0 */
  push32(0x10e9f30fu); f_10e95dc0();
  /* 10e9f30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f312 cmp eax, dword ptr [0x10ebe6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebe6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f318 jne 0x10e9f34f */
  if (!C.zf) goto L_10e9f34f;
  /* 10e9f31a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f31c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f31f push eax */
  push32((uint32_t)(EAX));
  /* 10e9f320 call 0x10e9f7b0 */
  push32(0x10e9f325u); f_10e9f7b0();
  /* 10e9f325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f32a je 0x10e9f34d */
  if (C.zf) goto L_10e9f34d;
  /* 10e9f32c mov ecx, dword ptr [0x10ebe704] */
  ECX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f332 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e9f335 mov dword ptr [0x10ebe704], ecx */
  w32((uint32_t)(0x10ebe704), (ECX));
  /* 10e9f33b cmp dword ptr [0x10ebe6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f342 jne 0x10e9f34d */
  if (!C.zf) goto L_10e9f34d;
  /* 10e9f344 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f347 mov dword ptr [0x10ebe6ec], edx */
  w32((uint32_t)(0x10ebe6ec), (EDX));
L_10e9f34d:;
  /* 10e9f34d jmp 0x10e9f36e */
  goto L_10e9f36e;
L_10e9f34f:;
  /* 10e9f34f mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f354 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e9f357 mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f35c cmp dword ptr [0x10ebe6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f363 jne 0x10e9f36e */
  if (!C.zf) goto L_10e9f36e;
  /* 10e9f365 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f368 mov dword ptr [0x10ebe6ec], ecx */
  w32((uint32_t)(0x10ebe6ec), (ECX));
L_10e9f36e:;
  /* 10e9f36e jmp 0x10e9f3d1 */
  goto L_10e9f3d1;
L_10e9f370:;
  /* 10e9f370 cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f377 jne 0x10e9f3d1 */
  if (!C.zf) goto L_10e9f3d1;
  /* 10e9f379 cmp dword ptr [0x10ebe6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f380 je 0x10e9f3d1 */
  if (C.zf) goto L_10e9f3d1;
  /* 10e9f382 mov edx, dword ptr [0x10ebe6f4] */
  EDX = (r32((uint32_t)(0x10ebe6f4)));
  /* 10e9f388 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f389 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e9f38c push eax */
  push32((uint32_t)(EAX));
  /* 10e9f38d mov ecx, dword ptr [0x10ebe6fc] */
  ECX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f393 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f394 call 0x10ea1730 */
  push32(0x10e9f399u); f_10ea1730();
  /* 10e9f399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f39c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f39e jne 0x10e9f3d1 */
  if (!C.zf) goto L_10e9f3d1;
  /* 10e9f3a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9f3a2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f3a5 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f3a6 call 0x10e9f7b0 */
  push32(0x10e9f3abu); f_10e9f7b0();
  /* 10e9f3ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f3ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f3b0 je 0x10e9f3d1 */
  if (C.zf) goto L_10e9f3d1;
  /* 10e9f3b2 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f3b7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e9f3ba mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f3bf cmp dword ptr [0x10ebe6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f3c6 jne 0x10e9f3d1 */
  if (!C.zf) goto L_10e9f3d1;
  /* 10e9f3c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f3cb mov dword ptr [0x10ebe6ec], ecx */
  w32((uint32_t)(0x10ebe6ec), (ECX));
L_10e9f3d1:;
  /* 10e9f3d1 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f3d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f3d9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f3db sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f3dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e9f3de:;
  /* 10e9f3de mov esp, ebp */
  ESP = (EBP);
  /* 10e9f3e0 pop ebp */
  EBP = (pop32());
  /* 10e9f3e1 ret 4 */
  ESPCHK(0x10e9f0c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f3f0 @ 0x10e9f3f0 (116 bytes, 33 insns) */
void f_10e9f3f0(void) {
  FTRACE(0x10e9f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f3f4 mov eax, dword ptr [0x10ebe6fc] */
  EAX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f3f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f3fa call 0x10e95dc0 */
  push32(0x10e9f3ffu); f_10e95dc0();
  /* 10e9f3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f402 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f404 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f407 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e9f40a mov dword ptr [0x10ebe6f8], ecx */
  w32((uint32_t)(0x10ebe6f8), (ECX));
  /* 10e9f410 cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f417 je 0x10e9f422 */
  if (C.zf) goto L_10e9f422;
  /* 10e9f419 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e9f420 jmp 0x10e9f434 */
  goto L_10e9f434;
L_10e9f422:;
  /* 10e9f422 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f428 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f429 call 0x10e9faa0 */
  push32(0x10e9f42eu); f_10e9faa0();
  /* 10e9f42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f431 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9f434:;
  /* 10e9f434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9f437 mov dword ptr [0x10ebe6f4], eax */
  w32((uint32_t)(0x10ebe6f4), (EAX));
  /* 10e9f43c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f43e push 0x10e9f470 */
  push32((uint32_t)(0x10e9f470u));
  /* 10e9f443 call dword ptr [0x10ec0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0298))), 0x10e9f449u);
  /* 10e9f449 mov ecx, dword ptr [0x10ebe704] */
  ECX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f44f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f452 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9f454 jne 0x10e9f460 */
  if (!C.zf) goto L_10e9f460;
  /* 10e9f456 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
L_10e9f460:;
  /* 10e9f460 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f462 pop ebp */
  EBP = (pop32());
  /* 10e9f463 ret  */
  ESPCHK(0x10e9f3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x10e9f470 (287 bytes, 86 insns) */
void f_10e9f470(void) {
  FTRACE(0x10e9f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f470 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f471 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f479 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f47a call 0x10e9fa20 */
  push32(0x10e9f47fu); f_10e9fa20();
  /* 10e9f47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e9f485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f48a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f48b mov edx, dword ptr [0x10ebe6f8] */
  EDX = (r32((uint32_t)(0x10ebe6f8)));
  /* 10e9f491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f495 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f49b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f4a1 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f4a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f4a5 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f4a6 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f4acu);
  /* 10e9f4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f4ae jne 0x10e9f4c4 */
  if (!C.zf) goto L_10e9f4c4;
  /* 10e9f4b0 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9f4ba mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f4bf jmp 0x10e9f589 */
  goto L_10e9f589;
L_10e9f4c4:;
  /* 10e9f4c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f4c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f4c8 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f4ce push edx */
  push32((uint32_t)(EDX));
  /* 10e9f4cf call 0x10ea1660 */
  push32(0x10e9f4d4u); f_10ea1660();
  /* 10e9f4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f4d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f4d9 jne 0x10e9f519 */
  if (!C.zf) goto L_10e9f519;
  /* 10e9f4db cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f4e2 jne 0x10e9f4f6 */
  if (!C.zf) goto L_10e9f4f6;
  /* 10e9f4e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f4e6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f4e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f4ea call 0x10e9f7b0 */
  push32(0x10e9f4efu); f_10e9f7b0();
  /* 10e9f4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f4f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f4f4 je 0x10e9f517 */
  if (C.zf) goto L_10e9f517;
L_10e9f4f6:;
  /* 10e9f4f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f4f9 mov dword ptr [0x10ebe708], ecx */
  w32((uint32_t)(0x10ebe708), (ECX));
  /* 10e9f4ff mov edx, dword ptr [0x10ebe708] */
  EDX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f505 mov dword ptr [0x10ebe6ec], edx */
  w32((uint32_t)(0x10ebe6ec), (EDX));
  /* 10e9f50b mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f510 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e9f512 mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
L_10e9f517:;
  /* 10e9f517 jmp 0x10e9f57c */
  goto L_10e9f57c;
L_10e9f519:;
  /* 10e9f519 cmp dword ptr [0x10ebe6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f520 jne 0x10e9f57c */
  if (!C.zf) goto L_10e9f57c;
  /* 10e9f522 cmp dword ptr [0x10ebe6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f529 je 0x10e9f57c */
  if (C.zf) goto L_10e9f57c;
  /* 10e9f52b mov ecx, dword ptr [0x10ebe6f4] */
  ECX = (r32((uint32_t)(0x10ebe6f4)));
  /* 10e9f531 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f532 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10e9f535 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f536 mov eax, dword ptr [0x10ebe6fc] */
  EAX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f53b push eax */
  push32((uint32_t)(EAX));
  /* 10e9f53c call 0x10ea1730 */
  push32(0x10e9f541u); f_10ea1730();
  /* 10e9f541 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f546 jne 0x10e9f57c */
  if (!C.zf) goto L_10e9f57c;
  /* 10e9f548 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9f54a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f54d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f54e call 0x10e9f7b0 */
  push32(0x10e9f553u); f_10e9f7b0();
  /* 10e9f553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f558 je 0x10e9f57c */
  if (C.zf) goto L_10e9f57c;
  /* 10e9f55a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f55d mov dword ptr [0x10ebe708], edx */
  w32((uint32_t)(0x10ebe708), (EDX));
  /* 10e9f563 mov eax, dword ptr [0x10ebe708] */
  EAX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f568 mov dword ptr [0x10ebe6ec], eax */
  w32((uint32_t)(0x10ebe6ec), (EAX));
  /* 10e9f56d mov ecx, dword ptr [0x10ebe704] */
  ECX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f573 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f576 mov dword ptr [0x10ebe704], ecx */
  w32((uint32_t)(0x10ebe704), (ECX));
L_10e9f57c:;
  /* 10e9f57c mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f581 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f584 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f586 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f588 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e9f589:;
  /* 10e9f589 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f58b pop ebp */
  EBP = (pop32());
  /* 10e9f58c ret 4 */
  ESPCHK(0x10e9f470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f590 @ 0x10e9f590 (69 bytes, 20 insns) */
void f_10e9f590(void) {
  FTRACE(0x10e9f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f591 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f593 mov eax, dword ptr [0x10ebe700] */
  EAX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9f598 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f599 call 0x10e95dc0 */
  push32(0x10e9f59eu); f_10e95dc0();
  /* 10e9f59e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f5a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f5a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f5a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e9f5a9 mov dword ptr [0x10ebe6f0], ecx */
  w32((uint32_t)(0x10ebe6f0), (ECX));
  /* 10e9f5af push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f5b1 push 0x10e9f5e0 */
  push32((uint32_t)(0x10e9f5e0u));
  /* 10e9f5b6 call dword ptr [0x10ec0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0298))), 0x10e9f5bcu);
  /* 10e9f5bc mov edx, dword ptr [0x10ebe704] */
  EDX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f5c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f5c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9f5c7 jne 0x10e9f5d3 */
  if (!C.zf) goto L_10e9f5d3;
  /* 10e9f5c9 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
L_10e9f5d3:;
  /* 10e9f5d3 pop ebp */
  EBP = (pop32());
  /* 10e9f5d4 ret  */
  ESPCHK(0x10e9f590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x10e9f5e0 (172 bytes, 54 insns) */
void f_10e9f5e0(void) {
  FTRACE(0x10e9f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f5e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f5e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f5ea call 0x10e9fa20 */
  push32(0x10e9f5efu); f_10e9fa20();
  /* 10e9f5ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f5f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e9f5f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f5f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f5fa push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f5fb mov edx, dword ptr [0x10ebe6f0] */
  EDX = (r32((uint32_t)(0x10ebe6f0)));
  /* 10e9f601 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f603 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f605 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f60b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f611 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f612 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f615 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f616 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f61cu);
  /* 10e9f61c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f61e jne 0x10e9f631 */
  if (!C.zf) goto L_10e9f631;
  /* 10e9f620 mov dword ptr [0x10ebe704], 0 */
  w32((uint32_t)(0x10ebe704), (0x0u));
  /* 10e9f62a mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f62f jmp 0x10e9f686 */
  goto L_10e9f686;
L_10e9f631:;
  /* 10e9f631 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e9f634 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f635 mov edx, dword ptr [0x10ebe700] */
  EDX = (r32((uint32_t)(0x10ebe700)));
  /* 10e9f63b push edx */
  push32((uint32_t)(EDX));
  /* 10e9f63c call 0x10ea1660 */
  push32(0x10e9f641u); f_10ea1660();
  /* 10e9f641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f646 jne 0x10e9f679 */
  if (!C.zf) goto L_10e9f679;
  /* 10e9f648 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f64b push eax */
  push32((uint32_t)(EAX));
  /* 10e9f64c call 0x10e9f760 */
  push32(0x10e9f651u); f_10e9f760();
  /* 10e9f651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f656 je 0x10e9f679 */
  if (C.zf) goto L_10e9f679;
  /* 10e9f658 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e9f65b mov dword ptr [0x10ebe708], ecx */
  w32((uint32_t)(0x10ebe708), (ECX));
  /* 10e9f661 mov edx, dword ptr [0x10ebe708] */
  EDX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f667 mov dword ptr [0x10ebe6ec], edx */
  w32((uint32_t)(0x10ebe6ec), (EDX));
  /* 10e9f66d mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f672 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e9f674 mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
L_10e9f679:;
  /* 10e9f679 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f67e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f681 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e9f683 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f685 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e9f686:;
  /* 10e9f686 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f688 pop ebp */
  EBP = (pop32());
  /* 10e9f689 ret 4 */
  ESPCHK(0x10e9f5e0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f690 @ 0x10e9f690 (43 bytes, 11 insns) */
void f_10e9f690(void) {
  FTRACE(0x10e9f690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f691 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f693 mov eax, dword ptr [0x10ebe704] */
  EAX = (r32((uint32_t)(0x10ebe704)));
  /* 10e9f698 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f69d mov dword ptr [0x10ebe704], eax */
  w32((uint32_t)(0x10ebe704), (EAX));
  /* 10e9f6a2 call dword ptr [0x10ec0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0294))), 0x10e9f6a8u);
  /* 10e9f6a8 mov dword ptr [0x10ebe708], eax */
  w32((uint32_t)(0x10ebe708), (EAX));
  /* 10e9f6ad mov ecx, dword ptr [0x10ebe708] */
  ECX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f6b3 mov dword ptr [0x10ebe6ec], ecx */
  w32((uint32_t)(0x10ebe6ec), (ECX));
  /* 10e9f6b9 pop ebp */
  EBP = (pop32());
  /* 10e9f6ba ret  */
  ESPCHK(0x10e9f690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x10e9f6c0 (155 bytes, 57 insns) */
void f_10e9f6c0(void) {
  FTRACE(0x10e9f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f6c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f6ca je 0x10e9f6eb */
  if (C.zf) goto L_10e9f6eb;
  /* 10e9f6cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f6cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9f6d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9f6d4 je 0x10e9f6eb */
  if (C.zf) goto L_10e9f6eb;
  /* 10e9f6d6 push 0x10eba6fc */
  push32((uint32_t)(0x10eba6fcu));
  /* 10e9f6db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f6de push edx */
  push32((uint32_t)(EDX));
  /* 10e9f6df call 0x10e9ec20 */
  push32(0x10e9f6e4u); f_10e9ec20();
  /* 10e9f6e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f6e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f6e9 jne 0x10e9f713 */
  if (!C.zf) goto L_10e9f713;
L_10e9f6eb:;
  /* 10e9f6eb push 8 */
  push32((uint32_t)(0x8u));
  /* 10e9f6ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e9f6f0 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f6f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e9f6f6 mov ecx, dword ptr [0x10ebe708] */
  ECX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f6fc push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f6fd call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f703u);
  /* 10e9f703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f705 jne 0x10e9f70b */
  if (!C.zf) goto L_10e9f70b;
  /* 10e9f707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f709 jmp 0x10e9f757 */
  goto L_10e9f757;
L_10e9f70b:;
  /* 10e9f70b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10e9f70e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e9f711 jmp 0x10e9f74b */
  goto L_10e9f74b;
L_10e9f713:;
  /* 10e9f713 push 0x10eba6f8 */
  push32((uint32_t)(0x10eba6f8u));
  /* 10e9f718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f71b push eax */
  push32((uint32_t)(EAX));
  /* 10e9f71c call 0x10e9ec20 */
  push32(0x10e9f721u); f_10e9ec20();
  /* 10e9f721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f726 jne 0x10e9f74b */
  if (!C.zf) goto L_10e9f74b;
  /* 10e9f728 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e9f72a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e9f72d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f72e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e9f730 mov edx, dword ptr [0x10ebe708] */
  EDX = (r32((uint32_t)(0x10ebe708)));
  /* 10e9f736 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f737 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f73du);
  /* 10e9f73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f73f jne 0x10e9f745 */
  if (!C.zf) goto L_10e9f745;
  /* 10e9f741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f743 jmp 0x10e9f757 */
  goto L_10e9f757;
L_10e9f745:;
  /* 10e9f745 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e9f748 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e9f74b:;
  /* 10e9f74b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f74e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f74f call 0x10ea1840 */
  push32(0x10e9f754u); f_10ea1840();
  /* 10e9f754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9f757:;
  /* 10e9f757 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f759 pop ebp */
  EBP = (pop32());
  /* 10e9f75a ret  */
  ESPCHK(0x10e9f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x10e9f760 (79 bytes, 26 insns) */
void f_10e9f760(void) {
  FTRACE(0x10e9f760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f760 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f761 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f766 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10e9f76a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10e9f76e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9f775 jmp 0x10e9f780 */
  goto L_10e9f780;
L_10e9f777:;
  /* 10e9f777 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9f77a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f77d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e9f780:;
  /* 10e9f780 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f784 jae 0x10e9f7a6 */
  if (!C.cf) goto L_10e9f7a6;
  /* 10e9f786 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9f789 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9f78f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9f792 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9f794 mov cx, word ptr [eax*2 + 0x10ebd9d4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10ebd9d4)));
  /* 10e9f79c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f79e jne 0x10e9f7a4 */
  if (!C.zf) goto L_10e9f7a4;
  /* 10e9f7a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7a2 jmp 0x10e9f7ab */
  goto L_10e9f7ab;
L_10e9f7a4:;
  /* 10e9f7a4 jmp 0x10e9f777 */
  goto L_10e9f777;
L_10e9f7a6:;
  /* 10e9f7a6 mov eax, 1 */
  EAX = (0x1u);
L_10e9f7ab:;
  /* 10e9f7ab mov esp, ebp */
  ESP = (EBP);
  /* 10e9f7ad pop ebp */
  EBP = (pop32());
  /* 10e9f7ae ret  */
  ESPCHK(0x10e9f760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x10e9f7b0 (135 bytes, 48 insns) */
void f_10e9f7b0(void) {
  FTRACE(0x10e9f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f7b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f7b6 push esi */
  push32((uint32_t)(ESI));
  /* 10e9f7b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f7ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10e9f7cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9f7d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e9f7d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10e9f7d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f7da push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9f7dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9f7df push edx */
  push32((uint32_t)(EDX));
  /* 10e9f7e0 call dword ptr [0x10ebe70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe70c))), 0x10e9f7e6u);
  /* 10e9f7e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f7e8 jne 0x10e9f7ee */
  if (!C.zf) goto L_10e9f7ee;
  /* 10e9f7ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f7ec jmp 0x10e9f832 */
  goto L_10e9f832;
L_10e9f7ee:;
  /* 10e9f7ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10e9f7f1 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f7f2 call 0x10e9fa20 */
  push32(0x10e9f7f7u); f_10e9fa20();
  /* 10e9f7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f7fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f7fd je 0x10e9f82d */
  if (C.zf) goto L_10e9f82d;
  /* 10e9f7ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f803 je 0x10e9f82d */
  if (C.zf) goto L_10e9f82d;
  /* 10e9f805 mov ecx, dword ptr [0x10ebe6fc] */
  ECX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f80b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f80c call 0x10e9faa0 */
  push32(0x10e9f811u); f_10e9faa0();
  /* 10e9f811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f814 mov esi, eax */
  ESI = (EAX);
  /* 10e9f816 mov edx, dword ptr [0x10ebe6fc] */
  EDX = (r32((uint32_t)(0x10ebe6fc)));
  /* 10e9f81c push edx */
  push32((uint32_t)(EDX));
  /* 10e9f81d call 0x10e95dc0 */
  push32(0x10e9f822u); f_10e95dc0();
  /* 10e9f822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f825 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f827 jne 0x10e9f82d */
  if (!C.zf) goto L_10e9f82d;
  /* 10e9f829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9f82b jmp 0x10e9f832 */
  goto L_10e9f832;
L_10e9f82d:;
  /* 10e9f82d mov eax, 1 */
  EAX = (0x1u);
L_10e9f832:;
  /* 10e9f832 pop esi */
  ESI = (pop32());
  /* 10e9f833 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f835 pop ebp */
  EBP = (pop32());
  /* 10e9f836 ret  */
  ESPCHK(0x10e9f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f840 @ 0x10e9f840 (77 bytes, 18 insns) */
void f_10e9f840(void) {
  FTRACE(0x10e9f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f840 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f841 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f843 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f849 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10e9f853 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10e9f859 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f85a call dword ptr [0x10ec0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0290))), 0x10e9f860u);
  /* 10e9f860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9f862 je 0x10e9f879 */
  if (C.zf) goto L_10e9f879;
  /* 10e9f864 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f86b jne 0x10e9f879 */
  if (!C.zf) goto L_10e9f879;
  /* 10e9f86d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10e9f877 jmp 0x10e9f883 */
  goto L_10e9f883;
L_10e9f879:;
  /* 10e9f879 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10e9f883:;
  /* 10e9f883 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e9f889 mov esp, ebp */
  ESP = (EBP);
  /* 10e9f88b pop ebp */
  EBP = (pop32());
  /* 10e9f88c ret  */
  ESPCHK(0x10e9f840u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10e9f890 (388 bytes, 118 insns) */
void f_10e9f890(void) {
  FTRACE(0x10e9f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9f890 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9f891 mov ebp, esp */
  EBP = (ESP);
  /* 10e9f893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f896 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9f89d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10e9f8a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e9f8ab:;
  /* 10e9f8ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9f8ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8b1 jg 0x10e9f9f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9f9f8;
  /* 10e9f8b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9f8ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f8bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e9f8be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f8c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e9f8c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9f8c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f8c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f8ce cmp edx, dword ptr [ecx + 0x10ebd530] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10ebd530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8d4 jne 0x10e9f9ce */
  if (!C.zf) goto L_10e9f9ce;
  /* 10e9f8da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9f8dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e9f8e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8e4 ja 0x10e9f907 */
  if ((!C.cf&&!C.zf)) goto L_10e9f907;
  /* 10e9f8e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8ea je 0x10e9f979 */
  if (C.zf) goto L_10e9f979;
  /* 10e9f8f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8f4 je 0x10e9f924 */
  if (C.zf) goto L_10e9f924;
  /* 10e9f8f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f8fa je 0x10e9f946 */
  if (C.zf) goto L_10e9f946;
  /* 10e9f8fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f900 je 0x10e9f968 */
  if (C.zf) goto L_10e9f968;
  /* 10e9f902 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f907:;
  /* 10e9f907 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f90e je 0x10e9f935 */
  if (C.zf) goto L_10e9f935;
  /* 10e9f910 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f917 je 0x10e9f957 */
  if (C.zf) goto L_10e9f957;
  /* 10e9f919 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f920 je 0x10e9f98a */
  if (C.zf) goto L_10e9f98a;
  /* 10e9f922 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f924:;
  /* 10e9f924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f927 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f92a add ecx, 0x10ebd534 */
  { uint32_t _a=(ECX),_b=(0x10ebd534u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f930 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9f933 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f935:;
  /* 10e9f935 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f938 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f93b mov eax, dword ptr [edx + 0x10ebd53c] */
  EAX = (r32((uint32_t)(EDX + 0x10ebd53c)));
  /* 10e9f941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9f944 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f946:;
  /* 10e9f946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f949 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f94c add ecx, 0x10ebd540 */
  { uint32_t _a=(ECX),_b=(0x10ebd540u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f952 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9f955 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f957:;
  /* 10e9f957 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f95a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f95d mov eax, dword ptr [edx + 0x10ebd544] */
  EAX = (r32((uint32_t)(EDX + 0x10ebd544)));
  /* 10e9f963 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e9f966 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f968:;
  /* 10e9f968 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f96b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f96e add ecx, 0x10ebd548 */
  { uint32_t _a=(ECX),_b=(0x10ebd548u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f974 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9f977 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f979:;
  /* 10e9f979 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f97c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f97f add edx, 0x10ebd54c */
  { uint32_t _a=(EDX),_b=(0x10ebd54cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f985 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9f988 jmp 0x10e9f998 */
  goto L_10e9f998;
L_10e9f98a:;
  /* 10e9f98a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f98d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f990 add eax, 0x10ebd554 */
  { uint32_t _a=(EAX),_b=(0x10ebd554u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f995 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e9f998:;
  /* 10e9f998 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f99c je 0x10e9f9a4 */
  if (C.zf) goto L_10e9f9a4;
  /* 10e9f99e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f9a2 jge 0x10e9f9a6 */
  if ((C.sf==C.of)) goto L_10e9f9a6;
L_10e9f9a4:;
  /* 10e9f9a4 jmp 0x10e9f9f8 */
  goto L_10e9f9f8;
L_10e9f9a6:;
  /* 10e9f9a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9f9a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f9ac push ecx */
  push32((uint32_t)(ECX));
  /* 10e9f9ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9f9b0 push edx */
  push32((uint32_t)(EDX));
  /* 10e9f9b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9f9b4 push eax */
  push32((uint32_t)(EAX));
  /* 10e9f9b5 call 0x10e967b0 */
  push32(0x10e9f9bau); f_10e967b0();
  /* 10e9f9ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f9bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9f9c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f9c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10e9f9c7 mov eax, 1 */
  EAX = (0x1u);
  /* 10e9f9cc jmp 0x10e9fa0e */
  goto L_10e9fa0e;
L_10e9f9ce:;
  /* 10e9f9ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f9d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9f9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9f9d7 cmp eax, dword ptr [edx + 0x10ebd530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10ebd530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9f9dd jae 0x10e9f9ea */
  if (!C.cf) goto L_10e9f9ea;
  /* 10e9f9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f9e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9f9e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9f9e8 jmp 0x10e9f9f3 */
  goto L_10e9f9f3;
L_10e9f9ea:;
  /* 10e9f9ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9f9ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9f9f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e9f9f3:;
  /* 10e9f9f3 jmp 0x10e9f8ab */
  goto L_10e9f8ab;
L_10e9f9f8:;
  /* 10e9f9f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9f9fb push eax */
  push32((uint32_t)(EAX));
  /* 10e9f9fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9f9ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fa00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9fa03 push edx */
  push32((uint32_t)(EDX));
  /* 10e9fa04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fa07 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fa08 call dword ptr [0x10ec029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec029c))), 0x10e9fa0eu);
L_10e9fa0e:;
  /* 10e9fa0e mov esp, ebp */
  ESP = (EBP);
  /* 10e9fa10 pop ebp */
  EBP = (pop32());
  /* 10e9fa11 ret 0x10 */
  ESPCHK(0x10e9f890u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fa20 @ 0x10e9fa20 (118 bytes, 42 insns) */
void f_10e9fa20(void) {
  FTRACE(0x10e9fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fa21 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fa23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9fa26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e9fa2d:;
  /* 10e9fa2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fa30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e9fa32 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10e9fa35 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fa3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fa3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e9fa42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9fa44 je 0x10e9fa8f */
  if (C.zf) goto L_10e9fa8f;
  /* 10e9fa46 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa4a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fa4d jl 0x10e9fa62 */
  if ((C.sf!=C.of)) goto L_10e9fa62;
  /* 10e9fa4f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa53 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fa56 jg 0x10e9fa62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9fa62;
  /* 10e9fa58 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e9fa5b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e9fa5d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e9fa60 jmp 0x10e9fa7c */
  goto L_10e9fa7c;
L_10e9fa62:;
  /* 10e9fa62 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa66 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fa69 jl 0x10e9fa7c */
  if ((C.sf!=C.of)) goto L_10e9fa7c;
  /* 10e9fa6b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa6f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fa72 jg 0x10e9fa7c */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9fa7c;
  /* 10e9fa74 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e9fa77 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e9fa79 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10e9fa7c:;
  /* 10e9fa7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fa7f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e9fa82 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e9fa86 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e9fa8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9fa8d jmp 0x10e9fa2d */
  goto L_10e9fa2d;
L_10e9fa8f:;
  /* 10e9fa8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fa92 mov esp, ebp */
  ESP = (EBP);
  /* 10e9fa94 pop ebp */
  EBP = (pop32());
  /* 10e9fa95 ret  */
  ESPCHK(0x10e9fa20u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10e9faa0 (101 bytes, 36 insns) */
void f_10e9faa0(void) {
  FTRACE(0x10e9faa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9faa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9faa1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9faa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9faa6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9faad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fab0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e9fab2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10e9fab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fab8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fabb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e9fabe:;
  /* 10e9fabe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e9fac2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fac5 jl 0x10e9fad0 */
  if ((C.sf!=C.of)) goto L_10e9fad0;
  /* 10e9fac7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e9facb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9face jle 0x10e9fae2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e9fae2;
L_10e9fad0:;
  /* 10e9fad0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e9fad4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fad7 jl 0x10e9fafe */
  if ((C.sf!=C.of)) goto L_10e9fafe;
  /* 10e9fad9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e9fadd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fae0 jg 0x10e9fafe */
  if ((!C.zf&&C.sf==C.of)) goto L_10e9fafe;
L_10e9fae2:;
  /* 10e9fae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9fae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fae8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e9faeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9faee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e9faf0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10e9faf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9faf6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9faf9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e9fafc jmp 0x10e9fabe */
  goto L_10e9fabe;
L_10e9fafe:;
  /* 10e9fafe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9fb01 mov esp, ebp */
  ESP = (EBP);
  /* 10e9fb03 pop ebp */
  EBP = (pop32());
  /* 10e9fb04 ret  */
  ESPCHK(0x10e9faa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x10e9fb10 (122 bytes, 39 insns) */
void f_10e9fb10(void) {
  FTRACE(0x10e9fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fb11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fb13 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb17 cmp eax, dword ptr [0x10ebff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fb1d jae 0x10e9fb41 */
  if (!C.cf) goto L_10e9fb41;
  /* 10e9fb1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e9fb25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9fb2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9fb2e mov eax, dword ptr [ecx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e9fb35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e9fb3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9fb3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9fb3f jne 0x10e9fb5c */
  if (!C.zf) goto L_10e9fb5c;
L_10e9fb41:;
  /* 10e9fb41 call 0x10e9ae60 */
  push32(0x10e9fb46u); f_10e9ae60();
  /* 10e9fb46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e9fb4c call 0x10e9ae70 */
  push32(0x10e9fb51u); f_10e9ae70();
  /* 10e9fb51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9fb57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9fb5a jmp 0x10e9fb86 */
  goto L_10e9fb86;
L_10e9fb5c:;
  /* 10e9fb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb5f push edx */
  push32((uint32_t)(EDX));
  /* 10e9fb60 call 0x10e9c680 */
  push32(0x10e9fb65u); f_10e9c680();
  /* 10e9fb65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb6b push eax */
  push32((uint32_t)(EAX));
  /* 10e9fb6c call 0x10e9fb90 */
  push32(0x10e9fb71u); f_10e9fb90();
  /* 10e9fb71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fb74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9fb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb7a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fb7b call 0x10e9c710 */
  push32(0x10e9fb80u); f_10e9c710();
  /* 10e9fb80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fb83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9fb86:;
  /* 10e9fb86 mov esp, ebp */
  ESP = (EBP);
  /* 10e9fb88 pop ebp */
  EBP = (pop32());
  /* 10e9fb89 ret  */
  ESPCHK(0x10e9fb10u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10e9fb90 (170 bytes, 59 insns) */
void f_10e9fb90(void) {
  FTRACE(0x10e9fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fb91 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fb93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fb94 push esi */
  push32((uint32_t)(ESI));
  /* 10e9fb95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fb98 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fb99 call 0x10e9c500 */
  push32(0x10e9fb9eu); f_10e9c500();
  /* 10e9fb9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fba1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fba4 je 0x10e9fbe3 */
  if (C.zf) goto L_10e9fbe3;
  /* 10e9fba6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fbaa je 0x10e9fbb2 */
  if (C.zf) goto L_10e9fbb2;
  /* 10e9fbac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fbb0 jne 0x10e9fbcc */
  if (!C.zf) goto L_10e9fbcc;
L_10e9fbb2:;
  /* 10e9fbb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9fbb4 call 0x10e9c500 */
  push32(0x10e9fbb9u); f_10e9c500();
  /* 10e9fbb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fbbc mov esi, eax */
  ESI = (EAX);
  /* 10e9fbbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9fbc0 call 0x10e9c500 */
  push32(0x10e9fbc5u); f_10e9c500();
  /* 10e9fbc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fbc8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fbca je 0x10e9fbe3 */
  if (C.zf) goto L_10e9fbe3;
L_10e9fbcc:;
  /* 10e9fbcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fbcf push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fbd0 call 0x10e9c500 */
  push32(0x10e9fbd5u); f_10e9c500();
  /* 10e9fbd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fbd8 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fbd9 call dword ptr [0x10ec028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec028c))), 0x10e9fbdfu);
  /* 10e9fbdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9fbe1 je 0x10e9fbec */
  if (C.zf) goto L_10e9fbec;
L_10e9fbe3:;
  /* 10e9fbe3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e9fbea jmp 0x10e9fbf5 */
  goto L_10e9fbf5;
L_10e9fbec:;
  /* 10e9fbec call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e9fbf2u);
  /* 10e9fbf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9fbf5:;
  /* 10e9fbf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fbf8 push edx */
  push32((uint32_t)(EDX));
  /* 10e9fbf9 call 0x10e9c420 */
  push32(0x10e9fbfeu); f_10e9c420();
  /* 10e9fbfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fc01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fc04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e9fc07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fc0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9fc0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e9fc10 mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e9fc17 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10e9fc1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fc20 je 0x10e9fc33 */
  if (C.zf) goto L_10e9fc33;
  /* 10e9fc22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fc25 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fc26 call 0x10e9adc0 */
  push32(0x10e9fc2bu); f_10e9adc0();
  /* 10e9fc2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fc2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9fc31 jmp 0x10e9fc35 */
  goto L_10e9fc35;
L_10e9fc33:;
  /* 10e9fc33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e9fc35:;
  /* 10e9fc35 pop esi */
  ESI = (pop32());
  /* 10e9fc36 mov esp, ebp */
  ESP = (EBP);
  /* 10e9fc38 pop ebp */
  EBP = (pop32());
  /* 10e9fc39 ret  */
  ESPCHK(0x10e9fb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc40 @ 0x10e9fc40 (146 bytes, 52 insns) */
void f_10e9fc40(void) {
  FTRACE(0x10e9fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fc41 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fc43 push ebx */
  push32((uint32_t)(EBX));
  /* 10e9fc44 push esi */
  push32((uint32_t)(ESI));
  /* 10e9fc45 push edi */
  push32((uint32_t)(EDI));
L_10e9fc46:;
  /* 10e9fc46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fc4a jne 0x10e9fc6a */
  if (!C.zf) goto L_10e9fc6a;
  /* 10e9fc4c push 0x10eba038 */
  push32((uint32_t)(0x10eba038u));
  /* 10e9fc51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9fc53 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e9fc55 push 0x10eba700 */
  push32((uint32_t)(0x10eba700u));
  /* 10e9fc5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9fc5c call 0x10e92050 */
  push32(0x10e9fc61u); f_10e92050();
  /* 10e9fc61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fc64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fc67 jne 0x10e9fc6a */
  if (!C.zf) goto L_10e9fc6a;
  /* 10e9fc69 int3  */
  x86_unimpl("int3 @ 0x10e9fc69");
L_10e9fc6a:;
  /* 10e9fc6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9fc6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9fc6e jne 0x10e9fc46 */
  if (!C.zf) goto L_10e9fc46;
  /* 10e9fc70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fc73 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9fc76 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9fc7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9fc7e je 0x10e9fccd */
  if (C.zf) goto L_10e9fccd;
  /* 10e9fc80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fc83 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9fc86 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9fc89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9fc8b je 0x10e9fccd */
  if (C.zf) goto L_10e9fccd;
  /* 10e9fc8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9fc8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fc92 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e9fc95 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fc96 call 0x10e93a20 */
  push32(0x10e9fc9bu); f_10e93a20();
  /* 10e9fc9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fc9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fca1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9fca4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9fcaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fcad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e9fcb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fcb3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e9fcb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fcbc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e9fcc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9fcc6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10e9fccd:;
  /* 10e9fccd pop edi */
  EDI = (pop32());
  /* 10e9fcce pop esi */
  ESI = (pop32());
  /* 10e9fccf pop ebx */
  EBX = (pop32());
  /* 10e9fcd0 pop ebp */
  EBP = (pop32());
  /* 10e9fcd1 ret  */
  ESPCHK(0x10e9fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fce0 @ 0x10e9fce0 (289 bytes, 97 insns) */
void f_10e9fce0(void) {
  FTRACE(0x10e9fce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fce3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9fce6 push esi */
  push32((uint32_t)(ESI));
  /* 10e9fce7 mov eax, dword ptr [0x10ebdca8] */
  EAX = (r32((uint32_t)(0x10ebdca8)));
  /* 10e9fcec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9fcef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9fcf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9fcfd jmp 0x10e9fd08 */
  goto L_10e9fd08;
L_10e9fcff:;
  /* 10e9fcff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fd02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e9fd08:;
  /* 10e9fd08 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fd0c jae 0x10e9fd41 */
  if (!C.cf) goto L_10e9fd41;
  /* 10e9fd0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fd11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fd14 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9fd17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fd18 call 0x10e95dc0 */
  push32(0x10e9fd1du); f_10e95dc0();
  /* 10e9fd1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd20 mov esi, eax */
  ESI = (EAX);
  /* 10e9fd22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fd25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fd28 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e9fd2c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fd2d call 0x10e95dc0 */
  push32(0x10e9fd32u); f_10e95dc0();
  /* 10e9fd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd38 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e9fd3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9fd3f jmp 0x10e9fcff */
  goto L_10e9fcff;
L_10e9fd41:;
  /* 10e9fd41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9fd44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd47 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fd48 call 0x10e92f70 */
  push32(0x10e9fd4du); f_10e92f70();
  /* 10e9fd4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9fd53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fd57 je 0x10e9fdf9 */
  if (C.zf) goto L_10e9fdf9;
  /* 10e9fd5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fd60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9fd63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9fd6a jmp 0x10e9fd75 */
  goto L_10e9fd75;
L_10e9fd6c:;
  /* 10e9fd6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fd6f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd72 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e9fd75:;
  /* 10e9fd75 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fd79 jae 0x10e9fdea */
  if (!C.cf) goto L_10e9fdea;
  /* 10e9fd7b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fd7e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e9fd81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fd84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fd87 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9fd8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fd8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fd90 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e9fd93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fd94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fd97 push edx */
  push32((uint32_t)(EDX));
  /* 10e9fd98 call 0x10e95f40 */
  push32(0x10e9fd9du); f_10e95f40();
  /* 10e9fd9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fda0 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fda1 call 0x10e95dc0 */
  push32(0x10e9fda6u); f_10e95dc0();
  /* 10e9fda6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fda9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fdac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fdae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9fdb1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fdb4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e9fdb7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fdba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fdbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e9fdc0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fdc3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fdc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10e9fdca push eax */
  push32((uint32_t)(EAX));
  /* 10e9fdcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fdce push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fdcf call 0x10e95f40 */
  push32(0x10e9fdd4u); f_10e95f40();
  /* 10e9fdd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fdd7 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fdd8 call 0x10e95dc0 */
  push32(0x10e9fdddu); f_10e95dc0();
  /* 10e9fddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fde0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fde3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fde5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e9fde8 jmp 0x10e9fd6c */
  goto L_10e9fd6c;
L_10e9fdea:;
  /* 10e9fdea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fded mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e9fdf0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fdf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fdf6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e9fdf9:;
  /* 10e9fdf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fdfc pop esi */
  ESI = (pop32());
  /* 10e9fdfd mov esp, ebp */
  ESP = (EBP);
  /* 10e9fdff pop ebp */
  EBP = (pop32());
  /* 10e9fe00 ret  */
  ESPCHK(0x10e9fce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe10 @ 0x10e9fe10 (291 bytes, 97 insns) */
void f_10e9fe10(void) {
  FTRACE(0x10e9fe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9fe10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e9fe11 mov ebp, esp */
  EBP = (ESP);
  /* 10e9fe13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9fe16 push esi */
  push32((uint32_t)(ESI));
  /* 10e9fe17 mov eax, dword ptr [0x10ebdca8] */
  EAX = (r32((uint32_t)(0x10ebdca8)));
  /* 10e9fe1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9fe1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e9fe26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9fe2d jmp 0x10e9fe38 */
  goto L_10e9fe38;
L_10e9fe2f:;
  /* 10e9fe2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fe32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e9fe38:;
  /* 10e9fe38 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fe3c jae 0x10e9fe72 */
  if (!C.cf) goto L_10e9fe72;
  /* 10e9fe3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fe41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fe44 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e9fe48 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fe49 call 0x10e95dc0 */
  push32(0x10e9fe4eu); f_10e95dc0();
  /* 10e9fe4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe51 mov esi, eax */
  ESI = (EAX);
  /* 10e9fe53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fe56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fe59 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10e9fe5d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fe5e call 0x10e95dc0 */
  push32(0x10e9fe63u); f_10e95dc0();
  /* 10e9fe63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe66 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe69 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e9fe6d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e9fe70 jmp 0x10e9fe2f */
  goto L_10e9fe2f;
L_10e9fe72:;
  /* 10e9fe72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9fe75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe78 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fe79 call 0x10e92f70 */
  push32(0x10e9fe7eu); f_10e92f70();
  /* 10e9fe7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fe81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9fe84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9fe88 je 0x10e9ff2b */
  if (C.zf) goto L_10e9ff2b;
  /* 10e9fe8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9fe91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9fe94 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e9fe9b jmp 0x10e9fea6 */
  goto L_10e9fea6;
L_10e9fe9d:;
  /* 10e9fe9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fea0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fea3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e9fea6:;
  /* 10e9fea6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9feaa jae 0x10e9ff1c */
  if (!C.cf) goto L_10e9ff1c;
  /* 10e9feac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9feaf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e9feb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9feb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9feb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9febb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9febe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fec1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e9fec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9fec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fec9 push edx */
  push32((uint32_t)(EDX));
  /* 10e9feca call 0x10e95f40 */
  push32(0x10e9fecfu); f_10e95f40();
  /* 10e9fecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fed2 push eax */
  push32((uint32_t)(EAX));
  /* 10e9fed3 call 0x10e95dc0 */
  push32(0x10e9fed8u); f_10e95dc0();
  /* 10e9fed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fedb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fede add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9fee0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9fee3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9fee6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e9fee9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9feec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9feef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e9fef2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9fef5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9fef8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e9fefc push eax */
  push32((uint32_t)(EAX));
  /* 10e9fefd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9ff00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9ff01 call 0x10e95f40 */
  push32(0x10e9ff06u); f_10e95f40();
  /* 10e9ff06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff09 push eax */
  push32((uint32_t)(EAX));
  /* 10e9ff0a call 0x10e95dc0 */
  push32(0x10e9ff0fu); f_10e95dc0();
  /* 10e9ff0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9ff15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e9ff1a jmp 0x10e9fe9d */
  goto L_10e9fe9d;
L_10e9ff1c:;
  /* 10e9ff1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9ff1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e9ff22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9ff25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9ff28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e9ff2b:;
  /* 10e9ff2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9ff2e pop esi */
  ESI = (pop32());
  /* 10e9ff2f mov esp, ebp */
  ESP = (EBP);
  /* 10e9ff31 pop ebp */
  EBP = (pop32());
  /* 10e9ff32 ret  */
  ESPCHK(0x10e9fe10u, _esp0);
  ESP += 4; return;
}

