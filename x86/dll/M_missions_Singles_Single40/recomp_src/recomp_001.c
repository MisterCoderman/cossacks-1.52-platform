#include "recomp.h"

/* FUN_100041d0 @ 0x116941d0 (115 bytes, 38 insns) */
void f_116941d0(void) {
  FTRACE(0x116941d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116941d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116941d1 mov ebp, esp */
  EBP = (ESP);
  /* 116941d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116941d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116941d7 push esi */
  push32((uint32_t)(ESI));
  /* 116941d8 push edi */
  push32((uint32_t)(EDI));
  /* 116941d9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 116941dc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 116941e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116941e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116941e8 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 116941ec fild dword ptr [0x116d0354] */
  fpu_push((double)(int32_t)r32((uint32_t)(0x116d0354)));
  /* 116941f2 fidiv dword ptr [0x116d00c8] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(0x116d00c8)));
  /* 116941f8 fstp dword ptr [ebp - 8] */
  wf32((uint32_t)(EBP + -0x8), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 116941fb fld dword ptr [ebp - 8] */
  fpu_push((double)rf32((uint32_t)(EBP + -0x8)));
  /* 116941fe fcomp dword ptr [0x116ca04c] */
  fpu_cmp(FPU_ST(0), (double)rf32((uint32_t)(0x116ca04c)));
  (void)fpu_pop();
  /* 11694204 fnstsw ax */
  AX = fpu_status();
  /* 11694206 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11694209 je 0x11694217 */
  if (C.zf) goto L_11694217;
  /* 1169420b fld dword ptr [0x116ca04c] */
  fpu_push((double)rf32((uint32_t)(0x116ca04c)));
  /* 11694211 fdiv dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / ((double)rf32((uint32_t)(EBP + -0x8)));
  /* 11694214 fstp dword ptr [ebp - 8] */
  wf32((uint32_t)(EBP + -0x8), (float)FPU_ST(0));
  (void)fpu_pop();
L_11694217:;
  /* 11694217 fld dword ptr [ebp - 8] */
  fpu_push((double)rf32((uint32_t)(EBP + -0x8)));
  /* 1169421a fild dword ptr [0x116d0350] */
  fpu_push((double)(int32_t)r32((uint32_t)(0x116d0350)));
  /* 11694220 fmul qword ptr [0x116ca798] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x116ca798)));
  /* 11694226 fsubr qword ptr [0x116ca788] */
  FPU_ST(0) = (rf64((uint32_t)(0x116ca788))) - FPU_ST(0);
  /* 1169422c fcompp  */
  fpu_cmp(FPU_ST(0), FPU_ST(1));
  (void)fpu_pop();
  (void)fpu_pop();
  /* 1169422e fnstsw ax */
  AX = fpu_status();
  /* 11694230 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11694233 je 0x11694239 */
  if (C.zf) goto L_11694239;
  /* 11694235 mov byte ptr [ebp - 4], 1 */
  w8((uint32_t)(EBP + -0x4), (0x1u));
L_11694239:;
  /* 11694239 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 1169423c pop edi */
  EDI = (pop32());
  /* 1169423d pop esi */
  ESI = (pop32());
  /* 1169423e pop ebx */
  EBX = (pop32());
  /* 1169423f mov esp, ebp */
  ESP = (EBP);
  /* 11694241 pop ebp */
  EBP = (pop32());
  /* 11694242 ret  */
  ESPCHK(0x116941d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x11694260 (683 bytes, 205 insns) */
void f_11694260(void) {
  FTRACE(0x11694260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11694260 push ebp */
  push32((uint32_t)(EBP));
  /* 11694261 mov ebp, esp */
  EBP = (ESP);
  /* 11694263 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694266 push ebx */
  push32((uint32_t)(EBX));
  /* 11694267 push esi */
  push32((uint32_t)(ESI));
  /* 11694268 push edi */
  push32((uint32_t)(EDI));
  /* 11694269 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 1169426c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 11694271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11694276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11694278 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1169427a push 0x116d0120 */
  push32((uint32_t)(0x116d0120u));
  /* 1169427f call 0x11691145 */
  push32(0x11694284u); f_11691145();
  /* 11694284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694287 mov esi, esp */
  ESI = (ESP);
  /* 11694289 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169428b push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 11694290 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694292 call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11694298u);
  /* 11694298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169429b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169429d call 0x11699d90 */
  push32(0x116942a2u); f_11699d90();
  /* 116942a2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116942a4 push 0x116d0028 */
  push32((uint32_t)(0x116d0028u));
  /* 116942a9 call 0x11691145 */
  push32(0x116942aeu); f_11691145();
  /* 116942ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116942b1 mov esi, esp */
  ESI = (ESP);
  /* 116942b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116942b5 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 116942ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116942bc call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x116942c2u);
  /* 116942c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116942c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116942c7 call 0x11699d90 */
  push32(0x116942ccu); f_11699d90();
  /* 116942cc mov esi, esp */
  ESI = (ESP);
  /* 116942ce push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 116942d3 push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 116942d8 call dword ptr [0x116d354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d354c))), 0x116942deu);
  /* 116942de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116942e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116942e3 call 0x11699d90 */
  push32(0x116942e8u); f_11699d90();
  /* 116942e8 push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 116942ed call 0x1169124e */
  push32(0x116942f2u); f_1169124e();
  /* 116942f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116942f5 mov esi, esp */
  ESI = (ESP);
  /* 116942f7 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 116942fc call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11694302u);
  /* 11694302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694307 call 0x11699d90 */
  push32(0x1169430cu); f_11699d90();
  /* 1169430c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169430f mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11694316 jmp 0x11694321 */
  goto L_11694321;
L_11694318:;
  /* 11694318 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1169431b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169431e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11694321:;
  /* 11694321 mov ecx, 7 */
  ECX = (0x7u);
  /* 11694326 sub ecx, dword ptr [0x116d0350] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d0350))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169432c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169432f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694330 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11694332 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694335 jge 0x11694380 */
  if ((C.sf==C.of)) goto L_11694380;
  /* 11694337 mov esi, esp */
  ESI = (ESP);
  /* 11694339 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 1169433c push edx */
  push32((uint32_t)(EDX));
  /* 1169433d call 0x1169a790 */
  push32(0x11694342u); f_1169a790();
  /* 11694342 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694343 idiv dword ptr [ebp - 4] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x4))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11694346 push edx */
  push32((uint32_t)(EDX));
  /* 11694347 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 1169434c call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11694352u);
  /* 11694352 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694357 call 0x11699d90 */
  push32(0x1169435cu); f_11699d90();
  /* 1169435c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1169435f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694364 mov esi, esp */
  ESI = (ESP);
  /* 11694366 push eax */
  push32((uint32_t)(EAX));
  /* 11694367 push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 1169436c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169436e call dword ptr [0x116d3550] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3550))), 0x11694374u);
  /* 11694374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694379 call 0x11699d90 */
  push32(0x1169437eu); f_11699d90();
  /* 1169437e jmp 0x11694318 */
  goto L_11694318;
L_11694380:;
  /* 11694380 mov esi, esp */
  ESI = (ESP);
  /* 11694382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694384 push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 11694389 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x1169438fu);
  /* 1169438f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694394 call 0x11699d90 */
  push32(0x11694399u); f_11699d90();
  /* 11694399 mov esi, esp */
  ESI = (ESP);
  /* 1169439b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169439d call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x116943a3u);
  /* 116943a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116943a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116943a8 call 0x11699d90 */
  push32(0x116943adu); f_11699d90();
  /* 116943ad mov esi, esp */
  ESI = (ESP);
  /* 116943af push 3 */
  push32((uint32_t)(0x3u));
  /* 116943b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116943b3 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x116943b9u);
  /* 116943b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116943bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116943be call 0x11699d90 */
  push32(0x116943c3u); f_11699d90();
  /* 116943c3 push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 116943c8 call 0x1169124e */
  push32(0x116943cdu); f_1169124e();
  /* 116943cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116943d0 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116943d2 push 0x116cff58 */
  push32((uint32_t)(0x116cff58u));
  /* 116943d7 call 0x11691145 */
  push32(0x116943dcu); f_11691145();
  /* 116943dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116943df mov esi, esp */
  ESI = (ESP);
  /* 116943e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116943e3 push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 116943e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116943ea call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x116943f0u);
  /* 116943f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116943f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116943f5 call 0x11699d90 */
  push32(0x116943fau); f_11699d90();
  /* 116943fa push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116943fc push 0x116d01a8 */
  push32((uint32_t)(0x116d01a8u));
  /* 11694401 call 0x11691145 */
  push32(0x11694406u); f_11691145();
  /* 11694406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694409 mov esi, esp */
  ESI = (ESP);
  /* 1169440b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169440d push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 11694412 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694414 call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x1169441au);
  /* 1169441a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169441d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169441f call 0x11699d90 */
  push32(0x11694424u); f_11699d90();
  /* 11694424 mov esi, esp */
  ESI = (ESP);
  /* 11694426 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 1169442b push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 11694430 call dword ptr [0x116d354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d354c))), 0x11694436u);
  /* 11694436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169443b call 0x11699d90 */
  push32(0x11694440u); f_11699d90();
  /* 11694440 mov esi, esp */
  ESI = (ESP);
  /* 11694442 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 11694447 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x1169444du);
  /* 1169444d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694452 call 0x11699d90 */
  push32(0x11694457u); f_11699d90();
  /* 11694457 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169445a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11694461 jmp 0x1169446c */
  goto L_1169446c;
L_11694463:;
  /* 11694463 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11694466 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11694469 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_1169446c:;
  /* 1169446c mov ecx, 6 */
  ECX = (0x6u);
  /* 11694471 sub ecx, dword ptr [0x116d0350] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d0350))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169447a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169447b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169447d cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694480 jge 0x116944cb */
  if ((C.sf==C.of)) goto L_116944cb;
  /* 11694482 mov esi, esp */
  ESI = (ESP);
  /* 11694484 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11694487 push edx */
  push32((uint32_t)(EDX));
  /* 11694488 call 0x1169a790 */
  push32(0x1169448du); f_1169a790();
  /* 1169448d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169448e idiv dword ptr [ebp - 4] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x4))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11694491 push edx */
  push32((uint32_t)(EDX));
  /* 11694492 push 0x116d02a0 */
  push32((uint32_t)(0x116d02a0u));
  /* 11694497 call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x1169449du);
  /* 1169449d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116944a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116944a2 call 0x11699d90 */
  push32(0x116944a7u); f_11699d90();
  /* 116944a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116944aa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116944af mov esi, esp */
  ESI = (ESP);
  /* 116944b1 push eax */
  push32((uint32_t)(EAX));
  /* 116944b2 push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 116944b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116944b9 call dword ptr [0x116d3550] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3550))), 0x116944bfu);
  /* 116944bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116944c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116944c4 call 0x11699d90 */
  push32(0x116944c9u); f_11699d90();
  /* 116944c9 jmp 0x11694463 */
  goto L_11694463;
L_116944cb:;
  /* 116944cb mov esi, esp */
  ESI = (ESP);
  /* 116944cd push 0 */
  push32((uint32_t)(0x0u));
  /* 116944cf push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 116944d4 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116944dau);
  /* 116944da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116944dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116944df call 0x11699d90 */
  push32(0x116944e4u); f_11699d90();
  /* 116944e4 mov esi, esp */
  ESI = (ESP);
  /* 116944e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 116944e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116944ea call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x116944f0u);
  /* 116944f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116944f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116944f5 call 0x11699d90 */
  push32(0x116944fau); f_11699d90();
  /* 116944fa pop edi */
  EDI = (pop32());
  /* 116944fb pop esi */
  ESI = (pop32());
  /* 116944fc pop ebx */
  EBX = (pop32());
  /* 116944fd add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694500 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694502 call 0x11699d90 */
  push32(0x11694507u); f_11699d90();
  /* 11694507 mov esp, ebp */
  ESP = (EBP);
  /* 11694509 pop ebp */
  EBP = (pop32());
  /* 1169450a ret  */
  ESPCHK(0x11694260u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x116945c0 (135 bytes, 47 insns) */
void f_116945c0(void) {
  FTRACE(0x116945c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116945c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116945c1 mov ebp, esp */
  EBP = (ESP);
  /* 116945c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116945c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116945c7 push esi */
  push32((uint32_t)(ESI));
  /* 116945c8 push edi */
  push32((uint32_t)(EDI));
  /* 116945c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 116945cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 116945d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116945d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116945d8 mov esi, esp */
  ESI = (ESP);
  /* 116945da push 0 */
  push32((uint32_t)(0x0u));
  /* 116945dc push 0x116d0390 */
  push32((uint32_t)(0x116d0390u));
  /* 116945e1 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116945e7u);
  /* 116945e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116945ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116945ec call 0x11699d90 */
  push32(0x116945f1u); f_11699d90();
  /* 116945f1 mov esi, esp */
  ESI = (ESP);
  /* 116945f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116945f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 116945f7 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x116945fdu);
  /* 116945fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694602 call 0x11699d90 */
  push32(0x11694607u); f_11699d90();
  /* 11694607 mov esi, esp */
  ESI = (ESP);
  /* 11694609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169460b push 0x116d0278 */
  push32((uint32_t)(0x116d0278u));
  /* 11694610 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11694616u);
  /* 11694616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169461b call 0x11699d90 */
  push32(0x11694620u); f_11699d90();
  /* 11694620 mov esi, esp */
  ESI = (ESP);
  /* 11694622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694624 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694626 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x1169462cu);
  /* 1169462c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169462f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694631 call 0x11699d90 */
  push32(0x11694636u); f_11699d90();
  /* 11694636 pop edi */
  EDI = (pop32());
  /* 11694637 pop esi */
  ESI = (pop32());
  /* 11694638 pop ebx */
  EBX = (pop32());
  /* 11694639 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169463c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169463e call 0x11699d90 */
  push32(0x11694643u); f_11699d90();
  /* 11694643 mov esp, ebp */
  ESP = (EBP);
  /* 11694645 pop ebp */
  EBP = (pop32());
  /* 11694646 ret  */
  ESPCHK(0x116945c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x11694670 (236 bytes, 79 insns) */
void f_11694670(void) {
  FTRACE(0x11694670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11694670 push ebp */
  push32((uint32_t)(EBP));
  /* 11694671 mov ebp, esp */
  EBP = (ESP);
  /* 11694673 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694676 push ebx */
  push32((uint32_t)(EBX));
  /* 11694677 push esi */
  push32((uint32_t)(ESI));
  /* 11694678 push edi */
  push32((uint32_t)(EDI));
  /* 11694679 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1169467c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11694681 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11694686 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11694688 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1169468a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169468d push eax */
  push32((uint32_t)(EAX));
  /* 1169468e call 0x11691145 */
  push32(0x11694693u); f_11691145();
  /* 11694693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694696 mov esi, esp */
  ESI = (ESP);
  /* 11694698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169469a call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x116946a0u);
  /* 116946a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116946a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116946a5 call 0x11699d90 */
  push32(0x116946aau); f_11699d90();
  /* 116946aa mov esi, esp */
  ESI = (ESP);
  /* 116946ac push 3 */
  push32((uint32_t)(0x3u));
  /* 116946ae push 0 */
  push32((uint32_t)(0x0u));
  /* 116946b0 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x116946b6u);
  /* 116946b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116946b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116946bb call 0x11699d90 */
  push32(0x116946c0u); f_11699d90();
  /* 116946c0 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116946c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116946c5 push ecx */
  push32((uint32_t)(ECX));
  /* 116946c6 call 0x11691145 */
  push32(0x116946cbu); f_11691145();
  /* 116946cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116946ce call 0x1169a790 */
  push32(0x116946d3u); f_1169a790();
  /* 116946d3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116946d4 mov ecx, 0x3c8c */
  ECX = (0x3c8cu);
  /* 116946d9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116946db mov word ptr [0x116d0280], dx */
  w16((uint32_t)(0x116d0280), (DX));
  /* 116946e2 call 0x1169a790 */
  push32(0x116946e7u); f_1169a790();
  /* 116946e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116946e8 mov ecx, 0x3c8c */
  ECX = (0x3c8cu);
  /* 116946ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116946ef mov word ptr [0x116d0282], dx */
  w16((uint32_t)(0x116d0282), (DX));
  /* 116946f6 mov esi, esp */
  ESI = (ESP);
  /* 116946f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116946fa call 0x1169a790 */
  push32(0x116946ffu); f_1169a790();
  /* 116946ff cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694700 mov ecx, 0xff */
  ECX = (0xffu);
  /* 11694705 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11694707 push edx */
  push32((uint32_t)(EDX));
  /* 11694708 push 0x116d0280 */
  push32((uint32_t)(0x116d0280u));
  /* 1169470d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169470f call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11694715u);
  /* 11694715 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169471a call 0x11699d90 */
  push32(0x1169471fu); f_11699d90();
  /* 1169471f mov esi, esp */
  ESI = (ESP);
  /* 11694721 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694723 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694725 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x1169472bu);
  /* 1169472b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169472e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694730 call 0x11699d90 */
  push32(0x11694735u); f_11699d90();
  /* 11694735 mov esi, esp */
  ESI = (ESP);
  /* 11694737 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11694739 push 3 */
  push32((uint32_t)(0x3u));
  /* 1169473b call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x11694741u);
  /* 11694741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694744 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694746 call 0x11699d90 */
  push32(0x1169474bu); f_11699d90();
  /* 1169474b pop edi */
  EDI = (pop32());
  /* 1169474c pop esi */
  ESI = (pop32());
  /* 1169474d pop ebx */
  EBX = (pop32());
  /* 1169474e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694751 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694753 call 0x11699d90 */
  push32(0x11694758u); f_11699d90();
  /* 11694758 mov esp, ebp */
  ESP = (EBP);
  /* 1169475a pop ebp */
  EBP = (pop32());
  /* 1169475b ret  */
  ESPCHK(0x11694670u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x116947a0 (3400 bytes, 1021 insns) */
void f_116947a0(void) {
  FTRACE(0x116947a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116947a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116947a1 mov ebp, esp */
  EBP = (ESP);
  /* 116947a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116947a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116947a7 push esi */
  push32((uint32_t)(ESI));
  /* 116947a8 push edi */
  push32((uint32_t)(EDI));
  /* 116947a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 116947ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 116947b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116947b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116947b8 mov esi, esp */
  ESI = (ESP);
  /* 116947ba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 116947bc call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x116947c2u);
  /* 116947c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116947c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116947c7 call 0x11699d90 */
  push32(0x116947ccu); f_11699d90();
  /* 116947cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116947d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116947d3 je 0x11694a85 */
  if (C.zf) goto L_11694a85;
  /* 116947d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116947db call 0x1169a8c0 */
  push32(0x116947e0u); f_1169a8c0();
  /* 116947e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116947e3 push eax */
  push32((uint32_t)(EAX));
  /* 116947e4 call 0x1169a780 */
  push32(0x116947e9u); f_1169a780();
  /* 116947e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116947ec mov esi, esp */
  ESI = (ESP);
  /* 116947ee push 0 */
  push32((uint32_t)(0x0u));
  /* 116947f0 call dword ptr [0x116d3508] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3508))), 0x116947f6u);
  /* 116947f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116947f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116947fb call 0x11699d90 */
  push32(0x11694800u); f_11699d90();
  /* 11694800 mov dword ptr [0x116d0350], eax */
  w32((uint32_t)(0x116d0350), (EAX));
  /* 11694805 mov esi, esp */
  ESI = (ESP);
  /* 11694807 push 9 */
  push32((uint32_t)(0x9u));
  /* 11694809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169480b call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x11694811u);
  /* 11694811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694816 call 0x11699d90 */
  push32(0x1169481bu); f_11699d90();
  /* 1169481b mov esi, esp */
  ESI = (ESP);
  /* 1169481d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1169481f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11694821 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11694827u);
  /* 11694827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169482a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169482c call 0x11699d90 */
  push32(0x11694831u); f_11699d90();
  /* 11694831 mov esi, esp */
  ESI = (ESP);
  /* 11694833 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694835 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11694837 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x1169483du);
  /* 1169483d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694842 call 0x11699d90 */
  push32(0x11694847u); f_11699d90();
  /* 11694847 mov esi, esp */
  ESI = (ESP);
  /* 11694849 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1169484e push 3 */
  push32((uint32_t)(0x3u));
  /* 11694850 push 1 */
  push32((uint32_t)(0x1u));
  /* 11694852 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694858u);
  /* 11694858 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169485b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169485d call 0x11699d90 */
  push32(0x11694862u); f_11699d90();
  /* 11694862 mov esi, esp */
  ESI = (ESP);
  /* 11694864 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11694869 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169486b push 1 */
  push32((uint32_t)(0x1u));
  /* 1169486d call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694873u);
  /* 11694873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694878 call 0x11699d90 */
  push32(0x1169487du); f_11699d90();
  /* 1169487d mov esi, esp */
  ESI = (ESP);
  /* 1169487f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11694884 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694886 push 1 */
  push32((uint32_t)(0x1u));
  /* 11694888 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x1169488eu);
  /* 1169488e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694893 call 0x11699d90 */
  push32(0x11694898u); f_11699d90();
  /* 11694898 mov esi, esp */
  ESI = (ESP);
  /* 1169489a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1169489f push 2 */
  push32((uint32_t)(0x2u));
  /* 116948a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116948a3 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116948a9u);
  /* 116948a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116948ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116948ae call 0x11699d90 */
  push32(0x116948b3u); f_11699d90();
  /* 116948b3 mov esi, esp */
  ESI = (ESP);
  /* 116948b5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 116948ba push 5 */
  push32((uint32_t)(0x5u));
  /* 116948bc push 1 */
  push32((uint32_t)(0x1u));
  /* 116948be call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116948c4u);
  /* 116948c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116948c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116948c9 call 0x11699d90 */
  push32(0x116948ceu); f_11699d90();
  /* 116948ce mov esi, esp */
  ESI = (ESP);
  /* 116948d0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 116948d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116948d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116948d9 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116948dfu);
  /* 116948df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116948e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116948e4 call 0x11699d90 */
  push32(0x116948e9u); f_11699d90();
  /* 116948e9 mov esi, esp */
  ESI = (ESP);
  /* 116948eb push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 116948f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 116948f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 116948f4 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116948fau);
  /* 116948fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116948fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116948ff call 0x11699d90 */
  push32(0x11694904u); f_11699d90();
  /* 11694904 mov esi, esp */
  ESI = (ESP);
  /* 11694906 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1169490b push 1 */
  push32((uint32_t)(0x1u));
  /* 1169490d push 3 */
  push32((uint32_t)(0x3u));
  /* 1169490f call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694915u);
  /* 11694915 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169491a call 0x11699d90 */
  push32(0x1169491fu); f_11699d90();
  /* 1169491f mov esi, esp */
  ESI = (ESP);
  /* 11694921 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11694926 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694928 push 3 */
  push32((uint32_t)(0x3u));
  /* 1169492a call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694930u);
  /* 11694930 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694935 call 0x11699d90 */
  push32(0x1169493au); f_11699d90();
  /* 1169493a mov esi, esp */
  ESI = (ESP);
  /* 1169493c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11694941 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694943 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694945 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x1169494bu);
  /* 1169494b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169494e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694950 call 0x11699d90 */
  push32(0x11694955u); f_11699d90();
  /* 11694955 mov esi, esp */
  ESI = (ESP);
  /* 11694957 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1169495c push 5 */
  push32((uint32_t)(0x5u));
  /* 1169495e push 3 */
  push32((uint32_t)(0x3u));
  /* 11694960 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694966u);
  /* 11694966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169496b call 0x11699d90 */
  push32(0x11694970u); f_11699d90();
  /* 11694970 mov esi, esp */
  ESI = (ESP);
  /* 11694972 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11694977 push 4 */
  push32((uint32_t)(0x4u));
  /* 11694979 push 3 */
  push32((uint32_t)(0x3u));
  /* 1169497b call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694981u);
  /* 11694981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694986 call 0x11699d90 */
  push32(0x1169498bu); f_11699d90();
  /* 1169498b mov eax, dword ptr [0x116d0350] */
  EAX = (r32((uint32_t)(0x116d0350)));
  /* 11694990 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11694996 mov ecx, 0x2af8 */
  ECX = (0x2af8u);
  /* 1169499b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169499d mov esi, esp */
  ESI = (ESP);
  /* 1169499f push ecx */
  push32((uint32_t)(ECX));
  /* 116949a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 116949a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116949a4 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116949aau);
  /* 116949aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116949ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116949af call 0x11699d90 */
  push32(0x116949b4u); f_11699d90();
  /* 116949b4 mov edx, dword ptr [0x116d0350] */
  EDX = (r32((uint32_t)(0x116d0350)));
  /* 116949ba imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116949c0 mov eax, 0x2af8 */
  EAX = (0x2af8u);
  /* 116949c5 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116949c7 mov esi, esp */
  ESI = (ESP);
  /* 116949c9 push eax */
  push32((uint32_t)(EAX));
  /* 116949ca push 1 */
  push32((uint32_t)(0x1u));
  /* 116949cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116949ce call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116949d4u);
  /* 116949d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116949d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116949d9 call 0x11699d90 */
  push32(0x116949deu); f_11699d90();
  /* 116949de mov ecx, dword ptr [0x116d0350] */
  ECX = (r32((uint32_t)(0x116d0350)));
  /* 116949e4 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116949ea mov edx, 0x2af8 */
  EDX = (0x2af8u);
  /* 116949ef sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116949f1 mov esi, esp */
  ESI = (ESP);
  /* 116949f3 push edx */
  push32((uint32_t)(EDX));
  /* 116949f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116949f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116949f8 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x116949feu);
  /* 116949fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694a03 call 0x11699d90 */
  push32(0x11694a08u); f_11699d90();
  /* 11694a08 mov eax, dword ptr [0x116d0350] */
  EAX = (r32((uint32_t)(0x116d0350)));
  /* 11694a0d imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11694a13 mov ecx, 0x2af8 */
  ECX = (0x2af8u);
  /* 11694a18 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694a1a mov esi, esp */
  ESI = (ESP);
  /* 11694a1c push ecx */
  push32((uint32_t)(ECX));
  /* 11694a1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11694a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11694a21 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694a27u);
  /* 11694a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694a2c call 0x11699d90 */
  push32(0x11694a31u); f_11699d90();
  /* 11694a31 mov edx, dword ptr [0x116d0350] */
  EDX = (r32((uint32_t)(0x116d0350)));
  /* 11694a37 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11694a3d mov eax, 0x2af8 */
  EAX = (0x2af8u);
  /* 11694a42 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694a44 mov esi, esp */
  ESI = (ESP);
  /* 11694a46 push eax */
  push32((uint32_t)(EAX));
  /* 11694a47 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694a4b call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694a51u);
  /* 11694a51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694a56 call 0x11699d90 */
  push32(0x11694a5bu); f_11699d90();
  /* 11694a5b mov ecx, dword ptr [0x116d0350] */
  ECX = (r32((uint32_t)(0x116d0350)));
  /* 11694a61 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11694a67 mov edx, 0x2af8 */
  EDX = (0x2af8u);
  /* 11694a6c sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694a6e mov esi, esp */
  ESI = (ESP);
  /* 11694a70 push edx */
  push32((uint32_t)(EDX));
  /* 11694a71 push 4 */
  push32((uint32_t)(0x4u));
  /* 11694a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694a75 call dword ptr [0x116d3514] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3514))), 0x11694a7bu);
  /* 11694a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694a80 call 0x11699d90 */
  push32(0x11694a85u); f_11699d90();
L_11694a85:;
  /* 11694a85 mov esi, esp */
  ESI = (ESP);
  /* 11694a87 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11694a89 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x11694a8fu);
  /* 11694a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694a94 call 0x11699d90 */
  push32(0x11694a99u); f_11699d90();
  /* 11694a99 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694a9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694aa0 je 0x11694b81 */
  if (C.zf) goto L_11694b81;
  /* 11694aa6 mov esi, esp */
  ESI = (ESP);
  /* 11694aa8 push 0x116ca80c */
  push32((uint32_t)(0x116ca80cu));
  /* 11694aad call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11694ab3u);
  /* 11694ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ab6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ab8 call 0x11699d90 */
  push32(0x11694abdu); f_11699d90();
  /* 11694abd mov esi, esp */
  ESI = (ESP);
  /* 11694abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11694ac1 push 0x116d00c0 */
  push32((uint32_t)(0x116d00c0u));
  /* 11694ac6 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11694accu);
  /* 11694acc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694acf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ad1 call 0x11699d90 */
  push32(0x11694ad6u); f_11699d90();
  /* 11694ad6 mov esi, esp */
  ESI = (ESP);
  /* 11694ad8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694ada call dword ptr [0x116d3520] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3520))), 0x11694ae0u);
  /* 11694ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ae5 call 0x11699d90 */
  push32(0x11694aeau); f_11699d90();
  /* 11694aea call 0x1169106e */
  push32(0x11694aefu); f_1169106e();
  /* 11694aef call 0x116910c3 */
  push32(0x11694af4u); f_116910c3();
  /* 11694af4 push 0x116d03a0 */
  push32((uint32_t)(0x116d03a0u));
  /* 11694af9 mov ecx, 0x116d0358 */
  ECX = (0x116d0358u);
  /* 11694afe call 0x116910c8 */
  push32(0x11694b03u); f_116910c8();
  /* 11694b03 mov esi, esp */
  ESI = (ESP);
  /* 11694b05 mov eax, dword ptr [0x116d0350] */
  EAX = (r32((uint32_t)(0x116d0350)));
  /* 11694b0a push eax */
  push32((uint32_t)(EAX));
  /* 11694b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11694b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11694b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11694b11 push 0x116ca800 */
  push32((uint32_t)(0x116ca800u));
  /* 11694b16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11694b18 call dword ptr [0x116d3524] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3524))), 0x11694b1eu);
  /* 11694b1e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694b23 call 0x11699d90 */
  push32(0x11694b28u); f_11699d90();
  /* 11694b28 mov ecx, 3 */
  ECX = (0x3u);
  /* 11694b2d sub ecx, dword ptr [0x116d0350] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d0350))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694b33 imul ecx, ecx, 0x190 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x190u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11694b39 add ecx, 0x7d0 */
  { uint32_t _a=(ECX),_b=(0x7d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11694b3f mov esi, esp */
  ESI = (ESP);
  /* 11694b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11694b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694b44 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11694b4au);
  /* 11694b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694b4f call 0x11699d90 */
  push32(0x11694b54u); f_11699d90();
  /* 11694b54 mov esi, esp */
  ESI = (ESP);
  /* 11694b56 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11694b5b push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11694b5d call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11694b63u);
  /* 11694b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694b68 call 0x11699d90 */
  push32(0x11694b6du); f_11699d90();
  /* 11694b6d mov dword ptr [0x116d0354], 0xa */
  w32((uint32_t)(0x116d0354), (0xau));
  /* 11694b77 mov dword ptr [0x116d00c8], 0xa */
  w32((uint32_t)(0x116d00c8), (0xau));
L_11694b81:;
  /* 11694b81 mov esi, esp */
  ESI = (ESP);
  /* 11694b83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11694b85 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11694b8bu);
  /* 11694b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694b90 call 0x11699d90 */
  push32(0x11694b95u); f_11699d90();
  /* 11694b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694b9c je 0x116954d7 */
  if (C.zf) goto L_116954d7;
  /* 11694ba2 mov esi, esp */
  ESI = (ESP);
  /* 11694ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694ba6 push 0x116d0298 */
  push32((uint32_t)(0x116d0298u));
  /* 11694bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11694bad call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11694bb3u);
  /* 11694bb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694bb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694bb8 call 0x11699d90 */
  push32(0x11694bbdu); f_11699d90();
  /* 11694bbd mov esi, esp */
  ESI = (ESP);
  /* 11694bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11694bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694bc3 push 0x116d00b8 */
  push32((uint32_t)(0x116d00b8u));
  /* 11694bc8 call dword ptr [0x116d3560] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3560))), 0x11694bceu);
  /* 11694bce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694bd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694bd3 call 0x11699d90 */
  push32(0x11694bd8u); f_11699d90();
  /* 11694bd8 mov esi, esp */
  ESI = (ESP);
  /* 11694bda push 0xa */
  push32((uint32_t)(0xau));
  /* 11694bdc call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11694be2u);
  /* 11694be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694be7 call 0x11699d90 */
  push32(0x11694becu); f_11699d90();
  /* 11694bec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694bf3 jne 0x11694c12 */
  if (!C.zf) goto L_11694c12;
  /* 11694bf5 mov esi, esp */
  ESI = (ESP);
  /* 11694bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11694bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694bfb mov edx, dword ptr [0x116d03b0] */
  EDX = (r32((uint32_t)(0x116d03b0)));
  /* 11694c01 push edx */
  push32((uint32_t)(EDX));
  /* 11694c02 call dword ptr [0x116d3560] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3560))), 0x11694c08u);
  /* 11694c08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c0d call 0x11699d90 */
  push32(0x11694c12u); f_11699d90();
L_11694c12:;
  /* 11694c12 mov esi, esp */
  ESI = (ESP);
  /* 11694c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694c16 call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x11694c1cu);
  /* 11694c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c21 call 0x11699d90 */
  push32(0x11694c26u); f_11699d90();
  /* 11694c26 mov esi, esp */
  ESI = (ESP);
  /* 11694c28 push 0xa */
  push32((uint32_t)(0xau));
  /* 11694c2a call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11694c30u);
  /* 11694c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c35 call 0x11699d90 */
  push32(0x11694c3au); f_11699d90();
  /* 11694c3a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694c41 je 0x116950f1 */
  if (C.zf) goto L_116950f1;
  /* 11694c47 mov esi, esp */
  ESI = (ESP);
  /* 11694c49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694c4b call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x11694c51u);
  /* 11694c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c56 call 0x11699d90 */
  push32(0x11694c5bu); f_11699d90();
  /* 11694c5b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694c62 je 0x116950f1 */
  if (C.zf) goto L_116950f1;
  /* 11694c68 call 0x11691235 */
  push32(0x11694c6du); f_11691235();
  /* 11694c6d mov esi, esp */
  ESI = (ESP);
  /* 11694c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11694c71 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11694c77u);
  /* 11694c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c7c call 0x11699d90 */
  push32(0x11694c81u); f_11699d90();
  /* 11694c81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11694c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11694c88 je 0x11695022 */
  if (C.zf) goto L_11695022;
  /* 11694c8e mov esi, esp */
  ESI = (ESP);
  /* 11694c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694c92 call dword ptr [0x116d3528] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3528))), 0x11694c98u);
  /* 11694c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694c9d call 0x11699d90 */
  push32(0x11694ca2u); f_11699d90();
  /* 11694ca2 mov esi, eax */
  ESI = (EAX);
  /* 11694ca4 mov edi, esp */
  EDI = (ESP);
  /* 11694ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11694ca8 call dword ptr [0x116d3528] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3528))), 0x11694caeu);
  /* 11694cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694cb1 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694cb3 call 0x11699d90 */
  push32(0x11694cb8u); f_11699d90();
  /* 11694cb8 mov ecx, eax */
  ECX = (EAX);
  /* 11694cba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11694cbd mov eax, esi */
  EAX = (ESI);
  /* 11694cbf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694cc0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11694cc2 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694cc5 jle 0x11695022 */
  if ((C.zf||C.sf!=C.of)) goto L_11695022;
  /* 11694ccb mov esi, esp */
  ESI = (ESP);
  /* 11694ccd push 3 */
  push32((uint32_t)(0x3u));
  /* 11694ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 11694cd1 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694cd7u);
  /* 11694cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694cda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694cdc call 0x11699d90 */
  push32(0x11694ce1u); f_11699d90();
  /* 11694ce1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694ce2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694ce4 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694ce6 mov esi, esp */
  ESI = (ESP);
  /* 11694ce8 push eax */
  push32((uint32_t)(EAX));
  /* 11694ce9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694ceb push 3 */
  push32((uint32_t)(0x3u));
  /* 11694ced call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694cf3u);
  /* 11694cf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694cf8 call 0x11699d90 */
  push32(0x11694cfdu); f_11699d90();
  /* 11694cfd mov esi, esp */
  ESI = (ESP);
  /* 11694cff push 1 */
  push32((uint32_t)(0x1u));
  /* 11694d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d03 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694d09u);
  /* 11694d09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d0e call 0x11699d90 */
  push32(0x11694d13u); f_11699d90();
  /* 11694d13 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694d14 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694d16 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694d18 mov esi, esp */
  ESI = (ESP);
  /* 11694d1a push eax */
  push32((uint32_t)(EAX));
  /* 11694d1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11694d1d push 3 */
  push32((uint32_t)(0x3u));
  /* 11694d1f call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694d25u);
  /* 11694d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d2a call 0x11699d90 */
  push32(0x11694d2fu); f_11699d90();
  /* 11694d2f mov esi, esp */
  ESI = (ESP);
  /* 11694d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d35 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694d3bu);
  /* 11694d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d40 call 0x11699d90 */
  push32(0x11694d45u); f_11699d90();
  /* 11694d45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694d46 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694d48 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694d4a mov esi, esp */
  ESI = (ESP);
  /* 11694d4c push eax */
  push32((uint32_t)(EAX));
  /* 11694d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d4f push 3 */
  push32((uint32_t)(0x3u));
  /* 11694d51 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694d57u);
  /* 11694d57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d5c call 0x11699d90 */
  push32(0x11694d61u); f_11699d90();
  /* 11694d61 mov esi, esp */
  ESI = (ESP);
  /* 11694d63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d67 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694d6du);
  /* 11694d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d72 call 0x11699d90 */
  push32(0x11694d77u); f_11699d90();
  /* 11694d77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694d78 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694d7a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694d7c mov esi, esp */
  ESI = (ESP);
  /* 11694d7e push eax */
  push32((uint32_t)(EAX));
  /* 11694d7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11694d81 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694d83 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694d89u);
  /* 11694d89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694d8e call 0x11699d90 */
  push32(0x11694d93u); f_11699d90();
  /* 11694d93 mov esi, esp */
  ESI = (ESP);
  /* 11694d95 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694d99 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694d9fu);
  /* 11694d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694da4 call 0x11699d90 */
  push32(0x11694da9u); f_11699d90();
  /* 11694da9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694daa sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694dac sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694dae mov esi, esp */
  ESI = (ESP);
  /* 11694db0 push eax */
  push32((uint32_t)(EAX));
  /* 11694db1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694db3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694db5 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694dbbu);
  /* 11694dbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694dc0 call 0x11699d90 */
  push32(0x11694dc5u); f_11699d90();
  /* 11694dc5 mov esi, esp */
  ESI = (ESP);
  /* 11694dc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11694dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694dcb call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694dd1u);
  /* 11694dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694dd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694dd6 call 0x11699d90 */
  push32(0x11694ddbu); f_11699d90();
  /* 11694ddb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694ddc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694dde sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694de0 mov esi, esp */
  ESI = (ESP);
  /* 11694de2 push eax */
  push32((uint32_t)(EAX));
  /* 11694de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11694de5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694de7 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694dedu);
  /* 11694ded add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694df2 call 0x11699d90 */
  push32(0x11694df7u); f_11699d90();
  /* 11694df7 mov esi, esp */
  ESI = (ESP);
  /* 11694df9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11694dfd call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694e03u);
  /* 11694e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e08 call 0x11699d90 */
  push32(0x11694e0du); f_11699d90();
  /* 11694e0d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694e0f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694e10 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694e12 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694e14 mov esi, esp */
  ESI = (ESP);
  /* 11694e16 push eax */
  push32((uint32_t)(EAX));
  /* 11694e17 push 3 */
  push32((uint32_t)(0x3u));
  /* 11694e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e1b call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694e21u);
  /* 11694e21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e26 call 0x11699d90 */
  push32(0x11694e2bu); f_11699d90();
  /* 11694e2b mov esi, esp */
  ESI = (ESP);
  /* 11694e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11694e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e31 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694e37u);
  /* 11694e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e3c call 0x11699d90 */
  push32(0x11694e41u); f_11699d90();
  /* 11694e41 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694e43 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694e44 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694e46 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694e48 mov esi, esp */
  ESI = (ESP);
  /* 11694e4a push eax */
  push32((uint32_t)(EAX));
  /* 11694e4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11694e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e4f call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694e55u);
  /* 11694e55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e5a call 0x11699d90 */
  push32(0x11694e5fu); f_11699d90();
  /* 11694e5f mov esi, esp */
  ESI = (ESP);
  /* 11694e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e65 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694e6bu);
  /* 11694e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e70 call 0x11699d90 */
  push32(0x11694e75u); f_11699d90();
  /* 11694e75 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694e77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694e78 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694e7a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694e7c mov esi, esp */
  ESI = (ESP);
  /* 11694e7e push eax */
  push32((uint32_t)(EAX));
  /* 11694e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e83 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694e89u);
  /* 11694e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694e8e call 0x11699d90 */
  push32(0x11694e93u); f_11699d90();
  /* 11694e93 mov esi, esp */
  ESI = (ESP);
  /* 11694e95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694e99 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694e9fu);
  /* 11694e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ea2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ea4 call 0x11699d90 */
  push32(0x11694ea9u); f_11699d90();
  /* 11694ea9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694eab cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694eac sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694eae sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694eb0 mov esi, esp */
  ESI = (ESP);
  /* 11694eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11694eb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11694eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694eb7 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694ebdu);
  /* 11694ebd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ec2 call 0x11699d90 */
  push32(0x11694ec7u); f_11699d90();
  /* 11694ec7 mov esi, esp */
  ESI = (ESP);
  /* 11694ec9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11694ecd call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694ed3u);
  /* 11694ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ed6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ed8 call 0x11699d90 */
  push32(0x11694eddu); f_11699d90();
  /* 11694edd neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694edf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694ee0 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694ee2 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694ee4 mov esi, esp */
  ESI = (ESP);
  /* 11694ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11694ee7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11694ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694eeb call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694ef1u);
  /* 11694ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ef6 call 0x11699d90 */
  push32(0x11694efbu); f_11699d90();
  /* 11694efb mov esi, esp */
  ESI = (ESP);
  /* 11694efd push 4 */
  push32((uint32_t)(0x4u));
  /* 11694eff push 0 */
  push32((uint32_t)(0x0u));
  /* 11694f01 call dword ptr [0x116d352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d352c))), 0x11694f07u);
  /* 11694f07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694f0c call 0x11699d90 */
  push32(0x11694f11u); f_11699d90();
  /* 11694f11 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11694f13 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11694f14 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11694f16 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11694f18 mov esi, esp */
  ESI = (ESP);
  /* 11694f1a push eax */
  push32((uint32_t)(EAX));
  /* 11694f1b push 4 */
  push32((uint32_t)(0x4u));
  /* 11694f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11694f1f call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x11694f25u);
  /* 11694f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694f2a call 0x11699d90 */
  push32(0x11694f2fu); f_11699d90();
  /* 11694f2f mov edx, dword ptr [0x116d0354] */
  EDX = (r32((uint32_t)(0x116d0354)));
  /* 11694f35 cmp edx, dword ptr [0x116d00c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d00c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694f3b jle 0x11694f8e */
  if ((C.zf||C.sf!=C.of)) goto L_11694f8e;
  /* 11694f3d mov esi, esp */
  ESI = (ESP);
  /* 11694f3f push 0x116ca7f8 */
  push32((uint32_t)(0x116ca7f8u));
  /* 11694f44 call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11694f4au);
  /* 11694f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694f4f call 0x11699d90 */
  push32(0x11694f54u); f_11699d90();
  /* 11694f54 push 0x116cff58 */
  push32((uint32_t)(0x116cff58u));
  /* 11694f59 push 0x116d0028 */
  push32((uint32_t)(0x116d0028u));
  /* 11694f5e call 0x11691258 */
  push32(0x11694f63u); f_11691258();
  /* 11694f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f66 push 0x116ca7e8 */
  push32((uint32_t)(0x116ca7e8u));
  /* 11694f6b push 0x116d0288 */
  push32((uint32_t)(0x116d0288u));
  /* 11694f70 call 0x1169a7d0 */
  push32(0x11694f75u); f_1169a7d0();
  /* 11694f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f78 mov dword ptr [0x116d00b0], 0x116d0028 */
  w32((uint32_t)(0x116d00b0), (0x116d0028u));
  /* 11694f82 mov dword ptr [0x116d03b0], 0x116cff58 */
  w32((uint32_t)(0x116d03b0), (0x116cff58u));
  /* 11694f8c jmp 0x11694fdd */
  goto L_11694fdd;
L_11694f8e:;
  /* 11694f8e mov esi, esp */
  ESI = (ESP);
  /* 11694f90 push 0x116ca7e0 */
  push32((uint32_t)(0x116ca7e0u));
  /* 11694f95 call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11694f9bu);
  /* 11694f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694fa0 call 0x11699d90 */
  push32(0x11694fa5u); f_11699d90();
  /* 11694fa5 push 0x116d01a8 */
  push32((uint32_t)(0x116d01a8u));
  /* 11694faa push 0x116d0120 */
  push32((uint32_t)(0x116d0120u));
  /* 11694faf call 0x11691258 */
  push32(0x11694fb4u); f_11691258();
  /* 11694fb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694fb7 push 0x116ca7d4 */
  push32((uint32_t)(0x116ca7d4u));
  /* 11694fbc push 0x116d0288 */
  push32((uint32_t)(0x116d0288u));
  /* 11694fc1 call 0x1169a7d0 */
  push32(0x11694fc6u); f_1169a7d0();
  /* 11694fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694fc9 mov dword ptr [0x116d00b0], 0x116d0120 */
  w32((uint32_t)(0x116d00b0), (0x116d0120u));
  /* 11694fd3 mov dword ptr [0x116d03b0], 0x116d01a8 */
  w32((uint32_t)(0x116d03b0), (0x116d01a8u));
L_11694fdd:;
  /* 11694fdd mov esi, esp */
  ESI = (ESP);
  /* 11694fdf push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11694fe4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11694fe6 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11694fecu);
  /* 11694fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11694fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11694ff1 call 0x11699d90 */
  push32(0x11694ff6u); f_11699d90();
  /* 11694ff6 mov esi, esp */
  ESI = (ESP);
  /* 11694ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11694ffa push 0xa */
  push32((uint32_t)(0xau));
  /* 11694ffc call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11695002u);
  /* 11695002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695005 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695007 call 0x11699d90 */
  push32(0x1169500cu); f_11699d90();
  /* 1169500c mov esi, esp */
  ESI = (ESP);
  /* 1169500e push 0 */
  push32((uint32_t)(0x0u));
  /* 11695010 push 1 */
  push32((uint32_t)(0x1u));
  /* 11695012 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11695018u);
  /* 11695018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169501b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169501d call 0x11699d90 */
  push32(0x11695022u); f_11699d90();
L_11695022:;
  /* 11695022 mov esi, esp */
  ESI = (ESP);
  /* 11695024 push 1 */
  push32((uint32_t)(0x1u));
  /* 11695026 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x1169502cu);
  /* 1169502c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169502f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695031 call 0x11699d90 */
  push32(0x11695036u); f_11699d90();
  /* 11695036 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169503b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169503d je 0x116950d8 */
  if (C.zf) goto L_116950d8;
  /* 11695043 call 0x11691037 */
  push32(0x11695048u); f_11691037();
  /* 11695048 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169504d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169504f je 0x116950d8 */
  if (C.zf) goto L_116950d8;
  /* 11695055 mov esi, esp */
  ESI = (ESP);
  /* 11695057 push 0x116ca7cc */
  push32((uint32_t)(0x116ca7ccu));
  /* 1169505c call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11695062u);
  /* 11695062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695065 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695067 call 0x11699d90 */
  push32(0x1169506cu); f_11699d90();
  /* 1169506c call 0x116912ad */
  push32(0x11695071u); f_116912ad();
  /* 11695071 mov eax, dword ptr [0x116d0350] */
  EAX = (r32((uint32_t)(0x116d0350)));
  /* 11695076 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169507c add eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695081 mov esi, esp */
  ESI = (ESP);
  /* 11695083 push eax */
  push32((uint32_t)(EAX));
  /* 11695084 push 3 */
  push32((uint32_t)(0x3u));
  /* 11695086 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x1169508cu);
  /* 1169508c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169508f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695091 call 0x11699d90 */
  push32(0x11695096u); f_11699d90();
  /* 11695096 mov esi, esp */
  ESI = (ESP);
  /* 11695098 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169509a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169509c call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x116950a2u);
  /* 116950a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116950a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116950a7 call 0x11699d90 */
  push32(0x116950acu); f_11699d90();
  /* 116950ac mov esi, esp */
  ESI = (ESP);
  /* 116950ae push 0x14 */
  push32((uint32_t)(0x14u));
  /* 116950b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 116950b2 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x116950b8u);
  /* 116950b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116950bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116950bd call 0x11699d90 */
  push32(0x116950c2u); f_11699d90();
  /* 116950c2 mov esi, esp */
  ESI = (ESP);
  /* 116950c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116950c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116950c8 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x116950ceu);
  /* 116950ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116950d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116950d3 call 0x11699d90 */
  push32(0x116950d8u); f_11699d90();
L_116950d8:;
  /* 116950d8 mov esi, esp */
  ESI = (ESP);
  /* 116950da push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 116950df push 2 */
  push32((uint32_t)(0x2u));
  /* 116950e1 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x116950e7u);
  /* 116950e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116950ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116950ec call 0x11699d90 */
  push32(0x116950f1u); f_11699d90();
L_116950f1:;
  /* 116950f1 mov esi, esp */
  ESI = (ESP);
  /* 116950f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 116950f5 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x116950fbu);
  /* 116950fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116950fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695100 call 0x11699d90 */
  push32(0x11695105u); f_11699d90();
  /* 11695105 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169510a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169510c je 0x1169513f */
  if (C.zf) goto L_1169513f;
  /* 1169510e call 0x116910f5 */
  push32(0x11695113u); f_116910f5();
  /* 11695113 mov ecx, 3 */
  ECX = (0x3u);
  /* 11695118 sub ecx, dword ptr [0x116d0350] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d0350))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169511e imul ecx, ecx, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2bcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11695124 add ecx, 0x7d0 */
  { uint32_t _a=(ECX),_b=(0x7d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169512a mov esi, esp */
  ESI = (ESP);
  /* 1169512c push ecx */
  push32((uint32_t)(ECX));
  /* 1169512d push 5 */
  push32((uint32_t)(0x5u));
  /* 1169512f call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11695135u);
  /* 11695135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695138 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169513a call 0x11699d90 */
  push32(0x1169513fu); f_11699d90();
L_1169513f:;
  /* 1169513f mov esi, esp */
  ESI = (ESP);
  /* 11695141 push 5 */
  push32((uint32_t)(0x5u));
  /* 11695143 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x11695149u);
  /* 11695149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169514c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169514e call 0x11699d90 */
  push32(0x11695153u); f_11699d90();
  /* 11695153 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11695158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169515a je 0x11695172 */
  if (C.zf) goto L_11695172;
  /* 1169515c mov esi, esp */
  ESI = (ESP);
  /* 1169515e push 1 */
  push32((uint32_t)(0x1u));
  /* 11695160 push 1 */
  push32((uint32_t)(0x1u));
  /* 11695162 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11695168u);
  /* 11695168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169516b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169516d call 0x11699d90 */
  push32(0x11695172u); f_11699d90();
L_11695172:;
  /* 11695172 mov esi, esp */
  ESI = (ESP);
  /* 11695174 push 4 */
  push32((uint32_t)(0x4u));
  /* 11695176 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x1169517cu);
  /* 1169517c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169517f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695181 call 0x11699d90 */
  push32(0x11695186u); f_11699d90();
  /* 11695186 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169518b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169518d je 0x116951a5 */
  if (C.zf) goto L_116951a5;
  /* 1169518f mov esi, esp */
  ESI = (ESP);
  /* 11695191 push 9 */
  push32((uint32_t)(0x9u));
  /* 11695193 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695195 call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x1169519bu);
  /* 1169519b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169519e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116951a0 call 0x11699d90 */
  push32(0x116951a5u); f_11699d90();
L_116951a5:;
  /* 116951a5 mov esi, esp */
  ESI = (ESP);
  /* 116951a7 push 6 */
  push32((uint32_t)(0x6u));
  /* 116951a9 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x116951afu);
  /* 116951af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116951b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116951b4 call 0x11699d90 */
  push32(0x116951b9u); f_11699d90();
  /* 116951b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116951be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116951c0 je 0x1169524e */
  if (C.zf) goto L_1169524e;
  /* 116951c6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116951c8 mov edx, dword ptr [0x116d00b0] */
  EDX = (r32((uint32_t)(0x116d00b0)));
  /* 116951ce push edx */
  push32((uint32_t)(EDX));
  /* 116951cf call 0x11691145 */
  push32(0x116951d4u); f_11691145();
  /* 116951d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116951d7 mov esi, esp */
  ESI = (ESP);
  /* 116951d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116951db call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x116951e1u);
  /* 116951e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116951e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116951e6 call 0x11699d90 */
  push32(0x116951ebu); f_11699d90();
  /* 116951eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116951ed mov eax, dword ptr [0x116d03b0] */
  EAX = (r32((uint32_t)(0x116d03b0)));
  /* 116951f2 push eax */
  push32((uint32_t)(EAX));
  /* 116951f3 call 0x11691145 */
  push32(0x116951f8u); f_11691145();
  /* 116951f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116951fb mov esi, esp */
  ESI = (ESP);
  /* 116951fd push 0 */
  push32((uint32_t)(0x0u));
  /* 116951ff call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x11695205u);
  /* 11695205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169520a call 0x11699d90 */
  push32(0x1169520fu); f_11699d90();
  /* 1169520f mov esi, esp */
  ESI = (ESP);
  /* 11695211 mov ecx, dword ptr [0x116d0350] */
  ECX = (r32((uint32_t)(0x116d0350)));
  /* 11695217 push ecx */
  push32((uint32_t)(ECX));
  /* 11695218 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169521a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169521c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169521e push 0x116d0288 */
  push32((uint32_t)(0x116d0288u));
  /* 11695223 push 3 */
  push32((uint32_t)(0x3u));
  /* 11695225 call dword ptr [0x116d3524] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3524))), 0x1169522bu);
  /* 1169522b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169522e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695230 call 0x11699d90 */
  push32(0x11695235u); f_11699d90();
  /* 11695235 mov esi, esp */
  ESI = (ESP);
  /* 11695237 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1169523c push 7 */
  push32((uint32_t)(0x7u));
  /* 1169523e call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x11695244u);
  /* 11695244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695249 call 0x11699d90 */
  push32(0x1169524eu); f_11699d90();
L_1169524e:;
  /* 1169524e mov esi, esp */
  ESI = (ESP);
  /* 11695250 push 7 */
  push32((uint32_t)(0x7u));
  /* 11695252 call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x11695258u);
  /* 11695258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169525b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169525d call 0x11699d90 */
  push32(0x11695262u); f_11699d90();
  /* 11695262 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11695267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695269 je 0x116952ae */
  if (C.zf) goto L_116952ae;
  /* 1169526b mov esi, esp */
  ESI = (ESP);
  /* 1169526d push 0x116ca7c4 */
  push32((uint32_t)(0x116ca7c4u));
  /* 11695272 call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11695278u);
  /* 11695278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169527b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169527d call 0x11699d90 */
  push32(0x11695282u); f_11699d90();
  /* 11695282 mov esi, esp */
  ESI = (ESP);
  /* 11695284 push 1 */
  push32((uint32_t)(0x1u));
  /* 11695286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695288 call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x1169528eu);
  /* 1169528e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695293 call 0x11699d90 */
  push32(0x11695298u); f_11699d90();
  /* 11695298 mov esi, esp */
  ESI = (ESP);
  /* 1169529a push 0xa */
  push32((uint32_t)(0xau));
  /* 1169529c push 3 */
  push32((uint32_t)(0x3u));
  /* 1169529e call dword ptr [0x116d3548] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3548))), 0x116952a4u);
  /* 116952a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116952a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116952a9 call 0x11699d90 */
  push32(0x116952aeu); f_11699d90();
L_116952ae:;
  /* 116952ae mov esi, esp */
  ESI = (ESP);
  /* 116952b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 116952b2 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x116952b8u);
  /* 116952b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116952bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116952bd call 0x11699d90 */
  push32(0x116952c2u); f_11699d90();
  /* 116952c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116952c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116952c9 je 0x11695336 */
  if (C.zf) goto L_11695336;
  /* 116952cb cmp dword ptr [0x116d0354], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0354))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116952d2 je 0x116952dd */
  if (C.zf) goto L_116952dd;
  /* 116952d4 cmp dword ptr [0x116d00c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d00c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116952db jne 0x11695336 */
  if (!C.zf) goto L_11695336;
L_116952dd:;
  /* 116952dd mov esi, esp */
  ESI = (ESP);
  /* 116952df push 0x1d */
  push32((uint32_t)(0x1du));
  /* 116952e1 call dword ptr [0x116d3534] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3534))), 0x116952e7u);
  /* 116952e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116952ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116952ec call 0x11699d90 */
  push32(0x116952f1u); f_11699d90();
  /* 116952f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116952f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116952f8 je 0x11695336 */
  if (C.zf) goto L_11695336;
  /* 116952fa mov esi, esp */
  ESI = (ESP);
  /* 116952fc push 0x116ca7bc */
  push32((uint32_t)(0x116ca7bcu));
  /* 11695301 call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11695307u);
  /* 11695307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169530a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169530c call 0x11699d90 */
  push32(0x11695311u); f_11699d90();
  /* 11695311 mov esi, esp */
  ESI = (ESP);
  /* 11695313 call dword ptr [0x116d3538] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3538))), 0x11695319u);
  /* 11695319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169531b call 0x11699d90 */
  push32(0x11695320u); f_11699d90();
  /* 11695320 mov esi, esp */
  ESI = (ESP);
  /* 11695322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695324 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11695326 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x1169532cu);
  /* 1169532c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169532f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695331 call 0x11699d90 */
  push32(0x11695336u); f_11699d90();
L_11695336:;
  /* 11695336 mov esi, esp */
  ESI = (ESP);
  /* 11695338 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1169533a call dword ptr [0x116d3534] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3534))), 0x11695340u);
  /* 11695340 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695345 call 0x11699d90 */
  push32(0x1169534au); f_11699d90();
  /* 1169534a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169534f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695351 je 0x116953ac */
  if (C.zf) goto L_116953ac;
  /* 11695353 mov esi, esp */
  ESI = (ESP);
  /* 11695355 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695357 call dword ptr [0x116d353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d353c))), 0x1169535du);
  /* 1169535d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695360 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695362 call 0x11699d90 */
  push32(0x11695367u); f_11699d90();
  /* 11695367 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169536c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169536e je 0x116953ac */
  if (C.zf) goto L_116953ac;
  /* 11695370 mov esi, esp */
  ESI = (ESP);
  /* 11695372 push 0x116ca7b4 */
  push32((uint32_t)(0x116ca7b4u));
  /* 11695377 call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x1169537du);
  /* 1169537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695380 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695382 call 0x11699d90 */
  push32(0x11695387u); f_11699d90();
  /* 11695387 mov esi, esp */
  ESI = (ESP);
  /* 11695389 call dword ptr [0x116d3538] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3538))), 0x1169538fu);
  /* 1169538f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695391 call 0x11699d90 */
  push32(0x11695396u); f_11699d90();
  /* 11695396 mov esi, esp */
  ESI = (ESP);
  /* 11695398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169539a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1169539c call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x116953a2u);
  /* 116953a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116953a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116953a7 call 0x11699d90 */
  push32(0x116953acu); f_11699d90();
L_116953ac:;
  /* 116953ac mov esi, esp */
  ESI = (ESP);
  /* 116953ae push 0xa */
  push32((uint32_t)(0xau));
  /* 116953b0 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x116953b6u);
  /* 116953b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116953b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116953bb call 0x11699d90 */
  push32(0x116953c0u); f_11699d90();
  /* 116953c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116953c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116953c7 jne 0x1169543f */
  if (!C.zf) goto L_1169543f;
  /* 116953c9 mov esi, esp */
  ESI = (ESP);
  /* 116953cb push 1 */
  push32((uint32_t)(0x1u));
  /* 116953cd call dword ptr [0x116d353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d353c))), 0x116953d3u);
  /* 116953d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116953d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116953d8 call 0x11699d90 */
  push32(0x116953ddu); f_11699d90();
  /* 116953dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116953e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116953e4 je 0x1169543f */
  if (C.zf) goto L_1169543f;
  /* 116953e6 mov esi, esp */
  ESI = (ESP);
  /* 116953e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 116953ea call dword ptr [0x116d353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d353c))), 0x116953f0u);
  /* 116953f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116953f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116953f5 call 0x11699d90 */
  push32(0x116953fau); f_11699d90();
  /* 116953fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116953ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695401 je 0x1169543f */
  if (C.zf) goto L_1169543f;
  /* 11695403 mov esi, esp */
  ESI = (ESP);
  /* 11695405 push 0x116ca7ac */
  push32((uint32_t)(0x116ca7acu));
  /* 1169540a call dword ptr [0x116d351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d351c))), 0x11695410u);
  /* 11695410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695415 call 0x11699d90 */
  push32(0x1169541au); f_11699d90();
  /* 1169541a mov esi, esp */
  ESI = (ESP);
  /* 1169541c call dword ptr [0x116d3540] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3540))), 0x11695422u);
  /* 11695422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695424 call 0x11699d90 */
  push32(0x11695429u); f_11699d90();
  /* 11695429 mov esi, esp */
  ESI = (ESP);
  /* 1169542b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169542d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1169542f call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11695435u);
  /* 11695435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695438 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169543a call 0x11699d90 */
  push32(0x1169543fu); f_11699d90();
L_1169543f:;
  /* 1169543f push 0x116d0298 */
  push32((uint32_t)(0x116d0298u));
  /* 11695444 mov ecx, 0x116d0358 */
  ECX = (0x116d0358u);
  /* 11695449 call 0x1169100a */
  push32(0x1169544eu); f_1169100a();
  /* 1169544e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11695453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695455 je 0x116954aa */
  if (C.zf) goto L_116954aa;
  /* 11695457 mov esi, esp */
  ESI = (ESP);
  /* 11695459 push 0xa */
  push32((uint32_t)(0xau));
  /* 1169545b call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11695461u);
  /* 11695461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695466 call 0x11699d90 */
  push32(0x1169546bu); f_11699d90();
  /* 1169546b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11695470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695472 je 0x116954aa */
  if (C.zf) goto L_116954aa;
  /* 11695474 call 0x11691235 */
  push32(0x11695479u); f_11691235();
  /* 11695479 mov esi, esp */
  ESI = (ESP);
  /* 1169547b mov edx, dword ptr [0x116d00c8] */
  EDX = (r32((uint32_t)(0x116d00c8)));
  /* 11695481 push edx */
  push32((uint32_t)(EDX));
  /* 11695482 mov eax, dword ptr [0x116d0354] */
  EAX = (r32((uint32_t)(0x116d0354)));
  /* 11695487 push eax */
  push32((uint32_t)(EAX));
  /* 11695488 push 0x116ca7a4 */
  push32((uint32_t)(0x116ca7a4u));
  /* 1169548d call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x11695493u);
  /* 11695493 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695498 call 0x11699d90 */
  push32(0x1169549du); f_11699d90();
  /* 1169549d push 0x116d0298 */
  push32((uint32_t)(0x116d0298u));
  /* 116954a2 call 0x1169124e */
  push32(0x116954a7u); f_1169124e();
  /* 116954a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116954aa:;
  /* 116954aa mov esi, esp */
  ESI = (ESP);
  /* 116954ac push 0 */
  push32((uint32_t)(0x0u));
  /* 116954ae call dword ptr [0x116d355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d355c))), 0x116954b4u);
  /* 116954b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116954b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116954b9 call 0x11699d90 */
  push32(0x116954beu); f_11699d90();
  /* 116954be mov esi, esp */
  ESI = (ESP);
  /* 116954c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116954c2 push 0x116d0298 */
  push32((uint32_t)(0x116d0298u));
  /* 116954c7 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116954cdu);
  /* 116954cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116954d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116954d2 call 0x11699d90 */
  push32(0x116954d7u); f_11699d90();
L_116954d7:;
  /* 116954d7 pop edi */
  EDI = (pop32());
  /* 116954d8 pop esi */
  ESI = (pop32());
  /* 116954d9 pop ebx */
  EBX = (pop32());
  /* 116954da add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116954dd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116954df call 0x11699d90 */
  push32(0x116954e4u); f_11699d90();
  /* 116954e4 mov esp, ebp */
  ESP = (EBP);
  /* 116954e6 pop ebp */
  EBP = (pop32());
  /* 116954e7 ret  */
  ESPCHK(0x116947a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x11695840 (118 bytes, 45 insns) */
void f_11695840(void) {
  FTRACE(0x11695840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695840 push ebp */
  push32((uint32_t)(EBP));
  /* 11695841 mov ebp, esp */
  EBP = (ESP);
  /* 11695843 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695846 push ebx */
  push32((uint32_t)(EBX));
  /* 11695847 push esi */
  push32((uint32_t)(ESI));
  /* 11695848 push edi */
  push32((uint32_t)(EDI));
  /* 11695849 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169584c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11695851 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695856 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695858 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169585c mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11695860 jmp 0x1169586a */
  goto L_1169586a;
L_11695862:;
  /* 11695862 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11695865 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11695867 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1169586a:;
  /* 1169586a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169586d and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11695873 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695876 jge 0x116958a2 */
  if ((C.sf==C.of)) goto L_116958a2;
  /* 11695878 mov esi, esp */
  ESI = (ESP);
  /* 1169587a mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169587d push edx */
  push32((uint32_t)(EDX));
  /* 1169587e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695881 push eax */
  push32((uint32_t)(EAX));
  /* 11695882 call dword ptr [0x116d3500] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3500))), 0x11695888u);
  /* 11695888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169588b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169588d call 0x11699d90 */
  push32(0x11695892u); f_11699d90();
  /* 11695892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695894 jle 0x116958a0 */
  if ((C.zf||C.sf!=C.of)) goto L_116958a0;
  /* 11695896 mov cl, byte ptr [ebp - 8] */
  CL = (r8((uint32_t)(EBP + -0x8)));
  /* 11695899 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1169589c mov byte ptr [ebp - 8], 8 */
  w8((uint32_t)(EBP + -0x8), (0x8u));
L_116958a0:;
  /* 116958a0 jmp 0x11695862 */
  goto L_11695862;
L_116958a2:;
  /* 116958a2 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 116958a5 pop edi */
  EDI = (pop32());
  /* 116958a6 pop esi */
  ESI = (pop32());
  /* 116958a7 pop ebx */
  EBX = (pop32());
  /* 116958a8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116958ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116958ad call 0x11699d90 */
  push32(0x116958b2u); f_11699d90();
  /* 116958b2 mov esp, ebp */
  ESP = (EBP);
  /* 116958b4 pop ebp */
  EBP = (pop32());
  /* 116958b5 ret  */
  ESPCHK(0x11695840u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x116958e0 (120 bytes, 47 insns) */
void f_116958e0(void) {
  FTRACE(0x116958e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116958e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116958e1 mov ebp, esp */
  EBP = (ESP);
  /* 116958e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116958e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116958e7 push esi */
  push32((uint32_t)(ESI));
  /* 116958e8 push edi */
  push32((uint32_t)(EDI));
  /* 116958e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 116958ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 116958f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116958f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_116958f8:;
  /* 116958f8 mov esi, esp */
  ESI = (ESP);
  /* 116958fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116958fd push eax */
  push32((uint32_t)(EAX));
  /* 116958fe call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11695904u);
  /* 11695904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695909 call 0x11699d90 */
  push32(0x1169590eu); f_11699d90();
  /* 1169590e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695910 je 0x1169592c */
  if (C.zf) goto L_1169592c;
  /* 11695912 mov esi, esp */
  ESI = (ESP);
  /* 11695914 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695919 push ecx */
  push32((uint32_t)(ECX));
  /* 1169591a call dword ptr [0x116d34fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34fc))), 0x11695920u);
  /* 11695920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695925 call 0x11699d90 */
  push32(0x1169592au); f_11699d90();
  /* 1169592a jmp 0x116958f8 */
  goto L_116958f8;
L_1169592c:;
  /* 1169592c mov esi, esp */
  ESI = (ESP);
  /* 1169592e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695931 push edx */
  push32((uint32_t)(EDX));
  /* 11695932 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11695938u);
  /* 11695938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169593b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169593d call 0x11699d90 */
  push32(0x11695942u); f_11699d90();
  /* 11695942 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11695944 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695946 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11695947 pop edi */
  EDI = (pop32());
  /* 11695948 pop esi */
  ESI = (pop32());
  /* 11695949 pop ebx */
  EBX = (pop32());
  /* 1169594a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169594d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169594f call 0x11699d90 */
  push32(0x11695954u); f_11699d90();
  /* 11695954 mov esp, ebp */
  ESP = (EBP);
  /* 11695956 pop ebp */
  EBP = (pop32());
  /* 11695957 ret  */
  ESPCHK(0x116958e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x11695980 (77 bytes, 35 insns) */
void f_11695980(void) {
  FTRACE(0x11695980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695980 push ebp */
  push32((uint32_t)(EBP));
  /* 11695981 mov ebp, esp */
  EBP = (ESP);
  /* 11695983 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695986 push ebx */
  push32((uint32_t)(EBX));
  /* 11695987 push esi */
  push32((uint32_t)(ESI));
  /* 11695988 push edi */
  push32((uint32_t)(EDI));
  /* 11695989 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1169598c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11695991 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695996 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169599b cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169599e jge 0x116959a2 */
  if ((C.sf==C.of)) goto L_116959a2;
  /* 116959a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_116959a2:;
  /* 116959a2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 116959a5 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116959a8 jge 0x116959ac */
  if ((C.sf==C.of)) goto L_116959ac;
  /* 116959aa neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_116959ac:;
  /* 116959ac mov ecx, eax */
  ECX = (EAX);
  /* 116959ae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116959b0 ja 0x116959b4 */
  if ((!C.cf&&!C.zf)) goto L_116959b4;
  /* 116959b2 mov ecx, ebx */
  ECX = (EBX);
L_116959b4:;
  /* 116959b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116959b6 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116959b8 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116959ba mov eax, ecx */
  EAX = (ECX);
  /* 116959bc pop edi */
  EDI = (pop32());
  /* 116959bd pop esi */
  ESI = (pop32());
  /* 116959be pop ebx */
  EBX = (pop32());
  /* 116959bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116959c2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116959c4 call 0x11699d90 */
  push32(0x116959c9u); f_11699d90();
  /* 116959c9 mov esp, ebp */
  ESP = (EBP);
  /* 116959cb pop ebp */
  EBP = (pop32());
  /* 116959cc ret  */
  ESPCHK(0x11695980u, _esp0);
  ESP += 4; return;
}

/* FUN_100059e0 @ 0x116959e0 (70 bytes, 30 insns) */
void f_116959e0(void) {
  FTRACE(0x116959e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116959e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116959e1 mov ebp, esp */
  EBP = (ESP);
  /* 116959e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116959e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116959e7 push esi */
  push32((uint32_t)(ESI));
  /* 116959e8 push edi */
  push32((uint32_t)(EDI));
  /* 116959e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116959ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116959ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116959f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116959f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116959f9 pop ecx */
  ECX = (pop32());
  /* 116959fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116959fd mov esi, esp */
  ESI = (ESP);
  /* 116959ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11695a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695a04 push eax */
  push32((uint32_t)(EAX));
  /* 11695a05 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11695a0bu);
  /* 11695a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695a0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695a10 call 0x11699d90 */
  push32(0x11695a15u); f_11699d90();
  /* 11695a15 pop edi */
  EDI = (pop32());
  /* 11695a16 pop esi */
  ESI = (pop32());
  /* 11695a17 pop ebx */
  EBX = (pop32());
  /* 11695a18 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695a1b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695a1d call 0x11699d90 */
  push32(0x11695a22u); f_11699d90();
  /* 11695a22 mov esp, ebp */
  ESP = (EBP);
  /* 11695a24 pop ebp */
  EBP = (pop32());
  /* 11695a25 ret  */
  ESPCHK(0x116959e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x11695a40 (79 bytes, 32 insns) */
void f_11695a40(void) {
  FTRACE(0x11695a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11695a41 mov ebp, esp */
  EBP = (ESP);
  /* 11695a43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695a46 push ebx */
  push32((uint32_t)(EBX));
  /* 11695a47 push esi */
  push32((uint32_t)(ESI));
  /* 11695a48 push edi */
  push32((uint32_t)(EDI));
  /* 11695a49 push ecx */
  push32((uint32_t)(ECX));
  /* 11695a4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695a4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695a52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695a57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695a59 pop ecx */
  ECX = (pop32());
  /* 11695a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695a5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695a60 call 0x1169119a */
  push32(0x11695a65u); f_1169119a();
  /* 11695a65 mov esi, esp */
  ESI = (ESP);
  /* 11695a67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695a6a mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11695a6d push ecx */
  push32((uint32_t)(ECX));
  /* 11695a6e call dword ptr [0x116d3554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3554))), 0x11695a74u);
  /* 11695a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695a79 call 0x11699d90 */
  push32(0x11695a7eu); f_11699d90();
  /* 11695a7e pop edi */
  EDI = (pop32());
  /* 11695a7f pop esi */
  ESI = (pop32());
  /* 11695a80 pop ebx */
  EBX = (pop32());
  /* 11695a81 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695a84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695a86 call 0x11699d90 */
  push32(0x11695a8bu); f_11699d90();
  /* 11695a8b mov esp, ebp */
  ESP = (EBP);
  /* 11695a8d pop ebp */
  EBP = (pop32());
  /* 11695a8e ret  */
  ESPCHK(0x11695a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x11695ab0 (68 bytes, 29 insns) */
void f_11695ab0(void) {
  FTRACE(0x11695ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11695ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11695ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11695ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11695ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11695ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11695aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695ac9 pop ecx */
  ECX = (pop32());
  /* 11695aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695acd mov esi, esp */
  ESI = (ESP);
  /* 11695acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11695ad3 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11695ad9u);
  /* 11695ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695ade call 0x11699d90 */
  push32(0x11695ae3u); f_11699d90();
  /* 11695ae3 pop edi */
  EDI = (pop32());
  /* 11695ae4 pop esi */
  ESI = (pop32());
  /* 11695ae5 pop ebx */
  EBX = (pop32());
  /* 11695ae6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695ae9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695aeb call 0x11699d90 */
  push32(0x11695af0u); f_11699d90();
  /* 11695af0 mov esp, ebp */
  ESP = (EBP);
  /* 11695af2 pop ebp */
  EBP = (pop32());
  /* 11695af3 ret  */
  ESPCHK(0x11695ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x11695b10 (69 bytes, 29 insns) */
void f_11695b10(void) {
  FTRACE(0x11695b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11695b11 mov ebp, esp */
  EBP = (ESP);
  /* 11695b13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11695b17 push esi */
  push32((uint32_t)(ESI));
  /* 11695b18 push edi */
  push32((uint32_t)(EDI));
  /* 11695b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11695b1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11695b1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11695b22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695b27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695b29 pop ecx */
  ECX = (pop32());
  /* 11695b2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695b2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11695b31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695b34 call 0x1169119f */
  push32(0x11695b39u); f_1169119f();
  /* 11695b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695b3b jle 0x11695b41 */
  if ((C.zf||C.sf!=C.of)) goto L_11695b41;
  /* 11695b3d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11695b41:;
  /* 11695b41 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11695b44 pop edi */
  EDI = (pop32());
  /* 11695b45 pop esi */
  ESI = (pop32());
  /* 11695b46 pop ebx */
  EBX = (pop32());
  /* 11695b47 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695b4a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695b4c call 0x11699d90 */
  push32(0x11695b51u); f_11699d90();
  /* 11695b51 mov esp, ebp */
  ESP = (EBP);
  /* 11695b53 pop ebp */
  EBP = (pop32());
  /* 11695b54 ret  */
  ESPCHK(0x11695b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x11695b70 (39 bytes, 20 insns) */
void f_11695b70(void) {
  FTRACE(0x11695b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11695b71 mov ebp, esp */
  EBP = (ESP);
  /* 11695b73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11695b77 push esi */
  push32((uint32_t)(ESI));
  /* 11695b78 push edi */
  push32((uint32_t)(EDI));
  /* 11695b79 push ecx */
  push32((uint32_t)(ECX));
  /* 11695b7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695b7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695b89 pop ecx */
  ECX = (pop32());
  /* 11695b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695b90 pop edi */
  EDI = (pop32());
  /* 11695b91 pop esi */
  ESI = (pop32());
  /* 11695b92 pop ebx */
  EBX = (pop32());
  /* 11695b93 mov esp, ebp */
  ESP = (EBP);
  /* 11695b95 pop ebp */
  EBP = (pop32());
  /* 11695b96 ret  */
  ESPCHK(0x11695b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x11695ba0 (71 bytes, 30 insns) */
void f_11695ba0(void) {
  FTRACE(0x11695ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11695ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11695ba3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11695ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11695ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11695ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11695baa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695bad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695bb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695bb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695bb9 pop ecx */
  ECX = (pop32());
  /* 11695bba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695bbd mov esi, esp */
  ESI = (ESP);
  /* 11695bbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11695bc3 call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x11695bc9u);
  /* 11695bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695bcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695bce call 0x11699d90 */
  push32(0x11695bd3u); f_11699d90();
  /* 11695bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695bd6 pop edi */
  EDI = (pop32());
  /* 11695bd7 pop esi */
  ESI = (pop32());
  /* 11695bd8 pop ebx */
  EBX = (pop32());
  /* 11695bd9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695bdc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695bde call 0x11699d90 */
  push32(0x11695be3u); f_11699d90();
  /* 11695be3 mov esp, ebp */
  ESP = (EBP);
  /* 11695be5 pop ebp */
  EBP = (pop32());
  /* 11695be6 ret  */
  ESPCHK(0x11695ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c00 @ 0x11695c00 (47 bytes, 22 insns) */
void f_11695c00(void) {
  FTRACE(0x11695c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11695c01 mov ebp, esp */
  EBP = (ESP);
  /* 11695c03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11695c07 push esi */
  push32((uint32_t)(ESI));
  /* 11695c08 push edi */
  push32((uint32_t)(EDI));
  /* 11695c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11695c0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695c0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695c12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695c17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695c19 pop ecx */
  ECX = (pop32());
  /* 11695c1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695c23 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11695c26 pop edi */
  EDI = (pop32());
  /* 11695c27 pop esi */
  ESI = (pop32());
  /* 11695c28 pop ebx */
  EBX = (pop32());
  /* 11695c29 mov esp, ebp */
  ESP = (EBP);
  /* 11695c2b pop ebp */
  EBP = (pop32());
  /* 11695c2c ret 4 */
  ESPCHK(0x11695c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10005c40 @ 0x11695c40 (94 bytes, 39 insns) */
void f_11695c40(void) {
  FTRACE(0x11695c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11695c41 mov ebp, esp */
  EBP = (ESP);
  /* 11695c43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11695c47 push esi */
  push32((uint32_t)(ESI));
  /* 11695c48 push edi */
  push32((uint32_t)(EDI));
  /* 11695c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11695c4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695c4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695c59 pop ecx */
  ECX = (pop32());
  /* 11695c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695c5d mov esi, esp */
  ESI = (ESP);
  /* 11695c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695c62 push eax */
  push32((uint32_t)(EAX));
  /* 11695c63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695c66 push ecx */
  push32((uint32_t)(ECX));
  /* 11695c67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695c6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11695c6d push eax */
  push32((uint32_t)(EAX));
  /* 11695c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695c71 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695c74 push ecx */
  push32((uint32_t)(ECX));
  /* 11695c75 call dword ptr [0x116d34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f8))), 0x11695c7bu);
  /* 11695c7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695c80 call 0x11699d90 */
  push32(0x11695c85u); f_11699d90();
  /* 11695c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695c88 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695c8b pop edi */
  EDI = (pop32());
  /* 11695c8c pop esi */
  ESI = (pop32());
  /* 11695c8d pop ebx */
  EBX = (pop32());
  /* 11695c8e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695c91 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695c93 call 0x11699d90 */
  push32(0x11695c98u); f_11699d90();
  /* 11695c98 mov esp, ebp */
  ESP = (EBP);
  /* 11695c9a pop ebp */
  EBP = (pop32());
  /* 11695c9b ret 4 */
  ESPCHK(0x11695c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cc0 @ 0x11695cc0 (221 bytes, 81 insns) */
void f_11695cc0(void) {
  FTRACE(0x11695cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11695cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11695cc3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11695cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11695cc8 push edi */
  push32((uint32_t)(EDI));
  /* 11695cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11695cca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11695ccd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11695cd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695cd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695cd9 pop ecx */
  ECX = (pop32());
  /* 11695cda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695cdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695ce0 call 0x1169119f */
  push32(0x11695ce5u); f_1169119f();
  /* 11695ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695ce7 jne 0x11695d8a */
  if (!C.zf) goto L_11695d8a;
  /* 11695ced mov esi, esp */
  ESI = (ESP);
  /* 11695cef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695cf2 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11695cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11695cf6 call dword ptr [0x116d355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d355c))), 0x11695cfcu);
  /* 11695cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695cff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d01 call 0x11699d90 */
  push32(0x11695d06u); f_11699d90();
  /* 11695d06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11695d0d jmp 0x11695d18 */
  goto L_11695d18;
L_11695d0f:;
  /* 11695d0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11695d12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695d15 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11695d18:;
  /* 11695d18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11695d1b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d1e jge 0x11695d6b */
  if ((C.sf==C.of)) goto L_11695d6b;
  /* 11695d20 mov esi, esp */
  ESI = (ESP);
  /* 11695d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695d27 push ecx */
  push32((uint32_t)(ECX));
  /* 11695d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d2b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11695d2e push eax */
  push32((uint32_t)(EAX));
  /* 11695d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11695d35 push edx */
  push32((uint32_t)(EDX));
  /* 11695d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d39 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11695d3c push ecx */
  push32((uint32_t)(ECX));
  /* 11695d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d40 push edx */
  push32((uint32_t)(EDX));
  /* 11695d41 call dword ptr [0x116d356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d356c))), 0x11695d47u);
  /* 11695d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d4c call 0x11699d90 */
  push32(0x11695d51u); f_11699d90();
  /* 11695d51 mov esi, esp */
  ESI = (ESP);
  /* 11695d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11695d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d58 push eax */
  push32((uint32_t)(EAX));
  /* 11695d59 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11695d5fu);
  /* 11695d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d64 call 0x11699d90 */
  push32(0x11695d69u); f_11699d90();
  /* 11695d69 jmp 0x11695d0f */
  goto L_11695d0f;
L_11695d6b:;
  /* 11695d6b mov esi, esp */
  ESI = (ESP);
  /* 11695d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11695d6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d72 push ecx */
  push32((uint32_t)(ECX));
  /* 11695d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695d76 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11695d79 push eax */
  push32((uint32_t)(EAX));
  /* 11695d7a call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11695d80u);
  /* 11695d80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d85 call 0x11699d90 */
  push32(0x11695d8au); f_11699d90();
L_11695d8a:;
  /* 11695d8a pop edi */
  EDI = (pop32());
  /* 11695d8b pop esi */
  ESI = (pop32());
  /* 11695d8c pop ebx */
  EBX = (pop32());
  /* 11695d8d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695d90 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695d92 call 0x11699d90 */
  push32(0x11695d97u); f_11699d90();
  /* 11695d97 mov esp, ebp */
  ESP = (EBP);
  /* 11695d99 pop ebp */
  EBP = (pop32());
  /* 11695d9a ret 8 */
  ESPCHK(0x11695cc0u, _esp0);
  ESP += 12; return;
}

/* FUN_10005de0 @ 0x11695de0 (47 bytes, 22 insns) */
void f_11695de0(void) {
  FTRACE(0x11695de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11695de1 mov ebp, esp */
  EBP = (ESP);
  /* 11695de3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695de6 push ebx */
  push32((uint32_t)(EBX));
  /* 11695de7 push esi */
  push32((uint32_t)(ESI));
  /* 11695de8 push edi */
  push32((uint32_t)(EDI));
  /* 11695de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11695dea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695ded mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695df2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695df7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695df9 pop ecx */
  ECX = (pop32());
  /* 11695dfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695e03 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11695e06 pop edi */
  EDI = (pop32());
  /* 11695e07 pop esi */
  ESI = (pop32());
  /* 11695e08 pop ebx */
  EBX = (pop32());
  /* 11695e09 mov esp, ebp */
  ESP = (EBP);
  /* 11695e0b pop ebp */
  EBP = (pop32());
  /* 11695e0c ret 4 */
  ESPCHK(0x11695de0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e20 @ 0x11695e20 (47 bytes, 22 insns) */
void f_11695e20(void) {
  FTRACE(0x11695e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11695e21 mov ebp, esp */
  EBP = (ESP);
  /* 11695e23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695e26 push ebx */
  push32((uint32_t)(EBX));
  /* 11695e27 push esi */
  push32((uint32_t)(ESI));
  /* 11695e28 push edi */
  push32((uint32_t)(EDI));
  /* 11695e29 push ecx */
  push32((uint32_t)(ECX));
  /* 11695e2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695e2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695e32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695e37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695e39 pop ecx */
  ECX = (pop32());
  /* 11695e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695e43 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11695e46 pop edi */
  EDI = (pop32());
  /* 11695e47 pop esi */
  ESI = (pop32());
  /* 11695e48 pop ebx */
  EBX = (pop32());
  /* 11695e49 mov esp, ebp */
  ESP = (EBP);
  /* 11695e4b pop ebp */
  EBP = (pop32());
  /* 11695e4c ret 4 */
  ESPCHK(0x11695e20u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e60 @ 0x11695e60 (131 bytes, 48 insns) */
void f_11695e60(void) {
  FTRACE(0x11695e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11695e61 mov ebp, esp */
  EBP = (ESP);
  /* 11695e63 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695e66 push ebx */
  push32((uint32_t)(EBX));
  /* 11695e67 push esi */
  push32((uint32_t)(ESI));
  /* 11695e68 push edi */
  push32((uint32_t)(EDI));
  /* 11695e69 push ecx */
  push32((uint32_t)(ECX));
  /* 11695e6a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11695e6d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11695e72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695e77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695e79 pop ecx */
  ECX = (pop32());
  /* 11695e7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695e7d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11695e84 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11695e8b jmp 0x11695e96 */
  goto L_11695e96;
L_11695e8d:;
  /* 11695e8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11695e90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695e93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11695e96:;
  /* 11695e96 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695e9a jge 0x11695ec9 */
  if ((C.sf==C.of)) goto L_11695ec9;
  /* 11695e9c mov esi, esp */
  ESI = (ESP);
  /* 11695e9e mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11695ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 11695ea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695ea5 push edx */
  push32((uint32_t)(EDX));
  /* 11695ea6 call dword ptr [0x116d3500] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3500))), 0x11695eacu);
  /* 11695eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695eb1 call 0x11699d90 */
  push32(0x11695eb6u); f_11699d90();
  /* 11695eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11695eb8 jle 0x11695ec7 */
  if ((C.zf||C.sf!=C.of)) goto L_11695ec7;
  /* 11695eba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11695ebd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11695ec0 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_11695ec7:;
  /* 11695ec7 jmp 0x11695e8d */
  goto L_11695e8d;
L_11695ec9:;
  /* 11695ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695ecc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11695ecf mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11695ed2 pop edi */
  EDI = (pop32());
  /* 11695ed3 pop esi */
  ESI = (pop32());
  /* 11695ed4 pop ebx */
  EBX = (pop32());
  /* 11695ed5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695ed8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695eda call 0x11699d90 */
  push32(0x11695edfu); f_11699d90();
  /* 11695edf mov esp, ebp */
  ESP = (EBP);
  /* 11695ee1 pop ebp */
  EBP = (pop32());
  /* 11695ee2 ret  */
  ESPCHK(0x11695e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11695f10 (47 bytes, 22 insns) */
void f_11695f10(void) {
  FTRACE(0x11695f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11695f11 mov ebp, esp */
  EBP = (ESP);
  /* 11695f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11695f17 push esi */
  push32((uint32_t)(ESI));
  /* 11695f18 push edi */
  push32((uint32_t)(EDI));
  /* 11695f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11695f1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695f1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695f29 pop ecx */
  ECX = (pop32());
  /* 11695f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695f30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695f33 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11695f36 pop edi */
  EDI = (pop32());
  /* 11695f37 pop esi */
  ESI = (pop32());
  /* 11695f38 pop ebx */
  EBX = (pop32());
  /* 11695f39 mov esp, ebp */
  ESP = (EBP);
  /* 11695f3b pop ebp */
  EBP = (pop32());
  /* 11695f3c ret 4 */
  ESPCHK(0x11695f10u, _esp0);
  ESP += 8; return;
}

/* FUN_10005f50 @ 0x11695f50 (65 bytes, 28 insns) */
void f_11695f50(void) {
  FTRACE(0x11695f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11695f51 mov ebp, esp */
  EBP = (ESP);
  /* 11695f53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695f56 push ebx */
  push32((uint32_t)(EBX));
  /* 11695f57 push esi */
  push32((uint32_t)(ESI));
  /* 11695f58 push edi */
  push32((uint32_t)(EDI));
  /* 11695f59 push ecx */
  push32((uint32_t)(ECX));
  /* 11695f5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11695f5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11695f62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695f67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695f69 pop ecx */
  ECX = (pop32());
  /* 11695f6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11695f73 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11695f76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11695f7c mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 11695f7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695f82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11695f85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11695f88 pop edi */
  EDI = (pop32());
  /* 11695f89 pop esi */
  ESI = (pop32());
  /* 11695f8a pop ebx */
  EBX = (pop32());
  /* 11695f8b mov esp, ebp */
  ESP = (EBP);
  /* 11695f8d pop ebp */
  EBP = (pop32());
  /* 11695f8e ret 0xc */
  ESPCHK(0x11695f50u, _esp0);
  ESP += 16; return;
}

/* FUN_10005fb0 @ 0x11695fb0 (166 bytes, 58 insns) */
void f_11695fb0(void) {
  FTRACE(0x11695fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11695fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11695fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11695fb3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11695fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11695fb7 push esi */
  push32((uint32_t)(ESI));
  /* 11695fb8 push edi */
  push32((uint32_t)(EDI));
  /* 11695fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11695fba lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 11695fbd mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 11695fc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11695fc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11695fc9 pop ecx */
  ECX = (pop32());
  /* 11695fca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11695fcd mov esi, esp */
  ESI = (ESP);
  /* 11695fcf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11695fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11695fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11695fd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11695fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11695fd9 call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11695fdfu);
  /* 11695fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11695fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695fe4 call 0x11699d90 */
  push32(0x11695fe9u); f_11699d90();
  /* 11695fe9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11695fec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11695ff2 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11695ff5 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11695ff8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11695ffd cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11695fff jge 0x1169600d */
  if ((C.sf==C.of)) goto L_1169600d;
  /* 11696001 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11696005 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11696009 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_1169600d:;
  /* 1169600d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11696010 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11696016 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696019 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 1169601c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11696021 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696023 jl 0x1169602d */
  if ((C.sf!=C.of)) goto L_1169602d;
  /* 11696025 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11696029 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_1169602d:;
  /* 1169602d mov esi, esp */
  ESI = (ESP);
  /* 1169602f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11696032 push edx */
  push32((uint32_t)(EDX));
  /* 11696033 call dword ptr [0x116d34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f4))), 0x11696039u);
  /* 11696039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169603c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169603e call 0x11699d90 */
  push32(0x11696043u); f_11699d90();
  /* 11696043 pop edi */
  EDI = (pop32());
  /* 11696044 pop esi */
  ESI = (pop32());
  /* 11696045 pop ebx */
  EBX = (pop32());
  /* 11696046 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696049 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169604b call 0x11699d90 */
  push32(0x11696050u); f_11699d90();
  /* 11696050 mov esp, ebp */
  ESP = (EBP);
  /* 11696052 pop ebp */
  EBP = (pop32());
  /* 11696053 ret 4 */
  ESPCHK(0x11695fb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006080 @ 0x11696080 (114 bytes, 42 insns) */
void f_11696080(void) {
  FTRACE(0x11696080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696080 push ebp */
  push32((uint32_t)(EBP));
  /* 11696081 mov ebp, esp */
  EBP = (ESP);
  /* 11696083 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696086 push ebx */
  push32((uint32_t)(EBX));
  /* 11696087 push esi */
  push32((uint32_t)(ESI));
  /* 11696088 push edi */
  push32((uint32_t)(EDI));
  /* 11696089 push ecx */
  push32((uint32_t)(ECX));
  /* 1169608a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 1169608d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11696092 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696097 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696099 pop ecx */
  ECX = (pop32());
  /* 1169609a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169609d mov esi, esp */
  ESI = (ESP);
  /* 1169609f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 116960a2 push eax */
  push32((uint32_t)(EAX));
  /* 116960a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116960a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116960a8 push ecx */
  push32((uint32_t)(ECX));
  /* 116960a9 call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x116960afu);
  /* 116960af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116960b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116960b4 call 0x11699d90 */
  push32(0x116960b9u); f_11699d90();
  /* 116960b9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116960bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116960c2 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 116960c5 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 116960c8 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 116960cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116960d0 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 116960d3 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 116960d6 fmul dword ptr [0x116ca050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x116ca050)));
  /* 116960dc call 0x1169a07c */
  push32(0x116960e1u); f_1169a07c();
  /* 116960e1 pop edi */
  EDI = (pop32());
  /* 116960e2 pop esi */
  ESI = (pop32());
  /* 116960e3 pop ebx */
  EBX = (pop32());
  /* 116960e4 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116960e7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116960e9 call 0x11699d90 */
  push32(0x116960eeu); f_11699d90();
  /* 116960ee mov esp, ebp */
  ESP = (EBP);
  /* 116960f0 pop ebp */
  EBP = (pop32());
  /* 116960f1 ret  */
  ESPCHK(0x11696080u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x11696110 (94 bytes, 37 insns) */
void f_11696110(void) {
  FTRACE(0x11696110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696110 push ebp */
  push32((uint32_t)(EBP));
  /* 11696111 mov ebp, esp */
  EBP = (ESP);
  /* 11696113 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696116 push ebx */
  push32((uint32_t)(EBX));
  /* 11696117 push esi */
  push32((uint32_t)(ESI));
  /* 11696118 push edi */
  push32((uint32_t)(EDI));
  /* 11696119 push ecx */
  push32((uint32_t)(ECX));
  /* 1169611a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169611d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696129 pop ecx */
  ECX = (pop32());
  /* 1169612a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169612d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696130 call 0x1169119a */
  push32(0x11696135u); f_1169119a();
  /* 11696135 mov esi, esp */
  ESI = (ESP);
  /* 11696137 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1169613a push eax */
  push32((uint32_t)(EAX));
  /* 1169613b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169613e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11696141 push edx */
  push32((uint32_t)(EDX));
  /* 11696142 call dword ptr [0x116d3558] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3558))), 0x11696148u);
  /* 11696148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169614b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169614d call 0x11699d90 */
  push32(0x11696152u); f_11699d90();
  /* 11696152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696155 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696158 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 1169615b pop edi */
  EDI = (pop32());
  /* 1169615c pop esi */
  ESI = (pop32());
  /* 1169615d pop ebx */
  EBX = (pop32());
  /* 1169615e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696161 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696163 call 0x11699d90 */
  push32(0x11696168u); f_11699d90();
  /* 11696168 mov esp, ebp */
  ESP = (EBP);
  /* 1169616a pop ebp */
  EBP = (pop32());
  /* 1169616b ret 4 */
  ESPCHK(0x11696110u, _esp0);
  ESP += 8; return;
}

/* FUN_10006190 @ 0x11696190 (39 bytes, 20 insns) */
void f_11696190(void) {
  FTRACE(0x11696190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696190 push ebp */
  push32((uint32_t)(EBP));
  /* 11696191 mov ebp, esp */
  EBP = (ESP);
  /* 11696193 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696196 push ebx */
  push32((uint32_t)(EBX));
  /* 11696197 push esi */
  push32((uint32_t)(ESI));
  /* 11696198 push edi */
  push32((uint32_t)(EDI));
  /* 11696199 push ecx */
  push32((uint32_t)(ECX));
  /* 1169619a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169619d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116961a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116961a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116961a9 pop ecx */
  ECX = (pop32());
  /* 116961aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116961ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116961b0 pop edi */
  EDI = (pop32());
  /* 116961b1 pop esi */
  ESI = (pop32());
  /* 116961b2 pop ebx */
  EBX = (pop32());
  /* 116961b3 mov esp, ebp */
  ESP = (EBP);
  /* 116961b5 pop ebp */
  EBP = (pop32());
  /* 116961b6 ret  */
  ESPCHK(0x11696190u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x116961c0 (98 bytes, 39 insns) */
void f_116961c0(void) {
  FTRACE(0x116961c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116961c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116961c1 mov ebp, esp */
  EBP = (ESP);
  /* 116961c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116961c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116961c7 push esi */
  push32((uint32_t)(ESI));
  /* 116961c8 push edi */
  push32((uint32_t)(EDI));
  /* 116961c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116961ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116961cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116961d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116961d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116961d9 pop ecx */
  ECX = (pop32());
  /* 116961da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116961dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116961e0 call 0x1169119a */
  push32(0x116961e5u); f_1169119a();
  /* 116961e5 mov esi, esp */
  ESI = (ESP);
  /* 116961e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116961e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116961eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116961ee push eax */
  push32((uint32_t)(EAX));
  /* 116961ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116961f2 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 116961f5 push edx */
  push32((uint32_t)(EDX));
  /* 116961f6 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x116961fcu);
  /* 116961fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116961ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696201 call 0x11699d90 */
  push32(0x11696206u); f_11699d90();
  /* 11696206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169620c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 1169620f pop edi */
  EDI = (pop32());
  /* 11696210 pop esi */
  ESI = (pop32());
  /* 11696211 pop ebx */
  EBX = (pop32());
  /* 11696212 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696215 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696217 call 0x11699d90 */
  push32(0x1169621cu); f_11699d90();
  /* 1169621c mov esp, ebp */
  ESP = (EBP);
  /* 1169621e pop ebp */
  EBP = (pop32());
  /* 1169621f ret 4 */
  ESPCHK(0x116961c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006240 @ 0x11696240 (87 bytes, 35 insns) */
void f_11696240(void) {
  FTRACE(0x11696240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696240 push ebp */
  push32((uint32_t)(EBP));
  /* 11696241 mov ebp, esp */
  EBP = (ESP);
  /* 11696243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696246 push ebx */
  push32((uint32_t)(EBX));
  /* 11696247 push esi */
  push32((uint32_t)(ESI));
  /* 11696248 push edi */
  push32((uint32_t)(EDI));
  /* 11696249 push ecx */
  push32((uint32_t)(ECX));
  /* 1169624a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169624d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696259 pop ecx */
  ECX = (pop32());
  /* 1169625a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169625d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696260 call 0x1169119a */
  push32(0x11696265u); f_1169119a();
  /* 11696265 mov esi, esp */
  ESI = (ESP);
  /* 11696267 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169626c push eax */
  push32((uint32_t)(EAX));
  /* 1169626d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696270 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11696273 push edx */
  push32((uint32_t)(EDX));
  /* 11696274 call dword ptr [0x116d34f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f0))), 0x1169627au);
  /* 1169627a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169627d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169627f call 0x11699d90 */
  push32(0x11696284u); f_11699d90();
  /* 11696284 pop edi */
  EDI = (pop32());
  /* 11696285 pop esi */
  ESI = (pop32());
  /* 11696286 pop ebx */
  EBX = (pop32());
  /* 11696287 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169628a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169628c call 0x11699d90 */
  push32(0x11696291u); f_11699d90();
  /* 11696291 mov esp, ebp */
  ESP = (EBP);
  /* 11696293 pop ebp */
  EBP = (pop32());
  /* 11696294 ret 4 */
  ESPCHK(0x11696240u, _esp0);
  ESP += 8; return;
}

/* FUN_100062b0 @ 0x116962b0 (90 bytes, 37 insns) */
void f_116962b0(void) {
  FTRACE(0x116962b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116962b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116962b1 mov ebp, esp */
  EBP = (ESP);
  /* 116962b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116962b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116962b7 push esi */
  push32((uint32_t)(ESI));
  /* 116962b8 push edi */
  push32((uint32_t)(EDI));
  /* 116962b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116962ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 116962bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 116962c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116962c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116962c9 pop ecx */
  ECX = (pop32());
  /* 116962ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116962cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 116962d1 mov esi, esp */
  ESI = (ESP);
  /* 116962d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116962d6 push eax */
  push32((uint32_t)(EAX));
  /* 116962d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116962da mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 116962dd push edx */
  push32((uint32_t)(EDX));
  /* 116962de call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x116962e4u);
  /* 116962e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116962e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116962e9 call 0x11699d90 */
  push32(0x116962eeu); f_11699d90();
  /* 116962ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116962f0 jle 0x116962f6 */
  if ((C.zf||C.sf!=C.of)) goto L_116962f6;
  /* 116962f2 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_116962f6:;
  /* 116962f6 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116962f9 pop edi */
  EDI = (pop32());
  /* 116962fa pop esi */
  ESI = (pop32());
  /* 116962fb pop ebx */
  EBX = (pop32());
  /* 116962fc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116962ff cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696301 call 0x11699d90 */
  push32(0x11696306u); f_11699d90();
  /* 11696306 mov esp, ebp */
  ESP = (EBP);
  /* 11696308 pop ebp */
  EBP = (pop32());
  /* 11696309 ret  */
  ESPCHK(0x116962b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x11696320 (89 bytes, 36 insns) */
void f_11696320(void) {
  FTRACE(0x11696320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696320 push ebp */
  push32((uint32_t)(EBP));
  /* 11696321 mov ebp, esp */
  EBP = (ESP);
  /* 11696323 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696326 push ebx */
  push32((uint32_t)(EBX));
  /* 11696327 push esi */
  push32((uint32_t)(ESI));
  /* 11696328 push edi */
  push32((uint32_t)(EDI));
  /* 11696329 push ecx */
  push32((uint32_t)(ECX));
  /* 1169632a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169632d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11696332 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696337 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696339 pop ecx */
  ECX = (pop32());
  /* 1169633a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169633d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11696341 mov esi, esp */
  ESI = (ESP);
  /* 11696343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696346 push eax */
  push32((uint32_t)(EAX));
  /* 11696347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169634a push ecx */
  push32((uint32_t)(ECX));
  /* 1169634b call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x11696351u);
  /* 11696351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696356 call 0x11699d90 */
  push32(0x1169635bu); f_11699d90();
  /* 1169635b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169635d jle 0x11696363 */
  if ((C.zf||C.sf!=C.of)) goto L_11696363;
  /* 1169635f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11696363:;
  /* 11696363 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11696366 pop edi */
  EDI = (pop32());
  /* 11696367 pop esi */
  ESI = (pop32());
  /* 11696368 pop ebx */
  EBX = (pop32());
  /* 11696369 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169636c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169636e call 0x11699d90 */
  push32(0x11696373u); f_11699d90();
  /* 11696373 mov esp, ebp */
  ESP = (EBP);
  /* 11696375 pop ebp */
  EBP = (pop32());
  /* 11696376 ret 4 */
  ESPCHK(0x11696320u, _esp0);
  ESP += 8; return;
}

/* FUN_10006390 @ 0x11696390 (47 bytes, 22 insns) */
void f_11696390(void) {
  FTRACE(0x11696390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696390 push ebp */
  push32((uint32_t)(EBP));
  /* 11696391 mov ebp, esp */
  EBP = (ESP);
  /* 11696393 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696396 push ebx */
  push32((uint32_t)(EBX));
  /* 11696397 push esi */
  push32((uint32_t)(ESI));
  /* 11696398 push edi */
  push32((uint32_t)(EDI));
  /* 11696399 push ecx */
  push32((uint32_t)(ECX));
  /* 1169639a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169639d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116963a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116963a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116963a9 pop ecx */
  ECX = (pop32());
  /* 116963aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116963ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116963b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116963b3 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 116963b6 pop edi */
  EDI = (pop32());
  /* 116963b7 pop esi */
  ESI = (pop32());
  /* 116963b8 pop ebx */
  EBX = (pop32());
  /* 116963b9 mov esp, ebp */
  ESP = (EBP);
  /* 116963bb pop ebp */
  EBP = (pop32());
  /* 116963bc ret 4 */
  ESPCHK(0x11696390u, _esp0);
  ESP += 8; return;
}

/* FUN_100063d0 @ 0x116963d0 (81 bytes, 33 insns) */
void f_116963d0(void) {
  FTRACE(0x116963d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116963d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116963d1 mov ebp, esp */
  EBP = (ESP);
  /* 116963d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116963d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116963d7 push esi */
  push32((uint32_t)(ESI));
  /* 116963d8 push edi */
  push32((uint32_t)(EDI));
  /* 116963d9 push ecx */
  push32((uint32_t)(ECX));
  /* 116963da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116963dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116963e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116963e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116963e9 pop ecx */
  ECX = (pop32());
  /* 116963ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116963ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116963f0 call 0x1169119a */
  push32(0x116963f5u); f_1169119a();
  /* 116963f5 mov esi, esp */
  ESI = (ESP);
  /* 116963f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116963f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116963fc mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 116963ff push ecx */
  push32((uint32_t)(ECX));
  /* 11696400 call dword ptr [0x116d358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d358c))), 0x11696406u);
  /* 11696406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169640b call 0x11699d90 */
  push32(0x11696410u); f_11699d90();
  /* 11696410 pop edi */
  EDI = (pop32());
  /* 11696411 pop esi */
  ESI = (pop32());
  /* 11696412 pop ebx */
  EBX = (pop32());
  /* 11696413 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696416 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696418 call 0x11699d90 */
  push32(0x1169641du); f_11699d90();
  /* 1169641d mov esp, ebp */
  ESP = (EBP);
  /* 1169641f pop ebp */
  EBP = (pop32());
  /* 11696420 ret  */
  ESPCHK(0x116963d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x11696440 (99 bytes, 38 insns) */
void f_11696440(void) {
  FTRACE(0x11696440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696440 push ebp */
  push32((uint32_t)(EBP));
  /* 11696441 mov ebp, esp */
  EBP = (ESP);
  /* 11696443 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696446 push ebx */
  push32((uint32_t)(EBX));
  /* 11696447 push esi */
  push32((uint32_t)(ESI));
  /* 11696448 push edi */
  push32((uint32_t)(EDI));
  /* 11696449 push ecx */
  push32((uint32_t)(ECX));
  /* 1169644a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169644d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696452 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696457 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696459 pop ecx */
  ECX = (pop32());
  /* 1169645a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169645d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696460 call 0x1169101e */
  push32(0x11696465u); f_1169101e();
  /* 11696465 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169646a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169646c je 0x11696492 */
  if (C.zf) goto L_11696492;
  /* 1169646e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696471 call 0x11691280 */
  push32(0x11696476u); f_11691280();
  /* 11696476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696479 call 0x11691096 */
  push32(0x1169647eu); f_11691096();
  /* 1169647e cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696481 jge 0x11696492 */
  if ((C.sf==C.of)) goto L_11696492;
  /* 11696483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696486 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11696489 push ecx */
  push32((uint32_t)(ECX));
  /* 1169648a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169648d call 0x1169121c */
  push32(0x11696492u); f_1169121c();
L_11696492:;
  /* 11696492 pop edi */
  EDI = (pop32());
  /* 11696493 pop esi */
  ESI = (pop32());
  /* 11696494 pop ebx */
  EBX = (pop32());
  /* 11696495 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696498 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169649a call 0x11699d90 */
  push32(0x1169649fu); f_11699d90();
  /* 1169649f mov esp, ebp */
  ESP = (EBP);
  /* 116964a1 pop ebp */
  EBP = (pop32());
  /* 116964a2 ret  */
  ESPCHK(0x11696440u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x116964c0 (76 bytes, 32 insns) */
void f_116964c0(void) {
  FTRACE(0x116964c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116964c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116964c1 mov ebp, esp */
  EBP = (ESP);
  /* 116964c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116964c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116964c7 push esi */
  push32((uint32_t)(ESI));
  /* 116964c8 push edi */
  push32((uint32_t)(EDI));
  /* 116964c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116964ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116964cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116964d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116964d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116964d9 pop ecx */
  ECX = (pop32());
  /* 116964da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116964dd mov esi, esp */
  ESI = (ESP);
  /* 116964df push 0 */
  push32((uint32_t)(0x0u));
  /* 116964e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116964e4 push eax */
  push32((uint32_t)(EAX));
  /* 116964e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116964e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116964e9 call dword ptr [0x116d3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3594))), 0x116964efu);
  /* 116964ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116964f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116964f4 call 0x11699d90 */
  push32(0x116964f9u); f_11699d90();
  /* 116964f9 pop edi */
  EDI = (pop32());
  /* 116964fa pop esi */
  ESI = (pop32());
  /* 116964fb pop ebx */
  EBX = (pop32());
  /* 116964fc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116964ff cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696501 call 0x11699d90 */
  push32(0x11696506u); f_11699d90();
  /* 11696506 mov esp, ebp */
  ESP = (EBP);
  /* 11696508 pop ebp */
  EBP = (pop32());
  /* 11696509 ret 4 */
  ESPCHK(0x116964c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006520 @ 0x11696520 (95 bytes, 37 insns) */
void f_11696520(void) {
  FTRACE(0x11696520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696520 push ebp */
  push32((uint32_t)(EBP));
  /* 11696521 mov ebp, esp */
  EBP = (ESP);
  /* 11696523 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696526 push ebx */
  push32((uint32_t)(EBX));
  /* 11696527 push esi */
  push32((uint32_t)(ESI));
  /* 11696528 push edi */
  push32((uint32_t)(EDI));
  /* 11696529 push ecx */
  push32((uint32_t)(ECX));
  /* 1169652a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169652d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11696532 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696537 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696539 pop ecx */
  ECX = (pop32());
  /* 1169653a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169653d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11696541 mov esi, esp */
  ESI = (ESP);
  /* 11696543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696545 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1169654a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169654d call 0x116912d5 */
  push32(0x11696552u); f_116912d5();
  /* 11696552 push eax */
  push32((uint32_t)(EAX));
  /* 11696553 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11696559u);
  /* 11696559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169655c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169655e call 0x11699d90 */
  push32(0x11696563u); f_11699d90();
  /* 11696563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696565 jle 0x1169656b */
  if ((C.zf||C.sf!=C.of)) goto L_1169656b;
  /* 11696567 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1169656b:;
  /* 1169656b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169656e pop edi */
  EDI = (pop32());
  /* 1169656f pop esi */
  ESI = (pop32());
  /* 11696570 pop ebx */
  EBX = (pop32());
  /* 11696571 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696574 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696576 call 0x11699d90 */
  push32(0x1169657bu); f_11699d90();
  /* 1169657b mov esp, ebp */
  ESP = (EBP);
  /* 1169657d pop ebp */
  EBP = (pop32());
  /* 1169657e ret  */
  ESPCHK(0x11696520u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x116965a0 (47 bytes, 22 insns) */
void f_116965a0(void) {
  FTRACE(0x116965a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116965a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116965a1 mov ebp, esp */
  EBP = (ESP);
  /* 116965a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116965a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116965a7 push esi */
  push32((uint32_t)(ESI));
  /* 116965a8 push edi */
  push32((uint32_t)(EDI));
  /* 116965a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116965aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116965ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116965b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116965b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116965b9 pop ecx */
  ECX = (pop32());
  /* 116965ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116965bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116965c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116965c3 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 116965c6 pop edi */
  EDI = (pop32());
  /* 116965c7 pop esi */
  ESI = (pop32());
  /* 116965c8 pop ebx */
  EBX = (pop32());
  /* 116965c9 mov esp, ebp */
  ESP = (EBP);
  /* 116965cb pop ebp */
  EBP = (pop32());
  /* 116965cc ret 4 */
  ESPCHK(0x116965a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100065e0 @ 0x116965e0 (64 bytes, 27 insns) */
void f_116965e0(void) {
  FTRACE(0x116965e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116965e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116965e1 mov ebp, esp */
  EBP = (ESP);
  /* 116965e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116965e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116965e7 push esi */
  push32((uint32_t)(ESI));
  /* 116965e8 push edi */
  push32((uint32_t)(EDI));
  /* 116965e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116965ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116965ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116965f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116965f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116965f9 pop ecx */
  ECX = (pop32());
  /* 116965fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116965fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696600 call 0x116911ef */
  push32(0x11696605u); f_116911ef();
  /* 11696605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696608 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 1169660c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169660f pop edi */
  EDI = (pop32());
  /* 11696610 pop esi */
  ESI = (pop32());
  /* 11696611 pop ebx */
  EBX = (pop32());
  /* 11696612 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696615 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696617 call 0x11699d90 */
  push32(0x1169661cu); f_11699d90();
  /* 1169661c mov esp, ebp */
  ESP = (EBP);
  /* 1169661e pop ebp */
  EBP = (pop32());
  /* 1169661f ret  */
  ESPCHK(0x116965e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x11696630 (57 bytes, 25 insns) */
void f_11696630(void) {
  FTRACE(0x11696630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696630 push ebp */
  push32((uint32_t)(EBP));
  /* 11696631 mov ebp, esp */
  EBP = (ESP);
  /* 11696633 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696636 push ebx */
  push32((uint32_t)(EBX));
  /* 11696637 push esi */
  push32((uint32_t)(ESI));
  /* 11696638 push edi */
  push32((uint32_t)(EDI));
  /* 11696639 push ecx */
  push32((uint32_t)(ECX));
  /* 1169663a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169663d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696642 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696647 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696649 pop ecx */
  ECX = (pop32());
  /* 1169664a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169664d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696650 call 0x1169128a */
  push32(0x11696655u); f_1169128a();
  /* 11696655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696658 pop edi */
  EDI = (pop32());
  /* 11696659 pop esi */
  ESI = (pop32());
  /* 1169665a pop ebx */
  EBX = (pop32());
  /* 1169665b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169665e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696660 call 0x11699d90 */
  push32(0x11696665u); f_11699d90();
  /* 11696665 mov esp, ebp */
  ESP = (EBP);
  /* 11696667 pop ebp */
  EBP = (pop32());
  /* 11696668 ret  */
  ESPCHK(0x11696630u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x11696680 (56 bytes, 25 insns) */
void f_11696680(void) {
  FTRACE(0x11696680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696680 push ebp */
  push32((uint32_t)(EBP));
  /* 11696681 mov ebp, esp */
  EBP = (ESP);
  /* 11696683 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696686 push ebx */
  push32((uint32_t)(EBX));
  /* 11696687 push esi */
  push32((uint32_t)(ESI));
  /* 11696688 push edi */
  push32((uint32_t)(EDI));
  /* 11696689 push ecx */
  push32((uint32_t)(ECX));
  /* 1169668a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169668d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696692 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696697 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696699 pop ecx */
  ECX = (pop32());
  /* 1169669a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169669d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116966a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116966a3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 116966a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116966a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116966ac mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 116966af pop edi */
  EDI = (pop32());
  /* 116966b0 pop esi */
  ESI = (pop32());
  /* 116966b1 pop ebx */
  EBX = (pop32());
  /* 116966b2 mov esp, ebp */
  ESP = (EBP);
  /* 116966b4 pop ebp */
  EBP = (pop32());
  /* 116966b5 ret 8 */
  ESPCHK(0x11696680u, _esp0);
  ESP += 12; return;
}

/* FUN_100066d0 @ 0x116966d0 (566 bytes, 177 insns) [1 switch table(s)] */
void f_116966d0(void) {
  FTRACE(0x116966d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116966d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116966d1 mov ebp, esp */
  EBP = (ESP);
  /* 116966d3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116966d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116966d7 push esi */
  push32((uint32_t)(ESI));
  /* 116966d8 push edi */
  push32((uint32_t)(EDI));
  /* 116966d9 push ecx */
  push32((uint32_t)(ECX));
  /* 116966da lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 116966dd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 116966e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116966e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116966e9 pop ecx */
  ECX = (pop32());
  /* 116966ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116966ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116966f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116966f2 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 116966f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116966f7 je 0x116968f5 */
  if (C.zf) goto L_116968f5;
  /* 116966fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696700 call 0x1169101e */
  push32(0x11696705u); f_1169101e();
  /* 11696705 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169670a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169670c je 0x116968f5 */
  if (C.zf) goto L_116968f5;
  /* 11696712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696715 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696719 je 0x116968f5 */
  if (C.zf) goto L_116968f5;
  /* 1169671f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696722 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696726 je 0x1169676d */
  if (C.zf) goto L_1169676d;
  /* 11696728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169672b call 0x11691096 */
  push32(0x11696730u); f_11691096();
  /* 11696730 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696733 jge 0x1169673d */
  if ((C.sf==C.of)) goto L_1169673d;
  /* 11696735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696738 call 0x1169129e */
  push32(0x1169673du); f_1169129e();
L_1169673d:;
  /* 1169673d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696740 call 0x116912a3 */
  push32(0x11696745u); f_116912a3();
  /* 11696745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169674a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169674c je 0x11696768 */
  if (C.zf) goto L_11696768;
  /* 1169674e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696751 push ecx */
  push32((uint32_t)(ECX));
  /* 11696752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696755 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11696758 push eax */
  push32((uint32_t)(EAX));
  /* 11696759 call 0x116912d0 */
  push32(0x1169675eu); f_116912d0();
  /* 1169675e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696761 mov ecx, eax */
  ECX = (EAX);
  /* 11696763 call 0x116911e5 */
  push32(0x11696768u); f_116911e5();
L_11696768:;
  /* 11696768 jmp 0x116968f5 */
  goto L_116968f5;
L_1169676d:;
  /* 1169676d mov esi, esp */
  ESI = (ESP);
  /* 1169676f push 0 */
  push32((uint32_t)(0x0u));
  /* 11696771 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11696776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696779 call 0x116912d5 */
  push32(0x1169677eu); f_116912d5();
  /* 1169677e push eax */
  push32((uint32_t)(EAX));
  /* 1169677f call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11696785u);
  /* 11696785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169678a call 0x11699d90 */
  push32(0x1169678fu); f_11699d90();
  /* 1169678f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696791 jle 0x116968f5 */
  if ((C.zf||C.sf!=C.of)) goto L_116968f5;
  /* 11696797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169679a cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169679e je 0x116968f5 */
  if (C.zf) goto L_116968f5;
  /* 116967a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116967a7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 116967aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116967ad cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116967b1 ja 0x11696882 */
  if ((!C.cf&&!C.zf)) goto L_11696882;
  /* 116967b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116967ba jmp dword ptr [ecx*4 + 0x11696906] */
  switch (ECX) {
    case 0: goto L_116967c1;
    case 1: goto L_116967e4;
    case 2: goto L_11696804;
    case 3: goto L_11696824;
    case 4: goto L_11696844;
    case 5: goto L_11696864;
    default: x86_unimpl("switch@0x116967ba out of table"); return;
  }
L_116967c1:;
  /* 116967c1 mov esi, esp */
  ESI = (ESP);
  /* 116967c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116967c6 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 116967c9 push eax */
  push32((uint32_t)(EAX));
  /* 116967ca push 0x116ca860 */
  push32((uint32_t)(0x116ca860u));
  /* 116967cf call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x116967d5u);
  /* 116967d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116967d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116967da call 0x11699d90 */
  push32(0x116967dfu); f_11699d90();
  /* 116967df jmp 0x11696882 */
  goto L_11696882;
L_116967e4:;
  /* 116967e4 mov esi, esp */
  ESI = (ESP);
  /* 116967e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116967e9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 116967ec push edx */
  push32((uint32_t)(EDX));
  /* 116967ed push 0x116ca854 */
  push32((uint32_t)(0x116ca854u));
  /* 116967f2 call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x116967f8u);
  /* 116967f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116967fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116967fd call 0x11699d90 */
  push32(0x11696802u); f_11699d90();
  /* 11696802 jmp 0x11696882 */
  goto L_11696882;
L_11696804:;
  /* 11696804 mov esi, esp */
  ESI = (ESP);
  /* 11696806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696809 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1169680c push ecx */
  push32((uint32_t)(ECX));
  /* 1169680d push 0x116ca848 */
  push32((uint32_t)(0x116ca848u));
  /* 11696812 call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x11696818u);
  /* 11696818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169681b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169681d call 0x11699d90 */
  push32(0x11696822u); f_11699d90();
  /* 11696822 jmp 0x11696882 */
  goto L_11696882;
L_11696824:;
  /* 11696824 mov esi, esp */
  ESI = (ESP);
  /* 11696826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696829 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1169682c push eax */
  push32((uint32_t)(EAX));
  /* 1169682d push 0x116ca83c */
  push32((uint32_t)(0x116ca83cu));
  /* 11696832 call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x11696838u);
  /* 11696838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169683b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169683d call 0x11699d90 */
  push32(0x11696842u); f_11699d90();
  /* 11696842 jmp 0x11696882 */
  goto L_11696882;
L_11696844:;
  /* 11696844 mov esi, esp */
  ESI = (ESP);
  /* 11696846 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696849 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 1169684c push edx */
  push32((uint32_t)(EDX));
  /* 1169684d push 0x116ca830 */
  push32((uint32_t)(0x116ca830u));
  /* 11696852 call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x11696858u);
  /* 11696858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169685b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169685d call 0x11699d90 */
  push32(0x11696862u); f_11699d90();
  /* 11696862 jmp 0x11696882 */
  goto L_11696882;
L_11696864:;
  /* 11696864 mov esi, esp */
  ESI = (ESP);
  /* 11696866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696869 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1169686c push ecx */
  push32((uint32_t)(ECX));
  /* 1169686d push 0x116ca824 */
  push32((uint32_t)(0x116ca824u));
  /* 11696872 call dword ptr [0x116d3544] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3544))), 0x11696878u);
  /* 11696878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169687b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169687d call 0x11699d90 */
  push32(0x11696882u); f_11699d90();
L_11696882:;
  /* 11696882 mov esi, esp */
  ESI = (ESP);
  /* 11696884 push 0x116ca814 */
  push32((uint32_t)(0x116ca814u));
  /* 11696889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169688b push 0x116ca7e0 */
  push32((uint32_t)(0x116ca7e0u));
  /* 11696890 push 7 */
  push32((uint32_t)(0x7u));
  /* 11696892 call dword ptr [0x116d34ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34ec))), 0x11696898u);
  /* 11696898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169689b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169689d call 0x11699d90 */
  push32(0x116968a2u); f_11699d90();
  /* 116968a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116968a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116968a9 je 0x116968b3 */
  if (C.zf) goto L_116968b3;
  /* 116968ab cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116968af je 0x116968bf */
  if (C.zf) goto L_116968bf;
  /* 116968b1 jmp 0x116968c7 */
  goto L_116968c7;
L_116968b3:;
  /* 116968b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116968b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116968b8 call 0x11691127 */
  push32(0x116968bdu); f_11691127();
  /* 116968bd jmp 0x116968c7 */
  goto L_116968c7;
L_116968bf:;
  /* 116968bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116968c2 call 0x11691159 */
  push32(0x116968c7u); f_11691159();
L_116968c7:;
  /* 116968c7 mov esi, esp */
  ESI = (ESP);
  /* 116968c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116968cc mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 116968cf push eax */
  push32((uint32_t)(EAX));
  /* 116968d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116968d3 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 116968d6 push edx */
  push32((uint32_t)(EDX));
  /* 116968d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116968d9 call dword ptr [0x116d3530] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3530))), 0x116968dfu);
  /* 116968df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116968e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116968e4 call 0x11699d90 */
  push32(0x116968e9u); f_11699d90();
  /* 116968e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116968eb push 0 */
  push32((uint32_t)(0x0u));
  /* 116968ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116968f0 call 0x116911c7 */
  push32(0x116968f5u); f_116911c7();
L_116968f5:;
  /* 116968f5 pop edi */
  EDI = (pop32());
  /* 116968f6 pop esi */
  ESI = (pop32());
  /* 116968f7 pop ebx */
  EBX = (pop32());
  /* 116968f8 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116968fb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116968fd call 0x11699d90 */
  push32(0x11696902u); f_11699d90();
  /* 11696902 mov esp, ebp */
  ESP = (EBP);
  /* 11696904 pop ebp */
  EBP = (pop32());
  /* 11696905 ret  */
  ESPCHK(0x116966d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069c0 @ 0x116969c0 (112 bytes, 43 insns) */
void f_116969c0(void) {
  FTRACE(0x116969c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116969c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116969c1 mov ebp, esp */
  EBP = (ESP);
  /* 116969c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116969c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116969c7 push esi */
  push32((uint32_t)(ESI));
  /* 116969c8 push edi */
  push32((uint32_t)(EDI));
  /* 116969c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116969ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116969cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116969d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116969d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116969d9 pop ecx */
  ECX = (pop32());
  /* 116969da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116969dd push 6 */
  push32((uint32_t)(0x6u));
  /* 116969df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116969e2 call 0x11691127 */
  push32(0x116969e7u); f_11691127();
  /* 116969e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116969ea call 0x1169119a */
  push32(0x116969efu); f_1169119a();
  /* 116969ef mov esi, esp */
  ESI = (ESP);
  /* 116969f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116969f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116969f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 116969f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116969fa call 0x116912d5 */
  push32(0x116969ffu); f_116912d5();
  /* 116969ff push eax */
  push32((uint32_t)(EAX));
  /* 11696a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696a03 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11696a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11696a07 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11696a0du);
  /* 11696a0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696a10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696a12 call 0x11699d90 */
  push32(0x11696a17u); f_11699d90();
  /* 11696a17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696a1a call 0x116912c6 */
  push32(0x11696a1fu); f_116912c6();
  /* 11696a1f pop edi */
  EDI = (pop32());
  /* 11696a20 pop esi */
  ESI = (pop32());
  /* 11696a21 pop ebx */
  EBX = (pop32());
  /* 11696a22 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696a25 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696a27 call 0x11699d90 */
  push32(0x11696a2cu); f_11699d90();
  /* 11696a2c mov esp, ebp */
  ESP = (EBP);
  /* 11696a2e pop ebp */
  EBP = (pop32());
  /* 11696a2f ret  */
  ESPCHK(0x116969c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x11696a50 (75 bytes, 32 insns) */
void f_11696a50(void) {
  FTRACE(0x11696a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11696a51 mov ebp, esp */
  EBP = (ESP);
  /* 11696a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11696a57 push esi */
  push32((uint32_t)(ESI));
  /* 11696a58 push edi */
  push32((uint32_t)(EDI));
  /* 11696a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11696a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696a69 pop ecx */
  ECX = (pop32());
  /* 11696a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696a6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11696a70 push eax */
  push32((uint32_t)(EAX));
  /* 11696a71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11696a74 push ecx */
  push32((uint32_t)(ECX));
  /* 11696a75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696a78 push edx */
  push32((uint32_t)(EDX));
  /* 11696a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696a7c call 0x11691014 */
  push32(0x11696a81u); f_11691014();
  /* 11696a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696a84 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11696a88 pop edi */
  EDI = (pop32());
  /* 11696a89 pop esi */
  ESI = (pop32());
  /* 11696a8a pop ebx */
  EBX = (pop32());
  /* 11696a8b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696a8e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696a90 call 0x11699d90 */
  push32(0x11696a95u); f_11699d90();
  /* 11696a95 mov esp, ebp */
  ESP = (EBP);
  /* 11696a97 pop ebp */
  EBP = (pop32());
  /* 11696a98 ret 0xc */
  ESPCHK(0x11696a50u, _esp0);
  ESP += 16; return;
}

/* FUN_10006ab0 @ 0x11696ab0 (95 bytes, 37 insns) */
void f_11696ab0(void) {
  FTRACE(0x11696ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11696ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11696ab3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11696ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11696ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11696ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11696aba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11696abd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11696ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696ac9 pop ecx */
  ECX = (pop32());
  /* 11696aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696acd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11696ad1 mov esi, esp */
  ESI = (ESP);
  /* 11696ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696ad5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11696ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696add call 0x116912d5 */
  push32(0x11696ae2u); f_116912d5();
  /* 11696ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11696ae3 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11696ae9u);
  /* 11696ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696aec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696aee call 0x11699d90 */
  push32(0x11696af3u); f_11699d90();
  /* 11696af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696af5 jle 0x11696afb */
  if ((C.zf||C.sf!=C.of)) goto L_11696afb;
  /* 11696af7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11696afb:;
  /* 11696afb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11696afe pop edi */
  EDI = (pop32());
  /* 11696aff pop esi */
  ESI = (pop32());
  /* 11696b00 pop ebx */
  EBX = (pop32());
  /* 11696b01 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696b04 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696b06 call 0x11699d90 */
  push32(0x11696b0bu); f_11699d90();
  /* 11696b0b mov esp, ebp */
  ESP = (EBP);
  /* 11696b0d pop ebp */
  EBP = (pop32());
  /* 11696b0e ret  */
  ESPCHK(0x11696ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x11696b30 (78 bytes, 28 insns) */
void f_11696b30(void) {
  FTRACE(0x11696b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11696b31 mov ebp, esp */
  EBP = (ESP);
  /* 11696b33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11696b37 push esi */
  push32((uint32_t)(ESI));
  /* 11696b38 push edi */
  push32((uint32_t)(EDI));
  /* 11696b39 push ecx */
  push32((uint32_t)(ECX));
  /* 11696b3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696b3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696b42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696b47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696b49 pop ecx */
  ECX = (pop32());
  /* 11696b4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696b4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696b53 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11696b56 mov edx, dword ptr [0x116d04e8] */
  EDX = (r32((uint32_t)(0x116d04e8)));
  /* 11696b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696b5f mov dword ptr [edx*4 + 0x116d0498], eax */
  w32((uint32_t)(EDX*4 + 0x116d0498), (EAX));
  /* 11696b66 mov ecx, dword ptr [0x116d04e8] */
  ECX = (r32((uint32_t)(0x116d04e8)));
  /* 11696b6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696b6f mov dword ptr [0x116d04e8], ecx */
  w32((uint32_t)(0x116d04e8), (ECX));
  /* 11696b75 pop edi */
  EDI = (pop32());
  /* 11696b76 pop esi */
  ESI = (pop32());
  /* 11696b77 pop ebx */
  EBX = (pop32());
  /* 11696b78 mov esp, ebp */
  ESP = (EBP);
  /* 11696b7a pop ebp */
  EBP = (pop32());
  /* 11696b7b ret 4 */
  ESPCHK(0x11696b30u, _esp0);
  ESP += 8; return;
}

/* FUN_10006ba0 @ 0x11696ba0 (128 bytes, 44 insns) */
void f_11696ba0(void) {
  FTRACE(0x11696ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11696ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11696ba3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11696ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11696ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11696ba9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11696bac mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11696bb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696bb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696bb8 mov eax, dword ptr [0x116d0498] */
  EAX = (r32((uint32_t)(0x116d0498)));
  /* 11696bbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11696bc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11696bc7 jmp 0x11696bd2 */
  goto L_11696bd2;
L_11696bc9:;
  /* 11696bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11696bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696bcf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11696bd2:;
  /* 11696bd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11696bd5 cmp edx, dword ptr [0x116d04e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d04e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696bdb jge 0x11696c0c */
  if ((C.sf==C.of)) goto L_11696c0c;
  /* 11696bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11696be0 mov ecx, dword ptr [eax*4 + 0x116d0498] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116d0498)));
  /* 11696be7 call 0x11691136 */
  push32(0x11696becu); f_11691136();
  /* 11696bec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11696bee mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11696bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11696bf6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11696bf9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696bfb jne 0x11696c0a */
  if (!C.zf) goto L_11696c0a;
  /* 11696bfd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11696c00 mov edx, dword ptr [ecx*4 + 0x116d0498] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116d0498)));
  /* 11696c07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11696c0a:;
  /* 11696c0a jmp 0x11696bc9 */
  goto L_11696bc9;
L_11696c0c:;
  /* 11696c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696c0f pop edi */
  EDI = (pop32());
  /* 11696c10 pop esi */
  ESI = (pop32());
  /* 11696c11 pop ebx */
  EBX = (pop32());
  /* 11696c12 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696c15 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696c17 call 0x11699d90 */
  push32(0x11696c1cu); f_11699d90();
  /* 11696c1c mov esp, ebp */
  ESP = (EBP);
  /* 11696c1e pop ebp */
  EBP = (pop32());
  /* 11696c1f ret  */
  ESPCHK(0x11696ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x11696c40 (47 bytes, 22 insns) */
void f_11696c40(void) {
  FTRACE(0x11696c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11696c41 mov ebp, esp */
  EBP = (ESP);
  /* 11696c43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11696c47 push esi */
  push32((uint32_t)(ESI));
  /* 11696c48 push edi */
  push32((uint32_t)(EDI));
  /* 11696c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11696c4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696c4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696c59 pop ecx */
  ECX = (pop32());
  /* 11696c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696c5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696c63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11696c66 pop edi */
  EDI = (pop32());
  /* 11696c67 pop esi */
  ESI = (pop32());
  /* 11696c68 pop ebx */
  EBX = (pop32());
  /* 11696c69 mov esp, ebp */
  ESP = (EBP);
  /* 11696c6b pop ebp */
  EBP = (pop32());
  /* 11696c6c ret 4 */
  ESPCHK(0x11696c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10006c80 @ 0x11696c80 (47 bytes, 22 insns) */
void f_11696c80(void) {
  FTRACE(0x11696c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11696c81 mov ebp, esp */
  EBP = (ESP);
  /* 11696c83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11696c87 push esi */
  push32((uint32_t)(ESI));
  /* 11696c88 push edi */
  push32((uint32_t)(EDI));
  /* 11696c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11696c8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696c8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696c92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696c97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696c99 pop ecx */
  ECX = (pop32());
  /* 11696c9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696ca3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11696ca6 pop edi */
  EDI = (pop32());
  /* 11696ca7 pop esi */
  ESI = (pop32());
  /* 11696ca8 pop ebx */
  EBX = (pop32());
  /* 11696ca9 mov esp, ebp */
  ESP = (EBP);
  /* 11696cab pop ebp */
  EBP = (pop32());
  /* 11696cac ret 4 */
  ESPCHK(0x11696c80u, _esp0);
  ESP += 8; return;
}

/* FUN_10006cc0 @ 0x11696cc0 (47 bytes, 22 insns) */
void f_11696cc0(void) {
  FTRACE(0x11696cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11696cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11696cc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11696cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11696cc8 push edi */
  push32((uint32_t)(EDI));
  /* 11696cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11696cca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696ccd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696cd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696cd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696cd9 pop ecx */
  ECX = (pop32());
  /* 11696cda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696ce3 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11696ce6 pop edi */
  EDI = (pop32());
  /* 11696ce7 pop esi */
  ESI = (pop32());
  /* 11696ce8 pop ebx */
  EBX = (pop32());
  /* 11696ce9 mov esp, ebp */
  ESP = (EBP);
  /* 11696ceb pop ebp */
  EBP = (pop32());
  /* 11696cec ret 4 */
  ESPCHK(0x11696cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006d00 @ 0x11696d00 (85 bytes, 35 insns) */
void f_11696d00(void) {
  FTRACE(0x11696d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11696d01 mov ebp, esp */
  EBP = (ESP);
  /* 11696d03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11696d07 push esi */
  push32((uint32_t)(ESI));
  /* 11696d08 push edi */
  push32((uint32_t)(EDI));
  /* 11696d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11696d0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696d0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696d19 pop ecx */
  ECX = (pop32());
  /* 11696d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696d20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11696d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11696d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696d27 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11696d2a push eax */
  push32((uint32_t)(EAX));
  /* 11696d2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696d2e call 0x116911c7 */
  push32(0x11696d33u); f_116911c7();
  /* 11696d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696d36 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11696d39 push edx */
  push32((uint32_t)(EDX));
  /* 11696d3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11696d3d call 0x1169121c */
  push32(0x11696d42u); f_1169121c();
  /* 11696d42 pop edi */
  EDI = (pop32());
  /* 11696d43 pop esi */
  ESI = (pop32());
  /* 11696d44 pop ebx */
  EBX = (pop32());
  /* 11696d45 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696d48 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696d4a call 0x11699d90 */
  push32(0x11696d4fu); f_11699d90();
  /* 11696d4f mov esp, ebp */
  ESP = (EBP);
  /* 11696d51 pop ebp */
  EBP = (pop32());
  /* 11696d52 ret 4 */
  ESPCHK(0x11696d00u, _esp0);
  ESP += 8; return;
}

/* FUN_10006d70 @ 0x11696d70 (42 bytes, 21 insns) */
void f_11696d70(void) {
  FTRACE(0x11696d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11696d71 mov ebp, esp */
  EBP = (ESP);
  /* 11696d73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696d76 push ebx */
  push32((uint32_t)(EBX));
  /* 11696d77 push esi */
  push32((uint32_t)(ESI));
  /* 11696d78 push edi */
  push32((uint32_t)(EDI));
  /* 11696d79 push ecx */
  push32((uint32_t)(ECX));
  /* 11696d7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696d7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696d82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696d87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696d89 pop ecx */
  ECX = (pop32());
  /* 11696d8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696d90 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11696d93 pop edi */
  EDI = (pop32());
  /* 11696d94 pop esi */
  ESI = (pop32());
  /* 11696d95 pop ebx */
  EBX = (pop32());
  /* 11696d96 mov esp, ebp */
  ESP = (EBP);
  /* 11696d98 pop ebp */
  EBP = (pop32());
  /* 11696d99 ret  */
  ESPCHK(0x11696d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x11696db0 (39 bytes, 20 insns) */
void f_11696db0(void) {
  FTRACE(0x11696db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11696db1 mov ebp, esp */
  EBP = (ESP);
  /* 11696db3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11696db7 push esi */
  push32((uint32_t)(ESI));
  /* 11696db8 push edi */
  push32((uint32_t)(EDI));
  /* 11696db9 push ecx */
  push32((uint32_t)(ECX));
  /* 11696dba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696dbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696dc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696dc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696dc9 pop ecx */
  ECX = (pop32());
  /* 11696dca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696dd0 pop edi */
  EDI = (pop32());
  /* 11696dd1 pop esi */
  ESI = (pop32());
  /* 11696dd2 pop ebx */
  EBX = (pop32());
  /* 11696dd3 mov esp, ebp */
  ESP = (EBP);
  /* 11696dd5 pop ebp */
  EBP = (pop32());
  /* 11696dd6 ret  */
  ESPCHK(0x11696db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x11696de0 (518 bytes, 176 insns) */
void f_11696de0(void) {
  FTRACE(0x11696de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11696de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11696de1 mov ebp, esp */
  EBP = (ESP);
  /* 11696de3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11696de6 push ebx */
  push32((uint32_t)(EBX));
  /* 11696de7 push esi */
  push32((uint32_t)(ESI));
  /* 11696de8 push edi */
  push32((uint32_t)(EDI));
  /* 11696de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11696dea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11696ded mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11696df2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11696df7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11696df9 pop ecx */
  ECX = (pop32());
  /* 11696dfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11696dfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e00 call 0x116911ae */
  push32(0x11696e05u); f_116911ae();
  /* 11696e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696e07 jle 0x11696fd5 */
  if ((C.zf||C.sf!=C.of)) goto L_11696fd5;
  /* 11696e0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e10 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696e13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696e16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e19 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696e1c jge 0x11696fd5 */
  if ((C.sf==C.of)) goto L_11696fd5;
  /* 11696e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e25 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696e28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e2b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696e30 jne 0x11696ef9 */
  if (!C.zf) goto L_11696ef9;
  /* 11696e36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e39 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696e3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e3f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11696e43 push eax */
  push32((uint32_t)(EAX));
  /* 11696e44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e47 call 0x116910b9 */
  push32(0x11696e4cu); f_116910b9();
  /* 11696e4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11696e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696e53 je 0x11696e80 */
  if (C.zf) goto L_11696e80;
  /* 11696e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e58 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11696e5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e5e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11696e62 push ecx */
  push32((uint32_t)(ECX));
  /* 11696e63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e66 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11696e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e6c mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11696e70 push edx */
  push32((uint32_t)(EDX));
  /* 11696e71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e74 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696e77 push eax */
  push32((uint32_t)(EAX));
  /* 11696e78 call 0x1169105a */
  push32(0x11696e7du); f_1169105a();
  /* 11696e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11696e80:;
  /* 11696e80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e83 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11696e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e89 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11696e8d push ecx */
  push32((uint32_t)(ECX));
  /* 11696e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696e91 call 0x116910b9 */
  push32(0x11696e96u); f_116910b9();
  /* 11696e96 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11696e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11696e9d je 0x11696ef4 */
  if (C.zf) goto L_11696ef4;
  /* 11696e9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ea2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11696ea5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696ea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696eab mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11696eae mov esi, esp */
  ESI = (ESP);
  /* 11696eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696eb5 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696eb8 push edx */
  push32((uint32_t)(EDX));
  /* 11696eb9 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11696ebfu);
  /* 11696ebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696ec4 call 0x11699d90 */
  push32(0x11696ec9u); f_11699d90();
  /* 11696ec9 mov esi, esp */
  ESI = (ESP);
  /* 11696ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11696ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11696ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ed2 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696ed5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ed8 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11696edc push eax */
  push32((uint32_t)(EAX));
  /* 11696edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696ee0 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11696ee3 push edx */
  push32((uint32_t)(EDX));
  /* 11696ee4 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11696eeau);
  /* 11696eea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696eef call 0x11699d90 */
  push32(0x11696ef4u); f_11699d90();
L_11696ef4:;
  /* 11696ef4 jmp 0x11696fd5 */
  goto L_11696fd5;
L_11696ef9:;
  /* 11696ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696efc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f02 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f07 je 0x11696f19 */
  if (C.zf) goto L_11696f19;
  /* 11696f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f0c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11696f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f12 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f17 jne 0x11696f70 */
  if (!C.zf) goto L_11696f70;
L_11696f19:;
  /* 11696f19 mov esi, esp */
  ESI = (ESP);
  /* 11696f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11696f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f20 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f23 push eax */
  push32((uint32_t)(EAX));
  /* 11696f24 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11696f2au);
  /* 11696f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f2f call 0x11699d90 */
  push32(0x11696f34u); f_11699d90();
  /* 11696f34 mov esi, esp */
  ESI = (ESP);
  /* 11696f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11696f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f3d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11696f40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f46 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11696f49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f4c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11696f4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f52 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11696f56 push ecx */
  push32((uint32_t)(ECX));
  /* 11696f57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f5a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11696f5d push eax */
  push32((uint32_t)(EAX));
  /* 11696f5e call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11696f64u);
  /* 11696f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f69 call 0x11699d90 */
  push32(0x11696f6eu); f_11699d90();
  /* 11696f6e jmp 0x11696fd5 */
  goto L_11696fd5;
L_11696f70:;
  /* 11696f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f73 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11696f76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f79 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f7e jne 0x11696fd5 */
  if (!C.zf) goto L_11696fd5;
  /* 11696f80 mov esi, esp */
  ESI = (ESP);
  /* 11696f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11696f84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696f87 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f8a push ecx */
  push32((uint32_t)(ECX));
  /* 11696f8b call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11696f91u);
  /* 11696f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696f94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696f96 call 0x11699d90 */
  push32(0x11696f9bu); f_11699d90();
  /* 11696f9b mov esi, esp */
  ESI = (ESP);
  /* 11696f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11696f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11696fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696fa4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11696fa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11696faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696fad mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11696fb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696fb3 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11696fb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696fb9 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11696fbd push edx */
  push32((uint32_t)(EDX));
  /* 11696fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11696fc1 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11696fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11696fc5 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11696fcbu);
  /* 11696fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696fce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696fd0 call 0x11699d90 */
  push32(0x11696fd5u); f_11699d90();
L_11696fd5:;
  /* 11696fd5 pop edi */
  EDI = (pop32());
  /* 11696fd6 pop esi */
  ESI = (pop32());
  /* 11696fd7 pop ebx */
  EBX = (pop32());
  /* 11696fd8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11696fdb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11696fdd call 0x11699d90 */
  push32(0x11696fe2u); f_11699d90();
  /* 11696fe2 mov esp, ebp */
  ESP = (EBP);
  /* 11696fe4 pop ebp */
  EBP = (pop32());
  /* 11696fe5 ret  */
  ESPCHK(0x11696de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x11697070 (38 bytes, 20 insns) */
void f_11697070(void) {
  FTRACE(0x11697070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697070 push ebp */
  push32((uint32_t)(EBP));
  /* 11697071 mov ebp, esp */
  EBP = (ESP);
  /* 11697073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697076 push ebx */
  push32((uint32_t)(EBX));
  /* 11697077 push esi */
  push32((uint32_t)(ESI));
  /* 11697078 push edi */
  push32((uint32_t)(EDI));
  /* 11697079 push ecx */
  push32((uint32_t)(ECX));
  /* 1169707a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169707d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697082 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697087 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697089 pop ecx */
  ECX = (pop32());
  /* 1169708a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169708d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169708f pop edi */
  EDI = (pop32());
  /* 11697090 pop esi */
  ESI = (pop32());
  /* 11697091 pop ebx */
  EBX = (pop32());
  /* 11697092 mov esp, ebp */
  ESP = (EBP);
  /* 11697094 pop ebp */
  EBP = (pop32());
  /* 11697095 ret  */
  ESPCHK(0x11697070u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x116970a0 (85 bytes, 34 insns) */
void f_116970a0(void) {
  FTRACE(0x116970a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116970a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116970a1 mov ebp, esp */
  EBP = (ESP);
  /* 116970a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116970a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116970a7 push esi */
  push32((uint32_t)(ESI));
  /* 116970a8 push edi */
  push32((uint32_t)(EDI));
  /* 116970a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116970aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116970ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116970b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116970b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116970b9 pop ecx */
  ECX = (pop32());
  /* 116970ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116970bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970c0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 116970c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116970c9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 116970cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970d0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 116970d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116970d9 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 116970dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970e0 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116970e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116970e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116970e9 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 116970ec pop edi */
  EDI = (pop32());
  /* 116970ed pop esi */
  ESI = (pop32());
  /* 116970ee pop ebx */
  EBX = (pop32());
  /* 116970ef mov esp, ebp */
  ESP = (EBP);
  /* 116970f1 pop ebp */
  EBP = (pop32());
  /* 116970f2 ret 8 */
  ESPCHK(0x116970a0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007110 @ 0x11697110 (86 bytes, 33 insns) */
void f_11697110(void) {
  FTRACE(0x11697110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697110 push ebp */
  push32((uint32_t)(EBP));
  /* 11697111 mov ebp, esp */
  EBP = (ESP);
  /* 11697113 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697116 push ebx */
  push32((uint32_t)(EBX));
  /* 11697117 push esi */
  push32((uint32_t)(ESI));
  /* 11697118 push edi */
  push32((uint32_t)(EDI));
  /* 11697119 push ecx */
  push32((uint32_t)(ECX));
  /* 1169711a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169711d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697129 pop ecx */
  ECX = (pop32());
  /* 1169712a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169712d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697130 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11697133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697139 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 1169713d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697140 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11697143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697146 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 1169714e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697151 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11697154 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169715a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 1169715d pop edi */
  EDI = (pop32());
  /* 1169715e pop esi */
  ESI = (pop32());
  /* 1169715f pop ebx */
  EBX = (pop32());
  /* 11697160 mov esp, ebp */
  ESP = (EBP);
  /* 11697162 pop ebp */
  EBP = (pop32());
  /* 11697163 ret 4 */
  ESPCHK(0x11697110u, _esp0);
  ESP += 8; return;
}

/* FUN_10007180 @ 0x11697180 (119 bytes, 43 insns) */
void f_11697180(void) {
  FTRACE(0x11697180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697180 push ebp */
  push32((uint32_t)(EBP));
  /* 11697181 mov ebp, esp */
  EBP = (ESP);
  /* 11697183 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697186 push ebx */
  push32((uint32_t)(EBX));
  /* 11697187 push esi */
  push32((uint32_t)(ESI));
  /* 11697188 push edi */
  push32((uint32_t)(EDI));
  /* 11697189 push ecx */
  push32((uint32_t)(ECX));
  /* 1169718a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169718d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697192 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697197 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697199 pop ecx */
  ECX = (pop32());
  /* 1169719a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169719d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971a0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116971a3 mov esi, esp */
  ESI = (ESP);
  /* 116971a5 push eax */
  push32((uint32_t)(EAX));
  /* 116971a6 call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x116971acu);
  /* 116971ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116971af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116971b1 call 0x11699d90 */
  push32(0x116971b6u); f_11699d90();
  /* 116971b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116971bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116971be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116971c4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116971c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971ca mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 116971d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971d4 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 116971db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116971de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116971e1 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 116971e4 pop edi */
  EDI = (pop32());
  /* 116971e5 pop esi */
  ESI = (pop32());
  /* 116971e6 pop ebx */
  EBX = (pop32());
  /* 116971e7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116971ea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116971ec call 0x11699d90 */
  push32(0x116971f1u); f_11699d90();
  /* 116971f1 mov esp, ebp */
  ESP = (EBP);
  /* 116971f3 pop ebp */
  EBP = (pop32());
  /* 116971f4 ret 0xc */
  ESPCHK(0x11697180u, _esp0);
  ESP += 16; return;
}

/* FUN_10007220 @ 0x11697220 (263 bytes, 93 insns) */
void f_11697220(void) {
  FTRACE(0x11697220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697220 push ebp */
  push32((uint32_t)(EBP));
  /* 11697221 mov ebp, esp */
  EBP = (ESP);
  /* 11697223 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697226 push ebx */
  push32((uint32_t)(EBX));
  /* 11697227 push esi */
  push32((uint32_t)(ESI));
  /* 11697228 push edi */
  push32((uint32_t)(EDI));
  /* 11697229 push ecx */
  push32((uint32_t)(ECX));
  /* 1169722a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169722d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697239 pop ecx */
  ECX = (pop32());
  /* 1169723a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169723d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697240 call 0x116911ae */
  push32(0x11697245u); f_116911ae();
  /* 11697245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697247 jne 0x11697314 */
  if (!C.zf) goto L_11697314;
  /* 1169724d mov esi, esp */
  ESI = (ESP);
  /* 1169724f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697252 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11697255 push ecx */
  push32((uint32_t)(ECX));
  /* 11697256 call dword ptr [0x116d355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d355c))), 0x1169725cu);
  /* 1169725c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169725f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697261 call 0x11699d90 */
  push32(0x11697266u); f_11699d90();
  /* 11697266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169726d jmp 0x11697278 */
  goto L_11697278;
L_1169726f:;
  /* 1169726f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11697272 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697275 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11697278:;
  /* 11697278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169727b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169727e jge 0x116972d0 */
  if ((C.sf==C.of)) goto L_116972d0;
  /* 11697280 mov esi, esp */
  ESI = (ESP);
  /* 11697282 push 0 */
  push32((uint32_t)(0x0u));
  /* 11697284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697287 push ecx */
  push32((uint32_t)(ECX));
  /* 11697288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169728b mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 1169728e push eax */
  push32((uint32_t)(EAX));
  /* 1169728f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697292 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11697294 push edx */
  push32((uint32_t)(EDX));
  /* 11697295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697298 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169729b push ecx */
  push32((uint32_t)(ECX));
  /* 1169729c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169729f add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116972a2 push edx */
  push32((uint32_t)(EDX));
  /* 116972a3 call dword ptr [0x116d356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d356c))), 0x116972a9u);
  /* 116972a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116972ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116972ae call 0x11699d90 */
  push32(0x116972b3u); f_11699d90();
  /* 116972b3 mov esi, esp */
  ESI = (ESP);
  /* 116972b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116972b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116972ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116972bd push eax */
  push32((uint32_t)(EAX));
  /* 116972be call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116972c4u);
  /* 116972c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116972c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116972c9 call 0x11699d90 */
  push32(0x116972ceu); f_11699d90();
  /* 116972ce jmp 0x1169726f */
  goto L_1169726f;
L_116972d0:;
  /* 116972d0 mov esi, esp */
  ESI = (ESP);
  /* 116972d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116972d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116972d7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116972da push ecx */
  push32((uint32_t)(ECX));
  /* 116972db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116972de mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 116972e1 push eax */
  push32((uint32_t)(EAX));
  /* 116972e2 call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x116972e8u);
  /* 116972e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116972eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116972ed call 0x11699d90 */
  push32(0x116972f2u); f_11699d90();
  /* 116972f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116972f5 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 116972fc push 0 */
  push32((uint32_t)(0x0u));
  /* 116972fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697301 push edx */
  push32((uint32_t)(EDX));
  /* 11697302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697305 call 0x11691050 */
  push32(0x1169730au); f_11691050();
  /* 1169730a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169730d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11697314:;
  /* 11697314 pop edi */
  EDI = (pop32());
  /* 11697315 pop esi */
  ESI = (pop32());
  /* 11697316 pop ebx */
  EBX = (pop32());
  /* 11697317 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169731a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169731c call 0x11699d90 */
  push32(0x11697321u); f_11699d90();
  /* 11697321 mov esp, ebp */
  ESP = (EBP);
  /* 11697323 pop ebp */
  EBP = (pop32());
  /* 11697324 ret 8 */
  ESPCHK(0x11697220u, _esp0);
  ESP += 12; return;
}

/* FUN_10007370 @ 0x11697370 (42 bytes, 21 insns) */
void f_11697370(void) {
  FTRACE(0x11697370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697370 push ebp */
  push32((uint32_t)(EBP));
  /* 11697371 mov ebp, esp */
  EBP = (ESP);
  /* 11697373 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697376 push ebx */
  push32((uint32_t)(EBX));
  /* 11697377 push esi */
  push32((uint32_t)(ESI));
  /* 11697378 push edi */
  push32((uint32_t)(EDI));
  /* 11697379 push ecx */
  push32((uint32_t)(ECX));
  /* 1169737a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169737d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697382 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697387 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697389 pop ecx */
  ECX = (pop32());
  /* 1169738a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169738d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697390 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697393 pop edi */
  EDI = (pop32());
  /* 11697394 pop esi */
  ESI = (pop32());
  /* 11697395 pop ebx */
  EBX = (pop32());
  /* 11697396 mov esp, ebp */
  ESP = (EBP);
  /* 11697398 pop ebp */
  EBP = (pop32());
  /* 11697399 ret  */
  ESPCHK(0x11697370u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x116973b0 (78 bytes, 33 insns) */
void f_116973b0(void) {
  FTRACE(0x116973b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116973b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116973b1 mov ebp, esp */
  EBP = (ESP);
  /* 116973b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116973b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116973b7 push esi */
  push32((uint32_t)(ESI));
  /* 116973b8 push edi */
  push32((uint32_t)(EDI));
  /* 116973b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116973ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116973bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116973c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116973c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116973c9 pop ecx */
  ECX = (pop32());
  /* 116973ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116973cd mov esi, esp */
  ESI = (ESP);
  /* 116973cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116973d2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 116973d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116973d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116973d9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116973dc push edx */
  push32((uint32_t)(EDX));
  /* 116973dd call dword ptr [0x116d3500] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3500))), 0x116973e3u);
  /* 116973e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116973e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116973e8 call 0x11699d90 */
  push32(0x116973edu); f_11699d90();
  /* 116973ed pop edi */
  EDI = (pop32());
  /* 116973ee pop esi */
  ESI = (pop32());
  /* 116973ef pop ebx */
  EBX = (pop32());
  /* 116973f0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116973f3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116973f5 call 0x11699d90 */
  push32(0x116973fau); f_11699d90();
  /* 116973fa mov esp, ebp */
  ESP = (EBP);
  /* 116973fc pop ebp */
  EBP = (pop32());
  /* 116973fd ret  */
  ESPCHK(0x116973b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x11697420 (102 bytes, 40 insns) */
void f_11697420(void) {
  FTRACE(0x11697420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697420 push ebp */
  push32((uint32_t)(EBP));
  /* 11697421 mov ebp, esp */
  EBP = (ESP);
  /* 11697423 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697426 push ebx */
  push32((uint32_t)(EBX));
  /* 11697427 push esi */
  push32((uint32_t)(ESI));
  /* 11697428 push edi */
  push32((uint32_t)(EDI));
  /* 11697429 push ecx */
  push32((uint32_t)(ECX));
  /* 1169742a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169742d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697432 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697437 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697439 pop ecx */
  ECX = (pop32());
  /* 1169743a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169743d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11697441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697444 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697447 mov esi, esp */
  ESI = (ESP);
  /* 11697449 push eax */
  push32((uint32_t)(EAX));
  /* 1169744a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169744d push ecx */
  push32((uint32_t)(ECX));
  /* 1169744e call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x11697454u);
  /* 11697454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697459 call 0x11699d90 */
  push32(0x1169745eu); f_11699d90();
  /* 1169745e mov esi, eax */
  ESI = (EAX);
  /* 11697460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697463 call 0x116911ae */
  push32(0x11697468u); f_116911ae();
  /* 11697468 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169746a jne 0x11697470 */
  if (!C.zf) goto L_11697470;
  /* 1169746c mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11697470:;
  /* 11697470 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11697473 pop edi */
  EDI = (pop32());
  /* 11697474 pop esi */
  ESI = (pop32());
  /* 11697475 pop ebx */
  EBX = (pop32());
  /* 11697476 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697479 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169747b call 0x11699d90 */
  push32(0x11697480u); f_11699d90();
  /* 11697480 mov esp, ebp */
  ESP = (EBP);
  /* 11697482 pop ebp */
  EBP = (pop32());
  /* 11697483 ret 4 */
  ESPCHK(0x11697420u, _esp0);
  ESP += 8; return;
}

/* FUN_100074a0 @ 0x116974a0 (122 bytes, 45 insns) */
void f_116974a0(void) {
  FTRACE(0x116974a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116974a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116974a1 mov ebp, esp */
  EBP = (ESP);
  /* 116974a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116974a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116974a7 push esi */
  push32((uint32_t)(ESI));
  /* 116974a8 push edi */
  push32((uint32_t)(EDI));
  /* 116974a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116974aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116974ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116974b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116974b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116974b9 pop ecx */
  ECX = (pop32());
  /* 116974ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116974bd mov esi, esp */
  ESI = (ESP);
  /* 116974bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116974c2 push eax */
  push32((uint32_t)(EAX));
  /* 116974c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116974c6 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116974c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116974ca call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x116974d0u);
  /* 116974d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116974d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116974d5 call 0x11699d90 */
  push32(0x116974dau); f_11699d90();
  /* 116974da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116974dd add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116974e0 push edx */
  push32((uint32_t)(EDX));
  /* 116974e1 call 0x116910be */
  push32(0x116974e6u); f_116910be();
  /* 116974e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116974e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116974ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116974f1 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 116974f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116974f7 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 116974fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697501 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11697504 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11697507 pop edi */
  EDI = (pop32());
  /* 11697508 pop esi */
  ESI = (pop32());
  /* 11697509 pop ebx */
  EBX = (pop32());
  /* 1169750a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169750d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169750f call 0x11699d90 */
  push32(0x11697514u); f_11699d90();
  /* 11697514 mov esp, ebp */
  ESP = (EBP);
  /* 11697516 pop ebp */
  EBP = (pop32());
  /* 11697517 ret 8 */
  ESPCHK(0x116974a0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007540 @ 0x11697540 (56 bytes, 25 insns) */
void f_11697540(void) {
  FTRACE(0x11697540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697540 push ebp */
  push32((uint32_t)(EBP));
  /* 11697541 mov ebp, esp */
  EBP = (ESP);
  /* 11697543 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697546 push ebx */
  push32((uint32_t)(EBX));
  /* 11697547 push esi */
  push32((uint32_t)(ESI));
  /* 11697548 push edi */
  push32((uint32_t)(EDI));
  /* 11697549 push ecx */
  push32((uint32_t)(ECX));
  /* 1169754a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169754d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697552 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697557 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697559 pop ecx */
  ECX = (pop32());
  /* 1169755a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169755d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11697561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697564 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697568 jne 0x1169756e */
  if (!C.zf) goto L_1169756e;
  /* 1169756a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1169756e:;
  /* 1169756e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11697571 pop edi */
  EDI = (pop32());
  /* 11697572 pop esi */
  ESI = (pop32());
  /* 11697573 pop ebx */
  EBX = (pop32());
  /* 11697574 mov esp, ebp */
  ESP = (EBP);
  /* 11697576 pop ebp */
  EBP = (pop32());
  /* 11697577 ret  */
  ESPCHK(0x11697540u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x11697590 (163 bytes, 60 insns) */
void f_11697590(void) {
  FTRACE(0x11697590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697590 push ebp */
  push32((uint32_t)(EBP));
  /* 11697591 mov ebp, esp */
  EBP = (ESP);
  /* 11697593 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697596 push ebx */
  push32((uint32_t)(EBX));
  /* 11697597 push esi */
  push32((uint32_t)(ESI));
  /* 11697598 push edi */
  push32((uint32_t)(EDI));
  /* 11697599 push ecx */
  push32((uint32_t)(ECX));
  /* 1169759a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169759d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116975a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116975a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116975a9 pop ecx */
  ECX = (pop32());
  /* 116975aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116975ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975b0 call 0x116910e6 */
  push32(0x116975b5u); f_116910e6();
  /* 116975b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116975ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116975bc je 0x11697620 */
  if (C.zf) goto L_11697620;
  /* 116975be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116975c4 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116975c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116975cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116975cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116975d5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116975d8 mov esi, esp */
  ESI = (ESP);
  /* 116975da push 0 */
  push32((uint32_t)(0x0u));
  /* 116975dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975df add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116975e2 push eax */
  push32((uint32_t)(EAX));
  /* 116975e3 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116975e9u);
  /* 116975e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116975ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116975ee call 0x11699d90 */
  push32(0x116975f3u); f_11699d90();
  /* 116975f3 mov esi, esp */
  ESI = (ESP);
  /* 116975f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116975f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116975f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116975fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116975fe push edx */
  push32((uint32_t)(EDX));
  /* 116975ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697602 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11697605 push ecx */
  push32((uint32_t)(ECX));
  /* 11697606 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x1169760cu);
  /* 1169760c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169760f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697611 call 0x11699d90 */
  push32(0x11697616u); f_11699d90();
  /* 11697616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697619 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11697620:;
  /* 11697620 pop edi */
  EDI = (pop32());
  /* 11697621 pop esi */
  ESI = (pop32());
  /* 11697622 pop ebx */
  EBX = (pop32());
  /* 11697623 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697626 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697628 call 0x11699d90 */
  push32(0x1169762du); f_11699d90();
  /* 1169762d mov esp, ebp */
  ESP = (EBP);
  /* 1169762f pop ebp */
  EBP = (pop32());
  /* 11697630 ret 0xc */
  ESPCHK(0x11697590u, _esp0);
  ESP += 16; return;
}

/* FUN_10007660 @ 0x11697660 (140 bytes, 53 insns) */
void f_11697660(void) {
  FTRACE(0x11697660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697660 push ebp */
  push32((uint32_t)(EBP));
  /* 11697661 mov ebp, esp */
  EBP = (ESP);
  /* 11697663 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697666 push ebx */
  push32((uint32_t)(EBX));
  /* 11697667 push esi */
  push32((uint32_t)(ESI));
  /* 11697668 push edi */
  push32((uint32_t)(EDI));
  /* 11697669 push ecx */
  push32((uint32_t)(ECX));
  /* 1169766a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169766d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697672 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697677 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697679 pop ecx */
  ECX = (pop32());
  /* 1169767a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169767d mov esi, esp */
  ESI = (ESP);
  /* 1169767f push 0 */
  push32((uint32_t)(0x0u));
  /* 11697681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697684 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697687 push eax */
  push32((uint32_t)(EAX));
  /* 11697688 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x1169768eu);
  /* 1169768e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697691 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697693 call 0x11699d90 */
  push32(0x11697698u); f_11699d90();
  /* 11697698 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169769c mov esi, esp */
  ESI = (ESP);
  /* 1169769e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116976a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116976a4 push edx */
  push32((uint32_t)(EDX));
  /* 116976a5 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x116976abu);
  /* 116976ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116976ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116976b0 call 0x11699d90 */
  push32(0x116976b5u); f_11699d90();
  /* 116976b5 mov esi, eax */
  ESI = (EAX);
  /* 116976b7 mov edi, esp */
  EDI = (ESP);
  /* 116976b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116976bc mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 116976bf push ecx */
  push32((uint32_t)(ECX));
  /* 116976c0 call dword ptr [0x116d34e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34e8))), 0x116976c6u);
  /* 116976c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116976c9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116976cb call 0x11699d90 */
  push32(0x116976d0u); f_11699d90();
  /* 116976d0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116976d2 jne 0x116976d8 */
  if (!C.zf) goto L_116976d8;
  /* 116976d4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_116976d8:;
  /* 116976d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116976db pop edi */
  EDI = (pop32());
  /* 116976dc pop esi */
  ESI = (pop32());
  /* 116976dd pop ebx */
  EBX = (pop32());
  /* 116976de add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116976e1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116976e3 call 0x11699d90 */
  push32(0x116976e8u); f_11699d90();
  /* 116976e8 mov esp, ebp */
  ESP = (EBP);
  /* 116976ea pop ebp */
  EBP = (pop32());
  /* 116976eb ret  */
  ESPCHK(0x11697660u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x11697710 (125 bytes, 48 insns) */
void f_11697710(void) {
  FTRACE(0x11697710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697710 push ebp */
  push32((uint32_t)(EBP));
  /* 11697711 mov ebp, esp */
  EBP = (ESP);
  /* 11697713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697716 push ebx */
  push32((uint32_t)(EBX));
  /* 11697717 push esi */
  push32((uint32_t)(ESI));
  /* 11697718 push edi */
  push32((uint32_t)(EDI));
  /* 11697719 push ecx */
  push32((uint32_t)(ECX));
  /* 1169771a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169771d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697729 pop ecx */
  ECX = (pop32());
  /* 1169772a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169772d mov esi, esp */
  ESI = (ESP);
  /* 1169772f push 0 */
  push32((uint32_t)(0x0u));
  /* 11697731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697734 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697737 push eax */
  push32((uint32_t)(EAX));
  /* 11697738 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x1169773eu);
  /* 1169773e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697743 call 0x11699d90 */
  push32(0x11697748u); f_11699d90();
  /* 11697748 mov esi, esp */
  ESI = (ESP);
  /* 1169774a push 1 */
  push32((uint32_t)(0x1u));
  /* 1169774c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169774f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11697752 push edx */
  push32((uint32_t)(EDX));
  /* 11697753 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11697759u);
  /* 11697759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169775c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169775e call 0x11699d90 */
  push32(0x11697763u); f_11699d90();
  /* 11697763 mov esi, esp */
  ESI = (ESP);
  /* 11697765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697768 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 1169776b push ecx */
  push32((uint32_t)(ECX));
  /* 1169776c call dword ptr [0x116d34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34e4))), 0x11697772u);
  /* 11697772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697777 call 0x11699d90 */
  push32(0x1169777cu); f_11699d90();
  /* 1169777c pop edi */
  EDI = (pop32());
  /* 1169777d pop esi */
  ESI = (pop32());
  /* 1169777e pop ebx */
  EBX = (pop32());
  /* 1169777f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697782 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697784 call 0x11699d90 */
  push32(0x11697789u); f_11699d90();
  /* 11697789 mov esp, ebp */
  ESP = (EBP);
  /* 1169778b pop ebp */
  EBP = (pop32());
  /* 1169778c ret  */
  ESPCHK(0x11697710u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x116977b0 (98 bytes, 39 insns) */
void f_116977b0(void) {
  FTRACE(0x116977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116977b1 mov ebp, esp */
  EBP = (ESP);
  /* 116977b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116977b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116977b7 push esi */
  push32((uint32_t)(ESI));
  /* 116977b8 push edi */
  push32((uint32_t)(EDI));
  /* 116977b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116977ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116977bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116977c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116977c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116977c9 pop ecx */
  ECX = (pop32());
  /* 116977ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116977cd mov esi, esp */
  ESI = (ESP);
  /* 116977cf push 0 */
  push32((uint32_t)(0x0u));
  /* 116977d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116977d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116977d7 push eax */
  push32((uint32_t)(EAX));
  /* 116977d8 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116977deu);
  /* 116977de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116977e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116977e3 call 0x11699d90 */
  push32(0x116977e8u); f_11699d90();
  /* 116977e8 mov esi, esp */
  ESI = (ESP);
  /* 116977ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116977ed mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 116977f0 push edx */
  push32((uint32_t)(EDX));
  /* 116977f1 call dword ptr [0x116d34e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34e0))), 0x116977f7u);
  /* 116977f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116977fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116977fc call 0x11699d90 */
  push32(0x11697801u); f_11699d90();
  /* 11697801 pop edi */
  EDI = (pop32());
  /* 11697802 pop esi */
  ESI = (pop32());
  /* 11697803 pop ebx */
  EBX = (pop32());
  /* 11697804 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697807 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697809 call 0x11699d90 */
  push32(0x1169780eu); f_11699d90();
  /* 1169780e mov esp, ebp */
  ESP = (EBP);
  /* 11697810 pop ebp */
  EBP = (pop32());
  /* 11697811 ret  */
  ESPCHK(0x116977b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007830 @ 0x11697830 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11697830(void) {
  FTRACE(0x11697830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697830 push ebp */
  push32((uint32_t)(EBP));
  /* 11697831 mov ebp, esp */
  EBP = (ESP);
  /* 11697833 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697836 push ebx */
  push32((uint32_t)(EBX));
  /* 11697837 push esi */
  push32((uint32_t)(ESI));
  /* 11697838 push edi */
  push32((uint32_t)(EDI));
  /* 11697839 push ecx */
  push32((uint32_t)(ECX));
  /* 1169783a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169783d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697842 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697847 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697849 pop ecx */
  ECX = (pop32());
  /* 1169784a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169784d mov esi, esp */
  ESI = (ESP);
  /* 1169784f push 0 */
  push32((uint32_t)(0x0u));
  /* 11697851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697854 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697857 push eax */
  push32((uint32_t)(EAX));
  /* 11697858 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x1169785eu);
  /* 1169785e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697861 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697863 call 0x11699d90 */
  push32(0x11697868u); f_11699d90();
  /* 11697868 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169786b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169786e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11697871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11697874 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697877 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169787a cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169787e ja 0x116979b1 */
  if ((!C.cf&&!C.zf)) goto L_116979b1;
  /* 11697884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11697887 jmp dword ptr [ecx*4 + 0x116979c2] */
  switch (ECX) {
    case 0: goto L_1169788e;
    case 1: goto L_116978c7;
    case 2: goto L_1169790b;
    case 3: goto L_11697941;
    case 4: goto L_11697985;
    default: x86_unimpl("switch@0x11697887 out of table"); return;
  }
L_1169788e:;
  /* 1169788e mov esi, esp */
  ESI = (ESP);
  /* 11697890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697893 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11697896 push eax */
  push32((uint32_t)(EAX));
  /* 11697897 call dword ptr [0x116d34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34dc))), 0x1169789du);
  /* 1169789d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116978a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116978a2 call 0x11699d90 */
  push32(0x116978a7u); f_11699d90();
  /* 116978a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116978ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116978ae je 0x116978c2 */
  if (C.zf) goto L_116978c2;
  /* 116978b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978b3 call 0x11691217 */
  push32(0x116978b8u); f_11691217();
  /* 116978b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978bb mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_116978c2:;
  /* 116978c2 jmp 0x116979b1 */
  goto L_116979b1;
L_116978c7:;
  /* 116978c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978ca call 0x1169114a */
  push32(0x116978cfu); f_1169114a();
  /* 116978cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116978d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116978d6 je 0x11697906 */
  if (C.zf) goto L_11697906;
  /* 116978d8 mov esi, esp */
  ESI = (ESP);
  /* 116978da push 0 */
  push32((uint32_t)(0x0u));
  /* 116978dc push 0 */
  push32((uint32_t)(0x0u));
  /* 116978de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978e1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116978e4 push eax */
  push32((uint32_t)(EAX));
  /* 116978e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978e8 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 116978eb push edx */
  push32((uint32_t)(EDX));
  /* 116978ec call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x116978f2u);
  /* 116978f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116978f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116978f7 call 0x11699d90 */
  push32(0x116978fcu); f_11699d90();
  /* 116978fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116978ff mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11697906:;
  /* 11697906 jmp 0x116979b1 */
  goto L_116979b1;
L_1169790b:;
  /* 1169790b mov esi, esp */
  ESI = (ESP);
  /* 1169790d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697910 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11697913 push edx */
  push32((uint32_t)(EDX));
  /* 11697914 call dword ptr [0x116d34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34dc))), 0x1169791au);
  /* 1169791a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169791d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169791f call 0x11699d90 */
  push32(0x11697924u); f_11699d90();
  /* 11697924 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169792b je 0x1169793f */
  if (C.zf) goto L_1169793f;
  /* 1169792d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697930 call 0x11691069 */
  push32(0x11697935u); f_11691069();
  /* 11697935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697938 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_1169793f:;
  /* 1169793f jmp 0x116979b1 */
  goto L_116979b1;
L_11697941:;
  /* 11697941 mov esi, esp */
  ESI = (ESP);
  /* 11697943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697946 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11697949 push edx */
  push32((uint32_t)(EDX));
  /* 1169794a call dword ptr [0x116d34e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34e8))), 0x11697950u);
  /* 11697950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697955 call 0x11699d90 */
  push32(0x1169795au); f_11699d90();
  /* 1169795a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169795c jne 0x11697983 */
  if (!C.zf) goto L_11697983;
  /* 1169795e mov esi, esp */
  ESI = (ESP);
  /* 11697960 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11697962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697965 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11697968 push ecx */
  push32((uint32_t)(ECX));
  /* 11697969 call dword ptr [0x116d350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d350c))), 0x1169796fu);
  /* 1169796f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697974 call 0x11699d90 */
  push32(0x11697979u); f_11699d90();
  /* 11697979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169797c mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11697983:;
  /* 11697983 jmp 0x116979b1 */
  goto L_116979b1;
L_11697985:;
  /* 11697985 mov esi, esp */
  ESI = (ESP);
  /* 11697987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169798a mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 1169798d push ecx */
  push32((uint32_t)(ECX));
  /* 1169798e call dword ptr [0x116d3518] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3518))), 0x11697994u);
  /* 11697994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697997 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697999 call 0x11699d90 */
  push32(0x1169799eu); f_11699d90();
  /* 1169799e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116979a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116979a5 je 0x116979b1 */
  if (C.zf) goto L_116979b1;
  /* 116979a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116979aa mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_116979b1:;
  /* 116979b1 pop edi */
  EDI = (pop32());
  /* 116979b2 pop esi */
  ESI = (pop32());
  /* 116979b3 pop ebx */
  EBX = (pop32());
  /* 116979b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116979b7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116979b9 call 0x11699d90 */
  push32(0x116979beu); f_11699d90();
  /* 116979be mov esp, ebp */
  ESP = (EBP);
  /* 116979c0 pop ebp */
  EBP = (pop32());
  /* 116979c1 ret  */
  ESPCHK(0x11697830u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a40 @ 0x11697a40 (39 bytes, 18 insns) */
void f_11697a40(void) {
  FTRACE(0x11697a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11697a41 mov ebp, esp */
  EBP = (ESP);
  /* 11697a43 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697a46 push ebx */
  push32((uint32_t)(EBX));
  /* 11697a47 push esi */
  push32((uint32_t)(ESI));
  /* 11697a48 push edi */
  push32((uint32_t)(EDI));
  /* 11697a49 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11697a4c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11697a51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697a56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697a5b mov dword ptr [0x116d04ec], eax */
  w32((uint32_t)(0x116d04ec), (EAX));
  /* 11697a60 pop edi */
  EDI = (pop32());
  /* 11697a61 pop esi */
  ESI = (pop32());
  /* 11697a62 pop ebx */
  EBX = (pop32());
  /* 11697a63 mov esp, ebp */
  ESP = (EBP);
  /* 11697a65 pop ebp */
  EBP = (pop32());
  /* 11697a66 ret  */
  ESPCHK(0x11697a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x11697a70 (93 bytes, 34 insns) */
void f_11697a70(void) {
  FTRACE(0x11697a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11697a71 mov ebp, esp */
  EBP = (ESP);
  /* 11697a73 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11697a77 push esi */
  push32((uint32_t)(ESI));
  /* 11697a78 push edi */
  push32((uint32_t)(EDI));
  /* 11697a79 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11697a7c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11697a81 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697a86 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697a88 cmp dword ptr [0x116d04ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d04ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697a8f je 0x11697abc */
  if (C.zf) goto L_11697abc;
  /* 11697a91 mov ecx, dword ptr [0x116d04ec] */
  ECX = (r32((uint32_t)(0x116d04ec)));
  /* 11697a97 call 0x116910e6 */
  push32(0x11697a9cu); f_116910e6();
  /* 11697a9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697aa3 je 0x11697abc */
  if (C.zf) goto L_11697abc;
  /* 11697aa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11697aa8 push eax */
  push32((uint32_t)(EAX));
  /* 11697aa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11697aac push ecx */
  push32((uint32_t)(ECX));
  /* 11697aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697ab0 push edx */
  push32((uint32_t)(EDX));
  /* 11697ab1 mov ecx, dword ptr [0x116d04ec] */
  ECX = (r32((uint32_t)(0x116d04ec)));
  /* 11697ab7 call 0x11691122 */
  push32(0x11697abcu); f_11691122();
L_11697abc:;
  /* 11697abc pop edi */
  EDI = (pop32());
  /* 11697abd pop esi */
  ESI = (pop32());
  /* 11697abe pop ebx */
  EBX = (pop32());
  /* 11697abf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697ac2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697ac4 call 0x11699d90 */
  push32(0x11697ac9u); f_11699d90();
  /* 11697ac9 mov esp, ebp */
  ESP = (EBP);
  /* 11697acb pop ebp */
  EBP = (pop32());
  /* 11697acc ret  */
  ESPCHK(0x11697a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x11697af0 (437 bytes, 146 insns) */
void f_11697af0(void) {
  FTRACE(0x11697af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11697af1 mov ebp, esp */
  EBP = (ESP);
  /* 11697af3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11697af7 push esi */
  push32((uint32_t)(ESI));
  /* 11697af8 push edi */
  push32((uint32_t)(EDI));
  /* 11697af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11697afa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11697afd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697b09 pop ecx */
  ECX = (pop32());
  /* 11697b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697b10 call 0x1169104b */
  push32(0x11697b15u); f_1169104b();
  /* 11697b15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697b1c je 0x11697c94 */
  if (C.zf) goto L_11697c94;
  /* 11697b22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697b25 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11697b28 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11697b2b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11697b2f je 0x11697be9 */
  if (C.zf) goto L_11697be9;
  /* 11697b35 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11697b39 je 0x11697b40 */
  if (C.zf) goto L_11697b40;
  /* 11697b3b jmp 0x11697c3f */
  goto L_11697c3f;
L_11697b40:;
  /* 11697b40 cmp dword ptr [0x116d04f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d04f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697b47 je 0x11697b8f */
  if (C.zf) goto L_11697b8f;
  /* 11697b49 mov esi, esp */
  ESI = (ESP);
  /* 11697b4b push 3 */
  push32((uint32_t)(0x3u));
  /* 11697b4d mov edx, dword ptr [0x116d04f4] */
  EDX = (r32((uint32_t)(0x116d04f4)));
  /* 11697b53 push edx */
  push32((uint32_t)(EDX));
  /* 11697b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697b57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697b5a push eax */
  push32((uint32_t)(EAX));
  /* 11697b5b call dword ptr [0x116d3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3594))), 0x11697b61u);
  /* 11697b61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697b66 call 0x11699d90 */
  push32(0x11697b6bu); f_11699d90();
  /* 11697b6b mov esi, esp */
  ESI = (ESP);
  /* 11697b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11697b6f mov ecx, dword ptr [0x116d04f4] */
  ECX = (r32((uint32_t)(0x116d04f4)));
  /* 11697b75 push ecx */
  push32((uint32_t)(ECX));
  /* 11697b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697b79 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697b7c push edx */
  push32((uint32_t)(EDX));
  /* 11697b7d call dword ptr [0x116d3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3594))), 0x11697b83u);
  /* 11697b83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697b88 call 0x11699d90 */
  push32(0x11697b8du); f_11699d90();
  /* 11697b8d jmp 0x11697be4 */
  goto L_11697be4;
L_11697b8f:;
  /* 11697b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697b92 call 0x11691091 */
  push32(0x11697b97u); f_11691091();
  /* 11697b97 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697b9e jne 0x11697be4 */
  if (!C.zf) goto L_11697be4;
  /* 11697ba0 mov esi, esp */
  ESI = (ESP);
  /* 11697ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11697ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697ba7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697baa push eax */
  push32((uint32_t)(EAX));
  /* 11697bab call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11697bb1u);
  /* 11697bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697bb6 call 0x11699d90 */
  push32(0x11697bbbu); f_11699d90();
  /* 11697bbb mov esi, esp */
  ESI = (ESP);
  /* 11697bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11697bbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697bc2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11697bc5 push edx */
  push32((uint32_t)(EDX));
  /* 11697bc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697bc9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697bcc push eax */
  push32((uint32_t)(EAX));
  /* 11697bcd mov cl, byte ptr [0x116d04f0] */
  CL = (r8((uint32_t)(0x116d04f0)));
  /* 11697bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11697bd4 call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x11697bdau);
  /* 11697bda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697bdf call 0x11699d90 */
  push32(0x11697be4u); f_11699d90();
L_11697be4:;
  /* 11697be4 jmp 0x11697c94 */
  goto L_11697c94;
L_11697be9:;
  /* 11697be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697bec call 0x11691091 */
  push32(0x11697bf1u); f_11691091();
  /* 11697bf1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697bf8 jne 0x11697c3d */
  if (!C.zf) goto L_11697c3d;
  /* 11697bfa mov esi, esp */
  ESI = (ESP);
  /* 11697bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11697bfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c01 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c04 push edx */
  push32((uint32_t)(EDX));
  /* 11697c05 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11697c0bu);
  /* 11697c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697c10 call 0x11699d90 */
  push32(0x11697c15u); f_11699d90();
  /* 11697c15 mov esi, esp */
  ESI = (ESP);
  /* 11697c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11697c19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c1c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11697c1f push ecx */
  push32((uint32_t)(ECX));
  /* 11697c20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c23 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c26 push edx */
  push32((uint32_t)(EDX));
  /* 11697c27 mov al, byte ptr [0x116d04f0] */
  AL = (r8((uint32_t)(0x116d04f0)));
  /* 11697c2c push eax */
  push32((uint32_t)(EAX));
  /* 11697c2d call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x11697c33u);
  /* 11697c33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697c38 call 0x11699d90 */
  push32(0x11697c3du); f_11699d90();
L_11697c3d:;
  /* 11697c3d jmp 0x11697c94 */
  goto L_11697c94;
L_11697c3f:;
  /* 11697c3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c42 call 0x11691091 */
  push32(0x11697c47u); f_11691091();
  /* 11697c47 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11697c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697c4e jne 0x11697c94 */
  if (!C.zf) goto L_11697c94;
  /* 11697c50 mov esi, esp */
  ESI = (ESP);
  /* 11697c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11697c54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c57 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c5a push ecx */
  push32((uint32_t)(ECX));
  /* 11697c5b call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11697c61u);
  /* 11697c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697c66 call 0x11699d90 */
  push32(0x11697c6bu); f_11699d90();
  /* 11697c6b mov esi, esp */
  ESI = (ESP);
  /* 11697c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11697c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c72 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11697c75 push eax */
  push32((uint32_t)(EAX));
  /* 11697c76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697c79 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11697c7d mov dl, byte ptr [0x116d04f0] */
  DL = (r8((uint32_t)(0x116d04f0)));
  /* 11697c83 push edx */
  push32((uint32_t)(EDX));
  /* 11697c84 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11697c8au);
  /* 11697c8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697c8f call 0x11699d90 */
  push32(0x11697c94u); f_11699d90();
L_11697c94:;
  /* 11697c94 pop edi */
  EDI = (pop32());
  /* 11697c95 pop esi */
  ESI = (pop32());
  /* 11697c96 pop ebx */
  EBX = (pop32());
  /* 11697c97 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697c9a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697c9c call 0x11699d90 */
  push32(0x11697ca1u); f_11699d90();
  /* 11697ca1 mov esp, ebp */
  ESP = (EBP);
  /* 11697ca3 pop ebp */
  EBP = (pop32());
  /* 11697ca4 ret  */
  ESPCHK(0x11697af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x11697d20 (235 bytes, 78 insns) */
void f_11697d20(void) {
  FTRACE(0x11697d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11697d21 mov ebp, esp */
  EBP = (ESP);
  /* 11697d23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697d29 push ebx */
  push32((uint32_t)(EBX));
  /* 11697d2a push esi */
  push32((uint32_t)(ESI));
  /* 11697d2b push edi */
  push32((uint32_t)(EDI));
  /* 11697d2c push ecx */
  push32((uint32_t)(ECX));
  /* 11697d2d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11697d33 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11697d38 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697d3d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697d3f pop ecx */
  ECX = (pop32());
  /* 11697d40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697d43 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11697d4a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11697d51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697d54 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697d57 mov esi, esp */
  ESI = (ESP);
  /* 11697d59 push eax */
  push32((uint32_t)(EAX));
  /* 11697d5a call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11697d60u);
  /* 11697d60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697d65 call 0x11699d90 */
  push32(0x11697d6au); f_11699d90();
  /* 11697d6a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11697d6d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697d71 jle 0x11697de4 */
  if ((C.zf||C.sf!=C.of)) goto L_11697de4;
  /* 11697d73 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11697d7a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11697d81 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11697d88 jmp 0x11697d93 */
  goto L_11697d93;
L_11697d8a:;
  /* 11697d8a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11697d8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697d90 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11697d93:;
  /* 11697d93 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11697d96 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697d99 jge 0x11697dd0 */
  if ((C.sf==C.of)) goto L_11697dd0;
  /* 11697d9b mov esi, esp */
  ESI = (ESP);
  /* 11697d9d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11697da0 push eax */
  push32((uint32_t)(EAX));
  /* 11697da1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11697da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11697da5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697da8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697dab push edx */
  push32((uint32_t)(EDX));
  /* 11697dac call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11697db2u);
  /* 11697db2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697db7 call 0x11699d90 */
  push32(0x11697dbcu); f_11699d90();
  /* 11697dbc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11697dbf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697dc2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11697dc5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11697dc8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697dcb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11697dce jmp 0x11697d8a */
  goto L_11697d8a;
L_11697dd0:;
  /* 11697dd0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11697dd3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11697dd4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11697dd7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11697dda mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11697ddd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11697dde idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11697de1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11697de4:;
  /* 11697de4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697de7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11697dea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11697dec mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11697def mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11697df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697df5 pop edi */
  EDI = (pop32());
  /* 11697df6 pop esi */
  ESI = (pop32());
  /* 11697df7 pop ebx */
  EBX = (pop32());
  /* 11697df8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697dfe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697e00 call 0x11699d90 */
  push32(0x11697e05u); f_11699d90();
  /* 11697e05 mov esp, ebp */
  ESP = (EBP);
  /* 11697e07 pop ebp */
  EBP = (pop32());
  /* 11697e08 ret 4 */
  ESPCHK(0x11697d20u, _esp0);
  ESP += 8; return;
}

/* FUN_10007e50 @ 0x11697e50 (120 bytes, 47 insns) */
void f_11697e50(void) {
  FTRACE(0x11697e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11697e51 mov ebp, esp */
  EBP = (ESP);
  /* 11697e53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697e56 push ebx */
  push32((uint32_t)(EBX));
  /* 11697e57 push esi */
  push32((uint32_t)(ESI));
  /* 11697e58 push edi */
  push32((uint32_t)(EDI));
  /* 11697e59 push ecx */
  push32((uint32_t)(ECX));
  /* 11697e5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11697e5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697e62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697e67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697e69 pop ecx */
  ECX = (pop32());
  /* 11697e6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697e6d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11697e71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697e74 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697e77 mov esi, esp */
  ESI = (ESP);
  /* 11697e79 push eax */
  push32((uint32_t)(EAX));
  /* 11697e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697e7d add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697e80 push ecx */
  push32((uint32_t)(ECX));
  /* 11697e81 call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x11697e87u);
  /* 11697e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697e8c call 0x11699d90 */
  push32(0x11697e91u); f_11699d90();
  /* 11697e91 mov esi, eax */
  ESI = (EAX);
  /* 11697e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697e96 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697e99 mov edi, esp */
  EDI = (ESP);
  /* 11697e9b push edx */
  push32((uint32_t)(EDX));
  /* 11697e9c call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11697ea2u);
  /* 11697ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697ea5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697ea7 call 0x11699d90 */
  push32(0x11697eacu); f_11699d90();
  /* 11697eac cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697eae jne 0x11697eb4 */
  if (!C.zf) goto L_11697eb4;
  /* 11697eb0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11697eb4:;
  /* 11697eb4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11697eb7 pop edi */
  EDI = (pop32());
  /* 11697eb8 pop esi */
  ESI = (pop32());
  /* 11697eb9 pop ebx */
  EBX = (pop32());
  /* 11697eba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697ebd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697ebf call 0x11699d90 */
  push32(0x11697ec4u); f_11699d90();
  /* 11697ec4 mov esp, ebp */
  ESP = (EBP);
  /* 11697ec6 pop ebp */
  EBP = (pop32());
  /* 11697ec7 ret  */
  ESPCHK(0x11697e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x11697ef0 (86 bytes, 35 insns) */
void f_11697ef0(void) {
  FTRACE(0x11697ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11697ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11697ef3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11697ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11697ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11697ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11697efa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11697efd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11697f02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697f07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697f09 pop ecx */
  ECX = (pop32());
  /* 11697f0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697f0d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11697f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697f14 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697f17 mov esi, esp */
  ESI = (ESP);
  /* 11697f19 push eax */
  push32((uint32_t)(EAX));
  /* 11697f1a call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11697f20u);
  /* 11697f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697f23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697f25 call 0x11699d90 */
  push32(0x11697f2au); f_11699d90();
  /* 11697f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11697f2c jle 0x11697f32 */
  if ((C.zf||C.sf!=C.of)) goto L_11697f32;
  /* 11697f2e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11697f32:;
  /* 11697f32 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11697f35 pop edi */
  EDI = (pop32());
  /* 11697f36 pop esi */
  ESI = (pop32());
  /* 11697f37 pop ebx */
  EBX = (pop32());
  /* 11697f38 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697f3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697f3d call 0x11699d90 */
  push32(0x11697f42u); f_11699d90();
  /* 11697f42 mov esp, ebp */
  ESP = (EBP);
  /* 11697f44 pop ebp */
  EBP = (pop32());
  /* 11697f45 ret  */
  ESPCHK(0x11697ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f60 @ 0x11697f60 (42 bytes, 21 insns) */
void f_11697f60(void) {
  FTRACE(0x11697f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11697f61 mov ebp, esp */
  EBP = (ESP);
  /* 11697f63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697f66 push ebx */
  push32((uint32_t)(EBX));
  /* 11697f67 push esi */
  push32((uint32_t)(ESI));
  /* 11697f68 push edi */
  push32((uint32_t)(EDI));
  /* 11697f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11697f6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11697f6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697f72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697f77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697f79 pop ecx */
  ECX = (pop32());
  /* 11697f7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697f80 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697f83 pop edi */
  EDI = (pop32());
  /* 11697f84 pop esi */
  ESI = (pop32());
  /* 11697f85 pop ebx */
  EBX = (pop32());
  /* 11697f86 mov esp, ebp */
  ESP = (EBP);
  /* 11697f88 pop ebp */
  EBP = (pop32());
  /* 11697f89 ret  */
  ESPCHK(0x11697f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x11697fa0 (77 bytes, 32 insns) */
void f_11697fa0(void) {
  FTRACE(0x11697fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11697fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11697fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11697fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11697fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11697fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11697fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11697fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11697faa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11697fad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11697fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11697fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11697fb9 pop ecx */
  ECX = (pop32());
  /* 11697fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11697fbd mov esi, esp */
  ESI = (ESP);
  /* 11697fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11697fc2 push eax */
  push32((uint32_t)(EAX));
  /* 11697fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11697fc6 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11697fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11697fca call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x11697fd0u);
  /* 11697fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697fd5 call 0x11699d90 */
  push32(0x11697fdau); f_11699d90();
  /* 11697fda pop edi */
  EDI = (pop32());
  /* 11697fdb pop esi */
  ESI = (pop32());
  /* 11697fdc pop ebx */
  EBX = (pop32());
  /* 11697fdd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11697fe0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11697fe2 call 0x11699d90 */
  push32(0x11697fe7u); f_11699d90();
  /* 11697fe7 mov esp, ebp */
  ESP = (EBP);
  /* 11697fe9 pop ebp */
  EBP = (pop32());
  /* 11697fea ret 4 */
  ESPCHK(0x11697fa0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008000 @ 0x11698000 (413 bytes, 143 insns) */
void f_11698000(void) {
  FTRACE(0x11698000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698000 push ebp */
  push32((uint32_t)(EBP));
  /* 11698001 mov ebp, esp */
  EBP = (ESP);
  /* 11698003 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698006 push ebx */
  push32((uint32_t)(EBX));
  /* 11698007 push esi */
  push32((uint32_t)(ESI));
  /* 11698008 push edi */
  push32((uint32_t)(EDI));
  /* 11698009 push ecx */
  push32((uint32_t)(ECX));
  /* 1169800a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 1169800d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11698012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698019 pop ecx */
  ECX = (pop32());
  /* 1169801a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169801d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698020 call 0x116910d2 */
  push32(0x11698025u); f_116910d2();
  /* 11698025 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169802a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169802c je 0x1169818c */
  if (C.zf) goto L_1169818c;
  /* 11698032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698035 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11698037 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 1169803a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169803d jne 0x116980e8 */
  if (!C.zf) goto L_116980e8;
  /* 11698043 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11698048 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1169804b push edx */
  push32((uint32_t)(EDX));
  /* 1169804c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169804f call 0x116910af */
  push32(0x11698054u); f_116910af();
  /* 11698054 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11698057 push ecx */
  push32((uint32_t)(ECX));
  /* 11698058 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1169805a push edx */
  push32((uint32_t)(EDX));
  /* 1169805b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169805e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698061 push eax */
  push32((uint32_t)(EAX));
  /* 11698062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698065 call 0x116912da */
  push32(0x1169806au); f_116912da();
  /* 1169806a mov esi, esp */
  ESI = (ESP);
  /* 1169806c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169806e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698071 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698074 push ecx */
  push32((uint32_t)(ECX));
  /* 11698075 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x1169807bu);
  /* 1169807b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169807e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698080 call 0x11699d90 */
  push32(0x11698085u); f_11699d90();
  /* 11698085 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698088 jge 0x11698093 */
  if ((C.sf==C.of)) goto L_11698093;
  /* 1169808a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169808d mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11698091 jmp 0x116980e8 */
  goto L_116980e8;
L_11698093:;
  /* 11698093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698096 call 0x11691186 */
  push32(0x1169809bu); f_11691186();
  /* 1169809b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116980a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116980a2 jne 0x116980e8 */
  if (!C.zf) goto L_116980e8;
  /* 116980a4 mov esi, esp */
  ESI = (ESP);
  /* 116980a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116980a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116980ab add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116980ae push eax */
  push32((uint32_t)(EAX));
  /* 116980af call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116980b5u);
  /* 116980b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116980b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116980ba call 0x11699d90 */
  push32(0x116980bfu); f_11699d90();
  /* 116980bf mov esi, esp */
  ESI = (ESP);
  /* 116980c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116980c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116980c6 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 116980c9 push edx */
  push32((uint32_t)(EDX));
  /* 116980ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116980cd add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116980d0 push eax */
  push32((uint32_t)(EAX));
  /* 116980d1 mov cl, byte ptr [0x116cdfd8] */
  CL = (r8((uint32_t)(0x116cdfd8)));
  /* 116980d7 push ecx */
  push32((uint32_t)(ECX));
  /* 116980d8 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x116980deu);
  /* 116980de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116980e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116980e3 call 0x11699d90 */
  push32(0x116980e8u); f_11699d90();
L_116980e8:;
  /* 116980e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116980eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116980ed mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 116980f0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116980f3 jne 0x1169818c */
  if (!C.zf) goto L_1169818c;
  /* 116980f9 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 116980fe lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11698101 push ecx */
  push32((uint32_t)(ECX));
  /* 11698102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698105 call 0x116910af */
  push32(0x1169810au); f_116910af();
  /* 1169810a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169810d push edx */
  push32((uint32_t)(EDX));
  /* 1169810e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11698110 push eax */
  push32((uint32_t)(EAX));
  /* 11698111 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698114 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698117 push ecx */
  push32((uint32_t)(ECX));
  /* 11698118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169811b call 0x116912da */
  push32(0x11698120u); f_116912da();
  /* 11698120 mov esi, esp */
  ESI = (ESP);
  /* 11698122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698127 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169812a push edx */
  push32((uint32_t)(EDX));
  /* 1169812b call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11698131u);
  /* 11698131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698136 call 0x11699d90 */
  push32(0x1169813bu); f_11699d90();
  /* 1169813b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169813e jge 0x11698185 */
  if ((C.sf==C.of)) goto L_11698185;
  /* 11698140 mov esi, esp */
  ESI = (ESP);
  /* 11698142 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698147 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169814a push eax */
  push32((uint32_t)(EAX));
  /* 1169814b call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11698151u);
  /* 11698151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698156 call 0x11699d90 */
  push32(0x1169815bu); f_11699d90();
  /* 1169815b mov esi, esp */
  ESI = (ESP);
  /* 1169815d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169815f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698162 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11698165 push edx */
  push32((uint32_t)(EDX));
  /* 11698166 mov eax, dword ptr [0x116d04f8] */
  EAX = (r32((uint32_t)(0x116d04f8)));
  /* 1169816b push eax */
  push32((uint32_t)(EAX));
  /* 1169816c mov cl, byte ptr [0x116cdfd8] */
  CL = (r8((uint32_t)(0x116cdfd8)));
  /* 11698172 push ecx */
  push32((uint32_t)(ECX));
  /* 11698173 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11698179u);
  /* 11698179 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169817c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169817e call 0x11699d90 */
  push32(0x11698183u); f_11699d90();
  /* 11698183 jmp 0x1169818c */
  goto L_1169818c;
L_11698185:;
  /* 11698185 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698188 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_1169818c:;
  /* 1169818c pop edi */
  EDI = (pop32());
  /* 1169818d pop esi */
  ESI = (pop32());
  /* 1169818e pop ebx */
  EBX = (pop32());
  /* 1169818f add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698192 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698194 call 0x11699d90 */
  push32(0x11698199u); f_11699d90();
  /* 11698199 mov esp, ebp */
  ESP = (EBP);
  /* 1169819b pop ebp */
  EBP = (pop32());
  /* 1169819c ret  */
  ESPCHK(0x11698000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x11698210 (311 bytes, 104 insns) */
void f_11698210(void) {
  FTRACE(0x11698210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698210 push ebp */
  push32((uint32_t)(EBP));
  /* 11698211 mov ebp, esp */
  EBP = (ESP);
  /* 11698213 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698219 push ebx */
  push32((uint32_t)(EBX));
  /* 1169821a push esi */
  push32((uint32_t)(ESI));
  /* 1169821b push edi */
  push32((uint32_t)(EDI));
  /* 1169821c push ecx */
  push32((uint32_t)(ECX));
  /* 1169821d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11698223 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11698228 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1169822d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1169822f pop ecx */
  ECX = (pop32());
  /* 11698230 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698236 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11698239 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169823c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1169823f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11698242 push edx */
  push32((uint32_t)(EDX));
  /* 11698243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698246 call 0x116910af */
  push32(0x1169824bu); f_116910af();
  /* 1169824b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169824d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11698250 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11698253 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11698256 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11698259 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1169825c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169825f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11698262 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11698265 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698268 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1169826b fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 1169826e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11698271 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698274 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11698277 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 1169827a fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 1169827c sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169827f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11698282 call 0x11699f44 */
  push32(0x11698287u); f_11699f44();
  /* 11698287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169828a fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 1169828d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11698290 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698293 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11698295 jge 0x116982a3 */
  if ((C.sf==C.of)) goto L_116982a3;
  /* 11698297 fld qword ptr [0x116ca040] */
  fpu_push(rf64((uint32_t)(0x116ca040)));
  /* 1169829d fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 116982a0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_116982a3:;
  /* 116982a3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 116982a6 fmul qword ptr [0x116ca030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x116ca030)));
  /* 116982ac fdiv qword ptr [0x116ca020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x116ca020)));
  /* 116982b2 call 0x1169a07c */
  push32(0x116982b7u); f_1169a07c();
  /* 116982b7 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116982ba fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 116982bd fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 116982c0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116982c3 push edx */
  push32((uint32_t)(EDX));
  /* 116982c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116982c7 push eax */
  push32((uint32_t)(EAX));
  /* 116982c8 call 0x11699e94 */
  push32(0x116982cdu); f_11699e94();
  /* 116982cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116982d0 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 116982d3 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 116982d6 call 0x1169a07c */
  push32(0x116982dbu); f_1169a07c();
  /* 116982db mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116982de fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 116982e1 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 116982e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116982e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116982e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116982eb push edx */
  push32((uint32_t)(EDX));
  /* 116982ec call 0x11699de4 */
  push32(0x116982f1u); f_11699de4();
  /* 116982f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116982f4 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 116982f7 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 116982fa call 0x1169a07c */
  push32(0x116982ffu); f_1169a07c();
  /* 116982ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11698302 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11698304 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11698307 push eax */
  push32((uint32_t)(EAX));
  /* 11698308 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169830b push ecx */
  push32((uint32_t)(ECX));
  /* 1169830c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169830f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698312 push edx */
  push32((uint32_t)(EDX));
  /* 11698313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698316 call 0x116912da */
  push32(0x1169831bu); f_116912da();
  /* 1169831b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1169831e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698326 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11698329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169832c call 0x11691221 */
  push32(0x11698331u); f_11691221();
  /* 11698331 pop edi */
  EDI = (pop32());
  /* 11698332 pop esi */
  ESI = (pop32());
  /* 11698333 pop ebx */
  EBX = (pop32());
  /* 11698334 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169833a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169833c call 0x11699d90 */
  push32(0x11698341u); f_11699d90();
  /* 11698341 mov esp, ebp */
  ESP = (EBP);
  /* 11698343 pop ebp */
  EBP = (pop32());
  /* 11698344 ret 0xc */
  ESPCHK(0x11698210u, _esp0);
  ESP += 16; return;
}

/* FUN_100083a0 @ 0x116983a0 (198 bytes, 71 insns) */
void f_116983a0(void) {
  FTRACE(0x116983a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116983a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116983a1 mov ebp, esp */
  EBP = (ESP);
  /* 116983a3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116983a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116983a7 push esi */
  push32((uint32_t)(ESI));
  /* 116983a8 push edi */
  push32((uint32_t)(EDI));
  /* 116983a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116983aa lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 116983ad mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 116983b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116983b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116983b9 pop ecx */
  ECX = (pop32());
  /* 116983ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116983bd mov esi, esp */
  ESI = (ESP);
  /* 116983bf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 116983c2 push eax */
  push32((uint32_t)(EAX));
  /* 116983c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116983c5 mov ecx, dword ptr [0x116d04fc] */
  ECX = (r32((uint32_t)(0x116d04fc)));
  /* 116983cb push ecx */
  push32((uint32_t)(ECX));
  /* 116983cc call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x116983d2u);
  /* 116983d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116983d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116983d7 call 0x11699d90 */
  push32(0x116983dcu); f_11699d90();
  /* 116983dc mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116983df mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 116983e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116983e5 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 116983e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116983eb mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 116983ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116983f1 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116983f4 mov esi, esp */
  ESI = (ESP);
  /* 116983f6 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 116983f9 push eax */
  push32((uint32_t)(EAX));
  /* 116983fa call dword ptr [0x116d34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f4))), 0x11698400u);
  /* 11698400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698405 call 0x11699d90 */
  push32(0x1169840au); f_11699d90();
  /* 1169840a mov esi, esp */
  ESI = (ESP);
  /* 1169840c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169840f push ecx */
  push32((uint32_t)(ECX));
  /* 11698410 mov edx, dword ptr [0x116d04fc] */
  EDX = (r32((uint32_t)(0x116d04fc)));
  /* 11698416 push edx */
  push32((uint32_t)(EDX));
  /* 11698417 mov eax, dword ptr [0x116d04f8] */
  EAX = (r32((uint32_t)(0x116d04f8)));
  /* 1169841c push eax */
  push32((uint32_t)(EAX));
  /* 1169841d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698420 push ecx */
  push32((uint32_t)(ECX));
  /* 11698421 call dword ptr [0x116d34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f8))), 0x11698427u);
  /* 11698427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169842a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169842c call 0x11699d90 */
  push32(0x11698431u); f_11699d90();
  /* 11698431 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11698434 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11698437 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169843a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1169843d mov esi, esp */
  ESI = (ESP);
  /* 1169843f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11698442 push ecx */
  push32((uint32_t)(ECX));
  /* 11698443 call dword ptr [0x116d34f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f4))), 0x11698449u);
  /* 11698449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169844c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169844e call 0x11699d90 */
  push32(0x11698453u); f_11699d90();
  /* 11698453 pop edi */
  EDI = (pop32());
  /* 11698454 pop esi */
  ESI = (pop32());
  /* 11698455 pop ebx */
  EBX = (pop32());
  /* 11698456 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698459 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169845b call 0x11699d90 */
  push32(0x11698460u); f_11699d90();
  /* 11698460 mov esp, ebp */
  ESP = (EBP);
  /* 11698462 pop ebp */
  EBP = (pop32());
  /* 11698463 ret 0x10 */
  ESPCHK(0x116983a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100084a0 @ 0x116984a0 (120 bytes, 47 insns) */
void f_116984a0(void) {
  FTRACE(0x116984a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116984a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116984a1 mov ebp, esp */
  EBP = (ESP);
  /* 116984a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116984a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116984a7 push esi */
  push32((uint32_t)(ESI));
  /* 116984a8 push edi */
  push32((uint32_t)(EDI));
  /* 116984a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116984aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 116984ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 116984b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116984b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116984b9 pop ecx */
  ECX = (pop32());
  /* 116984ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116984bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 116984c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116984c4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116984c7 mov esi, esp */
  ESI = (ESP);
  /* 116984c9 push eax */
  push32((uint32_t)(EAX));
  /* 116984ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116984cd add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116984d0 push ecx */
  push32((uint32_t)(ECX));
  /* 116984d1 call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x116984d7u);
  /* 116984d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116984da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116984dc call 0x11699d90 */
  push32(0x116984e1u); f_11699d90();
  /* 116984e1 mov esi, eax */
  ESI = (EAX);
  /* 116984e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116984e6 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116984e9 mov edi, esp */
  EDI = (ESP);
  /* 116984eb push edx */
  push32((uint32_t)(EDX));
  /* 116984ec call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x116984f2u);
  /* 116984f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116984f5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116984f7 call 0x11699d90 */
  push32(0x116984fcu); f_11699d90();
  /* 116984fc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116984fe jne 0x11698504 */
  if (!C.zf) goto L_11698504;
  /* 11698500 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11698504:;
  /* 11698504 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11698507 pop edi */
  EDI = (pop32());
  /* 11698508 pop esi */
  ESI = (pop32());
  /* 11698509 pop ebx */
  EBX = (pop32());
  /* 1169850a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169850d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169850f call 0x11699d90 */
  push32(0x11698514u); f_11699d90();
  /* 11698514 mov esp, ebp */
  ESP = (EBP);
  /* 11698516 pop ebp */
  EBP = (pop32());
  /* 11698517 ret  */
  ESPCHK(0x116984a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008540 @ 0x11698540 (86 bytes, 35 insns) */
void f_11698540(void) {
  FTRACE(0x11698540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698540 push ebp */
  push32((uint32_t)(EBP));
  /* 11698541 mov ebp, esp */
  EBP = (ESP);
  /* 11698543 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698546 push ebx */
  push32((uint32_t)(EBX));
  /* 11698547 push esi */
  push32((uint32_t)(ESI));
  /* 11698548 push edi */
  push32((uint32_t)(EDI));
  /* 11698549 push ecx */
  push32((uint32_t)(ECX));
  /* 1169854a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169854d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11698552 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698557 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698559 pop ecx */
  ECX = (pop32());
  /* 1169855a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169855d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11698561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698564 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698567 mov esi, esp */
  ESI = (ESP);
  /* 11698569 push eax */
  push32((uint32_t)(EAX));
  /* 1169856a call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11698570u);
  /* 11698570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698573 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698575 call 0x11699d90 */
  push32(0x1169857au); f_11699d90();
  /* 1169857a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169857c jle 0x11698582 */
  if ((C.zf||C.sf!=C.of)) goto L_11698582;
  /* 1169857e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11698582:;
  /* 11698582 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11698585 pop edi */
  EDI = (pop32());
  /* 11698586 pop esi */
  ESI = (pop32());
  /* 11698587 pop ebx */
  EBX = (pop32());
  /* 11698588 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169858b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169858d call 0x11699d90 */
  push32(0x11698592u); f_11699d90();
  /* 11698592 mov esp, ebp */
  ESP = (EBP);
  /* 11698594 pop ebp */
  EBP = (pop32());
  /* 11698595 ret  */
  ESPCHK(0x11698540u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x116985b0 (42 bytes, 21 insns) */
void f_116985b0(void) {
  FTRACE(0x116985b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116985b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116985b1 mov ebp, esp */
  EBP = (ESP);
  /* 116985b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116985b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116985b7 push esi */
  push32((uint32_t)(ESI));
  /* 116985b8 push edi */
  push32((uint32_t)(EDI));
  /* 116985b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116985ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116985bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116985c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116985c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116985c9 pop ecx */
  ECX = (pop32());
  /* 116985ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116985cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116985d0 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116985d3 pop edi */
  EDI = (pop32());
  /* 116985d4 pop esi */
  ESI = (pop32());
  /* 116985d5 pop ebx */
  EBX = (pop32());
  /* 116985d6 mov esp, ebp */
  ESP = (EBP);
  /* 116985d8 pop ebp */
  EBP = (pop32());
  /* 116985d9 ret  */
  ESPCHK(0x116985b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x116985f0 (235 bytes, 78 insns) */
void f_116985f0(void) {
  FTRACE(0x116985f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116985f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116985f1 mov ebp, esp */
  EBP = (ESP);
  /* 116985f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116985f9 push ebx */
  push32((uint32_t)(EBX));
  /* 116985fa push esi */
  push32((uint32_t)(ESI));
  /* 116985fb push edi */
  push32((uint32_t)(EDI));
  /* 116985fc push ecx */
  push32((uint32_t)(ECX));
  /* 116985fd lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11698603 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11698608 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1169860d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1169860f pop ecx */
  ECX = (pop32());
  /* 11698610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698613 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 1169861a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11698621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698624 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698627 mov esi, esp */
  ESI = (ESP);
  /* 11698629 push eax */
  push32((uint32_t)(EAX));
  /* 1169862a call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11698630u);
  /* 11698630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698635 call 0x11699d90 */
  push32(0x1169863au); f_11699d90();
  /* 1169863a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 1169863d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698641 jle 0x116986b4 */
  if ((C.zf||C.sf!=C.of)) goto L_116986b4;
  /* 11698643 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 1169864a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11698651 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11698658 jmp 0x11698663 */
  goto L_11698663;
L_1169865a:;
  /* 1169865a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 1169865d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698660 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11698663:;
  /* 11698663 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11698666 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698669 jge 0x116986a0 */
  if ((C.sf==C.of)) goto L_116986a0;
  /* 1169866b mov esi, esp */
  ESI = (ESP);
  /* 1169866d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11698670 push eax */
  push32((uint32_t)(EAX));
  /* 11698671 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11698674 push ecx */
  push32((uint32_t)(ECX));
  /* 11698675 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698678 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169867b push edx */
  push32((uint32_t)(EDX));
  /* 1169867c call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11698682u);
  /* 11698682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698685 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698687 call 0x11699d90 */
  push32(0x1169868cu); f_11699d90();
  /* 1169868c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1169868f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698692 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11698695 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11698698 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169869b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 1169869e jmp 0x1169865a */
  goto L_1169865a;
L_116986a0:;
  /* 116986a0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116986a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116986a4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116986a7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 116986aa mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 116986ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116986ae idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116986b1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_116986b4:;
  /* 116986b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116986b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116986ba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116986bc mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116986bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116986c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116986c5 pop edi */
  EDI = (pop32());
  /* 116986c6 pop esi */
  ESI = (pop32());
  /* 116986c7 pop ebx */
  EBX = (pop32());
  /* 116986c8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116986ce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116986d0 call 0x11699d90 */
  push32(0x116986d5u); f_11699d90();
  /* 116986d5 mov esp, ebp */
  ESP = (EBP);
  /* 116986d7 pop ebp */
  EBP = (pop32());
  /* 116986d8 ret 4 */
  ESPCHK(0x116985f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008720 @ 0x11698720 (250 bytes, 89 insns) */
void f_11698720(void) {
  FTRACE(0x11698720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698720 push ebp */
  push32((uint32_t)(EBP));
  /* 11698721 mov ebp, esp */
  EBP = (ESP);
  /* 11698723 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698726 push ebx */
  push32((uint32_t)(EBX));
  /* 11698727 push esi */
  push32((uint32_t)(ESI));
  /* 11698728 push edi */
  push32((uint32_t)(EDI));
  /* 11698729 push ecx */
  push32((uint32_t)(ECX));
  /* 1169872a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169872d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698739 pop ecx */
  ECX = (pop32());
  /* 1169873a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169873d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698740 call 0x1169110e */
  push32(0x11698745u); f_1169110e();
  /* 11698745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169874a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169874c je 0x11698809 */
  if (C.zf) goto L_11698809;
  /* 11698752 mov esi, esp */
  ESI = (ESP);
  /* 11698754 mov eax, dword ptr [0x116cdfdc] */
  EAX = (r32((uint32_t)(0x116cdfdc)));
  /* 11698759 push eax */
  push32((uint32_t)(EAX));
  /* 1169875a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169875d push ecx */
  push32((uint32_t)(ECX));
  /* 1169875e mov edx, dword ptr [0x116d0500] */
  EDX = (r32((uint32_t)(0x116d0500)));
  /* 11698764 push edx */
  push32((uint32_t)(EDX));
  /* 11698765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698768 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169876b push eax */
  push32((uint32_t)(EAX));
  /* 1169876c call dword ptr [0x116d34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f8))), 0x11698772u);
  /* 11698772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698777 call 0x11699d90 */
  push32(0x1169877cu); f_11699d90();
  /* 1169877c mov esi, esp */
  ESI = (ESP);
  /* 1169877e push 0 */
  push32((uint32_t)(0x0u));
  /* 11698780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698783 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698786 push ecx */
  push32((uint32_t)(ECX));
  /* 11698787 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x1169878du);
  /* 1169878d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698792 call 0x11699d90 */
  push32(0x11698797u); f_11699d90();
  /* 11698797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11698799 jle 0x116987bc */
  if ((C.zf||C.sf!=C.of)) goto L_116987bc;
  /* 1169879b mov esi, esp */
  ESI = (ESP);
  /* 1169879d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169879f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116987a2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116987a5 push edx */
  push32((uint32_t)(EDX));
  /* 116987a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116987a9 push eax */
  push32((uint32_t)(EAX));
  /* 116987aa call dword ptr [0x116d3594] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3594))), 0x116987b0u);
  /* 116987b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116987b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116987b5 call 0x11699d90 */
  push32(0x116987bau); f_11699d90();
  /* 116987ba jmp 0x11698809 */
  goto L_11698809;
L_116987bc:;
  /* 116987bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116987bf call 0x1169123f */
  push32(0x116987c4u); f_1169123f();
  /* 116987c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116987c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116987cb jne 0x11698809 */
  if (!C.zf) goto L_11698809;
  /* 116987cd mov esi, esp */
  ESI = (ESP);
  /* 116987cf push 0 */
  push32((uint32_t)(0x0u));
  /* 116987d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116987d4 push ecx */
  push32((uint32_t)(ECX));
  /* 116987d5 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116987dbu);
  /* 116987db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116987de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116987e0 call 0x11699d90 */
  push32(0x116987e5u); f_11699d90();
  /* 116987e5 mov esi, esp */
  ESI = (ESP);
  /* 116987e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116987e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116987eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116987ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116987f1 push eax */
  push32((uint32_t)(EAX));
  /* 116987f2 mov cl, byte ptr [0x116cdfe0] */
  CL = (r8((uint32_t)(0x116cdfe0)));
  /* 116987f8 push ecx */
  push32((uint32_t)(ECX));
  /* 116987f9 call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x116987ffu);
  /* 116987ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698804 call 0x11699d90 */
  push32(0x11698809u); f_11699d90();
L_11698809:;
  /* 11698809 pop edi */
  EDI = (pop32());
  /* 1169880a pop esi */
  ESI = (pop32());
  /* 1169880b pop ebx */
  EBX = (pop32());
  /* 1169880c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169880f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698811 call 0x11699d90 */
  push32(0x11698816u); f_11699d90();
  /* 11698816 mov esp, ebp */
  ESP = (EBP);
  /* 11698818 pop ebp */
  EBP = (pop32());
  /* 11698819 ret  */
  ESPCHK(0x11698720u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x11698860 (74 bytes, 31 insns) */
void f_11698860(void) {
  FTRACE(0x11698860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698860 push ebp */
  push32((uint32_t)(EBP));
  /* 11698861 mov ebp, esp */
  EBP = (ESP);
  /* 11698863 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698866 push ebx */
  push32((uint32_t)(EBX));
  /* 11698867 push esi */
  push32((uint32_t)(ESI));
  /* 11698868 push edi */
  push32((uint32_t)(EDI));
  /* 11698869 push ecx */
  push32((uint32_t)(ECX));
  /* 1169886a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169886d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698872 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698877 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698879 pop ecx */
  ECX = (pop32());
  /* 1169887a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169887d mov esi, esp */
  ESI = (ESP);
  /* 1169887f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698882 push eax */
  push32((uint32_t)(EAX));
  /* 11698883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698886 push ecx */
  push32((uint32_t)(ECX));
  /* 11698887 call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x1169888du);
  /* 1169888d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698892 call 0x11699d90 */
  push32(0x11698897u); f_11699d90();
  /* 11698897 pop edi */
  EDI = (pop32());
  /* 11698898 pop esi */
  ESI = (pop32());
  /* 11698899 pop ebx */
  EBX = (pop32());
  /* 1169889a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169889d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169889f call 0x11699d90 */
  push32(0x116988a4u); f_11699d90();
  /* 116988a4 mov esp, ebp */
  ESP = (EBP);
  /* 116988a6 pop ebp */
  EBP = (pop32());
  /* 116988a7 ret 4 */
  ESPCHK(0x11698860u, _esp0);
  ESP += 8; return;
}

/* FUN_100088c0 @ 0x116988c0 (114 bytes, 45 insns) */
void f_116988c0(void) {
  FTRACE(0x116988c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116988c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116988c1 mov ebp, esp */
  EBP = (ESP);
  /* 116988c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116988c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116988c7 push esi */
  push32((uint32_t)(ESI));
  /* 116988c8 push edi */
  push32((uint32_t)(EDI));
  /* 116988c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116988ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 116988cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 116988d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116988d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116988d9 pop ecx */
  ECX = (pop32());
  /* 116988da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116988dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 116988e1 mov esi, esp */
  ESI = (ESP);
  /* 116988e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116988e6 push eax */
  push32((uint32_t)(EAX));
  /* 116988e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116988ea mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116988ed push edx */
  push32((uint32_t)(EDX));
  /* 116988ee call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x116988f4u);
  /* 116988f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116988f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116988f9 call 0x11699d90 */
  push32(0x116988feu); f_11699d90();
  /* 116988fe mov esi, eax */
  ESI = (EAX);
  /* 11698900 mov edi, esp */
  EDI = (ESP);
  /* 11698902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698905 push eax */
  push32((uint32_t)(EAX));
  /* 11698906 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x1169890cu);
  /* 1169890c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169890f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698911 call 0x11699d90 */
  push32(0x11698916u); f_11699d90();
  /* 11698916 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698918 jne 0x1169891e */
  if (!C.zf) goto L_1169891e;
  /* 1169891a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1169891e:;
  /* 1169891e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11698921 pop edi */
  EDI = (pop32());
  /* 11698922 pop esi */
  ESI = (pop32());
  /* 11698923 pop ebx */
  EBX = (pop32());
  /* 11698924 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698927 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698929 call 0x11699d90 */
  push32(0x1169892eu); f_11699d90();
  /* 1169892e mov esp, ebp */
  ESP = (EBP);
  /* 11698930 pop ebp */
  EBP = (pop32());
  /* 11698931 ret  */
  ESPCHK(0x116988c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008950 @ 0x11698950 (83 bytes, 34 insns) */
void f_11698950(void) {
  FTRACE(0x11698950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698950 push ebp */
  push32((uint32_t)(EBP));
  /* 11698951 mov ebp, esp */
  EBP = (ESP);
  /* 11698953 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698956 push ebx */
  push32((uint32_t)(EBX));
  /* 11698957 push esi */
  push32((uint32_t)(ESI));
  /* 11698958 push edi */
  push32((uint32_t)(EDI));
  /* 11698959 push ecx */
  push32((uint32_t)(ECX));
  /* 1169895a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169895d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11698962 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698967 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698969 pop ecx */
  ECX = (pop32());
  /* 1169896a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169896d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11698971 mov esi, esp */
  ESI = (ESP);
  /* 11698973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698976 push eax */
  push32((uint32_t)(EAX));
  /* 11698977 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x1169897du);
  /* 1169897d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698982 call 0x11699d90 */
  push32(0x11698987u); f_11699d90();
  /* 11698987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11698989 jle 0x1169898f */
  if ((C.zf||C.sf!=C.of)) goto L_1169898f;
  /* 1169898b mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1169898f:;
  /* 1169898f mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11698992 pop edi */
  EDI = (pop32());
  /* 11698993 pop esi */
  ESI = (pop32());
  /* 11698994 pop ebx */
  EBX = (pop32());
  /* 11698995 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698998 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169899a call 0x11699d90 */
  push32(0x1169899fu); f_11699d90();
  /* 1169899f mov esp, ebp */
  ESP = (EBP);
  /* 116989a1 pop ebp */
  EBP = (pop32());
  /* 116989a2 ret  */
  ESPCHK(0x11698950u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x116989c0 (126 bytes, 48 insns) */
void f_116989c0(void) {
  FTRACE(0x116989c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116989c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116989c1 mov ebp, esp */
  EBP = (ESP);
  /* 116989c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116989c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116989c7 push esi */
  push32((uint32_t)(ESI));
  /* 116989c8 push edi */
  push32((uint32_t)(EDI));
  /* 116989c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116989ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116989cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116989d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116989d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116989d9 pop ecx */
  ECX = (pop32());
  /* 116989da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116989dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116989e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116989e3 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 116989e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116989e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116989ec mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 116989ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116989f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116989f3 call 0x116910be */
  push32(0x116989f8u); f_116910be();
  /* 116989f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116989fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116989fe mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11698a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698a04 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11698a07 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11698a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698a0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11698a0f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11698a12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698a15 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698a18 mov esi, esp */
  ESI = (ESP);
  /* 11698a1a push ecx */
  push32((uint32_t)(ECX));
  /* 11698a1b call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x11698a21u);
  /* 11698a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698a24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698a26 call 0x11699d90 */
  push32(0x11698a2bu); f_11699d90();
  /* 11698a2b pop edi */
  EDI = (pop32());
  /* 11698a2c pop esi */
  ESI = (pop32());
  /* 11698a2d pop ebx */
  EBX = (pop32());
  /* 11698a2e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698a31 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698a33 call 0x11699d90 */
  push32(0x11698a38u); f_11699d90();
  /* 11698a38 mov esp, ebp */
  ESP = (EBP);
  /* 11698a3a pop ebp */
  EBP = (pop32());
  /* 11698a3b ret 0x10 */
  ESPCHK(0x116989c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008a60 @ 0x11698a60 (136 bytes, 54 insns) */
void f_11698a60(void) {
  FTRACE(0x11698a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11698a61 mov ebp, esp */
  EBP = (ESP);
  /* 11698a63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11698a67 push esi */
  push32((uint32_t)(ESI));
  /* 11698a68 push edi */
  push32((uint32_t)(EDI));
  /* 11698a69 push ecx */
  push32((uint32_t)(ECX));
  /* 11698a6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698a6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698a72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698a77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698a79 pop ecx */
  ECX = (pop32());
  /* 11698a7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698a7d mov esi, esp */
  ESI = (ESP);
  /* 11698a7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698a82 push eax */
  push32((uint32_t)(EAX));
  /* 11698a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698a86 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698a89 push ecx */
  push32((uint32_t)(ECX));
  /* 11698a8a call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x11698a90u);
  /* 11698a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698a95 call 0x11699d90 */
  push32(0x11698a9au); f_11699d90();
  /* 11698a9a mov esi, esp */
  ESI = (ESP);
  /* 11698a9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11698a9f push edx */
  push32((uint32_t)(EDX));
  /* 11698aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698aa3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698aa6 push eax */
  push32((uint32_t)(EAX));
  /* 11698aa7 call dword ptr [0x116d34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34d8))), 0x11698aadu);
  /* 11698aad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698ab2 call 0x11699d90 */
  push32(0x11698ab7u); f_11699d90();
  /* 11698ab7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11698aba push ecx */
  push32((uint32_t)(ECX));
  /* 11698abb mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11698abe push edx */
  push32((uint32_t)(EDX));
  /* 11698abf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698ac2 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698ac5 push eax */
  push32((uint32_t)(EAX));
  /* 11698ac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698ac9 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698acc push ecx */
  push32((uint32_t)(ECX));
  /* 11698acd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698ad0 call 0x11691064 */
  push32(0x11698ad5u); f_11691064();
  /* 11698ad5 pop edi */
  EDI = (pop32());
  /* 11698ad6 pop esi */
  ESI = (pop32());
  /* 11698ad7 pop ebx */
  EBX = (pop32());
  /* 11698ad8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698adb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698add call 0x11699d90 */
  push32(0x11698ae2u); f_11699d90();
  /* 11698ae2 mov esp, ebp */
  ESP = (EBP);
  /* 11698ae4 pop ebp */
  EBP = (pop32());
  /* 11698ae5 ret 0x10 */
  ESPCHK(0x11698a60u, _esp0);
  ESP += 20; return;
}

/* FUN_10008b10 @ 0x11698b10 (150 bytes, 58 insns) */
void f_11698b10(void) {
  FTRACE(0x11698b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11698b11 mov ebp, esp */
  EBP = (ESP);
  /* 11698b13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11698b17 push esi */
  push32((uint32_t)(ESI));
  /* 11698b18 push edi */
  push32((uint32_t)(EDI));
  /* 11698b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11698b1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698b1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698b22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698b27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698b29 pop ecx */
  ECX = (pop32());
  /* 11698b2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698b2d mov esi, esp */
  ESI = (ESP);
  /* 11698b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698b32 push eax */
  push32((uint32_t)(EAX));
  /* 11698b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b36 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b39 push ecx */
  push32((uint32_t)(ECX));
  /* 11698b3a call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x11698b40u);
  /* 11698b40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698b45 call 0x11699d90 */
  push32(0x11698b4au); f_11699d90();
  /* 11698b4a mov esi, esp */
  ESI = (ESP);
  /* 11698b4c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11698b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b54 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b57 push edx */
  push32((uint32_t)(EDX));
  /* 11698b58 mov eax, dword ptr [0x116d0504] */
  EAX = (r32((uint32_t)(0x116d0504)));
  /* 11698b5d push eax */
  push32((uint32_t)(EAX));
  /* 11698b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b61 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b64 push ecx */
  push32((uint32_t)(ECX));
  /* 11698b65 call dword ptr [0x116d34f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34f8))), 0x11698b6bu);
  /* 11698b6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698b70 call 0x11699d90 */
  push32(0x11698b75u); f_11699d90();
  /* 11698b75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11698b78 push edx */
  push32((uint32_t)(EDX));
  /* 11698b79 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11698b7c push eax */
  push32((uint32_t)(EAX));
  /* 11698b7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b80 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11698b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b87 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b8a push edx */
  push32((uint32_t)(EDX));
  /* 11698b8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698b8e call 0x11691064 */
  push32(0x11698b93u); f_11691064();
  /* 11698b93 pop edi */
  EDI = (pop32());
  /* 11698b94 pop esi */
  ESI = (pop32());
  /* 11698b95 pop ebx */
  EBX = (pop32());
  /* 11698b96 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698b99 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698b9b call 0x11699d90 */
  push32(0x11698ba0u); f_11699d90();
  /* 11698ba0 mov esp, ebp */
  ESP = (EBP);
  /* 11698ba2 pop ebp */
  EBP = (pop32());
  /* 11698ba3 ret 0xc */
  ESPCHK(0x11698b10u, _esp0);
  ESP += 16; return;
}

/* FUN_10008bd0 @ 0x11698bd0 (255 bytes, 92 insns) */
void f_11698bd0(void) {
  FTRACE(0x11698bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11698bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11698bd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11698bd7 push esi */
  push32((uint32_t)(ESI));
  /* 11698bd8 push edi */
  push32((uint32_t)(EDI));
  /* 11698bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11698bda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698bdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698be2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698be7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698be9 pop ecx */
  ECX = (pop32());
  /* 11698bea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698bed mov esi, esp */
  ESI = (ESP);
  /* 11698bef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698bf2 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11698bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11698bf6 call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11698bfcu);
  /* 11698bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698bff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c01 call 0x11699d90 */
  push32(0x11698c06u); f_11699d90();
  /* 11698c06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11698c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11698c0d je 0x11698c55 */
  if (C.zf) goto L_11698c55;
  /* 11698c0f mov esi, esp */
  ESI = (ESP);
  /* 11698c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11698c16 push eax */
  push32((uint32_t)(EAX));
  /* 11698c17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c1a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11698c1d push edx */
  push32((uint32_t)(EDX));
  /* 11698c1e call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11698c24u);
  /* 11698c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c29 call 0x11699d90 */
  push32(0x11698c2eu); f_11699d90();
  /* 11698c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11698c30 jle 0x11698c55 */
  if ((C.zf||C.sf!=C.of)) goto L_11698c55;
  /* 11698c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c35 call 0x116912cb */
  push32(0x11698c3au); f_116912cb();
  /* 11698c3a mov esi, esp */
  ESI = (ESP);
  /* 11698c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11698c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c41 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11698c44 push ecx */
  push32((uint32_t)(ECX));
  /* 11698c45 call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11698c4bu);
  /* 11698c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c50 call 0x11699d90 */
  push32(0x11698c55u); f_11699d90();
L_11698c55:;
  /* 11698c55 mov esi, esp */
  ESI = (ESP);
  /* 11698c57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c5a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11698c5d push eax */
  push32((uint32_t)(EAX));
  /* 11698c5e call dword ptr [0x116d3504] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3504))), 0x11698c64u);
  /* 11698c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698c67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c69 call 0x11699d90 */
  push32(0x11698c6eu); f_11699d90();
  /* 11698c6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11698c73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11698c75 jne 0x11698cbe */
  if (!C.zf) goto L_11698cbe;
  /* 11698c77 mov esi, esp */
  ESI = (ESP);
  /* 11698c79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c7c mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11698c7e push edx */
  push32((uint32_t)(EDX));
  /* 11698c7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c82 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11698c85 push ecx */
  push32((uint32_t)(ECX));
  /* 11698c86 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11698c8cu);
  /* 11698c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c91 call 0x11699d90 */
  push32(0x11698c96u); f_11699d90();
  /* 11698c96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698c99 jge 0x11698cbe */
  if ((C.sf==C.of)) goto L_11698cbe;
  /* 11698c9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698c9e call 0x116910dc */
  push32(0x11698ca3u); f_116910dc();
  /* 11698ca3 mov esi, esp */
  ESI = (ESP);
  /* 11698ca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11698ca7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698caa mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11698cad push eax */
  push32((uint32_t)(EAX));
  /* 11698cae call dword ptr [0x116d3510] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3510))), 0x11698cb4u);
  /* 11698cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698cb9 call 0x11699d90 */
  push32(0x11698cbeu); f_11699d90();
L_11698cbe:;
  /* 11698cbe pop edi */
  EDI = (pop32());
  /* 11698cbf pop esi */
  ESI = (pop32());
  /* 11698cc0 pop ebx */
  EBX = (pop32());
  /* 11698cc1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698cc4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698cc6 call 0x11699d90 */
  push32(0x11698ccbu); f_11699d90();
  /* 11698ccb mov esp, ebp */
  ESP = (EBP);
  /* 11698ccd pop ebp */
  EBP = (pop32());
  /* 11698cce ret  */
  ESPCHK(0x11698bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x11698d10 (158 bytes, 60 insns) */
void f_11698d10(void) {
  FTRACE(0x11698d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11698d11 mov ebp, esp */
  EBP = (ESP);
  /* 11698d13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698d16 push ebx */
  push32((uint32_t)(EBX));
  /* 11698d17 push esi */
  push32((uint32_t)(ESI));
  /* 11698d18 push edi */
  push32((uint32_t)(EDI));
  /* 11698d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11698d1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698d1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698d29 pop ecx */
  ECX = (pop32());
  /* 11698d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698d2d mov esi, esp */
  ESI = (ESP);
  /* 11698d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11698d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698d34 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d37 push eax */
  push32((uint32_t)(EAX));
  /* 11698d38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698d3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11698d3d push edx */
  push32((uint32_t)(EDX));
  /* 11698d3e call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11698d44u);
  /* 11698d44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698d49 call 0x11699d90 */
  push32(0x11698d4eu); f_11699d90();
  /* 11698d4e mov esi, esp */
  ESI = (ESP);
  /* 11698d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698d52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698d55 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11698d58 push ecx */
  push32((uint32_t)(ECX));
  /* 11698d59 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11698d5fu);
  /* 11698d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698d64 call 0x11699d90 */
  push32(0x11698d69u); f_11699d90();
  /* 11698d69 mov esi, esp */
  ESI = (ESP);
  /* 11698d6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698d6e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11698d71 push eax */
  push32((uint32_t)(EAX));
  /* 11698d72 call dword ptr [0x116d34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34d4))), 0x11698d78u);
  /* 11698d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698d7d call 0x11699d90 */
  push32(0x11698d82u); f_11699d90();
  /* 11698d82 mov esi, esp */
  ESI = (ESP);
  /* 11698d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698d89 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d8c push ecx */
  push32((uint32_t)(ECX));
  /* 11698d8d call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11698d93u);
  /* 11698d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698d96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698d98 call 0x11699d90 */
  push32(0x11698d9du); f_11699d90();
  /* 11698d9d pop edi */
  EDI = (pop32());
  /* 11698d9e pop esi */
  ESI = (pop32());
  /* 11698d9f pop ebx */
  EBX = (pop32());
  /* 11698da0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698da3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698da5 call 0x11699d90 */
  push32(0x11698daau); f_11699d90();
  /* 11698daa mov esp, ebp */
  ESP = (EBP);
  /* 11698dac pop ebp */
  EBP = (pop32());
  /* 11698dad ret  */
  ESPCHK(0x11698d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x11698de0 (158 bytes, 60 insns) */
void f_11698de0(void) {
  FTRACE(0x11698de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11698de1 mov ebp, esp */
  EBP = (ESP);
  /* 11698de3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698de6 push ebx */
  push32((uint32_t)(EBX));
  /* 11698de7 push esi */
  push32((uint32_t)(ESI));
  /* 11698de8 push edi */
  push32((uint32_t)(EDI));
  /* 11698de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11698dea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698ded mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698df2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698df7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698df9 pop ecx */
  ECX = (pop32());
  /* 11698dfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698dfd mov esi, esp */
  ESI = (ESP);
  /* 11698dff push 0 */
  push32((uint32_t)(0x0u));
  /* 11698e01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698e04 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e07 push eax */
  push32((uint32_t)(EAX));
  /* 11698e08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698e0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11698e0d push edx */
  push32((uint32_t)(EDX));
  /* 11698e0e call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11698e14u);
  /* 11698e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698e19 call 0x11699d90 */
  push32(0x11698e1eu); f_11699d90();
  /* 11698e1e mov esi, esp */
  ESI = (ESP);
  /* 11698e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698e25 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11698e28 push ecx */
  push32((uint32_t)(ECX));
  /* 11698e29 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11698e2fu);
  /* 11698e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698e34 call 0x11699d90 */
  push32(0x11698e39u); f_11699d90();
  /* 11698e39 mov esi, esp */
  ESI = (ESP);
  /* 11698e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698e3e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11698e41 push eax */
  push32((uint32_t)(EAX));
  /* 11698e42 call dword ptr [0x116d34d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34d0))), 0x11698e48u);
  /* 11698e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698e4d call 0x11699d90 */
  push32(0x11698e52u); f_11699d90();
  /* 11698e52 mov esi, esp */
  ESI = (ESP);
  /* 11698e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698e56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698e59 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e5c push ecx */
  push32((uint32_t)(ECX));
  /* 11698e5d call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11698e63u);
  /* 11698e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698e68 call 0x11699d90 */
  push32(0x11698e6du); f_11699d90();
  /* 11698e6d pop edi */
  EDI = (pop32());
  /* 11698e6e pop esi */
  ESI = (pop32());
  /* 11698e6f pop ebx */
  EBX = (pop32());
  /* 11698e70 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698e73 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698e75 call 0x11699d90 */
  push32(0x11698e7au); f_11699d90();
  /* 11698e7a mov esp, ebp */
  ESP = (EBP);
  /* 11698e7c pop ebp */
  EBP = (pop32());
  /* 11698e7d ret  */
  ESPCHK(0x11698de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x11698eb0 (49 bytes, 22 insns) */
void f_11698eb0(void) {
  FTRACE(0x11698eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11698eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11698eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11698eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11698eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11698eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11698eba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698ebd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698ec9 pop ecx */
  ECX = (pop32());
  /* 11698eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698ed0 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11698ed7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698eda pop edi */
  EDI = (pop32());
  /* 11698edb pop esi */
  ESI = (pop32());
  /* 11698edc pop ebx */
  EBX = (pop32());
  /* 11698edd mov esp, ebp */
  ESP = (EBP);
  /* 11698edf pop ebp */
  EBP = (pop32());
  /* 11698ee0 ret  */
  ESPCHK(0x11698eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11698ef0 (102 bytes, 41 insns) */
void f_11698ef0(void) {
  FTRACE(0x11698ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11698ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11698ef3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11698ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11698ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11698ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11698efa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11698efd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11698f02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698f07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698f09 pop ecx */
  ECX = (pop32());
  /* 11698f0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698f0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698f13 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11698f16 mov esi, esp */
  ESI = (ESP);
  /* 11698f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698f1b push edx */
  push32((uint32_t)(EDX));
  /* 11698f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11698f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698f21 mov ecx, dword ptr [eax + 0x30] */
  ECX = (r32((uint32_t)(EAX + 0x30)));
  /* 11698f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11698f25 call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11698f2bu);
  /* 11698f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698f30 call 0x11699d90 */
  push32(0x11698f35u); f_11699d90();
  /* 11698f35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698f38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11698f3a mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11698f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698f40 mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11698f43 pop edi */
  EDI = (pop32());
  /* 11698f44 pop esi */
  ESI = (pop32());
  /* 11698f45 pop ebx */
  EBX = (pop32());
  /* 11698f46 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698f49 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698f4b call 0x11699d90 */
  push32(0x11698f50u); f_11699d90();
  /* 11698f50 mov esp, ebp */
  ESP = (EBP);
  /* 11698f52 pop ebp */
  EBP = (pop32());
  /* 11698f53 ret 4 */
  ESPCHK(0x11698ef0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f70 @ 0x11698f70 (130 bytes, 50 insns) */
void f_11698f70(void) {
  FTRACE(0x11698f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11698f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11698f71 mov ebp, esp */
  EBP = (ESP);
  /* 11698f73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11698f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11698f77 push esi */
  push32((uint32_t)(ESI));
  /* 11698f78 push edi */
  push32((uint32_t)(EDI));
  /* 11698f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11698f7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11698f7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11698f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11698f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11698f89 pop ecx */
  ECX = (pop32());
  /* 11698f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11698f8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11698f91 mov esi, esp */
  ESI = (ESP);
  /* 11698f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698f96 push eax */
  push32((uint32_t)(EAX));
  /* 11698f97 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11698f9du);
  /* 11698f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698fa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698fa2 call 0x11699d90 */
  push32(0x11698fa7u); f_11699d90();
  /* 11698fa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698faa jne 0x11698fdc */
  if (!C.zf) goto L_11698fdc;
  /* 11698fac mov esi, esp */
  ESI = (ESP);
  /* 11698fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11698fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11698fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11698fb7 push edx */
  push32((uint32_t)(EDX));
  /* 11698fb8 call dword ptr [0x116d35b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b4))), 0x11698fbeu);
  /* 11698fbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698fc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698fc3 call 0x11699d90 */
  push32(0x11698fc8u); f_11699d90();
  /* 11698fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698fcb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11698fcd mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11698fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11698fd3 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698fd6 jne 0x11698fdc */
  if (!C.zf) goto L_11698fdc;
  /* 11698fd8 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11698fdc:;
  /* 11698fdc mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11698fdf pop edi */
  EDI = (pop32());
  /* 11698fe0 pop esi */
  ESI = (pop32());
  /* 11698fe1 pop ebx */
  EBX = (pop32());
  /* 11698fe2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11698fe5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11698fe7 call 0x11699d90 */
  push32(0x11698fecu); f_11699d90();
  /* 11698fec mov esp, ebp */
  ESP = (EBP);
  /* 11698fee pop ebp */
  EBP = (pop32());
  /* 11698fef ret 4 */
  ESPCHK(0x11698f70u, _esp0);
  ESP += 8; return;
}

/* FUN_10009020 @ 0x11699020 (155 bytes, 58 insns) */
void f_11699020(void) {
  FTRACE(0x11699020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699020 push ebp */
  push32((uint32_t)(EBP));
  /* 11699021 mov ebp, esp */
  EBP = (ESP);
  /* 11699023 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699026 push ebx */
  push32((uint32_t)(EBX));
  /* 11699027 push esi */
  push32((uint32_t)(ESI));
  /* 11699028 push edi */
  push32((uint32_t)(EDI));
  /* 11699029 push ecx */
  push32((uint32_t)(ECX));
  /* 1169902a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1169902d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11699032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699039 pop ecx */
  ECX = (pop32());
  /* 1169903a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169903d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11699043 mov dword ptr [eax + 0x41], ecx */
  w32((uint32_t)(EAX + 0x41), (ECX));
  /* 11699046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699049 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1169904c mov byte ptr [edx + 0x34], al */
  w8((uint32_t)(EDX + 0x34), (AL));
  /* 1169904f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699052 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11699055 mov dword ptr [ecx + 0x35], edx */
  w32((uint32_t)(ECX + 0x35), (EDX));
  /* 11699058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169905b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169905e mov dword ptr [eax + 0x39], ecx */
  w32((uint32_t)(EAX + 0x39), (ECX));
  /* 11699061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699064 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11699067 mov dword ptr [edx + 0x3d], eax */
  w32((uint32_t)(EDX + 0x3d), (EAX));
  /* 1169906a mov esi, esp */
  ESI = (ESP);
  /* 1169906c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11699071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699074 mov edx, dword ptr [ecx + 0x41] */
  EDX = (r32((uint32_t)(ECX + 0x41)));
  /* 11699077 push edx */
  push32((uint32_t)(EDX));
  /* 11699078 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1169907b push eax */
  push32((uint32_t)(EAX));
  /* 1169907c call dword ptr [0x116d35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a0))), 0x11699082u);
  /* 11699082 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699087 call 0x11699d90 */
  push32(0x1169908cu); f_11699d90();
  /* 1169908c mov esi, esp */
  ESI = (ESP);
  /* 1169908e push 0 */
  push32((uint32_t)(0x0u));
  /* 11699090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699092 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11699095 push ecx */
  push32((uint32_t)(ECX));
  /* 11699096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699098 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x1169909eu);
  /* 1169909e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116990a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116990a3 call 0x11699d90 */
  push32(0x116990a8u); f_11699d90();
  /* 116990a8 pop edi */
  EDI = (pop32());
  /* 116990a9 pop esi */
  ESI = (pop32());
  /* 116990aa pop ebx */
  EBX = (pop32());
  /* 116990ab add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116990ae cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116990b0 call 0x11699d90 */
  push32(0x116990b5u); f_11699d90();
  /* 116990b5 mov esp, ebp */
  ESP = (EBP);
  /* 116990b7 pop ebp */
  EBP = (pop32());
  /* 116990b8 ret 0x14 */
  ESPCHK(0x11699020u, _esp0);
  ESP += 24; return;
}

/* FUN_100090f0 @ 0x116990f0 (252 bytes, 91 insns) */
void f_116990f0(void) {
  FTRACE(0x116990f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116990f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116990f1 mov ebp, esp */
  EBP = (ESP);
  /* 116990f3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116990f6 push ebx */
  push32((uint32_t)(EBX));
  /* 116990f7 push esi */
  push32((uint32_t)(ESI));
  /* 116990f8 push edi */
  push32((uint32_t)(EDI));
  /* 116990f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116990fa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 116990fd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11699102 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699107 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699109 pop ecx */
  ECX = (pop32());
  /* 1169910a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169910d mov esi, esp */
  ESI = (ESP);
  /* 1169910f push 0 */
  push32((uint32_t)(0x0u));
  /* 11699111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699114 mov ecx, dword ptr [eax + 0x41] */
  ECX = (r32((uint32_t)(EAX + 0x41)));
  /* 11699117 push ecx */
  push32((uint32_t)(ECX));
  /* 11699118 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x1169911eu);
  /* 1169911e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699123 call 0x11699d90 */
  push32(0x11699128u); f_11699d90();
  /* 11699128 mov esi, esp */
  ESI = (ESP);
  /* 1169912a push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 1169912f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699132 mov eax, dword ptr [edx + 0x41] */
  EAX = (r32((uint32_t)(EDX + 0x41)));
  /* 11699135 push eax */
  push32((uint32_t)(EAX));
  /* 11699136 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11699139 push ecx */
  push32((uint32_t)(ECX));
  /* 1169913a call dword ptr [0x116d35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a0))), 0x11699140u);
  /* 11699140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699145 call 0x11699d90 */
  push32(0x1169914au); f_11699d90();
  /* 1169914a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169914d cmp dword ptr [edx + 0x35], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x35))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699151 je 0x11699162 */
  if (C.zf) goto L_11699162;
  /* 11699153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699156 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 1169915a add cx, word ptr [eax + 0x35] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x35))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 1169915e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11699162:;
  /* 11699162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699165 cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699169 je 0x11699176 */
  if (C.zf) goto L_11699176;
  /* 1169916b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169916e mov cx, word ptr [eax + 0x39] */
  CX = (r16((uint32_t)(EAX + 0x39)));
  /* 11699172 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11699176:;
  /* 11699176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169917b mov al, byte ptr [edx + 0x34] */
  AL = (r8((uint32_t)(EDX + 0x34)));
  /* 1169917e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11699180 jne 0x116991a3 */
  if (!C.zf) goto L_116991a3;
  /* 11699182 mov esi, esp */
  ESI = (ESP);
  /* 11699184 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699189 mov dl, byte ptr [ecx + 0x3d] */
  DL = (r8((uint32_t)(ECX + 0x3d)));
  /* 1169918c push edx */
  push32((uint32_t)(EDX));
  /* 1169918d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11699190 push eax */
  push32((uint32_t)(EAX));
  /* 11699191 push 3 */
  push32((uint32_t)(0x3u));
  /* 11699193 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x11699199u);
  /* 11699199 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169919c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169919e call 0x11699d90 */
  push32(0x116991a3u); f_11699d90();
L_116991a3:;
  /* 116991a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116991a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116991a8 mov dl, byte ptr [ecx + 0x34] */
  DL = (r8((uint32_t)(ECX + 0x34)));
  /* 116991ab cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116991ae jne 0x116991d1 */
  if (!C.zf) goto L_116991d1;
  /* 116991b0 mov esi, esp */
  ESI = (ESP);
  /* 116991b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116991b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116991b7 mov cl, byte ptr [eax + 0x3d] */
  CL = (r8((uint32_t)(EAX + 0x3d)));
  /* 116991ba push ecx */
  push32((uint32_t)(ECX));
  /* 116991bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116991be push edx */
  push32((uint32_t)(EDX));
  /* 116991bf push 3 */
  push32((uint32_t)(0x3u));
  /* 116991c1 call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x116991c7u);
  /* 116991c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116991ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116991cc call 0x11699d90 */
  push32(0x116991d1u); f_11699d90();
L_116991d1:;
  /* 116991d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116991d4 mov dword ptr [eax + 0x41], 0 */
  w32((uint32_t)(EAX + 0x41), (0x0u));
  /* 116991db pop edi */
  EDI = (pop32());
  /* 116991dc pop esi */
  ESI = (pop32());
  /* 116991dd pop ebx */
  EBX = (pop32());
  /* 116991de add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116991e1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116991e3 call 0x11699d90 */
  push32(0x116991e8u); f_11699d90();
  /* 116991e8 mov esp, ebp */
  ESP = (EBP);
  /* 116991ea pop ebp */
  EBP = (pop32());
  /* 116991eb ret  */
  ESPCHK(0x116990f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009230 @ 0x11699230 (96 bytes, 38 insns) */
void f_11699230(void) {
  FTRACE(0x11699230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699230 push ebp */
  push32((uint32_t)(EBP));
  /* 11699231 mov ebp, esp */
  EBP = (ESP);
  /* 11699233 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699236 push ebx */
  push32((uint32_t)(EBX));
  /* 11699237 push esi */
  push32((uint32_t)(ESI));
  /* 11699238 push edi */
  push32((uint32_t)(EDI));
  /* 11699239 push ecx */
  push32((uint32_t)(ECX));
  /* 1169923a lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 1169923d mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11699242 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699247 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699249 pop ecx */
  ECX = (pop32());
  /* 1169924a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169924d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11699251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699254 cmp dword ptr [eax + 0x41], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x41))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699258 je 0x1169927c */
  if (C.zf) goto L_1169927c;
  /* 1169925a mov esi, esp */
  ESI = (ESP);
  /* 1169925c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11699261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699264 mov edx, dword ptr [ecx + 0x41] */
  EDX = (r32((uint32_t)(ECX + 0x41)));
  /* 11699267 push edx */
  push32((uint32_t)(EDX));
  /* 11699268 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1169926b push eax */
  push32((uint32_t)(EAX));
  /* 1169926c call dword ptr [0x116d35a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a0))), 0x11699272u);
  /* 11699272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699277 call 0x11699d90 */
  push32(0x1169927cu); f_11699d90();
L_1169927c:;
  /* 1169927c mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169927f pop edi */
  EDI = (pop32());
  /* 11699280 pop esi */
  ESI = (pop32());
  /* 11699281 pop ebx */
  EBX = (pop32());
  /* 11699282 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699285 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699287 call 0x11699d90 */
  push32(0x1169928cu); f_11699d90();
  /* 1169928c mov esp, ebp */
  ESP = (EBP);
  /* 1169928e pop ebp */
  EBP = (pop32());
  /* 1169928f ret  */
  ESPCHK(0x11699230u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x116992b0 (39 bytes, 20 insns) */
void f_116992b0(void) {
  FTRACE(0x116992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116992b1 mov ebp, esp */
  EBP = (ESP);
  /* 116992b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116992b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116992b7 push esi */
  push32((uint32_t)(ESI));
  /* 116992b8 push edi */
  push32((uint32_t)(EDI));
  /* 116992b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116992ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116992bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116992c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116992c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116992c9 pop ecx */
  ECX = (pop32());
  /* 116992ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116992cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116992d0 pop edi */
  EDI = (pop32());
  /* 116992d1 pop esi */
  ESI = (pop32());
  /* 116992d2 pop ebx */
  EBX = (pop32());
  /* 116992d3 mov esp, ebp */
  ESP = (EBP);
  /* 116992d5 pop ebp */
  EBP = (pop32());
  /* 116992d6 ret  */
  ESPCHK(0x116992b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092e0 @ 0x116992e0 (98 bytes, 39 insns) */
void f_116992e0(void) {
  FTRACE(0x116992e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116992e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116992e1 mov ebp, esp */
  EBP = (ESP);
  /* 116992e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116992e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116992e7 push esi */
  push32((uint32_t)(ESI));
  /* 116992e8 push edi */
  push32((uint32_t)(EDI));
  /* 116992e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116992ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116992ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116992f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116992f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116992f9 pop ecx */
  ECX = (pop32());
  /* 116992fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116992fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699300 call 0x116912a8 */
  push32(0x11699305u); f_116912a8();
  /* 11699305 mov esi, esp */
  ESI = (ESP);
  /* 11699307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169930a push eax */
  push32((uint32_t)(EAX));
  /* 1169930b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169930e mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 11699311 push edx */
  push32((uint32_t)(EDX));
  /* 11699312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699315 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11699318 push eax */
  push32((uint32_t)(EAX));
  /* 11699319 call dword ptr [0x116d34cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34cc))), 0x1169931fu);
  /* 1169931f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699324 call 0x11699d90 */
  push32(0x11699329u); f_11699d90();
  /* 11699329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169932c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169932f pop edi */
  EDI = (pop32());
  /* 11699330 pop esi */
  ESI = (pop32());
  /* 11699331 pop ebx */
  EBX = (pop32());
  /* 11699332 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699335 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699337 call 0x11699d90 */
  push32(0x1169933cu); f_11699d90();
  /* 1169933c mov esp, ebp */
  ESP = (EBP);
  /* 1169933e pop ebp */
  EBP = (pop32());
  /* 1169933f ret 4 */
  ESPCHK(0x116992e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009360 @ 0x11699360 (59 bytes, 25 insns) */
void f_11699360(void) {
  FTRACE(0x11699360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699360 push ebp */
  push32((uint32_t)(EBP));
  /* 11699361 mov ebp, esp */
  EBP = (ESP);
  /* 11699363 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699366 push ebx */
  push32((uint32_t)(EBX));
  /* 11699367 push esi */
  push32((uint32_t)(ESI));
  /* 11699368 push edi */
  push32((uint32_t)(EDI));
  /* 11699369 push ecx */
  push32((uint32_t)(ECX));
  /* 1169936a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169936d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699372 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699377 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699379 pop ecx */
  ECX = (pop32());
  /* 1169937a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169937d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11699382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699385 call 0x11691109 */
  push32(0x1169938au); f_11691109();
  /* 1169938a pop edi */
  EDI = (pop32());
  /* 1169938b pop esi */
  ESI = (pop32());
  /* 1169938c pop ebx */
  EBX = (pop32());
  /* 1169938d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699390 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699392 call 0x11699d90 */
  push32(0x11699397u); f_11699d90();
  /* 11699397 mov esp, ebp */
  ESP = (EBP);
  /* 11699399 pop ebp */
  EBP = (pop32());
  /* 1169939a ret  */
  ESPCHK(0x11699360u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x116993b0 (97 bytes, 38 insns) */
void f_116993b0(void) {
  FTRACE(0x116993b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116993b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116993b1 mov ebp, esp */
  EBP = (ESP);
  /* 116993b3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116993b6 push ebx */
  push32((uint32_t)(EBX));
  /* 116993b7 push esi */
  push32((uint32_t)(ESI));
  /* 116993b8 push edi */
  push32((uint32_t)(EDI));
  /* 116993b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116993ba lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 116993bd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 116993c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116993c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116993c9 pop ecx */
  ECX = (pop32());
  /* 116993ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116993cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116993d0 call 0x116911c2 */
  push32(0x116993d5u); f_116911c2();
  /* 116993d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116993d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116993da mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 116993de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116993e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116993e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116993e6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 116993ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116993ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116993f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116993f3 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116993f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116993f8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116993fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116993fe pop edi */
  EDI = (pop32());
  /* 116993ff pop esi */
  ESI = (pop32());
  /* 11699400 pop ebx */
  EBX = (pop32());
  /* 11699401 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699404 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699406 call 0x11699d90 */
  push32(0x1169940bu); f_11699d90();
  /* 1169940b mov esp, ebp */
  ESP = (EBP);
  /* 1169940d pop ebp */
  EBP = (pop32());
  /* 1169940e ret 4 */
  ESPCHK(0x116993b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009430 @ 0x11699430 (89 bytes, 36 insns) */
void f_11699430(void) {
  FTRACE(0x11699430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699430 push ebp */
  push32((uint32_t)(EBP));
  /* 11699431 mov ebp, esp */
  EBP = (ESP);
  /* 11699433 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699436 push ebx */
  push32((uint32_t)(EBX));
  /* 11699437 push esi */
  push32((uint32_t)(ESI));
  /* 11699438 push edi */
  push32((uint32_t)(EDI));
  /* 11699439 push ecx */
  push32((uint32_t)(ECX));
  /* 1169943a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169943d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699442 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699447 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699449 pop ecx */
  ECX = (pop32());
  /* 1169944a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169944d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699450 call 0x116912a8 */
  push32(0x11699455u); f_116912a8();
  /* 11699455 mov esi, esp */
  ESI = (ESP);
  /* 11699457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169945b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169945e push eax */
  push32((uint32_t)(EAX));
  /* 1169945f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699462 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 11699465 push edx */
  push32((uint32_t)(EDX));
  /* 11699466 call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x1169946cu);
  /* 1169946c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169946f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699471 call 0x11699d90 */
  push32(0x11699476u); f_11699d90();
  /* 11699476 pop edi */
  EDI = (pop32());
  /* 11699477 pop esi */
  ESI = (pop32());
  /* 11699478 pop ebx */
  EBX = (pop32());
  /* 11699479 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169947c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169947e call 0x11699d90 */
  push32(0x11699483u); f_11699d90();
  /* 11699483 mov esp, ebp */
  ESP = (EBP);
  /* 11699485 pop ebp */
  EBP = (pop32());
  /* 11699486 ret 4 */
  ESPCHK(0x11699430u, _esp0);
  ESP += 8; return;
}

/* FUN_100094a0 @ 0x116994a0 (103 bytes, 41 insns) */
void f_116994a0(void) {
  FTRACE(0x116994a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116994a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116994a1 mov ebp, esp */
  EBP = (ESP);
  /* 116994a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116994a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116994a7 push esi */
  push32((uint32_t)(ESI));
  /* 116994a8 push edi */
  push32((uint32_t)(EDI));
  /* 116994a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116994aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116994ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116994b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116994b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116994b9 pop ecx */
  ECX = (pop32());
  /* 116994ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116994bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116994c0 call 0x116912a8 */
  push32(0x116994c5u); f_116912a8();
  /* 116994c5 mov esi, esp */
  ESI = (ESP);
  /* 116994c7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 116994ca push eax */
  push32((uint32_t)(EAX));
  /* 116994cb call 0x1169a790 */
  push32(0x116994d0u); f_1169a790();
  /* 116994d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116994d1 mov ecx, 0xff */
  ECX = (0xffu);
  /* 116994d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116994d8 push edx */
  push32((uint32_t)(EDX));
  /* 116994d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116994dc push edx */
  push32((uint32_t)(EDX));
  /* 116994dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116994e0 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 116994e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116994e4 call dword ptr [0x116d3598] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3598))), 0x116994eau);
  /* 116994ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116994ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116994ef call 0x11699d90 */
  push32(0x116994f4u); f_11699d90();
  /* 116994f4 pop edi */
  EDI = (pop32());
  /* 116994f5 pop esi */
  ESI = (pop32());
  /* 116994f6 pop ebx */
  EBX = (pop32());
  /* 116994f7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116994fa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116994fc call 0x11699d90 */
  push32(0x11699501u); f_11699d90();
  /* 11699501 mov esp, ebp */
  ESP = (EBP);
  /* 11699503 pop ebp */
  EBP = (pop32());
  /* 11699504 ret 8 */
  ESPCHK(0x116994a0u, _esp0);
  ESP += 12; return;
}

/* FUN_10009520 @ 0x11699520 (62 bytes, 27 insns) */
void f_11699520(void) {
  FTRACE(0x11699520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699520 push ebp */
  push32((uint32_t)(EBP));
  /* 11699521 mov ebp, esp */
  EBP = (ESP);
  /* 11699523 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699526 push ebx */
  push32((uint32_t)(EBX));
  /* 11699527 push esi */
  push32((uint32_t)(ESI));
  /* 11699528 push edi */
  push32((uint32_t)(EDI));
  /* 11699529 push ecx */
  push32((uint32_t)(ECX));
  /* 1169952a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169952d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699532 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699537 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699539 pop ecx */
  ECX = (pop32());
  /* 1169953a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169953d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169953f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11699542 push eax */
  push32((uint32_t)(EAX));
  /* 11699543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699546 call 0x1169120d */
  push32(0x1169954bu); f_1169120d();
  /* 1169954b pop edi */
  EDI = (pop32());
  /* 1169954c pop esi */
  ESI = (pop32());
  /* 1169954d pop ebx */
  EBX = (pop32());
  /* 1169954e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699551 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699553 call 0x11699d90 */
  push32(0x11699558u); f_11699d90();
  /* 11699558 mov esp, ebp */
  ESP = (EBP);
  /* 1169955a pop ebp */
  EBP = (pop32());
  /* 1169955b ret 4 */
  ESPCHK(0x11699520u, _esp0);
  ESP += 8; return;
}

/* FUN_10009570 @ 0x11699570 (39 bytes, 20 insns) */
void f_11699570(void) {
  FTRACE(0x11699570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699570 push ebp */
  push32((uint32_t)(EBP));
  /* 11699571 mov ebp, esp */
  EBP = (ESP);
  /* 11699573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699576 push ebx */
  push32((uint32_t)(EBX));
  /* 11699577 push esi */
  push32((uint32_t)(ESI));
  /* 11699578 push edi */
  push32((uint32_t)(EDI));
  /* 11699579 push ecx */
  push32((uint32_t)(ECX));
  /* 1169957a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169957d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699589 pop ecx */
  ECX = (pop32());
  /* 1169958a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169958d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699590 pop edi */
  EDI = (pop32());
  /* 11699591 pop esi */
  ESI = (pop32());
  /* 11699592 pop ebx */
  EBX = (pop32());
  /* 11699593 mov esp, ebp */
  ESP = (EBP);
  /* 11699595 pop ebp */
  EBP = (pop32());
  /* 11699596 ret  */
  ESPCHK(0x11699570u, _esp0);
  ESP += 4; return;
}

/* FUN_100095a0 @ 0x116995a0 (70 bytes, 30 insns) */
void f_116995a0(void) {
  FTRACE(0x116995a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116995a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116995a1 mov ebp, esp */
  EBP = (ESP);
  /* 116995a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116995a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116995a7 push esi */
  push32((uint32_t)(ESI));
  /* 116995a8 push edi */
  push32((uint32_t)(EDI));
  /* 116995a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116995aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116995ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116995b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116995b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116995b9 pop ecx */
  ECX = (pop32());
  /* 116995ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116995bd mov esi, esp */
  ESI = (ESP);
  /* 116995bf push 0 */
  push32((uint32_t)(0x0u));
  /* 116995c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116995c4 push eax */
  push32((uint32_t)(EAX));
  /* 116995c5 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116995cbu);
  /* 116995cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116995ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116995d0 call 0x11699d90 */
  push32(0x116995d5u); f_11699d90();
  /* 116995d5 pop edi */
  EDI = (pop32());
  /* 116995d6 pop esi */
  ESI = (pop32());
  /* 116995d7 pop ebx */
  EBX = (pop32());
  /* 116995d8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116995db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116995dd call 0x11699d90 */
  push32(0x116995e2u); f_11699d90();
  /* 116995e2 mov esp, ebp */
  ESP = (EBP);
  /* 116995e4 pop ebp */
  EBP = (pop32());
  /* 116995e5 ret  */
  ESPCHK(0x116995a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x11699600 (123 bytes, 48 insns) */
void f_11699600(void) {
  FTRACE(0x11699600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699600 push ebp */
  push32((uint32_t)(EBP));
  /* 11699601 mov ebp, esp */
  EBP = (ESP);
  /* 11699603 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699606 push ebx */
  push32((uint32_t)(EBX));
  /* 11699607 push esi */
  push32((uint32_t)(ESI));
  /* 11699608 push edi */
  push32((uint32_t)(EDI));
  /* 11699609 push ecx */
  push32((uint32_t)(ECX));
  /* 1169960a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1169960d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11699612 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699617 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699619 pop ecx */
  ECX = (pop32());
  /* 1169961a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169961d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11699621 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11699625 jmp 0x1169962f */
  goto L_1169962f;
L_11699627:;
  /* 11699627 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1169962a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1169962c mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1169962f:;
  /* 1169962f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11699632 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11699638 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169963b jge 0x11699667 */
  if ((C.sf==C.of)) goto L_11699667;
  /* 1169963d mov esi, esp */
  ESI = (ESP);
  /* 1169963f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11699642 push edx */
  push32((uint32_t)(EDX));
  /* 11699643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699646 push eax */
  push32((uint32_t)(EAX));
  /* 11699647 call dword ptr [0x116d3500] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3500))), 0x1169964du);
  /* 1169964d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699652 call 0x11699d90 */
  push32(0x11699657u); f_11699d90();
  /* 11699657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11699659 jle 0x11699665 */
  if ((C.zf||C.sf!=C.of)) goto L_11699665;
  /* 1169965b mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1169965e mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11699661 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_11699665:;
  /* 11699665 jmp 0x11699627 */
  goto L_11699627;
L_11699667:;
  /* 11699667 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169966a pop edi */
  EDI = (pop32());
  /* 1169966b pop esi */
  ESI = (pop32());
  /* 1169966c pop ebx */
  EBX = (pop32());
  /* 1169966d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699670 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699672 call 0x11699d90 */
  push32(0x11699677u); f_11699d90();
  /* 11699677 mov esp, ebp */
  ESP = (EBP);
  /* 11699679 pop ebp */
  EBP = (pop32());
  /* 1169967a ret  */
  ESPCHK(0x11699600u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x116996a0 (68 bytes, 29 insns) */
void f_116996a0(void) {
  FTRACE(0x116996a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116996a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116996a1 mov ebp, esp */
  EBP = (ESP);
  /* 116996a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116996a6 push ebx */
  push32((uint32_t)(EBX));
  /* 116996a7 push esi */
  push32((uint32_t)(ESI));
  /* 116996a8 push edi */
  push32((uint32_t)(EDI));
  /* 116996a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116996aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116996ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116996b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116996b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116996b9 pop ecx */
  ECX = (pop32());
  /* 116996ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116996bd mov esi, esp */
  ESI = (ESP);
  /* 116996bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116996c2 push eax */
  push32((uint32_t)(EAX));
  /* 116996c3 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x116996c9u);
  /* 116996c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116996cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116996ce call 0x11699d90 */
  push32(0x116996d3u); f_11699d90();
  /* 116996d3 pop edi */
  EDI = (pop32());
  /* 116996d4 pop esi */
  ESI = (pop32());
  /* 116996d5 pop ebx */
  EBX = (pop32());
  /* 116996d6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116996d9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116996db call 0x11699d90 */
  push32(0x116996e0u); f_11699d90();
  /* 116996e0 mov esp, ebp */
  ESP = (EBP);
  /* 116996e2 pop ebp */
  EBP = (pop32());
  /* 116996e3 ret  */
  ESPCHK(0x116996a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x11699700 (69 bytes, 29 insns) */
void f_11699700(void) {
  FTRACE(0x11699700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699700 push ebp */
  push32((uint32_t)(EBP));
  /* 11699701 mov ebp, esp */
  EBP = (ESP);
  /* 11699703 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699706 push ebx */
  push32((uint32_t)(EBX));
  /* 11699707 push esi */
  push32((uint32_t)(ESI));
  /* 11699708 push edi */
  push32((uint32_t)(EDI));
  /* 11699709 push ecx */
  push32((uint32_t)(ECX));
  /* 1169970a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169970d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11699712 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699717 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699719 pop ecx */
  ECX = (pop32());
  /* 1169971a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169971d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11699721 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699724 call 0x1169123a */
  push32(0x11699729u); f_1169123a();
  /* 11699729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169972b jle 0x11699731 */
  if ((C.zf||C.sf!=C.of)) goto L_11699731;
  /* 1169972d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11699731:;
  /* 11699731 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11699734 pop edi */
  EDI = (pop32());
  /* 11699735 pop esi */
  ESI = (pop32());
  /* 11699736 pop ebx */
  EBX = (pop32());
  /* 11699737 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169973a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169973c call 0x11699d90 */
  push32(0x11699741u); f_11699d90();
  /* 11699741 mov esp, ebp */
  ESP = (EBP);
  /* 11699743 pop ebp */
  EBP = (pop32());
  /* 11699744 ret  */
  ESPCHK(0x11699700u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x11699760 (88 bytes, 35 insns) */
void f_11699760(void) {
  FTRACE(0x11699760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699760 push ebp */
  push32((uint32_t)(EBP));
  /* 11699761 mov ebp, esp */
  EBP = (ESP);
  /* 11699763 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699766 push ebx */
  push32((uint32_t)(EBX));
  /* 11699767 push esi */
  push32((uint32_t)(ESI));
  /* 11699768 push edi */
  push32((uint32_t)(EDI));
  /* 11699769 push ecx */
  push32((uint32_t)(ECX));
  /* 1169976a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169976d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699779 pop ecx */
  ECX = (pop32());
  /* 1169977a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169977d mov esi, esp */
  ESI = (ESP);
  /* 1169977f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11699782 push eax */
  push32((uint32_t)(EAX));
  /* 11699783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699786 push ecx */
  push32((uint32_t)(ECX));
  /* 11699787 call dword ptr [0x116d3580] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3580))), 0x1169978du);
  /* 1169978d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699792 call 0x11699d90 */
  push32(0x11699797u); f_11699d90();
  /* 11699797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169979a call 0x1169128f */
  push32(0x1169979fu); f_1169128f();
  /* 1169979f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116997a2 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 116997a5 pop edi */
  EDI = (pop32());
  /* 116997a6 pop esi */
  ESI = (pop32());
  /* 116997a7 pop ebx */
  EBX = (pop32());
  /* 116997a8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116997ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116997ad call 0x11699d90 */
  push32(0x116997b2u); f_11699d90();
  /* 116997b2 mov esp, ebp */
  ESP = (EBP);
  /* 116997b4 pop ebp */
  EBP = (pop32());
  /* 116997b5 ret 4 */
  ESPCHK(0x11699760u, _esp0);
  ESP += 8; return;
}

/* FUN_100097d0 @ 0x116997d0 (110 bytes, 42 insns) */
void f_116997d0(void) {
  FTRACE(0x116997d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116997d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116997d1 mov ebp, esp */
  EBP = (ESP);
  /* 116997d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116997d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116997d7 push esi */
  push32((uint32_t)(ESI));
  /* 116997d8 push edi */
  push32((uint32_t)(EDI));
  /* 116997d9 push ecx */
  push32((uint32_t)(ECX));
  /* 116997da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116997dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116997e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116997e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116997e9 pop ecx */
  ECX = (pop32());
  /* 116997ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116997ed mov esi, esp */
  ESI = (ESP);
  /* 116997ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116997f2 push eax */
  push32((uint32_t)(EAX));
  /* 116997f3 call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x116997f9u);
  /* 116997f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116997fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116997fe call 0x11699d90 */
  push32(0x11699803u); f_11699d90();
  /* 11699803 mov esi, esp */
  ESI = (ESP);
  /* 11699805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699808 push ecx */
  push32((uint32_t)(ECX));
  /* 11699809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169980c push edx */
  push32((uint32_t)(EDX));
  /* 1169980d call dword ptr [0x116d354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d354c))), 0x11699813u);
  /* 11699813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699818 call 0x11699d90 */
  push32(0x1169981du); f_11699d90();
  /* 1169981d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699820 call 0x1169128f */
  push32(0x11699825u); f_1169128f();
  /* 11699825 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699828 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 1169982b pop edi */
  EDI = (pop32());
  /* 1169982c pop esi */
  ESI = (pop32());
  /* 1169982d pop ebx */
  EBX = (pop32());
  /* 1169982e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699831 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699833 call 0x11699d90 */
  push32(0x11699838u); f_11699d90();
  /* 11699838 mov esp, ebp */
  ESP = (EBP);
  /* 1169983a pop ebp */
  EBP = (pop32());
  /* 1169983b ret 4 */
  ESPCHK(0x116997d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009860 @ 0x11699860 (113 bytes, 44 insns) */
void f_11699860(void) {
  FTRACE(0x11699860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699860 push ebp */
  push32((uint32_t)(EBP));
  /* 11699861 mov ebp, esp */
  EBP = (ESP);
  /* 11699863 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699866 push ebx */
  push32((uint32_t)(EBX));
  /* 11699867 push esi */
  push32((uint32_t)(ESI));
  /* 11699868 push edi */
  push32((uint32_t)(EDI));
  /* 11699869 push ecx */
  push32((uint32_t)(ECX));
  /* 1169986a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1169986d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11699872 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699877 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699879 pop ecx */
  ECX = (pop32());
  /* 1169987a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169987d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11699881 mov esi, esp */
  ESI = (ESP);
  /* 11699883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699886 push eax */
  push32((uint32_t)(EAX));
  /* 11699887 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x1169988du);
  /* 1169988d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699892 call 0x11699d90 */
  push32(0x11699897u); f_11699d90();
  /* 11699897 mov esi, eax */
  ESI = (EAX);
  /* 11699899 mov edi, esp */
  EDI = (ESP);
  /* 1169989b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169989e push ecx */
  push32((uint32_t)(ECX));
  /* 1169989f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116998a2 push edx */
  push32((uint32_t)(EDX));
  /* 116998a3 call dword ptr [0x116d359c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d359c))), 0x116998a9u);
  /* 116998a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116998ac cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116998ae call 0x11699d90 */
  push32(0x116998b3u); f_11699d90();
  /* 116998b3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116998b5 jne 0x116998bb */
  if (!C.zf) goto L_116998bb;
  /* 116998b7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_116998bb:;
  /* 116998bb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116998be pop edi */
  EDI = (pop32());
  /* 116998bf pop esi */
  ESI = (pop32());
  /* 116998c0 pop ebx */
  EBX = (pop32());
  /* 116998c1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116998c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116998c6 call 0x11699d90 */
  push32(0x116998cbu); f_11699d90();
  /* 116998cb mov esp, ebp */
  ESP = (EBP);
  /* 116998cd pop ebp */
  EBP = (pop32());
  /* 116998ce ret 4 */
  ESPCHK(0x11699860u, _esp0);
  ESP += 8; return;
}

/* FUN_100098f0 @ 0x116998f0 (47 bytes, 22 insns) */
void f_116998f0(void) {
  FTRACE(0x116998f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116998f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116998f1 mov ebp, esp */
  EBP = (ESP);
  /* 116998f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116998f6 push ebx */
  push32((uint32_t)(EBX));
  /* 116998f7 push esi */
  push32((uint32_t)(ESI));
  /* 116998f8 push edi */
  push32((uint32_t)(EDI));
  /* 116998f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116998fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116998fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699902 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699907 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699909 pop ecx */
  ECX = (pop32());
  /* 1169990a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169990d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699910 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11699913 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 11699916 pop edi */
  EDI = (pop32());
  /* 11699917 pop esi */
  ESI = (pop32());
  /* 11699918 pop ebx */
  EBX = (pop32());
  /* 11699919 mov esp, ebp */
  ESP = (EBP);
  /* 1169991b pop ebp */
  EBP = (pop32());
  /* 1169991c ret 4 */
  ESPCHK(0x116998f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009930 @ 0x11699930 (38 bytes, 19 insns) */
void f_11699930(void) {
  FTRACE(0x11699930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699930 push ebp */
  push32((uint32_t)(EBP));
  /* 11699931 mov ebp, esp */
  EBP = (ESP);
  /* 11699933 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699936 push ebx */
  push32((uint32_t)(EBX));
  /* 11699937 push esi */
  push32((uint32_t)(ESI));
  /* 11699938 push edi */
  push32((uint32_t)(EDI));
  /* 11699939 push ecx */
  push32((uint32_t)(ECX));
  /* 1169993a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169993d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699942 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699947 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699949 pop ecx */
  ECX = (pop32());
  /* 1169994a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169994d pop edi */
  EDI = (pop32());
  /* 1169994e pop esi */
  ESI = (pop32());
  /* 1169994f pop ebx */
  EBX = (pop32());
  /* 11699950 mov esp, ebp */
  ESP = (EBP);
  /* 11699952 pop ebp */
  EBP = (pop32());
  /* 11699953 ret 4 */
  ESPCHK(0x11699930u, _esp0);
  ESP += 8; return;
}

/* FUN_10009960 @ 0x11699960 (127 bytes, 48 insns) */
void f_11699960(void) {
  FTRACE(0x11699960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699960 push ebp */
  push32((uint32_t)(EBP));
  /* 11699961 mov ebp, esp */
  EBP = (ESP);
  /* 11699963 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699966 push ebx */
  push32((uint32_t)(EBX));
  /* 11699967 push esi */
  push32((uint32_t)(ESI));
  /* 11699968 push edi */
  push32((uint32_t)(EDI));
  /* 11699969 push ecx */
  push32((uint32_t)(ECX));
  /* 1169996a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1169996d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699972 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699977 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699979 pop ecx */
  ECX = (pop32());
  /* 1169997a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169997d mov esi, esp */
  ESI = (ESP);
  /* 1169997f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11699982 push eax */
  push32((uint32_t)(EAX));
  /* 11699983 call dword ptr [0x116d35b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35b0))), 0x11699989u);
  /* 11699989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169998c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169998e call 0x11699d90 */
  push32(0x11699993u); f_11699d90();
  /* 11699993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11699995 jle 0x116999cc */
  if ((C.zf||C.sf!=C.of)) goto L_116999cc;
  /* 11699997 mov esi, esp */
  ESI = (ESP);
  /* 11699999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169999b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169999e call 0x116911ea */
  push32(0x116999a3u); f_116911ea();
  /* 116999a3 push eax */
  push32((uint32_t)(EAX));
  /* 116999a4 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x116999aau);
  /* 116999aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116999ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116999af call 0x11699d90 */
  push32(0x116999b4u); f_11699d90();
  /* 116999b4 mov esi, esp */
  ESI = (ESP);
  /* 116999b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116999b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116999ba push 1 */
  push32((uint32_t)(0x1u));
  /* 116999bc call dword ptr [0x116d34c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34c8))), 0x116999c2u);
  /* 116999c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116999c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116999c7 call 0x11699d90 */
  push32(0x116999ccu); f_11699d90();
L_116999cc:;
  /* 116999cc pop edi */
  EDI = (pop32());
  /* 116999cd pop esi */
  ESI = (pop32());
  /* 116999ce pop ebx */
  EBX = (pop32());
  /* 116999cf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116999d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116999d4 call 0x11699d90 */
  push32(0x116999d9u); f_11699d90();
  /* 116999d9 mov esp, ebp */
  ESP = (EBP);
  /* 116999db pop ebp */
  EBP = (pop32());
  /* 116999dc ret 4 */
  ESPCHK(0x11699960u, _esp0);
  ESP += 8; return;
}

/* FUN_10009a00 @ 0x11699a00 (181 bytes, 65 insns) */
void f_11699a00(void) {
  FTRACE(0x11699a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11699a01 mov ebp, esp */
  EBP = (ESP);
  /* 11699a03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699a06 push ebx */
  push32((uint32_t)(EBX));
  /* 11699a07 push esi */
  push32((uint32_t)(ESI));
  /* 11699a08 push edi */
  push32((uint32_t)(EDI));
  /* 11699a09 push ecx */
  push32((uint32_t)(ECX));
  /* 11699a0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11699a0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699a12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699a17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699a19 pop ecx */
  ECX = (pop32());
  /* 11699a1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11699a1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a20 call 0x11691203 */
  push32(0x11699a25u); f_11691203();
  /* 11699a25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11699a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11699a2c je 0x11699aa4 */
  if (C.zf) goto L_11699aa4;
  /* 11699a2e mov esi, esp */
  ESI = (ESP);
  /* 11699a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699a32 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11699a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a3a call 0x11691109 */
  push32(0x11699a3fu); f_11691109();
  /* 11699a3f push eax */
  push32((uint32_t)(EAX));
  /* 11699a40 call dword ptr [0x116d3584] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3584))), 0x11699a46u);
  /* 11699a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699a4b call 0x11699d90 */
  push32(0x11699a50u); f_11699d90();
  /* 11699a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11699a52 jle 0x11699aa4 */
  if ((C.zf||C.sf!=C.of)) goto L_11699aa4;
  /* 11699a54 mov esi, esp */
  ESI = (ESP);
  /* 11699a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699a5a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11699a5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a62 call 0x11691109 */
  push32(0x11699a67u); f_11691109();
  /* 11699a67 push eax */
  push32((uint32_t)(EAX));
  /* 11699a68 call dword ptr [0x116d35a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a8))), 0x11699a6eu);
  /* 11699a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699a73 call 0x11699d90 */
  push32(0x11699a78u); f_11699d90();
  /* 11699a78 mov esi, esp */
  ESI = (ESP);
  /* 11699a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11699a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a7f add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11699a82 push eax */
  push32((uint32_t)(EAX));
  /* 11699a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699a85 call dword ptr [0x116d35ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35ac))), 0x11699a8bu);
  /* 11699a8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699a90 call 0x11699d90 */
  push32(0x11699a95u); f_11699d90();
  /* 11699a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a98 add ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11699a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11699a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699a9f call 0x11691046 */
  push32(0x11699aa4u); f_11691046();
L_11699aa4:;
  /* 11699aa4 pop edi */
  EDI = (pop32());
  /* 11699aa5 pop esi */
  ESI = (pop32());
  /* 11699aa6 pop ebx */
  EBX = (pop32());
  /* 11699aa7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699aaa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699aac call 0x11699d90 */
  push32(0x11699ab1u); f_11699d90();
  /* 11699ab1 mov esp, ebp */
  ESP = (EBP);
  /* 11699ab3 pop ebp */
  EBP = (pop32());
  /* 11699ab4 ret  */
  ESPCHK(0x11699a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x11699af0 (98 bytes, 38 insns) */
void f_11699af0(void) {
  FTRACE(0x11699af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11699af1 mov ebp, esp */
  EBP = (ESP);
  /* 11699af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11699af7 push esi */
  push32((uint32_t)(ESI));
  /* 11699af8 push edi */
  push32((uint32_t)(EDI));
  /* 11699af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11699afa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11699afd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11699b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699b09 pop ecx */
  ECX = (pop32());
  /* 11699b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11699b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699b10 call 0x116911ea */
  push32(0x11699b15u); f_116911ea();
  /* 11699b15 mov esi, esp */
  ESI = (ESP);
  /* 11699b17 push eax */
  push32((uint32_t)(EAX));
  /* 11699b18 call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x11699b1eu);
  /* 11699b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699b23 call 0x11699d90 */
  push32(0x11699b28u); f_11699d90();
  /* 11699b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699b2b add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11699b2e mov esi, esp */
  ESI = (ESP);
  /* 11699b30 push eax */
  push32((uint32_t)(EAX));
  /* 11699b31 call dword ptr [0x116d35a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d35a4))), 0x11699b37u);
  /* 11699b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699b3c call 0x11699d90 */
  push32(0x11699b41u); f_11699d90();
  /* 11699b41 pop edi */
  EDI = (pop32());
  /* 11699b42 pop esi */
  ESI = (pop32());
  /* 11699b43 pop ebx */
  EBX = (pop32());
  /* 11699b44 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699b47 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699b49 call 0x11699d90 */
  push32(0x11699b4eu); f_11699d90();
  /* 11699b4e mov esp, ebp */
  ESP = (EBP);
  /* 11699b50 pop ebp */
  EBP = (pop32());
  /* 11699b51 ret  */
  ESPCHK(0x11699af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x11699b70 (139 bytes, 53 insns) */
void f_11699b70(void) {
  FTRACE(0x11699b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11699b71 mov ebp, esp */
  EBP = (ESP);
  /* 11699b73 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11699b77 push esi */
  push32((uint32_t)(ESI));
  /* 11699b78 push edi */
  push32((uint32_t)(EDI));
  /* 11699b79 push ecx */
  push32((uint32_t)(ECX));
  /* 11699b7a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11699b7d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11699b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11699b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11699b89 pop ecx */
  ECX = (pop32());
  /* 11699b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11699b8d mov esi, esp */
  ESI = (ESP);
  /* 11699b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11699b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11699b94 push eax */
  push32((uint32_t)(EAX));
  /* 11699b95 call dword ptr [0x116d3588] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3588))), 0x11699b9bu);
  /* 11699b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699b9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699ba0 call 0x11699d90 */
  push32(0x11699ba5u); f_11699d90();
  /* 11699ba5 mov esi, esp */
  ESI = (ESP);
  /* 11699ba7 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11699bac push 1 */
  push32((uint32_t)(0x1u));
  /* 11699bae lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11699bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11699bb2 call dword ptr [0x116d34cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d34cc))), 0x11699bb8u);
  /* 11699bb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699bbd call 0x11699d90 */
  push32(0x11699bc2u); f_11699d90();
  /* 11699bc2 mov esi, esp */
  ESI = (ESP);
  /* 11699bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11699bc6 call 0x1169a790 */
  push32(0x11699bcbu); f_1169a790();
  /* 11699bcb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11699bcc mov ecx, 0xff */
  ECX = (0xffu);
  /* 11699bd1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11699bd3 push edx */
  push32((uint32_t)(EDX));
  /* 11699bd4 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11699bd7 push edx */
  push32((uint32_t)(EDX));
  /* 11699bd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11699bda call dword ptr [0x116d3590] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3590))), 0x11699be0u);
  /* 11699be0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699be3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699be5 call 0x11699d90 */
  push32(0x11699beau); f_11699d90();
  /* 11699bea pop edi */
  EDI = (pop32());
  /* 11699beb pop esi */
  ESI = (pop32());
  /* 11699bec pop ebx */
  EBX = (pop32());
  /* 11699bed add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699bf0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699bf2 call 0x11699d90 */
  push32(0x11699bf7u); f_11699d90();
  /* 11699bf7 mov esp, ebp */
  ESP = (EBP);
  /* 11699bf9 pop ebp */
  EBP = (pop32());
  /* 11699bfa ret  */
  ESPCHK(0x11699b70u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11699d90 (56 bytes, 28 insns) */
void f_11699d90(void) {
  FTRACE(0x11699d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699d90 jne 0x11699d93 */
  if (!C.zf) goto L_11699d93;
  /* 11699d92 ret  */
  ESPCHK(0x11699d90u, _esp0);
  ESP += 4; return;
L_11699d93:;
  /* 11699d93 push ebp */
  push32((uint32_t)(EBP));
  /* 11699d94 mov ebp, esp */
  EBP = (ESP);
  /* 11699d96 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699d99 push eax */
  push32((uint32_t)(EAX));
  /* 11699d9a push edx */
  push32((uint32_t)(EDX));
  /* 11699d9b push ebx */
  push32((uint32_t)(EBX));
  /* 11699d9c push esi */
  push32((uint32_t)(ESI));
  /* 11699d9d push edi */
  push32((uint32_t)(EDI));
  /* 11699d9e push 0x116ca880 */
  push32((uint32_t)(0x116ca880u));
  /* 11699da3 push 0x116ca87c */
  push32((uint32_t)(0x116ca87cu));
  /* 11699da8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11699daa push 0x116ca86c */
  push32((uint32_t)(0x116ca86cu));
  /* 11699daf push 1 */
  push32((uint32_t)(0x1u));
  /* 11699db1 call 0x1169ade0 */
  push32(0x11699db6u); f_1169ade0();
  /* 11699db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699db9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699dbc jne 0x11699dbf */
  if (!C.zf) goto L_11699dbf;
  /* 11699dbe int3  */
  x86_unimpl("int3 @ 0x11699dbe");
L_11699dbf:;
  /* 11699dbf pop edi */
  EDI = (pop32());
  /* 11699dc0 pop esi */
  ESI = (pop32());
  /* 11699dc1 pop ebx */
  EBX = (pop32());
  /* 11699dc2 pop edx */
  EDX = (pop32());
  /* 11699dc3 pop eax */
  EAX = (pop32());
  /* 11699dc4 mov esp, ebp */
  ESP = (EBP);
  /* 11699dc6 pop ebp */
  EBP = (pop32());
  /* 11699dc7 ret  */
  ESPCHK(0x11699d90u, _esp0);
  ESP += 4; return;
}

