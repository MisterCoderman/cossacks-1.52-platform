#include "recomp.h"

/* FUN_1000e210 @ 0x11fde210 (21 bytes, 10 insns) */
void f_11fde210(void) {
  FTRACE(0x11fde210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde211 mov ebp, esp */
  EBP = (ESP);
  /* 11fde213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde215 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde217 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde21a push eax */
  push32((uint32_t)(EAX));
  /* 11fde21b call 0x11fde290 */
  push32(0x11fde220u); f_11fde290();
  /* 11fde220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde223 pop ebp */
  EBP = (pop32());
  /* 11fde224 ret  */
  ESPCHK(0x11fde210u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11fde230 (21 bytes, 10 insns) */
void f_11fde230(void) {
  FTRACE(0x11fde230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde230 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde231 mov ebp, esp */
  EBP = (ESP);
  /* 11fde233 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde235 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fde237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde23a push eax */
  push32((uint32_t)(EAX));
  /* 11fde23b call 0x11fde290 */
  push32(0x11fde240u); f_11fde290();
  /* 11fde240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde243 pop ebp */
  EBP = (pop32());
  /* 11fde244 ret  */
  ESPCHK(0x11fde230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e250 @ 0x11fde250 (19 bytes, 9 insns) */
void f_11fde250(void) {
  FTRACE(0x11fde250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde250 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde251 mov ebp, esp */
  EBP = (ESP);
  /* 11fde253 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fde255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde259 call 0x11fde290 */
  push32(0x11fde25eu); f_11fde290();
  /* 11fde25e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde261 pop ebp */
  EBP = (pop32());
  /* 11fde262 ret  */
  ESPCHK(0x11fde250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x11fde270 (19 bytes, 9 insns) */
void f_11fde270(void) {
  FTRACE(0x11fde270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde270 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde271 mov ebp, esp */
  EBP = (ESP);
  /* 11fde273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fde275 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fde277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde279 call 0x11fde290 */
  push32(0x11fde27eu); f_11fde290();
  /* 11fde27e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde281 pop ebp */
  EBP = (pop32());
  /* 11fde282 ret  */
  ESPCHK(0x11fde270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x11fde290 (227 bytes, 61 insns) */
void f_11fde290(void) {
  FTRACE(0x11fde290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde290 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde291 mov ebp, esp */
  EBP = (ESP);
  /* 11fde293 push ecx */
  push32((uint32_t)(ECX));
  /* 11fde294 call 0x11fde380 */
  push32(0x11fde299u); f_11fde380();
  /* 11fde299 cmp dword ptr [0x1200efdc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200efdc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde2a0 jne 0x11fde2b3 */
  if (!C.zf) goto L_11fde2b3;
  /* 11fde2a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde2a5 push eax */
  push32((uint32_t)(EAX));
  /* 11fde2a6 call dword ptr [0x120113c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113c8))), 0x11fde2acu);
  /* 11fde2ac push eax */
  push32((uint32_t)(EAX));
  /* 11fde2ad call dword ptr [0x120113d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d8))), 0x11fde2b3u);
L_11fde2b3:;
  /* 11fde2b3 mov dword ptr [0x1200efd8], 1 */
  w32((uint32_t)(0x1200efd8), (0x1u));
  /* 11fde2bd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11fde2c0 mov byte ptr [0x1200efd4], cl */
  w8((uint32_t)(0x1200efd4), (CL));
  /* 11fde2c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde2ca jne 0x11fde313 */
  if (!C.zf) goto L_11fde313;
  /* 11fde2cc cmp dword ptr [0x12010a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde2d3 je 0x11fde301 */
  if (C.zf) goto L_11fde301;
  /* 11fde2d5 mov edx, dword ptr [0x12010a34] */
  EDX = (r32((uint32_t)(0x12010a34)));
  /* 11fde2db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fde2de:;
  /* 11fde2de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde2e1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde2e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fde2e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde2ea cmp ecx, dword ptr [0x12010a38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010a38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde2f0 jb 0x11fde301 */
  if (C.cf) goto L_11fde301;
  /* 11fde2f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde2f5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde2f8 je 0x11fde2ff */
  if (C.zf) goto L_11fde2ff;
  /* 11fde2fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde2fd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11fde2ffu);
L_11fde2ff:;
  /* 11fde2ff jmp 0x11fde2de */
  goto L_11fde2de;
L_11fde301:;
  /* 11fde301 push 0x1200c93c */
  push32((uint32_t)(0x1200c93cu));
  /* 11fde306 push 0x1200c734 */
  push32((uint32_t)(0x1200c734u));
  /* 11fde30b call 0x11fde3a0 */
  push32(0x11fde310u); f_11fde3a0();
  /* 11fde310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde313:;
  /* 11fde313 push 0x1200cc48 */
  push32((uint32_t)(0x1200cc48u));
  /* 11fde318 push 0x1200ca40 */
  push32((uint32_t)(0x1200ca40u));
  /* 11fde31d call 0x11fde3a0 */
  push32(0x11fde322u); f_11fde3a0();
  /* 11fde322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde325 cmp dword ptr [0x1200efe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde32c jne 0x11fde34e */
  if (!C.zf) goto L_11fde34e;
  /* 11fde32e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fde330 call 0x11fdc6d0 */
  push32(0x11fde335u); f_11fdc6d0();
  /* 11fde335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde338 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11fde33b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde33d je 0x11fde34e */
  if (C.zf) goto L_11fde34e;
  /* 11fde33f mov dword ptr [0x1200efe0], 1 */
  w32((uint32_t)(0x1200efe0), (0x1u));
  /* 11fde349 call 0x11fdcfe0 */
  push32(0x11fde34eu); f_11fdcfe0();
L_11fde34e:;
  /* 11fde34e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde352 je 0x11fde35b */
  if (C.zf) goto L_11fde35b;
  /* 11fde354 call 0x11fde390 */
  push32(0x11fde359u); f_11fde390();
  /* 11fde359 jmp 0x11fde36f */
  goto L_11fde36f;
L_11fde35b:;
  /* 11fde35b mov dword ptr [0x1200efdc], 1 */
  w32((uint32_t)(0x1200efdc), (0x1u));
  /* 11fde365 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde368 push ecx */
  push32((uint32_t)(ECX));
  /* 11fde369 call dword ptr [0x12011448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011448))), 0x11fde36fu);
L_11fde36f:;
  /* 11fde36f mov esp, ebp */
  ESP = (EBP);
  /* 11fde371 pop ebp */
  EBP = (pop32());
  /* 11fde372 ret  */
  ESPCHK(0x11fde290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x11fde380 (15 bytes, 7 insns) */
void f_11fde380(void) {
  FTRACE(0x11fde380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde380 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde381 mov ebp, esp */
  EBP = (ESP);
  /* 11fde383 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11fde385 call 0x11fdb0c0 */
  push32(0x11fde38au); f_11fdb0c0();
  /* 11fde38a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde38d pop ebp */
  EBP = (pop32());
  /* 11fde38e ret  */
  ESPCHK(0x11fde380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x11fde390 (15 bytes, 7 insns) */
void f_11fde390(void) {
  FTRACE(0x11fde390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde390 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde391 mov ebp, esp */
  EBP = (ESP);
  /* 11fde393 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11fde395 call 0x11fdb160 */
  push32(0x11fde39au); f_11fdb160();
  /* 11fde39a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde39d pop ebp */
  EBP = (pop32());
  /* 11fde39e ret  */
  ESPCHK(0x11fde390u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11fde3a0 (37 bytes, 16 insns) */
void f_11fde3a0(void) {
  FTRACE(0x11fde3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde3a1 mov ebp, esp */
  EBP = (ESP);
L_11fde3a3:;
  /* 11fde3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde3a6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde3a9 jae 0x11fde3c3 */
  if (!C.cf) goto L_11fde3c3;
  /* 11fde3ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde3ae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde3b1 je 0x11fde3b8 */
  if (C.zf) goto L_11fde3b8;
  /* 11fde3b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde3b6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11fde3b8u);
L_11fde3b8:;
  /* 11fde3b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde3bb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde3be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fde3c1 jmp 0x11fde3a3 */
  goto L_11fde3a3;
L_11fde3c3:;
  /* 11fde3c3 pop ebp */
  EBP = (pop32());
  /* 11fde3c4 ret  */
  ESPCHK(0x11fde3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x11fde3d0 (238 bytes, 75 insns) */
void f_11fde3d0(void) {
  FTRACE(0x11fde3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fde3d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde3d9 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde3de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fde3e1 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde3e5 jl 0x11fde3f0 */
  if ((C.sf!=C.of)) goto L_11fde3f0;
  /* 11fde3e7 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde3ee jle 0x11fde3f8 */
  if ((C.zf||C.sf!=C.of)) goto L_11fde3f8;
L_11fde3f0:;
  /* 11fde3f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fde3f3 jmp 0x11fde4ba */
  goto L_11fde4ba;
L_11fde3f8:;
  /* 11fde3f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fde3fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fde3fe add edx, dword ptr [ecx*4 + 0x1200d3ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x1200d3ac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde405 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11fde408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde40b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fde40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde410 jne 0x11fde421 */
  if (!C.zf) goto L_11fde421;
  /* 11fde412 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde416 jle 0x11fde421 */
  if ((C.zf||C.sf!=C.of)) goto L_11fde421;
  /* 11fde418 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fde41b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11fde421:;
  /* 11fde421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde424 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde427 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde42d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde430 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde433 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fde436 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fde439 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde43b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11fde43f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde442 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde445 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fde448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde44b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde44e add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde451 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde454 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde457 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fde45a call 0x11fe4110 */
  push32(0x11fde45fu); f_11fe4110();
  /* 11fde45f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde462 add ecx, dword ptr [0x1200d2c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d2c8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde468 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fde46b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fde46e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fde471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde474 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fde477 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fde47a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde47d mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fde480 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fde483 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fde486 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde48a je 0x11fde4ab */
  if (C.zf) goto L_11fde4ab;
  /* 11fde48c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde490 jne 0x11fde4b7 */
  if (!C.zf) goto L_11fde4b7;
  /* 11fde492 cmp dword ptr [0x1200d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde499 je 0x11fde4b7 */
  if (C.zf) goto L_11fde4b7;
  /* 11fde49b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11fde49e push eax */
  push32((uint32_t)(EAX));
  /* 11fde49f call 0x11fe4520 */
  push32(0x11fde4a4u); f_11fe4520();
  /* 11fde4a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde4a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde4a9 je 0x11fde4b7 */
  if (C.zf) goto L_11fde4b7;
L_11fde4ab:;
  /* 11fde4ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde4ae add ecx, dword ptr [0x1200d2d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d2d0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde4b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fde4b7:;
  /* 11fde4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fde4ba:;
  /* 11fde4ba mov esp, ebp */
  ESP = (EBP);
  /* 11fde4bc pop ebp */
  EBP = (pop32());
  /* 11fde4bd ret  */
  ESPCHK(0x11fde3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x11fde4c0 (804 bytes, 236 insns) */
void f_11fde4c0(void) {
  FTRACE(0x11fde4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fde4c3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde4c6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11fde4cb push 0x12009cf8 */
  push32((uint32_t)(0x12009cf8u));
  /* 11fde4d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde4d2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11fde4d7 call 0x11fdb1c0 */
  push32(0x11fde4dcu); f_11fdb1c0();
  /* 11fde4dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde4df mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11fde4e2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde4e6 jne 0x11fde4f2 */
  if (!C.zf) goto L_11fde4f2;
  /* 11fde4e8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11fde4ea call 0x11fd9c30 */
  push32(0x11fde4efu); f_11fd9c30();
  /* 11fde4ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde4f2:;
  /* 11fde4f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde4f5 mov dword ptr [0x120108e0], eax */
  w32((uint32_t)(0x120108e0), (EAX));
  /* 11fde4fa mov dword ptr [0x12010a1c], 0x20 */
  w32((uint32_t)(0x12010a1c), (0x20u));
  /* 11fde504 jmp 0x11fde50f */
  goto L_11fde50f;
L_11fde506:;
  /* 11fde506 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde509 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde50c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11fde50f:;
  /* 11fde50f mov edx, dword ptr [0x120108e0] */
  EDX = (r32((uint32_t)(0x120108e0)));
  /* 11fde515 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde51b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde51e jae 0x11fde543 */
  if (!C.cf) goto L_11fde543;
  /* 11fde520 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde523 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fde527 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde52a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11fde530 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde533 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11fde537 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde53a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11fde541 jmp 0x11fde506 */
  goto L_11fde506;
L_11fde543:;
  /* 11fde543 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11fde546 push ecx */
  push32((uint32_t)(ECX));
  /* 11fde547 call dword ptr [0x120113bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113bc))), 0x11fde54du);
  /* 11fde54d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11fde550 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fde556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fde558 je 0x11fde6e5 */
  if (C.zf) goto L_11fde6e5;
  /* 11fde55e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde562 je 0x11fde6e5 */
  if (C.zf) goto L_11fde6e5;
  /* 11fde568 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fde56b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fde56d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11fde570 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fde573 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde576 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fde579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde57c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde57f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11fde582 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde589 jge 0x11fde593 */
  if ((C.sf==C.of)) goto L_11fde593;
  /* 11fde58b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fde58e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11fde591 jmp 0x11fde59a */
  goto L_11fde59a;
L_11fde593:;
  /* 11fde593 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11fde59a:;
  /* 11fde59a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fde59d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11fde5a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11fde5a7 jmp 0x11fde5b2 */
  goto L_11fde5b2;
L_11fde5a9:;
  /* 11fde5a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11fde5ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde5af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11fde5b2:;
  /* 11fde5b2 mov ecx, dword ptr [0x12010a1c] */
  ECX = (r32((uint32_t)(0x12010a1c)));
  /* 11fde5b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde5bb jge 0x11fde652 */
  if ((C.sf==C.of)) goto L_11fde652;
  /* 11fde5c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11fde5c6 push 0x12009cf8 */
  push32((uint32_t)(0x12009cf8u));
  /* 11fde5cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde5cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11fde5d2 call 0x11fdb1c0 */
  push32(0x11fde5d7u); f_11fdb1c0();
  /* 11fde5d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde5da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11fde5dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde5e1 jne 0x11fde5ee */
  if (!C.zf) goto L_11fde5ee;
  /* 11fde5e3 mov edx, dword ptr [0x12010a1c] */
  EDX = (r32((uint32_t)(0x12010a1c)));
  /* 11fde5e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11fde5ec jmp 0x11fde652 */
  goto L_11fde652;
L_11fde5ee:;
  /* 11fde5ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11fde5f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde5f4 mov dword ptr [eax*4 + 0x120108e0], ecx */
  w32((uint32_t)(EAX*4 + 0x120108e0), (ECX));
  /* 11fde5fb mov edx, dword ptr [0x12010a1c] */
  EDX = (r32((uint32_t)(0x12010a1c)));
  /* 11fde601 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde604 mov dword ptr [0x12010a1c], edx */
  w32((uint32_t)(0x12010a1c), (EDX));
  /* 11fde60a jmp 0x11fde615 */
  goto L_11fde615;
L_11fde60c:;
  /* 11fde60c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde60f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde612 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11fde615:;
  /* 11fde615 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11fde618 mov edx, dword ptr [ecx*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fde61f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde625 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde628 jae 0x11fde64d */
  if (!C.cf) goto L_11fde64d;
  /* 11fde62a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde62d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fde631 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde634 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11fde63a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde63d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11fde641 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde644 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11fde64b jmp 0x11fde60c */
  goto L_11fde60c;
L_11fde64d:;
  /* 11fde64d jmp 0x11fde5a9 */
  goto L_11fde5a9;
L_11fde652:;
  /* 11fde652 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11fde659 jmp 0x11fde676 */
  goto L_11fde676;
L_11fde65b:;
  /* 11fde65b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde65e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde661 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11fde664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde66a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fde66d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11fde670 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde673 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11fde676:;
  /* 11fde676 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde679 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde67c jge 0x11fde6e5 */
  if ((C.sf==C.of)) goto L_11fde6e5;
  /* 11fde67e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11fde681 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde684 je 0x11fde6e0 */
  if (C.zf) goto L_11fde6e0;
  /* 11fde686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde689 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fde68c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fde68f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fde691 je 0x11fde6e0 */
  if (C.zf) goto L_11fde6e0;
  /* 11fde693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde696 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fde699 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11fde69c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde69e jne 0x11fde6b0 */
  if (!C.zf) goto L_11fde6b0;
  /* 11fde6a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11fde6a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fde6a5 push edx */
  push32((uint32_t)(EDX));
  /* 11fde6a6 call dword ptr [0x120113cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113cc))), 0x11fde6acu);
  /* 11fde6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde6ae je 0x11fde6e0 */
  if (C.zf) goto L_11fde6e0;
L_11fde6b0:;
  /* 11fde6b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde6b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fde6b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde6b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fde6bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde6bf mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fde6c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde6c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11fde6cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde6ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11fde6d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fde6d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fde6d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde6d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde6db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fde6dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11fde6e0:;
  /* 11fde6e0 jmp 0x11fde65b */
  goto L_11fde65b;
L_11fde6e5:;
  /* 11fde6e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11fde6ec jmp 0x11fde6f7 */
  goto L_11fde6f7;
L_11fde6ee:;
  /* 11fde6ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde6f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde6f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11fde6f7:;
  /* 11fde6f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde6fb jge 0x11fde7d4 */
  if ((C.sf==C.of)) goto L_11fde7d4;
  /* 11fde701 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde704 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fde707 mov edx, dword ptr [0x120108e0] */
  EDX = (r32((uint32_t)(0x120108e0)));
  /* 11fde70d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde70f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11fde712 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde715 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde718 jne 0x11fde7c0 */
  if (!C.zf) goto L_11fde7c0;
  /* 11fde71e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde721 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11fde725 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde729 jne 0x11fde734 */
  if (!C.zf) goto L_11fde734;
  /* 11fde72b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11fde732 jmp 0x11fde744 */
  goto L_11fde744;
L_11fde734:;
  /* 11fde734 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11fde737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde73a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fde73c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde73e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde741 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11fde744:;
  /* 11fde744 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fde747 push eax */
  push32((uint32_t)(EAX));
  /* 11fde748 call dword ptr [0x12011418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011418))), 0x11fde74eu);
  /* 11fde74e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11fde751 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde755 je 0x11fde7af */
  if (C.zf) goto L_11fde7af;
  /* 11fde757 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fde75a push ecx */
  push32((uint32_t)(ECX));
  /* 11fde75b call dword ptr [0x120113cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113cc))), 0x11fde761u);
  /* 11fde761 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11fde764 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde768 je 0x11fde7af */
  if (C.zf) goto L_11fde7af;
  /* 11fde76a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde76d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fde770 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fde772 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11fde775 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fde77b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde77e jne 0x11fde790 */
  if (!C.zf) goto L_11fde790;
  /* 11fde780 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde783 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11fde786 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11fde788 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde78b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11fde78e jmp 0x11fde7ad */
  goto L_11fde7ad;
L_11fde790:;
  /* 11fde790 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11fde793 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fde799 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde79c jne 0x11fde7ad */
  if (!C.zf) goto L_11fde7ad;
  /* 11fde79e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fde7a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11fde7a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11fde7ad:;
  /* 11fde7ad jmp 0x11fde7be */
  goto L_11fde7be;
L_11fde7af:;
  /* 11fde7af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fde7b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11fde7b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11fde7be:;
  /* 11fde7be jmp 0x11fde7cf */
  goto L_11fde7cf;
L_11fde7c0:;
  /* 11fde7c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fde7c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11fde7c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fde7cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11fde7cf:;
  /* 11fde7cf jmp 0x11fde6ee */
  goto L_11fde6ee;
L_11fde7d4:;
  /* 11fde7d4 mov eax, dword ptr [0x12010a1c] */
  EAX = (r32((uint32_t)(0x12010a1c)));
  /* 11fde7d9 push eax */
  push32((uint32_t)(EAX));
  /* 11fde7da call dword ptr [0x120113c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113c4))), 0x11fde7e0u);
  /* 11fde7e0 mov esp, ebp */
  ESP = (EBP);
  /* 11fde7e2 pop ebp */
  EBP = (pop32());
  /* 11fde7e3 ret  */
  ESPCHK(0x11fde4c0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11fde7f0 (155 bytes, 45 insns) */
void f_11fde7f0(void) {
  FTRACE(0x11fde7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fde7f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde7f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fde7fd jmp 0x11fde808 */
  goto L_11fde808;
L_11fde7ff:;
  /* 11fde7ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde802 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde805 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fde808:;
  /* 11fde808 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde80c jge 0x11fde887 */
  if ((C.sf==C.of)) goto L_11fde887;
  /* 11fde80e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde811 cmp dword ptr [ecx*4 + 0x120108e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120108e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde819 je 0x11fde882 */
  if (C.zf) goto L_11fde882;
  /* 11fde81b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde81e mov eax, dword ptr [edx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fde825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fde828 jmp 0x11fde833 */
  goto L_11fde833;
L_11fde82a:;
  /* 11fde82a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde82d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fde833:;
  /* 11fde833 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde836 mov eax, dword ptr [edx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fde83d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde842 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde845 jae 0x11fde85f */
  if (!C.cf) goto L_11fde85f;
  /* 11fde847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde84a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde84e je 0x11fde85d */
  if (C.zf) goto L_11fde85d;
  /* 11fde850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde853 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde856 push edx */
  push32((uint32_t)(EDX));
  /* 11fde857 call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fde85du);
L_11fde85d:;
  /* 11fde85d jmp 0x11fde82a */
  goto L_11fde82a;
L_11fde85f:;
  /* 11fde85f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde864 mov ecx, dword ptr [eax*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fde86b push ecx */
  push32((uint32_t)(ECX));
  /* 11fde86c call 0x11fdbc50 */
  push32(0x11fde871u); f_11fdbc50();
  /* 11fde871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde874 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde877 mov dword ptr [edx*4 + 0x120108e0], 0 */
  w32((uint32_t)(EDX*4 + 0x120108e0), (0x0u));
L_11fde882:;
  /* 11fde882 jmp 0x11fde7ff */
  goto L_11fde7ff;
L_11fde887:;
  /* 11fde887 mov esp, ebp */
  ESP = (EBP);
  /* 11fde889 pop ebp */
  EBP = (pop32());
  /* 11fde88a ret  */
  ESPCHK(0x11fde7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e890 @ 0x11fde890 (329 bytes, 102 insns) */
void f_11fde890(void) {
  FTRACE(0x11fde890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde890 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde891 mov ebp, esp */
  EBP = (ESP);
  /* 11fde893 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde896 cmp dword ptr [0x12010a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde89d jne 0x11fde8a4 */
  if (!C.zf) goto L_11fde8a4;
  /* 11fde89f call 0x11fe5230 */
  push32(0x11fde8a4u); f_11fe5230();
L_11fde8a4:;
  /* 11fde8a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fde8ab mov eax, dword ptr [0x1200ef14] */
  EAX = (r32((uint32_t)(0x1200ef14)));
  /* 11fde8b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fde8b3:;
  /* 11fde8b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde8b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fde8b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fde8bb je 0x11fde8e9 */
  if (C.zf) goto L_11fde8e9;
  /* 11fde8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde8c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fde8c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde8c6 je 0x11fde8d1 */
  if (C.zf) goto L_11fde8d1;
  /* 11fde8c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde8cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde8ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fde8d1:;
  /* 11fde8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde8d4 push eax */
  push32((uint32_t)(EAX));
  /* 11fde8d5 call 0x11fdf750 */
  push32(0x11fde8dau); f_11fdf750();
  /* 11fde8da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde8dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde8e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fde8e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fde8e7 jmp 0x11fde8b3 */
  goto L_11fde8b3;
L_11fde8e9:;
  /* 11fde8e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11fde8eb push 0x12009d04 */
  push32((uint32_t)(0x12009d04u));
  /* 11fde8f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde8f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fde8f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11fde8fc push ecx */
  push32((uint32_t)(ECX));
  /* 11fde8fd call 0x11fdb1c0 */
  push32(0x11fde902u); f_11fdb1c0();
  /* 11fde902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde905 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fde908 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde90b mov dword ptr [0x1200efbc], edx */
  w32((uint32_t)(0x1200efbc), (EDX));
  /* 11fde911 cmp dword ptr [0x1200efbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde918 jne 0x11fde924 */
  if (!C.zf) goto L_11fde924;
  /* 11fde91a push 9 */
  push32((uint32_t)(0x9u));
  /* 11fde91c call 0x11fd9c30 */
  push32(0x11fde921u); f_11fd9c30();
  /* 11fde921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde924:;
  /* 11fde924 mov eax, dword ptr [0x1200ef14] */
  EAX = (r32((uint32_t)(0x1200ef14)));
  /* 11fde929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fde92c jmp 0x11fde937 */
  goto L_11fde937;
L_11fde92e:;
  /* 11fde92e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde931 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde934 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fde937:;
  /* 11fde937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde93a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fde93d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fde93f je 0x11fde9a7 */
  if (C.zf) goto L_11fde9a7;
  /* 11fde941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde944 push ecx */
  push32((uint32_t)(ECX));
  /* 11fde945 call 0x11fdf750 */
  push32(0x11fde94au); f_11fdf750();
  /* 11fde94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde94d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde950 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fde953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde956 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fde959 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde95c je 0x11fde9a5 */
  if (C.zf) goto L_11fde9a5;
  /* 11fde95e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11fde960 push 0x12009d04 */
  push32((uint32_t)(0x12009d04u));
  /* 11fde965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde967 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fde96a push ecx */
  push32((uint32_t)(ECX));
  /* 11fde96b call 0x11fdb1c0 */
  push32(0x11fde970u); f_11fdb1c0();
  /* 11fde970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde973 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde976 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fde978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde97b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde97e jne 0x11fde98a */
  if (!C.zf) goto L_11fde98a;
  /* 11fde980 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fde982 call 0x11fd9c30 */
  push32(0x11fde987u); f_11fd9c30();
  /* 11fde987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde98a:;
  /* 11fde98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fde98d push ecx */
  push32((uint32_t)(ECX));
  /* 11fde98e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde991 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fde993 push eax */
  push32((uint32_t)(EAX));
  /* 11fde994 call 0x11fdf8d0 */
  push32(0x11fde999u); f_11fdf8d0();
  /* 11fde999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde99c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde99f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde9a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fde9a5:;
  /* 11fde9a5 jmp 0x11fde92e */
  goto L_11fde92e;
L_11fde9a7:;
  /* 11fde9a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde9a9 mov edx, dword ptr [0x1200ef14] */
  EDX = (r32((uint32_t)(0x1200ef14)));
  /* 11fde9af push edx */
  push32((uint32_t)(EDX));
  /* 11fde9b0 call 0x11fdbc50 */
  push32(0x11fde9b5u); f_11fdbc50();
  /* 11fde9b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde9b8 mov dword ptr [0x1200ef14], 0 */
  w32((uint32_t)(0x1200ef14), (0x0u));
  /* 11fde9c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fde9c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fde9cb mov dword ptr [0x12010a20], 1 */
  w32((uint32_t)(0x12010a20), (0x1u));
  /* 11fde9d5 mov esp, ebp */
  ESP = (EBP);
  /* 11fde9d7 pop ebp */
  EBP = (pop32());
  /* 11fde9d8 ret  */
  ESPCHK(0x11fde890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x11fde9e0 (216 bytes, 69 insns) */
void f_11fde9e0(void) {
  FTRACE(0x11fde9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fde9e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde9e6 cmp dword ptr [0x12010a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde9ed jne 0x11fde9f4 */
  if (!C.zf) goto L_11fde9f4;
  /* 11fde9ef call 0x11fe5230 */
  push32(0x11fde9f4u); f_11fe5230();
L_11fde9f4:;
  /* 11fde9f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11fde9f9 push 0x1200efe4 */
  push32((uint32_t)(0x1200efe4u));
  /* 11fde9fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdea00 call dword ptr [0x12011434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011434))), 0x11fdea06u);
  /* 11fdea06 mov dword ptr [0x1200efcc], 0x1200efe4 */
  w32((uint32_t)(0x1200efcc), (0x1200efe4u));
  /* 11fdea10 mov eax, dword ptr [0x12010a54] */
  EAX = (r32((uint32_t)(0x12010a54)));
  /* 11fdea15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdea18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdea1a jne 0x11fdea27 */
  if (!C.zf) goto L_11fdea27;
  /* 11fdea1c mov edx, dword ptr [0x1200efcc] */
  EDX = (r32((uint32_t)(0x1200efcc)));
  /* 11fdea22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fdea25 jmp 0x11fdea2f */
  goto L_11fdea2f;
L_11fdea27:;
  /* 11fdea27 mov eax, dword ptr [0x12010a54] */
  EAX = (r32((uint32_t)(0x12010a54)));
  /* 11fdea2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11fdea2f:;
  /* 11fdea2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdea32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fdea35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11fdea38 push edx */
  push32((uint32_t)(EDX));
  /* 11fdea39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fdea3c push eax */
  push32((uint32_t)(EAX));
  /* 11fdea3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdea3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdea41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdea44 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdea45 call 0x11fdeac0 */
  push32(0x11fdea4au); f_11fdeac0();
  /* 11fdea4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdea4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11fdea52 push 0x12009d10 */
  push32((uint32_t)(0x12009d10u));
  /* 11fdea57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdea59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdea5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdea5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11fdea62 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdea63 call 0x11fdb1c0 */
  push32(0x11fdea68u); f_11fdb1c0();
  /* 11fdea68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdea6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdea6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdea72 jne 0x11fdea7e */
  if (!C.zf) goto L_11fdea7e;
  /* 11fdea74 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fdea76 call 0x11fd9c30 */
  push32(0x11fdea7bu); f_11fd9c30();
  /* 11fdea7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdea7e:;
  /* 11fdea7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11fdea81 push edx */
  push32((uint32_t)(EDX));
  /* 11fdea82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fdea85 push eax */
  push32((uint32_t)(EAX));
  /* 11fdea86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdea89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdea8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11fdea8f push eax */
  push32((uint32_t)(EAX));
  /* 11fdea90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdea93 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdea94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdea97 push edx */
  push32((uint32_t)(EDX));
  /* 11fdea98 call 0x11fdeac0 */
  push32(0x11fdea9du); f_11fdeac0();
  /* 11fdea9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeaa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdeaa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdeaa6 mov dword ptr [0x1200efb0], eax */
  w32((uint32_t)(0x1200efb0), (EAX));
  /* 11fdeaab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdeaae mov dword ptr [0x1200efb4], ecx */
  w32((uint32_t)(0x1200efb4), (ECX));
  /* 11fdeab4 mov esp, ebp */
  ESP = (EBP);
  /* 11fdeab6 pop ebp */
  EBP = (pop32());
  /* 11fdeab7 ret  */
  ESPCHK(0x11fde9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eac0 @ 0x11fdeac0 (1060 bytes, 360 insns) */
void f_11fdeac0(void) {
  FTRACE(0x11fdeac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdeac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdeac1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdeac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdeac6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeac9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fdeacf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdead2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11fdead8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdeadb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdeade cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeae2 je 0x11fdeaf5 */
  if (C.zf) goto L_11fdeaf5;
  /* 11fdeae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdeae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeaea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fdeaec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdeaef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeaf2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11fdeaf5:;
  /* 11fdeaf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeaf8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdeafb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeafe jne 0x11fdebcd */
  if (!C.zf) goto L_11fdebcd;
L_11fdeb04:;
  /* 11fdeb04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb0a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdeb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb10 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdeb13 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeb16 je 0x11fdeb92 */
  if (C.zf) goto L_11fdeb92;
  /* 11fdeb18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb1b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fdeb1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdeb20 je 0x11fdeb92 */
  if (C.zf) goto L_11fdeb92;
  /* 11fdeb22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdeb27 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdeb29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdeb2b mov al, byte ptr [edx + 0x120107a1] */
  AL = (r8((uint32_t)(EDX + 0x120107a1)));
  /* 11fdeb31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdeb34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdeb36 je 0x11fdeb67 */
  if (C.zf) goto L_11fdeb67;
  /* 11fdeb38 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdeb3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fdeb45 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeb49 je 0x11fdeb67 */
  if (C.zf) goto L_11fdeb67;
  /* 11fdeb4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeb4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fdeb53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fdeb55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeb58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fdeb5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fdeb67:;
  /* 11fdeb67 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdeb6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fdeb74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeb78 je 0x11fdeb8d */
  if (C.zf) goto L_11fdeb8d;
  /* 11fdeb7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeb7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeb80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdeb82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdeb84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeb87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb8a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11fdeb8d:;
  /* 11fdeb8d jmp 0x11fdeb04 */
  goto L_11fdeb04;
L_11fdeb92:;
  /* 11fdeb92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb95 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdeb97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeb9a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeb9d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fdeb9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeba3 je 0x11fdebb4 */
  if (C.zf) goto L_11fdebb4;
  /* 11fdeba5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeba8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11fdebab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdebae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdebb1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11fdebb4:;
  /* 11fdebb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdebb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdebba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdebbd jne 0x11fdebc8 */
  if (!C.zf) goto L_11fdebc8;
  /* 11fdebbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdebc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdebc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fdebc8:;
  /* 11fdebc8 jmp 0x11fdec9c */
  goto L_11fdec9c;
L_11fdebcd:;
  /* 11fdebcd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdebd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdebd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdebd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdebd8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fdebda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdebde je 0x11fdebf3 */
  if (C.zf) goto L_11fdebf3;
  /* 11fdebe0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdebe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdebe6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdebe8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdebea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdebed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdebf0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11fdebf3:;
  /* 11fdebf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdebf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdebf8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11fdebfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdebfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdec01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdec04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdec07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdec0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdec0f mov dl, byte ptr [ecx + 0x120107a1] */
  DL = (r8((uint32_t)(ECX + 0x120107a1)));
  /* 11fdec15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fdec18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdec1a je 0x11fdec4b */
  if (C.zf) goto L_11fdec4b;
  /* 11fdec1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdec1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdec21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdec24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdec27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fdec29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdec2d je 0x11fdec42 */
  if (C.zf) goto L_11fdec42;
  /* 11fdec2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdec32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdec35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdec37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdec39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdec3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdec3f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11fdec42:;
  /* 11fdec42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdec45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdec48 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdec4b:;
  /* 11fdec4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdec4e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdec54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdec57 je 0x11fdec77 */
  if (C.zf) goto L_11fdec77;
  /* 11fdec59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdec5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdec61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdec63 je 0x11fdec77 */
  if (C.zf) goto L_11fdec77;
  /* 11fdec65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdec68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdec6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdec71 jne 0x11fdebcd */
  if (!C.zf) goto L_11fdebcd;
L_11fdec77:;
  /* 11fdec77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdec7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdec80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdec82 jne 0x11fdec8f */
  if (!C.zf) goto L_11fdec8f;
  /* 11fdec84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdec87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdec8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdec8d jmp 0x11fdec9c */
  goto L_11fdec9c;
L_11fdec8f:;
  /* 11fdec8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdec93 je 0x11fdec9c */
  if (C.zf) goto L_11fdec9c;
  /* 11fdec95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdec98 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11fdec9c:;
  /* 11fdec9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11fdeca3:;
  /* 11fdeca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeca6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fdeca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdecab je 0x11fdecce */
  if (C.zf) goto L_11fdecce;
L_11fdecad:;
  /* 11fdecad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdecb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fdecb3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdecb6 je 0x11fdecc3 */
  if (C.zf) goto L_11fdecc3;
  /* 11fdecb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdecbb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdecbe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdecc1 jne 0x11fdecce */
  if (!C.zf) goto L_11fdecce;
L_11fdecc3:;
  /* 11fdecc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdecc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdecc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdeccc jmp 0x11fdecad */
  goto L_11fdecad;
L_11fdecce:;
  /* 11fdecce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdecd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdecd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdecd6 jne 0x11fdecdd */
  if (!C.zf) goto L_11fdecdd;
  /* 11fdecd8 jmp 0x11fdeebb */
  goto L_11fdeebb;
L_11fdecdd:;
  /* 11fdecdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdece1 je 0x11fdecf4 */
  if (C.zf) goto L_11fdecf4;
  /* 11fdece3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdece6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdece9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fdeceb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdecee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdecf1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11fdecf4:;
  /* 11fdecf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdecf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdecf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdecfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdecff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fded01:;
  /* 11fded01 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fded08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11fded0f:;
  /* 11fded0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fded12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fded15 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded18 jne 0x11fded2e */
  if (!C.zf) goto L_11fded2e;
  /* 11fded1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fded1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fded20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fded23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fded26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fded29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fded2c jmp 0x11fded0f */
  goto L_11fded0f;
L_11fded2e:;
  /* 11fded2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fded31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fded34 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded37 jne 0x11fded8a */
  if (!C.zf) goto L_11fded8a;
  /* 11fded39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fded3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fded3e mov ecx, 2 */
  ECX = (0x2u);
  /* 11fded43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fded45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fded47 jne 0x11fded82 */
  if (!C.zf) goto L_11fded82;
  /* 11fded49 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded4d je 0x11fded6f */
  if (C.zf) goto L_11fded6f;
  /* 11fded4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fded52 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fded56 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded59 jne 0x11fded66 */
  if (!C.zf) goto L_11fded66;
  /* 11fded5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fded5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fded61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fded64 jmp 0x11fded6d */
  goto L_11fded6d;
L_11fded66:;
  /* 11fded66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fded6d:;
  /* 11fded6d jmp 0x11fded76 */
  goto L_11fded76;
L_11fded6f:;
  /* 11fded6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fded76:;
  /* 11fded76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fded78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded7c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11fded7f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fded82:;
  /* 11fded82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fded85 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fded87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fded8a:;
  /* 11fded8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fded8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fded90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fded93 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fded96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fded98 je 0x11fdedbe */
  if (C.zf) goto L_11fdedbe;
  /* 11fded9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fded9e je 0x11fdedaf */
  if (C.zf) goto L_11fdedaf;
  /* 11fdeda0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeda3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11fdeda6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeda9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdedac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11fdedaf:;
  /* 11fdedaf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdedb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdedb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdedb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdedba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fdedbc jmp 0x11fded8a */
  goto L_11fded8a;
L_11fdedbe:;
  /* 11fdedbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdedc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fdedc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdedc6 je 0x11fdede4 */
  if (C.zf) goto L_11fdede4;
  /* 11fdedc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdedcc jne 0x11fdede9 */
  if (!C.zf) goto L_11fdede9;
  /* 11fdedce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdedd1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fdedd4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdedd7 je 0x11fdede4 */
  if (C.zf) goto L_11fdede4;
  /* 11fdedd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdeddc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdeddf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdede2 jne 0x11fdede9 */
  if (!C.zf) goto L_11fdede9;
L_11fdede4:;
  /* 11fdede4 jmp 0x11fdee94 */
  goto L_11fdee94;
L_11fdede9:;
  /* 11fdede9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeded je 0x11fdee86 */
  if (C.zf) goto L_11fdee86;
  /* 11fdedf3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdedf7 je 0x11fdee4d */
  if (C.zf) goto L_11fdee4d;
  /* 11fdedf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdedfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdedfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fdee00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdee02 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fdee08 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdee0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdee0d je 0x11fdee38 */
  if (C.zf) goto L_11fdee38;
  /* 11fdee0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdee12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee15 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fdee17 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fdee19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdee1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee1f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11fdee22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdee2b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdee30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fdee38:;
  /* 11fdee38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdee3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fdee40 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fdee42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdee45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee48 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fdee4b jmp 0x11fdee79 */
  goto L_11fdee79;
L_11fdee4d:;
  /* 11fdee4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdee52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fdee54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdee56 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fdee5c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdee5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdee61 je 0x11fdee79 */
  if (C.zf) goto L_11fdee79;
  /* 11fdee63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdee6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdee71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fdee79:;
  /* 11fdee79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdee7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdee84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fdee86:;
  /* 11fdee86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdee89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdee8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdee8f jmp 0x11fded01 */
  goto L_11fded01;
L_11fdee94:;
  /* 11fdee94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdee98 je 0x11fdeea9 */
  if (C.zf) goto L_11fdeea9;
  /* 11fdee9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdee9d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11fdeea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdeea3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeea6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11fdeea9:;
  /* 11fdeea9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeeac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdeeae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeeb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdeeb4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fdeeb6 jmp 0x11fdeca3 */
  goto L_11fdeca3;
L_11fdeebb:;
  /* 11fdeebb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeebf je 0x11fdeed3 */
  if (C.zf) goto L_11fdeed3;
  /* 11fdeec1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdeec4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fdeeca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdeecd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeed0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11fdeed3:;
  /* 11fdeed3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdeed6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdeed8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdeedb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdeede mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fdeee0 mov esp, ebp */
  ESP = (EBP);
  /* 11fdeee2 pop ebp */
  EBP = (pop32());
  /* 11fdeee3 ret  */
  ESPCHK(0x11fdeac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x11fdeef0 (537 bytes, 173 insns) */
void f_11fdeef0(void) {
  FTRACE(0x11fdeef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdeef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdeef1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdeef3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdeef6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fdeefd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11fdef04 cmp dword ptr [0x1200f0e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f0e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef0b jne 0x11fdef4a */
  if (!C.zf) goto L_11fdef4a;
  /* 11fdef0d call dword ptr [0x120113b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b4))), 0x11fdef13u);
  /* 11fdef13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fdef16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef1a je 0x11fdef28 */
  if (C.zf) goto L_11fdef28;
  /* 11fdef1c mov dword ptr [0x1200f0e8], 1 */
  w32((uint32_t)(0x1200f0e8), (0x1u));
  /* 11fdef26 jmp 0x11fdef4a */
  goto L_11fdef4a;
L_11fdef28:;
  /* 11fdef28 call dword ptr [0x120113ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113ac))), 0x11fdef2eu);
  /* 11fdef2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fdef31 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef35 je 0x11fdef43 */
  if (C.zf) goto L_11fdef43;
  /* 11fdef37 mov dword ptr [0x1200f0e8], 2 */
  w32((uint32_t)(0x1200f0e8), (0x2u));
  /* 11fdef41 jmp 0x11fdef4a */
  goto L_11fdef4a;
L_11fdef43:;
  /* 11fdef43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdef45 jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdef4a:;
  /* 11fdef4a cmp dword ptr [0x1200f0e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f0e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef51 jne 0x11fdf04e */
  if (!C.zf) goto L_11fdf04e;
  /* 11fdef57 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef5b jne 0x11fdef73 */
  if (!C.zf) goto L_11fdef73;
  /* 11fdef5d call dword ptr [0x120113b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b4))), 0x11fdef63u);
  /* 11fdef63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fdef66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdef6a jne 0x11fdef73 */
  if (!C.zf) goto L_11fdef73;
  /* 11fdef6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdef6e jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdef73:;
  /* 11fdef73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdef76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fdef79:;
  /* 11fdef79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdef7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdef7e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11fdef81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdef83 je 0x11fdefa5 */
  if (C.zf) goto L_11fdefa5;
  /* 11fdef85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdef88 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdef8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdef8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdef91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdef93 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11fdef96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdef98 jne 0x11fdefa3 */
  if (!C.zf) goto L_11fdefa3;
  /* 11fdef9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdef9d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdefa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fdefa3:;
  /* 11fdefa3 jmp 0x11fdef79 */
  goto L_11fdef79;
L_11fdefa5:;
  /* 11fdefa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdefa8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdefab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fdefad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdefb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdefb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdefbe push edx */
  push32((uint32_t)(EDX));
  /* 11fdefbf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdefc2 push eax */
  push32((uint32_t)(EAX));
  /* 11fdefc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdefc7 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fdefcdu);
  /* 11fdefcd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fdefd0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdefd4 je 0x11fdeff4 */
  if (C.zf) goto L_11fdeff4;
  /* 11fdefd6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11fdefd8 push 0x12009d1c */
  push32((uint32_t)(0x12009d1cu));
  /* 11fdefdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdefdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdefe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdefe3 call 0x11fdb1c0 */
  push32(0x11fdefe8u); f_11fdb1c0();
  /* 11fdefe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdefeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fdefee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdeff2 jne 0x11fdf005 */
  if (!C.zf) goto L_11fdf005;
L_11fdeff4:;
  /* 11fdeff4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdeff7 push edx */
  push32((uint32_t)(EDX));
  /* 11fdeff8 call dword ptr [0x120113c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113c0))), 0x11fdeffeu);
  /* 11fdeffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf000 jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdf005:;
  /* 11fdf005 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf009 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdf00c push eax */
  push32((uint32_t)(EAX));
  /* 11fdf00d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf010 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf014 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf015 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdf018 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf019 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf01b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf01d call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fdf023u);
  /* 11fdf023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdf025 jne 0x11fdf03c */
  if (!C.zf) goto L_11fdf03c;
  /* 11fdf027 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdf029 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf02c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf02d call 0x11fdbc50 */
  push32(0x11fdf032u); f_11fdbc50();
  /* 11fdf032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf035 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11fdf03c:;
  /* 11fdf03c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdf03f push edx */
  push32((uint32_t)(EDX));
  /* 11fdf040 call dword ptr [0x120113c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113c0))), 0x11fdf046u);
  /* 11fdf046 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf049 jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdf04e:;
  /* 11fdf04e cmp dword ptr [0x1200f0e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f0e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf055 jne 0x11fdf103 */
  if (!C.zf) goto L_11fdf103;
  /* 11fdf05b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf05f jne 0x11fdf077 */
  if (!C.zf) goto L_11fdf077;
  /* 11fdf061 call dword ptr [0x120113ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113ac))), 0x11fdf067u);
  /* 11fdf067 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fdf06a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf06e jne 0x11fdf077 */
  if (!C.zf) goto L_11fdf077;
  /* 11fdf070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf072 jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdf077:;
  /* 11fdf077 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf07a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fdf07d:;
  /* 11fdf07d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf080 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fdf083 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdf085 je 0x11fdf0a5 */
  if (C.zf) goto L_11fdf0a5;
  /* 11fdf087 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf08a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf08d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdf090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf093 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fdf096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdf098 jne 0x11fdf0a3 */
  if (!C.zf) goto L_11fdf0a3;
  /* 11fdf09a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf09d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf0a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fdf0a3:;
  /* 11fdf0a3 jmp 0x11fdf07d */
  goto L_11fdf07d;
L_11fdf0a5:;
  /* 11fdf0a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf0a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf0ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf0ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fdf0b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11fdf0b6 push 0x12009d1c */
  push32((uint32_t)(0x12009d1cu));
  /* 11fdf0bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdf0bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdf0c0 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf0c1 call 0x11fdb1c0 */
  push32(0x11fdf0c6u); f_11fdb1c0();
  /* 11fdf0c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf0c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdf0cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf0d0 jne 0x11fdf0e0 */
  if (!C.zf) goto L_11fdf0e0;
  /* 11fdf0d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf0d5 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf0d6 call dword ptr [0x120113b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b8))), 0x11fdf0dcu);
  /* 11fdf0dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf0de jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdf0e0:;
  /* 11fdf0e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdf0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf0e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf0e7 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf0e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf0eb push eax */
  push32((uint32_t)(EAX));
  /* 11fdf0ec call 0x11fe5260 */
  push32(0x11fdf0f1u); f_11fe5260();
  /* 11fdf0f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf0f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdf0f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf0f8 call dword ptr [0x120113b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b8))), 0x11fdf0feu);
  /* 11fdf0fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf101 jmp 0x11fdf105 */
  goto L_11fdf105;
L_11fdf103:;
  /* 11fdf103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdf105:;
  /* 11fdf105 mov esp, ebp */
  ESP = (EBP);
  /* 11fdf107 pop ebp */
  EBP = (pop32());
  /* 11fdf108 ret  */
  ESPCHK(0x11fdeef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f110 @ 0x11fdf110 (77 bytes, 25 insns) */
void f_11fdf110(void) {
  FTRACE(0x11fdf110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf110 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf111 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf113 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf115 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11fdf11a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf11c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf120 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11fdf123 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf124 call dword ptr [0x120113a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a0))), 0x11fdf12au);
  /* 11fdf12a mov dword ptr [0x120108cc], eax */
  w32((uint32_t)(0x120108cc), (EAX));
  /* 11fdf12f cmp dword ptr [0x120108cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120108cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf136 jne 0x11fdf13c */
  if (!C.zf) goto L_11fdf13c;
  /* 11fdf138 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf13a jmp 0x11fdf15b */
  goto L_11fdf15b;
L_11fdf13c:;
  /* 11fdf13c call 0x11fe1ec0 */
  push32(0x11fdf141u); f_11fe1ec0();
  /* 11fdf141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdf143 jne 0x11fdf156 */
  if (!C.zf) goto L_11fdf156;
  /* 11fdf145 mov ecx, dword ptr [0x120108cc] */
  ECX = (r32((uint32_t)(0x120108cc)));
  /* 11fdf14b push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf14c call dword ptr [0x120113a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a4))), 0x11fdf152u);
  /* 11fdf152 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf154 jmp 0x11fdf15b */
  goto L_11fdf15b;
L_11fdf156:;
  /* 11fdf156 mov eax, 1 */
  EAX = (0x1u);
L_11fdf15b:;
  /* 11fdf15b pop ebp */
  EBP = (pop32());
  /* 11fdf15c ret  */
  ESPCHK(0x11fdf110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x11fdf160 (156 bytes, 48 insns) */
void f_11fdf160(void) {
  FTRACE(0x11fdf160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf161 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf166 mov eax, dword ptr [0x120108c8] */
  EAX = (r32((uint32_t)(0x120108c8)));
  /* 11fdf16b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdf16e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdf175 jmp 0x11fdf180 */
  goto L_11fdf180;
L_11fdf177:;
  /* 11fdf177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf17a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf17d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdf180:;
  /* 11fdf180 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf183 cmp edx, dword ptr [0x120108c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120108c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf189 jge 0x11fdf1d6 */
  if ((C.sf==C.of)) goto L_11fdf1d6;
  /* 11fdf18b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11fdf190 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11fdf195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf198 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fdf19b push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf19c call dword ptr [0x12011398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011398))), 0x11fdf1a2u);
  /* 11fdf1a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fdf1a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf1a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf1ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdf1af push eax */
  push32((uint32_t)(EAX));
  /* 11fdf1b0 call dword ptr [0x12011398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011398))), 0x11fdf1b6u);
  /* 11fdf1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf1b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fdf1bc push edx */
  push32((uint32_t)(EDX));
  /* 11fdf1bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf1bf mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fdf1c4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf1c5 call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fdf1cbu);
  /* 11fdf1cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf1ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf1d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fdf1d4 jmp 0x11fdf177 */
  goto L_11fdf177;
L_11fdf1d6:;
  /* 11fdf1d6 mov edx, dword ptr [0x120108c8] */
  EDX = (r32((uint32_t)(0x120108c8)));
  /* 11fdf1dc push edx */
  push32((uint32_t)(EDX));
  /* 11fdf1dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf1df mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fdf1e4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf1e5 call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fdf1ebu);
  /* 11fdf1eb mov ecx, dword ptr [0x120108cc] */
  ECX = (r32((uint32_t)(0x120108cc)));
  /* 11fdf1f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf1f2 call dword ptr [0x120113a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a4))), 0x11fdf1f8u);
  /* 11fdf1f8 mov esp, ebp */
  ESP = (EBP);
  /* 11fdf1fa pop ebp */
  EBP = (pop32());
  /* 11fdf1fb ret  */
  ESPCHK(0x11fdf160u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11fdf200 (73 bytes, 19 insns) */
void f_11fdf200(void) {
  FTRACE(0x11fdf200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf200 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf201 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf203 cmp dword ptr [0x1200ef1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf20a je 0x11fdf21e */
  if (C.zf) goto L_11fdf21e;
  /* 11fdf20c cmp dword ptr [0x1200ef1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf213 jne 0x11fdf247 */
  if (!C.zf) goto L_11fdf247;
  /* 11fdf215 cmp dword ptr [0x1200ef20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf21c jne 0x11fdf247 */
  if (!C.zf) goto L_11fdf247;
L_11fdf21e:;
  /* 11fdf21e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11fdf223 call 0x11fdf250 */
  push32(0x11fdf228u); f_11fdf250();
  /* 11fdf228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf22b cmp dword ptr [0x1200f0ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f0ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf232 je 0x11fdf23a */
  if (C.zf) goto L_11fdf23a;
  /* 11fdf234 call dword ptr [0x1200f0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f0ec))), 0x11fdf23au);
L_11fdf23a:;
  /* 11fdf23a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11fdf23f call 0x11fdf250 */
  push32(0x11fdf244u); f_11fdf250();
  /* 11fdf244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdf247:;
  /* 11fdf247 pop ebp */
  EBP = (pop32());
  /* 11fdf248 ret  */
  ESPCHK(0x11fdf200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f250 @ 0x11fdf250 (447 bytes, 131 insns) */
void f_11fdf250(void) {
  FTRACE(0x11fdf250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf250 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf251 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf253 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf259 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdf25a push esi */
  push32((uint32_t)(ESI));
  /* 11fdf25b push edi */
  push32((uint32_t)(EDI));
  /* 11fdf25c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fdf263 jmp 0x11fdf26e */
  goto L_11fdf26e;
L_11fdf265:;
  /* 11fdf265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf26b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fdf26e:;
  /* 11fdf26e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf272 jae 0x11fdf287 */
  if (!C.cf) goto L_11fdf287;
  /* 11fdf274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf27a cmp edx, dword ptr [ecx*8 + 0x1200cf50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1200cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf281 jne 0x11fdf285 */
  if (!C.zf) goto L_11fdf285;
  /* 11fdf283 jmp 0x11fdf287 */
  goto L_11fdf287;
L_11fdf285:;
  /* 11fdf285 jmp 0x11fdf265 */
  goto L_11fdf265;
L_11fdf287:;
  /* 11fdf287 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf28a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf28d cmp ecx, dword ptr [eax*8 + 0x1200cf50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1200cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf294 jne 0x11fdf408 */
  if (!C.zf) goto L_11fdf408;
  /* 11fdf29a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf2a1 je 0x11fdf2c4 */
  if (C.zf) goto L_11fdf2c4;
  /* 11fdf2a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf2a6 mov eax, dword ptr [edx*8 + 0x1200cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1200cf54)));
  /* 11fdf2ad push eax */
  push32((uint32_t)(EAX));
  /* 11fdf2ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf2b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf2b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf2b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdf2b6 call 0x11fd9d80 */
  push32(0x11fdf2bbu); f_11fd9d80();
  /* 11fdf2bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf2be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf2c1 jne 0x11fdf2c4 */
  if (!C.zf) goto L_11fdf2c4;
  /* 11fdf2c3 int3  */
  x86_unimpl("int3 @ 0x11fdf2c3");
L_11fdf2c4:;
  /* 11fdf2c4 cmp dword ptr [0x1200ef1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf2cb je 0x11fdf2df */
  if (C.zf) goto L_11fdf2df;
  /* 11fdf2cd cmp dword ptr [0x1200ef1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf2d4 jne 0x11fdf318 */
  if (!C.zf) goto L_11fdf318;
  /* 11fdf2d6 cmp dword ptr [0x1200ef20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf2dd jne 0x11fdf318 */
  if (!C.zf) goto L_11fdf318;
L_11fdf2df:;
  /* 11fdf2df push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf2e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11fdf2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf2e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf2e8 mov eax, dword ptr [edx*8 + 0x1200cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1200cf54)));
  /* 11fdf2ef push eax */
  push32((uint32_t)(EAX));
  /* 11fdf2f0 call 0x11fdf750 */
  push32(0x11fdf2f5u); f_11fdf750();
  /* 11fdf2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf2f8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf2f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf2fc mov edx, dword ptr [ecx*8 + 0x1200cf54] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1200cf54)));
  /* 11fdf303 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf304 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11fdf306 call dword ptr [0x12011418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011418))), 0x11fdf30cu);
  /* 11fdf30c push eax */
  push32((uint32_t)(EAX));
  /* 11fdf30d call dword ptr [0x1201141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201141c))), 0x11fdf313u);
  /* 11fdf313 jmp 0x11fdf408 */
  goto L_11fdf408;
L_11fdf318:;
  /* 11fdf318 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf31f je 0x11fdf408 */
  if (C.zf) goto L_11fdf408;
  /* 11fdf325 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11fdf32a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11fdf330 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf331 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf333 call dword ptr [0x12011434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011434))), 0x11fdf339u);
  /* 11fdf339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdf33b jne 0x11fdf351 */
  if (!C.zf) goto L_11fdf351;
  /* 11fdf33d push 0x1200949c */
  push32((uint32_t)(0x1200949cu));
  /* 11fdf342 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11fdf348 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf349 call 0x11fdf8d0 */
  push32(0x11fdf34eu); f_11fdf8d0();
  /* 11fdf34e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdf351:;
  /* 11fdf351 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11fdf357 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fdf35a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf35d push eax */
  push32((uint32_t)(EAX));
  /* 11fdf35e call 0x11fdf750 */
  push32(0x11fdf363u); f_11fdf750();
  /* 11fdf363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf366 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf369 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf36c jbe 0x11fdf39a */
  if ((C.cf||C.zf)) goto L_11fdf39a;
  /* 11fdf36e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11fdf374 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf375 call 0x11fdf750 */
  push32(0x11fdf37au); f_11fdf750();
  /* 11fdf37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf37d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf380 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11fdf384 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdf387 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fdf389 push 0x12009498 */
  push32((uint32_t)(0x12009498u));
  /* 11fdf38e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf391 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf392 call 0x11fe0140 */
  push32(0x11fdf397u); f_11fe0140();
  /* 11fdf397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdf39a:;
  /* 11fdf39a push 0x12009fd8 */
  push32((uint32_t)(0x12009fd8u));
  /* 11fdf39f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11fdf3a5 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf3a6 call 0x11fdf8d0 */
  push32(0x11fdf3abu); f_11fdf8d0();
  /* 11fdf3ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf3ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf3b1 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf3b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11fdf3b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf3b9 call 0x11fdf8e0 */
  push32(0x11fdf3beu); f_11fdf8e0();
  /* 11fdf3be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf3c1 push 0x12009410 */
  push32((uint32_t)(0x12009410u));
  /* 11fdf3c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11fdf3cc push edx */
  push32((uint32_t)(EDX));
  /* 11fdf3cd call 0x11fdf8e0 */
  push32(0x11fdf3d2u); f_11fdf8e0();
  /* 11fdf3d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf3d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf3d8 mov ecx, dword ptr [eax*8 + 0x1200cf54] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1200cf54)));
  /* 11fdf3df push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf3e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11fdf3e6 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf3e7 call 0x11fdf8e0 */
  push32(0x11fdf3ecu); f_11fdf8e0();
  /* 11fdf3ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf3ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11fdf3f4 push 0x12009fb0 */
  push32((uint32_t)(0x12009fb0u));
  /* 11fdf3f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11fdf3ff push eax */
  push32((uint32_t)(EAX));
  /* 11fdf400 call 0x11fe0080 */
  push32(0x11fdf405u); f_11fe0080();
  /* 11fdf405 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdf408:;
  /* 11fdf408 pop edi */
  EDI = (pop32());
  /* 11fdf409 pop esi */
  ESI = (pop32());
  /* 11fdf40a pop ebx */
  EBX = (pop32());
  /* 11fdf40b mov esp, ebp */
  ESP = (EBP);
  /* 11fdf40d pop ebp */
  EBP = (pop32());
  /* 11fdf40e ret  */
  ESPCHK(0x11fdf250u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11fdf410 (80 bytes, 27 insns) */
void f_11fdf410(void) {
  FTRACE(0x11fdf410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf410 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf411 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf413 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdf41b jmp 0x11fdf426 */
  goto L_11fdf426;
L_11fdf41d:;
  /* 11fdf41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdf426:;
  /* 11fdf426 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf42a jae 0x11fdf43f */
  if (!C.cf) goto L_11fdf43f;
  /* 11fdf42c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf42f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf432 cmp edx, dword ptr [ecx*8 + 0x1200cf50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1200cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf439 jne 0x11fdf43d */
  if (!C.zf) goto L_11fdf43d;
  /* 11fdf43b jmp 0x11fdf43f */
  goto L_11fdf43f;
L_11fdf43d:;
  /* 11fdf43d jmp 0x11fdf41d */
  goto L_11fdf41d;
L_11fdf43f:;
  /* 11fdf43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf445 cmp ecx, dword ptr [eax*8 + 0x1200cf50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1200cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf44c jne 0x11fdf45a */
  if (!C.zf) goto L_11fdf45a;
  /* 11fdf44e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf451 mov eax, dword ptr [edx*8 + 0x1200cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1200cf54)));
  /* 11fdf458 jmp 0x11fdf45c */
  goto L_11fdf45c;
L_11fdf45a:;
  /* 11fdf45a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdf45c:;
  /* 11fdf45c mov esp, ebp */
  ESP = (EBP);
  /* 11fdf45e pop ebp */
  EBP = (pop32());
  /* 11fdf45f ret  */
  ESPCHK(0x11fdf410u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11fdf460 (66 bytes, 28 insns) */
void f_11fdf460(void) {
  FTRACE(0x11fdf460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf460 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf461 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf463 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf467 jne 0x11fdf487 */
  if (!C.zf) goto L_11fdf487;
  /* 11fdf469 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf46d jge 0x11fdf487 */
  if ((C.sf==C.of)) goto L_11fdf487;
  /* 11fdf46f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdf471 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf474 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf475 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf478 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf47c push edx */
  push32((uint32_t)(EDX));
  /* 11fdf47d call 0x11fdf4b0 */
  push32(0x11fdf482u); f_11fdf4b0();
  /* 11fdf482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf485 jmp 0x11fdf49d */
  goto L_11fdf49d;
L_11fdf487:;
  /* 11fdf487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf489 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf48c push eax */
  push32((uint32_t)(EAX));
  /* 11fdf48d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf490 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf494 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf495 call 0x11fdf4b0 */
  push32(0x11fdf49au); f_11fdf4b0();
  /* 11fdf49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdf49d:;
  /* 11fdf49d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf4a0 pop ebp */
  EBP = (pop32());
  /* 11fdf4a1 ret  */
  ESPCHK(0x11fdf460u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11fdf4b0 (194 bytes, 71 insns) */
void f_11fdf4b0(void) {
  FTRACE(0x11fdf4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf4b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf4b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf4b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdf4bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf4c0 je 0x11fdf4d9 */
  if (C.zf) goto L_11fdf4d9;
  /* 11fdf4c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf4c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11fdf4c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf4cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf4ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdf4d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf4d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdf4d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fdf4d9:;
  /* 11fdf4d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf4dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fdf4df:;
  /* 11fdf4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf4e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf4e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdf4e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fdf4ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf4ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf4ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdf4f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fdf4f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf4f9 jbe 0x11fdf511 */
  if ((C.cf||C.zf)) goto L_11fdf511;
  /* 11fdf4fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf4fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf504 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf509 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf50c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdf50f jmp 0x11fdf525 */
  goto L_11fdf525;
L_11fdf511:;
  /* 11fdf511 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf514 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf51a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf51f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf522 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdf525:;
  /* 11fdf525 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf529 ja 0x11fdf4df */
  if ((!C.cf&&!C.zf)) goto L_11fdf4df;
  /* 11fdf52b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf52e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fdf531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf534 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdf53a:;
  /* 11fdf53a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf53d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdf53f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11fdf542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf548 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdf54a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf54c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf54f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11fdf552 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11fdf554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf557 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf55a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdf55d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf563 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdf566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf569 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf56c jb 0x11fdf53a */
  if (C.cf) goto L_11fdf53a;
  /* 11fdf56e mov esp, ebp */
  ESP = (EBP);
  /* 11fdf570 pop ebp */
  EBP = (pop32());
  /* 11fdf571 ret  */
  ESPCHK(0x11fdf4b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11fdf580 (63 bytes, 24 insns) */
void f_11fdf580(void) {
  FTRACE(0x11fdf580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf580 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf581 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf583 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf584 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf588 jne 0x11fdf599 */
  if (!C.zf) goto L_11fdf599;
  /* 11fdf58a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf58e jge 0x11fdf599 */
  if ((C.sf==C.of)) goto L_11fdf599;
  /* 11fdf590 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdf597 jmp 0x11fdf5a0 */
  goto L_11fdf5a0;
L_11fdf599:;
  /* 11fdf599 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdf5a0:;
  /* 11fdf5a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf5a3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf5a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf5a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf5ab push edx */
  push32((uint32_t)(EDX));
  /* 11fdf5ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf5af push eax */
  push32((uint32_t)(EAX));
  /* 11fdf5b0 call 0x11fdf4b0 */
  push32(0x11fdf5b5u); f_11fdf4b0();
  /* 11fdf5b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf5b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf5bb mov esp, ebp */
  ESP = (EBP);
  /* 11fdf5bd pop ebp */
  EBP = (pop32());
  /* 11fdf5be ret  */
  ESPCHK(0x11fdf580u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11fdf5c0 (30 bytes, 14 insns) */
void f_11fdf5c0(void) {
  FTRACE(0x11fdf5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf5c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf5c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf5c8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf5c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf5cc push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf5cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf5d0 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf5d1 call 0x11fdf4b0 */
  push32(0x11fdf5d6u); f_11fdf4b0();
  /* 11fdf5d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf5d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf5dc pop ebp */
  EBP = (pop32());
  /* 11fdf5dd ret  */
  ESPCHK(0x11fdf5c0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11fdf5e0 (72 bytes, 28 insns) */
void f_11fdf5e0(void) {
  FTRACE(0x11fdf5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf5e4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf5e8 jne 0x11fdf601 */
  if (!C.zf) goto L_11fdf601;
  /* 11fdf5ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf5ee jg 0x11fdf601 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fdf601;
  /* 11fdf5f0 jl 0x11fdf5f8 */
  if ((C.sf!=C.of)) goto L_11fdf5f8;
  /* 11fdf5f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf5f6 jae 0x11fdf601 */
  if (!C.cf) goto L_11fdf601;
L_11fdf5f8:;
  /* 11fdf5f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdf5ff jmp 0x11fdf608 */
  goto L_11fdf608;
L_11fdf601:;
  /* 11fdf601 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdf608:;
  /* 11fdf608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf60b push eax */
  push32((uint32_t)(EAX));
  /* 11fdf60c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdf60f push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf610 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf613 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf617 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf61b push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf61c call 0x11fdf630 */
  push32(0x11fdf621u); f_11fdf630();
  /* 11fdf621 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf624 mov esp, ebp */
  ESP = (EBP);
  /* 11fdf626 pop ebp */
  EBP = (pop32());
  /* 11fdf627 ret  */
  ESPCHK(0x11fdf5e0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11fdf630 (242 bytes, 91 insns) */
void f_11fdf630(void) {
  FTRACE(0x11fdf630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf630 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf631 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf633 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdf63c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf640 je 0x11fdf664 */
  if (C.zf) goto L_11fdf664;
  /* 11fdf642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf645 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11fdf648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdf651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf654 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdf656 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf659 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf65c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdf65e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fdf661 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11fdf664:;
  /* 11fdf664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf667 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fdf66a:;
  /* 11fdf66a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdf66d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdf66f push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf670 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf671 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf674 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf678 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf679 call 0x11fe5610 */
  push32(0x11fdf67eu); f_11fe5610();
  /* 11fdf67e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdf681 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdf684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf686 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf687 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf68b push eax */
  push32((uint32_t)(EAX));
  /* 11fdf68c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf68f push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf690 call 0x11fe55a0 */
  push32(0x11fdf695u); f_11fe55a0();
  /* 11fdf695 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fdf698 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11fdf69b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf69f jbe 0x11fdf6b7 */
  if ((C.cf||C.zf)) goto L_11fdf6b7;
  /* 11fdf6a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf6a4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf6a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf6b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdf6b5 jmp 0x11fdf6cb */
  goto L_11fdf6cb;
L_11fdf6b7:;
  /* 11fdf6b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdf6ba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf6c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf6c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdf6cb:;
  /* 11fdf6cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf6cf ja 0x11fdf66a */
  if ((!C.cf&&!C.zf)) goto L_11fdf66a;
  /* 11fdf6d1 jb 0x11fdf6d9 */
  if (C.cf) goto L_11fdf6d9;
  /* 11fdf6d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf6d7 ja 0x11fdf66a */
  if ((!C.cf&&!C.zf)) goto L_11fdf66a;
L_11fdf6d9:;
  /* 11fdf6d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6dc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fdf6df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdf6e8:;
  /* 11fdf6e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdf6ed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11fdf6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf6f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf6f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdf6f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fdf6fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf6fd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11fdf700 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11fdf702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdf705 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdf70b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf70e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdf714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdf717 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf71a jb 0x11fdf6e8 */
  if (C.cf) goto L_11fdf6e8;
  /* 11fdf71c mov esp, ebp */
  ESP = (EBP);
  /* 11fdf71e pop ebp */
  EBP = (pop32());
  /* 11fdf71f ret 0x14 */
  ESPCHK(0x11fdf630u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11fdf730 (31 bytes, 15 insns) */
void f_11fdf730(void) {
  FTRACE(0x11fdf730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf730 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf731 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf735 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdf738 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf739 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf73c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf73d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf740 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf744 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf745 call 0x11fdf630 */
  push32(0x11fdf74au); f_11fdf630();
  /* 11fdf74a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf74d pop ebp */
  EBP = (pop32());
  /* 11fdf74e ret  */
  ESPCHK(0x11fdf730u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11fdf750 (123 bytes, 44 insns) */
void f_11fdf750(void) {
  FTRACE(0x11fdf750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf750 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf754 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf75a je 0x11fdf770 */
  if (C.zf) goto L_11fdf770;
L_11fdf75c:;
  /* 11fdf75c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11fdf75e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fdf75f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fdf761 je 0x11fdf7a3 */
  if (C.zf) goto L_11fdf7a3;
  /* 11fdf763 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf769 jne 0x11fdf75c */
  if (!C.zf) goto L_11fdf75c;
  /* 11fdf76b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11fdf770:;
  /* 11fdf770 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fdf772 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11fdf777 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf779 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf77c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf77e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf781 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11fdf786 je 0x11fdf770 */
  if (C.zf) goto L_11fdf770;
  /* 11fdf788 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fdf78b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fdf78d je 0x11fdf7c1 */
  if (C.zf) goto L_11fdf7c1;
  /* 11fdf78f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11fdf791 je 0x11fdf7b7 */
  if (C.zf) goto L_11fdf7b7;
  /* 11fdf793 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11fdf798 je 0x11fdf7ad */
  if (C.zf) goto L_11fdf7ad;
  /* 11fdf79a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11fdf79f je 0x11fdf7a3 */
  if (C.zf) goto L_11fdf7a3;
  /* 11fdf7a1 jmp 0x11fdf770 */
  goto L_11fdf770;
L_11fdf7a3:;
  /* 11fdf7a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11fdf7a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf7aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf7ac ret  */
  ESPCHK(0x11fdf750u, _esp0);
  ESP += 4; return;
L_11fdf7ad:;
  /* 11fdf7ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11fdf7b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf7b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf7b6 ret  */
  ESPCHK(0x11fdf750u, _esp0);
  ESP += 4; return;
L_11fdf7b7:;
  /* 11fdf7b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11fdf7ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf7be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf7c0 ret  */
  ESPCHK(0x11fdf750u, _esp0);
  ESP += 4; return;
L_11fdf7c1:;
  /* 11fdf7c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11fdf7c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf7c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf7ca ret  */
  ESPCHK(0x11fdf750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x11fdf7d0 (249 bytes, 93 insns) */
void f_11fdf7d0(void) {
  FTRACE(0x11fdf7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf7d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf7d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdf7d7 push esi */
  push32((uint32_t)(ESI));
  /* 11fdf7d8 push edi */
  push32((uint32_t)(EDI));
  /* 11fdf7d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11fdf7dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fdf7df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11fdf7e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11fdf7e5:;
  /* 11fdf7e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf7e9 jne 0x11fdf809 */
  if (!C.zf) goto L_11fdf809;
  /* 11fdf7eb push 0x1200a010 */
  push32((uint32_t)(0x1200a010u));
  /* 11fdf7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf7f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11fdf7f4 push 0x1200a004 */
  push32((uint32_t)(0x1200a004u));
  /* 11fdf7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdf7fb call 0x11fd9d80 */
  push32(0x11fdf800u); f_11fd9d80();
  /* 11fdf800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf803 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf806 jne 0x11fdf809 */
  if (!C.zf) goto L_11fdf809;
  /* 11fdf808 int3  */
  x86_unimpl("int3 @ 0x11fdf808");
L_11fdf809:;
  /* 11fdf809 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf80b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdf80d jne 0x11fdf7e5 */
  if (!C.zf) goto L_11fdf7e5;
L_11fdf80f:;
  /* 11fdf80f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf813 jne 0x11fdf833 */
  if (!C.zf) goto L_11fdf833;
  /* 11fdf815 push 0x12009ff4 */
  push32((uint32_t)(0x12009ff4u));
  /* 11fdf81a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf81c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11fdf81e push 0x1200a004 */
  push32((uint32_t)(0x1200a004u));
  /* 11fdf823 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdf825 call 0x11fd9d80 */
  push32(0x11fdf82au); f_11fd9d80();
  /* 11fdf82a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf82d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf830 jne 0x11fdf833 */
  if (!C.zf) goto L_11fdf833;
  /* 11fdf832 int3  */
  x86_unimpl("int3 @ 0x11fdf832");
L_11fdf833:;
  /* 11fdf833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdf837 jne 0x11fdf80f */
  if (!C.zf) goto L_11fdf80f;
  /* 11fdf839 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf83c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11fdf843 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf849 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fdf84c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdf852 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fdf854 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf857 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdf85a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fdf85d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fdf860 push edx */
  push32((uint32_t)(EDX));
  /* 11fdf861 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdf864 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf865 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf868 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdf869 call 0x11fe5910 */
  push32(0x11fdf86eu); f_11fe5910();
  /* 11fdf86e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf871 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fdf874 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf877 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdf87a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf87d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf880 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fdf883 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf886 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf88a jl 0x11fdf8ae */
  if ((C.sf!=C.of)) goto L_11fdf8ae;
  /* 11fdf88c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf88f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdf891 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11fdf894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf896 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdf89c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11fdf89f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf8a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdf8a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf8a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf8aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fdf8ac jmp 0x11fdf8bf */
  goto L_11fdf8bf;
L_11fdf8ae:;
  /* 11fdf8ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdf8b1 push eax */
  push32((uint32_t)(EAX));
  /* 11fdf8b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf8b4 call 0x11fe5690 */
  push32(0x11fdf8b9u); f_11fe5690();
  /* 11fdf8b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf8bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11fdf8bf:;
  /* 11fdf8bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fdf8c2 pop edi */
  EDI = (pop32());
  /* 11fdf8c3 pop esi */
  ESI = (pop32());
  /* 11fdf8c4 pop ebx */
  EBX = (pop32());
  /* 11fdf8c5 mov esp, ebp */
  ESP = (EBP);
  /* 11fdf8c7 pop ebp */
  EBP = (pop32());
  /* 11fdf8c8 ret  */
  ESPCHK(0x11fdf7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x11fdf8d0 (7 bytes, 3 insns) */
void f_11fdf8d0(void) {
  FTRACE(0x11fdf8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf8d0 push edi */
  push32((uint32_t)(EDI));
  /* 11fdf8d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11fdf8d5 jmp 0x11fdf941 */
  jmp_ind(0x11fdf941u); return;
}

/* FUN_1000f8e0 @ 0x11fdf8e0 (224 bytes, 84 insns) */
void f_11fdf8e0(void) {
  FTRACE(0x11fdf8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf8e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fdf8e4 push edi */
  push32((uint32_t)(EDI));
  /* 11fdf8e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf8eb je 0x11fdf8fc */
  if (C.zf) goto L_11fdf8fc;
L_11fdf8ed:;
  /* 11fdf8ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11fdf8ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fdf8f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fdf8f2 je 0x11fdf92f */
  if (C.zf) goto L_11fdf92f;
  /* 11fdf8f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf8fa jne 0x11fdf8ed */
  if (!C.zf) goto L_11fdf8ed;
L_11fdf8fc:;
  /* 11fdf8fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fdf8fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11fdf903 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf905 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf908 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf90a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf90d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11fdf912 je 0x11fdf8fc */
  if (C.zf) goto L_11fdf8fc;
  /* 11fdf914 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fdf917 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fdf919 je 0x11fdf93e */
  if (C.zf) goto L_11fdf93e;
  /* 11fdf91b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11fdf91d je 0x11fdf939 */
  if (C.zf) goto L_11fdf939;
  /* 11fdf91f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11fdf924 je 0x11fdf934 */
  if (C.zf) goto L_11fdf934;
  /* 11fdf926 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11fdf92b je 0x11fdf92f */
  if (C.zf) goto L_11fdf92f;
  /* 11fdf92d jmp 0x11fdf8fc */
  goto L_11fdf8fc;
L_11fdf92f:;
  /* 11fdf92f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11fdf932 jmp 0x11fdf941 */
  goto L_11fdf941;
L_11fdf934:;
  /* 11fdf934 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11fdf937 jmp 0x11fdf941 */
  goto L_11fdf941;
L_11fdf939:;
  /* 11fdf939 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11fdf93c jmp 0x11fdf941 */
  goto L_11fdf941;
L_11fdf93e:;
  /* 11fdf93e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11fdf941:;
  /* 11fdf941 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fdf945 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf94b je 0x11fdf966 */
  if (C.zf) goto L_11fdf966;
L_11fdf94d:;
  /* 11fdf94d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fdf94f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fdf950 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11fdf952 je 0x11fdf9b8 */
  if (C.zf) goto L_11fdf9b8;
  /* 11fdf954 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11fdf956 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fdf957 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11fdf95d jne 0x11fdf94d */
  if (!C.zf) goto L_11fdf94d;
  /* 11fdf95f jmp 0x11fdf966 */
  goto L_11fdf966;
L_11fdf961:;
  /* 11fdf961 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fdf963 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11fdf966:;
  /* 11fdf966 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11fdf96b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fdf96d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf96f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf972 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdf974 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdf976 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf979 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11fdf97e je 0x11fdf961 */
  if (C.zf) goto L_11fdf961;
  /* 11fdf980 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11fdf982 je 0x11fdf9b8 */
  if (C.zf) goto L_11fdf9b8;
  /* 11fdf984 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11fdf986 je 0x11fdf9af */
  if (C.zf) goto L_11fdf9af;
  /* 11fdf988 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11fdf98e je 0x11fdf9a2 */
  if (C.zf) goto L_11fdf9a2;
  /* 11fdf990 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11fdf996 je 0x11fdf99a */
  if (C.zf) goto L_11fdf99a;
  /* 11fdf998 jmp 0x11fdf961 */
  goto L_11fdf961;
L_11fdf99a:;
  /* 11fdf99a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fdf99c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fdf9a0 pop edi */
  EDI = (pop32());
  /* 11fdf9a1 ret  */
  ESPCHK(0x11fdf8e0u, _esp0);
  ESP += 4; return;
L_11fdf9a2:;
  /* 11fdf9a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11fdf9a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fdf9a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11fdf9ad pop edi */
  EDI = (pop32());
  /* 11fdf9ae ret  */
  ESPCHK(0x11fdf8e0u, _esp0);
  ESP += 4; return;
L_11fdf9af:;
  /* 11fdf9af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11fdf9b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fdf9b6 pop edi */
  EDI = (pop32());
  /* 11fdf9b7 ret  */
  ESPCHK(0x11fdf8e0u, _esp0);
  ESP += 4; return;
L_11fdf9b8:;
  /* 11fdf9b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11fdf9ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fdf9be pop edi */
  EDI = (pop32());
  /* 11fdf9bf ret  */
  ESPCHK(0x11fdf8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9c0 @ 0x11fdf9c0 (243 bytes, 91 insns) */
void f_11fdf9c0(void) {
  FTRACE(0x11fdf9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdf9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdf9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdf9c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdf9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdf9c7 push esi */
  push32((uint32_t)(ESI));
  /* 11fdf9c8 push edi */
  push32((uint32_t)(EDI));
  /* 11fdf9c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11fdf9cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fdf9cf:;
  /* 11fdf9cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf9d3 jne 0x11fdf9f3 */
  if (!C.zf) goto L_11fdf9f3;
  /* 11fdf9d5 push 0x1200a010 */
  push32((uint32_t)(0x1200a010u));
  /* 11fdf9da push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdf9dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11fdf9de push 0x1200a020 */
  push32((uint32_t)(0x1200a020u));
  /* 11fdf9e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdf9e5 call 0x11fd9d80 */
  push32(0x11fdf9eau); f_11fd9d80();
  /* 11fdf9ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdf9ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf9f0 jne 0x11fdf9f3 */
  if (!C.zf) goto L_11fdf9f3;
  /* 11fdf9f2 int3  */
  x86_unimpl("int3 @ 0x11fdf9f2");
L_11fdf9f3:;
  /* 11fdf9f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdf9f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdf9f7 jne 0x11fdf9cf */
  if (!C.zf) goto L_11fdf9cf;
L_11fdf9f9:;
  /* 11fdf9f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdf9fd jne 0x11fdfa1d */
  if (!C.zf) goto L_11fdfa1d;
  /* 11fdf9ff push 0x12009ff4 */
  push32((uint32_t)(0x12009ff4u));
  /* 11fdfa04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdfa06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11fdfa08 push 0x1200a020 */
  push32((uint32_t)(0x1200a020u));
  /* 11fdfa0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdfa0f call 0x11fd9d80 */
  push32(0x11fdfa14u); f_11fd9d80();
  /* 11fdfa14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfa17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfa1a jne 0x11fdfa1d */
  if (!C.zf) goto L_11fdfa1d;
  /* 11fdfa1c int3  */
  x86_unimpl("int3 @ 0x11fdfa1c");
L_11fdfa1d:;
  /* 11fdfa1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdfa1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdfa21 jne 0x11fdf9f9 */
  if (!C.zf) goto L_11fdf9f9;
  /* 11fdfa23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11fdfa2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfa33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fdfa36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfa3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fdfa3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfa44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11fdfa47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdfa4a push ecx */
  push32((uint32_t)(ECX));
  /* 11fdfa4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdfa4e push edx */
  push32((uint32_t)(EDX));
  /* 11fdfa4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa52 push eax */
  push32((uint32_t)(EAX));
  /* 11fdfa53 call 0x11fe5910 */
  push32(0x11fdfa58u); f_11fe5910();
  /* 11fdfa58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfa5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fdfa5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdfa64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfa67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fdfa6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfa74 jl 0x11fdfa98 */
  if ((C.sf!=C.of)) goto L_11fdfa98;
  /* 11fdfa76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdfa7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fdfa7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdfa80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdfa86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fdfa89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdfa8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfa91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fdfa96 jmp 0x11fdfaa9 */
  goto L_11fdfaa9;
L_11fdfa98:;
  /* 11fdfa98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdfa9b push edx */
  push32((uint32_t)(EDX));
  /* 11fdfa9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdfa9e call 0x11fe5690 */
  push32(0x11fdfaa3u); f_11fe5690();
  /* 11fdfaa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfaa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11fdfaa9:;
  /* 11fdfaa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fdfaac pop edi */
  EDI = (pop32());
  /* 11fdfaad pop esi */
  ESI = (pop32());
  /* 11fdfaae pop ebx */
  EBX = (pop32());
  /* 11fdfaaf mov esp, ebp */
  ESP = (EBP);
  /* 11fdfab1 pop ebp */
  EBP = (pop32());
  /* 11fdfab2 ret  */
  ESPCHK(0x11fdf9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x11fdfac0 (47 bytes, 17 insns) */
void f_11fdfac0(void) {
  FTRACE(0x11fdfac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdfac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdfac1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfac6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11fdfaca jb 0x11fdfae0 */
  if (C.cf) goto L_11fdfae0;
L_11fdfacc:;
  /* 11fdfacc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfad2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfad7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11fdfad9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfade jae 0x11fdfacc */
  if (!C.cf) goto L_11fdfacc;
L_11fdfae0:;
  /* 11fdfae0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfae2 mov eax, esp */
  EAX = (ESP);
  /* 11fdfae4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11fdfae6 mov esp, ecx */
  ESP = (ECX);
  /* 11fdfae8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdfaea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdfaed push eax */
  push32((uint32_t)(EAX));
  /* 11fdfaee ret  */
  ESPCHK(0x11fdfac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x11fdfaf0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11fdfaf0(void) {
  FTRACE(0x11fdfaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdfaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdfaf1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdfaf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfaf6 push esi */
  push32((uint32_t)(ESI));
  /* 11fdfaf7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfafb je 0x11fdfb03 */
  if (C.zf) goto L_11fdfb03;
  /* 11fdfafd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb01 jne 0x11fdfb08 */
  if (!C.zf) goto L_11fdfb08;
L_11fdfb03:;
  /* 11fdfb03 jmp 0x11fdfcd8 */
  goto L_11fdfcd8;
L_11fdfb08:;
  /* 11fdfb08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb0c je 0x11fdfb24 */
  if (C.zf) goto L_11fdfb24;
  /* 11fdfb0e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb12 je 0x11fdfb24 */
  if (C.zf) goto L_11fdfb24;
  /* 11fdfb14 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb18 je 0x11fdfb24 */
  if (C.zf) goto L_11fdfb24;
  /* 11fdfb1a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb1e jne 0x11fdfc01 */
  if (!C.zf) goto L_11fdfc01;
L_11fdfb24:;
  /* 11fdfb24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfb26 call 0x11fdb0c0 */
  push32(0x11fdfb2bu); f_11fdb0c0();
  /* 11fdfb2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfb2e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb32 je 0x11fdfb3a */
  if (C.zf) goto L_11fdfb3a;
  /* 11fdfb34 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb38 jne 0x11fdfb7f */
  if (!C.zf) goto L_11fdfb7f;
L_11fdfb3a:;
  /* 11fdfb3a cmp dword ptr [0x1200f100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb41 jne 0x11fdfb7f */
  if (!C.zf) goto L_11fdfb7f;
  /* 11fdfb43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfb45 push 0x11fdfd20 */
  push32((uint32_t)(0x11fdfd20u));
  /* 11fdfb4a call dword ptr [0x12011394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011394))), 0x11fdfb50u);
  /* 11fdfb50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb53 jne 0x11fdfb61 */
  if (!C.zf) goto L_11fdfb61;
  /* 11fdfb55 mov dword ptr [0x1200f100], 1 */
  w32((uint32_t)(0x1200f100), (0x1u));
  /* 11fdfb5f jmp 0x11fdfb7f */
  goto L_11fdfb7f;
L_11fdfb61:;
  /* 11fdfb61 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fdfb67u);
  /* 11fdfb67 mov esi, eax */
  ESI = (EAX);
  /* 11fdfb69 call 0x11fe6860 */
  push32(0x11fdfb6eu); f_11fe6860();
  /* 11fdfb6e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11fdfb70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfb72 call 0x11fdb160 */
  push32(0x11fdfb77u); f_11fdb160();
  /* 11fdfb77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfb7a jmp 0x11fdfcd8 */
  goto L_11fdfcd8;
L_11fdfb7f:;
  /* 11fdfb7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfb82 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fdfb85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdfb88 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfb8b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fdfb8e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfb92 ja 0x11fdfbf2 */
  if ((!C.cf&&!C.zf)) goto L_11fdfbf2;
  /* 11fdfb94 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdfb97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdfb99 mov dl, byte ptr [eax + 0x11fdfcff] */
  DL = (r8((uint32_t)(EAX + 0x11fdfcff)));
  /* 11fdfb9f jmp dword ptr [edx*4 + 0x11fdfceb] */
  switch (EDX) {
    case 0: goto L_11fdfba6;
    case 1: goto L_11fdfbe0;
    case 2: goto L_11fdfbba;
    case 3: goto L_11fdfbcd;
    case 4: goto L_11fdfbf2;
    default: x86_unimpl("switch@0x11fdfb9f out of table"); return;
  }
L_11fdfba6:;
  /* 11fdfba6 mov ecx, dword ptr [0x1200f0f0] */
  ECX = (r32((uint32_t)(0x1200f0f0)));
  /* 11fdfbac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fdfbaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfbb2 mov dword ptr [0x1200f0f0], edx */
  w32((uint32_t)(0x1200f0f0), (EDX));
  /* 11fdfbb8 jmp 0x11fdfbf2 */
  goto L_11fdfbf2;
L_11fdfbba:;
  /* 11fdfbba mov eax, dword ptr [0x1200f0f4] */
  EAX = (r32((uint32_t)(0x1200f0f4)));
  /* 11fdfbbf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfbc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfbc5 mov dword ptr [0x1200f0f4], ecx */
  w32((uint32_t)(0x1200f0f4), (ECX));
  /* 11fdfbcb jmp 0x11fdfbf2 */
  goto L_11fdfbf2;
L_11fdfbcd:;
  /* 11fdfbcd mov edx, dword ptr [0x1200f0f8] */
  EDX = (r32((uint32_t)(0x1200f0f8)));
  /* 11fdfbd3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fdfbd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfbd9 mov dword ptr [0x1200f0f8], eax */
  w32((uint32_t)(0x1200f0f8), (EAX));
  /* 11fdfbde jmp 0x11fdfbf2 */
  goto L_11fdfbf2;
L_11fdfbe0:;
  /* 11fdfbe0 mov ecx, dword ptr [0x1200f0fc] */
  ECX = (r32((uint32_t)(0x1200f0fc)));
  /* 11fdfbe6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fdfbe9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfbec mov dword ptr [0x1200f0fc], edx */
  w32((uint32_t)(0x1200f0fc), (EDX));
L_11fdfbf2:;
  /* 11fdfbf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfbf4 call 0x11fdb160 */
  push32(0x11fdfbf9u); f_11fdb160();
  /* 11fdfbf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfbfc jmp 0x11fdfcd3 */
  goto L_11fdfcd3;
L_11fdfc01:;
  /* 11fdfc01 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc05 je 0x11fdfc18 */
  if (C.zf) goto L_11fdfc18;
  /* 11fdfc07 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc0b je 0x11fdfc18 */
  if (C.zf) goto L_11fdfc18;
  /* 11fdfc0d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc11 je 0x11fdfc18 */
  if (C.zf) goto L_11fdfc18;
  /* 11fdfc13 jmp 0x11fdfcd8 */
  goto L_11fdfcd8;
L_11fdfc18:;
  /* 11fdfc18 call 0x11fddec0 */
  push32(0x11fdfc1du); f_11fddec0();
  /* 11fdfc1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdfc20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfc23 cmp dword ptr [eax + 0x50], 0x1200d240 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1200d240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc2a jne 0x11fdfc75 */
  if (!C.zf) goto L_11fdfc75;
  /* 11fdfc2c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11fdfc31 push 0x1200a02c */
  push32((uint32_t)(0x1200a02cu));
  /* 11fdfc36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdfc38 mov ecx, dword ptr [0x1200d2c0] */
  ECX = (r32((uint32_t)(0x1200d2c0)));
  /* 11fdfc3e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdfc3f call 0x11fdb1c0 */
  push32(0x11fdfc44u); f_11fdb1c0();
  /* 11fdfc44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfc47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfc4a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11fdfc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfc50 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc54 je 0x11fdfc73 */
  if (C.zf) goto L_11fdfc73;
  /* 11fdfc56 mov ecx, dword ptr [0x1200d2c0] */
  ECX = (r32((uint32_t)(0x1200d2c0)));
  /* 11fdfc5c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdfc5d push 0x1200d240 */
  push32((uint32_t)(0x1200d240u));
  /* 11fdfc62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfc65 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11fdfc68 push eax */
  push32((uint32_t)(EAX));
  /* 11fdfc69 call 0x11fe5260 */
  push32(0x11fdfc6eu); f_11fe5260();
  /* 11fdfc6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfc71 jmp 0x11fdfc75 */
  goto L_11fdfc75;
L_11fdfc73:;
  /* 11fdfc73 jmp 0x11fdfcd8 */
  goto L_11fdfcd8;
L_11fdfc75:;
  /* 11fdfc75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfc78 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11fdfc7b push edx */
  push32((uint32_t)(EDX));
  /* 11fdfc7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfc7f push eax */
  push32((uint32_t)(EAX));
  /* 11fdfc80 call 0x11fe0000 */
  push32(0x11fdfc85u); f_11fe0000();
  /* 11fdfc85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfc88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdfc8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfc8f jne 0x11fdfc93 */
  if (!C.zf) goto L_11fdfc93;
  /* 11fdfc91 jmp 0x11fdfcd8 */
  goto L_11fdfcd8;
L_11fdfc93:;
  /* 11fdfc93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfc96 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fdfc99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fdfc9c:;
  /* 11fdfc9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfc9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdfca2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfca5 jne 0x11fdfcd3 */
  if (!C.zf) goto L_11fdfcd3;
  /* 11fdfca7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfcaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdfcad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fdfcb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfcb3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfcb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fdfcb9 mov edx, dword ptr [0x1200d2c4] */
  EDX = (r32((uint32_t)(0x1200d2c4)));
  /* 11fdfcbf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fdfcc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfcc5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11fdfcc8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfcca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfccd jb 0x11fdfcd1 */
  if (C.cf) goto L_11fdfcd1;
  /* 11fdfccf jmp 0x11fdfcd3 */
  goto L_11fdfcd3;
L_11fdfcd1:;
  /* 11fdfcd1 jmp 0x11fdfc9c */
  goto L_11fdfc9c;
L_11fdfcd3:;
  /* 11fdfcd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdfcd6 jmp 0x11fdfce6 */
  goto L_11fdfce6;
L_11fdfcd8:;
  /* 11fdfcd8 call 0x11fe6850 */
  push32(0x11fdfcddu); f_11fe6850();
  /* 11fdfcdd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11fdfce3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fdfce6:;
  /* 11fdfce6 pop esi */
  ESI = (pop32());
  /* 11fdfce7 mov esp, ebp */
  ESP = (EBP);
  /* 11fdfce9 pop ebp */
  EBP = (pop32());
  /* 11fdfcea ret  */
  ESPCHK(0x11fdfaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd20 @ 0x11fdfd20 (146 bytes, 45 insns) */
void f_11fdfd20(void) {
  FTRACE(0x11fdfd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdfd20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdfd21 mov ebp, esp */
  EBP = (ESP);
  /* 11fdfd23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfd26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfd28 call 0x11fdb0c0 */
  push32(0x11fdfd2du); f_11fdb0c0();
  /* 11fdfd2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfd30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfd34 jne 0x11fdfd4e */
  if (!C.zf) goto L_11fdfd4e;
  /* 11fdfd36 mov dword ptr [ebp - 8], 0x1200f0f0 */
  w32((uint32_t)(EBP + -0x8), (0x1200f0f0u));
  /* 11fdfd3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfd40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdfd42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fdfd45 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fdfd4c jmp 0x11fdfd64 */
  goto L_11fdfd64;
L_11fdfd4e:;
  /* 11fdfd4e mov dword ptr [ebp - 8], 0x1200f0f4 */
  w32((uint32_t)(EBP + -0x8), (0x1200f0f4u));
  /* 11fdfd55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfd58 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdfd5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfd5d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11fdfd64:;
  /* 11fdfd64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfd68 jne 0x11fdfd78 */
  if (!C.zf) goto L_11fdfd78;
  /* 11fdfd6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfd6c call 0x11fdb160 */
  push32(0x11fdfd71u); f_11fdb160();
  /* 11fdfd71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfd74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdfd76 jmp 0x11fdfdac */
  goto L_11fdfdac;
L_11fdfd78:;
  /* 11fdfd78 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfd7c je 0x11fdfd9d */
  if (C.zf) goto L_11fdfd9d;
  /* 11fdfd7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdfd81 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11fdfd87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfd89 call 0x11fdb160 */
  push32(0x11fdfd8eu); f_11fdb160();
  /* 11fdfd8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfd91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfd94 push edx */
  push32((uint32_t)(EDX));
  /* 11fdfd95 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11fdfd98u);
  /* 11fdfd98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfd9b jmp 0x11fdfda7 */
  goto L_11fdfda7;
L_11fdfd9d:;
  /* 11fdfd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfd9f call 0x11fdb160 */
  push32(0x11fdfda4u); f_11fdb160();
  /* 11fdfda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdfda7:;
  /* 11fdfda7 mov eax, 1 */
  EAX = (0x1u);
L_11fdfdac:;
  /* 11fdfdac mov esp, ebp */
  ESP = (EBP);
  /* 11fdfdae pop ebp */
  EBP = (pop32());
  /* 11fdfdaf ret 4 */
  ESPCHK(0x11fdfd20u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fdc0 @ 0x11fdfdc0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11fdfdc0(void) {
  FTRACE(0x11fdfdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdfdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdfdc1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdfdc3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfdc6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fdfdcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfdd0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fdfdd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fdfdd6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdfdd9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fdfddc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfde0 ja 0x11fdfe8e */
  if ((!C.cf&&!C.zf)) goto L_11fdfe8e;
  /* 11fdfde6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fdfde9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdfdeb mov dl, byte ptr [eax + 0x11fdffe2] */
  DL = (r8((uint32_t)(EAX + 0x11fdffe2)));
  /* 11fdfdf1 jmp dword ptr [edx*4 + 0x11fdffca] */
  switch (EDX) {
    case 0: goto L_11fdfdf8;
    case 1: goto L_11fdfe63;
    case 2: goto L_11fdfe49;
    case 3: goto L_11fdfe15;
    case 4: goto L_11fdfe2f;
    case 5: goto L_11fdfe8e;
    default: x86_unimpl("switch@0x11fdfdf1 out of table"); return;
  }
L_11fdfdf8:;
  /* 11fdfdf8 mov dword ptr [ebp - 0x18], 0x1200f0f0 */
  w32((uint32_t)(EBP + -0x18), (0x1200f0f0u));
  /* 11fdfdff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdfe02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdfe04 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdfe07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdfe0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfe10 jmp 0x11fdfe96 */
  goto L_11fdfe96;
L_11fdfe15:;
  /* 11fdfe15 mov dword ptr [ebp - 0x18], 0x1200f0f4 */
  w32((uint32_t)(EBP + -0x18), (0x1200f0f4u));
  /* 11fdfe1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdfe1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdfe21 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdfe24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdfe27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfe2d jmp 0x11fdfe96 */
  goto L_11fdfe96;
L_11fdfe2f:;
  /* 11fdfe2f mov dword ptr [ebp - 0x18], 0x1200f0f8 */
  w32((uint32_t)(EBP + -0x18), (0x1200f0f8u));
  /* 11fdfe36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdfe39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdfe3b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdfe3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdfe41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfe47 jmp 0x11fdfe96 */
  goto L_11fdfe96;
L_11fdfe49:;
  /* 11fdfe49 mov dword ptr [ebp - 0x18], 0x1200f0fc */
  w32((uint32_t)(EBP + -0x18), (0x1200f0fcu));
  /* 11fdfe50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdfe53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdfe55 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdfe58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdfe5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdfe61 jmp 0x11fdfe96 */
  goto L_11fdfe96;
L_11fdfe63:;
  /* 11fdfe63 call 0x11fddec0 */
  push32(0x11fdfe68u); f_11fddec0();
  /* 11fdfe68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdfe6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfe6e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11fdfe71 push edx */
  push32((uint32_t)(EDX));
  /* 11fdfe72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdfe75 push eax */
  push32((uint32_t)(EAX));
  /* 11fdfe76 call 0x11fe0000 */
  push32(0x11fdfe7bu); f_11fe0000();
  /* 11fdfe7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdfe81 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fdfe84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdfe87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdfe89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdfe8c jmp 0x11fdfe96 */
  goto L_11fdfe96;
L_11fdfe8e:;
  /* 11fdfe8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdfe91 jmp 0x11fdffc6 */
  goto L_11fdffc6;
L_11fdfe96:;
  /* 11fdfe96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfe9a je 0x11fdfea6 */
  if (C.zf) goto L_11fdfea6;
  /* 11fdfe9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfe9e call 0x11fdb0c0 */
  push32(0x11fdfea3u); f_11fdb0c0();
  /* 11fdfea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdfea6:;
  /* 11fdfea6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfeaa jne 0x11fdfec3 */
  if (!C.zf) goto L_11fdfec3;
  /* 11fdfeac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfeb0 je 0x11fdfebc */
  if (C.zf) goto L_11fdfebc;
  /* 11fdfeb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfeb4 call 0x11fdb160 */
  push32(0x11fdfeb9u); f_11fdb160();
  /* 11fdfeb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdfebc:;
  /* 11fdfebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdfebe jmp 0x11fdffc6 */
  goto L_11fdffc6;
L_11fdfec3:;
  /* 11fdfec3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfec7 jne 0x11fdfee0 */
  if (!C.zf) goto L_11fdfee0;
  /* 11fdfec9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfecd je 0x11fdfed9 */
  if (C.zf) goto L_11fdfed9;
  /* 11fdfecf push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdfed1 call 0x11fdb160 */
  push32(0x11fdfed6u); f_11fdb160();
  /* 11fdfed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdfed9:;
  /* 11fdfed9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fdfedb call 0x11fde230 */
  push32(0x11fdfee0u); f_11fde230();
L_11fdfee0:;
  /* 11fdfee0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfee4 je 0x11fdfef2 */
  if (C.zf) goto L_11fdfef2;
  /* 11fdfee6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfeea je 0x11fdfef2 */
  if (C.zf) goto L_11fdfef2;
  /* 11fdfeec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdfef0 jne 0x11fdff1e */
  if (!C.zf) goto L_11fdff1e;
L_11fdfef2:;
  /* 11fdfef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfef5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11fdfef8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fdfefb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdfefe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11fdff05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff09 jne 0x11fdff1e */
  if (!C.zf) goto L_11fdff1e;
  /* 11fdff0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdff0e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11fdff11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fdff14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdff17 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11fdff1e:;
  /* 11fdff1e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff22 jne 0x11fdff60 */
  if (!C.zf) goto L_11fdff60;
  /* 11fdff24 mov eax, dword ptr [0x1200d2b8] */
  EAX = (r32((uint32_t)(0x1200d2b8)));
  /* 11fdff29 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fdff2c jmp 0x11fdff37 */
  goto L_11fdff37;
L_11fdff2e:;
  /* 11fdff2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdff31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdff34 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fdff37:;
  /* 11fdff37 mov edx, dword ptr [0x1200d2b8] */
  EDX = (r32((uint32_t)(0x1200d2b8)));
  /* 11fdff3d add edx, dword ptr [0x1200d2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdff43 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff46 jge 0x11fdff5e */
  if ((C.sf==C.of)) goto L_11fdff5e;
  /* 11fdff48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdff4b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fdff4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdff51 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11fdff54 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11fdff5c jmp 0x11fdff2e */
  goto L_11fdff2e;
L_11fdff5e:;
  /* 11fdff5e jmp 0x11fdff69 */
  goto L_11fdff69;
L_11fdff60:;
  /* 11fdff60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdff63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fdff69:;
  /* 11fdff69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff6d je 0x11fdff79 */
  if (C.zf) goto L_11fdff79;
  /* 11fdff6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdff71 call 0x11fdb160 */
  push32(0x11fdff76u); f_11fdb160();
  /* 11fdff76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdff79:;
  /* 11fdff79 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff7d jne 0x11fdff90 */
  if (!C.zf) goto L_11fdff90;
  /* 11fdff7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdff82 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11fdff85 push edx */
  push32((uint32_t)(EDX));
  /* 11fdff86 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fdff88 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11fdff8bu);
  /* 11fdff8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdff8e jmp 0x11fdff9a */
  goto L_11fdff9a;
L_11fdff90:;
  /* 11fdff90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdff93 push eax */
  push32((uint32_t)(EAX));
  /* 11fdff94 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11fdff97u);
  /* 11fdff97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdff9a:;
  /* 11fdff9a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdff9e je 0x11fdffac */
  if (C.zf) goto L_11fdffac;
  /* 11fdffa0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdffa4 je 0x11fdffac */
  if (C.zf) goto L_11fdffac;
  /* 11fdffa6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdffaa jne 0x11fdffc4 */
  if (!C.zf) goto L_11fdffc4;
L_11fdffac:;
  /* 11fdffac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdffaf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdffb2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11fdffb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdffb9 jne 0x11fdffc4 */
  if (!C.zf) goto L_11fdffc4;
  /* 11fdffbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdffbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdffc1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11fdffc4:;
  /* 11fdffc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdffc6:;
  /* 11fdffc6 mov esp, ebp */
  ESP = (EBP);
  /* 11fdffc8 pop ebp */
  EBP = (pop32());
  /* 11fdffc9 ret  */
  ESPCHK(0x11fdfdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x11fe0000 (91 bytes, 35 insns) */
void f_11fe0000(void) {
  FTRACE(0x11fe0000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0000 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0001 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0003 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0007 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe000a:;
  /* 11fe000a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe000d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe0010 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0013 je 0x11fe0033 */
  if (C.zf) goto L_11fe0033;
  /* 11fe0015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0018 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe001b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe001e mov ecx, dword ptr [0x1200d2c4] */
  ECX = (r32((uint32_t)(0x1200d2c4)));
  /* 11fe0024 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe0027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe002a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe002c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe002f jae 0x11fe0033 */
  if (!C.cf) goto L_11fe0033;
  /* 11fe0031 jmp 0x11fe000a */
  goto L_11fe000a;
L_11fe0033:;
  /* 11fe0033 mov eax, dword ptr [0x1200d2c4] */
  EAX = (r32((uint32_t)(0x1200d2c4)));
  /* 11fe0038 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe003b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe003e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0040 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0043 jae 0x11fe0055 */
  if (!C.cf) goto L_11fe0055;
  /* 11fe0045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0048 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe004b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe004e jne 0x11fe0055 */
  if (!C.zf) goto L_11fe0055;
  /* 11fe0050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0053 jmp 0x11fe0057 */
  goto L_11fe0057;
L_11fe0055:;
  /* 11fe0055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe0057:;
  /* 11fe0057 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0059 pop ebp */
  EBP = (pop32());
  /* 11fe005a ret  */
  ESPCHK(0x11fe0000u, _esp0);
  ESP += 4; return;
}

/* FUN_10010060 @ 0x11fe0060 (13 bytes, 6 insns) */
void f_11fe0060(void) {
  FTRACE(0x11fe0060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0061 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0063 call 0x11fddec0 */
  push32(0x11fe0068u); f_11fddec0();
  /* 11fe0068 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe006b pop ebp */
  EBP = (pop32());
  /* 11fe006c ret  */
  ESPCHK(0x11fe0060u, _esp0);
  ESP += 4; return;
}

/* FUN_10010070 @ 0x11fe0070 (13 bytes, 6 insns) */
void f_11fe0070(void) {
  FTRACE(0x11fe0070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0070 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0071 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0073 call 0x11fddec0 */
  push32(0x11fe0078u); f_11fddec0();
  /* 11fe0078 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe007b pop ebp */
  EBP = (pop32());
  /* 11fe007c ret  */
  ESPCHK(0x11fe0070u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x11fe0080 (187 bytes, 54 insns) */
void f_11fe0080(void) {
  FTRACE(0x11fe0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0080 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0081 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe008d cmp dword ptr [0x1200f104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0094 jne 0x11fe00f3 */
  if (!C.zf) goto L_11fe00f3;
  /* 11fe0096 push 0x12009370 */
  push32((uint32_t)(0x12009370u));
  /* 11fe009b call dword ptr [0x1201142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201142c))), 0x11fe00a1u);
  /* 11fe00a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe00a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe00a8 je 0x11fe00c7 */
  if (C.zf) goto L_11fe00c7;
  /* 11fe00aa push 0x1200a05c */
  push32((uint32_t)(0x1200a05cu));
  /* 11fe00af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe00b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe00b3 call dword ptr [0x1201131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201131c))), 0x11fe00b9u);
  /* 11fe00b9 mov dword ptr [0x1200f104], eax */
  w32((uint32_t)(0x1200f104), (EAX));
  /* 11fe00be cmp dword ptr [0x1200f104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe00c5 jne 0x11fe00cb */
  if (!C.zf) goto L_11fe00cb;
L_11fe00c7:;
  /* 11fe00c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe00c9 jmp 0x11fe0137 */
  goto L_11fe0137;
L_11fe00cb:;
  /* 11fe00cb push 0x1200a04c */
  push32((uint32_t)(0x1200a04cu));
  /* 11fe00d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe00d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe00d4 call dword ptr [0x1201131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201131c))), 0x11fe00dau);
  /* 11fe00da mov dword ptr [0x1200f108], eax */
  w32((uint32_t)(0x1200f108), (EAX));
  /* 11fe00df push 0x1200a038 */
  push32((uint32_t)(0x1200a038u));
  /* 11fe00e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe00e7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe00e8 call dword ptr [0x1201131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201131c))), 0x11fe00eeu);
  /* 11fe00ee mov dword ptr [0x1200f10c], eax */
  w32((uint32_t)(0x1200f10c), (EAX));
L_11fe00f3:;
  /* 11fe00f3 cmp dword ptr [0x1200f108], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f108))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe00fa je 0x11fe0105 */
  if (C.zf) goto L_11fe0105;
  /* 11fe00fc call dword ptr [0x1200f108] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f108))), 0x11fe0102u);
  /* 11fe0102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0105:;
  /* 11fe0105 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0109 je 0x11fe0121 */
  if (C.zf) goto L_11fe0121;
  /* 11fe010b cmp dword ptr [0x1200f10c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f10c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0112 je 0x11fe0121 */
  if (C.zf) goto L_11fe0121;
  /* 11fe0114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0117 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0118 call dword ptr [0x1200f10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f10c))), 0x11fe011eu);
  /* 11fe011e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0121:;
  /* 11fe0121 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0124 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0125 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0128 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe012c push eax */
  push32((uint32_t)(EAX));
  /* 11fe012d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0130 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0131 call dword ptr [0x1200f104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f104))), 0x11fe0137u);
L_11fe0137:;
  /* 11fe0137 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0139 pop ebp */
  EBP = (pop32());
  /* 11fe013a ret  */
  ESPCHK(0x11fe0080u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11fe0140 (254 bytes, 109 insns) */
void f_11fe0140(void) {
  FTRACE(0x11fe0140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0140 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fe0144 push edi */
  push32((uint32_t)(EDI));
  /* 11fe0145 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe0147 je 0x11fe01c3 */
  if (C.zf) goto L_11fe01c3;
  /* 11fe0149 push esi */
  push32((uint32_t)(ESI));
  /* 11fe014a push ebx */
  push32((uint32_t)(EBX));
  /* 11fe014b mov ebx, ecx */
  EBX = (ECX);
  /* 11fe014d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11fe0151 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11fe0157 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe015b jne 0x11fe0164 */
  if (!C.zf) goto L_11fe0164;
  /* 11fe015d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe0160 jne 0x11fe01d1 */
  if (!C.zf) goto L_11fe01d1;
  /* 11fe0162 jmp 0x11fe0185 */
  goto L_11fe0185;
L_11fe0164:;
  /* 11fe0164 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe0166 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fe0167 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe0169 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe016a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe016b je 0x11fe0192 */
  if (C.zf) goto L_11fe0192;
  /* 11fe016d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fe016f je 0x11fe019a */
  if (C.zf) goto L_11fe019a;
  /* 11fe0171 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11fe0177 jne 0x11fe0164 */
  if (!C.zf) goto L_11fe0164;
  /* 11fe0179 mov ebx, ecx */
  EBX = (ECX);
  /* 11fe017b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe017e jne 0x11fe01d1 */
  if (!C.zf) goto L_11fe01d1;
L_11fe0180:;
  /* 11fe0180 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11fe0183 je 0x11fe0192 */
  if (C.zf) goto L_11fe0192;
L_11fe0185:;
  /* 11fe0185 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe0187 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fe0188 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe018a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe018b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fe018d je 0x11fe01be */
  if (C.zf) goto L_11fe01be;
  /* 11fe018f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11fe0190 jne 0x11fe0185 */
  if (!C.zf) goto L_11fe0185;
L_11fe0192:;
  /* 11fe0192 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe0196 pop ebx */
  EBX = (pop32());
  /* 11fe0197 pop esi */
  ESI = (pop32());
  /* 11fe0198 pop edi */
  EDI = (pop32());
  /* 11fe0199 ret  */
  ESPCHK(0x11fe0140u, _esp0);
  ESP += 4; return;
L_11fe019a:;
  /* 11fe019a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe01a0 je 0x11fe01b4 */
  if (C.zf) goto L_11fe01b4;
L_11fe01a2:;
  /* 11fe01a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe01a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe01a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe01a6 je 0x11fe0236 */
  if (C.zf) goto L_11fe0236;
  /* 11fe01ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe01b2 jne 0x11fe01a2 */
  if (!C.zf) goto L_11fe01a2;
L_11fe01b4:;
  /* 11fe01b4 mov ebx, ecx */
  EBX = (ECX);
  /* 11fe01b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe01b9 jne 0x11fe0227 */
  if (!C.zf) goto L_11fe0227;
L_11fe01bb:;
  /* 11fe01bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe01bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11fe01be:;
  /* 11fe01be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11fe01bf jne 0x11fe01bb */
  if (!C.zf) goto L_11fe01bb;
  /* 11fe01c1 pop ebx */
  EBX = (pop32());
  /* 11fe01c2 pop esi */
  ESI = (pop32());
L_11fe01c3:;
  /* 11fe01c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fe01c7 pop edi */
  EDI = (pop32());
  /* 11fe01c8 ret  */
  ESPCHK(0x11fe0140u, _esp0);
  ESP += 4; return;
L_11fe01c9:;
  /* 11fe01c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fe01cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe01ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe01cf je 0x11fe0180 */
  if (C.zf) goto L_11fe0180;
L_11fe01d1:;
  /* 11fe01d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11fe01d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11fe01d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe01da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe01dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe01df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11fe01e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe01e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11fe01e9 je 0x11fe01c9 */
  if (C.zf) goto L_11fe01c9;
  /* 11fe01eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11fe01ed je 0x11fe021b */
  if (C.zf) goto L_11fe021b;
  /* 11fe01ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11fe01f1 je 0x11fe0211 */
  if (C.zf) goto L_11fe0211;
  /* 11fe01f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11fe01f9 je 0x11fe0207 */
  if (C.zf) goto L_11fe0207;
  /* 11fe01fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11fe0201 jne 0x11fe01c9 */
  if (!C.zf) goto L_11fe01c9;
  /* 11fe0203 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fe0205 jmp 0x11fe021f */
  goto L_11fe021f;
L_11fe0207:;
  /* 11fe0207 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe020d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fe020f jmp 0x11fe021f */
  goto L_11fe021f;
L_11fe0211:;
  /* 11fe0211 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0217 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11fe0219 jmp 0x11fe021f */
  goto L_11fe021f;
L_11fe021b:;
  /* 11fe021b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe021d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11fe021f:;
  /* 11fe021f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0224 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe0225 je 0x11fe0231 */
  if (C.zf) goto L_11fe0231;
L_11fe0227:;
  /* 11fe0227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe0229:;
  /* 11fe0229 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11fe022b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe022e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe022f jne 0x11fe0229 */
  if (!C.zf) goto L_11fe0229;
L_11fe0231:;
  /* 11fe0231 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11fe0234 jne 0x11fe01bb */
  if (!C.zf) goto L_11fe01bb;
L_11fe0236:;
  /* 11fe0236 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe023a pop ebx */
  EBX = (pop32());
  /* 11fe023b pop esi */
  ESI = (pop32());
  /* 11fe023c pop edi */
  EDI = (pop32());
  /* 11fe023d ret  */
  ESPCHK(0x11fe0140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x11fe0240 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11fe0240(void) {
  FTRACE(0x11fe0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0240 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0241 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0243 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0246 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0249 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe024b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11fe024e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe0251 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11fe0254 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe0257 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe025a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe025c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11fe025f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe0262 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0265 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11fe0268 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe026c ja 0x11fe02ae */
  if ((!C.cf&&!C.zf)) goto L_11fe02ae;
  /* 11fe026e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe0271 jmp dword ptr [eax*4 + 0x11fe039c] */
  switch (EAX) {
    case 0: goto L_11fe0278;
    case 1: goto L_11fe0293;
    case 2: goto L_11fe0281;
    case 3: goto L_11fe028a;
    case 4: goto L_11fe0278;
    case 5: goto L_11fe02ae;
    case 6: goto L_11fe02a5;
    case 7: goto L_11fe029c;
    default: x86_unimpl("switch@0x11fe0271 out of table"); return;
  }
L_11fe0278:;
  /* 11fe0278 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11fe027f jmp 0x11fe02b5 */
  goto L_11fe02b5;
L_11fe0281:;
  /* 11fe0281 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11fe0288 jmp 0x11fe02b5 */
  goto L_11fe02b5;
L_11fe028a:;
  /* 11fe028a mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11fe0291 jmp 0x11fe02b5 */
  goto L_11fe02b5;
L_11fe0293:;
  /* 11fe0293 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11fe029a jmp 0x11fe02b5 */
  goto L_11fe02b5;
L_11fe029c:;
  /* 11fe029c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11fe02a3 jmp 0x11fe02b5 */
  goto L_11fe02b5;
L_11fe02a5:;
  /* 11fe02a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe02a8 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11fe02ae:;
  /* 11fe02ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe02b5:;
  /* 11fe02b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe02b9 je 0x11fe034a */
  if (C.zf) goto L_11fe034a;
  /* 11fe02bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe02c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe02c4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe02c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe02c8 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe02cb push ecx */
  push32((uint32_t)(ECX));
  /* 11fe02cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe02cf push edx */
  push32((uint32_t)(EDX));
  /* 11fe02d0 call 0x11fe6fa0 */
  push32(0x11fe02d5u); f_11fe6fa0();
  /* 11fe02d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe02d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe02da jne 0x11fe034a */
  if (!C.zf) goto L_11fe034a;
  /* 11fe02dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe02df mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11fe02e2 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe02e6 je 0x11fe02f6 */
  if (C.zf) goto L_11fe02f6;
  /* 11fe02e8 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe02ec je 0x11fe02f6 */
  if (C.zf) goto L_11fe02f6;
  /* 11fe02ee cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe02f2 je 0x11fe02f6 */
  if (C.zf) goto L_11fe02f6;
  /* 11fe02f4 jmp 0x11fe031c */
  goto L_11fe031c;
L_11fe02f6:;
  /* 11fe02f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe02f9 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe02fc mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11fe02ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe0302 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0305 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0308 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11fe030b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe030e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe0311 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11fe0314 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fe0317 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11fe031a jmp 0x11fe0324 */
  goto L_11fe0324;
L_11fe031c:;
  /* 11fe031c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe031f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11fe0321 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11fe0324:;
  /* 11fe0324 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0327 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe032a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe032b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe032e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0331 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0335 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0336 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0339 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe033a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe033d push edx */
  push32((uint32_t)(EDX));
  /* 11fe033e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11fe0341 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0342 call 0x11fe6ad0 */
  push32(0x11fe0347u); f_11fe6ad0();
  /* 11fe0347 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe034a:;
  /* 11fe034a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe034f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0352 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe0354 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0355 call 0x11fe7510 */
  push32(0x11fe035au); f_11fe7510();
  /* 11fe035a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe035d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe0364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0367 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe036a je 0x11fe0384 */
  if (C.zf) goto L_11fe0384;
  /* 11fe036c cmp dword ptr [0x1200d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0373 jne 0x11fe0384 */
  if (!C.zf) goto L_11fe0384;
  /* 11fe0375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0378 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0379 call 0x11fe74c0 */
  push32(0x11fe037eu); f_11fe74c0();
  /* 11fe037e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0381 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe0384:;
  /* 11fe0384 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0388 jne 0x11fe0398 */
  if (!C.zf) goto L_11fe0398;
  /* 11fe038a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe038d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe038f push eax */
  push32((uint32_t)(EAX));
  /* 11fe0390 call 0x11fe73c0 */
  push32(0x11fe0395u); f_11fe73c0();
  /* 11fe0395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe0398:;
  /* 11fe0398 mov esp, ebp */
  ESP = (EBP);
  /* 11fe039a pop ebp */
  EBP = (pop32());
  /* 11fe039b ret  */
  ESPCHK(0x11fe0240u, _esp0);
  ESP += 4; return;
}

/* FUN_100103c0 @ 0x11fe03c0 (31 bytes, 18 insns) */
void f_11fe03c0(void) {
  FTRACE(0x11fe03c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe03c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe03c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe03c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe03c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe03c5 push esi */
  push32((uint32_t)(ESI));
  /* 11fe03c6 push edi */
  push32((uint32_t)(EDI));
  /* 11fe03c7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe03c8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11fe03cb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe03cf push eax */
  push32((uint32_t)(EAX));
  /* 11fe03d0 call 0x11fe07b0 */
  push32(0x11fe03d5u); f_11fe07b0();
  /* 11fe03d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe03d8 pop edi */
  EDI = (pop32());
  /* 11fe03d9 pop esi */
  ESI = (pop32());
  /* 11fe03da pop ebx */
  EBX = (pop32());
  /* 11fe03db mov esp, ebp */
  ESP = (EBP);
  /* 11fe03dd pop ebp */
  EBP = (pop32());
  /* 11fe03de ret  */
  ESPCHK(0x11fe03c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x11fe03e0 (32 bytes, 18 insns) */
void f_11fe03e0(void) {
  FTRACE(0x11fe03e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe03e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe03e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe03e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe03e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe03e5 push esi */
  push32((uint32_t)(ESI));
  /* 11fe03e6 push edi */
  push32((uint32_t)(EDI));
  /* 11fe03e7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11fe03ea fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11fe03ec mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe03f0 push eax */
  push32((uint32_t)(EAX));
  /* 11fe03f1 call 0x11fe07b0 */
  push32(0x11fe03f6u); f_11fe07b0();
  /* 11fe03f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe03f9 pop edi */
  EDI = (pop32());
  /* 11fe03fa pop esi */
  ESI = (pop32());
  /* 11fe03fb pop ebx */
  EBX = (pop32());
  /* 11fe03fc mov esp, ebp */
  ESP = (EBP);
  /* 11fe03fe pop ebp */
  EBP = (pop32());
  /* 11fe03ff ret  */
  ESPCHK(0x11fe03e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010400 @ 0x11fe0400 (79 bytes, 34 insns) */
void f_11fe0400(void) {
  FTRACE(0x11fe0400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0400 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0401 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0403 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0406 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe0407 push esi */
  push32((uint32_t)(ESI));
  /* 11fe0408 push edi */
  push32((uint32_t)(EDI));
  /* 11fe0409 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe040a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11fe040d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11fe0411 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0412 call 0x11fe04d0 */
  push32(0x11fe0417u); f_11fe04d0();
  /* 11fe0417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe041a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe041d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0420 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0426 not edx */
  EDX = (~(EDX));
  /* 11fe0428 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe042b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe042d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe042f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe0432 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0435 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0436 call 0x11fe0650 */
  push32(0x11fe043bu); f_11fe0650();
  /* 11fe043b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe043e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fe0442 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11fe0445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0448 pop edi */
  EDI = (pop32());
  /* 11fe0449 pop esi */
  ESI = (pop32());
  /* 11fe044a pop ebx */
  EBX = (pop32());
  /* 11fe044b mov esp, ebp */
  ESP = (EBP);
  /* 11fe044d pop ebp */
  EBP = (pop32());
  /* 11fe044e ret  */
  ESPCHK(0x11fe0400u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11fe0450 (26 bytes, 11 insns) */
void f_11fe0450(void) {
  FTRACE(0x11fe0450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0450 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0451 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0453 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0456 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe045b push eax */
  push32((uint32_t)(EAX));
  /* 11fe045c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe045f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0460 call 0x11fe0400 */
  push32(0x11fe0465u); f_11fe0400();
  /* 11fe0465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0468 pop ebp */
  EBP = (pop32());
  /* 11fe0469 ret  */
  ESPCHK(0x11fe0450u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x11fe0470 (88 bytes, 33 insns) */
void f_11fe0470(void) {
  FTRACE(0x11fe0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0470 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0471 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0476 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe0477 push esi */
  push32((uint32_t)(ESI));
  /* 11fe0478 push edi */
  push32((uint32_t)(EDI));
  /* 11fe0479 call 0x11fe0070 */
  push32(0x11fe047eu); f_11fe0070();
  /* 11fe047e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11fe0480 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0483 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11fe0485 call 0x11fda7e0 */
  push32(0x11fe048au); f_11fda7e0();
  /* 11fe048a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe048e je 0x11fe04c1 */
  if (C.zf) goto L_11fe04c1;
  /* 11fe0490 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0493 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe0496 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe0498 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe049d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe049f je 0x11fe04c1 */
  if (C.zf) goto L_11fe04c1;
  /* 11fe04a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe04a4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe04a7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe04aa mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe04ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe04b0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fe04b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe04ba mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11fe04c1:;
  /* 11fe04c1 pop edi */
  EDI = (pop32());
  /* 11fe04c2 pop esi */
  ESI = (pop32());
  /* 11fe04c3 pop ebx */
  EBX = (pop32());
  /* 11fe04c4 mov esp, ebp */
  ESP = (EBP);
  /* 11fe04c6 pop ebp */
  EBP = (pop32());
  /* 11fe04c7 ret  */
  ESPCHK(0x11fe0470u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x11fe04d0 (377 bytes, 115 insns) */
void f_11fe04d0(void) {
  FTRACE(0x11fe04d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe04d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe04d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe04d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe04d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe04dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe04e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe04e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe04e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe04ea je 0x11fe04f5 */
  if (C.zf) goto L_11fe04f5;
  /* 11fe04ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe04ef or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe04f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe04f5:;
  /* 11fe04f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe04f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe04fe and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe0503 je 0x11fe050d */
  if (C.zf) goto L_11fe050d;
  /* 11fe0505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0508 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11fe050a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe050d:;
  /* 11fe050d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0510 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0516 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe051b je 0x11fe0526 */
  if (C.zf) goto L_11fe0526;
  /* 11fe051d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0520 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0523 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0526:;
  /* 11fe0526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0529 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe052e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0533 je 0x11fe053e */
  if (C.zf) goto L_11fe053e;
  /* 11fe0535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0538 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe053b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe053e:;
  /* 11fe053e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0541 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0547 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe054a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe054c je 0x11fe0556 */
  if (C.zf) goto L_11fe0556;
  /* 11fe054e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0551 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fe0553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0556:;
  /* 11fe0556 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0559 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe055f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe0564 je 0x11fe0572 */
  if (C.zf) goto L_11fe0572;
  /* 11fe0566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0569 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe056f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0572:;
  /* 11fe0572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0575 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe057a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe057f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe0582 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0589 jg 0x11fe05a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe05a5;
  /* 11fe058b cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0592 je 0x11fe05b8 */
  if (C.zf) goto L_11fe05b8;
  /* 11fe0594 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0598 je 0x11fe05b0 */
  if (C.zf) goto L_11fe05b0;
  /* 11fe059a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe05a1 je 0x11fe05c3 */
  if (C.zf) goto L_11fe05c3;
  /* 11fe05a3 jmp 0x11fe05d7 */
  goto L_11fe05d7;
L_11fe05a5:;
  /* 11fe05a5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe05ac je 0x11fe05ce */
  if (C.zf) goto L_11fe05ce;
  /* 11fe05ae jmp 0x11fe05d7 */
  goto L_11fe05d7;
L_11fe05b0:;
  /* 11fe05b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe05b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe05b6 jmp 0x11fe05d7 */
  goto L_11fe05d7;
L_11fe05b8:;
  /* 11fe05b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe05bb or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe05be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe05c1 jmp 0x11fe05d7 */
  goto L_11fe05d7;
L_11fe05c3:;
  /* 11fe05c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe05c6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fe05c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe05cc jmp 0x11fe05d7 */
  goto L_11fe05d7;
L_11fe05ce:;
  /* 11fe05ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe05d1 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe05d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe05d7:;
  /* 11fe05d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe05da and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe05e0 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe05e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe05e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe05ed je 0x11fe0619 */
  if (C.zf) goto L_11fe0619;
  /* 11fe05ef cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe05f6 je 0x11fe060b */
  if (C.zf) goto L_11fe060b;
  /* 11fe05f8 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe05ff je 0x11fe0603 */
  if (C.zf) goto L_11fe0603;
  /* 11fe0601 jmp 0x11fe0625 */
  goto L_11fe0625;
L_11fe0603:;
  /* 11fe0603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0606 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0609 jmp 0x11fe0625 */
  goto L_11fe0625;
L_11fe060b:;
  /* 11fe060b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe060e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe0617 jmp 0x11fe0625 */
  goto L_11fe0625;
L_11fe0619:;
  /* 11fe0619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe061c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0622 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0625:;
  /* 11fe0625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0628 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe062d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0634 je 0x11fe0642 */
  if (C.zf) goto L_11fe0642;
  /* 11fe0636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0639 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe063f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe0642:;
  /* 11fe0642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0645 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0647 pop ebp */
  EBP = (pop32());
  /* 11fe0648 ret  */
  ESPCHK(0x11fe04d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010650 @ 0x11fe0650 (346 bytes, 106 insns) */
void f_11fe0650(void) {
  FTRACE(0x11fe0650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0650 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0651 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0656 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe065c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe065f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0664 je 0x11fe0671 */
  if (C.zf) goto L_11fe0671;
  /* 11fe0666 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe066a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11fe066d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11fe0671:;
  /* 11fe0671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0674 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0677 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe0679 je 0x11fe0685 */
  if (C.zf) goto L_11fe0685;
  /* 11fe067b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe067f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fe0681 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11fe0685:;
  /* 11fe0685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0688 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe068b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe068d je 0x11fe069a */
  if (C.zf) goto L_11fe069a;
  /* 11fe068f mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe0693 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11fe0696 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11fe069a:;
  /* 11fe069a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe069d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe06a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe06a2 je 0x11fe06af */
  if (C.zf) goto L_11fe06af;
  /* 11fe06a4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe06a8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11fe06ab mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11fe06af:;
  /* 11fe06af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe06b2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe06b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe06b7 je 0x11fe06c3 */
  if (C.zf) goto L_11fe06c3;
  /* 11fe06b9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe06bd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11fe06bf mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11fe06c3:;
  /* 11fe06c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe06c6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe06cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe06ce je 0x11fe06db */
  if (C.zf) goto L_11fe06db;
  /* 11fe06d0 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe06d4 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11fe06d7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11fe06db:;
  /* 11fe06db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe06de and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe06e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe06e6 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe06ed ja 0x11fe0709 */
  if ((!C.cf&&!C.zf)) goto L_11fe0709;
  /* 11fe06ef cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe06f6 je 0x11fe071e */
  if (C.zf) goto L_11fe071e;
  /* 11fe06f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe06fc je 0x11fe0714 */
  if (C.zf) goto L_11fe0714;
  /* 11fe06fe cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0705 je 0x11fe072b */
  if (C.zf) goto L_11fe072b;
  /* 11fe0707 jmp 0x11fe0743 */
  goto L_11fe0743;
L_11fe0709:;
  /* 11fe0709 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0710 je 0x11fe0738 */
  if (C.zf) goto L_11fe0738;
  /* 11fe0712 jmp 0x11fe0743 */
  goto L_11fe0743;
L_11fe0714:;
  /* 11fe0714 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe0718 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11fe071c jmp 0x11fe0743 */
  goto L_11fe0743;
L_11fe071e:;
  /* 11fe071e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe0722 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe0725 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11fe0729 jmp 0x11fe0743 */
  goto L_11fe0743;
L_11fe072b:;
  /* 11fe072b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe072f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11fe0732 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fe0736 jmp 0x11fe0743 */
  goto L_11fe0743;
L_11fe0738:;
  /* 11fe0738 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe073c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe073f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11fe0743:;
  /* 11fe0743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0746 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe074c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe074f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0753 je 0x11fe0769 */
  if (C.zf) goto L_11fe0769;
  /* 11fe0755 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe075c je 0x11fe0776 */
  if (C.zf) goto L_11fe0776;
  /* 11fe075e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0765 je 0x11fe0783 */
  if (C.zf) goto L_11fe0783;
  /* 11fe0767 jmp 0x11fe078b */
  goto L_11fe078b;
L_11fe0769:;
  /* 11fe0769 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe076d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11fe0770 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fe0774 jmp 0x11fe078b */
  goto L_11fe078b;
L_11fe0776:;
  /* 11fe0776 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe077a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe077d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11fe0781 jmp 0x11fe078b */
  goto L_11fe078b;
L_11fe0783:;
  /* 11fe0783 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe0787 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11fe078b:;
  /* 11fe078b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe078e and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0795 je 0x11fe07a2 */
  if (C.zf) goto L_11fe07a2;
  /* 11fe0797 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe079b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe079e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11fe07a2:;
  /* 11fe07a2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe07a6 mov esp, ebp */
  ESP = (EBP);
  /* 11fe07a8 pop ebp */
  EBP = (pop32());
  /* 11fe07a9 ret  */
  ESPCHK(0x11fe0650u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x11fe07b0 (167 bytes, 56 insns) */
void f_11fe07b0(void) {
  FTRACE(0x11fe07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe07b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe07b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe07b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe07bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe07be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe07c3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe07c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe07c8 je 0x11fe07d3 */
  if (C.zf) goto L_11fe07d3;
  /* 11fe07ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe07cd or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe07d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe07d3:;
  /* 11fe07d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe07d6 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe07dc and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe07df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe07e1 je 0x11fe07eb */
  if (C.zf) goto L_11fe07eb;
  /* 11fe07e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe07e6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11fe07e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe07eb:;
  /* 11fe07eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe07ee and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe07f4 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe07f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe07f9 je 0x11fe0804 */
  if (C.zf) goto L_11fe0804;
  /* 11fe07fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe07fe or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0801 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0804:;
  /* 11fe0804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0807 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe080c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe080f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0811 je 0x11fe081c */
  if (C.zf) goto L_11fe081c;
  /* 11fe0813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0816 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0819 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe081c:;
  /* 11fe081c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe081f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0825 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0828 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe082a je 0x11fe0834 */
  if (C.zf) goto L_11fe0834;
  /* 11fe082c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe082f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fe0831 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0834:;
  /* 11fe0834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0837 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe083d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0840 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe0842 je 0x11fe0850 */
  if (C.zf) goto L_11fe0850;
  /* 11fe0844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0847 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe084d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0850:;
  /* 11fe0850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0853 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0855 pop ebp */
  EBP = (pop32());
  /* 11fe0856 ret  */
  ESPCHK(0x11fe07b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x11fe0860 (183 bytes, 58 insns) */
void f_11fe0860(void) {
  FTRACE(0x11fe0860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0861 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0869 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe086c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0871 ja 0x11fe088a */
  if ((!C.cf&&!C.zf)) goto L_11fe088a;
  /* 11fe0873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0876 mov edx, dword ptr [0x1200cfec] */
  EDX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe087c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe087e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11fe0882 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0885 jmp 0x11fe0913 */
  goto L_11fe0913;
L_11fe088a:;
  /* 11fe088a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe088d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11fe0890 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0896 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe089c mov edx, dword ptr [0x1200cfec] */
  EDX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe08a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe08a4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11fe08a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe08ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe08af je 0x11fe08d3 */
  if (C.zf) goto L_11fe08d3;
  /* 11fe08b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe08b4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11fe08b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe08bd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11fe08c0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe08c3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11fe08c6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11fe08ca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11fe08d1 jmp 0x11fe08e4 */
  goto L_11fe08e4;
L_11fe08d3:;
  /* 11fe08d3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe08d6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11fe08d9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11fe08dd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11fe08e4:;
  /* 11fe08e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe08e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe08e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe08ea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11fe08ed push ecx */
  push32((uint32_t)(ECX));
  /* 11fe08ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe08f1 push edx */
  push32((uint32_t)(EDX));
  /* 11fe08f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fe08f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe08f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe08f8 call 0x11fe75d0 */
  push32(0x11fe08fdu); f_11fe75d0();
  /* 11fe08fd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0902 jne 0x11fe0908 */
  if (!C.zf) goto L_11fe0908;
  /* 11fe0904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0906 jmp 0x11fe0913 */
  goto L_11fe0913;
L_11fe0908:;
  /* 11fe0908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe090b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0910 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11fe0913:;
  /* 11fe0913 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0915 pop ebp */
  EBP = (pop32());
  /* 11fe0916 ret  */
  ESPCHK(0x11fe0860u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x11fe0920 (11 bytes, 6 insns) */
void f_11fe0920(void) {
  FTRACE(0x11fe0920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0920 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0921 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0926 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0929 pop ebp */
  EBP = (pop32());
  /* 11fe092a ret  */
  ESPCHK(0x11fe0920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x11fe0930 (147 bytes, 43 insns) */
void f_11fe0930(void) {
  FTRACE(0x11fe0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0930 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0931 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0933 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0934 cmp dword ptr [0x1200f1f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe093b jne 0x11fe0957 */
  if (!C.zf) goto L_11fe0957;
  /* 11fe093d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0941 jl 0x11fe0952 */
  if ((C.sf!=C.of)) goto L_11fe0952;
  /* 11fe0943 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0947 jg 0x11fe0952 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe0952;
  /* 11fe0949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe094c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe094f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fe0952:;
  /* 11fe0952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0955 jmp 0x11fe09bf */
  goto L_11fe09bf;
L_11fe0957:;
  /* 11fe0957 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fe095c call dword ptr [0x12011430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011430))), 0x11fe0962u);
  /* 11fe0962 cmp dword ptr [0x12010604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0969 je 0x11fe0989 */
  if (C.zf) goto L_11fe0989;
  /* 11fe096b push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fe0970 call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fe0976u);
  /* 11fe0976 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe0978 call 0x11fdb0c0 */
  push32(0x11fe097du); f_11fdb0c0();
  /* 11fe097d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0980 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe0987 jmp 0x11fe0990 */
  goto L_11fe0990;
L_11fe0989:;
  /* 11fe0989 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe0990:;
  /* 11fe0990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0993 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0994 call 0x11fe09d0 */
  push32(0x11fe0999u); f_11fe09d0();
  /* 11fe0999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe099c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe099f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe09a3 je 0x11fe09b1 */
  if (C.zf) goto L_11fe09b1;
  /* 11fe09a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe09a7 call 0x11fdb160 */
  push32(0x11fe09acu); f_11fdb160();
  /* 11fe09ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe09af jmp 0x11fe09bc */
  goto L_11fe09bc;
L_11fe09b1:;
  /* 11fe09b1 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fe09b6 call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fe09bcu);
L_11fe09bc:;
  /* 11fe09bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11fe09bf:;
  /* 11fe09bf mov esp, ebp */
  ESP = (EBP);
  /* 11fe09c1 pop ebp */
  EBP = (pop32());
  /* 11fe09c2 ret  */
  ESPCHK(0x11fe0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x11fe09d0 (299 bytes, 91 insns) */
void f_11fe09d0(void) {
  FTRACE(0x11fe09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe09d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe09d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe09d6 cmp dword ptr [0x1200f1f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe09dd jne 0x11fe09fc */
  if (!C.zf) goto L_11fe09fc;
  /* 11fe09df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe09e3 jl 0x11fe09f4 */
  if ((C.sf!=C.of)) goto L_11fe09f4;
  /* 11fe09e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe09e9 jg 0x11fe09f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe09f4;
  /* 11fe09eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe09ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe09f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fe09f4:;
  /* 11fe09f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe09f7 jmp 0x11fe0af7 */
  goto L_11fe0af7;
L_11fe09fc:;
  /* 11fe09fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0a03 jge 0x11fe0a43 */
  if ((C.sf==C.of)) goto L_11fe0a43;
  /* 11fe0a05 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0a0c jle 0x11fe0a21 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe0a21;
  /* 11fe0a0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe0a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0a14 call 0x11fe0860 */
  push32(0x11fe0a19u); f_11fe0860();
  /* 11fe0a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0a1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0a1f jmp 0x11fe0a35 */
  goto L_11fe0a35;
L_11fe0a21:;
  /* 11fe0a21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0a24 mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe0a29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0a2b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe0a2f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0a32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fe0a35:;
  /* 11fe0a35 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0a39 jne 0x11fe0a43 */
  if (!C.zf) goto L_11fe0a43;
  /* 11fe0a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0a3e jmp 0x11fe0af7 */
  goto L_11fe0af7;
L_11fe0a43:;
  /* 11fe0a43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0a46 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fe0a49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0a4f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0a55 mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe0a5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0a5c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe0a60 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0a66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe0a68 je 0x11fe0a8c */
  if (C.zf) goto L_11fe0a8c;
  /* 11fe0a6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0a6d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fe0a70 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0a76 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11fe0a79 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe0a7c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11fe0a7f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11fe0a83 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fe0a8a jmp 0x11fe0a9d */
  goto L_11fe0a9d;
L_11fe0a8c:;
  /* 11fe0a8c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe0a8f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fe0a92 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11fe0a96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11fe0a9d:;
  /* 11fe0a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe0a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe0aa1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fe0aa3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe0aa6 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0aaa push eax */
  push32((uint32_t)(EAX));
  /* 11fe0aab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fe0aae push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0aaf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe0ab4 mov edx, dword ptr [0x1200f1f8] */
  EDX = (r32((uint32_t)(0x1200f1f8)));
  /* 11fe0aba push edx */
  push32((uint32_t)(EDX));
  /* 11fe0abb call 0x11fe81e0 */
  push32(0x11fe0ac0u); f_11fe81e0();
  /* 11fe0ac0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0ac3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0ac6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0aca jne 0x11fe0ad1 */
  if (!C.zf) goto L_11fe0ad1;
  /* 11fe0acc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0acf jmp 0x11fe0af7 */
  goto L_11fe0af7;
L_11fe0ad1:;
  /* 11fe0ad1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0ad5 jne 0x11fe0ae1 */
  if (!C.zf) goto L_11fe0ae1;
  /* 11fe0ad7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0ada and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0adf jmp 0x11fe0af7 */
  goto L_11fe0af7;
L_11fe0ae1:;
  /* 11fe0ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0ae4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0ae9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11fe0aec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0af2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11fe0af5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11fe0af7:;
  /* 11fe0af7 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0af9 pop ebp */
  EBP = (pop32());
  /* 11fe0afa ret  */
  ESPCHK(0x11fe09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b00 @ 0x11fe0b00 (132 bytes, 51 insns) */
void f_11fe0b00(void) {
  FTRACE(0x11fe0b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0b01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0b03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0b09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe0b0a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0b0d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0b0f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe0b12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe0b15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0b18 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0b1d jns 0x11fe0b24 */
  if (!C.sf) goto L_11fe0b24;
  /* 11fe0b1f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11fe0b20 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0b23 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fe0b24:;
  /* 11fe0b24 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11fe0b29 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0b2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe0b2e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0b31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0b34 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0b36 not edx */
  EDX = (~(EDX));
  /* 11fe0b38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe0b3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0b3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0b41 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fe0b44 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0b47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe0b49 je 0x11fe0b4f */
  if (C.zf) goto L_11fe0b4f;
  /* 11fe0b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0b4d jmp 0x11fe0b80 */
  goto L_11fe0b80;
L_11fe0b4f:;
  /* 11fe0b4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0b52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0b55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe0b58 jmp 0x11fe0b63 */
  goto L_11fe0b63;
L_11fe0b5a:;
  /* 11fe0b5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0b5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0b60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fe0b63:;
  /* 11fe0b63 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0b67 jge 0x11fe0b7b */
  if ((C.sf==C.of)) goto L_11fe0b7b;
  /* 11fe0b69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0b6f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0b73 je 0x11fe0b79 */
  if (C.zf) goto L_11fe0b79;
  /* 11fe0b75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0b77 jmp 0x11fe0b80 */
  goto L_11fe0b80;
L_11fe0b79:;
  /* 11fe0b79 jmp 0x11fe0b5a */
  goto L_11fe0b5a;
L_11fe0b7b:;
  /* 11fe0b7b mov eax, 1 */
  EAX = (0x1u);
L_11fe0b80:;
  /* 11fe0b80 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0b82 pop ebp */
  EBP = (pop32());
  /* 11fe0b83 ret  */
  ESPCHK(0x11fe0b00u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11fe0b90 (168 bytes, 63 insns) */
void f_11fe0b90(void) {
  FTRACE(0x11fe0b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0b91 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0b93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0b99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe0b9a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0b9d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0b9f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe0ba2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe0ba5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0ba8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0bad jns 0x11fe0bb4 */
  if (!C.sf) goto L_11fe0bb4;
  /* 11fe0baf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11fe0bb0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0bb3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fe0bb4:;
  /* 11fe0bb4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11fe0bb9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0bbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe0bbe mov edx, 1 */
  EDX = (0x1u);
  /* 11fe0bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0bc6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0bc8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe0bcb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0bd1 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11fe0bd4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0bd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe0bd8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0bd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0bdf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fe0be2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0be3 call 0x11fe8540 */
  push32(0x11fe0be8u); f_11fe8540();
  /* 11fe0be8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0beb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0bf1 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0bf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe0bf7 jmp 0x11fe0c02 */
  goto L_11fe0c02;
L_11fe0bf9:;
  /* 11fe0bf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0bfc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0bff mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fe0c02:;
  /* 11fe0c02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0c06 jl 0x11fe0c31 */
  if ((C.sf!=C.of)) goto L_11fe0c31;
  /* 11fe0c08 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0c0c je 0x11fe0c31 */
  if (C.zf) goto L_11fe0c31;
  /* 11fe0c0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0c11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0c14 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11fe0c17 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0c18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe0c1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0c20 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fe0c23 push edx */
  push32((uint32_t)(EDX));
  /* 11fe0c24 call 0x11fe8540 */
  push32(0x11fe0c29u); f_11fe8540();
  /* 11fe0c29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0c2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0c2f jmp 0x11fe0bf9 */
  goto L_11fe0bf9;
L_11fe0c31:;
  /* 11fe0c31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe0c34 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0c36 pop ebp */
  EBP = (pop32());
  /* 11fe0c37 ret  */
  ESPCHK(0x11fe0b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c40 @ 0x11fe0c40 (219 bytes, 78 insns) */
void f_11fe0c40(void) {
  FTRACE(0x11fe0c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0c41 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0c43 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0c46 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11fe0c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0c50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0c53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0c56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0c59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0c5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe0c5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0c62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe0c63 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0c66 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0c68 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe0c6b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe0c6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0c71 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0c77 jns 0x11fe0c7e */
  if (!C.sf) goto L_11fe0c7e;
  /* 11fe0c79 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11fe0c7a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0c7d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11fe0c7e:;
  /* 11fe0c7e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11fe0c83 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0c85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe0c88 mov edx, 1 */
  EDX = (0x1u);
  /* 11fe0c8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe0c90 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0c92 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fe0c95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe0c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0c9b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fe0c9e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0ca1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe0ca3 je 0x11fe0ccf */
  if (C.zf) goto L_11fe0ccf;
  /* 11fe0ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0ca8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0cab push eax */
  push32((uint32_t)(EAX));
  /* 11fe0cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0caf push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0cb0 call 0x11fe0b00 */
  push32(0x11fe0cb5u); f_11fe0b00();
  /* 11fe0cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0cba jne 0x11fe0ccf */
  if (!C.zf) goto L_11fe0ccf;
  /* 11fe0cbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0cbf push edx */
  push32((uint32_t)(EDX));
  /* 11fe0cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0cc3 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0cc4 call 0x11fe0b90 */
  push32(0x11fe0cc9u); f_11fe0b90();
  /* 11fe0cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0ccc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11fe0ccf:;
  /* 11fe0ccf or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0cd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe0cd5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0cd7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe0cda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0cdd mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fe0ce0 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0ce2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe0ce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0ce8 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11fe0ceb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe0cee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0cf1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0cf4 jmp 0x11fe0cff */
  goto L_11fe0cff;
L_11fe0cf6:;
  /* 11fe0cf6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe0cf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0cfc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fe0cff:;
  /* 11fe0cff cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0d03 jge 0x11fe0d14 */
  if ((C.sf==C.of)) goto L_11fe0d14;
  /* 11fe0d05 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe0d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0d0b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11fe0d12 jmp 0x11fe0cf6 */
  goto L_11fe0cf6;
L_11fe0d14:;
  /* 11fe0d14 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe0d17 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0d19 pop ebp */
  EBP = (pop32());
  /* 11fe0d1a ret  */
  ESPCHK(0x11fe0c40u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11fe0d20 (76 bytes, 28 insns) */
void f_11fe0d20(void) {
  FTRACE(0x11fe0d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0d21 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0d26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0d2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0d2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe0d32 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe0d39 jmp 0x11fe0d44 */
  goto L_11fe0d44;
L_11fe0d3b:;
  /* 11fe0d3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0d3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0d41 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fe0d44:;
  /* 11fe0d44 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0d48 jge 0x11fe0d68 */
  if ((C.sf==C.of)) goto L_11fe0d68;
  /* 11fe0d4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe0d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0d50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe0d52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe0d54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe0d57 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0d5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe0d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0d60 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0d63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe0d66 jmp 0x11fe0d3b */
  goto L_11fe0d3b;
L_11fe0d68:;
  /* 11fe0d68 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0d6a pop ebp */
  EBP = (pop32());
  /* 11fe0d6b ret  */
  ESPCHK(0x11fe0d20u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11fe0d70 (47 bytes, 17 insns) */
void f_11fe0d70(void) {
  FTRACE(0x11fe0d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0d71 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0d74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe0d7b jmp 0x11fe0d86 */
  goto L_11fe0d86;
L_11fe0d7d:;
  /* 11fe0d7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0d80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0d83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0d86:;
  /* 11fe0d86 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0d8a jge 0x11fe0d9b */
  if ((C.sf==C.of)) goto L_11fe0d9b;
  /* 11fe0d8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0d8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0d92 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11fe0d99 jmp 0x11fe0d7d */
  goto L_11fe0d7d;
L_11fe0d9b:;
  /* 11fe0d9b mov esp, ebp */
  ESP = (EBP);
  /* 11fe0d9d pop ebp */
  EBP = (pop32());
  /* 11fe0d9e ret  */
  ESPCHK(0x11fe0d70u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11fe0da0 (55 bytes, 21 insns) */
void f_11fe0da0(void) {
  FTRACE(0x11fe0da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0da1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe0dab jmp 0x11fe0db6 */
  goto L_11fe0db6;
L_11fe0dad:;
  /* 11fe0dad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0db3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe0db6:;
  /* 11fe0db6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0dba jge 0x11fe0dce */
  if ((C.sf==C.of)) goto L_11fe0dce;
  /* 11fe0dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0dbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0dc2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0dc6 je 0x11fe0dcc */
  if (C.zf) goto L_11fe0dcc;
  /* 11fe0dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0dca jmp 0x11fe0dd3 */
  goto L_11fe0dd3;
L_11fe0dcc:;
  /* 11fe0dcc jmp 0x11fe0dad */
  goto L_11fe0dad;
L_11fe0dce:;
  /* 11fe0dce mov eax, 1 */
  EAX = (0x1u);
L_11fe0dd3:;
  /* 11fe0dd3 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0dd5 pop ebp */
  EBP = (pop32());
  /* 11fe0dd6 ret  */
  ESPCHK(0x11fe0da0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11fe0de0 (236 bytes, 82 insns) */
void f_11fe0de0(void) {
  FTRACE(0x11fe0de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0de1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0de3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0de6 push esi */
  push32((uint32_t)(ESI));
  /* 11fe0de7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0dea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe0deb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0dee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0df0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe0df3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe0df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe0df9 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0dfe jns 0x11fe0e05 */
  if (!C.sf) goto L_11fe0e05;
  /* 11fe0e00 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11fe0e01 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0e04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fe0e05:;
  /* 11fe0e05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe0e08 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0e0e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0e10 not edx */
  EDX = (~(EDX));
  /* 11fe0e12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fe0e15 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe0e1c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe0e23 jmp 0x11fe0e2e */
  goto L_11fe0e2e;
L_11fe0e25:;
  /* 11fe0e25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0e2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe0e2e:;
  /* 11fe0e2e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0e32 jge 0x11fe0e81 */
  if ((C.sf==C.of)) goto L_11fe0e81;
  /* 11fe0e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0e3a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fe0e3d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0e40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0e43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0e49 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fe0e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0e4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe0e51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0e57 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11fe0e5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0e60 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fe0e63 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe0e66 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0e6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fe0e6f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11fe0e74 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0e77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe0e7a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe0e7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe0e7f jmp 0x11fe0e25 */
  goto L_11fe0e25;
L_11fe0e81:;
  /* 11fe0e81 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11fe0e88 jmp 0x11fe0e93 */
  goto L_11fe0e93;
L_11fe0e8a:;
  /* 11fe0e8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e8d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0e90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe0e93:;
  /* 11fe0e93 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0e97 jl 0x11fe0ec7 */
  if ((C.sf!=C.of)) goto L_11fe0ec7;
  /* 11fe0e99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0e9c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0e9f jl 0x11fe0eb8 */
  if ((C.sf!=C.of)) goto L_11fe0eb8;
  /* 11fe0ea1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0ea4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0ea7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0eaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0ead mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0eb0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11fe0eb3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fe0eb6 jmp 0x11fe0ec5 */
  goto L_11fe0ec5;
L_11fe0eb8:;
  /* 11fe0eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe0ebb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0ebe mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11fe0ec5:;
  /* 11fe0ec5 jmp 0x11fe0e8a */
  goto L_11fe0e8a;
L_11fe0ec7:;
  /* 11fe0ec7 pop esi */
  ESI = (pop32());
  /* 11fe0ec8 mov esp, ebp */
  ESP = (EBP);
  /* 11fe0eca pop ebp */
  EBP = (pop32());
  /* 11fe0ecb ret  */
  ESPCHK(0x11fe0de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ed0 @ 0x11fe0ed0 (578 bytes, 188 insns) */
void f_11fe0ed0(void) {
  FTRACE(0x11fe0ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe0ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe0ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe0ed3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0ed9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0edb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11fe0edf and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe0ee5 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe0eee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0ef3 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11fe0ef7 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0efc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe0eff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0f02 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11fe0f05 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe0f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0f0b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11fe0f0e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe0f11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe0f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe0f16 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fe0f19 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fe0f1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe0f1f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0f26 jne 0x11fe0f60 */
  if (!C.zf) goto L_11fe0f60;
  /* 11fe0f28 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe0f2f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11fe0f32 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0f33 call 0x11fe0da0 */
  push32(0x11fe0f38u); f_11fe0da0();
  /* 11fe0f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0f3d je 0x11fe0f48 */
  if (C.zf) goto L_11fe0f48;
  /* 11fe0f3f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe0f46 jmp 0x11fe0f5b */
  goto L_11fe0f5b;
L_11fe0f48:;
  /* 11fe0f48 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11fe0f4b push edx */
  push32((uint32_t)(EDX));
  /* 11fe0f4c call 0x11fe0d70 */
  push32(0x11fe0f51u); f_11fe0d70();
  /* 11fe0f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0f54 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11fe0f5b:;
  /* 11fe0f5b jmp 0x11fe10ac */
  goto L_11fe10ac;
L_11fe0f60:;
  /* 11fe0f60 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe0f63 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0f64 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11fe0f67 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0f68 call 0x11fe0d20 */
  push32(0x11fe0f6du); f_11fe0d20();
  /* 11fe0f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0f70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0f73 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe0f76 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0f77 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11fe0f7a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0f7b call 0x11fe0c40 */
  push32(0x11fe0f80u); f_11fe0c40();
  /* 11fe0f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0f83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe0f85 je 0x11fe0f90 */
  if (C.zf) goto L_11fe0f90;
  /* 11fe0f87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0f8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0f8d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe0f90:;
  /* 11fe0f90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0f93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0f96 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe0f99 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0f9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0f9f jge 0x11fe0fc0 */
  if ((C.sf==C.of)) goto L_11fe0fc0;
  /* 11fe0fa1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe0fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe0fa5 call 0x11fe0d70 */
  push32(0x11fe0faau); f_11fe0d70();
  /* 11fe0faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0fad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe0fb4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11fe0fbb jmp 0x11fe10ac */
  goto L_11fe10ac;
L_11fe0fc0:;
  /* 11fe0fc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0fc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe0fc6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe0fc9 jg 0x11fe1030 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe1030;
  /* 11fe0fcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0fce mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe0fd1 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe0fd4 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11fe0fd7 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11fe0fda push edx */
  push32((uint32_t)(EDX));
  /* 11fe0fdb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe0fde push eax */
  push32((uint32_t)(EAX));
  /* 11fe0fdf call 0x11fe0d20 */
  push32(0x11fe0fe4u); f_11fe0d20();
  /* 11fe0fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0fe7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe0fea push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0feb lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11fe0fee push edx */
  push32((uint32_t)(EDX));
  /* 11fe0fef call 0x11fe0de0 */
  push32(0x11fe0ff4u); f_11fe0de0();
  /* 11fe0ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe0ff7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe0ffa mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe0ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11fe0ffe lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11fe1001 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1002 call 0x11fe0c40 */
  push32(0x11fe1007u); f_11fe0c40();
  /* 11fe1007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe100a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe100d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe1010 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1013 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1014 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11fe1017 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1018 call 0x11fe0de0 */
  push32(0x11fe101du); f_11fe0de0();
  /* 11fe101d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1020 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe1027 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11fe102e jmp 0x11fe10ac */
  goto L_11fe10ac;
L_11fe1030:;
  /* 11fe1030 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1036 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1038 jl 0x11fe107b */
  if ((C.sf!=C.of)) goto L_11fe107b;
  /* 11fe103a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11fe103d push edx */
  push32((uint32_t)(EDX));
  /* 11fe103e call 0x11fe0d70 */
  push32(0x11fe1043u); f_11fe0d70();
  /* 11fe1043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1046 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe1049 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe104e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe1051 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1054 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe1057 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1058 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe105b push eax */
  push32((uint32_t)(EAX));
  /* 11fe105c call 0x11fe0de0 */
  push32(0x11fe1061u); f_11fe0de0();
  /* 11fe1061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1067 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe1069 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe106c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe106f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe1072 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11fe1079 jmp 0x11fe10ac */
  goto L_11fe10ac;
L_11fe107b:;
  /* 11fe107b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe107e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1081 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1084 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe1087 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe108a and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe108f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe1092 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1095 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe1098 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1099 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe109c push eax */
  push32((uint32_t)(EAX));
  /* 11fe109d call 0x11fe0de0 */
  push32(0x11fe10a2u); f_11fe0de0();
  /* 11fe10a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe10a5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11fe10ac:;
  /* 11fe10ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe10af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe10b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe10b5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11fe10ba sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe10bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe10bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe10c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe10c5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe10c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe10ca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe10cc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe10cf neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe10d1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe10d3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe10d9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe10db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe10de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe10e1 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe10e5 jne 0x11fe10fa */
  if (!C.zf) goto L_11fe10fa;
  /* 11fe10e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe10ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe10ed mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fe10f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe10f3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe10f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe10f8 jmp 0x11fe110b */
  goto L_11fe110b;
L_11fe10fa:;
  /* 11fe10fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe10fd cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1101 jne 0x11fe110b */
  if (!C.zf) goto L_11fe110b;
  /* 11fe1103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1106 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe1109 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11fe110b:;
  /* 11fe110b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe110e mov esp, ebp */
  ESP = (EBP);
  /* 11fe1110 pop ebp */
  EBP = (pop32());
  /* 11fe1111 ret  */
  ESPCHK(0x11fe0ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x11fe1120 (26 bytes, 11 insns) */
void f_11fe1120(void) {
  FTRACE(0x11fe1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1120 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1121 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1123 push 0x1200d1f8 */
  push32((uint32_t)(0x1200d1f8u));
  /* 11fe1128 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe112b push eax */
  push32((uint32_t)(EAX));
  /* 11fe112c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe112f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1130 call 0x11fe0ed0 */
  push32(0x11fe1135u); f_11fe0ed0();
  /* 11fe1135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1138 pop ebp */
  EBP = (pop32());
  /* 11fe1139 ret  */
  ESPCHK(0x11fe1120u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x11fe1140 (26 bytes, 11 insns) */
void f_11fe1140(void) {
  FTRACE(0x11fe1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1140 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1141 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1143 push 0x1200d210 */
  push32((uint32_t)(0x1200d210u));
  /* 11fe1148 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe114b push eax */
  push32((uint32_t)(EAX));
  /* 11fe114c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe114f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1150 call 0x11fe0ed0 */
  push32(0x11fe1155u); f_11fe0ed0();
  /* 11fe1155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1158 pop ebp */
  EBP = (pop32());
  /* 11fe1159 ret  */
  ESPCHK(0x11fe1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11fe1160 (191 bytes, 58 insns) */
void f_11fe1160(void) {
  FTRACE(0x11fe1160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1161 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1163 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1166 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fe116d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1170 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1172 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11fe1176 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe117c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11fe1180 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1185 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11fe1189 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe118e mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11fe1192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1195 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11fe1198 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe119b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe119e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11fe11a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe11a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe11a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe11a9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fe11ac shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fe11af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe11b2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11fe11b4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fe11b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe11b8 call 0x11fe0c40 */
  push32(0x11fe11bdu); f_11fe0c40();
  /* 11fe11bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe11c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe11c2 je 0x11fe11d7 */
  if (C.zf) goto L_11fe11d7;
  /* 11fe11c4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11fe11cb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe11cf add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fe11d3 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11fe11d7:;
  /* 11fe11d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe11da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe11df cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe11e4 jne 0x11fe11ed */
  if (!C.zf) goto L_11fe11ed;
  /* 11fe11e6 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11fe11ed:;
  /* 11fe11ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe11f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe11f3 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fe11f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe11f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe11fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe11fe mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe1201 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe120a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe120f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1211 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1214 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11fe1218 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe121b mov esp, ebp */
  ESP = (EBP);
  /* 11fe121d pop ebp */
  EBP = (pop32());
  /* 11fe121e ret  */
  ESPCHK(0x11fe1160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x11fe1220 (54 bytes, 24 insns) */
void f_11fe1220(void) {
  FTRACE(0x11fe1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1220 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1221 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1223 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1226 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe122a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe122c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe122e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1231 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1232 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fe1235 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1236 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe1239 push edx */
  push32((uint32_t)(EDX));
  /* 11fe123a call 0x11fe8840 */
  push32(0x11fe123fu); f_11fe8840();
  /* 11fe123f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1245 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1246 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fe1249 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe124a call 0x11fe1120 */
  push32(0x11fe124fu); f_11fe1120();
  /* 11fe124f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1252 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1254 pop ebp */
  EBP = (pop32());
  /* 11fe1255 ret  */
  ESPCHK(0x11fe1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x11fe1260 (54 bytes, 24 insns) */
void f_11fe1260(void) {
  FTRACE(0x11fe1260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1260 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1261 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1263 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1266 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1268 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe126a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe126c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe126e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1271 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1272 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fe1275 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1276 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe1279 push edx */
  push32((uint32_t)(EDX));
  /* 11fe127a call 0x11fe8840 */
  push32(0x11fe127fu); f_11fe8840();
  /* 11fe127f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1285 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1286 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fe1289 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe128a call 0x11fe1160 */
  push32(0x11fe128fu); f_11fe1160();
  /* 11fe128f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1292 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1294 pop ebp */
  EBP = (pop32());
  /* 11fe1295 ret  */
  ESPCHK(0x11fe1260u, _esp0);
  ESP += 4; return;
}

/* FUN_100112a0 @ 0x11fe12a0 (54 bytes, 24 insns) */
void f_11fe12a0(void) {
  FTRACE(0x11fe12a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe12a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe12a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe12a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe12a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe12a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe12aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe12ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe12ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe12b1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe12b2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fe12b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe12b6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe12b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe12ba call 0x11fe8840 */
  push32(0x11fe12bfu); f_11fe8840();
  /* 11fe12bf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe12c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe12c5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe12c6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fe12c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe12ca call 0x11fe1140 */
  push32(0x11fe12cfu); f_11fe1140();
  /* 11fe12cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe12d2 mov esp, ebp */
  ESP = (EBP);
  /* 11fe12d4 pop ebp */
  EBP = (pop32());
  /* 11fe12d5 ret  */
  ESPCHK(0x11fe12a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x11fe12e0 (250 bytes, 90 insns) */
void f_11fe12e0(void) {
  FTRACE(0x11fe12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe12e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe12e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe12e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe12e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe12ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe12ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe12f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe12f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe12f8 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11fe12fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe12fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1301 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe1304:;
  /* 11fe1304 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1308 jle 0x11fe134b */
  if ((C.zf||C.sf!=C.of)) goto L_11fe134b;
  /* 11fe130a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe130d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe1310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1312 je 0x11fe1328 */
  if (C.zf) goto L_11fe1328;
  /* 11fe1314 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1317 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe131a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe131d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1320 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1323 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe1326 jmp 0x11fe132f */
  goto L_11fe132f;
L_11fe1328:;
  /* 11fe1328 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11fe132f:;
  /* 11fe132f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1332 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fe1335 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11fe1337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe133a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe133d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1340 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1343 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1346 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fe1349 jmp 0x11fe1304 */
  goto L_11fe1304;
L_11fe134b:;
  /* 11fe134b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe134e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fe1351 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1355 jl 0x11fe1394 */
  if ((C.sf!=C.of)) goto L_11fe1394;
  /* 11fe1357 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe135a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe135d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1360 jl 0x11fe1394 */
  if ((C.sf!=C.of)) goto L_11fe1394;
  /* 11fe1362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1365 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1368 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe136b:;
  /* 11fe136b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe136e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe1371 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1374 jne 0x11fe1387 */
  if (!C.zf) goto L_11fe1387;
  /* 11fe1376 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1379 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11fe137c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe137f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1385 jmp 0x11fe136b */
  goto L_11fe136b;
L_11fe1387:;
  /* 11fe1387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe138a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe138c add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe138f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1392 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11fe1394:;
  /* 11fe1394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe139a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe139d jne 0x11fe13b0 */
  if (!C.zf) goto L_11fe13b0;
  /* 11fe139f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe13a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe13a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe13ab mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe13ae jmp 0x11fe13d6 */
  goto L_11fe13d6;
L_11fe13b0:;
  /* 11fe13b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe13b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13b6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe13b7 call 0x11fdf750 */
  push32(0x11fe13bcu); f_11fdf750();
  /* 11fe13bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13c2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe13c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe13c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe13ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe13cd push edx */
  push32((uint32_t)(EDX));
  /* 11fe13ce call 0x11fe1630 */
  push32(0x11fe13d3u); f_11fe1630();
  /* 11fe13d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe13d6:;
  /* 11fe13d6 mov esp, ebp */
  ESP = (EBP);
  /* 11fe13d8 pop ebp */
  EBP = (pop32());
  /* 11fe13d9 ret  */
  ESPCHK(0x11fe12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x11fe13e0 (119 bytes, 44 insns) */
void f_11fe13e0(void) {
  FTRACE(0x11fe13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe13e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe13e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe13e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11fe13e9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe13ea lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fe13ed push ecx */
  push32((uint32_t)(ECX));
  /* 11fe13ee call 0x11fe1460 */
  push32(0x11fe13f3u); f_11fe1460();
  /* 11fe13f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe13f6 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11fe13f9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe13fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe13fc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fe13fe sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1401 mov eax, esp */
  EAX = (ESP);
  /* 11fe1403 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe1406 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe1408 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe140b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe140e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe1412 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11fe1416 call 0x11fe93c0 */
  push32(0x11fe141bu); f_11fe93c0();
  /* 11fe141b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe141e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1421 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe1424 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11fe1428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe142b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe142d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11fe1431 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1434 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe1437 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11fe143a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe143b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe143e push edx */
  push32((uint32_t)(EDX));
  /* 11fe143f call 0x11fdf8d0 */
  push32(0x11fe1444u); f_11fdf8d0();
  /* 11fe1444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1447 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe144a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe144d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11fe1450 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe1453 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1455 pop ebp */
  EBP = (pop32());
  /* 11fe1456 ret  */
  ESPCHK(0x11fe13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011460 @ 0x11fe1460 (354 bytes, 104 insns) */
void f_11fe1460(void) {
  FTRACE(0x11fe1460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1460 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1461 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1463 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1466 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11fe146d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe1473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1478 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11fe147c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1482 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fe1485 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11fe1489 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe148c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe148e mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11fe1492 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1497 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11fe149b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe149e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe14a1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe14a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe14aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe14ad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe14af mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe14b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe14b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe14bb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fe14be cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe14c2 je 0x11fe14d7 */
  if (C.zf) goto L_11fe14d7;
  /* 11fe14c4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe14cb je 0x11fe14cf */
  if (C.zf) goto L_11fe14cf;
  /* 11fe14cd jmp 0x11fe151a */
  goto L_11fe151a;
L_11fe14cf:;
  /* 11fe14cf mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11fe14d5 jmp 0x11fe1535 */
  goto L_11fe1535;
L_11fe14d7:;
  /* 11fe14d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe14db jne 0x11fe1504 */
  if (!C.zf) goto L_11fe1504;
  /* 11fe14dd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe14e1 jne 0x11fe1504 */
  if (!C.zf) goto L_11fe1504;
  /* 11fe14e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe14e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fe14ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe14f0 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11fe14f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe14f9 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11fe14ff jmp 0x11fe15be */
  goto L_11fe15be;
L_11fe1504:;
  /* 11fe1504 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11fe1508 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe150d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fe1511 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe1518 jmp 0x11fe1535 */
  goto L_11fe1535;
L_11fe151a:;
  /* 11fe151a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11fe151e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fe1523 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11fe1527 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11fe152b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1531 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11fe1535:;
  /* 11fe1535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1538 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11fe153b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe153e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1540 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe1543 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11fe1546 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe154b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fe154e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe1551 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11fe1554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1557 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe1559:;
  /* 11fe1559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe155c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe155f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe1567 jne 0x11fe15a4 */
  if (!C.zf) goto L_11fe15a4;
  /* 11fe1569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe156c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe156f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe1571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1574 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe1576 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe157c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe157e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1580 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe1582 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1587 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe158a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe158d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe158f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe1591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1594 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe1596 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fe159a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fe159e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11fe15a2 jmp 0x11fe1559 */
  goto L_11fe1559;
L_11fe15a4:;
  /* 11fe15a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe15a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe15ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe15af and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe15b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe15b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe15ba mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11fe15be:;
  /* 11fe15be mov esp, ebp */
  ESP = (EBP);
  /* 11fe15c0 pop ebp */
  EBP = (pop32());
  /* 11fe15c1 ret  */
  ESPCHK(0x11fe1460u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11fe15d0 (88 bytes, 40 insns) */
void f_11fe15d0(void) {
  FTRACE(0x11fe15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe15d0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fe15d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fe15d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe15da je 0x11fe1623 */
  if (C.zf) goto L_11fe1623;
  /* 11fe15dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe15de mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11fe15e2 push edi */
  push32((uint32_t)(EDI));
  /* 11fe15e3 mov edi, ecx */
  EDI = (ECX);
  /* 11fe15e5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe15e8 jb 0x11fe1617 */
  if (C.cf) goto L_11fe1617;
  /* 11fe15ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe15ec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe15ef je 0x11fe15f9 */
  if (C.zf) goto L_11fe15f9;
  /* 11fe15f1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11fe15f3:;
  /* 11fe15f3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe15f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe15f6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fe15f7 jne 0x11fe15f3 */
  if (!C.zf) goto L_11fe15f3;
L_11fe15f9:;
  /* 11fe15f9 mov ecx, eax */
  ECX = (EAX);
  /* 11fe15fb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11fe15fe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1600 mov ecx, eax */
  ECX = (EAX);
  /* 11fe1602 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fe1605 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1607 mov ecx, edx */
  ECX = (EDX);
  /* 11fe1609 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe160c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe160f je 0x11fe1617 */
  if (C.zf) goto L_11fe1617;
  /* 11fe1611 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fe1613 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe1615 je 0x11fe161d */
  if (C.zf) goto L_11fe161d;
L_11fe1617:;
  /* 11fe1617 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe1619 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe161a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11fe161b jne 0x11fe1617 */
  if (!C.zf) goto L_11fe1617;
L_11fe161d:;
  /* 11fe161d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fe1621 pop edi */
  EDI = (pop32());
  /* 11fe1622 ret  */
  ESPCHK(0x11fe15d0u, _esp0);
  ESP += 4; return;
L_11fe1623:;
  /* 11fe1623 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fe1627 ret  */
  ESPCHK(0x11fe15d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011630 @ 0x11fe1630 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11fe1630(void) {
  FTRACE(0x11fe1630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1630 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1631 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1633 push edi */
  push32((uint32_t)(EDI));
  /* 11fe1634 push esi */
  push32((uint32_t)(ESI));
  /* 11fe1635 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1638 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe163b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe163e mov eax, ecx */
  EAX = (ECX);
  /* 11fe1640 mov edx, ecx */
  EDX = (ECX);
  /* 11fe1642 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1644 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1646 jbe 0x11fe1650 */
  if ((C.cf||C.zf)) goto L_11fe1650;
  /* 11fe1648 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe164a jb 0x11fe17c8 */
  if (C.cf) goto L_11fe17c8;
L_11fe1650:;
  /* 11fe1650 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe1656 jne 0x11fe166c */
  if (!C.zf) goto L_11fe166c;
  /* 11fe1658 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe165b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe165e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1661 jb 0x11fe168c */
  if (C.cf) goto L_11fe168c;
  /* 11fe1663 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe1665 jmp dword ptr [edx*4 + 0x11fe1778] */
  switch (EDX) {
    case 0: goto L_11fe1788;
    case 1: goto L_11fe1790;
    case 2: goto L_11fe179c;
    case 3: goto L_11fe17b0;
    default: x86_unimpl("switch@0x11fe1665 out of table"); return;
  }
L_11fe166c:;
  /* 11fe166c mov eax, edi */
  EAX = (EDI);
  /* 11fe166e mov edx, 3 */
  EDX = (0x3u);
  /* 11fe1673 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1676 jb 0x11fe1684 */
  if (C.cf) goto L_11fe1684;
  /* 11fe1678 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe167b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe167d jmp dword ptr [eax*4 + 0x11fe1690] */
  switch (EAX) {
    case 1: goto L_11fe16a0;
    case 2: goto L_11fe16cc;
    case 3: goto L_11fe16f0;
    default: x86_unimpl("switch@0x11fe167d out of table"); return;
  }
L_11fe1684:;
  /* 11fe1684 jmp dword ptr [ecx*4 + 0x11fe1788] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11fe1788)))); return;
  /* 11fe168b nop  */
  /* nop */
L_11fe168c:;
  /* 11fe168c jmp dword ptr [ecx*4 + 0x11fe170c] */
  switch (ECX) {
    case 0: goto L_11fe176f;
    case 1: goto L_11fe175c;
    case 2: goto L_11fe1754;
    case 3: goto L_11fe174c;
    case 4: goto L_11fe1744;
    case 5: goto L_11fe173c;
    case 6: goto L_11fe1734;
    case 7: goto L_11fe172c;
    default: x86_unimpl("switch@0x11fe168c out of table"); return;
  }
  /* 11fe1693 nop  */
  /* nop */
L_11fe16a0:;
  /* 11fe16a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe16a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe16a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe16a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe16a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe16ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe16af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe16b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe16b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe16b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe16bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe16be jb 0x11fe168c */
  if (C.cf) goto L_11fe168c;
  /* 11fe16c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe16c2 jmp dword ptr [edx*4 + 0x11fe1778] */
  switch (EDX) {
    case 0: goto L_11fe1788;
    case 1: goto L_11fe1790;
    case 2: goto L_11fe179c;
    case 3: goto L_11fe17b0;
    default: x86_unimpl("switch@0x11fe16c2 out of table"); return;
  }
  /* 11fe16c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe16cc:;
  /* 11fe16cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe16ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe16d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe16d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe16d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe16d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe16db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe16de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe16e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe16e4 jb 0x11fe168c */
  if (C.cf) goto L_11fe168c;
  /* 11fe16e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe16e8 jmp dword ptr [edx*4 + 0x11fe1778] */
  switch (EDX) {
    case 0: goto L_11fe1788;
    case 1: goto L_11fe1790;
    case 2: goto L_11fe179c;
    case 3: goto L_11fe17b0;
    default: x86_unimpl("switch@0x11fe16e8 out of table"); return;
  }
  /* 11fe16ef nop  */
  /* nop */
L_11fe16f0:;
  /* 11fe16f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe16f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe16f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe16f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fe16f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe16fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe16fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe16fe jb 0x11fe168c */
  if (C.cf) goto L_11fe168c;
  /* 11fe1700 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe1702 jmp dword ptr [edx*4 + 0x11fe1778] */
  switch (EDX) {
    case 0: goto L_11fe1788;
    case 1: goto L_11fe1790;
    case 2: goto L_11fe179c;
    case 3: goto L_11fe17b0;
    default: x86_unimpl("switch@0x11fe1702 out of table"); return;
  }
  /* 11fe1709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe172c:;
  /* 11fe172c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11fe1730 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11fe1734:;
  /* 11fe1734 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11fe1738 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11fe173c:;
  /* 11fe173c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11fe1740 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11fe1744:;
  /* 11fe1744 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11fe1748 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11fe174c:;
  /* 11fe174c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11fe1750 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11fe1754:;
  /* 11fe1754 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11fe1758 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11fe175c:;
  /* 11fe175c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11fe1760 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11fe1764 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11fe176b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe176d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11fe176f:;
  /* 11fe176f jmp dword ptr [edx*4 + 0x11fe1778] */
  switch (EDX) {
    case 0: goto L_11fe1788;
    case 1: goto L_11fe1790;
    case 2: goto L_11fe179c;
    case 3: goto L_11fe17b0;
    default: x86_unimpl("switch@0x11fe176f out of table"); return;
  }
  /* 11fe1776 mov edi, edi */
  EDI = (EDI);
L_11fe1788:;
  /* 11fe1788 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe178b pop esi */
  ESI = (pop32());
  /* 11fe178c pop edi */
  EDI = (pop32());
  /* 11fe178d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe178e ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe178f nop  */
  /* nop */
L_11fe1790:;
  /* 11fe1790 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe1792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe1794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1797 pop esi */
  ESI = (pop32());
  /* 11fe1798 pop edi */
  EDI = (pop32());
  /* 11fe1799 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe179a ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe179b nop  */
  /* nop */
L_11fe179c:;
  /* 11fe179c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe179e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe17a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe17a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe17a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe17a9 pop esi */
  ESI = (pop32());
  /* 11fe17aa pop edi */
  EDI = (pop32());
  /* 11fe17ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe17ac ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe17ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe17b0:;
  /* 11fe17b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe17b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe17b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe17b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe17ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe17bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe17c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe17c3 pop esi */
  ESI = (pop32());
  /* 11fe17c4 pop edi */
  EDI = (pop32());
  /* 11fe17c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe17c6 ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe17c7 nop  */
  /* nop */
L_11fe17c8:;
  /* 11fe17c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11fe17cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11fe17d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe17d6 jne 0x11fe17fc */
  if (!C.zf) goto L_11fe17fc;
  /* 11fe17d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe17db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe17de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe17e1 jb 0x11fe17f0 */
  if (C.cf) goto L_11fe17f0;
  /* 11fe17e3 std  */
  C.df=1;
  /* 11fe17e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe17e6 cld  */
  C.df=0;
  /* 11fe17e7 jmp dword ptr [edx*4 + 0x11fe1910] */
  switch (EDX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe17e7 out of table"); return;
  }
  /* 11fe17ee mov edi, edi */
  EDI = (EDI);
L_11fe17f0:;
  /* 11fe17f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe17f2 jmp dword ptr [ecx*4 + 0x11fe18c0] */
  switch (ECX) {
    case 0: goto L_11fe1907;
    default: x86_unimpl("switch@0x11fe17f2 out of table"); return;
  }
  /* 11fe17f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe17fc:;
  /* 11fe17fc mov eax, edi */
  EAX = (EDI);
  /* 11fe17fe mov edx, 3 */
  EDX = (0x3u);
  /* 11fe1803 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1806 jb 0x11fe1814 */
  if (C.cf) goto L_11fe1814;
  /* 11fe1808 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe180b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe180d jmp dword ptr [eax*4 + 0x11fe1818] */
  switch (EAX) {
    case 1: goto L_11fe1828;
    case 2: goto L_11fe1848;
    case 3: goto L_11fe1870;
    default: x86_unimpl("switch@0x11fe180d out of table"); return;
  }
L_11fe1814:;
  /* 11fe1814 jmp dword ptr [ecx*4 + 0x11fe1910] */
  switch (ECX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe1814 out of table"); return;
  }
  /* 11fe181b nop  */
  /* nop */
L_11fe1828:;
  /* 11fe1828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe182b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe182d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe1830 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11fe1831 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe1834 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11fe1835 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1838 jb 0x11fe17f0 */
  if (C.cf) goto L_11fe17f0;
  /* 11fe183a std  */
  C.df=1;
  /* 11fe183b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe183d cld  */
  C.df=0;
  /* 11fe183e jmp dword ptr [edx*4 + 0x11fe1910] */
  switch (EDX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe183e out of table"); return;
  }
  /* 11fe1845 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe1848:;
  /* 11fe1848 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe184b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe184d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe1850 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe1853 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe1856 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe1859 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe185c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe185f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1862 jb 0x11fe17f0 */
  if (C.cf) goto L_11fe17f0;
  /* 11fe1864 std  */
  C.df=1;
  /* 11fe1865 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe1867 cld  */
  C.df=0;
  /* 11fe1868 jmp dword ptr [edx*4 + 0x11fe1910] */
  switch (EDX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe1868 out of table"); return;
  }
  /* 11fe186f nop  */
  /* nop */
L_11fe1870:;
  /* 11fe1870 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe1873 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1875 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe1878 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe187b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe187e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe1881 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe1884 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe1887 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe188a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe188d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1890 jb 0x11fe17f0 */
  if (C.cf) goto L_11fe17f0;
  /* 11fe1896 std  */
  C.df=1;
  /* 11fe1897 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe1899 cld  */
  C.df=0;
  /* 11fe189a jmp dword ptr [edx*4 + 0x11fe1910] */
  switch (EDX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe189a out of table"); return;
  }
  /* 11fe18a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11fe18a4 les ebx, ptr [eax] */
  x86_unimpl("les @ 0x11fe18a4");
  /* 11fe18a7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18a9 sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18ab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18ad sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18af adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18b1 sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18b3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18b5 sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18b7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18b9 sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe18bd sbb dh, bh */
  { uint32_t _a=(C.d.b.h),_b=(C.b.b.h),_r=_a-_b-C.cf; C.d.b.h = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe18c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11fe18c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11fe18cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11fe18d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11fe18d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11fe18d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11fe18dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11fe18e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11fe18e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11fe18e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11fe18ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11fe18f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11fe18f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11fe18f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11fe18fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11fe1903 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1905 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11fe1907:;
  /* 11fe1907 jmp dword ptr [edx*4 + 0x11fe1910] */
  switch (EDX) {
    case 0: goto L_11fe1920;
    case 1: goto L_11fe1928;
    case 2: goto L_11fe1938;
    case 3: goto L_11fe194c;
    default: x86_unimpl("switch@0x11fe1907 out of table"); return;
  }
  /* 11fe190e mov edi, edi */
  EDI = (EDI);
L_11fe1920:;
  /* 11fe1920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1923 pop esi */
  ESI = (pop32());
  /* 11fe1924 pop edi */
  EDI = (pop32());
  /* 11fe1925 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe1926 ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe1927 nop  */
  /* nop */
L_11fe1928:;
  /* 11fe1928 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe192b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe192e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1931 pop esi */
  ESI = (pop32());
  /* 11fe1932 pop edi */
  EDI = (pop32());
  /* 11fe1933 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe1934 ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe1935 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe1938:;
  /* 11fe1938 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe193b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe193e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe1941 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe1944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1947 pop esi */
  ESI = (pop32());
  /* 11fe1948 pop edi */
  EDI = (pop32());
  /* 11fe1949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe194a ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
  /* 11fe194b nop  */
  /* nop */
L_11fe194c:;
  /* 11fe194c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe194f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe1952 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe1955 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe1958 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe195b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe195e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1961 pop esi */
  ESI = (pop32());
  /* 11fe1962 pop edi */
  EDI = (pop32());
  /* 11fe1963 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe1964 ret  */
  ESPCHK(0x11fe1630u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11fe1970 (15 bytes, 7 insns) */
void f_11fe1970(void) {
  FTRACE(0x11fe1970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1970 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1971 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1973 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe1975 call 0x11fd9c30 */
  push32(0x11fe197au); f_11fd9c30();
  /* 11fe197a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe197d pop ebp */
  EBP = (pop32());
  /* 11fe197e ret  */
  ESPCHK(0x11fe1970u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11fe1980 (48 bytes, 17 insns) */
void f_11fe1980(void) {
  FTRACE(0x11fe1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1980 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1981 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1983 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1984 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1986 call 0x11fdb0c0 */
  push32(0x11fe198bu); f_11fdb0c0();
  /* 11fe198b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe198e mov eax, dword ptr [0x1200f114] */
  EAX = (r32((uint32_t)(0x1200f114)));
  /* 11fe1993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1999 mov dword ptr [0x1200f114], ecx */
  w32((uint32_t)(0x1200f114), (ECX));
  /* 11fe199f push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe19a1 call 0x11fdb160 */
  push32(0x11fe19a6u); f_11fdb160();
  /* 11fe19a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe19a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe19ac mov esp, ebp */
  ESP = (EBP);
  /* 11fe19ae pop ebp */
  EBP = (pop32());
  /* 11fe19af ret  */
  ESPCHK(0x11fe1980u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x11fe19b0 (10 bytes, 5 insns) */
void f_11fe19b0(void) {
  FTRACE(0x11fe19b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe19b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe19b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe19b3 mov eax, dword ptr [0x1200f114] */
  EAX = (r32((uint32_t)(0x1200f114)));
  /* 11fe19b8 pop ebp */
  EBP = (pop32());
  /* 11fe19b9 ret  */
  ESPCHK(0x11fe19b0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11fe19c0 (45 bytes, 19 insns) */
void f_11fe19c0(void) {
  FTRACE(0x11fe19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe19c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe19c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe19c4 mov eax, dword ptr [0x1200f114] */
  EAX = (r32((uint32_t)(0x1200f114)));
  /* 11fe19c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe19cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe19d0 je 0x11fe19e0 */
  if (C.zf) goto L_11fe19e0;
  /* 11fe19d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe19d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe19d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11fe19d9u);
  /* 11fe19d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe19dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe19de jne 0x11fe19e4 */
  if (!C.zf) goto L_11fe19e4;
L_11fe19e0:;
  /* 11fe19e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe19e2 jmp 0x11fe19e9 */
  goto L_11fe19e9;
L_11fe19e4:;
  /* 11fe19e4 mov eax, 1 */
  EAX = (0x1u);
L_11fe19e9:;
  /* 11fe19e9 mov esp, ebp */
  ESP = (EBP);
  /* 11fe19eb pop ebp */
  EBP = (pop32());
  /* 11fe19ec ret  */
  ESPCHK(0x11fe19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119f0 @ 0x11fe19f0 (23 bytes, 10 insns) */
void f_11fe19f0(void) {
  FTRACE(0x11fe19f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe19f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe19f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe19f3 mov eax, dword ptr [0x1200f110] */
  EAX = (r32((uint32_t)(0x1200f110)));
  /* 11fe19f8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe19f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe19fc push ecx */
  push32((uint32_t)(ECX));
  /* 11fe19fd call 0x11fe1a10 */
  push32(0x11fe1a02u); f_11fe1a10();
  /* 11fe1a02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1a05 pop ebp */
  EBP = (pop32());
  /* 11fe1a06 ret  */
  ESPCHK(0x11fe19f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11fe1a10 (87 bytes, 34 insns) */
void f_11fe1a10(void) {
  FTRACE(0x11fe1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1a11 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1a14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1a18 jbe 0x11fe1a1e */
  if ((C.cf||C.zf)) goto L_11fe1a1e;
  /* 11fe1a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1a1c jmp 0x11fe1a63 */
  goto L_11fe1a63;
L_11fe1a1e:;
  /* 11fe1a1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1a22 ja 0x11fe1a35 */
  if ((!C.cf&&!C.zf)) goto L_11fe1a35;
  /* 11fe1a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1a27 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1a28 call 0x11fe1a70 */
  push32(0x11fe1a2du); f_11fe1a70();
  /* 11fe1a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1a30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1a33 jmp 0x11fe1a3c */
  goto L_11fe1a3c;
L_11fe1a35:;
  /* 11fe1a35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe1a3c:;
  /* 11fe1a3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1a40 jne 0x11fe1a48 */
  if (!C.zf) goto L_11fe1a48;
  /* 11fe1a42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1a46 jne 0x11fe1a4d */
  if (!C.zf) goto L_11fe1a4d;
L_11fe1a48:;
  /* 11fe1a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1a4b jmp 0x11fe1a63 */
  goto L_11fe1a63;
L_11fe1a4d:;
  /* 11fe1a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1a50 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1a51 call 0x11fe19c0 */
  push32(0x11fe1a56u); f_11fe19c0();
  /* 11fe1a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1a5b jne 0x11fe1a61 */
  if (!C.zf) goto L_11fe1a61;
  /* 11fe1a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1a5f jmp 0x11fe1a63 */
  goto L_11fe1a63;
L_11fe1a61:;
  /* 11fe1a61 jmp 0x11fe1a1e */
  goto L_11fe1a1e;
L_11fe1a63:;
  /* 11fe1a63 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1a65 pop ebp */
  EBP = (pop32());
  /* 11fe1a66 ret  */
  ESPCHK(0x11fe1a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x11fe1a70 (109 bytes, 37 insns) */
void f_11fe1a70(void) {
  FTRACE(0x11fe1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1a71 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1a77 cmp eax, dword ptr [0x1200d234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1a7d ja 0x11fe1aad */
  if ((!C.cf&&!C.zf)) goto L_11fe1aad;
  /* 11fe1a7f push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1a81 call 0x11fdb0c0 */
  push32(0x11fe1a86u); f_11fdb0c0();
  /* 11fe1a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1a89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1a8c push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1a8d call 0x11fe25b0 */
  push32(0x11fe1a92u); f_11fe25b0();
  /* 11fe1a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1a95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1a98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1a9a call 0x11fdb160 */
  push32(0x11fe1a9fu); f_11fdb160();
  /* 11fe1a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1aa2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1aa6 je 0x11fe1aad */
  if (C.zf) goto L_11fe1aad;
  /* 11fe1aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1aab jmp 0x11fe1ad9 */
  goto L_11fe1ad9;
L_11fe1aad:;
  /* 11fe1aad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1ab1 jne 0x11fe1aba */
  if (!C.zf) goto L_11fe1aba;
  /* 11fe1ab3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11fe1aba:;
  /* 11fe1aba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1abd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1ac0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1ac3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fe1ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1ac9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1aca push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1acc mov ecx, dword ptr [0x120108cc] */
  ECX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1ad3 call dword ptr [0x1201139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201139c))), 0x11fe1ad9u);
L_11fe1ad9:;
  /* 11fe1ad9 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1adb pop ebp */
  EBP = (pop32());
  /* 11fe1adc ret  */
  ESPCHK(0x11fe1a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ae0 @ 0x11fe1ae0 (10 bytes, 5 insns) */
void f_11fe1ae0(void) {
  FTRACE(0x11fe1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1ae3 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe1ae8 pop ebp */
  EBP = (pop32());
  /* 11fe1ae9 ret  */
  ESPCHK(0x11fe1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x11fe1af0 (173 bytes, 59 insns) */
void f_11fe1af0(void) {
  FTRACE(0x11fe1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1af1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1af6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1afa jbe 0x11fe1b03 */
  if ((C.cf||C.zf)) goto L_11fe1b03;
  /* 11fe1afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1afe jmp 0x11fe1b99 */
  goto L_11fe1b99;
L_11fe1b03:;
  /* 11fe1b03 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1b05 call 0x11fdb0c0 */
  push32(0x11fe1b0au); f_11fdb0c0();
  /* 11fe1b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1b10 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1b11 call 0x11fe1f20 */
  push32(0x11fe1b16u); f_11fe1f20();
  /* 11fe1b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe1b1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1b20 je 0x11fe1b61 */
  if (C.zf) goto L_11fe1b61;
  /* 11fe1b22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe1b29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1b2c cmp ecx, dword ptr [0x1200d234] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1b32 ja 0x11fe1b52 */
  if ((!C.cf&&!C.zf)) goto L_11fe1b52;
  /* 11fe1b34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1b37 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1b3b push eax */
  push32((uint32_t)(EAX));
  /* 11fe1b3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1b3f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1b40 call 0x11fe2df0 */
  push32(0x11fe1b45u); f_11fe2df0();
  /* 11fe1b45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1b4a je 0x11fe1b52 */
  if (C.zf) goto L_11fe1b52;
  /* 11fe1b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1b4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe1b52:;
  /* 11fe1b52 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1b54 call 0x11fdb160 */
  push32(0x11fe1b59u); f_11fdb160();
  /* 11fe1b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1b5f jmp 0x11fe1b99 */
  goto L_11fe1b99;
L_11fe1b61:;
  /* 11fe1b61 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1b63 call 0x11fdb160 */
  push32(0x11fe1b68u); f_11fdb160();
  /* 11fe1b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1b6f jne 0x11fe1b78 */
  if (!C.zf) goto L_11fe1b78;
  /* 11fe1b71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11fe1b78:;
  /* 11fe1b78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1b7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1b7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11fe1b80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fe1b83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1b86 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1b87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1b8a push edx */
  push32((uint32_t)(EDX));
  /* 11fe1b8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11fe1b8d mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1b92 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1b93 call dword ptr [0x1201138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201138c))), 0x11fe1b99u);
L_11fe1b99:;
  /* 11fe1b99 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1b9b pop ebp */
  EBP = (pop32());
  /* 11fe1b9c ret  */
  ESPCHK(0x11fe1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ba0 @ 0x11fe1ba0 (490 bytes, 165 insns) */
void f_11fe1ba0(void) {
  FTRACE(0x11fe1ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1ba3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1ba6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1baa jne 0x11fe1bbd */
  if (!C.zf) goto L_11fe1bbd;
  /* 11fe1bac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1baf push eax */
  push32((uint32_t)(EAX));
  /* 11fe1bb0 call 0x11fe19f0 */
  push32(0x11fe1bb5u); f_11fe19f0();
  /* 11fe1bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1bb8 jmp 0x11fe1d86 */
  goto L_11fe1d86;
L_11fe1bbd:;
  /* 11fe1bbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1bc1 jne 0x11fe1bd6 */
  if (!C.zf) goto L_11fe1bd6;
  /* 11fe1bc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1bc7 call 0x11fe1d90 */
  push32(0x11fe1bccu); f_11fe1d90();
  /* 11fe1bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1bcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1bd1 jmp 0x11fe1d86 */
  goto L_11fe1d86;
L_11fe1bd6:;
  /* 11fe1bd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe1bdd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1be1 ja 0x11fe1d59 */
  if ((!C.cf&&!C.zf)) goto L_11fe1d59;
  /* 11fe1be7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1be9 call 0x11fdb0c0 */
  push32(0x11fe1beeu); f_11fdb0c0();
  /* 11fe1bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1bf5 call 0x11fe1f20 */
  push32(0x11fe1bfau); f_11fe1f20();
  /* 11fe1bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1bfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe1c00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c04 je 0x11fe1d1c */
  if (C.zf) goto L_11fe1d1c;
  /* 11fe1c0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1c0d cmp eax, dword ptr [0x1200d234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c13 ja 0x11fe1c90 */
  if ((!C.cf&&!C.zf)) goto L_11fe1c90;
  /* 11fe1c15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1c18 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1c1c push edx */
  push32((uint32_t)(EDX));
  /* 11fe1c1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe1c20 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1c21 call 0x11fe2df0 */
  push32(0x11fe1c26u); f_11fe2df0();
  /* 11fe1c26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1c2b je 0x11fe1c35 */
  if (C.zf) goto L_11fe1c35;
  /* 11fe1c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1c30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe1c33 jmp 0x11fe1c90 */
  goto L_11fe1c90;
L_11fe1c35:;
  /* 11fe1c35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1c38 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1c39 call 0x11fe25b0 */
  push32(0x11fe1c3eu); f_11fe25b0();
  /* 11fe1c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1c41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe1c44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c48 je 0x11fe1c90 */
  if (C.zf) goto L_11fe1c90;
  /* 11fe1c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1c4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11fe1c50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1c53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe1c56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1c59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c5c jae 0x11fe1c66 */
  if (!C.cf) goto L_11fe1c66;
  /* 11fe1c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1c61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe1c64 jmp 0x11fe1c6c */
  goto L_11fe1c6c;
L_11fe1c66:;
  /* 11fe1c66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1c69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fe1c6c:;
  /* 11fe1c6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe1c6f push edx */
  push32((uint32_t)(EDX));
  /* 11fe1c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1c73 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1c74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1c77 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1c78 call 0x11fe5260 */
  push32(0x11fe1c7du); f_11fe5260();
  /* 11fe1c7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1c80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1c83 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1c84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe1c87 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1c88 call 0x11fe1fe0 */
  push32(0x11fe1c8du); f_11fe1fe0();
  /* 11fe1c8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe1c90:;
  /* 11fe1c90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c94 jne 0x11fe1d10 */
  if (!C.zf) goto L_11fe1d10;
  /* 11fe1c96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1c9a jne 0x11fe1ca3 */
  if (!C.zf) goto L_11fe1ca3;
  /* 11fe1c9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11fe1ca3:;
  /* 11fe1ca3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1ca6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1ca9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1cac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fe1caf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1cb2 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1cb5 mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1cba push eax */
  push32((uint32_t)(EAX));
  /* 11fe1cbb call dword ptr [0x1201139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201139c))), 0x11fe1cc1u);
  /* 11fe1cc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe1cc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1cc8 je 0x11fe1d10 */
  if (C.zf) goto L_11fe1d10;
  /* 11fe1cca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1ccd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fe1cd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1cd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe1cd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1cd9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1cdc jae 0x11fe1ce6 */
  if (!C.cf) goto L_11fe1ce6;
  /* 11fe1cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1ce1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe1ce4 jmp 0x11fe1cec */
  goto L_11fe1cec;
L_11fe1ce6:;
  /* 11fe1ce6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1ce9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fe1cec:;
  /* 11fe1cec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe1cef push eax */
  push32((uint32_t)(EAX));
  /* 11fe1cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1cf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1cf8 call 0x11fe5260 */
  push32(0x11fe1cfdu); f_11fe5260();
  /* 11fe1cfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1d03 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1d04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe1d07 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1d08 call 0x11fe1fe0 */
  push32(0x11fe1d0du); f_11fe1fe0();
  /* 11fe1d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe1d10:;
  /* 11fe1d10 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1d12 call 0x11fdb160 */
  push32(0x11fe1d17u); f_11fdb160();
  /* 11fe1d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1d1a jmp 0x11fe1d59 */
  goto L_11fe1d59;
L_11fe1d1c:;
  /* 11fe1d1c push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1d1e call 0x11fdb160 */
  push32(0x11fe1d23u); f_11fdb160();
  /* 11fe1d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1d26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1d2a jne 0x11fe1d33 */
  if (!C.zf) goto L_11fe1d33;
  /* 11fe1d2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11fe1d33:;
  /* 11fe1d33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1d36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1d39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1d3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11fe1d3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1d42 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1d49 mov edx, dword ptr [0x120108cc] */
  EDX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1d4f push edx */
  push32((uint32_t)(EDX));
  /* 11fe1d50 call dword ptr [0x1201138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201138c))), 0x11fe1d56u);
  /* 11fe1d56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe1d59:;
  /* 11fe1d59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1d5d jne 0x11fe1d68 */
  if (!C.zf) goto L_11fe1d68;
  /* 11fe1d5f cmp dword ptr [0x1200f110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1d66 jne 0x11fe1d6d */
  if (!C.zf) goto L_11fe1d6d;
L_11fe1d68:;
  /* 11fe1d68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1d6b jmp 0x11fe1d86 */
  goto L_11fe1d86;
L_11fe1d6d:;
  /* 11fe1d6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1d70 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1d71 call 0x11fe19c0 */
  push32(0x11fe1d76u); f_11fe19c0();
  /* 11fe1d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1d7b jne 0x11fe1d81 */
  if (!C.zf) goto L_11fe1d81;
  /* 11fe1d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1d7f jmp 0x11fe1d86 */
  goto L_11fe1d86;
L_11fe1d81:;
  /* 11fe1d81 jmp 0x11fe1bd6 */
  goto L_11fe1bd6;
L_11fe1d86:;
  /* 11fe1d86 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1d88 pop ebp */
  EBP = (pop32());
  /* 11fe1d89 ret  */
  ESPCHK(0x11fe1ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x11fe1d90 (104 bytes, 38 insns) */
void f_11fe1d90(void) {
  FTRACE(0x11fe1d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1d91 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1d94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1d98 jne 0x11fe1d9c */
  if (!C.zf) goto L_11fe1d9c;
  /* 11fe1d9a jmp 0x11fe1df4 */
  goto L_11fe1df4;
L_11fe1d9c:;
  /* 11fe1d9c push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1d9e call 0x11fdb0c0 */
  push32(0x11fe1da3u); f_11fdb0c0();
  /* 11fe1da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1da9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1daa call 0x11fe1f20 */
  push32(0x11fe1dafu); f_11fe1f20();
  /* 11fe1daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1db2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe1db5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1db9 je 0x11fe1dd7 */
  if (C.zf) goto L_11fe1dd7;
  /* 11fe1dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1dbe push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1dc2 push edx */
  push32((uint32_t)(EDX));
  /* 11fe1dc3 call 0x11fe1fe0 */
  push32(0x11fe1dc8u); f_11fe1fe0();
  /* 11fe1dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1dcb push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1dcd call 0x11fdb160 */
  push32(0x11fe1dd2u); f_11fdb160();
  /* 11fe1dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1dd5 jmp 0x11fe1df4 */
  goto L_11fe1df4;
L_11fe1dd7:;
  /* 11fe1dd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1dd9 call 0x11fdb160 */
  push32(0x11fe1ddeu); f_11fdb160();
  /* 11fe1dde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1de1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1de4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1de7 mov ecx, dword ptr [0x120108cc] */
  ECX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1ded push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1dee call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fe1df4u);
L_11fe1df4:;
  /* 11fe1df4 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1df6 pop ebp */
  EBP = (pop32());
  /* 11fe1df7 ret  */
  ESPCHK(0x11fe1d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x11fe1e00 (116 bytes, 34 insns) */
void f_11fe1e00(void) {
  FTRACE(0x11fe1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1e01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe1e04 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11fe1e0b push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1e0d call 0x11fdb0c0 */
  push32(0x11fe1e12u); f_11fdb0c0();
  /* 11fe1e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1e15 call 0x11fe3510 */
  push32(0x11fe1e1au); f_11fe3510();
  /* 11fe1e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1e1c jge 0x11fe1e25 */
  if ((C.sf==C.of)) goto L_11fe1e25;
  /* 11fe1e1e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11fe1e25:;
  /* 11fe1e25 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fe1e27 call 0x11fdb160 */
  push32(0x11fe1e2cu); f_11fdb160();
  /* 11fe1e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1e33 mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1e38 push eax */
  push32((uint32_t)(EAX));
  /* 11fe1e39 call dword ptr [0x12011428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011428))), 0x11fe1e3fu);
  /* 11fe1e3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1e41 jne 0x11fe1e6d */
  if (!C.zf) goto L_11fe1e6d;
  /* 11fe1e43 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fe1e49u);
  /* 11fe1e49 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1e4c jne 0x11fe1e66 */
  if (!C.zf) goto L_11fe1e66;
  /* 11fe1e4e call 0x11fe6860 */
  push32(0x11fe1e53u); f_11fe6860();
  /* 11fe1e53 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11fe1e59 call 0x11fe6850 */
  push32(0x11fe1e5eu); f_11fe6850();
  /* 11fe1e5e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11fe1e64 jmp 0x11fe1e6d */
  goto L_11fe1e6d;
L_11fe1e66:;
  /* 11fe1e66 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11fe1e6d:;
  /* 11fe1e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1e70 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1e72 pop ebp */
  EBP = (pop32());
  /* 11fe1e73 ret  */
  ESPCHK(0x11fe1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x11fe1e80 (10 bytes, 5 insns) */
void f_11fe1e80(void) {
  FTRACE(0x11fe1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1e81 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1e83 call 0x11fe1e00 */
  push32(0x11fe1e88u); f_11fe1e00();
  /* 11fe1e88 pop ebp */
  EBP = (pop32());
  /* 11fe1e89 ret  */
  ESPCHK(0x11fe1e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x11fe1e90 (10 bytes, 5 insns) */
void f_11fe1e90(void) {
  FTRACE(0x11fe1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1e91 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1e93 mov eax, dword ptr [0x1200d234] */
  EAX = (r32((uint32_t)(0x1200d234)));
  /* 11fe1e98 pop ebp */
  EBP = (pop32());
  /* 11fe1e99 ret  */
  ESPCHK(0x11fe1e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ea0 @ 0x11fe1ea0 (31 bytes, 11 insns) */
void f_11fe1ea0(void) {
  FTRACE(0x11fe1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1ea3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1eaa jbe 0x11fe1eb0 */
  if ((C.cf||C.zf)) goto L_11fe1eb0;
  /* 11fe1eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1eae jmp 0x11fe1ebd */
  goto L_11fe1ebd;
L_11fe1eb0:;
  /* 11fe1eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1eb3 mov dword ptr [0x1200d234], eax */
  w32((uint32_t)(0x1200d234), (EAX));
  /* 11fe1eb8 mov eax, 1 */
  EAX = (0x1u);
L_11fe1ebd:;
  /* 11fe1ebd pop ebp */
  EBP = (pop32());
  /* 11fe1ebe ret  */
  ESPCHK(0x11fe1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x11fe1ec0 (89 bytes, 20 insns) */
void f_11fe1ec0(void) {
  FTRACE(0x11fe1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1ec3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11fe1ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe1eca mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fe1ecf push eax */
  push32((uint32_t)(EAX));
  /* 11fe1ed0 call dword ptr [0x1201139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201139c))), 0x11fe1ed6u);
  /* 11fe1ed6 mov dword ptr [0x120108c8], eax */
  w32((uint32_t)(0x120108c8), (EAX));
  /* 11fe1edb cmp dword ptr [0x120108c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120108c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1ee2 jne 0x11fe1ee8 */
  if (!C.zf) goto L_11fe1ee8;
  /* 11fe1ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1ee6 jmp 0x11fe1f17 */
  goto L_11fe1f17;
L_11fe1ee8:;
  /* 11fe1ee8 mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe1eee mov dword ptr [0x120108bc], ecx */
  w32((uint32_t)(0x120108bc), (ECX));
  /* 11fe1ef4 mov dword ptr [0x120108c0], 0 */
  w32((uint32_t)(0x120108c0), (0x0u));
  /* 11fe1efe mov dword ptr [0x120108c4], 0 */
  w32((uint32_t)(0x120108c4), (0x0u));
  /* 11fe1f08 mov dword ptr [0x120108a8], 0x10 */
  w32((uint32_t)(0x120108a8), (0x10u));
  /* 11fe1f12 mov eax, 1 */
  EAX = (0x1u);
L_11fe1f17:;
  /* 11fe1f17 pop ebp */
  EBP = (pop32());
  /* 11fe1f18 ret  */
  ESPCHK(0x11fe1ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f20 @ 0x11fe1f20 (85 bytes, 29 insns) */
void f_11fe1f20(void) {
  FTRACE(0x11fe1f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1f21 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1f26 mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe1f2b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe1f2e mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe1f34 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1f36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe1f39 mov edx, dword ptr [0x120108c8] */
  EDX = (r32((uint32_t)(0x120108c8)));
  /* 11fe1f3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fe1f42:;
  /* 11fe1f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1f45 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1f48 jae 0x11fe1f6f */
  if (!C.cf) goto L_11fe1f6f;
  /* 11fe1f4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1f50 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1f53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe1f56 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe1f5d jae 0x11fe1f64 */
  if (!C.cf) goto L_11fe1f64;
  /* 11fe1f5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1f62 jmp 0x11fe1f71 */
  goto L_11fe1f71;
L_11fe1f64:;
  /* 11fe1f64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1f67 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe1f6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe1f6d jmp 0x11fe1f42 */
  goto L_11fe1f42;
L_11fe1f6f:;
  /* 11fe1f6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe1f71:;
  /* 11fe1f71 mov esp, ebp */
  ESP = (EBP);
  /* 11fe1f73 pop ebp */
  EBP = (pop32());
  /* 11fe1f74 ret  */
  ESPCHK(0x11fe1f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x11fe1f80 (95 bytes, 33 insns) */
void f_11fe1f80(void) {
  FTRACE(0x11fe1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1f81 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1f83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1f89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1f8c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1f8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe1f92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1f95 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11fe1f98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe1f9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe1fa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe1fa3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe1fa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1fa8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe1fab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe1fad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe1faf jne 0x11fe1fd1 */
  if (!C.zf) goto L_11fe1fd1;
  /* 11fe1fb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1fb4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe1fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe1fb9 jne 0x11fe1fd1 */
  if (!C.zf) goto L_11fe1fd1;
  /* 11fe1fbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe1fbe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe1fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe1fc6 je 0x11fe1fd1 */
  if (C.zf) goto L_11fe1fd1;
  /* 11fe1fc8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11fe1fcf jmp 0x11fe1fd8 */
  goto L_11fe1fd8;
L_11fe1fd1:;
  /* 11fe1fd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11fe1fd8:;
  /* 11fe1fd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe1fdb mov esp, ebp */
  ESP = (EBP);
  /* 11fe1fdd pop ebp */
  EBP = (pop32());
  /* 11fe1fde ret  */
  ESPCHK(0x11fe1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x11fe1fe0 (1485 bytes, 453 insns) */
void f_11fe1fe0(void) {
  FTRACE(0x11fe1fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe1fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe1fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe1fe3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1fe9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe1fec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11fe1fef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe1ff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe1ff5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe1ff8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe1ffb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe1ffe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11fe2001 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe2004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2007 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe200d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2010 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11fe2017 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe201a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe201d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2020 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fe2023 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2026 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe2028 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe202b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11fe202e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2031 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2034 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11fe2037 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe203a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe203c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe203f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2042 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11fe2045 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe2048 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe204b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe204e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2050 jne 0x11fe2178 */
  if (!C.zf) goto L_11fe2178;
  /* 11fe2056 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2059 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe205c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe205f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe2062 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2066 jbe 0x11fe206f */
  if ((C.cf||C.zf)) goto L_11fe206f;
  /* 11fe2068 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11fe206f:;
  /* 11fe206f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2072 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2075 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2078 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe207b jne 0x11fe2151 */
  if (!C.zf) goto L_11fe2151;
  /* 11fe2081 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2085 jae 0x11fe20e6 */
  if (!C.cf) goto L_11fe20e6;
  /* 11fe2087 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe208c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe208f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe2091 not eax */
  EAX = (~(EAX));
  /* 11fe2093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2096 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2099 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11fe209d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe209f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe20a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe20a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11fe20a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe20ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe20af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11fe20b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe20b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe20b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe20bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11fe20be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe20c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe20c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe20c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe20ca jne 0x11fe20e4 */
  if (!C.zf) goto L_11fe20e4;
  /* 11fe20cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe20d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe20d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe20d6 not eax */
  EAX = (~(EAX));
  /* 11fe20d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe20db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe20dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe20df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe20e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe20e4:;
  /* 11fe20e4 jmp 0x11fe2151 */
  goto L_11fe2151;
L_11fe20e6:;
  /* 11fe20e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe20e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe20ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe20f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe20f3 not edx */
  EDX = (~(EDX));
  /* 11fe20f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe20f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe20fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11fe2102 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2107 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe210a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11fe2111 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2114 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2117 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe211a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe211d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2120 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2123 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11fe2126 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2129 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe212c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe2130 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2132 jne 0x11fe2151 */
  if (!C.zf) goto L_11fe2151;
  /* 11fe2134 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe2137 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe213a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe213f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2141 not edx */
  EDX = (~(EDX));
  /* 11fe2143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2146 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2149 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe214b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe214e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11fe2151:;
  /* 11fe2151 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2154 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe2157 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe215a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe215d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe2160 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2163 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2166 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2169 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe216c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe216f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2172 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2175 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11fe2178:;
  /* 11fe2178 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe217b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe217e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2181 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe2184 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2188 jbe 0x11fe2191 */
  if ((C.cf||C.zf)) goto L_11fe2191;
  /* 11fe218a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11fe2191:;
  /* 11fe2191 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2194 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2197 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2199 jne 0x11fe22f5 */
  if (!C.zf) goto L_11fe22f5;
  /* 11fe219f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe21a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe21a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11fe21a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe21ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe21ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe21b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fe21b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe21b8 jbe 0x11fe21c1 */
  if ((C.cf||C.zf)) goto L_11fe21c1;
  /* 11fe21ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11fe21c1:;
  /* 11fe21c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe21c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe21c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11fe21ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe21cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe21d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe21d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fe21d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe21da jbe 0x11fe21e3 */
  if ((C.cf||C.zf)) goto L_11fe21e3;
  /* 11fe21dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11fe21e3:;
  /* 11fe21e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe21e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe21e9 je 0x11fe22ef */
  if (C.zf) goto L_11fe22ef;
  /* 11fe21ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe21f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe21f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe21f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe21fb jne 0x11fe22d1 */
  if (!C.zf) goto L_11fe22d1;
  /* 11fe2201 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2205 jae 0x11fe2266 */
  if (!C.cf) goto L_11fe2266;
  /* 11fe2207 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe220c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe220f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2211 not edx */
  EDX = (~(EDX));
  /* 11fe2213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2216 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2219 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11fe221d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe221f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2222 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2225 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11fe2229 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe222c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe222f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe2232 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe2235 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2238 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe223b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11fe223e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2241 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2244 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe2248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe224a jne 0x11fe2264 */
  if (!C.zf) goto L_11fe2264;
  /* 11fe224c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2251 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2254 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2256 not edx */
  EDX = (~(EDX));
  /* 11fe2258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe225b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe225d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe225f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2262 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe2264:;
  /* 11fe2264 jmp 0x11fe22d1 */
  goto L_11fe22d1;
L_11fe2266:;
  /* 11fe2266 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2269 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe226c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2271 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe2273 not eax */
  EAX = (~(EAX));
  /* 11fe2275 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2278 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe227b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11fe2282 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2287 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe228a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11fe2291 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2294 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2297 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11fe229a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe229d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe22a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe22a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11fe22a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe22a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe22ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe22b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe22b2 jne 0x11fe22d1 */
  if (!C.zf) goto L_11fe22d1;
  /* 11fe22b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe22b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe22ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe22bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe22c1 not eax */
  EAX = (~(EAX));
  /* 11fe22c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe22c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe22c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe22cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe22ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe22d1:;
  /* 11fe22d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe22d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe22d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe22da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe22dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe22e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe22e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe22e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe22e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe22ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11fe22ef:;
  /* 11fe22ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe22f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11fe22f5:;
  /* 11fe22f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe22f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe22fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe22fd jne 0x11fe230b */
  if (!C.zf) goto L_11fe230b;
  /* 11fe22ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2302 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2305 je 0x11fe241b */
  if (C.zf) goto L_11fe241b;
L_11fe230b:;
  /* 11fe230b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe230e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2311 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11fe2314 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe2317 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe231a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe231d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2320 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe2323 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2326 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2329 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11fe232c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe232f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2332 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11fe2335 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2338 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe233b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe233e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe2341 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2344 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2347 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe234a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe234d jne 0x11fe241b */
  if (!C.zf) goto L_11fe241b;
  /* 11fe2353 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2357 jae 0x11fe23b4 */
  if (!C.cf) goto L_11fe23b4;
  /* 11fe2359 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe235c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe235f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe2363 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2366 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2369 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe236c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe236f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2372 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2375 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11fe2378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe237a jne 0x11fe2392 */
  if (!C.zf) goto L_11fe2392;
  /* 11fe237c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2381 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2384 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2389 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe238b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe238d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2390 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe2392:;
  /* 11fe2392 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2397 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe239a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe239c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe239f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe23a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11fe23a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe23a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe23ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe23ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11fe23b2 jmp 0x11fe241b */
  goto L_11fe241b;
L_11fe23b4:;
  /* 11fe23b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe23b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe23ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe23be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe23c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe23c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe23c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe23ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe23cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe23d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11fe23d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe23d5 jne 0x11fe23f2 */
  if (!C.zf) goto L_11fe23f2;
  /* 11fe23d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe23da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe23dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe23e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe23e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe23e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe23ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe23ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe23ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11fe23f2:;
  /* 11fe23f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe23f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe23f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe23fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe23ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2402 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2405 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11fe240c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe240e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2411 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe2414 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11fe241b:;
  /* 11fe241b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe241e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2421 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe2423 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2426 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2429 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe242c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11fe242f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2432 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe2434 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2437 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe243a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe243c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe243f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2442 jne 0x11fe25a9 */
  if (!C.zf) goto L_11fe25a9;
  /* 11fe2448 cmp dword ptr [0x120108c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120108c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe244f je 0x11fe2598 */
  if (C.zf) goto L_11fe2598;
  /* 11fe2455 mov eax, dword ptr [0x120108b8] */
  EAX = (r32((uint32_t)(0x120108b8)));
  /* 11fe245a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11fe245d mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2463 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe2466 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2468 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe246b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11fe2470 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fe2475 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2478 push eax */
  push32((uint32_t)(EAX));
  /* 11fe2479 call dword ptr [0x12011398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011398))), 0x11fe247fu);
  /* 11fe247f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2484 mov ecx, dword ptr [0x120108b8] */
  ECX = (r32((uint32_t)(0x120108b8)));
  /* 11fe248a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe248c mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2491 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe2494 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2496 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe249c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe249f mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe24a7 mov edx, dword ptr [0x120108b8] */
  EDX = (r32((uint32_t)(0x120108b8)));
  /* 11fe24ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11fe24b8 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe24c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11fe24c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe24c6 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe24ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11fe24d1 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fe24da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11fe24de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe24e0 jne 0x11fe24f6 */
  if (!C.zf) goto L_11fe24f6;
  /* 11fe24e2 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe24eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11fe24ed mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11fe24f6:;
  /* 11fe24f6 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe24fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2500 jne 0x11fe2598 */
  if (!C.zf) goto L_11fe2598;
  /* 11fe2506 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fe250b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe250d mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2512 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe2515 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe2516 call dword ptr [0x12011398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011398))), 0x11fe251cu);
  /* 11fe251c mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2522 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fe2525 push eax */
  push32((uint32_t)(EAX));
  /* 11fe2526 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe2528 mov ecx, dword ptr [0x120108cc] */
  ECX = (r32((uint32_t)(0x120108cc)));
  /* 11fe252e push ecx */
  push32((uint32_t)(ECX));
  /* 11fe252f call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fe2535u);
  /* 11fe2535 mov edx, dword ptr [0x120108c4] */
  EDX = (r32((uint32_t)(0x120108c4)));
  /* 11fe253b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe253e mov eax, dword ptr [0x120108c8] */
  EAX = (r32((uint32_t)(0x120108c8)));
  /* 11fe2543 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2545 mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe254b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe254e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2550 push eax */
  push32((uint32_t)(EAX));
  /* 11fe2551 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2557 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe255a push edx */
  push32((uint32_t)(EDX));
  /* 11fe255b mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe2560 push eax */
  push32((uint32_t)(EAX));
  /* 11fe2561 call 0x11fe1630 */
  push32(0x11fe2566u); f_11fe1630();
  /* 11fe2566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2569 mov ecx, dword ptr [0x120108c4] */
  ECX = (r32((uint32_t)(0x120108c4)));
  /* 11fe256f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2572 mov dword ptr [0x120108c4], ecx */
  w32((uint32_t)(0x120108c4), (ECX));
  /* 11fe2578 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe257b cmp edx, dword ptr [0x120108c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120108c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2581 jbe 0x11fe258c */
  if ((C.cf||C.zf)) goto L_11fe258c;
  /* 11fe2583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2586 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2589 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fe258c:;
  /* 11fe258c mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe2592 mov dword ptr [0x120108bc], ecx */
  w32((uint32_t)(0x120108bc), (ECX));
L_11fe2598:;
  /* 11fe2598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe259b mov dword ptr [0x120108c0], edx */
  w32((uint32_t)(0x120108c0), (EDX));
  /* 11fe25a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe25a4 mov dword ptr [0x120108b8], eax */
  w32((uint32_t)(0x120108b8), (EAX));
L_11fe25a9:;
  /* 11fe25a9 mov esp, ebp */
  ESP = (EBP);
  /* 11fe25ab pop ebp */
  EBP = (pop32());
  /* 11fe25ac ret  */
  ESPCHK(0x11fe1fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x11fe25b0 (1334 bytes, 427 insns) */
void f_11fe25b0(void) {
  FTRACE(0x11fe25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe25b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe25b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe25b6 push esi */
  push32((uint32_t)(ESI));
  /* 11fe25b7 mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe25bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe25bf mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe25c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe25c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fe25ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe25cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe25d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe25d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fe25d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe25d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe25dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe25df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe25e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe25e6 jge 0x11fe25fc */
  if ((C.sf==C.of)) goto L_11fe25fc;
  /* 11fe25e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe25eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe25ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe25f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe25f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11fe25fa jmp 0x11fe2611 */
  goto L_11fe2611;
L_11fe25fc:;
  /* 11fe25fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe2603 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2606 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2609 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe260c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe260e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11fe2611:;
  /* 11fe2611 mov ecx, dword ptr [0x120108bc] */
  ECX = (r32((uint32_t)(0x120108bc)));
  /* 11fe2617 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11fe261a:;
  /* 11fe261a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe261d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2620 jae 0x11fe2646 */
  if (!C.cf) goto L_11fe2646;
  /* 11fe2622 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe2628 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11fe262a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe262d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe2630 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2633 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2637 je 0x11fe263b */
  if (C.zf) goto L_11fe263b;
  /* 11fe2639 jmp 0x11fe2646 */
  goto L_11fe2646;
L_11fe263b:;
  /* 11fe263b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe263e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2641 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fe2644 jmp 0x11fe261a */
  goto L_11fe261a;
L_11fe2646:;
  /* 11fe2646 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2649 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe264c jne 0x11fe272d */
  if (!C.zf) goto L_11fe272d;
  /* 11fe2652 mov eax, dword ptr [0x120108c8] */
  EAX = (r32((uint32_t)(0x120108c8)));
  /* 11fe2657 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11fe265a:;
  /* 11fe265a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe265d cmp ecx, dword ptr [0x120108bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2663 jae 0x11fe2689 */
  if (!C.cf) goto L_11fe2689;
  /* 11fe2665 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2668 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe266b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe266d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2670 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe2673 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2676 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe267a je 0x11fe267e */
  if (C.zf) goto L_11fe267e;
  /* 11fe267c jmp 0x11fe2689 */
  goto L_11fe2689;
L_11fe267e:;
  /* 11fe267e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2681 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2684 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe2687 jmp 0x11fe265a */
  goto L_11fe265a;
L_11fe2689:;
  /* 11fe2689 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe268c cmp ecx, dword ptr [0x120108bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2692 jne 0x11fe272d */
  if (!C.zf) goto L_11fe272d;
L_11fe2698:;
  /* 11fe2698 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe269b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe269e jae 0x11fe26b6 */
  if (!C.cf) goto L_11fe26b6;
  /* 11fe26a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26a7 je 0x11fe26ab */
  if (C.zf) goto L_11fe26ab;
  /* 11fe26a9 jmp 0x11fe26b6 */
  goto L_11fe26b6;
L_11fe26ab:;
  /* 11fe26ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe26b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fe26b4 jmp 0x11fe2698 */
  goto L_11fe2698;
L_11fe26b6:;
  /* 11fe26b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26bc jne 0x11fe2707 */
  if (!C.zf) goto L_11fe2707;
  /* 11fe26be mov eax, dword ptr [0x120108c8] */
  EAX = (r32((uint32_t)(0x120108c8)));
  /* 11fe26c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11fe26c6:;
  /* 11fe26c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26c9 cmp ecx, dword ptr [0x120108bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26cf jae 0x11fe26e7 */
  if (!C.cf) goto L_11fe26e7;
  /* 11fe26d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26d8 je 0x11fe26dc */
  if (C.zf) goto L_11fe26dc;
  /* 11fe26da jmp 0x11fe26e7 */
  goto L_11fe26e7;
L_11fe26dc:;
  /* 11fe26dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe26e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe26e5 jmp 0x11fe26c6 */
  goto L_11fe26c6;
L_11fe26e7:;
  /* 11fe26e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe26ea cmp ecx, dword ptr [0x120108bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26f0 jne 0x11fe2707 */
  if (!C.zf) goto L_11fe2707;
  /* 11fe26f2 call 0x11fe2af0 */
  push32(0x11fe26f7u); f_11fe2af0();
  /* 11fe26f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe26fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe26fe jne 0x11fe2707 */
  if (!C.zf) goto L_11fe2707;
  /* 11fe2700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2702 jmp 0x11fe2ae1 */
  goto L_11fe2ae1;
L_11fe2707:;
  /* 11fe2707 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe270a push edx */
  push32((uint32_t)(EDX));
  /* 11fe270b call 0x11fe2c00 */
  push32(0x11fe2710u); f_11fe2c00();
  /* 11fe2710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2713 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2716 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fe2719 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe271b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe271e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe2721 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2724 jne 0x11fe272d */
  if (!C.zf) goto L_11fe272d;
  /* 11fe2726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2728 jmp 0x11fe2ae1 */
  goto L_11fe2ae1;
L_11fe272d:;
  /* 11fe272d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2730 mov dword ptr [0x120108bc], edx */
  w32((uint32_t)(0x120108bc), (EDX));
  /* 11fe2736 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2739 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe273c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11fe273f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2742 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe2744 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11fe2747 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe274b je 0x11fe2770 */
  if (C.zf) goto L_11fe2770;
  /* 11fe274d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2750 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2753 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe2756 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe275a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe275d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2760 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe2763 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11fe276a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11fe276c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe276e jne 0x11fe27a5 */
  if (!C.zf) goto L_11fe27a5;
L_11fe2770:;
  /* 11fe2770 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11fe2777:;
  /* 11fe2777 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe277a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe277d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe2780 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2784 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2787 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe278a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe278d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11fe2794 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2796 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe2798 jne 0x11fe27a5 */
  if (!C.zf) goto L_11fe27a5;
  /* 11fe279a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe279d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe27a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11fe27a3 jmp 0x11fe2777 */
  goto L_11fe2777;
L_11fe27a5:;
  /* 11fe27a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe27a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe27ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe27b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11fe27b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe27bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fe27c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe27c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe27c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe27cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe27cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fe27d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe27d6 jne 0x11fe27f2 */
  if (!C.zf) goto L_11fe27f2;
  /* 11fe27d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11fe27df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe27e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe27e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe27e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe27ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11fe27f2:;
  /* 11fe27f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe27f6 jl 0x11fe280b */
  if ((C.sf!=C.of)) goto L_11fe280b;
  /* 11fe27f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe27fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe27fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe2800 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2803 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2806 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fe2809 jmp 0x11fe27f2 */
  goto L_11fe27f2;
L_11fe280b:;
  /* 11fe280b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe280e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2811 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11fe2815 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe2818 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe281b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe281d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2820 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe2823 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2826 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fe2829 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe282c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe282f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2833 jle 0x11fe283c */
  if ((C.zf||C.sf!=C.of)) goto L_11fe283c;
  /* 11fe2835 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11fe283c:;
  /* 11fe283c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe283f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2842 je 0x11fe2a60 */
  if (C.zf) goto L_11fe2a60;
  /* 11fe2848 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe284b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe284e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2851 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2854 jne 0x11fe292a */
  if (!C.zf) goto L_11fe292a;
  /* 11fe285a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe285e jge 0x11fe28bf */
  if ((C.sf==C.of)) goto L_11fe28bf;
  /* 11fe2860 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2865 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2868 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe286a not eax */
  EAX = (~(EAX));
  /* 11fe286c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe286f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2872 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11fe2876 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2878 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe287b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe287e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11fe2882 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2885 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2888 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11fe288b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe288e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2891 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2894 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11fe2897 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe289a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe289d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe28a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe28a3 jne 0x11fe28bd */
  if (!C.zf) goto L_11fe28bd;
  /* 11fe28a5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe28aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe28ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe28af not eax */
  EAX = (~(EAX));
  /* 11fe28b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe28b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe28b6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe28b8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe28bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe28bd:;
  /* 11fe28bd jmp 0x11fe292a */
  goto L_11fe292a;
L_11fe28bf:;
  /* 11fe28bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe28c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe28c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe28ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe28cc not edx */
  EDX = (~(EDX));
  /* 11fe28ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe28d1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe28d4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11fe28db and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe28dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe28e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe28e3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11fe28ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe28ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe28f0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe28f3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe28f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe28f9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe28fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11fe28ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2902 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2905 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe2909 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe290b jne 0x11fe292a */
  if (!C.zf) goto L_11fe292a;
  /* 11fe290d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2910 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2913 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2918 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe291a not edx */
  EDX = (~(EDX));
  /* 11fe291c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe291f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2922 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2924 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2927 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11fe292a:;
  /* 11fe292a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe292d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe2930 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2933 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe2936 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe2939 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe293c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe293f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2942 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe2945 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe2948 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe294c je 0x11fe2a60 */
  if (C.zf) goto L_11fe2a60;
  /* 11fe2952 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2958 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11fe295b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe295e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2961 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2964 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2967 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe296a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe296d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2970 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe2973 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2976 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2979 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fe297c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe297f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2982 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2985 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fe2988 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe298b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe298e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2991 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2994 jne 0x11fe2a60 */
  if (!C.zf) goto L_11fe2a60;
  /* 11fe299a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe299e jge 0x11fe29fa */
  if ((C.sf==C.of)) goto L_11fe29fa;
  /* 11fe29a0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29a3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe29a6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe29aa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29ad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe29b0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11fe29b3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe29b5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29b8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe29bb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11fe29be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe29c0 jne 0x11fe29d8 */
  if (!C.zf) goto L_11fe29d8;
  /* 11fe29c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe29c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe29ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe29cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe29cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe29d1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe29d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe29d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe29d8:;
  /* 11fe29d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe29dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe29e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe29e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe29e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11fe29ec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe29ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe29f1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11fe29f8 jmp 0x11fe2a60 */
  goto L_11fe2a60;
L_11fe29fa:;
  /* 11fe29fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe29fd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe2a04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2a07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11fe2a0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe2a0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2a12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11fe2a18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2a1a jne 0x11fe2a37 */
  if (!C.zf) goto L_11fe2a37;
  /* 11fe2a1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2a1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2a22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2a27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe2a29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2a2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2a2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2a31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2a34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe2a37:;
  /* 11fe2a37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2a3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2a3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2a42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2a44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2a47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2a4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11fe2a51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2a53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2a56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2a59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11fe2a60:;
  /* 11fe2a60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2a64 je 0x11fe2a7a */
  if (C.zf) goto L_11fe2a7a;
  /* 11fe2a66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2a69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2a6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe2a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2a71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2a77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11fe2a7a:;
  /* 11fe2a7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2a7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe2a83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2a86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2a8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe2a8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2a91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2a97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2a9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11fe2a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2aa0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe2aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2aa5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe2aa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2aad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe2aaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2ab1 jne 0x11fe2ad3 */
  if (!C.zf) goto L_11fe2ad3;
  /* 11fe2ab3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2ab6 cmp eax, dword ptr [0x120108c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120108c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2abc jne 0x11fe2ad3 */
  if (!C.zf) goto L_11fe2ad3;
  /* 11fe2abe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ac1 cmp ecx, dword ptr [0x120108b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2ac7 jne 0x11fe2ad3 */
  if (!C.zf) goto L_11fe2ad3;
  /* 11fe2ac9 mov dword ptr [0x120108c0], 0 */
  w32((uint32_t)(0x120108c0), (0x0u));
L_11fe2ad3:;
  /* 11fe2ad3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe2ad6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ad9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe2adb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2ade add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11fe2ae1:;
  /* 11fe2ae1 pop esi */
  ESI = (pop32());
  /* 11fe2ae2 mov esp, ebp */
  ESP = (EBP);
  /* 11fe2ae4 pop ebp */
  EBP = (pop32());
  /* 11fe2ae5 ret  */
  ESPCHK(0x11fe25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x11fe2af0 (271 bytes, 78 insns) */
void f_11fe2af0(void) {
  FTRACE(0x11fe2af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe2af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe2af1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe2af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe2af4 mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe2af9 cmp eax, dword ptr [0x120108a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120108a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2aff jne 0x11fe2b4b */
  if (!C.zf) goto L_11fe2b4b;
  /* 11fe2b01 mov ecx, dword ptr [0x120108a8] */
  ECX = (r32((uint32_t)(0x120108a8)));
  /* 11fe2b07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2b0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe2b0d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe2b0e mov edx, dword ptr [0x120108c8] */
  EDX = (r32((uint32_t)(0x120108c8)));
  /* 11fe2b14 push edx */
  push32((uint32_t)(EDX));
  /* 11fe2b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe2b17 mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fe2b1c push eax */
  push32((uint32_t)(EAX));
  /* 11fe2b1d call dword ptr [0x1201138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201138c))), 0x11fe2b23u);
  /* 11fe2b23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe2b26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2b2a jne 0x11fe2b33 */
  if (!C.zf) goto L_11fe2b33;
  /* 11fe2b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2b2e jmp 0x11fe2bfb */
  goto L_11fe2bfb;
L_11fe2b33:;
  /* 11fe2b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2b36 mov dword ptr [0x120108c8], ecx */
  w32((uint32_t)(0x120108c8), (ECX));
  /* 11fe2b3c mov edx, dword ptr [0x120108a8] */
  EDX = (r32((uint32_t)(0x120108a8)));
  /* 11fe2b42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2b45 mov dword ptr [0x120108a8], edx */
  w32((uint32_t)(0x120108a8), (EDX));
L_11fe2b4b:;
  /* 11fe2b4b mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe2b50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe2b53 mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe2b59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2b5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe2b5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11fe2b63 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fe2b65 mov edx, dword ptr [0x120108cc] */
  EDX = (r32((uint32_t)(0x120108cc)));
  /* 11fe2b6b push edx */
  push32((uint32_t)(EDX));
  /* 11fe2b6c call dword ptr [0x1201139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201139c))), 0x11fe2b72u);
  /* 11fe2b72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2b75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11fe2b78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2b7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2b7f jne 0x11fe2b85 */
  if (!C.zf) goto L_11fe2b85;
  /* 11fe2b81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2b83 jmp 0x11fe2bfb */
  goto L_11fe2bfb;
L_11fe2b85:;
  /* 11fe2b85 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe2b87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11fe2b8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11fe2b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe2b93 call dword ptr [0x12011388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011388))), 0x11fe2b99u);
  /* 11fe2b99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2b9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11fe2b9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ba2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2ba6 jne 0x11fe2bc2 */
  if (!C.zf) goto L_11fe2bc2;
  /* 11fe2ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2bab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe2bae push ecx */
  push32((uint32_t)(ECX));
  /* 11fe2baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe2bb1 mov edx, dword ptr [0x120108cc] */
  EDX = (r32((uint32_t)(0x120108cc)));
  /* 11fe2bb7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe2bb8 call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fe2bbeu);
  /* 11fe2bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2bc0 jmp 0x11fe2bfb */
  goto L_11fe2bfb;
L_11fe2bc2:;
  /* 11fe2bc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2bc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fe2bcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2bce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fe2bd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2bd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11fe2bdf mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe2be4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2be7 mov dword ptr [0x120108c4], eax */
  w32((uint32_t)(0x120108c4), (EAX));
  /* 11fe2bec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2bef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fe2bf2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11fe2bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fe2bfb:;
  /* 11fe2bfb mov esp, ebp */
  ESP = (EBP);
  /* 11fe2bfd pop ebp */
  EBP = (pop32());
  /* 11fe2bfe ret  */
  ESPCHK(0x11fe2af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c00 @ 0x11fe2c00 (494 bytes, 149 insns) */
void f_11fe2c00(void) {
  FTRACE(0x11fe2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe2c01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe2c03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2c09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe2c0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fe2c0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2c12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe2c15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe2c18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11fe2c1f:;
  /* 11fe2c1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2c23 jl 0x11fe2c38 */
  if ((C.sf!=C.of)) goto L_11fe2c38;
  /* 11fe2c25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2c28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe2c2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe2c2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2c30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2c33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fe2c36 jmp 0x11fe2c1f */
  goto L_11fe2c1f;
L_11fe2c38:;
  /* 11fe2c38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2c3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe2c41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2c44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11fe2c4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe2c4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fe2c55 jmp 0x11fe2c60 */
  goto L_11fe2c60;
L_11fe2c57:;
  /* 11fe2c57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2c5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2c5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11fe2c60:;
  /* 11fe2c60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2c64 jge 0x11fe2c86 */
  if ((C.sf==C.of)) goto L_11fe2c86;
  /* 11fe2c66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2c69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2c6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11fe2c6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe2c72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2c75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2c78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fe2c7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2c81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fe2c84 jmp 0x11fe2c57 */
  goto L_11fe2c57;
L_11fe2c86:;
  /* 11fe2c86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2c89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11fe2c8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2c8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe2c92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2c94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe2c97 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe2c99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11fe2c9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fe2ca3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2ca6 push edx */
  push32((uint32_t)(EDX));
  /* 11fe2ca7 call dword ptr [0x12011388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011388))), 0x11fe2cadu);
  /* 11fe2cad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe2caf jne 0x11fe2cb9 */
  if (!C.zf) goto L_11fe2cb9;
  /* 11fe2cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2cb4 jmp 0x11fe2dea */
  goto L_11fe2dea;
L_11fe2cb9:;
  /* 11fe2cb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2cbc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2cc1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe2cc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2cc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe2cca jmp 0x11fe2cd8 */
  goto L_11fe2cd8;
L_11fe2ccc:;
  /* 11fe2ccc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ccf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2cd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe2cd8:;
  /* 11fe2cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2cdb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2cde ja 0x11fe2d3d */
  if ((!C.cf&&!C.zf)) goto L_11fe2d3d;
  /* 11fe2ce0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ce3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11fe2cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ced mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11fe2cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2cfa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2cfd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe2d00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11fe2d09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2d12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe2d18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2d21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe2d27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2d2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe2d32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe2d35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11fe2d3b jmp 0x11fe2ccc */
  goto L_11fe2ccc;
L_11fe2d3d:;
  /* 11fe2d3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2d40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2d46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fe2d49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2d4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2d4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe2d55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe2d5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe2d5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fe2d67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2d6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2d6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fe2d73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe2d79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe2d7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2d7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2d82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fe2d85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2d88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2d8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11fe2d93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2d96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2d99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11fe2da4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2da7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11fe2dab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2dae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11fe2db1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe2db4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2db7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11fe2dba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe2dbc jne 0x11fe2dcd */
  if (!C.zf) goto L_11fe2dcd;
  /* 11fe2dbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2dc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2dc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2dca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe2dcd:;
  /* 11fe2dcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2dd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2dd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2dd7 not edx */
  EDX = (~(EDX));
  /* 11fe2dd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2ddc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe2ddf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2de1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2de4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe2de7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11fe2dea:;
  /* 11fe2dea mov esp, ebp */
  ESP = (EBP);
  /* 11fe2dec pop ebp */
  EBP = (pop32());
  /* 11fe2ded ret  */
  ESPCHK(0x11fe2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012df0 @ 0x11fe2df0 (1515 bytes, 489 insns) */
void f_11fe2df0(void) {
  FTRACE(0x11fe2df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe2df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe2df1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe2df3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2df6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe2df9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2dfc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11fe2dfe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe2e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2e04 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fe2e07 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11fe2e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2e0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe2e10 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2e13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe2e16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe2e19 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11fe2e1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe2e1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2e22 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe2e28 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2e2b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11fe2e32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe2e35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe2e38 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2e3b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe2e3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2e41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe2e43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2e46 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fe2e49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2e4c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2e4f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fe2e52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2e55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe2e57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe2e5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe2e5d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2e60 jle 0x11fe3116 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe3116;
  /* 11fe2e66 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2e69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2e6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2e6e jne 0x11fe2e7b */
  if (!C.zf) goto L_11fe2e7b;
  /* 11fe2e70 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2e73 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2e76 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2e79 jle 0x11fe2e82 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe2e82;
L_11fe2e7b:;
  /* 11fe2e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2e7d jmp 0x11fe33d7 */
  goto L_11fe33d7;
L_11fe2e82:;
  /* 11fe2e82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2e85 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe2e88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2e8b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe2e8e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2e92 jbe 0x11fe2e9b */
  if ((C.cf||C.zf)) goto L_11fe2e9b;
  /* 11fe2e94 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11fe2e9b:;
  /* 11fe2e9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2e9e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2ea1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2ea4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2ea7 jne 0x11fe2f7d */
  if (!C.zf) goto L_11fe2f7d;
  /* 11fe2ead cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2eb1 jae 0x11fe2f12 */
  if (!C.cf) goto L_11fe2f12;
  /* 11fe2eb3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2eb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2ebb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2ebd not edx */
  EDX = (~(EDX));
  /* 11fe2ebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ec2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ec5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11fe2ec9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe2ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2ece mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ed1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11fe2ed5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ed8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2edb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe2ede sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe2ee1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2ee4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2ee7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11fe2eea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2eed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2ef0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe2ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe2ef6 jne 0x11fe2f10 */
  if (!C.zf) goto L_11fe2f10;
  /* 11fe2ef8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe2efd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2f00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe2f02 not edx */
  EDX = (~(EDX));
  /* 11fe2f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2f07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe2f09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2f0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe2f10:;
  /* 11fe2f10 jmp 0x11fe2f7d */
  goto L_11fe2f7d;
L_11fe2f12:;
  /* 11fe2f12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2f15 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2f18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2f1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe2f1f not eax */
  EAX = (~(EAX));
  /* 11fe2f21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2f24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2f27 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11fe2f2e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe2f30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe2f33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2f36 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11fe2f3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2f40 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2f43 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11fe2f46 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe2f49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2f4c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2f4f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11fe2f52 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe2f55 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2f58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe2f5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe2f5e jne 0x11fe2f7d */
  if (!C.zf) goto L_11fe2f7d;
  /* 11fe2f60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2f63 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2f66 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe2f6b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe2f6d not eax */
  EAX = (~(EAX));
  /* 11fe2f6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2f72 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2f75 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe2f77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe2f7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe2f7d:;
  /* 11fe2f7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2f80 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe2f83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2f86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe2f89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe2f8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2f8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe2f92 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2f95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe2f98 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe2f9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe2f9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2fa1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2fa4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe2fa7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2fab jle 0x11fe30f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe30f7;
  /* 11fe2fb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe2fb4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe2fb7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fe2fba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe2fbd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe2fc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe2fc3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe2fc6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe2fca jbe 0x11fe2fd3 */
  if ((C.cf||C.zf)) goto L_11fe2fd3;
  /* 11fe2fcc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11fe2fd3:;
  /* 11fe2fd3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe2fd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe2fd9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11fe2fdc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe2fdf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2fe2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2fe5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe2fe8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe2feb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2fee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2ff1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11fe2ff4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe2ff7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe2ffa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11fe2ffd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3000 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3003 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3006 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe3009 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe300c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe300f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3012 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3015 jne 0x11fe30e3 */
  if (!C.zf) goto L_11fe30e3;
  /* 11fe301b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe301f jae 0x11fe307c */
  if (!C.cf) goto L_11fe307c;
  /* 11fe3021 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3024 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3027 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe302b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe302e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3031 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe3034 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe3037 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe303a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe303d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11fe3040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe3042 jne 0x11fe305a */
  if (!C.zf) goto L_11fe305a;
  /* 11fe3044 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe3049 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe304c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe304e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3051 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe3053 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3058 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe305a:;
  /* 11fe305a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe305f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe3062 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe3064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3067 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe306a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11fe306e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3073 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3076 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11fe307a jmp 0x11fe30e3 */
  goto L_11fe30e3;
L_11fe307c:;
  /* 11fe307c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe307f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3082 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe3086 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3089 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe308c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe308f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe3092 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3095 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3098 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11fe309b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe309d jne 0x11fe30ba */
  if (!C.zf) goto L_11fe30ba;
  /* 11fe309f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe30a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe30a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe30aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe30ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe30af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe30b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe30b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe30b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11fe30ba:;
  /* 11fe30ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe30bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe30c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe30c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe30c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe30ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe30cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11fe30d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe30d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe30d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe30dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11fe30e3:;
  /* 11fe30e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe30e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe30e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe30eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe30ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe30f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe30f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11fe30f7:;
  /* 11fe30f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe30fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe30fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3100 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe3102 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe3105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3108 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe310b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe310e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11fe3111 jmp 0x11fe33d2 */
  goto L_11fe33d2;
L_11fe3116:;
  /* 11fe3116 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe3119 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe311c jge 0x11fe33d2 */
  if ((C.sf==C.of)) goto L_11fe33d2;
  /* 11fe3122 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe3125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3128 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe312b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe312d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe3130 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3133 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3136 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3139 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11fe313c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe313f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3142 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fe3145 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe3148 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe314b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe314e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe3151 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fe3154 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3157 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe315a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe315e jbe 0x11fe3167 */
  if ((C.cf||C.zf)) goto L_11fe3167;
  /* 11fe3160 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11fe3167:;
  /* 11fe3167 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe316a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe316d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe316f jne 0x11fe32b0 */
  if (!C.zf) goto L_11fe32b0;
  /* 11fe3175 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3178 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe317b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe317e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe3181 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3185 jbe 0x11fe318e */
  if ((C.cf||C.zf)) goto L_11fe318e;
  /* 11fe3187 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11fe318e:;
  /* 11fe318e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3191 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3194 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3197 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe319a jne 0x11fe3270 */
  if (!C.zf) goto L_11fe3270;
  /* 11fe31a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe31a4 jae 0x11fe3205 */
  if (!C.cf) goto L_11fe3205;
  /* 11fe31a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe31ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe31ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe31b0 not edx */
  EDX = (~(EDX));
  /* 11fe31b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe31b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe31b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11fe31bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe31be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe31c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe31c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11fe31c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe31cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe31ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11fe31d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe31d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe31d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe31da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11fe31dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe31e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe31e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe31e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe31e9 jne 0x11fe3203 */
  if (!C.zf) goto L_11fe3203;
  /* 11fe31eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe31f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe31f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe31f5 not edx */
  EDX = (~(EDX));
  /* 11fe31f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe31fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe31fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe31fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3201 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe3203:;
  /* 11fe3203 jmp 0x11fe3270 */
  goto L_11fe3270;
L_11fe3205:;
  /* 11fe3205 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe3208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe320b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe3210 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe3212 not eax */
  EAX = (~(EAX));
  /* 11fe3214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3217 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe321a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11fe3221 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3226 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3229 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11fe3230 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3233 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3236 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11fe3239 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe323c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe323f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3242 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11fe3245 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3248 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe324b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fe324f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe3251 jne 0x11fe3270 */
  if (!C.zf) goto L_11fe3270;
  /* 11fe3253 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe3256 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3259 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe325e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe3260 not eax */
  EAX = (~(EAX));
  /* 11fe3262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3265 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3268 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe326a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe326d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe3270:;
  /* 11fe3270 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3273 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe3276 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3279 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe327c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe327f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3282 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe3285 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3288 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe328b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe328e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe3291 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3294 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe3297 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe329a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fe329d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe32a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe32a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe32a7 jbe 0x11fe32b0 */
  if ((C.cf||C.zf)) goto L_11fe32b0;
  /* 11fe32a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11fe32b0:;
  /* 11fe32b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe32b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe32b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11fe32b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fe32bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe32c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe32c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe32c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe32ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe32d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe32d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fe32da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe32e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fe32e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe32ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe32ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe32f2 jne 0x11fe33be */
  if (!C.zf) goto L_11fe33be;
  /* 11fe32f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe32fc jae 0x11fe3358 */
  if (!C.cf) goto L_11fe3358;
  /* 11fe32fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3301 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3304 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe3308 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe330b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe330e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11fe3311 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe3313 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3316 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3319 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11fe331c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe331e jne 0x11fe3336 */
  if (!C.zf) goto L_11fe3336;
  /* 11fe3320 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe3325 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3328 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe332a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe332d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe332f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe3331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3334 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe3336:;
  /* 11fe3336 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe333b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe333e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe3340 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3343 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3346 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11fe334a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe334c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe334f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3352 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11fe3356 jmp 0x11fe33be */
  goto L_11fe33be;
L_11fe3358:;
  /* 11fe3358 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe335b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe335e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11fe3362 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3365 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3368 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11fe336b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe336d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe3370 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3373 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11fe3376 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe3378 jne 0x11fe3395 */
  if (!C.zf) goto L_11fe3395;
  /* 11fe337a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe337d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3380 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11fe3385 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11fe3387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe338a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe338d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe338f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3392 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe3395:;
  /* 11fe3395 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3398 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe339b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe33a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe33a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe33a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe33a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11fe33af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe33b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe33b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe33b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11fe33be:;
  /* 11fe33be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe33c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe33c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe33c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe33c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe33cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe33cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11fe33d2:;
  /* 11fe33d2 mov eax, 1 */
  EAX = (0x1u);
L_11fe33d7:;
  /* 11fe33d7 mov esp, ebp */
  ESP = (EBP);
  /* 11fe33d9 pop ebp */
  EBP = (pop32());
  /* 11fe33da ret  */
  ESPCHK(0x11fe2df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x11fe33e0 (304 bytes, 79 insns) */
void f_11fe33e0(void) {
  FTRACE(0x11fe33e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe33e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe33e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe33e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe33e4 cmp dword ptr [0x120108c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120108c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe33eb je 0x11fe350c */
  if (C.zf) goto L_11fe350c;
  /* 11fe33f1 mov eax, dword ptr [0x120108b8] */
  EAX = (r32((uint32_t)(0x120108b8)));
  /* 11fe33f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11fe33f9 mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe33ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe3402 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3404 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe3407 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11fe340c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fe3411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3414 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3415 call dword ptr [0x12011398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011398))), 0x11fe341bu);
  /* 11fe341b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe3420 mov ecx, dword ptr [0x120108b8] */
  ECX = (r32((uint32_t)(0x120108b8)));
  /* 11fe3426 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe3428 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe342d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe3430 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3432 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3438 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe343b mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3440 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe3443 mov edx, dword ptr [0x120108b8] */
  EDX = (r32((uint32_t)(0x120108b8)));
  /* 11fe3449 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11fe3454 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3459 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe345c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11fe345f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fe3462 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3467 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe346a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11fe346d mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3473 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fe3476 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11fe347a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe347c jne 0x11fe3492 */
  if (!C.zf) goto L_11fe3492;
  /* 11fe347e mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3484 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe3487 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11fe3489 mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe348f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11fe3492:;
  /* 11fe3492 mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe3498 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe349c jne 0x11fe3502 */
  if (!C.zf) goto L_11fe3502;
  /* 11fe349e cmp dword ptr [0x120108c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120108c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe34a5 jle 0x11fe3502 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe3502;
  /* 11fe34a7 mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe34ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fe34af push ecx */
  push32((uint32_t)(ECX));
  /* 11fe34b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe34b2 mov edx, dword ptr [0x120108cc] */
  EDX = (r32((uint32_t)(0x120108cc)));
  /* 11fe34b8 push edx */
  push32((uint32_t)(EDX));
  /* 11fe34b9 call dword ptr [0x120113a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113a8))), 0x11fe34bfu);
  /* 11fe34bf mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe34c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe34c7 mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe34cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe34cf mov edx, dword ptr [0x120108c0] */
  EDX = (r32((uint32_t)(0x120108c0)));
  /* 11fe34d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe34d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe34da push ecx */
  push32((uint32_t)(ECX));
  /* 11fe34db mov eax, dword ptr [0x120108c0] */
  EAX = (r32((uint32_t)(0x120108c0)));
  /* 11fe34e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe34e3 push eax */
  push32((uint32_t)(EAX));
  /* 11fe34e4 mov ecx, dword ptr [0x120108c0] */
  ECX = (r32((uint32_t)(0x120108c0)));
  /* 11fe34ea push ecx */
  push32((uint32_t)(ECX));
  /* 11fe34eb call 0x11fe1630 */
  push32(0x11fe34f0u); f_11fe1630();
  /* 11fe34f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe34f3 mov edx, dword ptr [0x120108c4] */
  EDX = (r32((uint32_t)(0x120108c4)));
  /* 11fe34f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe34fc mov dword ptr [0x120108c4], edx */
  w32((uint32_t)(0x120108c4), (EDX));
L_11fe3502:;
  /* 11fe3502 mov dword ptr [0x120108c0], 0 */
  w32((uint32_t)(0x120108c0), (0x0u));
L_11fe350c:;
  /* 11fe350c mov esp, ebp */
  ESP = (EBP);
  /* 11fe350e pop ebp */
  EBP = (pop32());
  /* 11fe350f ret  */
  ESPCHK(0x11fe33e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013510 @ 0x11fe3510 (1565 bytes, 343 insns) */
void f_11fe3510(void) {
  FTRACE(0x11fe3510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3510 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3511 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3513 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3519 mov eax, dword ptr [0x120108c4] */
  EAX = (r32((uint32_t)(0x120108c4)));
  /* 11fe351e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe3521 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3522 mov ecx, dword ptr [0x120108c8] */
  ECX = (r32((uint32_t)(0x120108c8)));
  /* 11fe3528 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3529 call dword ptr [0x120113f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f8))), 0x11fe352fu);
  /* 11fe352f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3531 je 0x11fe353b */
  if (C.zf) goto L_11fe353b;
  /* 11fe3533 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3536 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe353b:;
  /* 11fe353b mov edx, dword ptr [0x120108c8] */
  EDX = (r32((uint32_t)(0x120108c8)));
  /* 11fe3541 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11fe3547 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11fe3551 jmp 0x11fe3562 */
  goto L_11fe3562;
L_11fe3553:;
  /* 11fe3553 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11fe3559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe355c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11fe3562:;
  /* 11fe3562 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11fe3568 cmp ecx, dword ptr [0x120108c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120108c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe356e jge 0x11fe3b27 */
  if ((C.sf==C.of)) goto L_11fe3b27;
  /* 11fe3574 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe357a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fe357d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11fe3583 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11fe3588 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11fe358e push ecx */
  push32((uint32_t)(ECX));
  /* 11fe358f call dword ptr [0x120113f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f8))), 0x11fe3595u);
  /* 11fe3595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3597 je 0x11fe35a3 */
  if (C.zf) goto L_11fe35a3;
  /* 11fe3599 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11fe359e jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe35a3:;
  /* 11fe35a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe35a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe35ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11fe35b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11fe35b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe35be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fe35c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe35c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe35ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe35cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11fe35d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11fe35e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe35e8 jmp 0x11fe35f3 */
  goto L_11fe35f3;
L_11fe35ea:;
  /* 11fe35ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe35ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe35f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fe35f3:;
  /* 11fe35f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe35f7 jge 0x11fe3aeb */
  if ((C.sf==C.of)) goto L_11fe3aeb;
  /* 11fe35fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11fe3607 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11fe3611 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11fe361b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11fe3625 jmp 0x11fe3636 */
  goto L_11fe3636;
L_11fe3627:;
  /* 11fe3627 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11fe362d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3630 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11fe3636:;
  /* 11fe3636 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe363d jge 0x11fe3652 */
  if ((C.sf==C.of)) goto L_11fe3652;
  /* 11fe363f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11fe3645 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11fe3650 jmp 0x11fe3627 */
  goto L_11fe3627;
L_11fe3652:;
  /* 11fe3652 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3656 jl 0x11fe3a8d */
  if ((C.sf!=C.of)) goto L_11fe3a8d;
  /* 11fe365c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11fe3661 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11fe3667 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3668 call dword ptr [0x120113f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f8))), 0x11fe366eu);
  /* 11fe366e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3670 je 0x11fe367c */
  if (C.zf) goto L_11fe367c;
  /* 11fe3672 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11fe3677 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe367c:;
  /* 11fe367c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11fe3682 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe3685 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11fe368f jmp 0x11fe36a0 */
  goto L_11fe36a0;
L_11fe3691:;
  /* 11fe3691 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11fe3697 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe369a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11fe36a0:;
  /* 11fe36a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe36a7 jge 0x11fe3824 */
  if ((C.sf==C.of)) goto L_11fe3824;
  /* 11fe36ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe36b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe36b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11fe36b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe36bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe36c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11fe36cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe36d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe36d5 jne 0x11fe36e2 */
  if (!C.zf) goto L_11fe36e2;
  /* 11fe36d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11fe36dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe36e0 je 0x11fe36ec */
  if (C.zf) goto L_11fe36ec;
L_11fe36e2:;
  /* 11fe36e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11fe36e7 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe36ec:;
  /* 11fe36ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe36f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe36f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11fe36fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11fe3700 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11fe3706 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11fe370c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe370f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe3711 je 0x11fe3749 */
  if (C.zf) goto L_11fe3749;
  /* 11fe3713 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11fe3719 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe371c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11fe3722 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe372c jle 0x11fe3738 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe3738;
  /* 11fe372e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11fe3733 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3738:;
  /* 11fe3738 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11fe373e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3741 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11fe3747 jmp 0x11fe378b */
  goto L_11fe378b;
L_11fe3749:;
  /* 11fe3749 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11fe374f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe3752 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3755 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11fe375b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3762 jle 0x11fe376e */
  if ((C.zf||C.sf!=C.of)) goto L_11fe376e;
  /* 11fe3764 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11fe376e:;
  /* 11fe376e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11fe3774 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11fe377b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe377e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11fe3784 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11fe378b:;
  /* 11fe378b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3792 jl 0x11fe37ad */
  if ((C.sf!=C.of)) goto L_11fe37ad;
  /* 11fe3794 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11fe379a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe379d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe379f jne 0x11fe37ad */
  if (!C.zf) goto L_11fe37ad;
  /* 11fe37a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe37ab jle 0x11fe37b7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe37b7;
L_11fe37ad:;
  /* 11fe37ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11fe37b2 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe37b7:;
  /* 11fe37b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe37bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe37c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fe37c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe37cc je 0x11fe37d8 */
  if (C.zf) goto L_11fe37d8;
  /* 11fe37ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11fe37d3 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe37d8:;
  /* 11fe37d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe37de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe37e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11fe37ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe37f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe37f6 jb 0x11fe36ec */
  if (C.cf) goto L_11fe36ec;
  /* 11fe37fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe3802 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3808 je 0x11fe3814 */
  if (C.zf) goto L_11fe3814;
  /* 11fe380a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11fe380f jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3814:;
  /* 11fe3814 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3817 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe381c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe381f jmp 0x11fe3691 */
  goto L_11fe3691;
L_11fe3824:;
  /* 11fe3824 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe3827 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe3829 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe382f je 0x11fe383b */
  if (C.zf) goto L_11fe383b;
  /* 11fe3831 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11fe3836 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe383b:;
  /* 11fe383b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe383e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11fe3844 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fe384b jmp 0x11fe3856 */
  goto L_11fe3856;
L_11fe384d:;
  /* 11fe384d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3850 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3853 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fe3856:;
  /* 11fe3856 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe385a jge 0x11fe3a8d */
  if ((C.sf==C.of)) goto L_11fe3a8d;
  /* 11fe3860 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11fe386a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11fe3870 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11fe3876:;
  /* 11fe3876 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe387c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe387f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11fe3885 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe388b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3891 je 0x11fe39ba */
  if (C.zf) goto L_11fe39ba;
  /* 11fe3897 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe389a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11fe38a0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe38a7 je 0x11fe39ba */
  if (C.zf) goto L_11fe39ba;
  /* 11fe38ad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe38b3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe38b9 jb 0x11fe38ce */
  if (C.cf) goto L_11fe38ce;
  /* 11fe38bb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11fe38c1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe38c6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe38cc jb 0x11fe38d8 */
  if (C.cf) goto L_11fe38d8;
L_11fe38ce:;
  /* 11fe38ce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11fe38d3 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe38d8:;
  /* 11fe38d8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe38de and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe38e4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11fe38ea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11fe38f0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe38f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe38f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe38f9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe38fe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11fe3904:;
  /* 11fe3904 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3907 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe390d je 0x11fe392e */
  if (C.zf) goto L_11fe392e;
  /* 11fe390f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3912 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3918 jne 0x11fe391c */
  if (!C.zf) goto L_11fe391c;
  /* 11fe391a jmp 0x11fe392e */
  goto L_11fe392e;
L_11fe391c:;
  /* 11fe391c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe391f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe3921 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3924 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3927 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3929 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe392c jmp 0x11fe3904 */
  goto L_11fe3904;
L_11fe392e:;
  /* 11fe392e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3931 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3937 jne 0x11fe3943 */
  if (!C.zf) goto L_11fe3943;
  /* 11fe3939 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11fe393e jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3943:;
  /* 11fe3943 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe3949 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe394b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe394e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3951 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11fe3957 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe395e jle 0x11fe396a */
  if ((C.zf||C.sf!=C.of)) goto L_11fe396a;
  /* 11fe3960 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11fe396a:;
  /* 11fe396a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11fe3970 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3973 je 0x11fe397f */
  if (C.zf) goto L_11fe397f;
  /* 11fe3975 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11fe397a jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe397f:;
  /* 11fe397f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe3985 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe3988 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe398e je 0x11fe399a */
  if (C.zf) goto L_11fe399a;
  /* 11fe3990 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11fe3995 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe399a:;
  /* 11fe399a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11fe39a0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11fe39a6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11fe39ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe39af mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11fe39b5 jmp 0x11fe3876 */
  goto L_11fe3876;
L_11fe39ba:;
  /* 11fe39ba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe39c1 je 0x11fe3a31 */
  if (C.zf) goto L_11fe3a31;
  /* 11fe39c3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe39c7 jge 0x11fe39fb */
  if ((C.sf==C.of)) goto L_11fe39fb;
  /* 11fe39c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe39ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe39d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe39d3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11fe39d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe39db mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11fe39e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe39e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe39e9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe39eb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11fe39f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe39f3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11fe39f9 jmp 0x11fe3a31 */
  goto L_11fe3a31;
L_11fe39fb:;
  /* 11fe39fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe39fe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3a01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe3a06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe3a08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11fe3a0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3a10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11fe3a16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3a19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3a1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11fe3a21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11fe3a23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11fe3a29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3a2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11fe3a31:;
  /* 11fe3a31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11fe3a37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3a3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3a40 jne 0x11fe3a54 */
  if (!C.zf) goto L_11fe3a54;
  /* 11fe3a42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3a45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11fe3a4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3a52 je 0x11fe3a5e */
  if (C.zf) goto L_11fe3a5e;
L_11fe3a54:;
  /* 11fe3a54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11fe3a59 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3a5e:;
  /* 11fe3a5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11fe3a64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe3a67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3a6d je 0x11fe3a79 */
  if (C.zf) goto L_11fe3a79;
  /* 11fe3a6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11fe3a74 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3a79:;
  /* 11fe3a79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11fe3a7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3a82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11fe3a88 jmp 0x11fe384d */
  goto L_11fe384d;
L_11fe3a8d:;
  /* 11fe3a8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe3a90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11fe3a96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11fe3a9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3aa0 jne 0x11fe3aba */
  if (!C.zf) goto L_11fe3aba;
  /* 11fe3aa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe3aa5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11fe3aab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11fe3ab1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3ab8 je 0x11fe3ac1 */
  if (C.zf) goto L_11fe3ac1;
L_11fe3aba:;
  /* 11fe3aba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11fe3abf jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3ac1:;
  /* 11fe3ac1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11fe3ac7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3acd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11fe3ad3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe3ad6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3adb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe3ade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3ae1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe3ae3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe3ae6 jmp 0x11fe35ea */
  goto L_11fe35ea;
L_11fe3aeb:;
  /* 11fe3aeb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe3af1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11fe3af7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3af9 jne 0x11fe3b0c */
  if (!C.zf) goto L_11fe3b0c;
  /* 11fe3afb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe3b01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11fe3b07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3b0a je 0x11fe3b13 */
  if (C.zf) goto L_11fe3b13;
L_11fe3b0c:;
  /* 11fe3b0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11fe3b11 jmp 0x11fe3b29 */
  goto L_11fe3b29;
L_11fe3b13:;
  /* 11fe3b13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11fe3b19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3b1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11fe3b22 jmp 0x11fe3553 */
  goto L_11fe3553;
L_11fe3b27:;
  /* 11fe3b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe3b29:;
  /* 11fe3b29 mov esp, ebp */
  ESP = (EBP);
  /* 11fe3b2b pop ebp */
  EBP = (pop32());
  /* 11fe3b2c ret  */
  ESPCHK(0x11fe3510u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b30 @ 0x11fe3b30 (250 bytes, 92 insns) */
void f_11fe3b30(void) {
  FTRACE(0x11fe3b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3b31 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3b33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe3b37 push esi */
  push32((uint32_t)(ESI));
  /* 11fe3b38 push edi */
  push32((uint32_t)(EDI));
  /* 11fe3b39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11fe3b3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe3b3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11fe3b42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11fe3b45:;
  /* 11fe3b45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3b49 jne 0x11fe3b69 */
  if (!C.zf) goto L_11fe3b69;
  /* 11fe3b4b push 0x1200a010 */
  push32((uint32_t)(0x1200a010u));
  /* 11fe3b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe3b52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11fe3b54 push 0x1200a004 */
  push32((uint32_t)(0x1200a004u));
  /* 11fe3b59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe3b5b call 0x11fd9d80 */
  push32(0x11fe3b60u); f_11fd9d80();
  /* 11fe3b60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3b63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3b66 jne 0x11fe3b69 */
  if (!C.zf) goto L_11fe3b69;
  /* 11fe3b68 int3  */
  x86_unimpl("int3 @ 0x11fe3b68");
L_11fe3b69:;
  /* 11fe3b69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe3b6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe3b6d jne 0x11fe3b45 */
  if (!C.zf) goto L_11fe3b45;
L_11fe3b6f:;
  /* 11fe3b6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3b73 jne 0x11fe3b93 */
  if (!C.zf) goto L_11fe3b93;
  /* 11fe3b75 push 0x12009ff4 */
  push32((uint32_t)(0x12009ff4u));
  /* 11fe3b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe3b7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11fe3b7e push 0x1200a004 */
  push32((uint32_t)(0x1200a004u));
  /* 11fe3b83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe3b85 call 0x11fd9d80 */
  push32(0x11fe3b8au); f_11fd9d80();
  /* 11fe3b8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3b8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3b90 jne 0x11fe3b93 */
  if (!C.zf) goto L_11fe3b93;
  /* 11fe3b92 int3  */
  x86_unimpl("int3 @ 0x11fe3b92");
L_11fe3b93:;
  /* 11fe3b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3b97 jne 0x11fe3b6f */
  if (!C.zf) goto L_11fe3b6f;
  /* 11fe3b99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3b9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11fe3ba3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3ba9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fe3bac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3baf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3bb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe3bb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3bb7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11fe3bbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe3bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3bc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe3bc5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe3bc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3bca call 0x11fe5910 */
  push32(0x11fe3bcfu); f_11fe5910();
  /* 11fe3bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3bd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe3bd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3bd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe3bdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3bde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3be1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe3be4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3be7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3beb jl 0x11fe3c0f */
  if ((C.sf!=C.of)) goto L_11fe3c0f;
  /* 11fe3bed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3bf0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe3bf2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fe3bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3bf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe3bfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11fe3c00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3c03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe3c05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3c08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3c0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe3c0d jmp 0x11fe3c20 */
  goto L_11fe3c20;
L_11fe3c0f:;
  /* 11fe3c0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe3c12 push edx */
  push32((uint32_t)(EDX));
  /* 11fe3c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe3c15 call 0x11fe5690 */
  push32(0x11fe3c1au); f_11fe5690();
  /* 11fe3c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3c1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11fe3c20:;
  /* 11fe3c20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe3c23 pop edi */
  EDI = (pop32());
  /* 11fe3c24 pop esi */
  ESI = (pop32());
  /* 11fe3c25 pop ebx */
  EBX = (pop32());
  /* 11fe3c26 mov esp, ebp */
  ESP = (EBP);
  /* 11fe3c28 pop ebp */
  EBP = (pop32());
  /* 11fe3c29 ret  */
  ESPCHK(0x11fe3b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x11fe3c30 (91 bytes, 30 insns) */
void f_11fe3c30(void) {
  FTRACE(0x11fe3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3c31 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3c33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3c36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe3c38 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3c3e jne 0x11fe3c5e */
  if (!C.zf) goto L_11fe3c5e;
  /* 11fe3c40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3c43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe3c45 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3c49 jne 0x11fe3c5e */
  if (!C.zf) goto L_11fe3c5e;
  /* 11fe3c4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3c4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe3c50 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3c57 jne 0x11fe3c5e */
  if (!C.zf) goto L_11fe3c5e;
  /* 11fe3c59 call 0x11fde090 */
  push32(0x11fe3c5eu); f_11fde090();
L_11fe3c5e:;
  /* 11fe3c5e cmp dword ptr [0x1200f118], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f118))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3c65 je 0x11fe3c85 */
  if (C.zf) goto L_11fe3c85;
  /* 11fe3c67 mov eax, dword ptr [0x1200f118] */
  EAX = (r32((uint32_t)(0x1200f118)));
  /* 11fe3c6c push eax */
  push32((uint32_t)(EAX));
  /* 11fe3c6d call 0x11fe3d30 */
  push32(0x11fe3c72u); f_11fe3d30();
  /* 11fe3c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3c77 je 0x11fe3c85 */
  if (C.zf) goto L_11fe3c85;
  /* 11fe3c79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3c7d call dword ptr [0x1200f118] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f118))), 0x11fe3c83u);
  /* 11fe3c83 jmp 0x11fe3c87 */
  goto L_11fe3c87;
L_11fe3c85:;
  /* 11fe3c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe3c87:;
  /* 11fe3c87 pop ebp */
  EBP = (pop32());
  /* 11fe3c88 ret 4 */
  ESPCHK(0x11fe3c30u, _esp0);
  ESP += 8; return;
}

/* FUN_10013c90 @ 0x11fe3c90 (21 bytes, 7 insns) */
void f_11fe3c90(void) {
  FTRACE(0x11fe3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3c91 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3c93 push 0x11fe3c30 */
  push32((uint32_t)(0x11fe3c30u));
  /* 11fe3c98 call dword ptr [0x12011390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011390))), 0x11fe3c9eu);
  /* 11fe3c9e mov dword ptr [0x1200f118], eax */
  w32((uint32_t)(0x1200f118), (EAX));
  /* 11fe3ca3 pop ebp */
  EBP = (pop32());
  /* 11fe3ca4 ret  */
  ESPCHK(0x11fe3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cb0 @ 0x11fe3cb0 (17 bytes, 7 insns) */
void f_11fe3cb0(void) {
  FTRACE(0x11fe3cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3cb3 mov eax, dword ptr [0x1200f118] */
  EAX = (r32((uint32_t)(0x1200f118)));
  /* 11fe3cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3cb9 call dword ptr [0x12011390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011390))), 0x11fe3cbfu);
  /* 11fe3cbf pop ebp */
  EBP = (pop32());
  /* 11fe3cc0 ret  */
  ESPCHK(0x11fe3cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cd0 @ 0x11fe3cd0 (43 bytes, 16 insns) */
void f_11fe3cd0(void) {
  FTRACE(0x11fe3cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3cd4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe3cdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe3cde push eax */
  push32((uint32_t)(EAX));
  /* 11fe3cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3ce3 call dword ptr [0x120113f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f4))), 0x11fe3ce9u);
  /* 11fe3ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3ceb je 0x11fe3cf4 */
  if (C.zf) goto L_11fe3cf4;
  /* 11fe3ced mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe3cf4:;
  /* 11fe3cf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3cf7 mov esp, ebp */
  ESP = (EBP);
  /* 11fe3cf9 pop ebp */
  EBP = (pop32());
  /* 11fe3cfa ret  */
  ESPCHK(0x11fe3cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d00 @ 0x11fe3d00 (43 bytes, 16 insns) */
void f_11fe3d00(void) {
  FTRACE(0x11fe3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3d01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3d04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe3d0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe3d0e push eax */
  push32((uint32_t)(EAX));
  /* 11fe3d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3d12 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3d13 call dword ptr [0x120113f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f8))), 0x11fe3d19u);
  /* 11fe3d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3d1b je 0x11fe3d24 */
  if (C.zf) goto L_11fe3d24;
  /* 11fe3d1d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe3d24:;
  /* 11fe3d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3d27 mov esp, ebp */
  ESP = (EBP);
  /* 11fe3d29 pop ebp */
  EBP = (pop32());
  /* 11fe3d2a ret  */
  ESPCHK(0x11fe3d00u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11fe3d30 (39 bytes, 14 insns) */
void f_11fe3d30(void) {
  FTRACE(0x11fe3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3d31 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3d34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe3d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3d3e push eax */
  push32((uint32_t)(EAX));
  /* 11fe3d3f call dword ptr [0x12011380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011380))), 0x11fe3d45u);
  /* 11fe3d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe3d47 je 0x11fe3d50 */
  if (C.zf) goto L_11fe3d50;
  /* 11fe3d49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe3d50:;
  /* 11fe3d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe3d53 mov esp, ebp */
  ESP = (EBP);
  /* 11fe3d55 pop ebp */
  EBP = (pop32());
  /* 11fe3d56 ret  */
  ESPCHK(0x11fe3d30u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11fe3d60 (129 bytes, 56 insns) */
void f_11fe3d60(void) {
  FTRACE(0x11fe3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3d60 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fe3d64 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fe3d68 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11fe3d6e jne 0x11fe3dac */
  if (!C.zf) goto L_11fe3dac;
L_11fe3d70:;
  /* 11fe3d70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe3d72 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3d74 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3d76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fe3d78 je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3d7a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3d7d jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3d7f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fe3d81 je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3d83 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fe3d86 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3d89 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3d8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fe3d8d je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3d8f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3d92 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3d94 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3d97 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3d9a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fe3d9c jne 0x11fe3d70 */
  if (!C.zf) goto L_11fe3d70;
  /* 11fe3d9e mov edi, edi */
  EDI = (EDI);
L_11fe3da0:;
  /* 11fe3da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3da2 ret  */
  ESPCHK(0x11fe3d60u, _esp0);
  ESP += 4; return;
  /* 11fe3da3 nop  */
  /* nop */
L_11fe3da4:;
  /* 11fe3da4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3da6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe3da8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fe3da9 ret  */
  ESPCHK(0x11fe3d60u, _esp0);
  ESP += 4; return;
  /* 11fe3daa mov edi, edi */
  EDI = (EDI);
L_11fe3dac:;
  /* 11fe3dac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11fe3db2 je 0x11fe3dc8 */
  if (C.zf) goto L_11fe3dc8;
  /* 11fe3db4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe3db6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fe3db7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3db9 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3dbb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fe3dbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fe3dbe je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3dc0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11fe3dc6 je 0x11fe3d70 */
  if (C.zf) goto L_11fe3d70;
L_11fe3dc8:;
  /* 11fe3dc8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fe3dcb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3dce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3dd0 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3dd2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fe3dd4 je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3dd6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe3dd9 jne 0x11fe3da4 */
  if (!C.zf) goto L_11fe3da4;
  /* 11fe3ddb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fe3ddd je 0x11fe3da0 */
  if (C.zf) goto L_11fe3da0;
  /* 11fe3ddf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3de2 jmp 0x11fe3d70 */
  goto L_11fe3d70;
}

/* FUN_10013ea9 @ 0x11fe3ea9 (27 bytes, 11 insns) */
void f_11fe3ea9(void) {
  FTRACE(0x11fe3ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3ea9 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3eaa mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fe3eae mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11fe3eb0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fe3eb3 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3eb4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fe3eb7 push eax */
  push32((uint32_t)(EAX));
  /* 11fe3eb8 call 0x11fd9632 */
  push32(0x11fe3ebdu); f_11fd9632();
  /* 11fe3ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3ec0 pop ebp */
  EBP = (pop32());
  /* 11fe3ec1 ret 4 */
  ESPCHK(0x11fe3ea9u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11fe3ed0 (446 bytes, 130 insns) */
void f_11fe3ed0(void) {
  FTRACE(0x11fe3ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe3ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe3ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe3ed3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe3ed6 call 0x11fddec0 */
  push32(0x11fe3edbu); f_11fddec0();
  /* 11fe3edb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe3ede mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3ee1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11fe3ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe3ee8 push edx */
  push32((uint32_t)(EDX));
  /* 11fe3ee9 call 0x11fe4090 */
  push32(0x11fe3eeeu); f_11fe4090();
  /* 11fe3eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3ef1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe3ef4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3ef8 je 0x11fe3f03 */
  if (C.zf) goto L_11fe3f03;
  /* 11fe3efa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3efd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3f01 jne 0x11fe3f12 */
  if (!C.zf) goto L_11fe3f12;
L_11fe3f03:;
  /* 11fe3f03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe3f06 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe3f07 call dword ptr [0x1201137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201137c))), 0x11fe3f0du);
  /* 11fe3f0d jmp 0x11fe408a */
  goto L_11fe408a;
L_11fe3f12:;
  /* 11fe3f12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3f15 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3f19 jne 0x11fe3f2f */
  if (!C.zf) goto L_11fe3f2f;
  /* 11fe3f1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3f1e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11fe3f25 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe3f2a jmp 0x11fe408a */
  goto L_11fe408a;
L_11fe3f2f:;
  /* 11fe3f2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3f32 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3f36 jne 0x11fe3f40 */
  if (!C.zf) goto L_11fe3f40;
  /* 11fe3f38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe3f3b jmp 0x11fe408a */
  goto L_11fe408a;
L_11fe3f40:;
  /* 11fe3f40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3f43 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe3f46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe3f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3f4c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11fe3f4f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe3f52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe3f58 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11fe3f5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3f5e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3f62 jne 0x11fe4067 */
  if (!C.zf) goto L_11fe4067;
  /* 11fe3f68 mov eax, dword ptr [0x1200d2b8] */
  EAX = (r32((uint32_t)(0x1200d2b8)));
  /* 11fe3f6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe3f70 jmp 0x11fe3f7b */
  goto L_11fe3f7b;
L_11fe3f72:;
  /* 11fe3f72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3f78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fe3f7b:;
  /* 11fe3f7b mov edx, dword ptr [0x1200d2b8] */
  EDX = (r32((uint32_t)(0x1200d2b8)));
  /* 11fe3f81 add edx, dword ptr [0x1200d2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe3f87 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3f8a jge 0x11fe3fa2 */
  if ((C.sf==C.of)) goto L_11fe3fa2;
  /* 11fe3f8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe3f8f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe3f92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3f95 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11fe3f98 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11fe3fa0 jmp 0x11fe3f72 */
  goto L_11fe3f72;
L_11fe3fa2:;
  /* 11fe3fa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3fa5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11fe3fa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe3fab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3fae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3fb4 jne 0x11fe3fc5 */
  if (!C.zf) goto L_11fe3fc5;
  /* 11fe3fb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3fb9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11fe3fc0 jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe3fc5:;
  /* 11fe3fc5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3fc8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3fce jne 0x11fe3fdc */
  if (!C.zf) goto L_11fe3fdc;
  /* 11fe3fd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3fd3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11fe3fda jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe3fdc:;
  /* 11fe3fdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3fdf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3fe5 jne 0x11fe3ff3 */
  if (!C.zf) goto L_11fe3ff3;
  /* 11fe3fe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe3fea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11fe3ff1 jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe3ff3:;
  /* 11fe3ff3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe3ff6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe3ffc jne 0x11fe400a */
  if (!C.zf) goto L_11fe400a;
  /* 11fe3ffe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4001 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11fe4008 jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe400a:;
  /* 11fe400a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe400d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4013 jne 0x11fe4021 */
  if (!C.zf) goto L_11fe4021;
  /* 11fe4015 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4018 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11fe401f jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe4021:;
  /* 11fe4021 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe4024 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe402a jne 0x11fe4038 */
  if (!C.zf) goto L_11fe4038;
  /* 11fe402c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe402f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11fe4036 jmp 0x11fe404d */
  goto L_11fe404d;
L_11fe4038:;
  /* 11fe4038 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe403b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4041 jne 0x11fe404d */
  if (!C.zf) goto L_11fe404d;
  /* 11fe4043 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4046 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11fe404d:;
  /* 11fe404d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4050 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11fe4053 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4054 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fe4056 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11fe4059u);
  /* 11fe4059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe405c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe405f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4062 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11fe4065 jmp 0x11fe407e */
  goto L_11fe407e;
L_11fe4067:;
  /* 11fe4067 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe406a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11fe4071 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe4074 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe4077 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4078 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11fe407bu);
  /* 11fe407b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe407e:;
  /* 11fe407e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4081 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe4084 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11fe4087 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fe408a:;
  /* 11fe408a mov esp, ebp */
  ESP = (EBP);
  /* 11fe408c pop ebp */
  EBP = (pop32());
  /* 11fe408d ret  */
  ESPCHK(0x11fe3ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x11fe4090 (89 bytes, 35 insns) */
void f_11fe4090(void) {
  FTRACE(0x11fe4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4090 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4091 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4093 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4094 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe4097 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe409a:;
  /* 11fe409a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe409d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe409f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe40a2 je 0x11fe40c2 */
  if (C.zf) goto L_11fe40c2;
  /* 11fe40a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe40a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe40aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe40ad mov ecx, dword ptr [0x1200d2c4] */
  ECX = (r32((uint32_t)(0x1200d2c4)));
  /* 11fe40b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe40b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe40b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe40bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe40be jae 0x11fe40c2 */
  if (!C.cf) goto L_11fe40c2;
  /* 11fe40c0 jmp 0x11fe409a */
  goto L_11fe409a;
L_11fe40c2:;
  /* 11fe40c2 mov eax, dword ptr [0x1200d2c4] */
  EAX = (r32((uint32_t)(0x1200d2c4)));
  /* 11fe40c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe40ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe40cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe40cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe40d2 jae 0x11fe40de */
  if (!C.cf) goto L_11fe40de;
  /* 11fe40d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe40d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe40d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe40dc je 0x11fe40e2 */
  if (C.zf) goto L_11fe40e2;
L_11fe40de:;
  /* 11fe40de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe40e0 jmp 0x11fe40e5 */
  goto L_11fe40e5;
L_11fe40e2:;
  /* 11fe40e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fe40e5:;
  /* 11fe40e5 mov esp, ebp */
  ESP = (EBP);
  /* 11fe40e7 pop ebp */
  EBP = (pop32());
  /* 11fe40e8 ret  */
  ESPCHK(0x11fe4090u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11fe40f0 (30 bytes, 12 insns) */
void f_11fe40f0(void) {
  FTRACE(0x11fe40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe40f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe40f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe40f3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fe40f5 call 0x11fdf250 */
  push32(0x11fe40fau); f_11fdf250();
  /* 11fe40fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe40fd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11fe40ff call 0x11fdfdc0 */
  push32(0x11fe4104u); f_11fdfdc0();
  /* 11fe4104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4107 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fe4109 call 0x11fde230 */
  push32(0x11fe410eu); f_11fde230();
  /* 11fe410e pop ebp */
  EBP = (pop32());
  /* 11fe410f ret  */
  ESPCHK(0x11fe40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014110 @ 0x11fe4110 (61 bytes, 18 insns) */
void f_11fe4110(void) {
  FTRACE(0x11fe4110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4110 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4111 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4113 cmp dword ptr [0x1200f1d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe411a jne 0x11fe414b */
  if (!C.zf) goto L_11fe414b;
  /* 11fe411c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe411e call 0x11fdb0c0 */
  push32(0x11fe4123u); f_11fdb0c0();
  /* 11fe4123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4126 cmp dword ptr [0x1200f1d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe412d jne 0x11fe4141 */
  if (!C.zf) goto L_11fe4141;
  /* 11fe412f call 0x11fe4170 */
  push32(0x11fe4134u); f_11fe4170();
  /* 11fe4134 mov eax, dword ptr [0x1200f1d8] */
  EAX = (r32((uint32_t)(0x1200f1d8)));
  /* 11fe4139 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe413c mov dword ptr [0x1200f1d8], eax */
  w32((uint32_t)(0x1200f1d8), (EAX));
L_11fe4141:;
  /* 11fe4141 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe4143 call 0x11fdb160 */
  push32(0x11fe4148u); f_11fdb160();
  /* 11fe4148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe414b:;
  /* 11fe414b pop ebp */
  EBP = (pop32());
  /* 11fe414c ret  */
  ESPCHK(0x11fe4110u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x11fe4150 (30 bytes, 11 insns) */
void f_11fe4150(void) {
  FTRACE(0x11fe4150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4150 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4151 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4153 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe4155 call 0x11fdb0c0 */
  push32(0x11fe415au); f_11fdb0c0();
  /* 11fe415a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe415d call 0x11fe4170 */
  push32(0x11fe4162u); f_11fe4170();
  /* 11fe4162 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe4164 call 0x11fdb160 */
  push32(0x11fe4169u); f_11fdb160();
  /* 11fe4169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe416c pop ebp */
  EBP = (pop32());
  /* 11fe416d ret  */
  ESPCHK(0x11fe4150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014170 @ 0x11fe4170 (939 bytes, 266 insns) */
void f_11fe4170(void) {
  FTRACE(0x11fe4170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4170 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4171 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe417d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe417f call 0x11fdb0c0 */
  push32(0x11fe4184u); f_11fdb0c0();
  /* 11fe4184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4187 mov dword ptr [0x1200f120], 0 */
  w32((uint32_t)(0x1200f120), (0x0u));
  /* 11fe4191 mov dword ptr [0x1200d370], 0xffffffff */
  w32((uint32_t)(0x1200d370), (0xffffffffu));
  /* 11fe419b mov eax, dword ptr [0x1200d370] */
  EAX = (r32((uint32_t)(0x1200d370)));
  /* 11fe41a0 mov dword ptr [0x1200d360], eax */
  w32((uint32_t)(0x1200d360), (EAX));
  /* 11fe41a5 push 0x1200a0b0 */
  push32((uint32_t)(0x1200a0b0u));
  /* 11fe41aa call 0x11fe9b60 */
  push32(0x11fe41afu); f_11fe9b60();
  /* 11fe41af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe41b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe41b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe41b9 jne 0x11fe42f3 */
  if (!C.zf) goto L_11fe42f3;
  /* 11fe41bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe41c1 call 0x11fdb160 */
  push32(0x11fe41c6u); f_11fdb160();
  /* 11fe41c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe41c9 push 0x1200f128 */
  push32((uint32_t)(0x1200f128u));
  /* 11fe41ce call dword ptr [0x12011400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011400))), 0x11fe41d4u);
  /* 11fe41d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe41d7 je 0x11fe42ee */
  if (C.zf) goto L_11fe42ee;
  /* 11fe41dd mov dword ptr [0x1200f120], 1 */
  w32((uint32_t)(0x1200f120), (0x1u));
  /* 11fe41e7 mov ecx, dword ptr [0x1200f128] */
  ECX = (r32((uint32_t)(0x1200f128)));
  /* 11fe41ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe41f0 mov dword ptr [0x1200d2c8], ecx */
  w32((uint32_t)(0x1200d2c8), (ECX));
  /* 11fe41f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe41f8 mov dx, word ptr [0x1200f16e] */
  DX = (r16((uint32_t)(0x1200f16e)));
  /* 11fe41ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe4201 je 0x11fe4219 */
  if (C.zf) goto L_11fe4219;
  /* 11fe4203 mov eax, dword ptr [0x1200f17c] */
  EAX = (r32((uint32_t)(0x1200f17c)));
  /* 11fe4208 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe420b mov ecx, dword ptr [0x1200d2c8] */
  ECX = (r32((uint32_t)(0x1200d2c8)));
  /* 11fe4211 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4213 mov dword ptr [0x1200d2c8], ecx */
  w32((uint32_t)(0x1200d2c8), (ECX));
L_11fe4219:;
  /* 11fe4219 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe421b mov dx, word ptr [0x1200f1c2] */
  DX = (r16((uint32_t)(0x1200f1c2)));
  /* 11fe4222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe4224 je 0x11fe424e */
  if (C.zf) goto L_11fe424e;
  /* 11fe4226 cmp dword ptr [0x1200f1d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe422d je 0x11fe424e */
  if (C.zf) goto L_11fe424e;
  /* 11fe422f mov dword ptr [0x1200d2cc], 1 */
  w32((uint32_t)(0x1200d2cc), (0x1u));
  /* 11fe4239 mov eax, dword ptr [0x1200f1d0] */
  EAX = (r32((uint32_t)(0x1200f1d0)));
  /* 11fe423e sub eax, dword ptr [0x1200f17c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200f17c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4244 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4247 mov dword ptr [0x1200d2d0], eax */
  w32((uint32_t)(0x1200d2d0), (EAX));
  /* 11fe424c jmp 0x11fe4262 */
  goto L_11fe4262;
L_11fe424e:;
  /* 11fe424e mov dword ptr [0x1200d2cc], 0 */
  w32((uint32_t)(0x1200d2cc), (0x0u));
  /* 11fe4258 mov dword ptr [0x1200d2d0], 0 */
  w32((uint32_t)(0x1200d2d0), (0x0u));
L_11fe4262:;
  /* 11fe4262 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fe4265 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4266 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4268 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11fe426a mov edx, dword ptr [0x1200d354] */
  EDX = (r32((uint32_t)(0x1200d354)));
  /* 11fe4270 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4271 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fe4273 push 0x1200f12c */
  push32((uint32_t)(0x1200f12cu));
  /* 11fe4278 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fe427d mov eax, dword ptr [0x1200f208] */
  EAX = (r32((uint32_t)(0x1200f208)));
  /* 11fe4282 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4283 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fe4289u);
  /* 11fe4289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe428b je 0x11fe429f */
  if (C.zf) goto L_11fe429f;
  /* 11fe428d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4291 jne 0x11fe429f */
  if (!C.zf) goto L_11fe429f;
  /* 11fe4293 mov ecx, dword ptr [0x1200d354] */
  ECX = (r32((uint32_t)(0x1200d354)));
  /* 11fe4299 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11fe429d jmp 0x11fe42a8 */
  goto L_11fe42a8;
L_11fe429f:;
  /* 11fe429f mov edx, dword ptr [0x1200d354] */
  EDX = (r32((uint32_t)(0x1200d354)));
  /* 11fe42a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11fe42a8:;
  /* 11fe42a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fe42ab push eax */
  push32((uint32_t)(EAX));
  /* 11fe42ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe42ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11fe42b0 mov ecx, dword ptr [0x1200d358] */
  ECX = (r32((uint32_t)(0x1200d358)));
  /* 11fe42b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe42b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fe42b9 push 0x1200f180 */
  push32((uint32_t)(0x1200f180u));
  /* 11fe42be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fe42c3 mov edx, dword ptr [0x1200f208] */
  EDX = (r32((uint32_t)(0x1200f208)));
  /* 11fe42c9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe42ca call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fe42d0u);
  /* 11fe42d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe42d2 je 0x11fe42e5 */
  if (C.zf) goto L_11fe42e5;
  /* 11fe42d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe42d8 jne 0x11fe42e5 */
  if (!C.zf) goto L_11fe42e5;
  /* 11fe42da mov eax, dword ptr [0x1200d358] */
  EAX = (r32((uint32_t)(0x1200d358)));
  /* 11fe42df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11fe42e3 jmp 0x11fe42ee */
  goto L_11fe42ee;
L_11fe42e5:;
  /* 11fe42e5 mov ecx, dword ptr [0x1200d358] */
  ECX = (r32((uint32_t)(0x1200d358)));
  /* 11fe42eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11fe42ee:;
  /* 11fe42ee jmp 0x11fe4517 */
  goto L_11fe4517;
L_11fe42f3:;
  /* 11fe42f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe42f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe42f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe42fb je 0x11fe431d */
  if (C.zf) goto L_11fe431d;
  /* 11fe42fd cmp dword ptr [0x1200f1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4304 je 0x11fe432c */
  if (C.zf) goto L_11fe432c;
  /* 11fe4306 mov ecx, dword ptr [0x1200f1d4] */
  ECX = (r32((uint32_t)(0x1200f1d4)));
  /* 11fe430c push ecx */
  push32((uint32_t)(ECX));
  /* 11fe430d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4310 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4311 call 0x11fe3d60 */
  push32(0x11fe4316u); f_11fe3d60();
  /* 11fe4316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe431b jne 0x11fe432c */
  if (!C.zf) goto L_11fe432c;
L_11fe431d:;
  /* 11fe431d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe431f call 0x11fdb160 */
  push32(0x11fe4324u); f_11fdb160();
  /* 11fe4324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4327 jmp 0x11fe4517 */
  goto L_11fe4517;
L_11fe432c:;
  /* 11fe432c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe432e mov eax, dword ptr [0x1200f1d4] */
  EAX = (r32((uint32_t)(0x1200f1d4)));
  /* 11fe4333 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4334 call 0x11fdbc50 */
  push32(0x11fe4339u); f_11fdbc50();
  /* 11fe4339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe433c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11fe4341 push 0x1200a0a8 */
  push32((uint32_t)(0x1200a0a8u));
  /* 11fe4346 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe4348 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe434b push ecx */
  push32((uint32_t)(ECX));
  /* 11fe434c call 0x11fdf750 */
  push32(0x11fe4351u); f_11fdf750();
  /* 11fe4351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4357 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4358 call 0x11fdb1c0 */
  push32(0x11fe435du); f_11fdb1c0();
  /* 11fe435d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4360 mov dword ptr [0x1200f1d4], eax */
  w32((uint32_t)(0x1200f1d4), (EAX));
  /* 11fe4365 cmp dword ptr [0x1200f1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe436c jne 0x11fe437d */
  if (!C.zf) goto L_11fe437d;
  /* 11fe436e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe4370 call 0x11fdb160 */
  push32(0x11fe4375u); f_11fdb160();
  /* 11fe4375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4378 jmp 0x11fe4517 */
  goto L_11fe4517;
L_11fe437d:;
  /* 11fe437d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4380 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4381 mov eax, dword ptr [0x1200f1d4] */
  EAX = (r32((uint32_t)(0x1200f1d4)));
  /* 11fe4386 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4387 call 0x11fdf8d0 */
  push32(0x11fe438cu); f_11fdf8d0();
  /* 11fe438c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe438f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe4391 call 0x11fdb160 */
  push32(0x11fe4396u); f_11fdb160();
  /* 11fe4396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4399 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fe439b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe439e push ecx */
  push32((uint32_t)(ECX));
  /* 11fe439f mov edx, dword ptr [0x1200d354] */
  EDX = (r32((uint32_t)(0x1200d354)));
  /* 11fe43a5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe43a6 call 0x11fe0140 */
  push32(0x11fe43abu); f_11fe0140();
  /* 11fe43ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe43ae mov eax, dword ptr [0x1200d354] */
  EAX = (r32((uint32_t)(0x1200d354)));
  /* 11fe43b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11fe43b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe43ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe43bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe43c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe43c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe43c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe43c9 jne 0x11fe43dd */
  if (!C.zf) goto L_11fe43dd;
  /* 11fe43cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe43ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe43d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe43d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe43d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe43da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fe43dd:;
  /* 11fe43dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe43e0 push eax */
  push32((uint32_t)(EAX));
  /* 11fe43e1 call 0x11fe98e0 */
  push32(0x11fe43e6u); f_11fe98e0();
  /* 11fe43e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe43e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe43ef mov dword ptr [0x1200d2c8], eax */
  w32((uint32_t)(0x1200d2c8), (EAX));
L_11fe43f4:;
  /* 11fe43f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe43f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe43fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe43fd je 0x11fe4415 */
  if (C.zf) goto L_11fe4415;
  /* 11fe43ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4402 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe4405 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4408 jl 0x11fe4420 */
  if ((C.sf!=C.of)) goto L_11fe4420;
  /* 11fe440a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe440d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe4410 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4413 jg 0x11fe4420 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe4420;
L_11fe4415:;
  /* 11fe4415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4418 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe441b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe441e jmp 0x11fe43f4 */
  goto L_11fe43f4;
L_11fe4420:;
  /* 11fe4420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4423 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe4426 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4429 jne 0x11fe44c5 */
  if (!C.zf) goto L_11fe44c5;
  /* 11fe442f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4435 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe4438 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe443b push edx */
  push32((uint32_t)(EDX));
  /* 11fe443c call 0x11fe98e0 */
  push32(0x11fe4441u); f_11fe98e0();
  /* 11fe4441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4444 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4447 mov ecx, dword ptr [0x1200d2c8] */
  ECX = (r32((uint32_t)(0x1200d2c8)));
  /* 11fe444d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe444f mov dword ptr [0x1200d2c8], ecx */
  w32((uint32_t)(0x1200d2c8), (ECX));
L_11fe4455:;
  /* 11fe4455 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4458 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe445b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe445e jl 0x11fe4476 */
  if ((C.sf!=C.of)) goto L_11fe4476;
  /* 11fe4460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4463 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe4466 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4469 jg 0x11fe4476 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe4476;
  /* 11fe446b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe446e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4471 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe4474 jmp 0x11fe4455 */
  goto L_11fe4455;
L_11fe4476:;
  /* 11fe4476 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4479 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe447c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe447f jne 0x11fe44c5 */
  if (!C.zf) goto L_11fe44c5;
  /* 11fe4481 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4487 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe448a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe448d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe448e call 0x11fe98e0 */
  push32(0x11fe4493u); f_11fe98e0();
  /* 11fe4493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4496 mov edx, dword ptr [0x1200d2c8] */
  EDX = (r32((uint32_t)(0x1200d2c8)));
  /* 11fe449c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe449e mov dword ptr [0x1200d2c8], edx */
  w32((uint32_t)(0x1200d2c8), (EDX));
L_11fe44a4:;
  /* 11fe44a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe44a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe44aa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe44ad jl 0x11fe44c5 */
  if ((C.sf!=C.of)) goto L_11fe44c5;
  /* 11fe44af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe44b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe44b5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe44b8 jg 0x11fe44c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe44c5;
  /* 11fe44ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe44bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe44c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe44c3 jmp 0x11fe44a4 */
  goto L_11fe44a4;
L_11fe44c5:;
  /* 11fe44c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe44c9 je 0x11fe44d9 */
  if (C.zf) goto L_11fe44d9;
  /* 11fe44cb mov edx, dword ptr [0x1200d2c8] */
  EDX = (r32((uint32_t)(0x1200d2c8)));
  /* 11fe44d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe44d3 mov dword ptr [0x1200d2c8], edx */
  w32((uint32_t)(0x1200d2c8), (EDX));
L_11fe44d9:;
  /* 11fe44d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe44dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe44df mov dword ptr [0x1200d2cc], ecx */
  w32((uint32_t)(0x1200d2cc), (ECX));
  /* 11fe44e5 cmp dword ptr [0x1200d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe44ec je 0x11fe450e */
  if (C.zf) goto L_11fe450e;
  /* 11fe44ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11fe44f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe44f3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe44f4 mov eax, dword ptr [0x1200d358] */
  EAX = (r32((uint32_t)(0x1200d358)));
  /* 11fe44f9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe44fa call 0x11fe0140 */
  push32(0x11fe44ffu); f_11fe0140();
  /* 11fe44ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4502 mov ecx, dword ptr [0x1200d358] */
  ECX = (r32((uint32_t)(0x1200d358)));
  /* 11fe4508 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11fe450c jmp 0x11fe4517 */
  goto L_11fe4517;
L_11fe450e:;
  /* 11fe450e mov edx, dword ptr [0x1200d358] */
  EDX = (r32((uint32_t)(0x1200d358)));
  /* 11fe4514 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11fe4517:;
  /* 11fe4517 mov esp, ebp */
  ESP = (EBP);
  /* 11fe4519 pop ebp */
  EBP = (pop32());
  /* 11fe451a ret  */
  ESPCHK(0x11fe4170u, _esp0);
  ESP += 4; return;
}

/* FUN_10014520 @ 0x11fe4520 (46 bytes, 18 insns) */
void f_11fe4520(void) {
  FTRACE(0x11fe4520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4520 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4521 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4523 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4524 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe4526 call 0x11fdb0c0 */
  push32(0x11fe452bu); f_11fdb0c0();
  /* 11fe452b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe452e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4531 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4532 call 0x11fe4550 */
  push32(0x11fe4537u); f_11fe4550();
  /* 11fe4537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe453a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe453d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fe453f call 0x11fdb160 */
  push32(0x11fe4544u); f_11fdb160();
  /* 11fe4544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4547 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe454a mov esp, ebp */
  ESP = (EBP);
  /* 11fe454c pop ebp */
  EBP = (pop32());
  /* 11fe454d ret  */
  ESPCHK(0x11fe4520u, _esp0);
  ESP += 4; return;
}

/* FUN_10014550 @ 0x11fe4550 (762 bytes, 246 insns) */
void f_11fe4550(void) {
  FTRACE(0x11fe4550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4550 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4551 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4553 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4554 cmp dword ptr [0x1200d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe455b jne 0x11fe4564 */
  if (!C.zf) goto L_11fe4564;
  /* 11fe455d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe455f jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe4564:;
  /* 11fe4564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4567 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fe456a cmp ecx, dword ptr [0x1200d360] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4570 jne 0x11fe4584 */
  if (!C.zf) goto L_11fe4584;
  /* 11fe4572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4575 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fe4578 cmp eax, dword ptr [0x1200d370] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d370))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe457e je 0x11fe474b */
  if (C.zf) goto L_11fe474b;
L_11fe4584:;
  /* 11fe4584 cmp dword ptr [0x1200f120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe458b je 0x11fe4705 */
  if (C.zf) goto L_11fe4705;
  /* 11fe4591 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe4593 mov cx, word ptr [0x1200f1c0] */
  CX = (r16((uint32_t)(0x1200f1c0)));
  /* 11fe459a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe459c jne 0x11fe45f9 */
  if (!C.zf) goto L_11fe45f9;
  /* 11fe459e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe45a0 mov dx, word ptr [0x1200f1ce] */
  DX = (r16((uint32_t)(0x1200f1ce)));
  /* 11fe45a7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe45a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe45aa mov ax, word ptr [0x1200f1cc] */
  AX = (r16((uint32_t)(0x1200f1cc)));
  /* 11fe45b0 push eax */
  push32((uint32_t)(EAX));
  /* 11fe45b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe45b3 mov cx, word ptr [0x1200f1ca] */
  CX = (r16((uint32_t)(0x1200f1ca)));
  /* 11fe45ba push ecx */
  push32((uint32_t)(ECX));
  /* 11fe45bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe45bd mov dx, word ptr [0x1200f1c8] */
  DX = (r16((uint32_t)(0x1200f1c8)));
  /* 11fe45c4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe45c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe45c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe45c9 mov ax, word ptr [0x1200f1c4] */
  AX = (r16((uint32_t)(0x1200f1c4)));
  /* 11fe45cf push eax */
  push32((uint32_t)(EAX));
  /* 11fe45d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe45d2 mov cx, word ptr [0x1200f1c6] */
  CX = (r16((uint32_t)(0x1200f1c6)));
  /* 11fe45d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe45da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe45dc mov dx, word ptr [0x1200f1c2] */
  DX = (r16((uint32_t)(0x1200f1c2)));
  /* 11fe45e3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe45e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe45e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fe45ea push ecx */
  push32((uint32_t)(ECX));
  /* 11fe45eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe45ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe45ef call 0x11fe4850 */
  push32(0x11fe45f4u); f_11fe4850();
  /* 11fe45f4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe45f7 jmp 0x11fe464a */
  goto L_11fe464a;
L_11fe45f9:;
  /* 11fe45f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe45fb mov dx, word ptr [0x1200f1ce] */
  DX = (r16((uint32_t)(0x1200f1ce)));
  /* 11fe4602 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4605 mov ax, word ptr [0x1200f1cc] */
  AX = (r16((uint32_t)(0x1200f1cc)));
  /* 11fe460b push eax */
  push32((uint32_t)(EAX));
  /* 11fe460c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe460e mov cx, word ptr [0x1200f1ca] */
  CX = (r16((uint32_t)(0x1200f1ca)));
  /* 11fe4615 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4616 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4618 mov dx, word ptr [0x1200f1c8] */
  DX = (r16((uint32_t)(0x1200f1c8)));
  /* 11fe461f push edx */
  push32((uint32_t)(EDX));
  /* 11fe4620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4622 mov ax, word ptr [0x1200f1c6] */
  AX = (r16((uint32_t)(0x1200f1c6)));
  /* 11fe4628 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4629 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe462b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe462d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe462f mov cx, word ptr [0x1200f1c2] */
  CX = (r16((uint32_t)(0x1200f1c2)));
  /* 11fe4636 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe463a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fe463d push eax */
  push32((uint32_t)(EAX));
  /* 11fe463e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4640 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe4642 call 0x11fe4850 */
  push32(0x11fe4647u); f_11fe4850();
  /* 11fe4647 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe464a:;
  /* 11fe464a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe464c mov cx, word ptr [0x1200f16c] */
  CX = (r16((uint32_t)(0x1200f16c)));
  /* 11fe4653 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe4655 jne 0x11fe46b2 */
  if (!C.zf) goto L_11fe46b2;
  /* 11fe4657 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4659 mov dx, word ptr [0x1200f17a] */
  DX = (r16((uint32_t)(0x1200f17a)));
  /* 11fe4660 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4661 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4663 mov ax, word ptr [0x1200f178] */
  AX = (r16((uint32_t)(0x1200f178)));
  /* 11fe4669 push eax */
  push32((uint32_t)(EAX));
  /* 11fe466a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe466c mov cx, word ptr [0x1200f176] */
  CX = (r16((uint32_t)(0x1200f176)));
  /* 11fe4673 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4674 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4676 mov dx, word ptr [0x1200f174] */
  DX = (r16((uint32_t)(0x1200f174)));
  /* 11fe467d push edx */
  push32((uint32_t)(EDX));
  /* 11fe467e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4682 mov ax, word ptr [0x1200f170] */
  AX = (r16((uint32_t)(0x1200f170)));
  /* 11fe4688 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4689 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe468b mov cx, word ptr [0x1200f172] */
  CX = (r16((uint32_t)(0x1200f172)));
  /* 11fe4692 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4693 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4695 mov dx, word ptr [0x1200f16e] */
  DX = (r16((uint32_t)(0x1200f16e)));
  /* 11fe469c push edx */
  push32((uint32_t)(EDX));
  /* 11fe469d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe46a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fe46a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe46a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe46a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe46a8 call 0x11fe4850 */
  push32(0x11fe46adu); f_11fe4850();
  /* 11fe46ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe46b0 jmp 0x11fe4703 */
  goto L_11fe4703;
L_11fe46b2:;
  /* 11fe46b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe46b4 mov dx, word ptr [0x1200f17a] */
  DX = (r16((uint32_t)(0x1200f17a)));
  /* 11fe46bb push edx */
  push32((uint32_t)(EDX));
  /* 11fe46bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe46be mov ax, word ptr [0x1200f178] */
  AX = (r16((uint32_t)(0x1200f178)));
  /* 11fe46c4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe46c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe46c7 mov cx, word ptr [0x1200f176] */
  CX = (r16((uint32_t)(0x1200f176)));
  /* 11fe46ce push ecx */
  push32((uint32_t)(ECX));
  /* 11fe46cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe46d1 mov dx, word ptr [0x1200f174] */
  DX = (r16((uint32_t)(0x1200f174)));
  /* 11fe46d8 push edx */
  push32((uint32_t)(EDX));
  /* 11fe46d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe46db mov ax, word ptr [0x1200f172] */
  AX = (r16((uint32_t)(0x1200f172)));
  /* 11fe46e1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe46e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe46e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe46e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe46e8 mov cx, word ptr [0x1200f16e] */
  CX = (r16((uint32_t)(0x1200f16e)));
  /* 11fe46ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fe46f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe46f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fe46f6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe46f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe46f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe46fb call 0x11fe4850 */
  push32(0x11fe4700u); f_11fe4850();
  /* 11fe4700 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe4703:;
  /* 11fe4703 jmp 0x11fe474b */
  goto L_11fe474b;
L_11fe4705:;
  /* 11fe4705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4707 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4709 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe470b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe470d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe470f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4711 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe4713 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe4715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4718 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fe471b push edx */
  push32((uint32_t)(EDX));
  /* 11fe471c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe471e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe4720 call 0x11fe4850 */
  push32(0x11fe4725u); f_11fe4850();
  /* 11fe4725 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4728 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe472a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe472c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe472e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe4730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4734 push 5 */
  push32((uint32_t)(0x5u));
  /* 11fe4736 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fe4738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe473b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fe473e push ecx */
  push32((uint32_t)(ECX));
  /* 11fe473f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe4741 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4743 call 0x11fe4850 */
  push32(0x11fe4748u); f_11fe4850();
  /* 11fe4748 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe474b:;
  /* 11fe474b mov edx, dword ptr [0x1200d364] */
  EDX = (r32((uint32_t)(0x1200d364)));
  /* 11fe4751 cmp edx, dword ptr [0x1200d374] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4757 jge 0x11fe47a4 */
  if ((C.sf==C.of)) goto L_11fe47a4;
  /* 11fe4759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe475c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fe475f cmp ecx, dword ptr [0x1200d364] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4765 jl 0x11fe4775 */
  if ((C.sf!=C.of)) goto L_11fe4775;
  /* 11fe4767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe476a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fe476d cmp eax, dword ptr [0x1200d374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4773 jle 0x11fe477c */
  if ((C.zf||C.sf!=C.of)) goto L_11fe477c;
L_11fe4775:;
  /* 11fe4775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4777 jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe477c:;
  /* 11fe477c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe477f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fe4782 cmp edx, dword ptr [0x1200d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4788 jle 0x11fe47a2 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe47a2;
  /* 11fe478a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe478d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fe4790 cmp ecx, dword ptr [0x1200d374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4796 jge 0x11fe47a2 */
  if ((C.sf==C.of)) goto L_11fe47a2;
  /* 11fe4798 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe479d jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe47a2:;
  /* 11fe47a2 jmp 0x11fe47e7 */
  goto L_11fe47e7;
L_11fe47a4:;
  /* 11fe47a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fe47aa cmp eax, dword ptr [0x1200d374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe47b0 jl 0x11fe47c0 */
  if ((C.sf!=C.of)) goto L_11fe47c0;
  /* 11fe47b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fe47b8 cmp edx, dword ptr [0x1200d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe47be jle 0x11fe47c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe47c7;
L_11fe47c0:;
  /* 11fe47c0 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe47c5 jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe47c7:;
  /* 11fe47c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fe47cd cmp ecx, dword ptr [0x1200d374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe47d3 jle 0x11fe47e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe47e7;
  /* 11fe47d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fe47db cmp eax, dword ptr [0x1200d364] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe47e1 jge 0x11fe47e7 */
  if ((C.sf==C.of)) goto L_11fe47e7;
  /* 11fe47e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe47e5 jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe47e7:;
  /* 11fe47e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe47ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe47f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe47f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe47f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe47fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe47fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4803 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4805 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe480b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe480e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4811 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fe4814 cmp edx, dword ptr [0x1200d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe481a jne 0x11fe4832 */
  if (!C.zf) goto L_11fe4832;
  /* 11fe481c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe481f cmp eax, dword ptr [0x1200d368] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200d368))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4825 jl 0x11fe482e */
  if ((C.sf!=C.of)) goto L_11fe482e;
  /* 11fe4827 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe482c jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe482e:;
  /* 11fe482e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4830 jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe4832:;
  /* 11fe4832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4835 cmp ecx, dword ptr [0x1200d378] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200d378))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe483b jge 0x11fe4844 */
  if ((C.sf==C.of)) goto L_11fe4844;
  /* 11fe483d mov eax, 1 */
  EAX = (0x1u);
  /* 11fe4842 jmp 0x11fe4846 */
  goto L_11fe4846;
L_11fe4844:;
  /* 11fe4844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe4846:;
  /* 11fe4846 mov esp, ebp */
  ESP = (EBP);
  /* 11fe4848 pop ebp */
  EBP = (pop32());
  /* 11fe4849 ret  */
  ESPCHK(0x11fe4550u, _esp0);
  ESP += 4; return;
}

/* FUN_10014850 @ 0x11fe4850 (504 bytes, 145 insns) */
void f_11fe4850(void) {
  FTRACE(0x11fe4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4850 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4851 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4856 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe485a jne 0x11fe492c */
  if (!C.zf) goto L_11fe492c;
  /* 11fe4860 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe4863 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe4868 jne 0x11fe4879 */
  if (!C.zf) goto L_11fe4879;
  /* 11fe486a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe486d mov edx, dword ptr [ecx*4 + 0x1200d378] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200d378)));
  /* 11fe4874 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe4877 jmp 0x11fe4886 */
  goto L_11fe4886;
L_11fe4879:;
  /* 11fe4879 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe487c mov ecx, dword ptr [eax*4 + 0x1200d3ac] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200d3ac)));
  /* 11fe4883 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fe4886:;
  /* 11fe4886 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4889 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe488c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe488f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe4892 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4895 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe489b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe489e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe48a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe48a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe48a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11fe48a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11fe48ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe48ae mov ecx, 7 */
  ECX = (0x7u);
  /* 11fe48b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe48b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe48b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe48bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe48be jge 0x11fe48d9 */
  if ((C.sf==C.of)) goto L_11fe48d9;
  /* 11fe48c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe48c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe48c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe48c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe48cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe48cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe48d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe48d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe48d7 jmp 0x11fe48ed */
  goto L_11fe48ed;
L_11fe48d9:;
  /* 11fe48d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe48dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe48df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe48e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe48e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe48e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe48ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe48ed:;
  /* 11fe48ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe48f1 jne 0x11fe492a */
  if (!C.zf) goto L_11fe492a;
  /* 11fe48f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe48f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe48f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe48fb jne 0x11fe490c */
  if (!C.zf) goto L_11fe490c;
  /* 11fe48fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe4900 mov eax, dword ptr [edx*4 + 0x1200d37c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200d37c)));
  /* 11fe4907 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe490a jmp 0x11fe4919 */
  goto L_11fe4919;
L_11fe490c:;
  /* 11fe490c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe490f mov edx, dword ptr [ecx*4 + 0x1200d3b0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200d3b0)));
  /* 11fe4916 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fe4919:;
  /* 11fe4919 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe491c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe491f jle 0x11fe492a */
  if ((C.zf||C.sf!=C.of)) goto L_11fe492a;
  /* 11fe4921 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4924 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4927 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fe492a:;
  /* 11fe492a jmp 0x11fe4961 */
  goto L_11fe4961;
L_11fe492c:;
  /* 11fe492c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe492f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4932 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe4934 jne 0x11fe4945 */
  if (!C.zf) goto L_11fe4945;
  /* 11fe4936 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe4939 mov ecx, dword ptr [eax*4 + 0x1200d378] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200d378)));
  /* 11fe4940 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe4943 jmp 0x11fe4952 */
  goto L_11fe4952;
L_11fe4945:;
  /* 11fe4945 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe4948 mov eax, dword ptr [edx*4 + 0x1200d3ac] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200d3ac)));
  /* 11fe494f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11fe4952:;
  /* 11fe4952 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe4955 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe4958 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe495b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe495e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fe4961:;
  /* 11fe4961 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4965 jne 0x11fe49a1 */
  if (!C.zf) goto L_11fe49a1;
  /* 11fe4967 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe496a mov dword ptr [0x1200d364], eax */
  w32((uint32_t)(0x1200d364), (EAX));
  /* 11fe496f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fe4972 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4975 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe4978 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe497a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe497d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11fe4980 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4982 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4988 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11fe498b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe498d mov dword ptr [0x1200d368], ecx */
  w32((uint32_t)(0x1200d368), (ECX));
  /* 11fe4993 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe4996 mov dword ptr [0x1200d360], edx */
  w32((uint32_t)(0x1200d360), (EDX));
  /* 11fe499c jmp 0x11fe4a44 */
  goto L_11fe4a44;
L_11fe49a1:;
  /* 11fe49a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe49a4 mov dword ptr [0x1200d374], eax */
  w32((uint32_t)(0x1200d374), (EAX));
  /* 11fe49a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fe49ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe49af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe49b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe49b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe49b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11fe49ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe49bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe49c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11fe49c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe49c7 mov dword ptr [0x1200d378], ecx */
  w32((uint32_t)(0x1200d378), (ECX));
  /* 11fe49cd mov edx, dword ptr [0x1200d2d0] */
  EDX = (r32((uint32_t)(0x1200d2d0)));
  /* 11fe49d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe49d9 mov eax, dword ptr [0x1200d378] */
  EAX = (r32((uint32_t)(0x1200d378)));
  /* 11fe49de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe49e0 mov dword ptr [0x1200d378], eax */
  w32((uint32_t)(0x1200d378), (EAX));
  /* 11fe49e5 cmp dword ptr [0x1200d378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe49ec jge 0x11fe4a11 */
  if ((C.sf==C.of)) goto L_11fe4a11;
  /* 11fe49ee mov ecx, dword ptr [0x1200d378] */
  ECX = (r32((uint32_t)(0x1200d378)));
  /* 11fe49f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe49fa mov dword ptr [0x1200d378], ecx */
  w32((uint32_t)(0x1200d378), (ECX));
  /* 11fe4a00 mov edx, dword ptr [0x1200d374] */
  EDX = (r32((uint32_t)(0x1200d374)));
  /* 11fe4a06 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4a09 mov dword ptr [0x1200d374], edx */
  w32((uint32_t)(0x1200d374), (EDX));
  /* 11fe4a0f jmp 0x11fe4a3b */
  goto L_11fe4a3b;
L_11fe4a11:;
  /* 11fe4a11 cmp dword ptr [0x1200d378], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1200d378))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4a1b jl 0x11fe4a3b */
  if ((C.sf!=C.of)) goto L_11fe4a3b;
  /* 11fe4a1d mov eax, dword ptr [0x1200d378] */
  EAX = (r32((uint32_t)(0x1200d378)));
  /* 11fe4a22 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4a27 mov dword ptr [0x1200d378], eax */
  w32((uint32_t)(0x1200d378), (EAX));
  /* 11fe4a2c mov ecx, dword ptr [0x1200d374] */
  ECX = (r32((uint32_t)(0x1200d374)));
  /* 11fe4a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4a35 mov dword ptr [0x1200d374], ecx */
  w32((uint32_t)(0x1200d374), (ECX));
L_11fe4a3b:;
  /* 11fe4a3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe4a3e mov dword ptr [0x1200d370], edx */
  w32((uint32_t)(0x1200d370), (EDX));
L_11fe4a44:;
  /* 11fe4a44 mov esp, ebp */
  ESP = (EBP);
  /* 11fe4a46 pop ebp */
  EBP = (pop32());
  /* 11fe4a47 ret  */
  ESPCHK(0x11fe4850u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a50 @ 0x11fe4a50 (836 bytes, 238 insns) */
void f_11fe4a50(void) {
  FTRACE(0x11fe4a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4a51 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4a53 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4a56 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4a58 call 0x11fdb0c0 */
  push32(0x11fe4a5du); f_11fdb0c0();
  /* 11fe4a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4a63 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4a64 call 0x11fe4da0 */
  push32(0x11fe4a69u); f_11fe4da0();
  /* 11fe4a69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4a6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe4a6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4a72 cmp ecx, dword ptr [0x12010618] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4a78 jne 0x11fe4a8b */
  if (!C.zf) goto L_11fe4a8b;
  /* 11fe4a7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4a7c call 0x11fdb160 */
  push32(0x11fe4a81u); f_11fdb160();
  /* 11fe4a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4a86 jmp 0x11fe4d90 */
  goto L_11fe4d90;
L_11fe4a8b:;
  /* 11fe4a8b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4a8f jne 0x11fe4aac */
  if (!C.zf) goto L_11fe4aac;
  /* 11fe4a91 call 0x11fe4e80 */
  push32(0x11fe4a96u); f_11fe4e80();
  /* 11fe4a96 call 0x11fe4f00 */
  push32(0x11fe4a9bu); f_11fe4f00();
  /* 11fe4a9b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4a9d call 0x11fdb160 */
  push32(0x11fe4aa2u); f_11fdb160();
  /* 11fe4aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4aa7 jmp 0x11fe4d90 */
  goto L_11fe4d90;
L_11fe4aac:;
  /* 11fe4aac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe4ab3 jmp 0x11fe4abe */
  goto L_11fe4abe;
L_11fe4ab5:;
  /* 11fe4ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4ab8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4abb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe4abe:;
  /* 11fe4abe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4ac2 jae 0x11fe4c0f */
  if (!C.cf) goto L_11fe4c0f;
  /* 11fe4ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4acb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4ace mov ecx, dword ptr [eax + 0x1200d3f0] */
  ECX = (r32((uint32_t)(EAX + 0x1200d3f0)));
  /* 11fe4ad4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4ad7 jne 0x11fe4c0a */
  if (!C.zf) goto L_11fe4c0a;
  /* 11fe4add mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe4ae4 jmp 0x11fe4aef */
  goto L_11fe4aef;
L_11fe4ae6:;
  /* 11fe4ae6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4ae9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4aec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11fe4aef:;
  /* 11fe4aef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4af6 jae 0x11fe4b04 */
  if (!C.cf) goto L_11fe4b04;
  /* 11fe4af8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4afb mov byte ptr [eax + 0x120107a0], 0 */
  w8((uint32_t)(EAX + 0x120107a0), (0x0u));
  /* 11fe4b02 jmp 0x11fe4ae6 */
  goto L_11fe4ae6;
L_11fe4b04:;
  /* 11fe4b04 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe4b0b jmp 0x11fe4b16 */
  goto L_11fe4b16;
L_11fe4b0d:;
  /* 11fe4b0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4b10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4b13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fe4b16:;
  /* 11fe4b16 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4b1a jae 0x11fe4b97 */
  if (!C.cf) goto L_11fe4b97;
  /* 11fe4b1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4b1f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4b22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4b25 lea ecx, [edx + eax*8 + 0x1200d400] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1200d400));
  /* 11fe4b2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe4b2f jmp 0x11fe4b3a */
  goto L_11fe4b3a;
L_11fe4b31:;
  /* 11fe4b31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4b34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4b37 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fe4b3a:;
  /* 11fe4b3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4b3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe4b3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe4b41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe4b43 je 0x11fe4b92 */
  if (C.zf) goto L_11fe4b92;
  /* 11fe4b45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4b4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fe4b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe4b4f je 0x11fe4b92 */
  if (C.zf) goto L_11fe4b92;
  /* 11fe4b51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4b54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4b56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe4b58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe4b5b jmp 0x11fe4b66 */
  goto L_11fe4b66;
L_11fe4b5d:;
  /* 11fe4b5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4b60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4b63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fe4b66:;
  /* 11fe4b66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe4b69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4b6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11fe4b6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4b71 ja 0x11fe4b90 */
  if ((!C.cf&&!C.zf)) goto L_11fe4b90;
  /* 11fe4b73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4b76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4b79 mov dl, byte ptr [eax + 0x120107a1] */
  DL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fe4b7f or dl, byte ptr [ecx + 0x1200d3e8] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1200d3e8))); DL = (_r); fl_logic(_r,8); }
  /* 11fe4b85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4b88 mov byte ptr [eax + 0x120107a1], dl */
  w8((uint32_t)(EAX + 0x120107a1), (DL));
  /* 11fe4b8e jmp 0x11fe4b5d */
  goto L_11fe4b5d;
L_11fe4b90:;
  /* 11fe4b90 jmp 0x11fe4b31 */
  goto L_11fe4b31;
L_11fe4b92:;
  /* 11fe4b92 jmp 0x11fe4b0d */
  goto L_11fe4b0d;
L_11fe4b97:;
  /* 11fe4b97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4b9a mov dword ptr [0x12010618], ecx */
  w32((uint32_t)(0x12010618), (ECX));
  /* 11fe4ba0 mov dword ptr [0x1201069c], 1 */
  w32((uint32_t)(0x1201069c), (0x1u));
  /* 11fe4baa mov edx, dword ptr [0x12010618] */
  EDX = (r32((uint32_t)(0x12010618)));
  /* 11fe4bb0 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4bb1 call 0x11fe4e00 */
  push32(0x11fe4bb6u); f_11fe4e00();
  /* 11fe4bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4bb9 mov dword ptr [0x120108a4], eax */
  w32((uint32_t)(0x120108a4), (EAX));
  /* 11fe4bbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe4bc5 jmp 0x11fe4bd0 */
  goto L_11fe4bd0;
L_11fe4bc7:;
  /* 11fe4bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4bca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4bcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe4bd0:;
  /* 11fe4bd0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4bd4 jae 0x11fe4bf4 */
  if (!C.cf) goto L_11fe4bf4;
  /* 11fe4bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4bd9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe4bdc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4bdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4be2 mov cx, word ptr [ecx + eax*2 + 0x1200d3f4] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1200d3f4)));
  /* 11fe4bea mov word ptr [edx*2 + 0x12010690], cx */
  w16((uint32_t)(EDX*2 + 0x12010690), (CX));
  /* 11fe4bf2 jmp 0x11fe4bc7 */
  goto L_11fe4bc7;
L_11fe4bf4:;
  /* 11fe4bf4 call 0x11fe4f00 */
  push32(0x11fe4bf9u); f_11fe4f00();
  /* 11fe4bf9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4bfb call 0x11fdb160 */
  push32(0x11fe4c00u); f_11fdb160();
  /* 11fe4c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4c05 jmp 0x11fe4d90 */
  goto L_11fe4d90;
L_11fe4c0a:;
  /* 11fe4c0a jmp 0x11fe4ab5 */
  goto L_11fe4ab5;
L_11fe4c0f:;
  /* 11fe4c0f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11fe4c12 push edx */
  push32((uint32_t)(EDX));
  /* 11fe4c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4c16 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4c17 call dword ptr [0x12011384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011384))), 0x11fe4c1du);
  /* 11fe4c1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4c20 jne 0x11fe4d62 */
  if (!C.zf) goto L_11fe4d62;
  /* 11fe4c26 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe4c2d jmp 0x11fe4c38 */
  goto L_11fe4c38;
L_11fe4c2f:;
  /* 11fe4c2f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4c32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4c35 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11fe4c38:;
  /* 11fe4c38 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4c3f jae 0x11fe4c4d */
  if (!C.cf) goto L_11fe4c4d;
  /* 11fe4c41 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4c44 mov byte ptr [edx + 0x120107a0], 0 */
  w8((uint32_t)(EDX + 0x120107a0), (0x0u));
  /* 11fe4c4b jmp 0x11fe4c2f */
  goto L_11fe4c2f;
L_11fe4c4d:;
  /* 11fe4c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4c50 mov dword ptr [0x12010618], eax */
  w32((uint32_t)(0x12010618), (EAX));
  /* 11fe4c55 mov dword ptr [0x120108a4], 0 */
  w32((uint32_t)(0x120108a4), (0x0u));
  /* 11fe4c5f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4c63 jbe 0x11fe4d1e */
  if ((C.cf||C.zf)) goto L_11fe4d1e;
  /* 11fe4c69 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11fe4c6c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11fe4c6f jmp 0x11fe4c7a */
  goto L_11fe4c7a;
L_11fe4c71:;
  /* 11fe4c71 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe4c74 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4c77 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11fe4c7a:;
  /* 11fe4c7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe4c7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe4c7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe4c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe4c83 je 0x11fe4ccc */
  if (C.zf) goto L_11fe4ccc;
  /* 11fe4c85 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe4c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4c8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fe4c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe4c8f je 0x11fe4ccc */
  if (C.zf) goto L_11fe4ccc;
  /* 11fe4c91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe4c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4c96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe4c98 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe4c9b jmp 0x11fe4ca6 */
  goto L_11fe4ca6;
L_11fe4c9d:;
  /* 11fe4c9d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4ca0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4ca3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fe4ca6:;
  /* 11fe4ca6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe4ca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4cab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11fe4cae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4cb1 ja 0x11fe4cca */
  if ((!C.cf&&!C.zf)) goto L_11fe4cca;
  /* 11fe4cb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4cb6 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fe4cbc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11fe4cbf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4cc2 mov byte ptr [edx + 0x120107a1], cl */
  w8((uint32_t)(EDX + 0x120107a1), (CL));
  /* 11fe4cc8 jmp 0x11fe4c9d */
  goto L_11fe4c9d;
L_11fe4cca:;
  /* 11fe4cca jmp 0x11fe4c71 */
  goto L_11fe4c71;
L_11fe4ccc:;
  /* 11fe4ccc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11fe4cd3 jmp 0x11fe4cde */
  goto L_11fe4cde;
L_11fe4cd5:;
  /* 11fe4cd5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4cd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4cdb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fe4cde:;
  /* 11fe4cde cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4ce5 jae 0x11fe4cfe */
  if (!C.cf) goto L_11fe4cfe;
  /* 11fe4ce7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4cea mov dl, byte ptr [ecx + 0x120107a1] */
  DL = (r8((uint32_t)(ECX + 0x120107a1)));
  /* 11fe4cf0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11fe4cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe4cf6 mov byte ptr [eax + 0x120107a1], dl */
  w8((uint32_t)(EAX + 0x120107a1), (DL));
  /* 11fe4cfc jmp 0x11fe4cd5 */
  goto L_11fe4cd5;
L_11fe4cfe:;
  /* 11fe4cfe mov ecx, dword ptr [0x12010618] */
  ECX = (r32((uint32_t)(0x12010618)));
  /* 11fe4d04 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4d05 call 0x11fe4e00 */
  push32(0x11fe4d0au); f_11fe4e00();
  /* 11fe4d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4d0d mov dword ptr [0x120108a4], eax */
  w32((uint32_t)(0x120108a4), (EAX));
  /* 11fe4d12 mov dword ptr [0x1201069c], 1 */
  w32((uint32_t)(0x1201069c), (0x1u));
  /* 11fe4d1c jmp 0x11fe4d28 */
  goto L_11fe4d28;
L_11fe4d1e:;
  /* 11fe4d1e mov dword ptr [0x1201069c], 0 */
  w32((uint32_t)(0x1201069c), (0x0u));
L_11fe4d28:;
  /* 11fe4d28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe4d2f jmp 0x11fe4d3a */
  goto L_11fe4d3a;
L_11fe4d31:;
  /* 11fe4d31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4d34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4d37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fe4d3a:;
  /* 11fe4d3a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4d3e jae 0x11fe4d4f */
  if (!C.cf) goto L_11fe4d4f;
  /* 11fe4d40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe4d43 mov word ptr [eax*2 + 0x12010690], 0 */
  w16((uint32_t)(EAX*2 + 0x12010690), (0x0u));
  /* 11fe4d4d jmp 0x11fe4d31 */
  goto L_11fe4d31;
L_11fe4d4f:;
  /* 11fe4d4f call 0x11fe4f00 */
  push32(0x11fe4d54u); f_11fe4f00();
  /* 11fe4d54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4d56 call 0x11fdb160 */
  push32(0x11fe4d5bu); f_11fdb160();
  /* 11fe4d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4d5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4d60 jmp 0x11fe4d90 */
  goto L_11fe4d90;
L_11fe4d62:;
  /* 11fe4d62 cmp dword ptr [0x1200f1dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4d69 je 0x11fe4d83 */
  if (C.zf) goto L_11fe4d83;
  /* 11fe4d6b call 0x11fe4e80 */
  push32(0x11fe4d70u); f_11fe4e80();
  /* 11fe4d70 call 0x11fe4f00 */
  push32(0x11fe4d75u); f_11fe4f00();
  /* 11fe4d75 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4d77 call 0x11fdb160 */
  push32(0x11fe4d7cu); f_11fdb160();
  /* 11fe4d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe4d81 jmp 0x11fe4d90 */
  goto L_11fe4d90;
L_11fe4d83:;
  /* 11fe4d83 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fe4d85 call 0x11fdb160 */
  push32(0x11fe4d8au); f_11fdb160();
  /* 11fe4d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4d8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fe4d90:;
  /* 11fe4d90 mov esp, ebp */
  ESP = (EBP);
  /* 11fe4d92 pop ebp */
  EBP = (pop32());
  /* 11fe4d93 ret  */
  ESPCHK(0x11fe4a50u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11fe4da0 (89 bytes, 21 insns) */
void f_11fe4da0(void) {
  FTRACE(0x11fe4da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4da1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4da3 mov dword ptr [0x1200f1dc], 0 */
  w32((uint32_t)(0x1200f1dc), (0x0u));
  /* 11fe4dad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4db1 jne 0x11fe4dc5 */
  if (!C.zf) goto L_11fe4dc5;
  /* 11fe4db3 mov dword ptr [0x1200f1dc], 1 */
  w32((uint32_t)(0x1200f1dc), (0x1u));
  /* 11fe4dbd call dword ptr [0x12011370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011370))), 0x11fe4dc3u);
  /* 11fe4dc3 jmp 0x11fe4df7 */
  goto L_11fe4df7;
L_11fe4dc5:;
  /* 11fe4dc5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4dc9 jne 0x11fe4ddd */
  if (!C.zf) goto L_11fe4ddd;
  /* 11fe4dcb mov dword ptr [0x1200f1dc], 1 */
  w32((uint32_t)(0x1200f1dc), (0x1u));
  /* 11fe4dd5 call dword ptr [0x12011374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011374))), 0x11fe4ddbu);
  /* 11fe4ddb jmp 0x11fe4df7 */
  goto L_11fe4df7;
L_11fe4ddd:;
  /* 11fe4ddd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4de1 jne 0x11fe4df4 */
  if (!C.zf) goto L_11fe4df4;
  /* 11fe4de3 mov dword ptr [0x1200f1dc], 1 */
  w32((uint32_t)(0x1200f1dc), (0x1u));
  /* 11fe4ded mov eax, dword ptr [0x1200f208] */
  EAX = (r32((uint32_t)(0x1200f208)));
  /* 11fe4df2 jmp 0x11fe4df7 */
  goto L_11fe4df7;
L_11fe4df4:;
  /* 11fe4df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11fe4df7:;
  /* 11fe4df7 pop ebp */
  EBP = (pop32());
  /* 11fe4df8 ret  */
  ESPCHK(0x11fe4da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e00 @ 0x11fe4e00 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11fe4e00(void) {
  FTRACE(0x11fe4e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4e01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe4e07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe4e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4e0d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4e13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe4e16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4e1a ja 0x11fe4e4a */
  if ((!C.cf&&!C.zf)) goto L_11fe4e4a;
  /* 11fe4e1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4e1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4e21 mov dl, byte ptr [eax + 0x11fe4e64] */
  DL = (r8((uint32_t)(EAX + 0x11fe4e64)));
  /* 11fe4e27 jmp dword ptr [edx*4 + 0x11fe4e50] */
  switch (EDX) {
    case 0: goto L_11fe4e2e;
    case 1: goto L_11fe4e35;
    case 2: goto L_11fe4e3c;
    case 3: goto L_11fe4e43;
    case 4: goto L_11fe4e4a;
    default: x86_unimpl("switch@0x11fe4e27 out of table"); return;
  }
L_11fe4e2e:;
  /* 11fe4e2e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11fe4e33 jmp 0x11fe4e4c */
  goto L_11fe4e4c;
L_11fe4e35:;
  /* 11fe4e35 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11fe4e3a jmp 0x11fe4e4c */
  goto L_11fe4e4c;
L_11fe4e3c:;
  /* 11fe4e3c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11fe4e41 jmp 0x11fe4e4c */
  goto L_11fe4e4c;
L_11fe4e43:;
  /* 11fe4e43 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11fe4e48 jmp 0x11fe4e4c */
  goto L_11fe4e4c;
L_11fe4e4a:;
  /* 11fe4e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe4e4c:;
  /* 11fe4e4c mov esp, ebp */
  ESP = (EBP);
  /* 11fe4e4e pop ebp */
  EBP = (pop32());
  /* 11fe4e4f ret  */
  ESPCHK(0x11fe4e00u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11fe4e80 (116 bytes, 29 insns) */
void f_11fe4e80(void) {
  FTRACE(0x11fe4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4e81 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe4e8b jmp 0x11fe4e96 */
  goto L_11fe4e96;
L_11fe4e8d:;
  /* 11fe4e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4e90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4e93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe4e96:;
  /* 11fe4e96 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4e9d jge 0x11fe4eab */
  if ((C.sf==C.of)) goto L_11fe4eab;
  /* 11fe4e9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4ea2 mov byte ptr [ecx + 0x120107a0], 0 */
  w8((uint32_t)(ECX + 0x120107a0), (0x0u));
  /* 11fe4ea9 jmp 0x11fe4e8d */
  goto L_11fe4e8d;
L_11fe4eab:;
  /* 11fe4eab mov dword ptr [0x12010618], 0 */
  w32((uint32_t)(0x12010618), (0x0u));
  /* 11fe4eb5 mov dword ptr [0x1201069c], 0 */
  w32((uint32_t)(0x1201069c), (0x0u));
  /* 11fe4ebf mov dword ptr [0x120108a4], 0 */
  w32((uint32_t)(0x120108a4), (0x0u));
  /* 11fe4ec9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe4ed0 jmp 0x11fe4edb */
  goto L_11fe4edb;
L_11fe4ed2:;
  /* 11fe4ed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4ed5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4ed8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe4edb:;
  /* 11fe4edb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4edf jge 0x11fe4ef0 */
  if ((C.sf==C.of)) goto L_11fe4ef0;
  /* 11fe4ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4ee4 mov word ptr [eax*2 + 0x12010690], 0 */
  w16((uint32_t)(EAX*2 + 0x12010690), (0x0u));
  /* 11fe4eee jmp 0x11fe4ed2 */
  goto L_11fe4ed2;
L_11fe4ef0:;
  /* 11fe4ef0 mov esp, ebp */
  ESP = (EBP);
  /* 11fe4ef2 pop ebp */
  EBP = (pop32());
  /* 11fe4ef3 ret  */
  ESPCHK(0x11fe4e80u, _esp0);
  ESP += 4; return;
}

